#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Apr 18 19:44:41 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-1.307692,-0.6927019,1.25641,58.36925);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hmc__4->SetBinContent(0,4.481389);
   hmc__4->SetBinContent(1,9.077187);
   hmc__4->SetBinContent(2,7.456209);
   hmc__4->SetBinContent(3,6.395641);
   hmc__4->SetBinContent(4,6.06855);
   hmc__4->SetBinContent(5,8.047169);
   hmc__4->SetBinContent(6,7.268261);
   hmc__4->SetBinContent(7,7.375147);
   hmc__4->SetBinContent(8,6.755692);
   hmc__4->SetBinContent(9,7.968985);
   hmc__4->SetBinContent(10,9.754447);
   hmc__4->SetBinContent(11,9.206747);
   hmc__4->SetBinContent(12,10.81915);
   hmc__4->SetBinContent(13,11.47894);
   hmc__4->SetBinContent(14,10.61825);
   hmc__4->SetBinContent(15,13.59582);
   hmc__4->SetBinContent(16,15.06684);
   hmc__4->SetBinContent(17,19.22783);
   hmc__4->SetBinContent(18,19.45412);
   hmc__4->SetBinContent(19,23.54306);
   hmc__4->SetBinContent(20,34.63509);
   hmc__4->SetBinError(0,0.5469913);
   hmc__4->SetBinError(1,3.631567);
   hmc__4->SetBinError(2,2.72239);
   hmc__4->SetBinError(3,2.746776);
   hmc__4->SetBinError(4,2.540663);
   hmc__4->SetBinError(5,3.059533);
   hmc__4->SetBinError(6,2.716884);
   hmc__4->SetBinError(7,3.805359);
   hmc__4->SetBinError(8,2.377545);
   hmc__4->SetBinError(9,3.174023);
   hmc__4->SetBinError(10,3.427478);
   hmc__4->SetBinError(11,3.457024);
   hmc__4->SetBinError(12,3.815556);
   hmc__4->SetBinError(13,3.960612);
   hmc__4->SetBinError(14,3.888179);
   hmc__4->SetBinError(15,4.431046);
   hmc__4->SetBinError(16,5.460153);
   hmc__4->SetBinError(17,7.104986);
   hmc__4->SetBinError(18,6.17135);
   hmc__4->SetBinError(19,9.061221);
   hmc__4->SetBinError(20,9.552939);
   hmc__4->SetBinError(21,0.125509);
   hmc__4->SetMinimum(-0.6927019);
   hmc__4->SetMaximum(55.41615);
   hmc__4->SetEntries(244.8988);
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
   hs2_stack_2->SetMaximum(36.36684);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(0,0.06195629);
   hbadmatch_stack_1->SetBinContent(1,0.1793067);
   hbadmatch_stack_1->SetBinContent(2,0.0908573);
   hbadmatch_stack_1->SetBinContent(3,0.02550039);
   hbadmatch_stack_1->SetBinContent(4,0.1985525);
   hbadmatch_stack_1->SetBinContent(5,0.149413);
   hbadmatch_stack_1->SetBinContent(6,0.2113693);
   hbadmatch_stack_1->SetBinContent(7,7.363834e-06);
   hbadmatch_stack_1->SetBinContent(8,0.288428);
   hbadmatch_stack_1->SetBinContent(9,0.2002021);
   hbadmatch_stack_1->SetBinContent(10,0.1662662);
   hbadmatch_stack_1->SetBinContent(11,0.1578628);
   hbadmatch_stack_1->SetBinContent(12,0.2383573);
   hbadmatch_stack_1->SetBinContent(13,0.583353);
   hbadmatch_stack_1->SetBinContent(14,0.1129571);
   hbadmatch_stack_1->SetBinContent(15,0.02785167);
   hbadmatch_stack_1->SetBinContent(16,0.2473246);
   hbadmatch_stack_1->SetBinContent(17,0.3453142);
   hbadmatch_stack_1->SetBinContent(18,0.1748146);
   hbadmatch_stack_1->SetBinContent(19,0.2836269);
   hbadmatch_stack_1->SetBinContent(20,0.4484216);
   hbadmatch_stack_1->SetBinError(0,0.06195629);
   hbadmatch_stack_1->SetBinError(1,0.09197155);
   hbadmatch_stack_1->SetBinError(2,0.06528398);
   hbadmatch_stack_1->SetBinError(3,0.0180315);
   hbadmatch_stack_1->SetBinError(4,0.1151012);
   hbadmatch_stack_1->SetBinError(5,0.08945557);
   hbadmatch_stack_1->SetBinError(6,0.1088158);
   hbadmatch_stack_1->SetBinError(7,7.363834e-06);
   hbadmatch_stack_1->SetBinError(8,0.1327524);
   hbadmatch_stack_1->SetBinError(9,0.1082644);
   hbadmatch_stack_1->SetBinError(10,0.1003024);
   hbadmatch_stack_1->SetBinError(11,0.08516888);
   hbadmatch_stack_1->SetBinError(12,0.1092926);
   hbadmatch_stack_1->SetBinError(13,0.3767919);
   hbadmatch_stack_1->SetBinError(14,0.0669989);
   hbadmatch_stack_1->SetBinError(15,0.01976416);
   hbadmatch_stack_1->SetBinError(16,0.1149271);
   hbadmatch_stack_1->SetBinError(17,0.1325015);
   hbadmatch_stack_1->SetBinError(18,0.07407123);
   hbadmatch_stack_1->SetBinError(19,0.1306218);
   hbadmatch_stack_1->SetBinError(20,0.1594344);
   hbadmatch_stack_1->SetEntries(114);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(0,0.4839872);
   hext_stack_2->SetBinContent(1,0.2481285);
   hext_stack_2->SetBinContent(2,0.08588897);
   hext_stack_2->SetBinContent(3,0.03680956);
   hext_stack_2->SetBinContent(4,0.2481285);
   hext_stack_2->SetBinContent(5,0.4471776);
   hext_stack_2->SetBinContent(6,0.8820854);
   hext_stack_2->SetBinContent(7,0.2849381);
   hext_stack_2->SetBinContent(8,0.3217476);
   hext_stack_2->SetBinContent(9,0.5698761);
   hext_stack_2->SetBinContent(10,1.280184);
   hext_stack_2->SetBinContent(11,0.08588897);
   hext_stack_2->SetBinContent(12,0.8698155);
   hext_stack_2->SetBinContent(13,0.9557045);
   hext_stack_2->SetBinContent(14,0.2849381);
   hext_stack_2->SetBinContent(15,1.117944);
   hext_stack_2->SetBinContent(16,1.540582);
   hext_stack_2->SetBinContent(17,0.6953062);
   hext_stack_2->SetBinContent(18,0.707576);
   hext_stack_2->SetBinContent(19,0.5085269);
   hext_stack_2->SetBinContent(20,1.366073);
   hext_stack_2->SetBinError(0,0.2833636);
   hext_stack_2->SetBinError(1,0.2005561);
   hext_stack_2->SetBinError(2,0.03246298);
   hext_stack_2->SetBinError(3,0.02125201);
   hext_stack_2->SetBinError(4,0.2005561);
   hext_stack_2->SetBinError(5,0.2825656);
   hext_stack_2->SetBinError(6,0.3994196);
   hext_stack_2->SetBinError(7,0.2016789);
   hext_stack_2->SetBinError(8,0.2027956);
   hext_stack_2->SetBinError(9,0.2852171);
   hext_stack_2->SetBinError(10,0.4886483);
   hext_stack_2->SetBinError(11,0.03246298);
   hext_stack_2->SetBinError(12,0.3992311);
   hext_stack_2->SetBinError(13,0.4005488);
   hext_stack_2->SetBinError(14,0.2016789);
   hext_stack_2->SetBinError(15,0.4467754);
   hext_stack_2->SetBinError(16,0.5283469);
   hext_stack_2->SetBinError(17,0.3465055);
   hext_stack_2->SetBinError(18,0.3467226);
   hext_stack_2->SetBinError(19,0.2838944);
   hext_stack_2->SetBinError(20,0.4897254);
   hext_stack_2->SetEntries(224);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(0,0.1035039);
   hdirt_stack_3->SetBinContent(1,0.05365718);
   hdirt_stack_3->SetBinContent(2,0.06123757);
   hdirt_stack_3->SetBinContent(3,0.1326272);
   hdirt_stack_3->SetBinContent(4,0.008219617);
   hdirt_stack_3->SetBinContent(5,0.04420907);
   hdirt_stack_3->SetBinContent(6,0.01643923);
   hdirt_stack_3->SetBinContent(7,0.08841814);
   hdirt_stack_3->SetBinContent(10,0.008219617);
   hdirt_stack_3->SetBinContent(12,0.3225342);
   hdirt_stack_3->SetBinContent(13,0.05288891);
   hdirt_stack_3->SetBinContent(14,0.05079194);
   hdirt_stack_3->SetBinContent(15,0.008219617);
   hdirt_stack_3->SetBinContent(16,0.008219617);
   hdirt_stack_3->SetBinContent(17,0.02622191);
   hdirt_stack_3->SetBinContent(18,0.07870741);
   hdirt_stack_3->SetBinContent(19,0.01643923);
   hdirt_stack_3->SetBinContent(20,0.2144);
   hdirt_stack_3->SetBinError(0,0.06804908);
   hdirt_stack_3->SetBinError(1,0.0452074);
   hdirt_stack_3->SetBinError(2,0.05355659);
   hdirt_stack_3->SetBinError(3,0.07657235);
   hdirt_stack_3->SetBinError(4,0.008219618);
   hdirt_stack_3->SetBinError(5,0.04420907);
   hdirt_stack_3->SetBinError(6,0.01162429);
   hdirt_stack_3->SetBinError(7,0.06252107);
   hdirt_stack_3->SetBinError(10,0.008219618);
   hdirt_stack_3->SetBinError(12,0.2982154);
   hdirt_stack_3->SetBinError(13,0.05288891);
   hdirt_stack_3->SetBinError(14,0.05079194);
   hdirt_stack_3->SetBinError(15,0.008219618);
   hdirt_stack_3->SetBinError(16,0.008219618);
   hdirt_stack_3->SetBinError(17,0.01519293);
   hdirt_stack_3->SetBinError(18,0.04747572);
   hdirt_stack_3->SetBinError(19,0.01162429);
   hdirt_stack_3->SetBinError(20,0.1000878);
   hdirt_stack_3->SetEntries(43);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(0,0.1749134);
   houtFV_stack_4->SetBinContent(1,0.4467654);
   houtFV_stack_4->SetBinContent(2,0.2113693);
   houtFV_stack_4->SetBinContent(3,0.2241195);
   houtFV_stack_4->SetBinContent(4,0.2004138);
   houtFV_stack_4->SetBinContent(5,0.3480321);
   houtFV_stack_4->SetBinContent(6,0.2241195);
   houtFV_stack_4->SetBinContent(7,0.2605754);
   houtFV_stack_4->SetBinContent(8,0.2276041);
   houtFV_stack_4->SetBinContent(9,0.4115464);
   houtFV_stack_4->SetBinContent(10,0.2605754);
   houtFV_stack_4->SetBinContent(11,0.4867074);
   houtFV_stack_4->SetBinContent(12,0.6374421);
   houtFV_stack_4->SetBinContent(13,0.3115761);
   houtFV_stack_4->SetBinContent(14,0.4059244);
   houtFV_stack_4->SetBinContent(15,0.4227385);
   houtFV_stack_4->SetBinContent(16,0.476208);
   houtFV_stack_4->SetBinContent(17,0.9495688);
   houtFV_stack_4->SetBinContent(18,0.7580204);
   houtFV_stack_4->SetBinContent(19,1.005846);
   houtFV_stack_4->SetBinContent(20,0.6231523);
   houtFV_stack_4->SetBinError(0,0.09125478);
   houtFV_stack_4->SetBinError(1,0.1536095);
   houtFV_stack_4->SetBinError(2,0.1088158);
   houtFV_stack_4->SetBinError(3,0.1095603);
   houtFV_stack_4->SetBinError(4,0.09301919);
   houtFV_stack_4->SetBinError(5,0.1402876);
   houtFV_stack_4->SetBinError(6,0.1095603);
   houtFV_stack_4->SetBinError(7,0.1245668);
   houtFV_stack_4->SetBinError(8,0.1100202);
   houtFV_stack_4->SetBinError(9,0.1534971);
   houtFV_stack_4->SetBinError(10,0.1245668);
   houtFV_stack_4->SetBinError(11,0.170761);
   houtFV_stack_4->SetBinError(12,0.2020305);
   houtFV_stack_4->SetBinError(13,0.1271502);
   houtFV_stack_4->SetBinError(14,0.1432855);
   houtFV_stack_4->SetBinError(15,0.1538888);
   houtFV_stack_4->SetBinError(16,0.1562084);
   houtFV_stack_4->SetBinError(17,0.2349214);
   houtFV_stack_4->SetBinError(18,0.2078456);
   houtFV_stack_4->SetBinError(19,0.2419796);
   houtFV_stack_4->SetBinError(20,0.1798175);
   houtFV_stack_4->SetEntries(224);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hNCpi0inFV_stack_5->SetBinContent(0,2.773301);
   hNCpi0inFV_stack_5->SetBinContent(1,4.976245);
   hNCpi0inFV_stack_5->SetBinContent(2,4.269225);
   hNCpi0inFV_stack_5->SetBinContent(3,4.045106);
   hNCpi0inFV_stack_5->SetBinContent(4,3.560411);
   hNCpi0inFV_stack_5->SetBinContent(5,4.540756);
   hNCpi0inFV_stack_5->SetBinContent(6,3.80087);
   hNCpi0inFV_stack_5->SetBinContent(7,3.981355);
   hNCpi0inFV_stack_5->SetBinContent(8,3.436465);
   hNCpi0inFV_stack_5->SetBinContent(9,4.637187);
   hNCpi0inFV_stack_5->SetBinContent(10,5.417118);
   hNCpi0inFV_stack_5->SetBinContent(11,5.33325);
   hNCpi0inFV_stack_5->SetBinContent(12,5.894446);
   hNCpi0inFV_stack_5->SetBinContent(13,6.703655);
   hNCpi0inFV_stack_5->SetBinContent(14,6.373757);
   hNCpi0inFV_stack_5->SetBinContent(15,8.523906);
   hNCpi0inFV_stack_5->SetBinContent(16,9.394883);
   hNCpi0inFV_stack_5->SetBinContent(17,11.57233);
   hNCpi0inFV_stack_5->SetBinContent(18,12.18116);
   hNCpi0inFV_stack_5->SetBinContent(19,15.1087);
   hNCpi0inFV_stack_5->SetBinContent(20,22.2681);
   hNCpi0inFV_stack_5->SetBinError(0,0.3927551);
   hNCpi0inFV_stack_5->SetBinError(1,0.5232622);
   hNCpi0inFV_stack_5->SetBinError(2,0.4808886);
   hNCpi0inFV_stack_5->SetBinError(3,0.4682418);
   hNCpi0inFV_stack_5->SetBinError(4,0.4378699);
   hNCpi0inFV_stack_5->SetBinError(5,0.499959);
   hNCpi0inFV_stack_5->SetBinError(6,0.4447972);
   hNCpi0inFV_stack_5->SetBinError(7,0.467373);
   hNCpi0inFV_stack_5->SetBinError(8,0.4109392);
   hNCpi0inFV_stack_5->SetBinError(9,0.4888702);
   hNCpi0inFV_stack_5->SetBinError(10,0.5371876);
   hNCpi0inFV_stack_5->SetBinError(11,0.5275938);
   hNCpi0inFV_stack_5->SetBinError(12,0.5539413);
   hNCpi0inFV_stack_5->SetBinError(13,0.609954);
   hNCpi0inFV_stack_5->SetBinError(14,0.5860449);
   hNCpi0inFV_stack_5->SetBinError(15,0.6821809);
   hNCpi0inFV_stack_5->SetBinError(16,0.7162817);
   hNCpi0inFV_stack_5->SetBinError(17,0.7951611);
   hNCpi0inFV_stack_5->SetBinError(18,0.8189989);
   hNCpi0inFV_stack_5->SetBinError(19,0.8974792);
   hNCpi0inFV_stack_5->SetBinError(20,1.097546);
   hNCpi0inFV_stack_5->SetEntries(3912);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_6->SetBinContent(0,0.3480321);
   hCCpi0inFV_stack_6->SetBinContent(1,1.734537);
   hCCpi0inFV_stack_6->SetBinContent(2,1.421218);
   hCCpi0inFV_stack_6->SetBinContent(3,1.049892);
   hCCpi0inFV_stack_6->SetBinContent(4,0.99489);
   hCCpi0inFV_stack_6->SetBinContent(5,1.055052);
   hCCpi0inFV_stack_6->SetBinContent(6,1.169803);
   hCCpi0inFV_stack_6->SetBinContent(7,1.291921);
   hCCpi0inFV_stack_6->SetBinContent(8,1.144303);
   hCCpi0inFV_stack_6->SetBinContent(9,0.881933);
   hCCpi0inFV_stack_6->SetBinContent(10,1.466924);
   hCCpi0inFV_stack_6->SetBinContent(11,1.778411);
   hCCpi0inFV_stack_6->SetBinContent(12,1.210383);
   hCCpi0inFV_stack_6->SetBinContent(13,1.209849);
   hCCpi0inFV_stack_6->SetBinContent(14,1.571824);
   hCCpi0inFV_stack_6->SetBinContent(15,1.75291);
   hCCpi0inFV_stack_6->SetBinContent(16,1.534175);
   hCCpi0inFV_stack_6->SetBinContent(17,2.6243);
   hCCpi0inFV_stack_6->SetBinContent(18,3.639827);
   hCCpi0inFV_stack_6->SetBinContent(19,4.129334);
   hCCpi0inFV_stack_6->SetBinContent(20,6.079981);
   hCCpi0inFV_stack_6->SetBinError(0,0.1402876);
   hCCpi0inFV_stack_6->SetBinError(1,0.3169887);
   hCCpi0inFV_stack_6->SetBinError(2,0.2701779);
   hCCpi0inFV_stack_6->SetBinError(3,0.2369264);
   hCCpi0inFV_stack_6->SetBinError(4,0.2352994);
   hCCpi0inFV_stack_6->SetBinError(5,0.2494597);
   hCCpi0inFV_stack_6->SetBinError(6,0.2523752);
   hCCpi0inFV_stack_6->SetBinError(7,0.2727566);
   hCCpi0inFV_stack_6->SetBinError(8,0.2517303);
   hCCpi0inFV_stack_6->SetBinError(9,0.2255592);
   hCCpi0inFV_stack_6->SetBinError(10,0.2903738);
   hCCpi0inFV_stack_6->SetBinError(11,0.314469);
   hCCpi0inFV_stack_6->SetBinError(12,0.2534675);
   hCCpi0inFV_stack_6->SetBinError(13,0.2472958);
   hCCpi0inFV_stack_6->SetBinError(14,0.2876769);
   hCCpi0inFV_stack_6->SetBinError(15,0.3139516);
   hCCpi0inFV_stack_6->SetBinError(16,0.2783612);
   hCCpi0inFV_stack_6->SetBinError(17,0.3704662);
   hCCpi0inFV_stack_6->SetBinError(18,0.4540496);
   hCCpi0inFV_stack_6->SetBinError(19,0.4768526);
   hCCpi0inFV_stack_6->SetBinError(20,0.5712816);
   hCCpi0inFV_stack_6->SetEntries(976);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_7->SetBinContent(0,0.3862826);
   hNCinFV_stack_7->SetBinContent(1,0.8217714);
   hNCinFV_stack_7->SetBinContent(2,0.5229454);
   hNCinFV_stack_7->SetBinContent(3,0.497445);
   hNCinFV_stack_7->SetBinContent(4,0.4227385);
   hNCinFV_stack_7->SetBinContent(5,0.3370765);
   hNCinFV_stack_7->SetBinContent(6,0.1129571);
   hNCinFV_stack_7->SetBinContent(7,0.6213576);
   hNCinFV_stack_7->SetBinContent(8,0.1858689);
   hNCinFV_stack_7->SetBinContent(9,0.4737393);
   hNCinFV_stack_7->SetBinContent(10,0.3370765);
   hNCinFV_stack_7->SetBinContent(11,0.2113693);
   hNCinFV_stack_7->SetBinContent(12,0.3115761);
   hNCinFV_stack_7->SetBinContent(13,0.2496199);
   hNCinFV_stack_7->SetBinContent(14,0.4099883);
   hNCinFV_stack_7->SetBinContent(15,0.5739462);
   hNCinFV_stack_7->SetBinContent(16,0.7215645);
   hNCinFV_stack_7->SetBinContent(17,1.044096);
   hNCinFV_stack_7->SetBinContent(18,1.056846);
   hNCinFV_stack_7->SetBinContent(19,1.630792);
   hNCinFV_stack_7->SetBinContent(20,1.980619);
   hNCinFV_stack_7->SetBinError(0,0.1420152);
   hNCinFV_stack_7->SetBinError(1,0.2097919);
   hNCinFV_stack_7->SetBinError(2,0.167356);
   hNCinFV_stack_7->SetBinError(3,0.1663818);
   hNCinFV_stack_7->SetBinError(4,0.1538888);
   hNCinFV_stack_7->SetBinError(5,0.1284224);
   hNCinFV_stack_7->SetBinError(6,0.0669989);
   hNCinFV_stack_7->SetBinError(7,0.1880427);
   hNCinFV_stack_7->SetBinError(8,0.1073114);
   hNCinFV_stack_7->SetBinError(9,0.1559873);
   hNCinFV_stack_7->SetBinError(10,0.1284224);
   hNCinFV_stack_7->SetBinError(11,0.1088158);
   hNCinFV_stack_7->SetBinError(12,0.1271502);
   hNCinFV_stack_7->SetBinError(13,0.1110342);
   hNCinFV_stack_7->SetBinError(14,0.1533597);
   hNCinFV_stack_7->SetBinError(15,0.1692877);
   hNCinFV_stack_7->SetBinError(16,0.1992144);
   hNCinFV_stack_7->SetBinError(17,0.2429853);
   hNCinFV_stack_7->SetBinError(18,0.2433196);
   hNCinFV_stack_7->SetBinError(19,0.2964165);
   hNCinFV_stack_7->SetBinError(20,0.3232918);
   hNCinFV_stack_7->SetEntries(341);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_8->SetBinContent(0,0.08745668);
   hnumuCCinFV_stack_8->SetBinContent(1,0.6167758);
   hnumuCCinFV_stack_8->SetBinContent(2,0.793467);
   hnumuCCinFV_stack_8->SetBinContent(3,0.3841418);
   hnumuCCinFV_stack_8->SetBinContent(4,0.435196);
   hnumuCCinFV_stack_8->SetBinContent(5,1.112688);
   hnumuCCinFV_stack_8->SetBinContent(6,0.8378679);
   hnumuCCinFV_stack_8->SetBinContent(7,0.8465742);
   hnumuCCinFV_stack_8->SetBinContent(8,1.151277);
   hnumuCCinFV_stack_8->SetBinContent(9,0.7325454);
   hnumuCCinFV_stack_8->SetBinContent(10,0.8180841);
   hnumuCCinFV_stack_8->SetBinContent(11,1.153258);
   hnumuCCinFV_stack_8->SetBinContent(12,1.272636);
   hnumuCCinFV_stack_8->SetBinContent(13,1.41229);
   hnumuCCinFV_stack_8->SetBinContent(14,1.395319);
   hnumuCCinFV_stack_8->SetBinContent(15,1.155552);
   hnumuCCinFV_stack_8->SetBinContent(16,1.081925);
   hnumuCCinFV_stack_8->SetBinContent(17,1.895989);
   hnumuCCinFV_stack_8->SetBinContent(18,0.8316675);
   hnumuCCinFV_stack_8->SetBinContent(19,0.785084);
   hnumuCCinFV_stack_8->SetBinContent(20,1.262531);
   hnumuCCinFV_stack_8->SetBinError(0,0.06452687);
   hnumuCCinFV_stack_8->SetBinError(1,0.179043);
   hnumuCCinFV_stack_8->SetBinError(2,0.2174671);
   hnumuCCinFV_stack_8->SetBinError(3,0.1374263);
   hnumuCCinFV_stack_8->SetBinError(4,0.1554762);
   hnumuCCinFV_stack_8->SetBinError(5,0.4545294);
   hnumuCCinFV_stack_8->SetBinError(6,0.2591117);
   hnumuCCinFV_stack_8->SetBinError(7,0.2470434);
   hnumuCCinFV_stack_8->SetBinError(8,0.2731444);
   hnumuCCinFV_stack_8->SetBinError(9,0.283402);
   hnumuCCinFV_stack_8->SetBinError(10,0.2171502);
   hnumuCCinFV_stack_8->SetBinError(11,0.2644942);
   hnumuCCinFV_stack_8->SetBinError(12,0.4708829);
   hnumuCCinFV_stack_8->SetBinError(13,0.3347067);
   hnumuCCinFV_stack_8->SetBinError(14,0.325591);
   hnumuCCinFV_stack_8->SetBinError(15,0.3287925);
   hnumuCCinFV_stack_8->SetBinError(16,0.313863);
   hnumuCCinFV_stack_8->SetBinError(17,0.4106697);
   hnumuCCinFV_stack_8->SetBinError(18,0.2187136);
   hnumuCCinFV_stack_8->SetBinError(19,0.2029443);
   hnumuCCinFV_stack_8->SetBinError(20,0.2606424);
   hnumuCCinFV_stack_8->SetEntries(471);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_9->SetBinContent(0,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(5,0.01276398);
   hnueCCinFV_stack_9->SetBinContent(6,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(9,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(15,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(16,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(17,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(18,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(19,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(20,0.391809);
   hnueCCinFV_stack_9->SetBinError(0,0.06195629);
   hnueCCinFV_stack_9->SetBinError(5,0.0127502);
   hnueCCinFV_stack_9->SetBinError(6,0.0127502);
   hnueCCinFV_stack_9->SetBinError(9,0.06195629);
   hnueCCinFV_stack_9->SetBinError(12,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.0127502);
   hnueCCinFV_stack_9->SetBinError(15,0.0127502);
   hnueCCinFV_stack_9->SetBinError(16,0.06195629);
   hnueCCinFV_stack_9->SetBinError(17,0.06325464);
   hnueCCinFV_stack_9->SetBinError(18,0.0180315);
   hnueCCinFV_stack_9->SetBinError(19,0.06325464);
   hnueCCinFV_stack_9->SetBinError(20,0.1425485);
   hnueCCinFV_stack_9->SetEntries(26);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);
   hmcerror__5->SetBinContent(0,4.481389);
   hmcerror__5->SetBinContent(1,9.077187);
   hmcerror__5->SetBinContent(2,7.456209);
   hmcerror__5->SetBinContent(3,6.395641);
   hmcerror__5->SetBinContent(4,6.06855);
   hmcerror__5->SetBinContent(5,8.047169);
   hmcerror__5->SetBinContent(6,7.268261);
   hmcerror__5->SetBinContent(7,7.375147);
   hmcerror__5->SetBinContent(8,6.755692);
   hmcerror__5->SetBinContent(9,7.968985);
   hmcerror__5->SetBinContent(10,9.754447);
   hmcerror__5->SetBinContent(11,9.206747);
   hmcerror__5->SetBinContent(12,10.81915);
   hmcerror__5->SetBinContent(13,11.47894);
   hmcerror__5->SetBinContent(14,10.61825);
   hmcerror__5->SetBinContent(15,13.59582);
   hmcerror__5->SetBinContent(16,15.06684);
   hmcerror__5->SetBinContent(17,19.22783);
   hmcerror__5->SetBinContent(18,19.45412);
   hmcerror__5->SetBinContent(19,23.54306);
   hmcerror__5->SetBinContent(20,34.63509);
   hmcerror__5->SetBinError(0,0.5469913);
   hmcerror__5->SetBinError(1,3.631567);
   hmcerror__5->SetBinError(2,2.72239);
   hmcerror__5->SetBinError(3,2.746776);
   hmcerror__5->SetBinError(4,2.540663);
   hmcerror__5->SetBinError(5,3.059533);
   hmcerror__5->SetBinError(6,2.716884);
   hmcerror__5->SetBinError(7,3.805359);
   hmcerror__5->SetBinError(8,2.377545);
   hmcerror__5->SetBinError(9,3.174023);
   hmcerror__5->SetBinError(10,3.427478);
   hmcerror__5->SetBinError(11,3.457024);
   hmcerror__5->SetBinError(12,3.815556);
   hmcerror__5->SetBinError(13,3.960612);
   hmcerror__5->SetBinError(14,3.888179);
   hmcerror__5->SetBinError(15,4.431046);
   hmcerror__5->SetBinError(16,5.460153);
   hmcerror__5->SetBinError(17,7.104986);
   hmcerror__5->SetBinError(18,6.17135);
   hmcerror__5->SetBinError(19,9.061221);
   hmcerror__5->SetBinError(20,9.552939);
   hmcerror__5->SetBinError(21,0.125509);
   hmcerror__5->SetEntries(244.8988);

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
   5,
   2,
   6,
   6,
   5,
   6,
   6,
   3,
   5,
   6,
   9,
   7,
   8,
   7,
   4,
   9,
   14,
   12,
   17,
   19};
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
   2.48995,
   2,
   2.67925,
   2.67925,
   2.48995,
   2.67925,
   2.67925,
   2.143368,
   2.48995,
   2.67925,
   3.19354,
   2.85954,
   3.0307,
   2.85954,
   2.29683,
   3.19354,
   3.9102,
   3.64022,
   4.2835,
   4.5151};
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
   2.21064,
   1.51917,
   2.41858,
   2.41858,
   2.21064,
   2.41858,
   2.41858,
   1.72422,
   2.21064,
   2.41858,
   2.9582,
   2.61053,
   2.7896,
   2.61053,
   1.98186,
   2.9582,
   3.6898,
   3.4155,
   4.0673,
   4.3011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(25.63121);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.64#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.14/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 156.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 8.9","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  146.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 37.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 20.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all");
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
   0.4000762,
   0.3651172,
   0.4294762,
   0.4186607,
   0.3802,
   0.3738011,
   0.5159706,
   0.3519321,
   0.398297,
   0.351376,
   0.3754881,
   0.352667,
   0.3450331,
   0.3661788,
   0.3259124,
   0.3623954,
   0.3695157,
   0.3172258,
   0.3848786,
   0.2758168};
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
   0.4000762,
   0.3651172,
   0.4294762,
   0.4186607,
   0.3802,
   0.3738011,
   0.5159706,
   0.3519321,
   0.398297,
   0.351376,
   0.3754881,
   0.352667,
   0.3450331,
   0.3661788,
   0.3259124,
   0.3623954,
   0.3695157,
   0.3172258,
   0.3848786,
   0.2758168};
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
   0.2417842,
   0.2298858,
   0.242471,
   0.2417562,
   0.2441803,
   0.208254,
   0.2334026,
   0.2165469,
   0.2469335,
   0.2369278,
   0.2353344,
   0.2595458,
   0.2483426,
   0.2648244,
   0.2617063,
   0.2587931,
   0.2604148,
   0.2664196,
   0.2282264,
   0.2149819};
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
   0.2417842,
   0.2298858,
   0.242471,
   0.2417562,
   0.2441803,
   0.208254,
   0.2334026,
   0.2165469,
   0.2469335,
   0.2369278,
   0.2353344,
   0.2595458,
   0.2483426,
   0.2648244,
   0.2617063,
   0.2587931,
   0.2604148,
   0.2664196,
   0.2282264,
   0.2149819};
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
   0.5508315,
   0.2682328,
   0.9381389,
   0.9887041,
   0.6213365,
   0.8255069,
   0.8135431,
   0.4440699,
   0.6274325,
   0.6151041,
   0.977544,
   0.6470011,
   0.6969288,
   0.6592423,
   0.2942081,
   0.5973383,
   0.7281113,
   0.6168358,
   0.7220811,
   0.5485765};
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
   0.2743086,
   0.2682328,
   0.4189181,
   0.4414976,
   0.3094194,
   0.3686232,
   0.3632809,
   0.3172684,
   0.3124551,
   0.2746696,
   0.3468695,
   0.2643037,
   0.2640227,
   0.2693042,
   0.1689365,
   0.2119582,
   0.2033615,
   0.1871182,
   0.1819432,
   0.130362};
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
   0.243538,
   0.2037456,
   0.3781607,
   0.3985433,
   0.2747103,
   0.3327591,
   0.3279365,
   0.2552248,
   0.2774055,
   0.2479464,
   0.3213078,
   0.241288,
   0.2430191,
   0.2458531,
   0.1457698,
   0.1963385,
   0.1918989,
   0.1755669,
   0.17276,
   0.1241833};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.525972);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_10_pi0_costheta_all",20,-1,1);

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

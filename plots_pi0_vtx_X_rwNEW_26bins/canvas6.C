#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Feb 17 20:27:23 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
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
   pad1->Range(-40,-2.88,293.3333,318.4674);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__16->SetBinContent(0,7.3198);
   hmc__16->SetBinContent(1,49.16301);
   hmc__16->SetBinContent(2,88.85004);
   hmc__16->SetBinContent(3,109.206);
   hmc__16->SetBinContent(4,115.332);
   hmc__16->SetBinContent(5,119.0396);
   hmc__16->SetBinContent(6,125.4995);
   hmc__16->SetBinContent(7,117.4738);
   hmc__16->SetBinContent(8,126.7105);
   hmc__16->SetBinContent(9,127.4026);
   hmc__16->SetBinContent(10,128.8669);
   hmc__16->SetBinContent(11,117.5379);
   hmc__16->SetBinContent(12,122.1855);
   hmc__16->SetBinContent(13,115.1008);
   hmc__16->SetBinContent(14,127.564);
   hmc__16->SetBinContent(15,126.2325);
   hmc__16->SetBinContent(16,121.9292);
   hmc__16->SetBinContent(17,134.902);
   hmc__16->SetBinContent(18,123.1135);
   hmc__16->SetBinContent(19,118.8987);
   hmc__16->SetBinContent(20,136.4291);
   hmc__16->SetBinContent(21,122.5491);
   hmc__16->SetBinContent(22,123.1965);
   hmc__16->SetBinContent(23,115.655);
   hmc__16->SetBinContent(24,109.8868);
   hmc__16->SetBinContent(25,83.41558);
   hmc__16->SetBinContent(26,28.96772);
   hmc__16->SetBinContent(27,3.679282);
   hmc__16->SetBinError(0,1.302754);
   hmc__16->SetBinError(1,17.74214);
   hmc__16->SetBinError(2,25.23652);
   hmc__16->SetBinError(3,36.53688);
   hmc__16->SetBinError(4,35.8572);
   hmc__16->SetBinError(5,35.64974);
   hmc__16->SetBinError(6,34.45499);
   hmc__16->SetBinError(7,32.34184);
   hmc__16->SetBinError(8,34.14109);
   hmc__16->SetBinError(9,43.2179);
   hmc__16->SetBinError(10,34.09139);
   hmc__16->SetBinError(11,32.13374);
   hmc__16->SetBinError(12,32.99625);
   hmc__16->SetBinError(13,30.42156);
   hmc__16->SetBinError(14,37.95683);
   hmc__16->SetBinError(15,32.37272);
   hmc__16->SetBinError(16,32.4591);
   hmc__16->SetBinError(17,33.10881);
   hmc__16->SetBinError(18,36.80312);
   hmc__16->SetBinError(19,33.9101);
   hmc__16->SetBinError(20,35.40355);
   hmc__16->SetBinError(21,32.91412);
   hmc__16->SetBinError(22,30.80445);
   hmc__16->SetBinError(23,30.96706);
   hmc__16->SetBinError(24,30.00979);
   hmc__16->SetBinError(25,26.68389);
   hmc__16->SetBinError(26,14.05488);
   hmc__16->SetBinError(27,3.938124);
   hmc__16->SetMinimum(-2.88);
   hmc__16->SetMaximum(302.4);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",26,0,260);
   hs6_stack_6->SetMinimum(-3.571482e-09);
   hs6_stack_6->SetMaximum(143.2506);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,2.409722);
   hbadmatch_stack_1->SetBinContent(2,1.712114);
   hbadmatch_stack_1->SetBinContent(3,1.268811);
   hbadmatch_stack_1->SetBinContent(4,1.073786);
   hbadmatch_stack_1->SetBinContent(5,1.323754);
   hbadmatch_stack_1->SetBinContent(6,2.803046);
   hbadmatch_stack_1->SetBinContent(7,2.050601);
   hbadmatch_stack_1->SetBinContent(8,2.28428);
   hbadmatch_stack_1->SetBinContent(9,1.609045);
   hbadmatch_stack_1->SetBinContent(10,4.451676);
   hbadmatch_stack_1->SetBinContent(11,2.333888);
   hbadmatch_stack_1->SetBinContent(12,2.526231);
   hbadmatch_stack_1->SetBinContent(13,1.376045);
   hbadmatch_stack_1->SetBinContent(14,3.188026);
   hbadmatch_stack_1->SetBinContent(15,1.848495);
   hbadmatch_stack_1->SetBinContent(16,4.033293);
   hbadmatch_stack_1->SetBinContent(17,3.185284);
   hbadmatch_stack_1->SetBinContent(18,3.106815);
   hbadmatch_stack_1->SetBinContent(19,3.871567);
   hbadmatch_stack_1->SetBinContent(20,3.391942);
   hbadmatch_stack_1->SetBinContent(21,3.454824);
   hbadmatch_stack_1->SetBinContent(22,2.179821);
   hbadmatch_stack_1->SetBinContent(23,2.477408);
   hbadmatch_stack_1->SetBinContent(24,3.289204);
   hbadmatch_stack_1->SetBinContent(25,3.98456);
   hbadmatch_stack_1->SetBinContent(26,0.9286332);
   hbadmatch_stack_1->SetBinError(1,1.722588);
   hbadmatch_stack_1->SetBinError(2,0.6201715);
   hbadmatch_stack_1->SetBinError(3,0.5889569);
   hbadmatch_stack_1->SetBinError(4,0.5557297);
   hbadmatch_stack_1->SetBinError(5,0.5560625);
   hbadmatch_stack_1->SetBinError(6,0.8853841);
   hbadmatch_stack_1->SetBinError(7,0.7068742);
   hbadmatch_stack_1->SetBinError(8,0.7444141);
   hbadmatch_stack_1->SetBinError(9,0.6796557);
   hbadmatch_stack_1->SetBinError(10,1.836197);
   hbadmatch_stack_1->SetBinError(11,0.8041589);
   hbadmatch_stack_1->SetBinError(12,0.8234881);
   hbadmatch_stack_1->SetBinError(13,0.5906411);
   hbadmatch_stack_1->SetBinError(14,1.025897);
   hbadmatch_stack_1->SetBinError(15,0.6185393);
   hbadmatch_stack_1->SetBinError(16,1.060884);
   hbadmatch_stack_1->SetBinError(17,0.8821675);
   hbadmatch_stack_1->SetBinError(18,0.9462215);
   hbadmatch_stack_1->SetBinError(19,0.9978476);
   hbadmatch_stack_1->SetBinError(20,1.040459);
   hbadmatch_stack_1->SetBinError(21,1.005246);
   hbadmatch_stack_1->SetBinError(22,0.7030054);
   hbadmatch_stack_1->SetBinError(23,0.8749853);
   hbadmatch_stack_1->SetBinError(24,1.196013);
   hbadmatch_stack_1->SetBinError(25,1.103689);
   hbadmatch_stack_1->SetBinError(26,0.48078);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(1,2.923985);
   hext_stack_2->SetBinContent(2,9.141014);
   hext_stack_2->SetBinContent(3,7.683431);
   hext_stack_2->SetBinContent(4,8.771955);
   hext_stack_2->SetBinContent(5,10.36081);
   hext_stack_2->SetBinContent(6,13.71892);
   hext_stack_2->SetBinContent(7,8.264384);
   hext_stack_2->SetBinContent(8,8.58601);
   hext_stack_2->SetBinContent(9,6.496764);
   hext_stack_2->SetBinContent(10,11.57784);
   hext_stack_2->SetBinContent(11,8.007828);
   hext_stack_2->SetBinContent(12,12.54662);
   hext_stack_2->SetBinContent(13,8.884457);
   hext_stack_2->SetBinContent(14,11.15965);
   hext_stack_2->SetBinContent(15,13.65826);
   hext_stack_2->SetBinContent(16,11.65563);
   hext_stack_2->SetBinContent(17,13.84862);
   hext_stack_2->SetBinContent(18,10.63337);
   hext_stack_2->SetBinContent(19,7.380575);
   hext_stack_2->SetBinContent(20,21.50768);
   hext_stack_2->SetBinContent(21,10.78618);
   hext_stack_2->SetBinContent(22,18.4293);
   hext_stack_2->SetBinContent(23,15.86001);
   hext_stack_2->SetBinContent(24,15.66972);
   hext_stack_2->SetBinContent(25,9.552021);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(1,1.040301);
   hext_stack_2->SetBinError(2,1.986595);
   hext_stack_2->SetBinError(3,1.88164);
   hext_stack_2->SetBinError(4,1.801853);
   hext_stack_2->SetBinError(5,2.10773);
   hext_stack_2->SetBinError(6,2.65018);
   hext_stack_2->SetBinError(7,1.813434);
   hext_stack_2->SetBinError(8,1.931347);
   hext_stack_2->SetBinError(9,1.541077);
   hext_stack_2->SetBinError(10,2.296697);
   hext_stack_2->SetBinError(11,1.909398);
   hext_stack_2->SetBinError(12,2.335679);
   hext_stack_2->SetBinError(13,2.074564);
   hext_stack_2->SetBinError(14,2.274989);
   hext_stack_2->SetBinError(15,2.521856);
   hext_stack_2->SetBinError(16,2.280304);
   hext_stack_2->SetBinError(17,2.451827);
   hext_stack_2->SetBinError(18,2.038213);
   hext_stack_2->SetBinError(19,1.682775);
   hext_stack_2->SetBinError(20,3.438366);
   hext_stack_2->SetBinError(21,2.083403);
   hext_stack_2->SetBinError(22,2.958382);
   hext_stack_2->SetBinError(23,2.96177);
   hext_stack_2->SetBinError(24,2.791053);
   hext_stack_2->SetBinError(25,2.060826);
   hext_stack_2->SetBinError(26,0.5750177);
   hext_stack_2->SetBinError(27,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.7222204);
   hdirt_stack_3->SetBinContent(2,1.834457);
   hdirt_stack_3->SetBinContent(3,2.893575);
   hdirt_stack_3->SetBinContent(4,2.360547);
   hdirt_stack_3->SetBinContent(5,1.532501);
   hdirt_stack_3->SetBinContent(6,0.5758626);
   hdirt_stack_3->SetBinContent(7,0.8457623);
   hdirt_stack_3->SetBinContent(8,1.340898);
   hdirt_stack_3->SetBinContent(9,1.882463);
   hdirt_stack_3->SetBinContent(10,0.9508715);
   hdirt_stack_3->SetBinContent(11,1.6355);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.8588142);
   hdirt_stack_3->SetBinContent(14,1.390309);
   hdirt_stack_3->SetBinContent(15,1.07113);
   hdirt_stack_3->SetBinContent(16,0.9523512);
   hdirt_stack_3->SetBinContent(17,0.8153751);
   hdirt_stack_3->SetBinContent(18,1.530947);
   hdirt_stack_3->SetBinContent(19,1.717339);
   hdirt_stack_3->SetBinContent(20,1.781033);
   hdirt_stack_3->SetBinContent(21,2.918321);
   hdirt_stack_3->SetBinContent(22,2.624463);
   hdirt_stack_3->SetBinContent(23,1.882007);
   hdirt_stack_3->SetBinContent(24,0.8357875);
   hdirt_stack_3->SetBinContent(25,1.645191);
   hdirt_stack_3->SetBinContent(26,0.5149939);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4476483);
   hdirt_stack_3->SetBinError(2,0.6863089);
   hdirt_stack_3->SetBinError(3,0.8840387);
   hdirt_stack_3->SetBinError(4,0.714432);
   hdirt_stack_3->SetBinError(5,0.6849406);
   hdirt_stack_3->SetBinError(6,0.3389606);
   hdirt_stack_3->SetBinError(7,0.4516994);
   hdirt_stack_3->SetBinError(8,0.5902479);
   hdirt_stack_3->SetBinError(9,0.6932204);
   hdirt_stack_3->SetBinError(10,0.5633431);
   hdirt_stack_3->SetBinError(11,1.151203);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.4562172);
   hdirt_stack_3->SetBinError(14,0.6022451);
   hdirt_stack_3->SetBinError(15,0.5555408);
   hdirt_stack_3->SetBinError(16,0.4777447);
   hdirt_stack_3->SetBinError(17,0.3706094);
   hdirt_stack_3->SetBinError(18,0.6490876);
   hdirt_stack_3->SetBinError(19,0.7428089);
   hdirt_stack_3->SetBinError(20,0.6443707);
   hdirt_stack_3->SetBinError(21,1.080598);
   hdirt_stack_3->SetBinError(22,0.8887432);
   hdirt_stack_3->SetBinError(23,0.730541);
   hdirt_stack_3->SetBinError(24,0.4229826);
   hdirt_stack_3->SetBinError(25,0.7057255);
   hdirt_stack_3->SetBinError(26,0.303235);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,5.470184);
   houtFV_stack_4->SetBinContent(1,23.35715);
   houtFV_stack_4->SetBinContent(2,17.01521);
   houtFV_stack_4->SetBinContent(3,15.90371);
   houtFV_stack_4->SetBinContent(4,13.57581);
   houtFV_stack_4->SetBinContent(5,11.30824);
   houtFV_stack_4->SetBinContent(6,11.8626);
   houtFV_stack_4->SetBinContent(7,9.77858);
   houtFV_stack_4->SetBinContent(8,9.722052);
   houtFV_stack_4->SetBinContent(9,8.015148);
   houtFV_stack_4->SetBinContent(10,7.379128);
   houtFV_stack_4->SetBinContent(11,8.413177);
   houtFV_stack_4->SetBinContent(12,7.933112);
   houtFV_stack_4->SetBinContent(13,7.327812);
   houtFV_stack_4->SetBinContent(14,7.390419);
   houtFV_stack_4->SetBinContent(15,8.746058);
   houtFV_stack_4->SetBinContent(16,4.604519);
   houtFV_stack_4->SetBinContent(17,9.571568);
   houtFV_stack_4->SetBinContent(18,8.33802);
   houtFV_stack_4->SetBinContent(19,8.53854);
   houtFV_stack_4->SetBinContent(20,10.36744);
   houtFV_stack_4->SetBinContent(21,7.832474);
   houtFV_stack_4->SetBinContent(22,12.69445);
   houtFV_stack_4->SetBinContent(23,18.1385);
   houtFV_stack_4->SetBinContent(24,17.19748);
   houtFV_stack_4->SetBinContent(25,18.17082);
   houtFV_stack_4->SetBinContent(26,11.64401);
   houtFV_stack_4->SetBinContent(27,1.855576);
   houtFV_stack_4->SetBinError(0,1.152557);
   houtFV_stack_4->SetBinError(1,2.391075);
   houtFV_stack_4->SetBinError(2,2.079907);
   houtFV_stack_4->SetBinError(3,2.032867);
   houtFV_stack_4->SetBinError(4,1.814393);
   houtFV_stack_4->SetBinError(5,1.669047);
   houtFV_stack_4->SetBinError(6,1.777519);
   houtFV_stack_4->SetBinError(7,1.539308);
   houtFV_stack_4->SetBinError(8,1.619933);
   houtFV_stack_4->SetBinError(9,1.444775);
   houtFV_stack_4->SetBinError(10,1.323319);
   houtFV_stack_4->SetBinError(11,1.451014);
   houtFV_stack_4->SetBinError(12,1.411011);
   houtFV_stack_4->SetBinError(13,1.338173);
   houtFV_stack_4->SetBinError(14,1.301866);
   houtFV_stack_4->SetBinError(15,1.468248);
   houtFV_stack_4->SetBinError(16,1.000703);
   houtFV_stack_4->SetBinError(17,1.569993);
   houtFV_stack_4->SetBinError(18,1.506992);
   houtFV_stack_4->SetBinError(19,1.426928);
   houtFV_stack_4->SetBinError(20,1.683426);
   houtFV_stack_4->SetBinError(21,1.389514);
   houtFV_stack_4->SetBinError(22,1.790942);
   houtFV_stack_4->SetBinError(23,2.208181);
   houtFV_stack_4->SetBinError(24,2.053235);
   houtFV_stack_4->SetBinError(25,2.095452);
   houtFV_stack_4->SetBinError(26,1.624099);
   houtFV_stack_4->SetBinError(27,0.6794384);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.7097899);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.886334);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.234088);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.956248);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.815747);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.529946);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.109198);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.040116);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.239161);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.774734);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.834606);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.889574);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.076833);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.168742);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.596788);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.960656);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.710052);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.064374);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.235584);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.446414);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.961152);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.47057);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.83103);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.78047);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.478708);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.4188362);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2314762);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5695115);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5952416);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5355223);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4804862);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6760172);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5148328);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5673431);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7164991);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5667713);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6556065);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6419583);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8171651);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6727953);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6036819);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6777427);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6372424);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7751638);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6000717);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6981568);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6427158);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5496886);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5258659);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6832243);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4310268);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.277838);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6961718);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.654822);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2155126);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.267003);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.9205402);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.231452);
   hNCpi0inFVres_stack_7->SetBinContent(2,29.69657);
   hNCpi0inFVres_stack_7->SetBinContent(3,40.39804);
   hNCpi0inFVres_stack_7->SetBinContent(4,47.60956);
   hNCpi0inFVres_stack_7->SetBinContent(5,51.83128);
   hNCpi0inFVres_stack_7->SetBinContent(6,51.90351);
   hNCpi0inFVres_stack_7->SetBinContent(7,54.29253);
   hNCpi0inFVres_stack_7->SetBinContent(8,54.46216);
   hNCpi0inFVres_stack_7->SetBinContent(9,58.87043);
   hNCpi0inFVres_stack_7->SetBinContent(10,51.12282);
   hNCpi0inFVres_stack_7->SetBinContent(11,54.70515);
   hNCpi0inFVres_stack_7->SetBinContent(12,52.61312);
   hNCpi0inFVres_stack_7->SetBinContent(13,51.39382);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.22678);
   hNCpi0inFVres_stack_7->SetBinContent(15,52.1463);
   hNCpi0inFVres_stack_7->SetBinContent(16,53.22794);
   hNCpi0inFVres_stack_7->SetBinContent(17,51.54112);
   hNCpi0inFVres_stack_7->SetBinContent(18,51.15105);
   hNCpi0inFVres_stack_7->SetBinContent(19,50.11457);
   hNCpi0inFVres_stack_7->SetBinContent(20,45.11016);
   hNCpi0inFVres_stack_7->SetBinContent(21,49.72131);
   hNCpi0inFVres_stack_7->SetBinContent(22,45.03992);
   hNCpi0inFVres_stack_7->SetBinContent(23,38.64216);
   hNCpi0inFVres_stack_7->SetBinContent(24,32.96314);
   hNCpi0inFVres_stack_7->SetBinContent(25,18.94682);
   hNCpi0inFVres_stack_7->SetBinContent(26,4.656164);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3626998);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3707519);
   hNCpi0inFVres_stack_7->SetBinError(1,1.007472);
   hNCpi0inFVres_stack_7->SetBinError(2,1.768909);
   hNCpi0inFVres_stack_7->SetBinError(3,2.097782);
   hNCpi0inFVres_stack_7->SetBinError(4,2.294729);
   hNCpi0inFVres_stack_7->SetBinError(5,2.365729);
   hNCpi0inFVres_stack_7->SetBinError(6,2.3323);
   hNCpi0inFVres_stack_7->SetBinError(7,2.413021);
   hNCpi0inFVres_stack_7->SetBinError(8,2.344326);
   hNCpi0inFVres_stack_7->SetBinError(9,2.602898);
   hNCpi0inFVres_stack_7->SetBinError(10,2.379209);
   hNCpi0inFVres_stack_7->SetBinError(11,2.419532);
   hNCpi0inFVres_stack_7->SetBinError(12,2.305628);
   hNCpi0inFVres_stack_7->SetBinError(13,2.291772);
   hNCpi0inFVres_stack_7->SetBinError(14,2.435685);
   hNCpi0inFVres_stack_7->SetBinError(15,2.354363);
   hNCpi0inFVres_stack_7->SetBinError(16,2.412189);
   hNCpi0inFVres_stack_7->SetBinError(17,2.296282);
   hNCpi0inFVres_stack_7->SetBinError(18,2.362711);
   hNCpi0inFVres_stack_7->SetBinError(19,2.273371);
   hNCpi0inFVres_stack_7->SetBinError(20,2.193114);
   hNCpi0inFVres_stack_7->SetBinError(21,2.282824);
   hNCpi0inFVres_stack_7->SetBinError(22,2.219532);
   hNCpi0inFVres_stack_7->SetBinError(23,2.033196);
   hNCpi0inFVres_stack_7->SetBinError(24,1.83087);
   hNCpi0inFVres_stack_7->SetBinError(25,1.357302);
   hNCpi0inFVres_stack_7->SetBinError(26,0.7206064);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1005948);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.286648);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.744104);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.676757);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.62496);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.898812);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.03035);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.160529);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.48679);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.77658);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.80531);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.785212);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.476647);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.76629);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.495001);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.857205);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.060555);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.08008);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.76779);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.644216);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.496506);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.04679);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.238661);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.880458);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.328667);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.517328);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.9481038);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.153118);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5177859);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8132657);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8097479);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.092097);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9989694);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.138197);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9252058);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.077867);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.026353);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.036072);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9438093);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9185212);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.059873);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9717805);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.000364);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9489499);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.042097);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.128553);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9386749);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.04626);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.131997);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8634433);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9472401);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7484682);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7084411);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2696619);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1050124);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(1,4.494632);
   hCCpi0inFV_stack_10->SetBinContent(2,10.28283);
   hCCpi0inFV_stack_10->SetBinContent(3,14.07803);
   hCCpi0inFV_stack_10->SetBinContent(4,13.16062);
   hCCpi0inFV_stack_10->SetBinContent(5,16.27701);
   hCCpi0inFV_stack_10->SetBinContent(6,13.87963);
   hCCpi0inFV_stack_10->SetBinContent(7,16.01367);
   hCCpi0inFV_stack_10->SetBinContent(8,16.80899);
   hCCpi0inFV_stack_10->SetBinContent(9,19.28997);
   hCCpi0inFV_stack_10->SetBinContent(10,19.29951);
   hCCpi0inFV_stack_10->SetBinContent(11,13.45599);
   hCCpi0inFV_stack_10->SetBinContent(12,17.27844);
   hCCpi0inFV_stack_10->SetBinContent(13,13.55067);
   hCCpi0inFV_stack_10->SetBinContent(14,19.29968);
   hCCpi0inFV_stack_10->SetBinContent(15,18.21112);
   hCCpi0inFV_stack_10->SetBinContent(16,14.01142);
   hCCpi0inFV_stack_10->SetBinContent(17,19.54982);
   hCCpi0inFV_stack_10->SetBinContent(18,16.70695);
   hCCpi0inFV_stack_10->SetBinContent(19,15.57956);
   hCCpi0inFV_stack_10->SetBinContent(20,18.42265);
   hCCpi0inFV_stack_10->SetBinContent(21,16.25294);
   hCCpi0inFV_stack_10->SetBinContent(22,17.97285);
   hCCpi0inFV_stack_10->SetBinContent(23,12.3064);
   hCCpi0inFV_stack_10->SetBinContent(24,17.30216);
   hCCpi0inFV_stack_10->SetBinContent(25,13.27125);
   hCCpi0inFV_stack_10->SetBinContent(26,4.50289);
   hCCpi0inFV_stack_10->SetBinContent(27,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(0,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(1,1.037659);
   hCCpi0inFV_stack_10->SetBinError(2,1.520411);
   hCCpi0inFV_stack_10->SetBinError(3,1.883149);
   hCCpi0inFV_stack_10->SetBinError(4,1.766666);
   hCCpi0inFV_stack_10->SetBinError(5,1.997027);
   hCCpi0inFV_stack_10->SetBinError(6,1.87267);
   hCCpi0inFV_stack_10->SetBinError(7,2.029597);
   hCCpi0inFV_stack_10->SetBinError(8,2.068179);
   hCCpi0inFV_stack_10->SetBinError(9,2.23788);
   hCCpi0inFV_stack_10->SetBinError(10,2.193958);
   hCCpi0inFV_stack_10->SetBinError(11,1.832829);
   hCCpi0inFV_stack_10->SetBinError(12,2.127384);
   hCCpi0inFV_stack_10->SetBinError(13,1.788066);
   hCCpi0inFV_stack_10->SetBinError(14,2.176433);
   hCCpi0inFV_stack_10->SetBinError(15,2.167322);
   hCCpi0inFV_stack_10->SetBinError(16,1.855224);
   hCCpi0inFV_stack_10->SetBinError(17,2.176612);
   hCCpi0inFV_stack_10->SetBinError(18,2.038965);
   hCCpi0inFV_stack_10->SetBinError(19,1.952093);
   hCCpi0inFV_stack_10->SetBinError(20,2.196646);
   hCCpi0inFV_stack_10->SetBinError(21,2.009592);
   hCCpi0inFV_stack_10->SetBinError(22,2.108295);
   hCCpi0inFV_stack_10->SetBinError(23,1.691436);
   hCCpi0inFV_stack_10->SetBinError(24,2.067717);
   hCCpi0inFV_stack_10->SetBinError(25,1.89999);
   hCCpi0inFV_stack_10->SetBinError(26,1.069134);
   hCCpi0inFV_stack_10->SetBinError(27,0.3401776);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(1,2.245626);
   hNCinFV_stack_11->SetBinContent(2,6.395617);
   hNCinFV_stack_11->SetBinContent(3,7.815735);
   hNCinFV_stack_11->SetBinContent(4,8.001225);
   hNCinFV_stack_11->SetBinContent(5,7.909449);
   hNCinFV_stack_11->SetBinContent(6,7.804509);
   hNCinFV_stack_11->SetBinContent(7,8.410952);
   hNCinFV_stack_11->SetBinContent(8,10.63521);
   hNCinFV_stack_11->SetBinContent(9,8.653076);
   hNCinFV_stack_11->SetBinContent(10,10.10677);
   hNCinFV_stack_11->SetBinContent(11,9.571566);
   hNCinFV_stack_11->SetBinContent(12,7.379193);
   hNCinFV_stack_11->SetBinContent(13,6.413604);
   hNCinFV_stack_11->SetBinContent(14,6.851836);
   hNCinFV_stack_11->SetBinContent(15,8.196249);
   hNCinFV_stack_11->SetBinContent(16,10.0715);
   hNCinFV_stack_11->SetBinContent(17,9.092998);
   hNCinFV_stack_11->SetBinContent(18,7.377503);
   hNCinFV_stack_11->SetBinContent(19,9.970068);
   hNCinFV_stack_11->SetBinContent(20,10.51819);
   hNCinFV_stack_11->SetBinContent(21,7.7591);
   hNCinFV_stack_11->SetBinContent(22,6.152411);
   hNCinFV_stack_11->SetBinContent(23,7.61902);
   hNCinFV_stack_11->SetBinContent(24,7.043479);
   hNCinFV_stack_11->SetBinContent(25,4.694729);
   hNCinFV_stack_11->SetBinContent(26,0.8753801);
   hNCinFV_stack_11->SetBinContent(27,0.1950248);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.7332843);
   hNCinFV_stack_11->SetBinError(2,1.302061);
   hNCinFV_stack_11->SetBinError(3,1.387062);
   hNCinFV_stack_11->SetBinError(4,1.468546);
   hNCinFV_stack_11->SetBinError(5,1.379411);
   hNCinFV_stack_11->SetBinError(6,1.455311);
   hNCinFV_stack_11->SetBinError(7,1.428992);
   hNCinFV_stack_11->SetBinError(8,1.664254);
   hNCinFV_stack_11->SetBinError(9,1.495895);
   hNCinFV_stack_11->SetBinError(10,1.61822);
   hNCinFV_stack_11->SetBinError(11,1.569993);
   hNCinFV_stack_11->SetBinError(12,1.374353);
   hNCinFV_stack_11->SetBinError(13,1.226385);
   hNCinFV_stack_11->SetBinError(14,1.240877);
   hNCinFV_stack_11->SetBinError(15,1.481439);
   hNCinFV_stack_11->SetBinError(16,1.570229);
   hNCinFV_stack_11->SetBinError(17,1.508019);
   hNCinFV_stack_11->SetBinError(18,1.374112);
   hNCinFV_stack_11->SetBinError(19,1.595074);
   hNCinFV_stack_11->SetBinError(20,1.58262);
   hNCinFV_stack_11->SetBinError(21,1.400337);
   hNCinFV_stack_11->SetBinError(22,1.302935);
   hNCinFV_stack_11->SetBinError(23,1.373042);
   hNCinFV_stack_11->SetBinError(24,1.255582);
   hNCinFV_stack_11->SetBinError(25,1.056768);
   hNCinFV_stack_11->SetBinError(26,0.5191111);
   hNCinFV_stack_11->SetBinError(27,0.1950249);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,0.7817899);
   hnumuCCinFV_stack_12->SetBinContent(2,3.566498);
   hnumuCCinFV_stack_12->SetBinContent(3,8.634911);
   hnumuCCinFV_stack_12->SetBinContent(4,4.843642);
   hnumuCCinFV_stack_12->SetBinContent(5,5.928411);
   hnumuCCinFV_stack_12->SetBinContent(6,6.029114);
   hnumuCCinFV_stack_12->SetBinContent(7,4.57765);
   hnumuCCinFV_stack_12->SetBinContent(8,6.567389);
   hnumuCCinFV_stack_12->SetBinContent(9,4.646547);
   hnumuCCinFV_stack_12->SetBinContent(10,8.668396);
   hnumuCCinFV_stack_12->SetBinContent(11,5.884569);
   hnumuCCinFV_stack_12->SetBinContent(12,8.354436);
   hnumuCCinFV_stack_12->SetBinContent(13,5.716429);
   hnumuCCinFV_stack_12->SetBinContent(14,8.386084);
   hnumuCCinFV_stack_12->SetBinContent(15,7.331906);
   hnumuCCinFV_stack_12->SetBinContent(16,9.040939);
   hnumuCCinFV_stack_12->SetBinContent(17,10.60106);
   hnumuCCinFV_stack_12->SetBinContent(18,7.069535);
   hnumuCCinFV_stack_12->SetBinContent(19,8.612646);
   hnumuCCinFV_stack_12->SetBinContent(20,8.641731);
   hnumuCCinFV_stack_12->SetBinContent(21,7.374397);
   hnumuCCinFV_stack_12->SetBinContent(22,5.494628);
   hnumuCCinFV_stack_12->SetBinContent(23,7.151659);
   hnumuCCinFV_stack_12->SetBinContent(24,4.953498);
   hnumuCCinFV_stack_12->SetBinContent(25,6.689285);
   hnumuCCinFV_stack_12->SetBinContent(26,3.470045);
   hnumuCCinFV_stack_12->SetBinError(1,0.3908977);
   hnumuCCinFV_stack_12->SetBinError(2,0.9484507);
   hnumuCCinFV_stack_12->SetBinError(3,2.054317);
   hnumuCCinFV_stack_12->SetBinError(4,1.244086);
   hnumuCCinFV_stack_12->SetBinError(5,1.272232);
   hnumuCCinFV_stack_12->SetBinError(6,1.271978);
   hnumuCCinFV_stack_12->SetBinError(7,1.199543);
   hnumuCCinFV_stack_12->SetBinError(8,1.522439);
   hnumuCCinFV_stack_12->SetBinError(9,1.075673);
   hnumuCCinFV_stack_12->SetBinError(10,1.525877);
   hnumuCCinFV_stack_12->SetBinError(11,1.2792);
   hnumuCCinFV_stack_12->SetBinError(12,2.018356);
   hnumuCCinFV_stack_12->SetBinError(13,1.285019);
   hnumuCCinFV_stack_12->SetBinError(14,1.636153);
   hnumuCCinFV_stack_12->SetBinError(15,1.404904);
   hnumuCCinFV_stack_12->SetBinError(16,1.638528);
   hnumuCCinFV_stack_12->SetBinError(17,1.822708);
   hnumuCCinFV_stack_12->SetBinError(18,1.616304);
   hnumuCCinFV_stack_12->SetBinError(19,1.675021);
   hnumuCCinFV_stack_12->SetBinError(20,1.699355);
   hnumuCCinFV_stack_12->SetBinError(21,1.442893);
   hnumuCCinFV_stack_12->SetBinError(22,1.212769);
   hnumuCCinFV_stack_12->SetBinError(23,1.402606);
   hnumuCCinFV_stack_12->SetBinError(24,1.152021);
   hnumuCCinFV_stack_12->SetBinError(25,1.769552);
   hnumuCCinFV_stack_12->SetBinError(26,1.385665);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(4,1.795259);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,1.082886);
   hnueCCinFV_stack_13->SetBinContent(7,0.7888809);
   hnueCCinFV_stack_13->SetBinContent(8,2.344344);
   hnueCCinFV_stack_13->SetBinContent(9,2.672333);
   hnueCCinFV_stack_13->SetBinContent(10,1.088653);
   hnueCCinFV_stack_13->SetBinContent(11,0.7851874);
   hnueCCinFV_stack_13->SetBinContent(12,0.41253);
   hnueCCinFV_stack_13->SetBinContent(13,3.039896);
   hnueCCinFV_stack_13->SetBinContent(14,0.8401043);
   hnueCCinFV_stack_13->SetBinContent(15,1.28978);
   hnueCCinFV_stack_13->SetBinContent(16,0.6556042);
   hnueCCinFV_stack_13->SetBinContent(17,2.571053);
   hnueCCinFV_stack_13->SetBinContent(18,0.976422);
   hnueCCinFV_stack_13->SetBinContent(19,1.066627);
   hnueCCinFV_stack_13->SetBinContent(20,2.354626);
   hnueCCinFV_stack_13->SetBinContent(21,1.148957);
   hnueCCinFV_stack_13->SetBinContent(22,0.4394275);
   hnueCCinFV_stack_13->SetBinContent(23,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(24,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(25,0.409061);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.3921167);
   hnueCCinFV_stack_13->SetBinError(4,1.329192);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.5746241);
   hnueCCinFV_stack_13->SetBinError(7,0.4244012);
   hnueCCinFV_stack_13->SetBinError(8,0.9811861);
   hnueCCinFV_stack_13->SetBinError(9,1.067853);
   hnueCCinFV_stack_13->SetBinError(10,0.5547245);
   hnueCCinFV_stack_13->SetBinError(11,0.3925882);
   hnueCCinFV_stack_13->SetBinError(12,0.2921355);
   hnueCCinFV_stack_13->SetBinError(13,1.371918);
   hnueCCinFV_stack_13->SetBinError(14,0.4210972);
   hnueCCinFV_stack_13->SetBinError(15,0.6013122);
   hnueCCinFV_stack_13->SetBinError(16,0.3825648);
   hnueCCinFV_stack_13->SetBinError(17,1.594502);
   hnueCCinFV_stack_13->SetBinError(18,0.6141242);
   hnueCCinFV_stack_13->SetBinError(19,0.8698897);
   hnueCCinFV_stack_13->SetBinError(20,0.8546649);
   hnueCCinFV_stack_13->SetBinError(21,0.5288592);
   hnueCCinFV_stack_13->SetBinError(22,0.3124703);
   hnueCCinFV_stack_13->SetBinError(23,0.2770047);
   hnueCCinFV_stack_13->SetBinError(24,0.3345885);
   hnueCCinFV_stack_13->SetBinError(25,0.409061);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__17->SetBinContent(0,7.3198);
   hmcerror__17->SetBinContent(1,49.16301);
   hmcerror__17->SetBinContent(2,88.85004);
   hmcerror__17->SetBinContent(3,109.206);
   hmcerror__17->SetBinContent(4,115.332);
   hmcerror__17->SetBinContent(5,119.0396);
   hmcerror__17->SetBinContent(6,125.4995);
   hmcerror__17->SetBinContent(7,117.4738);
   hmcerror__17->SetBinContent(8,126.7105);
   hmcerror__17->SetBinContent(9,127.4026);
   hmcerror__17->SetBinContent(10,128.8669);
   hmcerror__17->SetBinContent(11,117.5379);
   hmcerror__17->SetBinContent(12,122.1855);
   hmcerror__17->SetBinContent(13,115.1008);
   hmcerror__17->SetBinContent(14,127.564);
   hmcerror__17->SetBinContent(15,126.2325);
   hmcerror__17->SetBinContent(16,121.9292);
   hmcerror__17->SetBinContent(17,134.902);
   hmcerror__17->SetBinContent(18,123.1135);
   hmcerror__17->SetBinContent(19,118.8987);
   hmcerror__17->SetBinContent(20,136.4291);
   hmcerror__17->SetBinContent(21,122.5491);
   hmcerror__17->SetBinContent(22,123.1965);
   hmcerror__17->SetBinContent(23,115.655);
   hmcerror__17->SetBinContent(24,109.8868);
   hmcerror__17->SetBinContent(25,83.41558);
   hmcerror__17->SetBinContent(26,28.96772);
   hmcerror__17->SetBinContent(27,3.679282);
   hmcerror__17->SetBinError(0,1.302754);
   hmcerror__17->SetBinError(1,17.74214);
   hmcerror__17->SetBinError(2,25.23652);
   hmcerror__17->SetBinError(3,36.53688);
   hmcerror__17->SetBinError(4,35.8572);
   hmcerror__17->SetBinError(5,35.64974);
   hmcerror__17->SetBinError(6,34.45499);
   hmcerror__17->SetBinError(7,32.34184);
   hmcerror__17->SetBinError(8,34.14109);
   hmcerror__17->SetBinError(9,43.2179);
   hmcerror__17->SetBinError(10,34.09139);
   hmcerror__17->SetBinError(11,32.13374);
   hmcerror__17->SetBinError(12,32.99625);
   hmcerror__17->SetBinError(13,30.42156);
   hmcerror__17->SetBinError(14,37.95683);
   hmcerror__17->SetBinError(15,32.37272);
   hmcerror__17->SetBinError(16,32.4591);
   hmcerror__17->SetBinError(17,33.10881);
   hmcerror__17->SetBinError(18,36.80312);
   hmcerror__17->SetBinError(19,33.9101);
   hmcerror__17->SetBinError(20,35.40355);
   hmcerror__17->SetBinError(21,32.91412);
   hmcerror__17->SetBinError(22,30.80445);
   hmcerror__17->SetBinError(23,30.96706);
   hmcerror__17->SetBinError(24,30.00979);
   hmcerror__17->SetBinError(25,26.68389);
   hmcerror__17->SetBinError(26,14.05488);
   hmcerror__17->SetBinError(27,3.938124);
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
   
   Double_t _fx3021[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3021[26] = {
   46,
   82,
   97,
   101,
   111,
   116,
   109,
   121,
   144,
   136,
   136,
   132,
   143,
   131,
   119,
   131,
   129,
   122,
   100,
   127,
   130,
   141,
   142,
   77,
   76,
   31};
   Double_t _felx3021[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3021[26] = {
   6.9153,
   9.1791,
   9.9704,
   10.04988,
   10.53565,
   10.77033,
   10.44031,
   11,
   12,
   11.6619,
   11.6619,
   11.48913,
   11.95826,
   11.44552,
   10.90871,
   11.44552,
   11.35782,
   11.04536,
   10.1212,
   11.26943,
   11.40175,
   11.87434,
   11.91638,
   8.8995,
   8.8425,
   5.7094};
   Double_t _fehx3021[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3021[26] = {
   6.7108,
   8.9774,
   9.769,
   10.04988,
   10.53565,
   10.77033,
   10.44031,
   11,
   12,
   11.6619,
   11.6619,
   11.48913,
   11.95826,
   11.44552,
   10.90871,
   11.44552,
   11.35782,
   11.04536,
   9.92,
   11.26943,
   11.40175,
   11.87434,
   11.91638,
   8.6976,
   8.6406,
   5.5017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,286);
   Graph_Graph3021->SetMinimum(12.21966);
   Graph_Graph3021->SetMaximum(169.0709);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.8/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2930.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 277.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 294.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1156.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  220.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 391.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3022[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3022[26] = {
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
   1,
   1};
   Double_t _felx3022[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3022[26] = {
   0.360884,
   0.284035,
   0.3345684,
   0.3109043,
   0.2994779,
   0.2745428,
   0.2753112,
   0.2694416,
   0.339223,
   0.2645473,
   0.2733905,
   0.2700504,
   0.2643035,
   0.2975512,
   0.2564532,
   0.2662126,
   0.2454287,
   0.2989364,
   0.2852016,
   0.2595014,
   0.2685791,
   0.2500432,
   0.2677537,
   0.2730974,
   0.319891,
   0.485191};
   Double_t _fehx3022[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3022[26] = {
   0.360884,
   0.284035,
   0.3345684,
   0.3109043,
   0.2994779,
   0.2745428,
   0.2753112,
   0.2694416,
   0.339223,
   0.2645473,
   0.2733905,
   0.2700504,
   0.2643035,
   0.2975512,
   0.2564532,
   0.2662126,
   0.2454287,
   0.2989364,
   0.2852016,
   0.2595014,
   0.2685791,
   0.2500432,
   0.2677537,
   0.2730974,
   0.319891,
   0.485191};
   grae = new TGraphAsymmErrors(26,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,286);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3023[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3023[26] = {
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
   1,
   1};
   Double_t _felx3023[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3023[26] = {
   0.2220536,
   0.2010047,
   0.2125635,
   0.2137887,
   0.2105178,
   0.2129428,
   0.2235875,
   0.2169052,
   0.222538,
   0.2017479,
   0.227568,
   0.2211977,
   0.2119122,
   0.2166547,
   0.2032435,
   0.2079652,
   0.1915285,
   0.2149593,
   0.2145458,
   0.194759,
   0.2153819,
   0.1871141,
   0.1943049,
   0.1992095,
   0.1904381,
   0.2382577};
   Double_t _fehx3023[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3023[26] = {
   0.2220536,
   0.2010047,
   0.2125635,
   0.2137887,
   0.2105178,
   0.2129428,
   0.2235875,
   0.2169052,
   0.222538,
   0.2017479,
   0.227568,
   0.2211977,
   0.2119122,
   0.2166547,
   0.2032435,
   0.2079652,
   0.1915285,
   0.2149593,
   0.2145458,
   0.194759,
   0.2153819,
   0.1871141,
   0.1943049,
   0.1992095,
   0.1904381,
   0.2382577};
   grae = new TGraphAsymmErrors(26,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,286);
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
   
   Double_t _fx3024[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3024[26] = {
   0.9356628,
   0.9229034,
   0.8882296,
   0.875733,
   0.9324626,
   0.9243061,
   0.9278668,
   0.9549325,
   1.130275,
   1.055352,
   1.157074,
   1.080324,
   1.242389,
   1.026935,
   0.9427052,
   1.074394,
   0.9562498,
   0.9909552,
   0.8410521,
   0.9308862,
   1.060799,
   1.144513,
   1.227789,
   0.7007212,
   0.9111008,
   1.070157};
   Double_t _felx3024[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3024[26] = {
   0.1406606,
   0.10331,
   0.09129902,
   0.08713869,
   0.08850543,
   0.08581967,
   0.08887352,
   0.08681204,
   0.09418959,
   0.09049572,
   0.09921827,
   0.09403016,
   0.1038938,
   0.08972375,
   0.08641764,
   0.09387021,
   0.0841931,
   0.08971687,
   0.08512457,
   0.08260279,
   0.09303827,
   0.09638536,
   0.1030338,
   0.0809879,
   0.1060054,
   0.1970952};
   Double_t _fehx3024[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3024[26] = {
   0.136501,
   0.1010399,
   0.0894548,
   0.08713869,
   0.08850543,
   0.08581967,
   0.08887352,
   0.08681204,
   0.09418959,
   0.09049572,
   0.09921827,
   0.09403016,
   0.1038938,
   0.08972375,
   0.08641764,
   0.09387021,
   0.0841931,
   0.08971687,
   0.08343237,
   0.08260279,
   0.09303827,
   0.09638536,
   0.1030338,
   0.07915056,
   0.103585,
   0.1899252};
   grae = new TGraphAsymmErrors(26,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,286);
   Graph_Graph3024->SetMinimum(0.5470784);
   Graph_Graph3024->SetMaximum(1.418937);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

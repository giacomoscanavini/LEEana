#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr 15 13:46:33 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",242,172,1200,900);
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
   pad1->Range(-170,-0.7,163.3333,58.98421);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hmc__4->SetBinContent(0,0.2081669);
   hmc__4->SetBinContent(1,0.2368697);
   hmc__4->SetBinContent(2,6.158948);
   hmc__4->SetBinContent(3,16.51428);
   hmc__4->SetBinContent(4,25.30589);
   hmc__4->SetBinContent(5,28.96312);
   hmc__4->SetBinContent(6,29.59392);
   hmc__4->SetBinContent(7,33.32905);
   hmc__4->SetBinContent(8,31.51193);
   hmc__4->SetBinContent(9,31.85702);
   hmc__4->SetBinContent(10,31.74048);
   hmc__4->SetBinContent(11,31.55636);
   hmc__4->SetBinContent(12,31.2649);
   hmc__4->SetBinContent(13,33.08881);
   hmc__4->SetBinContent(14,31.49554);
   hmc__4->SetBinContent(15,33.4465);
   hmc__4->SetBinContent(16,29.57047);
   hmc__4->SetBinContent(17,34.1427);
   hmc__4->SetBinContent(18,33.42624);
   hmc__4->SetBinContent(19,34.51833);
   hmc__4->SetBinContent(20,31.57768);
   hmc__4->SetBinContent(21,34.28036);
   hmc__4->SetBinContent(22,30.38569);
   hmc__4->SetBinContent(23,22.35545);
   hmc__4->SetBinContent(24,10.70237);
   hmc__4->SetBinContent(25,0.1871832);
   hmc__4->SetBinContent(26,0.149413);
   hmc__4->SetBinError(0,0.0842233);
   hmc__4->SetBinError(1,0.433974);
   hmc__4->SetBinError(2,2.734679);
   hmc__4->SetBinError(3,4.672828);
   hmc__4->SetBinError(4,6.53582);
   hmc__4->SetBinError(5,7.114717);
   hmc__4->SetBinError(6,8.136693);
   hmc__4->SetBinError(7,8.392863);
   hmc__4->SetBinError(8,7.552167);
   hmc__4->SetBinError(9,8.014271);
   hmc__4->SetBinError(10,7.832129);
   hmc__4->SetBinError(11,7.689076);
   hmc__4->SetBinError(12,7.622775);
   hmc__4->SetBinError(13,7.900412);
   hmc__4->SetBinError(14,8.349244);
   hmc__4->SetBinError(15,7.607269);
   hmc__4->SetBinError(16,7.894033);
   hmc__4->SetBinError(17,8.252412);
   hmc__4->SetBinError(18,7.710941);
   hmc__4->SetBinError(19,9.659758);
   hmc__4->SetBinError(20,7.251926);
   hmc__4->SetBinError(21,7.329363);
   hmc__4->SetBinError(22,5.812163);
   hmc__4->SetBinError(23,5.086116);
   hmc__4->SetBinError(24,2.932797);
   hmc__4->SetBinError(25,0.3338336);
   hmc__4->SetBinError(26,0.3014942);
   hmc__4->SetMinimum(-0.7);
   hmc__4->SetMaximum(56);
   hmc__4->SetEntries(648.6285);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-130,130);
   hs2_stack_2->SetMinimum(-1.669388e-09);
   hs2_stack_2->SetMaximum(36.24425);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hbadmatch_stack_1->SetBinContent(2,0.3153179);
   hbadmatch_stack_1->SetBinContent(3,0.2733256);
   hbadmatch_stack_1->SetBinContent(4,0.2662645);
   hbadmatch_stack_1->SetBinContent(5,0.2489758);
   hbadmatch_stack_1->SetBinContent(6,0.415387);
   hbadmatch_stack_1->SetBinContent(7,0.8243257);
   hbadmatch_stack_1->SetBinContent(8,0.6003419);
   hbadmatch_stack_1->SetBinContent(9,0.6257423);
   hbadmatch_stack_1->SetBinContent(10,0.4855819);
   hbadmatch_stack_1->SetBinContent(11,0.7348053);
   hbadmatch_stack_1->SetBinContent(12,0.9364581);
   hbadmatch_stack_1->SetBinContent(13,0.7699614);
   hbadmatch_stack_1->SetBinContent(14,0.904348);
   hbadmatch_stack_1->SetBinContent(15,0.7669535);
   hbadmatch_stack_1->SetBinContent(16,0.6303368);
   hbadmatch_stack_1->SetBinContent(17,0.9082645);
   hbadmatch_stack_1->SetBinContent(18,0.4907069);
   hbadmatch_stack_1->SetBinContent(19,0.7852517);
   hbadmatch_stack_1->SetBinContent(20,0.5467708);
   hbadmatch_stack_1->SetBinContent(21,0.5122783);
   hbadmatch_stack_1->SetBinContent(22,1.210383);
   hbadmatch_stack_1->SetBinContent(23,0.4056815);
   hbadmatch_stack_1->SetBinContent(24,0.34432);
   hbadmatch_stack_1->SetBinError(2,0.1275655);
   hbadmatch_stack_1->SetBinError(3,0.1252177);
   hbadmatch_stack_1->SetBinError(4,0.09758771);
   hbadmatch_stack_1->SetBinError(5,0.105636);
   hbadmatch_stack_1->SetBinError(6,0.1496349);
   hbadmatch_stack_1->SetBinError(7,0.3759522);
   hbadmatch_stack_1->SetBinError(8,0.1791229);
   hbadmatch_stack_1->SetBinError(9,0.1975956);
   hbadmatch_stack_1->SetBinError(10,0.147089);
   hbadmatch_stack_1->SetBinError(11,0.2028609);
   hbadmatch_stack_1->SetBinError(12,0.2370684);
   hbadmatch_stack_1->SetBinError(13,0.2105748);
   hbadmatch_stack_1->SetBinError(14,0.2263619);
   hbadmatch_stack_1->SetBinError(15,0.2118329);
   hbadmatch_stack_1->SetBinError(16,0.1803679);
   hbadmatch_stack_1->SetBinError(17,0.2331855);
   hbadmatch_stack_1->SetBinError(18,0.1620707);
   hbadmatch_stack_1->SetBinError(19,0.2068664);
   hbadmatch_stack_1->SetBinError(20,0.159469);
   hbadmatch_stack_1->SetBinError(21,0.2849383);
   hbadmatch_stack_1->SetBinError(22,0.4195619);
   hbadmatch_stack_1->SetBinError(23,0.1320739);
   hbadmatch_stack_1->SetBinError(24,0.1320694);
   hbadmatch_stack_1->SetEntries(380);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hext_stack_2->SetBinContent(2,0.01226985);
   hext_stack_2->SetBinContent(3,0.07361911);
   hext_stack_2->SetBinContent(4,0.1226985);
   hext_stack_2->SetBinContent(5,0.7443856);
   hext_stack_2->SetBinContent(6,0.4717173);
   hext_stack_2->SetBinContent(7,0.992514);
   hext_stack_2->SetBinContent(8,0.9311647);
   hext_stack_2->SetBinContent(9,1.78871);
   hext_stack_2->SetBinContent(10,2.211348);
   hext_stack_2->SetBinContent(11,0.992514);
   hext_stack_2->SetBinContent(12,1.228373);
   hext_stack_2->SetBinContent(13,1.476501);
   hext_stack_2->SetBinContent(14,2.346317);
   hext_stack_2->SetBinContent(15,1.252912);
   hext_stack_2->SetBinContent(16,2.643525);
   hext_stack_2->SetBinContent(17,3.488801);
   hext_stack_2->SetBinContent(18,4.395426);
   hext_stack_2->SetBinContent(19,4.368155);
   hext_stack_2->SetBinContent(20,3.357908);
   hext_stack_2->SetBinContent(21,5.323859);
   hext_stack_2->SetBinContent(22,5.955085);
   hext_stack_2->SetBinContent(23,4.355885);
   hext_stack_2->SetBinContent(24,1.911409);
   hext_stack_2->SetBinContent(25,0.01226985);
   hext_stack_2->SetBinError(2,0.01226985);
   hext_stack_2->SetBinError(3,0.03005488);
   hext_stack_2->SetBinError(4,0.03880068);
   hext_stack_2->SetBinError(5,0.3473733);
   hext_stack_2->SetBinError(6,0.2830978);
   hext_stack_2->SetBinError(7,0.4011122);
   hext_stack_2->SetBinError(8,0.4001727);
   hext_stack_2->SetBinError(9,0.5651311);
   hext_stack_2->SetBinError(10,0.6315975);
   hext_stack_2->SetBinError(11,0.4011122);
   hext_stack_2->SetBinError(12,0.4482892);
   hext_stack_2->SetBinError(13,0.4911068);
   hext_stack_2->SetBinError(14,0.6329071);
   hext_stack_2->SetBinError(15,0.4486249);
   hext_stack_2->SetBinError(16,0.6643767);
   hext_stack_2->SetBinError(17,0.7749069);
   hext_stack_2->SetBinError(18,0.8719621);
   hext_stack_2->SetBinError(19,0.8501794);
   hext_stack_2->SetBinError(20,0.6980974);
   hext_stack_2->SetBinError(21,0.9398108);
   hext_stack_2->SetBinError(22,0.9825202);
   hext_stack_2->SetBinError(23,0.8500908);
   hext_stack_2->SetBinError(24,0.5664615);
   hext_stack_2->SetBinError(25,0.01226985);
   hext_stack_2->SetEntries(946);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hdirt_stack_3->SetBinContent(0,0.04420907);
   hdirt_stack_3->SetBinContent(2,0.06032325);
   hdirt_stack_3->SetBinContent(3,0.1946116);
   hdirt_stack_3->SetBinContent(4,0.2172869);
   hdirt_stack_3->SetBinContent(5,0.3456681);
   hdirt_stack_3->SetBinContent(6,0.3519868);
   hdirt_stack_3->SetBinContent(7,0.3132361);
   hdirt_stack_3->SetBinContent(8,0.4303899);
   hdirt_stack_3->SetBinContent(9,0.3108138);
   hdirt_stack_3->SetBinContent(10,0.232048);
   hdirt_stack_3->SetBinContent(11,0.1822697);
   hdirt_stack_3->SetBinContent(12,0.2081075);
   hdirt_stack_3->SetBinContent(13,0.2555841);
   hdirt_stack_3->SetBinContent(14,0.05252464);
   hdirt_stack_3->SetBinContent(15,0.3069932);
   hdirt_stack_3->SetBinContent(16,0.2403264);
   hdirt_stack_3->SetBinContent(17,0.1827068);
   hdirt_stack_3->SetBinContent(18,0.1696463);
   hdirt_stack_3->SetBinContent(19,0.2609375);
   hdirt_stack_3->SetBinContent(20,0.4103005);
   hdirt_stack_3->SetBinContent(21,0.3907779);
   hdirt_stack_3->SetBinContent(22,0.6742346);
   hdirt_stack_3->SetBinContent(23,0.3926306);
   hdirt_stack_3->SetBinContent(24,0.1567439);
   hdirt_stack_3->SetBinError(0,0.04420907);
   hdirt_stack_3->SetBinError(2,0.05274799);
   hdirt_stack_3->SetBinError(3,0.08615664);
   hdirt_stack_3->SetBinError(4,0.09640353);
   hdirt_stack_3->SetBinError(5,0.118982);
   hdirt_stack_3->SetBinError(6,0.1100788);
   hdirt_stack_3->SetBinError(7,0.1127851);
   hdirt_stack_3->SetBinError(8,0.2296809);
   hdirt_stack_3->SetBinError(9,0.1074844);
   hdirt_stack_3->SetBinError(10,0.1008323);
   hdirt_stack_3->SetBinError(11,0.08318907);
   hdirt_stack_3->SetBinError(12,0.09684511);
   hdirt_stack_3->SetBinError(13,0.09562442);
   hdirt_stack_3->SetBinError(14,0.0449668);
   hdirt_stack_3->SetBinError(15,0.1127959);
   hdirt_stack_3->SetBinError(16,0.09981046);
   hdirt_stack_3->SetBinError(17,0.08394573);
   hdirt_stack_3->SetBinError(18,0.08506092);
   hdirt_stack_3->SetBinError(19,0.09648786);
   hdirt_stack_3->SetBinError(20,0.123054);
   hdirt_stack_3->SetBinError(21,0.1192617);
   hdirt_stack_3->SetBinError(22,0.1659561);
   hdirt_stack_3->SetBinError(23,0.3018464);
   hdirt_stack_3->SetBinError(24,0.0820745);
   hdirt_stack_3->SetEntries(237);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   houtFV_stack_4->SetBinContent(0,0.1129571);
   houtFV_stack_4->SetBinContent(1,0.149413);
   houtFV_stack_4->SetBinContent(2,4.345214);
   houtFV_stack_4->SetBinContent(3,4.786877);
   houtFV_stack_4->SetBinContent(4,3.831133);
   houtFV_stack_4->SetBinContent(5,3.204498);
   houtFV_stack_4->SetBinContent(6,2.782416);
   houtFV_stack_4->SetBinContent(7,2.50642);
   houtFV_stack_4->SetBinContent(8,2.119898);
   houtFV_stack_4->SetBinContent(9,2.291602);
   houtFV_stack_4->SetBinContent(10,2.317944);
   houtFV_stack_4->SetBinContent(11,2.120875);
   houtFV_stack_4->SetBinContent(12,2.115099);
   houtFV_stack_4->SetBinContent(13,2.07329);
   houtFV_stack_4->SetBinContent(14,1.95321);
   houtFV_stack_4->SetBinContent(15,1.722676);
   houtFV_stack_4->SetBinContent(16,1.955809);
   houtFV_stack_4->SetBinContent(17,2.201459);
   houtFV_stack_4->SetBinContent(18,2.098914);
   houtFV_stack_4->SetBinContent(19,2.716692);
   houtFV_stack_4->SetBinContent(20,2.704885);
   houtFV_stack_4->SetBinContent(21,2.805605);
   houtFV_stack_4->SetBinContent(22,3.374228);
   houtFV_stack_4->SetBinContent(23,4.522701);
   houtFV_stack_4->SetBinContent(24,5.444296);
   houtFV_stack_4->SetBinContent(25,0.1129571);
   houtFV_stack_4->SetBinContent(26,0.06195629);
   houtFV_stack_4->SetBinError(0,0.0669989);
   houtFV_stack_4->SetBinError(1,0.08945557);
   houtFV_stack_4->SetBinError(2,0.4933094);
   houtFV_stack_4->SetBinError(3,0.5079659);
   houtFV_stack_4->SetBinError(4,0.4507641);
   houtFV_stack_4->SetBinError(5,0.4225347);
   houtFV_stack_4->SetBinError(6,0.3963125);
   houtFV_stack_4->SetBinError(7,0.3766515);
   houtFV_stack_4->SetBinError(8,0.3353038);
   houtFV_stack_4->SetBinError(9,0.3500316);
   houtFV_stack_4->SetBinError(10,0.3590615);
   houtFV_stack_4->SetBinError(11,0.3426108);
   houtFV_stack_4->SetBinError(12,0.3464096);
   houtFV_stack_4->SetBinError(13,0.3345304);
   houtFV_stack_4->SetBinError(14,0.3274963);
   houtFV_stack_4->SetBinError(15,0.3113843);
   houtFV_stack_4->SetBinError(16,0.3349846);
   houtFV_stack_4->SetBinError(17,0.3542453);
   houtFV_stack_4->SetBinError(18,0.3453067);
   houtFV_stack_4->SetBinError(19,0.3923795);
   houtFV_stack_4->SetBinError(20,0.3924982);
   houtFV_stack_4->SetBinError(21,0.3777083);
   houtFV_stack_4->SetBinError(22,0.4237094);
   houtFV_stack_4->SetBinError(23,0.4929088);
   houtFV_stack_4->SetBinError(24,0.5449987);
   houtFV_stack_4->SetBinError(25,0.0669989);
   houtFV_stack_4->SetBinError(26,0.06195629);
   houtFV_stack_4->SetEntries(1718);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hNCpi0inFV_stack_5->SetBinContent(0,0.0127502);
   hNCpi0inFV_stack_5->SetBinContent(1,0.07470649);
   hNCpi0inFV_stack_5->SetBinContent(2,0.5884911);
   hNCpi0inFV_stack_5->SetBinContent(3,7.157278);
   hNCpi0inFV_stack_5->SetBinContent(4,13.63498);
   hNCpi0inFV_stack_5->SetBinContent(5,15.62659);
   hNCpi0inFV_stack_5->SetBinContent(6,17.2554);
   hNCpi0inFV_stack_5->SetBinContent(7,19.97591);
   hNCpi0inFV_stack_5->SetBinContent(8,18.4015);
   hNCpi0inFV_stack_5->SetBinContent(9,17.22452);
   hNCpi0inFV_stack_5->SetBinContent(10,17.4323);
   hNCpi0inFV_stack_5->SetBinContent(11,17.57539);
   hNCpi0inFV_stack_5->SetBinContent(12,17.6108);
   hNCpi0inFV_stack_5->SetBinContent(13,17.77534);
   hNCpi0inFV_stack_5->SetBinContent(14,16.79064);
   hNCpi0inFV_stack_5->SetBinContent(15,18.08619);
   hNCpi0inFV_stack_5->SetBinContent(16,14.40763);
   hNCpi0inFV_stack_5->SetBinContent(17,16.86733);
   hNCpi0inFV_stack_5->SetBinContent(18,16.80735);
   hNCpi0inFV_stack_5->SetBinContent(19,17.77296);
   hNCpi0inFV_stack_5->SetBinContent(20,15.10903);
   hNCpi0inFV_stack_5->SetBinContent(21,16.73425);
   hNCpi0inFV_stack_5->SetBinContent(22,11.6596);
   hNCpi0inFV_stack_5->SetBinContent(23,7.594562);
   hNCpi0inFV_stack_5->SetBinContent(24,1.410262);
   hNCpi0inFV_stack_5->SetBinContent(26,0.07470649);
   hNCpi0inFV_stack_5->SetBinError(0,0.0127502);
   hNCpi0inFV_stack_5->SetBinError(1,0.06325464);
   hNCpi0inFV_stack_5->SetBinError(2,0.1606087);
   hNCpi0inFV_stack_5->SetBinError(3,0.622072);
   hNCpi0inFV_stack_5->SetBinError(4,0.8572385);
   hNCpi0inFV_stack_5->SetBinError(5,0.9261456);
   hNCpi0inFV_stack_5->SetBinError(6,0.9629596);
   hNCpi0inFV_stack_5->SetBinError(7,1.041116);
   hNCpi0inFV_stack_5->SetBinError(8,0.9937976);
   hNCpi0inFV_stack_5->SetBinError(9,0.9674934);
   hNCpi0inFV_stack_5->SetBinError(10,0.9766963);
   hNCpi0inFV_stack_5->SetBinError(11,0.9608619);
   hNCpi0inFV_stack_5->SetBinError(12,0.9778608);
   hNCpi0inFV_stack_5->SetBinError(13,0.9820605);
   hNCpi0inFV_stack_5->SetBinError(14,0.9422476);
   hNCpi0inFV_stack_5->SetBinError(15,0.9918011);
   hNCpi0inFV_stack_5->SetBinError(16,0.878814);
   hNCpi0inFV_stack_5->SetBinError(17,0.9540171);
   hNCpi0inFV_stack_5->SetBinError(18,0.9615754);
   hNCpi0inFV_stack_5->SetBinError(19,0.9820268);
   hNCpi0inFV_stack_5->SetBinError(20,0.905903);
   hNCpi0inFV_stack_5->SetBinError(21,0.9467088);
   hNCpi0inFV_stack_5->SetBinError(22,0.7842844);
   hNCpi0inFV_stack_5->SetBinError(23,0.638586);
   hNCpi0inFV_stack_5->SetBinError(24,0.2642116);
   hNCpi0inFV_stack_5->SetBinError(26,0.06325464);
   hNCpi0inFV_stack_5->SetEntries(8770);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hCCpi0inFV_stack_6->SetBinContent(0,0.03825059);
   hCCpi0inFV_stack_6->SetBinContent(1,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(2,0.7452702);
   hCCpi0inFV_stack_6->SetBinContent(3,2.144196);
   hCCpi0inFV_stack_6->SetBinContent(4,4.534905);
   hCCpi0inFV_stack_6->SetBinContent(5,5.048213);
   hCCpi0inFV_stack_6->SetBinContent(6,4.694167);
   hCCpi0inFV_stack_6->SetBinContent(7,5.256945);
   hCCpi0inFV_stack_6->SetBinContent(8,5.463024);
   hCCpi0inFV_stack_6->SetBinContent(9,5.106814);
   hCCpi0inFV_stack_6->SetBinContent(10,5.831299);
   hCCpi0inFV_stack_6->SetBinContent(11,5.59332);
   hCCpi0inFV_stack_6->SetBinContent(12,5.32516);
   hCCpi0inFV_stack_6->SetBinContent(13,6.391973);
   hCCpi0inFV_stack_6->SetBinContent(14,5.08851);
   hCCpi0inFV_stack_6->SetBinContent(15,7.044922);
   hCCpi0inFV_stack_6->SetBinContent(16,5.229165);
   hCCpi0inFV_stack_6->SetBinContent(17,5.490002);
   hCCpi0inFV_stack_6->SetBinContent(18,5.358068);
   hCCpi0inFV_stack_6->SetBinContent(19,4.789817);
   hCCpi0inFV_stack_6->SetBinContent(20,5.182123);
   hCCpi0inFV_stack_6->SetBinContent(21,5.260051);
   hCCpi0inFV_stack_6->SetBinContent(22,4.404093);
   hCCpi0inFV_stack_6->SetBinContent(23,3.155334);
   hCCpi0inFV_stack_6->SetBinContent(24,0.7944915);
   hCCpi0inFV_stack_6->SetBinContent(25,0.06195629);
   hCCpi0inFV_stack_6->SetBinError(0,0.02208399);
   hCCpi0inFV_stack_6->SetBinError(1,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(2,0.2074542);
   hCCpi0inFV_stack_6->SetBinError(3,0.3374277);
   hCCpi0inFV_stack_6->SetBinError(4,0.4885905);
   hCCpi0inFV_stack_6->SetBinError(5,0.51955);
   hCCpi0inFV_stack_6->SetBinError(6,0.5081449);
   hCCpi0inFV_stack_6->SetBinError(7,0.5418423);
   hCCpi0inFV_stack_6->SetBinError(8,0.547791);
   hCCpi0inFV_stack_6->SetBinError(9,0.5248772);
   hCCpi0inFV_stack_6->SetBinError(10,0.558534);
   hCCpi0inFV_stack_6->SetBinError(11,0.550703);
   hCCpi0inFV_stack_6->SetBinError(12,0.5380048);
   hCCpi0inFV_stack_6->SetBinError(13,0.593331);
   hCCpi0inFV_stack_6->SetBinError(14,0.5335354);
   hCCpi0inFV_stack_6->SetBinError(15,0.6242564);
   hCCpi0inFV_stack_6->SetBinError(16,0.5318854);
   hCCpi0inFV_stack_6->SetBinError(17,0.54744);
   hCCpi0inFV_stack_6->SetBinError(18,0.5351682);
   hCCpi0inFV_stack_6->SetBinError(19,0.5082841);
   hCCpi0inFV_stack_6->SetBinError(20,0.5287128);
   hCCpi0inFV_stack_6->SetBinError(21,0.5392865);
   hCCpi0inFV_stack_6->SetBinError(22,0.4920562);
   hCCpi0inFV_stack_6->SetBinError(23,0.4083524);
   hCCpi0inFV_stack_6->SetBinError(24,0.2121432);
   hCCpi0inFV_stack_6->SetBinError(25,0.06195629);
   hCCpi0inFV_stack_6->SetEntries(2809);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hNCinFV_stack_7->SetBinContent(2,0.0127502);
   hNCinFV_stack_7->SetBinContent(3,0.8582273);
   hNCinFV_stack_7->SetBinContent(4,1.280966);
   hNCinFV_stack_7->SetBinContent(5,1.24451);
   hNCinFV_stack_7->SetBinContent(6,1.432173);
   hNCinFV_stack_7->SetBinContent(7,1.404878);
   hNCinFV_stack_7->SetBinContent(8,1.206259);
   hNCinFV_stack_7->SetBinContent(9,1.430379);
   hNCinFV_stack_7->SetBinContent(10,1.271805);
   hNCinFV_stack_7->SetBinContent(11,1.596131);
   hNCinFV_stack_7->SetBinContent(12,1.421218);
   hNCinFV_stack_7->SetBinContent(13,1.171598);
   hNCinFV_stack_7->SetBinContent(14,1.556086);
   hNCinFV_stack_7->SetBinContent(15,1.233554);
   hNCinFV_stack_7->SetBinContent(16,1.816661);
   hNCinFV_stack_7->SetBinContent(17,1.495924);
   hNCinFV_stack_7->SetBinContent(18,1.470424);
   hNCinFV_stack_7->SetBinContent(19,1.158848);
   hNCinFV_stack_7->SetBinContent(20,1.246305);
   hNCinFV_stack_7->SetBinContent(21,1.120597);
   hNCinFV_stack_7->SetBinContent(22,1.355672);
   hNCinFV_stack_7->SetBinContent(23,0.6960641);
   hNCinFV_stack_7->SetBinContent(24,0.08921645);
   hNCinFV_stack_7->SetBinContent(26,0.0127502);
   hNCinFV_stack_7->SetBinError(2,0.0127502);
   hNCinFV_stack_7->SetBinError(3,0.2180048);
   hNCinFV_stack_7->SetBinError(4,0.266848);
   hNCinFV_stack_7->SetBinError(5,0.2601815);
   hNCinFV_stack_7->SetBinError(6,0.2760152);
   hNCinFV_stack_7->SetBinError(7,0.2808648);
   hNCinFV_stack_7->SetBinError(8,0.2592426);
   hNCinFV_stack_7->SetBinError(9,0.281443);
   hNCinFV_stack_7->SetBinError(10,0.2549388);
   hNCinFV_stack_7->SetBinError(11,0.2851728);
   hNCinFV_stack_7->SetBinError(12,0.2701779);
   hNCinFV_stack_7->SetBinError(13,0.2463078);
   hNCinFV_stack_7->SetBinError(14,0.2895886);
   hNCinFV_stack_7->SetBinError(15,0.2539805);
   hNCinFV_stack_7->SetBinError(16,0.3152435);
   hNCinFV_stack_7->SetBinError(17,0.2774838);
   hNCinFV_stack_7->SetBinError(18,0.2768973);
   hNCinFV_stack_7->SetBinError(19,0.2459775);
   hNCinFV_stack_7->SetBinError(20,0.2543003);
   hNCinFV_stack_7->SetBinError(21,0.2449842);
   hNCinFV_stack_7->SetBinError(22,0.2742426);
   hNCinFV_stack_7->SetBinError(23,0.1983966);
   hNCinFV_stack_7->SetBinError(24,0.06455086);
   hNCinFV_stack_7->SetBinError(26,0.0127502);
   hNCinFV_stack_7->SetEntries(744);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hnumuCCinFV_stack_8->SetBinContent(2,0.07931175);
   hnumuCCinFV_stack_8->SetBinContent(3,0.9641857);
   hnumuCCinFV_stack_8->SetBinContent(4,1.308326);
   hnumuCCinFV_stack_8->SetBinContent(5,2.392004);
   hnumuCCinFV_stack_8->SetBinContent(6,2.103217);
   hnumuCCinFV_stack_8->SetBinContent(7,2.013106);
   hnumuCCinFV_stack_8->SetBinContent(8,2.128193);
   hnumuCCinFV_stack_8->SetBinContent(9,2.687891);
   hnumuCCinFV_stack_8->SetBinContent(10,1.818956);
   hnumuCCinFV_stack_8->SetBinContent(11,2.481962);
   hnumuCCinFV_stack_8->SetBinContent(12,2.279097);
   hnumuCCinFV_stack_8->SetBinContent(13,2.539524);
   hnumuCCinFV_stack_8->SetBinContent(14,2.649198);
   hnumuCCinFV_stack_8->SetBinContent(15,2.684408);
   hnumuCCinFV_stack_8->SetBinContent(16,2.53592);
   hnumuCCinFV_stack_8->SetBinContent(17,3.420755);
   hnumuCCinFV_stack_8->SetBinContent(18,2.548551);
   hnumuCCinFV_stack_8->SetBinContent(19,2.541751);
   hnumuCCinFV_stack_8->SetBinContent(20,2.686224);
   hnumuCCinFV_stack_8->SetBinContent(21,2.098865);
   hnumuCCinFV_stack_8->SetBinContent(22,1.687679);
   hnumuCCinFV_stack_8->SetBinContent(23,1.080825);
   hnumuCCinFV_stack_8->SetBinContent(24,0.5370419);
   hnumuCCinFV_stack_8->SetBinError(2,0.07931175);
   hnumuCCinFV_stack_8->SetBinError(3,0.4690925);
   hnumuCCinFV_stack_8->SetBinError(4,0.2724696);
   hnumuCCinFV_stack_8->SetBinError(5,0.4465047);
   hnumuCCinFV_stack_8->SetBinError(6,0.3827192);
   hnumuCCinFV_stack_8->SetBinError(7,0.3666611);
   hnumuCCinFV_stack_8->SetBinError(8,0.3868825);
   hnumuCCinFV_stack_8->SetBinError(9,0.4794443);
   hnumuCCinFV_stack_8->SetBinError(10,0.5013699);
   hnumuCCinFV_stack_8->SetBinError(11,0.4293656);
   hnumuCCinFV_stack_8->SetBinError(12,0.3935585);
   hnumuCCinFV_stack_8->SetBinError(13,0.380897);
   hnumuCCinFV_stack_8->SetBinError(14,0.5487091);
   hnumuCCinFV_stack_8->SetBinError(15,0.4343998);
   hnumuCCinFV_stack_8->SetBinError(16,0.4532972);
   hnumuCCinFV_stack_8->SetBinError(17,0.7072277);
   hnumuCCinFV_stack_8->SetBinError(18,0.3944954);
   hnumuCCinFV_stack_8->SetBinError(19,0.4499885);
   hnumuCCinFV_stack_8->SetBinError(20,0.5525165);
   hnumuCCinFV_stack_8->SetBinError(21,0.3423762);
   hnumuCCinFV_stack_8->SetBinError(22,0.3125494);
   hnumuCCinFV_stack_8->SetBinError(23,0.325884);
   hnumuCCinFV_stack_8->SetBinError(24,0.1762696);
   hnumuCCinFV_stack_8->SetEntries(1106);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hnueCCinFV_stack_9->SetBinContent(3,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(4,0.1093335);
   hnueCCinFV_stack_9->SetBinContent(5,0.108275);
   hnueCCinFV_stack_9->SetBinContent(6,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(7,0.04171441);
   hnueCCinFV_stack_9->SetBinContent(8,0.2311594);
   hnueCCinFV_stack_9->SetBinContent(9,0.390545);
   hnueCCinFV_stack_9->SetBinContent(10,0.1391963);
   hnueCCinFV_stack_9->SetBinContent(11,0.2790854);
   hnueCCinFV_stack_9->SetBinContent(12,0.1405905);
   hnueCCinFV_stack_9->SetBinContent(13,0.6350379);
   hnueCCinFV_stack_9->SetBinContent(14,0.1547106);
   hnueCCinFV_stack_9->SetBinContent(15,0.3478829);
   hnueCCinFV_stack_9->SetBinContent(16,0.1110976);
   hnueCCinFV_stack_9->SetBinContent(17,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(18,0.08715316);
   hnueCCinFV_stack_9->SetBinContent(19,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(20,0.3341286);
   hnueCCinFV_stack_9->SetBinContent(21,0.03407444);
   hnueCCinFV_stack_9->SetBinContent(22,0.06471778);
   hnueCCinFV_stack_9->SetBinContent(23,0.1517665);
   hnueCCinFV_stack_9->SetBinContent(24,0.01459277);
   hnueCCinFV_stack_9->SetBinError(3,0.06195629);
   hnueCCinFV_stack_9->SetBinError(4,0.08137791);
   hnueCCinFV_stack_9->SetBinError(5,0.06760133);
   hnueCCinFV_stack_9->SetBinError(6,0.06452687);
   hnueCCinFV_stack_9->SetBinError(7,0.02424932);
   hnueCCinFV_stack_9->SetBinError(8,0.1105173);
   hnueCCinFV_stack_9->SetBinError(9,0.1527765);
   hnueCCinFV_stack_9->SetBinError(10,0.08132897);
   hnueCCinFV_stack_9->SetBinError(11,0.1480925);
   hnueCCinFV_stack_9->SetBinError(12,0.07874359);
   hnueCCinFV_stack_9->SetBinError(13,0.4783851);
   hnueCCinFV_stack_9->SetBinError(14,0.1019893);
   hnueCCinFV_stack_9->SetBinError(15,0.1509596);
   hnueCCinFV_stack_9->SetBinError(16,0.07417684);
   hnueCCinFV_stack_9->SetBinError(17,0.06452687);
   hnueCCinFV_stack_9->SetBinError(18,0.06446758);
   hnueCCinFV_stack_9->SetBinError(19,0.08761943);
   hnueCCinFV_stack_9->SetBinError(20,0.1401149);
   hnueCCinFV_stack_9->SetBinError(21,0.02422398);
   hnueCCinFV_stack_9->SetBinError(22,0.03273535);
   hnueCCinFV_stack_9->SetBinError(23,0.09194023);
   hnueCCinFV_stack_9->SetBinError(24,0.01459277);
   hnueCCinFV_stack_9->SetEntries(88);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);
   hmcerror__5->SetBinContent(0,0.2081669);
   hmcerror__5->SetBinContent(1,0.2368697);
   hmcerror__5->SetBinContent(2,6.158948);
   hmcerror__5->SetBinContent(3,16.51428);
   hmcerror__5->SetBinContent(4,25.30589);
   hmcerror__5->SetBinContent(5,28.96312);
   hmcerror__5->SetBinContent(6,29.59392);
   hmcerror__5->SetBinContent(7,33.32905);
   hmcerror__5->SetBinContent(8,31.51193);
   hmcerror__5->SetBinContent(9,31.85702);
   hmcerror__5->SetBinContent(10,31.74048);
   hmcerror__5->SetBinContent(11,31.55636);
   hmcerror__5->SetBinContent(12,31.2649);
   hmcerror__5->SetBinContent(13,33.08881);
   hmcerror__5->SetBinContent(14,31.49554);
   hmcerror__5->SetBinContent(15,33.4465);
   hmcerror__5->SetBinContent(16,29.57047);
   hmcerror__5->SetBinContent(17,34.1427);
   hmcerror__5->SetBinContent(18,33.42624);
   hmcerror__5->SetBinContent(19,34.51833);
   hmcerror__5->SetBinContent(20,31.57768);
   hmcerror__5->SetBinContent(21,34.28036);
   hmcerror__5->SetBinContent(22,30.38569);
   hmcerror__5->SetBinContent(23,22.35545);
   hmcerror__5->SetBinContent(24,10.70237);
   hmcerror__5->SetBinContent(25,0.1871832);
   hmcerror__5->SetBinContent(26,0.149413);
   hmcerror__5->SetBinError(0,0.0842233);
   hmcerror__5->SetBinError(1,0.433974);
   hmcerror__5->SetBinError(2,2.734679);
   hmcerror__5->SetBinError(3,4.672828);
   hmcerror__5->SetBinError(4,6.53582);
   hmcerror__5->SetBinError(5,7.114717);
   hmcerror__5->SetBinError(6,8.136693);
   hmcerror__5->SetBinError(7,8.392863);
   hmcerror__5->SetBinError(8,7.552167);
   hmcerror__5->SetBinError(9,8.014271);
   hmcerror__5->SetBinError(10,7.832129);
   hmcerror__5->SetBinError(11,7.689076);
   hmcerror__5->SetBinError(12,7.622775);
   hmcerror__5->SetBinError(13,7.900412);
   hmcerror__5->SetBinError(14,8.349244);
   hmcerror__5->SetBinError(15,7.607269);
   hmcerror__5->SetBinError(16,7.894033);
   hmcerror__5->SetBinError(17,8.252412);
   hmcerror__5->SetBinError(18,7.710941);
   hmcerror__5->SetBinError(19,9.659758);
   hmcerror__5->SetBinError(20,7.251926);
   hmcerror__5->SetBinError(21,7.329363);
   hmcerror__5->SetBinError(22,5.812163);
   hmcerror__5->SetBinError(23,5.086116);
   hmcerror__5->SetBinError(24,2.932797);
   hmcerror__5->SetBinError(25,0.3338336);
   hmcerror__5->SetBinError(26,0.3014942);
   hmcerror__5->SetEntries(648.6285);

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
   
   Double_t _fx3005[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3005[25] = {
   0,
   6,
   13,
   25,
   18,
   15,
   26,
   33,
   19,
   35,
   26,
   25,
   23,
   27,
   28,
   32,
   27,
   29,
   28,
   26,
   28,
   24,
   20,
   13,
   0};
   Double_t _felx3005[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3005[25] = {
   0,
   2.67925,
   3.77763,
   5.1474,
   4.4008,
   4.0385,
   5.2453,
   5.8847,
   4.5151,
   6.0548,
   5.2453,
   5.1474,
   4.9457,
   5.3414,
   5.4358,
   5.7977,
   5.3414,
   5.5285,
   5.4358,
   5.2453,
   5.4358,
   5.0476,
   4.6266,
   3.77763,
   0};
   Double_t _fehx3005[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3005[25] = {
   1.1478,
   2.41858,
   3.5552,
   4.9374,
   4.1858,
   3.8197,
   5.0358,
   5.6776,
   4.3011,
   5.8483,
   5.0358,
   4.9374,
   4.7346,
   5.1322,
   5.2271,
   5.5904,
   5.1322,
   5.3201,
   5.2271,
   5.0358,
   5.2271,
   4.837,
   4.4133,
   3.5552,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-156,156);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(44.93313);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.83#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.34/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 546.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 14.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 50.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 66.3","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  333.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 108.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 27.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 47.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3006[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3006[25] = {
   1.832122,
   0.4440172,
   0.2829568,
   0.2582726,
   0.2456474,
   0.2749448,
   0.2518183,
   0.2396606,
   0.2515701,
   0.2467552,
   0.2436617,
   0.2438125,
   0.2387638,
   0.2650929,
   0.2274459,
   0.2669567,
   0.2417036,
   0.2306852,
   0.2798443,
   0.2296536,
   0.2138065,
   0.1912796,
   0.2275113,
   0.2740324,
   1.783459};
   Double_t _fehx3006[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3006[25] = {
   1.832122,
   0.4440172,
   0.2829568,
   0.2582726,
   0.2456474,
   0.2749448,
   0.2518183,
   0.2396606,
   0.2515701,
   0.2467552,
   0.2436617,
   0.2438125,
   0.2387638,
   0.2650929,
   0.2274459,
   0.2669567,
   0.2417036,
   0.2306852,
   0.2798443,
   0.2296536,
   0.2138065,
   0.1912796,
   0.2275113,
   0.2740324,
   1.783459};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-156,156);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Vertex Y [cm]");
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
   
   Double_t _fx3007[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3007[25] = {
   0.773218,
   0.2343772,
   0.2114388,
   0.2177492,
   0.2079122,
   0.2141648,
   0.2203345,
   0.2150356,
   0.1931176,
   0.2108633,
   0.2109214,
   0.1965836,
   0.1978585,
   0.1936615,
   0.1981596,
   0.1934315,
   0.1878771,
   0.1896778,
   0.1907975,
   0.1869026,
   0.1730848,
   0.1631009,
   0.1867368,
   0.1801219,
   0.8808445};
   Double_t _fehx3007[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3007[25] = {
   0.773218,
   0.2343772,
   0.2114388,
   0.2177492,
   0.2079122,
   0.2141648,
   0.2203345,
   0.2150356,
   0.1931176,
   0.2108633,
   0.2109214,
   0.1965836,
   0.1978585,
   0.1936615,
   0.1981596,
   0.1934315,
   0.1878771,
   0.1896778,
   0.1907975,
   0.1869026,
   0.1730848,
   0.1631009,
   0.1867368,
   0.1801219,
   0.8808445};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-156,156);
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
   
   Double_t _fx3008[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3008[25] = {
   0,
   0.9741924,
   0.7871976,
   0.9879121,
   0.62148,
   0.5068608,
   0.7801003,
   1.047222,
   0.5964149,
   1.102693,
   0.8239228,
   0.7996186,
   0.695099,
   0.8572642,
   0.8371579,
   1.082161,
   0.7907987,
   0.8675818,
   0.8111632,
   0.8233665,
   0.8167943,
   0.7898455,
   0.8946366,
   1.214684,
   0};
   Double_t _felx3008[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3008[25] = {
   0,
   0.4350175,
   0.2287493,
   0.2034072,
   0.1519449,
   0.1364638,
   0.1573792,
   0.1867451,
   0.1417302,
   0.1907596,
   0.1662201,
   0.1646383,
   0.1494674,
   0.1695923,
   0.1625222,
   0.1960639,
   0.1564434,
   0.165394,
   0.1574758,
   0.1661079,
   0.1585689,
   0.1661177,
   0.2069563,
   0.3529712,
   0};
   Double_t _fehx3008[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3008[25] = {
   4.845703,
   0.3926937,
   0.2152804,
   0.1951087,
   0.1445217,
   0.1290704,
   0.1510934,
   0.180173,
   0.1350126,
   0.1842537,
   0.1595812,
   0.1579215,
   0.1430876,
   0.16295,
   0.1562824,
   0.1890535,
   0.1503162,
   0.1591594,
   0.1514297,
   0.1594734,
   0.1524809,
   0.1591868,
   0.197415,
   0.332188,
   6.13196};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-156,156);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(6.745156);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_bnb_10_reco_nuvtxY_all",25,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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

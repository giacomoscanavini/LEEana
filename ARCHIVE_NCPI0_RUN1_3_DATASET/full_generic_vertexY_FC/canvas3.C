#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Jun  1 17:00:39 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
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
   pad1->Range(-170,-218.3875,163.3333,22999.65);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__7->SetBinContent(0,31.99994);
   hmc__7->SetBinContent(1,12.8114);
   hmc__7->SetBinContent(2,3071.513);
   hmc__7->SetBinContent(3,7495.485);
   hmc__7->SetBinContent(4,8977.624);
   hmc__7->SetBinContent(5,9466.273);
   hmc__7->SetBinContent(6,9621.805);
   hmc__7->SetBinContent(7,9666.941);
   hmc__7->SetBinContent(8,9695.161);
   hmc__7->SetBinContent(9,9590.235);
   hmc__7->SetBinContent(10,9649.313);
   hmc__7->SetBinContent(11,9595.96);
   hmc__7->SetBinContent(12,9519.91);
   hmc__7->SetBinContent(13,10081);
   hmc__7->SetBinContent(14,9589.202);
   hmc__7->SetBinContent(15,9586.516);
   hmc__7->SetBinContent(16,9867.549);
   hmc__7->SetBinContent(17,9833.419);
   hmc__7->SetBinContent(18,9873.469);
   hmc__7->SetBinContent(19,10099.13);
   hmc__7->SetBinContent(20,10362.29);
   hmc__7->SetBinContent(21,10572.34);
   hmc__7->SetBinContent(22,10919.38);
   hmc__7->SetBinContent(23,10825.21);
   hmc__7->SetBinContent(24,10151.07);
   hmc__7->SetBinContent(25,7040.983);
   hmc__7->SetBinContent(26,21.08028);
   hmc__7->SetBinContent(27,43.83417);
   hmc__7->SetBinError(0,3.134893);
   hmc__7->SetBinError(1,9.06745);
   hmc__7->SetBinError(2,425.0998);
   hmc__7->SetBinError(3,1038.627);
   hmc__7->SetBinError(4,1243.047);
   hmc__7->SetBinError(5,1288.721);
   hmc__7->SetBinError(6,1350.168);
   hmc__7->SetBinError(7,1303.405);
   hmc__7->SetBinError(8,1358.948);
   hmc__7->SetBinError(9,1302.901);
   hmc__7->SetBinError(10,1304.046);
   hmc__7->SetBinError(11,1316.668);
   hmc__7->SetBinError(12,1294.389);
   hmc__7->SetBinError(13,1297.712);
   hmc__7->SetBinError(14,1326.38);
   hmc__7->SetBinError(15,1276.295);
   hmc__7->SetBinError(16,1329.027);
   hmc__7->SetBinError(17,1290.376);
   hmc__7->SetBinError(18,1266.254);
   hmc__7->SetBinError(19,1300.798);
   hmc__7->SetBinError(20,1303.758);
   hmc__7->SetBinError(21,1265.874);
   hmc__7->SetBinError(22,1338.773);
   hmc__7->SetBinError(23,1278.533);
   hmc__7->SetBinError(24,1044.415);
   hmc__7->SetBinError(25,686.0931);
   hmc__7->SetBinError(26,9.38803);
   hmc__7->SetBinError(27,18.84656);
   hmc__7->SetMinimum(-218.3875);
   hmc__7->SetMaximum(21838.75);
   hmc__7->SetEntries(201139.1);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",26,-130,130);
   hs3_stack_3->SetMinimum(-3.646956e-09);
   hs3_stack_3->SetMaximum(11465.35);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(0,1.827503);
   hbadmatch_stack_1->SetBinContent(1,0.6047786);
   hbadmatch_stack_1->SetBinContent(2,264.3041);
   hbadmatch_stack_1->SetBinContent(3,401.7302);
   hbadmatch_stack_1->SetBinContent(4,247.4531);
   hbadmatch_stack_1->SetBinContent(5,230.2717);
   hbadmatch_stack_1->SetBinContent(6,227.3125);
   hbadmatch_stack_1->SetBinContent(7,222.1753);
   hbadmatch_stack_1->SetBinContent(8,196.6593);
   hbadmatch_stack_1->SetBinContent(9,194.6313);
   hbadmatch_stack_1->SetBinContent(10,211.3349);
   hbadmatch_stack_1->SetBinContent(11,204.695);
   hbadmatch_stack_1->SetBinContent(12,199.7968);
   hbadmatch_stack_1->SetBinContent(13,264.404);
   hbadmatch_stack_1->SetBinContent(14,193.7949);
   hbadmatch_stack_1->SetBinContent(15,199.5304);
   hbadmatch_stack_1->SetBinContent(16,203.3647);
   hbadmatch_stack_1->SetBinContent(17,216.0267);
   hbadmatch_stack_1->SetBinContent(18,223.2825);
   hbadmatch_stack_1->SetBinContent(19,263.9288);
   hbadmatch_stack_1->SetBinContent(20,281.8558);
   hbadmatch_stack_1->SetBinContent(21,309.2751);
   hbadmatch_stack_1->SetBinContent(22,311.2003);
   hbadmatch_stack_1->SetBinContent(23,320.3192);
   hbadmatch_stack_1->SetBinContent(24,506.2619);
   hbadmatch_stack_1->SetBinContent(25,415.781);
   hbadmatch_stack_1->SetBinContent(26,2.687686);
   hbadmatch_stack_1->SetBinContent(27,3.607955);
   hbadmatch_stack_1->SetBinError(0,0.7105163);
   hbadmatch_stack_1->SetBinError(1,0.3494525);
   hbadmatch_stack_1->SetBinError(2,10.10466);
   hbadmatch_stack_1->SetBinError(3,12.72617);
   hbadmatch_stack_1->SetBinError(4,10.26063);
   hbadmatch_stack_1->SetBinError(5,10.49925);
   hbadmatch_stack_1->SetBinError(6,9.997498);
   hbadmatch_stack_1->SetBinError(7,8.683444);
   hbadmatch_stack_1->SetBinError(8,8.52812);
   hbadmatch_stack_1->SetBinError(9,8.333731);
   hbadmatch_stack_1->SetBinError(10,9.953895);
   hbadmatch_stack_1->SetBinError(11,9.522443);
   hbadmatch_stack_1->SetBinError(12,8.837944);
   hbadmatch_stack_1->SetBinError(13,9.552022);
   hbadmatch_stack_1->SetBinError(14,10.70356);
   hbadmatch_stack_1->SetBinError(15,11.17054);
   hbadmatch_stack_1->SetBinError(16,8.209918);
   hbadmatch_stack_1->SetBinError(17,9.674373);
   hbadmatch_stack_1->SetBinError(18,10.05188);
   hbadmatch_stack_1->SetBinError(19,11.47495);
   hbadmatch_stack_1->SetBinError(20,10.48335);
   hbadmatch_stack_1->SetBinError(21,10.01917);
   hbadmatch_stack_1->SetBinError(22,9.924613);
   hbadmatch_stack_1->SetBinError(23,11.7839);
   hbadmatch_stack_1->SetBinError(24,16.75116);
   hbadmatch_stack_1->SetBinError(25,12.7171);
   hbadmatch_stack_1->SetBinError(26,1.690922);
   hbadmatch_stack_1->SetBinError(27,1.00133);
   hbadmatch_stack_1->SetEntries(23972);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1454;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(0,9.335775);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,609.1172);
   hext_stack_2->SetBinContent(3,1194.34);
   hext_stack_2->SetBinContent(4,831.6091);
   hext_stack_2->SetBinContent(5,714.1788);
   hext_stack_2->SetBinContent(6,703.338);
   hext_stack_2->SetBinContent(7,704.4233);
   hext_stack_2->SetBinContent(8,790.2592);
   hext_stack_2->SetBinContent(9,801.3523);
   hext_stack_2->SetBinContent(10,847.4783);
   hext_stack_2->SetBinContent(11,863.4829);
   hext_stack_2->SetBinContent(12,888.1118);
   hext_stack_2->SetBinContent(13,1171.397);
   hext_stack_2->SetBinContent(14,967.0177);
   hext_stack_2->SetBinContent(15,1059.51);
   hext_stack_2->SetBinContent(16,1209.085);
   hext_stack_2->SetBinContent(17,1312.841);
   hext_stack_2->SetBinContent(18,1390.406);
   hext_stack_2->SetBinContent(19,1558.449);
   hext_stack_2->SetBinContent(20,1756.434);
   hext_stack_2->SetBinContent(21,1986.5);
   hext_stack_2->SetBinContent(22,2184.306);
   hext_stack_2->SetBinContent(23,2540.977);
   hext_stack_2->SetBinContent(24,3405.367);
   hext_stack_2->SetBinContent(25,3186.929);
   hext_stack_2->SetBinContent(26,6.560196);
   hext_stack_2->SetBinContent(27,14.75838);
   hext_stack_2->SetBinError(0,1.932195);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,17.14146);
   hext_stack_2->SetBinError(3,23.2798);
   hext_stack_2->SetBinError(4,19.81911);
   hext_stack_2->SetBinError(5,18.18085);
   hext_stack_2->SetBinError(6,18.0963);
   hext_stack_2->SetBinError(7,18.02523);
   hext_stack_2->SetBinError(8,19.33241);
   hext_stack_2->SetBinError(9,19.29574);
   hext_stack_2->SetBinError(10,19.82805);
   hext_stack_2->SetBinError(11,20.04467);
   hext_stack_2->SetBinError(12,20.18769);
   hext_stack_2->SetBinError(13,22.99857);
   hext_stack_2->SetBinError(14,21.06569);
   hext_stack_2->SetBinError(15,22.06864);
   hext_stack_2->SetBinError(16,23.87864);
   hext_stack_2->SetBinError(17,24.79246);
   hext_stack_2->SetBinError(18,25.41315);
   hext_stack_2->SetBinError(19,26.88805);
   hext_stack_2->SetBinError(20,28.67322);
   hext_stack_2->SetBinError(21,30.68778);
   hext_stack_2->SetBinError(22,32.16327);
   hext_stack_2->SetBinError(23,34.78983);
   hext_stack_2->SetBinError(24,39.89845);
   hext_stack_2->SetBinError(25,38.68687);
   hext_stack_2->SetBinError(26,1.643863);
   hext_stack_2->SetBinError(27,2.449446);
   hext_stack_2->SetEntries(75986);

   ci = 1455;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,1.601496);
   hdirt_stack_3->SetBinContent(2,401.0541);
   hdirt_stack_3->SetBinContent(3,440.1478);
   hdirt_stack_3->SetBinContent(4,310.4568);
   hdirt_stack_3->SetBinContent(5,303.6579);
   hdirt_stack_3->SetBinContent(6,295.3534);
   hdirt_stack_3->SetBinContent(7,265.5909);
   hdirt_stack_3->SetBinContent(8,262.7216);
   hdirt_stack_3->SetBinContent(9,252.2537);
   hdirt_stack_3->SetBinContent(10,228.5737);
   hdirt_stack_3->SetBinContent(11,223.5183);
   hdirt_stack_3->SetBinContent(12,215.6881);
   hdirt_stack_3->SetBinContent(13,228.6709);
   hdirt_stack_3->SetBinContent(14,203.6631);
   hdirt_stack_3->SetBinContent(15,209.9179);
   hdirt_stack_3->SetBinContent(16,208.9235);
   hdirt_stack_3->SetBinContent(17,219.5257);
   hdirt_stack_3->SetBinContent(18,227.6491);
   hdirt_stack_3->SetBinContent(19,249.6095);
   hdirt_stack_3->SetBinContent(20,280.0475);
   hdirt_stack_3->SetBinContent(21,284.5165);
   hdirt_stack_3->SetBinContent(22,311.4396);
   hdirt_stack_3->SetBinContent(23,357.6476);
   hdirt_stack_3->SetBinContent(24,379.9193);
   hdirt_stack_3->SetBinContent(25,692.7656);
   hdirt_stack_3->SetBinContent(26,1.060077);
   hdirt_stack_3->SetBinContent(27,2.834296);
   hdirt_stack_3->SetBinError(0,0.6338083);
   hdirt_stack_3->SetBinError(2,12.29679);
   hdirt_stack_3->SetBinError(3,13.17066);
   hdirt_stack_3->SetBinError(4,10.69301);
   hdirt_stack_3->SetBinError(5,11.26284);
   hdirt_stack_3->SetBinError(6,10.8858);
   hdirt_stack_3->SetBinError(7,10.85001);
   hdirt_stack_3->SetBinError(8,11.2041);
   hdirt_stack_3->SetBinError(9,10.85175);
   hdirt_stack_3->SetBinError(10,8.951689);
   hdirt_stack_3->SetBinError(11,10.12577);
   hdirt_stack_3->SetBinError(12,9.315792);
   hdirt_stack_3->SetBinError(13,8.892328);
   hdirt_stack_3->SetBinError(14,8.497034);
   hdirt_stack_3->SetBinError(15,8.556404);
   hdirt_stack_3->SetBinError(16,8.755091);
   hdirt_stack_3->SetBinError(17,9.145627);
   hdirt_stack_3->SetBinError(18,10.00169);
   hdirt_stack_3->SetBinError(19,11.18611);
   hdirt_stack_3->SetBinError(20,11.34327);
   hdirt_stack_3->SetBinError(21,10.3968);
   hdirt_stack_3->SetBinError(22,10.34677);
   hdirt_stack_3->SetBinError(23,12.65754);
   hdirt_stack_3->SetBinError(24,11.84638);
   hdirt_stack_3->SetBinError(25,17.11345);
   hdirt_stack_3->SetBinError(26,0.5635077);
   hdirt_stack_3->SetBinError(27,0.941552);
   hdirt_stack_3->SetEntries(28480);

   ci = 1456;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,8.304628);
   houtFV_stack_4->SetBinContent(1,7.820806);
   houtFV_stack_4->SetBinContent(2,1004.567);
   houtFV_stack_4->SetBinContent(3,964.0445);
   houtFV_stack_4->SetBinContent(4,496.2994);
   houtFV_stack_4->SetBinContent(5,460.9242);
   houtFV_stack_4->SetBinContent(6,404.1107);
   houtFV_stack_4->SetBinContent(7,386.5617);
   houtFV_stack_4->SetBinContent(8,380.2415);
   houtFV_stack_4->SetBinContent(9,381.6292);
   houtFV_stack_4->SetBinContent(10,373.9003);
   houtFV_stack_4->SetBinContent(11,373.9096);
   houtFV_stack_4->SetBinContent(12,359.9734);
   houtFV_stack_4->SetBinContent(13,381.6605);
   houtFV_stack_4->SetBinContent(14,386.8831);
   houtFV_stack_4->SetBinContent(15,359.8795);
   houtFV_stack_4->SetBinContent(16,380.9106);
   houtFV_stack_4->SetBinContent(17,360.1022);
   houtFV_stack_4->SetBinContent(18,368.6958);
   houtFV_stack_4->SetBinContent(19,361.4606);
   houtFV_stack_4->SetBinContent(20,398.5036);
   houtFV_stack_4->SetBinContent(21,395.7997);
   houtFV_stack_4->SetBinContent(22,429.7637);
   houtFV_stack_4->SetBinContent(23,486.0693);
   houtFV_stack_4->SetBinContent(24,735.6476);
   houtFV_stack_4->SetBinContent(25,1566.433);
   houtFV_stack_4->SetBinContent(26,8.756202);
   houtFV_stack_4->SetBinContent(27,6.786055);
   houtFV_stack_4->SetBinError(0,1.40762);
   houtFV_stack_4->SetBinError(1,1.387778);
   houtFV_stack_4->SetBinError(2,18.80529);
   houtFV_stack_4->SetBinError(3,18.24678);
   houtFV_stack_4->SetBinError(4,12.86699);
   houtFV_stack_4->SetBinError(5,12.64158);
   houtFV_stack_4->SetBinError(6,11.53861);
   houtFV_stack_4->SetBinError(7,10.96401);
   houtFV_stack_4->SetBinError(8,10.82844);
   houtFV_stack_4->SetBinError(9,11.28376);
   houtFV_stack_4->SetBinError(10,11.14726);
   houtFV_stack_4->SetBinError(11,12.24207);
   houtFV_stack_4->SetBinError(12,11.32224);
   houtFV_stack_4->SetBinError(13,11.39163);
   houtFV_stack_4->SetBinError(14,12.43731);
   houtFV_stack_4->SetBinError(15,10.77194);
   houtFV_stack_4->SetBinError(16,11.84241);
   houtFV_stack_4->SetBinError(17,10.76355);
   houtFV_stack_4->SetBinError(18,11.85494);
   houtFV_stack_4->SetBinError(19,11.42164);
   houtFV_stack_4->SetBinError(20,12.45661);
   houtFV_stack_4->SetBinError(21,11.07258);
   houtFV_stack_4->SetBinError(22,11.61068);
   houtFV_stack_4->SetBinError(23,12.55003);
   houtFV_stack_4->SetBinError(24,16.42071);
   houtFV_stack_4->SetBinError(25,24.70689);
   houtFV_stack_4->SetBinError(26,1.4696);
   houtFV_stack_4->SetBinError(27,1.280557);
   houtFV_stack_4->SetEntries(48988);

   ci = 1457;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.5304361);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.944542);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,7.359807);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.240829);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.811952);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.964237);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,8.183197);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.437626);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,10.33235);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.672947);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,8.131063);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,7.529703);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.779971);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,8.868584);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,9.891006);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,10.12426);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,8.992642);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,8.435297);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.441099);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.585008);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,8.939171);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,9.174324);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,6.192504);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.434694);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.283386);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6280136);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8054503);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9393314);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9753455);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9711129);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8997196);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9452861);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.085245);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9492919);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9749467);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8433381);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8360375);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9859624);
   hNCpi0inFVcoh_stack_5->SetBinError(16,1.072445);
   hNCpi0inFVcoh_stack_5->SetBinError(17,1.088319);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.020841);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9319475);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7632722);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.8712219);
   hNCpi0inFVcoh_stack_5->SetBinError(22,1.032278);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.020014);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8819897);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3465134);
   hNCpi0inFVcoh_stack_5->SetEntries(3360);

   ci = 1458;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,2.510848);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,0.1673999);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,32.05788);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,169.608);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,284.1267);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,320.1361);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,317.3245);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,346.2372);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,343.3571);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,332.8462);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,323.3141);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,342.175);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,332.2847);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,351.4197);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,321.9573);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,324.3782);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,330.4807);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,312.618);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,309.711);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,317.6765);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,329.3758);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,307.6887);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,310.0037);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,290.0133);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,214.1267);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,61.30212);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,0.3205179);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,2.523634);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.5712746);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.06834073);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.805629);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,4.25763);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,5.501813);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,5.852618);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.757909);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,6.12564);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,6.066942);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,5.955461);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,5.82393);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,6.04086);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,5.957068);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,6.033334);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,5.813227);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,5.915843);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,6.006675);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,5.7367);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,5.673834);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,5.805384);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,5.987806);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,5.745881);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,5.789985);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,5.634567);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,4.824539);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,2.561679);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.1252919);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.5605569);
   hNCpi0inFVnoncoh_stack_6->SetEntries(128446);

   ci = 1459;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_7->SetBinContent(0,3.072824);
   hCCpi0inFV_stack_7->SetBinContent(1,0.8770706);
   hCCpi0inFV_stack_7->SetBinContent(2,81.91501);
   hCCpi0inFV_stack_7->SetBinContent(3,462.8939);
   hCCpi0inFV_stack_7->SetBinContent(4,705.0798);
   hCCpi0inFV_stack_7->SetBinContent(5,761.6183);
   hCCpi0inFV_stack_7->SetBinContent(6,762.9483);
   hCCpi0inFV_stack_7->SetBinContent(7,775.3904);
   hCCpi0inFV_stack_7->SetBinContent(8,780.8123);
   hCCpi0inFV_stack_7->SetBinContent(9,760.1427);
   hCCpi0inFV_stack_7->SetBinContent(10,784.7097);
   hCCpi0inFV_stack_7->SetBinContent(11,784.0911);
   hCCpi0inFV_stack_7->SetBinContent(12,756.0269);
   hCCpi0inFV_stack_7->SetBinContent(13,781.4725);
   hCCpi0inFV_stack_7->SetBinContent(14,750.3356);
   hCCpi0inFV_stack_7->SetBinContent(15,751.9968);
   hCCpi0inFV_stack_7->SetBinContent(16,769.9138);
   hCCpi0inFV_stack_7->SetBinContent(17,721.7479);
   hCCpi0inFV_stack_7->SetBinContent(18,743.5991);
   hCCpi0inFV_stack_7->SetBinContent(19,753.3951);
   hCCpi0inFV_stack_7->SetBinContent(20,751.0803);
   hCCpi0inFV_stack_7->SetBinContent(21,731.4755);
   hCCpi0inFV_stack_7->SetBinContent(22,759.0713);
   hCCpi0inFV_stack_7->SetBinContent(23,685.5059);
   hCCpi0inFV_stack_7->SetBinContent(24,514.2814);
   hCCpi0inFV_stack_7->SetBinContent(25,107.6157);
   hCCpi0inFV_stack_7->SetBinContent(26,0.5884556);
   hCCpi0inFV_stack_7->SetBinContent(27,1.660551);
   hCCpi0inFV_stack_7->SetBinError(0,0.9205954);
   hCCpi0inFV_stack_7->SetBinError(1,0.5197486);
   hCCpi0inFV_stack_7->SetBinError(2,4.532984);
   hCCpi0inFV_stack_7->SetBinError(3,10.86559);
   hCCpi0inFV_stack_7->SetBinError(4,13.30319);
   hCCpi0inFV_stack_7->SetBinError(5,13.9747);
   hCCpi0inFV_stack_7->SetBinError(6,13.84344);
   hCCpi0inFV_stack_7->SetBinError(7,13.97004);
   hCCpi0inFV_stack_7->SetBinError(8,14.07103);
   hCCpi0inFV_stack_7->SetBinError(9,13.83672);
   hCCpi0inFV_stack_7->SetBinError(10,14.07053);
   hCCpi0inFV_stack_7->SetBinError(11,14.0416);
   hCCpi0inFV_stack_7->SetBinError(12,13.83412);
   hCCpi0inFV_stack_7->SetBinError(13,14.12775);
   hCCpi0inFV_stack_7->SetBinError(14,13.79523);
   hCCpi0inFV_stack_7->SetBinError(15,13.69878);
   hCCpi0inFV_stack_7->SetBinError(16,13.90605);
   hCCpi0inFV_stack_7->SetBinError(17,13.4937);
   hCCpi0inFV_stack_7->SetBinError(18,13.65949);
   hCCpi0inFV_stack_7->SetBinError(19,13.8116);
   hCCpi0inFV_stack_7->SetBinError(20,13.74467);
   hCCpi0inFV_stack_7->SetBinError(21,13.5657);
   hCCpi0inFV_stack_7->SetBinError(22,13.83239);
   hCCpi0inFV_stack_7->SetBinError(23,13.10603);
   hCCpi0inFV_stack_7->SetBinError(24,11.38521);
   hCCpi0inFV_stack_7->SetBinError(25,5.175927);
   hCCpi0inFV_stack_7->SetBinError(26,0.3397478);
   hCCpi0inFV_stack_7->SetBinError(27,0.650847);
   hCCpi0inFV_stack_7->SetEntries(69445);

   ci = 1460;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_8->SetBinContent(0,1.268811);
   hNCinFV_stack_8->SetBinContent(1,0.7336084);
   hNCinFV_stack_8->SetBinContent(2,58.85923);
   hNCinFV_stack_8->SetBinContent(3,355.9589);
   hNCinFV_stack_8->SetBinContent(4,573.3236);
   hNCinFV_stack_8->SetBinContent(5,616.4531);
   hNCinFV_stack_8->SetBinContent(6,644.0981);
   hNCinFV_stack_8->SetBinContent(7,654.3153);
   hNCinFV_stack_8->SetBinContent(8,626.2234);
   hNCinFV_stack_8->SetBinContent(9,651.1619);
   hNCinFV_stack_8->SetBinContent(10,648.8364);
   hNCinFV_stack_8->SetBinContent(11,664.3127);
   hNCinFV_stack_8->SetBinContent(12,614.7159);
   hNCinFV_stack_8->SetBinContent(13,650.9618);
   hNCinFV_stack_8->SetBinContent(14,620.7562);
   hNCinFV_stack_8->SetBinContent(15,607.5908);
   hNCinFV_stack_8->SetBinContent(16,622.1497);
   hNCinFV_stack_8->SetBinContent(17,614.6939);
   hNCinFV_stack_8->SetBinContent(18,617.933);
   hNCinFV_stack_8->SetBinContent(19,640.6147);
   hNCinFV_stack_8->SetBinContent(20,616.8803);
   hNCinFV_stack_8->SetBinContent(21,628.8052);
   hNCinFV_stack_8->SetBinContent(22,614.7064);
   hNCinFV_stack_8->SetBinContent(23,564.585);
   hNCinFV_stack_8->SetBinContent(24,394.8841);
   hNCinFV_stack_8->SetBinContent(25,91.73434);
   hNCinFV_stack_8->SetBinContent(26,0.1967154);
   hNCinFV_stack_8->SetBinContent(27,2.394159);
   hNCinFV_stack_8->SetBinError(0,0.5889569);
   hNCinFV_stack_8->SetBinError(1,0.4394482);
   hNCinFV_stack_8->SetBinError(2,3.857884);
   hNCinFV_stack_8->SetBinError(3,9.499219);
   hNCinFV_stack_8->SetBinError(4,11.93203);
   hNCinFV_stack_8->SetBinError(5,12.35339);
   hNCinFV_stack_8->SetBinError(6,12.72647);
   hNCinFV_stack_8->SetBinError(7,12.81028);
   hNCinFV_stack_8->SetBinError(8,12.47036);
   hNCinFV_stack_8->SetBinError(9,12.77359);
   hNCinFV_stack_8->SetBinError(10,12.72625);
   hNCinFV_stack_8->SetBinError(11,12.94119);
   hNCinFV_stack_8->SetBinError(12,12.44538);
   hNCinFV_stack_8->SetBinError(13,12.90949);
   hNCinFV_stack_8->SetBinError(14,12.50566);
   hNCinFV_stack_8->SetBinError(15,12.36393);
   hNCinFV_stack_8->SetBinError(16,12.51459);
   hNCinFV_stack_8->SetBinError(17,12.46315);
   hNCinFV_stack_8->SetBinError(18,12.48194);
   hNCinFV_stack_8->SetBinError(19,12.67638);
   hNCinFV_stack_8->SetBinError(20,12.44405);
   hNCinFV_stack_8->SetBinError(21,12.62122);
   hNCinFV_stack_8->SetBinError(22,12.46324);
   hNCinFV_stack_8->SetBinError(23,11.83201);
   hNCinFV_stack_8->SetBinError(24,9.997643);
   hNCinFV_stack_8->SetBinError(25,4.839695);
   hNCinFV_stack_8->SetBinError(26,0.1967154);
   hNCinFV_stack_8->SetBinError(27,0.785313);
   hNCinFV_stack_8->SetEntries(57294);

   ci = 1461;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_9->SetBinContent(0,3.994352);
   hnumuCCinFV_stack_9->SetBinContent(1,2.103818);
   hnumuCCinFV_stack_9->SetBinContent(2,614.6062);
   hnumuCCinFV_stack_9->SetBinContent(3,3470.083);
   hnumuCCinFV_stack_9->SetBinContent(4,5467.959);
   hnumuCCinFV_stack_9->SetBinContent(5,5998.333);
   hnumuCCinFV_stack_9->SetBinContent(6,6211.695);
   hnumuCCinFV_stack_9->SetBinContent(7,6258.178);
   hnumuCCinFV_stack_9->SetBinContent(8,6256.276);
   hnumuCCinFV_stack_9->SetBinContent(9,6162.103);
   hnumuCCinFV_stack_9->SetBinContent(10,6163.72);
   hnumuCCinFV_stack_9->SetBinContent(11,6081.634);
   hnumuCCinFV_stack_9->SetBinContent(12,6101.925);
   hnumuCCinFV_stack_9->SetBinContent(13,6196.76);
   hnumuCCinFV_stack_9->SetBinContent(14,6085.538);
   hnumuCCinFV_stack_9->SetBinContent(15,6022.895);
   hnumuCCinFV_stack_9->SetBinContent(16,6075.227);
   hnumuCCinFV_stack_9->SetBinContent(17,6019.781);
   hnumuCCinFV_stack_9->SetBinContent(18,5927.73);
   hnumuCCinFV_stack_9->SetBinContent(19,5901.837);
   hnumuCCinFV_stack_9->SetBinContent(20,5894.393);
   hnumuCCinFV_stack_9->SetBinContent(21,5876.489);
   hnumuCCinFV_stack_9->SetBinContent(22,5939.746);
   hnumuCCinFV_stack_9->SetBinContent(23,5527.399);
   hnumuCCinFV_stack_9->SetBinContent(24,3964.904);
   hnumuCCinFV_stack_9->SetBinContent(25,906.3133);
   hnumuCCinFV_stack_9->SetBinContent(26,0.910428);
   hnumuCCinFV_stack_9->SetBinContent(27,8.928964);
   hnumuCCinFV_stack_9->SetBinError(0,1.297373);
   hnumuCCinFV_stack_9->SetBinError(1,1.380055);
   hnumuCCinFV_stack_9->SetBinError(2,17.46175);
   hnumuCCinFV_stack_9->SetBinError(3,41.32273);
   hnumuCCinFV_stack_9->SetBinError(4,52.12381);
   hnumuCCinFV_stack_9->SetBinError(5,54.08271);
   hnumuCCinFV_stack_9->SetBinError(6,55.99526);
   hnumuCCinFV_stack_9->SetBinError(7,55.80945);
   hnumuCCinFV_stack_9->SetBinError(8,56.42556);
   hnumuCCinFV_stack_9->SetBinError(9,55.46484);
   hnumuCCinFV_stack_9->SetBinError(10,54.91664);
   hnumuCCinFV_stack_9->SetBinError(11,54.55783);
   hnumuCCinFV_stack_9->SetBinError(12,54.11437);
   hnumuCCinFV_stack_9->SetBinError(13,54.72317);
   hnumuCCinFV_stack_9->SetBinError(14,55.31835);
   hnumuCCinFV_stack_9->SetBinError(15,55.47987);
   hnumuCCinFV_stack_9->SetBinError(16,55.66524);
   hnumuCCinFV_stack_9->SetBinError(17,56.493);
   hnumuCCinFV_stack_9->SetBinError(18,54.01864);
   hnumuCCinFV_stack_9->SetBinError(19,53.93819);
   hnumuCCinFV_stack_9->SetBinError(20,54.41921);
   hnumuCCinFV_stack_9->SetBinError(21,54.35469);
   hnumuCCinFV_stack_9->SetBinError(22,55.50096);
   hnumuCCinFV_stack_9->SetBinError(23,52.33918);
   hnumuCCinFV_stack_9->SetBinError(24,44.66258);
   hnumuCCinFV_stack_9->SetBinError(25,21.13658);
   hnumuCCinFV_stack_9->SetBinError(26,0.4614094);
   hnumuCCinFV_stack_9->SetBinError(27,2.075073);
   hnumuCCinFV_stack_9->SetEntries(459623);

   ci = 1462;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_10->SetBinContent(2,4.501579);
   hnueCCinFV_stack_10->SetBinContent(3,32.73497);
   hnueCCinFV_stack_10->SetBinContent(4,53.95589);
   hnueCCinFV_stack_10->SetBinContent(5,52.4599);
   hnueCCinFV_stack_10->SetBinContent(6,46.81233);
   hnueCCinFV_stack_10->SetBinContent(7,45.10564);
   hnueCCinFV_stack_10->SetBinContent(8,50.42742);
   hnueCCinFV_stack_10->SetBinContent(9,45.67847);
   hnueCCinFV_stack_10->SetBinContent(10,57.11399);
   hnueCCinFV_stack_10->SetBinContent(11,49.46803);
   hnueCCinFV_stack_10->SetBinContent(12,43.2559);
   hnueCCinFV_stack_10->SetBinContent(13,46.72399);
   hnueCCinFV_stack_10->SetBinContent(14,51.47604);
   hnueCCinFV_stack_10->SetBinContent(15,41.94765);
   hnueCCinFV_stack_10->SetBinContent(16,57.60381);
   hnueCCinFV_stack_10->SetBinContent(17,45.95731);
   hnueCCinFV_stack_10->SetBinContent(18,55.46996);
   hnueCCinFV_stack_10->SetBinContent(19,43.72431);
   hnueCCinFV_stack_10->SetBinContent(20,47.28114);
   hnueCCinFV_stack_10->SetBinContent(21,44.2022);
   hnueCCinFV_stack_10->SetBinContent(22,50.19892);
   hnueCCinFV_stack_10->SetBinContent(23,43.52192);
   hnueCCinFV_stack_10->SetBinContent(24,29.49001);
   hnueCCinFV_stack_10->SetBinContent(25,10.67373);
   hnueCCinFV_stack_10->SetBinContent(27,0.3401776);
   hnueCCinFV_stack_10->SetBinError(2,1.109794);
   hnueCCinFV_stack_10->SetBinError(3,4.520881);
   hnueCCinFV_stack_10->SetBinError(4,5.989635);
   hnueCCinFV_stack_10->SetBinError(5,5.3337);
   hnueCCinFV_stack_10->SetBinError(6,3.728594);
   hnueCCinFV_stack_10->SetBinError(7,4.191514);
   hnueCCinFV_stack_10->SetBinError(8,4.962088);
   hnueCCinFV_stack_10->SetBinError(9,4.696961);
   hnueCCinFV_stack_10->SetBinError(10,5.331947);
   hnueCCinFV_stack_10->SetBinError(11,4.47706);
   hnueCCinFV_stack_10->SetBinError(12,4.086478);
   hnueCCinFV_stack_10->SetBinError(13,4.006323);
   hnueCCinFV_stack_10->SetBinError(14,4.384307);
   hnueCCinFV_stack_10->SetBinError(15,3.791392);
   hnueCCinFV_stack_10->SetBinError(16,5.207018);
   hnueCCinFV_stack_10->SetBinError(17,3.692955);
   hnueCCinFV_stack_10->SetBinError(18,5.456979);
   hnueCCinFV_stack_10->SetBinError(19,5.67853);
   hnueCCinFV_stack_10->SetBinError(20,4.398257);
   hnueCCinFV_stack_10->SetBinError(21,4.263307);
   hnueCCinFV_stack_10->SetBinError(22,4.542709);
   hnueCCinFV_stack_10->SetBinError(23,4.536416);
   hnueCCinFV_stack_10->SetBinError(24,2.985371);
   hnueCCinFV_stack_10->SetBinError(25,2.805923);
   hnueCCinFV_stack_10->SetBinError(27,0.3401776);
   hnueCCinFV_stack_10->SetEntries(3908);

   ci = 1463;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_10,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__8->SetBinContent(0,31.99994);
   hmcerror__8->SetBinContent(1,12.8114);
   hmcerror__8->SetBinContent(2,3071.513);
   hmcerror__8->SetBinContent(3,7495.485);
   hmcerror__8->SetBinContent(4,8977.624);
   hmcerror__8->SetBinContent(5,9466.273);
   hmcerror__8->SetBinContent(6,9621.805);
   hmcerror__8->SetBinContent(7,9666.941);
   hmcerror__8->SetBinContent(8,9695.161);
   hmcerror__8->SetBinContent(9,9590.235);
   hmcerror__8->SetBinContent(10,9649.313);
   hmcerror__8->SetBinContent(11,9595.96);
   hmcerror__8->SetBinContent(12,9519.91);
   hmcerror__8->SetBinContent(13,10081);
   hmcerror__8->SetBinContent(14,9589.202);
   hmcerror__8->SetBinContent(15,9586.516);
   hmcerror__8->SetBinContent(16,9867.549);
   hmcerror__8->SetBinContent(17,9833.419);
   hmcerror__8->SetBinContent(18,9873.469);
   hmcerror__8->SetBinContent(19,10099.13);
   hmcerror__8->SetBinContent(20,10362.29);
   hmcerror__8->SetBinContent(21,10572.34);
   hmcerror__8->SetBinContent(22,10919.38);
   hmcerror__8->SetBinContent(23,10825.21);
   hmcerror__8->SetBinContent(24,10151.07);
   hmcerror__8->SetBinContent(25,7040.983);
   hmcerror__8->SetBinContent(26,21.08028);
   hmcerror__8->SetBinContent(27,43.83417);
   hmcerror__8->SetBinError(0,3.134893);
   hmcerror__8->SetBinError(1,9.06745);
   hmcerror__8->SetBinError(2,425.0998);
   hmcerror__8->SetBinError(3,1038.627);
   hmcerror__8->SetBinError(4,1243.047);
   hmcerror__8->SetBinError(5,1288.721);
   hmcerror__8->SetBinError(6,1350.168);
   hmcerror__8->SetBinError(7,1303.405);
   hmcerror__8->SetBinError(8,1358.948);
   hmcerror__8->SetBinError(9,1302.901);
   hmcerror__8->SetBinError(10,1304.046);
   hmcerror__8->SetBinError(11,1316.668);
   hmcerror__8->SetBinError(12,1294.389);
   hmcerror__8->SetBinError(13,1297.712);
   hmcerror__8->SetBinError(14,1326.38);
   hmcerror__8->SetBinError(15,1276.295);
   hmcerror__8->SetBinError(16,1329.027);
   hmcerror__8->SetBinError(17,1290.376);
   hmcerror__8->SetBinError(18,1266.254);
   hmcerror__8->SetBinError(19,1300.798);
   hmcerror__8->SetBinError(20,1303.758);
   hmcerror__8->SetBinError(21,1265.874);
   hmcerror__8->SetBinError(22,1338.773);
   hmcerror__8->SetBinError(23,1278.533);
   hmcerror__8->SetBinError(24,1044.415);
   hmcerror__8->SetBinError(25,686.0931);
   hmcerror__8->SetBinError(26,9.38803);
   hmcerror__8->SetBinError(27,18.84656);
   hmcerror__8->SetEntries(201139.1);

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
   
   Double_t _fx3009[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3009[26] = {
   11,
   2352,
   7032,
   9038,
   9861,
   10033,
   9773,
   9804,
   9899,
   10057,
   9909,
   9974,
   10605,
   9843,
   9933,
   9987,
   10009,
   9939,
   10184,
   10320,
   10389,
   10591,
   10596,
   9367,
   5645,
   23};
   Double_t _felx3009[26] = {
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
   Double_t _fely3009[26] = {
   3.4975,
   48.49742,
   83.85702,
   95.0684,
   99.30257,
   100.1649,
   98.85848,
   99.01515,
   99.49372,
   100.2846,
   99.54396,
   99.86992,
   102.9806,
   99.21189,
   99.66444,
   99.93498,
   100.045,
   99.69453,
   100.9158,
   101.5874,
   101.9264,
   102.9126,
   102.9369,
   96.78326,
   75.13322,
   4.9457};
   Double_t _fehx3009[26] = {
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
   Double_t _fehy3009[26] = {
   3.27,
   48.49742,
   83.85702,
   95.0684,
   99.30257,
   100.1649,
   98.85848,
   99.01515,
   99.49372,
   100.2846,
   99.54396,
   99.86992,
   102.9806,
   99.21189,
   99.66444,
   99.93498,
   100.045,
   99.69453,
   100.9158,
   101.5874,
   101.9264,
   102.9126,
   102.9369,
   96.78326,
   75.13322,
   4.7346};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-156,156);
   Graph_Graph3009->SetMinimum(6.75225);
   Graph_Graph3009->SetMaximum(11778.03);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=57.4/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 225174.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6312.7","F");

   ci = 1454;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 32683.9","F");

   ci = 1455;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7054.4","F");

   ci = 1456;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 12214.5","F");

   ci = 1457;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  183.1","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  6924.7","F");

   ci = 1459;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 16238.6","F");

   ci = 1460;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 13395.5","F");

   ci = 1461;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 129128.5","F");

   ci = 1462;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 1049.8","F");

   ci = 1463;
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
   TText *pt_LaTex = pt->AddText("generic_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3010[26] = {
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
   Double_t _felx3010[26] = {
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
   Double_t _fely3010[26] = {
   0.7077643,
   0.1384008,
   0.138567,
   0.1384606,
   0.1361382,
   0.1403238,
   0.1348312,
   0.1401677,
   0.135857,
   0.135144,
   0.1372107,
   0.1359665,
   0.1287285,
   0.1383202,
   0.1331344,
   0.1346866,
   0.1312235,
   0.1282482,
   0.128803,
   0.1258175,
   0.1197345,
   0.1226053,
   0.118107,
   0.1028872,
   0.09744281,
   0.4453466};
   Double_t _fehx3010[26] = {
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
   Double_t _fehy3010[26] = {
   0.7077643,
   0.1384008,
   0.138567,
   0.1384606,
   0.1361382,
   0.1403238,
   0.1348312,
   0.1401677,
   0.135857,
   0.135144,
   0.1372107,
   0.1359665,
   0.1287285,
   0.1383202,
   0.1331344,
   0.1346866,
   0.1312235,
   0.1282482,
   0.128803,
   0.1258175,
   0.1197345,
   0.1226053,
   0.118107,
   0.1028872,
   0.09744281,
   0.4453466};
   grae = new TGraphAsymmErrors(26,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-156,156);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3011[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3011[26] = {
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
   Double_t _felx3011[26] = {
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
   Double_t _fely3011[26] = {
   0.29337,
   0.1273311,
   0.1266964,
   0.1347888,
   0.1347651,
   0.1390603,
   0.1337134,
   0.1376509,
   0.1345615,
   0.1341081,
   0.1350424,
   0.1345703,
   0.1270809,
   0.1361481,
   0.130932,
   0.1325863,
   0.128324,
   0.1267879,
   0.1269739,
   0.1241961,
   0.1189998,
   0.1215293,
   0.1161641,
   0.09967975,
   0.08594077,
   0.2670266};
   Double_t _fehx3011[26] = {
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
   Double_t _fehy3011[26] = {
   0.29337,
   0.1273311,
   0.1266964,
   0.1347888,
   0.1347651,
   0.1390603,
   0.1337134,
   0.1376509,
   0.1345615,
   0.1341081,
   0.1350424,
   0.1345703,
   0.1270809,
   0.1361481,
   0.130932,
   0.1325863,
   0.128324,
   0.1267879,
   0.1269739,
   0.1241961,
   0.1189998,
   0.1215293,
   0.1161641,
   0.09967975,
   0.08594077,
   0.2670266};
   grae = new TGraphAsymmErrors(26,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-156,156);
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
   
   Double_t _fx3012[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3012[26] = {
   0.8586104,
   0.7657463,
   0.9381647,
   1.006725,
   1.041698,
   1.042736,
   1.010971,
   1.011226,
   1.032196,
   1.04225,
   1.032622,
   1.047699,
   1.051979,
   1.026467,
   1.036143,
   1.012105,
   1.017856,
   1.006637,
   1.008404,
   0.9959187,
   0.9826588,
   0.9699273,
   0.9788261,
   0.9227595,
   0.8017347,
   1.091067};
   Double_t _felx3012[26] = {
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
   Double_t _fely3012[26] = {
   0.2729991,
   0.01578942,
   0.01118767,
   0.01058948,
   0.01049014,
   0.0104102,
   0.01022645,
   0.01021284,
   0.01037448,
   0.01039293,
   0.01037353,
   0.01049064,
   0.01021531,
   0.01034621,
   0.01039632,
   0.01012764,
   0.01017398,
   0.01009721,
   0.009992524,
   0.009803565,
   0.009640862,
   0.009424769,
   0.009508994,
   0.009534288,
   0.01067084,
   0.2346127};
   Double_t _fehx3012[26] = {
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
   Double_t _fehy3012[26] = {
   0.2552415,
   0.01578942,
   0.01118767,
   0.01058948,
   0.01049014,
   0.0104102,
   0.01022645,
   0.01021284,
   0.01037448,
   0.01039293,
   0.01037353,
   0.01049064,
   0.01021531,
   0.01034621,
   0.01039632,
   0.01012764,
   0.01017398,
   0.01009721,
   0.009992524,
   0.009803565,
   0.009640862,
   0.009424769,
   0.009508994,
   0.009534288,
   0.01067084,
   0.2245986};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-156,156);
   Graph_Graph3012->SetMinimum(0.5126059);
   Graph_Graph3012->SetMaximum(1.388671);
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
   
   TH1F *hist__9 = new TH1F("hist__9","generic_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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

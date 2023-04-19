#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue Mar 14 01:32:25 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-212.1,163.3333,23453.79);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__1->SetBinContent(0,31.99994);
   hmc__1->SetBinContent(1,13.00811);
   hmc__1->SetBinContent(2,2926.574);
   hmc__1->SetBinContent(3,7319.205);
   hmc__1->SetBinContent(4,8833.26);
   hmc__1->SetBinContent(5,9371.582);
   hmc__1->SetBinContent(6,9522.525);
   hmc__1->SetBinContent(7,9586.858);
   hmc__1->SetBinContent(8,9551.964);
   hmc__1->SetBinContent(9,9481.867);
   hmc__1->SetBinContent(10,9525.311);
   hmc__1->SetBinContent(11,9456.172);
   hmc__1->SetBinContent(12,9398.871);
   hmc__1->SetBinContent(13,9909.458);
   hmc__1->SetBinContent(14,9463.576);
   hmc__1->SetBinContent(15,9439.378);
   hmc__1->SetBinContent(16,9653.645);
   hmc__1->SetBinContent(17,9590.337);
   hmc__1->SetBinContent(18,9661.486);
   hmc__1->SetBinContent(19,9856.796);
   hmc__1->SetBinContent(20,10066.31);
   hmc__1->SetBinContent(21,10203.27);
   hmc__1->SetBinContent(22,10513.72);
   hmc__1->SetBinContent(23,10346.84);
   hmc__1->SetBinContent(24,9520.08);
   hmc__1->SetBinContent(25,6443.694);
   hmc__1->SetBinContent(26,21.08028);
   hmc__1->SetBinContent(27,44.24077);
   hmc__1->SetBinError(0,3.134893);
   hmc__1->SetBinError(1,11.68729);
   hmc__1->SetBinError(2,410.1359);
   hmc__1->SetBinError(3,1013.754);
   hmc__1->SetBinError(4,1246.588);
   hmc__1->SetBinError(5,1298.042);
   hmc__1->SetBinError(6,1355.169);
   hmc__1->SetBinError(7,1311.751);
   hmc__1->SetBinError(8,1362.766);
   hmc__1->SetBinError(9,1309.647);
   hmc__1->SetBinError(10,1312.086);
   hmc__1->SetBinError(11,1317.021);
   hmc__1->SetBinError(12,1298.601);
   hmc__1->SetBinError(13,1307.89);
   hmc__1->SetBinError(14,1327.748);
   hmc__1->SetBinError(15,1279.147);
   hmc__1->SetBinError(16,1331.52);
   hmc__1->SetBinError(17,1283.488);
   hmc__1->SetBinError(18,1272.921);
   hmc__1->SetBinError(19,1316.006);
   hmc__1->SetBinError(20,1305.852);
   hmc__1->SetBinError(21,1277.326);
   hmc__1->SetBinError(22,1351.572);
   hmc__1->SetBinError(23,1276.644);
   hmc__1->SetBinError(24,1050.245);
   hmc__1->SetBinError(25,651.9983);
   hmc__1->SetBinError(26,11.94661);
   hmc__1->SetBinError(27,30.1635);
   hmc__1->SetMinimum(-212.1);
   hmc__1->SetMaximum(22270.5);
   hmc__1->SetEntries(195630.6);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,-130,130);
   hs1_stack_1->SetMinimum(-3.646956e-09);
   hs1_stack_1->SetMaximum(11039.4);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
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
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(0,9.335775);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,461.6397);
   hext_stack_2->SetBinContent(3,1003.958);
   hext_stack_2->SetBinContent(4,662.2391);
   hext_stack_2->SetBinContent(5,590.8852);
   hext_stack_2->SetBinContent(6,577.5745);
   hext_stack_2->SetBinContent(7,591.6493);
   hext_stack_2->SetBinContent(8,625.141);
   hext_stack_2->SetBinContent(9,661.9809);
   hext_stack_2->SetBinContent(10,696.0475);
   hext_stack_2->SetBinContent(11,701.368);
   hext_stack_2->SetBinContent(12,739.6237);
   hext_stack_2->SetBinContent(13,974.3064);
   hext_stack_2->SetBinContent(14,815.4528);
   hext_stack_2->SetBinContent(15,884.0599);
   hext_stack_2->SetBinContent(16,971.1786);
   hext_stack_2->SetBinContent(17,1047.118);
   hext_stack_2->SetBinContent(18,1153.793);
   hext_stack_2->SetBinContent(19,1285.783);
   hext_stack_2->SetBinContent(20,1434.561);
   hext_stack_2->SetBinContent(21,1587.65);
   hext_stack_2->SetBinContent(22,1753.458);
   hext_stack_2->SetBinContent(23,2039.391);
   hext_stack_2->SetBinContent(24,2756.449);
   hext_stack_2->SetBinContent(25,2584.551);
   hext_stack_2->SetBinContent(26,6.560196);
   hext_stack_2->SetBinContent(27,15.16498);
   hext_stack_2->SetBinError(0,1.932195);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,14.11169);
   hext_stack_2->SetBinError(3,20.46652);
   hext_stack_2->SetBinError(4,16.8183);
   hext_stack_2->SetBinError(5,15.83402);
   hext_stack_2->SetBinError(6,15.67354);
   hext_stack_2->SetBinError(7,15.8634);
   hext_stack_2->SetBinError(8,16.31871);
   hext_stack_2->SetBinError(9,16.7753);
   hext_stack_2->SetBinError(10,17.18153);
   hext_stack_2->SetBinError(11,17.23821);
   hext_stack_2->SetBinError(12,17.6562);
   hext_stack_2->SetBinError(13,20.04573);
   hext_stack_2->SetBinError(14,18.58394);
   hext_stack_2->SetBinError(15,19.31335);
   hext_stack_2->SetBinError(16,20.43016);
   hext_stack_2->SetBinError(17,21.06463);
   hext_stack_2->SetBinError(18,22.18075);
   hext_stack_2->SetBinError(19,23.3855);
   hext_stack_2->SetBinError(20,24.77539);
   hext_stack_2->SetBinError(21,26.15484);
   hext_stack_2->SetBinError(22,27.50069);
   hext_stack_2->SetBinError(23,29.78045);
   hext_stack_2->SetBinError(24,34.24612);
   hext_stack_2->SetBinError(25,33.25255);
   hext_stack_2->SetBinError(26,1.643863);
   hext_stack_2->SetBinError(27,2.482964);
   hext_stack_2->SetEntries(66604);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
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

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
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

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
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

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.784776);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.244298);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.60359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.606997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,4.155293);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.41353);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.316044);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.354897);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.937726);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.916066);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.343776);
   hNCpi0inFVqe_stack_6->SetBinContent(14,2.51068);
   hNCpi0inFVqe_stack_6->SetBinContent(15,2.427644);
   hNCpi0inFVqe_stack_6->SetBinContent(16,2.38363);
   hNCpi0inFVqe_stack_6->SetBinContent(17,2.007312);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.686626);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.315876);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.259412);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.882926);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.96937);
   hNCpi0inFVqe_stack_6->SetBinContent(23,2.301594);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.562072);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.432286);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4184261);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4908382);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3612692);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5010404);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.6915756);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5629244);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5240746);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4381902);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3915981);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.6296134);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4926192);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.5418448);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.5270368);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4604946);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.4413619);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3825485);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4918285);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.5038166);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.4514614);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.5832421);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.4982493);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3501449);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2270916);
   hNCpi0inFVqe_stack_6->SetEntries(986);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,1.855194);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(2,26.65042);
   hNCpi0inFVres_stack_7->SetBinContent(3,130.0609);
   hNCpi0inFVres_stack_7->SetBinContent(4,215.4876);
   hNCpi0inFVres_stack_7->SetBinContent(5,251.4496);
   hNCpi0inFVres_stack_7->SetBinContent(6,249.5541);
   hNCpi0inFVres_stack_7->SetBinContent(7,268.2923);
   hNCpi0inFVres_stack_7->SetBinContent(8,271.4511);
   hNCpi0inFVres_stack_7->SetBinContent(9,259.8258);
   hNCpi0inFVres_stack_7->SetBinContent(10,252.7243);
   hNCpi0inFVres_stack_7->SetBinContent(11,270.5643);
   hNCpi0inFVres_stack_7->SetBinContent(12,258.6385);
   hNCpi0inFVres_stack_7->SetBinContent(13,273.2762);
   hNCpi0inFVres_stack_7->SetBinContent(14,245.7784);
   hNCpi0inFVres_stack_7->SetBinContent(15,255.3814);
   hNCpi0inFVres_stack_7->SetBinContent(16,257.9318);
   hNCpi0inFVres_stack_7->SetBinContent(17,246.9729);
   hNCpi0inFVres_stack_7->SetBinContent(18,243.1634);
   hNCpi0inFVres_stack_7->SetBinContent(19,245.9618);
   hNCpi0inFVres_stack_7->SetBinContent(20,261.212);
   hNCpi0inFVres_stack_7->SetBinContent(21,239.1108);
   hNCpi0inFVres_stack_7->SetBinContent(22,246.6035);
   hNCpi0inFVres_stack_7->SetBinContent(23,226.2973);
   hNCpi0inFVres_stack_7->SetBinContent(24,165.4312);
   hNCpi0inFVres_stack_7->SetBinContent(25,48.11002);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.2368179);
   hNCpi0inFVres_stack_7->SetBinContent(27,2.132866);
   hNCpi0inFVres_stack_7->SetBinError(0,0.4855902);
   hNCpi0inFVres_stack_7->SetBinError(1,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(2,1.680493);
   hNCpi0inFVres_stack_7->SetBinError(3,3.717894);
   hNCpi0inFVres_stack_7->SetBinError(4,4.749038);
   hNCpi0inFVres_stack_7->SetBinError(5,5.206689);
   hNCpi0inFVres_stack_7->SetBinError(6,5.114966);
   hNCpi0inFVres_stack_7->SetBinError(7,5.383549);
   hNCpi0inFVres_stack_7->SetBinError(8,5.392592);
   hNCpi0inFVres_stack_7->SetBinError(9,5.267559);
   hNCpi0inFVres_stack_7->SetBinError(10,5.174572);
   hNCpi0inFVres_stack_7->SetBinError(11,5.389528);
   hNCpi0inFVres_stack_7->SetBinError(12,5.257001);
   hNCpi0inFVres_stack_7->SetBinError(13,5.311433);
   hNCpi0inFVres_stack_7->SetBinError(14,5.063494);
   hNCpi0inFVres_stack_7->SetBinError(15,5.255807);
   hNCpi0inFVres_stack_7->SetBinError(16,5.315046);
   hNCpi0inFVres_stack_7->SetBinError(17,5.135858);
   hNCpi0inFVres_stack_7->SetBinError(18,5.031607);
   hNCpi0inFVres_stack_7->SetBinError(19,5.076622);
   hNCpi0inFVres_stack_7->SetBinError(20,5.367174);
   hNCpi0inFVres_stack_7->SetBinError(21,5.060325);
   hNCpi0inFVres_stack_7->SetBinError(22,5.172832);
   hNCpi0inFVres_stack_7->SetBinError(23,4.96821);
   hNCpi0inFVres_stack_7->SetBinError(24,4.239377);
   hNCpi0inFVres_stack_7->SetBinError(25,2.25563);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1155977);
   hNCpi0inFVres_stack_7->SetBinError(27,0.5201609);
   hNCpi0inFVres_stack_7->SetEntries(100358);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.6277541);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.129128);
   hNCpi0inFVdis_stack_8->SetBinContent(3,37.73441);
   hNCpi0inFVdis_stack_8->SetBinContent(4,66.18588);
   hNCpi0inFVdis_stack_8->SetBinContent(5,66.85962);
   hNCpi0inFVdis_stack_8->SetBinContent(6,64.91209);
   hNCpi0inFVdis_stack_8->SetBinContent(7,73.31586);
   hNCpi0inFVdis_stack_8->SetBinContent(8,69.43674);
   hNCpi0inFVdis_stack_8->SetBinContent(9,70.42519);
   hNCpi0inFVdis_stack_8->SetBinContent(10,68.02593);
   hNCpi0inFVdis_stack_8->SetBinContent(11,69.61708);
   hNCpi0inFVdis_stack_8->SetBinContent(12,70.64639);
   hNCpi0inFVdis_stack_8->SetBinContent(13,75.11606);
   hNCpi0inFVdis_stack_8->SetBinContent(14,73.48723);
   hNCpi0inFVdis_stack_8->SetBinContent(15,66.48547);
   hNCpi0inFVdis_stack_8->SetBinContent(16,70.0816);
   hNCpi0inFVdis_stack_8->SetBinContent(17,63.3586);
   hNCpi0inFVdis_stack_8->SetBinContent(18,64.41428);
   hNCpi0inFVdis_stack_8->SetBinContent(19,69.11972);
   hNCpi0inFVdis_stack_8->SetBinContent(20,65.76486);
   hNCpi0inFVdis_stack_8->SetBinContent(21,66.41573);
   hNCpi0inFVdis_stack_8->SetBinContent(22,60.40291);
   hNCpi0inFVdis_stack_8->SetBinContent(23,61.20539);
   hNCpi0inFVdis_stack_8->SetBinContent(24,46.91006);
   hNCpi0inFVdis_stack_8->SetBinContent(25,12.75982);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.390768);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2996304);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6441767);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.031951);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.731863);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.640838);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.588402);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.828976);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.722002);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.721239);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.63389);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.700012);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.729808);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.796968);
   hNCpi0inFVdis_stack_8->SetBinError(14,2.801649);
   hNCpi0inFVdis_stack_8->SetBinError(15,2.663378);
   hNCpi0inFVdis_stack_8->SetBinError(16,2.759716);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.509451);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.578954);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.765493);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.605675);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.676546);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.534716);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.608524);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.267657);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.192797);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2089417);
   hNCpi0inFVdis_stack_8->SetEntries(27026);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.473804);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.2438946);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(66);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,3.072824);
   hCCpi0inFV_stack_10->SetBinContent(1,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(2,72.48521);
   hCCpi0inFV_stack_10->SetBinContent(3,416.5789);
   hCCpi0inFV_stack_10->SetBinContent(4,631.5492);
   hCCpi0inFV_stack_10->SetBinContent(5,694.1689);
   hCCpi0inFV_stack_10->SetBinContent(6,695.2327);
   hCCpi0inFV_stack_10->SetBinContent(7,706.9897);
   hCCpi0inFV_stack_10->SetBinContent(8,706.3517);
   hCCpi0inFV_stack_10->SetBinContent(9,678.2057);
   hCCpi0inFV_stack_10->SetBinContent(10,707.917);
   hCCpi0inFV_stack_10->SetBinContent(11,714.1213);
   hCCpi0inFV_stack_10->SetBinContent(12,688.4611);
   hCCpi0inFV_stack_10->SetBinContent(13,708.0471);
   hCCpi0inFV_stack_10->SetBinContent(14,680.6748);
   hCCpi0inFV_stack_10->SetBinContent(15,676.109);
   hCCpi0inFV_stack_10->SetBinContent(16,692.3994);
   hCCpi0inFV_stack_10->SetBinContent(17,658.7036);
   hCCpi0inFV_stack_10->SetBinContent(18,673.0325);
   hCCpi0inFV_stack_10->SetBinContent(19,677.0765);
   hCCpi0inFV_stack_10->SetBinContent(20,674.8832);
   hCCpi0inFV_stack_10->SetBinContent(21,667.4503);
   hCCpi0inFV_stack_10->SetBinContent(22,689.4961);
   hCCpi0inFV_stack_10->SetBinContent(23,622.8353);
   hCCpi0inFV_stack_10->SetBinContent(24,464.4889);
   hCCpi0inFV_stack_10->SetBinContent(25,95.34509);
   hCCpi0inFV_stack_10->SetBinContent(26,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(27,1.463836);
   hCCpi0inFV_stack_10->SetBinError(0,0.9205954);
   hCCpi0inFV_stack_10->SetBinError(1,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(2,4.261388);
   hCCpi0inFV_stack_10->SetBinError(3,10.31653);
   hCCpi0inFV_stack_10->SetBinError(4,12.5892);
   hCCpi0inFV_stack_10->SetBinError(5,13.3416);
   hCCpi0inFV_stack_10->SetBinError(6,13.2113);
   hCCpi0inFV_stack_10->SetBinError(7,13.34776);
   hCCpi0inFV_stack_10->SetBinError(8,13.37455);
   hCCpi0inFV_stack_10->SetBinError(9,13.06635);
   hCCpi0inFV_stack_10->SetBinError(10,13.37444);
   hCCpi0inFV_stack_10->SetBinError(11,13.39863);
   hCCpi0inFV_stack_10->SetBinError(12,13.21957);
   hCCpi0inFV_stack_10->SetBinError(13,13.4502);
   hCCpi0inFV_stack_10->SetBinError(14,13.14639);
   hCCpi0inFV_stack_10->SetBinError(15,12.98872);
   hCCpi0inFV_stack_10->SetBinError(16,13.17423);
   hCCpi0inFV_stack_10->SetBinError(17,12.91048);
   hCCpi0inFV_stack_10->SetBinError(18,12.99306);
   hCCpi0inFV_stack_10->SetBinError(19,13.08886);
   hCCpi0inFV_stack_10->SetBinError(20,13.0179);
   hCCpi0inFV_stack_10->SetBinError(21,12.97065);
   hCCpi0inFV_stack_10->SetBinError(22,13.17464);
   hCCpi0inFV_stack_10->SetBinError(23,12.51545);
   hCCpi0inFV_stack_10->SetBinError(24,10.82876);
   hCCpi0inFV_stack_10->SetBinError(25,4.872979);
   hCCpi0inFV_stack_10->SetBinError(26,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(27,0.620407);
   hCCpi0inFV_stack_10->SetEntries(62846);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(0,1.268811);
   hNCinFV_stack_11->SetBinContent(1,0.9303237);
   hNCinFV_stack_11->SetBinContent(2,61.39685);
   hNCinFV_stack_11->SetBinContent(3,370.0604);
   hNCinFV_stack_11->SetBinContent(4,598.4269);
   hNCinFV_stack_11->SetBinContent(5,645.2502);
   hNCinFV_stack_11->SetBinContent(6,670.5829);
   hNCinFV_stack_11->SetBinContent(7,687.0057);
   hNCinFV_stack_11->SetBinContent(8,648.144);
   hNCinFV_stack_11->SetBinContent(9,682.1659);
   hNCinFV_stack_11->SetBinContent(10,676.3597);
   hNCinFV_stack_11->SetBinContent(11,686.6408);
   hNCinFV_stack_11->SetBinContent(12,642.1658);
   hNCinFV_stack_11->SetBinContent(13,677.1956);
   hNCinFV_stack_11->SetBinContent(14,646.6962);
   hNCinFV_stack_11->SetBinContent(15,635.9048);
   hNCinFV_stack_11->SetBinContent(16,646.1523);
   hNCinFV_stack_11->SetBinContent(17,637.3359);
   hNCinFV_stack_11->SetBinContent(18,642.7573);
   hNCinFV_stack_11->SetBinContent(19,670.9446);
   hNCinFV_stack_11->SetBinContent(20,642.7687);
   hNCinFV_stack_11->SetBinContent(21,658.5909);
   hNCinFV_stack_11->SetBinContent(22,639.8965);
   hNCinFV_stack_11->SetBinContent(23,587.8943);
   hNCinFV_stack_11->SetBinContent(24,413.0023);
   hNCinFV_stack_11->SetBinContent(25,96.82419);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,2.394159);
   hNCinFV_stack_11->SetBinError(0,0.5889569);
   hNCinFV_stack_11->SetBinError(1,0.4814682);
   hNCinFV_stack_11->SetBinError(2,3.946772);
   hNCinFV_stack_11->SetBinError(3,9.691738);
   hNCinFV_stack_11->SetBinError(4,12.19694);
   hNCinFV_stack_11->SetBinError(5,12.63239);
   hNCinFV_stack_11->SetBinError(6,12.97803);
   hNCinFV_stack_11->SetBinError(7,13.1236);
   hNCinFV_stack_11->SetBinError(8,12.69369);
   hNCinFV_stack_11->SetBinError(9,13.08638);
   hNCinFV_stack_11->SetBinError(10,12.98381);
   hNCinFV_stack_11->SetBinError(11,13.16721);
   hNCinFV_stack_11->SetBinError(12,12.73323);
   hNCinFV_stack_11->SetBinError(13,13.16506);
   hNCinFV_stack_11->SetBinError(14,12.76318);
   hNCinFV_stack_11->SetBinError(15,12.63755);
   hNCinFV_stack_11->SetBinError(16,12.74945);
   hNCinFV_stack_11->SetBinError(17,12.68072);
   hNCinFV_stack_11->SetBinError(18,12.72169);
   hNCinFV_stack_11->SetBinError(19,12.97505);
   hNCinFV_stack_11->SetBinError(20,12.70435);
   hNCinFV_stack_11->SetBinError(21,12.93043);
   hNCinFV_stack_11->SetBinError(22,12.72158);
   hNCinFV_stack_11->SetBinError(23,12.07857);
   hNCinFV_stack_11->SetBinError(24,10.23387);
   hNCinFV_stack_11->SetBinError(25,4.961599);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.785313);
   hNCinFV_stack_11->SetEntries(59719);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,3.994352);
   hnumuCCinFV_stack_12->SetBinContent(1,2.443996);
   hnumuCCinFV_stack_12->SetBinContent(2,624.0361);
   hnumuCCinFV_stack_12->SetBinContent(3,3516.397);
   hnumuCCinFV_stack_12->SetBinContent(4,5541.49);
   hnumuCCinFV_stack_12->SetBinContent(5,6065.782);
   hnumuCCinFV_stack_12->SetBinContent(6,6279.411);
   hnumuCCinFV_stack_12->SetBinContent(7,6326.579);
   hnumuCCinFV_stack_12->SetBinContent(8,6330.737);
   hnumuCCinFV_stack_12->SetBinContent(9,6244.038);
   hnumuCCinFV_stack_12->SetBinContent(10,6240.514);
   hnumuCCinFV_stack_12->SetBinContent(11,6151.604);
   hnumuCCinFV_stack_12->SetBinContent(12,6169.49);
   hnumuCCinFV_stack_12->SetBinContent(13,6270.185);
   hnumuCCinFV_stack_12->SetBinContent(14,6155.199);
   hnumuCCinFV_stack_12->SetBinContent(15,6098.782);
   hnumuCCinFV_stack_12->SetBinContent(16,6152.74);
   hnumuCCinFV_stack_12->SetBinContent(17,6082.825);
   hnumuCCinFV_stack_12->SetBinContent(18,5998.298);
   hnumuCCinFV_stack_12->SetBinContent(19,5978.155);
   hnumuCCinFV_stack_12->SetBinContent(20,5970.59);
   hnumuCCinFV_stack_12->SetBinContent(21,5940.515);
   hnumuCCinFV_stack_12->SetBinContent(22,6009.32);
   hnumuCCinFV_stack_12->SetBinContent(23,5590.068);
   hnumuCCinFV_stack_12->SetBinContent(24,4014.698);
   hnumuCCinFV_stack_12->SetBinContent(25,918.5839);
   hnumuCCinFV_stack_12->SetBinContent(26,0.910428);
   hnumuCCinFV_stack_12->SetBinContent(27,9.125679);
   hnumuCCinFV_stack_12->SetBinError(0,1.297373);
   hnumuCCinFV_stack_12->SetBinError(1,1.421363);
   hnumuCCinFV_stack_12->SetBinError(2,17.53001);
   hnumuCCinFV_stack_12->SetBinError(3,41.46321);
   hnumuCCinFV_stack_12->SetBinError(4,52.30084);
   hnumuCCinFV_stack_12->SetBinError(5,54.24236);
   hnumuCCinFV_stack_12->SetBinError(6,56.14776);
   hnumuCCinFV_stack_12->SetBinError(7,55.96155);
   hnumuCCinFV_stack_12->SetBinError(8,56.59469);
   hnumuCCinFV_stack_12->SetBinError(9,55.65136);
   hnumuCCinFV_stack_12->SetBinError(10,55.09031);
   hnumuCCinFV_stack_12->SetBinError(11,54.71929);
   hnumuCCinFV_stack_12->SetBinError(12,54.26777);
   hnumuCCinFV_stack_12->SetBinError(13,54.89363);
   hnumuCCinFV_stack_12->SetBinError(14,55.47613);
   hnumuCCinFV_stack_12->SetBinError(15,55.65039);
   hnumuCCinFV_stack_12->SetBinError(16,55.84296);
   hnumuCCinFV_stack_12->SetBinError(17,56.62913);
   hnumuCCinFV_stack_12->SetBinError(18,54.1828);
   hnumuCCinFV_stack_12->SetBinError(19,54.11812);
   hnumuCCinFV_stack_12->SetBinError(20,54.59763);
   hnumuCCinFV_stack_12->SetBinError(21,54.49975);
   hnumuCCinFV_stack_12->SetBinError(22,55.66076);
   hnumuCCinFV_stack_12->SetBinError(23,52.48354);
   hnumuCCinFV_stack_12->SetBinError(24,44.80075);
   hnumuCCinFV_stack_12->SetBinError(25,21.20848);
   hnumuCCinFV_stack_12->SetBinError(26,0.4614094);
   hnumuCCinFV_stack_12->SetBinError(27,2.084377);
   hnumuCCinFV_stack_12->SetEntries(466222);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(2,4.501579);
   hnueCCinFV_stack_13->SetBinContent(3,32.73497);
   hnueCCinFV_stack_13->SetBinContent(4,53.95589);
   hnueCCinFV_stack_13->SetBinContent(5,52.4599);
   hnueCCinFV_stack_13->SetBinContent(6,46.81233);
   hnueCCinFV_stack_13->SetBinContent(7,45.10564);
   hnueCCinFV_stack_13->SetBinContent(8,50.42742);
   hnueCCinFV_stack_13->SetBinContent(9,45.67847);
   hnueCCinFV_stack_13->SetBinContent(10,57.11399);
   hnueCCinFV_stack_13->SetBinContent(11,49.46803);
   hnueCCinFV_stack_13->SetBinContent(12,43.2559);
   hnueCCinFV_stack_13->SetBinContent(13,46.72399);
   hnueCCinFV_stack_13->SetBinContent(14,51.47604);
   hnueCCinFV_stack_13->SetBinContent(15,41.94765);
   hnueCCinFV_stack_13->SetBinContent(16,57.60381);
   hnueCCinFV_stack_13->SetBinContent(17,45.95731);
   hnueCCinFV_stack_13->SetBinContent(18,55.46996);
   hnueCCinFV_stack_13->SetBinContent(19,43.72431);
   hnueCCinFV_stack_13->SetBinContent(20,47.28114);
   hnueCCinFV_stack_13->SetBinContent(21,44.2022);
   hnueCCinFV_stack_13->SetBinContent(22,50.19892);
   hnueCCinFV_stack_13->SetBinContent(23,43.52192);
   hnueCCinFV_stack_13->SetBinContent(24,29.49001);
   hnueCCinFV_stack_13->SetBinContent(25,10.67373);
   hnueCCinFV_stack_13->SetBinContent(27,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,1.109794);
   hnueCCinFV_stack_13->SetBinError(3,4.520881);
   hnueCCinFV_stack_13->SetBinError(4,5.989635);
   hnueCCinFV_stack_13->SetBinError(5,5.3337);
   hnueCCinFV_stack_13->SetBinError(6,3.728594);
   hnueCCinFV_stack_13->SetBinError(7,4.191514);
   hnueCCinFV_stack_13->SetBinError(8,4.962088);
   hnueCCinFV_stack_13->SetBinError(9,4.696961);
   hnueCCinFV_stack_13->SetBinError(10,5.331947);
   hnueCCinFV_stack_13->SetBinError(11,4.47706);
   hnueCCinFV_stack_13->SetBinError(12,4.086478);
   hnueCCinFV_stack_13->SetBinError(13,4.006323);
   hnueCCinFV_stack_13->SetBinError(14,4.384307);
   hnueCCinFV_stack_13->SetBinError(15,3.791392);
   hnueCCinFV_stack_13->SetBinError(16,5.207018);
   hnueCCinFV_stack_13->SetBinError(17,3.692955);
   hnueCCinFV_stack_13->SetBinError(18,5.456979);
   hnueCCinFV_stack_13->SetBinError(19,5.67853);
   hnueCCinFV_stack_13->SetBinError(20,4.398257);
   hnueCCinFV_stack_13->SetBinError(21,4.263307);
   hnueCCinFV_stack_13->SetBinError(22,4.542709);
   hnueCCinFV_stack_13->SetBinError(23,4.536416);
   hnueCCinFV_stack_13->SetBinError(24,2.985371);
   hnueCCinFV_stack_13->SetBinError(25,2.805923);
   hnueCCinFV_stack_13->SetBinError(27,0.3401776);
   hnueCCinFV_stack_13->SetEntries(3908);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__2->SetBinContent(0,31.99994);
   hmcerror__2->SetBinContent(1,13.00811);
   hmcerror__2->SetBinContent(2,2926.574);
   hmcerror__2->SetBinContent(3,7319.205);
   hmcerror__2->SetBinContent(4,8833.26);
   hmcerror__2->SetBinContent(5,9371.582);
   hmcerror__2->SetBinContent(6,9522.525);
   hmcerror__2->SetBinContent(7,9586.858);
   hmcerror__2->SetBinContent(8,9551.964);
   hmcerror__2->SetBinContent(9,9481.867);
   hmcerror__2->SetBinContent(10,9525.311);
   hmcerror__2->SetBinContent(11,9456.172);
   hmcerror__2->SetBinContent(12,9398.871);
   hmcerror__2->SetBinContent(13,9909.458);
   hmcerror__2->SetBinContent(14,9463.576);
   hmcerror__2->SetBinContent(15,9439.378);
   hmcerror__2->SetBinContent(16,9653.645);
   hmcerror__2->SetBinContent(17,9590.337);
   hmcerror__2->SetBinContent(18,9661.486);
   hmcerror__2->SetBinContent(19,9856.796);
   hmcerror__2->SetBinContent(20,10066.31);
   hmcerror__2->SetBinContent(21,10203.27);
   hmcerror__2->SetBinContent(22,10513.72);
   hmcerror__2->SetBinContent(23,10346.84);
   hmcerror__2->SetBinContent(24,9520.08);
   hmcerror__2->SetBinContent(25,6443.694);
   hmcerror__2->SetBinContent(26,21.08028);
   hmcerror__2->SetBinContent(27,44.24077);
   hmcerror__2->SetBinError(0,3.134893);
   hmcerror__2->SetBinError(1,11.68729);
   hmcerror__2->SetBinError(2,410.1359);
   hmcerror__2->SetBinError(3,1013.754);
   hmcerror__2->SetBinError(4,1246.588);
   hmcerror__2->SetBinError(5,1298.042);
   hmcerror__2->SetBinError(6,1355.169);
   hmcerror__2->SetBinError(7,1311.751);
   hmcerror__2->SetBinError(8,1362.766);
   hmcerror__2->SetBinError(9,1309.647);
   hmcerror__2->SetBinError(10,1312.086);
   hmcerror__2->SetBinError(11,1317.021);
   hmcerror__2->SetBinError(12,1298.601);
   hmcerror__2->SetBinError(13,1307.89);
   hmcerror__2->SetBinError(14,1327.748);
   hmcerror__2->SetBinError(15,1279.147);
   hmcerror__2->SetBinError(16,1331.52);
   hmcerror__2->SetBinError(17,1283.488);
   hmcerror__2->SetBinError(18,1272.921);
   hmcerror__2->SetBinError(19,1316.006);
   hmcerror__2->SetBinError(20,1305.852);
   hmcerror__2->SetBinError(21,1277.326);
   hmcerror__2->SetBinError(22,1351.572);
   hmcerror__2->SetBinError(23,1276.644);
   hmcerror__2->SetBinError(24,1050.245);
   hmcerror__2->SetBinError(25,651.9983);
   hmcerror__2->SetBinError(26,11.94661);
   hmcerror__2->SetBinError(27,30.1635);
   hmcerror__2->SetEntries(195630.6);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[26] = {
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
   Double_t _fy3001[26] = {
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
   Double_t _felx3001[26] = {
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
   Double_t _fely3001[26] = {
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
   Double_t _fehx3001[26] = {
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
   Double_t _fehy3001[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-156,156);
   Graph_Graph3001->SetMinimum(6.75225);
   Graph_Graph3001->SetMaximum(11778.03);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=38.6/26","");
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

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 26606.8","F");

   ci = 1435;
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

   ci = 1436;
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

   ci = 1437;
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

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  51.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  5410.3","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  1457.9","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  3.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 14693.7","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 13965.3","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 130673.4","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1049.8","F");

   ci = 1446;
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
   canvas1->cd();
  
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
   
   Double_t _fx3002[26] = {
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
   Double_t _fy3002[26] = {
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
   Double_t _felx3002[26] = {
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
   Double_t _fely3002[26] = {
   0.8984612,
   0.140142,
   0.1385061,
   0.1411244,
   0.1385083,
   0.142312,
   0.136828,
   0.1426687,
   0.1381213,
   0.1377473,
   0.1392764,
   0.1381656,
   0.131984,
   0.1403009,
   0.1355117,
   0.1379292,
   0.1338313,
   0.131752,
   0.1335126,
   0.129725,
   0.1251879,
   0.1285532,
   0.1233849,
   0.110319,
   0.1011839,
   0.5667198};
   Double_t _fehx3002[26] = {
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
   Double_t _fehy3002[26] = {
   0.8984612,
   0.140142,
   0.1385061,
   0.1411244,
   0.1385083,
   0.142312,
   0.136828,
   0.1426687,
   0.1381213,
   0.1377473,
   0.1392764,
   0.1381656,
   0.131984,
   0.1403009,
   0.1355117,
   0.1379292,
   0.1338313,
   0.131752,
   0.1335126,
   0.129725,
   0.1251879,
   0.1285532,
   0.1233849,
   0.110319,
   0.1011839,
   0.5667198};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-156,156);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[26] = {
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
   Double_t _fy3003[26] = {
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
   Double_t _felx3003[26] = {
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
   Double_t _fely3003[26] = {
   0.2938916,
   0.1276489,
   0.1289378,
   0.1372463,
   0.1364807,
   0.1408491,
   0.1353511,
   0.1401271,
   0.1366343,
   0.1363703,
   0.1375461,
   0.1369021,
   0.1298406,
   0.1385388,
   0.1335613,
   0.1360243,
   0.132001,
   0.1300479,
   0.1305933,
   0.1282319,
   0.1236417,
   0.1264965,
   0.1215915,
   0.1060236,
   0.08855849,
   0.2667404};
   Double_t _fehx3003[26] = {
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
   Double_t _fehy3003[26] = {
   0.2938916,
   0.1276489,
   0.1289378,
   0.1372463,
   0.1364807,
   0.1408491,
   0.1353511,
   0.1401271,
   0.1366343,
   0.1363703,
   0.1375461,
   0.1369021,
   0.1298406,
   0.1385388,
   0.1335613,
   0.1360243,
   0.132001,
   0.1300479,
   0.1305933,
   0.1282319,
   0.1236417,
   0.1264965,
   0.1215915,
   0.1060236,
   0.08855849,
   0.2667404};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-156,156);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[26] = {
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
   Double_t _fy3004[26] = {
   0.8456261,
   0.8036702,
   0.9607601,
   1.023178,
   1.052224,
   1.053607,
   1.019416,
   1.026386,
   1.043993,
   1.055819,
   1.047887,
   1.061191,
   1.07019,
   1.040093,
   1.052294,
   1.034532,
   1.043655,
   1.028724,
   1.033196,
   1.025202,
   1.018203,
   1.007351,
   1.024081,
   0.9839203,
   0.8760502,
   1.091067};
   Double_t _felx3004[26] = {
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
   Double_t _fely3004[26] = {
   0.2688706,
   0.0165714,
   0.01145712,
   0.01076255,
   0.01059614,
   0.01051873,
   0.01031187,
   0.01036595,
   0.01049305,
   0.01052822,
   0.01052688,
   0.01062574,
   0.01039215,
   0.01048355,
   0.01055837,
   0.01035205,
   0.01043185,
   0.01031876,
   0.0102382,
   0.01009182,
   0.009989583,
   0.009788411,
   0.009948632,
   0.01016622,
   0.01165996,
   0.2346127};
   Double_t _fehx3004[26] = {
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
   Double_t _fehy3004[26] = {
   0.2513816,
   0.0165714,
   0.01145712,
   0.01076255,
   0.01059614,
   0.01051873,
   0.01031187,
   0.01036595,
   0.01049305,
   0.01052822,
   0.01052688,
   0.01062574,
   0.01039215,
   0.01048355,
   0.01055837,
   0.01035205,
   0.01043185,
   0.01031876,
   0.0102382,
   0.01009182,
   0.009989583,
   0.009788411,
   0.009948632,
   0.01016622,
   0.01165996,
   0.2245986};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-156,156);
   Graph_Graph3004->SetMinimum(0.5028644);
   Graph_Graph3004->SetMaximum(1.389557);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

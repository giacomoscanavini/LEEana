#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue May 31 23:41:22 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-170,-120.7327,163.3333,12715.06);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__1->SetBinContent(0,26.56537);
   hmc__1->SetBinContent(1,9.754669);
   hmc__1->SetBinContent(2,2201.328);
   hmc__1->SetBinContent(3,4173.377);
   hmc__1->SetBinContent(4,4034.156);
   hmc__1->SetBinContent(5,4143.786);
   hmc__1->SetBinContent(6,4090.96);
   hmc__1->SetBinContent(7,4000.696);
   hmc__1->SetBinContent(8,4050.063);
   hmc__1->SetBinContent(9,4008.134);
   hmc__1->SetBinContent(10,4013.377);
   hmc__1->SetBinContent(11,4015.124);
   hmc__1->SetBinContent(12,3973.791);
   hmc__1->SetBinContent(13,3983.895);
   hmc__1->SetBinContent(14,4031.541);
   hmc__1->SetBinContent(15,4075.029);
   hmc__1->SetBinContent(16,4290.295);
   hmc__1->SetBinContent(17,4318.332);
   hmc__1->SetBinContent(18,4338.085);
   hmc__1->SetBinContent(19,4625.189);
   hmc__1->SetBinContent(20,4825.801);
   hmc__1->SetBinContent(21,5090.429);
   hmc__1->SetBinContent(22,5347.471);
   hmc__1->SetBinContent(23,5483.151);
   hmc__1->SetBinContent(24,6036.636);
   hmc__1->SetBinContent(25,5367.573);
   hmc__1->SetBinContent(26,18.82825);
   hmc__1->SetBinContent(27,35.97068);
   hmc__1->SetBinError(0,2.910044);
   hmc__1->SetBinError(1,7.837546);
   hmc__1->SetBinError(2,317.262);
   hmc__1->SetBinError(3,642.0839);
   hmc__1->SetBinError(4,572.258);
   hmc__1->SetBinError(5,603.6405);
   hmc__1->SetBinError(6,623.0799);
   hmc__1->SetBinError(7,579.6477);
   hmc__1->SetBinError(8,588.0495);
   hmc__1->SetBinError(9,583.6952);
   hmc__1->SetBinError(10,598.0858);
   hmc__1->SetBinError(11,588.9934);
   hmc__1->SetBinError(12,567.5175);
   hmc__1->SetBinError(13,551.5106);
   hmc__1->SetBinError(14,580.614);
   hmc__1->SetBinError(15,561.3645);
   hmc__1->SetBinError(16,575.9662);
   hmc__1->SetBinError(17,564.0843);
   hmc__1->SetBinError(18,571.8327);
   hmc__1->SetBinError(19,601.3395);
   hmc__1->SetBinError(20,623.9977);
   hmc__1->SetBinError(21,639.5184);
   hmc__1->SetBinError(22,651.292);
   hmc__1->SetBinError(23,623.916);
   hmc__1->SetBinError(24,539.1554);
   hmc__1->SetBinError(25,500.6647);
   hmc__1->SetBinError(26,9.207373);
   hmc__1->SetBinError(27,15.26311);
   hmc__1->SetMinimum(-120.7327);
   hmc__1->SetMaximum(12073.27);
   hmc__1->SetEntries(96405.82);
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
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(6338.469);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(0,1.385268);
   hbadmatch_stack_1->SetBinContent(1,0.3917402);
   hbadmatch_stack_1->SetBinContent(2,241.5081);
   hbadmatch_stack_1->SetBinContent(3,342.5746);
   hbadmatch_stack_1->SetBinContent(4,196.0498);
   hbadmatch_stack_1->SetBinContent(5,181.405);
   hbadmatch_stack_1->SetBinContent(6,181.9367);
   hbadmatch_stack_1->SetBinContent(7,167.6942);
   hbadmatch_stack_1->SetBinContent(8,154.0329);
   hbadmatch_stack_1->SetBinContent(9,140.9716);
   hbadmatch_stack_1->SetBinContent(10,156.628);
   hbadmatch_stack_1->SetBinContent(11,150.1253);
   hbadmatch_stack_1->SetBinContent(12,148.1857);
   hbadmatch_stack_1->SetBinContent(13,132.9664);
   hbadmatch_stack_1->SetBinContent(14,139.8268);
   hbadmatch_stack_1->SetBinContent(15,133.4807);
   hbadmatch_stack_1->SetBinContent(16,145.3409);
   hbadmatch_stack_1->SetBinContent(17,163.7626);
   hbadmatch_stack_1->SetBinContent(18,165.0671);
   hbadmatch_stack_1->SetBinContent(19,195.3948);
   hbadmatch_stack_1->SetBinContent(20,212.1233);
   hbadmatch_stack_1->SetBinContent(21,242.7348);
   hbadmatch_stack_1->SetBinContent(22,248.2426);
   hbadmatch_stack_1->SetBinContent(23,254.7546);
   hbadmatch_stack_1->SetBinContent(24,428.8713);
   hbadmatch_stack_1->SetBinContent(25,352.1892);
   hbadmatch_stack_1->SetBinContent(26,2.687686);
   hbadmatch_stack_1->SetBinContent(27,2.930614);
   hbadmatch_stack_1->SetBinError(0,0.6370688);
   hbadmatch_stack_1->SetBinError(1,0.2770047);
   hbadmatch_stack_1->SetBinError(2,9.790605);
   hbadmatch_stack_1->SetBinError(3,11.39655);
   hbadmatch_stack_1->SetBinError(4,8.777983);
   hbadmatch_stack_1->SetBinError(5,8.98905);
   hbadmatch_stack_1->SetBinError(6,9.307099);
   hbadmatch_stack_1->SetBinError(7,7.643934);
   hbadmatch_stack_1->SetBinError(8,7.759357);
   hbadmatch_stack_1->SetBinError(9,7.021608);
   hbadmatch_stack_1->SetBinError(10,8.346701);
   hbadmatch_stack_1->SetBinError(11,7.957441);
   hbadmatch_stack_1->SetBinError(12,7.892141);
   hbadmatch_stack_1->SetBinError(13,6.511695);
   hbadmatch_stack_1->SetBinError(14,9.667409);
   hbadmatch_stack_1->SetBinError(15,7.483787);
   hbadmatch_stack_1->SetBinError(16,7.165997);
   hbadmatch_stack_1->SetBinError(17,8.897729);
   hbadmatch_stack_1->SetBinError(18,8.620872);
   hbadmatch_stack_1->SetBinError(19,10.28762);
   hbadmatch_stack_1->SetBinError(20,8.665604);
   hbadmatch_stack_1->SetBinError(21,9.001375);
   hbadmatch_stack_1->SetBinError(22,8.791296);
   hbadmatch_stack_1->SetBinError(23,10.34187);
   hbadmatch_stack_1->SetBinError(24,15.96766);
   hbadmatch_stack_1->SetBinError(25,11.82774);
   hbadmatch_stack_1->SetBinError(26,1.690922);
   hbadmatch_stack_1->SetBinError(27,0.8793526);
   hbadmatch_stack_1->SetEntries(18491);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(0,8.198181);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,569.3605);
   hext_stack_2->SetBinContent(3,1114.139);
   hext_stack_2->SetBinContent(4,724.866);
   hext_stack_2->SetBinContent(5,591.1849);
   hext_stack_2->SetBinContent(6,591.4391);
   hext_stack_2->SetBinContent(7,566.6683);
   hext_stack_2->SetBinContent(8,621.101);
   hext_stack_2->SetBinContent(9,664.6957);
   hext_stack_2->SetBinContent(10,661.7874);
   hext_stack_2->SetBinContent(11,675.1647);
   hext_stack_2->SetBinContent(12,689.0234);
   hext_stack_2->SetBinContent(13,735.8278);
   hext_stack_2->SetBinContent(14,738.636);
   hext_stack_2->SetBinContent(15,781.2572);
   hext_stack_2->SetBinContent(16,912.5959);
   hext_stack_2->SetBinContent(17,978.3882);
   hext_stack_2->SetBinContent(18,1037.209);
   hext_stack_2->SetBinContent(19,1164.482);
   hext_stack_2->SetBinContent(20,1318.32);
   hext_stack_2->SetBinContent(21,1525.537);
   hext_stack_2->SetBinContent(22,1669.346);
   hext_stack_2->SetBinContent(23,1982.488);
   hext_stack_2->SetBinContent(24,2891.21);
   hext_stack_2->SetBinContent(25,2886.26);
   hext_stack_2->SetBinContent(26,5.8292);
   hext_stack_2->SetBinContent(27,13.21418);
   hext_stack_2->SetBinError(0,1.815902);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,16.57634);
   hext_stack_2->SetBinError(3,22.47157);
   hext_stack_2->SetBinError(4,18.49766);
   hext_stack_2->SetBinError(5,16.50368);
   hext_stack_2->SetBinError(6,16.62199);
   hext_stack_2->SetBinError(7,16.11655);
   hext_stack_2->SetBinError(8,16.99203);
   hext_stack_2->SetBinError(9,17.57809);
   hext_stack_2->SetBinError(10,17.43663);
   hext_stack_2->SetBinError(11,17.73003);
   hext_stack_2->SetBinError(12,17.77179);
   hext_stack_2->SetBinError(13,18.47397);
   hext_stack_2->SetBinError(14,18.41302);
   hext_stack_2->SetBinError(15,18.87788);
   hext_stack_2->SetBinError(16,20.73768);
   hext_stack_2->SetBinError(17,21.40225);
   hext_stack_2->SetBinError(18,21.93523);
   hext_stack_2->SetBinError(19,23.23346);
   hext_stack_2->SetBinError(20,24.86295);
   hext_stack_2->SetBinError(21,26.99732);
   hext_stack_2->SetBinError(22,28.18913);
   hext_stack_2->SetBinError(23,30.71828);
   hext_stack_2->SetBinError(24,36.73468);
   hext_stack_2->SetBinError(25,36.88851);
   hext_stack_2->SetBinError(26,1.559401);
   hext_stack_2->SetBinError(27,2.323485);
   hext_stack_2->SetEntries(60612);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,1.337196);
   hdirt_stack_3->SetBinContent(2,377.0219);
   hdirt_stack_3->SetBinContent(3,401.3401);
   hdirt_stack_3->SetBinContent(4,272.3203);
   hdirt_stack_3->SetBinContent(5,259.6422);
   hdirt_stack_3->SetBinContent(6,248.4684);
   hdirt_stack_3->SetBinContent(7,229.4331);
   hdirt_stack_3->SetBinContent(8,224.5618);
   hdirt_stack_3->SetBinContent(9,214.4405);
   hdirt_stack_3->SetBinContent(10,191.3584);
   hdirt_stack_3->SetBinContent(11,182.0255);
   hdirt_stack_3->SetBinContent(12,174.296);
   hdirt_stack_3->SetBinContent(13,171.629);
   hdirt_stack_3->SetBinContent(14,163.1089);
   hdirt_stack_3->SetBinContent(15,177.1315);
   hdirt_stack_3->SetBinContent(16,178.3978);
   hdirt_stack_3->SetBinContent(17,179.569);
   hdirt_stack_3->SetBinContent(18,185.4724);
   hdirt_stack_3->SetBinContent(19,203.5945);
   hdirt_stack_3->SetBinContent(20,237.2177);
   hdirt_stack_3->SetBinContent(21,241.0795);
   hdirt_stack_3->SetBinContent(22,262.2854);
   hdirt_stack_3->SetBinContent(23,299.6037);
   hdirt_stack_3->SetBinContent(24,333.5123);
   hdirt_stack_3->SetBinContent(25,637.7813);
   hdirt_stack_3->SetBinContent(26,0.7218895);
   hdirt_stack_3->SetBinContent(27,2.834296);
   hdirt_stack_3->SetBinError(0,0.5760713);
   hdirt_stack_3->SetBinError(2,11.96301);
   hdirt_stack_3->SetBinError(3,12.75186);
   hdirt_stack_3->SetBinError(4,10.20356);
   hdirt_stack_3->SetBinError(5,10.51651);
   hdirt_stack_3->SetBinError(6,9.864019);
   hdirt_stack_3->SetBinError(7,10.37003);
   hdirt_stack_3->SetBinError(8,10.60982);
   hdirt_stack_3->SetBinError(9,9.938331);
   hdirt_stack_3->SetBinError(10,8.225998);
   hdirt_stack_3->SetBinError(11,9.425086);
   hdirt_stack_3->SetBinError(12,8.388745);
   hdirt_stack_3->SetBinError(13,7.887191);
   hdirt_stack_3->SetBinError(14,7.378711);
   hdirt_stack_3->SetBinError(15,7.999892);
   hdirt_stack_3->SetBinError(16,7.998835);
   hdirt_stack_3->SetBinError(17,8.524975);
   hdirt_stack_3->SetBinError(18,9.13006);
   hdirt_stack_3->SetBinError(19,8.93035);
   hdirt_stack_3->SetBinError(20,10.76704);
   hdirt_stack_3->SetBinError(21,9.707012);
   hdirt_stack_3->SetBinError(22,9.454142);
   hdirt_stack_3->SetBinError(23,11.70771);
   hdirt_stack_3->SetBinError(24,11.02921);
   hdirt_stack_3->SetBinError(25,16.29807);
   hdirt_stack_3->SetBinError(26,0.4507442);
   hdirt_stack_3->SetBinError(27,0.941552);
   hdirt_stack_3->SetEntries(24330);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,6.931001);
   houtFV_stack_4->SetBinContent(1,6.892172);
   houtFV_stack_4->SetBinContent(2,644.7462);
   houtFV_stack_4->SetBinContent(3,611.5472);
   houtFV_stack_4->SetBinContent(4,329.7587);
   houtFV_stack_4->SetBinContent(5,308.3224);
   houtFV_stack_4->SetBinContent(6,257.8868);
   houtFV_stack_4->SetBinContent(7,246.8395);
   houtFV_stack_4->SetBinContent(8,240.0393);
   houtFV_stack_4->SetBinContent(9,244.0921);
   houtFV_stack_4->SetBinContent(10,233.1607);
   houtFV_stack_4->SetBinContent(11,239.7268);
   houtFV_stack_4->SetBinContent(12,226.679);
   houtFV_stack_4->SetBinContent(13,235.9683);
   houtFV_stack_4->SetBinContent(14,246.6848);
   houtFV_stack_4->SetBinContent(15,235.6607);
   houtFV_stack_4->SetBinContent(16,236.5952);
   houtFV_stack_4->SetBinContent(17,236.5703);
   houtFV_stack_4->SetBinContent(18,231.4631);
   houtFV_stack_4->SetBinContent(19,234.6707);
   houtFV_stack_4->SetBinContent(20,255.0237);
   houtFV_stack_4->SetBinContent(21,262.3198);
   houtFV_stack_4->SetBinContent(22,281.3415);
   houtFV_stack_4->SetBinContent(23,325.6317);
   houtFV_stack_4->SetBinContent(24,457.6558);
   houtFV_stack_4->SetBinContent(25,907.1796);
   houtFV_stack_4->SetBinContent(26,8.022593);
   houtFV_stack_4->SetBinContent(27,5.646112);
   houtFV_stack_4->SetBinError(0,1.308373);
   houtFV_stack_4->SetBinError(1,1.301836);
   houtFV_stack_4->SetBinError(2,14.82452);
   houtFV_stack_4->SetBinError(3,14.57369);
   houtFV_stack_4->SetBinError(4,10.22223);
   houtFV_stack_4->SetBinError(5,10.65814);
   houtFV_stack_4->SetBinError(6,9.342083);
   houtFV_stack_4->SetBinError(7,8.639538);
   houtFV_stack_4->SetBinError(8,8.652997);
   houtFV_stack_4->SetBinError(9,8.923864);
   houtFV_stack_4->SetBinError(10,8.949531);
   houtFV_stack_4->SetBinError(11,10.12744);
   houtFV_stack_4->SetBinError(12,9.376928);
   houtFV_stack_4->SetBinError(13,9.245319);
   houtFV_stack_4->SetBinError(14,10.40589);
   houtFV_stack_4->SetBinError(15,8.665689);
   houtFV_stack_4->SetBinError(16,9.475424);
   houtFV_stack_4->SetBinError(17,9.078519);
   houtFV_stack_4->SetBinError(18,9.483477);
   houtFV_stack_4->SetBinError(19,9.708197);
   houtFV_stack_4->SetBinError(20,10.36499);
   houtFV_stack_4->SetBinError(21,8.92967);
   houtFV_stack_4->SetBinError(22,9.60986);
   houtFV_stack_4->SetBinError(23,10.15426);
   houtFV_stack_4->SetBinError(24,12.7207);
   houtFV_stack_4->SetBinError(25,18.95477);
   houtFV_stack_4->SetBinError(26,1.402359);
   houtFV_stack_4->SetBinError(27,1.13208);
   houtFV_stack_4->SetEntries(30909);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.5025361);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.860842);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.997771);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.031912);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.756152);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.127565);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.667212);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.671204);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.356006);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.018126);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,7.391708);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.898878);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.208353);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,8.352598);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,9.221903);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,9.566092);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.946884);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,7.892908);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.785445);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,6.971704);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,8.604202);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,8.56102);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.885437);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.184258);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2820092);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6261516);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7906568);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9326087);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9745471);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9168955);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8692465);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9050754);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.019187);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.910969);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9260826);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7526172);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8223472);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9582358);
   hNCpi0inFVcoh_stack_5->SetBinError(16,1.041732);
   hNCpi0inFVcoh_stack_5->SetBinError(17,1.065885);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9457321);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9053261);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7014469);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.834057);
   hNCpi0inFVcoh_stack_5->SetBinError(22,1.011681);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.9884594);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8582449);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3155521);
   hNCpi0inFVcoh_stack_5->SetEntries(3116);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,1.757876);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,19.92882);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,92.58778);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,144.0506);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,161.0037);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,162.5282);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,169.1642);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,172.2437);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,166.377);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,162.7646);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,169.3607);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,158.4909);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,160.1367);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,154.595);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,158.3727);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,168.4602);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,155.9561);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,151.9908);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,159.8252);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,159.6458);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,157.2316);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,155.4907);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,145.1286);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,115.8398);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,38.75376);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,0.2647179);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,1.798562);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.4757384);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.443394);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.179527);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.929431);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.126167);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.14526);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.196174);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,4.262335);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,4.193615);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,4.144232);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,4.233228);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,4.054937);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,4.150078);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,4.026427);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,4.129909);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,4.299929);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,4.058079);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,3.964437);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,4.122686);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,4.128765);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,4.074517);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,4.074455);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,3.936482);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.580692);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,2.033961);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.118917);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.4636538);
   hNCpi0inFVnoncoh_stack_6->SetEntries(64545);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_7->SetBinContent(0,2.682774);
   hCCpi0inFV_stack_7->SetBinContent(1,0.536893);
   hCCpi0inFV_stack_7->SetBinContent(2,38.66184);
   hCCpi0inFV_stack_7->SetBinContent(3,193.7614);
   hCCpi0inFV_stack_7->SetBinContent(4,283.1045);
   hCCpi0inFV_stack_7->SetBinContent(5,322.303);
   hCCpi0inFV_stack_7->SetBinContent(6,300.3175);
   hCCpi0inFV_stack_7->SetBinContent(7,292.1178);
   hCCpi0inFV_stack_7->SetBinContent(8,306.8465);
   hCCpi0inFV_stack_7->SetBinContent(9,304.2065);
   hCCpi0inFV_stack_7->SetBinContent(10,312.8054);
   hCCpi0inFV_stack_7->SetBinContent(11,315.3661);
   hCCpi0inFV_stack_7->SetBinContent(12,305.184);
   hCCpi0inFV_stack_7->SetBinContent(13,295.4277);
   hCCpi0inFV_stack_7->SetBinContent(14,292.5887);
   hCCpi0inFV_stack_7->SetBinContent(15,291.2117);
   hCCpi0inFV_stack_7->SetBinContent(16,311.62);
   hCCpi0inFV_stack_7->SetBinContent(17,283.0526);
   hCCpi0inFV_stack_7->SetBinContent(18,285.6049);
   hCCpi0inFV_stack_7->SetBinContent(19,309.9732);
   hCCpi0inFV_stack_7->SetBinContent(20,303.6255);
   hCCpi0inFV_stack_7->SetBinContent(21,295.9423);
   hCCpi0inFV_stack_7->SetBinContent(22,319.4117);
   hCCpi0inFV_stack_7->SetBinContent(23,278.1728);
   hCCpi0inFV_stack_7->SetBinContent(24,218.2883);
   hCCpi0inFV_stack_7->SetBinContent(25,58.32935);
   hCCpi0inFV_stack_7->SetBinContent(26,0.1950248);
   hCCpi0inFV_stack_7->SetBinContent(27,1.463836);
   hCCpi0inFV_stack_7->SetBinError(0,0.8783089);
   hCCpi0inFV_stack_7->SetBinError(1,0.3929602);
   hCCpi0inFV_stack_7->SetBinError(2,3.065607);
   hCCpi0inFV_stack_7->SetBinError(3,7.016697);
   hCCpi0inFV_stack_7->SetBinError(4,8.3732);
   hCCpi0inFV_stack_7->SetBinError(5,9.230251);
   hCCpi0inFV_stack_7->SetBinError(6,8.630534);
   hCCpi0inFV_stack_7->SetBinError(7,8.533465);
   hCCpi0inFV_stack_7->SetBinError(8,8.869595);
   hCCpi0inFV_stack_7->SetBinError(9,8.744);
   hCCpi0inFV_stack_7->SetBinError(10,8.908779);
   hCCpi0inFV_stack_7->SetBinError(11,8.899039);
   hCCpi0inFV_stack_7->SetBinError(12,8.781119);
   hCCpi0inFV_stack_7->SetBinError(13,8.58782);
   hCCpi0inFV_stack_7->SetBinError(14,8.564739);
   hCCpi0inFV_stack_7->SetBinError(15,8.502803);
   hCCpi0inFV_stack_7->SetBinError(16,8.824891);
   hCCpi0inFV_stack_7->SetBinError(17,8.481365);
   hCCpi0inFV_stack_7->SetBinError(18,8.45647);
   hCCpi0inFV_stack_7->SetBinError(19,8.820288);
   hCCpi0inFV_stack_7->SetBinError(20,8.691539);
   hCCpi0inFV_stack_7->SetBinError(21,8.589822);
   hCCpi0inFV_stack_7->SetBinError(22,8.907718);
   hCCpi0inFV_stack_7->SetBinError(23,8.364042);
   hCCpi0inFV_stack_7->SetBinError(24,7.464469);
   hCCpi0inFV_stack_7->SetBinError(25,3.808702);
   hCCpi0inFV_stack_7->SetBinError(26,0.1950249);
   hCCpi0inFV_stack_7->SetBinError(27,0.620407);
   hCCpi0inFV_stack_7->SetEntries(27943);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_8->SetBinContent(0,0.3917402);
   hNCinFV_stack_8->SetBinContent(1,0.536893);
   hNCinFV_stack_8->SetBinContent(2,24.13432);
   hNCinFV_stack_8->SetBinContent(3,107.5834);
   hNCinFV_stack_8->SetBinContent(4,158.1929);
   hNCinFV_stack_8->SetBinContent(5,164.8511);
   hNCinFV_stack_8->SetBinContent(6,157.2731);
   hNCinFV_stack_8->SetBinContent(7,160.1249);
   hNCinFV_stack_8->SetBinContent(8,148.0231);
   hNCinFV_stack_8->SetBinContent(9,153.4343);
   hNCinFV_stack_8->SetBinContent(10,136.3353);
   hNCinFV_stack_8->SetBinContent(11,162.3836);
   hNCinFV_stack_8->SetBinContent(12,139.0605);
   hNCinFV_stack_8->SetBinContent(13,152.6246);
   hNCinFV_stack_8->SetBinContent(14,149.5293);
   hNCinFV_stack_8->SetBinContent(15,146.1689);
   hNCinFV_stack_8->SetBinContent(16,156.2524);
   hNCinFV_stack_8->SetBinContent(17,151.9818);
   hNCinFV_stack_8->SetBinContent(18,160.2834);
   hNCinFV_stack_8->SetBinContent(19,162.9745);
   hNCinFV_stack_8->SetBinContent(20,164.4165);
   hNCinFV_stack_8->SetBinContent(21,161.2233);
   hNCinFV_stack_8->SetBinContent(22,168.8669);
   hNCinFV_stack_8->SetBinContent(23,162.9237);
   hNCinFV_stack_8->SetBinContent(24,114.7889);
   hNCinFV_stack_8->SetBinContent(25,41.54806);
   hNCinFV_stack_8->SetBinContent(26,0.1967154);
   hNCinFV_stack_8->SetBinContent(27,1.268811);
   hNCinFV_stack_8->SetBinError(0,0.2770047);
   hNCinFV_stack_8->SetBinError(1,0.3929602);
   hNCinFV_stack_8->SetBinError(2,2.450696);
   hNCinFV_stack_8->SetBinError(3,5.203463);
   hNCinFV_stack_8->SetBinError(4,6.245741);
   hNCinFV_stack_8->SetBinError(5,6.395902);
   hNCinFV_stack_8->SetBinError(6,6.275255);
   hNCinFV_stack_8->SetBinError(7,6.322724);
   hNCinFV_stack_8->SetBinError(8,6.023718);
   hNCinFV_stack_8->SetBinError(9,6.142274);
   hNCinFV_stack_8->SetBinError(10,5.77504);
   hNCinFV_stack_8->SetBinError(11,6.349511);
   hNCinFV_stack_8->SetBinError(12,5.979135);
   hNCinFV_stack_8->SetBinError(13,6.193329);
   hNCinFV_stack_8->SetBinError(14,6.156119);
   hNCinFV_stack_8->SetBinError(15,6.057857);
   hNCinFV_stack_8->SetBinError(16,6.310637);
   hNCinFV_stack_8->SetBinError(17,6.209266);
   hNCinFV_stack_8->SetBinError(18,6.38703);
   hNCinFV_stack_8->SetBinError(19,6.401068);
   hNCinFV_stack_8->SetBinError(20,6.446788);
   hNCinFV_stack_8->SetBinError(21,6.389938);
   hNCinFV_stack_8->SetBinError(22,6.495532);
   hNCinFV_stack_8->SetBinError(23,6.356102);
   hNCinFV_stack_8->SetBinError(24,5.329183);
   hNCinFV_stack_8->SetBinError(25,3.194792);
   hNCinFV_stack_8->SetBinError(26,0.1967154);
   hNCinFV_stack_8->SetBinError(27,0.5889569);
   hNCinFV_stack_8->SetEntries(14605);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_9->SetBinContent(0,3.797636);
   hnumuCCinFV_stack_9->SetBinContent(1,0.8093534);
   hnumuCCinFV_stack_9->SetBinContent(2,283.1592);
   hnumuCCinFV_stack_9->SetBinContent(3,1288.914);
   hnumuCCinFV_stack_9->SetBinContent(4,1899.024);
   hnumuCCinFV_stack_9->SetBinContent(5,2121.561);
   hnumuCCinFV_stack_9->SetBinContent(6,2161.207);
   hnumuCCinFV_stack_9->SetBinContent(7,2144.249);
   hnumuCCinFV_stack_9->SetBinContent(8,2154.544);
   hnumuCCinFV_stack_9->SetBinContent(9,2096.767);
   hnumuCCinFV_stack_9->SetBinContent(10,2127.284);
   hnumuCCinFV_stack_9->SetBinContent(11,2092.52);
   hnumuCCinFV_stack_9->SetBinContent(12,2101.918);
   hnumuCCinFV_stack_9->SetBinContent(13,2073.757);
   hnumuCCinFV_stack_9->SetBinContent(14,2116.539);
   hnumuCCinFV_stack_9->SetBinContent(15,2123.165);
   hnumuCCinFV_stack_9->SetBinContent(16,2148.079);
   hnumuCCinFV_stack_9->SetBinContent(17,2136.361);
   hnumuCCinFV_stack_9->SetBinContent(18,2088.662);
   hnumuCCinFV_stack_9->SetBinContent(19,2172.496);
   hnumuCCinFV_stack_9->SetBinContent(20,2146.728);
   hnumuCCinFV_stack_9->SetBinContent(21,2173.705);
   hnumuCCinFV_stack_9->SetBinContent(22,2212.225);
   hnumuCCinFV_stack_9->SetBinContent(23,2005.622);
   hnumuCCinFV_stack_9->SetBinContent(24,1456.931);
   hnumuCCinFV_stack_9->SetBinContent(25,438.9955);
   hnumuCCinFV_stack_9->SetBinContent(26,0.910428);
   hnumuCCinFV_stack_9->SetBinContent(27,6.474086);
   hnumuCCinFV_stack_9->SetBinError(0,1.282373);
   hnumuCCinFV_stack_9->SetBinError(1,0.4784498);
   hnumuCCinFV_stack_9->SetBinError(2,11.62349);
   hnumuCCinFV_stack_9->SetBinError(3,23.48715);
   hnumuCCinFV_stack_9->SetBinError(4,27.61675);
   hnumuCCinFV_stack_9->SetBinError(5,30.99167);
   hnumuCCinFV_stack_9->SetBinError(6,31.16435);
   hnumuCCinFV_stack_9->SetBinError(7,30.54476);
   hnumuCCinFV_stack_9->SetBinError(8,31.92548);
   hnumuCCinFV_stack_9->SetBinError(9,31.14812);
   hnumuCCinFV_stack_9->SetBinError(10,29.95834);
   hnumuCCinFV_stack_9->SetBinError(11,30.11748);
   hnumuCCinFV_stack_9->SetBinError(12,29.86992);
   hnumuCCinFV_stack_9->SetBinError(13,30.04369);
   hnumuCCinFV_stack_9->SetBinError(14,30.76758);
   hnumuCCinFV_stack_9->SetBinError(15,30.94873);
   hnumuCCinFV_stack_9->SetBinError(16,31.43143);
   hnumuCCinFV_stack_9->SetBinError(17,33.26146);
   hnumuCCinFV_stack_9->SetBinError(18,29.93918);
   hnumuCCinFV_stack_9->SetBinError(19,31.47549);
   hnumuCCinFV_stack_9->SetBinError(20,31.00802);
   hnumuCCinFV_stack_9->SetBinError(21,31.28215);
   hnumuCCinFV_stack_9->SetBinError(22,33.12245);
   hnumuCCinFV_stack_9->SetBinError(23,29.60739);
   hnumuCCinFV_stack_9->SetBinError(24,25.81047);
   hnumuCCinFV_stack_9->SetBinError(25,14.85994);
   hnumuCCinFV_stack_9->SetBinError(26,0.4614094);
   hnumuCCinFV_stack_9->SetBinError(27,1.474379);
   hnumuCCinFV_stack_9->SetEntries(168676);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_10->SetBinContent(2,2.304044);
   hnueCCinFV_stack_10->SetBinContent(3,17.06944);
   hnueCCinFV_stack_10->SetBinContent(4,19.79085);
   hnueCCinFV_stack_10->SetBinContent(5,25.48072);
   hnueCCinFV_stack_10->SetBinContent(6,21.14704);
   hnueCCinFV_stack_10->SetBinContent(7,16.27715);
   hnueCCinFV_stack_10->SetBinContent(8,21.0042);
   hnueCCinFV_stack_10->SetBinContent(9,15.47835);
   hnueCCinFV_stack_10->SetBinContent(10,21.89776);
   hnueCCinFV_stack_10->SetBinContent(11,20.43355);
   hnueCCinFV_stack_10->SetBinContent(12,23.56175);
   hnueCCinFV_stack_10->SetBinContent(13,19.65804);
   hnueCCinFV_stack_10->SetBinContent(14,22.8239);
   hnueCCinFV_stack_10->SetBinContent(15,20.22816);
   hnueCCinFV_stack_10->SetBinContent(16,23.73152);
   hnueCCinFV_stack_10->SetBinContent(17,23.12428);
   hnueCCinFV_stack_10->SetBinContent(18,24.38573);
   hnueCCinFV_stack_10->SetBinContent(19,13.88575);
   hnueCCinFV_stack_10->SetBinContent(20,22.91565);
   hnueCCinFV_stack_10->SetBinContent(21,23.68388);
   hnueCCinFV_stack_10->SetBinContent(22,21.65746);
   hnueCCinFV_stack_10->SetBinContent(23,20.26456);
   hnueCCinFV_stack_10->SetBinContent(24,13.65269);
   hnueCCinFV_stack_10->SetBinContent(25,5.352591);
   hnueCCinFV_stack_10->SetBinContent(27,0.3401776);
   hnueCCinFV_stack_10->SetBinError(2,0.8548802);
   hnueCCinFV_stack_10->SetBinError(3,3.162526);
   hnueCCinFV_stack_10->SetBinError(4,2.734163);
   hnueCCinFV_stack_10->SetBinError(5,3.93437);
   hnueCCinFV_stack_10->SetBinError(6,2.501157);
   hnueCCinFV_stack_10->SetBinError(7,2.218541);
   hnueCCinFV_stack_10->SetBinError(8,2.753875);
   hnueCCinFV_stack_10->SetBinError(9,2.326478);
   hnueCCinFV_stack_10->SetBinError(10,2.793406);
   hnueCCinFV_stack_10->SetBinError(11,3.172534);
   hnueCCinFV_stack_10->SetBinError(12,3.407993);
   hnueCCinFV_stack_10->SetBinError(13,2.744564);
   hnueCCinFV_stack_10->SetBinError(14,2.619613);
   hnueCCinFV_stack_10->SetBinError(15,2.879978);
   hnueCCinFV_stack_10->SetBinError(16,2.809503);
   hnueCCinFV_stack_10->SetBinError(17,2.531332);
   hnueCCinFV_stack_10->SetBinError(18,2.996535);
   hnueCCinFV_stack_10->SetBinError(19,1.89282);
   hnueCCinFV_stack_10->SetBinError(20,2.810675);
   hnueCCinFV_stack_10->SetBinError(21,3.47865);
   hnueCCinFV_stack_10->SetBinError(22,2.812691);
   hnueCCinFV_stack_10->SetBinError(23,3.559857);
   hnueCCinFV_stack_10->SetBinError(24,1.977412);
   hnueCCinFV_stack_10->SetBinError(25,1.470112);
   hnueCCinFV_stack_10->SetBinError(27,0.3401776);
   hnueCCinFV_stack_10->SetEntries(1752);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__2->SetBinContent(0,26.56537);
   hmcerror__2->SetBinContent(1,9.754669);
   hmcerror__2->SetBinContent(2,2201.328);
   hmcerror__2->SetBinContent(3,4173.377);
   hmcerror__2->SetBinContent(4,4034.156);
   hmcerror__2->SetBinContent(5,4143.786);
   hmcerror__2->SetBinContent(6,4090.96);
   hmcerror__2->SetBinContent(7,4000.696);
   hmcerror__2->SetBinContent(8,4050.063);
   hmcerror__2->SetBinContent(9,4008.134);
   hmcerror__2->SetBinContent(10,4013.377);
   hmcerror__2->SetBinContent(11,4015.124);
   hmcerror__2->SetBinContent(12,3973.791);
   hmcerror__2->SetBinContent(13,3983.895);
   hmcerror__2->SetBinContent(14,4031.541);
   hmcerror__2->SetBinContent(15,4075.029);
   hmcerror__2->SetBinContent(16,4290.295);
   hmcerror__2->SetBinContent(17,4318.332);
   hmcerror__2->SetBinContent(18,4338.085);
   hmcerror__2->SetBinContent(19,4625.189);
   hmcerror__2->SetBinContent(20,4825.801);
   hmcerror__2->SetBinContent(21,5090.429);
   hmcerror__2->SetBinContent(22,5347.471);
   hmcerror__2->SetBinContent(23,5483.151);
   hmcerror__2->SetBinContent(24,6036.636);
   hmcerror__2->SetBinContent(25,5367.573);
   hmcerror__2->SetBinContent(26,18.82825);
   hmcerror__2->SetBinContent(27,35.97068);
   hmcerror__2->SetBinError(0,2.910044);
   hmcerror__2->SetBinError(1,7.837546);
   hmcerror__2->SetBinError(2,317.262);
   hmcerror__2->SetBinError(3,642.0839);
   hmcerror__2->SetBinError(4,572.258);
   hmcerror__2->SetBinError(5,603.6405);
   hmcerror__2->SetBinError(6,623.0799);
   hmcerror__2->SetBinError(7,579.6477);
   hmcerror__2->SetBinError(8,588.0495);
   hmcerror__2->SetBinError(9,583.6952);
   hmcerror__2->SetBinError(10,598.0858);
   hmcerror__2->SetBinError(11,588.9934);
   hmcerror__2->SetBinError(12,567.5175);
   hmcerror__2->SetBinError(13,551.5106);
   hmcerror__2->SetBinError(14,580.614);
   hmcerror__2->SetBinError(15,561.3645);
   hmcerror__2->SetBinError(16,575.9662);
   hmcerror__2->SetBinError(17,564.0843);
   hmcerror__2->SetBinError(18,571.8327);
   hmcerror__2->SetBinError(19,601.3395);
   hmcerror__2->SetBinError(20,623.9977);
   hmcerror__2->SetBinError(21,639.5184);
   hmcerror__2->SetBinError(22,651.292);
   hmcerror__2->SetBinError(23,623.916);
   hmcerror__2->SetBinError(24,539.1554);
   hmcerror__2->SetBinError(25,500.6647);
   hmcerror__2->SetBinError(26,9.207373);
   hmcerror__2->SetBinError(27,15.26311);
   hmcerror__2->SetEntries(96405.82);

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
   8,
   1616,
   3771,
   4083,
   4386,
   4510,
   4371,
   4401,
   4492,
   4531,
   4491,
   4425,
   4465,
   4427,
   4472,
   4739,
   4661,
   4677,
   4804,
   4933,
   4948,
   5169,
   5369,
   5599,
   4274,
   19};
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
   3.0307,
   40.1995,
   61.40847,
   63.89836,
   66.22688,
   67.15653,
   66.11354,
   66.34003,
   67.02238,
   67.3127,
   67.01492,
   66.52067,
   66.82066,
   66.5357,
   66.87301,
   68.8404,
   68.27152,
   68.3886,
   69.31089,
   70.23532,
   70.34202,
   71.89576,
   73.27346,
   74.82647,
   65.37584,
   4.5151};
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
   2.7896,
   40.1995,
   61.40847,
   63.89836,
   66.22688,
   67.15653,
   66.11354,
   66.34003,
   67.02238,
   67.3127,
   67.01492,
   66.52067,
   66.82066,
   66.5357,
   66.87301,
   68.8404,
   68.27152,
   68.3886,
   69.31089,
   70.23532,
   70.34202,
   71.89576,
   73.27346,
   74.82647,
   65.37584,
   4.3011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-156,156);
   Graph_Graph3001->SetMinimum(4.47237);
   Graph_Graph3001->SetMaximum(6240.712);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=40.0/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 107641.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4878.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 26097.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6046.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7744.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  169.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3460.3","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6518.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 3405.7","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 45766.1","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 459.8","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("generic_0p_bnb_12_reco_nuvtxY_all");
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
   0.8034661,
   0.144123,
   0.1538523,
   0.1418532,
   0.1456737,
   0.1523065,
   0.1448867,
   0.1451951,
   0.1456277,
   0.1490231,
   0.1466937,
   0.1428151,
   0.138435,
   0.1440179,
   0.1377572,
   0.1342486,
   0.1306255,
   0.1318169,
   0.130014,
   0.1293045,
   0.1256315,
   0.1217944,
   0.1137879,
   0.08931388,
   0.09327581,
   0.4890189};
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
   0.8034661,
   0.144123,
   0.1538523,
   0.1418532,
   0.1456737,
   0.1523065,
   0.1448867,
   0.1451951,
   0.1456277,
   0.1490231,
   0.1466937,
   0.1428151,
   0.138435,
   0.1440179,
   0.1377572,
   0.1342486,
   0.1306255,
   0.1318169,
   0.130014,
   0.1293045,
   0.1256315,
   0.1217944,
   0.1137879,
   0.08931388,
   0.09327581,
   0.4890189};
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
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   0.2740781,
   0.1240564,
   0.1120138,
   0.1194983,
   0.1272245,
   0.1259756,
   0.1223567,
   0.1286808,
   0.1237356,
   0.1232767,
   0.1237163,
   0.1224336,
   0.1196983,
   0.1232694,
   0.116415,
   0.1179388,
   0.1165865,
   0.1131971,
   0.1132302,
   0.1073992,
   0.1012791,
   0.1039935,
   0.09592935,
   0.07902343,
   0.07595828,
   0.2889195};
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
   0.2740781,
   0.1240564,
   0.1120138,
   0.1194983,
   0.1272245,
   0.1259756,
   0.1223567,
   0.1286808,
   0.1237356,
   0.1232767,
   0.1237163,
   0.1224336,
   0.1196983,
   0.1232694,
   0.116415,
   0.1179388,
   0.1165865,
   0.1131971,
   0.1132302,
   0.1073992,
   0.1012791,
   0.1039935,
   0.09592935,
   0.07902343,
   0.07595828,
   0.2889195};
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
   0.8201201,
   0.7341024,
   0.9035847,
   1.012108,
   1.058452,
   1.102431,
   1.09256,
   1.08665,
   1.120721,
   1.128974,
   1.118521,
   1.113546,
   1.120763,
   1.098091,
   1.097415,
   1.104586,
   1.079352,
   1.078125,
   1.03866,
   1.022214,
   0.9720203,
   0.9666251,
   0.9791815,
   0.9275033,
   0.796263,
   1.009122};
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
   0.3106922,
   0.01826148,
   0.01471433,
   0.01583934,
   0.01598222,
   0.01641584,
   0.01652551,
   0.01638,
   0.01672159,
   0.01677208,
   0.01669062,
   0.01673985,
   0.0167727,
   0.01650379,
   0.01641044,
   0.01604561,
   0.0158097,
   0.0157647,
   0.01498553,
   0.01455413,
   0.01381849,
   0.01344481,
   0.01336339,
   0.01239539,
   0.01217978,
   0.2398045};
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
   0.2859759,
   0.01826148,
   0.01471433,
   0.01583934,
   0.01598222,
   0.01641584,
   0.01652551,
   0.01638,
   0.01672159,
   0.01677208,
   0.01669062,
   0.01673985,
   0.0167727,
   0.01650379,
   0.01641044,
   0.01604561,
   0.0158097,
   0.0157647,
   0.01498553,
   0.01455413,
   0.01381849,
   0.01344481,
   0.01336339,
   0.01239539,
   0.01217978,
   0.2284386};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-156,156);
   Graph_Graph3004->SetMinimum(0.4366146);
   Graph_Graph3004->SetMaximum(1.310374);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

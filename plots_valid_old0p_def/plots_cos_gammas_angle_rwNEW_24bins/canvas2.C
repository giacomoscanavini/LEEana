#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 18:43:49 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-9.076414,1.25641,1003.66);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__4->SetBinContent(1,339.823);
   hmc__4->SetBinContent(2,176.9134);
   hmc__4->SetBinContent(3,144.255);
   hmc__4->SetBinContent(4,121.6791);
   hmc__4->SetBinContent(5,123.0576);
   hmc__4->SetBinContent(6,136.9197);
   hmc__4->SetBinContent(7,140.6703);
   hmc__4->SetBinContent(8,136.533);
   hmc__4->SetBinContent(9,131.4913);
   hmc__4->SetBinContent(10,151.7505);
   hmc__4->SetBinContent(11,168.2647);
   hmc__4->SetBinContent(12,186.0044);
   hmc__4->SetBinContent(13,190.2135);
   hmc__4->SetBinContent(14,215.3007);
   hmc__4->SetBinContent(15,238.8485);
   hmc__4->SetBinContent(16,238.4244);
   hmc__4->SetBinContent(17,256.7296);
   hmc__4->SetBinContent(18,293.1854);
   hmc__4->SetBinContent(19,317.5618);
   hmc__4->SetBinContent(20,341.156);
   hmc__4->SetBinContent(21,400.4241);
   hmc__4->SetBinContent(22,452.2574);
   hmc__4->SetBinContent(23,453.8207);
   hmc__4->SetBinContent(24,433.3321);
   hmc__4->SetBinContent(25,0.1394999);
   hmc__4->SetBinError(1,76.39055);
   hmc__4->SetBinError(2,42.89334);
   hmc__4->SetBinError(3,41.02342);
   hmc__4->SetBinError(4,33.14455);
   hmc__4->SetBinError(5,33.38626);
   hmc__4->SetBinError(6,43.89531);
   hmc__4->SetBinError(7,37.18921);
   hmc__4->SetBinError(8,48.4514);
   hmc__4->SetBinError(9,46.71046);
   hmc__4->SetBinError(10,44.71878);
   hmc__4->SetBinError(11,45.09796);
   hmc__4->SetBinError(12,53.05464);
   hmc__4->SetBinError(13,52.54374);
   hmc__4->SetBinError(14,61.46117);
   hmc__4->SetBinError(15,71.46022);
   hmc__4->SetBinError(16,69.10436);
   hmc__4->SetBinError(17,73.52762);
   hmc__4->SetBinError(18,87.01002);
   hmc__4->SetBinError(19,93.54806);
   hmc__4->SetBinError(20,102.3937);
   hmc__4->SetBinError(21,121.3445);
   hmc__4->SetBinError(22,135.6387);
   hmc__4->SetBinError(23,121.4216);
   hmc__4->SetBinError(24,115.5516);
   hmc__4->SetBinError(25,0.5404901);
   hmc__4->SetMinimum(-9.076414);
   hmc__4->SetMaximum(953.0234);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,-1,1);
   hs2_stack_2->SetMinimum(-5.219833e-10);
   hs2_stack_2->SetMaximum(476.5117);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,7.307707);
   hbadmatch_stack_1->SetBinContent(2,4.967203);
   hbadmatch_stack_1->SetBinContent(3,2.163044);
   hbadmatch_stack_1->SetBinContent(4,4.522774);
   hbadmatch_stack_1->SetBinContent(5,3.646008);
   hbadmatch_stack_1->SetBinContent(6,6.547103);
   hbadmatch_stack_1->SetBinContent(7,3.500488);
   hbadmatch_stack_1->SetBinContent(8,3.725832);
   hbadmatch_stack_1->SetBinContent(9,1.322657);
   hbadmatch_stack_1->SetBinContent(10,1.865271);
   hbadmatch_stack_1->SetBinContent(11,1.604327);
   hbadmatch_stack_1->SetBinContent(12,3.148081);
   hbadmatch_stack_1->SetBinContent(13,3.235031);
   hbadmatch_stack_1->SetBinContent(14,6.05713);
   hbadmatch_stack_1->SetBinContent(15,4.956869);
   hbadmatch_stack_1->SetBinContent(16,4.156543);
   hbadmatch_stack_1->SetBinContent(17,4.077878);
   hbadmatch_stack_1->SetBinContent(18,5.399322);
   hbadmatch_stack_1->SetBinContent(19,6.638069);
   hbadmatch_stack_1->SetBinContent(20,6.220142);
   hbadmatch_stack_1->SetBinContent(21,8.646372);
   hbadmatch_stack_1->SetBinContent(22,7.821703);
   hbadmatch_stack_1->SetBinContent(23,10.63474);
   hbadmatch_stack_1->SetBinContent(24,11.91044);
   hbadmatch_stack_1->SetBinError(1,1.595095);
   hbadmatch_stack_1->SetBinError(2,1.21037);
   hbadmatch_stack_1->SetBinError(3,0.7422638);
   hbadmatch_stack_1->SetBinError(4,1.149526);
   hbadmatch_stack_1->SetBinError(5,1.771564);
   hbadmatch_stack_1->SetBinError(6,2.300616);
   hbadmatch_stack_1->SetBinError(7,0.9312845);
   hbadmatch_stack_1->SetBinError(8,1.024885);
   hbadmatch_stack_1->SetBinError(9,0.555467);
   hbadmatch_stack_1->SetBinError(10,0.6809145);
   hbadmatch_stack_1->SetBinError(11,0.5682406);
   hbadmatch_stack_1->SetBinError(12,0.9046492);
   hbadmatch_stack_1->SetBinError(13,1.340898);
   hbadmatch_stack_1->SetBinError(14,1.257101);
   hbadmatch_stack_1->SetBinError(15,1.163431);
   hbadmatch_stack_1->SetBinError(16,1.011504);
   hbadmatch_stack_1->SetBinError(17,1.036554);
   hbadmatch_stack_1->SetBinError(18,1.228655);
   hbadmatch_stack_1->SetBinError(19,1.467282);
   hbadmatch_stack_1->SetBinError(20,1.294019);
   hbadmatch_stack_1->SetBinError(21,2.119412);
   hbadmatch_stack_1->SetBinError(22,1.382866);
   hbadmatch_stack_1->SetBinError(23,1.732192);
   hbadmatch_stack_1->SetBinError(24,1.905122);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,34.56905);
   hext_stack_2->SetBinContent(2,18.54022);
   hext_stack_2->SetBinContent(3,15.33373);
   hext_stack_2->SetBinContent(4,9.152603);
   hext_stack_2->SetBinContent(5,11.17842);
   hext_stack_2->SetBinContent(6,14.09081);
   hext_stack_2->SetBinContent(7,16.37035);
   hext_stack_2->SetBinContent(8,14.50617);
   hext_stack_2->SetBinContent(9,8.275974);
   hext_stack_2->SetBinContent(10,11.23467);
   hext_stack_2->SetBinContent(11,18.20146);
   hext_stack_2->SetBinContent(12,13.98266);
   hext_stack_2->SetBinContent(13,11.17401);
   hext_stack_2->SetBinContent(14,18.85026);
   hext_stack_2->SetBinContent(15,16.19442);
   hext_stack_2->SetBinContent(16,11.59938);
   hext_stack_2->SetBinContent(17,16.28821);
   hext_stack_2->SetBinContent(18,10.77459);
   hext_stack_2->SetBinContent(19,28.71667);
   hext_stack_2->SetBinContent(20,18.22023);
   hext_stack_2->SetBinContent(21,21.59825);
   hext_stack_2->SetBinContent(22,35.2019);
   hext_stack_2->SetBinContent(23,44.43387);
   hext_stack_2->SetBinContent(24,48.26479);
   hext_stack_2->SetBinError(1,4.12731);
   hext_stack_2->SetBinError(2,2.829718);
   hext_stack_2->SetBinError(3,2.78403);
   hext_stack_2->SetBinError(4,1.969893);
   hext_stack_2->SetBinError(5,2.215467);
   hext_stack_2->SetBinError(6,2.461016);
   hext_stack_2->SetBinError(7,2.897221);
   hext_stack_2->SetBinError(8,2.796887);
   hext_stack_2->SetBinError(9,1.795123);
   hext_stack_2->SetBinError(10,2.331709);
   hext_stack_2->SetBinError(11,2.881749);
   hext_stack_2->SetBinError(12,2.542635);
   hext_stack_2->SetBinError(13,2.184759);
   hext_stack_2->SetBinError(14,2.918037);
   hext_stack_2->SetBinError(15,2.647523);
   hext_stack_2->SetBinError(16,2.161299);
   hext_stack_2->SetBinError(17,2.646392);
   hext_stack_2->SetBinError(18,2.099202);
   hext_stack_2->SetBinError(19,3.838635);
   hext_stack_2->SetBinError(20,2.834995);
   hext_stack_2->SetBinError(21,3.089186);
   hext_stack_2->SetBinError(22,3.980666);
   hext_stack_2->SetBinError(23,4.631739);
   hext_stack_2->SetBinError(24,4.918364);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,7.412951);
   hdirt_stack_3->SetBinContent(2,1.185821);
   hdirt_stack_3->SetBinContent(3,1.89896);
   hdirt_stack_3->SetBinContent(4,2.215894);
   hdirt_stack_3->SetBinContent(5,2.227035);
   hdirt_stack_3->SetBinContent(6,0.4950385);
   hdirt_stack_3->SetBinContent(7,0.9992298);
   hdirt_stack_3->SetBinContent(8,1.614827);
   hdirt_stack_3->SetBinContent(9,1.979249);
   hdirt_stack_3->SetBinContent(10,1.036399);
   hdirt_stack_3->SetBinContent(11,0.7759784);
   hdirt_stack_3->SetBinContent(12,0.4142144);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,1.711363);
   hdirt_stack_3->SetBinContent(15,1.9565);
   hdirt_stack_3->SetBinContent(16,1.401624);
   hdirt_stack_3->SetBinContent(17,1.568559);
   hdirt_stack_3->SetBinContent(18,1.250878);
   hdirt_stack_3->SetBinContent(19,1.300828);
   hdirt_stack_3->SetBinContent(20,1.821386);
   hdirt_stack_3->SetBinContent(21,2.363783);
   hdirt_stack_3->SetBinContent(22,3.446743);
   hdirt_stack_3->SetBinContent(23,5.279769);
   hdirt_stack_3->SetBinContent(24,4.469841);
   hdirt_stack_3->SetBinError(1,1.416159);
   hdirt_stack_3->SetBinError(2,0.5647745);
   hdirt_stack_3->SetBinError(3,0.7151775);
   hdirt_stack_3->SetBinError(4,0.7185173);
   hdirt_stack_3->SetBinError(5,0.8926713);
   hdirt_stack_3->SetBinError(6,0.2933304);
   hdirt_stack_3->SetBinError(7,0.4774628);
   hdirt_stack_3->SetBinError(8,0.7041814);
   hdirt_stack_3->SetBinError(9,0.7561616);
   hdirt_stack_3->SetBinError(10,0.4663936);
   hdirt_stack_3->SetBinError(11,0.458477);
   hdirt_stack_3->SetBinError(12,0.2391468);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.6261637);
   hdirt_stack_3->SetBinError(15,1.039143);
   hdirt_stack_3->SetBinError(16,0.6098479);
   hdirt_stack_3->SetBinError(17,0.5809632);
   hdirt_stack_3->SetBinError(18,0.5395909);
   hdirt_stack_3->SetBinError(19,0.5536826);
   hdirt_stack_3->SetBinError(20,0.6517909);
   hdirt_stack_3->SetBinError(21,0.7669527);
   hdirt_stack_3->SetBinError(22,0.9777186);
   hdirt_stack_3->SetBinError(23,1.560083);
   hdirt_stack_3->SetBinError(24,1.218627);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,48.10445);
   houtFV_stack_4->SetBinContent(2,23.48603);
   houtFV_stack_4->SetBinContent(3,14.47146);
   houtFV_stack_4->SetBinContent(4,11.32369);
   houtFV_stack_4->SetBinContent(5,9.51058);
   houtFV_stack_4->SetBinContent(6,7.715677);
   houtFV_stack_4->SetBinContent(7,8.214528);
   houtFV_stack_4->SetBinContent(8,8.01414);
   houtFV_stack_4->SetBinContent(9,7.03574);
   houtFV_stack_4->SetBinContent(10,6.825875);
   houtFV_stack_4->SetBinContent(11,6.837229);
   houtFV_stack_4->SetBinContent(12,7.278996);
   houtFV_stack_4->SetBinContent(13,10.54054);
   houtFV_stack_4->SetBinContent(14,11.35924);
   houtFV_stack_4->SetBinContent(15,11.8987);
   houtFV_stack_4->SetBinContent(16,15.08985);
   houtFV_stack_4->SetBinContent(17,14.58083);
   houtFV_stack_4->SetBinContent(18,15.91611);
   houtFV_stack_4->SetBinContent(19,17.65448);
   houtFV_stack_4->SetBinContent(20,17.64235);
   houtFV_stack_4->SetBinContent(21,22.7688);
   houtFV_stack_4->SetBinContent(22,27.74295);
   houtFV_stack_4->SetBinContent(23,32.40774);
   houtFV_stack_4->SetBinContent(24,40.80343);
   houtFV_stack_4->SetBinError(1,3.441477);
   houtFV_stack_4->SetBinError(2,2.431179);
   houtFV_stack_4->SetBinError(3,1.903587);
   houtFV_stack_4->SetBinError(4,1.633211);
   houtFV_stack_4->SetBinError(5,1.601223);
   houtFV_stack_4->SetBinError(6,1.366027);
   houtFV_stack_4->SetBinError(7,1.415387);
   houtFV_stack_4->SetBinError(8,1.401178);
   houtFV_stack_4->SetBinError(9,1.280648);
   houtFV_stack_4->SetBinError(10,1.295267);
   houtFV_stack_4->SetBinError(11,1.316223);
   houtFV_stack_4->SetBinError(12,1.277287);
   houtFV_stack_4->SetBinError(13,1.6885);
   houtFV_stack_4->SetBinError(14,1.728328);
   houtFV_stack_4->SetBinError(15,1.661995);
   houtFV_stack_4->SetBinError(16,1.917547);
   houtFV_stack_4->SetBinError(17,1.84707);
   houtFV_stack_4->SetBinError(18,1.988038);
   houtFV_stack_4->SetBinError(19,2.157774);
   houtFV_stack_4->SetBinError(20,2.081619);
   houtFV_stack_4->SetBinError(21,2.376163);
   houtFV_stack_4->SetBinError(22,2.680081);
   houtFV_stack_4->SetBinError(23,2.858964);
   houtFV_stack_4->SetBinError(24,3.259453);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,5.563581);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.677584);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.506608);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.58798);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.22744);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.535508);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.05904);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.647108);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.827462);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.295194);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.021762);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.771326);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.482612);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.319452);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.550366);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.568383);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.906263);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.587569);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.344118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,10.44162);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,9.942905);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,10.87623);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,7.919975);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7767518);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5869564);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4319288);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4047938);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3821249);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4892504);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2988711);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4924222);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5174731);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3408511);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4703213);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4479997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5099592);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6286336);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4798108);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5151473);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6886612);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6207407);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7991443);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.075095);
   hNCpi0inFVcoh_stack_5->SetBinError(22,1.052195);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.110153);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8950573);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9336537);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4463997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.101558);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.296026);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7529721);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.562576);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8931359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8492898);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8371677);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.9625539);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.437022);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.104798);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.255172);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.785112);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.171472);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.215211);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3863457);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3680294);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1247725);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3162714);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4699768);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3007107);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2397359);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.236878);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3148322);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3809346);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4868573);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3376966);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4905081);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3342211);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,122.5742);
   hNCpi0inFVres_stack_7->SetBinContent(2,66.3727);
   hNCpi0inFVres_stack_7->SetBinContent(3,51.83939);
   hNCpi0inFVres_stack_7->SetBinContent(4,46.20855);
   hNCpi0inFVres_stack_7->SetBinContent(5,47.91063);
   hNCpi0inFVres_stack_7->SetBinContent(6,52.13868);
   hNCpi0inFVres_stack_7->SetBinContent(7,52.90227);
   hNCpi0inFVres_stack_7->SetBinContent(8,57.59845);
   hNCpi0inFVres_stack_7->SetBinContent(9,59.13395);
   hNCpi0inFVres_stack_7->SetBinContent(10,66.64307);
   hNCpi0inFVres_stack_7->SetBinContent(11,77.12569);
   hNCpi0inFVres_stack_7->SetBinContent(12,86.5407);
   hNCpi0inFVres_stack_7->SetBinContent(13,93.49125);
   hNCpi0inFVres_stack_7->SetBinContent(14,101.5792);
   hNCpi0inFVres_stack_7->SetBinContent(15,111.5171);
   hNCpi0inFVres_stack_7->SetBinContent(16,114.8779);
   hNCpi0inFVres_stack_7->SetBinContent(17,125.5293);
   hNCpi0inFVres_stack_7->SetBinContent(18,140.9516);
   hNCpi0inFVres_stack_7->SetBinContent(19,146.6721);
   hNCpi0inFVres_stack_7->SetBinContent(20,168.5658);
   hNCpi0inFVres_stack_7->SetBinContent(21,183.5925);
   hNCpi0inFVres_stack_7->SetBinContent(22,194.5708);
   hNCpi0inFVres_stack_7->SetBinContent(23,168.8176);
   hNCpi0inFVres_stack_7->SetBinContent(24,132.9574);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,3.630875);
   hNCpi0inFVres_stack_7->SetBinError(2,2.646825);
   hNCpi0inFVres_stack_7->SetBinError(3,2.321623);
   hNCpi0inFVres_stack_7->SetBinError(4,2.150733);
   hNCpi0inFVres_stack_7->SetBinError(5,2.234938);
   hNCpi0inFVres_stack_7->SetBinError(6,2.388203);
   hNCpi0inFVres_stack_7->SetBinError(7,2.37794);
   hNCpi0inFVres_stack_7->SetBinError(8,2.485159);
   hNCpi0inFVres_stack_7->SetBinError(9,2.504167);
   hNCpi0inFVres_stack_7->SetBinError(10,2.668694);
   hNCpi0inFVres_stack_7->SetBinError(11,2.847773);
   hNCpi0inFVres_stack_7->SetBinError(12,3.092096);
   hNCpi0inFVres_stack_7->SetBinError(13,3.195025);
   hNCpi0inFVres_stack_7->SetBinError(14,3.297471);
   hNCpi0inFVres_stack_7->SetBinError(15,3.517426);
   hNCpi0inFVres_stack_7->SetBinError(16,3.513133);
   hNCpi0inFVres_stack_7->SetBinError(17,3.727791);
   hNCpi0inFVres_stack_7->SetBinError(18,3.940935);
   hNCpi0inFVres_stack_7->SetBinError(19,3.927953);
   hNCpi0inFVres_stack_7->SetBinError(20,4.263842);
   hNCpi0inFVres_stack_7->SetBinError(21,4.440331);
   hNCpi0inFVres_stack_7->SetBinError(22,4.538952);
   hNCpi0inFVres_stack_7->SetBinError(23,4.194729);
   hNCpi0inFVres_stack_7->SetBinError(24,3.795015);
   hNCpi0inFVres_stack_7->SetBinError(25,0.05579997);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,25.40554);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.52622);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.97188);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.79991);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.599874);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.60868);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.854957);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.5851);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.01099);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.84543);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.0717);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.78433);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.20482);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.57787);
   hNCpi0inFVdis_stack_8->SetBinContent(15,16.72081);
   hNCpi0inFVdis_stack_8->SetBinContent(16,20.36559);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.71658);
   hNCpi0inFVdis_stack_8->SetBinContent(18,22.26429);
   hNCpi0inFVdis_stack_8->SetBinContent(19,26.0871);
   hNCpi0inFVdis_stack_8->SetBinContent(20,26.91463);
   hNCpi0inFVdis_stack_8->SetBinContent(21,36.25637);
   hNCpi0inFVdis_stack_8->SetBinContent(22,39.55321);
   hNCpi0inFVdis_stack_8->SetBinContent(23,43.38751);
   hNCpi0inFVdis_stack_8->SetBinContent(24,33.91242);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.624835);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.03748);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.029004);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9966935);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9457317);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.046414);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9057913);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.130247);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9991312);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.240908);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.265341);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.333411);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.322567);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.121546);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.342792);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.489705);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.462281);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.556424);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.664903);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.655271);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.982309);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.998473);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.17367);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.911574);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,45.20271);
   hCCpi0inFV_stack_10->SetBinContent(2,20.71147);
   hCCpi0inFV_stack_10->SetBinContent(3,17.57787);
   hCCpi0inFV_stack_10->SetBinContent(4,14.06686);
   hCCpi0inFV_stack_10->SetBinContent(5,15.24328);
   hCCpi0inFV_stack_10->SetBinContent(6,19.11469);
   hCCpi0inFV_stack_10->SetBinContent(7,21.61337);
   hCCpi0inFV_stack_10->SetBinContent(8,14.64829);
   hCCpi0inFV_stack_10->SetBinContent(9,20.55164);
   hCCpi0inFV_stack_10->SetBinContent(10,20.87553);
   hCCpi0inFV_stack_10->SetBinContent(11,20.13747);
   hCCpi0inFV_stack_10->SetBinContent(12,22.96079);
   hCCpi0inFV_stack_10->SetBinContent(13,23.89751);
   hCCpi0inFV_stack_10->SetBinContent(14,28.22183);
   hCCpi0inFV_stack_10->SetBinContent(15,35.01186);
   hCCpi0inFV_stack_10->SetBinContent(16,35.72278);
   hCCpi0inFV_stack_10->SetBinContent(17,35.71957);
   hCCpi0inFV_stack_10->SetBinContent(18,45.55529);
   hCCpi0inFV_stack_10->SetBinContent(19,37.59309);
   hCCpi0inFV_stack_10->SetBinContent(20,48.67616);
   hCCpi0inFV_stack_10->SetBinContent(21,57.6504);
   hCCpi0inFV_stack_10->SetBinContent(22,60.998);
   hCCpi0inFV_stack_10->SetBinContent(23,65.2413);
   hCCpi0inFV_stack_10->SetBinContent(24,48.92949);
   hCCpi0inFV_stack_10->SetBinError(1,3.342441);
   hCCpi0inFV_stack_10->SetBinError(2,2.301874);
   hCCpi0inFV_stack_10->SetBinError(3,2.085277);
   hCCpi0inFV_stack_10->SetBinError(4,1.900865);
   hCCpi0inFV_stack_10->SetBinError(5,1.958056);
   hCCpi0inFV_stack_10->SetBinError(6,2.205911);
   hCCpi0inFV_stack_10->SetBinError(7,2.350969);
   hCCpi0inFV_stack_10->SetBinError(8,1.875282);
   hCCpi0inFV_stack_10->SetBinError(9,2.2835);
   hCCpi0inFV_stack_10->SetBinError(10,2.307015);
   hCCpi0inFV_stack_10->SetBinError(11,2.30016);
   hCCpi0inFV_stack_10->SetBinError(12,2.40341);
   hCCpi0inFV_stack_10->SetBinError(13,2.389394);
   hCCpi0inFV_stack_10->SetBinError(14,2.694268);
   hCCpi0inFV_stack_10->SetBinError(15,2.97216);
   hCCpi0inFV_stack_10->SetBinError(16,3.060075);
   hCCpi0inFV_stack_10->SetBinError(17,2.993701);
   hCCpi0inFV_stack_10->SetBinError(18,3.377853);
   hCCpi0inFV_stack_10->SetBinError(19,3.014478);
   hCCpi0inFV_stack_10->SetBinError(20,3.486616);
   hCCpi0inFV_stack_10->SetBinError(21,3.806192);
   hCCpi0inFV_stack_10->SetBinError(22,3.897975);
   hCCpi0inFV_stack_10->SetBinError(23,4.012491);
   hCCpi0inFV_stack_10->SetBinError(24,3.514723);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,21.89654);
   hNCinFV_stack_11->SetBinContent(2,12.26219);
   hNCinFV_stack_11->SetBinContent(3,15.15351);
   hNCinFV_stack_11->SetBinContent(4,10.45202);
   hNCinFV_stack_11->SetBinContent(5,10.7003);
   hNCinFV_stack_11->SetBinContent(6,12.73193);
   hNCinFV_stack_11->SetBinContent(7,9.884323);
   hNCinFV_stack_11->SetBinContent(8,10.15664);
   hNCinFV_stack_11->SetBinContent(9,9.490892);
   hNCinFV_stack_11->SetBinContent(10,13.14433);
   hNCinFV_stack_11->SetBinContent(11,12.62978);
   hNCinFV_stack_11->SetBinContent(12,16.76419);
   hNCinFV_stack_11->SetBinContent(13,12.41241);
   hNCinFV_stack_11->SetBinContent(14,16.33488);
   hNCinFV_stack_11->SetBinContent(15,18.58391);
   hNCinFV_stack_11->SetBinContent(16,15.68702);
   hNCinFV_stack_11->SetBinContent(17,20.13009);
   hNCinFV_stack_11->SetBinContent(18,19.69402);
   hNCinFV_stack_11->SetBinContent(19,24.76203);
   hNCinFV_stack_11->SetBinContent(20,17.88386);
   hNCinFV_stack_11->SetBinContent(21,25.74669);
   hNCinFV_stack_11->SetBinContent(22,34.546);
   hNCinFV_stack_11->SetBinContent(23,37.35763);
   hNCinFV_stack_11->SetBinContent(24,40.22359);
   hNCinFV_stack_11->SetBinError(1,2.296277);
   hNCinFV_stack_11->SetBinError(2,1.743843);
   hNCinFV_stack_11->SetBinError(3,1.963606);
   hNCinFV_stack_11->SetBinError(4,1.654189);
   hNCinFV_stack_11->SetBinError(5,1.654101);
   hNCinFV_stack_11->SetBinError(6,1.700206);
   hNCinFV_stack_11->SetBinError(7,1.494078);
   hNCinFV_stack_11->SetBinError(8,1.605921);
   hNCinFV_stack_11->SetBinError(9,1.467949);
   hNCinFV_stack_11->SetBinError(10,1.820196);
   hNCinFV_stack_11->SetBinError(11,1.872176);
   hNCinFV_stack_11->SetBinError(12,2.078221);
   hNCinFV_stack_11->SetBinError(13,1.76654);
   hNCinFV_stack_11->SetBinError(14,1.9723);
   hNCinFV_stack_11->SetBinError(15,2.241759);
   hNCinFV_stack_11->SetBinError(16,2.002209);
   hNCinFV_stack_11->SetBinError(17,2.263751);
   hNCinFV_stack_11->SetBinError(18,2.166306);
   hNCinFV_stack_11->SetBinError(19,2.544466);
   hNCinFV_stack_11->SetBinError(20,2.094811);
   hNCinFV_stack_11->SetBinError(21,2.543585);
   hNCinFV_stack_11->SetBinError(22,2.930401);
   hNCinFV_stack_11->SetBinError(23,3.102961);
   hNCinFV_stack_11->SetBinError(24,3.230045);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,16.45199);
   hnumuCCinFV_stack_12->SetBinContent(2,12.57689);
   hnumuCCinFV_stack_12->SetBinContent(3,11.97726);
   hnumuCCinFV_stack_12->SetBinContent(4,10.56379);
   hnumuCCinFV_stack_12->SetBinContent(5,10.76436);
   hnumuCCinFV_stack_12->SetBinContent(6,10.15055);
   hnumuCCinFV_stack_12->SetBinContent(7,14.51937);
   hnumuCCinFV_stack_12->SetBinContent(8,11.30055);
   hnumuCCinFV_stack_12->SetBinContent(9,11.45722);
   hnumuCCinFV_stack_12->SetBinContent(10,13.0785);
   hnumuCCinFV_stack_12->SetBinContent(11,13.32533);
   hnumuCCinFV_stack_12->SetBinContent(12,15.50021);
   hnumuCCinFV_stack_12->SetBinContent(13,14.69806);
   hnumuCCinFV_stack_12->SetBinContent(14,14.17739);
   hnumuCCinFV_stack_12->SetBinContent(15,17.19007);
   hnumuCCinFV_stack_12->SetBinContent(16,15.26095);
   hnumuCCinFV_stack_12->SetBinContent(17,13.87381);
   hnumuCCinFV_stack_12->SetBinContent(18,24.77854);
   hnumuCCinFV_stack_12->SetBinContent(19,21.72113);
   hnumuCCinFV_stack_12->SetBinContent(20,24.82108);
   hnumuCCinFV_stack_12->SetBinContent(21,27.82175);
   hnumuCCinFV_stack_12->SetBinContent(22,33.9604);
   hnumuCCinFV_stack_12->SetBinContent(23,30.18103);
   hnumuCCinFV_stack_12->SetBinContent(24,49.25359);
   hnumuCCinFV_stack_12->SetBinError(1,2.222428);
   hnumuCCinFV_stack_12->SetBinError(2,1.902397);
   hnumuCCinFV_stack_12->SetBinError(3,1.987327);
   hnumuCCinFV_stack_12->SetBinError(4,1.661941);
   hnumuCCinFV_stack_12->SetBinError(5,1.756519);
   hnumuCCinFV_stack_12->SetBinError(6,1.770779);
   hnumuCCinFV_stack_12->SetBinError(7,2.11864);
   hnumuCCinFV_stack_12->SetBinError(8,1.921824);
   hnumuCCinFV_stack_12->SetBinError(9,2.005979);
   hnumuCCinFV_stack_12->SetBinError(10,1.886468);
   hnumuCCinFV_stack_12->SetBinError(11,1.968584);
   hnumuCCinFV_stack_12->SetBinError(12,2.276523);
   hnumuCCinFV_stack_12->SetBinError(13,2.176278);
   hnumuCCinFV_stack_12->SetBinError(14,1.879385);
   hnumuCCinFV_stack_12->SetBinError(15,2.54881);
   hnumuCCinFV_stack_12->SetBinError(16,2.186246);
   hnumuCCinFV_stack_12->SetBinError(17,1.984508);
   hnumuCCinFV_stack_12->SetBinError(18,4.208542);
   hnumuCCinFV_stack_12->SetBinError(19,2.831715);
   hnumuCCinFV_stack_12->SetBinError(20,2.917523);
   hnumuCCinFV_stack_12->SetBinError(21,2.955608);
   hnumuCCinFV_stack_12->SetBinError(22,3.492278);
   hnumuCCinFV_stack_12->SetBinError(23,3.006722);
   hnumuCCinFV_stack_12->SetBinError(24,3.972355);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,4.219623);
   hnueCCinFV_stack_13->SetBinContent(2,1.812027);
   hnueCCinFV_stack_13->SetBinContent(3,0.691541);
   hnueCCinFV_stack_13->SetBinContent(4,1.073786);
   hnueCCinFV_stack_13->SetBinContent(5,1.296024);
   hnueCCinFV_stack_13->SetBinContent(6,0.8419645);
   hnueCCinFV_stack_13->SetBinContent(7,1.664306);
   hnueCCinFV_stack_13->SetBinContent(10,0.5930367);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.6494526);
   hnueCCinFV_stack_13->SetBinContent(16,0.8057001);
   hnueCCinFV_stack_13->SetBinContent(17,0.7834804);
   hnueCCinFV_stack_13->SetBinContent(18,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(19,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(20,1.941405);
   hnueCCinFV_stack_13->SetBinContent(21,2.282384);
   hnueCCinFV_stack_13->SetBinContent(22,2.408447);
   hnueCCinFV_stack_13->SetBinContent(23,4.519724);
   hnueCCinFV_stack_13->SetBinContent(24,13.45985);
   hnueCCinFV_stack_13->SetBinError(1,1.404077);
   hnueCCinFV_stack_13->SetBinError(2,0.8514542);
   hnueCCinFV_stack_13->SetBinError(3,0.4081814);
   hnueCCinFV_stack_13->SetBinError(4,0.5557297);
   hnueCCinFV_stack_13->SetBinError(5,0.7744776);
   hnueCCinFV_stack_13->SetBinError(6,0.6062267);
   hnueCCinFV_stack_13->SetBinError(7,0.708606);
   hnueCCinFV_stack_13->SetBinError(10,0.4424562);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4156841);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.3778196);
   hnueCCinFV_stack_13->SetBinError(16,0.4980907);
   hnueCCinFV_stack_13->SetBinError(17,0.3917439);
   hnueCCinFV_stack_13->SetBinError(18,0.438694);
   hnueCCinFV_stack_13->SetBinError(19,0.2770047);
   hnueCCinFV_stack_13->SetBinError(20,0.7245305);
   hnueCCinFV_stack_13->SetBinError(21,1.381523);
   hnueCCinFV_stack_13->SetBinError(22,0.7889364);
   hnueCCinFV_stack_13->SetBinError(23,1.131466);
   hnueCCinFV_stack_13->SetBinError(24,2.559203);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__5->SetBinContent(1,339.823);
   hmcerror__5->SetBinContent(2,176.9134);
   hmcerror__5->SetBinContent(3,144.255);
   hmcerror__5->SetBinContent(4,121.6791);
   hmcerror__5->SetBinContent(5,123.0576);
   hmcerror__5->SetBinContent(6,136.9197);
   hmcerror__5->SetBinContent(7,140.6703);
   hmcerror__5->SetBinContent(8,136.533);
   hmcerror__5->SetBinContent(9,131.4913);
   hmcerror__5->SetBinContent(10,151.7505);
   hmcerror__5->SetBinContent(11,168.2647);
   hmcerror__5->SetBinContent(12,186.0044);
   hmcerror__5->SetBinContent(13,190.2135);
   hmcerror__5->SetBinContent(14,215.3007);
   hmcerror__5->SetBinContent(15,238.8485);
   hmcerror__5->SetBinContent(16,238.4244);
   hmcerror__5->SetBinContent(17,256.7296);
   hmcerror__5->SetBinContent(18,293.1854);
   hmcerror__5->SetBinContent(19,317.5618);
   hmcerror__5->SetBinContent(20,341.156);
   hmcerror__5->SetBinContent(21,400.4241);
   hmcerror__5->SetBinContent(22,452.2574);
   hmcerror__5->SetBinContent(23,453.8207);
   hmcerror__5->SetBinContent(24,433.3321);
   hmcerror__5->SetBinContent(25,0.1394999);
   hmcerror__5->SetBinError(1,76.39055);
   hmcerror__5->SetBinError(2,42.89334);
   hmcerror__5->SetBinError(3,41.02342);
   hmcerror__5->SetBinError(4,33.14455);
   hmcerror__5->SetBinError(5,33.38626);
   hmcerror__5->SetBinError(6,43.89531);
   hmcerror__5->SetBinError(7,37.18921);
   hmcerror__5->SetBinError(8,48.4514);
   hmcerror__5->SetBinError(9,46.71046);
   hmcerror__5->SetBinError(10,44.71878);
   hmcerror__5->SetBinError(11,45.09796);
   hmcerror__5->SetBinError(12,53.05464);
   hmcerror__5->SetBinError(13,52.54374);
   hmcerror__5->SetBinError(14,61.46117);
   hmcerror__5->SetBinError(15,71.46022);
   hmcerror__5->SetBinError(16,69.10436);
   hmcerror__5->SetBinError(17,73.52762);
   hmcerror__5->SetBinError(18,87.01002);
   hmcerror__5->SetBinError(19,93.54806);
   hmcerror__5->SetBinError(20,102.3937);
   hmcerror__5->SetBinError(21,121.3445);
   hmcerror__5->SetBinError(22,135.6387);
   hmcerror__5->SetBinError(23,121.4216);
   hmcerror__5->SetBinError(24,115.5516);
   hmcerror__5->SetBinError(25,0.5404901);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3005[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3005[24] = {
   344,
   165,
   130,
   122,
   110,
   124,
   130,
   122,
   121,
   123,
   149,
   149,
   177,
   182,
   194,
   220,
   226,
   270,
   267,
   254,
   322,
   335,
   364,
   374};
   Double_t _felx3005[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3005[24] = {
   18.54724,
   12.84523,
   11.40175,
   11.04536,
   10.48809,
   11.13553,
   11.40175,
   11.04536,
   11,
   11.09054,
   12.20656,
   12.20656,
   13.30413,
   13.49074,
   13.92839,
   14.8324,
   15.0333,
   16.43168,
   16.34013,
   15.93738,
   17.94436,
   18.30301,
   19.07878,
   19.33908};
   Double_t _fehx3005[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3005[24] = {
   18.54724,
   12.84523,
   11.40175,
   11.04536,
   10.48809,
   11.13553,
   11.40175,
   11.04536,
   11,
   11.09054,
   12.20656,
   12.20656,
   13.30413,
   13.49074,
   13.92839,
   14.8324,
   15.0333,
   16.43168,
   16.34013,
   15.93738,
   17.94436,
   18.30301,
   19.07878,
   19.33908};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(70.12919);
   Graph_Graph3005->SetMaximum(422.7218);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.1","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all");
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
   
   Double_t _fx3006[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3006[24] = {
   0.2247951,
   0.2424539,
   0.2843812,
   0.272393,
   0.271306,
   0.3205916,
   0.2643714,
   0.3548696,
   0.3552361,
   0.2946863,
   0.2680179,
   0.2852333,
   0.2762356,
   0.2854666,
   0.2991865,
   0.2898376,
   0.286401,
   0.2967748,
   0.2945822,
   0.3001376,
   0.3030401,
   0.2999148,
   0.2675542,
   0.2666583};
   Double_t _fehx3006[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3006[24] = {
   0.2247951,
   0.2424539,
   0.2843812,
   0.272393,
   0.271306,
   0.3205916,
   0.2643714,
   0.3548696,
   0.3552361,
   0.2946863,
   0.2680179,
   0.2852333,
   0.2762356,
   0.2854666,
   0.2991865,
   0.2898376,
   0.286401,
   0.2967748,
   0.2945822,
   0.3001376,
   0.3030401,
   0.2999148,
   0.2675542,
   0.2666583};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   Graph_Graph3006->GetXaxis()->SetTitle("Angle between photons [cosine]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3007[24] = {
   0.2007293,
   0.2086277,
   0.2064503,
   0.2171489,
   0.2186435,
   0.2281147,
   0.2153494,
   0.2395728,
   0.2560908,
   0.2385011,
   0.2412349,
   0.2425743,
   0.2513218,
   0.2604269,
   0.2614781,
   0.2691556,
   0.2685904,
   0.2760105,
   0.27943,
   0.2866447,
   0.292583,
   0.2878128,
   0.2434013,
   0.2037815};
   Double_t _fehx3007[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3007[24] = {
   0.2007293,
   0.2086277,
   0.2064503,
   0.2171489,
   0.2186435,
   0.2281147,
   0.2153494,
   0.2395728,
   0.2560908,
   0.2385011,
   0.2412349,
   0.2425743,
   0.2513218,
   0.2604269,
   0.2614781,
   0.2691556,
   0.2685904,
   0.2760105,
   0.27943,
   0.2866447,
   0.292583,
   0.2878128,
   0.2434013,
   0.2037815};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3008[24] = {
   1.012292,
   0.9326599,
   0.9011817,
   1.002637,
   0.8938904,
   0.9056401,
   0.9241465,
   0.893557,
   0.9202128,
   0.8105412,
   0.8855094,
   0.8010565,
   0.9305334,
   0.8453292,
   0.8122305,
   0.9227242,
   0.8803035,
   0.9209191,
   0.8407812,
   0.7445275,
   0.8041475,
   0.7407286,
   0.8020789,
   0.8630795};
   Double_t _felx3008[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3008[24] = {
   0.05457911,
   0.07260748,
   0.07903886,
   0.09077448,
   0.08522911,
   0.08132888,
   0.08105301,
   0.08089885,
   0.08365571,
   0.07308404,
   0.07254376,
   0.0656251,
   0.06994317,
   0.06265997,
   0.05831475,
   0.06221005,
   0.05855692,
   0.05604535,
   0.05145498,
   0.04671581,
   0.04481339,
   0.04047033,
   0.04204036,
   0.04462878};
   Double_t _fehx3008[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3008[24] = {
   0.05457911,
   0.07260748,
   0.07903886,
   0.09077448,
   0.08522911,
   0.08132888,
   0.08105301,
   0.08089885,
   0.08365571,
   0.07308404,
   0.07254376,
   0.0656251,
   0.06994317,
   0.06265997,
   0.05831475,
   0.06221005,
   0.05855692,
   0.05604535,
   0.05145498,
   0.04671581,
   0.04481339,
   0.04047033,
   0.04204036,
   0.04462878};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.6582517);
   Graph_Graph3008->SetMaximum(1.132971);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,-1,1);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

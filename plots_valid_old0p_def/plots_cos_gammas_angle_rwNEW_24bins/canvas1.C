#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Feb 18 18:43:48 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-1.307692,-12.31964,1.25641,1362.293);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__1->SetBinContent(1,428.1668);
   hmc__1->SetBinContent(2,221.95);
   hmc__1->SetBinContent(3,178.1155);
   hmc__1->SetBinContent(4,159.6556);
   hmc__1->SetBinContent(5,159.2894);
   hmc__1->SetBinContent(6,170.9378);
   hmc__1->SetBinContent(7,179.631);
   hmc__1->SetBinContent(8,174.0441);
   hmc__1->SetBinContent(9,170.1552);
   hmc__1->SetBinContent(10,190.4506);
   hmc__1->SetBinContent(11,215.2902);
   hmc__1->SetBinContent(12,235.4339);
   hmc__1->SetBinContent(13,241.9804);
   hmc__1->SetBinContent(14,276.3428);
   hmc__1->SetBinContent(15,305.4516);
   hmc__1->SetBinContent(16,298.4996);
   hmc__1->SetBinContent(17,322.325);
   hmc__1->SetBinContent(18,371.5817);
   hmc__1->SetBinContent(19,404.7463);
   hmc__1->SetBinContent(20,447.1058);
   hmc__1->SetBinContent(21,525.9623);
   hmc__1->SetBinContent(22,602.1107);
   hmc__1->SetBinContent(23,615.982);
   hmc__1->SetBinContent(24,578.4632);
   hmc__1->SetBinContent(25,0.1394999);
   hmc__1->SetBinError(1,93.14103);
   hmc__1->SetBinError(2,54.7765);
   hmc__1->SetBinError(3,45.3527);
   hmc__1->SetBinError(4,42.4094);
   hmc__1->SetBinError(5,41.74397);
   hmc__1->SetBinError(6,51.40681);
   hmc__1->SetBinError(7,45.57432);
   hmc__1->SetBinError(8,56.15301);
   hmc__1->SetBinError(9,54.39584);
   hmc__1->SetBinError(10,51.82669);
   hmc__1->SetBinError(11,53.34571);
   hmc__1->SetBinError(12,62.36744);
   hmc__1->SetBinError(13,62.36247);
   hmc__1->SetBinError(14,73.22704);
   hmc__1->SetBinError(15,84.05816);
   hmc__1->SetBinError(16,82.85571);
   hmc__1->SetBinError(17,86.47424);
   hmc__1->SetBinError(18,101.8515);
   hmc__1->SetBinError(19,109.6879);
   hmc__1->SetBinError(20,124.3972);
   hmc__1->SetBinError(21,148.6412);
   hmc__1->SetBinError(22,167.0493);
   hmc__1->SetBinError(23,148.2391);
   hmc__1->SetBinError(24,141.0076);
   hmc__1->SetBinError(25,0.5040928);
   hmc__1->SetMinimum(-12.31964);
   hmc__1->SetMaximum(1293.562);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,-1,1);
   hs1_stack_1->SetMinimum(-5.219833e-10);
   hs1_stack_1->SetMaximum(646.7811);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,10.29188);
   hbadmatch_stack_1->SetBinContent(2,8.002978);
   hbadmatch_stack_1->SetBinContent(3,3.46247);
   hbadmatch_stack_1->SetBinContent(4,5.309635);
   hbadmatch_stack_1->SetBinContent(5,4.986409);
   hbadmatch_stack_1->SetBinContent(6,7.71887);
   hbadmatch_stack_1->SetBinContent(7,5.612008);
   hbadmatch_stack_1->SetBinContent(8,5.27708);
   hbadmatch_stack_1->SetBinContent(9,2.683367);
   hbadmatch_stack_1->SetBinContent(10,2.455417);
   hbadmatch_stack_1->SetBinContent(11,2.916077);
   hbadmatch_stack_1->SetBinContent(12,4.950404);
   hbadmatch_stack_1->SetBinContent(13,5.207017);
   hbadmatch_stack_1->SetBinContent(14,7.818539);
   hbadmatch_stack_1->SetBinContent(15,7.989109);
   hbadmatch_stack_1->SetBinContent(16,6.294483);
   hbadmatch_stack_1->SetBinContent(17,6.359752);
   hbadmatch_stack_1->SetBinContent(18,7.301467);
   hbadmatch_stack_1->SetBinContent(19,8.435608);
   hbadmatch_stack_1->SetBinContent(20,9.366417);
   hbadmatch_stack_1->SetBinContent(21,11.92677);
   hbadmatch_stack_1->SetBinContent(22,14.31529);
   hbadmatch_stack_1->SetBinContent(23,14.39867);
   hbadmatch_stack_1->SetBinContent(24,17.45372);
   hbadmatch_stack_1->SetBinError(1,1.831326);
   hbadmatch_stack_1->SetBinError(2,1.510324);
   hbadmatch_stack_1->SetBinError(3,0.9997387);
   hbadmatch_stack_1->SetBinError(4,1.214988);
   hbadmatch_stack_1->SetBinError(5,1.858638);
   hbadmatch_stack_1->SetBinError(6,2.362825);
   hbadmatch_stack_1->SetBinError(7,1.206871);
   hbadmatch_stack_1->SetBinError(8,1.219362);
   hbadmatch_stack_1->SetBinError(9,0.8783091);
   hbadmatch_stack_1->SetBinError(10,0.7614036);
   hbadmatch_stack_1->SetBinError(11,0.8296745);
   hbadmatch_stack_1->SetBinError(12,1.148196);
   hbadmatch_stack_1->SetBinError(13,1.526698);
   hbadmatch_stack_1->SetBinError(14,1.443155);
   hbadmatch_stack_1->SetBinError(15,1.538119);
   hbadmatch_stack_1->SetBinError(16,1.280927);
   hbadmatch_stack_1->SetBinError(17,1.275824);
   hbadmatch_stack_1->SetBinError(18,1.411341);
   hbadmatch_stack_1->SetBinError(19,1.60463);
   hbadmatch_stack_1->SetBinError(20,1.578633);
   hbadmatch_stack_1->SetBinError(21,2.350078);
   hbadmatch_stack_1->SetBinError(22,1.967061);
   hbadmatch_stack_1->SetBinError(23,2.187869);
   hbadmatch_stack_1->SetBinError(24,2.282566);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,45.72429);
   hext_stack_2->SetBinContent(2,27.9885);
   hext_stack_2->SetBinContent(3,20.68849);
   hext_stack_2->SetBinContent(4,16.74665);
   hext_stack_2->SetBinContent(5,18.93687);
   hext_stack_2->SetBinContent(6,19.9316);
   hext_stack_2->SetBinContent(7,21.23354);
   hext_stack_2->SetBinContent(8,20.55603);
   hext_stack_2->SetBinContent(9,16.44102);
   hext_stack_2->SetBinContent(10,19.47751);
   hext_stack_2->SetBinContent(11,29.51392);
   hext_stack_2->SetBinContent(12,24.21378);
   hext_stack_2->SetBinContent(13,19.25963);
   hext_stack_2->SetBinContent(14,34.75058);
   hext_stack_2->SetBinContent(15,28.21633);
   hext_stack_2->SetBinContent(16,18.40618);
   hext_stack_2->SetBinContent(17,22.75903);
   hext_stack_2->SetBinContent(18,23.29526);
   hext_stack_2->SetBinContent(19,43.8904);
   hext_stack_2->SetBinContent(20,35.03032);
   hext_stack_2->SetBinContent(21,40.73259);
   hext_stack_2->SetBinContent(22,59.73295);
   hext_stack_2->SetBinContent(23,73.42152);
   hext_stack_2->SetBinContent(24,73.39116);
   hext_stack_2->SetBinError(1,4.698419);
   hext_stack_2->SetBinError(2,3.577405);
   hext_stack_2->SetBinError(3,3.091074);
   hext_stack_2->SetBinError(4,2.749938);
   hext_stack_2->SetBinError(5,2.951297);
   hext_stack_2->SetBinError(6,2.902111);
   hext_stack_2->SetBinError(7,3.21072);
   hext_stack_2->SetBinError(8,3.301978);
   hext_stack_2->SetBinError(9,2.681352);
   hext_stack_2->SetBinError(10,3.054344);
   hext_stack_2->SetBinError(11,3.696797);
   hext_stack_2->SetBinError(12,3.452465);
   hext_stack_2->SetBinError(13,2.888588);
   hext_stack_2->SetBinError(14,4.051684);
   hext_stack_2->SetBinError(15,3.639419);
   hext_stack_2->SetBinError(16,2.748412);
   hext_stack_2->SetBinError(17,3.13796);
   hext_stack_2->SetBinError(18,3.214114);
   hext_stack_2->SetBinError(19,4.74351);
   hext_stack_2->SetBinError(20,3.99083);
   hext_stack_2->SetBinError(21,4.362812);
   hext_stack_2->SetBinError(22,5.171193);
   hext_stack_2->SetBinError(23,5.839354);
   hext_stack_2->SetBinError(24,5.867829);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,9.858234);
   hdirt_stack_3->SetBinContent(2,2.040378);
   hdirt_stack_3->SetBinContent(3,3.003209);
   hdirt_stack_3->SetBinContent(4,3.446896);
   hdirt_stack_3->SetBinContent(5,2.584002);
   hdirt_stack_3->SetBinContent(6,1.409088);
   hdirt_stack_3->SetBinContent(7,1.275373);
   hdirt_stack_3->SetBinContent(8,2.309982);
   hdirt_stack_3->SetBinContent(9,2.925898);
   hdirt_stack_3->SetBinContent(10,1.296961);
   hdirt_stack_3->SetBinContent(11,1.21377);
   hdirt_stack_3->SetBinContent(12,0.5522859);
   hdirt_stack_3->SetBinContent(13,0.6566868);
   hdirt_stack_3->SetBinContent(14,1.849435);
   hdirt_stack_3->SetBinContent(15,2.432759);
   hdirt_stack_3->SetBinContent(16,2.243321);
   hdirt_stack_3->SetBinContent(17,3.184741);
   hdirt_stack_3->SetBinContent(18,1.807961);
   hdirt_stack_3->SetBinContent(19,2.934135);
   hdirt_stack_3->SetBinContent(20,3.585225);
   hdirt_stack_3->SetBinContent(21,2.640047);
   hdirt_stack_3->SetBinContent(22,4.88609);
   hdirt_stack_3->SetBinContent(23,7.666336);
   hdirt_stack_3->SetBinContent(24,7.22823);
   hdirt_stack_3->SetBinError(1,1.640119);
   hdirt_stack_3->SetBinError(2,0.7716957);
   hdirt_stack_3->SetBinError(3,0.9144616);
   hdirt_stack_3->SetBinError(4,0.9347699);
   hdirt_stack_3->SetBinError(5,0.9294305);
   hdirt_stack_3->SetBinError(6,0.5615226);
   hdirt_stack_3->SetBinError(7,0.515847);
   hdirt_stack_3->SetBinError(8,0.8229344);
   hdirt_stack_3->SetBinError(9,0.9411844);
   hdirt_stack_3->SetBinError(10,0.5342434);
   hdirt_stack_3->SetBinError(11,0.5532013);
   hdirt_stack_3->SetBinError(12,0.2761429);
   hdirt_stack_3->SetBinError(13,0.3791383);
   hdirt_stack_3->SetBinError(14,0.6412057);
   hdirt_stack_3->SetBinError(15,1.101477);
   hdirt_stack_3->SetBinError(16,0.7246618);
   hdirt_stack_3->SetBinError(17,1.181716);
   hdirt_stack_3->SetBinError(18,0.6733827);
   hdirt_stack_3->SetBinError(19,0.8713519);
   hdirt_stack_3->SetBinError(20,0.9943991);
   hdirt_stack_3->SetBinError(21,0.791419);
   hdirt_stack_3->SetBinError(22,1.158494);
   hdirt_stack_3->SetBinError(23,1.77723);
   hdirt_stack_3->SetBinError(24,1.497611);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,73.94746);
   houtFV_stack_4->SetBinContent(2,35.97797);
   houtFV_stack_4->SetBinContent(3,21.18293);
   houtFV_stack_4->SetBinContent(4,17.97471);
   houtFV_stack_4->SetBinContent(5,16.27923);
   houtFV_stack_4->SetBinContent(6,11.43565);
   houtFV_stack_4->SetBinContent(7,17.1125);
   houtFV_stack_4->SetBinContent(8,17.04086);
   houtFV_stack_4->SetBinContent(9,14.59498);
   houtFV_stack_4->SetBinContent(10,11.66745);
   houtFV_stack_4->SetBinContent(11,12.5921);
   houtFV_stack_4->SetBinContent(12,16.92445);
   houtFV_stack_4->SetBinContent(13,19.56627);
   houtFV_stack_4->SetBinContent(14,20.42704);
   houtFV_stack_4->SetBinContent(15,22.8797);
   houtFV_stack_4->SetBinContent(16,23.83529);
   houtFV_stack_4->SetBinContent(17,27.0224);
   houtFV_stack_4->SetBinContent(18,30.22108);
   houtFV_stack_4->SetBinContent(19,31.80918);
   houtFV_stack_4->SetBinContent(20,34.32838);
   houtFV_stack_4->SetBinContent(21,47.23936);
   houtFV_stack_4->SetBinContent(22,54.28402);
   houtFV_stack_4->SetBinContent(23,66.74467);
   houtFV_stack_4->SetBinContent(24,77.14408);
   houtFV_stack_4->SetBinError(1,4.26848);
   houtFV_stack_4->SetBinError(2,3.011349);
   houtFV_stack_4->SetBinError(3,2.273085);
   houtFV_stack_4->SetBinError(4,2.113545);
   houtFV_stack_4->SetBinError(5,2.068184);
   houtFV_stack_4->SetBinError(6,1.694795);
   houtFV_stack_4->SetBinError(7,2.058982);
   houtFV_stack_4->SetBinError(8,2.37279);
   houtFV_stack_4->SetBinError(9,1.927031);
   houtFV_stack_4->SetBinError(10,1.69494);
   houtFV_stack_4->SetBinError(11,1.809413);
   houtFV_stack_4->SetBinError(12,2.037482);
   houtFV_stack_4->SetBinError(13,2.254201);
   houtFV_stack_4->SetBinError(14,2.258625);
   houtFV_stack_4->SetBinError(15,2.35281);
   houtFV_stack_4->SetBinError(16,2.399217);
   houtFV_stack_4->SetBinError(17,2.586185);
   houtFV_stack_4->SetBinError(18,2.76671);
   houtFV_stack_4->SetBinError(19,2.888561);
   houtFV_stack_4->SetBinError(20,2.92556);
   houtFV_stack_4->SetBinError(21,3.569401);
   houtFV_stack_4->SetBinError(22,3.698589);
   houtFV_stack_4->SetBinError(23,4.135458);
   houtFV_stack_4->SetBinError(24,4.464254);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.692208);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.872884);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.840744);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.839248);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.25534);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.688626);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.338376);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.08694);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.926276);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.855362);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.350994);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.14698);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.566648);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.831198);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.045356);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.136602);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.167237);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.33855);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.241559);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.873553);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,12.15731);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,12.07544);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,13.30238);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,8.826561);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8568072);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5915798);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4575982);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4512456);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3831421);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5003934);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4032689);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3001705);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5319987);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5182246);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3431272);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4810939);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5726356);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5561419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7167256);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5586438);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5498651);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7251378);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6613195);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8166481);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.178022);
   hNCpi0inFVcoh_stack_5->SetBinError(22,1.145497);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.226554);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.9305542);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.017354);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7949858);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5300997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.324926);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.351826);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6137997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7391858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9904539);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.785944);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.9210359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8771898);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8650677);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.018354);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.59014);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.188498);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.310972);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.840912);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9906222);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.449808);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2205698);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2483746);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1216132);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4338769);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3701385);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1308625);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2452205);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.316066);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.509769);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3020022);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2413539);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2385154);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.317295);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.395144);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4892497);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3399938);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4920925);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3642206);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.364665);
   hNCpi0inFVqe_stack_6->SetEntries(526);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,133.6193);
   hNCpi0inFVres_stack_7->SetBinContent(2,71.39123);
   hNCpi0inFVres_stack_7->SetBinContent(3,56.31404);
   hNCpi0inFVres_stack_7->SetBinContent(4,51.4908);
   hNCpi0inFVres_stack_7->SetBinContent(5,53.14174);
   hNCpi0inFVres_stack_7->SetBinContent(6,56.65733);
   hNCpi0inFVres_stack_7->SetBinContent(7,58.36803);
   hNCpi0inFVres_stack_7->SetBinContent(8,63.13563);
   hNCpi0inFVres_stack_7->SetBinContent(9,64.47299);
   hNCpi0inFVres_stack_7->SetBinContent(10,73.58372);
   hNCpi0inFVres_stack_7->SetBinContent(11,84.3211);
   hNCpi0inFVres_stack_7->SetBinContent(12,94.90657);
   hNCpi0inFVres_stack_7->SetBinContent(13,102.205);
   hNCpi0inFVres_stack_7->SetBinContent(14,111.5336);
   hNCpi0inFVres_stack_7->SetBinContent(15,123.8158);
   hNCpi0inFVres_stack_7->SetBinContent(16,127.4675);
   hNCpi0inFVres_stack_7->SetBinContent(17,138.7229);
   hNCpi0inFVres_stack_7->SetBinContent(18,157.3218);
   hNCpi0inFVres_stack_7->SetBinContent(19,164.7825);
   hNCpi0inFVres_stack_7->SetBinContent(20,191.9505);
   hNCpi0inFVres_stack_7->SetBinContent(21,209.1086);
   hNCpi0inFVres_stack_7->SetBinContent(22,221.2043);
   hNCpi0inFVres_stack_7->SetBinContent(23,197.6572);
   hNCpi0inFVres_stack_7->SetBinContent(24,148.0933);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,3.798176);
   hNCpi0inFVres_stack_7->SetBinError(2,2.733049);
   hNCpi0inFVres_stack_7->SetBinError(3,2.408137);
   hNCpi0inFVres_stack_7->SetBinError(4,2.279511);
   hNCpi0inFVres_stack_7->SetBinError(5,2.369386);
   hNCpi0inFVres_stack_7->SetBinError(6,2.485642);
   hNCpi0inFVres_stack_7->SetBinError(7,2.508929);
   hNCpi0inFVres_stack_7->SetBinError(8,2.604679);
   hNCpi0inFVres_stack_7->SetBinError(9,2.598158);
   hNCpi0inFVres_stack_7->SetBinError(10,2.78792);
   hNCpi0inFVres_stack_7->SetBinError(11,2.984957);
   hNCpi0inFVres_stack_7->SetBinError(12,3.228141);
   hNCpi0inFVres_stack_7->SetBinError(13,3.314546);
   hNCpi0inFVres_stack_7->SetBinError(14,3.442493);
   hNCpi0inFVres_stack_7->SetBinError(15,3.700091);
   hNCpi0inFVres_stack_7->SetBinError(16,3.692815);
   hNCpi0inFVres_stack_7->SetBinError(17,3.921292);
   hNCpi0inFVres_stack_7->SetBinError(18,4.162367);
   hNCpi0inFVres_stack_7->SetBinError(19,4.151414);
   hNCpi0inFVres_stack_7->SetBinError(20,4.556647);
   hNCpi0inFVres_stack_7->SetBinError(21,4.73838);
   hNCpi0inFVres_stack_7->SetBinError(22,4.81637);
   hNCpi0inFVres_stack_7->SetBinError(23,4.575449);
   hNCpi0inFVres_stack_7->SetBinError(24,3.982909);
   hNCpi0inFVres_stack_7->SetBinError(25,0.05579997);
   hNCpi0inFVres_stack_7->SetEntries(50864);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,27.95691);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.71131);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.11628);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.54333);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.20297);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.46387);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.927615);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.28718);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.36348);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.70984);
   hNCpi0inFVdis_stack_8->SetBinContent(11,16.48);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.84403);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.70055);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.5988);
   hNCpi0inFVdis_stack_8->SetBinContent(15,18.33884);
   hNCpi0inFVdis_stack_8->SetBinContent(16,22.49812);
   hNCpi0inFVdis_stack_8->SetBinContent(17,22.90915);
   hNCpi0inFVdis_stack_8->SetBinContent(18,25.26222);
   hNCpi0inFVdis_stack_8->SetBinContent(19,30.00624);
   hNCpi0inFVdis_stack_8->SetBinContent(20,33.1724);
   hNCpi0inFVdis_stack_8->SetBinContent(21,42.91901);
   hNCpi0inFVdis_stack_8->SetBinContent(22,47.6851);
   hNCpi0inFVdis_stack_8->SetBinContent(23,52.1058);
   hNCpi0inFVdis_stack_8->SetBinContent(24,39.58827);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.709483);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.093254);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.090432);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.092393);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.034976);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.153594);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.957558);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.225654);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.059138);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.26895);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.313832);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.361549);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.436186);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.208223);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.400002);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.557007);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.576282);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.658286);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.795362);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.852077);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.150432);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.227932);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.380068);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.060845);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(40);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,63.68209);
   hCCpi0inFV_stack_10->SetBinContent(2,26.6296);
   hCCpi0inFV_stack_10->SetBinContent(3,23.77599);
   hCCpi0inFV_stack_10->SetBinContent(4,20.02798);
   hCCpi0inFV_stack_10->SetBinContent(5,21.53988);
   hCCpi0inFV_stack_10->SetBinContent(6,26.35859);
   hCCpi0inFV_stack_10->SetBinContent(7,29.75982);
   hCCpi0inFV_stack_10->SetBinContent(8,18.15596);
   hCCpi0inFV_stack_10->SetBinContent(9,26.52694);
   hCCpi0inFV_stack_10->SetBinContent(10,26.57932);
   hCCpi0inFV_stack_10->SetBinContent(11,29.36886);
   hCCpi0inFV_stack_10->SetBinContent(12,32.47836);
   hCCpi0inFV_stack_10->SetBinContent(13,32.44442);
   hCCpi0inFV_stack_10->SetBinContent(14,40.83593);
   hCCpi0inFV_stack_10->SetBinContent(15,51.12275);
   hCCpi0inFV_stack_10->SetBinContent(16,51.72356);
   hCCpi0inFV_stack_10->SetBinContent(17,48.77716);
   hCCpi0inFV_stack_10->SetBinContent(18,61.55207);
   hCCpi0inFV_stack_10->SetBinContent(19,56.73626);
   hCCpi0inFV_stack_10->SetBinContent(20,68.21848);
   hCCpi0inFV_stack_10->SetBinContent(21,84.1903);
   hCCpi0inFV_stack_10->SetBinContent(22,93.12282);
   hCCpi0inFV_stack_10->SetBinContent(23,88.15369);
   hCCpi0inFV_stack_10->SetBinContent(24,73.25636);
   hCCpi0inFV_stack_10->SetBinError(1,3.970704);
   hCCpi0inFV_stack_10->SetBinError(2,2.57007);
   hCCpi0inFV_stack_10->SetBinError(3,2.422169);
   hCCpi0inFV_stack_10->SetBinError(4,2.249901);
   hCCpi0inFV_stack_10->SetBinError(5,2.324757);
   hCCpi0inFV_stack_10->SetBinError(6,2.570228);
   hCCpi0inFV_stack_10->SetBinError(7,2.76107);
   hCCpi0inFV_stack_10->SetBinError(8,2.097286);
   hCCpi0inFV_stack_10->SetBinError(9,2.586465);
   hCCpi0inFV_stack_10->SetBinError(10,2.589372);
   hCCpi0inFV_stack_10->SetBinError(11,2.764036);
   hCCpi0inFV_stack_10->SetBinError(12,2.878616);
   hCCpi0inFV_stack_10->SetBinError(13,2.808733);
   hCCpi0inFV_stack_10->SetBinError(14,3.236451);
   hCCpi0inFV_stack_10->SetBinError(15,3.634225);
   hCCpi0inFV_stack_10->SetBinError(16,3.67949);
   hCCpi0inFV_stack_10->SetBinError(17,3.516796);
   hCCpi0inFV_stack_10->SetBinError(18,3.937828);
   hCCpi0inFV_stack_10->SetBinError(19,3.763251);
   hCCpi0inFV_stack_10->SetBinError(20,4.119453);
   hCCpi0inFV_stack_10->SetBinError(21,4.628752);
   hCCpi0inFV_stack_10->SetBinError(22,4.818109);
   hCCpi0inFV_stack_10->SetBinError(23,4.680019);
   hCCpi0inFV_stack_10->SetBinError(24,4.305387);
   hCCpi0inFV_stack_10->SetEntries(4680);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,25.75792);
   hNCinFV_stack_11->SetBinContent(2,14.31279);
   hNCinFV_stack_11->SetBinContent(3,17.78134);
   hNCinFV_stack_11->SetBinContent(4,12.45275);
   hNCinFV_stack_11->SetBinContent(5,11.82734);
   hNCinFV_stack_11->SetBinContent(6,15.03081);
   hNCinFV_stack_11->SetBinContent(7,11.78516);
   hNCinFV_stack_11->SetBinContent(8,12.44767);
   hNCinFV_stack_11->SetBinContent(9,11.34816);
   hNCinFV_stack_11->SetBinContent(10,16.61058);
   hNCinFV_stack_11->SetBinContent(11,15.21728);
   hNCinFV_stack_11->SetBinContent(12,19.44189);
   hNCinFV_stack_11->SetBinContent(13,14.7567);
   hNCinFV_stack_11->SetBinContent(14,18.04531);
   hNCinFV_stack_11->SetBinContent(15,20.33805);
   hNCinFV_stack_11->SetBinContent(16,17.49103);
   hNCinFV_stack_11->SetBinContent(17,21.88254);
   hNCinFV_stack_11->SetBinContent(18,21.60285);
   hNCinFV_stack_11->SetBinContent(19,28.47656);
   hNCinFV_stack_11->SetBinContent(20,23.55094);
   hNCinFV_stack_11->SetBinContent(21,31.02818);
   hNCinFV_stack_11->SetBinContent(22,40.21923);
   hNCinFV_stack_11->SetBinContent(23,45.42671);
   hNCinFV_stack_11->SetBinContent(24,45.2585);
   hNCinFV_stack_11->SetBinError(1,2.505162);
   hNCinFV_stack_11->SetBinError(2,1.881664);
   hNCinFV_stack_11->SetBinError(3,2.159824);
   hNCinFV_stack_11->SetBinError(4,1.80988);
   hNCinFV_stack_11->SetBinError(5,1.733943);
   hNCinFV_stack_11->SetBinError(6,1.841217);
   hNCinFV_stack_11->SetBinError(7,1.641782);
   hNCinFV_stack_11->SetBinError(8,1.809331);
   hNCinFV_stack_11->SetBinError(9,1.617768);
   hNCinFV_stack_11->SetBinError(10,2.058642);
   hNCinFV_stack_11->SetBinError(11,2.039395);
   hNCinFV_stack_11->SetBinError(12,2.255758);
   hNCinFV_stack_11->SetBinError(13,1.943458);
   hNCinFV_stack_11->SetBinError(14,2.067345);
   hNCinFV_stack_11->SetBinError(15,2.359187);
   hNCinFV_stack_11->SetBinError(16,2.123551);
   hNCinFV_stack_11->SetBinError(17,2.379954);
   hNCinFV_stack_11->SetBinError(18,2.2619);
   hNCinFV_stack_11->SetBinError(19,2.720093);
   hNCinFV_stack_11->SetBinError(20,2.427441);
   hNCinFV_stack_11->SetBinError(21,2.775131);
   hNCinFV_stack_11->SetBinError(22,3.145712);
   hNCinFV_stack_11->SetBinError(23,3.399118);
   hNCinFV_stack_11->SetBinError(24,3.415505);
   hNCinFV_stack_11->SetEntries(2180);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,24.52262);
   hnumuCCinFV_stack_12->SetBinContent(2,17.30375);
   hnumuCCinFV_stack_12->SetBinContent(3,16.50501);
   hnumuCCinFV_stack_12->SetBinContent(4,16.53476);
   hnumuCCinFV_stack_12->SetBinContent(5,14.91622);
   hnumuCCinFV_stack_12->SetBinContent(6,16.45224);
   hnumuCCinFV_stack_12->SetBinContent(7,19.78242);
   hnumuCCinFV_stack_12->SetBinContent(8,18.17032);
   hnumuCCinFV_stack_12->SetBinContent(9,17.23034);
   hnumuCCinFV_stack_12->SetBinContent(10,20.81262);
   hnumuCCinFV_stack_12->SetBinContent(11,20.94394);
   hnumuCCinFV_stack_12->SetBinContent(12,21.28305);
   hnumuCCinFV_stack_12->SetBinContent(13,24.01543);
   hnumuCCinFV_stack_12->SetBinContent(14,21.67556);
   hnumuCCinFV_stack_12->SetBinContent(15,24.74624);
   hnumuCCinFV_stack_12->SetBinContent(16,23.48237);
   hnumuCCinFV_stack_12->SetBinContent(17,24.37238);
   hnumuCCinFV_stack_12->SetBinContent(18,36.10033);
   hnumuCCinFV_stack_12->SetBinContent(19,30.25525);
   hnumuCCinFV_stack_12->SetBinContent(20,35.93195);
   hnumuCCinFV_stack_12->SetBinContent(21,39.08507);
   hnumuCCinFV_stack_12->SetBinContent(22,48.53368);
   hnumuCCinFV_stack_12->SetBinContent(23,49.34739);
   hnumuCCinFV_stack_12->SetBinContent(24,71.75833);
   hnumuCCinFV_stack_12->SetBinError(1,3.392614);
   hnumuCCinFV_stack_12->SetBinError(2,2.21866);
   hnumuCCinFV_stack_12->SetBinError(3,2.274787);
   hnumuCCinFV_stack_12->SetBinError(4,2.124369);
   hnumuCCinFV_stack_12->SetBinError(5,2.059224);
   hnumuCCinFV_stack_12->SetBinError(6,2.376314);
   hnumuCCinFV_stack_12->SetBinError(7,2.445134);
   hnumuCCinFV_stack_12->SetBinError(8,2.526873);
   hnumuCCinFV_stack_12->SetBinError(9,2.343336);
   hnumuCCinFV_stack_12->SetBinError(10,2.568885);
   hnumuCCinFV_stack_12->SetBinError(11,2.54813);
   hnumuCCinFV_stack_12->SetBinError(12,2.590889);
   hnumuCCinFV_stack_12->SetBinError(13,2.709592);
   hnumuCCinFV_stack_12->SetBinError(14,2.343626);
   hnumuCCinFV_stack_12->SetBinError(15,2.93136);
   hnumuCCinFV_stack_12->SetBinError(16,2.674543);
   hnumuCCinFV_stack_12->SetBinError(17,3.150999);
   hnumuCCinFV_stack_12->SetBinError(18,4.611077);
   hnumuCCinFV_stack_12->SetBinError(19,3.430664);
   hnumuCCinFV_stack_12->SetBinError(20,3.534743);
   hnumuCCinFV_stack_12->SetBinError(21,3.482483);
   hnumuCCinFV_stack_12->SetBinError(22,3.995669);
   hnumuCCinFV_stack_12->SetBinError(23,3.884589);
   hnumuCCinFV_stack_12->SetBinError(24,4.801072);
   hnumuCCinFV_stack_12->SetEntries(2561);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,4.915603);
   hnueCCinFV_stack_13->SetBinContent(2,1.812027);
   hnueCCinFV_stack_13->SetBinContent(3,0.691541);
   hnueCCinFV_stack_13->SetBinContent(4,1.270501);
   hnueCCinFV_stack_13->SetBinContent(5,2.86571);
   hnueCCinFV_stack_13->SetBinContent(6,0.8419645);
   hnueCCinFV_stack_13->SetBinContent(7,2.11123);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.5930367);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.6494526);
   hnueCCinFV_stack_13->SetBinContent(16,0.9586247);
   hnueCCinFV_stack_13->SetBinContent(17,1.246911);
   hnueCCinFV_stack_13->SetBinContent(18,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(19,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(20,2.881268);
   hnueCCinFV_stack_13->SetBinContent(21,3.624005);
   hnueCCinFV_stack_13->SetBinContent(22,3.93169);
   hnueCCinFV_stack_13->SetBinContent(23,6.76697);
   hnueCCinFV_stack_13->SetBinContent(24,14.95908);
   hnueCCinFV_stack_13->SetBinError(1,1.462997);
   hnueCCinFV_stack_13->SetBinError(2,0.8514542);
   hnueCCinFV_stack_13->SetBinError(3,0.4081814);
   hnueCCinFV_stack_13->SetBinError(4,0.5895188);
   hnueCCinFV_stack_13->SetBinError(5,1.750351);
   hnueCCinFV_stack_13->SetBinError(6,0.6062267);
   hnueCCinFV_stack_13->SetBinError(7,0.7768034);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.4424562);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4156841);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.3778196);
   hnueCCinFV_stack_13->SetBinError(16,0.5210377);
   hnueCCinFV_stack_13->SetBinError(17,0.51115);
   hnueCCinFV_stack_13->SetBinError(18,0.438694);
   hnueCCinFV_stack_13->SetBinError(19,0.3397478);
   hnueCCinFV_stack_13->SetBinError(20,1.056366);
   hnueCCinFV_stack_13->SetBinError(21,1.491743);
   hnueCCinFV_stack_13->SetBinError(22,1.020247);
   hnueCCinFV_stack_13->SetBinError(23,1.749564);
   hnueCCinFV_stack_13->SetBinError(24,2.641326);
   hnueCCinFV_stack_13->SetEntries(187);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__2->SetBinContent(1,428.1668);
   hmcerror__2->SetBinContent(2,221.95);
   hmcerror__2->SetBinContent(3,178.1155);
   hmcerror__2->SetBinContent(4,159.6556);
   hmcerror__2->SetBinContent(5,159.2894);
   hmcerror__2->SetBinContent(6,170.9378);
   hmcerror__2->SetBinContent(7,179.631);
   hmcerror__2->SetBinContent(8,174.0441);
   hmcerror__2->SetBinContent(9,170.1552);
   hmcerror__2->SetBinContent(10,190.4506);
   hmcerror__2->SetBinContent(11,215.2902);
   hmcerror__2->SetBinContent(12,235.4339);
   hmcerror__2->SetBinContent(13,241.9804);
   hmcerror__2->SetBinContent(14,276.3428);
   hmcerror__2->SetBinContent(15,305.4516);
   hmcerror__2->SetBinContent(16,298.4996);
   hmcerror__2->SetBinContent(17,322.325);
   hmcerror__2->SetBinContent(18,371.5817);
   hmcerror__2->SetBinContent(19,404.7463);
   hmcerror__2->SetBinContent(20,447.1058);
   hmcerror__2->SetBinContent(21,525.9623);
   hmcerror__2->SetBinContent(22,602.1107);
   hmcerror__2->SetBinContent(23,615.982);
   hmcerror__2->SetBinContent(24,578.4632);
   hmcerror__2->SetBinContent(25,0.1394999);
   hmcerror__2->SetBinError(1,93.14103);
   hmcerror__2->SetBinError(2,54.7765);
   hmcerror__2->SetBinError(3,45.3527);
   hmcerror__2->SetBinError(4,42.4094);
   hmcerror__2->SetBinError(5,41.74397);
   hmcerror__2->SetBinError(6,51.40681);
   hmcerror__2->SetBinError(7,45.57432);
   hmcerror__2->SetBinError(8,56.15301);
   hmcerror__2->SetBinError(9,54.39584);
   hmcerror__2->SetBinError(10,51.82669);
   hmcerror__2->SetBinError(11,53.34571);
   hmcerror__2->SetBinError(12,62.36744);
   hmcerror__2->SetBinError(13,62.36247);
   hmcerror__2->SetBinError(14,73.22704);
   hmcerror__2->SetBinError(15,84.05816);
   hmcerror__2->SetBinError(16,82.85571);
   hmcerror__2->SetBinError(17,86.47424);
   hmcerror__2->SetBinError(18,101.8515);
   hmcerror__2->SetBinError(19,109.6879);
   hmcerror__2->SetBinError(20,124.3972);
   hmcerror__2->SetBinError(21,148.6412);
   hmcerror__2->SetBinError(22,167.0493);
   hmcerror__2->SetBinError(23,148.2391);
   hmcerror__2->SetBinError(24,141.0076);
   hmcerror__2->SetBinError(25,0.5040928);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[24] = {
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
   Double_t _fy3001[24] = {
   425,
   212,
   164,
   154,
   134,
   151,
   164,
   150,
   154,
   176,
   183,
   188,
   221,
   228,
   254,
   270,
   294,
   335,
   349,
   352,
   412,
   465,
   492,
   517};
   Double_t _felx3001[24] = {
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
   Double_t _fely3001[24] = {
   20.61553,
   14.56022,
   12.80625,
   12.40967,
   11.57584,
   12.28821,
   12.80625,
   12.24745,
   12.40967,
   13.2665,
   13.52775,
   13.71131,
   14.86607,
   15.09967,
   15.93738,
   16.43168,
   17.14643,
   18.30301,
   18.68154,
   18.76166,
   20.29778,
   21.56386,
   22.18107,
   22.73763};
   Double_t _fehx3001[24] = {
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
   Double_t _fehy3001[24] = {
   20.61553,
   14.56022,
   12.80625,
   12.40967,
   11.57584,
   12.28821,
   12.80625,
   12.24745,
   12.40967,
   13.2665,
   13.52775,
   13.71131,
   14.86607,
   15.09967,
   15.93738,
   16.43168,
   17.14643,
   18.30301,
   18.68154,
   18.76166,
   20.29778,
   21.56386,
   22.18107,
   22.73763};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(80.69282);
   Graph_Graph3001->SetMaximum(581.469);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
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
   Double_t _fely3002[24] = {
   0.2175345,
   0.2467966,
   0.2546252,
   0.2656305,
   0.2620638,
   0.3007341,
   0.2537107,
   0.3226367,
   0.3196838,
   0.2721267,
   0.2477851,
   0.2649042,
   0.257717,
   0.2649862,
   0.2751931,
   0.2775739,
   0.2682827,
   0.2741024,
   0.2710041,
   0.2782278,
   0.282608,
   0.2774396,
   0.2406549,
   0.2437624};
   Double_t _fehx3002[24] = {
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
   Double_t _fehy3002[24] = {
   0.2175345,
   0.2467966,
   0.2546252,
   0.2656305,
   0.2620638,
   0.3007341,
   0.2537107,
   0.3226367,
   0.3196838,
   0.2721267,
   0.2477851,
   0.2649042,
   0.257717,
   0.2649862,
   0.2751931,
   0.2775739,
   0.2682827,
   0.2741024,
   0.2710041,
   0.2782278,
   0.282608,
   0.2774396,
   0.2406549,
   0.2437624};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Angle between photons [cosine]");
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
   
   Double_t _fx3003[24] = {
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
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
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
   Double_t _fely3003[24] = {
   0.1916686,
   0.1973005,
   0.1969046,
   0.2023514,
   0.203601,
   0.2130447,
   0.2051529,
   0.2251455,
   0.2371808,
   0.2253912,
   0.2249381,
   0.2295918,
   0.2345199,
   0.2400971,
   0.2430231,
   0.2552973,
   0.2546398,
   0.2588588,
   0.2595776,
   0.2672148,
   0.2711222,
   0.2638658,
   0.2258403,
   0.1904162};
   Double_t _fehx3003[24] = {
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
   Double_t _fehy3003[24] = {
   0.1916686,
   0.1973005,
   0.1969046,
   0.2023514,
   0.203601,
   0.2130447,
   0.2051529,
   0.2251455,
   0.2371808,
   0.2253912,
   0.2249381,
   0.2295918,
   0.2345199,
   0.2400971,
   0.2430231,
   0.2552973,
   0.2546398,
   0.2588588,
   0.2595776,
   0.2672148,
   0.2711222,
   0.2638658,
   0.2258403,
   0.1904162};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
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
   
   Double_t _fx3004[24] = {
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
   Double_t _fy3004[24] = {
   0.9926038,
   0.95517,
   0.9207508,
   0.9645762,
   0.8412364,
   0.8833625,
   0.9129826,
   0.8618505,
   0.9050563,
   0.9241243,
   0.8500155,
   0.7985255,
   0.9132971,
   0.8250621,
   0.8315557,
   0.9045238,
   0.9121227,
   0.9015513,
   0.8622685,
   0.7872857,
   0.7833261,
   0.7722832,
   0.7987246,
   0.8937474};
   Double_t _felx3004[24] = {
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
   Double_t _fely3004[24] = {
   0.04814836,
   0.06560135,
   0.07189856,
   0.07772776,
   0.07267176,
   0.07188702,
   0.07129196,
   0.0703698,
   0.07293151,
   0.06965849,
   0.06283495,
   0.05823846,
   0.06143501,
   0.05464107,
   0.05217645,
   0.05504757,
   0.05319608,
   0.04925701,
   0.04615617,
   0.04196247,
   0.03859171,
   0.03581378,
   0.03600929,
   0.03930697};
   Double_t _fehx3004[24] = {
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
   Double_t _fehy3004[24] = {
   0.04814836,
   0.06560135,
   0.07189856,
   0.07772776,
   0.07267176,
   0.07188702,
   0.07129196,
   0.0703698,
   0.07293151,
   0.06965849,
   0.06283495,
   0.05823846,
   0.06143501,
   0.05464107,
   0.05217645,
   0.05504757,
   0.05319608,
   0.04925701,
   0.04615617,
   0.04196247,
   0.03859171,
   0.03581378,
   0.03600929,
   0.03930697};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.705886);
   Graph_Graph3004->SetMaximum(1.072887);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_gamma_gamma_angle_all",24,-1,1);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

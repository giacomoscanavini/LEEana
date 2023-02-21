#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 17:07:15 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.56,3.957692,393.6611);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__10->SetBinContent(1,150.0282);
   hmc__10->SetBinContent(2,155.5469);
   hmc__10->SetBinContent(3,165.3729);
   hmc__10->SetBinContent(4,145.9744);
   hmc__10->SetBinContent(5,145.9717);
   hmc__10->SetBinContent(6,145.4219);
   hmc__10->SetBinContent(7,145.5528);
   hmc__10->SetBinContent(8,131.3807);
   hmc__10->SetBinContent(9,142.2027);
   hmc__10->SetBinContent(10,139.9201);
   hmc__10->SetBinContent(11,139.3341);
   hmc__10->SetBinContent(12,147.0253);
   hmc__10->SetBinContent(13,142.0753);
   hmc__10->SetBinContent(14,141.3124);
   hmc__10->SetBinContent(15,154.1059);
   hmc__10->SetBinContent(16,148.282);
   hmc__10->SetBinContent(17,151.9407);
   hmc__10->SetBinContent(18,145.3735);
   hmc__10->SetBinContent(19,156.8398);
   hmc__10->SetBinContent(20,150.6528);
   hmc__10->SetBinContent(21,160.2286);
   hmc__10->SetBinContent(22,150.6981);
   hmc__10->SetBinContent(23,164.0143);
   hmc__10->SetBinContent(24,165.1166);
   hmc__10->SetBinContent(25,145.0891);
   hmc__10->SetBinError(1,39.41004);
   hmc__10->SetBinError(2,44.95368);
   hmc__10->SetBinError(3,43.96934);
   hmc__10->SetBinError(4,36.81719);
   hmc__10->SetBinError(5,36.80202);
   hmc__10->SetBinError(6,37.38484);
   hmc__10->SetBinError(7,37.01877);
   hmc__10->SetBinError(8,34.4031);
   hmc__10->SetBinError(9,41.76674);
   hmc__10->SetBinError(10,37.49285);
   hmc__10->SetBinError(11,53.15569);
   hmc__10->SetBinError(12,42.4812);
   hmc__10->SetBinError(13,38.69399);
   hmc__10->SetBinError(14,42.21872);
   hmc__10->SetBinError(15,37.51092);
   hmc__10->SetBinError(16,39.99549);
   hmc__10->SetBinError(17,36.61128);
   hmc__10->SetBinError(18,36.76051);
   hmc__10->SetBinError(19,35.21686);
   hmc__10->SetBinError(20,37.32467);
   hmc__10->SetBinError(21,41.98541);
   hmc__10->SetBinError(22,40.61879);
   hmc__10->SetBinError(23,44.37814);
   hmc__10->SetBinError(24,42.48676);
   hmc__10->SetBinError(25,47.05594);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-3.56);
   hmc__10->SetMaximum(373.8);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-3.15,3.15);
   hs4_stack_4->SetMinimum(-2.606256e-09);
   hs4_stack_4->SetMaximum(173.6415);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.863315);
   hbadmatch_stack_1->SetBinContent(2,4.960632);
   hbadmatch_stack_1->SetBinContent(3,5.036725);
   hbadmatch_stack_1->SetBinContent(4,3.182053);
   hbadmatch_stack_1->SetBinContent(5,3.824003);
   hbadmatch_stack_1->SetBinContent(6,5.847081);
   hbadmatch_stack_1->SetBinContent(7,4.393741);
   hbadmatch_stack_1->SetBinContent(8,2.937182);
   hbadmatch_stack_1->SetBinContent(9,3.889743);
   hbadmatch_stack_1->SetBinContent(10,1.859951);
   hbadmatch_stack_1->SetBinContent(11,4.749558);
   hbadmatch_stack_1->SetBinContent(12,4.903585);
   hbadmatch_stack_1->SetBinContent(13,2.920044);
   hbadmatch_stack_1->SetBinContent(14,3.235443);
   hbadmatch_stack_1->SetBinContent(15,6.031709);
   hbadmatch_stack_1->SetBinContent(16,4.320516);
   hbadmatch_stack_1->SetBinContent(17,3.961463);
   hbadmatch_stack_1->SetBinContent(18,5.500574);
   hbadmatch_stack_1->SetBinContent(19,3.065876);
   hbadmatch_stack_1->SetBinContent(20,1.83934);
   hbadmatch_stack_1->SetBinContent(21,4.24477);
   hbadmatch_stack_1->SetBinContent(22,3.228553);
   hbadmatch_stack_1->SetBinContent(23,5.03593);
   hbadmatch_stack_1->SetBinContent(24,2.003623);
   hbadmatch_stack_1->SetBinContent(25,3.749874);
   hbadmatch_stack_1->SetBinError(1,0.877679);
   hbadmatch_stack_1->SetBinError(2,1.206276);
   hbadmatch_stack_1->SetBinError(3,1.338559);
   hbadmatch_stack_1->SetBinError(4,0.8721861);
   hbadmatch_stack_1->SetBinError(5,1.058452);
   hbadmatch_stack_1->SetBinError(6,1.367);
   hbadmatch_stack_1->SetBinError(7,1.166334);
   hbadmatch_stack_1->SetBinError(8,0.9593372);
   hbadmatch_stack_1->SetBinError(9,1.090774);
   hbadmatch_stack_1->SetBinError(10,0.6806475);
   hbadmatch_stack_1->SetBinError(11,1.133724);
   hbadmatch_stack_1->SetBinError(12,1.541957);
   hbadmatch_stack_1->SetBinError(13,0.870066);
   hbadmatch_stack_1->SetBinError(14,0.9459112);
   hbadmatch_stack_1->SetBinError(15,2.465804);
   hbadmatch_stack_1->SetBinError(16,1.042606);
   hbadmatch_stack_1->SetBinError(17,1.073258);
   hbadmatch_stack_1->SetBinError(18,1.320368);
   hbadmatch_stack_1->SetBinError(19,0.9243567);
   hbadmatch_stack_1->SetBinError(20,0.6524148);
   hbadmatch_stack_1->SetBinError(21,1.105509);
   hbadmatch_stack_1->SetBinError(22,1.039202);
   hbadmatch_stack_1->SetBinError(23,1.264323);
   hbadmatch_stack_1->SetBinError(24,0.6349788);
   hbadmatch_stack_1->SetBinError(25,1.083845);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,15.71721);
   hext_stack_2->SetBinContent(2,10.93181);
   hext_stack_2->SetBinContent(3,14.96744);
   hext_stack_2->SetBinContent(4,16.18283);
   hext_stack_2->SetBinContent(5,19.75007);
   hext_stack_2->SetBinContent(6,28.11536);
   hext_stack_2->SetBinContent(7,25.11642);
   hext_stack_2->SetBinContent(8,15.91474);
   hext_stack_2->SetBinContent(9,13.91923);
   hext_stack_2->SetBinContent(10,17.47047);
   hext_stack_2->SetBinContent(11,14.72525);
   hext_stack_2->SetBinContent(12,13.09885);
   hext_stack_2->SetBinContent(13,10.42865);
   hext_stack_2->SetBinContent(14,12.38662);
   hext_stack_2->SetBinContent(15,17.65641);
   hext_stack_2->SetBinContent(16,20.38009);
   hext_stack_2->SetBinContent(17,29.23419);
   hext_stack_2->SetBinContent(18,22.50965);
   hext_stack_2->SetBinContent(19,35.13841);
   hext_stack_2->SetBinContent(20,23.42495);
   hext_stack_2->SetBinContent(21,32.32258);
   hext_stack_2->SetBinContent(22,16.45098);
   hext_stack_2->SetBinContent(23,25.71766);
   hext_stack_2->SetBinContent(24,14.73243);
   hext_stack_2->SetBinContent(25,11.15247);
   hext_stack_2->SetBinError(1,2.591889);
   hext_stack_2->SetBinError(2,2.174403);
   hext_stack_2->SetBinError(3,2.591257);
   hext_stack_2->SetBinError(4,2.659974);
   hext_stack_2->SetBinError(5,3.006792);
   hext_stack_2->SetBinError(6,3.667774);
   hext_stack_2->SetBinError(7,3.283083);
   hext_stack_2->SetBinError(8,2.483623);
   hext_stack_2->SetBinError(9,2.477423);
   hext_stack_2->SetBinError(10,2.834417);
   hext_stack_2->SetBinError(11,2.582532);
   hext_stack_2->SetBinError(12,2.451159);
   hext_stack_2->SetBinError(13,2.214728);
   hext_stack_2->SetBinError(14,2.338876);
   hext_stack_2->SetBinError(15,2.747816);
   hext_stack_2->SetBinError(16,3.085214);
   hext_stack_2->SetBinError(17,3.762409);
   hext_stack_2->SetBinError(18,3.162728);
   hext_stack_2->SetBinError(19,4.104722);
   hext_stack_2->SetBinError(20,3.052627);
   hext_stack_2->SetBinError(21,3.918945);
   hext_stack_2->SetBinError(22,2.579171);
   hext_stack_2->SetBinError(23,3.659454);
   hext_stack_2->SetBinError(24,2.543279);
   hext_stack_2->SetBinError(25,2.318788);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.9994908);
   hdirt_stack_3->SetBinContent(2,2.80518);
   hdirt_stack_3->SetBinContent(3,3.088028);
   hdirt_stack_3->SetBinContent(4,0.6951543);
   hdirt_stack_3->SetBinContent(5,2.89269);
   hdirt_stack_3->SetBinContent(6,2.935865);
   hdirt_stack_3->SetBinContent(7,1.30666);
   hdirt_stack_3->SetBinContent(8,2.524927);
   hdirt_stack_3->SetBinContent(9,2.259788);
   hdirt_stack_3->SetBinContent(10,1.033342);
   hdirt_stack_3->SetBinContent(11,2.387901);
   hdirt_stack_3->SetBinContent(12,1.742712);
   hdirt_stack_3->SetBinContent(13,1.81793);
   hdirt_stack_3->SetBinContent(14,1.642807);
   hdirt_stack_3->SetBinContent(15,1.803676);
   hdirt_stack_3->SetBinContent(16,3.413063);
   hdirt_stack_3->SetBinContent(17,2.285565);
   hdirt_stack_3->SetBinContent(18,4.440327);
   hdirt_stack_3->SetBinContent(19,1.866725);
   hdirt_stack_3->SetBinContent(20,4.574878);
   hdirt_stack_3->SetBinContent(21,2.02847);
   hdirt_stack_3->SetBinContent(22,2.188898);
   hdirt_stack_3->SetBinContent(23,3.022321);
   hdirt_stack_3->SetBinContent(24,2.355321);
   hdirt_stack_3->SetBinContent(25,0.9413491);
   hdirt_stack_3->SetBinError(1,0.4823016);
   hdirt_stack_3->SetBinError(2,0.8950106);
   hdirt_stack_3->SetBinError(3,0.9356247);
   hdirt_stack_3->SetBinError(4,0.4258516);
   hdirt_stack_3->SetBinError(5,0.9247856);
   hdirt_stack_3->SetBinError(6,0.8978517);
   hdirt_stack_3->SetBinError(7,0.503779);
   hdirt_stack_3->SetBinError(8,0.8178288);
   hdirt_stack_3->SetBinError(9,0.8398192);
   hdirt_stack_3->SetBinError(10,0.5438016);
   hdirt_stack_3->SetBinError(11,1.22345);
   hdirt_stack_3->SetBinError(12,0.6768128);
   hdirt_stack_3->SetBinError(13,0.594341);
   hdirt_stack_3->SetBinError(14,0.6530351);
   hdirt_stack_3->SetBinError(15,0.7650096);
   hdirt_stack_3->SetBinError(16,0.9440503);
   hdirt_stack_3->SetBinError(17,0.8494771);
   hdirt_stack_3->SetBinError(18,1.198195);
   hdirt_stack_3->SetBinError(19,0.6313329);
   hdirt_stack_3->SetBinError(20,1.39135);
   hdirt_stack_3->SetBinError(21,0.7090369);
   hdirt_stack_3->SetBinError(22,0.7036966);
   hdirt_stack_3->SetBinError(23,0.8858365);
   hdirt_stack_3->SetBinError(24,0.8843248);
   hdirt_stack_3->SetBinError(25,0.4273686);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,20.8414);
   houtFV_stack_4->SetBinContent(2,20.78424);
   houtFV_stack_4->SetBinContent(3,21.01791);
   houtFV_stack_4->SetBinContent(4,22.98094);
   houtFV_stack_4->SetBinContent(5,18.58424);
   houtFV_stack_4->SetBinContent(6,17.05278);
   houtFV_stack_4->SetBinContent(7,21.2462);
   houtFV_stack_4->SetBinContent(8,14.24772);
   houtFV_stack_4->SetBinContent(9,21.74765);
   houtFV_stack_4->SetBinContent(10,18.38292);
   houtFV_stack_4->SetBinContent(11,17.60479);
   houtFV_stack_4->SetBinContent(12,23.99844);
   houtFV_stack_4->SetBinContent(13,18.71611);
   houtFV_stack_4->SetBinContent(14,18.87943);
   houtFV_stack_4->SetBinContent(15,16.4937);
   houtFV_stack_4->SetBinContent(16,15.16096);
   houtFV_stack_4->SetBinContent(17,16.26905);
   houtFV_stack_4->SetBinContent(18,18.13021);
   houtFV_stack_4->SetBinContent(19,16.34111);
   houtFV_stack_4->SetBinContent(20,20.23452);
   houtFV_stack_4->SetBinContent(21,16.62326);
   houtFV_stack_4->SetBinContent(22,18.99789);
   houtFV_stack_4->SetBinContent(23,20.22826);
   houtFV_stack_4->SetBinContent(24,22.40907);
   houtFV_stack_4->SetBinContent(25,19.76958);
   houtFV_stack_4->SetBinError(1,2.307168);
   houtFV_stack_4->SetBinError(2,2.20364);
   houtFV_stack_4->SetBinError(3,2.328491);
   houtFV_stack_4->SetBinError(4,2.45002);
   houtFV_stack_4->SetBinError(5,2.215862);
   houtFV_stack_4->SetBinError(6,2.05937);
   houtFV_stack_4->SetBinError(7,2.355996);
   houtFV_stack_4->SetBinError(8,1.881445);
   houtFV_stack_4->SetBinError(9,2.524142);
   houtFV_stack_4->SetBinError(10,2.149042);
   houtFV_stack_4->SetBinError(11,2.091931);
   houtFV_stack_4->SetBinError(12,2.397268);
   houtFV_stack_4->SetBinError(13,2.132237);
   houtFV_stack_4->SetBinError(14,2.166853);
   houtFV_stack_4->SetBinError(15,2.087939);
   houtFV_stack_4->SetBinError(16,1.94984);
   houtFV_stack_4->SetBinError(17,1.956952);
   houtFV_stack_4->SetBinError(18,2.125276);
   houtFV_stack_4->SetBinError(19,2.055559);
   houtFV_stack_4->SetBinError(20,2.569721);
   houtFV_stack_4->SetBinError(21,2.026424);
   houtFV_stack_4->SetBinError(22,2.14985);
   houtFV_stack_4->SetBinError(23,2.2646);
   houtFV_stack_4->SetBinError(24,2.350225);
   houtFV_stack_4->SetBinError(25,2.240009);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.464705);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.407085);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.9277);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.169527);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.85575);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.065131);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.58753);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.385515);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.839401);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.282658);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.286688);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,5.139524);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.991118);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.236137);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.76576);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.977582);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.218182);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.197257);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.219599);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.080323);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.758423);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.567114);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.96114);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.027736);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.630251);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6898331);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8562184);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6700718);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.145226);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6905654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7545523);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7106632);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6829291);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6398819);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9439048);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.850264);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.011344);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7800401);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7150777);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6773152);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7964147);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7547608);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7037489);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9083739);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.023878);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6432961);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7266091);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6093683);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7035804);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.6394283);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1711091);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5032964);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2853503);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1965047);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5950907);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3927424);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.330051);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05203149);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.09155124);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1842016);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4136351);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5189091);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2891958);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2952554);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1477056);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5085277);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2258139);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1451252);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3194282);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5705454);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08526886);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05460471);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3040092);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2642536);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1173373);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07259747);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2919268);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.125306);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06731433);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3018459);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1906296);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.226553);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02642348);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05283029);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.07132867);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1895046);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2053051);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1497083);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1630312);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07459424);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.238146);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1457933);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1011985);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1486445);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2954396);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.0461028);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04110904);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1321795);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1025492);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05776126);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,47.54545);
   hNCpi0inFVres_stack_7->SetBinContent(2,46.1799);
   hNCpi0inFVres_stack_7->SetBinContent(3,51.24873);
   hNCpi0inFVres_stack_7->SetBinContent(4,46.25584);
   hNCpi0inFVres_stack_7->SetBinContent(5,46.40321);
   hNCpi0inFVres_stack_7->SetBinContent(6,43.10209);
   hNCpi0inFVres_stack_7->SetBinContent(7,41.60603);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.54792);
   hNCpi0inFVres_stack_7->SetBinContent(9,40.94998);
   hNCpi0inFVres_stack_7->SetBinContent(10,46.88203);
   hNCpi0inFVres_stack_7->SetBinContent(11,44.85353);
   hNCpi0inFVres_stack_7->SetBinContent(12,45.5844);
   hNCpi0inFVres_stack_7->SetBinContent(13,41.92318);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.95915);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.12254);
   hNCpi0inFVres_stack_7->SetBinContent(16,48.64158);
   hNCpi0inFVres_stack_7->SetBinContent(17,47.23081);
   hNCpi0inFVres_stack_7->SetBinContent(18,42.42862);
   hNCpi0inFVres_stack_7->SetBinContent(19,44.30952);
   hNCpi0inFVres_stack_7->SetBinContent(20,44.30578);
   hNCpi0inFVres_stack_7->SetBinContent(21,47.2253);
   hNCpi0inFVres_stack_7->SetBinContent(22,48.9837);
   hNCpi0inFVres_stack_7->SetBinContent(23,51.31779);
   hNCpi0inFVres_stack_7->SetBinContent(24,53.65569);
   hNCpi0inFVres_stack_7->SetBinContent(25,46.23232);
   hNCpi0inFVres_stack_7->SetBinError(1,2.295188);
   hNCpi0inFVres_stack_7->SetBinError(2,2.260706);
   hNCpi0inFVres_stack_7->SetBinError(3,2.42025);
   hNCpi0inFVres_stack_7->SetBinError(4,2.285987);
   hNCpi0inFVres_stack_7->SetBinError(5,2.29861);
   hNCpi0inFVres_stack_7->SetBinError(6,2.176721);
   hNCpi0inFVres_stack_7->SetBinError(7,2.190377);
   hNCpi0inFVres_stack_7->SetBinError(8,2.233591);
   hNCpi0inFVres_stack_7->SetBinError(9,2.217319);
   hNCpi0inFVres_stack_7->SetBinError(10,2.441357);
   hNCpi0inFVres_stack_7->SetBinError(11,2.298065);
   hNCpi0inFVres_stack_7->SetBinError(12,2.263159);
   hNCpi0inFVres_stack_7->SetBinError(13,2.135017);
   hNCpi0inFVres_stack_7->SetBinError(14,2.362296);
   hNCpi0inFVres_stack_7->SetBinError(15,2.391869);
   hNCpi0inFVres_stack_7->SetBinError(16,2.43892);
   hNCpi0inFVres_stack_7->SetBinError(17,2.436298);
   hNCpi0inFVres_stack_7->SetBinError(18,2.231125);
   hNCpi0inFVres_stack_7->SetBinError(19,2.304263);
   hNCpi0inFVres_stack_7->SetBinError(20,2.226429);
   hNCpi0inFVres_stack_7->SetBinError(21,2.460461);
   hNCpi0inFVres_stack_7->SetBinError(22,2.403397);
   hNCpi0inFVres_stack_7->SetBinError(23,2.606212);
   hNCpi0inFVres_stack_7->SetBinError(24,2.648291);
   hNCpi0inFVres_stack_7->SetBinError(25,2.328713);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.18045);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.34074);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.17024);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.675273);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.838212);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.617922);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.333031);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.678269);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.56374);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.531717);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.09684);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.581818);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.738442);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.77789);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.037395);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.723362);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.40303);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.649952);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.041033);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.507622);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.985365);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.5193);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.29314);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.34107);
   hNCpi0inFVdis_stack_8->SetBinContent(25,10.20392);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.081847);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.358685);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.012223);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.083176);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9145103);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9281845);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9846673);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.005014);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.137468);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.027598);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.271585);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9445054);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.040807);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.09061);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.030068);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.105699);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.140928);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9407729);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.181695);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.014273);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.097367);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.228771);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.020982);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.050313);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.288916);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02337297);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,26.21492);
   hCCpi0inFV_stack_10->SetBinContent(2,25.53391);
   hCCpi0inFV_stack_10->SetBinContent(3,26.63485);
   hCCpi0inFV_stack_10->SetBinContent(4,24.32427);
   hCCpi0inFV_stack_10->SetBinContent(5,23.65575);
   hCCpi0inFV_stack_10->SetBinContent(6,19.59008);
   hCCpi0inFV_stack_10->SetBinContent(7,22.30761);
   hCCpi0inFV_stack_10->SetBinContent(8,20.19531);
   hCCpi0inFV_stack_10->SetBinContent(9,23.51628);
   hCCpi0inFV_stack_10->SetBinContent(10,20.2389);
   hCCpi0inFV_stack_10->SetBinContent(11,22.29953);
   hCCpi0inFV_stack_10->SetBinContent(12,22.308);
   hCCpi0inFV_stack_10->SetBinContent(13,25.61444);
   hCCpi0inFV_stack_10->SetBinContent(14,23.10351);
   hCCpi0inFV_stack_10->SetBinContent(15,22.28659);
   hCCpi0inFV_stack_10->SetBinContent(16,19.71906);
   hCCpi0inFV_stack_10->SetBinContent(17,19.45312);
   hCCpi0inFV_stack_10->SetBinContent(18,23.3884);
   hCCpi0inFV_stack_10->SetBinContent(19,21.70889);
   hCCpi0inFV_stack_10->SetBinContent(20,22.07262);
   hCCpi0inFV_stack_10->SetBinContent(21,26.80461);
   hCCpi0inFV_stack_10->SetBinContent(22,27.17683);
   hCCpi0inFV_stack_10->SetBinContent(23,22.48222);
   hCCpi0inFV_stack_10->SetBinContent(24,26.24345);
   hCCpi0inFV_stack_10->SetBinContent(25,22.25168);
   hCCpi0inFV_stack_10->SetBinError(1,2.603559);
   hCCpi0inFV_stack_10->SetBinError(2,2.4521);
   hCCpi0inFV_stack_10->SetBinError(3,2.598624);
   hCCpi0inFV_stack_10->SetBinError(4,2.45804);
   hCCpi0inFV_stack_10->SetBinError(5,2.411463);
   hCCpi0inFV_stack_10->SetBinError(6,2.198087);
   hCCpi0inFV_stack_10->SetBinError(7,2.357156);
   hCCpi0inFV_stack_10->SetBinError(8,2.244217);
   hCCpi0inFV_stack_10->SetBinError(9,2.449625);
   hCCpi0inFV_stack_10->SetBinError(10,2.304655);
   hCCpi0inFV_stack_10->SetBinError(11,2.344813);
   hCCpi0inFV_stack_10->SetBinError(12,2.324719);
   hCCpi0inFV_stack_10->SetBinError(13,2.530177);
   hCCpi0inFV_stack_10->SetBinError(14,2.390721);
   hCCpi0inFV_stack_10->SetBinError(15,2.312781);
   hCCpi0inFV_stack_10->SetBinError(16,2.227663);
   hCCpi0inFV_stack_10->SetBinError(17,2.212341);
   hCCpi0inFV_stack_10->SetBinError(18,2.490934);
   hCCpi0inFV_stack_10->SetBinError(19,2.331551);
   hCCpi0inFV_stack_10->SetBinError(20,2.388298);
   hCCpi0inFV_stack_10->SetBinError(21,2.666436);
   hCCpi0inFV_stack_10->SetBinError(22,2.638148);
   hCCpi0inFV_stack_10->SetBinError(23,2.363392);
   hCCpi0inFV_stack_10->SetBinError(24,2.598303);
   hCCpi0inFV_stack_10->SetBinError(25,2.337703);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,9.433189);
   hNCinFV_stack_11->SetBinContent(2,10.00002);
   hNCinFV_stack_11->SetBinContent(3,12.72818);
   hNCinFV_stack_11->SetBinContent(4,9.068966);
   hNCinFV_stack_11->SetBinContent(5,11.06236);
   hNCinFV_stack_11->SetBinContent(6,8.661263);
   hNCinFV_stack_11->SetBinContent(7,8.230845);
   hNCinFV_stack_11->SetBinContent(8,7.376102);
   hNCinFV_stack_11->SetBinContent(9,10.56904);
   hNCinFV_stack_11->SetBinContent(10,9.248983);
   hNCinFV_stack_11->SetBinContent(11,6.89928);
   hNCinFV_stack_11->SetBinContent(12,8.928545);
   hNCinFV_stack_11->SetBinContent(13,11.28176);
   hNCinFV_stack_11->SetBinContent(14,7.92719);
   hNCinFV_stack_11->SetBinContent(15,9.95677);
   hNCinFV_stack_11->SetBinContent(16,10.22945);
   hNCinFV_stack_11->SetBinContent(17,9.826399);
   hNCinFV_stack_11->SetBinContent(18,6.828508);
   hNCinFV_stack_11->SetBinContent(19,8.766972);
   hNCinFV_stack_11->SetBinContent(20,9.715479);
   hNCinFV_stack_11->SetBinContent(21,7.364137);
   hNCinFV_stack_11->SetBinContent(22,7.600425);
   hNCinFV_stack_11->SetBinContent(23,10.7341);
   hNCinFV_stack_11->SetBinContent(24,10.30682);
   hNCinFV_stack_11->SetBinContent(25,9.081006);
   hNCinFV_stack_11->SetBinError(1,1.485689);
   hNCinFV_stack_11->SetBinError(2,1.638198);
   hNCinFV_stack_11->SetBinError(3,2.062138);
   hNCinFV_stack_11->SetBinError(4,1.48058);
   hNCinFV_stack_11->SetBinError(5,1.856506);
   hNCinFV_stack_11->SetBinError(6,1.476394);
   hNCinFV_stack_11->SetBinError(7,1.441457);
   hNCinFV_stack_11->SetBinError(8,1.316225);
   hNCinFV_stack_11->SetBinError(9,1.8752);
   hNCinFV_stack_11->SetBinError(10,1.739262);
   hNCinFV_stack_11->SetBinError(11,1.277164);
   hNCinFV_stack_11->SetBinError(12,1.506605);
   hNCinFV_stack_11->SetBinError(13,1.716476);
   hNCinFV_stack_11->SetBinError(14,1.537422);
   hNCinFV_stack_11->SetBinError(15,1.564477);
   hNCinFV_stack_11->SetBinError(16,1.696436);
   hNCinFV_stack_11->SetBinError(17,1.908324);
   hNCinFV_stack_11->SetBinError(18,1.343159);
   hNCinFV_stack_11->SetBinError(19,1.536998);
   hNCinFV_stack_11->SetBinError(20,1.679653);
   hNCinFV_stack_11->SetBinError(21,1.501565);
   hNCinFV_stack_11->SetBinError(22,1.517602);
   hNCinFV_stack_11->SetBinError(23,1.791327);
   hNCinFV_stack_11->SetBinError(24,1.74654);
   hNCinFV_stack_11->SetBinError(25,1.453544);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,11.37717);
   hnumuCCinFV_stack_12->SetBinContent(2,13.71275);
   hnumuCCinFV_stack_12->SetBinContent(3,14.11045);
   hnumuCCinFV_stack_12->SetBinContent(4,6.496219);
   hnumuCCinFV_stack_12->SetBinContent(5,6.858396);
   hnumuCCinFV_stack_12->SetBinContent(6,8.428623);
   hnumuCCinFV_stack_12->SetBinContent(7,7.824841);
   hnumuCCinFV_stack_12->SetBinContent(8,12.09527);
   hnumuCCinFV_stack_12->SetBinContent(9,9.420633);
   hnumuCCinFV_stack_12->SetBinContent(10,9.017488);
   hnumuCCinFV_stack_12->SetBinContent(11,9.377722);
   hnumuCCinFV_stack_12->SetBinContent(12,10.36105);
   hnumuCCinFV_stack_12->SetBinContent(13,14.76196);
   hnumuCCinFV_stack_12->SetBinContent(14,10.96035);
   hnumuCCinFV_stack_12->SetBinContent(15,17.72744);
   hnumuCCinFV_stack_12->SetBinContent(16,10.47985);
   hnumuCCinFV_stack_12->SetBinContent(17,7.802448);
   hnumuCCinFV_stack_12->SetBinContent(18,7.786345);
   hnumuCCinFV_stack_12->SetBinContent(19,8.916519);
   hnumuCCinFV_stack_12->SetBinContent(20,9.130057);
   hnumuCCinFV_stack_12->SetBinContent(21,7.407375);
   hnumuCCinFV_stack_12->SetBinContent(22,8.753983);
   hnumuCCinFV_stack_12->SetBinContent(23,10.02424);
   hnumuCCinFV_stack_12->SetBinContent(24,17.63012);
   hnumuCCinFV_stack_12->SetBinContent(25,16.59469);
   hnumuCCinFV_stack_12->SetBinError(1,2.000198);
   hnumuCCinFV_stack_12->SetBinError(2,2.091051);
   hnumuCCinFV_stack_12->SetBinError(3,1.945434);
   hnumuCCinFV_stack_12->SetBinError(4,1.239536);
   hnumuCCinFV_stack_12->SetBinError(5,1.363853);
   hnumuCCinFV_stack_12->SetBinError(6,1.678971);
   hnumuCCinFV_stack_12->SetBinError(7,1.780504);
   hnumuCCinFV_stack_12->SetBinError(8,2.528012);
   hnumuCCinFV_stack_12->SetBinError(9,1.802005);
   hnumuCCinFV_stack_12->SetBinError(10,1.544903);
   hnumuCCinFV_stack_12->SetBinError(11,1.594304);
   hnumuCCinFV_stack_12->SetBinError(12,1.757737);
   hnumuCCinFV_stack_12->SetBinError(13,2.461237);
   hnumuCCinFV_stack_12->SetBinError(14,1.720211);
   hnumuCCinFV_stack_12->SetBinError(15,3.373768);
   hnumuCCinFV_stack_12->SetBinError(16,1.592617);
   hnumuCCinFV_stack_12->SetBinError(17,1.407937);
   hnumuCCinFV_stack_12->SetBinError(18,1.41844);
   hnumuCCinFV_stack_12->SetBinError(19,1.711569);
   hnumuCCinFV_stack_12->SetBinError(20,1.789482);
   hnumuCCinFV_stack_12->SetBinError(21,1.368863);
   hnumuCCinFV_stack_12->SetBinError(22,1.891372);
   hnumuCCinFV_stack_12->SetBinError(23,1.618905);
   hnumuCCinFV_stack_12->SetBinError(24,2.512947);
   hnumuCCinFV_stack_12->SetBinError(25,2.079555);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.21975);
   hnueCCinFV_stack_13->SetBinContent(2,3.387337);
   hnueCCinFV_stack_13->SetBinContent(3,2.157275);
   hnueCCinFV_stack_13->SetBinContent(4,0.7280008);
   hnueCCinFV_stack_13->SetBinContent(5,0.636196);
   hnueCCinFV_stack_13->SetBinContent(6,0.6129823);
   hnueCCinFV_stack_13->SetBinContent(7,1.235395);
   hnueCCinFV_stack_13->SetBinContent(8,0.4256802);
   hnueCCinFV_stack_13->SetBinContent(9,1.395129);
   hnueCCinFV_stack_13->SetBinContent(10,1.787485);
   hnueCCinFV_stack_13->SetBinContent(11,0.6211463);
   hnueCCinFV_stack_13->SetBinContent(12,1.859515);
   hnueCCinFV_stack_13->SetBinContent(13,0.5924517);
   hnueCCinFV_stack_13->SetBinContent(14,1.908632);
   hnueCCinFV_stack_13->SetBinContent(15,2.076233);
   hnueCCinFV_stack_13->SetBinContent(16,0.7279223);
   hnueCCinFV_stack_13->SetBinContent(17,0.9670416);
   hnueCCinFV_stack_13->SetBinContent(18,1.368507);
   hnueCCinFV_stack_13->SetBinContent(19,2.145756);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,2.36175);
   hnueCCinFV_stack_13->SetBinContent(22,1.046802);
   hnueCCinFV_stack_13->SetBinContent(23,0.89349);
   hnueCCinFV_stack_13->SetBinContent(24,1.147058);
   hnueCCinFV_stack_13->SetBinContent(25,1.331603);
   hnueCCinFV_stack_13->SetBinError(1,0.5542831);
   hnueCCinFV_stack_13->SetBinError(2,1.699132);
   hnueCCinFV_stack_13->SetBinError(3,0.820446);
   hnueCCinFV_stack_13->SetBinError(4,0.4241217);
   hnueCCinFV_stack_13->SetBinError(5,0.4678902);
   hnueCCinFV_stack_13->SetBinError(6,0.4402819);
   hnueCCinFV_stack_13->SetBinError(7,0.6670118);
   hnueCCinFV_stack_13->SetBinError(8,0.3018639);
   hnueCCinFV_stack_13->SetBinError(9,0.6384734);
   hnueCCinFV_stack_13->SetBinError(10,1.032442);
   hnueCCinFV_stack_13->SetBinError(11,0.4678018);
   hnueCCinFV_stack_13->SetBinError(12,0.6232039);
   hnueCCinFV_stack_13->SetBinError(13,0.3397713);
   hnueCCinFV_stack_13->SetBinError(14,0.8591947);
   hnueCCinFV_stack_13->SetBinError(15,0.8416002);
   hnueCCinFV_stack_13->SetBinError(16,0.4273535);
   hnueCCinFV_stack_13->SetBinError(17,0.4857096);
   hnueCCinFV_stack_13->SetBinError(18,0.6286613);
   hnueCCinFV_stack_13->SetBinError(19,1.377119);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,1.245659);
   hnueCCinFV_stack_13->SetBinError(22,0.587526);
   hnueCCinFV_stack_13->SetBinError(23,0.5311548);
   hnueCCinFV_stack_13->SetBinError(24,0.6969692);
   hnueCCinFV_stack_13->SetBinError(25,0.8171275);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__11->SetBinContent(1,150.0282);
   hmcerror__11->SetBinContent(2,155.5469);
   hmcerror__11->SetBinContent(3,165.3729);
   hmcerror__11->SetBinContent(4,145.9744);
   hmcerror__11->SetBinContent(5,145.9717);
   hmcerror__11->SetBinContent(6,145.4219);
   hmcerror__11->SetBinContent(7,145.5528);
   hmcerror__11->SetBinContent(8,131.3807);
   hmcerror__11->SetBinContent(9,142.2027);
   hmcerror__11->SetBinContent(10,139.9201);
   hmcerror__11->SetBinContent(11,139.3341);
   hmcerror__11->SetBinContent(12,147.0253);
   hmcerror__11->SetBinContent(13,142.0753);
   hmcerror__11->SetBinContent(14,141.3124);
   hmcerror__11->SetBinContent(15,154.1059);
   hmcerror__11->SetBinContent(16,148.282);
   hmcerror__11->SetBinContent(17,151.9407);
   hmcerror__11->SetBinContent(18,145.3735);
   hmcerror__11->SetBinContent(19,156.8398);
   hmcerror__11->SetBinContent(20,150.6528);
   hmcerror__11->SetBinContent(21,160.2286);
   hmcerror__11->SetBinContent(22,150.6981);
   hmcerror__11->SetBinContent(23,164.0143);
   hmcerror__11->SetBinContent(24,165.1166);
   hmcerror__11->SetBinContent(25,145.0891);
   hmcerror__11->SetBinError(1,39.41004);
   hmcerror__11->SetBinError(2,44.95368);
   hmcerror__11->SetBinError(3,43.96934);
   hmcerror__11->SetBinError(4,36.81719);
   hmcerror__11->SetBinError(5,36.80202);
   hmcerror__11->SetBinError(6,37.38484);
   hmcerror__11->SetBinError(7,37.01877);
   hmcerror__11->SetBinError(8,34.4031);
   hmcerror__11->SetBinError(9,41.76674);
   hmcerror__11->SetBinError(10,37.49285);
   hmcerror__11->SetBinError(11,53.15569);
   hmcerror__11->SetBinError(12,42.4812);
   hmcerror__11->SetBinError(13,38.69399);
   hmcerror__11->SetBinError(14,42.21872);
   hmcerror__11->SetBinError(15,37.51092);
   hmcerror__11->SetBinError(16,39.99549);
   hmcerror__11->SetBinError(17,36.61128);
   hmcerror__11->SetBinError(18,36.76051);
   hmcerror__11->SetBinError(19,35.21686);
   hmcerror__11->SetBinError(20,37.32467);
   hmcerror__11->SetBinError(21,41.98541);
   hmcerror__11->SetBinError(22,40.61879);
   hmcerror__11->SetBinError(23,44.37814);
   hmcerror__11->SetBinError(24,42.48676);
   hmcerror__11->SetBinError(25,47.05594);
   hmcerror__11->SetBinError(26,0.3895343);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3013[25] = {
   152,
   177,
   143,
   176,
   178,
   160,
   141,
   137,
   124,
   149,
   144,
   140,
   131,
   149,
   155,
   176,
   141,
   161,
   142,
   149,
   167,
   171,
   159,
   157,
   144};
   Double_t _felx3013[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3013[25] = {
   12.32883,
   13.30413,
   11.95826,
   13.2665,
   13.34166,
   12.64911,
   11.87434,
   11.7047,
   11.13553,
   12.20656,
   12,
   11.83216,
   11.44552,
   12.20656,
   12.4499,
   13.2665,
   11.87434,
   12.68858,
   11.91638,
   12.20656,
   12.92285,
   13.0767,
   12.60952,
   12.52996,
   12};
   Double_t _fehx3013[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3013[25] = {
   12.32883,
   13.30413,
   11.95826,
   13.2665,
   13.34166,
   12.64911,
   11.87434,
   11.7047,
   11.13553,
   12.20656,
   12,
   11.83216,
   11.44552,
   12.20656,
   12.4499,
   13.2665,
   11.87434,
   12.68858,
   11.91638,
   12.20656,
   12.92285,
   13.0767,
   12.60952,
   12.52996,
   12};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(105.0168);
   Graph_Graph3013->SetMaximum(199.1894);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.6","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.7","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.5","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.8","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.8","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3014[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3014[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3014[25] = {
   0.2626843,
   0.289004,
   0.26588,
   0.2522168,
   0.2521176,
   0.2570784,
   0.2543322,
   0.2618582,
   0.2937128,
   0.2679589,
   0.3814981,
   0.2889379,
   0.2723485,
   0.2987616,
   0.24341,
   0.269726,
   0.2409577,
   0.2528695,
   0.2245403,
   0.2477529,
   0.2620343,
   0.2695375,
   0.2705748,
   0.2573136,
   0.3243244};
   Double_t _fehx3014[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3014[25] = {
   0.2626843,
   0.289004,
   0.26588,
   0.2522168,
   0.2521176,
   0.2570784,
   0.2543322,
   0.2618582,
   0.2937128,
   0.2679589,
   0.3814981,
   0.2889379,
   0.2723485,
   0.2987616,
   0.24341,
   0.269726,
   0.2409577,
   0.2528695,
   0.2245403,
   0.2477529,
   0.2620343,
   0.2695375,
   0.2705748,
   0.2573136,
   0.3243244};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-3.78,3.78);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3015[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3015[25] = {
   0.208042,
   0.2110037,
   0.2109216,
   0.2094011,
   0.2044438,
   0.1817044,
   0.1892814,
   0.2104463,
   0.2149267,
   0.2063962,
   0.2102535,
   0.215526,
   0.1980846,
   0.2060342,
   0.2046513,
   0.2028202,
   0.1905023,
   0.1966179,
   0.1860735,
   0.1910965,
   0.187867,
   0.2106864,
   0.1938933,
   0.1985881,
   0.2053196};
   Double_t _fehx3015[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3015[25] = {
   0.208042,
   0.2110037,
   0.2109216,
   0.2094011,
   0.2044438,
   0.1817044,
   0.1892814,
   0.2104463,
   0.2149267,
   0.2063962,
   0.2102535,
   0.215526,
   0.1980846,
   0.2060342,
   0.2046513,
   0.2028202,
   0.1905023,
   0.1966179,
   0.1860735,
   0.1910965,
   0.187867,
   0.2106864,
   0.1938933,
   0.1985881,
   0.2053196};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-3.78,3.78);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3016[25] = {
   1.013143,
   1.13792,
   0.8647126,
   1.205691,
   1.219415,
   1.100247,
   0.9687204,
   1.042771,
   0.871995,
   1.064893,
   1.033487,
   0.9522168,
   0.9220465,
   1.054401,
   1.005802,
   1.186928,
   0.9279937,
   1.107492,
   0.9053823,
   0.9890289,
   1.042261,
   1.134719,
   0.9694277,
   0.950843,
   0.9924936};
   Double_t _felx3016[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3016[25] = {
   0.08217676,
   0.08553134,
   0.0723109,
   0.09088237,
   0.091399,
   0.08698215,
   0.08158097,
   0.08908998,
   0.07830746,
   0.08723945,
   0.08612392,
   0.08047701,
   0.08055957,
   0.08637993,
   0.08078794,
   0.08946806,
   0.07815117,
   0.08728262,
   0.07597799,
   0.0810244,
   0.08065255,
   0.08677412,
   0.07688062,
   0.07588553,
   0.0827078};
   Double_t _fehx3016[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3016[25] = {
   0.08217676,
   0.08553134,
   0.0723109,
   0.09088237,
   0.091399,
   0.08698215,
   0.08158097,
   0.08908998,
   0.07830746,
   0.08723945,
   0.08612392,
   0.08047701,
   0.08055957,
   0.08637993,
   0.08078794,
   0.08946806,
   0.07815117,
   0.08728262,
   0.07597799,
   0.0810244,
   0.08065255,
   0.08677412,
   0.07688062,
   0.07588553,
   0.0827078};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.7405605);
   Graph_Graph3016->SetMaximum(1.362655);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_phi_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Mar 13 20:05:49 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-169.2308,-4.244685,1241.026,469.3728);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__10->SetBinContent(0,2.314102);
   hmc__10->SetBinContent(1,136.0496);
   hmc__10->SetBinContent(2,162.2255);
   hmc__10->SetBinContent(3,163.8483);
   hmc__10->SetBinContent(4,159.9984);
   hmc__10->SetBinContent(5,167.0482);
   hmc__10->SetBinContent(6,168.0176);
   hmc__10->SetBinContent(7,164.0477);
   hmc__10->SetBinContent(8,179.0133);
   hmc__10->SetBinContent(9,167.9214);
   hmc__10->SetBinContent(10,147.2211);
   hmc__10->SetBinContent(11,152.1823);
   hmc__10->SetBinContent(12,151.5425);
   hmc__10->SetBinContent(13,158.1999);
   hmc__10->SetBinContent(14,171.2563);
   hmc__10->SetBinContent(15,173.4972);
   hmc__10->SetBinContent(16,155.697);
   hmc__10->SetBinContent(17,154.515);
   hmc__10->SetBinContent(18,151.7412);
   hmc__10->SetBinContent(19,155.4348);
   hmc__10->SetBinContent(20,165.9881);
   hmc__10->SetBinContent(21,212.2343);
   hmc__10->SetBinContent(22,158.1572);
   hmc__10->SetBinContent(23,152.5237);
   hmc__10->SetBinContent(24,164.139);
   hmc__10->SetBinContent(25,156.6269);
   hmc__10->SetBinContent(26,164.1752);
   hmc__10->SetBinContent(27,164.861);
   hmc__10->SetBinContent(28,163.0053);
   hmc__10->SetBinContent(29,161.2347);
   hmc__10->SetBinContent(30,129.562);
   hmc__10->SetBinContent(31,2.984515);
   hmc__10->SetBinError(0,0.6888018);
   hmc__10->SetBinError(1,35.49362);
   hmc__10->SetBinError(2,41.33565);
   hmc__10->SetBinError(3,40.77547);
   hmc__10->SetBinError(4,36.3269);
   hmc__10->SetBinError(5,42.53603);
   hmc__10->SetBinError(6,42.88315);
   hmc__10->SetBinError(7,39.23481);
   hmc__10->SetBinError(8,51.1054);
   hmc__10->SetBinError(9,42.32212);
   hmc__10->SetBinError(10,33.72481);
   hmc__10->SetBinError(11,35.8698);
   hmc__10->SetBinError(12,35.55269);
   hmc__10->SetBinError(13,36.45041);
   hmc__10->SetBinError(14,40.25346);
   hmc__10->SetBinError(15,51.20513);
   hmc__10->SetBinError(16,43.30725);
   hmc__10->SetBinError(17,36.98662);
   hmc__10->SetBinError(18,37.61522);
   hmc__10->SetBinError(19,35.39999);
   hmc__10->SetBinError(20,39.26243);
   hmc__10->SetBinError(21,49.38582);
   hmc__10->SetBinError(22,39.38862);
   hmc__10->SetBinError(23,36.33869);
   hmc__10->SetBinError(24,42.09257);
   hmc__10->SetBinError(25,38.58138);
   hmc__10->SetBinError(26,48.99152);
   hmc__10->SetBinError(27,38.32944);
   hmc__10->SetBinError(28,38.2551);
   hmc__10->SetBinError(29,42.78088);
   hmc__10->SetBinError(30,33.7859);
   hmc__10->SetBinError(31,5.075947);
   hmc__10->SetBinError(32,0.3895343);
   hmc__10->SetBinError(33,0.3895343);
   hmc__10->SetMinimum(-4.244685);
   hmc__10->SetMaximum(445.692);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",32,0,1100);
   hs4_stack_4->SetMinimum(-5.219833e-10);
   hs4_stack_4->SetMaximum(222.846);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,4.00015);
   hbadmatch_stack_1->SetBinContent(2,4.522726);
   hbadmatch_stack_1->SetBinContent(3,3.680855);
   hbadmatch_stack_1->SetBinContent(4,5.982289);
   hbadmatch_stack_1->SetBinContent(5,5.27759);
   hbadmatch_stack_1->SetBinContent(6,5.978111);
   hbadmatch_stack_1->SetBinContent(7,3.433096);
   hbadmatch_stack_1->SetBinContent(8,4.483699);
   hbadmatch_stack_1->SetBinContent(9,3.692049);
   hbadmatch_stack_1->SetBinContent(10,2.90484);
   hbadmatch_stack_1->SetBinContent(11,2.916175);
   hbadmatch_stack_1->SetBinContent(12,4.657986);
   hbadmatch_stack_1->SetBinContent(13,2.247316);
   hbadmatch_stack_1->SetBinContent(14,6.673913);
   hbadmatch_stack_1->SetBinContent(15,3.869333);
   hbadmatch_stack_1->SetBinContent(16,3.981776);
   hbadmatch_stack_1->SetBinContent(17,2.594256);
   hbadmatch_stack_1->SetBinContent(18,2.194063);
   hbadmatch_stack_1->SetBinContent(19,2.367895);
   hbadmatch_stack_1->SetBinContent(20,4.491763);
   hbadmatch_stack_1->SetBinContent(21,8.565868);
   hbadmatch_stack_1->SetBinContent(22,4.877964);
   hbadmatch_stack_1->SetBinContent(23,2.503409);
   hbadmatch_stack_1->SetBinContent(24,4.974678);
   hbadmatch_stack_1->SetBinContent(25,3.297044);
   hbadmatch_stack_1->SetBinContent(26,2.726867);
   hbadmatch_stack_1->SetBinContent(27,4.783108);
   hbadmatch_stack_1->SetBinContent(28,2.569948);
   hbadmatch_stack_1->SetBinContent(29,3.814961);
   hbadmatch_stack_1->SetBinContent(30,4.358191);
   hbadmatch_stack_1->SetBinError(1,0.9696097);
   hbadmatch_stack_1->SetBinError(2,1.10113);
   hbadmatch_stack_1->SetBinError(3,1.029083);
   hbadmatch_stack_1->SetBinError(4,1.295022);
   hbadmatch_stack_1->SetBinError(5,1.306098);
   hbadmatch_stack_1->SetBinError(6,1.445588);
   hbadmatch_stack_1->SetBinError(7,0.9473137);
   hbadmatch_stack_1->SetBinError(8,1.455001);
   hbadmatch_stack_1->SetBinError(9,1.030868);
   hbadmatch_stack_1->SetBinError(10,0.9137687);
   hbadmatch_stack_1->SetBinError(11,0.8298664);
   hbadmatch_stack_1->SetBinError(12,2.148786);
   hbadmatch_stack_1->SetBinError(13,0.7337357);
   hbadmatch_stack_1->SetBinError(14,1.972334);
   hbadmatch_stack_1->SetBinError(15,1.017216);
   hbadmatch_stack_1->SetBinError(16,1.034348);
   hbadmatch_stack_1->SetBinError(17,0.8103937);
   hbadmatch_stack_1->SetBinError(18,0.7594044);
   hbadmatch_stack_1->SetBinError(19,0.7871765);
   hbadmatch_stack_1->SetBinError(20,1.130758);
   hbadmatch_stack_1->SetBinError(21,1.61975);
   hbadmatch_stack_1->SetBinError(22,1.09824);
   hbadmatch_stack_1->SetBinError(23,0.8302422);
   hbadmatch_stack_1->SetBinError(24,1.245672);
   hbadmatch_stack_1->SetBinError(25,0.9700458);
   hbadmatch_stack_1->SetBinError(26,0.7692112);
   hbadmatch_stack_1->SetBinError(27,1.908184);
   hbadmatch_stack_1->SetBinError(28,0.9130115);
   hbadmatch_stack_1->SetBinError(29,1.068664);
   hbadmatch_stack_1->SetBinError(30,1.166279);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,12.2294);
   hext_stack_2->SetBinContent(2,15.61624);
   hext_stack_2->SetBinContent(3,17.9102);
   hext_stack_2->SetBinContent(4,17.25699);
   hext_stack_2->SetBinContent(5,16.91383);
   hext_stack_2->SetBinContent(6,18.29803);
   hext_stack_2->SetBinContent(7,17.79927);
   hext_stack_2->SetBinContent(8,22.34525);
   hext_stack_2->SetBinContent(9,15.50814);
   hext_stack_2->SetBinContent(10,14.11676);
   hext_stack_2->SetBinContent(11,20.17821);
   hext_stack_2->SetBinContent(12,13.29916);
   hext_stack_2->SetBinContent(13,15.88438);
   hext_stack_2->SetBinContent(14,19.7975);
   hext_stack_2->SetBinContent(15,12.89256);
   hext_stack_2->SetBinContent(16,16.37596);
   hext_stack_2->SetBinContent(17,10.77182);
   hext_stack_2->SetBinContent(18,13.778);
   hext_stack_2->SetBinContent(19,18.22301);
   hext_stack_2->SetBinContent(20,18.88339);
   hext_stack_2->SetBinContent(21,39.6326);
   hext_stack_2->SetBinContent(22,15.22841);
   hext_stack_2->SetBinContent(23,13.6136);
   hext_stack_2->SetBinContent(24,15.6306);
   hext_stack_2->SetBinContent(25,11.99439);
   hext_stack_2->SetBinContent(26,12.05064);
   hext_stack_2->SetBinContent(27,15.33656);
   hext_stack_2->SetBinContent(28,13.84144);
   hext_stack_2->SetBinContent(29,9.164192);
   hext_stack_2->SetBinContent(30,8.503808);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinError(1,2.269132);
   hext_stack_2->SetBinError(2,2.631555);
   hext_stack_2->SetBinError(3,2.744004);
   hext_stack_2->SetBinError(4,2.680293);
   hext_stack_2->SetBinError(5,2.710353);
   hext_stack_2->SetBinError(6,2.82173);
   hext_stack_2->SetBinError(7,2.876504);
   hext_stack_2->SetBinError(8,3.143671);
   hext_stack_2->SetBinError(9,2.450115);
   hext_stack_2->SetBinError(10,2.36392);
   hext_stack_2->SetBinError(11,2.933005);
   hext_stack_2->SetBinError(12,2.263261);
   hext_stack_2->SetBinError(13,2.549852);
   hext_stack_2->SetBinError(14,3.049447);
   hext_stack_2->SetBinError(15,2.226438);
   hext_stack_2->SetBinError(16,2.528009);
   hext_stack_2->SetBinError(17,2.177837);
   hext_stack_2->SetBinError(18,2.425961);
   hext_stack_2->SetBinError(19,2.775044);
   hext_stack_2->SetBinError(20,2.800939);
   hext_stack_2->SetBinError(21,4.090633);
   hext_stack_2->SetBinError(22,2.548034);
   hext_stack_2->SetBinError(23,2.401064);
   hext_stack_2->SetBinError(24,2.553953);
   hext_stack_2->SetBinError(25,2.214185);
   hext_stack_2->SetBinError(26,2.330491);
   hext_stack_2->SetBinError(27,2.466594);
   hext_stack_2->SetBinError(28,2.49252);
   hext_stack_2->SetBinError(29,1.953049);
   hext_stack_2->SetBinError(30,1.915728);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,8.280877);
   hdirt_stack_3->SetBinContent(2,6.05631);
   hdirt_stack_3->SetBinContent(3,5.819782);
   hdirt_stack_3->SetBinContent(4,1.525042);
   hdirt_stack_3->SetBinContent(5,1.982927);
   hdirt_stack_3->SetBinContent(6,2.508214);
   hdirt_stack_3->SetBinContent(7,2.191319);
   hdirt_stack_3->SetBinContent(8,3.077312);
   hdirt_stack_3->SetBinContent(9,2.565611);
   hdirt_stack_3->SetBinContent(10,2.486315);
   hdirt_stack_3->SetBinContent(11,1.727094);
   hdirt_stack_3->SetBinContent(12,1.493965);
   hdirt_stack_3->SetBinContent(13,2.146071);
   hdirt_stack_3->SetBinContent(14,0.7151096);
   hdirt_stack_3->SetBinContent(15,1.515501);
   hdirt_stack_3->SetBinContent(16,2.188922);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,1.156151);
   hdirt_stack_3->SetBinContent(19,0.982376);
   hdirt_stack_3->SetBinContent(20,1.356197);
   hdirt_stack_3->SetBinContent(21,2.770795);
   hdirt_stack_3->SetBinContent(22,1.349713);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.5132258);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,2.678592);
   hdirt_stack_3->SetBinContent(27,1.190193);
   hdirt_stack_3->SetBinContent(28,1.34295);
   hdirt_stack_3->SetBinContent(29,1.171413);
   hdirt_stack_3->SetBinContent(30,0.5758626);
   hdirt_stack_3->SetBinError(1,1.50871);
   hdirt_stack_3->SetBinError(2,1.273644);
   hdirt_stack_3->SetBinError(3,1.448718);
   hdirt_stack_3->SetBinError(4,0.5579614);
   hdirt_stack_3->SetBinError(5,0.7744395);
   hdirt_stack_3->SetBinError(6,0.8369307);
   hdirt_stack_3->SetBinError(7,0.8152572);
   hdirt_stack_3->SetBinError(8,0.934324);
   hdirt_stack_3->SetBinError(9,0.7944351);
   hdirt_stack_3->SetBinError(10,1.247149);
   hdirt_stack_3->SetBinError(11,0.6674736);
   hdirt_stack_3->SetBinError(12,0.649483);
   hdirt_stack_3->SetBinError(13,0.7823375);
   hdirt_stack_3->SetBinError(14,0.4327336);
   hdirt_stack_3->SetBinError(15,0.5931947);
   hdirt_stack_3->SetBinError(16,0.8257001);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.5870455);
   hdirt_stack_3->SetBinError(19,0.5099715);
   hdirt_stack_3->SetBinError(20,0.5430927);
   hdirt_stack_3->SetBinError(21,0.8656839);
   hdirt_stack_3->SetBinError(22,0.5411461);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(24,0.3997556);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.282199);
   hdirt_stack_3->SetBinError(27,0.5170999);
   hdirt_stack_3->SetBinError(28,0.6428224);
   hdirt_stack_3->SetBinError(29,0.5610561);
   hdirt_stack_3->SetBinError(30,0.3389606);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.9286332);
   houtFV_stack_4->SetBinContent(1,40.13595);
   houtFV_stack_4->SetBinContent(2,23.80618);
   houtFV_stack_4->SetBinContent(3,18.12758);
   houtFV_stack_4->SetBinContent(4,19.94971);
   houtFV_stack_4->SetBinContent(5,16.30872);
   houtFV_stack_4->SetBinContent(6,20.8397);
   houtFV_stack_4->SetBinContent(7,18.19169);
   houtFV_stack_4->SetBinContent(8,21.90933);
   houtFV_stack_4->SetBinContent(9,17.22422);
   houtFV_stack_4->SetBinContent(10,14.95568);
   houtFV_stack_4->SetBinContent(11,18.52485);
   houtFV_stack_4->SetBinContent(12,16.57456);
   houtFV_stack_4->SetBinContent(13,14.56998);
   houtFV_stack_4->SetBinContent(14,17.03434);
   houtFV_stack_4->SetBinContent(15,22.68883);
   houtFV_stack_4->SetBinContent(16,17.11996);
   houtFV_stack_4->SetBinContent(17,18.80315);
   houtFV_stack_4->SetBinContent(18,15.02217);
   houtFV_stack_4->SetBinContent(19,17.81995);
   houtFV_stack_4->SetBinContent(20,20.08695);
   houtFV_stack_4->SetBinContent(21,24.5901);
   houtFV_stack_4->SetBinContent(22,17.82091);
   houtFV_stack_4->SetBinContent(23,18.77166);
   houtFV_stack_4->SetBinContent(24,17.38853);
   houtFV_stack_4->SetBinContent(25,21.54519);
   houtFV_stack_4->SetBinContent(26,15.67278);
   houtFV_stack_4->SetBinContent(27,21.78832);
   houtFV_stack_4->SetBinContent(28,16.18724);
   houtFV_stack_4->SetBinContent(29,21.5178);
   houtFV_stack_4->SetBinContent(30,20.27317);
   houtFV_stack_4->SetBinContent(31,1.073786);
   houtFV_stack_4->SetBinError(0,0.48078);
   houtFV_stack_4->SetBinError(1,3.218906);
   houtFV_stack_4->SetBinError(2,2.444139);
   houtFV_stack_4->SetBinError(3,2.127373);
   houtFV_stack_4->SetBinError(4,2.420263);
   houtFV_stack_4->SetBinError(5,1.955249);
   houtFV_stack_4->SetBinError(6,2.319824);
   houtFV_stack_4->SetBinError(7,2.102418);
   houtFV_stack_4->SetBinError(8,2.408161);
   houtFV_stack_4->SetBinError(9,2.007028);
   houtFV_stack_4->SetBinError(10,1.958542);
   houtFV_stack_4->SetBinError(11,2.113252);
   houtFV_stack_4->SetBinError(12,2.018886);
   houtFV_stack_4->SetBinError(13,1.921668);
   houtFV_stack_4->SetBinError(14,2.092892);
   houtFV_stack_4->SetBinError(15,2.356476);
   houtFV_stack_4->SetBinError(16,2.115184);
   houtFV_stack_4->SetBinError(17,2.159551);
   houtFV_stack_4->SetBinError(18,1.976737);
   houtFV_stack_4->SetBinError(19,2.106246);
   houtFV_stack_4->SetBinError(20,2.256797);
   houtFV_stack_4->SetBinError(21,2.546305);
   houtFV_stack_4->SetBinError(22,2.099341);
   houtFV_stack_4->SetBinError(23,2.482037);
   houtFV_stack_4->SetBinError(24,2.110066);
   houtFV_stack_4->SetBinError(25,2.310236);
   houtFV_stack_4->SetBinError(26,2.023193);
   houtFV_stack_4->SetBinError(27,2.282637);
   houtFV_stack_4->SetBinError(28,2.022641);
   houtFV_stack_4->SetBinError(29,2.358603);
   houtFV_stack_4->SetBinError(30,2.25041);
   houtFV_stack_4->SetBinError(31,0.5557297);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.966794);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.18012);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.620616);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.69253);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.66787);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.126224);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.915978);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.192402);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.40232);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.847055);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.290384);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.331902);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.793256);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.363546);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.53161);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.55627);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.096748);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.766852);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.361634);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.50968);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.542652);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.028242);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.270365);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.485683);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.384564);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,4.669614);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,5.003918);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,4.254106);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,2.536747);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,1.715694);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4887857);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6511889);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5081112);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5697964);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6416047);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6266693);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6380559);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5600354);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6150197);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5934403);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.556433);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5634995);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6742883);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7101788);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7039401);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6391737);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5854069);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6779822);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6241806);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4914984);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6335672);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6298701);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4128065);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5613079);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8340189);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.7026025);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.7411092);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.7025105);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.4723165);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.481566);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7538042);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7817042);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.654822);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8223901);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.5151539);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3453893);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3465144);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.267003);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3297271);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1861173);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.7953222);
   hNCpi0inFVres_stack_7->SetBinContent(1,29.28067);
   hNCpi0inFVres_stack_7->SetBinContent(2,54.55916);
   hNCpi0inFVres_stack_7->SetBinContent(3,57.41629);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.46872);
   hNCpi0inFVres_stack_7->SetBinContent(5,56.56414);
   hNCpi0inFVres_stack_7->SetBinContent(6,60.0163);
   hNCpi0inFVres_stack_7->SetBinContent(7,55.93871);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.48743);
   hNCpi0inFVres_stack_7->SetBinContent(9,61.63865);
   hNCpi0inFVres_stack_7->SetBinContent(10,55.83327);
   hNCpi0inFVres_stack_7->SetBinContent(11,52.66593);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.4367);
   hNCpi0inFVres_stack_7->SetBinContent(13,58.6776);
   hNCpi0inFVres_stack_7->SetBinContent(14,63.99302);
   hNCpi0inFVres_stack_7->SetBinContent(15,63.78);
   hNCpi0inFVres_stack_7->SetBinContent(16,56.39906);
   hNCpi0inFVres_stack_7->SetBinContent(17,60.47134);
   hNCpi0inFVres_stack_7->SetBinContent(18,60.18555);
   hNCpi0inFVres_stack_7->SetBinContent(19,58.46336);
   hNCpi0inFVres_stack_7->SetBinContent(20,57.83411);
   hNCpi0inFVres_stack_7->SetBinContent(21,58.93997);
   hNCpi0inFVres_stack_7->SetBinContent(22,51.87229);
   hNCpi0inFVres_stack_7->SetBinContent(23,58.78636);
   hNCpi0inFVres_stack_7->SetBinContent(24,59.8828);
   hNCpi0inFVres_stack_7->SetBinContent(25,55.08655);
   hNCpi0inFVres_stack_7->SetBinContent(26,62.94604);
   hNCpi0inFVres_stack_7->SetBinContent(27,55.60158);
   hNCpi0inFVres_stack_7->SetBinContent(28,64.67247);
   hNCpi0inFVres_stack_7->SetBinContent(29,60.58576);
   hNCpi0inFVres_stack_7->SetBinContent(30,37.42752);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.2510999);
   hNCpi0inFVres_stack_7->SetBinError(0,0.356662);
   hNCpi0inFVres_stack_7->SetBinError(1,1.780541);
   hNCpi0inFVres_stack_7->SetBinError(2,2.393507);
   hNCpi0inFVres_stack_7->SetBinError(3,2.510286);
   hNCpi0inFVres_stack_7->SetBinError(4,2.280024);
   hNCpi0inFVres_stack_7->SetBinError(5,2.42871);
   hNCpi0inFVres_stack_7->SetBinError(6,2.545085);
   hNCpi0inFVres_stack_7->SetBinError(7,2.415346);
   hNCpi0inFVres_stack_7->SetBinError(8,2.473044);
   hNCpi0inFVres_stack_7->SetBinError(9,2.557607);
   hNCpi0inFVres_stack_7->SetBinError(10,2.426239);
   hNCpi0inFVres_stack_7->SetBinError(11,2.334621);
   hNCpi0inFVres_stack_7->SetBinError(12,2.475666);
   hNCpi0inFVres_stack_7->SetBinError(13,2.528605);
   hNCpi0inFVres_stack_7->SetBinError(14,2.628996);
   hNCpi0inFVres_stack_7->SetBinError(15,2.625417);
   hNCpi0inFVres_stack_7->SetBinError(16,2.403014);
   hNCpi0inFVres_stack_7->SetBinError(17,2.5546);
   hNCpi0inFVres_stack_7->SetBinError(18,2.58804);
   hNCpi0inFVres_stack_7->SetBinError(19,2.518864);
   hNCpi0inFVres_stack_7->SetBinError(20,2.486399);
   hNCpi0inFVres_stack_7->SetBinError(21,2.46858);
   hNCpi0inFVres_stack_7->SetBinError(22,2.346553);
   hNCpi0inFVres_stack_7->SetBinError(23,2.509649);
   hNCpi0inFVres_stack_7->SetBinError(24,2.604941);
   hNCpi0inFVres_stack_7->SetBinError(25,2.357075);
   hNCpi0inFVres_stack_7->SetBinError(26,2.602705);
   hNCpi0inFVres_stack_7->SetBinError(27,2.378022);
   hNCpi0inFVres_stack_7->SetBinError(28,2.645134);
   hNCpi0inFVres_stack_7->SetBinError(29,2.551055);
   hNCpi0inFVres_stack_7->SetBinError(30,2.065137);
   hNCpi0inFVres_stack_7->SetBinError(31,0.08369995);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.919737);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.06546);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.29407);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.04388);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.62437);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.22099);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.7707);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.5146);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.13407);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.73623);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.831801);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.13911);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.65593);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.06165);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.35203);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.35294);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.62007);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.57664);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.25429);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.25471);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.99066);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.7936);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.61707);
   hNCpi0inFVdis_stack_8->SetBinContent(24,11.7667);
   hNCpi0inFVdis_stack_8->SetBinContent(25,11.60412);
   hNCpi0inFVdis_stack_8->SetBinContent(26,12.70252);
   hNCpi0inFVdis_stack_8->SetBinContent(27,13.39919);
   hNCpi0inFVdis_stack_8->SetBinContent(28,13.31799);
   hNCpi0inFVdis_stack_8->SetBinContent(29,9.610257);
   hNCpi0inFVdis_stack_8->SetBinContent(30,8.071934);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9324354);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.013314);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.121432);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.146006);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.051238);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.051824);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.138368);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.08318);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.198765);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.063142);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.028469);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.015264);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.050682);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.127949);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.118681);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.146374);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.18187);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.191083);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.153988);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.11444);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.101972);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.086767);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.089301);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.110094);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.079791);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.127345);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.189802);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.212886);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.9723812);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.9337556);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.125218);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.1012383);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,15.77251);
   hCCpi0inFV_stack_10->SetBinContent(2,20.88065);
   hCCpi0inFV_stack_10->SetBinContent(3,25.90664);
   hCCpi0inFV_stack_10->SetBinContent(4,25.52727);
   hCCpi0inFV_stack_10->SetBinContent(5,27.14611);
   hCCpi0inFV_stack_10->SetBinContent(6,23.67185);
   hCCpi0inFV_stack_10->SetBinContent(7,22.17165);
   hCCpi0inFV_stack_10->SetBinContent(8,25.73096);
   hCCpi0inFV_stack_10->SetBinContent(9,25.6935);
   hCCpi0inFV_stack_10->SetBinContent(10,24.2767);
   hCCpi0inFV_stack_10->SetBinContent(11,23.48869);
   hCCpi0inFV_stack_10->SetBinContent(12,22.49535);
   hCCpi0inFV_stack_10->SetBinContent(13,25.95629);
   hCCpi0inFV_stack_10->SetBinContent(14,25.16371);
   hCCpi0inFV_stack_10->SetBinContent(15,29.28457);
   hCCpi0inFV_stack_10->SetBinContent(16,21.92324);
   hCCpi0inFV_stack_10->SetBinContent(17,20.23017);
   hCCpi0inFV_stack_10->SetBinContent(18,21.44305);
   hCCpi0inFV_stack_10->SetBinContent(19,21.70792);
   hCCpi0inFV_stack_10->SetBinContent(20,23.85862);
   hCCpi0inFV_stack_10->SetBinContent(21,26.2157);
   hCCpi0inFV_stack_10->SetBinContent(22,27.06012);
   hCCpi0inFV_stack_10->SetBinContent(23,22.99342);
   hCCpi0inFV_stack_10->SetBinContent(24,25.32507);
   hCCpi0inFV_stack_10->SetBinContent(25,23.49325);
   hCCpi0inFV_stack_10->SetBinContent(26,28.10088);
   hCCpi0inFV_stack_10->SetBinContent(27,25.83146);
   hCCpi0inFV_stack_10->SetBinContent(28,24.57671);
   hCCpi0inFV_stack_10->SetBinContent(29,25.93611);
   hCCpi0inFV_stack_10->SetBinContent(30,25.51249);
   hCCpi0inFV_stack_10->SetBinContent(31,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(1,2.045517);
   hCCpi0inFV_stack_10->SetBinError(2,2.266462);
   hCCpi0inFV_stack_10->SetBinError(3,2.598667);
   hCCpi0inFV_stack_10->SetBinError(4,2.438521);
   hCCpi0inFV_stack_10->SetBinError(5,2.583184);
   hCCpi0inFV_stack_10->SetBinError(6,2.413456);
   hCCpi0inFV_stack_10->SetBinError(7,2.325338);
   hCCpi0inFV_stack_10->SetBinError(8,2.527138);
   hCCpi0inFV_stack_10->SetBinError(9,2.53599);
   hCCpi0inFV_stack_10->SetBinError(10,2.506172);
   hCCpi0inFV_stack_10->SetBinError(11,2.477781);
   hCCpi0inFV_stack_10->SetBinError(12,2.382064);
   hCCpi0inFV_stack_10->SetBinError(13,2.544816);
   hCCpi0inFV_stack_10->SetBinError(14,2.510013);
   hCCpi0inFV_stack_10->SetBinError(15,2.677584);
   hCCpi0inFV_stack_10->SetBinError(16,2.298836);
   hCCpi0inFV_stack_10->SetBinError(17,2.277887);
   hCCpi0inFV_stack_10->SetBinError(18,2.356427);
   hCCpi0inFV_stack_10->SetBinError(19,2.373763);
   hCCpi0inFV_stack_10->SetBinError(20,2.378628);
   hCCpi0inFV_stack_10->SetBinError(21,2.568542);
   hCCpi0inFV_stack_10->SetBinError(22,2.566557);
   hCCpi0inFV_stack_10->SetBinError(23,2.406235);
   hCCpi0inFV_stack_10->SetBinError(24,2.550146);
   hCCpi0inFV_stack_10->SetBinError(25,2.40355);
   hCCpi0inFV_stack_10->SetBinError(26,2.707266);
   hCCpi0inFV_stack_10->SetBinError(27,2.544912);
   hCCpi0inFV_stack_10->SetBinError(28,2.510603);
   hCCpi0inFV_stack_10->SetBinError(29,2.551258);
   hCCpi0inFV_stack_10->SetBinError(30,2.591125);
   hCCpi0inFV_stack_10->SetBinError(31,0.3397478);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,3.43268);
   hNCinFV_stack_11->SetBinContent(2,9.039744);
   hNCinFV_stack_11->SetBinContent(3,8.801002);
   hNCinFV_stack_11->SetBinContent(4,9.184897);
   hNCinFV_stack_11->SetBinContent(5,12.41241);
   hNCinFV_stack_11->SetBinContent(6,7.914396);
   hNCinFV_stack_11->SetBinContent(7,12.15568);
   hNCinFV_stack_11->SetBinContent(8,9.433176);
   hNCinFV_stack_11->SetBinContent(9,10.45863);
   hNCinFV_stack_11->SetBinContent(10,9.966687);
   hNCinFV_stack_11->SetBinContent(11,9.723481);
   hNCinFV_stack_11->SetBinContent(12,10.84545);
   hNCinFV_stack_11->SetBinContent(13,10.55176);
   hNCinFV_stack_11->SetBinContent(14,9.571566);
   hNCinFV_stack_11->SetBinContent(15,8.799312);
   hNCinFV_stack_11->SetBinContent(16,11.48993);
   hNCinFV_stack_11->SetBinContent(17,11.28875);
   hNCinFV_stack_11->SetBinContent(18,9.386076);
   hNCinFV_stack_11->SetBinContent(19,9.183207);
   hNCinFV_stack_11->SetBinContent(20,12.41072);
   hNCinFV_stack_11->SetBinContent(21,15.93131);
   hNCinFV_stack_11->SetBinContent(22,9.171373);
   hNCinFV_stack_11->SetBinContent(23,9.249376);
   hNCinFV_stack_11->SetBinContent(24,12.64946);
   hNCinFV_stack_11->SetBinContent(25,13.51808);
   hNCinFV_stack_11->SetBinContent(26,11.19178);
   hNCinFV_stack_11->SetBinContent(27,9.662858);
   hNCinFV_stack_11->SetBinContent(28,11.36725);
   hNCinFV_stack_11->SetBinContent(29,13.04458);
   hNCinFV_stack_11->SetBinContent(30,10.1634);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,0.8789405);
   hNCinFV_stack_11->SetBinError(2,1.520674);
   hNCinFV_stack_11->SetBinError(3,1.455365);
   hNCinFV_stack_11->SetBinError(4,1.546006);
   hNCinFV_stack_11->SetBinError(5,1.76654);
   hNCinFV_stack_11->SetBinError(6,1.429196);
   hNCinFV_stack_11->SetBinError(7,1.765685);
   hNCinFV_stack_11->SetBinError(8,1.545911);
   hNCinFV_stack_11->SetBinError(9,1.607341);
   hNCinFV_stack_11->SetBinError(10,1.594658);
   hNCinFV_stack_11->SetBinError(11,1.595373);
   hNCinFV_stack_11->SetBinError(12,1.677419);
   hNCinFV_stack_11->SetBinError(13,1.630043);
   hNCinFV_stack_11->SetBinError(14,1.569993);
   hNCinFV_stack_11->SetBinError(15,1.455137);
   hNCinFV_stack_11->SetBinError(16,1.641199);
   hNCinFV_stack_11->SetBinError(17,1.688632);
   hNCinFV_stack_11->SetBinError(18,1.494052);
   hNCinFV_stack_11->SetBinError(19,1.545792);
   hNCinFV_stack_11->SetBinError(20,1.766352);
   hNCinFV_stack_11->SetBinError(21,1.951563);
   hNCinFV_stack_11->SetBinError(22,1.544292);
   hNCinFV_stack_11->SetBinError(23,1.468951);
   hNCinFV_stack_11->SetBinError(24,1.820539);
   hNCinFV_stack_11->SetBinError(25,1.892403);
   hNCinFV_stack_11->SetBinError(26,1.653324);
   hNCinFV_stack_11->SetBinError(27,1.543459);
   hNCinFV_stack_11->SetBinError(28,1.680582);
   hNCinFV_stack_11->SetBinError(29,1.841852);
   hNCinFV_stack_11->SetBinError(30,1.606746);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,12.44613);
   hnumuCCinFV_stack_12->SetBinContent(2,12.95405);
   hnumuCCinFV_stack_12->SetBinContent(3,11.65803);
   hnumuCCinFV_stack_12->SetBinContent(4,14.32131);
   hnumuCCinFV_stack_12->SetBinContent(5,11.94013);
   hnumuCCinFV_stack_12->SetBinContent(6,12.15762);
   hnumuCCinFV_stack_12->SetBinContent(7,14.2186);
   hnumuCCinFV_stack_12->SetBinContent(8,18.43825);
   hnumuCCinFV_stack_12->SetBinContent(9,13.03992);
   hnumuCCinFV_stack_12->SetBinContent(10,7.123982);
   hnumuCCinFV_stack_12->SetBinContent(11,9.114445);
   hnumuCCinFV_stack_12->SetBinContent(12,8.962652);
   hnumuCCinFV_stack_12->SetBinContent(13,10.88815);
   hnumuCCinFV_stack_12->SetBinContent(14,10.36178);
   hnumuCCinFV_stack_12->SetBinContent(15,12.13642);
   hnumuCCinFV_stack_12->SetBinContent(16,8.05231);
   hnumuCCinFV_stack_12->SetBinContent(17,10.80743);
   hnumuCCinFV_stack_12->SetBinContent(18,10.83201);
   hnumuCCinFV_stack_12->SetBinContent(19,9.327874);
   hnumuCCinFV_stack_12->SetBinContent(20,11.83212);
   hnumuCCinFV_stack_12->SetBinContent(21,18.58938);
   hnumuCCinFV_stack_12->SetBinContent(22,13.19611);
   hnumuCCinFV_stack_12->SetBinContent(23,11.2531);
   hnumuCCinFV_stack_12->SetBinContent(24,10.39037);
   hnumuCCinFV_stack_12->SetBinContent(25,7.641212);
   hnumuCCinFV_stack_12->SetBinContent(26,9.732712);
   hnumuCCinFV_stack_12->SetBinContent(27,9.85287);
   hnumuCCinFV_stack_12->SetBinContent(28,9.65667);
   hnumuCCinFV_stack_12->SetBinContent(29,12.54531);
   hnumuCCinFV_stack_12->SetBinContent(30,12.08459);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.324158);
   hnumuCCinFV_stack_12->SetBinError(2,1.89337);
   hnumuCCinFV_stack_12->SetBinError(3,1.823329);
   hnumuCCinFV_stack_12->SetBinError(4,1.929235);
   hnumuCCinFV_stack_12->SetBinError(5,1.904222);
   hnumuCCinFV_stack_12->SetBinError(6,1.883418);
   hnumuCCinFV_stack_12->SetBinError(7,3.174419);
   hnumuCCinFV_stack_12->SetBinError(8,3.084586);
   hnumuCCinFV_stack_12->SetBinError(9,1.990846);
   hnumuCCinFV_stack_12->SetBinError(10,1.585641);
   hnumuCCinFV_stack_12->SetBinError(11,1.560873);
   hnumuCCinFV_stack_12->SetBinError(12,1.942125);
   hnumuCCinFV_stack_12->SetBinError(13,1.800131);
   hnumuCCinFV_stack_12->SetBinError(14,1.638562);
   hnumuCCinFV_stack_12->SetBinError(15,1.85503);
   hnumuCCinFV_stack_12->SetBinError(16,1.56147);
   hnumuCCinFV_stack_12->SetBinError(17,1.785484);
   hnumuCCinFV_stack_12->SetBinError(18,1.683954);
   hnumuCCinFV_stack_12->SetBinError(19,1.746315);
   hnumuCCinFV_stack_12->SetBinError(20,2.304097);
   hnumuCCinFV_stack_12->SetBinError(21,2.241127);
   hnumuCCinFV_stack_12->SetBinError(22,1.95474);
   hnumuCCinFV_stack_12->SetBinError(23,1.932955);
   hnumuCCinFV_stack_12->SetBinError(24,1.704913);
   hnumuCCinFV_stack_12->SetBinError(25,1.336774);
   hnumuCCinFV_stack_12->SetBinError(26,1.670206);
   hnumuCCinFV_stack_12->SetBinError(27,2.012474);
   hnumuCCinFV_stack_12->SetBinError(28,1.627327);
   hnumuCCinFV_stack_12->SetBinError(29,1.993707);
   hnumuCCinFV_stack_12->SetBinError(30,2.035989);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.055049);
   hnueCCinFV_stack_13->SetBinContent(2,0.9315238);
   hnueCCinFV_stack_13->SetBinContent(3,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(4,1.655022);
   hnueCCinFV_stack_13->SetBinContent(5,2.554448);
   hnueCCinFV_stack_13->SetBinContent(6,0.7286381);
   hnueCCinFV_stack_13->SetBinContent(7,1.717065);
   hnueCCinFV_stack_13->SetBinContent(8,1.926387);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,0.6106752);
   hnueCCinFV_stack_13->SetBinContent(11,0.498003);
   hnueCCinFV_stack_13->SetBinContent(12,0.6781358);
   hnueCCinFV_stack_13->SetBinContent(13,1.62027);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.865311);
   hnueCCinFV_stack_13->SetBinContent(16,1.768542);
   hnueCCinFV_stack_13->SetBinContent(17,1.121307);
   hnueCCinFV_stack_13->SetBinContent(18,1.23324);
   hnueCCinFV_stack_13->SetBinContent(19,1.492216);
   hnueCCinFV_stack_13->SetBinContent(20,1.274584);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.367688);
   hnueCCinFV_stack_13->SetBinContent(23,0.5221299);
   hnueCCinFV_stack_13->SetBinContent(24,1.309485);
   hnueCCinFV_stack_13->SetBinContent(25,1.767228);
   hnueCCinFV_stack_13->SetBinContent(26,1.395914);
   hnueCCinFV_stack_13->SetBinContent(27,1.964412);
   hnueCCinFV_stack_13->SetBinContent(28,0.7033689);
   hnueCCinFV_stack_13->SetBinContent(29,0.8753104);
   hnueCCinFV_stack_13->SetBinContent(30,0.6942893);
   hnueCCinFV_stack_13->SetBinError(1,0.5556116);
   hnueCCinFV_stack_13->SetBinError(2,0.5575178);
   hnueCCinFV_stack_13->SetBinError(3,0.2758068);
   hnueCCinFV_stack_13->SetBinError(4,0.7099917);
   hnueCCinFV_stack_13->SetBinError(5,1.828548);
   hnueCCinFV_stack_13->SetBinError(6,0.436143);
   hnueCCinFV_stack_13->SetBinError(7,0.7066465);
   hnueCCinFV_stack_13->SetBinError(8,0.7019452);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.4583227);
   hnueCCinFV_stack_13->SetBinError(11,0.3522085);
   hnueCCinFV_stack_13->SetBinError(12,0.4944773);
   hnueCCinFV_stack_13->SetBinError(13,0.7866223);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6920427);
   hnueCCinFV_stack_13->SetBinError(16,1.210134);
   hnueCCinFV_stack_13->SetBinError(17,0.6827848);
   hnueCCinFV_stack_13->SetBinError(18,0.8846879);
   hnueCCinFV_stack_13->SetBinError(19,0.8066005);
   hnueCCinFV_stack_13->SetBinError(20,0.5719703);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.7329359);
   hnueCCinFV_stack_13->SetBinError(23,0.3741997);
   hnueCCinFV_stack_13->SetBinError(24,0.8480199);
   hnueCCinFV_stack_13->SetBinError(25,0.8069208);
   hnueCCinFV_stack_13->SetBinError(26,0.5940294);
   hnueCCinFV_stack_13->SetBinError(27,0.7602661);
   hnueCCinFV_stack_13->SetBinError(28,0.4164799);
   hnueCCinFV_stack_13->SetBinError(29,0.441077);
   hnueCCinFV_stack_13->SetBinError(30,0.4102043);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__11->SetBinContent(0,2.314102);
   hmcerror__11->SetBinContent(1,136.0496);
   hmcerror__11->SetBinContent(2,162.2255);
   hmcerror__11->SetBinContent(3,163.8483);
   hmcerror__11->SetBinContent(4,159.9984);
   hmcerror__11->SetBinContent(5,167.0482);
   hmcerror__11->SetBinContent(6,168.0176);
   hmcerror__11->SetBinContent(7,164.0477);
   hmcerror__11->SetBinContent(8,179.0133);
   hmcerror__11->SetBinContent(9,167.9214);
   hmcerror__11->SetBinContent(10,147.2211);
   hmcerror__11->SetBinContent(11,152.1823);
   hmcerror__11->SetBinContent(12,151.5425);
   hmcerror__11->SetBinContent(13,158.1999);
   hmcerror__11->SetBinContent(14,171.2563);
   hmcerror__11->SetBinContent(15,173.4972);
   hmcerror__11->SetBinContent(16,155.697);
   hmcerror__11->SetBinContent(17,154.515);
   hmcerror__11->SetBinContent(18,151.7412);
   hmcerror__11->SetBinContent(19,155.4348);
   hmcerror__11->SetBinContent(20,165.9881);
   hmcerror__11->SetBinContent(21,212.2343);
   hmcerror__11->SetBinContent(22,158.1572);
   hmcerror__11->SetBinContent(23,152.5237);
   hmcerror__11->SetBinContent(24,164.139);
   hmcerror__11->SetBinContent(25,156.6269);
   hmcerror__11->SetBinContent(26,164.1752);
   hmcerror__11->SetBinContent(27,164.861);
   hmcerror__11->SetBinContent(28,163.0053);
   hmcerror__11->SetBinContent(29,161.2347);
   hmcerror__11->SetBinContent(30,129.562);
   hmcerror__11->SetBinContent(31,2.984515);
   hmcerror__11->SetBinError(0,0.6888018);
   hmcerror__11->SetBinError(1,35.49362);
   hmcerror__11->SetBinError(2,41.33565);
   hmcerror__11->SetBinError(3,40.77547);
   hmcerror__11->SetBinError(4,36.3269);
   hmcerror__11->SetBinError(5,42.53603);
   hmcerror__11->SetBinError(6,42.88315);
   hmcerror__11->SetBinError(7,39.23481);
   hmcerror__11->SetBinError(8,51.1054);
   hmcerror__11->SetBinError(9,42.32212);
   hmcerror__11->SetBinError(10,33.72481);
   hmcerror__11->SetBinError(11,35.8698);
   hmcerror__11->SetBinError(12,35.55269);
   hmcerror__11->SetBinError(13,36.45041);
   hmcerror__11->SetBinError(14,40.25346);
   hmcerror__11->SetBinError(15,51.20513);
   hmcerror__11->SetBinError(16,43.30725);
   hmcerror__11->SetBinError(17,36.98662);
   hmcerror__11->SetBinError(18,37.61522);
   hmcerror__11->SetBinError(19,35.39999);
   hmcerror__11->SetBinError(20,39.26243);
   hmcerror__11->SetBinError(21,49.38582);
   hmcerror__11->SetBinError(22,39.38862);
   hmcerror__11->SetBinError(23,36.33869);
   hmcerror__11->SetBinError(24,42.09257);
   hmcerror__11->SetBinError(25,38.58138);
   hmcerror__11->SetBinError(26,48.99152);
   hmcerror__11->SetBinError(27,38.32944);
   hmcerror__11->SetBinError(28,38.2551);
   hmcerror__11->SetBinError(29,42.78088);
   hmcerror__11->SetBinError(30,33.7859);
   hmcerror__11->SetBinError(31,5.075947);
   hmcerror__11->SetBinError(32,0.3895343);
   hmcerror__11->SetBinError(33,0.3895343);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3013[32] = {
   120,
   175,
   163,
   158,
   161,
   165,
   162,
   168,
   172,
   142,
   159,
   145,
   140,
   154,
   172,
   159,
   153,
   153,
   150,
   154,
   187,
   161,
   153,
   124,
   151,
   156,
   144,
   145,
   144,
   103,
   1,
   0};
   Double_t _felx3013[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3013[32] = {
   10.95445,
   13.22876,
   12.76715,
   12.56981,
   12.68858,
   12.84523,
   12.72792,
   12.96148,
   13.11488,
   11.91638,
   12.60952,
   12.04159,
   11.83216,
   12.40967,
   13.11488,
   12.60952,
   12.36932,
   12.36932,
   12.24745,
   12.40967,
   13.67479,
   12.68858,
   12.36932,
   11.13553,
   12.28821,
   12.49,
   12,
   12.04159,
   12,
   10.14889,
   1,
   0};
   Double_t _fehx3013[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3013[32] = {
   10.95445,
   13.22876,
   12.76715,
   12.56981,
   12.68858,
   12.84523,
   12.72792,
   12.96148,
   13.11488,
   11.91638,
   12.60952,
   12.04159,
   11.83216,
   12.40967,
   13.11488,
   12.60952,
   12.36932,
   12.36932,
   12.24745,
   12.40967,
   13.67479,
   12.68858,
   12.36932,
   11.13553,
   12.28821,
   12.49,
   12,
   12.04159,
   12,
   10.14889,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1210);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(220.7423);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.7/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4594.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 586.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1693.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  342.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 728.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3014[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3014[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3014[32] = {
   0.2608874,
   0.2548037,
   0.2488611,
   0.2270454,
   0.2546333,
   0.2552301,
   0.2391671,
   0.2854838,
   0.2520353,
   0.229076,
   0.2357029,
   0.2346054,
   0.2304072,
   0.2350481,
   0.2951352,
   0.2781509,
   0.2393725,
   0.2478906,
   0.2277481,
   0.2365376,
   0.2326948,
   0.2490473,
   0.2382494,
   0.2564447,
   0.2463267,
   0.2984099,
   0.2324954,
   0.2346862,
   0.2653329,
   0.2607702,
   1.700761,
   0};
   Double_t _fehx3014[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3014[32] = {
   0.2608874,
   0.2548037,
   0.2488611,
   0.2270454,
   0.2546333,
   0.2552301,
   0.2391671,
   0.2854838,
   0.2520353,
   0.229076,
   0.2357029,
   0.2346054,
   0.2304072,
   0.2350481,
   0.2951352,
   0.2781509,
   0.2393725,
   0.2478906,
   0.2277481,
   0.2365376,
   0.2326948,
   0.2490473,
   0.2382494,
   0.2564447,
   0.2463267,
   0.2984099,
   0.2324954,
   0.2346862,
   0.2653329,
   0.2607702,
   1.700761,
   0};
   grae = new TGraphAsymmErrors(32,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1210);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3015[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3015[32] = {
   0.183813,
   0.1906386,
   0.1920561,
   0.1849612,
   0.1965062,
   0.1889125,
   0.1880466,
   0.185403,
   0.1968475,
   0.1935089,
   0.1849708,
   0.1990854,
   0.1856587,
   0.197205,
   0.2015613,
   0.2047214,
   0.2060714,
   0.1999074,
   0.1914938,
   0.1954549,
   0.175035,
   0.1900866,
   0.2013221,
   0.1942576,
   0.2093166,
   0.2047024,
   0.1967353,
   0.2034865,
   0.2075261,
   0.2015376,
   0.3873936,
   0};
   Double_t _fehx3015[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3015[32] = {
   0.183813,
   0.1906386,
   0.1920561,
   0.1849612,
   0.1965062,
   0.1889125,
   0.1880466,
   0.185403,
   0.1968475,
   0.1935089,
   0.1849708,
   0.1990854,
   0.1856587,
   0.197205,
   0.2015613,
   0.2047214,
   0.2060714,
   0.1999074,
   0.1914938,
   0.1954549,
   0.175035,
   0.1900866,
   0.2013221,
   0.1942576,
   0.2093166,
   0.2047024,
   0.1967353,
   0.2034865,
   0.2075261,
   0.2015376,
   0.3873936,
   0};
   grae = new TGraphAsymmErrors(32,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1210);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3016[32] = {
   0.8820315,
   1.078746,
   0.9948226,
   0.9875097,
   0.9637938,
   0.98204,
   0.9875179,
   0.9384779,
   1.024289,
   0.9645359,
   1.0448,
   0.956827,
   0.8849562,
   0.8992371,
   0.9913706,
   1.021214,
   0.9901954,
   1.008296,
   0.9650346,
   0.9277772,
   0.8811018,
   1.017975,
   1.003123,
   0.7554572,
   0.9640745,
   0.9502042,
   0.8734629,
   0.8895417,
   0.8931078,
   0.7949863,
   0.3350628,
   10};
   Double_t _felx3016[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3016[32] = {
   0.08051809,
   0.0815455,
   0.07792052,
   0.07856205,
   0.07595759,
   0.07645171,
   0.07758674,
   0.07240514,
   0.07810129,
   0.08094205,
   0.082858,
   0.07946016,
   0.07479245,
   0.07246259,
   0.0755913,
   0.08098757,
   0.08005256,
   0.08151587,
   0.07879474,
   0.07476242,
   0.06443255,
   0.08022764,
   0.08109766,
   0.06784206,
   0.07845527,
   0.07607722,
   0.07278857,
   0.07387241,
   0.07442565,
   0.07833233,
   0.3350628,
   0};
   Double_t _fehx3016[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3016[32] = {
   0.08051809,
   0.0815455,
   0.07792052,
   0.07856205,
   0.07595759,
   0.07645171,
   0.07758674,
   0.07240514,
   0.07810129,
   0.08094205,
   0.082858,
   0.07946016,
   0.07479245,
   0.07246259,
   0.0755913,
   0.08098757,
   0.08005256,
   0.08151587,
   0.07879474,
   0.07476242,
   0.06443255,
   0.08022764,
   0.08109766,
   0.06784206,
   0.07845527,
   0.07607722,
   0.07278857,
   0.07387241,
   0.07442565,
   0.07833233,
   0.4555882,
   0};
   grae = new TGraphAsymmErrors(32,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1210);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(11);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

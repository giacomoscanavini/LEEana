#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Tue Mar 14 03:42:02 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
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
   pad1->Range(-169.2308,-152.1451,1241.026,16824.04);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__7->SetBinContent(0,341.6726);
   hmc__7->SetBinContent(1,7607.253);
   hmc__7->SetBinContent(2,4730.664);
   hmc__7->SetBinContent(3,4452.871);
   hmc__7->SetBinContent(4,4479.011);
   hmc__7->SetBinContent(5,4505.511);
   hmc__7->SetBinContent(6,4353.508);
   hmc__7->SetBinContent(7,4248.667);
   hmc__7->SetBinContent(8,4480.79);
   hmc__7->SetBinContent(9,4371.236);
   hmc__7->SetBinContent(10,4381.703);
   hmc__7->SetBinContent(11,4144.615);
   hmc__7->SetBinContent(12,4146.398);
   hmc__7->SetBinContent(13,4202.391);
   hmc__7->SetBinContent(14,4152.824);
   hmc__7->SetBinContent(15,4207.677);
   hmc__7->SetBinContent(16,4319.743);
   hmc__7->SetBinContent(17,4105.115);
   hmc__7->SetBinContent(18,4163.338);
   hmc__7->SetBinContent(19,4331.97);
   hmc__7->SetBinContent(20,4291.737);
   hmc__7->SetBinContent(21,4983.494);
   hmc__7->SetBinContent(22,4554.918);
   hmc__7->SetBinContent(23,4350.907);
   hmc__7->SetBinContent(24,4303.032);
   hmc__7->SetBinContent(25,4559.446);
   hmc__7->SetBinContent(26,4541.246);
   hmc__7->SetBinContent(27,4655.537);
   hmc__7->SetBinContent(28,4803.324);
   hmc__7->SetBinContent(29,5180.239);
   hmc__7->SetBinContent(30,4766.682);
   hmc__7->SetBinContent(31,179.2824);
   hmc__7->SetBinError(0,11.14915);
   hmc__7->SetBinError(1,949.4214);
   hmc__7->SetBinError(2,616.3853);
   hmc__7->SetBinError(3,582.4866);
   hmc__7->SetBinError(4,599.642);
   hmc__7->SetBinError(5,601.0022);
   hmc__7->SetBinError(6,580.5136);
   hmc__7->SetBinError(7,563.5114);
   hmc__7->SetBinError(8,575.7352);
   hmc__7->SetBinError(9,582.0339);
   hmc__7->SetBinError(10,602.0149);
   hmc__7->SetBinError(11,546.347);
   hmc__7->SetBinError(12,551.6303);
   hmc__7->SetBinError(13,586.3842);
   hmc__7->SetBinError(14,567.236);
   hmc__7->SetBinError(15,549.9297);
   hmc__7->SetBinError(16,603.6145);
   hmc__7->SetBinError(17,549.7554);
   hmc__7->SetBinError(18,569.4847);
   hmc__7->SetBinError(19,588.4419);
   hmc__7->SetBinError(20,593.2403);
   hmc__7->SetBinError(21,607.8014);
   hmc__7->SetBinError(22,612.8761);
   hmc__7->SetBinError(23,588.1895);
   hmc__7->SetBinError(24,602.6159);
   hmc__7->SetBinError(25,640.1362);
   hmc__7->SetBinError(26,639.7028);
   hmc__7->SetBinError(27,671.7327);
   hmc__7->SetBinError(28,692.5057);
   hmc__7->SetBinError(29,754.0035);
   hmc__7->SetBinError(30,650.6735);
   hmc__7->SetBinError(31,68.58239);
   hmc__7->SetBinError(32,0.3895343);
   hmc__7->SetBinError(33,0.3895343);
   hmc__7->SetMinimum(-152.1451);
   hmc__7->SetMaximum(15975.23);
   hmc__7->SetEntries(121226);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",32,0,1100);
   hs3_stack_3->SetMinimum(-5.219833e-10);
   hs3_stack_3->SetMaximum(7987.616);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(0,43.7663);
   hbadmatch_stack_1->SetBinContent(1,368.5331);
   hbadmatch_stack_1->SetBinContent(2,173.4233);
   hbadmatch_stack_1->SetBinContent(3,136.4878);
   hbadmatch_stack_1->SetBinContent(4,118.7181);
   hbadmatch_stack_1->SetBinContent(5,108.6056);
   hbadmatch_stack_1->SetBinContent(6,98.49373);
   hbadmatch_stack_1->SetBinContent(7,101.9976);
   hbadmatch_stack_1->SetBinContent(8,109.5739);
   hbadmatch_stack_1->SetBinContent(9,99.67636);
   hbadmatch_stack_1->SetBinContent(10,95.7205);
   hbadmatch_stack_1->SetBinContent(11,89.34413);
   hbadmatch_stack_1->SetBinContent(12,87.82944);
   hbadmatch_stack_1->SetBinContent(13,72.82555);
   hbadmatch_stack_1->SetBinContent(14,81.188);
   hbadmatch_stack_1->SetBinContent(15,71.63551);
   hbadmatch_stack_1->SetBinContent(16,65.85216);
   hbadmatch_stack_1->SetBinContent(17,63.07354);
   hbadmatch_stack_1->SetBinContent(18,75.48516);
   hbadmatch_stack_1->SetBinContent(19,70.88667);
   hbadmatch_stack_1->SetBinContent(20,87.00186);
   hbadmatch_stack_1->SetBinContent(21,128.804);
   hbadmatch_stack_1->SetBinContent(22,87.58611);
   hbadmatch_stack_1->SetBinContent(23,71.48383);
   hbadmatch_stack_1->SetBinContent(24,78.5899);
   hbadmatch_stack_1->SetBinContent(25,88.82317);
   hbadmatch_stack_1->SetBinContent(26,93.72174);
   hbadmatch_stack_1->SetBinContent(27,99.03148);
   hbadmatch_stack_1->SetBinContent(28,121.6275);
   hbadmatch_stack_1->SetBinContent(29,199.805);
   hbadmatch_stack_1->SetBinContent(30,298.0363);
   hbadmatch_stack_1->SetBinContent(31,15.78178);
   hbadmatch_stack_1->SetBinError(0,4.008284);
   hbadmatch_stack_1->SetBinError(1,12.43174);
   hbadmatch_stack_1->SetBinError(2,9.051154);
   hbadmatch_stack_1->SetBinError(3,6.977602);
   hbadmatch_stack_1->SetBinError(4,7.322639);
   hbadmatch_stack_1->SetBinError(5,6.068514);
   hbadmatch_stack_1->SetBinError(6,6.313448);
   hbadmatch_stack_1->SetBinError(7,6.497973);
   hbadmatch_stack_1->SetBinError(8,5.952539);
   hbadmatch_stack_1->SetBinError(9,5.72168);
   hbadmatch_stack_1->SetBinError(10,5.580941);
   hbadmatch_stack_1->SetBinError(11,6.086551);
   hbadmatch_stack_1->SetBinError(12,5.804405);
   hbadmatch_stack_1->SetBinError(13,4.932637);
   hbadmatch_stack_1->SetBinError(14,6.13343);
   hbadmatch_stack_1->SetBinError(15,5.020909);
   hbadmatch_stack_1->SetBinError(16,5.928251);
   hbadmatch_stack_1->SetBinError(17,4.599545);
   hbadmatch_stack_1->SetBinError(18,5.837977);
   hbadmatch_stack_1->SetBinError(19,4.541774);
   hbadmatch_stack_1->SetBinError(20,6.034929);
   hbadmatch_stack_1->SetBinError(21,6.138512);
   hbadmatch_stack_1->SetBinError(22,5.732043);
   hbadmatch_stack_1->SetBinError(23,5.109562);
   hbadmatch_stack_1->SetBinError(24,5.165835);
   hbadmatch_stack_1->SetBinError(25,6.64916);
   hbadmatch_stack_1->SetBinError(26,6.349626);
   hbadmatch_stack_1->SetBinError(27,6.040029);
   hbadmatch_stack_1->SetBinError(28,6.276943);
   hbadmatch_stack_1->SetBinError(29,7.929352);
   hbadmatch_stack_1->SetBinError(30,12.66355);
   hbadmatch_stack_1->SetBinError(31,2.241898);
   hbadmatch_stack_1->SetEntries(13347);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(0,120.5228);
   hext_stack_2->SetBinContent(1,1262.865);
   hext_stack_2->SetBinContent(2,779.0419);
   hext_stack_2->SetBinContent(3,751.8893);
   hext_stack_2->SetBinContent(4,786.3201);
   hext_stack_2->SetBinContent(5,739.4862);
   hext_stack_2->SetBinContent(6,643.5526);
   hext_stack_2->SetBinContent(7,646.6157);
   hext_stack_2->SetBinContent(8,761.6293);
   hext_stack_2->SetBinContent(9,633.7794);
   hext_stack_2->SetBinContent(10,565.8868);
   hext_stack_2->SetBinContent(11,553.3021);
   hext_stack_2->SetBinContent(12,510.8137);
   hext_stack_2->SetBinContent(13,505.2474);
   hext_stack_2->SetBinContent(14,515.3322);
   hext_stack_2->SetBinContent(15,572.2133);
   hext_stack_2->SetBinContent(16,563.2927);
   hext_stack_2->SetBinContent(17,484.6405);
   hext_stack_2->SetBinContent(18,474.1742);
   hext_stack_2->SetBinContent(19,485.0515);
   hext_stack_2->SetBinContent(20,526.6762);
   hext_stack_2->SetBinContent(21,1176.205);
   hext_stack_2->SetBinContent(22,746.1331);
   hext_stack_2->SetBinContent(23,502.0005);
   hext_stack_2->SetBinContent(24,501.8743);
   hext_stack_2->SetBinContent(25,439.882);
   hext_stack_2->SetBinContent(26,454.8439);
   hext_stack_2->SetBinContent(27,393.2292);
   hext_stack_2->SetBinContent(28,389.3248);
   hext_stack_2->SetBinContent(29,439.8053);
   hext_stack_2->SetBinContent(30,530.7675);
   hext_stack_2->SetBinContent(31,40.9688);
   hext_stack_2->SetBinError(0,6.607365);
   hext_stack_2->SetBinError(1,23.22947);
   hext_stack_2->SetBinError(2,18.30392);
   hext_stack_2->SetBinError(3,17.88364);
   hext_stack_2->SetBinError(4,18.22853);
   hext_stack_2->SetBinError(5,17.69197);
   hext_stack_2->SetBinError(6,16.58967);
   hext_stack_2->SetBinError(7,16.53695);
   hext_stack_2->SetBinError(8,18.14745);
   hext_stack_2->SetBinError(9,16.44301);
   hext_stack_2->SetBinError(10,15.50232);
   hext_stack_2->SetBinError(11,15.41065);
   hext_stack_2->SetBinError(12,14.5869);
   hext_stack_2->SetBinError(13,14.64702);
   hext_stack_2->SetBinError(14,14.93384);
   hext_stack_2->SetBinError(15,15.46962);
   hext_stack_2->SetBinError(16,15.55759);
   hext_stack_2->SetBinError(17,14.39193);
   hext_stack_2->SetBinError(18,14.28592);
   hext_stack_2->SetBinError(19,14.44848);
   hext_stack_2->SetBinError(20,15.0303);
   hext_stack_2->SetBinError(21,23.05708);
   hext_stack_2->SetBinError(22,18.08869);
   hext_stack_2->SetBinError(23,14.71326);
   hext_stack_2->SetBinError(24,14.68925);
   hext_stack_2->SetBinError(25,13.81633);
   hext_stack_2->SetBinError(26,14.08113);
   hext_stack_2->SetBinError(27,13.00365);
   hext_stack_2->SetBinError(28,12.95755);
   hext_stack_2->SetBinError(29,13.78979);
   hext_stack_2->SetBinError(30,15.15938);
   hext_stack_2->SetBinError(31,4.140325);
   hext_stack_2->SetEntries(45995);

   ci = 1461;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(0,21.82412);
   hdirt_stack_3->SetBinContent(1,1717.699);
   hdirt_stack_3->SetBinContent(2,317.8812);
   hdirt_stack_3->SetBinContent(3,212.7158);
   hdirt_stack_3->SetBinContent(4,177.0221);
   hdirt_stack_3->SetBinContent(5,152.2346);
   hdirt_stack_3->SetBinContent(6,133.0517);
   hdirt_stack_3->SetBinContent(7,137.9294);
   hdirt_stack_3->SetBinContent(8,123.6653);
   hdirt_stack_3->SetBinContent(9,109.8635);
   hdirt_stack_3->SetBinContent(10,110.7312);
   hdirt_stack_3->SetBinContent(11,88.91037);
   hdirt_stack_3->SetBinContent(12,100.0901);
   hdirt_stack_3->SetBinContent(13,92.62412);
   hdirt_stack_3->SetBinContent(14,90.62839);
   hdirt_stack_3->SetBinContent(15,97.90468);
   hdirt_stack_3->SetBinContent(16,93.69186);
   hdirt_stack_3->SetBinContent(17,87.82867);
   hdirt_stack_3->SetBinContent(18,79.66579);
   hdirt_stack_3->SetBinContent(19,95.55431);
   hdirt_stack_3->SetBinContent(20,104.5506);
   hdirt_stack_3->SetBinContent(21,159.4365);
   hdirt_stack_3->SetBinContent(22,103.8711);
   hdirt_stack_3->SetBinContent(23,75.78903);
   hdirt_stack_3->SetBinContent(24,76.05125);
   hdirt_stack_3->SetBinContent(25,58.02823);
   hdirt_stack_3->SetBinContent(26,72.58337);
   hdirt_stack_3->SetBinContent(27,58.0272);
   hdirt_stack_3->SetBinContent(28,74.57792);
   hdirt_stack_3->SetBinContent(29,82.43475);
   hdirt_stack_3->SetBinContent(30,89.04474);
   hdirt_stack_3->SetBinContent(31,4.21965);
   hdirt_stack_3->SetBinError(0,2.812274);
   hdirt_stack_3->SetBinError(1,27.03979);
   hdirt_stack_3->SetBinError(2,11.24974);
   hdirt_stack_3->SetBinError(3,9.097186);
   hdirt_stack_3->SetBinError(4,7.828242);
   hdirt_stack_3->SetBinError(5,7.566628);
   hdirt_stack_3->SetBinError(6,6.757378);
   hdirt_stack_3->SetBinError(7,8.687614);
   hdirt_stack_3->SetBinError(8,6.545795);
   hdirt_stack_3->SetBinError(9,6.373317);
   hdirt_stack_3->SetBinError(10,6.816107);
   hdirt_stack_3->SetBinError(11,5.633762);
   hdirt_stack_3->SetBinError(12,6.361937);
   hdirt_stack_3->SetBinError(13,6.459688);
   hdirt_stack_3->SetBinError(14,5.95744);
   hdirt_stack_3->SetBinError(15,6.470394);
   hdirt_stack_3->SetBinError(16,5.586623);
   hdirt_stack_3->SetBinError(17,6.456639);
   hdirt_stack_3->SetBinError(18,4.988118);
   hdirt_stack_3->SetBinError(19,7.682225);
   hdirt_stack_3->SetBinError(20,6.695919);
   hdirt_stack_3->SetBinError(21,8.256065);
   hdirt_stack_3->SetBinError(22,5.840291);
   hdirt_stack_3->SetBinError(23,5.208802);
   hdirt_stack_3->SetBinError(24,5.834019);
   hdirt_stack_3->SetBinError(25,4.137631);
   hdirt_stack_3->SetBinError(26,5.525348);
   hdirt_stack_3->SetBinError(27,4.768634);
   hdirt_stack_3->SetBinError(28,5.698048);
   hdirt_stack_3->SetBinError(29,5.674044);
   hdirt_stack_3->SetBinError(30,5.045318);
   hdirt_stack_3->SetBinError(31,1.044816);
   hdirt_stack_3->SetEntries(20115);

   ci = 1462;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,36.76438);
   houtFV_stack_4->SetBinContent(1,1502.96);
   houtFV_stack_4->SetBinContent(2,340.6453);
   houtFV_stack_4->SetBinContent(3,300.6357);
   houtFV_stack_4->SetBinContent(4,304.8896);
   houtFV_stack_4->SetBinContent(5,313.7786);
   houtFV_stack_4->SetBinContent(6,286.6461);
   houtFV_stack_4->SetBinContent(7,290.182);
   houtFV_stack_4->SetBinContent(8,306.7959);
   houtFV_stack_4->SetBinContent(9,269.791);
   houtFV_stack_4->SetBinContent(10,286.9595);
   houtFV_stack_4->SetBinContent(11,271.6331);
   houtFV_stack_4->SetBinContent(12,278.8515);
   houtFV_stack_4->SetBinContent(13,258.8383);
   houtFV_stack_4->SetBinContent(14,266.7853);
   houtFV_stack_4->SetBinContent(15,314.5269);
   houtFV_stack_4->SetBinContent(16,298.7724);
   houtFV_stack_4->SetBinContent(17,268.2312);
   houtFV_stack_4->SetBinContent(18,265.9196);
   houtFV_stack_4->SetBinContent(19,301.6959);
   houtFV_stack_4->SetBinContent(20,296.3271);
   houtFV_stack_4->SetBinContent(21,377.543);
   houtFV_stack_4->SetBinContent(22,305.6537);
   houtFV_stack_4->SetBinContent(23,253.4925);
   houtFV_stack_4->SetBinContent(24,238.0568);
   houtFV_stack_4->SetBinContent(25,236.9774);
   houtFV_stack_4->SetBinContent(26,232.7332);
   houtFV_stack_4->SetBinContent(27,210.571);
   houtFV_stack_4->SetBinContent(28,196.2106);
   houtFV_stack_4->SetBinContent(29,172.313);
   houtFV_stack_4->SetBinContent(30,168.9592);
   houtFV_stack_4->SetBinContent(31,15.32031);
   houtFV_stack_4->SetBinError(0,3.069337);
   houtFV_stack_4->SetBinError(1,23.70399);
   houtFV_stack_4->SetBinError(2,11.78497);
   houtFV_stack_4->SetBinError(3,10.80079);
   houtFV_stack_4->SetBinError(4,9.98173);
   houtFV_stack_4->SetBinError(5,11.59672);
   houtFV_stack_4->SetBinError(6,10.66226);
   houtFV_stack_4->SetBinError(7,10.23872);
   houtFV_stack_4->SetBinError(8,10.10961);
   houtFV_stack_4->SetBinError(9,9.901872);
   houtFV_stack_4->SetBinError(10,10.54271);
   houtFV_stack_4->SetBinError(11,9.525502);
   houtFV_stack_4->SetBinError(12,10.31487);
   houtFV_stack_4->SetBinError(13,9.676991);
   houtFV_stack_4->SetBinError(14,9.82387);
   houtFV_stack_4->SetBinError(15,11.91941);
   houtFV_stack_4->SetBinError(16,11.73127);
   houtFV_stack_4->SetBinError(17,9.303954);
   houtFV_stack_4->SetBinError(18,9.605431);
   houtFV_stack_4->SetBinError(19,10.81677);
   houtFV_stack_4->SetBinError(20,11.20311);
   houtFV_stack_4->SetBinError(21,11.16619);
   houtFV_stack_4->SetBinError(22,11.15841);
   houtFV_stack_4->SetBinError(23,8.583228);
   houtFV_stack_4->SetBinError(24,9.942617);
   houtFV_stack_4->SetBinError(25,9.134667);
   houtFV_stack_4->SetBinError(26,9.069819);
   houtFV_stack_4->SetBinError(27,7.84581);
   houtFV_stack_4->SetBinError(28,7.643983);
   houtFV_stack_4->SetBinError(29,7.069012);
   houtFV_stack_4->SetBinError(30,7.36825);
   houtFV_stack_4->SetBinError(31,2.055013);
   houtFV_stack_4->SetEntries(37487);

   ci = 1463;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.465427);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.878854);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9338218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.55269);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4879178);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.03114);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.240226);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5995177);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.115672);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.367108);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7807039);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.129458);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.631162);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.9753399);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.226608);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.608166);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.048998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.127626);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.283408);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,1.253676);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.8507857);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,2.620616);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,2.605502);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4941319);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3111014);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2812022);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4749379);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1427183);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.297566);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3659082);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1532389);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3318839);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3259676);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4273996);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2608584);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3873518);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4585896);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2949384);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3560243);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5795045);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4852559);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2806245);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4246589);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3290372);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2514891);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.5081112);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.4952454);
   hNCpi0inFVcoh_stack_5->SetEntries(638);

   ci = 1464;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.445904);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(30,1.422244);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2422936);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2218905);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.4446571);
   hNCpi0inFVqe_stack_6->SetEntries(161);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,2.719917);
   hNCpi0inFVres_stack_7->SetBinContent(1,36.36995);
   hNCpi0inFVres_stack_7->SetBinContent(2,27.42597);
   hNCpi0inFVres_stack_7->SetBinContent(3,28.63972);
   hNCpi0inFVres_stack_7->SetBinContent(4,25.62991);
   hNCpi0inFVres_stack_7->SetBinContent(5,28.8047);
   hNCpi0inFVres_stack_7->SetBinContent(6,28.04276);
   hNCpi0inFVres_stack_7->SetBinContent(7,30.56741);
   hNCpi0inFVres_stack_7->SetBinContent(8,27.30407);
   hNCpi0inFVres_stack_7->SetBinContent(9,27.50718);
   hNCpi0inFVres_stack_7->SetBinContent(10,27.09116);
   hNCpi0inFVres_stack_7->SetBinContent(11,26.66155);
   hNCpi0inFVres_stack_7->SetBinContent(12,26.59497);
   hNCpi0inFVres_stack_7->SetBinContent(13,23.10128);
   hNCpi0inFVres_stack_7->SetBinContent(14,30.7921);
   hNCpi0inFVres_stack_7->SetBinContent(15,30.31415);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.54791);
   hNCpi0inFVres_stack_7->SetBinContent(17,24.12396);
   hNCpi0inFVres_stack_7->SetBinContent(18,27.41135);
   hNCpi0inFVres_stack_7->SetBinContent(19,26.32558);
   hNCpi0inFVres_stack_7->SetBinContent(20,26.59046);
   hNCpi0inFVres_stack_7->SetBinContent(21,35.15182);
   hNCpi0inFVres_stack_7->SetBinContent(22,30.81663);
   hNCpi0inFVres_stack_7->SetBinContent(23,26.20452);
   hNCpi0inFVres_stack_7->SetBinContent(24,24.00387);
   hNCpi0inFVres_stack_7->SetBinContent(25,27.94678);
   hNCpi0inFVres_stack_7->SetBinContent(26,29.82821);
   hNCpi0inFVres_stack_7->SetBinContent(27,26.69508);
   hNCpi0inFVres_stack_7->SetBinContent(28,32.54132);
   hNCpi0inFVres_stack_7->SetBinContent(29,49.42374);
   hNCpi0inFVres_stack_7->SetBinContent(30,63.58187);
   hNCpi0inFVres_stack_7->SetBinContent(31,1.338872);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2874739);
   hNCpi0inFVres_stack_7->SetBinError(1,1.9531);
   hNCpi0inFVres_stack_7->SetBinError(2,1.699493);
   hNCpi0inFVres_stack_7->SetBinError(3,1.737324);
   hNCpi0inFVres_stack_7->SetBinError(4,1.652604);
   hNCpi0inFVres_stack_7->SetBinError(5,1.724538);
   hNCpi0inFVres_stack_7->SetBinError(6,1.707908);
   hNCpi0inFVres_stack_7->SetBinError(7,1.851412);
   hNCpi0inFVres_stack_7->SetBinError(8,1.676474);
   hNCpi0inFVres_stack_7->SetBinError(9,1.683096);
   hNCpi0inFVres_stack_7->SetBinError(10,1.653604);
   hNCpi0inFVres_stack_7->SetBinError(11,1.708193);
   hNCpi0inFVres_stack_7->SetBinError(12,1.741421);
   hNCpi0inFVres_stack_7->SetBinError(13,1.516997);
   hNCpi0inFVres_stack_7->SetBinError(14,1.85465);
   hNCpi0inFVres_stack_7->SetBinError(15,1.851605);
   hNCpi0inFVres_stack_7->SetBinError(16,1.559967);
   hNCpi0inFVres_stack_7->SetBinError(17,1.590926);
   hNCpi0inFVres_stack_7->SetBinError(18,1.681997);
   hNCpi0inFVres_stack_7->SetBinError(19,1.680416);
   hNCpi0inFVres_stack_7->SetBinError(20,1.651111);
   hNCpi0inFVres_stack_7->SetBinError(21,1.941324);
   hNCpi0inFVres_stack_7->SetBinError(22,1.998817);
   hNCpi0inFVres_stack_7->SetBinError(23,1.705837);
   hNCpi0inFVres_stack_7->SetBinError(24,1.469007);
   hNCpi0inFVres_stack_7->SetBinError(25,1.739259);
   hNCpi0inFVres_stack_7->SetBinError(26,1.795289);
   hNCpi0inFVres_stack_7->SetBinError(27,1.62916);
   hNCpi0inFVres_stack_7->SetBinError(28,1.846043);
   hNCpi0inFVres_stack_7->SetBinError(29,2.333969);
   hNCpi0inFVres_stack_7->SetBinError(30,2.628417);
   hNCpi0inFVres_stack_7->SetBinError(31,0.3411366);
   hNCpi0inFVres_stack_7->SetEntries(16798);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,1.381054);
   hNCpi0inFVdis_stack_8->SetBinContent(1,13.88895);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.319);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.86993);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.62714);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.121012);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.15115);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.85332);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.60404);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.87706);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.56907);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.07957);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.93544);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.95139);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.0193);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.416294);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.62529);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.32621);
   hNCpi0inFVdis_stack_8->SetBinContent(18,13.94342);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.90347);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.7707);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.58612);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.2625);
   hNCpi0inFVdis_stack_8->SetBinContent(23,12.43814);
   hNCpi0inFVdis_stack_8->SetBinContent(24,11.545);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.368614);
   hNCpi0inFVdis_stack_8->SetBinContent(26,13.13714);
   hNCpi0inFVdis_stack_8->SetBinContent(27,12.42369);
   hNCpi0inFVdis_stack_8->SetBinContent(28,15.56545);
   hNCpi0inFVdis_stack_8->SetBinContent(29,22.49298);
   hNCpi0inFVdis_stack_8->SetBinContent(30,24.09474);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.5583361);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.3328595);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.28523);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.291373);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.191681);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.288381);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9757777);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.994315);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.183817);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.149426);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.052225);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.263224);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9938256);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.16384);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.177581);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.115835);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.028406);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.055303);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.182446);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.296287);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.116562);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.138368);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.267185);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.055579);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.149905);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.10989);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9215878);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.221493);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.138368);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.325262);
   hNCpi0inFVdis_stack_8->SetBinError(29,1.580515);
   hNCpi0inFVdis_stack_8->SetBinError(30,1.643709);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.2847561);
   hNCpi0inFVdis_stack_8->SetEntries(6964);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(0,11.50302);
   hCCpi0inFV_stack_10->SetBinContent(1,226.325);
   hCCpi0inFV_stack_10->SetBinContent(2,280.8553);
   hCCpi0inFV_stack_10->SetBinContent(3,270.7338);
   hCCpi0inFV_stack_10->SetBinContent(4,275.719);
   hCCpi0inFV_stack_10->SetBinContent(5,277.9451);
   hCCpi0inFV_stack_10->SetBinContent(6,269.4976);
   hCCpi0inFV_stack_10->SetBinContent(7,282.1942);
   hCCpi0inFV_stack_10->SetBinContent(8,277.4865);
   hCCpi0inFV_stack_10->SetBinContent(9,280.6826);
   hCCpi0inFV_stack_10->SetBinContent(10,290.601);
   hCCpi0inFV_stack_10->SetBinContent(11,285.6454);
   hCCpi0inFV_stack_10->SetBinContent(12,284.0502);
   hCCpi0inFV_stack_10->SetBinContent(13,273.3734);
   hCCpi0inFV_stack_10->SetBinContent(14,274.113);
   hCCpi0inFV_stack_10->SetBinContent(15,282.5182);
   hCCpi0inFV_stack_10->SetBinContent(16,292.9432);
   hCCpi0inFV_stack_10->SetBinContent(17,281.5233);
   hCCpi0inFV_stack_10->SetBinContent(18,273.9713);
   hCCpi0inFV_stack_10->SetBinContent(19,291.804);
   hCCpi0inFV_stack_10->SetBinContent(20,280.76);
   hCCpi0inFV_stack_10->SetBinContent(21,288.0339);
   hCCpi0inFV_stack_10->SetBinContent(22,289.7682);
   hCCpi0inFV_stack_10->SetBinContent(23,294.7148);
   hCCpi0inFV_stack_10->SetBinContent(24,290.8816);
   hCCpi0inFV_stack_10->SetBinContent(25,314.1837);
   hCCpi0inFV_stack_10->SetBinContent(26,318.9221);
   hCCpi0inFV_stack_10->SetBinContent(27,336.4643);
   hCCpi0inFV_stack_10->SetBinContent(28,353.1049);
   hCCpi0inFV_stack_10->SetBinContent(29,386.3137);
   hCCpi0inFV_stack_10->SetBinContent(30,317.5716);
   hCCpi0inFV_stack_10->SetBinContent(31,9.562945);
   hCCpi0inFV_stack_10->SetBinError(0,1.761371);
   hCCpi0inFV_stack_10->SetBinError(1,7.583038);
   hCCpi0inFV_stack_10->SetBinError(2,8.418562);
   hCCpi0inFV_stack_10->SetBinError(3,8.298245);
   hCCpi0inFV_stack_10->SetBinError(4,8.275666);
   hCCpi0inFV_stack_10->SetBinError(5,8.400011);
   hCCpi0inFV_stack_10->SetBinError(6,8.266603);
   hCCpi0inFV_stack_10->SetBinError(7,8.360172);
   hCCpi0inFV_stack_10->SetBinError(8,8.395364);
   hCCpi0inFV_stack_10->SetBinError(9,8.479227);
   hCCpi0inFV_stack_10->SetBinError(10,8.569715);
   hCCpi0inFV_stack_10->SetBinError(11,8.527178);
   hCCpi0inFV_stack_10->SetBinError(12,8.485006);
   hCCpi0inFV_stack_10->SetBinError(13,8.307551);
   hCCpi0inFV_stack_10->SetBinError(14,8.317371);
   hCCpi0inFV_stack_10->SetBinError(15,8.430337);
   hCCpi0inFV_stack_10->SetBinError(16,8.607781);
   hCCpi0inFV_stack_10->SetBinError(17,8.375129);
   hCCpi0inFV_stack_10->SetBinError(18,8.317127);
   hCCpi0inFV_stack_10->SetBinError(19,8.582616);
   hCCpi0inFV_stack_10->SetBinError(20,8.338632);
   hCCpi0inFV_stack_10->SetBinError(21,8.59978);
   hCCpi0inFV_stack_10->SetBinError(22,8.541582);
   hCCpi0inFV_stack_10->SetBinError(23,8.623079);
   hCCpi0inFV_stack_10->SetBinError(24,8.544627);
   hCCpi0inFV_stack_10->SetBinError(25,8.938826);
   hCCpi0inFV_stack_10->SetBinError(26,9.040271);
   hCCpi0inFV_stack_10->SetBinError(27,9.334295);
   hCCpi0inFV_stack_10->SetBinError(28,9.405153);
   hCCpi0inFV_stack_10->SetBinError(29,9.804257);
   hCCpi0inFV_stack_10->SetBinError(30,8.975408);
   hCCpi0inFV_stack_10->SetBinError(31,1.588369);
   hCCpi0inFV_stack_10->SetEntries(37413);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,7.327525);
   hNCinFV_stack_11->SetBinContent(1,97.0238);
   hNCinFV_stack_11->SetBinContent(2,79.80475);
   hNCinFV_stack_11->SetBinContent(3,77.19466);
   hNCinFV_stack_11->SetBinContent(4,87.18259);
   hNCinFV_stack_11->SetBinContent(5,79.07837);
   hNCinFV_stack_11->SetBinContent(6,85.00594);
   hNCinFV_stack_11->SetBinContent(7,86.34044);
   hNCinFV_stack_11->SetBinContent(8,85.30688);
   hNCinFV_stack_11->SetBinContent(9,98.3096);
   hNCinFV_stack_11->SetBinContent(10,83.95137);
   hNCinFV_stack_11->SetBinContent(11,82.7318);
   hNCinFV_stack_11->SetBinContent(12,79.84724);
   hNCinFV_stack_11->SetBinContent(13,84.69497);
   hNCinFV_stack_11->SetBinContent(14,79.32158);
   hNCinFV_stack_11->SetBinContent(15,83.60446);
   hNCinFV_stack_11->SetBinContent(16,88.79509);
   hNCinFV_stack_11->SetBinContent(17,80.32648);
   hNCinFV_stack_11->SetBinContent(18,90.0373);
   hNCinFV_stack_11->SetBinContent(19,86.69728);
   hNCinFV_stack_11->SetBinContent(20,84.49004);
   hNCinFV_stack_11->SetBinContent(21,104.1005);
   hNCinFV_stack_11->SetBinContent(22,94.41098);
   hNCinFV_stack_11->SetBinContent(23,79.5782);
   hNCinFV_stack_11->SetBinContent(24,91.29051);
   hNCinFV_stack_11->SetBinContent(25,87.25404);
   hNCinFV_stack_11->SetBinContent(26,83.76871);
   hNCinFV_stack_11->SetBinContent(27,109.3997);
   hNCinFV_stack_11->SetBinContent(28,118.8297);
   hNCinFV_stack_11->SetBinContent(29,158.157);
   hNCinFV_stack_11->SetBinContent(30,234.4872);
   hNCinFV_stack_11->SetBinContent(31,5.625052);
   hNCinFV_stack_11->SetBinError(0,1.365089);
   hNCinFV_stack_11->SetBinError(1,4.942641);
   hNCinFV_stack_11->SetBinError(2,4.471067);
   hNCinFV_stack_11->SetBinError(3,4.387766);
   hNCinFV_stack_11->SetBinError(4,4.654709);
   hNCinFV_stack_11->SetBinError(5,4.418909);
   hNCinFV_stack_11->SetBinError(6,4.623102);
   hNCinFV_stack_11->SetBinError(7,4.678127);
   hNCinFV_stack_11->SetBinError(8,4.545666);
   hNCinFV_stack_11->SetBinError(9,4.927257);
   hNCinFV_stack_11->SetBinError(10,4.597231);
   hNCinFV_stack_11->SetBinError(11,4.548076);
   hNCinFV_stack_11->SetBinError(12,4.457902);
   hNCinFV_stack_11->SetBinError(13,4.56859);
   hNCinFV_stack_11->SetBinError(14,4.418651);
   hNCinFV_stack_11->SetBinError(15,4.562483);
   hNCinFV_stack_11->SetBinError(16,4.6978);
   hNCinFV_stack_11->SetBinError(17,4.380805);
   hNCinFV_stack_11->SetBinError(18,4.761228);
   hNCinFV_stack_11->SetBinError(19,4.705988);
   hNCinFV_stack_11->SetBinError(20,4.548725);
   hNCinFV_stack_11->SetBinError(21,5.09955);
   hNCinFV_stack_11->SetBinError(22,4.893902);
   hNCinFV_stack_11->SetBinError(23,4.501314);
   hNCinFV_stack_11->SetBinError(24,4.804618);
   hNCinFV_stack_11->SetBinError(25,4.731429);
   hNCinFV_stack_11->SetBinError(26,4.484158);
   hNCinFV_stack_11->SetBinError(27,5.28959);
   hNCinFV_stack_11->SetBinError(28,5.463242);
   hNCinFV_stack_11->SetBinError(29,6.354909);
   hNCinFV_stack_11->SetBinError(30,7.750678);
   hNCinFV_stack_11->SetBinError(31,1.161279);
   hNCinFV_stack_11->SetEntries(12313);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,95.12852);
   hnumuCCinFV_stack_12->SetBinContent(1,2368.992);
   hnumuCCinFV_stack_12->SetBinContent(2,2701.167);
   hnumuCCinFV_stack_12->SetBinContent(3,2649.265);
   hnumuCCinFV_stack_12->SetBinContent(4,2671.28);
   hnumuCCinFV_stack_12->SetBinContent(5,2783.154);
   hnumuCCinFV_stack_12->SetBinContent(6,2789.372);
   hnumuCCinFV_stack_12->SetBinContent(7,2643.396);
   hnumuCCinFV_stack_12->SetBinContent(8,2759.591);
   hnumuCCinFV_stack_12->SetBinContent(9,2826.965);
   hnumuCCinFV_stack_12->SetBinContent(10,2892.367);
   hnumuCCinFV_stack_12->SetBinContent(11,2722.542);
   hnumuCCinFV_stack_12->SetBinContent(12,2750.725);
   hnumuCCinFV_stack_12->SetBinContent(13,2864.773);
   hnumuCCinFV_stack_12->SetBinContent(14,2784.106);
   hnumuCCinFV_stack_12->SetBinContent(15,2730.201);
   hnumuCCinFV_stack_12->SetBinContent(16,2868.384);
   hnumuCCinFV_stack_12->SetBinContent(17,2788.629);
   hnumuCCinFV_stack_12->SetBinContent(18,2848.902);
   hnumuCCinFV_stack_12->SetBinContent(19,2944.2);
   hnumuCCinFV_stack_12->SetBinContent(20,2856.03);
   hnumuCCinFV_stack_12->SetBinContent(21,2683.104);
   hnumuCCinFV_stack_12->SetBinContent(22,2870.161);
   hnumuCCinFV_stack_12->SetBinContent(23,3020.292);
   hnumuCCinFV_stack_12->SetBinContent(24,2976.403);
   hnumuCCinFV_stack_12->SetBinContent(25,3282.524);
   hnumuCCinFV_stack_12->SetBinContent(26,3227.359);
   hnumuCCinFV_stack_12->SetBinContent(27,3392.86);
   hnumuCCinFV_stack_12->SetBinContent(28,3479.398);
   hnumuCCinFV_stack_12->SetBinContent(29,3635.986);
   hnumuCCinFV_stack_12->SetBinContent(30,3020.707);
   hnumuCCinFV_stack_12->SetBinContent(31,85.45901);
   hnumuCCinFV_stack_12->SetBinError(0,6.472558);
   hnumuCCinFV_stack_12->SetBinError(1,34.75258);
   hnumuCCinFV_stack_12->SetBinError(2,35.88881);
   hnumuCCinFV_stack_12->SetBinError(3,36.77732);
   hnumuCCinFV_stack_12->SetBinError(4,36.80586);
   hnumuCCinFV_stack_12->SetBinError(5,37.28204);
   hnumuCCinFV_stack_12->SetBinError(6,37.24715);
   hnumuCCinFV_stack_12->SetBinError(7,35.71573);
   hnumuCCinFV_stack_12->SetBinError(8,36.72796);
   hnumuCCinFV_stack_12->SetBinError(9,37.18926);
   hnumuCCinFV_stack_12->SetBinError(10,38.03446);
   hnumuCCinFV_stack_12->SetBinError(11,35.66582);
   hnumuCCinFV_stack_12->SetBinError(12,36.14441);
   hnumuCCinFV_stack_12->SetBinError(13,38.09846);
   hnumuCCinFV_stack_12->SetBinError(14,36.44642);
   hnumuCCinFV_stack_12->SetBinError(15,35.21922);
   hnumuCCinFV_stack_12->SetBinError(16,38.62685);
   hnumuCCinFV_stack_12->SetBinError(17,36.08003);
   hnumuCCinFV_stack_12->SetBinError(18,37.1126);
   hnumuCCinFV_stack_12->SetBinError(19,37.09889);
   hnumuCCinFV_stack_12->SetBinError(20,38.81173);
   hnumuCCinFV_stack_12->SetBinError(21,35.47271);
   hnumuCCinFV_stack_12->SetBinError(22,38.20089);
   hnumuCCinFV_stack_12->SetBinError(23,38.19584);
   hnumuCCinFV_stack_12->SetBinError(24,38.90446);
   hnumuCCinFV_stack_12->SetBinError(25,41.04895);
   hnumuCCinFV_stack_12->SetBinError(26,40.44819);
   hnumuCCinFV_stack_12->SetBinError(27,42.46348);
   hnumuCCinFV_stack_12->SetBinError(28,42.39759);
   hnumuCCinFV_stack_12->SetBinError(29,44.22126);
   hnumuCCinFV_stack_12->SetBinError(30,38.15219);
   hnumuCCinFV_stack_12->SetBinError(31,6.449162);
   hnumuCCinFV_stack_12->SetEntries(312552);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(0,0.6233681);
   hnueCCinFV_stack_13->SetBinContent(1,11.857);
   hnueCCinFV_stack_13->SetBinContent(2,15.42497);
   hnueCCinFV_stack_13->SetBinContent(3,11.44825);
   hnueCCinFV_stack_13->SetBinContent(4,16.60439);
   hnueCCinFV_stack_13->SetBinContent(5,11.61022);
   hnueCCinFV_stack_13->SetBinContent(6,9.122491);
   hnueCCinFV_stack_13->SetBinContent(7,15.08493);
   hnueCCinFV_stack_13->SetBinContent(8,15.18784);
   hnueCCinFV_stack_13->SetBinContent(9,12.4179);
   hnueCCinFV_stack_13->SetBinContent(10,13.62593);
   hnueCCinFV_stack_13->SetBinContent(11,12.23042);
   hnueCCinFV_stack_13->SetBinContent(12,14.07);
   hnueCCinFV_stack_13->SetBinContent(13,14.06911);
   hnueCCinFV_stack_13->SetBinContent(14,17.26833);
   hnueCCinFV_stack_13->SetBinContent(15,13.30777);
   hnueCCinFV_stack_13->SetBinContent(16,11.69555);
   hnueCCinFV_stack_13->SetBinContent(17,13.51976);
   hnueCCinFV_stack_13->SetBinContent(18,13.28406);
   hnueCCinFV_stack_13->SetBinContent(19,17.76339);
   hnueCCinFV_stack_13->SetBinContent(20,15.90909);
   hnueCCinFV_stack_13->SetBinContent(21,13.86508);
   hnueCCinFV_stack_13->SetBinContent(22,13.05318);
   hnueCCinFV_stack_13->SetBinContent(23,13.50697);
   hnueCCinFV_stack_13->SetBinContent(24,13.49993);
   hnueCCinFV_stack_13->SetBinContent(25,13.06288);
   hnueCCinFV_stack_13->SetBinContent(26,13.0113);
   hnueCCinFV_stack_13->SetBinContent(27,15.56717);
   hnueCCinFV_stack_13->SetBinContent(28,20.98598);
   hnueCCinFV_stack_13->SetBinContent(29,30.30085);
   hnueCCinFV_stack_13->SetBinContent(30,15.40394);
   hnueCCinFV_stack_13->SetBinContent(31,0.4476171);
   hnueCCinFV_stack_13->SetBinError(0,0.4402989);
   hnueCCinFV_stack_13->SetBinError(1,1.710938);
   hnueCCinFV_stack_13->SetBinError(2,3.717654);
   hnueCCinFV_stack_13->SetBinError(3,1.878735);
   hnueCCinFV_stack_13->SetBinError(4,3.423218);
   hnueCCinFV_stack_13->SetBinError(5,2.876302);
   hnueCCinFV_stack_13->SetBinError(6,1.459813);
   hnueCCinFV_stack_13->SetBinError(7,3.126208);
   hnueCCinFV_stack_13->SetBinError(8,2.333472);
   hnueCCinFV_stack_13->SetBinError(9,1.829741);
   hnueCCinFV_stack_13->SetBinError(10,2.732009);
   hnueCCinFV_stack_13->SetBinError(11,1.939297);
   hnueCCinFV_stack_13->SetBinError(12,2.100842);
   hnueCCinFV_stack_13->SetBinError(13,2.243699);
   hnueCCinFV_stack_13->SetBinError(14,2.876269);
   hnueCCinFV_stack_13->SetBinError(15,2.51937);
   hnueCCinFV_stack_13->SetBinError(16,2.226125);
   hnueCCinFV_stack_13->SetBinError(17,2.04192);
   hnueCCinFV_stack_13->SetBinError(18,3.092641);
   hnueCCinFV_stack_13->SetBinError(19,3.1384);
   hnueCCinFV_stack_13->SetBinError(20,2.628774);
   hnueCCinFV_stack_13->SetBinError(21,1.945442);
   hnueCCinFV_stack_13->SetBinError(22,2.460354);
   hnueCCinFV_stack_13->SetBinError(23,1.860103);
   hnueCCinFV_stack_13->SetBinError(24,3.248166);
   hnueCCinFV_stack_13->SetBinError(25,2.42552);
   hnueCCinFV_stack_13->SetBinError(26,1.950031);
   hnueCCinFV_stack_13->SetBinError(27,2.535646);
   hnueCCinFV_stack_13->SetBinError(28,4.865972);
   hnueCCinFV_stack_13->SetBinError(29,4.165246);
   hnueCCinFV_stack_13->SetBinError(30,2.055015);
   hnueCCinFV_stack_13->SetBinError(31,0.3188238);
   hnueCCinFV_stack_13->SetEntries(1603);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__8->SetBinContent(0,341.6726);
   hmcerror__8->SetBinContent(1,7607.253);
   hmcerror__8->SetBinContent(2,4730.664);
   hmcerror__8->SetBinContent(3,4452.871);
   hmcerror__8->SetBinContent(4,4479.011);
   hmcerror__8->SetBinContent(5,4505.511);
   hmcerror__8->SetBinContent(6,4353.508);
   hmcerror__8->SetBinContent(7,4248.667);
   hmcerror__8->SetBinContent(8,4480.79);
   hmcerror__8->SetBinContent(9,4371.236);
   hmcerror__8->SetBinContent(10,4381.703);
   hmcerror__8->SetBinContent(11,4144.615);
   hmcerror__8->SetBinContent(12,4146.398);
   hmcerror__8->SetBinContent(13,4202.391);
   hmcerror__8->SetBinContent(14,4152.824);
   hmcerror__8->SetBinContent(15,4207.677);
   hmcerror__8->SetBinContent(16,4319.743);
   hmcerror__8->SetBinContent(17,4105.115);
   hmcerror__8->SetBinContent(18,4163.338);
   hmcerror__8->SetBinContent(19,4331.97);
   hmcerror__8->SetBinContent(20,4291.737);
   hmcerror__8->SetBinContent(21,4983.494);
   hmcerror__8->SetBinContent(22,4554.918);
   hmcerror__8->SetBinContent(23,4350.907);
   hmcerror__8->SetBinContent(24,4303.032);
   hmcerror__8->SetBinContent(25,4559.446);
   hmcerror__8->SetBinContent(26,4541.246);
   hmcerror__8->SetBinContent(27,4655.537);
   hmcerror__8->SetBinContent(28,4803.324);
   hmcerror__8->SetBinContent(29,5180.239);
   hmcerror__8->SetBinContent(30,4766.682);
   hmcerror__8->SetBinContent(31,179.2824);
   hmcerror__8->SetBinError(0,11.14915);
   hmcerror__8->SetBinError(1,949.4214);
   hmcerror__8->SetBinError(2,616.3853);
   hmcerror__8->SetBinError(3,582.4866);
   hmcerror__8->SetBinError(4,599.642);
   hmcerror__8->SetBinError(5,601.0022);
   hmcerror__8->SetBinError(6,580.5136);
   hmcerror__8->SetBinError(7,563.5114);
   hmcerror__8->SetBinError(8,575.7352);
   hmcerror__8->SetBinError(9,582.0339);
   hmcerror__8->SetBinError(10,602.0149);
   hmcerror__8->SetBinError(11,546.347);
   hmcerror__8->SetBinError(12,551.6303);
   hmcerror__8->SetBinError(13,586.3842);
   hmcerror__8->SetBinError(14,567.236);
   hmcerror__8->SetBinError(15,549.9297);
   hmcerror__8->SetBinError(16,603.6145);
   hmcerror__8->SetBinError(17,549.7554);
   hmcerror__8->SetBinError(18,569.4847);
   hmcerror__8->SetBinError(19,588.4419);
   hmcerror__8->SetBinError(20,593.2403);
   hmcerror__8->SetBinError(21,607.8014);
   hmcerror__8->SetBinError(22,612.8761);
   hmcerror__8->SetBinError(23,588.1895);
   hmcerror__8->SetBinError(24,602.6159);
   hmcerror__8->SetBinError(25,640.1362);
   hmcerror__8->SetBinError(26,639.7028);
   hmcerror__8->SetBinError(27,671.7327);
   hmcerror__8->SetBinError(28,692.5057);
   hmcerror__8->SetBinError(29,754.0035);
   hmcerror__8->SetBinError(30,650.6735);
   hmcerror__8->SetBinError(31,68.58239);
   hmcerror__8->SetBinError(32,0.3895343);
   hmcerror__8->SetBinError(33,0.3895343);
   hmcerror__8->SetEntries(121226);

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
   
   Double_t _fx3009[32] = {
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
   Double_t _fy3009[32] = {
   6764,
   4815,
   4432,
   4633,
   4698,
   4486,
   4542,
   4621,
   4435,
   4426,
   4354,
   4321,
   4254,
   4400,
   4445,
   4391,
   4233,
   4354,
   4303,
   4287,
   5090,
   4659,
   4434,
   4468,
   4580,
   4709,
   4875,
   4807,
   5193,
   4657,
   160,
   0};
   Double_t _felx3009[32] = {
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
   Double_t _fely3009[32] = {
   82.24354,
   69.3902,
   66.57327,
   68.06614,
   68.54196,
   66.97761,
   67.39436,
   67.97794,
   66.5958,
   66.52819,
   65.98485,
   65.73431,
   65.2227,
   66.3325,
   66.67083,
   66.26462,
   65.06151,
   65.98485,
   65.59726,
   65.47519,
   71.34424,
   68.25687,
   66.58829,
   66.8431,
   67.6757,
   68.62215,
   69.8212,
   69.33253,
   72.06247,
   68.24222,
   12.64911,
   0};
   Double_t _fehx3009[32] = {
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
   Double_t _fehy3009[32] = {
   82.24354,
   69.3902,
   66.57327,
   68.06614,
   68.54196,
   66.97761,
   67.39436,
   67.97794,
   66.5958,
   66.52819,
   65.98485,
   65.73431,
   65.2227,
   66.3325,
   66.67083,
   66.26462,
   65.06151,
   65.98485,
   65.59726,
   65.47519,
   71.34424,
   68.25687,
   66.58829,
   66.8431,
   67.6757,
   68.62215,
   69.8212,
   69.33253,
   72.06247,
   68.24222,
   12.64911,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1210);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(7530.868);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=31.9/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 138826.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 3459.6","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 18376.8","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4978.3","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 9432.7","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  35.5","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.6","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  901.4","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  386.3","F");

   ci = 1467;
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

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 8752.3","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 2866.6","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86918.3","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 438.2","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("generic_PC_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[32] = {
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
   Double_t _fy3010[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[32] = {
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
   Double_t _fely3010[32] = {
   0.1248048,
   0.1302957,
   0.1308115,
   0.1338782,
   0.1333927,
   0.1333439,
   0.1326325,
   0.1284897,
   0.1331509,
   0.1373929,
   0.1318209,
   0.1330384,
   0.1395359,
   0.1365904,
   0.1306967,
   0.1397339,
   0.1339196,
   0.1367856,
   0.135837,
   0.1382285,
   0.1219629,
   0.1345526,
   0.1351878,
   0.1400445,
   0.1403978,
   0.140865,
   0.1442868,
   0.1441722,
   0.1455538,
   0.1365045,
   0.3825384,
   0};
   Double_t _fehx3010[32] = {
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
   Double_t _fehy3010[32] = {
   0.1248048,
   0.1302957,
   0.1308115,
   0.1338782,
   0.1333927,
   0.1333439,
   0.1326325,
   0.1284897,
   0.1331509,
   0.1373929,
   0.1318209,
   0.1330384,
   0.1395359,
   0.1365904,
   0.1306967,
   0.1397339,
   0.1339196,
   0.1367856,
   0.135837,
   0.1382285,
   0.1219629,
   0.1345526,
   0.1351878,
   0.1400445,
   0.1403978,
   0.140865,
   0.1442868,
   0.1441722,
   0.1455538,
   0.1365045,
   0.3825384,
   0};
   grae = new TGraphAsymmErrors(32,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1210);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3011[32] = {
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
   Double_t _fy3011[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[32] = {
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
   Double_t _fely3011[32] = {
   0.1221682,
   0.126563,
   0.1283126,
   0.1261479,
   0.1310776,
   0.1303313,
   0.1288173,
   0.1238861,
   0.1304138,
   0.1344516,
   0.1298084,
   0.1294427,
   0.1371171,
   0.1329743,
   0.1284099,
   0.137399,
   0.1313198,
   0.1348889,
   0.1332091,
   0.1356423,
   0.1155743,
   0.1318758,
   0.1324729,
   0.1374067,
   0.1386792,
   0.1387016,
   0.1429063,
   0.1407389,
   0.1431043,
   0.132133,
   0.1330098,
   0};
   Double_t _fehx3011[32] = {
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
   Double_t _fehy3011[32] = {
   0.1221682,
   0.126563,
   0.1283126,
   0.1261479,
   0.1310776,
   0.1303313,
   0.1288173,
   0.1238861,
   0.1304138,
   0.1344516,
   0.1298084,
   0.1294427,
   0.1371171,
   0.1329743,
   0.1284099,
   0.137399,
   0.1313198,
   0.1348889,
   0.1332091,
   0.1356423,
   0.1155743,
   0.1318758,
   0.1324729,
   0.1374067,
   0.1386792,
   0.1387016,
   0.1429063,
   0.1407389,
   0.1431043,
   0.132133,
   0.1330098,
   0};
   grae = new TGraphAsymmErrors(32,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1210);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3012[32] = {
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
   Double_t _fy3012[32] = {
   0.8891515,
   1.017828,
   0.995313,
   1.03438,
   1.042723,
   1.030433,
   1.069041,
   1.031291,
   1.014587,
   1.01011,
   1.05052,
   1.042109,
   1.012281,
   1.05952,
   1.056402,
   1.016496,
   1.031153,
   1.045795,
   0.9933126,
   0.9988963,
   1.021372,
   1.02285,
   1.019098,
   1.038338,
   1.004508,
   1.03694,
   1.04714,
   1.000765,
   1.002463,
   0.9769899,
   0.8924469,
   10};
   Double_t _felx3012[32] = {
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
   Double_t _fely3012[32] = {
   0.0108112,
   0.01466817,
   0.01495064,
   0.01519669,
   0.01521291,
   0.01538475,
   0.01586247,
   0.01517097,
   0.015235,
   0.01518318,
   0.01592062,
   0.01585335,
   0.01552038,
   0.01597287,
   0.01584504,
   0.01533994,
   0.01584889,
   0.01584902,
   0.01514259,
   0.0152561,
   0.01431611,
   0.01498531,
   0.01530446,
   0.01553395,
   0.01484296,
   0.01511086,
   0.01499745,
   0.01443428,
   0.01391103,
   0.0143165,
   0.07055412,
   0};
   Double_t _fehx3012[32] = {
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
   Double_t _fehy3012[32] = {
   0.0108112,
   0.01466817,
   0.01495064,
   0.01519669,
   0.01521291,
   0.01538475,
   0.01586247,
   0.01517097,
   0.015235,
   0.01518318,
   0.01592062,
   0.01585335,
   0.01552038,
   0.01597287,
   0.01584504,
   0.01533994,
   0.01584889,
   0.01584902,
   0.01514259,
   0.0152561,
   0.01431611,
   0.01498531,
   0.01530446,
   0.01553395,
   0.01484296,
   0.01511086,
   0.01499745,
   0.01443428,
   0.01391103,
   0.0143165,
   0.07055412,
   0};
   grae = new TGraphAsymmErrors(32,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1210);
   Graph_Graph3012->SetMinimum(0.7397035);
   Graph_Graph3012->SetMaximum(10.91781);
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
   
   TH1F *hist__9 = new TH1F("hist__9","generic_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

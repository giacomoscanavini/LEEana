#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Feb 17 21:15:02 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-2.335425,1241.026,258.2488);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__19->SetBinContent(0,0.4188362);
   hmc__19->SetBinContent(1,56.43711);
   hmc__19->SetBinContent(2,91.33113);
   hmc__19->SetBinContent(3,84.48935);
   hmc__19->SetBinContent(4,91.30714);
   hmc__19->SetBinContent(5,98.55273);
   hmc__19->SetBinContent(6,91.07385);
   hmc__19->SetBinContent(7,99.72809);
   hmc__19->SetBinContent(8,105.3946);
   hmc__19->SetBinContent(9,98.41402);
   hmc__19->SetBinContent(10,109.1905);
   hmc__19->SetBinContent(11,111.1636);
   hmc__19->SetBinContent(12,93.17168);
   hmc__19->SetBinContent(13,104.142);
   hmc__19->SetBinContent(14,116.7712);
   hmc__19->SetBinContent(15,97.9838);
   hmc__19->SetBinContent(16,103.5289);
   hmc__19->SetBinContent(17,105.4792);
   hmc__19->SetBinContent(18,101.4125);
   hmc__19->SetBinContent(19,101.4377);
   hmc__19->SetBinContent(20,103.4115);
   hmc__19->SetBinContent(21,83.6113);
   hmc__19->SetBinContent(22,96.28191);
   hmc__19->SetBinContent(23,94.74059);
   hmc__19->SetBinContent(24,98.68018);
   hmc__19->SetBinContent(25,95.12245);
   hmc__19->SetBinContent(26,95.07917);
   hmc__19->SetBinContent(27,98.24502);
   hmc__19->SetBinContent(28,96.12534);
   hmc__19->SetBinContent(29,78.39654);
   hmc__19->SetBinContent(30,40.33605);
   hmc__19->SetBinContent(31,1.190354);
   hmc__19->SetBinError(0,0.277838);
   hmc__19->SetBinError(1,24.42061);
   hmc__19->SetBinError(2,32.3517);
   hmc__19->SetBinError(3,31.73911);
   hmc__19->SetBinError(4,31.46593);
   hmc__19->SetBinError(5,34.56599);
   hmc__19->SetBinError(6,36.43564);
   hmc__19->SetBinError(7,36.39288);
   hmc__19->SetBinError(8,36.67365);
   hmc__19->SetBinError(9,36.0598);
   hmc__19->SetBinError(10,40.13795);
   hmc__19->SetBinError(11,38.61313);
   hmc__19->SetBinError(12,36.24029);
   hmc__19->SetBinError(13,39.28847);
   hmc__19->SetBinError(14,46.67475);
   hmc__19->SetBinError(15,40.35876);
   hmc__19->SetBinError(16,42.30179);
   hmc__19->SetBinError(17,40.44002);
   hmc__19->SetBinError(18,41.33516);
   hmc__19->SetBinError(19,39.80504);
   hmc__19->SetBinError(20,39.06312);
   hmc__19->SetBinError(21,30.46534);
   hmc__19->SetBinError(22,39.77892);
   hmc__19->SetBinError(23,38.51678);
   hmc__19->SetBinError(24,34.62595);
   hmc__19->SetBinError(25,38.67343);
   hmc__19->SetBinError(26,40.27115);
   hmc__19->SetBinError(27,36.84397);
   hmc__19->SetBinError(28,38.60567);
   hmc__19->SetBinError(29,31.04293);
   hmc__19->SetBinError(30,19.50331);
   hmc__19->SetBinError(31,2.053533);
   hmc__19->SetBinError(32,0.3895343);
   hmc__19->SetBinError(33,0.3895343);
   hmc__19->SetMinimum(-2.335425);
   hmc__19->SetMaximum(245.2196);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",32,0,1100);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(122.6098);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.715495);
   hbadmatch_stack_1->SetBinContent(2,0.9074);
   hbadmatch_stack_1->SetBinContent(3,0.9286332);
   hbadmatch_stack_1->SetBinContent(4,4.56361);
   hbadmatch_stack_1->SetBinContent(5,5.225035);
   hbadmatch_stack_1->SetBinContent(6,0.8304476);
   hbadmatch_stack_1->SetBinContent(7,3.089886);
   hbadmatch_stack_1->SetBinContent(8,3.014075);
   hbadmatch_stack_1->SetBinContent(9,1.492983);
   hbadmatch_stack_1->SetBinContent(10,1.302933);
   hbadmatch_stack_1->SetBinContent(11,2.362598);
   hbadmatch_stack_1->SetBinContent(12,2.73457);
   hbadmatch_stack_1->SetBinContent(13,1.358754);
   hbadmatch_stack_1->SetBinContent(14,2.128419);
   hbadmatch_stack_1->SetBinContent(15,0.6121498);
   hbadmatch_stack_1->SetBinContent(16,1.212556);
   hbadmatch_stack_1->SetBinContent(17,2.723053);
   hbadmatch_stack_1->SetBinContent(18,1.845473);
   hbadmatch_stack_1->SetBinContent(19,2.246746);
   hbadmatch_stack_1->SetBinContent(20,2.72278);
   hbadmatch_stack_1->SetBinContent(21,2.583933);
   hbadmatch_stack_1->SetBinContent(22,2.037084);
   hbadmatch_stack_1->SetBinContent(23,1.946214);
   hbadmatch_stack_1->SetBinContent(24,1.162824);
   hbadmatch_stack_1->SetBinContent(25,1.287246);
   hbadmatch_stack_1->SetBinContent(26,1.570342);
   hbadmatch_stack_1->SetBinContent(27,1.322087);
   hbadmatch_stack_1->SetBinContent(28,1.076719);
   hbadmatch_stack_1->SetBinContent(29,0.4150724);
   hbadmatch_stack_1->SetBinContent(30,1.492742);
   hbadmatch_stack_1->SetBinError(1,0.6212384);
   hbadmatch_stack_1->SetBinError(2,0.5319689);
   hbadmatch_stack_1->SetBinError(3,0.48078);
   hbadmatch_stack_1->SetBinError(4,1.492343);
   hbadmatch_stack_1->SetBinError(5,1.283681);
   hbadmatch_stack_1->SetBinError(6,0.4169359);
   hbadmatch_stack_1->SetBinError(7,1.014355);
   hbadmatch_stack_1->SetBinError(8,0.9135164);
   hbadmatch_stack_1->SetBinError(9,0.6962909);
   hbadmatch_stack_1->SetBinError(10,0.6719358);
   hbadmatch_stack_1->SetBinError(11,0.8311775);
   hbadmatch_stack_1->SetBinError(12,1.994337);
   hbadmatch_stack_1->SetBinError(13,0.5696088);
   hbadmatch_stack_1->SetBinError(14,0.7241034);
   hbadmatch_stack_1->SetBinError(15,0.3539944);
   hbadmatch_stack_1->SetBinError(16,0.4960151);
   hbadmatch_stack_1->SetBinError(17,0.8881213);
   hbadmatch_stack_1->SetBinError(18,0.719704);
   hbadmatch_stack_1->SetBinError(19,0.791993);
   hbadmatch_stack_1->SetBinError(20,0.8881252);
   hbadmatch_stack_1->SetBinError(21,0.8521243);
   hbadmatch_stack_1->SetBinError(22,0.7448655);
   hbadmatch_stack_1->SetBinError(23,0.662984);
   hbadmatch_stack_1->SetBinError(24,0.6149252);
   hbadmatch_stack_1->SetBinError(25,0.5291615);
   hbadmatch_stack_1->SetBinError(26,0.5552036);
   hbadmatch_stack_1->SetBinError(27,0.5554667);
   hbadmatch_stack_1->SetBinError(28,0.5551528);
   hbadmatch_stack_1->SetBinError(29,0.2938992);
   hbadmatch_stack_1->SetBinError(30,0.6862339);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,1.461993);
   hext_stack_2->SetBinContent(2,11.58937);
   hext_stack_2->SetBinContent(3,7.885314);
   hext_stack_2->SetBinContent(4,6.77367);
   hext_stack_2->SetBinContent(5,8.000648);
   hext_stack_2->SetBinContent(6,3.558419);
   hext_stack_2->SetBinContent(7,10.5671);
   hext_stack_2->SetBinContent(8,11.35435);
   hext_stack_2->SetBinContent(9,3.330584);
   hext_stack_2->SetBinContent(10,5.344809);
   hext_stack_2->SetBinContent(11,12.99511);
   hext_stack_2->SetBinContent(12,4.221574);
   hext_stack_2->SetBinContent(13,5.587004);
   hext_stack_2->SetBinContent(14,9.309826);
   hext_stack_2->SetBinContent(15,3.730002);
   hext_stack_2->SetBinContent(16,7.347444);
   hext_stack_2->SetBinContent(17,4.620993);
   hext_stack_2->SetBinContent(18,5.751408);
   hext_stack_2->SetBinContent(19,7.284012);
   hext_stack_2->SetBinContent(20,6.049854);
   hext_stack_2->SetBinContent(21,5.281377);
   hext_stack_2->SetBinContent(22,3.897177);
   hext_stack_2->SetBinContent(23,2.6702);
   hext_stack_2->SetBinContent(24,9.51889);
   hext_stack_2->SetBinContent(25,4.628173);
   hext_stack_2->SetBinContent(26,4.919439);
   hext_stack_2->SetBinContent(27,4.53161);
   hext_stack_2->SetBinContent(28,7.161499);
   hext_stack_2->SetBinContent(29,7.511847);
   hext_stack_2->SetBinContent(30,1.137595);
   hext_stack_2->SetBinContent(31,0.4065989);
   hext_stack_2->SetBinError(1,0.7356036);
   hext_stack_2->SetBinError(2,2.557177);
   hext_stack_2->SetBinError(3,2.111066);
   hext_stack_2->SetBinError(4,1.884738);
   hext_stack_2->SetBinError(5,1.961378);
   hext_stack_2->SetBinError(6,1.301958);
   hext_stack_2->SetBinError(7,2.34386);
   hext_stack_2->SetBinError(8,2.508547);
   hext_stack_2->SetBinError(9,1.116937);
   hext_stack_2->SetBinError(10,1.530177);
   hext_stack_2->SetBinError(11,2.559628);
   hext_stack_2->SetBinError(12,1.226034);
   hext_stack_2->SetBinError(13,1.544858);
   hext_stack_2->SetBinError(14,2.049844);
   hext_stack_2->SetBinError(15,1.270461);
   hext_stack_2->SetBinError(16,1.871207);
   hext_stack_2->SetBinError(17,1.367364);
   hext_stack_2->SetBinError(18,1.583276);
   hext_stack_2->SetBinError(19,1.781585);
   hext_stack_2->SetBinError(20,1.75513);
   hext_stack_2->SetBinError(21,1.41918);
   hext_stack_2->SetBinError(22,1.182339);
   hext_stack_2->SetBinError(23,1.050314);
   hext_stack_2->SetBinError(24,2.21736);
   hext_stack_2->SetBinError(25,1.291697);
   hext_stack_2->SetBinError(26,1.563138);
   hext_stack_2->SetBinError(27,1.418025);
   hext_stack_2->SetBinError(28,1.996207);
   hext_stack_2->SetBinError(29,1.903048);
   hext_stack_2->SetBinError(30,0.6602113);
   hext_stack_2->SetBinError(31,0.4065989);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,0.6131097);
   hdirt_stack_3->SetBinContent(2,0.9419918);
   hdirt_stack_3->SetBinContent(3,1.034213);
   hdirt_stack_3->SetBinContent(4,1.200712);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.4762587);
   hdirt_stack_3->SetBinContent(8,0.185975);
   hdirt_stack_3->SetBinContent(9,0.3896828);
   hdirt_stack_3->SetBinContent(10,1.771966);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.4794168);
   hdirt_stack_3->SetBinContent(14,0.5388689);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.1601926);
   hdirt_stack_3->SetBinContent(22,0.2188956);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.2620342);
   hdirt_stack_3->SetBinContent(27,0.4377912);
   hdirt_stack_3->SetBinContent(28,0.4413228);
   hdirt_stack_3->SetBinError(1,0.3557628);
   hdirt_stack_3->SetBinError(2,0.4286583);
   hdirt_stack_3->SetBinError(3,0.4656445);
   hdirt_stack_3->SetBinError(4,0.6249799);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.3652866);
   hdirt_stack_3->SetBinError(8,0.185975);
   hdirt_stack_3->SetBinError(9,0.2870053);
   hdirt_stack_3->SetBinError(10,1.059025);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(13,0.3402743);
   hdirt_stack_3->SetBinError(14,0.4239131);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.1601926);
   hdirt_stack_3->SetBinError(22,0.2188956);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(26,0.2620342);
   hdirt_stack_3->SetBinError(27,0.3095651);
   hdirt_stack_3->SetBinError(28,0.2557574);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,7.715739);
   houtFV_stack_4->SetBinContent(2,3.274708);
   houtFV_stack_4->SetBinContent(3,3.121006);
   houtFV_stack_4->SetBinContent(4,2.840508);
   houtFV_stack_4->SetBinContent(5,2.197444);
   houtFV_stack_4->SetBinContent(6,2.298879);
   houtFV_stack_4->SetBinContent(7,2.053982);
   houtFV_stack_4->SetBinContent(8,3.266053);
   houtFV_stack_4->SetBinContent(9,3.282455);
   houtFV_stack_4->SetBinContent(10,3.229203);
   houtFV_stack_4->SetBinContent(11,4.448141);
   houtFV_stack_4->SetBinContent(12,3.490093);
   houtFV_stack_4->SetBinContent(13,2.228117);
   houtFV_stack_4->SetBinContent(14,2.642437);
   houtFV_stack_4->SetBinContent(15,1.908829);
   houtFV_stack_4->SetBinContent(16,4.210868);
   houtFV_stack_4->SetBinContent(17,2.732646);
   houtFV_stack_4->SetBinContent(18,1.768748);
   houtFV_stack_4->SetBinContent(19,2.714194);
   houtFV_stack_4->SetBinContent(20,3.225821);
   houtFV_stack_4->SetBinContent(21,3.843167);
   houtFV_stack_4->SetBinContent(22,3.718846);
   houtFV_stack_4->SetBinContent(23,3.521951);
   houtFV_stack_4->SetBinContent(24,3.541038);
   houtFV_stack_4->SetBinContent(25,3.068866);
   houtFV_stack_4->SetBinContent(26,1.91221);
   houtFV_stack_4->SetBinContent(27,4.178363);
   houtFV_stack_4->SetBinContent(28,2.536631);
   houtFV_stack_4->SetBinContent(29,3.421287);
   houtFV_stack_4->SetBinContent(30,2.482678);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinError(1,1.365876);
   houtFV_stack_4->SetBinError(2,0.9101164);
   houtFV_stack_4->SetBinError(3,0.8984332);
   houtFV_stack_4->SetBinError(4,0.8472984);
   houtFV_stack_4->SetBinError(5,0.760276);
   houtFV_stack_4->SetBinError(6,0.7066675);
   houtFV_stack_4->SetBinError(7,0.7078105);
   houtFV_stack_4->SetBinError(8,0.8643941);
   houtFV_stack_4->SetBinError(9,0.8323843);
   houtFV_stack_4->SetBinError(10,0.8550968);
   houtFV_stack_4->SetBinError(11,1.057219);
   houtFV_stack_4->SetBinError(12,0.904641);
   houtFV_stack_4->SetBinError(13,0.8239891);
   houtFV_stack_4->SetBinError(14,0.7851269);
   houtFV_stack_4->SetBinError(15,0.6506224);
   houtFV_stack_4->SetBinError(16,1.053571);
   houtFV_stack_4->SetBinError(17,0.8554385);
   houtFV_stack_4->SetBinError(18,0.5895848);
   houtFV_stack_4->SetBinError(19,0.8603947);
   houtFV_stack_4->SetBinError(20,0.854322);
   houtFV_stack_4->SetBinError(21,1.064631);
   houtFV_stack_4->SetBinError(22,1.00304);
   houtFV_stack_4->SetBinError(23,0.9745338);
   houtFV_stack_4->SetBinError(24,0.9464405);
   houtFV_stack_4->SetBinError(25,0.8673189);
   houtFV_stack_4->SetBinError(26,0.6516395);
   houtFV_stack_4->SetBinError(27,1.062947);
   houtFV_stack_4->SetBinError(28,0.7456874);
   houtFV_stack_4->SetBinError(29,0.9169914);
   houtFV_stack_4->SetBinError(30,0.8552222);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4314539);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1797343);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6971721);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9906222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8654041);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.9492723);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4035539);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(26,1.060872);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.7250721);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3138005);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3642206);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3498677);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3968647);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1775557);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.4007683);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.3150384);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.4188362);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.4575);
   hNCpi0inFVres_stack_7->SetBinContent(2,37.39711);
   hNCpi0inFVres_stack_7->SetBinContent(3,36.81587);
   hNCpi0inFVres_stack_7->SetBinContent(4,35.14568);
   hNCpi0inFVres_stack_7->SetBinContent(5,41.33733);
   hNCpi0inFVres_stack_7->SetBinContent(6,44.66973);
   hNCpi0inFVres_stack_7->SetBinContent(7,45.34482);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.061);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.38784);
   hNCpi0inFVres_stack_7->SetBinContent(10,48.00082);
   hNCpi0inFVres_stack_7->SetBinContent(11,46.73649);
   hNCpi0inFVres_stack_7->SetBinContent(12,44.98694);
   hNCpi0inFVres_stack_7->SetBinContent(13,51.41794);
   hNCpi0inFVres_stack_7->SetBinContent(14,52.45671);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.30446);
   hNCpi0inFVres_stack_7->SetBinContent(16,50.90408);
   hNCpi0inFVres_stack_7->SetBinContent(17,51.42506);
   hNCpi0inFVres_stack_7->SetBinContent(18,49.74159);
   hNCpi0inFVres_stack_7->SetBinContent(19,50.48808);
   hNCpi0inFVres_stack_7->SetBinContent(20,45.41425);
   hNCpi0inFVres_stack_7->SetBinContent(21,35.92174);
   hNCpi0inFVres_stack_7->SetBinContent(22,40.77752);
   hNCpi0inFVres_stack_7->SetBinContent(23,46.98042);
   hNCpi0inFVres_stack_7->SetBinContent(24,42.51894);
   hNCpi0inFVres_stack_7->SetBinContent(25,47.74058);
   hNCpi0inFVres_stack_7->SetBinContent(26,47.82496);
   hNCpi0inFVres_stack_7->SetBinContent(27,48.06542);
   hNCpi0inFVres_stack_7->SetBinContent(28,53.49701);
   hNCpi0inFVres_stack_7->SetBinContent(29,40.26054);
   hNCpi0inFVres_stack_7->SetBinContent(30,16.71036);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(0,0.277838);
   hNCpi0inFVres_stack_7->SetBinError(1,1.46146);
   hNCpi0inFVres_stack_7->SetBinError(2,1.979181);
   hNCpi0inFVres_stack_7->SetBinError(3,2.023714);
   hNCpi0inFVres_stack_7->SetBinError(4,1.96403);
   hNCpi0inFVres_stack_7->SetBinError(5,2.080144);
   hNCpi0inFVres_stack_7->SetBinError(6,2.177798);
   hNCpi0inFVres_stack_7->SetBinError(7,2.197916);
   hNCpi0inFVres_stack_7->SetBinError(8,2.164728);
   hNCpi0inFVres_stack_7->SetBinError(9,2.24571);
   hNCpi0inFVres_stack_7->SetBinError(10,2.262445);
   hNCpi0inFVres_stack_7->SetBinError(11,2.155959);
   hNCpi0inFVres_stack_7->SetBinError(12,2.181519);
   hNCpi0inFVres_stack_7->SetBinError(13,2.354806);
   hNCpi0inFVres_stack_7->SetBinError(14,2.409552);
   hNCpi0inFVres_stack_7->SetBinError(15,2.227525);
   hNCpi0inFVres_stack_7->SetBinError(16,2.303277);
   hNCpi0inFVres_stack_7->SetBinError(17,2.370468);
   hNCpi0inFVres_stack_7->SetBinError(18,2.317877);
   hNCpi0inFVres_stack_7->SetBinError(19,2.344299);
   hNCpi0inFVres_stack_7->SetBinError(20,2.232499);
   hNCpi0inFVres_stack_7->SetBinError(21,1.988207);
   hNCpi0inFVres_stack_7->SetBinError(22,2.112404);
   hNCpi0inFVres_stack_7->SetBinError(23,2.266272);
   hNCpi0inFVres_stack_7->SetBinError(24,2.134977);
   hNCpi0inFVres_stack_7->SetBinError(25,2.245941);
   hNCpi0inFVres_stack_7->SetBinError(26,2.292424);
   hNCpi0inFVres_stack_7->SetBinError(27,2.277946);
   hNCpi0inFVres_stack_7->SetBinError(28,2.500188);
   hNCpi0inFVres_stack_7->SetBinError(29,2.12152);
   hNCpi0inFVres_stack_7->SetBinError(30,1.408825);
   hNCpi0inFVres_stack_7->SetBinError(31,0.05579997);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.906432);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.473912);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.847486);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.578776);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.534527);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.628606);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.04777);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.185534);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.369455);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.54043);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.243565);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.13454);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.254111);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.12192);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.740533);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.336147);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.12442);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.898396);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.666538);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.343389);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.204449);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.671708);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.742365);
   hNCpi0inFVdis_stack_8->SetBinContent(24,7.30784);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.045689);
   hNCpi0inFVdis_stack_8->SetBinContent(26,10.04056);
   hNCpi0inFVdis_stack_8->SetBinContent(27,8.25428);
   hNCpi0inFVdis_stack_8->SetBinContent(28,8.267899);
   hNCpi0inFVdis_stack_8->SetBinContent(29,6.218236);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.983652);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7120485);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9242244);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8587357);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8122276);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9963681);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9562704);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9553201);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9894763);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.006538);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.082162);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9337204);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9848756);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.907723);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.007407);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9157271);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8875607);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.035697);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.042906);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7902871);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.040976);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7758741);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.95783);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9538593);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9069371);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8747143);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.087245);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.9255917);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.9294383);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.8011711);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.5777665);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04832419);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,7.062906);
   hCCpi0inFV_stack_10->SetBinContent(2,11.71321);
   hCCpi0inFV_stack_10->SetBinContent(3,10.1017);
   hCCpi0inFV_stack_10->SetBinContent(4,12.55756);
   hCCpi0inFV_stack_10->SetBinContent(5,14.43478);
   hCCpi0inFV_stack_10->SetBinContent(6,12.74421);
   hCCpi0inFV_stack_10->SetBinContent(7,11.68959);
   hCCpi0inFV_stack_10->SetBinContent(8,14.93075);
   hCCpi0inFV_stack_10->SetBinContent(9,14.15369);
   hCCpi0inFV_stack_10->SetBinContent(10,17.44795);
   hCCpi0inFV_stack_10->SetBinContent(11,14.83561);
   hCCpi0inFV_stack_10->SetBinContent(12,12.88604);
   hCCpi0inFV_stack_10->SetBinContent(13,13.97585);
   hCCpi0inFV_stack_10->SetBinContent(14,16.02091);
   hCCpi0inFV_stack_10->SetBinContent(15,15.20717);
   hCCpi0inFV_stack_10->SetBinContent(16,12.98892);
   hCCpi0inFV_stack_10->SetBinContent(17,12.36699);
   hCCpi0inFV_stack_10->SetBinContent(18,12.76932);
   hCCpi0inFV_stack_10->SetBinContent(19,11.62555);
   hCCpi0inFV_stack_10->SetBinContent(20,13.04736);
   hCCpi0inFV_stack_10->SetBinContent(21,13.79643);
   hCCpi0inFV_stack_10->SetBinContent(22,15.32822);
   hCCpi0inFV_stack_10->SetBinContent(23,10.67108);
   hCCpi0inFV_stack_10->SetBinContent(24,13.81073);
   hCCpi0inFV_stack_10->SetBinContent(25,12.88771);
   hCCpi0inFV_stack_10->SetBinContent(26,14.85481);
   hCCpi0inFV_stack_10->SetBinContent(27,10.61178);
   hCCpi0inFV_stack_10->SetBinContent(28,11.56891);
   hCCpi0inFV_stack_10->SetBinContent(29,9.527848);
   hCCpi0inFV_stack_10->SetBinContent(30,7.77517);
   hCCpi0inFV_stack_10->SetBinContent(31,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(1,1.335598);
   hCCpi0inFV_stack_10->SetBinError(2,1.715378);
   hCCpi0inFV_stack_10->SetBinError(3,1.617606);
   hCCpi0inFV_stack_10->SetBinError(4,1.788393);
   hCCpi0inFV_stack_10->SetBinError(5,1.915572);
   hCCpi0inFV_stack_10->SetBinError(6,1.759394);
   hCCpi0inFV_stack_10->SetBinError(7,1.671757);
   hCCpi0inFV_stack_10->SetBinError(8,1.966564);
   hCCpi0inFV_stack_10->SetBinError(9,1.916156);
   hCCpi0inFV_stack_10->SetBinError(10,2.091913);
   hCCpi0inFV_stack_10->SetBinError(11,1.974274);
   hCCpi0inFV_stack_10->SetBinError(12,1.820123);
   hCCpi0inFV_stack_10->SetBinError(13,1.892732);
   hCCpi0inFV_stack_10->SetBinError(14,1.930109);
   hCCpi0inFV_stack_10->SetBinError(15,1.903599);
   hCCpi0inFV_stack_10->SetBinError(16,1.758837);
   hCCpi0inFV_stack_10->SetBinError(17,1.795398);
   hCCpi0inFV_stack_10->SetBinError(18,1.723184);
   hCCpi0inFV_stack_10->SetBinError(19,1.722172);
   hCCpi0inFV_stack_10->SetBinError(20,1.787489);
   hCCpi0inFV_stack_10->SetBinError(21,1.895746);
   hCCpi0inFV_stack_10->SetBinError(22,1.958592);
   hCCpi0inFV_stack_10->SetBinError(23,1.766744);
   hCCpi0inFV_stack_10->SetBinError(24,1.897221);
   hCCpi0inFV_stack_10->SetBinError(25,1.781048);
   hCCpi0inFV_stack_10->SetBinError(26,1.963417);
   hCCpi0inFV_stack_10->SetBinError(27,1.619062);
   hCCpi0inFV_stack_10->SetBinError(28,1.732881);
   hCCpi0inFV_stack_10->SetBinError(29,1.519392);
   hCCpi0inFV_stack_10->SetBinError(30,1.415027);
   hCCpi0inFV_stack_10->SetBinError(31,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,5.218705);
   hNCinFV_stack_11->SetBinContent(2,7.569147);
   hNCinFV_stack_11->SetBinContent(3,6.555376);
   hNCinFV_stack_11->SetBinContent(4,7.629162);
   hNCinFV_stack_11->SetBinContent(5,8.690032);
   hNCinFV_stack_11->SetBinContent(6,8.562259);
   hNCinFV_stack_11->SetBinContent(7,7.867297);
   hNCinFV_stack_11->SetBinContent(8,6.307098);
   hNCinFV_stack_11->SetBinContent(9,9.619747);
   hNCinFV_stack_11->SetBinContent(10,9.282951);
   hNCinFV_stack_11->SetBinContent(11,8.541498);
   hNCinFV_stack_11->SetBinContent(12,6.302027);
   hNCinFV_stack_11->SetBinContent(13,6.687613);
   hNCinFV_stack_11->SetBinContent(14,11.69063);
   hNCinFV_stack_11->SetBinContent(15,6.893863);
   hNCinFV_stack_11->SetBinContent(16,8.31229);
   hNCinFV_stack_11->SetBinContent(17,10.71152);
   hNCinFV_stack_11->SetBinContent(18,7.822496);
   hNCinFV_stack_11->SetBinContent(19,9.569876);
   hNCinFV_stack_11->SetBinContent(20,11.82734);
   hNCinFV_stack_11->SetBinContent(21,7.707538);
   hNCinFV_stack_11->SetBinContent(22,10.09892);
   hNCinFV_stack_11->SetBinContent(23,8.506232);
   hNCinFV_stack_11->SetBinContent(24,10.64197);
   hNCinFV_stack_11->SetBinContent(25,8.738214);
   hNCinFV_stack_11->SetBinContent(26,5.625052);
   hNCinFV_stack_11->SetBinContent(27,8.696186);
   hNCinFV_stack_11->SetBinContent(28,6.501514);
   hNCinFV_stack_11->SetBinContent(29,5.322913);
   hNCinFV_stack_11->SetBinContent(30,3.172568);
   hNCinFV_stack_11->SetBinError(1,1.210167);
   hNCinFV_stack_11->SetBinError(2,1.387406);
   hNCinFV_stack_11->SetBinError(3,1.257132);
   hNCinFV_stack_11->SetBinError(4,1.374488);
   hNCinFV_stack_11->SetBinError(5,1.546409);
   hNCinFV_stack_11->SetBinError(6,1.386984);
   hNCinFV_stack_11->SetBinError(7,1.372935);
   hNCinFV_stack_11->SetBinError(8,1.257248);
   hNCinFV_stack_11->SetBinError(9,1.557102);
   hNCinFV_stack_11->SetBinError(10,1.519924);
   hNCinFV_stack_11->SetBinError(11,1.520648);
   hNCinFV_stack_11->SetBinError(12,1.256458);
   hNCinFV_stack_11->SetBinError(13,1.36066);
   hNCinFV_stack_11->SetBinError(14,1.712362);
   hNCinFV_stack_11->SetBinError(15,1.30209);
   hNCinFV_stack_11->SetBinError(16,1.386851);
   hNCinFV_stack_11->SetBinError(17,1.594383);
   hNCinFV_stack_11->SetBinError(18,1.388016);
   hNCinFV_stack_11->SetBinError(19,1.569782);
   hNCinFV_stack_11->SetBinError(20,1.733943);
   hNCinFV_stack_11->SetBinError(21,1.414189);
   hNCinFV_stack_11->SetBinError(22,1.677483);
   hNCinFV_stack_11->SetBinError(23,1.469474);
   hNCinFV_stack_11->SetBinError(24,1.66505);
   hNCinFV_stack_11->SetBinError(25,1.533319);
   hNCinFV_stack_11->SetBinError(26,1.161279);
   hNCinFV_stack_11->SetBinError(27,1.481689);
   hNCinFV_stack_11->SetBinError(28,1.191671);
   hNCinFV_stack_11->SetBinError(29,1.090212);
   hNCinFV_stack_11->SetBinError(30,0.8764662);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,5.671921);
   hnumuCCinFV_stack_12->SetBinContent(2,9.343228);
   hnumuCCinFV_stack_12->SetBinContent(3,10.5311);
   hnumuCCinFV_stack_12->SetBinContent(4,13.06398);
   hnumuCCinFV_stack_12->SetBinContent(5,7.521501);
   hnumuCCinFV_stack_12->SetBinContent(6,8.403939);
   hnumuCCinFV_stack_12->SetBinContent(7,7.352484);
   hnumuCCinFV_stack_12->SetBinContent(8,13.51433);
   hnumuCCinFV_stack_12->SetBinContent(9,8.857325);
   hnumuCCinFV_stack_12->SetBinContent(10,9.983311);
   hnumuCCinFV_stack_12->SetBinContent(11,10.49504);
   hnumuCCinFV_stack_12->SetBinContent(12,6.902308);
   hnumuCCinFV_stack_12->SetBinContent(13,12.28834);
   hnumuCCinFV_stack_12->SetBinContent(14,11.06652);
   hnumuCCinFV_stack_12->SetBinContent(15,11.88739);
   hnumuCCinFV_stack_12->SetBinContent(16,8.972197);
   hnumuCCinFV_stack_12->SetBinContent(17,9.675733);
   hnumuCCinFV_stack_12->SetBinContent(18,10.99982);
   hnumuCCinFV_stack_12->SetBinContent(19,8.814994);
   hnumuCCinFV_stack_12->SetBinContent(20,9.809339);
   hnumuCCinFV_stack_12->SetBinContent(21,7.750438);
   hnumuCCinFV_stack_12->SetBinContent(22,10.8299);
   hnumuCCinFV_stack_12->SetBinContent(23,10.42587);
   hnumuCCinFV_stack_12->SetBinContent(24,8.496367);
   hnumuCCinFV_stack_12->SetBinContent(25,7.680831);
   hnumuCCinFV_stack_12->SetBinContent(26,6.208319);
   hnumuCCinFV_stack_12->SetBinContent(27,10.29758);
   hnumuCCinFV_stack_12->SetBinContent(28,4.600184);
   hnumuCCinFV_stack_12->SetBinContent(29,4.612299);
   hnumuCCinFV_stack_12->SetBinContent(30,4.330021);
   hnumuCCinFV_stack_12->SetBinError(1,1.49336);
   hnumuCCinFV_stack_12->SetBinError(2,1.89859);
   hnumuCCinFV_stack_12->SetBinError(3,1.744695);
   hnumuCCinFV_stack_12->SetBinError(4,2.043641);
   hnumuCCinFV_stack_12->SetBinError(5,1.386689);
   hnumuCCinFV_stack_12->SetBinError(6,1.719058);
   hnumuCCinFV_stack_12->SetBinError(7,1.437512);
   hnumuCCinFV_stack_12->SetBinError(8,2.39534);
   hnumuCCinFV_stack_12->SetBinError(9,1.952678);
   hnumuCCinFV_stack_12->SetBinError(10,1.792476);
   hnumuCCinFV_stack_12->SetBinError(11,1.725827);
   hnumuCCinFV_stack_12->SetBinError(12,1.338825);
   hnumuCCinFV_stack_12->SetBinError(13,1.928873);
   hnumuCCinFV_stack_12->SetBinError(14,2.879828);
   hnumuCCinFV_stack_12->SetBinError(15,1.896109);
   hnumuCCinFV_stack_12->SetBinError(16,1.641723);
   hnumuCCinFV_stack_12->SetBinError(17,2.140499);
   hnumuCCinFV_stack_12->SetBinError(18,1.947775);
   hnumuCCinFV_stack_12->SetBinError(19,1.612119);
   hnumuCCinFV_stack_12->SetBinError(20,2.068499);
   hnumuCCinFV_stack_12->SetBinError(21,1.361064);
   hnumuCCinFV_stack_12->SetBinError(22,1.770369);
   hnumuCCinFV_stack_12->SetBinError(23,1.657498);
   hnumuCCinFV_stack_12->SetBinError(24,1.495803);
   hnumuCCinFV_stack_12->SetBinError(25,1.729797);
   hnumuCCinFV_stack_12->SetBinError(26,1.429091);
   hnumuCCinFV_stack_12->SetBinError(27,2.087174);
   hnumuCCinFV_stack_12->SetBinError(28,1.021837);
   hnumuCCinFV_stack_12->SetBinError(29,1.256926);
   hnumuCCinFV_stack_12->SetBinError(30,1.090596);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,1.165406);
   hnueCCinFV_stack_13->SetBinContent(8,0.6000535);
   hnueCCinFV_stack_13->SetBinContent(10,0.8640677);
   hnueCCinFV_stack_13->SetBinContent(11,0.8417194);
   hnueCCinFV_stack_13->SetBinContent(12,0.9140773);
   hnueCCinFV_stack_13->SetBinContent(13,1.181465);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.4296511);
   hnueCCinFV_stack_13->SetBinContent(18,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(19,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(20,0.536893);
   hnueCCinFV_stack_13->SetBinContent(22,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(23,0.536893);
   hnueCCinFV_stack_13->SetBinContent(24,0.9754189);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,0.5916525);
   hnueCCinFV_stack_13->SetBinContent(27,0.8465147);
   hnueCCinFV_stack_13->SetBinContent(29,0.591342);
   hnueCCinFV_stack_13->SetBinError(1,0.2504446);
   hnueCCinFV_stack_13->SetBinError(2,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.5359203);
   hnueCCinFV_stack_13->SetBinError(8,0.442702);
   hnueCCinFV_stack_13->SetBinError(10,0.5230935);
   hnueCCinFV_stack_13->SetBinError(11,0.4914388);
   hnueCCinFV_stack_13->SetBinError(12,0.531391);
   hnueCCinFV_stack_13->SetBinError(13,0.6844224);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.305097);
   hnueCCinFV_stack_13->SetBinError(18,0.3688623);
   hnueCCinFV_stack_13->SetBinError(19,0.3866963);
   hnueCCinFV_stack_13->SetBinError(20,0.3929602);
   hnueCCinFV_stack_13->SetBinError(22,0.2871419);
   hnueCCinFV_stack_13->SetBinError(23,0.3929602);
   hnueCCinFV_stack_13->SetBinError(24,0.5019055);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.4363916);
   hnueCCinFV_stack_13->SetBinError(27,0.4262983);
   hnueCCinFV_stack_13->SetBinError(29,0.4228527);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__20->SetBinContent(0,0.4188362);
   hmcerror__20->SetBinContent(1,56.43711);
   hmcerror__20->SetBinContent(2,91.33113);
   hmcerror__20->SetBinContent(3,84.48935);
   hmcerror__20->SetBinContent(4,91.30714);
   hmcerror__20->SetBinContent(5,98.55273);
   hmcerror__20->SetBinContent(6,91.07385);
   hmcerror__20->SetBinContent(7,99.72809);
   hmcerror__20->SetBinContent(8,105.3946);
   hmcerror__20->SetBinContent(9,98.41402);
   hmcerror__20->SetBinContent(10,109.1905);
   hmcerror__20->SetBinContent(11,111.1636);
   hmcerror__20->SetBinContent(12,93.17168);
   hmcerror__20->SetBinContent(13,104.142);
   hmcerror__20->SetBinContent(14,116.7712);
   hmcerror__20->SetBinContent(15,97.9838);
   hmcerror__20->SetBinContent(16,103.5289);
   hmcerror__20->SetBinContent(17,105.4792);
   hmcerror__20->SetBinContent(18,101.4125);
   hmcerror__20->SetBinContent(19,101.4377);
   hmcerror__20->SetBinContent(20,103.4115);
   hmcerror__20->SetBinContent(21,83.6113);
   hmcerror__20->SetBinContent(22,96.28191);
   hmcerror__20->SetBinContent(23,94.74059);
   hmcerror__20->SetBinContent(24,98.68018);
   hmcerror__20->SetBinContent(25,95.12245);
   hmcerror__20->SetBinContent(26,95.07917);
   hmcerror__20->SetBinContent(27,98.24502);
   hmcerror__20->SetBinContent(28,96.12534);
   hmcerror__20->SetBinContent(29,78.39654);
   hmcerror__20->SetBinContent(30,40.33605);
   hmcerror__20->SetBinContent(31,1.190354);
   hmcerror__20->SetBinError(0,0.277838);
   hmcerror__20->SetBinError(1,24.42061);
   hmcerror__20->SetBinError(2,32.3517);
   hmcerror__20->SetBinError(3,31.73911);
   hmcerror__20->SetBinError(4,31.46593);
   hmcerror__20->SetBinError(5,34.56599);
   hmcerror__20->SetBinError(6,36.43564);
   hmcerror__20->SetBinError(7,36.39288);
   hmcerror__20->SetBinError(8,36.67365);
   hmcerror__20->SetBinError(9,36.0598);
   hmcerror__20->SetBinError(10,40.13795);
   hmcerror__20->SetBinError(11,38.61313);
   hmcerror__20->SetBinError(12,36.24029);
   hmcerror__20->SetBinError(13,39.28847);
   hmcerror__20->SetBinError(14,46.67475);
   hmcerror__20->SetBinError(15,40.35876);
   hmcerror__20->SetBinError(16,42.30179);
   hmcerror__20->SetBinError(17,40.44002);
   hmcerror__20->SetBinError(18,41.33516);
   hmcerror__20->SetBinError(19,39.80504);
   hmcerror__20->SetBinError(20,39.06312);
   hmcerror__20->SetBinError(21,30.46534);
   hmcerror__20->SetBinError(22,39.77892);
   hmcerror__20->SetBinError(23,38.51678);
   hmcerror__20->SetBinError(24,34.62595);
   hmcerror__20->SetBinError(25,38.67343);
   hmcerror__20->SetBinError(26,40.27115);
   hmcerror__20->SetBinError(27,36.84397);
   hmcerror__20->SetBinError(28,38.60567);
   hmcerror__20->SetBinError(29,31.04293);
   hmcerror__20->SetBinError(30,19.50331);
   hmcerror__20->SetBinError(31,2.053533);
   hmcerror__20->SetBinError(32,0.3895343);
   hmcerror__20->SetBinError(33,0.3895343);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[32] = {
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
   Double_t _fy3025[32] = {
   48,
   58,
   66,
   63,
   64,
   79,
   72,
   74,
   84,
   69,
   81,
   72,
   67,
   69,
   62,
   70,
   78,
   84,
   65,
   61,
   65,
   66,
   82,
   54,
   74,
   71,
   71,
   80,
   54,
   32,
   1,
   0};
   Double_t _felx3025[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3025[32] = {
   7.0604,
   7.7446,
   8.2509,
   8.0648,
   8.1273,
   9.0124,
   8.6108,
   8.7275,
   9.2886,
   8.4327,
   9.1239,
   8.6108,
   8.3119,
   8.4327,
   8.0018,
   8.4925,
   8.9562,
   9.2886,
   8.1893,
   7.9383,
   8.1893,
   8.2509,
   9.1791,
   7.4785,
   8.7275,
   8.5518,
   8.5518,
   9.0683,
   7.4785,
   5.7977,
   1,
   0};
   Double_t _fehx3025[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3025[32] = {
   6.8561,
   7.5415,
   8.0483,
   7.862,
   7.9246,
   8.8105,
   8.4085,
   8.5253,
   9.0869,
   8.2304,
   8.9221,
   8.4085,
   8.1094,
   8.2304,
   7.7989,
   8.2902,
   8.7542,
   9.0869,
   7.9866,
   7.7354,
   7.9866,
   8.0483,
   8.9774,
   7.275,
   8.5253,
   8.3496,
   8.3496,
   8.8665,
   7.275,
   5.5904,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1210);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(102.3956);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.4/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1311.9","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[32] = {
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
   Double_t _fy3026[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3026[32] = {
   0.4327047,
   0.3542242,
   0.3756581,
   0.3446164,
   0.350736,
   0.400067,
   0.364921,
   0.3479653,
   0.3664091,
   0.3675956,
   0.347354,
   0.3889625,
   0.3772587,
   0.399711,
   0.4118921,
   0.4085989,
   0.3833934,
   0.4075943,
   0.3924086,
   0.3777444,
   0.3643687,
   0.4131505,
   0.40655,
   0.3508906,
   0.4065646,
   0.4235539,
   0.3750212,
   0.401618,
   0.3959732,
   0.4835205,
   1.725144,
   0};
   Double_t _fehx3026[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3026[32] = {
   0.4327047,
   0.3542242,
   0.3756581,
   0.3446164,
   0.350736,
   0.400067,
   0.364921,
   0.3479653,
   0.3664091,
   0.3675956,
   0.347354,
   0.3889625,
   0.3772587,
   0.399711,
   0.4118921,
   0.4085989,
   0.3833934,
   0.4075943,
   0.3924086,
   0.3777444,
   0.3643687,
   0.4131505,
   0.40655,
   0.3508906,
   0.4065646,
   0.4235539,
   0.3750212,
   0.401618,
   0.3959732,
   0.4835205,
   1.725144,
   0};
   grae = new TGraphAsymmErrors(32,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1210);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[32] = {
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
   Double_t _fy3027[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3027[32] = {
   0.3038274,
   0.3070539,
   0.3188189,
   0.3038738,
   0.3211611,
   0.3486245,
   0.3318089,
   0.308993,
   0.3432892,
   0.3373603,
   0.3119235,
   0.349968,
   0.3481481,
   0.3246612,
   0.3529306,
   0.3562078,
   0.3502034,
   0.3553211,
   0.346769,
   0.3317829,
   0.3026667,
   0.3158326,
   0.347489,
   0.31995,
   0.3689307,
   0.3645146,
   0.336862,
   0.369268,
   0.3534647,
   0.314646,
   0.5961301,
   0};
   Double_t _fehx3027[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3027[32] = {
   0.3038274,
   0.3070539,
   0.3188189,
   0.3038738,
   0.3211611,
   0.3486245,
   0.3318089,
   0.308993,
   0.3432892,
   0.3373603,
   0.3119235,
   0.349968,
   0.3481481,
   0.3246612,
   0.3529306,
   0.3562078,
   0.3502034,
   0.3553211,
   0.346769,
   0.3317829,
   0.3026667,
   0.3158326,
   0.347489,
   0.31995,
   0.3689307,
   0.3645146,
   0.336862,
   0.369268,
   0.3534647,
   0.314646,
   0.5961301,
   0};
   grae = new TGraphAsymmErrors(32,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1210);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[32] = {
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
   Double_t _fy3028[32] = {
   0.8505041,
   0.6350518,
   0.7811635,
   0.6899789,
   0.6493985,
   0.8674279,
   0.7219631,
   0.7021235,
   0.8535369,
   0.6319231,
   0.7286555,
   0.772767,
   0.6433524,
   0.5908989,
   0.6327576,
   0.6761398,
   0.7394825,
   0.8283001,
   0.6407872,
   0.5898762,
   0.7774069,
   0.685487,
   0.8655214,
   0.5472224,
   0.7779446,
   0.7467461,
   0.722683,
   0.8322468,
   0.6888059,
   0.793335,
   0.840086,
   10};
   Double_t _felx3028[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3028[32] = {
   0.1251021,
   0.08479694,
   0.0976561,
   0.08832606,
   0.08246651,
   0.09895705,
   0.08634278,
   0.08280787,
   0.09438289,
   0.07722924,
   0.0820763,
   0.09241864,
   0.07981314,
   0.07221556,
   0.08166452,
   0.08203024,
   0.08490965,
   0.09159225,
   0.08073229,
   0.07676417,
   0.0979449,
   0.08569522,
   0.09688667,
   0.07578523,
   0.09175016,
   0.08994399,
   0.08704564,
   0.09433829,
   0.09539324,
   0.143735,
   0.840086,
   0};
   Double_t _fehx3028[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3028[32] = {
   0.1214821,
   0.08257316,
   0.09525816,
   0.08610499,
   0.08040974,
   0.09674017,
   0.08431426,
   0.08088937,
   0.09233339,
   0.07537652,
   0.08026095,
   0.09024738,
   0.07786868,
   0.07048311,
   0.07959377,
   0.0800762,
   0.08299458,
   0.08960334,
   0.07873402,
   0.07480211,
   0.09552058,
   0.08359098,
   0.0947577,
   0.07372301,
   0.08962448,
   0.08781734,
   0.08498752,
   0.09223895,
   0.09279747,
   0.1385956,
   1.142273,
   0};
   grae = new TGraphAsymmErrors(32,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1210);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

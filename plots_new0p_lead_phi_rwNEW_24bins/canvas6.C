#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 18:06:01 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.533687,3.957692,390.7514);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__16->SetBinContent(1,161.8826);
   hmc__16->SetBinContent(2,173.6109);
   hmc__16->SetBinContent(3,176.0889);
   hmc__16->SetBinContent(4,176.6844);
   hmc__16->SetBinContent(5,139.6404);
   hmc__16->SetBinContent(6,141.4975);
   hmc__16->SetBinContent(7,147.8432);
   hmc__16->SetBinContent(8,135.0335);
   hmc__16->SetBinContent(9,152.1957);
   hmc__16->SetBinContent(10,154.3327);
   hmc__16->SetBinContent(11,156.2616);
   hmc__16->SetBinContent(12,138.2889);
   hmc__16->SetBinContent(13,139.2269);
   hmc__16->SetBinContent(14,155.1379);
   hmc__16->SetBinContent(15,161.5667);
   hmc__16->SetBinContent(16,158.2947);
   hmc__16->SetBinContent(17,141.386);
   hmc__16->SetBinContent(18,144.2127);
   hmc__16->SetBinContent(19,146.4263);
   hmc__16->SetBinContent(20,139.174);
   hmc__16->SetBinContent(21,167.9614);
   hmc__16->SetBinContent(22,170.4036);
   hmc__16->SetBinContent(23,163.3749);
   hmc__16->SetBinContent(24,142.4799);
   hmc__16->SetBinError(1,47.50314);
   hmc__16->SetBinError(2,53.83876);
   hmc__16->SetBinError(3,48.17516);
   hmc__16->SetBinError(4,44.16227);
   hmc__16->SetBinError(5,39.44488);
   hmc__16->SetBinError(6,36.13769);
   hmc__16->SetBinError(7,42.8574);
   hmc__16->SetBinError(8,36.47131);
   hmc__16->SetBinError(9,41.81349);
   hmc__16->SetBinError(10,45.22407);
   hmc__16->SetBinError(11,43.10393);
   hmc__16->SetBinError(12,39.44477);
   hmc__16->SetBinError(13,39.79378);
   hmc__16->SetBinError(14,42.77384);
   hmc__16->SetBinError(15,42.74827);
   hmc__16->SetBinError(16,42.11943);
   hmc__16->SetBinError(17,37.90833);
   hmc__16->SetBinError(18,39.2873);
   hmc__16->SetBinError(19,39.19774);
   hmc__16->SetBinError(20,38.70254);
   hmc__16->SetBinError(21,43.69927);
   hmc__16->SetBinError(22,47.39637);
   hmc__16->SetBinError(23,48.67142);
   hmc__16->SetBinError(24,38.93582);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-3.533687);
   hmc__16->SetMaximum(371.0371);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,-3.15,3.15);
   hs6_stack_6->SetMinimum(-3.646956e-09);
   hs6_stack_6->SetMaximum(185.5186);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.243935);
   hbadmatch_stack_1->SetBinContent(2,3.993569);
   hbadmatch_stack_1->SetBinContent(3,4.052901);
   hbadmatch_stack_1->SetBinContent(4,3.167823);
   hbadmatch_stack_1->SetBinContent(5,5.310413);
   hbadmatch_stack_1->SetBinContent(6,5.086107);
   hbadmatch_stack_1->SetBinContent(7,3.615849);
   hbadmatch_stack_1->SetBinContent(8,2.490634);
   hbadmatch_stack_1->SetBinContent(9,3.225776);
   hbadmatch_stack_1->SetBinContent(10,2.460823);
   hbadmatch_stack_1->SetBinContent(11,2.656419);
   hbadmatch_stack_1->SetBinContent(12,2.672997);
   hbadmatch_stack_1->SetBinContent(13,2.343642);
   hbadmatch_stack_1->SetBinContent(14,3.009855);
   hbadmatch_stack_1->SetBinContent(15,5.269566);
   hbadmatch_stack_1->SetBinContent(16,4.964014);
   hbadmatch_stack_1->SetBinContent(17,6.208627);
   hbadmatch_stack_1->SetBinContent(18,3.208882);
   hbadmatch_stack_1->SetBinContent(19,3.233177);
   hbadmatch_stack_1->SetBinContent(20,3.215131);
   hbadmatch_stack_1->SetBinContent(21,2.752853);
   hbadmatch_stack_1->SetBinContent(22,4.061414);
   hbadmatch_stack_1->SetBinContent(23,2.828057);
   hbadmatch_stack_1->SetBinContent(24,1.167244);
   hbadmatch_stack_1->SetBinError(1,0.7328326);
   hbadmatch_stack_1->SetBinError(2,0.9681696);
   hbadmatch_stack_1->SetBinError(3,1.102449);
   hbadmatch_stack_1->SetBinError(4,0.9095025);
   hbadmatch_stack_1->SetBinError(5,1.287406);
   hbadmatch_stack_1->SetBinError(6,1.222992);
   hbadmatch_stack_1->SetBinError(7,1.246243);
   hbadmatch_stack_1->SetBinError(8,0.8316616);
   hbadmatch_stack_1->SetBinError(9,1.011207);
   hbadmatch_stack_1->SetBinError(10,0.7145915);
   hbadmatch_stack_1->SetBinError(11,0.8322955);
   hbadmatch_stack_1->SetBinError(12,0.7438736);
   hbadmatch_stack_1->SetBinError(13,0.7588055);
   hbadmatch_stack_1->SetBinError(14,1.710612);
   hbadmatch_stack_1->SetBinError(15,1.922854);
   hbadmatch_stack_1->SetBinError(16,1.219272);
   hbadmatch_stack_1->SetBinError(17,2.255112);
   hbadmatch_stack_1->SetBinError(18,1.092567);
   hbadmatch_stack_1->SetBinError(19,0.8558711);
   hbadmatch_stack_1->SetBinError(20,0.922789);
   hbadmatch_stack_1->SetBinError(21,0.9081541);
   hbadmatch_stack_1->SetBinError(22,1.023737);
   hbadmatch_stack_1->SetBinError(23,0.8949417);
   hbadmatch_stack_1->SetBinError(24,0.5368723);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.019417);
   hext_stack_2->SetBinContent(2,10.60742);
   hext_stack_2->SetBinContent(3,11.08904);
   hext_stack_2->SetBinContent(4,13.10603);
   hext_stack_2->SetBinContent(5,11.91219);
   hext_stack_2->SetBinContent(6,18.38023);
   hext_stack_2->SetBinContent(7,17.67518);
   hext_stack_2->SetBinContent(8,12.57975);
   hext_stack_2->SetBinContent(9,11.15965);
   hext_stack_2->SetBinContent(10,11.59938);
   hext_stack_2->SetBinContent(11,9.239214);
   hext_stack_2->SetBinContent(12,5.911401);
   hext_stack_2->SetBinContent(13,5.116974);
   hext_stack_2->SetBinContent(14,8.186592);
   hext_stack_2->SetBinContent(15,8.663803);
   hext_stack_2->SetBinContent(16,15.81818);
   hext_stack_2->SetBinContent(17,13.82544);
   hext_stack_2->SetBinContent(18,18.48397);
   hext_stack_2->SetBinContent(19,17.99958);
   hext_stack_2->SetBinContent(20,13.2848);
   hext_stack_2->SetBinContent(21,12.1472);
   hext_stack_2->SetBinContent(22,13.53858);
   hext_stack_2->SetBinContent(23,6.881822);
   hext_stack_2->SetBinContent(24,8.172231);
   hext_stack_2->SetBinError(1,1.892016);
   hext_stack_2->SetBinError(2,2.150068);
   hext_stack_2->SetBinError(3,2.247089);
   hext_stack_2->SetBinError(4,2.409767);
   hext_stack_2->SetBinError(5,2.200574);
   hext_stack_2->SetBinError(6,2.832358);
   hext_stack_2->SetBinError(7,2.698743);
   hext_stack_2->SetBinError(8,2.187627);
   hext_stack_2->SetBinError(9,2.274989);
   hext_stack_2->SetBinError(10,2.161299);
   hext_stack_2->SetBinError(11,2.018834);
   hext_stack_2->SetBinError(12,1.57855);
   hext_stack_2->SetBinError(13,1.376188);
   hext_stack_2->SetBinError(14,1.834006);
   hext_stack_2->SetBinError(15,1.911823);
   hext_stack_2->SetBinError(16,2.551607);
   hext_stack_2->SetBinError(17,2.478631);
   hext_stack_2->SetBinError(18,2.734728);
   hext_stack_2->SetBinError(19,2.71817);
   hext_stack_2->SetBinError(20,2.350479);
   hext_stack_2->SetBinError(21,2.255853);
   hext_stack_2->SetBinError(22,2.346022);
   hext_stack_2->SetBinError(23,1.773089);
   hext_stack_2->SetBinError(24,1.940613);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,1.234817);
   hdirt_stack_3->SetBinContent(3,2.149439);
   hdirt_stack_3->SetBinContent(4,2.498501);
   hdirt_stack_3->SetBinContent(5,1.823303);
   hdirt_stack_3->SetBinContent(6,1.177013);
   hdirt_stack_3->SetBinContent(7,2.267733);
   hdirt_stack_3->SetBinContent(8,1.495467);
   hdirt_stack_3->SetBinContent(9,1.221669);
   hdirt_stack_3->SetBinContent(10,1.406567);
   hdirt_stack_3->SetBinContent(11,3.201819);
   hdirt_stack_3->SetBinContent(12,1.29895);
   hdirt_stack_3->SetBinContent(13,1.708808);
   hdirt_stack_3->SetBinContent(14,1.58449);
   hdirt_stack_3->SetBinContent(15,1.636888);
   hdirt_stack_3->SetBinContent(16,3.617293);
   hdirt_stack_3->SetBinContent(17,3.195463);
   hdirt_stack_3->SetBinContent(18,1.536302);
   hdirt_stack_3->SetBinContent(19,3.235085);
   hdirt_stack_3->SetBinContent(20,0.8904731);
   hdirt_stack_3->SetBinContent(21,1.409088);
   hdirt_stack_3->SetBinContent(22,2.17325);
   hdirt_stack_3->SetBinContent(23,0.9038851);
   hdirt_stack_3->SetBinContent(24,0.2967022);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.5720096);
   hdirt_stack_3->SetBinError(3,0.7150973);
   hdirt_stack_3->SetBinError(4,0.8666285);
   hdirt_stack_3->SetBinError(5,0.6103268);
   hdirt_stack_3->SetBinError(6,0.6070381);
   hdirt_stack_3->SetBinError(7,0.7171901);
   hdirt_stack_3->SetBinError(8,0.8264716);
   hdirt_stack_3->SetBinError(9,0.5259118);
   hdirt_stack_3->SetBinError(10,0.9994542);
   hdirt_stack_3->SetBinError(11,1.32161);
   hdirt_stack_3->SetBinError(12,0.5520304);
   hdirt_stack_3->SetBinError(13,0.6261585);
   hdirt_stack_3->SetBinError(14,0.7256623);
   hdirt_stack_3->SetBinError(15,0.6610215);
   hdirt_stack_3->SetBinError(16,1.023349);
   hdirt_stack_3->SetBinError(17,0.9828863);
   hdirt_stack_3->SetBinError(18,0.663232);
   hdirt_stack_3->SetBinError(19,0.9354785);
   hdirt_stack_3->SetBinError(20,0.4366068);
   hdirt_stack_3->SetBinError(21,0.5615226);
   hdirt_stack_3->SetBinError(22,0.7731157);
   hdirt_stack_3->SetBinError(23,0.4931997);
   hdirt_stack_3->SetBinError(24,0.2103032);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,12.35868);
   houtFV_stack_4->SetBinContent(2,18.30257);
   houtFV_stack_4->SetBinContent(3,16.82104);
   houtFV_stack_4->SetBinContent(4,18.49234);
   houtFV_stack_4->SetBinContent(5,10.92721);
   houtFV_stack_4->SetBinContent(6,12.43129);
   houtFV_stack_4->SetBinContent(7,13.33202);
   houtFV_stack_4->SetBinContent(8,14.2961);
   houtFV_stack_4->SetBinContent(9,15.07856);
   houtFV_stack_4->SetBinContent(10,16.6882);
   houtFV_stack_4->SetBinContent(11,15.49082);
   houtFV_stack_4->SetBinContent(12,12.08339);
   houtFV_stack_4->SetBinContent(13,14.64187);
   houtFV_stack_4->SetBinContent(14,13.33383);
   houtFV_stack_4->SetBinContent(15,15.31148);
   houtFV_stack_4->SetBinContent(16,11.11416);
   houtFV_stack_4->SetBinContent(17,12.93508);
   houtFV_stack_4->SetBinContent(18,15.11584);
   houtFV_stack_4->SetBinContent(19,10.74341);
   houtFV_stack_4->SetBinContent(20,10.96041);
   houtFV_stack_4->SetBinContent(21,16.23903);
   houtFV_stack_4->SetBinContent(22,14.28183);
   houtFV_stack_4->SetBinContent(23,16.72149);
   houtFV_stack_4->SetBinContent(24,13.48281);
   houtFV_stack_4->SetBinError(1,1.797244);
   houtFV_stack_4->SetBinError(2,2.137076);
   houtFV_stack_4->SetBinError(3,2.022376);
   houtFV_stack_4->SetBinError(4,2.195957);
   houtFV_stack_4->SetBinError(5,1.71049);
   houtFV_stack_4->SetBinError(6,1.72976);
   houtFV_stack_4->SetBinError(7,1.791889);
   houtFV_stack_4->SetBinError(8,1.895824);
   houtFV_stack_4->SetBinError(9,1.905379);
   houtFV_stack_4->SetBinError(10,2.118195);
   houtFV_stack_4->SetBinError(11,1.973519);
   houtFV_stack_4->SetBinError(12,1.653823);
   houtFV_stack_4->SetBinError(13,1.83768);
   houtFV_stack_4->SetBinError(14,1.792012);
   houtFV_stack_4->SetBinError(15,1.930118);
   houtFV_stack_4->SetBinError(16,1.709911);
   houtFV_stack_4->SetBinError(17,1.74859);
   houtFV_stack_4->SetBinError(18,1.990725);
   houtFV_stack_4->SetBinError(19,1.641265);
   houtFV_stack_4->SetBinError(20,1.632724);
   houtFV_stack_4->SetBinError(21,2.057115);
   houtFV_stack_4->SetBinError(22,1.87391);
   houtFV_stack_4->SetBinError(23,2.056222);
   houtFV_stack_4->SetBinError(24,1.851533);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.21026);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.69577);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.932588);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.598452);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.996766);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.49947);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.031075);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.74733);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.260492);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.698683);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.82082);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.500134);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.415433);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.764356);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.588906);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.239824);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.427723);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.581674);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.816355);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.011384);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.940797);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.309074);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.599284);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.751738);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6786512);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6422111);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6525319);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6347947);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4926185);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5957861);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7211468);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5236408);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5910309);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7610602);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.62444);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5843529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5358246);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6339253);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7091276);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7070207);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5667707);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5928936);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8907356);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5493939);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4564617);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.689791);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6497926);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6683942);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.13029);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4467362);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.460186);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.41147);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2792353);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2287991);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,69.81573);
   hNCpi0inFVres_stack_7->SetBinContent(2,70.28868);
   hNCpi0inFVres_stack_7->SetBinContent(3,70.2093);
   hNCpi0inFVres_stack_7->SetBinContent(4,70.42206);
   hNCpi0inFVres_stack_7->SetBinContent(5,59.12383);
   hNCpi0inFVres_stack_7->SetBinContent(6,57.51974);
   hNCpi0inFVres_stack_7->SetBinContent(7,56.54291);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.68219);
   hNCpi0inFVres_stack_7->SetBinContent(9,64.1273);
   hNCpi0inFVres_stack_7->SetBinContent(10,64.92424);
   hNCpi0inFVres_stack_7->SetBinContent(11,62.18369);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.074);
   hNCpi0inFVres_stack_7->SetBinContent(13,59.9535);
   hNCpi0inFVres_stack_7->SetBinContent(14,63.94267);
   hNCpi0inFVres_stack_7->SetBinContent(15,68.20515);
   hNCpi0inFVres_stack_7->SetBinContent(16,65.22447);
   hNCpi0inFVres_stack_7->SetBinContent(17,57.94107);
   hNCpi0inFVres_stack_7->SetBinContent(18,57.92663);
   hNCpi0inFVres_stack_7->SetBinContent(19,58.24964);
   hNCpi0inFVres_stack_7->SetBinContent(20,58.39642);
   hNCpi0inFVres_stack_7->SetBinContent(21,73.5698);
   hNCpi0inFVres_stack_7->SetBinContent(22,70.83772);
   hNCpi0inFVres_stack_7->SetBinContent(23,65.57571);
   hNCpi0inFVres_stack_7->SetBinContent(24,61.17649);
   hNCpi0inFVres_stack_7->SetBinError(1,2.767966);
   hNCpi0inFVres_stack_7->SetBinError(2,2.722646);
   hNCpi0inFVres_stack_7->SetBinError(3,2.745825);
   hNCpi0inFVres_stack_7->SetBinError(4,2.779834);
   hNCpi0inFVres_stack_7->SetBinError(5,2.495799);
   hNCpi0inFVres_stack_7->SetBinError(6,2.47886);
   hNCpi0inFVres_stack_7->SetBinError(7,2.48928);
   hNCpi0inFVres_stack_7->SetBinError(8,2.463807);
   hNCpi0inFVres_stack_7->SetBinError(9,2.619561);
   hNCpi0inFVres_stack_7->SetBinError(10,2.675719);
   hNCpi0inFVres_stack_7->SetBinError(11,2.556618);
   hNCpi0inFVres_stack_7->SetBinError(12,2.473621);
   hNCpi0inFVres_stack_7->SetBinError(13,2.472191);
   hNCpi0inFVres_stack_7->SetBinError(14,2.57153);
   hNCpi0inFVres_stack_7->SetBinError(15,2.718282);
   hNCpi0inFVres_stack_7->SetBinError(16,2.616234);
   hNCpi0inFVres_stack_7->SetBinError(17,2.505941);
   hNCpi0inFVres_stack_7->SetBinError(18,2.529401);
   hNCpi0inFVres_stack_7->SetBinError(19,2.543888);
   hNCpi0inFVres_stack_7->SetBinError(20,2.470774);
   hNCpi0inFVres_stack_7->SetBinError(21,2.877144);
   hNCpi0inFVres_stack_7->SetBinError(22,2.759681);
   hNCpi0inFVres_stack_7->SetBinError(23,2.58755);
   hNCpi0inFVres_stack_7->SetBinError(24,2.570422);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,14.0414);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.7995);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.3473);
   hNCpi0inFVdis_stack_8->SetBinContent(4,15.03384);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.51585);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.41737);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.58901);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.958179);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.32604);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.44462);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.63852);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.58993);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.55978);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.53786);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.56932);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.96466);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.42136);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.256191);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.81005);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.546);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.16892);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.28094);
   hNCpi0inFVdis_stack_8->SetBinContent(23,16.22342);
   hNCpi0inFVdis_stack_8->SetBinContent(24,12.46687);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.237663);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.102206);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.219978);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.261439);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.050158);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.073828);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.139108);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.004118);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.168512);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.223853);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.277231);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.166317);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.085931);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.183323);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.038917);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.08802);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.127316);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9856331);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.145214);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.133085);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.07065);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.029414);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.339527);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.158588);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,24.28061);
   hCCpi0inFV_stack_10->SetBinContent(2,25.45001);
   hCCpi0inFV_stack_10->SetBinContent(3,27.41577);
   hCCpi0inFV_stack_10->SetBinContent(4,29.36763);
   hCCpi0inFV_stack_10->SetBinContent(5,18.08659);
   hCCpi0inFV_stack_10->SetBinContent(6,15.90003);
   hCCpi0inFV_stack_10->SetBinContent(7,20.52118);
   hCCpi0inFV_stack_10->SetBinContent(8,16.83783);
   hCCpi0inFV_stack_10->SetBinContent(9,19.72821);
   hCCpi0inFV_stack_10->SetBinContent(10,16.84087);
   hCCpi0inFV_stack_10->SetBinContent(11,21.64549);
   hCCpi0inFV_stack_10->SetBinContent(12,19.76496);
   hCCpi0inFV_stack_10->SetBinContent(13,19.06221);
   hCCpi0inFV_stack_10->SetBinContent(14,20.24275);
   hCCpi0inFV_stack_10->SetBinContent(15,22.42081);
   hCCpi0inFV_stack_10->SetBinContent(16,20.01699);
   hCCpi0inFV_stack_10->SetBinContent(17,17.11271);
   hCCpi0inFV_stack_10->SetBinContent(18,16.1175);
   hCCpi0inFV_stack_10->SetBinContent(19,18.20165);
   hCCpi0inFV_stack_10->SetBinContent(20,21.72885);
   hCCpi0inFV_stack_10->SetBinContent(21,24.75526);
   hCCpi0inFV_stack_10->SetBinContent(22,22.29772);
   hCCpi0inFV_stack_10->SetBinContent(23,25.04309);
   hCCpi0inFV_stack_10->SetBinContent(24,19.2403);
   hCCpi0inFV_stack_10->SetBinError(1,2.410202);
   hCCpi0inFV_stack_10->SetBinError(2,2.554149);
   hCCpi0inFV_stack_10->SetBinError(3,2.588842);
   hCCpi0inFV_stack_10->SetBinError(4,2.69773);
   hCCpi0inFV_stack_10->SetBinError(5,2.094546);
   hCCpi0inFV_stack_10->SetBinError(6,1.963551);
   hCCpi0inFV_stack_10->SetBinError(7,2.294183);
   hCCpi0inFV_stack_10->SetBinError(8,2.085996);
   hCCpi0inFV_stack_10->SetBinError(9,2.245855);
   hCCpi0inFV_stack_10->SetBinError(10,2.104532);
   hCCpi0inFV_stack_10->SetBinError(11,2.338906);
   hCCpi0inFV_stack_10->SetBinError(12,2.173104);
   hCCpi0inFV_stack_10->SetBinError(13,2.211122);
   hCCpi0inFV_stack_10->SetBinError(14,2.202711);
   hCCpi0inFV_stack_10->SetBinError(15,2.354437);
   hCCpi0inFV_stack_10->SetBinError(16,2.24964);
   hCCpi0inFV_stack_10->SetBinError(17,1.975613);
   hCCpi0inFV_stack_10->SetBinError(18,2.020295);
   hCCpi0inFV_stack_10->SetBinError(19,2.14867);
   hCCpi0inFV_stack_10->SetBinError(20,2.433692);
   hCCpi0inFV_stack_10->SetBinError(21,2.482634);
   hCCpi0inFV_stack_10->SetBinError(22,2.369258);
   hCCpi0inFV_stack_10->SetBinError(23,2.536484);
   hCCpi0inFV_stack_10->SetBinError(24,2.12429);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,9.818153);
   hNCinFV_stack_11->SetBinContent(2,12.66238);
   hNCinFV_stack_11->SetBinContent(3,15.83664);
   hNCinFV_stack_11->SetBinContent(4,11.71914);
   hNCinFV_stack_11->SetBinContent(5,11.34647);
   hNCinFV_stack_11->SetBinContent(6,9.486428);
   hNCinFV_stack_11->SetBinContent(7,8.762355);
   hNCinFV_stack_11->SetBinContent(8,10.65827);
   hNCinFV_stack_11->SetBinContent(9,11.97756);
   hNCinFV_stack_11->SetBinContent(10,10.98046);
   hNCinFV_stack_11->SetBinContent(11,9.829379);
   hNCinFV_stack_11->SetBinContent(12,11.71914);
   hNCinFV_stack_11->SetBinContent(13,10.9435);
   hNCinFV_stack_11->SetBinContent(14,12.84449);
   hNCinFV_stack_11->SetBinContent(15,13.32813);
   hNCinFV_stack_11->SetBinContent(16,11.09035);
   hNCinFV_stack_11->SetBinContent(17,8.052787);
   hNCinFV_stack_11->SetBinContent(18,8.01245);
   hNCinFV_stack_11->SetBinContent(19,9.905107);
   hNCinFV_stack_11->SetBinContent(20,8.857635);
   hNCinFV_stack_11->SetBinContent(21,11.32402);
   hNCinFV_stack_11->SetBinContent(22,14.99483);
   hNCinFV_stack_11->SetBinContent(23,12.4141);
   hNCinFV_stack_11->SetBinContent(24,5.621671);
   hNCinFV_stack_11->SetBinError(1,1.569689);
   hNCinFV_stack_11->SetBinError(2,1.766644);
   hNCinFV_stack_11->SetBinError(3,1.97228);
   hNCinFV_stack_11->SetBinError(4,1.755719);
   hNCinFV_stack_11->SetBinError(5,1.617563);
   hNCinFV_stack_11->SetBinError(6,1.533465);
   hNCinFV_stack_11->SetBinError(7,1.401338);
   hNCinFV_stack_11->SetBinError(8,1.606358);
   hNCinFV_stack_11->SetBinError(9,1.756767);
   hNCinFV_stack_11->SetBinError(10,1.699249);
   hNCinFV_stack_11->SetBinError(11,1.50663);
   hNCinFV_stack_11->SetBinError(12,1.755719);
   hNCinFV_stack_11->SetBinError(13,1.653412);
   hNCinFV_stack_11->SetBinError(14,1.830955);
   hNCinFV_stack_11->SetBinError(15,1.882855);
   hNCinFV_stack_11->SetBinError(16,1.676938);
   hNCinFV_stack_11->SetBinError(17,1.455211);
   hNCinFV_stack_11->SetBinError(18,1.400941);
   hNCinFV_stack_11->SetBinError(19,1.562086);
   hNCinFV_stack_11->SetBinError(20,1.442596);
   hNCinFV_stack_11->SetBinError(21,1.733348);
   hNCinFV_stack_11->SetBinError(22,1.942361);
   hNCinFV_stack_11->SetBinError(23,1.766727);
   hNCinFV_stack_11->SetBinError(24,1.160709);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,14.69689);
   hnumuCCinFV_stack_12->SetBinContent(2,11.62278);
   hnumuCCinFV_stack_12->SetBinContent(3,8.528565);
   hnumuCCinFV_stack_12->SetBinContent(4,7.568453);
   hnumuCCinFV_stack_12->SetBinContent(5,5.971922);
   hnumuCCinFV_stack_12->SetBinContent(6,6.902789);
   hnumuCCinFV_stack_12->SetBinContent(7,7.300455);
   hnumuCCinFV_stack_12->SetBinContent(8,6.253017);
   hnumuCCinFV_stack_12->SetBinContent(9,8.499553);
   hnumuCCinFV_stack_12->SetBinContent(10,7.068756);
   hnumuCCinFV_stack_12->SetBinContent(11,13.32279);
   hnumuCCinFV_stack_12->SetBinContent(12,10.01473);
   hnumuCCinFV_stack_12->SetBinContent(13,9.062948);
   hnumuCCinFV_stack_12->SetBinContent(14,12.93421);
   hnumuCCinFV_stack_12->SetBinContent(15,9.903028);
   hnumuCCinFV_stack_12->SetBinContent(16,8.888343);
   hnumuCCinFV_stack_12->SetBinContent(17,5.128361);
   hnumuCCinFV_stack_12->SetBinContent(18,6.553992);
   hnumuCCinFV_stack_12->SetBinContent(19,5.433204);
   hnumuCCinFV_stack_12->SetBinContent(20,4.661627);
   hnumuCCinFV_stack_12->SetBinContent(21,9.013526);
   hnumuCCinFV_stack_12->SetBinContent(22,11.79537);
   hnumuCCinFV_stack_12->SetBinContent(23,11.53746);
   hnumuCCinFV_stack_12->SetBinContent(24,15.37783);
   hnumuCCinFV_stack_12->SetBinError(1,2.030965);
   hnumuCCinFV_stack_12->SetBinError(2,1.793908);
   hnumuCCinFV_stack_12->SetBinError(3,1.515035);
   hnumuCCinFV_stack_12->SetBinError(4,1.603833);
   hnumuCCinFV_stack_12->SetBinError(5,1.25554);
   hnumuCCinFV_stack_12->SetBinError(6,1.392166);
   hnumuCCinFV_stack_12->SetBinError(7,1.383619);
   hnumuCCinFV_stack_12->SetBinError(8,1.535554);
   hnumuCCinFV_stack_12->SetBinError(9,1.544509);
   hnumuCCinFV_stack_12->SetBinError(10,1.303422);
   hnumuCCinFV_stack_12->SetBinError(11,2.603074);
   hnumuCCinFV_stack_12->SetBinError(12,1.745797);
   hnumuCCinFV_stack_12->SetBinError(13,1.567223);
   hnumuCCinFV_stack_12->SetBinError(14,2.327079);
   hnumuCCinFV_stack_12->SetBinError(15,1.580807);
   hnumuCCinFV_stack_12->SetBinError(16,1.372454);
   hnumuCCinFV_stack_12->SetBinError(17,1.211957);
   hnumuCCinFV_stack_12->SetBinError(18,1.790347);
   hnumuCCinFV_stack_12->SetBinError(19,1.138596);
   hnumuCCinFV_stack_12->SetBinError(20,1.089745);
   hnumuCCinFV_stack_12->SetBinError(21,1.866151);
   hnumuCCinFV_stack_12->SetBinError(22,2.28642);
   hnumuCCinFV_stack_12->SetBinError(23,1.93809);
   hnumuCCinFV_stack_12->SetBinError(24,2.387176);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.036279);
   hnueCCinFV_stack_13->SetBinContent(2,2.47894);
   hnueCCinFV_stack_13->SetBinContent(3,1.064237);
   hnueCCinFV_stack_13->SetBinContent(4,1.333777);
   hnueCCinFV_stack_13->SetBinContent(5,1.123484);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_13->SetBinContent(9,0.9352454);
   hnueCCinFV_stack_13->SetBinContent(10,2.424972);
   hnueCCinFV_stack_13->SetBinContent(11,1.037346);
   hnueCCinFV_stack_13->SetBinContent(12,1.269369);
   hnueCCinFV_stack_13->SetBinContent(13,0.9858824);
   hnueCCinFV_stack_13->SetBinContent(14,1.366893);
   hnueCCinFV_stack_13->SetBinContent(15,0.9868677);
   hnueCCinFV_stack_13->SetBinContent(16,0.9106824);
   hnueCCinFV_stack_13->SetBinContent(17,0.6358774);
   hnueCCinFV_stack_13->SetBinContent(18,3.289012);
   hnueCCinFV_stack_13->SetBinContent(19,1.129172);
   hnueCCinFV_stack_13->SetBinContent(20,2.146811);
   hnueCCinFV_stack_13->SetBinContent(21,1.027643);
   hnueCCinFV_stack_13->SetBinContent(22,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(23,1.381845);
   hnueCCinFV_stack_13->SetBinContent(24,1.265826);
   hnueCCinFV_stack_13->SetBinError(1,0.8259115);
   hnueCCinFV_stack_13->SetBinError(2,1.596092);
   hnueCCinFV_stack_13->SetBinError(3,0.4789597);
   hnueCCinFV_stack_13->SetBinError(4,0.6212142);
   hnueCCinFV_stack_13->SetBinError(5,0.5794591);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.372493);
   hnueCCinFV_stack_13->SetBinError(9,0.481493);
   hnueCCinFV_stack_13->SetBinError(10,1.167136);
   hnueCCinFV_stack_13->SetBinError(11,0.4668095);
   hnueCCinFV_stack_13->SetBinError(12,0.5218164);
   hnueCCinFV_stack_13->SetBinError(13,0.4391337);
   hnueCCinFV_stack_13->SetBinError(14,0.8674883);
   hnueCCinFV_stack_13->SetBinError(15,0.5057638);
   hnueCCinFV_stack_13->SetBinError(16,0.4596074);
   hnueCCinFV_stack_13->SetBinError(17,0.3692351);
   hnueCCinFV_stack_13->SetBinError(18,1.37843);
   hnueCCinFV_stack_13->SetBinError(19,0.5775463);
   hnueCCinFV_stack_13->SetBinError(20,1.389452);
   hnueCCinFV_stack_13->SetBinError(21,0.4941397);
   hnueCCinFV_stack_13->SetBinError(22,0.3582875);
   hnueCCinFV_stack_13->SetBinError(23,0.6482646);
   hnueCCinFV_stack_13->SetBinError(24,0.5867829);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__17->SetBinContent(1,161.8826);
   hmcerror__17->SetBinContent(2,173.6109);
   hmcerror__17->SetBinContent(3,176.0889);
   hmcerror__17->SetBinContent(4,176.6844);
   hmcerror__17->SetBinContent(5,139.6404);
   hmcerror__17->SetBinContent(6,141.4975);
   hmcerror__17->SetBinContent(7,147.8432);
   hmcerror__17->SetBinContent(8,135.0335);
   hmcerror__17->SetBinContent(9,152.1957);
   hmcerror__17->SetBinContent(10,154.3327);
   hmcerror__17->SetBinContent(11,156.2616);
   hmcerror__17->SetBinContent(12,138.2889);
   hmcerror__17->SetBinContent(13,139.2269);
   hmcerror__17->SetBinContent(14,155.1379);
   hmcerror__17->SetBinContent(15,161.5667);
   hmcerror__17->SetBinContent(16,158.2947);
   hmcerror__17->SetBinContent(17,141.386);
   hmcerror__17->SetBinContent(18,144.2127);
   hmcerror__17->SetBinContent(19,146.4263);
   hmcerror__17->SetBinContent(20,139.174);
   hmcerror__17->SetBinContent(21,167.9614);
   hmcerror__17->SetBinContent(22,170.4036);
   hmcerror__17->SetBinContent(23,163.3749);
   hmcerror__17->SetBinContent(24,142.4799);
   hmcerror__17->SetBinError(1,47.50314);
   hmcerror__17->SetBinError(2,53.83876);
   hmcerror__17->SetBinError(3,48.17516);
   hmcerror__17->SetBinError(4,44.16227);
   hmcerror__17->SetBinError(5,39.44488);
   hmcerror__17->SetBinError(6,36.13769);
   hmcerror__17->SetBinError(7,42.8574);
   hmcerror__17->SetBinError(8,36.47131);
   hmcerror__17->SetBinError(9,41.81349);
   hmcerror__17->SetBinError(10,45.22407);
   hmcerror__17->SetBinError(11,43.10393);
   hmcerror__17->SetBinError(12,39.44477);
   hmcerror__17->SetBinError(13,39.79378);
   hmcerror__17->SetBinError(14,42.77384);
   hmcerror__17->SetBinError(15,42.74827);
   hmcerror__17->SetBinError(16,42.11943);
   hmcerror__17->SetBinError(17,37.90833);
   hmcerror__17->SetBinError(18,39.2873);
   hmcerror__17->SetBinError(19,39.19774);
   hmcerror__17->SetBinError(20,38.70254);
   hmcerror__17->SetBinError(21,43.69927);
   hmcerror__17->SetBinError(22,47.39637);
   hmcerror__17->SetBinError(23,48.67142);
   hmcerror__17->SetBinError(24,38.93582);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3021[24] = {
   159,
   167,
   170,
   161,
   176,
   157,
   121,
   130,
   137,
   137,
   128,
   137,
   137,
   146,
   174,
   149,
   134,
   146,
   134,
   138,
   152,
   152,
   140,
   140};
   Double_t _felx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3021[24] = {
   12.60952,
   12.92285,
   13.0384,
   12.68858,
   13.2665,
   12.52996,
   11,
   11.40175,
   11.7047,
   11.7047,
   11.31371,
   11.7047,
   11.7047,
   12.08305,
   13.19091,
   12.20656,
   11.57584,
   12.08305,
   11.57584,
   11.74734,
   12.32883,
   12.32883,
   11.83216,
   11.83216};
   Double_t _fehx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3021[24] = {
   12.60952,
   12.92285,
   13.0384,
   12.68858,
   13.2665,
   12.52996,
   11,
   11.40175,
   11.7047,
   11.7047,
   11.31371,
   11.7047,
   11.7047,
   12.08305,
   13.19091,
   12.20656,
   11.57584,
   12.08305,
   11.57584,
   11.74734,
   12.32883,
   12.32883,
   11.83216,
   11.83216};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(102.0734);
   Graph_Graph3021->SetMaximum(197.1931);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3522.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.5","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 502.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3022[24] = {
   0.2934418,
   0.3101116,
   0.2735844,
   0.2499501,
   0.2824748,
   0.2553946,
   0.2898841,
   0.2700909,
   0.274735,
   0.2930297,
   0.2758447,
   0.2852345,
   0.2858197,
   0.2757149,
   0.2645859,
   0.2660824,
   0.2681193,
   0.272426,
   0.267696,
   0.2780874,
   0.2601744,
   0.2781417,
   0.2979125,
   0.2732724};
   Double_t _fehx3022[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3022[24] = {
   0.2934418,
   0.3101116,
   0.2735844,
   0.2499501,
   0.2824748,
   0.2553946,
   0.2898841,
   0.2700909,
   0.274735,
   0.2930297,
   0.2758447,
   0.2852345,
   0.2858197,
   0.2757149,
   0.2645859,
   0.2660824,
   0.2681193,
   0.272426,
   0.267696,
   0.2780874,
   0.2601744,
   0.2781417,
   0.2979125,
   0.2732724};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-3.78,3.78);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3023[24] = {
   0.2332105,
   0.2296155,
   0.2230265,
   0.2213735,
   0.215857,
   0.2111799,
   0.2100712,
   0.2253833,
   0.2243025,
   0.2255885,
   0.2230737,
   0.2302027,
   0.2280137,
   0.2173828,
   0.2188799,
   0.2172065,
   0.2196807,
   0.2014364,
   0.2084328,
   0.2182593,
   0.2209768,
   0.214692,
   0.223139,
   0.228446};
   Double_t _fehx3023[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3023[24] = {
   0.2332105,
   0.2296155,
   0.2230265,
   0.2213735,
   0.215857,
   0.2111799,
   0.2100712,
   0.2253833,
   0.2243025,
   0.2255885,
   0.2230737,
   0.2302027,
   0.2280137,
   0.2173828,
   0.2188799,
   0.2172065,
   0.2196807,
   0.2014364,
   0.2084328,
   0.2182593,
   0.2209768,
   0.214692,
   0.223139,
   0.228446};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-3.78,3.78);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3024[24] = {
   0.982193,
   0.9619211,
   0.9654217,
   0.9112295,
   1.260381,
   1.10956,
   0.8184346,
   0.9627243,
   0.9001568,
   0.8876925,
   0.8191392,
   0.9906795,
   0.9840056,
   0.941098,
   1.076955,
   0.9412824,
   0.9477598,
   1.012393,
   0.9151359,
   0.9915644,
   0.9049696,
   0.8919997,
   0.8569249,
   0.9825947};
   Double_t _felx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3024[24] = {
   0.07789297,
   0.07443569,
   0.07404446,
   0.07181495,
   0.09500476,
   0.08855257,
   0.07440314,
   0.08443651,
   0.07690558,
   0.07584069,
   0.07240236,
   0.08463946,
   0.08406927,
   0.07788582,
   0.08164373,
   0.07711286,
   0.08187398,
   0.08378626,
   0.0790557,
   0.08440757,
   0.07340273,
   0.07235073,
   0.07242337,
   0.08304441};
   Double_t _fehx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3024[24] = {
   0.07789297,
   0.07443569,
   0.07404446,
   0.07181495,
   0.09500476,
   0.08855257,
   0.07440314,
   0.08443651,
   0.07690558,
   0.07584069,
   0.07240236,
   0.08463946,
   0.08406927,
   0.07788582,
   0.08164373,
   0.07711286,
   0.08187398,
   0.08378626,
   0.0790557,
   0.08440757,
   0.07340273,
   0.07235073,
   0.07242337,
   0.08304441};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.682896);
   Graph_Graph3024->SetMaximum(1.416521);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 10:27:35 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
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
   pad1->Range(-169.2308,-2.38,1241.026,263.1779);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__16->SetBinContent(0,1.247282);
   hmc__16->SetBinContent(1,71.60912);
   hmc__16->SetBinContent(2,97.35326);
   hmc__16->SetBinContent(3,102.8755);
   hmc__16->SetBinContent(4,88.58321);
   hmc__16->SetBinContent(5,103.994);
   hmc__16->SetBinContent(6,100.7365);
   hmc__16->SetBinContent(7,91.06086);
   hmc__16->SetBinContent(8,96.35671);
   hmc__16->SetBinContent(9,91.84213);
   hmc__16->SetBinContent(10,83.22043);
   hmc__16->SetBinContent(11,86.315);
   hmc__16->SetBinContent(12,86.00495);
   hmc__16->SetBinContent(13,90.86002);
   hmc__16->SetBinContent(14,105.5672);
   hmc__16->SetBinContent(15,105.7542);
   hmc__16->SetBinContent(16,89.71426);
   hmc__16->SetBinContent(17,96.05347);
   hmc__16->SetBinContent(18,94.78357);
   hmc__16->SetBinContent(19,93.82635);
   hmc__16->SetBinContent(20,92.92444);
   hmc__16->SetBinContent(21,111.6176);
   hmc__16->SetBinContent(22,91.54575);
   hmc__16->SetBinContent(23,86.69612);
   hmc__16->SetBinContent(24,100.7223);
   hmc__16->SetBinContent(25,95.1065);
   hmc__16->SetBinContent(26,105.6106);
   hmc__16->SetBinContent(27,96.55885);
   hmc__16->SetBinContent(28,97.28863);
   hmc__16->SetBinContent(29,83.85143);
   hmc__16->SetBinContent(30,55.01698);
   hmc__16->SetBinContent(31,1.199601);
   hmc__16->SetBinError(0,0.5693017);
   hmc__16->SetBinError(1,22.6416);
   hmc__16->SetBinError(2,29.4314);
   hmc__16->SetBinError(3,36.48167);
   hmc__16->SetBinError(4,24.52744);
   hmc__16->SetBinError(5,31.76654);
   hmc__16->SetBinError(6,31.774);
   hmc__16->SetBinError(7,24.99862);
   hmc__16->SetBinError(8,29.10577);
   hmc__16->SetBinError(9,26.94786);
   hmc__16->SetBinError(10,23.26438);
   hmc__16->SetBinError(11,24.85268);
   hmc__16->SetBinError(12,26.4898);
   hmc__16->SetBinError(13,25.11522);
   hmc__16->SetBinError(14,28.24999);
   hmc__16->SetBinError(15,31.13735);
   hmc__16->SetBinError(16,31.11633);
   hmc__16->SetBinError(17,26.05998);
   hmc__16->SetBinError(18,24.66877);
   hmc__16->SetBinError(19,24.55385);
   hmc__16->SetBinError(20,26.37981);
   hmc__16->SetBinError(21,31.32441);
   hmc__16->SetBinError(22,29.10486);
   hmc__16->SetBinError(23,24.26477);
   hmc__16->SetBinError(24,30.77315);
   hmc__16->SetBinError(25,27.7624);
   hmc__16->SetBinError(26,30.50787);
   hmc__16->SetBinError(27,28.48183);
   hmc__16->SetBinError(28,26.18846);
   hmc__16->SetBinError(29,25.46378);
   hmc__16->SetBinError(30,18.52393);
   hmc__16->SetBinError(31,2.54971);
   hmc__16->SetBinError(32,0.3895343);
   hmc__16->SetBinError(33,0.3895343);
   hmc__16->SetMinimum(-2.38);
   hmc__16->SetMaximum(249.9);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",32,0,1100);
   hs6_stack_6->SetMinimum(-6.289654e-09);
   hs6_stack_6->SetMaximum(117.1985);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.445823);
   hbadmatch_stack_1->SetBinContent(2,2.218558);
   hbadmatch_stack_1->SetBinContent(3,1.560596);
   hbadmatch_stack_1->SetBinContent(4,3.138041);
   hbadmatch_stack_1->SetBinContent(5,2.829903);
   hbadmatch_stack_1->SetBinContent(6,3.852839);
   hbadmatch_stack_1->SetBinContent(7,0.9718649);
   hbadmatch_stack_1->SetBinContent(8,1.344874);
   hbadmatch_stack_1->SetBinContent(9,2.549479);
   hbadmatch_stack_1->SetBinContent(10,1.805062);
   hbadmatch_stack_1->SetBinContent(11,1.125359);
   hbadmatch_stack_1->SetBinContent(12,1.848925);
   hbadmatch_stack_1->SetBinContent(13,0.4394629);
   hbadmatch_stack_1->SetBinContent(14,3.937159);
   hbadmatch_stack_1->SetBinContent(15,1.772225);
   hbadmatch_stack_1->SetBinContent(16,2.503994);
   hbadmatch_stack_1->SetBinContent(17,1.552503);
   hbadmatch_stack_1->SetBinContent(18,1.649353);
   hbadmatch_stack_1->SetBinContent(19,0.8290086);
   hbadmatch_stack_1->SetBinContent(20,2.572459);
   hbadmatch_stack_1->SetBinContent(21,6.129503);
   hbadmatch_stack_1->SetBinContent(22,2.088655);
   hbadmatch_stack_1->SetBinContent(23,1.752753);
   hbadmatch_stack_1->SetBinContent(24,3.096967);
   hbadmatch_stack_1->SetBinContent(25,1.646102);
   hbadmatch_stack_1->SetBinContent(26,1.258073);
   hbadmatch_stack_1->SetBinContent(27,2.909204);
   hbadmatch_stack_1->SetBinContent(28,2.021625);
   hbadmatch_stack_1->SetBinContent(29,1.888952);
   hbadmatch_stack_1->SetBinContent(30,1.861376);
   hbadmatch_stack_1->SetBinError(1,0.5476597);
   hbadmatch_stack_1->SetBinError(2,0.7161297);
   hbadmatch_stack_1->SetBinError(3,0.6047651);
   hbadmatch_stack_1->SetBinError(4,0.9778108);
   hbadmatch_stack_1->SetBinError(5,0.9127411);
   hbadmatch_stack_1->SetBinError(6,1.233231);
   hbadmatch_stack_1->SetBinError(7,0.500027);
   hbadmatch_stack_1->SetBinError(8,0.6389867);
   hbadmatch_stack_1->SetBinError(9,0.8553801);
   hbadmatch_stack_1->SetBinError(10,0.7332904);
   hbadmatch_stack_1->SetBinError(11,0.5194673);
   hbadmatch_stack_1->SetBinError(12,0.7839384);
   hbadmatch_stack_1->SetBinError(13,0.2801982);
   hbadmatch_stack_1->SetBinError(14,1.776702);
   hbadmatch_stack_1->SetBinError(15,0.6825027);
   hbadmatch_stack_1->SetBinError(16,0.8141812);
   hbadmatch_stack_1->SetBinError(17,0.7151375);
   hbadmatch_stack_1->SetBinError(18,0.6645444);
   hbadmatch_stack_1->SetBinError(19,0.4162863);
   hbadmatch_stack_1->SetBinError(20,0.8532938);
   hbadmatch_stack_1->SetBinError(21,1.310216);
   hbadmatch_stack_1->SetBinError(22,0.6738377);
   hbadmatch_stack_1->SetBinError(23,0.7486371);
   hbadmatch_stack_1->SetBinError(24,0.9363091);
   hbadmatch_stack_1->SetBinError(25,0.6434129);
   hbadmatch_stack_1->SetBinError(26,0.536862);
   hbadmatch_stack_1->SetBinError(27,1.781377);
   hbadmatch_stack_1->SetBinError(28,0.8735925);
   hbadmatch_stack_1->SetBinError(29,0.8063317);
   hbadmatch_stack_1->SetBinError(30,0.7363857);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,5.669206);
   hext_stack_2->SetBinContent(2,7.925626);
   hext_stack_2->SetBinContent(3,14.27834);
   hext_stack_2->SetBinContent(4,8.649442);
   hext_stack_2->SetBinContent(5,12.61005);
   hext_stack_2->SetBinContent(6,10.99524);
   hext_stack_2->SetBinContent(7,7.187449);
   hext_stack_2->SetBinContent(8,9.794217);
   hext_stack_2->SetBinContent(9,6.578966);
   hext_stack_2->SetBinContent(10,7.392164);
   hext_stack_2->SetBinContent(11,12.2757);
   hext_stack_2->SetBinContent(12,4.628173);
   hext_stack_2->SetBinContent(13,7.309962);
   hext_stack_2->SetBinContent(14,13.30074);
   hext_stack_2->SetBinContent(15,11.49123);
   hext_stack_2->SetBinContent(16,7.380575);
   hext_stack_2->SetBinContent(17,7.448415);
   hext_stack_2->SetBinContent(18,11.24185);
   hext_stack_2->SetBinContent(19,13.96112);
   hext_stack_2->SetBinContent(20,8.600371);
   hext_stack_2->SetBinContent(21,17.57144);
   hext_stack_2->SetBinContent(22,15.8716);
   hext_stack_2->SetBinContent(23,10.67526);
   hext_stack_2->SetBinContent(24,6.560196);
   hext_stack_2->SetBinContent(25,3.889996);
   hext_stack_2->SetBinContent(26,12.18909);
   hext_stack_2->SetBinContent(27,7.455595);
   hext_stack_2->SetBinContent(28,9.787037);
   hext_stack_2->SetBinContent(29,3.248382);
   hext_stack_2->SetBinContent(30,2.357392);
   hext_stack_2->SetBinError(1,1.564185);
   hext_stack_2->SetBinError(2,1.893598);
   hext_stack_2->SetBinError(3,2.715701);
   hext_stack_2->SetBinError(4,2.014317);
   hext_stack_2->SetBinError(5,2.404738);
   hext_stack_2->SetBinError(6,2.248421);
   hext_stack_2->SetBinError(7,1.875196);
   hext_stack_2->SetBinError(8,2.07175);
   hext_stack_2->SetBinError(9,1.560451);
   hext_stack_2->SetBinError(10,1.663025);
   hext_stack_2->SetBinError(11,2.493002);
   hext_stack_2->SetBinError(12,1.291697);
   hext_stack_2->SetBinError(13,1.64486);
   hext_stack_2->SetBinError(14,2.631389);
   hext_stack_2->SetBinError(15,2.253798);
   hext_stack_2->SetBinError(16,1.682775);
   hext_stack_2->SetBinError(17,1.814999);
   hext_stack_2->SetBinError(18,2.288157);
   hext_stack_2->SetBinError(19,2.658683);
   hext_stack_2->SetBinError(20,1.824198);
   hext_stack_2->SetBinError(21,2.797629);
   hext_stack_2->SetBinError(22,2.950594);
   hext_stack_2->SetBinError(23,2.255058);
   hext_stack_2->SetBinError(24,1.643863);
   hext_stack_2->SetBinError(25,1.264566);
   hext_stack_2->SetBinError(26,2.453538);
   hext_stack_2->SetBinError(27,1.758699);
   hext_stack_2->SetBinError(28,2.119752);
   hext_stack_2->SetBinError(29,1.089706);
   hext_stack_2->SetBinError(30,0.9653222);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,5.555319);
   hdirt_stack_3->SetBinContent(2,4.960975);
   hdirt_stack_3->SetBinContent(3,3.641063);
   hdirt_stack_3->SetBinContent(4,1.228641);
   hdirt_stack_3->SetBinContent(5,0.5105644);
   hdirt_stack_3->SetBinContent(6,1.174751);
   hdirt_stack_3->SetBinContent(7,1.096754);
   hdirt_stack_3->SetBinContent(8,1.132946);
   hdirt_stack_3->SetBinContent(9,1.471133);
   hdirt_stack_3->SetBinContent(10,0.9707304);
   hdirt_stack_3->SetBinContent(11,0.4950385);
   hdirt_stack_3->SetBinContent(12,0.3695036);
   hdirt_stack_3->SetBinContent(13,1.512961);
   hdirt_stack_3->SetBinContent(14,0.7151096);
   hdirt_stack_3->SetBinContent(15,0.7207426);
   hdirt_stack_3->SetBinContent(16,1.023377);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,0.4797767);
   hdirt_stack_3->SetBinContent(19,0.7567513);
   hdirt_stack_3->SetBinContent(20,0.6610426);
   hdirt_stack_3->SetBinContent(21,1.276893);
   hdirt_stack_3->SetBinContent(22,1.07357);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.5132258);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,1.983438);
   hdirt_stack_3->SetBinContent(27,0.7524016);
   hdirt_stack_3->SetBinContent(28,0.7759784);
   hdirt_stack_3->SetBinContent(29,0.6951543);
   hdirt_stack_3->SetBinContent(30,0.3569671);
   hdirt_stack_3->SetBinError(1,1.272591);
   hdirt_stack_3->SetBinError(2,1.150517);
   hdirt_stack_3->SetBinError(3,0.9730668);
   hdirt_stack_3->SetBinError(4,0.5169031);
   hdirt_stack_3->SetBinError(5,0.3646725);
   hdirt_stack_3->SetBinError(6,0.5995074);
   hdirt_stack_3->SetBinError(7,0.5690882);
   hdirt_stack_3->SetBinError(8,0.526479);
   hdirt_stack_3->SetBinError(9,0.6257402);
   hdirt_stack_3->SetBinError(10,0.7172737);
   hdirt_stack_3->SetBinError(11,0.2933304);
   hdirt_stack_3->SetBinError(12,0.2657029);
   hdirt_stack_3->SetBinError(13,0.7120011);
   hdirt_stack_3->SetBinError(14,0.4327336);
   hdirt_stack_3->SetBinError(15,0.4348223);
   hdirt_stack_3->SetBinError(16,0.5655242);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.3404134);
   hdirt_stack_3->SetBinError(19,0.4605545);
   hdirt_stack_3->SetBinError(20,0.3370462);
   hdirt_stack_3->SetBinError(21,0.5924964);
   hdirt_stack_3->SetBinError(22,0.5046897);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.3997556);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.209415);
   hdirt_stack_3->SetBinError(27,0.4142002);
   hdirt_stack_3->SetBinError(28,0.458477);
   hdirt_stack_3->SetBinError(29,0.4258516);
   hdirt_stack_3->SetBinError(30,0.258803);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.6408324);
   houtFV_stack_4->SetBinContent(1,17.11508);
   houtFV_stack_4->SetBinContent(2,14.23572);
   houtFV_stack_4->SetBinContent(3,8.123717);
   houtFV_stack_4->SetBinContent(4,8.177014);
   houtFV_stack_4->SetBinContent(5,8.011144);
   houtFV_stack_4->SetBinContent(6,10.47657);
   houtFV_stack_4->SetBinContent(7,8.851048);
   houtFV_stack_4->SetBinContent(8,8.960996);
   houtFV_stack_4->SetBinContent(9,8.047922);
   houtFV_stack_4->SetBinContent(10,7.278801);
   houtFV_stack_4->SetBinContent(11,7.755483);
   houtFV_stack_4->SetBinContent(12,6.96467);
   houtFV_stack_4->SetBinContent(13,5.979815);
   houtFV_stack_4->SetBinContent(14,9.128396);
   houtFV_stack_4->SetBinContent(15,10.38928);
   houtFV_stack_4->SetBinContent(16,7.648139);
   houtFV_stack_4->SetBinContent(17,9.707769);
   houtFV_stack_4->SetBinContent(18,9.537781);
   houtFV_stack_4->SetBinContent(19,7.726338);
   houtFV_stack_4->SetBinContent(20,10.75587);
   houtFV_stack_4->SetBinContent(21,8.63499);
   houtFV_stack_4->SetBinContent(22,8.825975);
   houtFV_stack_4->SetBinContent(23,8.308806);
   houtFV_stack_4->SetBinContent(24,7.768377);
   houtFV_stack_4->SetBinContent(25,11.7748);
   houtFV_stack_4->SetBinContent(26,8.215981);
   houtFV_stack_4->SetBinContent(27,11.59692);
   houtFV_stack_4->SetBinContent(28,8.264722);
   houtFV_stack_4->SetBinContent(29,12.66838);
   houtFV_stack_4->SetBinContent(30,12.28008);
   houtFV_stack_4->SetBinContent(31,0.4507997);
   houtFV_stack_4->SetBinError(0,0.4852938);
   houtFV_stack_4->SetBinError(1,2.068913);
   houtFV_stack_4->SetBinError(2,1.8841);
   houtFV_stack_4->SetBinError(3,1.400193);
   houtFV_stack_4->SetBinError(4,1.432438);
   houtFV_stack_4->SetBinError(5,1.421199);
   houtFV_stack_4->SetBinError(6,1.617757);
   houtFV_stack_4->SetBinError(7,1.410172);
   houtFV_stack_4->SetBinError(8,1.495915);
   houtFV_stack_4->SetBinError(9,1.368671);
   houtFV_stack_4->SetBinError(10,1.320315);
   houtFV_stack_4->SetBinError(11,1.441476);
   houtFV_stack_4->SetBinError(12,1.273122);
   houtFV_stack_4->SetBinError(13,1.209261);
   houtFV_stack_4->SetBinError(14,1.501075);
   houtFV_stack_4->SetBinError(15,1.618632);
   houtFV_stack_4->SetBinError(16,1.374282);
   houtFV_stack_4->SetBinError(17,1.524367);
   houtFV_stack_4->SetBinError(18,1.577434);
   houtFV_stack_4->SetBinError(19,1.315563);
   houtFV_stack_4->SetBinError(20,1.720037);
   houtFV_stack_4->SetBinError(21,1.530954);
   houtFV_stack_4->SetBinError(22,1.506427);
   houtFV_stack_4->SetBinError(23,1.424061);
   houtFV_stack_4->SetBinError(24,1.374788);
   houtFV_stack_4->SetBinError(25,1.755987);
   houtFV_stack_4->SetBinError(26,1.459216);
   houtFV_stack_4->SetBinError(27,1.68724);
   houtFV_stack_4->SetBinError(28,1.438064);
   houtFV_stack_4->SetBinError(29,1.871179);
   houtFV_stack_4->SetBinError(30,1.768261);
   houtFV_stack_4->SetBinError(31,0.3577123);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.264071);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.690307);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.710422);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.425406);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.30382);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.863621);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.374086);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.566381);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.487781);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.075276);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.196763);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.253177);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.240332);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.001922);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.343709);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.727633);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.159564);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.962856);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.523976);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.298992);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.444703);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.771063);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.946578);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.550347);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.451425);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,5.036286);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,4.669589);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,3.689127);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.561116);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.7911779);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5843678);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6112772);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7428841);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5649165);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.668451);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6746027);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6743787);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5043538);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7544513);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6011515);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6763225);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6156712);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6078632);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7597206);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7729442);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8124684);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4212997);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7894676);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7385662);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5155694);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5505181);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5437118);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3887446);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6277027);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.095704);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.9434777);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.8299521);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.6847468);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3832121);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.3836927);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2393453);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3271904);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.138892);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.07099921);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5720993);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3440708);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1357443);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.07120673);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5691652);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1795074);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03518925);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4681084);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09541731);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1988369);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1014503);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07454427);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2514673);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02889211);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.09079165);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.03973181);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.305704);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1125614);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1247925);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5106783);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.361666);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.2193829);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.1286995);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.1930926);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.04807669);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1460597);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1650262);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06898104);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03767586);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3144953);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1569998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06581535);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04493469);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3593641);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1181443);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02490985);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2067255);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05986911);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09862915);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07741595);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03129246);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1545947);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02889211);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04579717);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02376276);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1163106);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04538625);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05633366);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1928173);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2242565);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.07962932);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.0601688);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.08729994);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.03886985);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.01841896);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2130187);
   hNCpi0inFVres_stack_7->SetBinContent(1,18.15897);
   hNCpi0inFVres_stack_7->SetBinContent(2,34.58882);
   hNCpi0inFVres_stack_7->SetBinContent(3,37.24314);
   hNCpi0inFVres_stack_7->SetBinContent(4,29.64307);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.87048);
   hNCpi0inFVres_stack_7->SetBinContent(6,37.5795);
   hNCpi0inFVres_stack_7->SetBinContent(7,32.67696);
   hNCpi0inFVres_stack_7->SetBinContent(8,35.68293);
   hNCpi0inFVres_stack_7->SetBinContent(9,37.70549);
   hNCpi0inFVres_stack_7->SetBinContent(10,33.72432);
   hNCpi0inFVres_stack_7->SetBinContent(11,34.0326);
   hNCpi0inFVres_stack_7->SetBinContent(12,35.83551);
   hNCpi0inFVres_stack_7->SetBinContent(13,36.12482);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.51097);
   hNCpi0inFVres_stack_7->SetBinContent(15,39.48806);
   hNCpi0inFVres_stack_7->SetBinContent(16,34.26685);
   hNCpi0inFVres_stack_7->SetBinContent(17,40.79632);
   hNCpi0inFVres_stack_7->SetBinContent(18,35.8228);
   hNCpi0inFVres_stack_7->SetBinContent(19,35.04044);
   hNCpi0inFVres_stack_7->SetBinContent(20,34.93847);
   hNCpi0inFVres_stack_7->SetBinContent(21,31.93736);
   hNCpi0inFVres_stack_7->SetBinContent(22,30.07328);
   hNCpi0inFVres_stack_7->SetBinContent(23,34.00815);
   hNCpi0inFVres_stack_7->SetBinContent(24,41.69894);
   hNCpi0inFVres_stack_7->SetBinContent(25,33.53117);
   hNCpi0inFVres_stack_7->SetBinContent(26,38.27342);
   hNCpi0inFVres_stack_7->SetBinContent(27,34.76871);
   hNCpi0inFVres_stack_7->SetBinContent(28,38.62601);
   hNCpi0inFVres_stack_7->SetBinContent(29,34.7036);
   hNCpi0inFVres_stack_7->SetBinContent(30,18.07588);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1603457);
   hNCpi0inFVres_stack_7->SetBinError(0,0.1058324);
   hNCpi0inFVres_stack_7->SetBinError(1,1.560387);
   hNCpi0inFVres_stack_7->SetBinError(2,2.019319);
   hNCpi0inFVres_stack_7->SetBinError(3,2.222782);
   hNCpi0inFVres_stack_7->SetBinError(4,1.822015);
   hNCpi0inFVres_stack_7->SetBinError(5,2.145122);
   hNCpi0inFVres_stack_7->SetBinError(6,2.100444);
   hNCpi0inFVres_stack_7->SetBinError(7,1.822774);
   hNCpi0inFVres_stack_7->SetBinError(8,2.071428);
   hNCpi0inFVres_stack_7->SetBinError(9,2.137242);
   hNCpi0inFVres_stack_7->SetBinError(10,1.962764);
   hNCpi0inFVres_stack_7->SetBinError(11,2.06321);
   hNCpi0inFVres_stack_7->SetBinError(12,2.010568);
   hNCpi0inFVres_stack_7->SetBinError(13,2.127416);
   hNCpi0inFVres_stack_7->SetBinError(14,2.250562);
   hNCpi0inFVres_stack_7->SetBinError(15,2.230483);
   hNCpi0inFVres_stack_7->SetBinError(16,1.981574);
   hNCpi0inFVres_stack_7->SetBinError(17,2.320193);
   hNCpi0inFVres_stack_7->SetBinError(18,2.034707);
   hNCpi0inFVres_stack_7->SetBinError(19,2.037806);
   hNCpi0inFVres_stack_7->SetBinError(20,2.096348);
   hNCpi0inFVres_stack_7->SetBinError(21,1.793103);
   hNCpi0inFVres_stack_7->SetBinError(22,1.769056);
   hNCpi0inFVres_stack_7->SetBinError(23,1.928232);
   hNCpi0inFVres_stack_7->SetBinError(24,2.464397);
   hNCpi0inFVres_stack_7->SetBinError(25,1.904616);
   hNCpi0inFVres_stack_7->SetBinError(26,2.037741);
   hNCpi0inFVres_stack_7->SetBinError(27,2.008468);
   hNCpi0inFVres_stack_7->SetBinError(28,2.107633);
   hNCpi0inFVres_stack_7->SetBinError(29,2.032803);
   hNCpi0inFVres_stack_7->SetBinError(30,1.565381);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07028117);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.136146);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.927599);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.369057);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.191579);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.582949);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.573034);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.027155);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.626334);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.31866);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.187642);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.802128);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.475241);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.636563);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.438289);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.339884);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.736004);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.947857);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.974531);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.450046);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.392547);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.385055);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.385886);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.519775);
   hNCpi0inFVdis_stack_8->SetBinContent(24,7.586262);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.881637);
   hNCpi0inFVdis_stack_8->SetBinContent(26,7.319201);
   hNCpi0inFVdis_stack_8->SetBinContent(27,7.978063);
   hNCpi0inFVdis_stack_8->SetBinContent(28,8.44746);
   hNCpi0inFVdis_stack_8->SetBinContent(29,4.807647);
   hNCpi0inFVdis_stack_8->SetBinContent(30,3.31793);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.728459);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8990236);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.029439);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.948389);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9028561);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8490383);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.903191);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8868612);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8535325);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8447645);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8234967);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8632732);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8015593);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8058207);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9566587);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.075911);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.037658);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9227071);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9815416);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6656219);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9979419);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9880291);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8223812);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.115062);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.020575);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.8988782);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.9942718);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.115749);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.6630902);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.63268);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1666728);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1317583);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,8.451289);
   hCCpi0inFV_stack_10->SetBinContent(2,10.9929);
   hCCpi0inFV_stack_10->SetBinContent(3,14.01633);
   hCCpi0inFV_stack_10->SetBinContent(4,14.04554);
   hCCpi0inFV_stack_10->SetBinContent(5,16.08314);
   hCCpi0inFV_stack_10->SetBinContent(6,13.25591);
   hCCpi0inFV_stack_10->SetBinContent(7,13.43616);
   hCCpi0inFV_stack_10->SetBinContent(8,13.32999);
   hCCpi0inFV_stack_10->SetBinContent(9,12.71101);
   hCCpi0inFV_stack_10->SetBinContent(10,12.31098);
   hCCpi0inFV_stack_10->SetBinContent(11,12.14364);
   hCCpi0inFV_stack_10->SetBinContent(12,12.87222);
   hCCpi0inFV_stack_10->SetBinContent(13,16.13925);
   hCCpi0inFV_stack_10->SetBinContent(14,13.1969);
   hCCpi0inFV_stack_10->SetBinContent(15,16.84724);
   hCCpi0inFV_stack_10->SetBinContent(16,12.21509);
   hCCpi0inFV_stack_10->SetBinContent(17,10.84376);
   hCCpi0inFV_stack_10->SetBinContent(18,12.35916);
   hCCpi0inFV_stack_10->SetBinContent(19,12.05255);
   hCCpi0inFV_stack_10->SetBinContent(20,13.2553);
   hCCpi0inFV_stack_10->SetBinContent(21,13.40241);
   hCCpi0inFV_stack_10->SetBinContent(22,12.2303);
   hCCpi0inFV_stack_10->SetBinContent(23,13.24238);
   hCCpi0inFV_stack_10->SetBinContent(24,17.23233);
   hCCpi0inFV_stack_10->SetBinContent(25,12.89267);
   hCCpi0inFV_stack_10->SetBinContent(26,16.15883);
   hCCpi0inFV_stack_10->SetBinContent(27,14.71838);
   hCCpi0inFV_stack_10->SetBinContent(28,12.74769);
   hCCpi0inFV_stack_10->SetBinContent(29,9.972024);
   hCCpi0inFV_stack_10->SetBinContent(30,8.392964);
   hCCpi0inFV_stack_10->SetBinContent(31,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(1,1.482235);
   hCCpi0inFV_stack_10->SetBinError(2,1.598829);
   hCCpi0inFV_stack_10->SetBinError(3,1.892424);
   hCCpi0inFV_stack_10->SetBinError(4,1.787717);
   hCCpi0inFV_stack_10->SetBinError(5,1.987359);
   hCCpi0inFV_stack_10->SetBinError(6,1.799569);
   hCCpi0inFV_stack_10->SetBinError(7,1.825468);
   hCCpi0inFV_stack_10->SetBinError(8,1.846107);
   hCCpi0inFV_stack_10->SetBinError(9,1.772503);
   hCCpi0inFV_stack_10->SetBinError(10,1.78866);
   hCCpi0inFV_stack_10->SetBinError(11,1.781464);
   hCCpi0inFV_stack_10->SetBinError(12,1.802315);
   hCCpi0inFV_stack_10->SetBinError(13,1.998555);
   hCCpi0inFV_stack_10->SetBinError(14,1.848386);
   hCCpi0inFV_stack_10->SetBinError(15,2.023545);
   hCCpi0inFV_stack_10->SetBinError(16,1.69804);
   hCCpi0inFV_stack_10->SetBinError(17,1.677222);
   hCCpi0inFV_stack_10->SetBinError(18,1.777355);
   hCCpi0inFV_stack_10->SetBinError(19,1.78763);
   hCCpi0inFV_stack_10->SetBinError(20,1.743508);
   hCCpi0inFV_stack_10->SetBinError(21,1.80083);
   hCCpi0inFV_stack_10->SetBinError(22,1.699794);
   hCCpi0inFV_stack_10->SetBinError(23,1.798096);
   hCCpi0inFV_stack_10->SetBinError(24,2.090012);
   hCCpi0inFV_stack_10->SetBinError(25,1.819913);
   hCCpi0inFV_stack_10->SetBinError(26,2.048646);
   hCCpi0inFV_stack_10->SetBinError(27,1.88948);
   hCCpi0inFV_stack_10->SetBinError(28,1.815464);
   hCCpi0inFV_stack_10->SetBinError(29,1.620261);
   hCCpi0inFV_stack_10->SetBinError(30,1.494443);
   hCCpi0inFV_stack_10->SetBinError(31,0.3397478);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,2.275046);
   hNCinFV_stack_11->SetBinContent(2,5.586427);
   hNCinFV_stack_11->SetBinContent(3,5.996899);
   hNCinFV_stack_11->SetBinContent(4,4.854455);
   hNCinFV_stack_11->SetBinContent(5,7.615591);
   hNCinFV_stack_11->SetBinContent(6,5.337235);
   hNCinFV_stack_11->SetBinContent(7,8.878763);
   hNCinFV_stack_11->SetBinContent(8,7.568035);
   hNCinFV_stack_11->SetBinContent(9,5.297634);
   hNCinFV_stack_11->SetBinContent(10,6.097423);
   hNCinFV_stack_11->SetBinContent(11,5.549035);
   hNCinFV_stack_11->SetBinContent(12,8.699833);
   hNCinFV_stack_11->SetBinContent(13,7.276175);
   hNCinFV_stack_11->SetBinContent(14,6.645958);
   hNCinFV_stack_11->SetBinContent(15,6.36457);
   hNCinFV_stack_11->SetBinContent(16,7.960166);
   hNCinFV_stack_11->SetBinContent(17,6.604833);
   hNCinFV_stack_11->SetBinContent(18,6.385065);
   hNCinFV_stack_11->SetBinContent(19,7.006531);
   hNCinFV_stack_11->SetBinContent(20,7.171369);
   hNCinFV_stack_11->SetBinContent(21,9.998239);
   hNCinFV_stack_11->SetBinContent(22,4.953668);
   hNCinFV_stack_11->SetBinContent(23,5.493469);
   hNCinFV_stack_11->SetBinContent(24,5.896853);
   hNCinFV_stack_11->SetBinContent(25,9.38734);
   hNCinFV_stack_11->SetBinContent(26,7.810317);
   hNCinFV_stack_11->SetBinContent(27,7.214622);
   hNCinFV_stack_11->SetBinContent(28,7.432628);
   hNCinFV_stack_11->SetBinContent(29,6.837487);
   hNCinFV_stack_11->SetBinContent(30,2.807739);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,0.8475965);
   hNCinFV_stack_11->SetBinError(2,1.168923);
   hNCinFV_stack_11->SetBinError(3,1.267374);
   hNCinFV_stack_11->SetBinError(4,1.17024);
   hNCinFV_stack_11->SetBinError(5,1.409296);
   hNCinFV_stack_11->SetBinError(6,1.405774);
   hNCinFV_stack_11->SetBinError(7,1.59734);
   hNCinFV_stack_11->SetBinError(8,1.416409);
   hNCinFV_stack_11->SetBinError(9,1.129731);
   hNCinFV_stack_11->SetBinError(10,1.264281);
   hNCinFV_stack_11->SetBinError(11,1.240776);
   hNCinFV_stack_11->SetBinError(12,1.757707);
   hNCinFV_stack_11->SetBinError(13,1.453928);
   hNCinFV_stack_11->SetBinError(14,1.424257);
   hNCinFV_stack_11->SetBinError(15,1.299163);
   hNCinFV_stack_11->SetBinError(16,1.392884);
   hNCinFV_stack_11->SetBinError(17,1.327967);
   hNCinFV_stack_11->SetBinError(18,1.238867);
   hNCinFV_stack_11->SetBinError(19,1.482719);
   hNCinFV_stack_11->SetBinError(20,1.463425);
   hNCinFV_stack_11->SetBinError(21,1.561707);
   hNCinFV_stack_11->SetBinError(22,1.096986);
   hNCinFV_stack_11->SetBinError(23,1.200192);
   hNCinFV_stack_11->SetBinError(24,1.253832);
   hNCinFV_stack_11->SetBinError(25,1.819736);
   hNCinFV_stack_11->SetBinError(26,1.576282);
   hNCinFV_stack_11->SetBinError(27,1.407859);
   hNCinFV_stack_11->SetBinError(28,1.447603);
   hNCinFV_stack_11->SetBinError(29,1.370407);
   hNCinFV_stack_11->SetBinError(30,0.7632448);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,5.24377);
   hnumuCCinFV_stack_12->SetBinContent(2,7.292089);
   hnumuCCinFV_stack_12->SetBinContent(3,7.602047);
   hnumuCCinFV_stack_12->SetBinContent(4,7.337333);
   hnumuCCinFV_stack_12->SetBinContent(5,5.449762);
   hnumuCCinFV_stack_12->SetBinContent(6,6.555052);
   hnumuCCinFV_stack_12->SetBinContent(7,6.728057);
   hnumuCCinFV_stack_12->SetBinContent(8,6.862811);
   hnumuCCinFV_stack_12->SetBinContent(9,5.294412);
   hnumuCCinFV_stack_12->SetBinContent(10,4.198531);
   hnumuCCinFV_stack_12->SetBinContent(11,3.659922);
   hnumuCCinFV_stack_12->SetBinContent(12,4.146935);
   hnumuCCinFV_stack_12->SetBinContent(13,5.417044);
   hnumuCCinFV_stack_12->SetBinContent(14,5.307568);
   hnumuCCinFV_stack_12->SetBinContent(15,5.423989);
   hnumuCCinFV_stack_12->SetBinContent(16,3.566779);
   hnumuCCinFV_stack_12->SetBinContent(17,6.217955);
   hnumuCCinFV_stack_12->SetBinContent(18,5.108275);
   hnumuCCinFV_stack_12->SetBinContent(19,4.067761);
   hnumuCCinFV_stack_12->SetBinContent(20,6.34145);
   hnumuCCinFV_stack_12->SetBinContent(21,10.72033);
   hnumuCCinFV_stack_12->SetBinContent(22,4.98822);
   hnumuCCinFV_stack_12->SetBinContent(23,4.164598);
   hnumuCCinFV_stack_12->SetBinContent(24,5.967929);
   hnumuCCinFV_stack_12->SetBinContent(25,5.812602);
   hnumuCCinFV_stack_12->SetBinContent(26,6.134299);
   hnumuCCinFV_stack_12->SetBinContent(27,3.370608);
   hnumuCCinFV_stack_12->SetBinContent(28,4.993323);
   hnumuCCinFV_stack_12->SetBinContent(29,6.545301);
   hnumuCCinFV_stack_12->SetBinContent(30,4.498453);
   hnumuCCinFV_stack_12->SetBinError(1,1.508264);
   hnumuCCinFV_stack_12->SetBinError(2,1.474261);
   hnumuCCinFV_stack_12->SetBinError(3,1.521753);
   hnumuCCinFV_stack_12->SetBinError(4,1.381934);
   hnumuCCinFV_stack_12->SetBinError(5,1.191551);
   hnumuCCinFV_stack_12->SetBinError(6,1.488321);
   hnumuCCinFV_stack_12->SetBinError(7,1.922072);
   hnumuCCinFV_stack_12->SetBinError(8,1.343108);
   hnumuCCinFV_stack_12->SetBinError(9,1.291748);
   hnumuCCinFV_stack_12->SetBinError(10,1.327033);
   hnumuCCinFV_stack_12->SetBinError(11,0.9740414);
   hnumuCCinFV_stack_12->SetBinError(12,1.548981);
   hnumuCCinFV_stack_12->SetBinError(13,1.308629);
   hnumuCCinFV_stack_12->SetBinError(14,1.210037);
   hnumuCCinFV_stack_12->SetBinError(15,1.273783);
   hnumuCCinFV_stack_12->SetBinError(16,0.9568029);
   hnumuCCinFV_stack_12->SetBinError(17,1.392005);
   hnumuCCinFV_stack_12->SetBinError(18,1.140331);
   hnumuCCinFV_stack_12->SetBinError(19,1.24797);
   hnumuCCinFV_stack_12->SetBinError(20,1.882962);
   hnumuCCinFV_stack_12->SetBinError(21,1.740353);
   hnumuCCinFV_stack_12->SetBinError(22,1.15682);
   hnumuCCinFV_stack_12->SetBinError(23,0.9823385);
   hnumuCCinFV_stack_12->SetBinError(24,1.324685);
   hnumuCCinFV_stack_12->SetBinError(25,1.188281);
   hnumuCCinFV_stack_12->SetBinError(26,1.347403);
   hnumuCCinFV_stack_12->SetBinError(27,0.9288772);
   hnumuCCinFV_stack_12->SetBinError(28,1.136011);
   hnumuCCinFV_stack_12->SetBinError(29,1.536203);
   hnumuCCinFV_stack_12->SetBinError(30,1.433396);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.055049);
   hnueCCinFV_stack_13->SetBinContent(2,0.5913461);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,1.655022);
   hnueCCinFV_stack_13->SetBinContent(5,2.554448);
   hnueCCinFV_stack_13->SetBinContent(6,0.7286381);
   hnueCCinFV_stack_13->SetBinContent(7,0.6968117);
   hnueCCinFV_stack_13->SetBinContent(8,1.375494);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(11,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(12,0.4244309);
   hnueCCinFV_stack_13->SetBinContent(13,0.6882274);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.47188);
   hnueCCinFV_stack_13->SetBinContent(16,0.6111109);
   hnueCCinFV_stack_13->SetBinContent(17,0.4679016);
   hnueCCinFV_stack_13->SetBinContent(18,1.23324);
   hnueCCinFV_stack_13->SetBinContent(19,1.321025);
   hnueCCinFV_stack_13->SetBinContent(20,0.8811529);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.170972);
   hnueCCinFV_stack_13->SetBinContent(23,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(24,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(25,1.767228);
   hnueCCinFV_stack_13->SetBinContent(26,1.012306);
   hnueCCinFV_stack_13->SetBinContent(27,0.9960555);
   hnueCCinFV_stack_13->SetBinContent(28,0.3099382);
   hnueCCinFV_stack_13->SetBinContent(29,0.8753104);
   hnueCCinFV_stack_13->SetBinContent(30,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.5556116);
   hnueCCinFV_stack_13->SetBinError(2,0.4417072);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.7099917);
   hnueCCinFV_stack_13->SetBinError(5,1.828548);
   hnueCCinFV_stack_13->SetBinError(6,0.436143);
   hnueCCinFV_stack_13->SetBinError(7,0.5383537);
   hnueCCinFV_stack_13->SetBinError(8,0.5767193);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(11,0.2441371);
   hnueCCinFV_stack_13->SetBinError(12,0.4244309);
   hnueCCinFV_stack_13->SetBinError(13,0.5294158);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6336633);
   hnueCCinFV_stack_13->SetBinError(16,0.3532401);
   hnueCCinFV_stack_13->SetBinError(17,0.4679016);
   hnueCCinFV_stack_13->SetBinError(18,0.8846879);
   hnueCCinFV_stack_13->SetBinError(19,0.7882246);
   hnueCCinFV_stack_13->SetBinError(20,0.4997561);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.706044);
   hnueCCinFV_stack_13->SetBinError(23,0.3041673);
   hnueCCinFV_stack_13->SetBinError(24,0.3401776);
   hnueCCinFV_stack_13->SetBinError(25,0.8069208);
   hnueCCinFV_stack_13->SetBinError(26,0.453559);
   hnueCCinFV_stack_13->SetBinError(27,0.6227151);
   hnueCCinFV_stack_13->SetBinError(28,0.3099382);
   hnueCCinFV_stack_13->SetBinError(29,0.441077);
   hnueCCinFV_stack_13->SetBinError(30,0.1950249);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__17->SetBinContent(0,1.247282);
   hmcerror__17->SetBinContent(1,71.60912);
   hmcerror__17->SetBinContent(2,97.35326);
   hmcerror__17->SetBinContent(3,102.8755);
   hmcerror__17->SetBinContent(4,88.58321);
   hmcerror__17->SetBinContent(5,103.994);
   hmcerror__17->SetBinContent(6,100.7365);
   hmcerror__17->SetBinContent(7,91.06086);
   hmcerror__17->SetBinContent(8,96.35671);
   hmcerror__17->SetBinContent(9,91.84213);
   hmcerror__17->SetBinContent(10,83.22043);
   hmcerror__17->SetBinContent(11,86.315);
   hmcerror__17->SetBinContent(12,86.00495);
   hmcerror__17->SetBinContent(13,90.86002);
   hmcerror__17->SetBinContent(14,105.5672);
   hmcerror__17->SetBinContent(15,105.7542);
   hmcerror__17->SetBinContent(16,89.71426);
   hmcerror__17->SetBinContent(17,96.05347);
   hmcerror__17->SetBinContent(18,94.78357);
   hmcerror__17->SetBinContent(19,93.82635);
   hmcerror__17->SetBinContent(20,92.92444);
   hmcerror__17->SetBinContent(21,111.6176);
   hmcerror__17->SetBinContent(22,91.54575);
   hmcerror__17->SetBinContent(23,86.69612);
   hmcerror__17->SetBinContent(24,100.7223);
   hmcerror__17->SetBinContent(25,95.1065);
   hmcerror__17->SetBinContent(26,105.6106);
   hmcerror__17->SetBinContent(27,96.55885);
   hmcerror__17->SetBinContent(28,97.28863);
   hmcerror__17->SetBinContent(29,83.85143);
   hmcerror__17->SetBinContent(30,55.01698);
   hmcerror__17->SetBinContent(31,1.199601);
   hmcerror__17->SetBinError(0,0.5693017);
   hmcerror__17->SetBinError(1,22.6416);
   hmcerror__17->SetBinError(2,29.4314);
   hmcerror__17->SetBinError(3,36.48167);
   hmcerror__17->SetBinError(4,24.52744);
   hmcerror__17->SetBinError(5,31.76654);
   hmcerror__17->SetBinError(6,31.774);
   hmcerror__17->SetBinError(7,24.99862);
   hmcerror__17->SetBinError(8,29.10577);
   hmcerror__17->SetBinError(9,26.94786);
   hmcerror__17->SetBinError(10,23.26438);
   hmcerror__17->SetBinError(11,24.85268);
   hmcerror__17->SetBinError(12,26.4898);
   hmcerror__17->SetBinError(13,25.11522);
   hmcerror__17->SetBinError(14,28.24999);
   hmcerror__17->SetBinError(15,31.13735);
   hmcerror__17->SetBinError(16,31.11633);
   hmcerror__17->SetBinError(17,26.05998);
   hmcerror__17->SetBinError(18,24.66877);
   hmcerror__17->SetBinError(19,24.55385);
   hmcerror__17->SetBinError(20,26.37981);
   hmcerror__17->SetBinError(21,31.32441);
   hmcerror__17->SetBinError(22,29.10486);
   hmcerror__17->SetBinError(23,24.26477);
   hmcerror__17->SetBinError(24,30.77315);
   hmcerror__17->SetBinError(25,27.7624);
   hmcerror__17->SetBinError(26,30.50787);
   hmcerror__17->SetBinError(27,28.48183);
   hmcerror__17->SetBinError(28,26.18846);
   hmcerror__17->SetBinError(29,25.46378);
   hmcerror__17->SetBinError(30,18.52393);
   hmcerror__17->SetBinError(31,2.54971);
   hmcerror__17->SetBinError(32,0.3895343);
   hmcerror__17->SetBinError(33,0.3895343);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[32] = {
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
   Double_t _fy3021[32] = {
   70,
   109,
   108,
   91,
   107,
   112,
   97,
   106,
   119,
   88,
   98,
   91,
   99,
   94,
   118,
   101,
   105,
   106,
   103,
   103,
   98,
   108,
   104,
   78,
   101,
   102,
   94,
   82,
   92,
   53,
   1,
   0};
   Double_t _felx3021[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3021[32] = {
   8.4925,
   10.44031,
   10.3923,
   9.6617,
   10.34408,
   10.58301,
   9.9704,
   10.29563,
   10.90871,
   9.5036,
   10.0209,
   9.6617,
   10.0712,
   9.8173,
   10.86278,
   10.04988,
   10.24695,
   10.29563,
   10.14889,
   10.14889,
   10.0209,
   10.3923,
   10.19804,
   8.9562,
   10.04988,
   10.0995,
   9.8173,
   9.1791,
   9.7138,
   7.4105,
   1,
   0};
   Double_t _fehx3021[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3021[32] = {
   8.2902,
   10.44031,
   10.3923,
   9.46,
   10.34408,
   10.58301,
   9.769,
   10.29563,
   10.90871,
   9.3021,
   9.82,
   9.46,
   9.87,
   9.616,
   10.86278,
   10.04988,
   10.24695,
   10.29563,
   10.14889,
   10.14889,
   9.82,
   10.3923,
   10.19804,
   8.7542,
   10.04988,
   10.0995,
   9.616,
   8.9774,
   9.513,
   7.2068,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1210);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(142.8996);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.4/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 283.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[32] = {
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
   Double_t _fy3022[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3022[32] = {
   0.3161832,
   0.3023155,
   0.3546195,
   0.2768859,
   0.3054652,
   0.315417,
   0.2745266,
   0.3020627,
   0.293415,
   0.2795513,
   0.28793,
   0.3080032,
   0.2764166,
   0.2676019,
   0.2944312,
   0.3468381,
   0.271307,
   0.2602642,
   0.2616946,
   0.2838846,
   0.2806404,
   0.3179269,
   0.279883,
   0.3055247,
   0.2919086,
   0.2888712,
   0.2949686,
   0.2691831,
   0.3036774,
   0.3366947,
   2.125465,
   0};
   Double_t _fehx3022[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3022[32] = {
   0.3161832,
   0.3023155,
   0.3546195,
   0.2768859,
   0.3054652,
   0.315417,
   0.2745266,
   0.3020627,
   0.293415,
   0.2795513,
   0.28793,
   0.3080032,
   0.2764166,
   0.2676019,
   0.2944312,
   0.3468381,
   0.271307,
   0.2602642,
   0.2616946,
   0.2838846,
   0.2806404,
   0.3179269,
   0.279883,
   0.3055247,
   0.2919086,
   0.2888712,
   0.2949686,
   0.2691831,
   0.3036774,
   0.3366947,
   2.125465,
   0};
   grae = new TGraphAsymmErrors(32,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1210);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3023[32] = {
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
   Double_t _fy3023[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3023[32] = {
   0.2068217,
   0.2210018,
   0.2180299,
   0.2155696,
   0.2142336,
   0.2168259,
   0.2203228,
   0.2173022,
   0.228013,
   0.2211389,
   0.2079001,
   0.2273427,
   0.2076532,
   0.2160338,
   0.2211923,
   0.2277991,
   0.2200946,
   0.2162693,
   0.2008408,
   0.2146364,
   0.2100832,
   0.2078802,
   0.2189277,
   0.2163476,
   0.2330536,
   0.2156054,
   0.226732,
   0.2139565,
   0.2356039,
   0.2404069,
   0.7941539,
   0};
   Double_t _fehx3023[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3023[32] = {
   0.2068217,
   0.2210018,
   0.2180299,
   0.2155696,
   0.2142336,
   0.2168259,
   0.2203228,
   0.2173022,
   0.228013,
   0.2211389,
   0.2079001,
   0.2273427,
   0.2076532,
   0.2160338,
   0.2211923,
   0.2277991,
   0.2200946,
   0.2162693,
   0.2008408,
   0.2146364,
   0.2100832,
   0.2078802,
   0.2189277,
   0.2163476,
   0.2330536,
   0.2156054,
   0.226732,
   0.2139565,
   0.2356039,
   0.2404069,
   0.7941539,
   0};
   grae = new TGraphAsymmErrors(32,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1210);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3024[32] = {
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
   Double_t _fy3024[32] = {
   0.9775292,
   1.119634,
   1.049812,
   1.027283,
   1.028906,
   1.111812,
   1.065222,
   1.100079,
   1.295702,
   1.057433,
   1.135376,
   1.058079,
   1.089588,
   0.890428,
   1.115794,
   1.125796,
   1.093141,
   1.118337,
   1.097773,
   1.108427,
   0.8779976,
   1.179738,
   1.199592,
   0.7744066,
   1.061967,
   0.9658119,
   0.9734996,
   0.8428529,
   1.097179,
   0.963339,
   0.8336106,
   10};
   Double_t _felx3024[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3024[32] = {
   0.1185952,
   0.1072415,
   0.1010182,
   0.1090692,
   0.09946808,
   0.1050563,
   0.1094916,
   0.1068491,
   0.1187768,
   0.1141979,
   0.1160969,
   0.1123389,
   0.110843,
   0.09299573,
   0.1027172,
   0.1120209,
   0.1066796,
   0.1086225,
   0.1081668,
   0.1092166,
   0.08977883,
   0.1135203,
   0.1176297,
   0.08891975,
   0.1056697,
   0.09562963,
   0.1016717,
   0.09434916,
   0.1158454,
   0.1346948,
   0.8336106,
   0};
   Double_t _fehx3024[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3024[32] = {
   0.1157702,
   0.1072415,
   0.1010182,
   0.1067922,
   0.09946808,
   0.1050563,
   0.1072799,
   0.1068491,
   0.1187768,
   0.1117766,
   0.1137693,
   0.1099937,
   0.1086286,
   0.09108889,
   0.1027172,
   0.1120209,
   0.1066796,
   0.1086225,
   0.1081668,
   0.1092166,
   0.08797894,
   0.1135203,
   0.1176297,
   0.08691423,
   0.1056697,
   0.09562963,
   0.09958694,
   0.09227594,
   0.1134507,
   0.1309923,
   1.133469,
   0};
   grae = new TGraphAsymmErrors(32,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1210);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(11);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

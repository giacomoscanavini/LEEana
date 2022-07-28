#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 14:04:54 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-0.8904081,1692.308,75.0286);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hmc__1->SetBinContent(1,16.68651);
   hmc__1->SetBinContent(2,38.53459);
   hmc__1->SetBinContent(3,44.5204);
   hmc__1->SetBinContent(4,39.22261);
   hmc__1->SetBinContent(5,35.71413);
   hmc__1->SetBinContent(6,30.5459);
   hmc__1->SetBinContent(7,22.62953);
   hmc__1->SetBinContent(8,17.12899);
   hmc__1->SetBinContent(9,14.55728);
   hmc__1->SetBinContent(10,12.16429);
   hmc__1->SetBinContent(11,6.002194);
   hmc__1->SetBinContent(12,5.740125);
   hmc__1->SetBinContent(13,4.666101);
   hmc__1->SetBinContent(14,4.335074);
   hmc__1->SetBinContent(15,2.747658);
   hmc__1->SetBinContent(16,2.133843);
   hmc__1->SetBinContent(17,2.45554);
   hmc__1->SetBinContent(18,1.511844);
   hmc__1->SetBinContent(19,1.816785);
   hmc__1->SetBinContent(20,1.413068);
   hmc__1->SetBinContent(21,1.21944);
   hmc__1->SetBinContent(22,1.402247);
   hmc__1->SetBinContent(23,1.02795);
   hmc__1->SetBinContent(24,0.7343147);
   hmc__1->SetBinContent(25,0.8940229);
   hmc__1->SetBinContent(26,15.70827);
   hmc__1->SetBinError(1,5.563252);
   hmc__1->SetBinError(2,10.11244);
   hmc__1->SetBinError(3,10.12709);
   hmc__1->SetBinError(4,9.106803);
   hmc__1->SetBinError(5,10.07893);
   hmc__1->SetBinError(6,8.551634);
   hmc__1->SetBinError(7,8.444523);
   hmc__1->SetBinError(8,5.949026);
   hmc__1->SetBinError(9,4.359968);
   hmc__1->SetBinError(10,3.778979);
   hmc__1->SetBinError(11,3.124458);
   hmc__1->SetBinError(12,4.469193);
   hmc__1->SetBinError(13,2.001048);
   hmc__1->SetBinError(14,2.874355);
   hmc__1->SetBinError(15,1.581324);
   hmc__1->SetBinError(16,1.262166);
   hmc__1->SetBinError(17,1.671578);
   hmc__1->SetBinError(18,1.198967);
   hmc__1->SetBinError(19,1.136373);
   hmc__1->SetBinError(20,1.102617);
   hmc__1->SetBinError(21,1.148686);
   hmc__1->SetBinError(22,1.524964);
   hmc__1->SetBinError(23,0.9661367);
   hmc__1->SetBinError(24,0.9749614);
   hmc__1->SetBinError(25,0.8519066);
   hmc__1->SetBinError(26,5.156772);
   hmc__1->SetMinimum(-0.8904081);
   hmc__1->SetMaximum(71.23265);
   hmc__1->SetEntries(321.7148);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1500);
   hs1_stack_1->SetMinimum(-6.202043e-09);
   hs1_stack_1->SetMaximum(46.74643);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.922029);
   hbadmatch_stack_1->SetBinContent(2,0.9095778);
   hbadmatch_stack_1->SetBinContent(3,1.140685);
   hbadmatch_stack_1->SetBinContent(4,0.9443847);
   hbadmatch_stack_1->SetBinContent(5,0.9034137);
   hbadmatch_stack_1->SetBinContent(6,0.7394385);
   hbadmatch_stack_1->SetBinContent(7,0.3439051);
   hbadmatch_stack_1->SetBinContent(8,0.162164);
   hbadmatch_stack_1->SetBinContent(9,0.5024813);
   hbadmatch_stack_1->SetBinContent(10,0.2964047);
   hbadmatch_stack_1->SetBinContent(11,0.1172572);
   hbadmatch_stack_1->SetBinContent(13,0.1531601);
   hbadmatch_stack_1->SetBinContent(14,0.06195629);
   hbadmatch_stack_1->SetBinContent(15,0.08745668);
   hbadmatch_stack_1->SetBinContent(17,0.01568972);
   hbadmatch_stack_1->SetBinContent(18,0.02550039);
   hbadmatch_stack_1->SetBinContent(19,0.02550039);
   hbadmatch_stack_1->SetBinContent(20,0.07696713);
   hbadmatch_stack_1->SetBinContent(21,0.07470649);
   hbadmatch_stack_1->SetBinContent(22,0.0127502);
   hbadmatch_stack_1->SetBinContent(23,0.07143724);
   hbadmatch_stack_1->SetBinContent(26,0.2646209);
   hbadmatch_stack_1->SetBinError(1,0.3263415);
   hbadmatch_stack_1->SetBinError(2,0.2232692);
   hbadmatch_stack_1->SetBinError(3,0.239203);
   hbadmatch_stack_1->SetBinError(4,0.231889);
   hbadmatch_stack_1->SetBinError(5,0.2431975);
   hbadmatch_stack_1->SetBinError(6,0.1998645);
   hbadmatch_stack_1->SetBinError(7,0.1437391);
   hbadmatch_stack_1->SetBinError(8,0.09035965);
   hbadmatch_stack_1->SetBinError(9,0.3521098);
   hbadmatch_stack_1->SetBinError(10,0.1312578);
   hbadmatch_stack_1->SetBinError(11,0.06788042);
   hbadmatch_stack_1->SetBinError(13,0.1007776);
   hbadmatch_stack_1->SetBinError(14,0.06195629);
   hbadmatch_stack_1->SetBinError(15,0.06452687);
   hbadmatch_stack_1->SetBinError(17,0.01568972);
   hbadmatch_stack_1->SetBinError(18,0.0180315);
   hbadmatch_stack_1->SetBinError(19,0.0180315);
   hbadmatch_stack_1->SetBinError(20,0.06374878);
   hbadmatch_stack_1->SetBinError(21,0.06325464);
   hbadmatch_stack_1->SetBinError(22,0.0127502);
   hbadmatch_stack_1->SetBinError(23,0.07143724);
   hbadmatch_stack_1->SetBinError(26,0.09843051);
   hbadmatch_stack_1->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,1.216103);
   hext_stack_2->SetBinContent(2,4.058677);
   hext_stack_2->SetBinContent(3,4.141834);
   hext_stack_2->SetBinContent(4,2.815303);
   hext_stack_2->SetBinContent(5,2.441744);
   hext_stack_2->SetBinContent(6,2.407666);
   hext_stack_2->SetBinContent(7,2.073648);
   hext_stack_2->SetBinContent(8,0.6925746);
   hext_stack_2->SetBinContent(9,1.476501);
   hext_stack_2->SetBinContent(10,1.427422);
   hext_stack_2->SetBinContent(11,0.370827);
   hext_stack_2->SetBinContent(12,0.2603984);
   hext_stack_2->SetBinContent(13,0.6584966);
   hext_stack_2->SetBinContent(14,0.4717173);
   hext_stack_2->SetBinContent(15,0.4349078);
   hext_stack_2->SetBinContent(16,0.211319);
   hext_stack_2->SetBinContent(17,0.2849381);
   hext_stack_2->SetBinContent(18,0.2972079);
   hext_stack_2->SetBinContent(19,0.4226379);
   hext_stack_2->SetBinContent(20,0.02453971);
   hext_stack_2->SetBinContent(21,0.1990491);
   hext_stack_2->SetBinContent(22,0.6216871);
   hext_stack_2->SetBinContent(23,0.04907941);
   hext_stack_2->SetBinContent(25,0.211319);
   hext_stack_2->SetBinContent(26,1.525581);
   hext_stack_2->SetBinError(1,0.4481212);
   hext_stack_2->SetBinError(2,0.8257297);
   hext_stack_2->SetBinError(3,0.8035369);
   hext_stack_2->SetBinError(4,0.665961);
   hext_stack_2->SetBinError(5,0.6037914);
   hext_stack_2->SetBinError(6,0.6335015);
   hext_stack_2->SetBinError(7,0.6000396);
   hext_stack_2->SetBinError(8,0.2878442);
   hext_stack_2->SetBinError(9,0.4911068);
   hext_stack_2->SetBinError(10,0.4904933);
   hext_stack_2->SetBinError(11,0.2042749);
   hext_stack_2->SetBinError(12,0.2009311);
   hext_stack_2->SetBinError(13,0.3458531);
   hext_stack_2->SetBinError(14,0.2830978);
   hext_stack_2->SetBinError(15,0.282299);
   hext_stack_2->SetBinError(16,0.1994269);
   hext_stack_2->SetBinError(17,0.2016789);
   hext_stack_2->SetBinError(18,0.2020518);
   hext_stack_2->SetBinError(19,0.2820323);
   hext_stack_2->SetBinError(20,0.01735219);
   hext_stack_2->SetBinError(21,0.1990491);
   hext_stack_2->SetBinError(22,0.3451996);
   hext_stack_2->SetBinError(23,0.0245397);
   hext_stack_2->SetBinError(25,0.1994269);
   hext_stack_2->SetBinError(26,0.4917195);
   hext_stack_2->SetEntries(581);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.2161722);
   hdirt_stack_3->SetBinContent(2,1.014338);
   hdirt_stack_3->SetBinContent(3,0.7668242);
   hdirt_stack_3->SetBinContent(4,0.5698594);
   hdirt_stack_3->SetBinContent(5,0.3152419);
   hdirt_stack_3->SetBinContent(6,0.3383835);
   hdirt_stack_3->SetBinContent(7,0.2160556);
   hdirt_stack_3->SetBinContent(8,0.1846645);
   hdirt_stack_3->SetBinContent(9,0.06203132);
   hdirt_stack_3->SetBinContent(10,0.1996653);
   hdirt_stack_3->SetBinContent(11,0.04944293);
   hdirt_stack_3->SetBinContent(12,0.08105981);
   hdirt_stack_3->SetBinContent(13,0.04049498);
   hdirt_stack_3->SetBinContent(14,0.07615833);
   hdirt_stack_3->SetBinContent(15,0.06854287);
   hdirt_stack_3->SetBinContent(16,0.08062768);
   hdirt_stack_3->SetBinContent(17,0.04420907);
   hdirt_stack_3->SetBinContent(19,0.009481426);
   hdirt_stack_3->SetBinContent(20,0.04967419);
   hdirt_stack_3->SetBinContent(26,0.1673741);
   hdirt_stack_3->SetBinError(1,0.08101197);
   hdirt_stack_3->SetBinError(2,0.2046937);
   hdirt_stack_3->SetBinError(3,0.2519879);
   hdirt_stack_3->SetBinError(4,0.1555721);
   hdirt_stack_3->SetBinError(5,0.1065707);
   hdirt_stack_3->SetBinError(6,0.1171241);
   hdirt_stack_3->SetBinError(7,0.09304736);
   hdirt_stack_3->SetBinError(8,0.0850761);
   hdirt_stack_3->SetBinError(9,0.04597964);
   hdirt_stack_3->SetBinError(10,0.09251305);
   hdirt_stack_3->SetBinError(11,0.02176525);
   hdirt_stack_3->SetBinError(12,0.05755362);
   hdirt_stack_3->SetBinError(13,0.04049498);
   hdirt_stack_3->SetBinError(14,0.0534311);
   hdirt_stack_3->SetBinError(15,0.05338457);
   hdirt_stack_3->SetBinError(16,0.07287311);
   hdirt_stack_3->SetBinError(17,0.04420907);
   hdirt_stack_3->SetBinError(19,0.009481427);
   hdirt_stack_3->SetBinError(20,0.04967418);
   hdirt_stack_3->SetBinError(26,0.07852467);
   hdirt_stack_3->SetEntries(170);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,3.471666);
   houtFV_stack_4->SetBinContent(2,6.089033);
   houtFV_stack_4->SetBinContent(3,6.386892);
   houtFV_stack_4->SetBinContent(4,4.751656);
   houtFV_stack_4->SetBinContent(5,3.798473);
   houtFV_stack_4->SetBinContent(6,3.214703);
   houtFV_stack_4->SetBinContent(7,2.428608);
   houtFV_stack_4->SetBinContent(8,1.85693);
   houtFV_stack_4->SetBinContent(9,1.457487);
   houtFV_stack_4->SetBinContent(10,1.109642);
   houtFV_stack_4->SetBinContent(11,0.8745077);
   houtFV_stack_4->SetBinContent(12,1.667705);
   houtFV_stack_4->SetBinContent(13,0.5128701);
   houtFV_stack_4->SetBinContent(14,0.7858829);
   houtFV_stack_4->SetBinContent(15,0.4130011);
   houtFV_stack_4->SetBinContent(16,0.2621048);
   houtFV_stack_4->SetBinContent(17,0.5229454);
   houtFV_stack_4->SetBinContent(18,0.2496199);
   houtFV_stack_4->SetBinContent(19,0.3531507);
   houtFV_stack_4->SetBinContent(20,0.3147977);
   houtFV_stack_4->SetBinContent(21,0.149413);
   houtFV_stack_4->SetBinContent(22,0.1002069);
   houtFV_stack_4->SetBinContent(23,0.3225317);
   houtFV_stack_4->SetBinContent(24,0.02550039);
   houtFV_stack_4->SetBinContent(25,0.05100079);
   houtFV_stack_4->SetBinContent(26,2.248116);
   houtFV_stack_4->SetBinError(1,0.4295204);
   houtFV_stack_4->SetBinError(2,0.5787179);
   houtFV_stack_4->SetBinError(3,0.5911733);
   houtFV_stack_4->SetBinError(4,0.5164702);
   houtFV_stack_4->SetBinError(5,0.4586607);
   houtFV_stack_4->SetBinError(6,0.4111417);
   houtFV_stack_4->SetBinError(7,0.3606482);
   houtFV_stack_4->SetBinError(8,0.3209419);
   houtFV_stack_4->SetBinError(9,0.282226);
   houtFV_stack_4->SetBinError(10,0.2383882);
   houtFV_stack_4->SetBinError(11,0.2179562);
   houtFV_stack_4->SetBinError(12,0.3156398);
   houtFV_stack_4->SetBinError(13,0.1670953);
   houtFV_stack_4->SetBinError(14,0.2132214);
   houtFV_stack_4->SetBinError(15,0.1536395);
   houtFV_stack_4->SetBinError(16,0.1184547);
   houtFV_stack_4->SetBinError(17,0.167356);
   houtFV_stack_4->SetBinError(18,0.1110342);
   houtFV_stack_4->SetBinError(19,0.1294244);
   houtFV_stack_4->SetBinError(20,0.1275135);
   houtFV_stack_4->SetBinError(21,0.08945557);
   houtFV_stack_4->SetBinError(22,0.0657745);
   houtFV_stack_4->SetBinError(23,0.139124);
   houtFV_stack_4->SetBinError(24,0.0180315);
   houtFV_stack_4->SetBinError(25,0.02550039);
   houtFV_stack_4->SetBinError(26,0.3532898);
   houtFV_stack_4->SetEntries(1136);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(1,7.046115);
   hNCpi0inFV_stack_5->SetBinContent(2,17.5853);
   hNCpi0inFV_stack_5->SetBinContent(3,20.24744);
   hNCpi0inFV_stack_5->SetBinContent(4,19.17586);
   hNCpi0inFV_stack_5->SetBinContent(5,18.96468);
   hNCpi0inFV_stack_5->SetBinContent(6,16.86555);
   hNCpi0inFV_stack_5->SetBinContent(7,12.03691);
   hNCpi0inFV_stack_5->SetBinContent(8,9.256426);
   hNCpi0inFV_stack_5->SetBinContent(9,7.017026);
   hNCpi0inFV_stack_5->SetBinContent(10,4.817671);
   hNCpi0inFV_stack_5->SetBinContent(11,3.175923);
   hNCpi0inFV_stack_5->SetBinContent(12,2.352357);
   hNCpi0inFV_stack_5->SetBinContent(13,2.017075);
   hNCpi0inFV_stack_5->SetBinContent(14,1.887779);
   hNCpi0inFV_stack_5->SetBinContent(15,1.24451);
   hNCpi0inFV_stack_5->SetBinContent(16,0.9201835);
   hNCpi0inFV_stack_5->SetBinContent(17,0.9693896);
   hNCpi0inFV_stack_5->SetBinContent(18,0.6104021);
   hNCpi0inFV_stack_5->SetBinContent(19,0.6359025);
   hNCpi0inFV_stack_5->SetBinContent(20,0.5229454);
   hNCpi0inFV_stack_5->SetBinContent(21,0.3862826);
   hNCpi0inFV_stack_5->SetBinContent(22,0.3990328);
   hNCpi0inFV_stack_5->SetBinContent(23,0.3480321);
   hNCpi0inFV_stack_5->SetBinContent(24,0.2860757);
   hNCpi0inFV_stack_5->SetBinContent(25,0.2496199);
   hNCpi0inFV_stack_5->SetBinContent(26,6.479348);
   hNCpi0inFV_stack_5->SetBinError(1,0.6160024);
   hNCpi0inFV_stack_5->SetBinError(2,0.9776945);
   hNCpi0inFV_stack_5->SetBinError(3,1.050061);
   hNCpi0inFV_stack_5->SetBinError(4,1.012395);
   hNCpi0inFV_stack_5->SetBinError(5,1.017077);
   hNCpi0inFV_stack_5->SetBinError(6,0.9545639);
   hNCpi0inFV_stack_5->SetBinError(7,0.8064733);
   hNCpi0inFV_stack_5->SetBinError(8,0.7129134);
   hNCpi0inFV_stack_5->SetBinError(9,0.620633);
   hNCpi0inFV_stack_5->SetBinError(10,0.5094968);
   hNCpi0inFV_stack_5->SetBinError(11,0.4105313);
   hNCpi0inFV_stack_5->SetBinError(12,0.3571401);
   hNCpi0inFV_stack_5->SetBinError(13,0.3286808);
   hNCpi0inFV_stack_5->SetBinError(14,0.3308037);
   hNCpi0inFV_stack_5->SetBinError(15,0.2601815);
   hNCpi0inFV_stack_5->SetBinError(16,0.2266378);
   hNCpi0inFV_stack_5->SetBinError(17,0.2346075);
   hNCpi0inFV_stack_5->SetBinError(18,0.1793649);
   hNCpi0inFV_stack_5->SetBinError(19,0.180269);
   hNCpi0inFV_stack_5->SetBinError(20,0.167356);
   hNCpi0inFV_stack_5->SetBinError(21,0.1420152);
   hNCpi0inFV_stack_5->SetBinError(22,0.1425864);
   hNCpi0inFV_stack_5->SetBinError(23,0.1402876);
   hNCpi0inFV_stack_5->SetBinError(24,0.1258651);
   hNCpi0inFV_stack_5->SetBinError(25,0.1110342);
   hNCpi0inFV_stack_5->SetBinError(26,0.5819774);
   hNCpi0inFV_stack_5->SetEntries(4048);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(1,2.837052);
   hCCpi0inFV_stack_6->SetBinContent(2,4.895845);
   hCCpi0inFV_stack_6->SetBinContent(3,7.48946);
   hCCpi0inFV_stack_6->SetBinContent(4,6.640271);
   hCCpi0inFV_stack_6->SetBinContent(5,6.10474);
   hCCpi0inFV_stack_6->SetBinContent(6,4.562312);
   hCCpi0inFV_stack_6->SetBinContent(7,3.762619);
   hCCpi0inFV_stack_6->SetBinContent(8,3.348047);
   hCCpi0inFV_stack_6->SetBinContent(9,3.01376);
   hCCpi0inFV_stack_6->SetBinContent(10,2.817851);
   hCCpi0inFV_stack_6->SetBinContent(11,0.9602288);
   hCCpi0inFV_stack_6->SetBinContent(12,0.796271);
   hCCpi0inFV_stack_6->SetBinContent(13,0.4482389);
   hCCpi0inFV_stack_6->SetBinContent(14,0.7343147);
   hCCpi0inFV_stack_6->SetBinContent(15,0.2004138);
   hCCpi0inFV_stack_6->SetBinContent(16,0.2368697);
   hCCpi0inFV_stack_6->SetBinContent(17,0.2733256);
   hCCpi0inFV_stack_6->SetBinContent(18,0.1749134);
   hCCpi0inFV_stack_6->SetBinContent(19,0.1621632);
   hCCpi0inFV_stack_6->SetBinContent(20,0.07470649);
   hCCpi0inFV_stack_6->SetBinContent(21,0.2733256);
   hCCpi0inFV_stack_6->SetBinContent(22,0.1986191);
   hCCpi0inFV_stack_6->SetBinContent(23,0.2113693);
   hCCpi0inFV_stack_6->SetBinContent(24,0.2988259);
   hCCpi0inFV_stack_6->SetBinContent(25,0.3017989);
   hCCpi0inFV_stack_6->SetBinContent(26,2.724095);
   hCCpi0inFV_stack_6->SetBinError(1,0.3937886);
   hCCpi0inFV_stack_6->SetBinError(2,0.5105221);
   hCCpi0inFV_stack_6->SetBinError(3,0.6449364);
   hCCpi0inFV_stack_6->SetBinError(4,0.5912203);
   hCCpi0inFV_stack_6->SetBinError(5,0.5767381);
   hCCpi0inFV_stack_6->SetBinError(6,0.4891182);
   hCCpi0inFV_stack_6->SetBinError(7,0.4442487);
   hCCpi0inFV_stack_6->SetBinError(8,0.4312929);
   hCCpi0inFV_stack_6->SetBinError(9,0.4004636);
   hCCpi0inFV_stack_6->SetBinError(10,0.3985456);
   hCCpi0inFV_stack_6->SetBinError(11,0.2209675);
   hCCpi0inFV_stack_6->SetBinError(12,0.2090156);
   hCCpi0inFV_stack_6->SetBinError(13,0.1549416);
   hCCpi0inFV_stack_6->SetBinError(14,0.199622);
   hCCpi0inFV_stack_6->SetBinError(15,0.09301919);
   hCCpi0inFV_stack_6->SetBinError(16,0.1102997);
   hCCpi0inFV_stack_6->SetBinError(17,0.1252177);
   hCCpi0inFV_stack_6->SetBinError(18,0.09125478);
   hCCpi0inFV_stack_6->SetBinError(19,0.09035965);
   hCCpi0inFV_stack_6->SetBinError(20,0.06325464);
   hCCpi0inFV_stack_6->SetBinError(21,0.1252177);
   hCCpi0inFV_stack_6->SetBinError(22,0.1080662);
   hCCpi0inFV_stack_6->SetBinError(23,0.1088158);
   hCCpi0inFV_stack_6->SetBinError(24,0.1265093);
   hCCpi0inFV_stack_6->SetBinError(25,0.1400473);
   hCCpi0inFV_stack_6->SetBinError(26,0.3880471);
   hCCpi0inFV_stack_6->SetEntries(1411);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_7->SetBinContent(1,0.5594013);
   hNCinFV_stack_7->SetBinContent(2,1.455879);
   hNCinFV_stack_7->SetBinContent(3,1.730999);
   hNCinFV_stack_7->SetBinContent(4,1.470424);
   hNCinFV_stack_7->SetBinContent(5,1.184348);
   hNCinFV_stack_7->SetBinContent(6,0.8582273);
   hNCinFV_stack_7->SetBinContent(7,0.8217714);
   hNCinFV_stack_7->SetBinContent(8,0.6486527);
   hNCinFV_stack_7->SetBinContent(9,0.2386643);
   hNCinFV_stack_7->SetBinContent(10,0.4846948);
   hNCinFV_stack_7->SetBinContent(11,0.1749134);
   hNCinFV_stack_7->SetBinContent(12,0.2113693);
   hNCinFV_stack_7->SetBinContent(13,0.2733256);
   hNCinFV_stack_7->SetBinContent(14,0.1621632);
   hNCinFV_stack_7->SetBinContent(15,0.1749134);
   hNCinFV_stack_7->SetBinContent(16,0.1621632);
   hNCinFV_stack_7->SetBinContent(17,0.03825059);
   hNCinFV_stack_7->SetBinContent(18,0.0127502);
   hNCinFV_stack_7->SetBinContent(19,0.07470649);
   hNCinFV_stack_7->SetBinContent(20,0.1239126);
   hNCinFV_stack_7->SetBinContent(21,0.1239126);
   hNCinFV_stack_7->SetBinContent(22,0.0127502);
   hNCinFV_stack_7->SetBinContent(23,0.0127502);
   hNCinFV_stack_7->SetBinContent(24,0.1239126);
   hNCinFV_stack_7->SetBinContent(26,0.8217714);
   hNCinFV_stack_7->SetBinError(1,0.1775429);
   hNCinFV_stack_7->SetBinError(2,0.28202);
   hNCinFV_stack_7->SetBinError(3,0.3036264);
   hNCinFV_stack_7->SetBinError(4,0.2768973);
   hNCinFV_stack_7->SetBinError(5,0.2466375);
   hNCinFV_stack_7->SetBinError(6,0.2180048);
   hNCinFV_stack_7->SetBinError(7,0.2097919);
   hNCinFV_stack_7->SetBinError(8,0.1807193);
   hNCinFV_stack_7->SetBinError(9,0.09560477);
   hNCinFV_stack_7->SetBinError(10,0.1658926);
   hNCinFV_stack_7->SetBinError(11,0.09125478);
   hNCinFV_stack_7->SetBinError(12,0.1088158);
   hNCinFV_stack_7->SetBinError(13,0.1252177);
   hNCinFV_stack_7->SetBinError(14,0.09035965);
   hNCinFV_stack_7->SetBinError(15,0.09125478);
   hNCinFV_stack_7->SetBinError(16,0.09035965);
   hNCinFV_stack_7->SetBinError(17,0.02208399);
   hNCinFV_stack_7->SetBinError(18,0.0127502);
   hNCinFV_stack_7->SetBinError(19,0.06325464);
   hNCinFV_stack_7->SetBinError(20,0.08761943);
   hNCinFV_stack_7->SetBinError(21,0.08761943);
   hNCinFV_stack_7->SetBinError(22,0.0127502);
   hNCinFV_stack_7->SetBinError(23,0.0127502);
   hNCinFV_stack_7->SetBinError(24,0.08761943);
   hNCinFV_stack_7->SetBinError(26,0.2097919);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(1,0.2500207);
   hnumuCCinFV_stack_8->SetBinContent(2,2.29246);
   hnumuCCinFV_stack_8->SetBinContent(3,2.372371);
   hnumuCCinFV_stack_8->SetBinContent(4,2.75923);
   hnumuCCinFV_stack_8->SetBinContent(5,1.907951);
   hnumuCCinFV_stack_8->SetBinContent(6,1.511878);
   hnumuCCinFV_stack_8->SetBinContent(7,0.8713091);
   hnumuCCinFV_stack_8->SetBinContent(8,0.9016643);
   hnumuCCinFV_stack_8->SetBinContent(9,0.7765796);
   hnumuCCinFV_stack_8->SetBinContent(10,1.010937);
   hnumuCCinFV_stack_8->SetBinContent(11,0.2171379);
   hnumuCCinFV_stack_8->SetBinContent(12,0.2782099);
   hnumuCCinFV_stack_8->SetBinContent(13,0.4877327);
   hnumuCCinFV_stack_8->SetBinContent(14,0.1551034);
   hnumuCCinFV_stack_8->SetBinContent(15,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(16,0.1366628);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2241195);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1239126);
   hnumuCCinFV_stack_8->SetBinContent(19,0.1332429);
   hnumuCCinFV_stack_8->SetBinContent(20,0.1635681);
   hnumuCCinFV_stack_8->SetBinContent(21,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(22,0.02934651);
   hnumuCCinFV_stack_8->SetBinContent(23,0.01275023);
   hnumuCCinFV_stack_8->SetBinContent(26,0.7950232);
   hnumuCCinFV_stack_8->SetBinError(1,0.0972518);
   hnumuCCinFV_stack_8->SetBinError(2,0.4026045);
   hnumuCCinFV_stack_8->SetBinError(3,0.3644045);
   hnumuCCinFV_stack_8->SetBinError(4,0.7200572);
   hnumuCCinFV_stack_8->SetBinError(5,0.4546289);
   hnumuCCinFV_stack_8->SetBinError(6,0.2892484);
   hnumuCCinFV_stack_8->SetBinError(7,0.2240547);
   hnumuCCinFV_stack_8->SetBinError(8,0.2371824);
   hnumuCCinFV_stack_8->SetBinError(9,0.2062287);
   hnumuCCinFV_stack_8->SetBinError(10,0.2601831);
   hnumuCCinFV_stack_8->SetBinError(11,0.1096415);
   hnumuCCinFV_stack_8->SetBinError(12,0.1185679);
   hnumuCCinFV_stack_8->SetBinError(13,0.2386654);
   hnumuCCinFV_stack_8->SetBinError(14,0.08567329);
   hnumuCCinFV_stack_8->SetBinError(15,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(16,0.08854226);
   hnumuCCinFV_stack_8->SetBinError(17,0.1095603);
   hnumuCCinFV_stack_8->SetBinError(18,0.08761943);
   hnumuCCinFV_stack_8->SetBinError(19,0.09444766);
   hnumuCCinFV_stack_8->SetBinError(20,0.09830742);
   hnumuCCinFV_stack_8->SetBinError(21,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(22,0.02092857);
   hnumuCCinFV_stack_8->SetBinError(23,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(26,0.2101836);
   hnumuCCinFV_stack_8->SetEntries(413);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_9->SetBinContent(1,0.1679476);
   hnueCCinFV_stack_9->SetBinContent(2,0.2334815);
   hnueCCinFV_stack_9->SetBinContent(3,0.2438985);
   hnueCCinFV_stack_9->SetBinContent(4,0.09561828);
   hnueCCinFV_stack_9->SetBinContent(5,0.09354359);
   hnueCCinFV_stack_9->SetBinContent(6,0.04773518);
   hnueCCinFV_stack_9->SetBinContent(7,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(8,0.07786438);
   hnueCCinFV_stack_9->SetBinContent(9,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(12,0.09275431);
   hnueCCinFV_stack_9->SetBinContent(13,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(16,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(17,0.08267223);
   hnueCCinFV_stack_9->SetBinContent(18,0.01753742);
   hnueCCinFV_stack_9->SetBinContent(20,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(22,0.02785392);
   hnueCCinFV_stack_9->SetBinContent(25,0.08028439);
   hnueCCinFV_stack_9->SetBinContent(26,0.6823409);
   hnueCCinFV_stack_9->SetBinError(1,0.09645693);
   hnueCCinFV_stack_9->SetBinError(2,0.1218999);
   hnueCCinFV_stack_9->SetBinError(3,0.1367796);
   hnueCCinFV_stack_9->SetBinError(4,0.06643011);
   hnueCCinFV_stack_9->SetBinError(5,0.07973464);
   hnueCCinFV_stack_9->SetBinError(6,0.04773518);
   hnueCCinFV_stack_9->SetBinError(7,0.06325464);
   hnueCCinFV_stack_9->SetBinError(8,0.063966);
   hnueCCinFV_stack_9->SetBinError(9,0.0127502);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(12,0.08101374);
   hnueCCinFV_stack_9->SetBinError(13,0.06325464);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(16,0.08761943);
   hnueCCinFV_stack_9->SetBinError(17,0.07053344);
   hnueCCinFV_stack_9->SetBinError(18,0.01753742);
   hnueCCinFV_stack_9->SetBinError(20,0.06195629);
   hnueCCinFV_stack_9->SetBinError(22,0.02785392);
   hnueCCinFV_stack_9->SetBinError(25,0.06461038);
   hnueCCinFV_stack_9->SetBinError(26,0.4776866);
   hnueCCinFV_stack_9->SetEntries(51);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);
   hmcerror__2->SetBinContent(1,16.68651);
   hmcerror__2->SetBinContent(2,38.53459);
   hmcerror__2->SetBinContent(3,44.5204);
   hmcerror__2->SetBinContent(4,39.22261);
   hmcerror__2->SetBinContent(5,35.71413);
   hmcerror__2->SetBinContent(6,30.5459);
   hmcerror__2->SetBinContent(7,22.62953);
   hmcerror__2->SetBinContent(8,17.12899);
   hmcerror__2->SetBinContent(9,14.55728);
   hmcerror__2->SetBinContent(10,12.16429);
   hmcerror__2->SetBinContent(11,6.002194);
   hmcerror__2->SetBinContent(12,5.740125);
   hmcerror__2->SetBinContent(13,4.666101);
   hmcerror__2->SetBinContent(14,4.335074);
   hmcerror__2->SetBinContent(15,2.747658);
   hmcerror__2->SetBinContent(16,2.133843);
   hmcerror__2->SetBinContent(17,2.45554);
   hmcerror__2->SetBinContent(18,1.511844);
   hmcerror__2->SetBinContent(19,1.816785);
   hmcerror__2->SetBinContent(20,1.413068);
   hmcerror__2->SetBinContent(21,1.21944);
   hmcerror__2->SetBinContent(22,1.402247);
   hmcerror__2->SetBinContent(23,1.02795);
   hmcerror__2->SetBinContent(24,0.7343147);
   hmcerror__2->SetBinContent(25,0.8940229);
   hmcerror__2->SetBinContent(26,15.70827);
   hmcerror__2->SetBinError(1,5.563252);
   hmcerror__2->SetBinError(2,10.11244);
   hmcerror__2->SetBinError(3,10.12709);
   hmcerror__2->SetBinError(4,9.106803);
   hmcerror__2->SetBinError(5,10.07893);
   hmcerror__2->SetBinError(6,8.551634);
   hmcerror__2->SetBinError(7,8.444523);
   hmcerror__2->SetBinError(8,5.949026);
   hmcerror__2->SetBinError(9,4.359968);
   hmcerror__2->SetBinError(10,3.778979);
   hmcerror__2->SetBinError(11,3.124458);
   hmcerror__2->SetBinError(12,4.469193);
   hmcerror__2->SetBinError(13,2.001048);
   hmcerror__2->SetBinError(14,2.874355);
   hmcerror__2->SetBinError(15,1.581324);
   hmcerror__2->SetBinError(16,1.262166);
   hmcerror__2->SetBinError(17,1.671578);
   hmcerror__2->SetBinError(18,1.198967);
   hmcerror__2->SetBinError(19,1.136373);
   hmcerror__2->SetBinError(20,1.102617);
   hmcerror__2->SetBinError(21,1.148686);
   hmcerror__2->SetBinError(22,1.524964);
   hmcerror__2->SetBinError(23,0.9661367);
   hmcerror__2->SetBinError(24,0.9749614);
   hmcerror__2->SetBinError(25,0.8519066);
   hmcerror__2->SetBinError(26,5.156772);
   hmcerror__2->SetEntries(321.7148);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3001[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3001[25] = {
   17,
   37,
   44,
   38,
   27,
   35,
   14,
   17,
   14,
   10,
   9,
   10,
   4,
   3,
   2,
   4,
   1,
   0,
   0,
   2,
   2,
   1,
   1,
   1,
   1};
   Double_t _felx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3001[25] = {
   4.2835,
   6.2203,
   6.7671,
   6.3013,
   5.3414,
   6.0548,
   3.9102,
   4.2835,
   3.9102,
   3.34883,
   3.19354,
   3.34883,
   2.29683,
   2.143368,
   2,
   2.29683,
   1,
   0,
   0,
   2,
   2,
   1,
   1,
   1,
   1};
   Double_t _fehx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3001[25] = {
   4.0673,
   6.0141,
   6.5623,
   6.0955,
   5.1322,
   5.8483,
   3.6898,
   4.0673,
   3.6898,
   3.1179,
   2.9582,
   3.1179,
   1.98186,
   1.72422,
   1.51917,
   1.98186,
   1.35971,
   1.1478,
   1.1478,
   1.51917,
   1.51917,
   1.35971,
   1.35971,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(55.61853);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.95#pm0.06(data err)#pm0.20(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.69/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 294.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.6","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 27.3","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.4","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 41.2","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  149.0","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 50.8","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 11.1","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 16.7","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.7","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3002[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3002[25] = {
   0.3333982,
   0.2624251,
   0.2274708,
   0.2321825,
   0.2822111,
   0.2799601,
   0.3731639,
   0.3473075,
   0.2995043,
   0.3106618,
   0.5205525,
   0.778588,
   0.428848,
   0.6630462,
   0.5755168,
   0.5914992,
   0.6807376,
   0.7930494,
   0.6254855,
   0.7803003,
   0.9419788,
   1.087515,
   0.9398674,
   1.327716,
   0.9528912};
   Double_t _fehx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3002[25] = {
   0.3333982,
   0.2624251,
   0.2274708,
   0.2321825,
   0.2822111,
   0.2799601,
   0.3731639,
   0.3473075,
   0.2995043,
   0.3106618,
   0.5205525,
   0.778588,
   0.428848,
   0.6630462,
   0.5755168,
   0.5914992,
   0.6807376,
   0.7930494,
   0.6254855,
   0.7803003,
   0.9419788,
   1.087515,
   0.9398674,
   1.327716,
   0.9528912};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3003[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3003[25] = {
   0.1980176,
   0.1901014,
   0.1790971,
   0.2036525,
   0.206293,
   0.2039952,
   0.2006294,
   0.2028692,
   0.1955568,
   0.1871738,
   0.2112077,
   0.2133722,
   0.2169682,
   0.221138,
   0.2543377,
   0.2644095,
   0.2517154,
   0.3244836,
   0.2719743,
   0.3538242,
   0.3784554,
   0.3277884,
   0.4008827,
   0.4325515,
   0.4118742};
   Double_t _fehx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3003[25] = {
   0.1980176,
   0.1901014,
   0.1790971,
   0.2036525,
   0.206293,
   0.2039952,
   0.2006294,
   0.2028692,
   0.1955568,
   0.1871738,
   0.2112077,
   0.2133722,
   0.2169682,
   0.221138,
   0.2543377,
   0.2644095,
   0.2517154,
   0.3244836,
   0.2719743,
   0.3538242,
   0.3784554,
   0.3277884,
   0.4008827,
   0.4325515,
   0.4118742};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3004[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3004[25] = {
   1.018787,
   0.9601763,
   0.9883109,
   0.9688289,
   0.7560032,
   1.145817,
   0.6186607,
   0.9924697,
   0.961718,
   0.8220785,
   1.499452,
   1.742122,
   0.8572469,
   0.6920296,
   0.7278926,
   1.874552,
   0.4072424,
   0,
   0,
   1.41536,
   1.640098,
   0.7131413,
   0.9728099,
   1.361814,
   1.11854};
   Double_t _felx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3004[25] = {
   0.2567044,
   0.1614212,
   0.152,
   0.1606548,
   0.1495598,
   0.1982197,
   0.1727919,
   0.2500732,
   0.2686078,
   0.2753001,
   0.5320621,
   0.5834071,
   0.4922376,
   0.4944247,
   0.7278926,
   1.076382,
   0.4072424,
   0,
   0,
   1.41536,
   1.640098,
   0.7131413,
   0.9728099,
   1.361814,
   1.11854};
   Double_t _fehx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3004[25] = {
   0.2437478,
   0.1560702,
   0.1473998,
   0.1554078,
   0.1437022,
   0.1914594,
   0.1630525,
   0.2374513,
   0.2534677,
   0.2563159,
   0.4928531,
   0.5431763,
   0.4247358,
   0.3977371,
   0.5528963,
   0.9287749,
   0.5537316,
   0.7592054,
   0.6317752,
   1.075087,
   1.245794,
   0.9696654,
   1.322739,
   1.851672,
   1.520889};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.534835);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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

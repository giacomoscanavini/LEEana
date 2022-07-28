#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sun Jun  5 00:28:02 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-1.307692,-16.87546,1.25641,1866.071);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__4->SetBinContent(1,132.2736);
   hmc__4->SetBinContent(2,108.6222);
   hmc__4->SetBinContent(3,106.1477);
   hmc__4->SetBinContent(4,96.19732);
   hmc__4->SetBinContent(5,96.67188);
   hmc__4->SetBinContent(6,98.64778);
   hmc__4->SetBinContent(7,102.871);
   hmc__4->SetBinContent(8,96.91216);
   hmc__4->SetBinContent(9,94.65308);
   hmc__4->SetBinContent(10,107.7081);
   hmc__4->SetBinContent(11,122.0385);
   hmc__4->SetBinContent(12,119.9728);
   hmc__4->SetBinContent(13,133.2461);
   hmc__4->SetBinContent(14,156.2632);
   hmc__4->SetBinContent(15,167.4148);
   hmc__4->SetBinContent(16,178.6832);
   hmc__4->SetBinContent(17,196.3433);
   hmc__4->SetBinContent(18,217.2033);
   hmc__4->SetBinContent(19,257.3181);
   hmc__4->SetBinContent(20,312.9594);
   hmc__4->SetBinContent(21,361.2922);
   hmc__4->SetBinContent(22,395.869);
   hmc__4->SetBinContent(23,482.9724);
   hmc__4->SetBinContent(24,635.4347);
   hmc__4->SetBinContent(25,843.7731);
   hmc__4->SetBinError(1,28.87946);
   hmc__4->SetBinError(2,24.48941);
   hmc__4->SetBinError(3,23.53784);
   hmc__4->SetBinError(4,21.8132);
   hmc__4->SetBinError(5,21.80714);
   hmc__4->SetBinError(6,22.63136);
   hmc__4->SetBinError(7,21.81157);
   hmc__4->SetBinError(8,20.6617);
   hmc__4->SetBinError(9,21.86745);
   hmc__4->SetBinError(10,22.94789);
   hmc__4->SetBinError(11,25.16);
   hmc__4->SetBinError(12,27.48402);
   hmc__4->SetBinError(13,30.03193);
   hmc__4->SetBinError(14,33.96147);
   hmc__4->SetBinError(15,38.48522);
   hmc__4->SetBinError(16,43.65572);
   hmc__4->SetBinError(17,49.29153);
   hmc__4->SetBinError(18,57.52377);
   hmc__4->SetBinError(19,66.70868);
   hmc__4->SetBinError(20,80.03719);
   hmc__4->SetBinError(21,91.09108);
   hmc__4->SetBinError(22,97.09192);
   hmc__4->SetBinError(23,106.3526);
   hmc__4->SetBinError(24,128.2247);
   hmc__4->SetBinError(25,177.0475);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-16.87546);
   hmc__4->SetMaximum(1771.924);
   hmc__4->SetEntries(5560.658);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-1,1);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(885.9617);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,4.35962);
   hbadmatch_stack_1->SetBinContent(2,2.332176);
   hbadmatch_stack_1->SetBinContent(3,3.524512);
   hbadmatch_stack_1->SetBinContent(4,2.411045);
   hbadmatch_stack_1->SetBinContent(5,1.962082);
   hbadmatch_stack_1->SetBinContent(6,2.20312);
   hbadmatch_stack_1->SetBinContent(7,3.606336);
   hbadmatch_stack_1->SetBinContent(8,2.120535);
   hbadmatch_stack_1->SetBinContent(9,2.40884);
   hbadmatch_stack_1->SetBinContent(10,2.773859);
   hbadmatch_stack_1->SetBinContent(11,2.074262);
   hbadmatch_stack_1->SetBinContent(12,3.632364);
   hbadmatch_stack_1->SetBinContent(13,1.716675);
   hbadmatch_stack_1->SetBinContent(14,7.537144);
   hbadmatch_stack_1->SetBinContent(15,6.991629);
   hbadmatch_stack_1->SetBinContent(16,4.473801);
   hbadmatch_stack_1->SetBinContent(17,4.700443);
   hbadmatch_stack_1->SetBinContent(18,3.616002);
   hbadmatch_stack_1->SetBinContent(19,3.797472);
   hbadmatch_stack_1->SetBinContent(20,8.039065);
   hbadmatch_stack_1->SetBinContent(21,6.339361);
   hbadmatch_stack_1->SetBinContent(22,9.71217);
   hbadmatch_stack_1->SetBinContent(23,8.679602);
   hbadmatch_stack_1->SetBinContent(24,10.20766);
   hbadmatch_stack_1->SetBinContent(25,14.85496);
   hbadmatch_stack_1->SetBinError(1,1.125589);
   hbadmatch_stack_1->SetBinError(2,0.8168401);
   hbadmatch_stack_1->SetBinError(3,1.799176);
   hbadmatch_stack_1->SetBinError(4,0.7398287);
   hbadmatch_stack_1->SetBinError(5,0.6204697);
   hbadmatch_stack_1->SetBinError(6,0.8119285);
   hbadmatch_stack_1->SetBinError(7,1.000295);
   hbadmatch_stack_1->SetBinError(8,0.7212344);
   hbadmatch_stack_1->SetBinError(9,0.7983767);
   hbadmatch_stack_1->SetBinError(10,0.9112336);
   hbadmatch_stack_1->SetBinError(11,0.7196514);
   hbadmatch_stack_1->SetBinError(12,0.9778058);
   hbadmatch_stack_1->SetBinError(13,0.6767882);
   hbadmatch_stack_1->SetBinError(14,2.077262);
   hbadmatch_stack_1->SetBinError(15,2.276269);
   hbadmatch_stack_1->SetBinError(16,1.448776);
   hbadmatch_stack_1->SetBinError(17,1.18106);
   hbadmatch_stack_1->SetBinError(18,0.9718242);
   hbadmatch_stack_1->SetBinError(19,1.031592);
   hbadmatch_stack_1->SetBinError(20,1.506549);
   hbadmatch_stack_1->SetBinError(21,1.408416);
   hbadmatch_stack_1->SetBinError(22,1.662728);
   hbadmatch_stack_1->SetBinError(23,1.521411);
   hbadmatch_stack_1->SetBinError(24,1.695511);
   hbadmatch_stack_1->SetBinError(25,2.110714);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,11.59655);
   hext_stack_2->SetBinContent(2,8.57883);
   hext_stack_2->SetBinContent(3,6.73178);
   hext_stack_2->SetBinContent(4,5.979242);
   hext_stack_2->SetBinContent(5,6.806801);
   hext_stack_2->SetBinContent(6,8.802256);
   hext_stack_2->SetBinContent(7,12.92009);
   hext_stack_2->SetBinContent(8,11.40184);
   hext_stack_2->SetBinContent(9,4.956979);
   hext_stack_2->SetBinContent(10,12.26688);
   hext_stack_2->SetBinContent(11,20.94668);
   hext_stack_2->SetBinContent(12,8.440376);
   hext_stack_2->SetBinContent(13,18.80277);
   hext_stack_2->SetBinContent(14,15.63501);
   hext_stack_2->SetBinContent(15,23.14843);
   hext_stack_2->SetBinContent(16,19.09245);
   hext_stack_2->SetBinContent(17,21.8189);
   hext_stack_2->SetBinContent(18,22.80369);
   hext_stack_2->SetBinContent(19,35.12846);
   hext_stack_2->SetBinContent(20,27.98132);
   hext_stack_2->SetBinContent(21,30.15554);
   hext_stack_2->SetBinContent(22,19.93878);
   hext_stack_2->SetBinContent(23,32.86328);
   hext_stack_2->SetBinContent(24,42.09803);
   hext_stack_2->SetBinContent(25,37.85774);
   hext_stack_2->SetBinError(1,2.517529);
   hext_stack_2->SetBinError(2,1.982751);
   hext_stack_2->SetBinError(3,1.619032);
   hext_stack_2->SetBinError(4,1.718811);
   hext_stack_2->SetBinError(5,1.697809);
   hext_stack_2->SetBinError(6,2.060031);
   hext_stack_2->SetBinError(7,2.508068);
   hext_stack_2->SetBinError(8,2.284889);
   hext_stack_2->SetBinError(9,1.381607);
   hext_stack_2->SetBinError(10,2.438199);
   hext_stack_2->SetBinError(11,3.10949);
   hext_stack_2->SetBinError(12,1.82829);
   hext_stack_2->SetBinError(13,3.096293);
   hext_stack_2->SetBinError(14,2.580271);
   hext_stack_2->SetBinError(15,3.475809);
   hext_stack_2->SetBinError(16,2.925763);
   hext_stack_2->SetBinError(17,3.192463);
   hext_stack_2->SetBinError(18,3.231322);
   hext_stack_2->SetBinError(19,4.169685);
   hext_stack_2->SetBinError(20,3.605416);
   hext_stack_2->SetBinError(21,3.752063);
   hext_stack_2->SetBinError(22,2.867237);
   hext_stack_2->SetBinError(23,3.827084);
   hext_stack_2->SetBinError(24,4.462909);
   hext_stack_2->SetBinError(25,4.165485);
   hext_stack_2->SetEntries(1085);

   ci = 1449;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,1.022793);
   hdirt_stack_3->SetBinContent(2,1.133963);
   hdirt_stack_3->SetBinContent(3,0.5248055);
   hdirt_stack_3->SetBinContent(4,1.766963);
   hdirt_stack_3->SetBinContent(5,1.176364);
   hdirt_stack_3->SetBinContent(6,0.2761429);
   hdirt_stack_3->SetBinContent(7,1.902336);
   hdirt_stack_3->SetBinContent(8,1.20838);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,1.330383);
   hdirt_stack_3->SetBinContent(11,0.5872014);
   hdirt_stack_3->SetBinContent(12,0.3738302);
   hdirt_stack_3->SetBinContent(13,0.8509132);
   hdirt_stack_3->SetBinContent(14,1.175891);
   hdirt_stack_3->SetBinContent(15,3.62435);
   hdirt_stack_3->SetBinContent(16,2.338204);
   hdirt_stack_3->SetBinContent(17,1.273736);
   hdirt_stack_3->SetBinContent(18,2.202308);
   hdirt_stack_3->SetBinContent(19,3.100146);
   hdirt_stack_3->SetBinContent(20,2.118791);
   hdirt_stack_3->SetBinContent(21,4.528926);
   hdirt_stack_3->SetBinContent(22,5.18136);
   hdirt_stack_3->SetBinContent(23,2.13688);
   hdirt_stack_3->SetBinContent(24,4.371415);
   hdirt_stack_3->SetBinContent(25,4.620786);
   hdirt_stack_3->SetBinError(1,0.4329879);
   hdirt_stack_3->SetBinError(2,0.4956247);
   hdirt_stack_3->SetBinError(3,0.3070897);
   hdirt_stack_3->SetBinError(4,0.7174075);
   hdirt_stack_3->SetBinError(5,0.6086953);
   hdirt_stack_3->SetBinError(6,0.1952625);
   hdirt_stack_3->SetBinError(7,0.7440939);
   hdirt_stack_3->SetBinError(8,0.584084);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.6284736);
   hdirt_stack_3->SetBinError(11,0.3414378);
   hdirt_stack_3->SetBinError(12,0.2681791);
   hdirt_stack_3->SetBinError(13,0.5162367);
   hdirt_stack_3->SetBinError(14,0.4908689);
   hdirt_stack_3->SetBinError(15,1.298602);
   hdirt_stack_3->SetBinError(16,0.7922688);
   hdirt_stack_3->SetBinError(17,0.591637);
   hdirt_stack_3->SetBinError(18,0.8028403);
   hdirt_stack_3->SetBinError(19,0.9256508);
   hdirt_stack_3->SetBinError(20,0.7020427);
   hdirt_stack_3->SetBinError(21,1.437853);
   hdirt_stack_3->SetBinError(22,1.187735);
   hdirt_stack_3->SetBinError(23,0.653823);
   hdirt_stack_3->SetBinError(24,1.202465);
   hdirt_stack_3->SetBinError(25,1.111861);
   hdirt_stack_3->SetEntries(206);

   ci = 1450;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,9.658894);
   houtFV_stack_4->SetBinContent(2,6.048797);
   houtFV_stack_4->SetBinContent(3,7.562993);
   houtFV_stack_4->SetBinContent(4,7.70235);
   houtFV_stack_4->SetBinContent(5,6.887222);
   houtFV_stack_4->SetBinContent(6,7.764172);
   houtFV_stack_4->SetBinContent(7,7.783634);
   houtFV_stack_4->SetBinContent(8,4.494632);
   houtFV_stack_4->SetBinContent(9,8.328649);
   houtFV_stack_4->SetBinContent(10,5.619981);
   houtFV_stack_4->SetBinContent(11,7.254932);
   houtFV_stack_4->SetBinContent(12,8.897711);
   houtFV_stack_4->SetBinContent(13,9.003903);
   houtFV_stack_4->SetBinContent(14,10.10375);
   houtFV_stack_4->SetBinContent(15,11.15652);
   houtFV_stack_4->SetBinContent(16,13.00012);
   houtFV_stack_4->SetBinContent(17,13.80507);
   houtFV_stack_4->SetBinContent(18,18.51239);
   houtFV_stack_4->SetBinContent(19,18.96102);
   houtFV_stack_4->SetBinContent(20,28.02526);
   houtFV_stack_4->SetBinContent(21,32.61058);
   houtFV_stack_4->SetBinContent(22,31.27781);
   houtFV_stack_4->SetBinContent(23,38.75862);
   houtFV_stack_4->SetBinContent(24,41.41073);
   houtFV_stack_4->SetBinContent(25,42.59367);
   houtFV_stack_4->SetBinError(1,1.58211);
   houtFV_stack_4->SetBinError(2,1.175711);
   houtFV_stack_4->SetBinError(3,1.456322);
   houtFV_stack_4->SetBinError(4,1.395205);
   houtFV_stack_4->SetBinError(5,1.324431);
   houtFV_stack_4->SetBinError(6,1.401046);
   houtFV_stack_4->SetBinError(7,1.376524);
   houtFV_stack_4->SetBinError(8,1.037659);
   houtFV_stack_4->SetBinError(9,1.44362);
   houtFV_stack_4->SetBinError(10,1.160423);
   houtFV_stack_4->SetBinError(11,1.297017);
   houtFV_stack_4->SetBinError(12,1.473597);
   houtFV_stack_4->SetBinError(13,1.49058);
   houtFV_stack_4->SetBinError(14,1.594835);
   houtFV_stack_4->SetBinError(15,1.665611);
   houtFV_stack_4->SetBinError(16,1.815852);
   houtFV_stack_4->SetBinError(17,1.883504);
   houtFV_stack_4->SetBinError(18,2.12382);
   houtFV_stack_4->SetBinError(19,2.167578);
   houtFV_stack_4->SetBinError(20,2.713482);
   houtFV_stack_4->SetBinError(21,2.771311);
   houtFV_stack_4->SetBinError(22,2.854326);
   houtFV_stack_4->SetBinError(23,3.12795);
   houtFV_stack_4->SetBinError(24,3.207449);
   houtFV_stack_4->SetBinError(25,3.255669);
   houtFV_stack_4->SetEntries(1712);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.938894);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.506776);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6971721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4736358);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.133034);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.162926);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.456287);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,7.112204);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,17.11025);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,50.36069);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4879888);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4683176);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3138005);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1634799);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5507507);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5134458);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.555441);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8669303);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.368843);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.312721);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8647403);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7664219);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.059208);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.31114);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.450808);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.9344858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.816916);
   hNCpi0inFVqe_stack_6->SetBinContent(23,3.473403);
   hNCpi0inFVqe_stack_6->SetBinContent(24,2.216726);
   hNCpi0inFVqe_stack_6->SetBinContent(25,3.654916);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3686464);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2727714);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3494035);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3851684);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4301228);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2560898);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.5618282);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.6522837);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.401414);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.6253226);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,49.64077);
   hNCpi0inFVres_stack_7->SetBinContent(2,46.01958);
   hNCpi0inFVres_stack_7->SetBinContent(3,43.28155);
   hNCpi0inFVres_stack_7->SetBinContent(4,42.75211);
   hNCpi0inFVres_stack_7->SetBinContent(5,44.38467);
   hNCpi0inFVres_stack_7->SetBinContent(6,43.44065);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.90006);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.05337);
   hNCpi0inFVres_stack_7->SetBinContent(9,44.95071);
   hNCpi0inFVres_stack_7->SetBinContent(10,46.5191);
   hNCpi0inFVres_stack_7->SetBinContent(11,49.68195);
   hNCpi0inFVres_stack_7->SetBinContent(12,58.35708);
   hNCpi0inFVres_stack_7->SetBinContent(13,57.92491);
   hNCpi0inFVres_stack_7->SetBinContent(14,69.9823);
   hNCpi0inFVres_stack_7->SetBinContent(15,73.16457);
   hNCpi0inFVres_stack_7->SetBinContent(16,78.57402);
   hNCpi0inFVres_stack_7->SetBinContent(17,89.63608);
   hNCpi0inFVres_stack_7->SetBinContent(18,96.44351);
   hNCpi0inFVres_stack_7->SetBinContent(19,116.1297);
   hNCpi0inFVres_stack_7->SetBinContent(20,142.714);
   hNCpi0inFVres_stack_7->SetBinContent(21,165.2857);
   hNCpi0inFVres_stack_7->SetBinContent(22,186.7356);
   hNCpi0inFVres_stack_7->SetBinContent(23,220.2651);
   hNCpi0inFVres_stack_7->SetBinContent(24,284.8086);
   hNCpi0inFVres_stack_7->SetBinContent(25,333.6739);
   hNCpi0inFVres_stack_7->SetBinError(1,2.291999);
   hNCpi0inFVres_stack_7->SetBinError(2,2.235592);
   hNCpi0inFVres_stack_7->SetBinError(3,2.178588);
   hNCpi0inFVres_stack_7->SetBinError(4,2.138559);
   hNCpi0inFVres_stack_7->SetBinError(5,2.222358);
   hNCpi0inFVres_stack_7->SetBinError(6,2.186405);
   hNCpi0inFVres_stack_7->SetBinError(7,2.106207);
   hNCpi0inFVres_stack_7->SetBinError(8,2.090272);
   hNCpi0inFVres_stack_7->SetBinError(9,2.136723);
   hNCpi0inFVres_stack_7->SetBinError(10,2.15227);
   hNCpi0inFVres_stack_7->SetBinError(11,2.279398);
   hNCpi0inFVres_stack_7->SetBinError(12,2.525499);
   hNCpi0inFVres_stack_7->SetBinError(13,2.490438);
   hNCpi0inFVres_stack_7->SetBinError(14,2.791338);
   hNCpi0inFVres_stack_7->SetBinError(15,2.814044);
   hNCpi0inFVres_stack_7->SetBinError(16,2.883505);
   hNCpi0inFVres_stack_7->SetBinError(17,3.092588);
   hNCpi0inFVres_stack_7->SetBinError(18,3.117896);
   hNCpi0inFVres_stack_7->SetBinError(19,3.5294);
   hNCpi0inFVres_stack_7->SetBinError(20,3.95138);
   hNCpi0inFVres_stack_7->SetBinError(21,4.233865);
   hNCpi0inFVres_stack_7->SetBinError(22,4.475512);
   hNCpi0inFVres_stack_7->SetBinError(23,4.841008);
   hNCpi0inFVres_stack_7->SetBinError(24,5.612932);
   hNCpi0inFVres_stack_7->SetBinError(25,5.967648);
   hNCpi0inFVres_stack_7->SetEntries(45534);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.32155);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.224715);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.488522);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.377833);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.602201);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.148898);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.880603);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.397093);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.643303);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.811457);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.725756);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.101994);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.2253);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.991306);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.78953);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.82807);
   hNCpi0inFVdis_stack_8->SetBinContent(17,14.91826);
   hNCpi0inFVdis_stack_8->SetBinContent(18,14.46223);
   hNCpi0inFVdis_stack_8->SetBinContent(19,20.89552);
   hNCpi0inFVdis_stack_8->SetBinContent(20,21.24875);
   hNCpi0inFVdis_stack_8->SetBinContent(21,26.49714);
   hNCpi0inFVdis_stack_8->SetBinContent(22,34.50165);
   hNCpi0inFVdis_stack_8->SetBinContent(23,46.1692);
   hNCpi0inFVdis_stack_8->SetBinContent(24,61.34602);
   hNCpi0inFVdis_stack_8->SetBinContent(25,92.42891);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.072105);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9041069);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8768256);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9101851);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9588786);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8225837);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7135949);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8132652);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9046453);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9987745);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9440153);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9300315);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8720409);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9615469);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.036354);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.160462);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.291925);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.252407);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.483662);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.468345);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.667414);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.935853);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.213385);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.526243);
   hNCpi0inFVdis_stack_8->SetBinError(25,3.124942);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1455;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.432286);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.2270916);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1456;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,20.46566);
   hCCpi0inFV_stack_11->SetBinContent(2,15.58037);
   hCCpi0inFV_stack_11->SetBinContent(3,20.30933);
   hCCpi0inFV_stack_11->SetBinContent(4,13.09976);
   hCCpi0inFV_stack_11->SetBinContent(5,13.67265);
   hCCpi0inFV_stack_11->SetBinContent(6,13.55514);
   hCCpi0inFV_stack_11->SetBinContent(7,15.63823);
   hCCpi0inFV_stack_11->SetBinContent(8,12.93835);
   hCCpi0inFV_stack_11->SetBinContent(9,13.38753);
   hCCpi0inFV_stack_11->SetBinContent(10,14.28411);
   hCCpi0inFV_stack_11->SetBinContent(11,12.95844);
   hCCpi0inFV_stack_11->SetBinContent(12,14.42943);
   hCCpi0inFV_stack_11->SetBinContent(13,17.61221);
   hCCpi0inFV_stack_11->SetBinContent(14,22.53759);
   hCCpi0inFV_stack_11->SetBinContent(15,17.14578);
   hCCpi0inFV_stack_11->SetBinContent(16,23.78014);
   hCCpi0inFV_stack_11->SetBinContent(17,26.91146);
   hCCpi0inFV_stack_11->SetBinContent(18,27.20546);
   hCCpi0inFV_stack_11->SetBinContent(19,31.10712);
   hCCpi0inFV_stack_11->SetBinContent(20,39.39108);
   hCCpi0inFV_stack_11->SetBinContent(21,55.43356);
   hCCpi0inFV_stack_11->SetBinContent(22,59.75682);
   hCCpi0inFV_stack_11->SetBinContent(23,73.45647);
   hCCpi0inFV_stack_11->SetBinContent(24,108.4642);
   hCCpi0inFV_stack_11->SetBinContent(25,155.5788);
   hCCpi0inFV_stack_11->SetBinError(1,2.217894);
   hCCpi0inFV_stack_11->SetBinError(2,1.987131);
   hCCpi0inFV_stack_11->SetBinError(3,2.240144);
   hCCpi0inFV_stack_11->SetBinError(4,1.874947);
   hCCpi0inFV_stack_11->SetBinError(5,1.823774);
   hCCpi0inFV_stack_11->SetBinError(6,1.732207);
   hCCpi0inFV_stack_11->SetBinError(7,1.962276);
   hCCpi0inFV_stack_11->SetBinError(8,1.770052);
   hCCpi0inFV_stack_11->SetBinError(9,1.81957);
   hCCpi0inFV_stack_11->SetBinError(10,1.916794);
   hCCpi0inFV_stack_11->SetBinError(11,1.715524);
   hCCpi0inFV_stack_11->SetBinError(12,1.862251);
   hCCpi0inFV_stack_11->SetBinError(13,2.074205);
   hCCpi0inFV_stack_11->SetBinError(14,2.372572);
   hCCpi0inFV_stack_11->SetBinError(15,2.095653);
   hCCpi0inFV_stack_11->SetBinError(16,2.506289);
   hCCpi0inFV_stack_11->SetBinError(17,2.637301);
   hCCpi0inFV_stack_11->SetBinError(18,2.617775);
   hCCpi0inFV_stack_11->SetBinError(19,2.785076);
   hCCpi0inFV_stack_11->SetBinError(20,3.16031);
   hCCpi0inFV_stack_11->SetBinError(21,3.807262);
   hCCpi0inFV_stack_11->SetBinError(22,3.850773);
   hCCpi0inFV_stack_11->SetBinError(23,4.285822);
   hCCpi0inFV_stack_11->SetBinError(24,5.223394);
   hCCpi0inFV_stack_11->SetBinError(25,6.237615);
   hCCpi0inFV_stack_11->SetEntries(3599);

   ci = 1458;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,10.55514);
   hNCinFV_stack_12->SetBinContent(2,7.627472);
   hNCinFV_stack_12->SetBinContent(3,7.177406);
   hNCinFV_stack_12->SetBinContent(4,5.818387);
   hNCinFV_stack_12->SetBinContent(5,4.878528);
   hNCinFV_stack_12->SetBinContent(6,6.05713);
   hNCinFV_stack_12->SetBinContent(7,4.503085);
   hNCinFV_stack_12->SetBinContent(8,4.198173);
   hNCinFV_stack_12->SetBinContent(9,5.908596);
   hNCinFV_stack_12->SetBinContent(10,1.568651);
   hNCinFV_stack_12->SetBinContent(11,5.706809);
   hNCinFV_stack_12->SetBinContent(12,4.775403);
   hNCinFV_stack_12->SetBinContent(13,5.380156);
   hNCinFV_stack_12->SetBinContent(14,5.32014);
   hNCinFV_stack_12->SetBinContent(15,6.213508);
   hNCinFV_stack_12->SetBinContent(16,6.450561);
   hNCinFV_stack_12->SetBinContent(17,6.107002);
   hNCinFV_stack_12->SetBinContent(18,8.804383);
   hNCinFV_stack_12->SetBinContent(19,10.64366);
   hNCinFV_stack_12->SetBinContent(20,15.44659);
   hNCinFV_stack_12->SetBinContent(21,12.61528);
   hNCinFV_stack_12->SetBinContent(22,16.89075);
   hNCinFV_stack_12->SetBinContent(23,23.29928);
   hNCinFV_stack_12->SetBinContent(24,35.85177);
   hNCinFV_stack_12->SetBinContent(25,49.46694);
   hNCinFV_stack_12->SetBinError(1,1.630449);
   hNCinFV_stack_12->SetBinError(2,1.374247);
   hNCinFV_stack_12->SetBinError(3,1.359472);
   hNCinFV_stack_12->SetBinError(4,1.17726);
   hNCinFV_stack_12->SetBinError(5,1.161372);
   hNCinFV_stack_12->SetBinError(6,1.257101);
   hNCinFV_stack_12->SetBinError(7,1.039253);
   hNCinFV_stack_12->SetBinError(8,1.057044);
   hNCinFV_stack_12->SetBinError(9,1.225272);
   hNCinFV_stack_12->SetBinError(10,0.5546069);
   hNCinFV_stack_12->SetBinError(11,1.208557);
   hNCinFV_stack_12->SetBinError(12,1.194472);
   hNCinFV_stack_12->SetBinError(13,1.161975);
   hNCinFV_stack_12->SetBinError(14,1.177227);
   hNCinFV_stack_12->SetBinError(15,1.209958);
   hNCinFV_stack_12->SetBinError(16,1.287516);
   hNCinFV_stack_12->SetBinError(17,1.24123);
   hNCinFV_stack_12->SetBinError(18,1.45582);
   hNCinFV_stack_12->SetBinError(19,1.665248);
   hNCinFV_stack_12->SetBinError(20,1.9529);
   hNCinFV_stack_12->SetBinError(21,1.721447);
   hNCinFV_stack_12->SetBinError(22,2.09509);
   hNCinFV_stack_12->SetBinError(23,2.427228);
   hNCinFV_stack_12->SetBinError(24,3.014598);
   hNCinFV_stack_12->SetBinError(25,3.556564);
   hNCinFV_stack_12->SetEntries(1151);

   ci = 1459;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,10.7634);
   hnumuCCinFV_stack_13->SetBinContent(2,9.996597);
   hnumuCCinFV_stack_13->SetBinContent(3,7.172441);
   hnumuCCinFV_stack_13->SetBinContent(4,7.414539);
   hnumuCCinFV_stack_13->SetBinContent(5,5.912464);
   hnumuCCinFV_stack_13->SetBinContent(6,8.209608);
   hnumuCCinFV_stack_13->SetBinContent(7,5.921556);
   hnumuCCinFV_stack_13->SetBinContent(8,10.20211);
   hnumuCCinFV_stack_13->SetBinContent(9,5.548057);
   hnumuCCinFV_stack_13->SetBinContent(10,13.66842);
   hnumuCCinFV_stack_13->SetBinContent(11,12.34611);
   hnumuCCinFV_stack_13->SetBinContent(12,11.79342);
   hnumuCCinFV_stack_13->SetBinContent(13,14.29738);
   hnumuCCinFV_stack_13->SetBinContent(14,13.57098);
   hnumuCCinFV_stack_13->SetBinContent(15,14.00196);
   hnumuCCinFV_stack_13->SetBinContent(16,17.06446);
   hnumuCCinFV_stack_13->SetBinContent(17,15.52322);
   hnumuCCinFV_stack_13->SetBinContent(18,18.32627);
   hnumuCCinFV_stack_13->SetBinContent(19,15.11318);
   hnumuCCinFV_stack_13->SetBinContent(20,22.95674);
   hnumuCCinFV_stack_13->SetBinContent(21,22.78738);
   hnumuCCinFV_stack_13->SetBinContent(22,23.5994);
   hnumuCCinFV_stack_13->SetBinContent(23,23.54667);
   hnumuCCinFV_stack_13->SetBinContent(24,24.94501);
   hnumuCCinFV_stack_13->SetBinContent(25,41.94408);
   hnumuCCinFV_stack_13->SetBinError(1,1.699276);
   hnumuCCinFV_stack_13->SetBinError(2,1.760433);
   hnumuCCinFV_stack_13->SetBinError(3,1.417989);
   hnumuCCinFV_stack_13->SetBinError(4,1.741764);
   hnumuCCinFV_stack_13->SetBinError(5,1.26648);
   hnumuCCinFV_stack_13->SetBinError(6,1.857751);
   hnumuCCinFV_stack_13->SetBinError(7,1.450234);
   hnumuCCinFV_stack_13->SetBinError(8,1.949098);
   hnumuCCinFV_stack_13->SetBinError(9,1.20114);
   hnumuCCinFV_stack_13->SetBinError(10,2.555379);
   hnumuCCinFV_stack_13->SetBinError(11,2.004325);
   hnumuCCinFV_stack_13->SetBinError(12,2.038204);
   hnumuCCinFV_stack_13->SetBinError(13,2.307598);
   hnumuCCinFV_stack_13->SetBinError(14,1.940728);
   hnumuCCinFV_stack_13->SetBinError(15,2.416712);
   hnumuCCinFV_stack_13->SetBinError(16,2.531904);
   hnumuCCinFV_stack_13->SetBinError(17,2.19845);
   hnumuCCinFV_stack_13->SetBinError(18,2.650086);
   hnumuCCinFV_stack_13->SetBinError(19,1.988382);
   hnumuCCinFV_stack_13->SetBinError(20,4.16456);
   hnumuCCinFV_stack_13->SetBinError(21,2.917365);
   hnumuCCinFV_stack_13->SetBinError(22,2.841132);
   hnumuCCinFV_stack_13->SetBinError(23,2.775985);
   hnumuCCinFV_stack_13->SetBinError(24,2.549246);
   hnumuCCinFV_stack_13->SetBinError(25,3.304788);
   hnumuCCinFV_stack_13->SetEntries(1455);

   ci = 1460;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,1.057646);
   hnueCCinFV_stack_14->SetBinContent(2,0.8064713);
   hnueCCinFV_stack_14->SetBinContent(3,1.231439);
   hnueCCinFV_stack_14->SetBinContent(4,0.2476759);
   hnueCCinFV_stack_14->SetBinContent(5,1.664836);
   hnueCCinFV_stack_14->SetBinContent(6,0.3405455);
   hnueCCinFV_stack_14->SetBinContent(7,1.006494);
   hnueCCinFV_stack_14->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_14->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_14->SetBinContent(11,1.226073);
   hnueCCinFV_stack_14->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.6905964);
   hnueCCinFV_stack_14->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_14->SetBinContent(17,0.5054118);
   hnueCCinFV_stack_14->SetBinContent(18,3.768029);
   hnueCCinFV_stack_14->SetBinContent(19,0.5867651);
   hnueCCinFV_stack_14->SetBinContent(20,1.230572);
   hnueCCinFV_stack_14->SetBinContent(21,1.913392);
   hnueCCinFV_stack_14->SetBinContent(22,1.917778);
   hnueCCinFV_stack_14->SetBinContent(23,3.155974);
   hnueCCinFV_stack_14->SetBinContent(24,2.353073);
   hnueCCinFV_stack_14->SetBinContent(25,16.30548);
   hnueCCinFV_stack_14->SetBinError(1,0.6523817);
   hnueCCinFV_stack_14->SetBinError(2,0.4036823);
   hnueCCinFV_stack_14->SetBinError(3,0.5552317);
   hnueCCinFV_stack_14->SetBinError(4,0.2476759);
   hnueCCinFV_stack_14->SetBinError(5,1.155559);
   hnueCCinFV_stack_14->SetBinError(6,0.3401778);
   hnueCCinFV_stack_14->SetBinError(7,0.5976004);
   hnueCCinFV_stack_14->SetBinError(8,0.2556436);
   hnueCCinFV_stack_14->SetBinError(9,0.5946997);
   hnueCCinFV_stack_14->SetBinError(11,0.56795);
   hnueCCinFV_stack_14->SetBinError(12,0.1950249);
   hnueCCinFV_stack_14->SetBinError(13,0.1950249);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.4010541);
   hnueCCinFV_stack_14->SetBinError(16,0.2998007);
   hnueCCinFV_stack_14->SetBinError(17,0.3573868);
   hnueCCinFV_stack_14->SetBinError(18,1.565555);
   hnueCCinFV_stack_14->SetBinError(19,0.3387718);
   hnueCCinFV_stack_14->SetBinError(20,0.655428);
   hnueCCinFV_stack_14->SetBinError(21,0.7722778);
   hnueCCinFV_stack_14->SetBinError(22,0.7466958);
   hnueCCinFV_stack_14->SetBinError(23,1.056339);
   hnueCCinFV_stack_14->SetBinError(24,0.7231417);
   hnueCCinFV_stack_14->SetBinError(25,2.681412);
   hnueCCinFV_stack_14->SetEntries(151);

   ci = 1461;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__5->SetBinContent(1,132.2736);
   hmcerror__5->SetBinContent(2,108.6222);
   hmcerror__5->SetBinContent(3,106.1477);
   hmcerror__5->SetBinContent(4,96.19732);
   hmcerror__5->SetBinContent(5,96.67188);
   hmcerror__5->SetBinContent(6,98.64778);
   hmcerror__5->SetBinContent(7,102.871);
   hmcerror__5->SetBinContent(8,96.91216);
   hmcerror__5->SetBinContent(9,94.65308);
   hmcerror__5->SetBinContent(10,107.7081);
   hmcerror__5->SetBinContent(11,122.0385);
   hmcerror__5->SetBinContent(12,119.9728);
   hmcerror__5->SetBinContent(13,133.2461);
   hmcerror__5->SetBinContent(14,156.2632);
   hmcerror__5->SetBinContent(15,167.4148);
   hmcerror__5->SetBinContent(16,178.6832);
   hmcerror__5->SetBinContent(17,196.3433);
   hmcerror__5->SetBinContent(18,217.2033);
   hmcerror__5->SetBinContent(19,257.3181);
   hmcerror__5->SetBinContent(20,312.9594);
   hmcerror__5->SetBinContent(21,361.2922);
   hmcerror__5->SetBinContent(22,395.869);
   hmcerror__5->SetBinContent(23,482.9724);
   hmcerror__5->SetBinContent(24,635.4347);
   hmcerror__5->SetBinContent(25,843.7731);
   hmcerror__5->SetBinError(1,28.87946);
   hmcerror__5->SetBinError(2,24.48941);
   hmcerror__5->SetBinError(3,23.53784);
   hmcerror__5->SetBinError(4,21.8132);
   hmcerror__5->SetBinError(5,21.80714);
   hmcerror__5->SetBinError(6,22.63136);
   hmcerror__5->SetBinError(7,21.81157);
   hmcerror__5->SetBinError(8,20.6617);
   hmcerror__5->SetBinError(9,21.86745);
   hmcerror__5->SetBinError(10,22.94789);
   hmcerror__5->SetBinError(11,25.16);
   hmcerror__5->SetBinError(12,27.48402);
   hmcerror__5->SetBinError(13,30.03193);
   hmcerror__5->SetBinError(14,33.96147);
   hmcerror__5->SetBinError(15,38.48522);
   hmcerror__5->SetBinError(16,43.65572);
   hmcerror__5->SetBinError(17,49.29153);
   hmcerror__5->SetBinError(18,57.52377);
   hmcerror__5->SetBinError(19,66.70868);
   hmcerror__5->SetBinError(20,80.03719);
   hmcerror__5->SetBinError(21,91.09108);
   hmcerror__5->SetBinError(22,97.09192);
   hmcerror__5->SetBinError(23,106.3526);
   hmcerror__5->SetBinError(24,128.2247);
   hmcerror__5->SetBinError(25,177.0475);
   hmcerror__5->SetBinError(26,0.3895343);
   hmcerror__5->SetEntries(5560.658);

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
   
   Double_t _fx3005[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3005[25] = {
   104,
   92,
   86,
   94,
   74,
   97,
   90,
   98,
   96,
   120,
   103,
   90,
   107,
   113,
   137,
   138,
   180,
   196,
   193,
   267,
   304,
   369,
   451,
   584,
   791};
   Double_t _felx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3005[25] = {
   10.19804,
   9.7138,
   9.3967,
   9.8173,
   8.7275,
   9.9704,
   9.6093,
   10.0209,
   9.9196,
   10.95445,
   10.14889,
   9.6093,
   10.34408,
   10.63015,
   11.7047,
   11.74734,
   13.41641,
   14,
   13.89244,
   16.34013,
   17.4356,
   19.20937,
   21.23676,
   24.16609,
   28.12472};
   Double_t _fehx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3005[25] = {
   10.19804,
   9.513,
   9.1951,
   9.616,
   8.5253,
   9.769,
   9.4079,
   9.82,
   9.718,
   10.95445,
   10.14889,
   9.4079,
   10.34408,
   10.63015,
   11.7047,
   11.74734,
   13.41641,
   14,
   13.89244,
   16.34013,
   17.4356,
   19.20937,
   21.23676,
   24.16609,
   28.12472};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(58.74525);
   Graph_Graph3005->SetMaximum(894.5099);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.6/25","");
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

   ci = 1448;
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

   ci = 1449;
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

   ci = 1450;
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

   ci = 1451;
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

   ci = 1452;
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

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.3","F");

   ci = 1454;
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

   ci = 1455;
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

   ci = 1456;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 838.7","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 271.3","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 376.6","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_costheta_all");
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
   
   Double_t _fx3006[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3006[25] = {
   0.2183313,
   0.225455,
   0.2217462,
   0.2267548,
   0.225579,
   0.2294158,
   0.2120283,
   0.2132003,
   0.2310274,
   0.2130563,
   0.2061644,
   0.2290854,
   0.225387,
   0.2173351,
   0.2298795,
   0.2443191,
   0.2510476,
   0.2648384,
   0.259246,
   0.255743,
   0.2521258,
   0.2452628,
   0.2202042,
   0.2017906,
   0.2098283};
   Double_t _fehx3006[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3006[25] = {
   0.2183313,
   0.225455,
   0.2217462,
   0.2267548,
   0.225579,
   0.2294158,
   0.2120283,
   0.2132003,
   0.2310274,
   0.2130563,
   0.2061644,
   0.2290854,
   0.225387,
   0.2173351,
   0.2298795,
   0.2443191,
   0.2510476,
   0.2648384,
   0.259246,
   0.255743,
   0.2521258,
   0.2452628,
   0.2202042,
   0.2017906,
   0.2098283};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3007[25] = {
   0.2078871,
   0.2060989,
   0.2053761,
   0.2134774,
   0.2168542,
   0.2148847,
   0.1944091,
   0.2033102,
   0.2225209,
   0.1953368,
   0.2009658,
   0.2227858,
   0.2172498,
   0.2110245,
   0.2240074,
   0.2385828,
   0.2425626,
   0.2561104,
   0.2534262,
   0.2522538,
   0.2481408,
   0.2418644,
   0.2185869,
   0.2001227,
   0.2084434};
   Double_t _fehx3007[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3007[25] = {
   0.2078871,
   0.2060989,
   0.2053761,
   0.2134774,
   0.2168542,
   0.2148847,
   0.1944091,
   0.2033102,
   0.2225209,
   0.1953368,
   0.2009658,
   0.2227858,
   0.2172498,
   0.2110245,
   0.2240074,
   0.2385828,
   0.2425626,
   0.2561104,
   0.2534262,
   0.2522538,
   0.2481408,
   0.2418644,
   0.2185869,
   0.2001227,
   0.2084434};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3008[25] = {
   0.7862493,
   0.8469725,
   0.8101919,
   0.9771582,
   0.765476,
   0.9832963,
   0.8748819,
   1.011225,
   1.01423,
   1.114123,
   0.843996,
   0.75017,
   0.8030256,
   0.7231391,
   0.8183269,
   0.7723166,
   0.9167615,
   0.9023804,
   0.7500444,
   0.8531459,
   0.8414243,
   0.9321265,
   0.9338007,
   0.9190559,
   0.9374558};
   Double_t _felx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3008[25] = {
   0.07709809,
   0.0894274,
   0.08852477,
   0.1020538,
   0.09027962,
   0.1010707,
   0.09341114,
   0.1034019,
   0.1047996,
   0.101705,
   0.08316139,
   0.08009565,
   0.07763142,
   0.06802721,
   0.06991438,
   0.06574396,
   0.06833137,
   0.06445574,
   0.05398938,
   0.05221168,
   0.04825899,
   0.04852457,
   0.04397096,
   0.0380308,
   0.03333209};
   Double_t _fehx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3008[25] = {
   0.07709809,
   0.08757879,
   0.08662553,
   0.09996121,
   0.08818801,
   0.09902909,
   0.09145334,
   0.1013289,
   0.1026697,
   0.101705,
   0.08316139,
   0.07841694,
   0.07763142,
   0.06802721,
   0.06991438,
   0.06574396,
   0.06833137,
   0.06445574,
   0.05398938,
   0.05221168,
   0.04825899,
   0.04852457,
   0.04397096,
   0.0380308,
   0.03333209};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.5990404);
   Graph_Graph3008->SetMaximum(1.271899);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 17:36:58 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
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
   pad1->Range(-4.119231,-4.66,3.957692,515.2979);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__10->SetBinContent(1,201.2473);
   hmc__10->SetBinContent(2,201.1545);
   hmc__10->SetBinContent(3,204.9284);
   hmc__10->SetBinContent(4,199.1133);
   hmc__10->SetBinContent(5,180.2916);
   hmc__10->SetBinContent(6,197.9514);
   hmc__10->SetBinContent(7,213.3601);
   hmc__10->SetBinContent(8,193.3683);
   hmc__10->SetBinContent(9,193.9782);
   hmc__10->SetBinContent(10,190.4088);
   hmc__10->SetBinContent(11,202.5809);
   hmc__10->SetBinContent(12,196.4984);
   hmc__10->SetBinContent(13,201.4622);
   hmc__10->SetBinContent(14,199.9348);
   hmc__10->SetBinContent(15,213.3382);
   hmc__10->SetBinContent(16,195.7346);
   hmc__10->SetBinContent(17,217.0005);
   hmc__10->SetBinContent(18,199.2561);
   hmc__10->SetBinContent(19,189.3928);
   hmc__10->SetBinContent(20,198.0923);
   hmc__10->SetBinContent(21,206.6126);
   hmc__10->SetBinContent(22,200.1208);
   hmc__10->SetBinContent(23,225.7546);
   hmc__10->SetBinContent(24,215.6824);
   hmc__10->SetBinError(1,51.11521);
   hmc__10->SetBinError(2,53.22365);
   hmc__10->SetBinError(3,52.91964);
   hmc__10->SetBinError(4,53.56958);
   hmc__10->SetBinError(5,42.40443);
   hmc__10->SetBinError(6,48.3737);
   hmc__10->SetBinError(7,49.20233);
   hmc__10->SetBinError(8,52.61693);
   hmc__10->SetBinError(9,48.18047);
   hmc__10->SetBinError(10,49.10506);
   hmc__10->SetBinError(11,57.39238);
   hmc__10->SetBinError(12,49.29925);
   hmc__10->SetBinError(13,52.26075);
   hmc__10->SetBinError(14,50.3784);
   hmc__10->SetBinError(15,56.16923);
   hmc__10->SetBinError(16,49.6918);
   hmc__10->SetBinError(17,54.30242);
   hmc__10->SetBinError(18,46.99061);
   hmc__10->SetBinError(19,47.56336);
   hmc__10->SetBinError(20,46.84392);
   hmc__10->SetBinError(21,51.47156);
   hmc__10->SetBinError(22,54.56731);
   hmc__10->SetBinError(23,63.85428);
   hmc__10->SetBinError(24,58.7864);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-4.66);
   hmc__10->SetMaximum(489.3);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,-3.15,3.15);
   hs4_stack_4->SetMinimum(-5.219833e-10);
   hs4_stack_4->SetMaximum(237.0423);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.312226);
   hbadmatch_stack_1->SetBinContent(2,6.060905);
   hbadmatch_stack_1->SetBinContent(3,5.934239);
   hbadmatch_stack_1->SetBinContent(4,6.828114);
   hbadmatch_stack_1->SetBinContent(5,3.567958);
   hbadmatch_stack_1->SetBinContent(6,6.884356);
   hbadmatch_stack_1->SetBinContent(7,6.627404);
   hbadmatch_stack_1->SetBinContent(8,4.646655);
   hbadmatch_stack_1->SetBinContent(9,6.259586);
   hbadmatch_stack_1->SetBinContent(10,3.41582);
   hbadmatch_stack_1->SetBinContent(11,2.835772);
   hbadmatch_stack_1->SetBinContent(12,2.713845);
   hbadmatch_stack_1->SetBinContent(13,3.492555);
   hbadmatch_stack_1->SetBinContent(14,6.463352);
   hbadmatch_stack_1->SetBinContent(15,5.801632);
   hbadmatch_stack_1->SetBinContent(16,5.007665);
   hbadmatch_stack_1->SetBinContent(17,4.658015);
   hbadmatch_stack_1->SetBinContent(18,4.130409);
   hbadmatch_stack_1->SetBinContent(19,5.690892);
   hbadmatch_stack_1->SetBinContent(20,6.756004);
   hbadmatch_stack_1->SetBinContent(21,5.486188);
   hbadmatch_stack_1->SetBinContent(22,5.124223);
   hbadmatch_stack_1->SetBinContent(23,4.427624);
   hbadmatch_stack_1->SetBinContent(24,5.296478);
   hbadmatch_stack_1->SetBinError(1,1.082273);
   hbadmatch_stack_1->SetBinError(2,1.286201);
   hbadmatch_stack_1->SetBinError(3,1.255739);
   hbadmatch_stack_1->SetBinError(4,1.333309);
   hbadmatch_stack_1->SetBinError(5,0.9467467);
   hbadmatch_stack_1->SetBinError(6,1.371016);
   hbadmatch_stack_1->SetBinError(7,1.336534);
   hbadmatch_stack_1->SetBinError(8,1.242469);
   hbadmatch_stack_1->SetBinError(9,2.25061);
   hbadmatch_stack_1->SetBinError(10,1.291069);
   hbadmatch_stack_1->SetBinError(11,0.808577);
   hbadmatch_stack_1->SetBinError(12,0.8044961);
   hbadmatch_stack_1->SetBinError(13,0.9649843);
   hbadmatch_stack_1->SetBinError(14,2.019169);
   hbadmatch_stack_1->SetBinError(15,1.303825);
   hbadmatch_stack_1->SetBinError(16,1.228831);
   hbadmatch_stack_1->SetBinError(17,1.142176);
   hbadmatch_stack_1->SetBinError(18,1.175108);
   hbadmatch_stack_1->SetBinError(19,1.368779);
   hbadmatch_stack_1->SetBinError(20,1.554999);
   hbadmatch_stack_1->SetBinError(21,1.27172);
   hbadmatch_stack_1->SetBinError(22,1.193256);
   hbadmatch_stack_1->SetBinError(23,1.816627);
   hbadmatch_stack_1->SetBinError(24,1.136508);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,15.90756);
   hext_stack_2->SetBinContent(2,17.02198);
   hext_stack_2->SetBinContent(3,16.77978);
   hext_stack_2->SetBinContent(4,24.88694);
   hext_stack_2->SetBinContent(5,27.57749);
   hext_stack_2->SetBinContent(6,29.92336);
   hext_stack_2->SetBinContent(7,40.19919);
   hext_stack_2->SetBinContent(8,26.49898);
   hext_stack_2->SetBinContent(9,22.15054);
   hext_stack_2->SetBinContent(10,14.25522);
   hext_stack_2->SetBinContent(11,17.97804);
   hext_stack_2->SetBinContent(12,13.57606);
   hext_stack_2->SetBinContent(13,11.64845);
   hext_stack_2->SetBinContent(14,13.34105);
   hext_stack_2->SetBinContent(15,15.61624);
   hext_stack_2->SetBinContent(16,14.99339);
   hext_stack_2->SetBinContent(17,26.4096);
   hext_stack_2->SetBinContent(18,23.73222);
   hext_stack_2->SetBinContent(19,18.95841);
   hext_stack_2->SetBinContent(20,21.53205);
   hext_stack_2->SetBinContent(21,16.04879);
   hext_stack_2->SetBinContent(22,13.75483);
   hext_stack_2->SetBinContent(23,22.113);
   hext_stack_2->SetBinContent(24,18.90216);
   hext_stack_2->SetBinError(1,2.523804);
   hext_stack_2->SetBinError(2,2.633937);
   hext_stack_2->SetBinError(3,2.625353);
   hext_stack_2->SetBinError(4,3.140007);
   hext_stack_2->SetBinError(5,3.535163);
   hext_stack_2->SetBinError(6,3.487821);
   hext_stack_2->SetBinError(7,4.108973);
   hext_stack_2->SetBinError(8,3.305047);
   hext_stack_2->SetBinError(9,2.960648);
   hext_stack_2->SetBinError(10,2.485312);
   hext_stack_2->SetBinError(11,2.827021);
   hext_stack_2->SetBinError(12,2.509914);
   hext_stack_2->SetBinError(13,2.324002);
   hext_stack_2->SetBinError(14,2.46035);
   hext_stack_2->SetBinError(15,2.631555);
   hext_stack_2->SetBinError(16,2.499226);
   hext_stack_2->SetBinError(17,3.326327);
   hext_stack_2->SetBinError(18,3.187866);
   hext_stack_2->SetBinError(19,2.8472);
   hext_stack_2->SetBinError(20,3.090635);
   hext_stack_2->SetBinError(21,2.57331);
   hext_stack_2->SetBinError(22,2.453048);
   hext_stack_2->SetBinError(23,3.04959);
   hext_stack_2->SetBinError(24,2.752813);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.6976669);
   hdirt_stack_3->SetBinContent(2,2.287668);
   hdirt_stack_3->SetBinContent(3,2.805755);
   hdirt_stack_3->SetBinContent(4,4.114845);
   hdirt_stack_3->SetBinContent(5,1.670872);
   hdirt_stack_3->SetBinContent(6,3.177854);
   hdirt_stack_3->SetBinContent(7,2.661848);
   hdirt_stack_3->SetBinContent(8,2.864416);
   hdirt_stack_3->SetBinContent(9,2.501433);
   hdirt_stack_3->SetBinContent(10,3.670234);
   hdirt_stack_3->SetBinContent(11,2.475102);
   hdirt_stack_3->SetBinContent(12,1.033342);
   hdirt_stack_3->SetBinContent(13,2.651097);
   hdirt_stack_3->SetBinContent(14,3.495959);
   hdirt_stack_3->SetBinContent(15,1.752422);
   hdirt_stack_3->SetBinContent(16,2.238808);
   hdirt_stack_3->SetBinContent(17,3.094575);
   hdirt_stack_3->SetBinContent(18,2.937193);
   hdirt_stack_3->SetBinContent(19,3.367725);
   hdirt_stack_3->SetBinContent(20,3.906714);
   hdirt_stack_3->SetBinContent(21,3.389202);
   hdirt_stack_3->SetBinContent(22,2.05268);
   hdirt_stack_3->SetBinContent(23,2.262002);
   hdirt_stack_3->SetBinContent(24,2.380386);
   hdirt_stack_3->SetBinError(1,0.3636208);
   hdirt_stack_3->SetBinError(2,0.8050449);
   hdirt_stack_3->SetBinError(3,0.8749988);
   hdirt_stack_3->SetBinError(4,1.178084);
   hdirt_stack_3->SetBinError(5,0.5692072);
   hdirt_stack_3->SetBinError(6,0.9726444);
   hdirt_stack_3->SetBinError(7,0.792149);
   hdirt_stack_3->SetBinError(8,0.8319813);
   hdirt_stack_3->SetBinError(9,0.8999524);
   hdirt_stack_3->SetBinError(10,1.321772);
   hdirt_stack_3->SetBinError(11,0.836509);
   hdirt_stack_3->SetBinError(12,0.5438016);
   hdirt_stack_3->SetBinError(13,0.9198658);
   hdirt_stack_3->SetBinError(14,1.242165);
   hdirt_stack_3->SetBinError(15,0.6508923);
   hdirt_stack_3->SetBinError(16,0.7033103);
   hdirt_stack_3->SetBinError(17,0.9599959);
   hdirt_stack_3->SetBinError(18,0.8619257);
   hdirt_stack_3->SetBinError(19,0.978868);
   hdirt_stack_3->SetBinError(20,1.349791);
   hdirt_stack_3->SetBinError(21,0.9152322);
   hdirt_stack_3->SetBinError(22,0.7719518);
   hdirt_stack_3->SetBinError(23,0.7887481);
   hdirt_stack_3->SetBinError(24,0.7312897);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,25.82876);
   houtFV_stack_4->SetBinContent(2,23.60952);
   houtFV_stack_4->SetBinContent(3,25.47566);
   houtFV_stack_4->SetBinContent(4,22.0847);
   houtFV_stack_4->SetBinContent(5,21.08052);
   houtFV_stack_4->SetBinContent(6,20.67673);
   houtFV_stack_4->SetBinContent(7,21.00564);
   houtFV_stack_4->SetBinContent(8,21.14137);
   houtFV_stack_4->SetBinContent(9,23.29587);
   houtFV_stack_4->SetBinContent(10,26.04844);
   houtFV_stack_4->SetBinContent(11,28.06186);
   houtFV_stack_4->SetBinContent(12,25.44987);
   houtFV_stack_4->SetBinContent(13,22.67195);
   houtFV_stack_4->SetBinContent(14,23.57967);
   houtFV_stack_4->SetBinContent(15,26.52161);
   houtFV_stack_4->SetBinContent(16,28.13892);
   houtFV_stack_4->SetBinContent(17,24.85585);
   houtFV_stack_4->SetBinContent(18,23.07806);
   houtFV_stack_4->SetBinContent(19,21.65852);
   houtFV_stack_4->SetBinContent(20,24.3459);
   houtFV_stack_4->SetBinContent(21,25.24896);
   houtFV_stack_4->SetBinContent(22,27.46331);
   houtFV_stack_4->SetBinContent(23,25.15299);
   houtFV_stack_4->SetBinContent(24,30.77694);
   houtFV_stack_4->SetBinError(1,2.605747);
   houtFV_stack_4->SetBinError(2,2.375913);
   houtFV_stack_4->SetBinError(3,2.590348);
   houtFV_stack_4->SetBinError(4,2.360586);
   houtFV_stack_4->SetBinError(5,2.27413);
   houtFV_stack_4->SetBinError(6,2.287597);
   houtFV_stack_4->SetBinError(7,2.32825);
   houtFV_stack_4->SetBinError(8,2.291607);
   houtFV_stack_4->SetBinError(9,2.411374);
   houtFV_stack_4->SetBinError(10,2.616852);
   houtFV_stack_4->SetBinError(11,2.786192);
   houtFV_stack_4->SetBinError(12,2.553763);
   houtFV_stack_4->SetBinError(13,2.381011);
   houtFV_stack_4->SetBinError(14,2.39784);
   houtFV_stack_4->SetBinError(15,2.636271);
   houtFV_stack_4->SetBinError(16,2.645083);
   houtFV_stack_4->SetBinError(17,2.513212);
   houtFV_stack_4->SetBinError(18,2.464355);
   houtFV_stack_4->SetBinError(19,2.302346);
   houtFV_stack_4->SetBinError(20,2.432013);
   houtFV_stack_4->SetBinError(21,2.49827);
   houtFV_stack_4->SetBinError(22,2.596876);
   houtFV_stack_4->SetBinError(23,2.52348);
   houtFV_stack_4->SetBinError(24,3.014566);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.170733);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.598115);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.184024);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.336142);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.409136);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.055478);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.333734);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.320196);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.155787);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.283918);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.56972);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.75257);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.866915);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.824228);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.179279);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.253274);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.336142);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.012959);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.520072);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.32402);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.212252);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.033483);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.883604);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.489596);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6420088);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5809014);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7059188);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6762573);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7869569);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6410986);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6235567);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6520343);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6572862);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7804178);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.618805);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6826544);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7766269);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7144588);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5101495);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6886617);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6762573);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5925102);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7974381);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6752494);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6481429);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7671725);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.815655);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7306636);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.198708);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8222219);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5581679);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9628903);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7259042);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.793658);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3549294);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2756104);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2198343);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.405755);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3442606);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2977841);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,71.97466);
   hNCpi0inFVres_stack_7->SetBinContent(2,76.22362);
   hNCpi0inFVres_stack_7->SetBinContent(3,71.67439);
   hNCpi0inFVres_stack_7->SetBinContent(4,69.12917);
   hNCpi0inFVres_stack_7->SetBinContent(5,63.30917);
   hNCpi0inFVres_stack_7->SetBinContent(6,68.15863);
   hNCpi0inFVres_stack_7->SetBinContent(7,69.88144);
   hNCpi0inFVres_stack_7->SetBinContent(8,66.81696);
   hNCpi0inFVres_stack_7->SetBinContent(9,68.78325);
   hNCpi0inFVres_stack_7->SetBinContent(10,62.07077);
   hNCpi0inFVres_stack_7->SetBinContent(11,72.37009);
   hNCpi0inFVres_stack_7->SetBinContent(12,70.98486);
   hNCpi0inFVres_stack_7->SetBinContent(13,73.88265);
   hNCpi0inFVres_stack_7->SetBinContent(14,73.98479);
   hNCpi0inFVres_stack_7->SetBinContent(15,72.9269);
   hNCpi0inFVres_stack_7->SetBinContent(16,66.68013);
   hNCpi0inFVres_stack_7->SetBinContent(17,73.33163);
   hNCpi0inFVres_stack_7->SetBinContent(18,68.07138);
   hNCpi0inFVres_stack_7->SetBinContent(19,70.575);
   hNCpi0inFVres_stack_7->SetBinContent(20,69.69524);
   hNCpi0inFVres_stack_7->SetBinContent(21,67.41281);
   hNCpi0inFVres_stack_7->SetBinContent(22,75.38427);
   hNCpi0inFVres_stack_7->SetBinContent(23,79.0744);
   hNCpi0inFVres_stack_7->SetBinContent(24,71.56161);
   hNCpi0inFVres_stack_7->SetBinError(1,2.777978);
   hNCpi0inFVres_stack_7->SetBinError(2,2.882557);
   hNCpi0inFVres_stack_7->SetBinError(3,2.752031);
   hNCpi0inFVres_stack_7->SetBinError(4,2.696238);
   hNCpi0inFVres_stack_7->SetBinError(5,2.573473);
   hNCpi0inFVres_stack_7->SetBinError(6,2.668524);
   hNCpi0inFVres_stack_7->SetBinError(7,2.778399);
   hNCpi0inFVres_stack_7->SetBinError(8,2.677758);
   hNCpi0inFVres_stack_7->SetBinError(9,2.730485);
   hNCpi0inFVres_stack_7->SetBinError(10,2.54818);
   hNCpi0inFVres_stack_7->SetBinError(11,2.820537);
   hNCpi0inFVres_stack_7->SetBinError(12,2.731162);
   hNCpi0inFVres_stack_7->SetBinError(13,2.818328);
   hNCpi0inFVres_stack_7->SetBinError(14,2.809048);
   hNCpi0inFVres_stack_7->SetBinError(15,2.782388);
   hNCpi0inFVres_stack_7->SetBinError(16,2.708253);
   hNCpi0inFVres_stack_7->SetBinError(17,2.828873);
   hNCpi0inFVres_stack_7->SetBinError(18,2.743149);
   hNCpi0inFVres_stack_7->SetBinError(19,2.749767);
   hNCpi0inFVres_stack_7->SetBinError(20,2.685244);
   hNCpi0inFVres_stack_7->SetBinError(21,2.642791);
   hNCpi0inFVres_stack_7->SetBinError(22,2.83089);
   hNCpi0inFVres_stack_7->SetBinError(23,2.923419);
   hNCpi0inFVres_stack_7->SetBinError(24,2.721799);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,13.67836);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.52111);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.31268);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.47127);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.72287);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.00434);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.79678);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.97248);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.87466);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.08084);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.3311);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.87772);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.12734);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.84393);
   hNCpi0inFVdis_stack_8->SetBinContent(15,16.43798);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.8838);
   hNCpi0inFVdis_stack_8->SetBinContent(17,14.76447);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.49543);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.67163);
   hNCpi0inFVdis_stack_8->SetBinContent(20,13.50846);
   hNCpi0inFVdis_stack_8->SetBinContent(21,16.49528);
   hNCpi0inFVdis_stack_8->SetBinContent(22,15.9778);
   hNCpi0inFVdis_stack_8->SetBinContent(23,15.51082);
   hNCpi0inFVdis_stack_8->SetBinContent(24,12.93617);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.206719);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.33027);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.307969);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.170619);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.214756);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.058494);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.30397);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.273339);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.230303);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.17992);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.174713);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.045794);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.252951);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.178792);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.328342);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.354216);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.235721);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.153088);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.121865);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.117665);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.331098);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.308489);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.356299);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.113536);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,33.69836);
   hCCpi0inFV_stack_10->SetBinContent(2,26.78399);
   hCCpi0inFV_stack_10->SetBinContent(3,33.91053);
   hCCpi0inFV_stack_10->SetBinContent(4,24.96892);
   hCCpi0inFV_stack_10->SetBinContent(5,22.58045);
   hCCpi0inFV_stack_10->SetBinContent(6,25.51785);
   hCCpi0inFV_stack_10->SetBinContent(7,26.8545);
   hCCpi0inFV_stack_10->SetBinContent(8,25.19662);
   hCCpi0inFV_stack_10->SetBinContent(9,28.39697);
   hCCpi0inFV_stack_10->SetBinContent(10,33.40308);
   hCCpi0inFV_stack_10->SetBinContent(11,32.02087);
   hCCpi0inFV_stack_10->SetBinContent(12,38.05533);
   hCCpi0inFV_stack_10->SetBinContent(13,33.82539);
   hCCpi0inFV_stack_10->SetBinContent(14,28.74312);
   hCCpi0inFV_stack_10->SetBinContent(15,38.03015);
   hCCpi0inFV_stack_10->SetBinContent(16,27.5853);
   hCCpi0inFV_stack_10->SetBinContent(17,31.57521);
   hCCpi0inFV_stack_10->SetBinContent(18,29.70842);
   hCCpi0inFV_stack_10->SetBinContent(19,26.26284);
   hCCpi0inFV_stack_10->SetBinContent(20,22.73179);
   hCCpi0inFV_stack_10->SetBinContent(21,36.55711);
   hCCpi0inFV_stack_10->SetBinContent(22,30.42556);
   hCCpi0inFV_stack_10->SetBinContent(23,37.93375);
   hCCpi0inFV_stack_10->SetBinContent(24,33.19701);
   hCCpi0inFV_stack_10->SetBinError(1,2.950155);
   hCCpi0inFV_stack_10->SetBinError(2,2.559833);
   hCCpi0inFV_stack_10->SetBinError(3,2.886518);
   hCCpi0inFV_stack_10->SetBinError(4,2.486282);
   hCCpi0inFV_stack_10->SetBinError(5,2.316886);
   hCCpi0inFV_stack_10->SetBinError(6,2.480784);
   hCCpi0inFV_stack_10->SetBinError(7,2.644395);
   hCCpi0inFV_stack_10->SetBinError(8,2.536134);
   hCCpi0inFV_stack_10->SetBinError(9,2.625059);
   hCCpi0inFV_stack_10->SetBinError(10,2.96703);
   hCCpi0inFV_stack_10->SetBinError(11,2.910102);
   hCCpi0inFV_stack_10->SetBinError(12,3.078524);
   hCCpi0inFV_stack_10->SetBinError(13,2.898831);
   hCCpi0inFV_stack_10->SetBinError(14,2.696173);
   hCCpi0inFV_stack_10->SetBinError(15,3.086447);
   hCCpi0inFV_stack_10->SetBinError(16,2.582622);
   hCCpi0inFV_stack_10->SetBinError(17,2.784491);
   hCCpi0inFV_stack_10->SetBinError(18,2.755376);
   hCCpi0inFV_stack_10->SetBinError(19,2.546559);
   hCCpi0inFV_stack_10->SetBinError(20,2.430464);
   hCCpi0inFV_stack_10->SetBinError(21,3.06438);
   hCCpi0inFV_stack_10->SetBinError(22,2.810706);
   hCCpi0inFV_stack_10->SetBinError(23,3.074087);
   hCCpi0inFV_stack_10->SetBinError(24,2.846104);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.38173);
   hNCinFV_stack_11->SetBinContent(2,12.94254);
   hNCinFV_stack_11->SetBinContent(3,15.34623);
   hNCinFV_stack_11->SetBinContent(4,14.46301);
   hNCinFV_stack_11->SetBinContent(5,7.517584);
   hNCinFV_stack_11->SetBinContent(6,13.90379);
   hNCinFV_stack_11->SetBinContent(7,12.32051);
   hNCinFV_stack_11->SetBinContent(8,13.53776);
   hNCinFV_stack_11->SetBinContent(9,11.3274);
   hNCinFV_stack_11->SetBinContent(10,12.59621);
   hNCinFV_stack_11->SetBinContent(11,14.50781);
   hNCinFV_stack_11->SetBinContent(12,8.889521);
   hNCinFV_stack_11->SetBinContent(13,12.83941);
   hNCinFV_stack_11->SetBinContent(14,12.33512);
   hNCinFV_stack_11->SetBinContent(15,17.37777);
   hNCinFV_stack_11->SetBinContent(16,11.33693);
   hNCinFV_stack_11->SetBinContent(17,16.47557);
   hNCinFV_stack_11->SetBinContent(18,16.27209);
   hNCinFV_stack_11->SetBinContent(19,9.481357);
   hNCinFV_stack_11->SetBinContent(20,16.46036);
   hNCinFV_stack_11->SetBinContent(21,11.53365);
   hNCinFV_stack_11->SetBinContent(22,11.24334);
   hNCinFV_stack_11->SetBinContent(23,13.04951);
   hNCinFV_stack_11->SetBinContent(24,15.59343);
   hNCinFV_stack_11->SetBinError(1,1.66419);
   hNCinFV_stack_11->SetBinError(2,1.808986);
   hNCinFV_stack_11->SetBinError(3,1.922107);
   hNCinFV_stack_11->SetBinError(4,1.902718);
   hNCinFV_stack_11->SetBinError(5,1.401386);
   hNCinFV_stack_11->SetBinError(6,1.927708);
   hNCinFV_stack_11->SetBinError(7,1.733393);
   hNCinFV_stack_11->SetBinError(8,1.841333);
   hNCinFV_stack_11->SetBinError(9,1.73373);
   hNCinFV_stack_11->SetBinError(10,1.831035);
   hNCinFV_stack_11->SetBinError(11,1.891744);
   hNCinFV_stack_11->SetBinError(12,1.494247);
   hNCinFV_stack_11->SetBinError(13,1.830412);
   hNCinFV_stack_11->SetBinError(14,1.676897);
   hNCinFV_stack_11->SetBinError(15,2.140905);
   hNCinFV_stack_11->SetBinError(16,1.676653);
   hNCinFV_stack_11->SetBinError(17,2.04066);
   hNCinFV_stack_11->SetBinError(18,2.030504);
   hNCinFV_stack_11->SetBinError(19,1.532817);
   hNCinFV_stack_11->SetBinError(20,2.039199);
   hNCinFV_stack_11->SetBinError(21,1.688153);
   hNCinFV_stack_11->SetBinError(22,1.64149);
   hNCinFV_stack_11->SetBinError(23,1.79971);
   hNCinFV_stack_11->SetBinError(24,1.972858);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,16.41611);
   hnumuCCinFV_stack_12->SetBinContent(2,15.46948);
   hnumuCCinFV_stack_12->SetBinContent(3,12.08832);
   hnumuCCinFV_stack_12->SetBinContent(4,12.19681);
   hnumuCCinFV_stack_12->SetBinContent(5,11.63823);
   hnumuCCinFV_stack_12->SetBinContent(6,11.14851);
   hnumuCCinFV_stack_12->SetBinContent(7,12.4733);
   hnumuCCinFV_stack_12->SetBinContent(8,12.86292);
   hnumuCCinFV_stack_12->SetBinContent(9,10.56984);
   hnumuCCinFV_stack_12->SetBinContent(10,14.56841);
   hnumuCCinFV_stack_12->SetBinContent(11,14.32676);
   hnumuCCinFV_stack_12->SetBinContent(12,18.92051);
   hnumuCCinFV_stack_12->SetBinContent(13,17.75821);
   hnumuCCinFV_stack_12->SetBinContent(14,18.79397);
   hnumuCCinFV_stack_12->SetBinContent(15,13.61948);
   hnumuCCinFV_stack_12->SetBinContent(16,14.7817);
   hnumuCCinFV_stack_12->SetBinContent(17,13.40162);
   hnumuCCinFV_stack_12->SetBinContent(18,13.58431);
   hnumuCCinFV_stack_12->SetBinContent(19,12.16219);
   hnumuCCinFV_stack_12->SetBinContent(20,11.70498);
   hnumuCCinFV_stack_12->SetBinContent(21,18.80769);
   hnumuCCinFV_stack_12->SetBinContent(22,12.6768);
   hnumuCCinFV_stack_12->SetBinContent(23,17.32485);
   hnumuCCinFV_stack_12->SetBinContent(24,18.45723);
   hnumuCCinFV_stack_12->SetBinError(1,2.293415);
   hnumuCCinFV_stack_12->SetBinError(2,2.043466);
   hnumuCCinFV_stack_12->SetBinError(3,1.715286);
   hnumuCCinFV_stack_12->SetBinError(4,1.878516);
   hnumuCCinFV_stack_12->SetBinError(5,2.028448);
   hnumuCCinFV_stack_12->SetBinError(6,1.967144);
   hnumuCCinFV_stack_12->SetBinError(7,1.839596);
   hnumuCCinFV_stack_12->SetBinError(8,1.90694);
   hnumuCCinFV_stack_12->SetBinError(9,1.872511);
   hnumuCCinFV_stack_12->SetBinError(10,2.115007);
   hnumuCCinFV_stack_12->SetBinError(11,1.941572);
   hnumuCCinFV_stack_12->SetBinError(12,2.664101);
   hnumuCCinFV_stack_12->SetBinError(13,2.207994);
   hnumuCCinFV_stack_12->SetBinError(14,2.345256);
   hnumuCCinFV_stack_12->SetBinError(15,1.978634);
   hnumuCCinFV_stack_12->SetBinError(16,2.41262);
   hnumuCCinFV_stack_12->SetBinError(17,2.004532);
   hnumuCCinFV_stack_12->SetBinError(18,2.468528);
   hnumuCCinFV_stack_12->SetBinError(19,2.754428);
   hnumuCCinFV_stack_12->SetBinError(20,1.793332);
   hnumuCCinFV_stack_12->SetBinError(21,3.337854);
   hnumuCCinFV_stack_12->SetBinError(22,1.970853);
   hnumuCCinFV_stack_12->SetBinError(23,2.189037);
   hnumuCCinFV_stack_12->SetBinError(24,2.447383);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.902183);
   hnueCCinFV_stack_13->SetBinContent(2,1.370896);
   hnueCCinFV_stack_13->SetBinContent(3,0.218026);
   hnueCCinFV_stack_13->SetBinContent(4,2.158952);
   hnueCCinFV_stack_13->SetBinContent(5,1.282706);
   hnueCCinFV_stack_13->SetBinContent(6,2.081831);
   hnueCCinFV_stack_13->SetBinContent(7,1.215128);
   hnueCCinFV_stack_13->SetBinContent(8,0.6876913);
   hnueCCinFV_stack_13->SetBinContent(9,2.439669);
   hnueCCinFV_stack_13->SetBinContent(10,1.401863);
   hnueCCinFV_stack_13->SetBinContent(11,0.6293085);
   hnueCCinFV_stack_13->SetBinContent(12,1.74239);
   hnueCCinFV_stack_13->SetBinContent(13,2.210377);
   hnueCCinFV_stack_13->SetBinContent(15,1.111822);
   hnueCCinFV_stack_13->SetBinContent(16,2.025963);
   hnueCCinFV_stack_13->SetBinContent(17,3.874644);
   hnueCCinFV_stack_13->SetBinContent(18,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(19,2.793024);
   hnueCCinFV_stack_13->SetBinContent(20,2.331672);
   hnueCCinFV_stack_13->SetBinContent(21,1.197516);
   hnueCCinFV_stack_13->SetBinContent(22,0.2585939);
   hnueCCinFV_stack_13->SetBinContent(23,2.478162);
   hnueCCinFV_stack_13->SetBinContent(24,1.297694);
   hnueCCinFV_stack_13->SetBinError(1,1.573987);
   hnueCCinFV_stack_13->SetBinError(2,0.642024);
   hnueCCinFV_stack_13->SetBinError(3,0.2180157);
   hnueCCinFV_stack_13->SetBinError(4,1.216229);
   hnueCCinFV_stack_13->SetBinError(5,0.6598412);
   hnueCCinFV_stack_13->SetBinError(6,0.7909079);
   hnueCCinFV_stack_13->SetBinError(7,0.5547538);
   hnueCCinFV_stack_13->SetBinError(8,0.4006146);
   hnueCCinFV_stack_13->SetBinError(9,1.099958);
   hnueCCinFV_stack_13->SetBinError(10,0.8157702);
   hnueCCinFV_stack_13->SetBinError(11,0.4752197);
   hnueCCinFV_stack_13->SetBinError(12,0.7619955);
   hnueCCinFV_stack_13->SetBinError(13,0.9653382);
   hnueCCinFV_stack_13->SetBinError(15,0.5107116);
   hnueCCinFV_stack_13->SetBinError(16,0.7990362);
   hnueCCinFV_stack_13->SetBinError(17,1.541507);
   hnueCCinFV_stack_13->SetBinError(18,0.4937343);
   hnueCCinFV_stack_13->SetBinError(19,1.362872);
   hnueCCinFV_stack_13->SetBinError(20,0.9189718);
   hnueCCinFV_stack_13->SetBinError(21,0.5484216);
   hnueCCinFV_stack_13->SetBinError(22,0.253752);
   hnueCCinFV_stack_13->SetBinError(23,0.8962802);
   hnueCCinFV_stack_13->SetBinError(24,0.5382688);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__11->SetBinContent(1,201.2473);
   hmcerror__11->SetBinContent(2,201.1545);
   hmcerror__11->SetBinContent(3,204.9284);
   hmcerror__11->SetBinContent(4,199.1133);
   hmcerror__11->SetBinContent(5,180.2916);
   hmcerror__11->SetBinContent(6,197.9514);
   hmcerror__11->SetBinContent(7,213.3601);
   hmcerror__11->SetBinContent(8,193.3683);
   hmcerror__11->SetBinContent(9,193.9782);
   hmcerror__11->SetBinContent(10,190.4088);
   hmcerror__11->SetBinContent(11,202.5809);
   hmcerror__11->SetBinContent(12,196.4984);
   hmcerror__11->SetBinContent(13,201.4622);
   hmcerror__11->SetBinContent(14,199.9348);
   hmcerror__11->SetBinContent(15,213.3382);
   hmcerror__11->SetBinContent(16,195.7346);
   hmcerror__11->SetBinContent(17,217.0005);
   hmcerror__11->SetBinContent(18,199.2561);
   hmcerror__11->SetBinContent(19,189.3928);
   hmcerror__11->SetBinContent(20,198.0923);
   hmcerror__11->SetBinContent(21,206.6126);
   hmcerror__11->SetBinContent(22,200.1208);
   hmcerror__11->SetBinContent(23,225.7546);
   hmcerror__11->SetBinContent(24,215.6824);
   hmcerror__11->SetBinError(1,51.11521);
   hmcerror__11->SetBinError(2,53.22365);
   hmcerror__11->SetBinError(3,52.91964);
   hmcerror__11->SetBinError(4,53.56958);
   hmcerror__11->SetBinError(5,42.40443);
   hmcerror__11->SetBinError(6,48.3737);
   hmcerror__11->SetBinError(7,49.20233);
   hmcerror__11->SetBinError(8,52.61693);
   hmcerror__11->SetBinError(9,48.18047);
   hmcerror__11->SetBinError(10,49.10506);
   hmcerror__11->SetBinError(11,57.39238);
   hmcerror__11->SetBinError(12,49.29925);
   hmcerror__11->SetBinError(13,52.26075);
   hmcerror__11->SetBinError(14,50.3784);
   hmcerror__11->SetBinError(15,56.16923);
   hmcerror__11->SetBinError(16,49.6918);
   hmcerror__11->SetBinError(17,54.30242);
   hmcerror__11->SetBinError(18,46.99061);
   hmcerror__11->SetBinError(19,47.56336);
   hmcerror__11->SetBinError(20,46.84392);
   hmcerror__11->SetBinError(21,51.47156);
   hmcerror__11->SetBinError(22,54.56731);
   hmcerror__11->SetBinError(23,63.85428);
   hmcerror__11->SetBinError(24,58.7864);
   hmcerror__11->SetBinError(25,0.3895343);
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
   
   Double_t _fx3013[24] = {
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
   Double_t _fy3013[24] = {
   209,
   171,
   182,
   178,
   183,
   166,
   196,
   203,
   177,
   198,
   173,
   208,
   223,
   200,
   177,
   193,
   202,
   180,
   191,
   183,
   181,
   233,
   200,
   188};
   Double_t _felx3013[24] = {
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
   Double_t _fely3013[24] = {
   14.45683,
   13.0767,
   13.49074,
   13.34166,
   13.52775,
   12.8841,
   14,
   14.24781,
   13.30413,
   14.07125,
   13.15295,
   14.42221,
   14.93318,
   14.14214,
   13.30413,
   13.89244,
   14.21267,
   13.41641,
   13.82027,
   13.52775,
   13.45362,
   15.26434,
   14.14214,
   13.71131};
   Double_t _fehx3013[24] = {
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
   Double_t _fehy3013[24] = {
   14.45683,
   13.0767,
   13.49074,
   13.34166,
   13.52775,
   12.8841,
   14,
   14.24781,
   13.30413,
   14.07125,
   13.15295,
   14.42221,
   14.93318,
   14.14214,
   13.30413,
   13.89244,
   14.21267,
   13.41641,
   13.82027,
   13.52775,
   13.45362,
   15.26434,
   14.14214,
   13.71131};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(143.6011);
   Graph_Graph3013->SetMaximum(257.7792);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.6/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4595.0","lp");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 587.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1694.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all");
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
   
   Double_t _fx3014[24] = {
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
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
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
   Double_t _fely3014[24] = {
   0.253992,
   0.2645909,
   0.2582348,
   0.2690406,
   0.2351991,
   0.2443716,
   0.230607,
   0.2721074,
   0.2483809,
   0.2578929,
   0.283306,
   0.2508888,
   0.2594072,
   0.2519741,
   0.2632873,
   0.2538733,
   0.2502409,
   0.2358302,
   0.2511361,
   0.2364752,
   0.2491211,
   0.2726718,
   0.2828482,
   0.2725601};
   Double_t _fehx3014[24] = {
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
   Double_t _fehy3014[24] = {
   0.253992,
   0.2645909,
   0.2582348,
   0.2690406,
   0.2351991,
   0.2443716,
   0.230607,
   0.2721074,
   0.2483809,
   0.2578929,
   0.283306,
   0.2508888,
   0.2594072,
   0.2519741,
   0.2632873,
   0.2538733,
   0.2502409,
   0.2358302,
   0.2511361,
   0.2364752,
   0.2491211,
   0.2726718,
   0.2828482,
   0.2725601};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
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
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3015[24] = {
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
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
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
   Double_t _fely3015[24] = {
   0.2091907,
   0.2125564,
   0.2070174,
   0.2068591,
   0.198109,
   0.2022392,
   0.1958479,
   0.2055286,
   0.2043813,
   0.2109864,
   0.2101484,
   0.2140888,
   0.2143828,
   0.2111523,
   0.2166539,
   0.2101319,
   0.2019285,
   0.204077,
   0.2099956,
   0.2066427,
   0.2037294,
   0.2179337,
   0.2080717,
   0.1970427};
   Double_t _fehx3015[24] = {
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
   Double_t _fehy3015[24] = {
   0.2091907,
   0.2125564,
   0.2070174,
   0.2068591,
   0.198109,
   0.2022392,
   0.1958479,
   0.2055286,
   0.2043813,
   0.2109864,
   0.2101484,
   0.2140888,
   0.2143828,
   0.2111523,
   0.2166539,
   0.2101319,
   0.2019285,
   0.204077,
   0.2099956,
   0.2066427,
   0.2037294,
   0.2179337,
   0.2080717,
   0.1970427};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
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
   
   Double_t _fx3016[24] = {
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
   Double_t _fy3016[24] = {
   1.038523,
   0.8500927,
   0.8881152,
   0.8939633,
   1.015022,
   0.8385897,
   0.9186347,
   1.04981,
   0.9124737,
   1.039868,
   0.8539798,
   1.058533,
   1.106907,
   1.000326,
   0.8296687,
   0.9860288,
   0.9308733,
   0.9033601,
   1.008486,
   0.9238116,
   0.8760355,
   1.164297,
   0.8859177,
   0.8716521};
   Double_t _felx3016[24] = {
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
   Double_t _fely3016[24] = {
   0.07183614,
   0.06500822,
   0.06583148,
   0.06700538,
   0.0750326,
   0.06508718,
   0.06561676,
   0.07368224,
   0.06858572,
   0.07390021,
   0.06492688,
   0.07339604,
   0.07412398,
   0.07073374,
   0.06236172,
   0.07097591,
   0.06549602,
   0.06733249,
   0.07297151,
   0.06829012,
   0.0651152,
   0.07627562,
   0.06264384,
   0.06357177};
   Double_t _fehx3016[24] = {
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
   Double_t _fehy3016[24] = {
   0.07183614,
   0.06500822,
   0.06583148,
   0.06700538,
   0.0750326,
   0.06508718,
   0.06561676,
   0.07368224,
   0.06858572,
   0.07390021,
   0.06492688,
   0.07339604,
   0.07412398,
   0.07073374,
   0.06236172,
   0.07097591,
   0.06549602,
   0.06733249,
   0.07297151,
   0.06829012,
   0.0651152,
   0.07627562,
   0.06264384,
   0.06357177};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.7199804);
   Graph_Graph3016->SetMaximum(1.287899);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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

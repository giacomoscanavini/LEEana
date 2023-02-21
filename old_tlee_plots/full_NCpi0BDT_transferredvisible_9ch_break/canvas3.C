#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Jun  5 00:24:17 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
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
   pad1->Range(-230.7692,-4.12,1692.308,455.5853);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hmc__7->SetBinContent(2,2.763628);
   hmc__7->SetBinContent(3,74.97591);
   hmc__7->SetBinContent(4,173.895);
   hmc__7->SetBinContent(5,195.0391);
   hmc__7->SetBinContent(6,192.126);
   hmc__7->SetBinContent(7,175.5764);
   hmc__7->SetBinContent(8,165.2341);
   hmc__7->SetBinContent(9,144.8793);
   hmc__7->SetBinContent(10,101.4375);
   hmc__7->SetBinContent(11,84.57307);
   hmc__7->SetBinContent(12,70.91467);
   hmc__7->SetBinContent(13,57.11743);
   hmc__7->SetBinContent(14,42.47889);
   hmc__7->SetBinContent(15,33.09983);
   hmc__7->SetBinContent(16,18.43814);
   hmc__7->SetBinContent(17,19.118);
   hmc__7->SetBinContent(18,12.08326);
   hmc__7->SetBinContent(19,13.73061);
   hmc__7->SetBinContent(20,7.830017);
   hmc__7->SetBinContent(21,57.79863);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,2.082029);
   hmc__7->SetBinError(3,14.22303);
   hmc__7->SetBinError(4,29.04713);
   hmc__7->SetBinError(5,35.51229);
   hmc__7->SetBinError(6,35.58639);
   hmc__7->SetBinError(7,33.93363);
   hmc__7->SetBinError(8,33.19041);
   hmc__7->SetBinError(9,30.07918);
   hmc__7->SetBinError(10,22.67953);
   hmc__7->SetBinError(11,21.65789);
   hmc__7->SetBinError(12,19.6163);
   hmc__7->SetBinError(13,15.32304);
   hmc__7->SetBinError(14,15.2827);
   hmc__7->SetBinError(15,13.60156);
   hmc__7->SetBinError(16,6.846628);
   hmc__7->SetBinError(17,7.949339);
   hmc__7->SetBinError(18,8.099278);
   hmc__7->SetBinError(19,8.542925);
   hmc__7->SetBinError(20,5.5065);
   hmc__7->SetBinError(21,15.92925);
   hmc__7->SetMinimum(-4.12);
   hmc__7->SetMaximum(432.6);
   hmc__7->SetEntries(1611.219);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,1500);
   hs3_stack_3->SetMinimum(-8.530416e-09);
   hs3_stack_3->SetMaximum(204.7911);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(3,3.513422);
   hbadmatch_stack_1->SetBinContent(4,4.69355);
   hbadmatch_stack_1->SetBinContent(5,6.201286);
   hbadmatch_stack_1->SetBinContent(6,6.840672);
   hbadmatch_stack_1->SetBinContent(7,6.108971);
   hbadmatch_stack_1->SetBinContent(8,5.518262);
   hbadmatch_stack_1->SetBinContent(9,4.500192);
   hbadmatch_stack_1->SetBinContent(10,3.66724);
   hbadmatch_stack_1->SetBinContent(11,3.50441);
   hbadmatch_stack_1->SetBinContent(12,2.040478);
   hbadmatch_stack_1->SetBinContent(13,2.105544);
   hbadmatch_stack_1->SetBinContent(14,2.145881);
   hbadmatch_stack_1->SetBinContent(15,1.462145);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,0.6360607);
   hbadmatch_stack_1->SetBinContent(18,0.5352025);
   hbadmatch_stack_1->SetBinContent(19,0.9042579);
   hbadmatch_stack_1->SetBinContent(21,1.687695);
   hbadmatch_stack_1->SetBinError(3,1.044705);
   hbadmatch_stack_1->SetBinError(4,1.469264);
   hbadmatch_stack_1->SetBinError(5,1.336423);
   hbadmatch_stack_1->SetBinError(6,1.343979);
   hbadmatch_stack_1->SetBinError(7,1.393459);
   hbadmatch_stack_1->SetBinError(8,1.221085);
   hbadmatch_stack_1->SetBinError(9,1.110103);
   hbadmatch_stack_1->SetBinError(10,1.042344);
   hbadmatch_stack_1->SetBinError(11,0.9302888);
   hbadmatch_stack_1->SetBinError(12,0.7051353);
   hbadmatch_stack_1->SetBinError(13,0.6797106);
   hbadmatch_stack_1->SetBinError(14,0.785499);
   hbadmatch_stack_1->SetBinError(15,0.6198731);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.4822316);
   hbadmatch_stack_1->SetBinError(18,0.3921167);
   hbadmatch_stack_1->SetBinError(19,0.5306355);
   hbadmatch_stack_1->SetBinError(21,0.6594893);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1462;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hext_stack_2->SetBinContent(2,0.7309963);
   hext_stack_2->SetBinContent(3,25.99462);
   hext_stack_2->SetBinContent(4,50.08708);
   hext_stack_2->SetBinContent(5,42.46273);
   hext_stack_2->SetBinContent(6,31.75434);
   hext_stack_2->SetBinContent(7,22.21397);
   hext_stack_2->SetBinContent(8,17.05669);
   hext_stack_2->SetBinContent(9,20.22728);
   hext_stack_2->SetBinContent(10,12.84947);
   hext_stack_2->SetBinContent(11,13.34546);
   hext_stack_2->SetBinContent(12,11.04431);
   hext_stack_2->SetBinContent(13,5.344809);
   hext_stack_2->SetBinContent(14,5.027592);
   hext_stack_2->SetBinContent(15,2.599588);
   hext_stack_2->SetBinContent(16,3.323403);
   hext_stack_2->SetBinContent(17,3.408376);
   hext_stack_2->SetBinContent(18,1.868591);
   hext_stack_2->SetBinContent(19,2.587998);
   hext_stack_2->SetBinContent(21,15.65813);
   hext_stack_2->SetBinError(2,0.5201503);
   hext_stack_2->SetBinError(3,3.638476);
   hext_stack_2->SetBinError(4,4.881664);
   hext_stack_2->SetBinError(5,4.376289);
   hext_stack_2->SetBinError(6,3.838789);
   hext_stack_2->SetBinError(7,3.015428);
   hext_stack_2->SetBinError(8,2.840739);
   hext_stack_2->SetBinError(9,3.05488);
   hext_stack_2->SetBinError(10,2.482788);
   hext_stack_2->SetBinError(11,2.487659);
   hext_stack_2->SetBinError(12,2.405238);
   hext_stack_2->SetBinError(13,1.530177);
   hext_stack_2->SetBinError(14,1.426537);
   hext_stack_2->SetBinError(15,0.9884288);
   hext_stack_2->SetBinError(16,1.20364);
   hext_stack_2->SetBinError(17,1.082827);
   hext_stack_2->SetBinError(18,0.840497);
   hext_stack_2->SetBinError(19,1.021308);
   hext_stack_2->SetBinError(21,2.802865);
   hext_stack_2->SetEntries(672);

   ci = 1463;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hdirt_stack_3->SetBinContent(3,3.604763);
   hdirt_stack_3->SetBinContent(4,5.412043);
   hdirt_stack_3->SetBinContent(5,3.83445);
   hdirt_stack_3->SetBinContent(6,1.881424);
   hdirt_stack_3->SetBinContent(7,1.822568);
   hdirt_stack_3->SetBinContent(8,2.722192);
   hdirt_stack_3->SetBinContent(9,2.162252);
   hdirt_stack_3->SetBinContent(10,1.219358);
   hdirt_stack_3->SetBinContent(11,0.165479);
   hdirt_stack_3->SetBinContent(12,0.2761429);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.3895662);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinError(3,0.9670973);
   hdirt_stack_3->SetBinError(4,1.156536);
   hdirt_stack_3->SetBinError(5,1.105192);
   hdirt_stack_3->SetBinError(6,0.6935789);
   hdirt_stack_3->SetBinError(7,0.6534125);
   hdirt_stack_3->SetBinError(8,1.169812);
   hdirt_stack_3->SetBinError(9,0.8463251);
   hdirt_stack_3->SetBinError(10,0.6416845);
   hdirt_stack_3->SetBinError(11,0.165479);
   hdirt_stack_3->SetBinError(12,0.1952625);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.3895662);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetEntries(101);

   ci = 1464;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,1.515398);
   houtFV_stack_4->SetBinContent(3,19.30023);
   houtFV_stack_4->SetBinContent(4,42.94731);
   houtFV_stack_4->SetBinContent(5,48.23513);
   houtFV_stack_4->SetBinContent(6,40.11306);
   houtFV_stack_4->SetBinContent(7,37.46051);
   houtFV_stack_4->SetBinContent(8,29.79851);
   houtFV_stack_4->SetBinContent(9,25.96299);
   houtFV_stack_4->SetBinContent(10,20.99438);
   houtFV_stack_4->SetBinContent(11,12.91404);
   houtFV_stack_4->SetBinContent(12,11.64007);
   houtFV_stack_4->SetBinContent(13,8.345863);
   houtFV_stack_4->SetBinContent(14,7.390255);
   houtFV_stack_4->SetBinContent(15,5.711798);
   houtFV_stack_4->SetBinContent(16,2.367829);
   houtFV_stack_4->SetBinContent(17,2.352761);
   houtFV_stack_4->SetBinContent(18,2.87949);
   houtFV_stack_4->SetBinContent(19,1.367587);
   houtFV_stack_4->SetBinContent(20,0.8770706);
   houtFV_stack_4->SetBinContent(21,2.834081);
   houtFV_stack_4->SetBinError(2,0.588146);
   houtFV_stack_4->SetBinError(3,2.211806);
   houtFV_stack_4->SetBinError(4,3.297825);
   houtFV_stack_4->SetBinError(5,3.739785);
   houtFV_stack_4->SetBinError(6,3.266078);
   houtFV_stack_4->SetBinError(7,3.023617);
   houtFV_stack_4->SetBinError(8,2.731118);
   houtFV_stack_4->SetBinError(9,2.564726);
   houtFV_stack_4->SetBinError(10,2.294183);
   houtFV_stack_4->SetBinError(11,1.766937);
   houtFV_stack_4->SetBinError(12,1.725582);
   houtFV_stack_4->SetBinError(13,1.528506);
   houtFV_stack_4->SetBinError(14,1.500743);
   houtFV_stack_4->SetBinError(15,1.254844);
   houtFV_stack_4->SetBinError(16,0.6836474);
   houtFV_stack_4->SetBinError(17,0.8617523);
   houtFV_stack_4->SetBinError(18,0.9000686);
   houtFV_stack_4->SetBinError(19,0.5734551);
   houtFV_stack_4->SetBinError(20,0.5197486);
   houtFV_stack_4->SetBinError(21,0.8081673);
   houtFV_stack_4->SetEntries(1382);

   ci = 1465;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.017858);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.882262);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.285816);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.174048);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.269622);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.408458);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9348222);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.767254);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3833116);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4661653);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4988347);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4614797);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3747542);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3972726);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3620771);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3060563);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1466;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4180041);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2406819);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1467;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.2231999);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.775507);
   hNCpi0inFVres_stack_7->SetBinContent(4,31.01048);
   hNCpi0inFVres_stack_7->SetBinContent(5,44.29741);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.20671);
   hNCpi0inFVres_stack_7->SetBinContent(7,39.5547);
   hNCpi0inFVres_stack_7->SetBinContent(8,32.1934);
   hNCpi0inFVres_stack_7->SetBinContent(9,26.75721);
   hNCpi0inFVres_stack_7->SetBinContent(10,17.23546);
   hNCpi0inFVres_stack_7->SetBinContent(11,11.82266);
   hNCpi0inFVres_stack_7->SetBinContent(12,10.26359);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.828132);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.531442);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.16467);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.7662537);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.046254);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.6833858);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.20054);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.515986);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.07773);
   hNCpi0inFVres_stack_7->SetBinError(2,0.07891307);
   hNCpi0inFVres_stack_7->SetBinError(3,1.049973);
   hNCpi0inFVres_stack_7->SetBinError(4,1.83388);
   hNCpi0inFVres_stack_7->SetBinError(5,2.188406);
   hNCpi0inFVres_stack_7->SetBinError(6,2.055218);
   hNCpi0inFVres_stack_7->SetBinError(7,1.999917);
   hNCpi0inFVres_stack_7->SetBinError(8,1.828974);
   hNCpi0inFVres_stack_7->SetBinError(9,1.699665);
   hNCpi0inFVres_stack_7->SetBinError(10,1.372582);
   hNCpi0inFVres_stack_7->SetBinError(11,1.059291);
   hNCpi0inFVres_stack_7->SetBinError(12,1.074975);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7646736);
   hNCpi0inFVres_stack_7->SetBinError(14,0.680274);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5878947);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2040719);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3185193);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2420254);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4441466);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2321763);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5054877);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1468;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.034548);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.623687);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.930522);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.76869);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.753487);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.575798);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.846158);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.964392);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.224542);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.613902);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.88143);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.803634);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.338872);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.380558);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5437177);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.311308);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.10239);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6980042);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.872548);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4572434);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5596295);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8679026);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9281116);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.926922);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9614797);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8743068);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.707708);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6739512);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6938236);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4450212);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6115826);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3411366);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3962917);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1480721);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4255744);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4105231);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3431282);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5333375);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1469;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1470;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);

   ci = 1471;
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
   hs3->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(3,2.622167);
   hCCpi0inFV_stack_11->SetBinContent(4,12.21723);
   hCCpi0inFV_stack_11->SetBinContent(5,15.17187);
   hCCpi0inFV_stack_11->SetBinContent(6,26.2326);
   hCCpi0inFV_stack_11->SetBinContent(7,36.6208);
   hCCpi0inFV_stack_11->SetBinContent(8,44.05742);
   hCCpi0inFV_stack_11->SetBinContent(9,36.7217);
   hCCpi0inFV_stack_11->SetBinContent(10,29.04476);
   hCCpi0inFV_stack_11->SetBinContent(11,27.75868);
   hCCpi0inFV_stack_11->SetBinContent(12,21.68883);
   hCCpi0inFV_stack_11->SetBinContent(13,24.55022);
   hCCpi0inFV_stack_11->SetBinContent(14,16.83482);
   hCCpi0inFV_stack_11->SetBinContent(15,12.05885);
   hCCpi0inFV_stack_11->SetBinContent(16,7.397495);
   hCCpi0inFV_stack_11->SetBinContent(17,7.276069);
   hCCpi0inFV_stack_11->SetBinContent(18,3.503701);
   hCCpi0inFV_stack_11->SetBinContent(19,5.410349);
   hCCpi0inFV_stack_11->SetBinContent(20,2.743872);
   hCCpi0inFV_stack_11->SetBinContent(21,23.36161);
   hCCpi0inFV_stack_11->SetBinError(3,0.9000965);
   hCCpi0inFV_stack_11->SetBinError(4,1.734581);
   hCCpi0inFV_stack_11->SetBinError(5,1.952818);
   hCCpi0inFV_stack_11->SetBinError(6,2.567717);
   hCCpi0inFV_stack_11->SetBinError(7,3.059843);
   hCCpi0inFV_stack_11->SetBinError(8,3.347402);
   hCCpi0inFV_stack_11->SetBinError(9,3.072648);
   hCCpi0inFV_stack_11->SetBinError(10,2.663946);
   hCCpi0inFV_stack_11->SetBinError(11,2.645725);
   hCCpi0inFV_stack_11->SetBinError(12,2.373888);
   hCCpi0inFV_stack_11->SetBinError(13,2.53792);
   hCCpi0inFV_stack_11->SetBinError(14,2.085729);
   hCCpi0inFV_stack_11->SetBinError(15,1.715354);
   hCCpi0inFV_stack_11->SetBinError(16,1.32686);
   hCCpi0inFV_stack_11->SetBinError(17,1.402435);
   hCCpi0inFV_stack_11->SetBinError(18,0.8965332);
   hCCpi0inFV_stack_11->SetBinError(19,1.225241);
   hCCpi0inFV_stack_11->SetBinError(20,0.7333373);
   hCCpi0inFV_stack_11->SetBinError(21,2.477933);
   hCCpi0inFV_stack_11->SetEntries(1506);

   ci = 1472;
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
   hs3->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(2,0.1967154);
   hNCinFV_stack_12->SetBinContent(3,0.9286332);
   hNCinFV_stack_12->SetBinContent(4,2.291034);
   hNCinFV_stack_12->SetBinContent(5,4.449832);
   hNCinFV_stack_12->SetBinContent(6,3.712842);
   hNCinFV_stack_12->SetBinContent(7,3.56938);
   hNCinFV_stack_12->SetBinContent(8,3.717914);
   hNCinFV_stack_12->SetBinContent(9,2.687238);
   hNCinFV_stack_12->SetBinContent(10,1.463836);
   hNCinFV_stack_12->SetBinContent(11,1.375317);
   hNCinFV_stack_12->SetBinContent(12,1.322064);
   hNCinFV_stack_12->SetBinContent(13,1.463836);
   hNCinFV_stack_12->SetBinContent(14,0.9223309);
   hNCinFV_stack_12->SetBinContent(15,0.9286332);
   hNCinFV_stack_12->SetBinContent(17,1.072095);
   hNCinFV_stack_12->SetBinContent(18,0.1967154);
   hNCinFV_stack_12->SetBinContent(19,0.536893);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.3401776);
   hNCinFV_stack_12->SetBinError(2,0.1967154);
   hNCinFV_stack_12->SetBinError(3,0.48078);
   hNCinFV_stack_12->SetBinError(4,0.8334836);
   hNCinFV_stack_12->SetBinError(5,1.057532);
   hNCinFV_stack_12->SetBinError(6,0.9612155);
   hNCinFV_stack_12->SetBinError(7,0.9202779);
   hNCinFV_stack_12->SetBinError(8,0.9622484);
   hNCinFV_stack_12->SetBinError(9,0.7581465);
   hNCinFV_stack_12->SetBinError(10,0.620407);
   hNCinFV_stack_12->SetBinError(11,0.5198233);
   hNCinFV_stack_12->SetBinError(12,0.5554667);
   hNCinFV_stack_12->SetBinError(13,0.620407);
   hNCinFV_stack_12->SetBinError(14,0.52123);
   hNCinFV_stack_12->SetBinError(15,0.48078);
   hNCinFV_stack_12->SetBinError(17,0.5551335);
   hNCinFV_stack_12->SetBinError(18,0.1967154);
   hNCinFV_stack_12->SetBinError(19,0.3929602);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.3401776);
   hNCinFV_stack_12->SetEntries(135);

   ci = 1473;
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
   hs3->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(3,5.961221);
   hnumuCCinFV_stack_13->SetBinContent(4,19.50714);
   hnumuCCinFV_stack_13->SetBinContent(5,20.50465);
   hnumuCCinFV_stack_13->SetBinContent(6,29.10679);
   hnumuCCinFV_stack_13->SetBinContent(7,17.64301);
   hnumuCCinFV_stack_13->SetBinContent(8,19.31489);
   hnumuCCinFV_stack_13->SetBinContent(9,17.40393);
   hnumuCCinFV_stack_13->SetBinContent(10,8.239777);
   hnumuCCinFV_stack_13->SetBinContent(11,8.974403);
   hnumuCCinFV_stack_13->SetBinContent(12,8.396274);
   hnumuCCinFV_stack_13->SetBinContent(13,4.365636);
   hnumuCCinFV_stack_13->SetBinContent(14,2.271138);
   hnumuCCinFV_stack_13->SetBinContent(15,4.998565);
   hnumuCCinFV_stack_13->SetBinContent(16,2.085365);
   hnumuCCinFV_stack_13->SetBinContent(17,2.173743);
   hnumuCCinFV_stack_13->SetBinContent(18,0.8415774);
   hnumuCCinFV_stack_13->SetBinContent(19,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(20,1.515781);
   hnumuCCinFV_stack_13->SetBinContent(21,4.339556);
   hnumuCCinFV_stack_13->SetBinError(3,1.399817);
   hnumuCCinFV_stack_13->SetBinError(4,2.70685);
   hnumuCCinFV_stack_13->SetBinError(5,2.966935);
   hnumuCCinFV_stack_13->SetBinError(6,3.225779);
   hnumuCCinFV_stack_13->SetBinError(7,2.992229);
   hnumuCCinFV_stack_13->SetBinError(8,2.730465);
   hnumuCCinFV_stack_13->SetBinError(9,2.216935);
   hnumuCCinFV_stack_13->SetBinError(10,1.456062);
   hnumuCCinFV_stack_13->SetBinError(11,1.781514);
   hnumuCCinFV_stack_13->SetBinError(12,1.485771);
   hnumuCCinFV_stack_13->SetBinError(13,1.156304);
   hnumuCCinFV_stack_13->SetBinError(14,0.837158);
   hnumuCCinFV_stack_13->SetBinError(15,1.595415);
   hnumuCCinFV_stack_13->SetBinError(16,0.7284222);
   hnumuCCinFV_stack_13->SetBinError(17,0.7535299);
   hnumuCCinFV_stack_13->SetBinError(18,0.4236734);
   hnumuCCinFV_stack_13->SetBinError(19,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(20,0.6386428);
   hnumuCCinFV_stack_13->SetBinError(21,1.069782);
   hnumuCCinFV_stack_13->SetEntries(681);

   ci = 1474;
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
   hs3->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_14->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(8,0.7868615);
   hnueCCinFV_stack_14->SetBinContent(9,0.536893);
   hnueCCinFV_stack_14->SetBinContent(10,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,2.605038);
   hnueCCinFV_stack_14->SetBinContent(14,0.2463303);
   hnueCCinFV_stack_14->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(16,0.5985879);
   hnueCCinFV_stack_14->SetBinContent(17,0.4694181);
   hnueCCinFV_stack_14->SetBinContent(20,1.083326);
   hnueCCinFV_stack_14->SetBinContent(21,3.664379);
   hnueCCinFV_stack_14->SetBinError(3,0.1950249);
   hnueCCinFV_stack_14->SetBinError(5,0.3025491);
   hnueCCinFV_stack_14->SetBinError(7,0.1967154);
   hnueCCinFV_stack_14->SetBinError(8,0.3934307);
   hnueCCinFV_stack_14->SetBinError(9,0.3929602);
   hnueCCinFV_stack_14->SetBinError(10,0.2770047);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,1.674458);
   hnueCCinFV_stack_14->SetBinError(14,0.2463303);
   hnueCCinFV_stack_14->SetBinError(15,0.1967154);
   hnueCCinFV_stack_14->SetBinError(16,0.4334685);
   hnueCCinFV_stack_14->SetBinError(17,0.3326517);
   hnueCCinFV_stack_14->SetBinError(20,0.8173063);
   hnueCCinFV_stack_14->SetBinError(21,1.432755);
   hnueCCinFV_stack_14->SetEntries(36);

   ci = 1475;
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
   hs3->Add(hnueCCinFV_stack_14,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);
   hmcerror__8->SetBinContent(2,2.763628);
   hmcerror__8->SetBinContent(3,74.97591);
   hmcerror__8->SetBinContent(4,173.895);
   hmcerror__8->SetBinContent(5,195.0391);
   hmcerror__8->SetBinContent(6,192.126);
   hmcerror__8->SetBinContent(7,175.5764);
   hmcerror__8->SetBinContent(8,165.2341);
   hmcerror__8->SetBinContent(9,144.8793);
   hmcerror__8->SetBinContent(10,101.4375);
   hmcerror__8->SetBinContent(11,84.57307);
   hmcerror__8->SetBinContent(12,70.91467);
   hmcerror__8->SetBinContent(13,57.11743);
   hmcerror__8->SetBinContent(14,42.47889);
   hmcerror__8->SetBinContent(15,33.09983);
   hmcerror__8->SetBinContent(16,18.43814);
   hmcerror__8->SetBinContent(17,19.118);
   hmcerror__8->SetBinContent(18,12.08326);
   hmcerror__8->SetBinContent(19,13.73061);
   hmcerror__8->SetBinContent(20,7.830017);
   hmcerror__8->SetBinContent(21,57.79863);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,2.082029);
   hmcerror__8->SetBinError(3,14.22303);
   hmcerror__8->SetBinError(4,29.04713);
   hmcerror__8->SetBinError(5,35.51229);
   hmcerror__8->SetBinError(6,35.58639);
   hmcerror__8->SetBinError(7,33.93363);
   hmcerror__8->SetBinError(8,33.19041);
   hmcerror__8->SetBinError(9,30.07918);
   hmcerror__8->SetBinError(10,22.67953);
   hmcerror__8->SetBinError(11,21.65789);
   hmcerror__8->SetBinError(12,19.6163);
   hmcerror__8->SetBinError(13,15.32304);
   hmcerror__8->SetBinError(14,15.2827);
   hmcerror__8->SetBinError(15,13.60156);
   hmcerror__8->SetBinError(16,6.846628);
   hmcerror__8->SetBinError(17,7.949339);
   hmcerror__8->SetBinError(18,8.099278);
   hmcerror__8->SetBinError(19,8.542925);
   hmcerror__8->SetBinError(20,5.5065);
   hmcerror__8->SetBinError(21,15.92925);
   hmcerror__8->SetEntries(1611.219);

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
   
   Double_t _fx3009[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3009[20] = {
   0,
   4,
   76,
   159,
   170,
   206,
   182,
   141,
   127,
   98,
   56,
   59,
   41,
   28,
   20,
   20,
   14,
   11,
   15,
   6};
   Double_t _felx3009[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3009[20] = {
   0,
   2.29683,
   8.8425,
   12.60952,
   13.0384,
   14.3527,
   13.49074,
   11.87434,
   11.26943,
   10.0209,
   7.6127,
   7.8097,
   6.5384,
   5.4358,
   4.6266,
   4.6266,
   3.9102,
   3.4975,
   4.0385,
   2.67925};
   Double_t _fehx3009[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3009[20] = {
   1.1478,
   1.98186,
   8.6406,
   12.60952,
   13.0384,
   14.3527,
   13.49074,
   11.87434,
   11.26943,
   9.82,
   7.4094,
   7.6066,
   6.3331,
   5.2271,
   4.4133,
   4.4133,
   3.6898,
   3.27,
   3.8197,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(242.388);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.15","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1433.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 271.9","F");

   ci = 1463;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 322.2","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.0","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.2","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  283.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  68.5","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1470;
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

   ci = 1471;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 331.9","F");

   ci = 1472;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 31.2","F");

   ci = 1473;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 173.8","F");

   ci = 1474;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 7.8","F");

   ci = 1475;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_transferred_visible_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3010[20] = {
   0,
   0.7533679,
   0.1897013,
   0.1670383,
   0.1820778,
   0.1852242,
   0.1932698,
   0.200869,
   0.2076154,
   0.2235813,
   0.256085,
   0.2766184,
   0.2682725,
   0.3597716,
   0.4109252,
   0.3713296,
   0.415804,
   0.6702891,
   0.6221811,
   0.7032551};
   Double_t _fehx3010[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3010[20] = {
   0,
   0.7533679,
   0.1897013,
   0.1670383,
   0.1820778,
   0.1852242,
   0.1932698,
   0.200869,
   0.2076154,
   0.2235813,
   0.256085,
   0.2766184,
   0.2682725,
   0.3597716,
   0.4109252,
   0.3713296,
   0.415804,
   0.6702891,
   0.6221811,
   0.7032551};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1650);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Transferred Visible Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3011[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3011[20] = {
   0,
   0.3813157,
   0.1347059,
   0.1453226,
   0.1682573,
   0.1737578,
   0.1831579,
   0.1862062,
   0.1827812,
   0.1877271,
   0.1913771,
   0.1947978,
   0.2039492,
   0.1980565,
   0.238813,
   0.2146996,
   0.2146145,
   0.2222525,
   0.2238699,
   0.3857883};
   Double_t _fehx3011[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3011[20] = {
   0,
   0.3813157,
   0.1347059,
   0.1453226,
   0.1682573,
   0.1737578,
   0.1831579,
   0.1862062,
   0.1827812,
   0.1877271,
   0.1913771,
   0.1947978,
   0.2039492,
   0.1980565,
   0.238813,
   0.2146996,
   0.2146145,
   0.2222525,
   0.2238699,
   0.3857883};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1650);
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
   
   Double_t _fx3012[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3012[20] = {
   10,
   1.447373,
   1.013659,
   0.9143448,
   0.8716201,
   1.072213,
   1.036586,
   0.8533348,
   0.8765916,
   0.9661119,
   0.6621493,
   0.8319858,
   0.7178194,
   0.6591509,
   0.6042326,
   1.084708,
   0.7322943,
   0.9103502,
   1.09245,
   0.7662819};
   Double_t _felx3012[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3012[20] = {
   0,
   0.8310923,
   0.1179379,
   0.07251226,
   0.06685021,
   0.07470462,
   0.07683683,
   0.07186375,
   0.07778492,
   0.09878889,
   0.09001328,
   0.1101281,
   0.1144729,
   0.1279647,
   0.1397771,
   0.2509255,
   0.2045298,
   0.28945,
   0.2941239,
   0.3421768};
   Double_t _fehx3012[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3012[20] = {
   0,
   0.7171226,
   0.115245,
   0.07251226,
   0.06685021,
   0.07470462,
   0.07683683,
   0.07186375,
   0.07778492,
   0.09680836,
   0.08760944,
   0.1072641,
   0.1108786,
   0.1230517,
   0.133333,
   0.2393571,
   0.1930014,
   0.2706223,
   0.2781887,
   0.3088857};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.3816946);
   Graph_Graph3012->SetMaximum(10.95759);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_transferred_visible_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

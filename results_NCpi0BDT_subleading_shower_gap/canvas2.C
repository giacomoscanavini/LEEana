#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 12:54:07 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-13.84615,-2.278724,101.5385,192.0125);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmc__4->SetBinContent(1,113.9362);
   hmc__4->SetBinContent(2,64.74662);
   hmc__4->SetBinContent(3,56.65564);
   hmc__4->SetBinContent(4,54.62584);
   hmc__4->SetBinContent(5,49.5803);
   hmc__4->SetBinContent(6,41.92905);
   hmc__4->SetBinContent(7,33.33437);
   hmc__4->SetBinContent(8,30.95238);
   hmc__4->SetBinContent(9,25.86992);
   hmc__4->SetBinContent(10,23.39199);
   hmc__4->SetBinContent(11,17.31364);
   hmc__4->SetBinContent(12,14.21791);
   hmc__4->SetBinContent(13,13.33094);
   hmc__4->SetBinContent(14,11.40319);
   hmc__4->SetBinContent(15,7.333346);
   hmc__4->SetBinContent(16,8.530432);
   hmc__4->SetBinContent(17,7.131216);
   hmc__4->SetBinContent(18,5.049833);
   hmc__4->SetBinContent(19,51.70498);
   hmc__4->SetBinError(1,23.262);
   hmc__4->SetBinError(2,14.40085);
   hmc__4->SetBinError(3,13.20134);
   hmc__4->SetBinError(4,12.81779);
   hmc__4->SetBinError(5,11.44084);
   hmc__4->SetBinError(6,9.583302);
   hmc__4->SetBinError(7,7.929172);
   hmc__4->SetBinError(8,7.724361);
   hmc__4->SetBinError(9,7.498306);
   hmc__4->SetBinError(10,6.176809);
   hmc__4->SetBinError(11,4.524963);
   hmc__4->SetBinError(12,4.792616);
   hmc__4->SetBinError(13,4.373478);
   hmc__4->SetBinError(14,4.157354);
   hmc__4->SetBinError(15,3.209834);
   hmc__4->SetBinError(16,3.106274);
   hmc__4->SetBinError(17,2.567516);
   hmc__4->SetBinError(18,2.186485);
   hmc__4->SetBinError(19,11.68901);
   hmc__4->SetMinimum(-2.278724);
   hmc__4->SetMaximum(182.2979);
   hmc__4->SetEntries(622.1566);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",18,0,90);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(119.633);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(1,2.695607);
   hbadmatch_stack_1->SetBinContent(2,0.8861765);
   hbadmatch_stack_1->SetBinContent(3,1.297261);
   hbadmatch_stack_1->SetBinContent(4,0.6960371);
   hbadmatch_stack_1->SetBinContent(5,1.06798);
   hbadmatch_stack_1->SetBinContent(6,0.7779434);
   hbadmatch_stack_1->SetBinContent(7,0.6629441);
   hbadmatch_stack_1->SetBinContent(8,0.5650657);
   hbadmatch_stack_1->SetBinContent(9,0.6162253);
   hbadmatch_stack_1->SetBinContent(10,0.4335749);
   hbadmatch_stack_1->SetBinContent(11,0.4587238);
   hbadmatch_stack_1->SetBinContent(12,0.2611039);
   hbadmatch_stack_1->SetBinContent(13,0.3836918);
   hbadmatch_stack_1->SetBinContent(14,0.2990946);
   hbadmatch_stack_1->SetBinContent(15,0.06927043);
   hbadmatch_stack_1->SetBinContent(16,0.3346123);
   hbadmatch_stack_1->SetBinContent(17,0.2702203);
   hbadmatch_stack_1->SetBinContent(18,0.1034184);
   hbadmatch_stack_1->SetBinContent(19,1.854065);
   hbadmatch_stack_1->SetBinError(1,0.4893345);
   hbadmatch_stack_1->SetBinError(2,0.217831);
   hbadmatch_stack_1->SetBinError(3,0.4208635);
   hbadmatch_stack_1->SetBinError(4,0.191123);
   hbadmatch_stack_1->SetBinError(5,0.2393677);
   hbadmatch_stack_1->SetBinError(6,0.3145443);
   hbadmatch_stack_1->SetBinError(7,0.1938324);
   hbadmatch_stack_1->SetBinError(8,0.1691216);
   hbadmatch_stack_1->SetBinError(9,0.175126);
   hbadmatch_stack_1->SetBinError(10,0.1583612);
   hbadmatch_stack_1->SetBinError(11,0.1642908);
   hbadmatch_stack_1->SetBinError(12,0.1243513);
   hbadmatch_stack_1->SetBinError(13,0.1425892);
   hbadmatch_stack_1->SetBinError(14,0.1315463);
   hbadmatch_stack_1->SetBinError(15,0.03114939);
   hbadmatch_stack_1->SetBinError(16,0.1432479);
   hbadmatch_stack_1->SetBinError(17,0.1216816);
   hbadmatch_stack_1->SetBinError(18,0.06647176);
   hbadmatch_stack_1->SetBinError(19,0.3291262);
   hbadmatch_stack_1->SetEntries(370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hext_stack_2->SetBinContent(1,9.107136);
   hext_stack_2->SetBinContent(2,3.997327);
   hext_stack_2->SetBinContent(3,2.751222);
   hext_stack_2->SetBinContent(4,4.395426);
   hext_stack_2->SetBinContent(5,3.960518);
   hext_stack_2->SetBinContent(6,3.6265);
   hext_stack_2->SetBinContent(7,2.916193);
   hext_stack_2->SetBinContent(8,1.960488);
   hext_stack_2->SetBinContent(9,2.171807);
   hext_stack_2->SetBinContent(10,1.761439);
   hext_stack_2->SetBinContent(11,1.228373);
   hext_stack_2->SetBinContent(12,0.370827);
   hext_stack_2->SetBinContent(13,1.179293);
   hext_stack_2->SetBinContent(14,1.739631);
   hext_stack_2->SetBinContent(15,0.3462873);
   hext_stack_2->SetBinContent(16,1.191563);
   hext_stack_2->SetBinContent(17,0.3094778);
   hext_stack_2->SetBinContent(18,0.2358586);
   hext_stack_2->SetBinContent(19,4.503123);
   hext_stack_2->SetBinError(1,1.219565);
   hext_stack_2->SetBinError(2,0.8252737);
   hext_stack_2->SetBinError(3,0.6368199);
   hext_stack_2->SetBinError(4,0.8719621);
   hext_stack_2->SetBinError(5,0.8250001);
   hext_stack_2->SetBinError(6,0.7995927);
   hext_stack_2->SetBinError(7,0.6942047);
   hext_stack_2->SetBinError(8,0.5669928);
   hext_stack_2->SetBinError(9,0.6010424);
   hext_stack_2->SetBinError(10,0.5309052);
   hext_stack_2->SetBinError(11,0.4482892);
   hext_stack_2->SetBinError(12,0.2042749);
   hext_stack_2->SetBinError(13,0.447617);
   hext_stack_2->SetBinError(14,0.5645981);
   hext_stack_2->SetBinError(15,0.2035366);
   hext_stack_2->SetBinError(16,0.4477851);
   hext_stack_2->SetBinError(17,0.202424);
   hext_stack_2->SetBinError(18,0.2001804);
   hext_stack_2->SetBinError(19,0.8511528);
   hext_stack_2->SetEntries(893);

   ci = 1444;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hdirt_stack_3->SetBinContent(1,1.204785);
   hdirt_stack_3->SetBinContent(2,0.3156485);
   hdirt_stack_3->SetBinContent(3,0.7401888);
   hdirt_stack_3->SetBinContent(4,0.699598);
   hdirt_stack_3->SetBinContent(5,0.5316635);
   hdirt_stack_3->SetBinContent(6,0.4097761);
   hdirt_stack_3->SetBinContent(7,0.2748035);
   hdirt_stack_3->SetBinContent(8,0.2703366);
   hdirt_stack_3->SetBinContent(9,0.1939275);
   hdirt_stack_3->SetBinContent(10,0.2225746);
   hdirt_stack_3->SetBinContent(11,0.11214);
   hdirt_stack_3->SetBinContent(12,0.1772654);
   hdirt_stack_3->SetBinContent(13,0.160469);
   hdirt_stack_3->SetBinContent(14,0.1577794);
   hdirt_stack_3->SetBinContent(15,0.1129951);
   hdirt_stack_3->SetBinContent(16,0.1068589);
   hdirt_stack_3->SetBinContent(17,0.05242869);
   hdirt_stack_3->SetBinContent(19,0.3784367);
   hdirt_stack_3->SetBinError(1,0.2136057);
   hdirt_stack_3->SetBinError(2,0.1072479);
   hdirt_stack_3->SetBinError(3,0.324071);
   hdirt_stack_3->SetBinError(4,0.2454751);
   hdirt_stack_3->SetBinError(5,0.1471483);
   hdirt_stack_3->SetBinError(6,0.1315614);
   hdirt_stack_3->SetBinError(7,0.1024498);
   hdirt_stack_3->SetBinError(8,0.1044106);
   hdirt_stack_3->SetBinError(9,0.09347873);
   hdirt_stack_3->SetBinError(10,0.09208242);
   hdirt_stack_3->SetBinError(11,0.06885462);
   hdirt_stack_3->SetBinError(12,0.09636875);
   hdirt_stack_3->SetBinError(13,0.07825218);
   hdirt_stack_3->SetBinError(14,0.08273298);
   hdirt_stack_3->SetBinError(15,0.07454538);
   hdirt_stack_3->SetBinError(16,0.06387261);
   hdirt_stack_3->SetBinError(17,0.0449667);
   hdirt_stack_3->SetBinError(19,0.1234127);
   hdirt_stack_3->SetEntries(224);

   ci = 1445;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   houtFV_stack_4->SetBinContent(1,12.21788);
   houtFV_stack_4->SetBinContent(2,5.834046);
   houtFV_stack_4->SetBinContent(3,4.483506);
   houtFV_stack_4->SetBinContent(4,5.098093);
   houtFV_stack_4->SetBinContent(5,4.36804);
   houtFV_stack_4->SetBinContent(6,3.975911);
   houtFV_stack_4->SetBinContent(7,3.220214);
   houtFV_stack_4->SetBinContent(8,2.712279);
   houtFV_stack_4->SetBinContent(9,2.959178);
   houtFV_stack_4->SetBinContent(10,3.16995);
   houtFV_stack_4->SetBinContent(11,1.510993);
   houtFV_stack_4->SetBinContent(12,2.214158);
   houtFV_stack_4->SetBinContent(13,1.136804);
   houtFV_stack_4->SetBinContent(14,1.065085);
   houtFV_stack_4->SetBinContent(15,1.04891);
   houtFV_stack_4->SetBinContent(16,1.191714);
   houtFV_stack_4->SetBinContent(17,0.7483126);
   houtFV_stack_4->SetBinContent(18,0.2878704);
   houtFV_stack_4->SetBinContent(19,5.859789);
   houtFV_stack_4->SetBinError(1,0.8178176);
   houtFV_stack_4->SetBinError(2,0.5714315);
   houtFV_stack_4->SetBinError(3,0.4897502);
   houtFV_stack_4->SetBinError(4,0.5301322);
   houtFV_stack_4->SetBinError(5,0.4929745);
   houtFV_stack_4->SetBinError(6,0.4676309);
   houtFV_stack_4->SetBinError(7,0.4276136);
   houtFV_stack_4->SetBinError(8,0.3719307);
   houtFV_stack_4->SetBinError(9,0.3988883);
   houtFV_stack_4->SetBinError(10,0.4275878);
   houtFV_stack_4->SetBinError(11,0.2887546);
   houtFV_stack_4->SetBinError(12,0.3618082);
   houtFV_stack_4->SetBinError(13,0.2455197);
   houtFV_stack_4->SetBinError(14,0.2450758);
   houtFV_stack_4->SetBinError(15,0.236859);
   houtFV_stack_4->SetBinError(16,0.2647072);
   houtFV_stack_4->SetBinError(17,0.2001121);
   houtFV_stack_4->SetBinError(18,0.113209);
   houtFV_stack_4->SetBinError(19,0.5581767);
   houtFV_stack_4->SetEntries(1630);

   ci = 1446;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(1,50.42132);
   hNCpi0inFV_stack_5->SetBinContent(2,37.104);
   hNCpi0inFV_stack_5->SetBinContent(3,31.44784);
   hNCpi0inFV_stack_5->SetBinContent(4,30.88306);
   hNCpi0inFV_stack_5->SetBinContent(5,25.95301);
   hNCpi0inFV_stack_5->SetBinContent(6,21.5081);
   hNCpi0inFV_stack_5->SetBinContent(7,18.13319);
   hNCpi0inFV_stack_5->SetBinContent(8,17.23189);
   hNCpi0inFV_stack_5->SetBinContent(9,12.70033);
   hNCpi0inFV_stack_5->SetBinContent(10,12.00961);
   hNCpi0inFV_stack_5->SetBinContent(11,9.174353);
   hNCpi0inFV_stack_5->SetBinContent(12,7.357692);
   hNCpi0inFV_stack_5->SetBinContent(13,6.780156);
   hNCpi0inFV_stack_5->SetBinContent(14,5.187614);
   hNCpi0inFV_stack_5->SetBinContent(15,3.611412);
   hNCpi0inFV_stack_5->SetBinContent(16,3.609617);
   hNCpi0inFV_stack_5->SetBinContent(17,3.429132);
   hNCpi0inFV_stack_5->SetBinContent(18,2.676683);
   hNCpi0inFV_stack_5->SetBinContent(19,21.36606);
   hNCpi0inFV_stack_5->SetBinError(1,1.643418);
   hNCpi0inFV_stack_5->SetBinError(2,1.425108);
   hNCpi0inFV_stack_5->SetBinError(3,1.300206);
   hNCpi0inFV_stack_5->SetBinError(4,1.291546);
   hNCpi0inFV_stack_5->SetBinError(5,1.186216);
   hNCpi0inFV_stack_5->SetBinError(6,1.069154);
   hNCpi0inFV_stack_5->SetBinError(7,0.9895179);
   hNCpi0inFV_stack_5->SetBinError(8,0.9722567);
   hNCpi0inFV_stack_5->SetBinError(9,0.826726);
   hNCpi0inFV_stack_5->SetBinError(10,0.8081459);
   hNCpi0inFV_stack_5->SetBinError(11,0.7035656);
   hNCpi0inFV_stack_5->SetBinError(12,0.6289882);
   hNCpi0inFV_stack_5->SetBinError(13,0.610753);
   hNCpi0inFV_stack_5->SetBinError(14,0.534457);
   hNCpi0inFV_stack_5->SetBinError(15,0.4386118);
   hNCpi0inFV_stack_5->SetBinError(16,0.4420476);
   hNCpi0inFV_stack_5->SetBinError(17,0.4181065);
   hNCpi0inFV_stack_5->SetBinError(18,0.3793136);
   hNCpi0inFV_stack_5->SetBinError(19,1.069733);
   hNCpi0inFV_stack_5->SetEntries(8416);

   ci = 1447;
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
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(1,18.88246);
   hCCpi0inFV_stack_6->SetBinContent(2,10.23607);
   hCCpi0inFV_stack_6->SetBinContent(3,10.01983);
   hCCpi0inFV_stack_6->SetBinContent(4,9.046695);
   hCCpi0inFV_stack_6->SetBinContent(5,8.306886);
   hCCpi0inFV_stack_6->SetBinContent(6,8.483068);
   hCCpi0inFV_stack_6->SetBinContent(7,5.496643);
   hCCpi0inFV_stack_6->SetBinContent(8,5.558976);
   hCCpi0inFV_stack_6->SetBinContent(9,4.448544);
   hCCpi0inFV_stack_6->SetBinContent(10,3.587108);
   hCCpi0inFV_stack_6->SetBinContent(11,2.725594);
   hCCpi0inFV_stack_6->SetBinContent(12,2.215652);
   hCCpi0inFV_stack_6->SetBinContent(13,2.623426);
   hCCpi0inFV_stack_6->SetBinContent(14,1.357467);
   hCCpi0inFV_stack_6->SetBinContent(15,0.9237729);
   hCCpi0inFV_stack_6->SetBinContent(16,1.169803);
   hCCpi0inFV_stack_6->SetBinContent(17,1.386477);
   hCCpi0inFV_stack_6->SetBinContent(18,0.6341078);
   hCCpi0inFV_stack_6->SetBinContent(19,7.252798);
   hCCpi0inFV_stack_6->SetBinError(1,1.016602);
   hCCpi0inFV_stack_6->SetBinError(2,0.745524);
   hCCpi0inFV_stack_6->SetBinError(3,0.7394552);
   hCCpi0inFV_stack_6->SetBinError(4,0.687257);
   hCCpi0inFV_stack_6->SetBinError(5,0.6723704);
   hCCpi0inFV_stack_6->SetBinError(6,0.678829);
   hCCpi0inFV_stack_6->SetBinError(7,0.5374025);
   hCCpi0inFV_stack_6->SetBinError(8,0.5596465);
   hCCpi0inFV_stack_6->SetBinError(9,0.4911553);
   hCCpi0inFV_stack_6->SetBinError(10,0.441753);
   hCCpi0inFV_stack_6->SetBinError(11,0.3839333);
   hCCpi0inFV_stack_6->SetBinError(12,0.3476817);
   hCCpi0inFV_stack_6->SetBinError(13,0.3878947);
   hCCpi0inFV_stack_6->SetBinError(14,0.2686694);
   hCCpi0inFV_stack_6->SetBinError(15,0.2128689);
   hCCpi0inFV_stack_6->SetBinError(16,0.2523752);
   hCCpi0inFV_stack_6->SetBinError(17,0.2811151);
   hCCpi0inFV_stack_6->SetBinError(18,0.1884745);
   hCCpi0inFV_stack_6->SetBinError(19,0.62947);
   hCCpi0inFV_stack_6->SetEntries(2725);

   ci = 1448;
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
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(1,5.216669);
   hNCinFV_stack_7->SetBinContent(2,2.102737);
   hNCinFV_stack_7->SetBinContent(3,2.366902);
   hNCinFV_stack_7->SetBinContent(4,1.459469);
   hNCinFV_stack_7->SetBinContent(5,1.771045);
   hNCinFV_stack_7->SetBinContent(6,1.146098);
   hNCinFV_stack_7->SetBinContent(7,1.034935);
   hNCinFV_stack_7->SetBinContent(8,1.144303);
   hNCinFV_stack_7->SetBinContent(9,1.355672);
   hNCinFV_stack_7->SetBinContent(10,0.8855224);
   hNCinFV_stack_7->SetBinContent(11,0.8709775);
   hNCinFV_stack_7->SetBinContent(12,0.5101952);
   hNCinFV_stack_7->SetBinContent(13,0.3498267);
   hNCinFV_stack_7->SetBinContent(14,0.7343147);
   hNCinFV_stack_7->SetBinContent(15,0.497445);
   hNCinFV_stack_7->SetBinContent(16,0.3115761);
   hNCinFV_stack_7->SetBinContent(17,0.6213576);
   hNCinFV_stack_7->SetBinContent(18,0.1129571);
   hNCinFV_stack_7->SetBinContent(19,3.248835);
   hNCinFV_stack_7->SetBinError(1,0.5319274);
   hNCinFV_stack_7->SetBinError(2,0.3394415);
   hNCinFV_stack_7->SetBinError(3,0.3531089);
   hNCinFV_stack_7->SetBinError(4,0.271079);
   hNCinFV_stack_7->SetBinError(5,0.2994177);
   hNCinFV_stack_7->SetBinError(6,0.2456469);
   hNCinFV_stack_7->SetBinError(7,0.2298429);
   hNCinFV_stack_7->SetBinError(8,0.2517303);
   hNCinFV_stack_7->SetBinError(9,0.2742426);
   hNCinFV_stack_7->SetBinError(10,0.2117203);
   hNCinFV_stack_7->SetBinError(11,0.2183773);
   hNCinFV_stack_7->SetBinError(12,0.1668696);
   hNCinFV_stack_7->SetBinError(13,0.1290537);
   hNCinFV_stack_7->SetBinError(14,0.199622);
   hNCinFV_stack_7->SetBinError(15,0.1663818);
   hNCinFV_stack_7->SetBinError(16,0.1271502);
   hNCinFV_stack_7->SetBinError(17,0.1880427);
   hNCinFV_stack_7->SetBinError(18,0.0669989);
   hNCinFV_stack_7->SetBinError(19,0.4190022);
   hNCinFV_stack_7->SetEntries(696);

   ci = 1449;
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
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(1,13.85868);
   hnumuCCinFV_stack_8->SetBinContent(2,3.970926);
   hnumuCCinFV_stack_8->SetBinContent(3,3.48694);
   hnumuCCinFV_stack_8->SetBinContent(4,2.182129);
   hnumuCCinFV_stack_8->SetBinContent(5,3.375685);
   hnumuCCinFV_stack_8->SetBinContent(6,1.773964);
   hnumuCCinFV_stack_8->SetBinContent(7,1.502694);
   hnumuCCinFV_stack_8->SetBinContent(8,1.435313);
   hnumuCCinFV_stack_8->SetBinContent(9,1.313696);
   hnumuCCinFV_stack_8->SetBinContent(10,1.136345);
   hnumuCCinFV_stack_8->SetBinContent(11,1.077017);
   hnumuCCinFV_stack_8->SetBinContent(12,0.9280121);
   hnumuCCinFV_stack_8->SetBinContent(13,0.6553196);
   hnumuCCinFV_stack_8->SetBinContent(14,0.8341839);
   hnumuCCinFV_stack_8->SetBinContent(15,0.5737264);
   hnumuCCinFV_stack_8->SetBinContent(16,0.6019361);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2859557);
   hnumuCCinFV_stack_8->SetBinContent(18,0.922487);
   hnumuCCinFV_stack_8->SetBinContent(19,6.132134);
   hnumuCCinFV_stack_8->SetBinError(1,1.070661);
   hnumuCCinFV_stack_8->SetBinError(2,0.6755384);
   hnumuCCinFV_stack_8->SetBinError(3,0.6599323);
   hnumuCCinFV_stack_8->SetBinError(4,0.3741767);
   hnumuCCinFV_stack_8->SetBinError(5,0.6480202);
   hnumuCCinFV_stack_8->SetBinError(6,0.3210808);
   hnumuCCinFV_stack_8->SetBinError(7,0.2835186);
   hnumuCCinFV_stack_8->SetBinError(8,0.3173862);
   hnumuCCinFV_stack_8->SetBinError(9,0.2726935);
   hnumuCCinFV_stack_8->SetBinError(10,0.2699889);
   hnumuCCinFV_stack_8->SetBinError(11,0.2556028);
   hnumuCCinFV_stack_8->SetBinError(12,0.3146406);
   hnumuCCinFV_stack_8->SetBinError(13,0.2007054);
   hnumuCCinFV_stack_8->SetBinError(14,0.3282209);
   hnumuCCinFV_stack_8->SetBinError(15,0.1784438);
   hnumuCCinFV_stack_8->SetBinError(16,0.2000907);
   hnumuCCinFV_stack_8->SetBinError(17,0.1279355);
   hnumuCCinFV_stack_8->SetBinError(18,0.4483749);
   hnumuCCinFV_stack_8->SetBinError(19,0.6390519);
   hnumuCCinFV_stack_8->SetEntries(1072);

   ci = 1450;
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
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(1,0.3316683);
   hnueCCinFV_stack_9->SetBinContent(2,0.2996918);
   hnueCCinFV_stack_9->SetBinContent(3,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(4,0.1653349);
   hnueCCinFV_stack_9->SetBinContent(5,0.2454774);
   hnueCCinFV_stack_9->SetBinContent(6,0.2276844);
   hnueCCinFV_stack_9->SetBinContent(7,0.09275308);
   hnueCCinFV_stack_9->SetBinContent(8,0.07373609);
   hnueCCinFV_stack_9->SetBinContent(9,0.110538);
   hnueCCinFV_stack_9->SetBinContent(10,0.1858689);
   hnueCCinFV_stack_9->SetBinContent(11,0.1554703);
   hnueCCinFV_stack_9->SetBinContent(12,0.183006);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.02801716);
   hnueCCinFV_stack_9->SetBinContent(15,0.1495277);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(17,0.02785392);
   hnueCCinFV_stack_9->SetBinContent(18,0.07645005);
   hnueCCinFV_stack_9->SetBinContent(19,1.109744);
   hnueCCinFV_stack_9->SetBinError(1,0.1320957);
   hnueCCinFV_stack_9->SetBinError(2,0.135238);
   hnueCCinFV_stack_9->SetBinError(3,0.06195629);
   hnueCCinFV_stack_9->SetBinError(4,0.09085905);
   hnueCCinFV_stack_9->SetBinError(5,0.1244396);
   hnueCCinFV_stack_9->SetBinError(6,0.1358152);
   hnueCCinFV_stack_9->SetBinError(7,0.06577864);
   hnueCCinFV_stack_9->SetBinError(8,0.03346898);
   hnueCCinFV_stack_9->SetBinError(9,0.07873224);
   hnueCCinFV_stack_9->SetBinError(10,0.1073114);
   hnueCCinFV_stack_9->SetBinError(11,0.09051769);
   hnueCCinFV_stack_9->SetBinError(12,0.1057448);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.0198909);
   hnueCCinFV_stack_9->SetBinError(15,0.09470549);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(17,0.02785392);
   hnueCCinFV_stack_9->SetBinError(18,0.06362901);
   hnueCCinFV_stack_9->SetBinError(19,0.5032488);
   hnueCCinFV_stack_9->SetEntries(85);

   ci = 1451;
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
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmcerror__5->SetBinContent(1,113.9362);
   hmcerror__5->SetBinContent(2,64.74662);
   hmcerror__5->SetBinContent(3,56.65564);
   hmcerror__5->SetBinContent(4,54.62584);
   hmcerror__5->SetBinContent(5,49.5803);
   hmcerror__5->SetBinContent(6,41.92905);
   hmcerror__5->SetBinContent(7,33.33437);
   hmcerror__5->SetBinContent(8,30.95238);
   hmcerror__5->SetBinContent(9,25.86992);
   hmcerror__5->SetBinContent(10,23.39199);
   hmcerror__5->SetBinContent(11,17.31364);
   hmcerror__5->SetBinContent(12,14.21791);
   hmcerror__5->SetBinContent(13,13.33094);
   hmcerror__5->SetBinContent(14,11.40319);
   hmcerror__5->SetBinContent(15,7.333346);
   hmcerror__5->SetBinContent(16,8.530432);
   hmcerror__5->SetBinContent(17,7.131216);
   hmcerror__5->SetBinContent(18,5.049833);
   hmcerror__5->SetBinContent(19,51.70498);
   hmcerror__5->SetBinError(1,23.262);
   hmcerror__5->SetBinError(2,14.40085);
   hmcerror__5->SetBinError(3,13.20134);
   hmcerror__5->SetBinError(4,12.81779);
   hmcerror__5->SetBinError(5,11.44084);
   hmcerror__5->SetBinError(6,9.583302);
   hmcerror__5->SetBinError(7,7.929172);
   hmcerror__5->SetBinError(8,7.724361);
   hmcerror__5->SetBinError(9,7.498306);
   hmcerror__5->SetBinError(10,6.176809);
   hmcerror__5->SetBinError(11,4.524963);
   hmcerror__5->SetBinError(12,4.792616);
   hmcerror__5->SetBinError(13,4.373478);
   hmcerror__5->SetBinError(14,4.157354);
   hmcerror__5->SetBinError(15,3.209834);
   hmcerror__5->SetBinError(16,3.106274);
   hmcerror__5->SetBinError(17,2.567516);
   hmcerror__5->SetBinError(18,2.186485);
   hmcerror__5->SetBinError(19,11.68901);
   hmcerror__5->SetEntries(622.1566);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3005[18] = {
   94,
   38,
   53,
   61,
   32,
   24,
   36,
   22,
   23,
   16,
   16,
   11,
   12,
   3,
   13,
   3,
   8,
   3};
   Double_t _felx3005[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3005[18] = {
   9.8173,
   6.3013,
   7.4105,
   7.9383,
   5.7977,
   5.0476,
   6.1381,
   4.8417,
   4.9457,
   4.1628,
   4.1628,
   3.4975,
   3.64022,
   2.143368,
   3.77763,
   2.143368,
   3.0307,
   2.143368};
   Double_t _fehx3005[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3005[18] = {
   9.616,
   6.0955,
   7.2068,
   7.7354,
   5.5904,
   4.837,
   5.9318,
   4.6299,
   4.7346,
   3.9454,
   3.9454,
   3.27,
   3.4155,
   1.72422,
   3.5552,
   1.72422,
   2.7896,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,99);
   Graph_Graph3005->SetMinimum(0.7709688);
   Graph_Graph3005->SetMaximum(113.8919);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.88/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 468.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 11.9","F");

   ci = 1443;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 43.2","F");

   ci = 1444;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.7","F");

   ci = 1445;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 57.2","F");

   ci = 1446;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  299.2","F");

   ci = 1447;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 97.1","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 22.5","F");

   ci = 1449;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 39.9","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.5","F");

   ci = 1451;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT1_bnb_10_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3006[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3006[18] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3006[18] = {
   0.2041669,
   0.2224186,
   0.2330102,
   0.234647,
   0.2307537,
   0.22856,
   0.2378678,
   0.2495563,
   0.2898465,
   0.2640565,
   0.2613525,
   0.337083,
   0.3280697,
   0.3645782,
   0.4377038,
   0.3641403,
   0.360039,
   0.4329816};
   Double_t _fehx3006[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3006[18] = {
   0.2041669,
   0.2224186,
   0.2330102,
   0.234647,
   0.2307537,
   0.22856,
   0.2378678,
   0.2495563,
   0.2898465,
   0.2640565,
   0.2613525,
   0.337083,
   0.3280697,
   0.3645782,
   0.4377038,
   0.3641403,
   0.360039,
   0.4329816};
   grae = new TGraphAsymmErrors(18,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,99);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3007[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3007[18] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3007[18] = {
   0.1898413,
   0.2047719,
   0.2002835,
   0.2030984,
   0.1956623,
   0.2031375,
   0.2001687,
   0.1964701,
   0.2022605,
   0.1871728,
   0.2001042,
   0.1938088,
   0.1986455,
   0.2045779,
   0.2326425,
   0.2097506,
   0.2168259,
   0.2770261};
   Double_t _fehx3007[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3007[18] = {
   0.1898413,
   0.2047719,
   0.2002835,
   0.2030984,
   0.1956623,
   0.2031375,
   0.2001687,
   0.1964701,
   0.2022605,
   0.1871728,
   0.2001042,
   0.1938088,
   0.1986455,
   0.2045779,
   0.2326425,
   0.2097506,
   0.2168259,
   0.2770261};
   grae = new TGraphAsymmErrors(18,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,99);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3008[18] = {
   0.8250232,
   0.5869032,
   0.9354762,
   1.116688,
   0.6454176,
   0.5723956,
   1.079966,
   0.7107692,
   0.8890635,
   0.6839947,
   0.9241268,
   0.773672,
   0.9001614,
   0.2630844,
   1.772724,
   0.3516821,
   1.121828,
   0.5940791};
   Double_t _felx3008[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3008[18] = {
   0.08616489,
   0.09732245,
   0.130799,
   0.1453213,
   0.1169355,
   0.1203843,
   0.1841373,
   0.1564242,
   0.1911757,
   0.1779583,
   0.2404347,
   0.2459925,
   0.2730655,
   0.1879622,
   0.5151305,
   0.2512614,
   0.4249907,
   0.4244434};
   Double_t _fehx3008[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3008[18] = {
   0.08439811,
   0.09414391,
   0.1272036,
   0.141607,
   0.1127545,
   0.1153616,
   0.1779485,
   0.1495814,
   0.1830156,
   0.1686645,
   0.2278781,
   0.2299916,
   0.2562084,
   0.1512051,
   0.4847992,
   0.2021258,
   0.3911816,
   0.341441};
   grae = new TGraphAsymmErrors(18,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,99);
   Graph_Graph3008->SetMinimum(0.06760994);
   Graph_Graph3008->SetMaximum(2.475764);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT1_bnb_10_kine_pio_gap_low_all",18,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

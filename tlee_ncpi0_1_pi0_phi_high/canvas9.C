#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 23:31:34 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-0.7064749,3.957692,78.12125);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__25->SetBinContent(1,34.93851);
   hmc__25->SetBinContent(2,27.80564);
   hmc__25->SetBinContent(3,22.14036);
   hmc__25->SetBinContent(4,27.17686);
   hmc__25->SetBinContent(5,20.4081);
   hmc__25->SetBinContent(6,24.74109);
   hmc__25->SetBinContent(7,30.55172);
   hmc__25->SetBinContent(8,20.86391);
   hmc__25->SetBinContent(9,23.57796);
   hmc__25->SetBinContent(10,22.64652);
   hmc__25->SetBinContent(11,26.15664);
   hmc__25->SetBinContent(12,28.21107);
   hmc__25->SetBinContent(13,28.80555);
   hmc__25->SetBinContent(14,35.32375);
   hmc__25->SetBinContent(15,27.87551);
   hmc__25->SetBinContent(16,30.73626);
   hmc__25->SetBinContent(17,21.36016);
   hmc__25->SetBinContent(18,27.63848);
   hmc__25->SetBinContent(19,27.30071);
   hmc__25->SetBinContent(20,25.25332);
   hmc__25->SetBinContent(21,23.70913);
   hmc__25->SetBinContent(22,29.69688);
   hmc__25->SetBinContent(23,18.08849);
   hmc__25->SetBinContent(24,26.09713);
   hmc__25->SetBinContent(25,29.48538);
   hmc__25->SetBinError(1,12.73008);
   hmc__25->SetBinError(2,13.5344);
   hmc__25->SetBinError(3,11.57764);
   hmc__25->SetBinError(4,17.12679);
   hmc__25->SetBinError(5,10.10835);
   hmc__25->SetBinError(6,10.63069);
   hmc__25->SetBinError(7,12.54394);
   hmc__25->SetBinError(8,12.50494);
   hmc__25->SetBinError(9,13.62452);
   hmc__25->SetBinError(10,15.19941);
   hmc__25->SetBinError(11,11.08904);
   hmc__25->SetBinError(12,18.35017);
   hmc__25->SetBinError(13,16.9232);
   hmc__25->SetBinError(14,24.982);
   hmc__25->SetBinError(15,21.48825);
   hmc__25->SetBinError(16,17.10756);
   hmc__25->SetBinError(17,8.656648);
   hmc__25->SetBinError(18,14.49847);
   hmc__25->SetBinError(19,16.60626);
   hmc__25->SetBinError(20,11.53141);
   hmc__25->SetBinError(21,14.46695);
   hmc__25->SetBinError(22,16.18691);
   hmc__25->SetBinError(23,9.935591);
   hmc__25->SetBinError(24,13.16933);
   hmc__25->SetBinError(25,15.00259);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-0.7064749);
   hmc__25->SetMaximum(74.17987);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-3.15,3.15);
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(37.08993);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.179519);
   hbadmatch_stack_1->SetBinContent(2,1.026842);
   hbadmatch_stack_1->SetBinContent(3,0.3473706);
   hbadmatch_stack_1->SetBinContent(4,1.663811);
   hbadmatch_stack_1->SetBinContent(5,0.4521086);
   hbadmatch_stack_1->SetBinContent(6,0.6836276);
   hbadmatch_stack_1->SetBinContent(7,0.7092085);
   hbadmatch_stack_1->SetBinContent(8,0.9893605);
   hbadmatch_stack_1->SetBinContent(9,1.253873);
   hbadmatch_stack_1->SetBinContent(10,0.355878);
   hbadmatch_stack_1->SetBinContent(11,0.1326562);
   hbadmatch_stack_1->SetBinContent(12,0.5121999);
   hbadmatch_stack_1->SetBinContent(13,0.7792835);
   hbadmatch_stack_1->SetBinContent(14,0.8495809);
   hbadmatch_stack_1->SetBinContent(15,0.241444);
   hbadmatch_stack_1->SetBinContent(16,1.537357);
   hbadmatch_stack_1->SetBinContent(17,0.9558206);
   hbadmatch_stack_1->SetBinContent(18,1.461461);
   hbadmatch_stack_1->SetBinContent(19,0.5747284);
   hbadmatch_stack_1->SetBinContent(20,0.8743982);
   hbadmatch_stack_1->SetBinContent(21,1.641423);
   hbadmatch_stack_1->SetBinContent(22,1.279952);
   hbadmatch_stack_1->SetBinContent(23,0.07552768);
   hbadmatch_stack_1->SetBinContent(24,0.8164178);
   hbadmatch_stack_1->SetBinContent(25,0.6507307);
   hbadmatch_stack_1->SetBinError(1,0.5860522);
   hbadmatch_stack_1->SetBinError(2,0.4962778);
   hbadmatch_stack_1->SetBinError(3,0.2038256);
   hbadmatch_stack_1->SetBinError(4,0.696935);
   hbadmatch_stack_1->SetBinError(5,0.2670392);
   hbadmatch_stack_1->SetBinError(6,0.4175416);
   hbadmatch_stack_1->SetBinError(7,0.4138745);
   hbadmatch_stack_1->SetBinError(8,0.4558469);
   hbadmatch_stack_1->SetBinError(9,0.5351306);
   hbadmatch_stack_1->SetBinError(10,0.2596645);
   hbadmatch_stack_1->SetBinError(11,0.1326562);
   hbadmatch_stack_1->SetBinError(12,0.3016456);
   hbadmatch_stack_1->SetBinError(13,0.4606426);
   hbadmatch_stack_1->SetBinError(14,0.6125459);
   hbadmatch_stack_1->SetBinError(15,0.241444);
   hbadmatch_stack_1->SetBinError(16,0.60621);
   hbadmatch_stack_1->SetBinError(17,0.492529);
   hbadmatch_stack_1->SetBinError(18,0.577104);
   hbadmatch_stack_1->SetBinError(19,0.4132007);
   hbadmatch_stack_1->SetBinError(20,0.4861743);
   hbadmatch_stack_1->SetBinError(21,0.6533014);
   hbadmatch_stack_1->SetBinError(22,0.6632362);
   hbadmatch_stack_1->SetBinError(23,0.07552768);
   hbadmatch_stack_1->SetBinError(24,0.4463395);
   hbadmatch_stack_1->SetBinError(25,0.473973);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.74772);
   hext_stack_2->SetBinContent(2,0.973192);
   hext_stack_2->SetBinContent(3,1.055394);
   hext_stack_2->SetBinContent(4,2.841783);
   hext_stack_2->SetBinContent(5,2.916804);
   hext_stack_2->SetBinContent(6,5.457311);
   hext_stack_2->SetBinContent(7,9.753906);
   hext_stack_2->SetBinContent(8,2.663019);
   hext_stack_2->SetBinContent(9,2.192989);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinContent(11,3.323403);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.7309963);
   hext_stack_2->SetBinContent(14,2.898035);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,3.647801);
   hext_stack_2->SetBinContent(17,4.912259);
   hext_stack_2->SetBinContent(18,4.207213);
   hext_stack_2->SetBinContent(19,7.408103);
   hext_stack_2->SetBinContent(20,7.814703);
   hext_stack_2->SetBinContent(21,2.599588);
   hext_stack_2->SetBinContent(22,6.545835);
   hext_stack_2->SetBinContent(23,1.297589);
   hext_stack_2->SetBinContent(24,1.939204);
   hext_stack_2->SetBinContent(25,4.345666);
   hext_stack_2->SetBinError(1,2.005173);
   hext_stack_2->SetBinError(2,0.5618727);
   hext_stack_2->SetBinError(3,0.6130171);
   hext_stack_2->SetBinError(4,1.011007);
   hext_stack_2->SetBinError(5,1.132884);
   hext_stack_2->SetBinError(6,1.843525);
   hext_stack_2->SetBinError(7,2.272231);
   hext_stack_2->SetBinError(8,1.142086);
   hext_stack_2->SetBinError(9,0.9009267);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetBinError(11,1.20364);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.5201503);
   hext_stack_2->SetBinError(14,1.245274);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,1.246589);
   hext_stack_2->SetBinError(17,1.626223);
   hext_stack_2->SetBinError(18,1.380421);
   hext_stack_2->SetBinError(19,2.04086);
   hext_stack_2->SetBinError(20,2.080969);
   hext_stack_2->SetBinError(21,0.9884288);
   hext_stack_2->SetBinError(22,1.762013);
   hext_stack_2->SetBinError(23,0.6487947);
   hext_stack_2->SetBinError(24,0.912471);
   hext_stack_2->SetBinError(25,1.579311);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(2,0.4026575);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.5251632);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.4049124);
   hdirt_stack_3->SetBinContent(18,0.4289006);
   hdirt_stack_3->SetBinContent(19,0.3405387);
   hdirt_stack_3->SetBinContent(20,0.2761429);
   hdirt_stack_3->SetBinContent(24,0.6001908);
   hdirt_stack_3->SetBinContent(25,0.5713827);
   hdirt_stack_3->SetBinError(2,0.2984452);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(6,0.3713466);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(16,0.4049124);
   hdirt_stack_3->SetBinError(18,0.4289006);
   hdirt_stack_3->SetBinError(19,0.3381954);
   hdirt_stack_3->SetBinError(20,0.1952625);
   hdirt_stack_3->SetBinError(24,0.4278042);
   hdirt_stack_3->SetBinError(25,0.4434409);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,4.737823);
   houtFV_stack_4->SetBinContent(2,4.398097);
   houtFV_stack_4->SetBinContent(3,5.352143);
   houtFV_stack_4->SetBinContent(4,4.605184);
   houtFV_stack_4->SetBinContent(5,4.210263);
   houtFV_stack_4->SetBinContent(6,4.522934);
   houtFV_stack_4->SetBinContent(7,5.689962);
   houtFV_stack_4->SetBinContent(8,3.424885);
   houtFV_stack_4->SetBinContent(9,3.228252);
   houtFV_stack_4->SetBinContent(10,5.067841);
   houtFV_stack_4->SetBinContent(11,3.575366);
   houtFV_stack_4->SetBinContent(12,5.46957);
   houtFV_stack_4->SetBinContent(13,4.792637);
   houtFV_stack_4->SetBinContent(14,5.100086);
   houtFV_stack_4->SetBinContent(15,4.760685);
   houtFV_stack_4->SetBinContent(16,6.882532);
   houtFV_stack_4->SetBinContent(17,3.330864);
   houtFV_stack_4->SetBinContent(18,5.938934);
   houtFV_stack_4->SetBinContent(19,5.666471);
   houtFV_stack_4->SetBinContent(20,2.949587);
   houtFV_stack_4->SetBinContent(21,4.228258);
   houtFV_stack_4->SetBinContent(22,6.042747);
   houtFV_stack_4->SetBinContent(23,2.038838);
   houtFV_stack_4->SetBinContent(24,4.74292);
   houtFV_stack_4->SetBinContent(25,5.490385);
   houtFV_stack_4->SetBinError(1,1.065274);
   houtFV_stack_4->SetBinError(2,1.011214);
   houtFV_stack_4->SetBinError(3,1.229761);
   houtFV_stack_4->SetBinError(4,1.043234);
   houtFV_stack_4->SetBinError(5,0.9989572);
   houtFV_stack_4->SetBinError(6,1.120863);
   houtFV_stack_4->SetBinError(7,1.157814);
   houtFV_stack_4->SetBinError(8,0.8347381);
   houtFV_stack_4->SetBinError(9,0.9289759);
   houtFV_stack_4->SetBinError(10,1.1142);
   houtFV_stack_4->SetBinError(11,1.050792);
   houtFV_stack_4->SetBinError(12,1.113877);
   houtFV_stack_4->SetBinError(13,0.9990447);
   houtFV_stack_4->SetBinError(14,1.087137);
   houtFV_stack_4->SetBinError(15,1.072502);
   houtFV_stack_4->SetBinError(16,1.42924);
   houtFV_stack_4->SetBinError(17,1.134416);
   houtFV_stack_4->SetBinError(18,1.312741);
   houtFV_stack_4->SetBinError(19,1.293556);
   houtFV_stack_4->SetBinError(20,0.8269143);
   houtFV_stack_4->SetBinError(21,0.9975372);
   houtFV_stack_4->SetBinError(22,1.388381);
   houtFV_stack_4->SetBinError(23,0.645936);
   houtFV_stack_4->SetBinError(24,1.107003);
   houtFV_stack_4->SetBinError(25,1.30076);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2196091);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2297338);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.06839793);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.04059216);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1969532);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1455086);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04917817);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03065127);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.141261);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.04098689);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.03613899);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.0720971);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03712227);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2915083);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07416524);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.07806695);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02952655);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.08040193);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02506803);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02557584);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04428301);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02625185);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1715757);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03708669);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06255336);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02165026);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03651349);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.815875);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.839565);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.72132);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.166246);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.762405);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.762147);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.753648);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.843484);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.090906);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.319338);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.2785);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.535117);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.233523);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.419753);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.787994);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.90083);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.504819);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.667397);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.096547);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.226709);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.546851);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.024059);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.593357);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.9961);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.643882);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6405464);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7449676);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8026807);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7164649);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4913453);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5448961);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6071755);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5926735);
   hNCpi0inFVres_stack_7->SetBinError(9,0.620335);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6126894);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6130818);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6845101);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6059994);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7953262);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5669482);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6608417);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4703556);
   hNCpi0inFVres_stack_7->SetBinError(18,0.637714);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5103035);
   hNCpi0inFVres_stack_7->SetBinError(20,0.534396);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4988379);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5352803);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4826859);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5097291);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6096582);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.094676);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.302792);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.9307007);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.165659);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.761627);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7297527);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.195773);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.002277);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.050902);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.127811);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.621011);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.446553);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.036551);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.099387);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9259005);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.229475);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.22495);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6944785);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.9525306);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.009057);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.23456);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.945173);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.201951);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.097964);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.799564);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6753539);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7535616);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2268376);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3482178);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5059943);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.236418);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4752149);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3007311);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4288703);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2742374);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4963684);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4080374);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6928287);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3143028);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2775803);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3726403);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3175766);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2835771);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3616751);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2976531);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8335458);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6262529);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3740885);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3061435);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6201372);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,9.746376);
   hCCpi0inFV_stack_10->SetBinContent(2,5.809591);
   hCCpi0inFV_stack_10->SetBinContent(3,3.83457);
   hCCpi0inFV_stack_10->SetBinContent(4,6.138341);
   hCCpi0inFV_stack_10->SetBinContent(5,4.816236);
   hCCpi0inFV_stack_10->SetBinContent(6,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(7,4.909997);
   hCCpi0inFV_stack_10->SetBinContent(8,4.73458);
   hCCpi0inFV_stack_10->SetBinContent(9,5.276777);
   hCCpi0inFV_stack_10->SetBinContent(10,3.860246);
   hCCpi0inFV_stack_10->SetBinContent(11,4.559743);
   hCCpi0inFV_stack_10->SetBinContent(12,5.673234);
   hCCpi0inFV_stack_10->SetBinContent(13,7.533617);
   hCCpi0inFV_stack_10->SetBinContent(14,8.772202);
   hCCpi0inFV_stack_10->SetBinContent(15,5.766301);
   hCCpi0inFV_stack_10->SetBinContent(16,4.877514);
   hCCpi0inFV_stack_10->SetBinContent(17,4.341635);
   hCCpi0inFV_stack_10->SetBinContent(18,5.547925);
   hCCpi0inFV_stack_10->SetBinContent(19,3.264468);
   hCCpi0inFV_stack_10->SetBinContent(20,4.937217);
   hCCpi0inFV_stack_10->SetBinContent(21,4.302989);
   hCCpi0inFV_stack_10->SetBinContent(22,5.186156);
   hCCpi0inFV_stack_10->SetBinContent(23,4.783204);
   hCCpi0inFV_stack_10->SetBinContent(24,4.696712);
   hCCpi0inFV_stack_10->SetBinContent(25,6.149029);
   hCCpi0inFV_stack_10->SetBinError(1,1.596076);
   hCCpi0inFV_stack_10->SetBinError(2,1.226987);
   hCCpi0inFV_stack_10->SetBinError(3,0.9675577);
   hCCpi0inFV_stack_10->SetBinError(4,1.190095);
   hCCpi0inFV_stack_10->SetBinError(5,1.115928);
   hCCpi0inFV_stack_10->SetBinError(6,0.809167);
   hCCpi0inFV_stack_10->SetBinError(7,1.193299);
   hCCpi0inFV_stack_10->SetBinError(8,1.064972);
   hCCpi0inFV_stack_10->SetBinError(9,1.13643);
   hCCpi0inFV_stack_10->SetBinError(10,0.9629381);
   hCCpi0inFV_stack_10->SetBinError(11,1.059475);
   hCCpi0inFV_stack_10->SetBinError(12,1.14379);
   hCCpi0inFV_stack_10->SetBinError(13,1.325175);
   hCCpi0inFV_stack_10->SetBinError(14,1.507808);
   hCCpi0inFV_stack_10->SetBinError(15,1.219194);
   hCCpi0inFV_stack_10->SetBinError(16,1.100245);
   hCCpi0inFV_stack_10->SetBinError(17,1.092871);
   hCCpi0inFV_stack_10->SetBinError(18,1.232216);
   hCCpi0inFV_stack_10->SetBinError(19,0.9403223);
   hCCpi0inFV_stack_10->SetBinError(20,1.083176);
   hCCpi0inFV_stack_10->SetBinError(21,1.019817);
   hCCpi0inFV_stack_10->SetBinError(22,1.179997);
   hCCpi0inFV_stack_10->SetBinError(23,1.075221);
   hCCpi0inFV_stack_10->SetBinError(24,1.086048);
   hCCpi0inFV_stack_10->SetBinError(25,1.302427);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.8216121);
   hNCinFV_stack_11->SetBinContent(2,1.649433);
   hNCinFV_stack_11->SetBinContent(3,1.909545);
   hNCinFV_stack_11->SetBinContent(4,0.6960077);
   hNCinFV_stack_11->SetBinContent(5,1.137903);
   hNCinFV_stack_11->SetBinContent(6,1.67773);
   hNCinFV_stack_11->SetBinContent(7,1.478675);
   hNCinFV_stack_11->SetBinContent(8,1.023342);
   hNCinFV_stack_11->SetBinContent(9,1.466392);
   hNCinFV_stack_11->SetBinContent(10,1.08202);
   hNCinFV_stack_11->SetBinContent(11,0.7199718);
   hNCinFV_stack_11->SetBinContent(12,2.477428);
   hNCinFV_stack_11->SetBinContent(13,1.635571);
   hNCinFV_stack_11->SetBinContent(14,1.411359);
   hNCinFV_stack_11->SetBinContent(15,3.302411);
   hNCinFV_stack_11->SetBinContent(16,1.012436);
   hNCinFV_stack_11->SetBinContent(17,0.9257103);
   hNCinFV_stack_11->SetBinContent(18,0.7959937);
   hNCinFV_stack_11->SetBinContent(19,0.8587513);
   hNCinFV_stack_11->SetBinContent(20,0.6103584);
   hNCinFV_stack_11->SetBinContent(21,1.976066);
   hNCinFV_stack_11->SetBinContent(22,1.891378);
   hNCinFV_stack_11->SetBinContent(23,2.124825);
   hNCinFV_stack_11->SetBinContent(24,2.440935);
   hNCinFV_stack_11->SetBinContent(25,0.6568091);
   hNCinFV_stack_11->SetBinError(1,0.3779805);
   hNCinFV_stack_11->SetBinError(2,0.625348);
   hNCinFV_stack_11->SetBinError(3,0.7057832);
   hNCinFV_stack_11->SetBinError(4,0.5376045);
   hNCinFV_stack_11->SetBinError(5,0.551307);
   hNCinFV_stack_11->SetBinError(6,0.8477859);
   hNCinFV_stack_11->SetBinError(7,0.5138358);
   hNCinFV_stack_11->SetBinError(8,0.4277669);
   hNCinFV_stack_11->SetBinError(9,0.5869424);
   hNCinFV_stack_11->SetBinError(10,0.4353615);
   hNCinFV_stack_11->SetBinError(11,0.3643145);
   hNCinFV_stack_11->SetBinError(12,0.7685751);
   hNCinFV_stack_11->SetBinError(13,0.6049788);
   hNCinFV_stack_11->SetBinError(14,0.6336291);
   hNCinFV_stack_11->SetBinError(15,1.17008);
   hNCinFV_stack_11->SetBinError(16,0.5845678);
   hNCinFV_stack_11->SetBinError(17,0.4525606);
   hNCinFV_stack_11->SetBinError(18,0.3695136);
   hNCinFV_stack_11->SetBinError(19,0.4564084);
   hNCinFV_stack_11->SetBinError(20,0.3525028);
   hNCinFV_stack_11->SetBinError(21,1.108192);
   hNCinFV_stack_11->SetBinError(22,0.7576834);
   hNCinFV_stack_11->SetBinError(23,0.7721888);
   hNCinFV_stack_11->SetBinError(24,0.9420316);
   hNCinFV_stack_11->SetBinError(25,0.4108499);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,5.753924);
   hnumuCCinFV_stack_12->SetBinContent(2,6.00193);
   hnumuCCinFV_stack_12->SetBinContent(3,3.671471);
   hnumuCCinFV_stack_12->SetBinContent(4,4.667687);
   hnumuCCinFV_stack_12->SetBinContent(5,1.314401);
   hnumuCCinFV_stack_12->SetBinContent(6,2.615653);
   hnumuCCinFV_stack_12->SetBinContent(7,2.891609);
   hnumuCCinFV_stack_12->SetBinContent(8,2.734337);
   hnumuCCinFV_stack_12->SetBinContent(9,4.248109);
   hnumuCCinFV_stack_12->SetBinContent(10,5.355086);
   hnumuCCinFV_stack_12->SetBinContent(11,7.519108);
   hnumuCCinFV_stack_12->SetBinContent(12,7.653333);
   hnumuCCinFV_stack_12->SetBinContent(13,6.620655);
   hnumuCCinFV_stack_12->SetBinContent(14,9.317359);
   hnumuCCinFV_stack_12->SetBinContent(15,7.975974);
   hnumuCCinFV_stack_12->SetBinContent(16,5.973769);
   hnumuCCinFV_stack_12->SetBinContent(17,2.086041);
   hnumuCCinFV_stack_12->SetBinContent(18,3.701151);
   hnumuCCinFV_stack_12->SetBinContent(19,5.12588);
   hnumuCCinFV_stack_12->SetBinContent(20,3.525619);
   hnumuCCinFV_stack_12->SetBinContent(21,2.735571);
   hnumuCCinFV_stack_12->SetBinContent(22,2.762769);
   hnumuCCinFV_stack_12->SetBinContent(23,2.732946);
   hnumuCCinFV_stack_12->SetBinContent(24,4.25559);
   hnumuCCinFV_stack_12->SetBinContent(25,5.078713);
   hnumuCCinFV_stack_12->SetBinError(1,1.234436);
   hnumuCCinFV_stack_12->SetBinError(2,1.362991);
   hnumuCCinFV_stack_12->SetBinError(3,0.9140265);
   hnumuCCinFV_stack_12->SetBinError(4,1.312926);
   hnumuCCinFV_stack_12->SetBinError(5,0.6289063);
   hnumuCCinFV_stack_12->SetBinError(6,0.7935889);
   hnumuCCinFV_stack_12->SetBinError(7,0.9030473);
   hnumuCCinFV_stack_12->SetBinError(8,0.8558255);
   hnumuCCinFV_stack_12->SetBinError(9,1.078528);
   hnumuCCinFV_stack_12->SetBinError(10,1.481405);
   hnumuCCinFV_stack_12->SetBinError(11,1.943042);
   hnumuCCinFV_stack_12->SetBinError(12,1.73707);
   hnumuCCinFV_stack_12->SetBinError(13,1.374756);
   hnumuCCinFV_stack_12->SetBinError(14,1.601495);
   hnumuCCinFV_stack_12->SetBinError(15,1.95924);
   hnumuCCinFV_stack_12->SetBinError(16,1.265863);
   hnumuCCinFV_stack_12->SetBinError(17,0.7175447);
   hnumuCCinFV_stack_12->SetBinError(18,1.02117);
   hnumuCCinFV_stack_12->SetBinError(19,1.500547);
   hnumuCCinFV_stack_12->SetBinError(20,0.9017652);
   hnumuCCinFV_stack_12->SetBinError(21,0.894234);
   hnumuCCinFV_stack_12->SetBinError(22,1.057102);
   hnumuCCinFV_stack_12->SetBinError(23,0.8950066);
   hnumuCCinFV_stack_12->SetBinError(24,1.068464);
   hnumuCCinFV_stack_12->SetBinError(25,1.28554);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,1.957977);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(14,0.4031327);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(23,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(24,1.354146);
   hnueCCinFV_stack_13->SetBinError(2,0.3654046);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,1.593848);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.4041031);
   hnueCCinFV_stack_13->SetBinError(14,0.2932406);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.2945335);
   hnueCCinFV_stack_13->SetBinError(23,0.2331833);
   hnueCCinFV_stack_13->SetBinError(24,1.174028);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__26->SetBinContent(1,34.93851);
   hmcerror__26->SetBinContent(2,27.80564);
   hmcerror__26->SetBinContent(3,22.14036);
   hmcerror__26->SetBinContent(4,27.17686);
   hmcerror__26->SetBinContent(5,20.4081);
   hmcerror__26->SetBinContent(6,24.74109);
   hmcerror__26->SetBinContent(7,30.55172);
   hmcerror__26->SetBinContent(8,20.86391);
   hmcerror__26->SetBinContent(9,23.57796);
   hmcerror__26->SetBinContent(10,22.64652);
   hmcerror__26->SetBinContent(11,26.15664);
   hmcerror__26->SetBinContent(12,28.21107);
   hmcerror__26->SetBinContent(13,28.80555);
   hmcerror__26->SetBinContent(14,35.32375);
   hmcerror__26->SetBinContent(15,27.87551);
   hmcerror__26->SetBinContent(16,30.73626);
   hmcerror__26->SetBinContent(17,21.36016);
   hmcerror__26->SetBinContent(18,27.63848);
   hmcerror__26->SetBinContent(19,27.30071);
   hmcerror__26->SetBinContent(20,25.25332);
   hmcerror__26->SetBinContent(21,23.70913);
   hmcerror__26->SetBinContent(22,29.69688);
   hmcerror__26->SetBinContent(23,18.08849);
   hmcerror__26->SetBinContent(24,26.09713);
   hmcerror__26->SetBinContent(25,29.48538);
   hmcerror__26->SetBinError(1,12.73008);
   hmcerror__26->SetBinError(2,13.5344);
   hmcerror__26->SetBinError(3,11.57764);
   hmcerror__26->SetBinError(4,17.12679);
   hmcerror__26->SetBinError(5,10.10835);
   hmcerror__26->SetBinError(6,10.63069);
   hmcerror__26->SetBinError(7,12.54394);
   hmcerror__26->SetBinError(8,12.50494);
   hmcerror__26->SetBinError(9,13.62452);
   hmcerror__26->SetBinError(10,15.19941);
   hmcerror__26->SetBinError(11,11.08904);
   hmcerror__26->SetBinError(12,18.35017);
   hmcerror__26->SetBinError(13,16.9232);
   hmcerror__26->SetBinError(14,24.982);
   hmcerror__26->SetBinError(15,21.48825);
   hmcerror__26->SetBinError(16,17.10756);
   hmcerror__26->SetBinError(17,8.656648);
   hmcerror__26->SetBinError(18,14.49847);
   hmcerror__26->SetBinError(19,16.60626);
   hmcerror__26->SetBinError(20,11.53141);
   hmcerror__26->SetBinError(21,14.46695);
   hmcerror__26->SetBinError(22,16.18691);
   hmcerror__26->SetBinError(23,9.935591);
   hmcerror__26->SetBinError(24,13.16933);
   hmcerror__26->SetBinError(25,15.00259);
   hmcerror__26->SetBinError(26,0.3895343);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3033[25] = {
   31,
   31,
   19,
   15,
   23,
   20,
   29,
   23,
   21,
   30,
   24,
   31,
   30,
   30,
   17,
   26,
   22,
   18,
   26,
   24,
   16,
   17,
   9,
   29,
   24};
   Double_t _felx3033[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3033[25] = {
   5.7094,
   5.7094,
   4.5151,
   4.0385,
   4.9457,
   4.6266,
   5.5285,
   4.9457,
   4.7354,
   5.6197,
   5.0476,
   5.7094,
   5.6197,
   5.6197,
   4.2835,
   5.2453,
   4.8417,
   4.4008,
   5.2453,
   5.0476,
   4.1628,
   4.2835,
   3.19354,
   5.5285,
   5.0476};
   Double_t _fehx3033[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3033[25] = {
   5.5017,
   5.5017,
   4.3011,
   3.8197,
   4.7346,
   4.4133,
   5.3201,
   4.7346,
   4.5229,
   5.4117,
   4.837,
   5.5017,
   5.4117,
   5.4117,
   4.0673,
   5.0358,
   4.6299,
   4.1858,
   5.0358,
   4.837,
   3.9454,
   4.0673,
   2.9582,
   5.3201,
   4.837};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(2.736936);
   Graph_Graph3033->SetMaximum(39.57122);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.5","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.9","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3034[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3034[25] = {
   0.3643566,
   0.48675,
   0.5229203,
   0.6301976,
   0.4953106,
   0.4296776,
   0.4105804,
   0.5993571,
   0.5778499,
   0.6711587,
   0.4239473,
   0.6504596,
   0.587498,
   0.7072297,
   0.7708649,
   0.5565923,
   0.4052707,
   0.5245757,
   0.608272,
   0.4566294,
   0.6101846,
   0.5450711,
   0.549277,
   0.5046274,
   0.5088146};
   Double_t _fehx3034[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3034[25] = {
   0.3643566,
   0.48675,
   0.5229203,
   0.6301976,
   0.4953106,
   0.4296776,
   0.4105804,
   0.5993571,
   0.5778499,
   0.6711587,
   0.4239473,
   0.6504596,
   0.587498,
   0.7072297,
   0.7708649,
   0.5565923,
   0.4052707,
   0.5245757,
   0.608272,
   0.4566294,
   0.6101846,
   0.5450711,
   0.549277,
   0.5046274,
   0.5088146};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-3.78,3.78);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3035[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3035[25] = {
   0.2238617,
   0.2683515,
   0.3166709,
   0.2916283,
   0.2911705,
   0.261553,
   0.2010855,
   0.2946966,
   0.2683411,
   0.3270244,
   0.2740711,
   0.2908336,
   0.2877691,
   0.2352116,
   0.258409,
   0.2716247,
   0.2581187,
   0.2776066,
   0.2523049,
   0.2292879,
   0.239546,
   0.2330694,
   0.3260695,
   0.2995827,
   0.2513397};
   Double_t _fehx3035[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3035[25] = {
   0.2238617,
   0.2683515,
   0.3166709,
   0.2916283,
   0.2911705,
   0.261553,
   0.2010855,
   0.2946966,
   0.2683411,
   0.3270244,
   0.2740711,
   0.2908336,
   0.2877691,
   0.2352116,
   0.258409,
   0.2716247,
   0.2581187,
   0.2776066,
   0.2523049,
   0.2292879,
   0.239546,
   0.2330694,
   0.3260695,
   0.2995827,
   0.2513397};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-3.78,3.78);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3036[25] = {
   0.8872732,
   1.114882,
   0.8581614,
   0.55194,
   1.127003,
   0.8083719,
   0.9492101,
   1.102382,
   0.8906624,
   1.324707,
   0.9175489,
   1.098859,
   1.041466,
   0.8492871,
   0.6098544,
   0.8459064,
   1.029955,
   0.651266,
   0.9523562,
   0.9503702,
   0.6748454,
   0.5724506,
   0.497554,
   1.111233,
   0.8139628};
   Double_t _felx3036[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3036[25] = {
   0.1634128,
   0.2053324,
   0.2039308,
   0.1486007,
   0.24234,
   0.1870007,
   0.1809554,
   0.2370456,
   0.2008401,
   0.2481485,
   0.1929758,
   0.2023815,
   0.1950909,
   0.1590913,
   0.1536654,
   0.1706551,
   0.2266696,
   0.1592273,
   0.1921305,
   0.1998787,
   0.1755779,
   0.1442407,
   0.1765509,
   0.2118432,
   0.1711899};
   Double_t _fehx3036[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3036[25] = {
   0.1574681,
   0.1978627,
   0.1942652,
   0.1405497,
   0.2319961,
   0.1783794,
   0.1741342,
   0.2269277,
   0.1918275,
   0.2389638,
   0.1849243,
   0.1950192,
   0.18787,
   0.1532029,
   0.1459095,
   0.1638391,
   0.2167539,
   0.1514483,
   0.1844567,
   0.1915392,
   0.1664084,
   0.1369605,
   0.1635405,
   0.2038577,
   0.1640474};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.1967363);
   Graph_Graph3036->SetMaximum(1.687937);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

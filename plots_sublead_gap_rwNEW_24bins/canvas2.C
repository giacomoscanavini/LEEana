#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 13:27:15 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-18.02887,101.5385,1993.613);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__4->SetBinContent(1,901.4433);
   hmc__4->SetBinContent(2,384.9177);
   hmc__4->SetBinContent(3,407.7659);
   hmc__4->SetBinContent(4,397.1771);
   hmc__4->SetBinContent(5,387.3026);
   hmc__4->SetBinContent(6,358.151);
   hmc__4->SetBinContent(7,326.4274);
   hmc__4->SetBinContent(8,288.7473);
   hmc__4->SetBinContent(9,251.9212);
   hmc__4->SetBinContent(10,237.9056);
   hmc__4->SetBinContent(11,189.0351);
   hmc__4->SetBinContent(12,180.8079);
   hmc__4->SetBinContent(13,160.202);
   hmc__4->SetBinContent(14,140.1799);
   hmc__4->SetBinContent(15,112.6737);
   hmc__4->SetBinContent(16,96.56035);
   hmc__4->SetBinContent(17,87.00818);
   hmc__4->SetBinContent(18,82.08411);
   hmc__4->SetBinContent(19,74.34213);
   hmc__4->SetBinContent(20,52.93699);
   hmc__4->SetBinContent(21,51.81813);
   hmc__4->SetBinContent(22,51.17035);
   hmc__4->SetBinContent(23,43.46343);
   hmc__4->SetBinContent(24,36.84391);
   hmc__4->SetBinContent(25,487.8703);
   hmc__4->SetBinError(1,226.242);
   hmc__4->SetBinError(2,116.7382);
   hmc__4->SetBinError(3,112.6526);
   hmc__4->SetBinError(4,114.0084);
   hmc__4->SetBinError(5,115.7082);
   hmc__4->SetBinError(6,95.8069);
   hmc__4->SetBinError(7,94.48005);
   hmc__4->SetBinError(8,83.37754);
   hmc__4->SetBinError(9,67.9568);
   hmc__4->SetBinError(10,61.99203);
   hmc__4->SetBinError(11,53.41819);
   hmc__4->SetBinError(12,48.77784);
   hmc__4->SetBinError(13,42.57411);
   hmc__4->SetBinError(14,39.13977);
   hmc__4->SetBinError(15,34.41364);
   hmc__4->SetBinError(16,30.41955);
   hmc__4->SetBinError(17,24.55298);
   hmc__4->SetBinError(18,27.58865);
   hmc__4->SetBinError(19,27.465);
   hmc__4->SetBinError(20,17.44678);
   hmc__4->SetBinError(21,17.67101);
   hmc__4->SetBinError(22,15.67103);
   hmc__4->SetBinError(23,21.32773);
   hmc__4->SetBinError(24,14.84671);
   hmc__4->SetBinError(25,121.2532);
   hmc__4->SetMinimum(-18.02887);
   hmc__4->SetMaximum(1893.031);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,90);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(946.5155);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,20.06624);
   hbadmatch_stack_1->SetBinContent(2,2.973131);
   hbadmatch_stack_1->SetBinContent(3,7.481494);
   hbadmatch_stack_1->SetBinContent(4,10.67654);
   hbadmatch_stack_1->SetBinContent(5,4.813108);
   hbadmatch_stack_1->SetBinContent(6,5.712065);
   hbadmatch_stack_1->SetBinContent(7,5.305476);
   hbadmatch_stack_1->SetBinContent(8,5.615687);
   hbadmatch_stack_1->SetBinContent(9,2.812695);
   hbadmatch_stack_1->SetBinContent(10,6.104663);
   hbadmatch_stack_1->SetBinContent(11,4.897674);
   hbadmatch_stack_1->SetBinContent(12,2.734337);
   hbadmatch_stack_1->SetBinContent(13,3.157242);
   hbadmatch_stack_1->SetBinContent(14,2.798014);
   hbadmatch_stack_1->SetBinContent(15,4.056106);
   hbadmatch_stack_1->SetBinContent(16,3.098905);
   hbadmatch_stack_1->SetBinContent(17,1.938673);
   hbadmatch_stack_1->SetBinContent(18,3.020526);
   hbadmatch_stack_1->SetBinContent(19,2.28152);
   hbadmatch_stack_1->SetBinContent(20,2.040601);
   hbadmatch_stack_1->SetBinContent(21,2.021369);
   hbadmatch_stack_1->SetBinContent(22,1.734989);
   hbadmatch_stack_1->SetBinContent(23,0.682102);
   hbadmatch_stack_1->SetBinContent(24,1.825823);
   hbadmatch_stack_1->SetBinContent(25,16.22575);
   hbadmatch_stack_1->SetBinError(1,2.399168);
   hbadmatch_stack_1->SetBinError(2,0.8061227);
   hbadmatch_stack_1->SetBinError(3,1.401037);
   hbadmatch_stack_1->SetBinError(4,2.619357);
   hbadmatch_stack_1->SetBinError(5,1.266528);
   hbadmatch_stack_1->SetBinError(6,1.263201);
   hbadmatch_stack_1->SetBinError(7,1.203073);
   hbadmatch_stack_1->SetBinError(8,1.442646);
   hbadmatch_stack_1->SetBinError(9,0.8898811);
   hbadmatch_stack_1->SetBinError(10,1.991375);
   hbadmatch_stack_1->SetBinError(11,1.14332);
   hbadmatch_stack_1->SetBinError(12,0.8558255);
   hbadmatch_stack_1->SetBinError(13,0.8275062);
   hbadmatch_stack_1->SetBinError(14,0.8356343);
   hbadmatch_stack_1->SetBinError(15,1.778064);
   hbadmatch_stack_1->SetBinError(16,0.8843956);
   hbadmatch_stack_1->SetBinError(17,0.8008282);
   hbadmatch_stack_1->SetBinError(18,0.8334491);
   hbadmatch_stack_1->SetBinError(19,0.7434845);
   hbadmatch_stack_1->SetBinError(20,0.8003974);
   hbadmatch_stack_1->SetBinError(21,0.7591263);
   hbadmatch_stack_1->SetBinError(22,0.6685297);
   hbadmatch_stack_1->SetBinError(23,0.481087);
   hbadmatch_stack_1->SetBinError(24,0.7236158);
   hbadmatch_stack_1->SetBinError(25,2.226025);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,75.99075);
   hext_stack_2->SetBinContent(2,17.3392);
   hext_stack_2->SetBinContent(3,28.63012);
   hext_stack_2->SetBinContent(4,28.2307);
   hext_stack_2->SetBinContent(5,29.06707);
   hext_stack_2->SetBinContent(6,32.66291);
   hext_stack_2->SetBinContent(7,19.64909);
   hext_stack_2->SetBinContent(8,22.97685);
   hext_stack_2->SetBinContent(9,24.94918);
   hext_stack_2->SetBinContent(10,23.90097);
   hext_stack_2->SetBinContent(11,10.63337);
   hext_stack_2->SetBinContent(12,19.49628);
   hext_stack_2->SetBinContent(13,12.23381);
   hext_stack_2->SetBinContent(14,13.76201);
   hext_stack_2->SetBinContent(15,6.978384);
   hext_stack_2->SetBinContent(16,4.710375);
   hext_stack_2->SetBinContent(17,13.63672);
   hext_stack_2->SetBinContent(18,5.82202);
   hext_stack_2->SetBinContent(19,8.242843);
   hext_stack_2->SetBinContent(20,3.57278);
   hext_stack_2->SetBinContent(21,3.166181);
   hext_stack_2->SetBinContent(22,6.628036);
   hext_stack_2->SetBinContent(23,4.214394);
   hext_stack_2->SetBinContent(24,3.379654);
   hext_stack_2->SetBinContent(25,46.87901);
   hext_stack_2->SetBinError(1,5.950496);
   hext_stack_2->SetBinError(2,2.691479);
   hext_stack_2->SetBinError(3,3.634487);
   hext_stack_2->SetBinError(4,3.583709);
   hext_stack_2->SetBinError(5,3.611296);
   hext_stack_2->SetBinError(6,4.106436);
   hext_stack_2->SetBinError(7,3.041051);
   hext_stack_2->SetBinError(8,3.487445);
   hext_stack_2->SetBinError(9,3.510726);
   hext_stack_2->SetBinError(10,3.427565);
   hext_stack_2->SetBinError(11,2.038213);
   hext_stack_2->SetBinError(12,3.010271);
   hext_stack_2->SetBinError(13,2.298714);
   hext_stack_2->SetBinError(14,2.411689);
   hext_stack_2->SetBinError(15,1.673777);
   hext_stack_2->SetBinError(16,1.314751);
   hext_stack_2->SetBinError(17,2.638818);
   hext_stack_2->SetBinError(18,1.622631);
   hext_stack_2->SetBinError(19,1.972853);
   hext_stack_2->SetBinError(20,1.136966);
   hext_stack_2->SetBinError(21,1.061777);
   hext_stack_2->SetBinError(22,1.778983);
   hext_stack_2->SetBinError(23,1.305512);
   hext_stack_2->SetBinError(24,1.406172);
   hext_stack_2->SetBinError(25,4.666079);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,7.991937);
   hdirt_stack_3->SetBinContent(2,2.8968);
   hdirt_stack_3->SetBinContent(3,3.224808);
   hdirt_stack_3->SetBinContent(4,3.535466);
   hdirt_stack_3->SetBinContent(5,4.128477);
   hdirt_stack_3->SetBinContent(6,3.460287);
   hdirt_stack_3->SetBinContent(7,1.261043);
   hdirt_stack_3->SetBinContent(8,2.179746);
   hdirt_stack_3->SetBinContent(9,2.34762);
   hdirt_stack_3->SetBinContent(10,0.9396383);
   hdirt_stack_3->SetBinContent(11,1.271017);
   hdirt_stack_3->SetBinContent(12,0.9550726);
   hdirt_stack_3->SetBinContent(13,1.23709);
   hdirt_stack_3->SetBinContent(14,1.51373);
   hdirt_stack_3->SetBinContent(15,0.5250287);
   hdirt_stack_3->SetBinContent(16,1.362881);
   hdirt_stack_3->SetBinContent(17,1.23266);
   hdirt_stack_3->SetBinContent(18,1.044806);
   hdirt_stack_3->SetBinContent(19,0.8332258);
   hdirt_stack_3->SetBinContent(20,0.3840755);
   hdirt_stack_3->SetBinContent(21,0.7050098);
   hdirt_stack_3->SetBinContent(22,0.4003859);
   hdirt_stack_3->SetBinContent(23,0.6951543);
   hdirt_stack_3->SetBinContent(25,5.138704);
   hdirt_stack_3->SetBinError(1,1.424374);
   hdirt_stack_3->SetBinError(2,0.9011657);
   hdirt_stack_3->SetBinError(3,0.9263805);
   hdirt_stack_3->SetBinError(4,1.225962);
   hdirt_stack_3->SetBinError(5,1.188592);
   hdirt_stack_3->SetBinError(6,0.9383536);
   hdirt_stack_3->SetBinError(7,0.543052);
   hdirt_stack_3->SetBinError(8,0.777737);
   hdirt_stack_3->SetBinError(9,1.186653);
   hdirt_stack_3->SetBinError(10,0.4868118);
   hdirt_stack_3->SetBinError(11,0.5442829);
   hdirt_stack_3->SetBinError(12,0.5165996);
   hdirt_stack_3->SetBinError(13,0.536403);
   hdirt_stack_3->SetBinError(14,0.6508631);
   hdirt_stack_3->SetBinError(15,0.3099441);
   hdirt_stack_3->SetBinError(16,0.6516801);
   hdirt_stack_3->SetBinError(17,0.65016);
   hdirt_stack_3->SetBinError(18,0.4804485);
   hdirt_stack_3->SetBinError(19,0.4476755);
   hdirt_stack_3->SetBinError(20,0.2742256);
   hdirt_stack_3->SetBinError(21,0.4310004);
   hdirt_stack_3->SetBinError(22,0.4003858);
   hdirt_stack_3->SetBinError(23,0.4258516);
   hdirt_stack_3->SetBinError(25,1.21917);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,68.23421);
   houtFV_stack_4->SetBinContent(2,18.61432);
   houtFV_stack_4->SetBinContent(3,24.37056);
   houtFV_stack_4->SetBinContent(4,20.98712);
   houtFV_stack_4->SetBinContent(5,20.95212);
   houtFV_stack_4->SetBinContent(6,22.64492);
   houtFV_stack_4->SetBinContent(7,18.94704);
   houtFV_stack_4->SetBinContent(8,19.95021);
   houtFV_stack_4->SetBinContent(9,13.45893);
   houtFV_stack_4->SetBinContent(10,21.15093);
   houtFV_stack_4->SetBinContent(11,16.81133);
   houtFV_stack_4->SetBinContent(12,15.64453);
   houtFV_stack_4->SetBinContent(13,12.27897);
   houtFV_stack_4->SetBinContent(14,9.194724);
   houtFV_stack_4->SetBinContent(15,8.337508);
   houtFV_stack_4->SetBinContent(16,8.408106);
   houtFV_stack_4->SetBinContent(17,5.511784);
   houtFV_stack_4->SetBinContent(18,6.107002);
   houtFV_stack_4->SetBinContent(19,4.270298);
   houtFV_stack_4->SetBinContent(20,6.529415);
   houtFV_stack_4->SetBinContent(21,4.989498);
   houtFV_stack_4->SetBinContent(22,4.297917);
   houtFV_stack_4->SetBinContent(23,2.88118);
   houtFV_stack_4->SetBinContent(24,2.541003);
   houtFV_stack_4->SetBinContent(25,40.10978);
   houtFV_stack_4->SetBinError(1,4.157535);
   houtFV_stack_4->SetBinError(2,2.04674);
   houtFV_stack_4->SetBinError(3,2.433972);
   houtFV_stack_4->SetBinError(4,2.307677);
   houtFV_stack_4->SetBinError(5,2.271349);
   houtFV_stack_4->SetBinError(6,2.39547);
   houtFV_stack_4->SetBinError(7,2.116062);
   houtFV_stack_4->SetBinError(8,2.226349);
   houtFV_stack_4->SetBinError(9,1.789963);
   houtFV_stack_4->SetBinError(10,2.356942);
   houtFV_stack_4->SetBinError(11,2.08404);
   houtFV_stack_4->SetBinError(12,2.049629);
   houtFV_stack_4->SetBinError(13,1.724619);
   houtFV_stack_4->SetBinError(14,1.481715);
   houtFV_stack_4->SetBinError(15,1.465461);
   houtFV_stack_4->SetBinError(16,1.423962);
   houtFV_stack_4->SetBinError(17,1.192717);
   houtFV_stack_4->SetBinError(18,1.24123);
   houtFV_stack_4->SetBinError(19,1.071612);
   houtFV_stack_4->SetBinError(20,1.310848);
   houtFV_stack_4->SetBinError(21,1.037058);
   houtFV_stack_4->SetBinError(22,1.018842);
   houtFV_stack_4->SetBinError(23,0.9004364);
   houtFV_stack_4->SetBinError(24,0.8337055);
   houtFV_stack_4->SetBinError(25,3.198073);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,12.21677);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.912336);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.887092);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.70649);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.959085);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.507614);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.837846);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.652756);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.763187);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.193234);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.126064);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.731384);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.13253);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.149724);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.013384);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.339872);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.617544);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.59114);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.821558);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4321178);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.253844);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4600178);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,9.130469);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.177857);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8278512);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.794096);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8530893);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8605467);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7543392);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7194351);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6314647);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5630961);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5769799);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7102703);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4919598);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.452824);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6045412);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6370902);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4103648);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4507425);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4562498);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2990883);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1371558);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3755322);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1399647);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9289492);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.86317);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.504776);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.589972);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.53958);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.338872);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.059704);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.351826);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.003904);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.213822);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.422908);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9904539);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9484402);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.632658);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6458371);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3395161);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3512547);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5885569);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3411366);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2753746);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3701385);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2725332);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3726713);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.429217);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.316066);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3718002);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.4648418);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,344.3055);
   hNCpi0inFVres_stack_7->SetBinContent(2,195.4606);
   hNCpi0inFVres_stack_7->SetBinContent(3,185.6308);
   hNCpi0inFVres_stack_7->SetBinContent(4,190.3248);
   hNCpi0inFVres_stack_7->SetBinContent(5,178.9328);
   hNCpi0inFVres_stack_7->SetBinContent(6,160.686);
   hNCpi0inFVres_stack_7->SetBinContent(7,148.4698);
   hNCpi0inFVres_stack_7->SetBinContent(8,133.9768);
   hNCpi0inFVres_stack_7->SetBinContent(9,114.4449);
   hNCpi0inFVres_stack_7->SetBinContent(10,96.97064);
   hNCpi0inFVres_stack_7->SetBinContent(11,80.78874);
   hNCpi0inFVres_stack_7->SetBinContent(12,74.30132);
   hNCpi0inFVres_stack_7->SetBinContent(13,67.64233);
   hNCpi0inFVres_stack_7->SetBinContent(14,59.73101);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.20222);
   hNCpi0inFVres_stack_7->SetBinContent(16,41.48332);
   hNCpi0inFVres_stack_7->SetBinContent(17,32.43104);
   hNCpi0inFVres_stack_7->SetBinContent(18,32.33757);
   hNCpi0inFVres_stack_7->SetBinContent(19,28.37277);
   hNCpi0inFVres_stack_7->SetBinContent(20,22.03195);
   hNCpi0inFVres_stack_7->SetBinContent(21,21.11142);
   hNCpi0inFVres_stack_7->SetBinContent(22,16.29814);
   hNCpi0inFVres_stack_7->SetBinContent(23,18.06051);
   hNCpi0inFVres_stack_7->SetBinContent(24,15.129);
   hNCpi0inFVres_stack_7->SetBinContent(25,164.0982);
   hNCpi0inFVres_stack_7->SetBinError(1,6.081474);
   hNCpi0inFVres_stack_7->SetBinError(2,4.619057);
   hNCpi0inFVres_stack_7->SetBinError(3,4.40208);
   hNCpi0inFVres_stack_7->SetBinError(4,4.557038);
   hNCpi0inFVres_stack_7->SetBinError(5,4.384787);
   hNCpi0inFVres_stack_7->SetBinError(6,4.120744);
   hNCpi0inFVres_stack_7->SetBinError(7,3.979446);
   hNCpi0inFVres_stack_7->SetBinError(8,3.845328);
   hNCpi0inFVres_stack_7->SetBinError(9,3.50771);
   hNCpi0inFVres_stack_7->SetBinError(10,3.187178);
   hNCpi0inFVres_stack_7->SetBinError(11,2.893387);
   hNCpi0inFVres_stack_7->SetBinError(12,2.800514);
   hNCpi0inFVres_stack_7->SetBinError(13,2.700121);
   hNCpi0inFVres_stack_7->SetBinError(14,2.532772);
   hNCpi0inFVres_stack_7->SetBinError(15,2.192589);
   hNCpi0inFVres_stack_7->SetBinError(16,2.110038);
   hNCpi0inFVres_stack_7->SetBinError(17,1.798123);
   hNCpi0inFVres_stack_7->SetBinError(18,1.882457);
   hNCpi0inFVres_stack_7->SetBinError(19,1.791673);
   hNCpi0inFVres_stack_7->SetBinError(20,1.510591);
   hNCpi0inFVres_stack_7->SetBinError(21,1.512929);
   hNCpi0inFVres_stack_7->SetBinError(22,1.245212);
   hNCpi0inFVres_stack_7->SetBinError(23,1.392383);
   hNCpi0inFVres_stack_7->SetBinError(24,1.268234);
   hNCpi0inFVres_stack_7->SetBinError(25,4.284559);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,62.81245);
   hNCpi0inFVdis_stack_8->SetBinContent(2,34.78995);
   hNCpi0inFVdis_stack_8->SetBinContent(3,37.08405);
   hNCpi0inFVdis_stack_8->SetBinContent(4,35.53413);
   hNCpi0inFVdis_stack_8->SetBinContent(5,35.17623);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.31735);
   hNCpi0inFVdis_stack_8->SetBinContent(7,26.7074);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.39937);
   hNCpi0inFVdis_stack_8->SetBinContent(9,22.79755);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.1903);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.66673);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.38901);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.21568);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.53047);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.79053);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.503804);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.723684);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.607339);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.418505);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.736288);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.025497);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.764852);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.522793);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.62228);
   hNCpi0inFVdis_stack_8->SetBinContent(25,32.69958);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.584201);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.943678);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.96284);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.98837);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.950441);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.675215);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.747835);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.452332);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.575294);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.486086);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.20943);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.396361);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.160183);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.077958);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.061157);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9024916);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.942434);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8043627);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.584907);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.606897);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5125598);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5963301);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3878524);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5447104);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.81058);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4188362);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.277838);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,120.8146);
   hCCpi0inFV_stack_10->SetBinContent(2,50.63333);
   hCCpi0inFV_stack_10->SetBinContent(3,55.39192);
   hCCpi0inFV_stack_10->SetBinContent(4,52.22902);
   hCCpi0inFV_stack_10->SetBinContent(5,57.46722);
   hCCpi0inFV_stack_10->SetBinContent(6,50.95093);
   hCCpi0inFV_stack_10->SetBinContent(7,50.67139);
   hCCpi0inFV_stack_10->SetBinContent(8,41.83676);
   hCCpi0inFV_stack_10->SetBinContent(9,35.26244);
   hCCpi0inFV_stack_10->SetBinContent(10,32.37366);
   hCCpi0inFV_stack_10->SetBinContent(11,24.02274);
   hCCpi0inFV_stack_10->SetBinContent(12,22.71268);
   hCCpi0inFV_stack_10->SetBinContent(13,21.9367);
   hCCpi0inFV_stack_10->SetBinContent(14,20.3285);
   hCCpi0inFV_stack_10->SetBinContent(15,12.52061);
   hCCpi0inFV_stack_10->SetBinContent(16,16.24401);
   hCCpi0inFV_stack_10->SetBinContent(17,10.20351);
   hCCpi0inFV_stack_10->SetBinContent(18,10.32316);
   hCCpi0inFV_stack_10->SetBinContent(19,8.352628);
   hCCpi0inFV_stack_10->SetBinContent(20,5.325223);
   hCCpi0inFV_stack_10->SetBinContent(21,4.249735);
   hCCpi0inFV_stack_10->SetBinContent(22,8.119305);
   hCCpi0inFV_stack_10->SetBinContent(23,4.978793);
   hCCpi0inFV_stack_10->SetBinContent(24,3.764405);
   hCCpi0inFV_stack_10->SetBinContent(25,55.20799);
   hCCpi0inFV_stack_10->SetBinError(1,5.462355);
   hCCpi0inFV_stack_10->SetBinError(2,3.59673);
   hCCpi0inFV_stack_10->SetBinError(3,3.687292);
   hCCpi0inFV_stack_10->SetBinError(4,3.652639);
   hCCpi0inFV_stack_10->SetBinError(5,3.848445);
   hCCpi0inFV_stack_10->SetBinError(6,3.56617);
   hCCpi0inFV_stack_10->SetBinError(7,3.564294);
   hCCpi0inFV_stack_10->SetBinError(8,3.28957);
   hCCpi0inFV_stack_10->SetBinError(9,2.987999);
   hCCpi0inFV_stack_10->SetBinError(10,2.843824);
   hCCpi0inFV_stack_10->SetBinError(11,2.465883);
   hCCpi0inFV_stack_10->SetBinError(12,2.374653);
   hCCpi0inFV_stack_10->SetBinError(13,2.300853);
   hCCpi0inFV_stack_10->SetBinError(14,2.272428);
   hCCpi0inFV_stack_10->SetBinError(15,1.744899);
   hCCpi0inFV_stack_10->SetBinError(16,2.013386);
   hCCpi0inFV_stack_10->SetBinError(17,1.574918);
   hCCpi0inFV_stack_10->SetBinError(18,1.570558);
   hCCpi0inFV_stack_10->SetBinError(19,1.441651);
   hCCpi0inFV_stack_10->SetBinError(20,1.178071);
   hCCpi0inFV_stack_10->SetBinError(21,1.038438);
   hCCpi0inFV_stack_10->SetBinError(22,1.452057);
   hCCpi0inFV_stack_10->SetBinError(23,1.063816);
   hCCpi0inFV_stack_10->SetBinError(24,0.9407157);
   hCCpi0inFV_stack_10->SetBinError(25,3.744733);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,67.80859);
   hNCinFV_stack_11->SetBinContent(2,31.73606);
   hNCinFV_stack_11->SetBinContent(3,30.68016);
   hNCinFV_stack_11->SetBinContent(4,26.92083);
   hNCinFV_stack_11->SetBinContent(5,28.43454);
   hNCinFV_stack_11->SetBinContent(6,26.43381);
   hNCinFV_stack_11->SetBinContent(7,26.95778);
   hNCinFV_stack_11->SetBinContent(8,18.13105);
   hNCinFV_stack_11->SetBinContent(9,17.39406);
   hNCinFV_stack_11->SetBinContent(10,14.98094);
   hNCinFV_stack_11->SetBinContent(11,15.24649);
   hNCinFV_stack_11->SetBinContent(12,13.17621);
   hNCinFV_stack_11->SetBinContent(13,12.98288);
   hNCinFV_stack_11->SetBinContent(14,9.337895);
   hNCinFV_stack_11->SetBinContent(15,10.99506);
   hNCinFV_stack_11->SetBinContent(16,5.513474);
   hNCinFV_stack_11->SetBinContent(17,5.430027);
   hNCinFV_stack_11->SetBinContent(18,6.927438);
   hNCinFV_stack_11->SetBinContent(19,7.909449);
   hNCinFV_stack_11->SetBinContent(20,3.462874);
   hNCinFV_stack_11->SetBinContent(21,5.128496);
   hNCinFV_stack_11->SetBinContent(22,5.266887);
   hNCinFV_stack_11->SetBinContent(23,2.980925);
   hNCinFV_stack_11->SetBinContent(24,2.537621);
   hNCinFV_stack_11->SetBinContent(25,42.25523);
   hNCinFV_stack_11->SetBinError(1,4.125566);
   hNCinFV_stack_11->SetBinError(2,2.747143);
   hNCinFV_stack_11->SetBinError(3,2.789435);
   hNCinFV_stack_11->SetBinError(4,2.626402);
   hNCinFV_stack_11->SetBinError(5,2.691327);
   hNCinFV_stack_11->SetBinError(6,2.589192);
   hNCinFV_stack_11->SetBinError(7,2.655497);
   hNCinFV_stack_11->SetBinError(8,2.141473);
   hNCinFV_stack_11->SetBinError(9,2.095583);
   hNCinFV_stack_11->SetBinError(10,1.851953);
   hNCinFV_stack_11->SetBinError(11,1.942626);
   hNCinFV_stack_11->SetBinError(12,1.861399);
   hNCinFV_stack_11->SetBinError(13,1.851333);
   hNCinFV_stack_11->SetBinError(14,1.507483);
   hNCinFV_stack_11->SetBinError(15,1.641579);
   hNCinFV_stack_11->SetBinError(16,1.192995);
   hNCinFV_stack_11->SetBinError(17,1.144786);
   hNCinFV_stack_11->SetBinError(18,1.359335);
   hNCinFV_stack_11->SetBinError(19,1.379411);
   hNCinFV_stack_11->SetBinError(20,0.961023);
   hNCinFV_stack_11->SetBinError(21,1.161531);
   hNCinFV_stack_11->SetBinError(22,1.193395);
   hNCinFV_stack_11->SetBinError(23,0.8552677);
   hNCinFV_stack_11->SetBinError(24,0.8329108);
   hNCinFV_stack_11->SetBinError(25,3.253897);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,110.5689);
   hnumuCCinFV_stack_12->SetBinContent(2,20.59274);
   hnumuCCinFV_stack_12->SetBinContent(3,26.53432);
   hnumuCCinFV_stack_12->SetBinContent(4,18.12431);
   hnumuCCinFV_stack_12->SetBinContent(5,19.12973);
   hnumuCCinFV_stack_12->SetBinContent(6,16.61768);
   hnumuCCinFV_stack_12->SetBinContent(7,19.95761);
   hnumuCCinFV_stack_12->SetBinContent(8,17.51587);
   hnumuCCinFV_stack_12->SetBinContent(9,11.80592);
   hnumuCCinFV_stack_12->SetBinContent(10,14.04321);
   hnumuCCinFV_stack_12->SetBinContent(11,12.94089);
   hnumuCCinFV_stack_12->SetBinContent(12,10.82981);
   hnumuCCinFV_stack_12->SetBinContent(13,12.07238);
   hnumuCCinFV_stack_12->SetBinContent(14,8.227622);
   hnumuCCinFV_stack_12->SetBinContent(15,6.411391);
   hnumuCCinFV_stack_12->SetBinContent(16,5.367569);
   hnumuCCinFV_stack_12->SetBinContent(17,6.809156);
   hnumuCCinFV_stack_12->SetBinContent(18,7.806701);
   hnumuCCinFV_stack_12->SetBinContent(19,7.882912);
   hnumuCCinFV_stack_12->SetBinContent(20,4.740592);
   hnumuCCinFV_stack_12->SetBinContent(21,6.537026);
   hnumuCCinFV_stack_12->SetBinContent(22,2.84516);
   hnumuCCinFV_stack_12->SetBinContent(23,4.929513);
   hnumuCCinFV_stack_12->SetBinContent(24,4.277477);
   hnumuCCinFV_stack_12->SetBinContent(25,62.83533);
   hnumuCCinFV_stack_12->SetBinError(1,6.239423);
   hnumuCCinFV_stack_12->SetBinError(2,2.426659);
   hnumuCCinFV_stack_12->SetBinError(3,3.537243);
   hnumuCCinFV_stack_12->SetBinError(4,2.413325);
   hnumuCCinFV_stack_12->SetBinError(5,2.324753);
   hnumuCCinFV_stack_12->SetBinError(6,2.028293);
   hnumuCCinFV_stack_12->SetBinError(7,2.693576);
   hnumuCCinFV_stack_12->SetBinError(8,2.255612);
   hnumuCCinFV_stack_12->SetBinError(9,1.759573);
   hnumuCCinFV_stack_12->SetBinError(10,1.987821);
   hnumuCCinFV_stack_12->SetBinError(11,2.327034);
   hnumuCCinFV_stack_12->SetBinError(12,1.758864);
   hnumuCCinFV_stack_12->SetBinError(13,2.099471);
   hnumuCCinFV_stack_12->SetBinError(14,1.46346);
   hnumuCCinFV_stack_12->SetBinError(15,1.239393);
   hnumuCCinFV_stack_12->SetBinError(16,1.194437);
   hnumuCCinFV_stack_12->SetBinError(17,1.323776);
   hnumuCCinFV_stack_12->SetBinError(18,1.442706);
   hnumuCCinFV_stack_12->SetBinError(19,1.683671);
   hnumuCCinFV_stack_12->SetBinError(20,1.203272);
   hnumuCCinFV_stack_12->SetBinError(21,2.679793);
   hnumuCCinFV_stack_12->SetBinError(22,0.8562536);
   hnumuCCinFV_stack_12->SetBinError(23,1.594281);
   hnumuCCinFV_stack_12->SetBinError(24,1.306817);
   hnumuCCinFV_stack_12->SetBinError(25,4.407308);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,6.5613);
   hnueCCinFV_stack_13->SetBinContent(2,2.464438);
   hnueCCinFV_stack_13->SetBinContent(3,1.176911);
   hnueCCinFV_stack_13->SetBinContent(4,0.9493064);
   hnueCCinFV_stack_13->SetBinContent(5,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(6,2.846401);
   hnueCCinFV_stack_13->SetBinContent(7,2.255275);
   hnueCCinFV_stack_13->SetBinContent(8,0.3966292);
   hnueCCinFV_stack_13->SetBinContent(9,1.670815);
   hnueCCinFV_stack_13->SetBinContent(10,1.550785);
   hnueCCinFV_stack_13->SetBinContent(11,1.486508);
   hnueCCinFV_stack_13->SetBinContent(12,0.8468585);
   hnueCCinFV_stack_13->SetBinContent(13,0.8666171);
   hnueCCinFV_stack_13->SetBinContent(14,1.146084);
   hnueCCinFV_stack_13->SetBinContent(15,0.7698287);
   hnueCCinFV_stack_13->SetBinContent(16,1.332729);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2451434);
   hnueCCinFV_stack_13->SetBinContent(19,0.7475032);
   hnueCCinFV_stack_13->SetBinContent(20,0.4153488);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(23,0.5834117);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,11.43423);
   hnueCCinFV_stack_13->SetBinError(1,1.752388);
   hnueCCinFV_stack_13->SetBinError(2,0.8986003);
   hnueCCinFV_stack_13->SetBinError(3,0.4804759);
   hnueCCinFV_stack_13->SetBinError(4,0.4827578);
   hnueCCinFV_stack_13->SetBinError(5,0.5191111);
   hnueCCinFV_stack_13->SetBinError(6,1.444774);
   hnueCCinFV_stack_13->SetBinError(7,0.8086425);
   hnueCCinFV_stack_13->SetBinError(8,0.2770479);
   hnueCCinFV_stack_13->SetBinError(9,0.7277156);
   hnueCCinFV_stack_13->SetBinError(10,0.6550905);
   hnueCCinFV_stack_13->SetBinError(11,0.7750286);
   hnueCCinFV_stack_13->SetBinError(12,0.4251302);
   hnueCCinFV_stack_13->SetBinError(13,0.4390927);
   hnueCCinFV_stack_13->SetBinError(14,0.6264992);
   hnueCCinFV_stack_13->SetBinError(15,0.4569518);
   hnueCCinFV_stack_13->SetBinError(16,0.6132724);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2451269);
   hnueCCinFV_stack_13->SetBinError(19,0.5306929);
   hnueCCinFV_stack_13->SetBinError(20,0.2942402);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetBinError(23,0.4338559);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,2.398622);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__5->SetBinContent(1,901.4433);
   hmcerror__5->SetBinContent(2,384.9177);
   hmcerror__5->SetBinContent(3,407.7659);
   hmcerror__5->SetBinContent(4,397.1771);
   hmcerror__5->SetBinContent(5,387.3026);
   hmcerror__5->SetBinContent(6,358.151);
   hmcerror__5->SetBinContent(7,326.4274);
   hmcerror__5->SetBinContent(8,288.7473);
   hmcerror__5->SetBinContent(9,251.9212);
   hmcerror__5->SetBinContent(10,237.9056);
   hmcerror__5->SetBinContent(11,189.0351);
   hmcerror__5->SetBinContent(12,180.8079);
   hmcerror__5->SetBinContent(13,160.202);
   hmcerror__5->SetBinContent(14,140.1799);
   hmcerror__5->SetBinContent(15,112.6737);
   hmcerror__5->SetBinContent(16,96.56035);
   hmcerror__5->SetBinContent(17,87.00818);
   hmcerror__5->SetBinContent(18,82.08411);
   hmcerror__5->SetBinContent(19,74.34213);
   hmcerror__5->SetBinContent(20,52.93699);
   hmcerror__5->SetBinContent(21,51.81813);
   hmcerror__5->SetBinContent(22,51.17035);
   hmcerror__5->SetBinContent(23,43.46343);
   hmcerror__5->SetBinContent(24,36.84391);
   hmcerror__5->SetBinContent(25,487.8703);
   hmcerror__5->SetBinError(1,226.242);
   hmcerror__5->SetBinError(2,116.7382);
   hmcerror__5->SetBinError(3,112.6526);
   hmcerror__5->SetBinError(4,114.0084);
   hmcerror__5->SetBinError(5,115.7082);
   hmcerror__5->SetBinError(6,95.8069);
   hmcerror__5->SetBinError(7,94.48005);
   hmcerror__5->SetBinError(8,83.37754);
   hmcerror__5->SetBinError(9,67.9568);
   hmcerror__5->SetBinError(10,61.99203);
   hmcerror__5->SetBinError(11,53.41819);
   hmcerror__5->SetBinError(12,48.77784);
   hmcerror__5->SetBinError(13,42.57411);
   hmcerror__5->SetBinError(14,39.13977);
   hmcerror__5->SetBinError(15,34.41364);
   hmcerror__5->SetBinError(16,30.41955);
   hmcerror__5->SetBinError(17,24.55298);
   hmcerror__5->SetBinError(18,27.58865);
   hmcerror__5->SetBinError(19,27.465);
   hmcerror__5->SetBinError(20,17.44678);
   hmcerror__5->SetBinError(21,17.67101);
   hmcerror__5->SetBinError(22,15.67103);
   hmcerror__5->SetBinError(23,21.32773);
   hmcerror__5->SetBinError(24,14.84671);
   hmcerror__5->SetBinError(25,121.2532);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3005[24] = {
   837,
   315,
   333,
   371,
   333,
   267,
   271,
   220,
   190,
   193,
   198,
   144,
   160,
   107,
   112,
   89,
   87,
   61,
   68,
   54,
   46,
   48,
   31,
   28};
   Double_t _felx3005[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3005[24] = {
   28.93095,
   17.74824,
   18.24829,
   19.26136,
   18.24829,
   16.34013,
   16.46208,
   14.8324,
   13.78405,
   13.89244,
   14.07125,
   12,
   12.64911,
   10.34408,
   10.58301,
   9.5566,
   9.4503,
   7.9383,
   8.3726,
   7.4785,
   6.9153,
   7.0604,
   5.7094,
   5.4358};
   Double_t _fehx3005[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3005[24] = {
   28.93095,
   17.74824,
   18.24829,
   19.26136,
   18.24829,
   16.34013,
   16.46208,
   14.8324,
   13.78405,
   13.89244,
   14.07125,
   12,
   12.64911,
   10.34408,
   10.58301,
   9.3552,
   9.2488,
   7.7354,
   8.1701,
   7.275,
   6.7108,
   6.8561,
   5.5017,
   5.2271};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,99);
   Graph_Graph3005->SetMinimum(20.30778);
   Graph_Graph3005->SetMaximum(950.2676);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4563.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 107.8","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 419.9","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 44.1","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 357.1","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  82.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  22.4","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2306.1","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  435.3","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.5","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 720.7","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 396.4","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 376.6","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 30.3","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all");
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
   
   Double_t _fx3006[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3006[24] = {
   0.2509775,
   0.3032809,
   0.2762679,
   0.2870468,
   0.2987541,
   0.2675042,
   0.2894367,
   0.2887561,
   0.2697542,
   0.2605741,
   0.2825834,
   0.2697771,
   0.2657527,
   0.2792109,
   0.3054274,
   0.3150315,
   0.2821917,
   0.3361023,
   0.3694406,
   0.3295764,
   0.3410198,
   0.3062522,
   0.4907051,
   0.4029625};
   Double_t _fehx3006[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3006[24] = {
   0.2509775,
   0.3032809,
   0.2762679,
   0.2870468,
   0.2987541,
   0.2675042,
   0.2894367,
   0.2887561,
   0.2697542,
   0.2605741,
   0.2825834,
   0.2697771,
   0.2657527,
   0.2792109,
   0.3054274,
   0.3150315,
   0.2821917,
   0.3361023,
   0.3694406,
   0.3295764,
   0.3410198,
   0.3062522,
   0.4907051,
   0.4029625};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3007[24] = {
   0.2430493,
   0.291006,
   0.2670361,
   0.2719224,
   0.2636769,
   0.251215,
   0.2574538,
   0.2574605,
   0.2449609,
   0.2364865,
   0.2438517,
   0.2345519,
   0.2414886,
   0.2423355,
   0.2568758,
   0.2642223,
   0.2115775,
   0.2382849,
   0.2261216,
   0.2443269,
   0.256813,
   0.2326195,
   0.2600256,
   0.2487271};
   Double_t _fehx3007[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3007[24] = {
   0.2430493,
   0.291006,
   0.2670361,
   0.2719224,
   0.2636769,
   0.251215,
   0.2574538,
   0.2574605,
   0.2449609,
   0.2364865,
   0.2438517,
   0.2345519,
   0.2414886,
   0.2423355,
   0.2568758,
   0.2642223,
   0.2115775,
   0.2382849,
   0.2261216,
   0.2443269,
   0.256813,
   0.2326195,
   0.2600256,
   0.2487271};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3008[24] = {
   0.928511,
   0.8183568,
   0.816645,
   0.9340921,
   0.8597929,
   0.7454957,
   0.8302,
   0.761912,
   0.7542042,
   0.8112462,
   1.047424,
   0.7964253,
   0.9987393,
   0.7633046,
   0.9940207,
   0.9217034,
   0.999906,
   0.7431402,
   0.9146899,
   1.020081,
   0.8877201,
   0.9380433,
   0.7132433,
   0.7599628};
   Double_t _felx3008[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3008[24] = {
   0.03209403,
   0.04610918,
   0.04475187,
   0.04849565,
   0.04711636,
   0.04562359,
   0.05043106,
   0.0513681,
   0.05471572,
   0.05839478,
   0.07443722,
   0.06636877,
   0.07895728,
   0.07379144,
   0.09392612,
   0.09897023,
   0.1086139,
   0.09670934,
   0.1126225,
   0.1412717,
   0.1334533,
   0.1379784,
   0.131361,
   0.1475359};
   Double_t _fehx3008[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3008[24] = {
   0.03209403,
   0.04610918,
   0.04475187,
   0.04849565,
   0.04711636,
   0.04562359,
   0.05043106,
   0.0513681,
   0.05471572,
   0.05839478,
   0.07443722,
   0.06636877,
   0.07895728,
   0.07379144,
   0.09392612,
   0.09688449,
   0.1062981,
   0.09423749,
   0.1098986,
   0.1374275,
   0.1295068,
   0.1339858,
   0.1265823,
   0.1418715};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,99);
   Graph_Graph3008->SetMinimum(0.5243197);
   Graph_Graph3008->SetMaximum(1.215071);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

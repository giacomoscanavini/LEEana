#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Oct 21 20:21:52 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
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
   pad1->Range(-230.7692,-9.1,1692.308,1006.268);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__16->SetBinContent(1,155.6157);
   hmc__16->SetBinContent(2,312.1418);
   hmc__16->SetBinContent(3,399.5985);
   hmc__16->SetBinContent(4,382.056);
   hmc__16->SetBinContent(5,301.8792);
   hmc__16->SetBinContent(6,242.7396);
   hmc__16->SetBinContent(7,199.6003);
   hmc__16->SetBinContent(8,137.4411);
   hmc__16->SetBinContent(9,106.2756);
   hmc__16->SetBinContent(10,88.49393);
   hmc__16->SetBinContent(11,65.7478);
   hmc__16->SetBinContent(12,50.38101);
   hmc__16->SetBinContent(13,33.18996);
   hmc__16->SetBinContent(14,36.87961);
   hmc__16->SetBinContent(15,29.35929);
   hmc__16->SetBinContent(16,17.17883);
   hmc__16->SetBinContent(17,19.00196);
   hmc__16->SetBinContent(18,13.33834);
   hmc__16->SetBinContent(19,16.75405);
   hmc__16->SetBinContent(20,13.18209);
   hmc__16->SetBinContent(21,9.073327);
   hmc__16->SetBinContent(22,14.06091);
   hmc__16->SetBinContent(23,9.775123);
   hmc__16->SetBinContent(24,6.123922);
   hmc__16->SetBinContent(25,7.899602);
   hmc__16->SetBinContent(26,128.1081);
   hmc__16->SetBinError(1,47.58937);
   hmc__16->SetBinError(2,77.07599);
   hmc__16->SetBinError(3,95.37191);
   hmc__16->SetBinError(4,90.0211);
   hmc__16->SetBinError(5,75.9886);
   hmc__16->SetBinError(6,69.79972);
   hmc__16->SetBinError(7,63.13307);
   hmc__16->SetBinError(8,44.83874);
   hmc__16->SetBinError(9,31.30928);
   hmc__16->SetBinError(10,26.56245);
   hmc__16->SetBinError(11,24.12141);
   hmc__16->SetBinError(12,22.96738);
   hmc__16->SetBinError(13,11.30446);
   hmc__16->SetBinError(14,17.46631);
   hmc__16->SetBinError(15,14.24491);
   hmc__16->SetBinError(16,9.668486);
   hmc__16->SetBinError(17,10.15146);
   hmc__16->SetBinError(18,9.887314);
   hmc__16->SetBinError(19,8.669982);
   hmc__16->SetBinError(20,7.852319);
   hmc__16->SetBinError(21,7.849979);
   hmc__16->SetBinError(22,11.80524);
   hmc__16->SetBinError(23,6.734617);
   hmc__16->SetBinError(24,4.485567);
   hmc__16->SetBinError(25,5.894763);
   hmc__16->SetBinError(26,38.16039);
   hmc__16->SetMinimum(-9.1);
   hmc__16->SetMaximum(955.5);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,1500);
   hs6_stack_6->SetMinimum(-1.293891e-08);
   hs6_stack_6->SetMaximum(419.5785);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,5.835489);
   hbadmatch_stack_1->SetBinContent(2,5.717851);
   hbadmatch_stack_1->SetBinContent(3,13.18998);
   hbadmatch_stack_1->SetBinContent(4,7.198681);
   hbadmatch_stack_1->SetBinContent(5,5.779724);
   hbadmatch_stack_1->SetBinContent(6,5.688261);
   hbadmatch_stack_1->SetBinContent(7,4.711724);
   hbadmatch_stack_1->SetBinContent(8,3.589247);
   hbadmatch_stack_1->SetBinContent(9,1.612309);
   hbadmatch_stack_1->SetBinContent(10,1.375331);
   hbadmatch_stack_1->SetBinContent(11,1.263784);
   hbadmatch_stack_1->SetBinContent(12,0.2319889);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,0.4224982);
   hbadmatch_stack_1->SetBinContent(15,1.345851);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.4186046);
   hbadmatch_stack_1->SetBinContent(18,0.783429);
   hbadmatch_stack_1->SetBinContent(19,0.3019196);
   hbadmatch_stack_1->SetBinContent(20,0.5955275);
   hbadmatch_stack_1->SetBinContent(21,0.5352025);
   hbadmatch_stack_1->SetBinContent(23,0.2248688);
   hbadmatch_stack_1->SetBinContent(26,3.04482);
   hbadmatch_stack_1->SetBinError(1,1.437);
   hbadmatch_stack_1->SetBinError(2,1.261157);
   hbadmatch_stack_1->SetBinError(3,2.473774);
   hbadmatch_stack_1->SetBinError(4,1.390606);
   hbadmatch_stack_1->SetBinError(5,1.234744);
   hbadmatch_stack_1->SetBinError(6,1.196554);
   hbadmatch_stack_1->SetBinError(7,1.916997);
   hbadmatch_stack_1->SetBinError(8,0.9020092);
   hbadmatch_stack_1->SetBinError(9,0.6124552);
   hbadmatch_stack_1->SetBinError(10,0.5755484);
   hbadmatch_stack_1->SetBinError(11,0.6695651);
   hbadmatch_stack_1->SetBinError(12,0.2319889);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.2996311);
   hbadmatch_stack_1->SetBinError(15,0.5918389);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.4186046);
   hbadmatch_stack_1->SetBinError(18,0.558742);
   hbadmatch_stack_1->SetBinError(19,0.2209796);
   hbadmatch_stack_1->SetBinError(20,0.4454532);
   hbadmatch_stack_1->SetBinError(21,0.3921167);
   hbadmatch_stack_1->SetBinError(23,0.2248688);
   hbadmatch_stack_1->SetBinError(26,1.011766);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,15.36686);
   hext_stack_2->SetBinContent(2,40.33482);
   hext_stack_2->SetBinContent(3,48.85298);
   hext_stack_2->SetBinContent(4,32.83298);
   hext_stack_2->SetBinContent(5,21.7064);
   hext_stack_2->SetBinContent(6,10.54675);
   hext_stack_2->SetBinContent(7,18.57493);
   hext_stack_2->SetBinContent(8,10.47614);
   hext_stack_2->SetBinContent(9,9.712016);
   hext_stack_2->SetBinContent(10,10.09707);
   hext_stack_2->SetBinContent(11,8.656622);
   hext_stack_2->SetBinContent(12,4.956979);
   hext_stack_2->SetBinContent(13,3.069618);
   hext_stack_2->SetBinContent(14,5.807659);
   hext_stack_2->SetBinContent(15,5.565462);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,1.297589);
   hext_stack_2->SetBinContent(18,1.614806);
   hext_stack_2->SetBinContent(19,4.181263);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,6.098925);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,14.34895);
   hext_stack_2->SetBinError(1,2.661041);
   hext_stack_2->SetBinError(2,4.37482);
   hext_stack_2->SetBinError(3,4.733568);
   hext_stack_2->SetBinError(4,3.694526);
   hext_stack_2->SetBinError(5,3.022363);
   hext_stack_2->SetBinError(6,1.989749);
   hext_stack_2->SetBinError(7,3.023158);
   hext_stack_2->SetBinError(8,1.957788);
   hext_stack_2->SetBinError(9,2.057197);
   hext_stack_2->SetBinError(10,2.236289);
   hext_stack_2->SetBinError(11,1.963739);
   hext_stack_2->SetBinError(12,1.381607);
   hext_stack_2->SetBinError(13,1.212305);
   hext_stack_2->SetBinError(14,1.742221);
   hext_stack_2->SetBinError(15,1.729217);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.6487947);
   hext_stack_2->SetBinError(18,0.8528597);
   hext_stack_2->SetBinError(19,1.540793);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,1.951987);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,2.738832);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,4.027687);
   hdirt_stack_3->SetBinContent(2,6.625832);
   hdirt_stack_3->SetBinContent(3,5.329824);
   hdirt_stack_3->SetBinContent(4,2.238234);
   hdirt_stack_3->SetBinContent(5,2.942226);
   hdirt_stack_3->SetBinContent(6,1.90221);
   hdirt_stack_3->SetBinContent(7,1.29952);
   hdirt_stack_3->SetBinContent(8,1.380808);
   hdirt_stack_3->SetBinContent(9,1.739388);
   hdirt_stack_3->SetBinContent(10,1.305588);
   hdirt_stack_3->SetBinContent(11,1.740686);
   hdirt_stack_3->SetBinContent(12,0.4762587);
   hdirt_stack_3->SetBinContent(13,1.486485);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.7819759);
   hdirt_stack_3->SetBinContent(16,0.6392631);
   hdirt_stack_3->SetBinContent(19,0.5906858);
   hdirt_stack_3->SetBinContent(20,0.5733541);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.3866654);
   hdirt_stack_3->SetBinContent(26,1.784097);
   hdirt_stack_3->SetBinError(1,1.085892);
   hdirt_stack_3->SetBinError(2,1.291915);
   hdirt_stack_3->SetBinError(3,1.237125);
   hdirt_stack_3->SetBinError(4,0.7359339);
   hdirt_stack_3->SetBinError(5,0.8882797);
   hdirt_stack_3->SetBinError(6,0.6735599);
   hdirt_stack_3->SetBinError(7,0.5533108);
   hdirt_stack_3->SetBinError(8,0.5297364);
   hdirt_stack_3->SetBinError(9,0.7478906);
   hdirt_stack_3->SetBinError(10,0.5890351);
   hdirt_stack_3->SetBinError(11,0.7181029);
   hdirt_stack_3->SetBinError(12,0.3652866);
   hdirt_stack_3->SetBinError(13,1.15304);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.4844357);
   hdirt_stack_3->SetBinError(16,0.4709666);
   hdirt_stack_3->SetBinError(19,0.42205);
   hdirt_stack_3->SetBinError(20,0.4460622);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.3866654);
   hdirt_stack_3->SetBinError(26,0.7195615);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,25.94073);
   houtFV_stack_4->SetBinContent(2,45.02991);
   houtFV_stack_4->SetBinContent(3,41.70657);
   houtFV_stack_4->SetBinContent(4,32.90722);
   houtFV_stack_4->SetBinContent(5,23.78675);
   houtFV_stack_4->SetBinContent(6,21.23726);
   houtFV_stack_4->SetBinContent(7,16.47482);
   houtFV_stack_4->SetBinContent(8,11.43584);
   houtFV_stack_4->SetBinContent(9,7.354268);
   houtFV_stack_4->SetBinContent(10,6.881996);
   houtFV_stack_4->SetBinContent(11,6.2769);
   houtFV_stack_4->SetBinContent(12,5.28914);
   houtFV_stack_4->SetBinContent(13,2.200778);
   houtFV_stack_4->SetBinContent(14,3.722516);
   houtFV_stack_4->SetBinContent(15,2.353116);
   houtFV_stack_4->SetBinContent(16,1.895193);
   houtFV_stack_4->SetBinContent(17,2.432467);
   houtFV_stack_4->SetBinContent(18,1.549161);
   houtFV_stack_4->SetBinContent(19,3.028432);
   houtFV_stack_4->SetBinContent(20,2.83939);
   houtFV_stack_4->SetBinContent(21,0.785171);
   houtFV_stack_4->SetBinContent(22,0.536893);
   houtFV_stack_4->SetBinContent(23,1.62433);
   houtFV_stack_4->SetBinContent(24,0.74247);
   houtFV_stack_4->SetBinContent(25,1.441778);
   houtFV_stack_4->SetBinContent(26,14.82912);
   houtFV_stack_4->SetBinError(1,2.57164);
   houtFV_stack_4->SetBinError(2,3.320917);
   houtFV_stack_4->SetBinError(3,3.271096);
   houtFV_stack_4->SetBinError(4,2.868532);
   houtFV_stack_4->SetBinError(5,2.349202);
   houtFV_stack_4->SetBinError(6,2.269656);
   houtFV_stack_4->SetBinError(7,2.025854);
   houtFV_stack_4->SetBinError(8,1.68044);
   houtFV_stack_4->SetBinError(9,1.390393);
   houtFV_stack_4->SetBinError(10,1.325329);
   houtFV_stack_4->SetBinError(11,1.252447);
   houtFV_stack_4->SetBinError(12,1.084337);
   houtFV_stack_4->SetBinError(13,0.7490242);
   houtFV_stack_4->SetBinError(14,1.004437);
   houtFV_stack_4->SetBinError(15,0.8347496);
   houtFV_stack_4->SetBinError(16,0.7136499);
   houtFV_stack_4->SetBinError(17,0.8199785);
   houtFV_stack_4->SetBinError(18,0.6545116);
   houtFV_stack_4->SetBinError(19,0.9444207);
   houtFV_stack_4->SetBinError(20,0.8810506);
   houtFV_stack_4->SetBinError(21,0.3925882);
   houtFV_stack_4->SetBinError(22,0.3929602);
   houtFV_stack_4->SetBinError(23,0.5979053);
   houtFV_stack_4->SetBinError(24,0.4463432);
   houtFV_stack_4->SetBinError(25,0.7332867);
   houtFV_stack_4->SetBinError(26,1.961201);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.159313);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.729186);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.389305);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.85095);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.9922);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,11.53274);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,10.57681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.159603);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.905367);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.992461);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.81811);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.53665);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.470381);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.060197);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.081663);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.153752);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2455873);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2968426);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5518276);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5119418);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.8268912);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1397342);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2634515);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6661862);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2759499);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,6.194396);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7417129);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7382741);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.067251);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.283851);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.235024);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.292932);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.352811);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8004905);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4640891);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8185134);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5274347);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8494303);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5151919);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.456898);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3367864);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4713109);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.119492);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1452167);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1977835);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2332619);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4180861);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06589889);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1211177);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2763333);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2243545);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.878821);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3675076);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5654474);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8807783);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.409438);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6714678);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3735683);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4782715);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1651746);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3530209);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08786118);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.337395);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1095528);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03507804);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.1380737);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1651253);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1652719);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2740583);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4465235);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2305606);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1592165);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1639178);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08284613);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1783964);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04695783);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2273656);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.07894598);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02482773);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.06051453);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,45.2604);
   hNCpi0inFVres_stack_7->SetBinContent(2,99.29396);
   hNCpi0inFVres_stack_7->SetBinContent(3,146.4483);
   hNCpi0inFVres_stack_7->SetBinContent(4,161.3099);
   hNCpi0inFVres_stack_7->SetBinContent(5,133.7072);
   hNCpi0inFVres_stack_7->SetBinContent(6,111.1414);
   hNCpi0inFVres_stack_7->SetBinContent(7,77.79198);
   hNCpi0inFVres_stack_7->SetBinContent(8,51.54055);
   hNCpi0inFVres_stack_7->SetBinContent(9,34.37469);
   hNCpi0inFVres_stack_7->SetBinContent(10,29.67389);
   hNCpi0inFVres_stack_7->SetBinContent(11,22.91259);
   hNCpi0inFVres_stack_7->SetBinContent(12,16.35381);
   hNCpi0inFVres_stack_7->SetBinContent(13,11.61106);
   hNCpi0inFVres_stack_7->SetBinContent(14,11.95635);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.355327);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.540023);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.084057);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.235763);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.965324);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.040255);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.646211);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.081841);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.355536);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.786789);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.669781);
   hNCpi0inFVres_stack_7->SetBinContent(26,37.6621);
   hNCpi0inFVres_stack_7->SetBinError(1,2.289336);
   hNCpi0inFVres_stack_7->SetBinError(2,3.441252);
   hNCpi0inFVres_stack_7->SetBinError(3,4.102732);
   hNCpi0inFVres_stack_7->SetBinError(4,4.469376);
   hNCpi0inFVres_stack_7->SetBinError(5,4.055654);
   hNCpi0inFVres_stack_7->SetBinError(6,3.613325);
   hNCpi0inFVres_stack_7->SetBinError(7,3.066475);
   hNCpi0inFVres_stack_7->SetBinError(8,2.260969);
   hNCpi0inFVres_stack_7->SetBinError(9,1.857279);
   hNCpi0inFVres_stack_7->SetBinError(10,1.758679);
   hNCpi0inFVres_stack_7->SetBinError(11,1.68245);
   hNCpi0inFVres_stack_7->SetBinError(12,1.573748);
   hNCpi0inFVres_stack_7->SetBinError(13,1.190562);
   hNCpi0inFVres_stack_7->SetBinError(14,1.268052);
   hNCpi0inFVres_stack_7->SetBinError(15,1.044433);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7366624);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8307755);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6691982);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7266869);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5834622);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6874707);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7312073);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6486223);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4937444);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5968974);
   hNCpi0inFVres_stack_7->SetBinError(26,2.284614);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.97952);
   hNCpi0inFVdis_stack_8->SetBinContent(2,23.54602);
   hNCpi0inFVdis_stack_8->SetBinContent(3,28.02709);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.89829);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.3151);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.33533);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.42253);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.7627);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.646238);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.273897);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.399618);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.895222);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.075951);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.059551);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.464405);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.53078);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.892165);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.155002);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.9258717);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.217811);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.162798);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7973014);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.268738);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3295053);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7811539);
   hNCpi0inFVdis_stack_8->SetBinContent(26,8.599562);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.0681);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.769995);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.776823);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.773057);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.48324);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.439498);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.126504);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.0705);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.011442);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.038452);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.003092);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.744129);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6920131);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6326408);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6695202);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3881202);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5768069);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2711997);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3482002);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4050757);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3207895);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.242384);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4285109);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2124038);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5637243);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.007527);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04049794);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,21.8953);
   hCCpi0inFV_stack_10->SetBinContent(2,41.57801);
   hCCpi0inFV_stack_10->SetBinContent(3,50.44232);
   hCCpi0inFV_stack_10->SetBinContent(4,55.78535);
   hCCpi0inFV_stack_10->SetBinContent(5,45.7075);
   hCCpi0inFV_stack_10->SetBinContent(6,36.98307);
   hCCpi0inFV_stack_10->SetBinContent(7,27.60734);
   hCCpi0inFV_stack_10->SetBinContent(8,19.45268);
   hCCpi0inFV_stack_10->SetBinContent(9,20.24711);
   hCCpi0inFV_stack_10->SetBinContent(10,13.76575);
   hCCpi0inFV_stack_10->SetBinContent(11,8.991563);
   hCCpi0inFV_stack_10->SetBinContent(12,7.732287);
   hCCpi0inFV_stack_10->SetBinContent(13,3.922886);
   hCCpi0inFV_stack_10->SetBinContent(14,4.494632);
   hCCpi0inFV_stack_10->SetBinContent(15,3.181021);
   hCCpi0inFV_stack_10->SetBinContent(16,2.105544);
   hCCpi0inFV_stack_10->SetBinContent(17,2.642437);
   hCCpi0inFV_stack_10->SetBinContent(18,1.804013);
   hCCpi0inFV_stack_10->SetBinContent(19,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(20,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(21,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(22,1.176911);
   hCCpi0inFV_stack_10->SetBinContent(23,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(24,1.800632);
   hCCpi0inFV_stack_10->SetBinContent(25,0.9727716);
   hCCpi0inFV_stack_10->SetBinContent(26,15.49308);
   hCCpi0inFV_stack_10->SetBinError(1,2.309554);
   hCCpi0inFV_stack_10->SetBinError(2,3.249928);
   hCCpi0inFV_stack_10->SetBinError(3,3.539944);
   hCCpi0inFV_stack_10->SetBinError(4,3.746375);
   hCCpi0inFV_stack_10->SetBinError(5,3.372942);
   hCCpi0inFV_stack_10->SetBinError(6,3.036819);
   hCCpi0inFV_stack_10->SetBinError(7,2.633144);
   hCCpi0inFV_stack_10->SetBinError(8,2.181132);
   hCCpi0inFV_stack_10->SetBinError(9,2.321556);
   hCCpi0inFV_stack_10->SetBinError(10,1.839095);
   hCCpi0inFV_stack_10->SetBinError(11,1.533872);
   hCCpi0inFV_stack_10->SetBinError(12,1.345822);
   hCCpi0inFV_stack_10->SetBinError(13,1.015347);
   hCCpi0inFV_stack_10->SetBinError(14,1.037659);
   hCCpi0inFV_stack_10->SetBinError(15,0.8783531);
   hCCpi0inFV_stack_10->SetBinError(16,0.6797106);
   hCCpi0inFV_stack_10->SetBinError(17,0.7851269);
   hCCpi0inFV_stack_10->SetBinError(18,0.7075491);
   hCCpi0inFV_stack_10->SetBinError(19,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(20,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(21,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(22,0.4804759);
   hCCpi0inFV_stack_10->SetBinError(23,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(24,0.7066125);
   hCCpi0inFV_stack_10->SetBinError(25,0.5004628);
   hCCpi0inFV_stack_10->SetBinError(26,1.942381);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,12.29033);
   hNCinFV_stack_11->SetBinContent(2,23.44528);
   hNCinFV_stack_11->SetBinContent(3,27.14854);
   hNCinFV_stack_11->SetBinContent(4,26.78531);
   hNCinFV_stack_11->SetBinContent(5,19.91274);
   hNCinFV_stack_11->SetBinContent(6,9.646505);
   hNCinFV_stack_11->SetBinContent(7,16.39075);
   hNCinFV_stack_11->SetBinContent(8,11.94172);
   hNCinFV_stack_11->SetBinContent(9,9.119328);
   hNCinFV_stack_11->SetBinContent(10,7.439888);
   hNCinFV_stack_11->SetBinContent(11,3.995299);
   hNCinFV_stack_11->SetBinContent(12,2.690342);
   hNCinFV_stack_11->SetBinContent(13,3.143109);
   hNCinFV_stack_11->SetBinContent(14,3.03211);
   hNCinFV_stack_11->SetBinContent(15,2.856841);
   hNCinFV_stack_11->SetBinContent(16,2.000729);
   hNCinFV_stack_11->SetBinContent(17,2.166925);
   hNCinFV_stack_11->SetBinContent(18,0.7336084);
   hNCinFV_stack_11->SetBinContent(19,0.6639536);
   hNCinFV_stack_11->SetBinContent(20,0.5867651);
   hNCinFV_stack_11->SetBinContent(21,0.3900497);
   hNCinFV_stack_11->SetBinContent(22,0.9303237);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.3292273);
   hNCinFV_stack_11->SetBinContent(26,9.221962);
   hNCinFV_stack_11->SetBinError(1,1.865462);
   hNCinFV_stack_11->SetBinError(2,2.450121);
   hNCinFV_stack_11->SetBinError(3,2.80043);
   hNCinFV_stack_11->SetBinError(4,2.707568);
   hNCinFV_stack_11->SetBinError(5,2.383607);
   hNCinFV_stack_11->SetBinError(6,1.614064);
   hNCinFV_stack_11->SetBinError(7,2.247649);
   hNCinFV_stack_11->SetBinError(8,1.992395);
   hNCinFV_stack_11->SetBinError(9,1.770813);
   hNCinFV_stack_11->SetBinError(10,1.331151);
   hNCinFV_stack_11->SetBinError(11,1.016234);
   hNCinFV_stack_11->SetBinError(12,0.7773082);
   hNCinFV_stack_11->SetBinError(13,0.8381447);
   hNCinFV_stack_11->SetBinError(14,0.883385);
   hNCinFV_stack_11->SetBinError(15,0.8938339);
   hNCinFV_stack_11->SetBinError(16,0.7343859);
   hNCinFV_stack_11->SetBinError(17,0.7602485);
   hNCinFV_stack_11->SetBinError(18,0.4394482);
   hNCinFV_stack_11->SetBinError(19,0.4127134);
   hNCinFV_stack_11->SetBinError(20,0.3387718);
   hNCinFV_stack_11->SetBinError(21,0.2758068);
   hNCinFV_stack_11->SetBinError(22,0.4814682);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.3292273);
   hNCinFV_stack_11->SetBinError(26,1.613319);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,6.97813);
   hnumuCCinFV_stack_12->SetBinContent(2,19.21585);
   hnumuCCinFV_stack_12->SetBinContent(3,28.33818);
   hnumuCCinFV_stack_12->SetBinContent(4,21.47769);
   hnumuCCinFV_stack_12->SetBinContent(5,16.75324);
   hnumuCCinFV_stack_12->SetBinContent(6,13.88219);
   hnumuCCinFV_stack_12->SetBinContent(7,12.16813);
   hnumuCCinFV_stack_12->SetBinContent(8,8.965854);
   hnumuCCinFV_stack_12->SetBinContent(9,8.627502);
   hnumuCCinFV_stack_12->SetBinContent(10,5.403475);
   hnumuCCinFV_stack_12->SetBinContent(11,2.709252);
   hnumuCCinFV_stack_12->SetBinContent(12,3.102366);
   hnumuCCinFV_stack_12->SetBinContent(13,1.973472);
   hnumuCCinFV_stack_12->SetBinContent(14,3.064702);
   hnumuCCinFV_stack_12->SetBinContent(15,1.178602);
   hnumuCCinFV_stack_12->SetBinContent(16,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(17,1.463836);
   hnumuCCinFV_stack_12->SetBinContent(18,0.3967118);
   hnumuCCinFV_stack_12->SetBinContent(19,0.6178254);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7689284);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9607925);
   hnumuCCinFV_stack_12->SetBinContent(23,0.5368931);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8273167);
   hnumuCCinFV_stack_12->SetBinContent(26,8.677637);
   hnumuCCinFV_stack_12->SetBinError(1,1.396419);
   hnumuCCinFV_stack_12->SetBinError(2,2.284687);
   hnumuCCinFV_stack_12->SetBinError(3,2.904001);
   hnumuCCinFV_stack_12->SetBinError(4,3.107931);
   hnumuCCinFV_stack_12->SetBinError(5,2.421908);
   hnumuCCinFV_stack_12->SetBinError(6,1.960628);
   hnumuCCinFV_stack_12->SetBinError(7,2.157159);
   hnumuCCinFV_stack_12->SetBinError(8,1.664392);
   hnumuCCinFV_stack_12->SetBinError(9,1.568121);
   hnumuCCinFV_stack_12->SetBinError(10,1.159907);
   hnumuCCinFV_stack_12->SetBinError(11,0.9058341);
   hnumuCCinFV_stack_12->SetBinError(12,0.9439741);
   hnumuCCinFV_stack_12->SetBinError(13,0.813179);
   hnumuCCinFV_stack_12->SetBinError(14,1.609284);
   hnumuCCinFV_stack_12->SetBinError(15,0.4811646);
   hnumuCCinFV_stack_12->SetBinError(16,0.438694);
   hnumuCCinFV_stack_12->SetBinError(17,0.620407);
   hnumuCCinFV_stack_12->SetBinError(18,0.2770494);
   hnumuCCinFV_stack_12->SetBinError(19,0.3574169);
   hnumuCCinFV_stack_12->SetBinError(20,0.4563531);
   hnumuCCinFV_stack_12->SetBinError(22,0.5860093);
   hnumuCCinFV_stack_12->SetBinError(23,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.4612021);
   hnumuCCinFV_stack_12->SetBinError(26,1.545711);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,3.450845);
   hnueCCinFV_stack_13->SetBinContent(2,2.028266);
   hnueCCinFV_stack_13->SetBinContent(3,1.825775);
   hnueCCinFV_stack_13->SetBinContent(4,2.324919);
   hnueCCinFV_stack_13->SetBinContent(5,0.6046121);
   hnueCCinFV_stack_13->SetBinContent(6,1.470299);
   hnueCCinFV_stack_13->SetBinContent(7,1.07049);
   hnueCCinFV_stack_13->SetBinContent(8,1.570749);
   hnueCCinFV_stack_13->SetBinContent(9,0.5843197);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.6459876);
   hnueCCinFV_stack_13->SetBinContent(12,1.006409);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(17,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(18,0.6859174);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,8.114326);
   hnueCCinFV_stack_13->SetBinError(1,1.408308);
   hnueCCinFV_stack_13->SetBinError(2,0.7367028);
   hnueCCinFV_stack_13->SetBinError(3,0.7243609);
   hnueCCinFV_stack_13->SetBinError(4,0.8718064);
   hnueCCinFV_stack_13->SetBinError(5,0.4528539);
   hnueCCinFV_stack_13->SetBinError(6,1.288686);
   hnueCCinFV_stack_13->SetBinError(7,0.5537182);
   hnueCCinFV_stack_13->SetBinError(8,0.6816847);
   hnueCCinFV_stack_13->SetBinError(9,0.4187168);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3759965);
   hnueCCinFV_stack_13->SetBinError(12,0.5149986);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3816983);
   hnueCCinFV_stack_13->SetBinError(17,0.3582875);
   hnueCCinFV_stack_13->SetBinError(18,0.5162003);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinError(23,0.2451269);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,2.257284);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__17->SetBinContent(1,155.6157);
   hmcerror__17->SetBinContent(2,312.1418);
   hmcerror__17->SetBinContent(3,399.5985);
   hmcerror__17->SetBinContent(4,382.056);
   hmcerror__17->SetBinContent(5,301.8792);
   hmcerror__17->SetBinContent(6,242.7396);
   hmcerror__17->SetBinContent(7,199.6003);
   hmcerror__17->SetBinContent(8,137.4411);
   hmcerror__17->SetBinContent(9,106.2756);
   hmcerror__17->SetBinContent(10,88.49393);
   hmcerror__17->SetBinContent(11,65.7478);
   hmcerror__17->SetBinContent(12,50.38101);
   hmcerror__17->SetBinContent(13,33.18996);
   hmcerror__17->SetBinContent(14,36.87961);
   hmcerror__17->SetBinContent(15,29.35929);
   hmcerror__17->SetBinContent(16,17.17883);
   hmcerror__17->SetBinContent(17,19.00196);
   hmcerror__17->SetBinContent(18,13.33834);
   hmcerror__17->SetBinContent(19,16.75405);
   hmcerror__17->SetBinContent(20,13.18209);
   hmcerror__17->SetBinContent(21,9.073327);
   hmcerror__17->SetBinContent(22,14.06091);
   hmcerror__17->SetBinContent(23,9.775123);
   hmcerror__17->SetBinContent(24,6.123922);
   hmcerror__17->SetBinContent(25,7.899602);
   hmcerror__17->SetBinContent(26,128.1081);
   hmcerror__17->SetBinError(1,47.58937);
   hmcerror__17->SetBinError(2,77.07599);
   hmcerror__17->SetBinError(3,95.37191);
   hmcerror__17->SetBinError(4,90.0211);
   hmcerror__17->SetBinError(5,75.9886);
   hmcerror__17->SetBinError(6,69.79972);
   hmcerror__17->SetBinError(7,63.13307);
   hmcerror__17->SetBinError(8,44.83874);
   hmcerror__17->SetBinError(9,31.30928);
   hmcerror__17->SetBinError(10,26.56245);
   hmcerror__17->SetBinError(11,24.12141);
   hmcerror__17->SetBinError(12,22.96738);
   hmcerror__17->SetBinError(13,11.30446);
   hmcerror__17->SetBinError(14,17.46631);
   hmcerror__17->SetBinError(15,14.24491);
   hmcerror__17->SetBinError(16,9.668486);
   hmcerror__17->SetBinError(17,10.15146);
   hmcerror__17->SetBinError(18,9.887314);
   hmcerror__17->SetBinError(19,8.669982);
   hmcerror__17->SetBinError(20,7.852319);
   hmcerror__17->SetBinError(21,7.849979);
   hmcerror__17->SetBinError(22,11.80524);
   hmcerror__17->SetBinError(23,6.734617);
   hmcerror__17->SetBinError(24,4.485567);
   hmcerror__17->SetBinError(25,5.894763);
   hmcerror__17->SetBinError(26,38.16039);
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
   
   Double_t _fx3021[25] = {
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
   Double_t _fy3021[25] = {
   173,
   366,
   455,
   402,
   329,
   238,
   182,
   133,
   117,
   95,
   55,
   52,
   42,
   37,
   26,
   18,
   13,
   10,
   6,
   11,
   13,
   11,
   10,
   6,
   4};
   Double_t _felx3021[25] = {
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
   Double_t _fely3021[25] = {
   13.15295,
   19.13113,
   21.33073,
   20.04994,
   18.13836,
   15.42725,
   13.49074,
   11.53256,
   10.81665,
   9.8686,
   7.546,
   7.3419,
   6.6155,
   6.2203,
   5.2453,
   4.4008,
   3.77763,
   3.34883,
   2.67925,
   3.4975,
   3.77763,
   3.4975,
   3.34883,
   2.67925,
   2.29683};
   Double_t _fehx3021[25] = {
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
   Double_t _fehy3021[25] = {
   13.15295,
   19.13113,
   21.33073,
   20.04994,
   18.13836,
   15.42725,
   13.49074,
   11.53256,
   10.81665,
   9.667,
   7.3425,
   7.1381,
   6.4104,
   6.0141,
   5.0358,
   4.1858,
   3.5552,
   3.1179,
   2.41858,
   3.27,
   3.5552,
   3.27,
   3.1179,
   2.41858,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1650);
   Graph_Graph3021->SetMinimum(1.532853);
   Graph_Graph3021->SetMaximum(523.7935);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2804.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 61.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 264.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 36.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 269.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  89.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  5.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1000.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  196.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 376.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 188.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 160.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[25] = {
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
   Double_t _fy3022[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[25] = {
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
   Double_t _fely3022[25] = {
   0.3058135,
   0.2469262,
   0.2386694,
   0.2356228,
   0.2517186,
   0.2875498,
   0.3162975,
   0.3262397,
   0.2946047,
   0.3001613,
   0.3668778,
   0.4558738,
   0.3405989,
   0.4736034,
   0.4851928,
   0.5628141,
   0.5342322,
   0.7412701,
   0.5174858,
   0.595681,
   0.8651709,
   0.8395789,
   0.6889547,
   0.7324663,
   0.7462101};
   Double_t _fehx3022[25] = {
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
   Double_t _fehy3022[25] = {
   0.3058135,
   0.2469262,
   0.2386694,
   0.2356228,
   0.2517186,
   0.2875498,
   0.3162975,
   0.3262397,
   0.2946047,
   0.3001613,
   0.3668778,
   0.4558738,
   0.3405989,
   0.4736034,
   0.4851928,
   0.5628141,
   0.5342322,
   0.7412701,
   0.5174858,
   0.595681,
   0.8651709,
   0.8395789,
   0.6889547,
   0.7324663,
   0.7462101};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1650);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3023[25] = {
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
   Double_t _fy3023[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[25] = {
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
   Double_t _fely3023[25] = {
   0.2068537,
   0.2071354,
   0.2084075,
   0.2181629,
   0.2222778,
   0.2473048,
   0.241002,
   0.2692142,
   0.2426857,
   0.2303873,
   0.2040263,
   0.2177391,
   0.2311474,
   0.2092044,
   0.2066981,
   0.2398275,
   0.2512112,
   0.2463563,
   0.2176551,
   0.260658,
   0.2995738,
   0.2155138,
   0.2483845,
   0.2915869,
   0.3127994};
   Double_t _fehx3023[25] = {
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
   Double_t _fehy3023[25] = {
   0.2068537,
   0.2071354,
   0.2084075,
   0.2181629,
   0.2222778,
   0.2473048,
   0.241002,
   0.2692142,
   0.2426857,
   0.2303873,
   0.2040263,
   0.2177391,
   0.2311474,
   0.2092044,
   0.2066981,
   0.2398275,
   0.2512112,
   0.2463563,
   0.2176551,
   0.260658,
   0.2995738,
   0.2155138,
   0.2483845,
   0.2915869,
   0.3127994};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1650);
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
   
   Double_t _fx3024[25] = {
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
   Double_t _fy3024[25] = {
   1.111713,
   1.172544,
   1.138643,
   1.052202,
   1.08984,
   0.9804746,
   0.9118222,
   0.9676875,
   1.100911,
   1.07352,
   0.8365299,
   1.032135,
   1.265443,
   1.003264,
   0.8855801,
   1.047801,
   0.6841401,
   0.7497184,
   0.3581224,
   0.8344657,
   1.432771,
   0.7823108,
   1.023005,
   0.9797643,
   0.5063546};
   Double_t _felx3024[25] = {
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
   Double_t _fely3024[25] = {
   0.08452199,
   0.06128985,
   0.05338041,
   0.05247905,
   0.06008483,
   0.06355473,
   0.06758876,
   0.08390914,
   0.1017793,
   0.1115173,
   0.1147719,
   0.1457275,
   0.1993223,
   0.168665,
   0.178659,
   0.2561758,
   0.1988022,
   0.2510679,
   0.1599166,
   0.2653222,
   0.4163445,
   0.2487393,
   0.342587,
   0.4375056,
   0.2907526};
   Double_t _fehx3024[25] = {
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
   Double_t _fehy3024[25] = {
   0.08452199,
   0.06128985,
   0.05338041,
   0.05247905,
   0.06008483,
   0.06355473,
   0.06758876,
   0.08390914,
   0.1017793,
   0.1092391,
   0.1116767,
   0.1416824,
   0.1931428,
   0.1630739,
   0.1715232,
   0.2436604,
   0.1870965,
   0.2337547,
   0.144358,
   0.2480639,
   0.3918298,
   0.2325597,
   0.3189628,
   0.3949397,
   0.250881};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1650);
   Graph_Graph3024->SetMinimum(0.03556634);
   Graph_Graph3024->SetMaximum(1.98724);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);

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

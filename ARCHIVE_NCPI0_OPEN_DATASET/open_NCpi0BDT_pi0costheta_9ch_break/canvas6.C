#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Jun  6 14:11:36 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-0.98,1.25641,108.3674);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__16->SetBinContent(1,3.924669);
   hmc__16->SetBinContent(2,4.222963);
   hmc__16->SetBinContent(3,3.499883);
   hmc__16->SetBinContent(4,2.998056);
   hmc__16->SetBinContent(5,2.149991);
   hmc__16->SetBinContent(6,3.056517);
   hmc__16->SetBinContent(7,3.311441);
   hmc__16->SetBinContent(8,2.958611);
   hmc__16->SetBinContent(9,2.659409);
   hmc__16->SetBinContent(10,2.958428);
   hmc__16->SetBinContent(11,4.168177);
   hmc__16->SetBinContent(12,3.590812);
   hmc__16->SetBinContent(13,4.089123);
   hmc__16->SetBinContent(14,5.905805);
   hmc__16->SetBinContent(15,5.258824);
   hmc__16->SetBinContent(16,6.32145);
   hmc__16->SetBinContent(17,7.377391);
   hmc__16->SetBinContent(18,9.038133);
   hmc__16->SetBinContent(19,11.0558);
   hmc__16->SetBinContent(20,13.82585);
   hmc__16->SetBinContent(21,17.5819);
   hmc__16->SetBinContent(22,19.63052);
   hmc__16->SetBinContent(23,25.89721);
   hmc__16->SetBinContent(24,34.21445);
   hmc__16->SetBinContent(25,48.71382);
   hmc__16->SetBinError(1,2.170829);
   hmc__16->SetBinError(2,2.102695);
   hmc__16->SetBinError(3,1.926077);
   hmc__16->SetBinError(4,3.660742);
   hmc__16->SetBinError(5,1.121596);
   hmc__16->SetBinError(6,1.497735);
   hmc__16->SetBinError(7,2.000846);
   hmc__16->SetBinError(8,1.76768);
   hmc__16->SetBinError(9,1.553544);
   hmc__16->SetBinError(10,1.628073);
   hmc__16->SetBinError(11,1.961194);
   hmc__16->SetBinError(12,2.068875);
   hmc__16->SetBinError(13,1.923919);
   hmc__16->SetBinError(14,2.657125);
   hmc__16->SetBinError(15,2.348081);
   hmc__16->SetBinError(16,2.908427);
   hmc__16->SetBinError(17,2.780549);
   hmc__16->SetBinError(18,3.749385);
   hmc__16->SetBinError(19,3.615271);
   hmc__16->SetBinError(20,5.299466);
   hmc__16->SetBinError(21,7.31033);
   hmc__16->SetBinError(22,7.657129);
   hmc__16->SetBinError(23,6.975797);
   hmc__16->SetBinError(24,8.488412);
   hmc__16->SetBinError(25,12.57552);
   hmc__16->SetBinError(26,0.1094984);
   hmc__16->SetMinimum(-0.98);
   hmc__16->SetMaximum(102.9);
   hmc__16->SetEntries(245.546);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-1,1);
   hs6_stack_6->SetMinimum(-1.084988e-09);
   hs6_stack_6->SetMaximum(51.14952);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.03055326);
   hbadmatch_stack_1->SetBinContent(2,0.2003851);
   hbadmatch_stack_1->SetBinContent(3,0.0127502);
   hbadmatch_stack_1->SetBinContent(5,0.06195629);
   hbadmatch_stack_1->SetBinContent(6,0.04039596);
   hbadmatch_stack_1->SetBinContent(7,0.1002069);
   hbadmatch_stack_1->SetBinContent(8,0.1006905);
   hbadmatch_stack_1->SetBinContent(9,0.1239126);
   hbadmatch_stack_1->SetBinContent(10,0.0127502);
   hbadmatch_stack_1->SetBinContent(11,0.07401035);
   hbadmatch_stack_1->SetBinContent(12,0.02550039);
   hbadmatch_stack_1->SetBinContent(14,0.2286842);
   hbadmatch_stack_1->SetBinContent(15,0.1002069);
   hbadmatch_stack_1->SetBinContent(16,0.2241195);
   hbadmatch_stack_1->SetBinContent(17,0.06736695);
   hbadmatch_stack_1->SetBinContent(18,0.1514996);
   hbadmatch_stack_1->SetBinContent(19,0.2268095);
   hbadmatch_stack_1->SetBinContent(20,0.4667338);
   hbadmatch_stack_1->SetBinContent(21,0.2246313);
   hbadmatch_stack_1->SetBinContent(22,0.611041);
   hbadmatch_stack_1->SetBinContent(23,0.5606405);
   hbadmatch_stack_1->SetBinContent(24,0.7602015);
   hbadmatch_stack_1->SetBinContent(25,0.8597978);
   hbadmatch_stack_1->SetBinError(1,0.02189786);
   hbadmatch_stack_1->SetBinError(2,0.1162979);
   hbadmatch_stack_1->SetBinError(3,0.0127502);
   hbadmatch_stack_1->SetBinError(5,0.06195629);
   hbadmatch_stack_1->SetBinError(6,0.02338831);
   hbadmatch_stack_1->SetBinError(7,0.0657745);
   hbadmatch_stack_1->SetBinError(8,0.077322);
   hbadmatch_stack_1->SetBinError(9,0.08761943);
   hbadmatch_stack_1->SetBinError(10,0.0127502);
   hbadmatch_stack_1->SetBinError(11,0.063118);
   hbadmatch_stack_1->SetBinError(12,0.0180315);
   hbadmatch_stack_1->SetBinError(14,0.1101375);
   hbadmatch_stack_1->SetBinError(15,0.0657745);
   hbadmatch_stack_1->SetBinError(16,0.1095603);
   hbadmatch_stack_1->SetBinError(17,0.03030052);
   hbadmatch_stack_1->SetBinError(18,0.08977674);
   hbadmatch_stack_1->SetBinError(19,0.1099058);
   hbadmatch_stack_1->SetBinError(20,0.164555);
   hbadmatch_stack_1->SetBinError(21,0.1168764);
   hbadmatch_stack_1->SetBinError(22,0.1824528);
   hbadmatch_stack_1->SetBinError(23,0.1824503);
   hbadmatch_stack_1->SetBinError(24,0.2237964);
   hbadmatch_stack_1->SetBinError(25,0.3194576);
   hbadmatch_stack_1->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1504;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.4349078);
   hext_stack_2->SetBinContent(2,0.211319);
   hext_stack_2->SetBinContent(3,0.2726682);
   hext_stack_2->SetBinContent(4,0.211319);
   hext_stack_2->SetBinContent(5,0.2358586);
   hext_stack_2->SetBinContent(6,0.2603984);
   hext_stack_2->SetBinContent(7,0.2972079);
   hext_stack_2->SetBinContent(8,0.03680956);
   hext_stack_2->SetBinContent(9,0.01226985);
   hext_stack_2->SetBinContent(10,0.4717173);
   hext_stack_2->SetBinContent(11,0.6584966);
   hext_stack_2->SetBinContent(12,0.03680956);
   hext_stack_2->SetBinContent(13,0.2972079);
   hext_stack_2->SetBinContent(14,0.5453364);
   hext_stack_2->SetBinContent(15,0.8820854);
   hext_stack_2->SetBinContent(16,0.7321157);
   hext_stack_2->SetBinContent(17,0.7689253);
   hext_stack_2->SetBinContent(18,0.8057348);
   hext_stack_2->SetBinContent(19,1.82552);
   hext_stack_2->SetBinContent(20,0.9557045);
   hext_stack_2->SetBinContent(21,1.439692);
   hext_stack_2->SetBinContent(22,0.6189556);
   hext_stack_2->SetBinContent(23,0.9038936);
   hext_stack_2->SetBinContent(24,1.773709);
   hext_stack_2->SetBinContent(25,1.66328);
   hext_stack_2->SetBinError(1,0.282299);
   hext_stack_2->SetBinError(2,0.1994269);
   hext_stack_2->SetBinError(3,0.2013053);
   hext_stack_2->SetBinError(4,0.1994269);
   hext_stack_2->SetBinError(5,0.2001804);
   hext_stack_2->SetBinError(6,0.2009311);
   hext_stack_2->SetBinError(7,0.2020518);
   hext_stack_2->SetBinError(8,0.02125201);
   hext_stack_2->SetBinError(9,0.01226985);
   hext_stack_2->SetBinError(10,0.2830978);
   hext_stack_2->SetBinError(11,0.3458531);
   hext_stack_2->SetBinError(12,0.02125201);
   hext_stack_2->SetBinError(13,0.2020518);
   hext_stack_2->SetBinError(14,0.2846888);
   hext_stack_2->SetBinError(15,0.3994196);
   hext_stack_2->SetBinError(16,0.3471566);
   hext_stack_2->SetBinError(17,0.3478065);
   hext_stack_2->SetBinError(18,0.3484551);
   hext_stack_2->SetBinError(19,0.5655306);
   hext_stack_2->SetBinError(20,0.4005488);
   hext_stack_2->SetBinError(21,0.4906468);
   hext_stack_2->SetBinError(22,0.2862708);
   hext_stack_2->SetBinError(23,0.3501791);
   hext_stack_2->SetBinError(24,0.5310469);
   hext_stack_2->SetBinError(25,0.5297697);
   hext_stack_2->SetEntries(328);

   ci = 1505;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.1408468);
   hdirt_stack_3->SetBinContent(2,0.1847113);
   hdirt_stack_3->SetBinContent(3,0.008219617);
   hdirt_stack_3->SetBinContent(4,0.04420907);
   hdirt_stack_3->SetBinContent(5,0.008219617);
   hdirt_stack_3->SetBinContent(6,0.04420907);
   hdirt_stack_3->SetBinContent(7,0.02622873);
   hdirt_stack_3->SetBinContent(8,0.008219617);
   hdirt_stack_3->SetBinContent(9,0.01643923);
   hdirt_stack_3->SetBinContent(10,0.1151102);
   hdirt_stack_3->SetBinContent(11,0.06830636);
   hdirt_stack_3->SetBinContent(12,0.04960847);
   hdirt_stack_3->SetBinContent(13,0.01643923);
   hdirt_stack_3->SetBinContent(14,0.1139844);
   hdirt_stack_3->SetBinContent(15,0.106116);
   hdirt_stack_3->SetBinContent(16,0.1616702);
   hdirt_stack_3->SetBinContent(17,0.06753192);
   hdirt_stack_3->SetBinContent(18,0.1503793);
   hdirt_stack_3->SetBinContent(19,0.2374846);
   hdirt_stack_3->SetBinContent(20,0.2208028);
   hdirt_stack_3->SetBinContent(21,0.3267998);
   hdirt_stack_3->SetBinContent(22,0.2515985);
   hdirt_stack_3->SetBinContent(23,0.2429078);
   hdirt_stack_3->SetBinContent(24,0.3640652);
   hdirt_stack_3->SetBinContent(25,0.1377358);
   hdirt_stack_3->SetBinError(1,0.07701226);
   hdirt_stack_3->SetBinError(2,0.09244449);
   hdirt_stack_3->SetBinError(3,0.008219618);
   hdirt_stack_3->SetBinError(4,0.04420907);
   hdirt_stack_3->SetBinError(5,0.008219618);
   hdirt_stack_3->SetBinError(6,0.04420907);
   hdirt_stack_3->SetBinError(7,0.01519732);
   hdirt_stack_3->SetBinError(8,0.008219618);
   hdirt_stack_3->SetBinError(9,0.01162429);
   hdirt_stack_3->SetBinError(10,0.07474051);
   hdirt_stack_3->SetBinError(11,0.05359669);
   hdirt_stack_3->SetBinError(12,0.04960847);
   hdirt_stack_3->SetBinError(13,0.01162429);
   hdirt_stack_3->SetBinError(14,0.06424415);
   hdirt_stack_3->SetBinError(15,0.06376742);
   hdirt_stack_3->SetBinError(16,0.08026993);
   hdirt_stack_3->SetBinError(17,0.05239834);
   hdirt_stack_3->SetBinError(18,0.07759997);
   hdirt_stack_3->SetBinError(19,0.09953559);
   hdirt_stack_3->SetBinError(20,0.09392427);
   hdirt_stack_3->SetBinError(21,0.1142475);
   hdirt_stack_3->SetBinError(22,0.1093487);
   hdirt_stack_3->SetBinError(23,0.09922345);
   hdirt_stack_3->SetBinError(24,0.2171762);
   hdirt_stack_3->SetBinError(25,0.065683);
   hdirt_stack_3->SetEntries(113);

   ci = 1506;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,0.5594013);
   houtFV_stack_4->SetBinContent(2,0.1986191);
   houtFV_stack_4->SetBinContent(3,0.3006206);
   houtFV_stack_4->SetBinContent(4,0.5003783);
   houtFV_stack_4->SetBinContent(5,0.298826);
   houtFV_stack_4->SetBinContent(6,0.4609891);
   houtFV_stack_4->SetBinContent(7,0.5594013);
   houtFV_stack_4->SetBinContent(8,0.4464442);
   houtFV_stack_4->SetBinContent(9,0.3930944);
   houtFV_stack_4->SetBinContent(10,0.4846948);
   houtFV_stack_4->SetBinContent(11,0.4099883);
   houtFV_stack_4->SetBinContent(12,0.3942198);
   houtFV_stack_4->SetBinContent(13,0.5484458);
   houtFV_stack_4->SetBinContent(14,0.8348398);
   houtFV_stack_4->SetBinContent(15,0.5714428);
   houtFV_stack_4->SetBinContent(16,0.65151);
   houtFV_stack_4->SetBinContent(17,0.8217714);
   houtFV_stack_4->SetBinContent(18,1.268259);
   houtFV_stack_4->SetBinContent(19,1.331967);
   houtFV_stack_4->SetBinContent(20,1.63204);
   houtFV_stack_4->SetBinContent(21,2.58836);
   houtFV_stack_4->SetBinContent(22,1.79834);
   houtFV_stack_4->SetBinContent(23,3.008326);
   houtFV_stack_4->SetBinContent(24,3.005765);
   houtFV_stack_4->SetBinContent(25,3.263315);
   houtFV_stack_4->SetBinError(1,0.1775429);
   houtFV_stack_4->SetBinError(2,0.1080662);
   houtFV_stack_4->SetBinError(3,0.1139248);
   houtFV_stack_4->SetBinError(4,0.1666323);
   houtFV_stack_4->SetBinError(5,0.1265093);
   houtFV_stack_4->SetBinError(6,0.1554653);
   houtFV_stack_4->SetBinError(7,0.1775429);
   houtFV_stack_4->SetBinError(8,0.1644161);
   houtFV_stack_4->SetBinError(9,0.1451164);
   houtFV_stack_4->SetBinError(10,0.1658926);
   houtFV_stack_4->SetBinError(11,0.1533597);
   houtFV_stack_4->SetBinError(12,0.1422368);
   houtFV_stack_4->SetBinError(13,0.1683246);
   houtFV_stack_4->SetBinError(14,0.2215875);
   houtFV_stack_4->SetBinError(15,0.1813561);
   houtFV_stack_4->SetBinError(16,0.1862108);
   houtFV_stack_4->SetBinError(17,0.2097919);
   houtFV_stack_4->SetBinError(18,0.2695027);
   houtFV_stack_4->SetBinError(19,0.2680637);
   houtFV_stack_4->SetBinError(20,0.2881782);
   houtFV_stack_4->SetBinError(21,0.3906882);
   houtFV_stack_4->SetBinError(22,0.2948735);
   houtFV_stack_4->SetBinError(23,0.4091681);
   houtFV_stack_4->SetBinError(24,0.4063421);
   houtFV_stack_4->SetBinError(25,0.426356);
   houtFV_stack_4->SetEntries(682);

   ci = 1507;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.149413);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1239126);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.149413);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.07650118);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5739462);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.396299);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.892377);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.08945557);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.08761943);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.08945557);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03123147);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1692877);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2752507);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5134084);
   hNCpi0inFVcoh_stack_5->SetEntries(209);

   ci = 1508;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1986191);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1366628);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1749134);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3352818);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1080662);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.08854226);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.09125478);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.139707);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1509;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.421218);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.938779);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.567042);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.50688);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.00764);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.060436);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.193509);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.50688);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.454085);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.131553);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.678204);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.102737);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.940574);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.625683);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.120872);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.76414);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.061171);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.132004);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.851871);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.014495);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.838797);
   hNCpi0inFVres_stack_7->SetBinContent(22,9.52059);
   hNCpi0inFVres_stack_7->SetBinContent(23,11.8839);
   hNCpi0inFVres_stack_7->SetBinContent(24,14.64625);
   hNCpi0inFVres_stack_7->SetBinContent(25,18.02976);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2701779);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3317851);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2950422);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2831705);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2356446);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2305492);
   hNCpi0inFVres_stack_7->SetBinError(7,0.2589288);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2831705);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2873344);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2514071);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3075134);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3394415);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3271936);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3784555);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3260458);
   hNCpi0inFVres_stack_7->SetBinError(16,0.384763);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4087455);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4672686);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4455276);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5237281);
   hNCpi0inFVres_stack_7->SetBinError(21,0.655132);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7195213);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8052629);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8941569);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9821416);
   hNCpi0inFVres_stack_7->SetEntries(2735);

   ci = 1510;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.2113693);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2605754);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3972381);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1002069);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.05100079);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.149413);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.2733256);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.2605754);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1986191);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2733256);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1986191);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2988259);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.384488);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5594013);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5339009);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3370765);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9711843);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7215645);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8235661);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8982725);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.198893);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.741955);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.326857);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.731735);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.555575);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1088158);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1245668);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1528288);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.0657745);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.08945557);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1252177);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1245668);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1080662);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1252177);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1080662);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1265093);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.152296);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1775429);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1766249);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1284224);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2280678);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1992144);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2024522);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2121039);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2407632);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3088322);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3566847);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4539923);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5416498);
   hNCpi0inFVdis_stack_8->SetEntries(592);

   ci = 1511;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetEntries(2);

   ci = 1512;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1513;
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
   hs6->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,0.5849017);
   hCCpi0inFV_stack_11->SetBinContent(2,0.7485118);
   hCCpi0inFV_stack_11->SetBinContent(3,0.497445);
   hCCpi0inFV_stack_11->SetBinContent(4,0.3243263);
   hCCpi0inFV_stack_11->SetBinContent(5,0.2988259);
   hCCpi0inFV_stack_11->SetBinContent(6,0.6086074);
   hCCpi0inFV_stack_11->SetBinContent(7,0.5594013);
   hCCpi0inFV_stack_11->SetBinContent(8,0.497445);
   hCCpi0inFV_stack_11->SetBinContent(9,0.2988259);
   hCCpi0inFV_stack_11->SetBinContent(10,0.2905976);
   hCCpi0inFV_stack_11->SetBinContent(11,0.5958572);
   hCCpi0inFV_stack_11->SetBinContent(12,0.3735324);
   hCCpi0inFV_stack_11->SetBinContent(13,0.6341078);
   hCCpi0inFV_stack_11->SetBinContent(14,0.5356956);
   hCCpi0inFV_stack_11->SetBinContent(15,0.5976519);
   hCCpi0inFV_stack_11->SetBinContent(16,0.7616098);
   hCCpi0inFV_stack_11->SetBinContent(17,0.9839345);
   hCCpi0inFV_stack_11->SetBinContent(18,0.8472717);
   hCCpi0inFV_stack_11->SetBinContent(19,1.719006);
   hCCpi0inFV_stack_11->SetBinContent(20,1.981137);
   hCCpi0inFV_stack_11->SetBinContent(21,2.28124);
   hCCpi0inFV_stack_11->SetBinContent(22,2.862552);
   hCCpi0inFV_stack_11->SetBinContent(23,4.085166);
   hCCpi0inFV_stack_11->SetBinContent(24,5.329661);
   hCCpi0inFV_stack_11->SetBinContent(25,8.403082);
   hCCpi0inFV_stack_11->SetBinError(1,0.1784562);
   hCCpi0inFV_stack_11->SetBinError(2,0.2123959);
   hCCpi0inFV_stack_11->SetBinError(3,0.1663818);
   hCCpi0inFV_stack_11->SetBinError(4,0.1277878);
   hCCpi0inFV_stack_11->SetBinError(5,0.1265093);
   hCCpi0inFV_stack_11->SetBinError(6,0.18761);
   hCCpi0inFV_stack_11->SetBinError(7,0.1775429);
   hCCpi0inFV_stack_11->SetBinError(8,0.1663818);
   hCCpi0inFV_stack_11->SetBinError(9,0.1265093);
   hCCpi0inFV_stack_11->SetBinError(10,0.1135485);
   hCCpi0inFV_stack_11->SetBinError(11,0.1871762);
   hCCpi0inFV_stack_11->SetBinError(12,0.1414417);
   hCCpi0inFV_stack_11->SetBinError(13,0.1884745);
   hCCpi0inFV_stack_11->SetBinError(14,0.167841);
   hCCpi0inFV_stack_11->SetBinError(15,0.1789111);
   hCCpi0inFV_stack_11->SetBinError(16,0.192739);
   hCCpi0inFV_stack_11->SetBinError(17,0.228424);
   hCCpi0inFV_stack_11->SetBinError(18,0.2105654);
   hCCpi0inFV_stack_11->SetBinError(19,0.3084214);
   hCCpi0inFV_stack_11->SetBinError(20,0.328036);
   hCCpi0inFV_stack_11->SetBinError(21,0.3427775);
   hCCpi0inFV_stack_11->SetBinError(22,0.3942012);
   hCCpi0inFV_stack_11->SetBinError(23,0.4707351);
   hCCpi0inFV_stack_11->SetBinError(24,0.533298);
   hCCpi0inFV_stack_11->SetBinError(25,0.681208);
   hCCpi0inFV_stack_11->SetEntries(955);

   ci = 1514;
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
   hs6->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.149413);
   hNCinFV_stack_12->SetBinContent(2,0.1749134);
   hNCinFV_stack_12->SetBinContent(3,0.2860757);
   hNCinFV_stack_12->SetBinContent(4,0.02550039);
   hNCinFV_stack_12->SetBinContent(5,0.05100079);
   hNCinFV_stack_12->SetBinContent(6,0.1621632);
   hNCinFV_stack_12->SetBinContent(7,0.07470649);
   hNCinFV_stack_12->SetBinContent(8,0.02550039);
   hNCinFV_stack_12->SetBinContent(9,0.1621632);
   hNCinFV_stack_12->SetBinContent(10,0.06195629);
   hNCinFV_stack_12->SetBinContent(11,0.3352818);
   hNCinFV_stack_12->SetBinContent(12,0.03825059);
   hNCinFV_stack_12->SetBinContent(13,0.08745668);
   hNCinFV_stack_12->SetBinContent(14,0.3115761);
   hNCinFV_stack_12->SetBinContent(15,0.1986191);
   hNCinFV_stack_12->SetBinContent(16,0.2988259);
   hNCinFV_stack_12->SetBinContent(17,0.1621632);
   hNCinFV_stack_12->SetBinContent(18,0.3115761);
   hNCinFV_stack_12->SetBinContent(19,0.3607822);
   hNCinFV_stack_12->SetBinContent(20,0.6851086);
   hNCinFV_stack_12->SetBinContent(21,0.4227385);
   hNCinFV_stack_12->SetBinContent(22,0.9219782);
   hNCinFV_stack_12->SetBinContent(23,0.9966847);
   hNCinFV_stack_12->SetBinContent(24,1.867662);
   hNCinFV_stack_12->SetBinContent(25,2.540021);
   hNCinFV_stack_12->SetBinError(1,0.08945557);
   hNCinFV_stack_12->SetBinError(2,0.09125478);
   hNCinFV_stack_12->SetBinError(3,0.1258651);
   hNCinFV_stack_12->SetBinError(4,0.0180315);
   hNCinFV_stack_12->SetBinError(5,0.02550039);
   hNCinFV_stack_12->SetBinError(6,0.09035965);
   hNCinFV_stack_12->SetBinError(7,0.06325464);
   hNCinFV_stack_12->SetBinError(8,0.0180315);
   hNCinFV_stack_12->SetBinError(9,0.09035965);
   hNCinFV_stack_12->SetBinError(10,0.06195629);
   hNCinFV_stack_12->SetBinError(11,0.139707);
   hNCinFV_stack_12->SetBinError(12,0.02208399);
   hNCinFV_stack_12->SetBinError(13,0.06452687);
   hNCinFV_stack_12->SetBinError(14,0.1271502);
   hNCinFV_stack_12->SetBinError(15,0.1080662);
   hNCinFV_stack_12->SetBinError(16,0.1265093);
   hNCinFV_stack_12->SetBinError(17,0.09035965);
   hNCinFV_stack_12->SetBinError(18,0.1271502);
   hNCinFV_stack_12->SetBinError(19,0.1408658);
   hNCinFV_stack_12->SetBinError(20,0.1901918);
   hNCinFV_stack_12->SetBinError(21,0.1538888);
   hNCinFV_stack_12->SetBinError(22,0.2198612);
   hNCinFV_stack_12->SetBinError(23,0.2287795);
   hNCinFV_stack_12->SetBinError(24,0.3162732);
   hNCinFV_stack_12->SetBinError(25,0.3688348);
   hNCinFV_stack_12->SetEntries(296);

   ci = 1515;
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
   hs6->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.1976265);
   hnumuCCinFV_stack_13->SetBinContent(2,0.168486);
   hnumuCCinFV_stack_13->SetBinContent(3,0.0127502);
   hnumuCCinFV_stack_13->SetBinContent(4,0.2232804);
   hnumuCCinFV_stack_13->SetBinContent(5,0.1239126);
   hnumuCCinFV_stack_13->SetBinContent(6,0.1459931);
   hnumuCCinFV_stack_13->SetBinContent(7,0.2112734);
   hnumuCCinFV_stack_13->SetBinContent(8,0.07604568);
   hnumuCCinFV_stack_13->SetBinContent(10,0.116723);
   hnumuCCinFV_stack_13->SetBinContent(11,0.08745668);
   hnumuCCinFV_stack_13->SetBinContent(12,0.2093713);
   hnumuCCinFV_stack_13->SetBinContent(13,0.1184469);
   hnumuCCinFV_stack_13->SetBinContent(14,0.1506049);
   hnumuCCinFV_stack_13->SetBinContent(15,0.08597303);
   hnumuCCinFV_stack_13->SetBinContent(16,0.3284262);
   hnumuCCinFV_stack_13->SetBinContent(17,0.4113854);
   hnumuCCinFV_stack_13->SetBinContent(18,0.4292706);
   hnumuCCinFV_stack_13->SetBinContent(19,0.5421302);
   hnumuCCinFV_stack_13->SetBinContent(20,1.630273);
   hnumuCCinFV_stack_13->SetBinContent(21,0.7088014);
   hnumuCCinFV_stack_13->SetBinContent(22,1.124694);
   hnumuCCinFV_stack_13->SetBinContent(23,0.8982882);
   hnumuCCinFV_stack_13->SetBinContent(24,1.102234);
   hnumuCCinFV_stack_13->SetBinContent(25,2.070251);
   hnumuCCinFV_stack_13->SetBinError(1,0.1145029);
   hnumuCCinFV_stack_13->SetBinError(2,0.09138024);
   hnumuCCinFV_stack_13->SetBinError(3,0.0127502);
   hnumuCCinFV_stack_13->SetBinError(4,0.1238642);
   hnumuCCinFV_stack_13->SetBinError(5,0.08761943);
   hnumuCCinFV_stack_13->SetBinError(6,0.0953044);
   hnumuCCinFV_stack_13->SetBinError(7,0.106676);
   hnumuCCinFV_stack_13->SetBinError(8,0.06326882);
   hnumuCCinFV_stack_13->SetBinError(10,0.06687934);
   hnumuCCinFV_stack_13->SetBinError(11,0.06452687);
   hnumuCCinFV_stack_13->SetBinError(12,0.09074318);
   hnumuCCinFV_stack_13->SetBinError(13,0.1031939);
   hnumuCCinFV_stack_13->SetBinError(14,0.08946351);
   hnumuCCinFV_stack_13->SetBinError(15,0.06476014);
   hnumuCCinFV_stack_13->SetBinError(16,0.2039169);
   hnumuCCinFV_stack_13->SetBinError(17,0.2085165);
   hnumuCCinFV_stack_13->SetBinError(18,0.1639378);
   hnumuCCinFV_stack_13->SetBinError(19,0.1883601);
   hnumuCCinFV_stack_13->SetBinError(20,0.7112684);
   hnumuCCinFV_stack_13->SetBinError(21,0.2049626);
   hnumuCCinFV_stack_13->SetBinError(22,0.2576809);
   hnumuCCinFV_stack_13->SetBinError(23,0.2151944);
   hnumuCCinFV_stack_13->SetBinError(24,0.2632289);
   hnumuCCinFV_stack_13->SetBinError(25,0.341005);
   hnumuCCinFV_stack_13->SetEntries(262);

   ci = 1516;
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
   hs6->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_14->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_14->SetBinContent(5,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(7,0.01618016);
   hnueCCinFV_stack_14->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.1458663);
   hnueCCinFV_stack_14->SetBinContent(19,0.1239126);
   hnueCCinFV_stack_14->SetBinContent(20,0.09345868);
   hnueCCinFV_stack_14->SetBinContent(21,0.1419592);
   hnueCCinFV_stack_14->SetBinContent(22,0.01485452);
   hnueCCinFV_stack_14->SetBinContent(23,0.2179811);
   hnueCCinFV_stack_14->SetBinContent(24,0.06195668);
   hnueCCinFV_stack_14->SetBinContent(25,0.9633422);
   hnueCCinFV_stack_14->SetBinError(1,0.02331381);
   hnueCCinFV_stack_14->SetBinError(2,0.06195629);
   hnueCCinFV_stack_14->SetBinError(3,0.06910958);
   hnueCCinFV_stack_14->SetBinError(5,0.0127502);
   hnueCCinFV_stack_14->SetBinError(7,0.01618016);
   hnueCCinFV_stack_14->SetBinError(11,0.06195629);
   hnueCCinFV_stack_14->SetBinError(12,0.06195629);
   hnueCCinFV_stack_14->SetBinError(13,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.09679568);
   hnueCCinFV_stack_14->SetBinError(19,0.08761943);
   hnueCCinFV_stack_14->SetBinError(20,0.06584232);
   hnueCCinFV_stack_14->SetBinError(21,0.08945862);
   hnueCCinFV_stack_14->SetBinError(22,0.01485452);
   hnueCCinFV_stack_14->SetBinError(23,0.1245854);
   hnueCCinFV_stack_14->SetBinError(24,0.06195629);
   hnueCCinFV_stack_14->SetBinError(25,0.4961107);
   hnueCCinFV_stack_14->SetEntries(45);

   ci = 1517;
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
   hs6->Add(hnueCCinFV_stack_14,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__17->SetBinContent(1,3.924669);
   hmcerror__17->SetBinContent(2,4.222963);
   hmcerror__17->SetBinContent(3,3.499883);
   hmcerror__17->SetBinContent(4,2.998056);
   hmcerror__17->SetBinContent(5,2.149991);
   hmcerror__17->SetBinContent(6,3.056517);
   hmcerror__17->SetBinContent(7,3.311441);
   hmcerror__17->SetBinContent(8,2.958611);
   hmcerror__17->SetBinContent(9,2.659409);
   hmcerror__17->SetBinContent(10,2.958428);
   hmcerror__17->SetBinContent(11,4.168177);
   hmcerror__17->SetBinContent(12,3.590812);
   hmcerror__17->SetBinContent(13,4.089123);
   hmcerror__17->SetBinContent(14,5.905805);
   hmcerror__17->SetBinContent(15,5.258824);
   hmcerror__17->SetBinContent(16,6.32145);
   hmcerror__17->SetBinContent(17,7.377391);
   hmcerror__17->SetBinContent(18,9.038133);
   hmcerror__17->SetBinContent(19,11.0558);
   hmcerror__17->SetBinContent(20,13.82585);
   hmcerror__17->SetBinContent(21,17.5819);
   hmcerror__17->SetBinContent(22,19.63052);
   hmcerror__17->SetBinContent(23,25.89721);
   hmcerror__17->SetBinContent(24,34.21445);
   hmcerror__17->SetBinContent(25,48.71382);
   hmcerror__17->SetBinError(1,2.170829);
   hmcerror__17->SetBinError(2,2.102695);
   hmcerror__17->SetBinError(3,1.926077);
   hmcerror__17->SetBinError(4,3.660742);
   hmcerror__17->SetBinError(5,1.121596);
   hmcerror__17->SetBinError(6,1.497735);
   hmcerror__17->SetBinError(7,2.000846);
   hmcerror__17->SetBinError(8,1.76768);
   hmcerror__17->SetBinError(9,1.553544);
   hmcerror__17->SetBinError(10,1.628073);
   hmcerror__17->SetBinError(11,1.961194);
   hmcerror__17->SetBinError(12,2.068875);
   hmcerror__17->SetBinError(13,1.923919);
   hmcerror__17->SetBinError(14,2.657125);
   hmcerror__17->SetBinError(15,2.348081);
   hmcerror__17->SetBinError(16,2.908427);
   hmcerror__17->SetBinError(17,2.780549);
   hmcerror__17->SetBinError(18,3.749385);
   hmcerror__17->SetBinError(19,3.615271);
   hmcerror__17->SetBinError(20,5.299466);
   hmcerror__17->SetBinError(21,7.31033);
   hmcerror__17->SetBinError(22,7.657129);
   hmcerror__17->SetBinError(23,6.975797);
   hmcerror__17->SetBinError(24,8.488412);
   hmcerror__17->SetBinError(25,12.57552);
   hmcerror__17->SetBinError(26,0.1094984);
   hmcerror__17->SetEntries(245.546);

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
   Double_t _fy3021[25] = {
   4,
   3,
   9,
   1,
   3,
   1,
   5,
   4,
   8,
   2,
   2,
   4,
   8,
   2,
   4,
   5,
   7,
   10,
   6,
   13,
   16,
   25,
   18,
   30,
   49};
   Double_t _felx3021[25] = {
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
   Double_t _fely3021[25] = {
   2.29683,
   2.143368,
   3.19354,
   1,
   2.143368,
   1,
   2.48995,
   2.29683,
   3.0307,
   2,
   2,
   2.29683,
   3.0307,
   2,
   2.29683,
   2.48995,
   2.85954,
   3.34883,
   2.67925,
   3.77763,
   4.1628,
   5.1474,
   4.4008,
   5.6197,
   7.1318};
   Double_t _fehx3021[25] = {
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
   Double_t _fehy3021[25] = {
   1.98186,
   1.72422,
   2.9582,
   1.35971,
   1.72422,
   1.35971,
   2.21064,
   1.98186,
   2.7896,
   1.51917,
   1.51917,
   1.98186,
   2.7896,
   1.51917,
   1.98186,
   2.21064,
   2.61053,
   3.1179,
   2.41858,
   3.5552,
   3.9454,
   4.9374,
   4.1858,
   5.4117,
   6.9277};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(61.52047);
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
   entry=leg->AddEntry("NULL","POT: 5.33e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=20.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 239.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.3","F");

   ci = 1504;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 16.4","F");

   ci = 1505;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 3.1","F");

   ci = 1506;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 26.3","F");

   ci = 1507;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  7.8","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1509;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  105.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  22.5","F");

   ci = 1511;
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

   ci = 1512;
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

   ci = 1513;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 36.7","F");

   ci = 1514;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 10.7","F");

   ci = 1515;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 11.2","F");

   ci = 1516;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 2.1","F");

   ci = 1517;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[25] = {
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
   Double_t _fely3022[25] = {
   0.553124,
   0.4979195,
   0.5503263,
   1.221038,
   0.5216748,
   0.4900135,
   0.6042221,
   0.5974697,
   0.584169,
   0.5503169,
   0.4705161,
   0.5761582,
   0.4704967,
   0.4499174,
   0.446503,
   0.4600886,
   0.3769013,
   0.4148407,
   0.3270022,
   0.3833012,
   0.4157873,
   0.3900625,
   0.2693648,
   0.2480943,
   0.2581509};
   Double_t _fehx3022[25] = {
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
   Double_t _fehy3022[25] = {
   0.553124,
   0.4979195,
   0.5503263,
   1.221038,
   0.5216748,
   0.4900135,
   0.6042221,
   0.5974697,
   0.584169,
   0.5503169,
   0.4705161,
   0.5761582,
   0.4704967,
   0.4499174,
   0.446503,
   0.4600886,
   0.3769013,
   0.4148407,
   0.3270022,
   0.3833012,
   0.4157873,
   0.3900625,
   0.2693648,
   0.2480943,
   0.2581509};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Pred");
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
   Double_t _fely3023[25] = {
   0.2332719,
   0.2481954,
   0.2342297,
   0.2721255,
   0.2880074,
   0.2500364,
   0.2713983,
   0.2791678,
   0.2798716,
   0.2828482,
   0.2414758,
   0.2916282,
   0.2319007,
   0.231933,
   0.2390685,
   0.227005,
   0.2234077,
   0.2459394,
   0.2341191,
   0.2411212,
   0.2133182,
   0.2359635,
   0.2160552,
   0.1916638,
   0.2063632};
   Double_t _fehx3023[25] = {
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
   Double_t _fehy3023[25] = {
   0.2332719,
   0.2481954,
   0.2342297,
   0.2721255,
   0.2880074,
   0.2500364,
   0.2713983,
   0.2791678,
   0.2798716,
   0.2828482,
   0.2414758,
   0.2916282,
   0.2319007,
   0.231933,
   0.2390685,
   0.227005,
   0.2234077,
   0.2459394,
   0.2341191,
   0.2411212,
   0.2133182,
   0.2359635,
   0.2160552,
   0.1916638,
   0.2063632};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
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
   
   Double_t _fx3024[25] = {
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
   Double_t _fy3024[25] = {
   1.019194,
   0.7104017,
   2.571515,
   0.3335494,
   1.395355,
   0.3271698,
   1.509917,
   1.351986,
   3.008188,
   0.6760348,
   0.4798261,
   1.113954,
   1.95641,
   0.3386498,
   0.7606263,
   0.7909577,
   0.9488449,
   1.106423,
   0.5427016,
   0.9402676,
   0.9100268,
   1.273527,
   0.6950555,
   0.8768225,
   1.005875};
   Double_t _felx3024[25] = {
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
   Double_t _fely3024[25] = {
   0.5852289,
   0.5075508,
   0.9124706,
   0.3335494,
   0.9969195,
   0.3271698,
   0.7519234,
   0.7763205,
   1.139614,
   0.6760348,
   0.4798261,
   0.6396409,
   0.7411614,
   0.3386498,
   0.4367574,
   0.393889,
   0.3876086,
   0.3705223,
   0.2423389,
   0.2732295,
   0.2367662,
   0.2622142,
   0.1699334,
   0.1642493,
   0.146402};
   Double_t _fehx3024[25] = {
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
   Double_t _fehy3024[25] = {
   0.504975,
   0.4082963,
   0.8452283,
   0.4535305,
   0.8019661,
   0.444856,
   0.6675765,
   0.6698617,
   1.048955,
   0.5135059,
   0.3644687,
   0.5519253,
   0.6822001,
   0.2572333,
   0.3768637,
   0.3497046,
   0.3538555,
   0.3449717,
   0.2187612,
   0.2571415,
   0.2244012,
   0.2515166,
   0.1616313,
   0.15817,
   0.1422122};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(4.462857);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_8_pi0_costheta_all",25,-1,1);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

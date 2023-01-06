#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 23:31:31 2022) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-4.9,3.957692,541.8368);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__4->SetBinContent(1,226.4818);
   hmc__4->SetBinContent(2,231.418);
   hmc__4->SetBinContent(3,236.0343);
   hmc__4->SetBinContent(4,228.4659);
   hmc__4->SetBinContent(5,191.9841);
   hmc__4->SetBinContent(6,183.5677);
   hmc__4->SetBinContent(7,194.7563);
   hmc__4->SetBinContent(8,186.3843);
   hmc__4->SetBinContent(9,196.352);
   hmc__4->SetBinContent(10,202.2557);
   hmc__4->SetBinContent(11,212.4466);
   hmc__4->SetBinContent(12,213.9344);
   hmc__4->SetBinContent(13,202.5231);
   hmc__4->SetBinContent(14,204.6086);
   hmc__4->SetBinContent(15,213.7037);
   hmc__4->SetBinContent(16,218.9562);
   hmc__4->SetBinContent(17,200.2451);
   hmc__4->SetBinContent(18,187.4538);
   hmc__4->SetBinContent(19,192.3538);
   hmc__4->SetBinContent(20,182.3917);
   hmc__4->SetBinContent(21,202.8019);
   hmc__4->SetBinContent(22,219.1731);
   hmc__4->SetBinContent(23,219.5072);
   hmc__4->SetBinContent(24,223.6792);
   hmc__4->SetBinContent(25,213.4734);
   hmc__4->SetBinError(1,72.70405);
   hmc__4->SetBinError(2,71.868);
   hmc__4->SetBinError(3,68.66082);
   hmc__4->SetBinError(4,62.46211);
   hmc__4->SetBinError(5,53.46342);
   hmc__4->SetBinError(6,47.65963);
   hmc__4->SetBinError(7,56.2262);
   hmc__4->SetBinError(8,54.09971);
   hmc__4->SetBinError(9,58.05251);
   hmc__4->SetBinError(10,55.8465);
   hmc__4->SetBinError(11,60.88275);
   hmc__4->SetBinError(12,62.8251);
   hmc__4->SetBinError(13,56.32806);
   hmc__4->SetBinError(14,60.97397);
   hmc__4->SetBinError(15,60.45245);
   hmc__4->SetBinError(16,60.42725);
   hmc__4->SetBinError(17,57.17028);
   hmc__4->SetBinError(18,52.01524);
   hmc__4->SetBinError(19,51.24925);
   hmc__4->SetBinError(20,51.28965);
   hmc__4->SetBinError(21,53.75309);
   hmc__4->SetBinError(22,61.51561);
   hmc__4->SetBinError(23,62.91476);
   hmc__4->SetBinError(24,65.02588);
   hmc__4->SetBinError(25,59.5011);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-4.9);
   hmc__4->SetMaximum(514.5);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-3.15,3.15);
   hs2_stack_2->SetMinimum(-8.304323e-09);
   hs2_stack_2->SetMaximum(247.836);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.464342);
   hbadmatch_stack_1->SetBinContent(2,5.103685);
   hbadmatch_stack_1->SetBinContent(3,5.299829);
   hbadmatch_stack_1->SetBinContent(4,4.423577);
   hbadmatch_stack_1->SetBinContent(5,7.202907);
   hbadmatch_stack_1->SetBinContent(6,4.630523);
   hbadmatch_stack_1->SetBinContent(7,6.193715);
   hbadmatch_stack_1->SetBinContent(8,5.582245);
   hbadmatch_stack_1->SetBinContent(9,5.162013);
   hbadmatch_stack_1->SetBinContent(10,3.815472);
   hbadmatch_stack_1->SetBinContent(11,4.415202);
   hbadmatch_stack_1->SetBinContent(12,4.60708);
   hbadmatch_stack_1->SetBinContent(13,3.088233);
   hbadmatch_stack_1->SetBinContent(14,5.179847);
   hbadmatch_stack_1->SetBinContent(15,5.359379);
   hbadmatch_stack_1->SetBinContent(16,4.447206);
   hbadmatch_stack_1->SetBinContent(17,4.897109);
   hbadmatch_stack_1->SetBinContent(18,7.12633);
   hbadmatch_stack_1->SetBinContent(19,4.789383);
   hbadmatch_stack_1->SetBinContent(20,4.772981);
   hbadmatch_stack_1->SetBinContent(21,4.248236);
   hbadmatch_stack_1->SetBinContent(22,3.602665);
   hbadmatch_stack_1->SetBinContent(23,5.052311);
   hbadmatch_stack_1->SetBinContent(24,3.588861);
   hbadmatch_stack_1->SetBinContent(25,2.377795);
   hbadmatch_stack_1->SetBinError(1,1.113419);
   hbadmatch_stack_1->SetBinError(2,1.152231);
   hbadmatch_stack_1->SetBinError(3,1.239087);
   hbadmatch_stack_1->SetBinError(4,1.04629);
   hbadmatch_stack_1->SetBinError(5,1.383921);
   hbadmatch_stack_1->SetBinError(6,1.15451);
   hbadmatch_stack_1->SetBinError(7,1.533311);
   hbadmatch_stack_1->SetBinError(8,1.567615);
   hbadmatch_stack_1->SetBinError(9,1.278407);
   hbadmatch_stack_1->SetBinError(10,1.146287);
   hbadmatch_stack_1->SetBinError(11,1.071551);
   hbadmatch_stack_1->SetBinError(12,1.085684);
   hbadmatch_stack_1->SetBinError(13,0.8484453);
   hbadmatch_stack_1->SetBinError(14,1.876235);
   hbadmatch_stack_1->SetBinError(15,1.930551);
   hbadmatch_stack_1->SetBinError(16,1.144622);
   hbadmatch_stack_1->SetBinError(17,1.1703);
   hbadmatch_stack_1->SetBinError(18,2.291634);
   hbadmatch_stack_1->SetBinError(19,1.245337);
   hbadmatch_stack_1->SetBinError(20,1.120563);
   hbadmatch_stack_1->SetBinError(21,1.117061);
   hbadmatch_stack_1->SetBinError(22,0.9713117);
   hbadmatch_stack_1->SetBinError(23,1.233031);
   hbadmatch_stack_1->SetBinError(24,1.049518);
   hbadmatch_stack_1->SetBinError(25,0.8463229);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,15.17373);
   hext_stack_2->SetBinContent(2,12.8004);
   hext_stack_2->SetBinContent(3,18.65713);
   hext_stack_2->SetBinContent(4,23.25935);
   hext_stack_2->SetBinContent(5,15.7128);
   hext_stack_2->SetBinContent(6,29.90616);
   hext_stack_2->SetBinContent(7,26.65337);
   hext_stack_2->SetBinContent(8,20.58758);
   hext_stack_2->SetBinContent(9,16.4785);
   hext_stack_2->SetBinContent(10,20.77233);
   hext_stack_2->SetBinContent(11,15.21405);
   hext_stack_2->SetBinContent(12,9.972982);
   hext_stack_2->SetBinContent(13,10.84243);
   hext_stack_2->SetBinContent(14,6.160778);
   hext_stack_2->SetBinContent(15,12.07659);
   hext_stack_2->SetBinContent(16,18.52586);
   hext_stack_2->SetBinContent(17,18.0227);
   hext_stack_2->SetBinContent(18,22.12894);
   hext_stack_2->SetBinContent(19,33.9302);
   hext_stack_2->SetBinContent(20,23.01558);
   hext_stack_2->SetBinContent(21,29.46643);
   hext_stack_2->SetBinContent(22,20.60352);
   hext_stack_2->SetBinContent(23,16.25785);
   hext_stack_2->SetBinContent(24,13.97989);
   hext_stack_2->SetBinContent(25,16.55353);
   hext_stack_2->SetBinError(1,2.786712);
   hext_stack_2->SetBinError(2,2.331193);
   hext_stack_2->SetBinError(3,3.033079);
   hext_stack_2->SetBinError(4,3.366977);
   hext_stack_2->SetBinError(5,2.56569);
   hext_stack_2->SetBinError(6,3.772802);
   hext_stack_2->SetBinError(7,3.593251);
   hext_stack_2->SetBinError(8,2.903707);
   hext_stack_2->SetBinError(9,2.825862);
   hext_stack_2->SetBinError(10,3.175889);
   hext_stack_2->SetBinError(11,2.625811);
   hext_stack_2->SetBinError(12,2.002479);
   hext_stack_2->SetBinError(13,2.206613);
   hext_stack_2->SetBinError(14,1.52832);
   hext_stack_2->SetBinError(15,2.227713);
   hext_stack_2->SetBinError(16,2.89995);
   hext_stack_2->SetBinError(17,2.930307);
   hext_stack_2->SetBinError(18,3.271002);
   hext_stack_2->SetBinError(19,4.035678);
   hext_stack_2->SetBinError(20,3.080508);
   hext_stack_2->SetBinError(21,3.839062);
   hext_stack_2->SetBinError(22,3.135438);
   hext_stack_2->SetBinError(23,2.708644);
   hext_stack_2->SetBinError(24,2.607933);
   hext_stack_2->SetBinError(25,2.871722);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,1.434933);
   hdirt_stack_3->SetBinContent(3,2.662945);
   hdirt_stack_3->SetBinContent(4,1.936032);
   hdirt_stack_3->SetBinContent(5,2.604667);
   hdirt_stack_3->SetBinContent(6,2.309958);
   hdirt_stack_3->SetBinContent(7,2.453872);
   hdirt_stack_3->SetBinContent(8,2.128445);
   hdirt_stack_3->SetBinContent(9,0.7310024);
   hdirt_stack_3->SetBinContent(10,1.996838);
   hdirt_stack_3->SetBinContent(11,3.073712);
   hdirt_stack_3->SetBinContent(12,1.288985);
   hdirt_stack_3->SetBinContent(13,2.046995);
   hdirt_stack_3->SetBinContent(14,1.191935);
   hdirt_stack_3->SetBinContent(15,1.608135);
   hdirt_stack_3->SetBinContent(16,2.659431);
   hdirt_stack_3->SetBinContent(17,3.596306);
   hdirt_stack_3->SetBinContent(18,2.838503);
   hdirt_stack_3->SetBinContent(19,2.346812);
   hdirt_stack_3->SetBinContent(20,2.668146);
   hdirt_stack_3->SetBinContent(21,1.823303);
   hdirt_stack_3->SetBinContent(22,1.423243);
   hdirt_stack_3->SetBinContent(23,2.574047);
   hdirt_stack_3->SetBinContent(24,1.041957);
   hdirt_stack_3->SetBinContent(25,0.4347737);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.6500014);
   hdirt_stack_3->SetBinError(3,0.8102292);
   hdirt_stack_3->SetBinError(4,0.7281509);
   hdirt_stack_3->SetBinError(5,0.8007842);
   hdirt_stack_3->SetBinError(6,0.8035393);
   hdirt_stack_3->SetBinError(7,0.7663643);
   hdirt_stack_3->SetBinError(8,0.9170881);
   hdirt_stack_3->SetBinError(9,0.372777);
   hdirt_stack_3->SetBinError(10,1.05735);
   hdirt_stack_3->SetBinError(11,1.305178);
   hdirt_stack_3->SetBinError(12,0.5734414);
   hdirt_stack_3->SetBinError(13,0.7116495);
   hdirt_stack_3->SetBinError(14,0.4974907);
   hdirt_stack_3->SetBinError(15,0.7077837);
   hdirt_stack_3->SetBinError(16,0.8387323);
   hdirt_stack_3->SetBinError(17,1.056033);
   hdirt_stack_3->SetBinError(18,0.880143);
   hdirt_stack_3->SetBinError(19,0.8130769);
   hdirt_stack_3->SetBinError(20,0.8416783);
   hdirt_stack_3->SetBinError(21,0.6103268);
   hdirt_stack_3->SetBinError(22,0.638851);
   hdirt_stack_3->SetBinError(23,0.8708309);
   hdirt_stack_3->SetBinError(24,0.5121617);
   hdirt_stack_3->SetBinError(25,0.2515774);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,12.75711);
   houtFV_stack_4->SetBinContent(2,17.50764);
   houtFV_stack_4->SetBinContent(3,17.2608);
   houtFV_stack_4->SetBinContent(4,19.65028);
   houtFV_stack_4->SetBinContent(5,13.20454);
   houtFV_stack_4->SetBinContent(6,13.32222);
   houtFV_stack_4->SetBinContent(7,16.12875);
   houtFV_stack_4->SetBinContent(8,15.03541);
   houtFV_stack_4->SetBinContent(9,14.48944);
   houtFV_stack_4->SetBinContent(10,15.71817);
   houtFV_stack_4->SetBinContent(11,15.17285);
   houtFV_stack_4->SetBinContent(12,13.15041);
   houtFV_stack_4->SetBinContent(13,14.67579);
   houtFV_stack_4->SetBinContent(14,12.84509);
   houtFV_stack_4->SetBinContent(15,16.07247);
   houtFV_stack_4->SetBinContent(16,15.02411);
   houtFV_stack_4->SetBinContent(17,13.79466);
   houtFV_stack_4->SetBinContent(18,13.91592);
   houtFV_stack_4->SetBinContent(19,13.68849);
   houtFV_stack_4->SetBinContent(20,11.16154);
   houtFV_stack_4->SetBinContent(21,14.53334);
   houtFV_stack_4->SetBinContent(22,16.59412);
   houtFV_stack_4->SetBinContent(23,15.01348);
   houtFV_stack_4->SetBinContent(24,15.90989);
   houtFV_stack_4->SetBinContent(25,14.49805);
   houtFV_stack_4->SetBinError(1,1.805526);
   houtFV_stack_4->SetBinError(2,2.125448);
   houtFV_stack_4->SetBinError(3,2.084553);
   houtFV_stack_4->SetBinError(4,2.23363);
   houtFV_stack_4->SetBinError(5,1.88087);
   houtFV_stack_4->SetBinError(6,1.871043);
   houtFV_stack_4->SetBinError(7,2.002189);
   houtFV_stack_4->SetBinError(8,1.883877);
   houtFV_stack_4->SetBinError(9,1.865424);
   houtFV_stack_4->SetBinError(10,2.078692);
   houtFV_stack_4->SetBinError(11,1.938403);
   houtFV_stack_4->SetBinError(12,1.723873);
   houtFV_stack_4->SetBinError(13,1.849219);
   houtFV_stack_4->SetBinError(14,1.719232);
   houtFV_stack_4->SetBinError(15,1.99392);
   houtFV_stack_4->SetBinError(16,1.978824);
   houtFV_stack_4->SetBinError(17,1.786735);
   houtFV_stack_4->SetBinError(18,1.782468);
   houtFV_stack_4->SetBinError(19,1.895615);
   houtFV_stack_4->SetBinError(20,1.63304);
   houtFV_stack_4->SetBinError(21,1.922991);
   houtFV_stack_4->SetBinError(22,2.038675);
   houtFV_stack_4->SetBinError(23,1.894626);
   houtFV_stack_4->SetBinError(24,2.044776);
   houtFV_stack_4->SetBinError(25,1.887486);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.71106);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.00005);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.859614);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.930437);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.101218);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.698611);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.675305);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.112955);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.728253);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.411297);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.950687);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.990872);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.582174);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.297226);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.262346);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.492105);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.578724);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.471385);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.13754);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.345471);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.218184);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.781855);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.435462);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.670374);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.369101);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6495714);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7500931);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8168021);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9214933);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5085882);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7148495);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7011256);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6227091);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5711022);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9230448);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7923554);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9769545);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6688772);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6797536);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6234435);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7791213);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7913019);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6187329);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7272187);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8833945);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7319207);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6536367);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7078771);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6889118);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9001727);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4737701);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7441099);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6017703);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6410196);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7107441);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.672687);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5241318);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6990894);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6891337);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7089604);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7209593);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7459495);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5130068);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6395932);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9889032);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5170172);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.815304);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.9043769);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.717357);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6261049);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5969278);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5740618);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.7810928);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.480861);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.9138896);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1314692);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.222901);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2058385);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1856983);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2470222);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2336602);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.221046);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2736724);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2567892);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2245988);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2150124);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2635472);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2027479);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.216776);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2994464);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1544714);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2455891);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3453011);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2472739);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2317985);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2048894);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1572172);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3304487);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1770842);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3363283);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,81.5706);
   hNCpi0inFVres_stack_7->SetBinContent(2,83.16446);
   hNCpi0inFVres_stack_7->SetBinContent(3,84.9832);
   hNCpi0inFVres_stack_7->SetBinContent(4,90.15057);
   hNCpi0inFVres_stack_7->SetBinContent(5,74.645);
   hNCpi0inFVres_stack_7->SetBinContent(6,65.88406);
   hNCpi0inFVres_stack_7->SetBinContent(7,71.94995);
   hNCpi0inFVres_stack_7->SetBinContent(8,73.60646);
   hNCpi0inFVres_stack_7->SetBinContent(9,76.1726);
   hNCpi0inFVres_stack_7->SetBinContent(10,79.54218);
   hNCpi0inFVres_stack_7->SetBinContent(11,82.5361);
   hNCpi0inFVres_stack_7->SetBinContent(12,77.17186);
   hNCpi0inFVres_stack_7->SetBinContent(13,72.48851);
   hNCpi0inFVres_stack_7->SetBinContent(14,78.30852);
   hNCpi0inFVres_stack_7->SetBinContent(15,82.05006);
   hNCpi0inFVres_stack_7->SetBinContent(16,86.09628);
   hNCpi0inFVres_stack_7->SetBinContent(17,75.35031);
   hNCpi0inFVres_stack_7->SetBinContent(18,69.46178);
   hNCpi0inFVres_stack_7->SetBinContent(19,68.36688);
   hNCpi0inFVres_stack_7->SetBinContent(20,70.41006);
   hNCpi0inFVres_stack_7->SetBinContent(21,75.01331);
   hNCpi0inFVres_stack_7->SetBinContent(22,90.58516);
   hNCpi0inFVres_stack_7->SetBinContent(23,84.72177);
   hNCpi0inFVres_stack_7->SetBinContent(24,82.1339);
   hNCpi0inFVres_stack_7->SetBinContent(25,75.57747);
   hNCpi0inFVres_stack_7->SetBinError(1,2.921472);
   hNCpi0inFVres_stack_7->SetBinError(2,2.962248);
   hNCpi0inFVres_stack_7->SetBinError(3,2.91387);
   hNCpi0inFVres_stack_7->SetBinError(4,3.259987);
   hNCpi0inFVres_stack_7->SetBinError(5,2.823068);
   hNCpi0inFVres_stack_7->SetBinError(6,2.45443);
   hNCpi0inFVres_stack_7->SetBinError(7,2.823335);
   hNCpi0inFVres_stack_7->SetBinError(8,2.836097);
   hNCpi0inFVres_stack_7->SetBinError(9,2.850383);
   hNCpi0inFVres_stack_7->SetBinError(10,2.91818);
   hNCpi0inFVres_stack_7->SetBinError(11,3.030391);
   hNCpi0inFVres_stack_7->SetBinError(12,2.807616);
   hNCpi0inFVres_stack_7->SetBinError(13,2.67649);
   hNCpi0inFVres_stack_7->SetBinError(14,2.911795);
   hNCpi0inFVres_stack_7->SetBinError(15,2.92815);
   hNCpi0inFVres_stack_7->SetBinError(16,3.15906);
   hNCpi0inFVres_stack_7->SetBinError(17,2.876355);
   hNCpi0inFVres_stack_7->SetBinError(18,2.558614);
   hNCpi0inFVres_stack_7->SetBinError(19,2.846718);
   hNCpi0inFVres_stack_7->SetBinError(20,2.73667);
   hNCpi0inFVres_stack_7->SetBinError(21,2.822146);
   hNCpi0inFVres_stack_7->SetBinError(22,3.22172);
   hNCpi0inFVres_stack_7->SetBinError(23,3.060892);
   hNCpi0inFVres_stack_7->SetBinError(24,2.908872);
   hNCpi0inFVres_stack_7->SetBinError(25,2.840747);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,18.30861);
   hNCpi0inFVdis_stack_8->SetBinContent(2,16.20653);
   hNCpi0inFVdis_stack_8->SetBinContent(3,18.33066);
   hNCpi0inFVdis_stack_8->SetBinContent(4,18.6044);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.98626);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.87776);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.43683);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.95173);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.891);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.60329);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.7278);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.99008);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.39851);
   hNCpi0inFVdis_stack_8->SetBinContent(14,20.22732);
   hNCpi0inFVdis_stack_8->SetBinContent(15,17.14804);
   hNCpi0inFVdis_stack_8->SetBinContent(16,15.2843);
   hNCpi0inFVdis_stack_8->SetBinContent(17,15.81083);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.48594);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.62915);
   hNCpi0inFVdis_stack_8->SetBinContent(20,14.7466);
   hNCpi0inFVdis_stack_8->SetBinContent(21,15.27696);
   hNCpi0inFVdis_stack_8->SetBinContent(22,13.97734);
   hNCpi0inFVdis_stack_8->SetBinContent(23,16.79892);
   hNCpi0inFVdis_stack_8->SetBinContent(24,20.9728);
   hNCpi0inFVdis_stack_8->SetBinContent(25,17.70807);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.532877);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.278505);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.454437);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.400215);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.385727);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.372184);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.291753);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.356704);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.429708);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.224117);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.562451);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.465876);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.203032);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.547843);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.42725);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.347671);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.27356);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.299777);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.226064);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.37604);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.271031);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.078915);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.270295);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.595012);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.618128);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08723638);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05880569);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.07349989);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1474381);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.07005689);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1478583);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03914801);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04444386);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03675345);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.09317692);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.03510782);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1304081);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1099207);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,36.25733);
   hCCpi0inFV_stack_10->SetBinContent(2,36.27799);
   hCCpi0inFV_stack_10->SetBinContent(3,37.149);
   hCCpi0inFV_stack_10->SetBinContent(4,37.70021);
   hCCpi0inFV_stack_10->SetBinContent(5,33.51821);
   hCCpi0inFV_stack_10->SetBinContent(6,21.57858);
   hCCpi0inFV_stack_10->SetBinContent(7,24.31474);
   hCCpi0inFV_stack_10->SetBinContent(8,25.30712);
   hCCpi0inFV_stack_10->SetBinContent(9,29.78214);
   hCCpi0inFV_stack_10->SetBinContent(10,28.76395);
   hCCpi0inFV_stack_10->SetBinContent(11,28.27417);
   hCCpi0inFV_stack_10->SetBinContent(12,36.43204);
   hCCpi0inFV_stack_10->SetBinContent(13,32.27851);
   hCCpi0inFV_stack_10->SetBinContent(14,30.74499);
   hCCpi0inFV_stack_10->SetBinContent(15,30.8453);
   hCCpi0inFV_stack_10->SetBinContent(16,36.35215);
   hCCpi0inFV_stack_10->SetBinContent(17,29.33232);
   hCCpi0inFV_stack_10->SetBinContent(18,23.22667);
   hCCpi0inFV_stack_10->SetBinContent(19,23.79185);
   hCCpi0inFV_stack_10->SetBinContent(20,25.91595);
   hCCpi0inFV_stack_10->SetBinContent(21,30.36639);
   hCCpi0inFV_stack_10->SetBinContent(22,33.55894);
   hCCpi0inFV_stack_10->SetBinContent(23,32.54457);
   hCCpi0inFV_stack_10->SetBinContent(24,38.1548);
   hCCpi0inFV_stack_10->SetBinContent(25,33.45334);
   hCCpi0inFV_stack_10->SetBinError(1,2.956945);
   hCCpi0inFV_stack_10->SetBinError(2,3.06447);
   hCCpi0inFV_stack_10->SetBinError(3,3.018921);
   hCCpi0inFV_stack_10->SetBinError(4,3.049115);
   hCCpi0inFV_stack_10->SetBinError(5,2.931204);
   hCCpi0inFV_stack_10->SetBinError(6,2.30791);
   hCCpi0inFV_stack_10->SetBinError(7,2.497321);
   hCCpi0inFV_stack_10->SetBinError(8,2.521523);
   hCCpi0inFV_stack_10->SetBinError(9,2.750238);
   hCCpi0inFV_stack_10->SetBinError(10,2.723099);
   hCCpi0inFV_stack_10->SetBinError(11,2.675742);
   hCCpi0inFV_stack_10->SetBinError(12,3.068293);
   hCCpi0inFV_stack_10->SetBinError(13,2.82368);
   hCCpi0inFV_stack_10->SetBinError(14,2.711088);
   hCCpi0inFV_stack_10->SetBinError(15,2.755389);
   hCCpi0inFV_stack_10->SetBinError(16,3.024707);
   hCCpi0inFV_stack_10->SetBinError(17,2.680742);
   hCCpi0inFV_stack_10->SetBinError(18,2.333836);
   hCCpi0inFV_stack_10->SetBinError(19,2.463153);
   hCCpi0inFV_stack_10->SetBinError(20,2.572812);
   hCCpi0inFV_stack_10->SetBinError(21,2.786515);
   hCCpi0inFV_stack_10->SetBinError(22,2.921467);
   hCCpi0inFV_stack_10->SetBinError(23,2.882311);
   hCCpi0inFV_stack_10->SetBinError(24,3.156071);
   hCCpi0inFV_stack_10->SetBinError(25,2.851766);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,17.30404);
   hNCinFV_stack_11->SetBinContent(2,19.82629);
   hNCinFV_stack_11->SetBinContent(3,26.23038);
   hNCinFV_stack_11->SetBinContent(4,15.91027);
   hNCinFV_stack_11->SetBinContent(5,16.78433);
   hNCinFV_stack_11->SetBinContent(6,15.60375);
   hNCinFV_stack_11->SetBinContent(7,14.77761);
   hNCinFV_stack_11->SetBinContent(8,14.57413);
   hNCinFV_stack_11->SetBinContent(9,19.74179);
   hNCinFV_stack_11->SetBinContent(10,14.97711);
   hNCinFV_stack_11->SetBinContent(11,16.48227);
   hNCinFV_stack_11->SetBinContent(12,18.4181);
   hNCinFV_stack_11->SetBinContent(13,19.95805);
   hNCinFV_stack_11->SetBinContent(14,18.54686);
   hNCinFV_stack_11->SetBinContent(15,21.90796);
   hNCinFV_stack_11->SetBinContent(16,18.50736);
   hNCinFV_stack_11->SetBinContent(17,18.29502);
   hNCinFV_stack_11->SetBinContent(18,16.58544);
   hNCinFV_stack_11->SetBinContent(19,14.56499);
   hNCinFV_stack_11->SetBinContent(20,14.9553);
   hNCinFV_stack_11->SetBinContent(21,16.09786);
   hNCinFV_stack_11->SetBinContent(22,19.08806);
   hNCinFV_stack_11->SetBinContent(23,21.30843);
   hNCinFV_stack_11->SetBinContent(24,22.27947);
   hNCinFV_stack_11->SetBinContent(25,12.30443);
   hNCinFV_stack_11->SetBinError(1,2.102696);
   hNCinFV_stack_11->SetBinError(2,2.404737);
   hNCinFV_stack_11->SetBinError(3,2.871624);
   hNCinFV_stack_11->SetBinError(4,1.973788);
   hNCinFV_stack_11->SetBinError(5,2.272922);
   hNCinFV_stack_11->SetBinError(6,2.19956);
   hNCinFV_stack_11->SetBinError(7,1.893421);
   hNCinFV_stack_11->SetBinError(8,2.082183);
   hNCinFV_stack_11->SetBinError(9,2.354153);
   hNCinFV_stack_11->SetBinError(10,2.161952);
   hNCinFV_stack_11->SetBinError(11,2.135023);
   hNCinFV_stack_11->SetBinError(12,2.290936);
   hNCinFV_stack_11->SetBinError(13,2.568302);
   hNCinFV_stack_11->SetBinError(14,2.301107);
   hNCinFV_stack_11->SetBinError(15,2.598028);
   hNCinFV_stack_11->SetBinError(16,2.269016);
   hNCinFV_stack_11->SetBinError(17,2.455943);
   hNCinFV_stack_11->SetBinError(18,2.235957);
   hNCinFV_stack_11->SetBinError(19,2.103723);
   hNCinFV_stack_11->SetBinError(20,2.008212);
   hNCinFV_stack_11->SetBinError(21,2.247306);
   hNCinFV_stack_11->SetBinError(22,2.487185);
   hNCinFV_stack_11->SetBinError(23,2.641931);
   hNCinFV_stack_11->SetBinError(24,2.630074);
   hNCinFV_stack_11->SetBinError(25,1.729477);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,34.31113);
   hnumuCCinFV_stack_12->SetBinContent(2,31.40649);
   hnumuCCinFV_stack_12->SetBinContent(3,18.8185);
   hnumuCCinFV_stack_12->SetBinContent(4,10.33506);
   hnumuCCinFV_stack_12->SetBinContent(5,8.612467);
   hnumuCCinFV_stack_12->SetBinContent(6,11.19127);
   hnumuCCinFV_stack_12->SetBinContent(7,13.02531);
   hnumuCCinFV_stack_12->SetBinContent(8,9.809609);
   hnumuCCinFV_stack_12->SetBinContent(9,12.46412);
   hnumuCCinFV_stack_12->SetBinContent(10,11.93677);
   hnumuCCinFV_stack_12->SetBinContent(11,22.79804);
   hnumuCCinFV_stack_12->SetBinContent(12,28.00914);
   hnumuCCinFV_stack_12->SetBinContent(13,26.66535);
   hnumuCCinFV_stack_12->SetBinContent(14,24.71834);
   hnumuCCinFV_stack_12->SetBinContent(15,20.9965);
   hnumuCCinFV_stack_12->SetBinContent(16,16.28251);
   hnumuCCinFV_stack_12->SetBinContent(17,13.98398);
   hnumuCCinFV_stack_12->SetBinContent(18,9.797279);
   hnumuCCinFV_stack_12->SetBinContent(19,10.89476);
   hnumuCCinFV_stack_12->SetBinContent(20,7.378729);
   hnumuCCinFV_stack_12->SetBinContent(21,9.529493);
   hnumuCCinFV_stack_12->SetBinContent(22,14.42612);
   hnumuCCinFV_stack_12->SetBinContent(23,18.9134);
   hnumuCCinFV_stack_12->SetBinContent(24,19.58569);
   hnumuCCinFV_stack_12->SetBinContent(25,33.51373);
   hnumuCCinFV_stack_12->SetBinError(1,3.237305);
   hnumuCCinFV_stack_12->SetBinError(2,4.017458);
   hnumuCCinFV_stack_12->SetBinError(3,2.382266);
   hnumuCCinFV_stack_12->SetBinError(4,1.780977);
   hnumuCCinFV_stack_12->SetBinError(5,1.519879);
   hnumuCCinFV_stack_12->SetBinError(6,1.797595);
   hnumuCCinFV_stack_12->SetBinError(7,1.889869);
   hnumuCCinFV_stack_12->SetBinError(8,1.785288);
   hnumuCCinFV_stack_12->SetBinError(9,2.173756);
   hnumuCCinFV_stack_12->SetBinError(10,1.790874);
   hnumuCCinFV_stack_12->SetBinError(11,2.888575);
   hnumuCCinFV_stack_12->SetBinError(12,3.292336);
   hnumuCCinFV_stack_12->SetBinError(13,2.870788);
   hnumuCCinFV_stack_12->SetBinError(14,2.762937);
   hnumuCCinFV_stack_12->SetBinError(15,2.736497);
   hnumuCCinFV_stack_12->SetBinError(16,2.035312);
   hnumuCCinFV_stack_12->SetBinError(17,2.279667);
   hnumuCCinFV_stack_12->SetBinError(18,1.660854);
   hnumuCCinFV_stack_12->SetBinError(19,2.076231);
   hnumuCCinFV_stack_12->SetBinError(20,1.317652);
   hnumuCCinFV_stack_12->SetBinError(21,1.669774);
   hnumuCCinFV_stack_12->SetBinError(22,2.22954);
   hnumuCCinFV_stack_12->SetBinError(23,2.697125);
   hnumuCCinFV_stack_12->SetBinError(24,2.453149);
   hnumuCCinFV_stack_12->SetBinError(25,3.513838);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.742208);
   hnueCCinFV_stack_13->SetBinContent(2,2.903181);
   hnueCCinFV_stack_13->SetBinContent(3,2.162254);
   hnueCCinFV_stack_13->SetBinContent(4,0.9247161);
   hnueCCinFV_stack_13->SetBinContent(5,1.900914);
   hnueCCinFV_stack_13->SetBinContent(6,0.8048366);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.9895673);
   hnueCCinFV_stack_13->SetBinContent(9,0.9631951);
   hnueCCinFV_stack_13->SetBinContent(10,2.935786);
   hnueCCinFV_stack_13->SetBinContent(11,1.070037);
   hnueCCinFV_stack_13->SetBinContent(12,2.156889);
   hnueCCinFV_stack_13->SetBinContent(13,1.960024);
   hnueCCinFV_stack_13->SetBinContent(14,1.616246);
   hnueCCinFV_stack_13->SetBinContent(15,1.369574);
   hnueCCinFV_stack_13->SetBinContent(16,0.620398);
   hnueCCinFV_stack_13->SetBinContent(17,1.64015);
   hnueCCinFV_stack_13->SetBinContent(18,2.51128);
   hnueCCinFV_stack_13->SetBinContent(19,2.496355);
   hnueCCinFV_stack_13->SetBinContent(20,1.38455);
   hnueCCinFV_stack_13->SetBinContent(21,2.561399);
   hnueCCinFV_stack_13->SetBinContent(22,0.8101376);
   hnueCCinFV_stack_13->SetBinContent(23,1.090205);
   hnueCCinFV_stack_13->SetBinContent(24,1.880685);
   hnueCCinFV_stack_13->SetBinContent(25,1.659256);
   hnueCCinFV_stack_13->SetBinError(1,0.6924799);
   hnueCCinFV_stack_13->SetBinError(2,1.654963);
   hnueCCinFV_stack_13->SetBinError(3,0.7449166);
   hnueCCinFV_stack_13->SetBinError(4,0.4675212);
   hnueCCinFV_stack_13->SetBinError(5,0.7999884);
   hnueCCinFV_stack_13->SetBinError(6,0.4798916);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.5149912);
   hnueCCinFV_stack_13->SetBinError(9,0.4953075);
   hnueCCinFV_stack_13->SetBinError(10,1.189075);
   hnueCCinFV_stack_13->SetBinError(11,0.5668519);
   hnueCCinFV_stack_13->SetBinError(12,0.6870996);
   hnueCCinFV_stack_13->SetBinError(13,0.6774999);
   hnueCCinFV_stack_13->SetBinError(14,0.8445728);
   hnueCCinFV_stack_13->SetBinError(15,0.7066504);
   hnueCCinFV_stack_13->SetBinError(16,0.3593463);
   hnueCCinFV_stack_13->SetBinError(17,0.6813581);
   hnueCCinFV_stack_13->SetBinError(18,1.23437);
   hnueCCinFV_stack_13->SetBinError(19,0.9996256);
   hnueCCinFV_stack_13->SetBinError(20,0.6315958);
   hnueCCinFV_stack_13->SetBinError(21,1.420064);
   hnueCCinFV_stack_13->SetBinError(22,0.4436954);
   hnueCCinFV_stack_13->SetBinError(23,0.5664118);
   hnueCCinFV_stack_13->SetBinError(24,0.7380203);
   hnueCCinFV_stack_13->SetBinError(25,0.6493905);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__5->SetBinContent(1,226.4818);
   hmcerror__5->SetBinContent(2,231.418);
   hmcerror__5->SetBinContent(3,236.0343);
   hmcerror__5->SetBinContent(4,228.4659);
   hmcerror__5->SetBinContent(5,191.9841);
   hmcerror__5->SetBinContent(6,183.5677);
   hmcerror__5->SetBinContent(7,194.7563);
   hmcerror__5->SetBinContent(8,186.3843);
   hmcerror__5->SetBinContent(9,196.352);
   hmcerror__5->SetBinContent(10,202.2557);
   hmcerror__5->SetBinContent(11,212.4466);
   hmcerror__5->SetBinContent(12,213.9344);
   hmcerror__5->SetBinContent(13,202.5231);
   hmcerror__5->SetBinContent(14,204.6086);
   hmcerror__5->SetBinContent(15,213.7037);
   hmcerror__5->SetBinContent(16,218.9562);
   hmcerror__5->SetBinContent(17,200.2451);
   hmcerror__5->SetBinContent(18,187.4538);
   hmcerror__5->SetBinContent(19,192.3538);
   hmcerror__5->SetBinContent(20,182.3917);
   hmcerror__5->SetBinContent(21,202.8019);
   hmcerror__5->SetBinContent(22,219.1731);
   hmcerror__5->SetBinContent(23,219.5072);
   hmcerror__5->SetBinContent(24,223.6792);
   hmcerror__5->SetBinContent(25,213.4734);
   hmcerror__5->SetBinError(1,72.70405);
   hmcerror__5->SetBinError(2,71.868);
   hmcerror__5->SetBinError(3,68.66082);
   hmcerror__5->SetBinError(4,62.46211);
   hmcerror__5->SetBinError(5,53.46342);
   hmcerror__5->SetBinError(6,47.65963);
   hmcerror__5->SetBinError(7,56.2262);
   hmcerror__5->SetBinError(8,54.09971);
   hmcerror__5->SetBinError(9,58.05251);
   hmcerror__5->SetBinError(10,55.8465);
   hmcerror__5->SetBinError(11,60.88275);
   hmcerror__5->SetBinError(12,62.8251);
   hmcerror__5->SetBinError(13,56.32806);
   hmcerror__5->SetBinError(14,60.97397);
   hmcerror__5->SetBinError(15,60.45245);
   hmcerror__5->SetBinError(16,60.42725);
   hmcerror__5->SetBinError(17,57.17028);
   hmcerror__5->SetBinError(18,52.01524);
   hmcerror__5->SetBinError(19,51.24925);
   hmcerror__5->SetBinError(20,51.28965);
   hmcerror__5->SetBinError(21,53.75309);
   hmcerror__5->SetBinError(22,61.51561);
   hmcerror__5->SetBinError(23,62.91476);
   hmcerror__5->SetBinError(24,65.02588);
   hmcerror__5->SetBinError(25,59.5011);
   hmcerror__5->SetBinError(26,0.3895343);
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
   
   Double_t _fx3005[25] = {
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
   Double_t _fy3005[25] = {
   245,
   214,
   231,
   219,
   218,
   197,
   182,
   177,
   186,
   179,
   185,
   177,
   215,
   205,
   231,
   212,
   191,
   177,
   185,
   168,
   191,
   196,
   205,
   197,
   191};
   Double_t _felx3005[25] = {
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
   Double_t _fely3005[25] = {
   15.65248,
   14.62874,
   15.19868,
   14.79865,
   14.76482,
   14.03567,
   13.49074,
   13.30413,
   13.63818,
   13.37909,
   13.60147,
   13.30413,
   14.66288,
   14.31782,
   15.19868,
   14.56022,
   13.82027,
   13.30413,
   13.60147,
   12.96148,
   13.82027,
   14,
   14.31782,
   14.03567,
   13.82027};
   Double_t _fehx3005[25] = {
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
   Double_t _fehy3005[25] = {
   15.65248,
   14.62874,
   15.19868,
   14.79865,
   14.76482,
   14.03567,
   13.49074,
   13.30413,
   13.63818,
   13.37909,
   13.60147,
   13.30413,
   14.66288,
   14.31782,
   15.19868,
   14.56022,
   13.82027,
   13.30413,
   13.60147,
   12.96148,
   13.82027,
   14,
   14.31782,
   14.03567,
   13.82027};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(144.4771);
   Graph_Graph3005->SetMaximum(271.2139);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.4/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  406.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 445.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fely3006[25] = {
   0.3210149,
   0.3105549,
   0.2908934,
   0.273398,
   0.2784784,
   0.2596298,
   0.2887003,
   0.2902589,
   0.2956553,
   0.2761184,
   0.2865791,
   0.2936653,
   0.2781316,
   0.298003,
   0.2828798,
   0.2759788,
   0.2855015,
   0.2774829,
   0.2664322,
   0.281206,
   0.2650522,
   0.2806714,
   0.2866181,
   0.2907105,
   0.2787285};
   Double_t _fehx3006[25] = {
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
   Double_t _fehy3006[25] = {
   0.3210149,
   0.3105549,
   0.2908934,
   0.273398,
   0.2784784,
   0.2596298,
   0.2887003,
   0.2902589,
   0.2956553,
   0.2761184,
   0.2865791,
   0.2936653,
   0.2781316,
   0.298003,
   0.2828798,
   0.2759788,
   0.2855015,
   0.2774829,
   0.2664322,
   0.281206,
   0.2650522,
   0.2806714,
   0.2866181,
   0.2907105,
   0.2787285};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-3.78,3.78);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3007[25] = {
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
   Double_t _fely3007[25] = {
   0.2714902,
   0.2677917,
   0.2569901,
   0.2556735,
   0.2611866,
   0.2371781,
   0.2599591,
   0.266334,
   0.270806,
   0.2595099,
   0.2627997,
   0.27112,
   0.2532638,
   0.2701561,
   0.2570612,
   0.2564654,
   0.264458,
   0.2616843,
   0.2354881,
   0.2417906,
   0.2443786,
   0.254591,
   0.2643926,
   0.2634968,
   0.2611072};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   0.2714902,
   0.2677917,
   0.2569901,
   0.2556735,
   0.2611866,
   0.2371781,
   0.2599591,
   0.266334,
   0.270806,
   0.2595099,
   0.2627997,
   0.27112,
   0.2532638,
   0.2701561,
   0.2570612,
   0.2564654,
   0.264458,
   0.2616843,
   0.2354881,
   0.2417906,
   0.2443786,
   0.254591,
   0.2643926,
   0.2634968,
   0.2611072};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-3.78,3.78);
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
   Double_t _fy3008[25] = {
   1.081764,
   0.9247336,
   0.9786712,
   0.9585675,
   1.135511,
   1.073174,
   0.9345014,
   0.9496507,
   0.9472784,
   0.8850185,
   0.8708071,
   0.8273565,
   1.061608,
   1.001913,
   1.080936,
   0.9682303,
   0.9538309,
   0.9442325,
   0.9617695,
   0.9210944,
   0.9418057,
   0.8942705,
   0.9339099,
   0.8807257,
   0.8947252};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0.06911139,
   0.06321349,
   0.06439184,
   0.06477399,
   0.07690651,
   0.07646047,
   0.06926985,
   0.07138012,
   0.06945782,
   0.06614939,
   0.06402301,
   0.06218792,
   0.07240103,
   0.06997665,
   0.07112036,
   0.06649833,
   0.06901678,
   0.07097286,
   0.0707107,
   0.07106398,
   0.06814667,
   0.06387646,
   0.0652271,
   0.06274911,
   0.06474005};
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0.06911139,
   0.06321349,
   0.06439184,
   0.06477399,
   0.07690651,
   0.07646047,
   0.06926985,
   0.07138012,
   0.06945782,
   0.06614939,
   0.06402301,
   0.06218792,
   0.07240103,
   0.06997665,
   0.07112036,
   0.06649833,
   0.06901678,
   0.07097286,
   0.0707107,
   0.07106398,
   0.06814667,
   0.06387646,
   0.0652271,
   0.06274911,
   0.06474005};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.7204437);
   Graph_Graph3008->SetMaximum(1.257142);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

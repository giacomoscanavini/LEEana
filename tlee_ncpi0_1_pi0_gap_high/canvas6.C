#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 21:27:23 2022) by ROOT version 6.26/00
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
   pad1->Range(-7.692308,-25.36,56.41026,2804.282);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__16->SetBinContent(1,1206.131);
   hmc__16->SetBinContent(2,115.5979);
   hmc__16->SetBinContent(3,126.7959);
   hmc__16->SetBinContent(4,113.3046);
   hmc__16->SetBinContent(5,116.1705);
   hmc__16->SetBinContent(6,97.67603);
   hmc__16->SetBinContent(7,93.25942);
   hmc__16->SetBinContent(8,87.83825);
   hmc__16->SetBinContent(9,83.47818);
   hmc__16->SetBinContent(10,81.07557);
   hmc__16->SetBinContent(11,66.78516);
   hmc__16->SetBinContent(12,61.32013);
   hmc__16->SetBinContent(13,53.53884);
   hmc__16->SetBinContent(14,48.80651);
   hmc__16->SetBinContent(15,34.72197);
   hmc__16->SetBinContent(16,39.00657);
   hmc__16->SetBinContent(17,35.99996);
   hmc__16->SetBinContent(18,32.18109);
   hmc__16->SetBinContent(19,28.30888);
   hmc__16->SetBinContent(20,22.11496);
   hmc__16->SetBinContent(21,251.7873);
   hmc__16->SetBinError(1,275.6143);
   hmc__16->SetBinError(2,37.61776);
   hmc__16->SetBinError(3,39.08226);
   hmc__16->SetBinError(4,32.67401);
   hmc__16->SetBinError(5,37.52764);
   hmc__16->SetBinError(6,27.28576);
   hmc__16->SetBinError(7,25.91484);
   hmc__16->SetBinError(8,31.21848);
   hmc__16->SetBinError(9,25.59774);
   hmc__16->SetBinError(10,24.44421);
   hmc__16->SetBinError(11,20.74562);
   hmc__16->SetBinError(12,19.12549);
   hmc__16->SetBinError(13,16.52222);
   hmc__16->SetBinError(14,20.34335);
   hmc__16->SetBinError(15,12.29807);
   hmc__16->SetBinError(16,13.32773);
   hmc__16->SetBinError(17,13.25161);
   hmc__16->SetBinError(18,12.79617);
   hmc__16->SetBinError(19,12.45478);
   hmc__16->SetBinError(20,10.2328);
   hmc__16->SetBinError(21,65.27069);
   hmc__16->SetMinimum(-25.36);
   hmc__16->SetMaximum(2662.8);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,0,50);
   hs6_stack_6->SetMinimum(-1.545884e-08);
   hs6_stack_6->SetMaximum(1266.437);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,26.12565);
   hbadmatch_stack_1->SetBinContent(2,1.356316);
   hbadmatch_stack_1->SetBinContent(3,1.98659);
   hbadmatch_stack_1->SetBinContent(4,2.826853);
   hbadmatch_stack_1->SetBinContent(5,1.051265);
   hbadmatch_stack_1->SetBinContent(6,1.749784);
   hbadmatch_stack_1->SetBinContent(7,1.102504);
   hbadmatch_stack_1->SetBinContent(8,1.246909);
   hbadmatch_stack_1->SetBinContent(9,1.619809);
   hbadmatch_stack_1->SetBinContent(10,1.126741);
   hbadmatch_stack_1->SetBinContent(11,1.018472);
   hbadmatch_stack_1->SetBinContent(12,1.1341);
   hbadmatch_stack_1->SetBinContent(13,1.217248);
   hbadmatch_stack_1->SetBinContent(14,1.072095);
   hbadmatch_stack_1->SetBinContent(15,0.9264839);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3401776);
   hbadmatch_stack_1->SetBinContent(18,1.573665);
   hbadmatch_stack_1->SetBinContent(19,1.123326);
   hbadmatch_stack_1->SetBinContent(20,0.9540958);
   hbadmatch_stack_1->SetBinContent(21,14.85189);
   hbadmatch_stack_1->SetBinError(1,2.810397);
   hbadmatch_stack_1->SetBinError(2,0.5680834);
   hbadmatch_stack_1->SetBinError(3,0.7790898);
   hbadmatch_stack_1->SetBinError(4,1.751648);
   hbadmatch_stack_1->SetBinError(5,0.4961733);
   hbadmatch_stack_1->SetBinError(6,0.7043593);
   hbadmatch_stack_1->SetBinError(7,0.5169752);
   hbadmatch_stack_1->SetBinError(8,0.5259923);
   hbadmatch_stack_1->SetBinError(9,0.6011746);
   hbadmatch_stack_1->SetBinError(10,0.5117998);
   hbadmatch_stack_1->SetBinError(11,0.4569677);
   hbadmatch_stack_1->SetBinError(12,0.5945658);
   hbadmatch_stack_1->SetBinError(13,0.6211758);
   hbadmatch_stack_1->SetBinError(14,0.5551335);
   hbadmatch_stack_1->SetBinError(15,0.5220922);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3401776);
   hbadmatch_stack_1->SetBinError(18,0.6637663);
   hbadmatch_stack_1->SetBinError(19,0.5752857);
   hbadmatch_stack_1->SetBinError(20,0.487825);
   hbadmatch_stack_1->SetBinError(21,2.541501);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,135.1472);
   hext_stack_2->SetBinContent(2,8.414427);
   hext_stack_2->SetBinContent(3,10.52521);
   hext_stack_2->SetBinContent(4,6.903363);
   hext_stack_2->SetBinContent(5,12.6663);
   hext_stack_2->SetBinContent(6,7.063358);
   hext_stack_2->SetBinContent(7,8.835386);
   hext_stack_2->SetBinContent(8,4.628173);
   hext_stack_2->SetBinContent(9,3.901586);
   hext_stack_2->SetBinContent(10,6.158006);
   hext_stack_2->SetBinContent(11,7.746861);
   hext_stack_2->SetBinContent(12,7.276832);
   hext_stack_2->SetBinContent(13,8.705693);
   hext_stack_2->SetBinContent(14,2.510206);
   hext_stack_2->SetBinContent(15,0.6487947);
   hext_stack_2->SetBinContent(16,2.834603);
   hext_stack_2->SetBinContent(17,6.214257);
   hext_stack_2->SetBinContent(18,4.752265);
   hext_stack_2->SetBinContent(19,3.643392);
   hext_stack_2->SetBinContent(20,1.379791);
   hext_stack_2->SetBinContent(21,28.36915);
   hext_stack_2->SetBinError(1,7.908021);
   hext_stack_2->SetBinError(2,1.95221);
   hext_stack_2->SetBinError(3,2.136049);
   hext_stack_2->SetBinError(4,1.593813);
   hext_stack_2->SetBinError(5,2.512238);
   hext_stack_2->SetBinError(6,1.589118);
   hext_stack_2->SetBinError(7,1.890514);
   hext_stack_2->SetBinError(8,1.291697);
   hext_stack_2->SetBinError(9,1.238163);
   hext_stack_2->SetBinError(10,1.634652);
   hext_stack_2->SetBinError(11,1.966707);
   hext_stack_2->SetBinError(12,1.837184);
   hext_stack_2->SetBinError(13,2.141505);
   hext_stack_2->SetBinError(14,1.057404);
   hext_stack_2->SetBinError(15,0.4587671);
   hext_stack_2->SetBinError(16,1.106046);
   hext_stack_2->SetBinError(17,1.789038);
   hext_stack_2->SetBinError(18,1.630811);
   hext_stack_2->SetBinError(19,1.191159);
   hext_stack_2->SetBinError(20,0.6935586);
   hext_stack_2->SetBinError(21,3.664919);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,18.19392);
   hdirt_stack_3->SetBinContent(2,1.328265);
   hdirt_stack_3->SetBinContent(3,1.169553);
   hdirt_stack_3->SetBinContent(4,0.7028499);
   hdirt_stack_3->SetBinContent(5,1.133124);
   hdirt_stack_3->SetBinContent(6,1.463327);
   hdirt_stack_3->SetBinContent(7,0.9712972);
   hdirt_stack_3->SetBinContent(8,1.982375);
   hdirt_stack_3->SetBinContent(9,0.3784656);
   hdirt_stack_3->SetBinContent(10,0.8761094);
   hdirt_stack_3->SetBinContent(11,0.994874);
   hdirt_stack_3->SetBinContent(12,1.106009);
   hdirt_stack_3->SetBinContent(13,0.4182143);
   hdirt_stack_3->SetBinContent(14,0.4297404);
   hdirt_stack_3->SetBinContent(15,0.627653);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.7651638);
   hdirt_stack_3->SetBinContent(18,0.150608);
   hdirt_stack_3->SetBinContent(20,0.6390802);
   hdirt_stack_3->SetBinContent(21,4.139054);
   hdirt_stack_3->SetBinError(1,2.439626);
   hdirt_stack_3->SetBinError(2,0.5352159);
   hdirt_stack_3->SetBinError(3,0.4510443);
   hdirt_stack_3->SetBinError(4,0.3655828);
   hdirt_stack_3->SetBinError(5,0.5264791);
   hdirt_stack_3->SetBinError(6,0.6865355);
   hdirt_stack_3->SetBinError(7,0.4684838);
   hdirt_stack_3->SetBinError(8,0.6926486);
   hdirt_stack_3->SetBinError(9,0.2708835);
   hdirt_stack_3->SetBinError(10,0.5244572);
   hdirt_stack_3->SetBinError(11,0.5080516);
   hdirt_stack_3->SetBinError(12,0.5747343);
   hdirt_stack_3->SetBinError(13,0.4182143);
   hdirt_stack_3->SetBinError(14,0.3226987);
   hdirt_stack_3->SetBinError(15,0.4522127);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.4756415);
   hdirt_stack_3->SetBinError(18,0.150608);
   hdirt_stack_3->SetBinError(20,0.4617611);
   hdirt_stack_3->SetBinError(21,1.130422);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,120.2532);
   houtFV_stack_4->SetBinContent(2,5.979348);
   houtFV_stack_4->SetBinContent(3,7.963347);
   houtFV_stack_4->SetBinContent(4,7.928741);
   houtFV_stack_4->SetBinContent(5,7.547815);
   houtFV_stack_4->SetBinContent(6,7.254113);
   houtFV_stack_4->SetBinContent(7,6.979968);
   houtFV_stack_4->SetBinContent(8,10.01398);
   houtFV_stack_4->SetBinContent(9,10.64392);
   houtFV_stack_4->SetBinContent(10,11.21247);
   houtFV_stack_4->SetBinContent(11,6.952648);
   houtFV_stack_4->SetBinContent(12,7.547097);
   houtFV_stack_4->SetBinContent(13,5.320261);
   houtFV_stack_4->SetBinContent(14,4.703407);
   houtFV_stack_4->SetBinContent(15,4.418051);
   houtFV_stack_4->SetBinContent(16,5.627803);
   houtFV_stack_4->SetBinContent(17,4.092209);
   houtFV_stack_4->SetBinContent(18,3.916521);
   houtFV_stack_4->SetBinContent(19,2.766845);
   houtFV_stack_4->SetBinContent(20,3.66587);
   houtFV_stack_4->SetBinContent(21,39.51463);
   houtFV_stack_4->SetBinError(1,5.475948);
   houtFV_stack_4->SetBinError(2,1.241193);
   houtFV_stack_4->SetBinError(3,1.373137);
   houtFV_stack_4->SetBinError(4,1.383522);
   houtFV_stack_4->SetBinError(5,1.347048);
   houtFV_stack_4->SetBinError(6,1.247747);
   houtFV_stack_4->SetBinError(7,1.340729);
   houtFV_stack_4->SetBinError(8,1.585252);
   houtFV_stack_4->SetBinError(9,1.722466);
   houtFV_stack_4->SetBinError(10,1.701169);
   houtFV_stack_4->SetBinError(11,1.300781);
   houtFV_stack_4->SetBinError(12,1.363774);
   houtFV_stack_4->SetBinError(13,1.075947);
   houtFV_stack_4->SetBinError(14,1.049466);
   houtFV_stack_4->SetBinError(15,1.022392);
   houtFV_stack_4->SetBinError(16,1.208926);
   houtFV_stack_4->SetBinError(17,0.9721116);
   houtFV_stack_4->SetBinError(18,1.013333);
   houtFV_stack_4->SetBinError(19,0.7895053);
   houtFV_stack_4->SetBinError(20,0.9570572);
   houtFV_stack_4->SetBinError(21,3.27091);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,43.88735);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.833238);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.030367);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.367174);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.171331);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.291096);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.380679);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.37394);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.222162);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.311501);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.493082);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.924722);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.510203);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.961533);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.7855796);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.283889);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7147409);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5593642);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7101027);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8109921);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,6.758468);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.520805);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7628339);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9053083);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8176614);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6651055);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6067089);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6499869);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5708662);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5179222);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7508782);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3648339);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2961135);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6813541);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7017545);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1702512);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4662686);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2024594);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2998222);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.212464);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3410044);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9670775);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.991916);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4214477);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06358271);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3254203);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1014476);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2522359);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3245251);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3992378);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.294322);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.04706571);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1399664);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08581661);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.07449514);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02563002);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1750463);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09678319);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1721138);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5692054);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1279372);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06358271);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2248437);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05242992);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1321352);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1830518);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1841801);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1351535);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03789905);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1066807);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05298776);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0471319);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01836556);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.118981);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07052174);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06940572);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,442.65);
   hNCpi0inFVres_stack_7->SetBinContent(2,50.33347);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.44099);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.73726);
   hNCpi0inFVres_stack_7->SetBinContent(5,44.05256);
   hNCpi0inFVres_stack_7->SetBinContent(6,41.19392);
   hNCpi0inFVres_stack_7->SetBinContent(7,37.18335);
   hNCpi0inFVres_stack_7->SetBinContent(8,35.64406);
   hNCpi0inFVres_stack_7->SetBinContent(9,29.7917);
   hNCpi0inFVres_stack_7->SetBinContent(10,28.93516);
   hNCpi0inFVres_stack_7->SetBinContent(11,25.73305);
   hNCpi0inFVres_stack_7->SetBinContent(12,22.21609);
   hNCpi0inFVres_stack_7->SetBinContent(13,19.03613);
   hNCpi0inFVres_stack_7->SetBinContent(14,18.1045);
   hNCpi0inFVres_stack_7->SetBinContent(15,13.92282);
   hNCpi0inFVres_stack_7->SetBinContent(16,14.62001);
   hNCpi0inFVres_stack_7->SetBinContent(17,12.462);
   hNCpi0inFVres_stack_7->SetBinContent(18,10.55661);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.33346);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.635915);
   hNCpi0inFVres_stack_7->SetBinContent(21,72.21931);
   hNCpi0inFVres_stack_7->SetBinError(1,7.237402);
   hNCpi0inFVres_stack_7->SetBinError(2,2.374385);
   hNCpi0inFVres_stack_7->SetBinError(3,2.51779);
   hNCpi0inFVres_stack_7->SetBinError(4,2.472316);
   hNCpi0inFVres_stack_7->SetBinError(5,2.303162);
   hNCpi0inFVres_stack_7->SetBinError(6,2.299619);
   hNCpi0inFVres_stack_7->SetBinError(7,2.092064);
   hNCpi0inFVres_stack_7->SetBinError(8,2.099798);
   hNCpi0inFVres_stack_7->SetBinError(9,1.812285);
   hNCpi0inFVres_stack_7->SetBinError(10,1.932639);
   hNCpi0inFVres_stack_7->SetBinError(11,1.900641);
   hNCpi0inFVres_stack_7->SetBinError(12,1.573029);
   hNCpi0inFVres_stack_7->SetBinError(13,1.455104);
   hNCpi0inFVres_stack_7->SetBinError(14,1.523811);
   hNCpi0inFVres_stack_7->SetBinError(15,1.217726);
   hNCpi0inFVres_stack_7->SetBinError(16,1.193883);
   hNCpi0inFVres_stack_7->SetBinError(17,1.193001);
   hNCpi0inFVres_stack_7->SetBinError(18,1.18951);
   hNCpi0inFVres_stack_7->SetBinError(19,1.0666);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7955876);
   hNCpi0inFVres_stack_7->SetBinError(21,2.960196);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,84.26698);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.70424);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.117796);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.610558);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.26234);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.017181);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.757339);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.700866);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.96282);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.849771);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.087402);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.970675);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.100545);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.270508);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.359502);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.503016);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.455189);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.991529);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.946188);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.416768);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.41085);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.015446);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.288483);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.103842);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.060073);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.214606);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.026445);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8926608);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.847472);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.966365);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.099492);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8415756);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6577819);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.593539);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7893159);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5081487);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5467774);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4827631);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4144256);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4915238);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3677074);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.441835);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.2584131);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1409926);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,155.2407);
   hCCpi0inFV_stack_10->SetBinContent(2,14.51964);
   hCCpi0inFV_stack_10->SetBinContent(3,19.57452);
   hCCpi0inFV_stack_10->SetBinContent(4,15.83495);
   hCCpi0inFV_stack_10->SetBinContent(5,17.73931);
   hCCpi0inFV_stack_10->SetBinContent(6,13.1942);
   hCCpi0inFV_stack_10->SetBinContent(7,15.49139);
   hCCpi0inFV_stack_10->SetBinContent(8,13.82894);
   hCCpi0inFV_stack_10->SetBinContent(9,16.57363);
   hCCpi0inFV_stack_10->SetBinContent(10,11.06308);
   hCCpi0inFV_stack_10->SetBinContent(11,10.54838);
   hCCpi0inFV_stack_10->SetBinContent(12,10.87088);
   hCCpi0inFV_stack_10->SetBinContent(13,6.843518);
   hCCpi0inFV_stack_10->SetBinContent(14,8.467587);
   hCCpi0inFV_stack_10->SetBinContent(15,6.872708);
   hCCpi0inFV_stack_10->SetBinContent(16,5.873331);
   hCCpi0inFV_stack_10->SetBinContent(17,4.248045);
   hCCpi0inFV_stack_10->SetBinContent(18,3.516127);
   hCCpi0inFV_stack_10->SetBinContent(19,4.985034);
   hCCpi0inFV_stack_10->SetBinContent(20,3.998543);
   hCCpi0inFV_stack_10->SetBinContent(21,32.85227);
   hCCpi0inFV_stack_10->SetBinError(1,6.241557);
   hCCpi0inFV_stack_10->SetBinError(2,1.892969);
   hCCpi0inFV_stack_10->SetBinError(3,2.241322);
   hCCpi0inFV_stack_10->SetBinError(4,1.972112);
   hCCpi0inFV_stack_10->SetBinError(5,2.123482);
   hCCpi0inFV_stack_10->SetBinError(6,1.809272);
   hCCpi0inFV_stack_10->SetBinError(7,1.94221);
   hCCpi0inFV_stack_10->SetBinError(8,1.846218);
   hCCpi0inFV_stack_10->SetBinError(9,2.020972);
   hCCpi0inFV_stack_10->SetBinError(10,1.675883);
   hCCpi0inFV_stack_10->SetBinError(11,1.629636);
   hCCpi0inFV_stack_10->SetBinError(12,1.58442);
   hCCpi0inFV_stack_10->SetBinError(13,1.263814);
   hCCpi0inFV_stack_10->SetBinError(14,1.415986);
   hCCpi0inFV_stack_10->SetBinError(15,1.321785);
   hCCpi0inFV_stack_10->SetBinError(16,1.161153);
   hCCpi0inFV_stack_10->SetBinError(17,1.038119);
   hCCpi0inFV_stack_10->SetBinError(18,0.940871);
   hCCpi0inFV_stack_10->SetBinError(19,1.127887);
   hCCpi0inFV_stack_10->SetBinError(20,1.067305);
   hCCpi0inFV_stack_10->SetBinError(21,2.890279);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,93.39236);
   hNCinFV_stack_11->SetBinContent(2,10.04461);
   hNCinFV_stack_11->SetBinContent(3,7.679977);
   hNCinFV_stack_11->SetBinContent(4,6.840378);
   hNCinFV_stack_11->SetBinContent(5,7.697904);
   hNCinFV_stack_11->SetBinContent(6,6.004197);
   hNCinFV_stack_11->SetBinContent(7,6.242327);
   hNCinFV_stack_11->SetBinContent(8,4.465637);
   hNCinFV_stack_11->SetBinContent(9,4.763368);
   hNCinFV_stack_11->SetBinContent(10,5.21694);
   hNCinFV_stack_11->SetBinContent(11,3.517366);
   hNCinFV_stack_11->SetBinContent(12,3.253458);
   hNCinFV_stack_11->SetBinContent(13,2.991461);
   hNCinFV_stack_11->SetBinContent(14,4.364874);
   hNCinFV_stack_11->SetBinContent(15,1.815538);
   hNCinFV_stack_11->SetBinContent(16,4.520198);
   hNCinFV_stack_11->SetBinContent(17,2.605632);
   hNCinFV_stack_11->SetBinContent(18,2.962234);
   hNCinFV_stack_11->SetBinContent(19,1.454166);
   hNCinFV_stack_11->SetBinContent(20,1.038413);
   hNCinFV_stack_11->SetBinContent(21,16.52579);
   hNCinFV_stack_11->SetBinError(1,5.044843);
   hNCinFV_stack_11->SetBinError(2,2.018604);
   hNCinFV_stack_11->SetBinError(3,1.496877);
   hNCinFV_stack_11->SetBinError(4,1.29201);
   hNCinFV_stack_11->SetBinError(5,1.442099);
   hNCinFV_stack_11->SetBinError(6,1.319347);
   hNCinFV_stack_11->SetBinError(7,1.27286);
   hNCinFV_stack_11->SetBinError(8,1.099297);
   hNCinFV_stack_11->SetBinError(9,1.082686);
   hNCinFV_stack_11->SetBinError(10,1.217544);
   hNCinFV_stack_11->SetBinError(11,0.9916581);
   hNCinFV_stack_11->SetBinError(12,0.8527874);
   hNCinFV_stack_11->SetBinError(13,0.9888612);
   hNCinFV_stack_11->SetBinError(14,1.383631);
   hNCinFV_stack_11->SetBinError(15,0.8154799);
   hNCinFV_stack_11->SetBinError(16,1.201606);
   hNCinFV_stack_11->SetBinError(17,0.8494397);
   hNCinFV_stack_11->SetBinError(18,0.8911183);
   hNCinFV_stack_11->SetBinError(19,0.6443262);
   hNCinFV_stack_11->SetBinError(20,0.4780007);
   hNCinFV_stack_11->SetBinError(21,1.987404);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,66.1675);
   hnumuCCinFV_stack_12->SetBinContent(2,7.432556);
   hnumuCCinFV_stack_12->SetBinContent(3,10.82001);
   hnumuCCinFV_stack_12->SetBinContent(4,6.981963);
   hnumuCCinFV_stack_12->SetBinContent(5,9.314547);
   hnumuCCinFV_stack_12->SetBinContent(6,5.67477);
   hnumuCCinFV_stack_12->SetBinContent(7,4.289335);
   hnumuCCinFV_stack_12->SetBinContent(8,6.789136);
   hnumuCCinFV_stack_12->SetBinContent(9,4.782506);
   hnumuCCinFV_stack_12->SetBinContent(10,5.624654);
   hnumuCCinFV_stack_12->SetBinContent(11,3.358022);
   hnumuCCinFV_stack_12->SetBinContent(12,2.870864);
   hnumuCCinFV_stack_12->SetBinContent(13,3.120357);
   hnumuCCinFV_stack_12->SetBinContent(14,1.805704);
   hnumuCCinFV_stack_12->SetBinContent(15,1.82723);
   hnumuCCinFV_stack_12->SetBinContent(16,1.033764);
   hnumuCCinFV_stack_12->SetBinContent(17,1.809045);
   hnumuCCinFV_stack_12->SetBinContent(18,1.988911);
   hnumuCCinFV_stack_12->SetBinContent(19,1.318342);
   hnumuCCinFV_stack_12->SetBinContent(20,1.57549);
   hnumuCCinFV_stack_12->SetBinContent(21,20.4325);
   hnumuCCinFV_stack_12->SetBinError(1,4.595774);
   hnumuCCinFV_stack_12->SetBinError(2,1.409163);
   hnumuCCinFV_stack_12->SetBinError(3,2.173088);
   hnumuCCinFV_stack_12->SetBinError(4,1.385635);
   hnumuCCinFV_stack_12->SetBinError(5,1.943446);
   hnumuCCinFV_stack_12->SetBinError(6,1.491055);
   hnumuCCinFV_stack_12->SetBinError(7,1.071164);
   hnumuCCinFV_stack_12->SetBinError(8,1.46411);
   hnumuCCinFV_stack_12->SetBinError(9,1.191794);
   hnumuCCinFV_stack_12->SetBinError(10,1.20737);
   hnumuCCinFV_stack_12->SetBinError(11,1.020259);
   hnumuCCinFV_stack_12->SetBinError(12,0.8142306);
   hnumuCCinFV_stack_12->SetBinError(13,0.8905066);
   hnumuCCinFV_stack_12->SetBinError(14,0.7080169);
   hnumuCCinFV_stack_12->SetBinError(15,0.7522227);
   hnumuCCinFV_stack_12->SetBinError(16,0.4646761);
   hnumuCCinFV_stack_12->SetBinError(17,0.6045917);
   hnumuCCinFV_stack_12->SetBinError(18,0.6766742);
   hnumuCCinFV_stack_12->SetBinError(19,0.6072978);
   hnumuCCinFV_stack_12->SetBinError(20,0.6063844);
   hnumuCCinFV_stack_12->SetBinError(21,2.874756);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,17.55579);
   hnueCCinFV_stack_13->SetBinContent(2,0.2303483);
   hnueCCinFV_stack_13->SetBinContent(3,0.4239897);
   hnueCCinFV_stack_13->SetBinContent(4,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(5,0.4325931);
   hnueCCinFV_stack_13->SetBinContent(6,1.517861);
   hnueCCinFV_stack_13->SetBinContent(7,0.7013245);
   hnueCCinFV_stack_13->SetBinContent(8,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(9,1.543895);
   hnueCCinFV_stack_13->SetBinContent(10,0.6540641);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.2007115);
   hnueCCinFV_stack_13->SetBinContent(14,1.090732);
   hnueCCinFV_stack_13->SetBinContent(15,0.4991921);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,1.541266);
   hnueCCinFV_stack_13->SetBinError(1,2.994591);
   hnueCCinFV_stack_13->SetBinError(2,0.2303483);
   hnueCCinFV_stack_13->SetBinError(3,0.300765);
   hnueCCinFV_stack_13->SetBinError(4,0.2451269);
   hnueCCinFV_stack_13->SetBinError(5,0.4325931);
   hnueCCinFV_stack_13->SetBinError(6,0.7137061);
   hnueCCinFV_stack_13->SetBinError(7,0.4961329);
   hnueCCinFV_stack_13->SetBinError(8,0.4394482);
   hnueCCinFV_stack_13->SetBinError(9,1.173326);
   hnueCCinFV_stack_13->SetBinError(10,0.3812133);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.196756);
   hnueCCinFV_stack_13->SetBinError(14,0.596548);
   hnueCCinFV_stack_13->SetBinError(15,0.3613204);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.7506262);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__17->SetBinContent(1,1206.131);
   hmcerror__17->SetBinContent(2,115.5979);
   hmcerror__17->SetBinContent(3,126.7959);
   hmcerror__17->SetBinContent(4,113.3046);
   hmcerror__17->SetBinContent(5,116.1705);
   hmcerror__17->SetBinContent(6,97.67603);
   hmcerror__17->SetBinContent(7,93.25942);
   hmcerror__17->SetBinContent(8,87.83825);
   hmcerror__17->SetBinContent(9,83.47818);
   hmcerror__17->SetBinContent(10,81.07557);
   hmcerror__17->SetBinContent(11,66.78516);
   hmcerror__17->SetBinContent(12,61.32013);
   hmcerror__17->SetBinContent(13,53.53884);
   hmcerror__17->SetBinContent(14,48.80651);
   hmcerror__17->SetBinContent(15,34.72197);
   hmcerror__17->SetBinContent(16,39.00657);
   hmcerror__17->SetBinContent(17,35.99996);
   hmcerror__17->SetBinContent(18,32.18109);
   hmcerror__17->SetBinContent(19,28.30888);
   hmcerror__17->SetBinContent(20,22.11496);
   hmcerror__17->SetBinContent(21,251.7873);
   hmcerror__17->SetBinError(1,275.6143);
   hmcerror__17->SetBinError(2,37.61776);
   hmcerror__17->SetBinError(3,39.08226);
   hmcerror__17->SetBinError(4,32.67401);
   hmcerror__17->SetBinError(5,37.52764);
   hmcerror__17->SetBinError(6,27.28576);
   hmcerror__17->SetBinError(7,25.91484);
   hmcerror__17->SetBinError(8,31.21848);
   hmcerror__17->SetBinError(9,25.59774);
   hmcerror__17->SetBinError(10,24.44421);
   hmcerror__17->SetBinError(11,20.74562);
   hmcerror__17->SetBinError(12,19.12549);
   hmcerror__17->SetBinError(13,16.52222);
   hmcerror__17->SetBinError(14,20.34335);
   hmcerror__17->SetBinError(15,12.29807);
   hmcerror__17->SetBinError(16,13.32773);
   hmcerror__17->SetBinError(17,13.25161);
   hmcerror__17->SetBinError(18,12.79617);
   hmcerror__17->SetBinError(19,12.45478);
   hmcerror__17->SetBinError(20,10.2328);
   hmcerror__17->SetBinError(21,65.27069);
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
   
   Double_t _fx3021[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3021[20] = {
   1268,
   135,
   116,
   122,
   119,
   125,
   81,
   102,
   108,
   74,
   72,
   52,
   51,
   55,
   49,
   40,
   29,
   31,
   26,
   18};
   Double_t _felx3021[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3021[20] = {
   35.60899,
   11.61895,
   10.77033,
   11.04536,
   10.90871,
   11.18034,
   9.1239,
   10.0995,
   10.3923,
   8.7275,
   8.6108,
   7.3419,
   7.2725,
   7.546,
   7.1318,
   6.4604,
   5.5285,
   5.7094,
   5.2453,
   4.4008};
   Double_t _fehx3021[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3021[20] = {
   35.60899,
   11.61895,
   10.77033,
   11.04536,
   10.90871,
   11.18034,
   8.9221,
   10.0995,
   10.3923,
   8.5253,
   8.4085,
   7.1381,
   7.0686,
   7.3425,
   6.9277,
   6.2549,
   5.3201,
   5.5017,
   5.0358,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,55);
   Graph_Graph3021->SetMinimum(12.23928);
   Graph_Graph3021->SetMaximum(1432.61);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2673.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 49.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 250.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 33.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 244.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  88.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  965.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  190.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 359.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 180.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 148.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 26.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3022[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3022[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3022[20] = {
   0.2285111,
   0.3254191,
   0.3082296,
   0.2883732,
   0.3230392,
   0.2793495,
   0.2778791,
   0.3554087,
   0.3066399,
   0.3014991,
   0.3106322,
   0.3118958,
   0.3086025,
   0.4168162,
   0.3541871,
   0.3416792,
   0.3681006,
   0.3976301,
   0.4399602,
   0.4627093};
   Double_t _fehx3022[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3022[20] = {
   0.2285111,
   0.3254191,
   0.3082296,
   0.2883732,
   0.3230392,
   0.2793495,
   0.2778791,
   0.3554087,
   0.3066399,
   0.3014991,
   0.3106322,
   0.3118958,
   0.3086025,
   0.4168162,
   0.3541871,
   0.3416792,
   0.3681006,
   0.3976301,
   0.4399602,
   0.4627093};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,55);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3023[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3023[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3023[20] = {
   0.2103535,
   0.2343252,
   0.2306723,
   0.2354732,
   0.2171933,
   0.2297421,
   0.2263338,
   0.2345741,
   0.2127265,
   0.2103233,
   0.2100522,
   0.2157433,
   0.2152283,
   0.2280759,
   0.2347292,
   0.2304491,
   0.2082316,
   0.2329424,
   0.2418316,
   0.2584196};
   Double_t _fehx3023[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3023[20] = {
   0.2103535,
   0.2343252,
   0.2306723,
   0.2354732,
   0.2171933,
   0.2297421,
   0.2263338,
   0.2345741,
   0.2127265,
   0.2103233,
   0.2100522,
   0.2157433,
   0.2152283,
   0.2280759,
   0.2347292,
   0.2304491,
   0.2082316,
   0.2329424,
   0.2418316,
   0.2584196};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,55);
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
   
   Double_t _fx3024[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3024[20] = {
   1.051296,
   1.167841,
   0.9148559,
   1.076743,
   1.024356,
   1.279741,
   0.8685449,
   1.161225,
   1.293751,
   0.9127287,
   1.078084,
   0.8480086,
   0.9525795,
   1.126899,
   1.41121,
   1.025468,
   0.8055564,
   0.9632986,
   0.9184397,
   0.8139288};
   Double_t _felx3024[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3024[20] = {
   0.02952332,
   0.1005118,
   0.08494224,
   0.09748375,
   0.09390257,
   0.1144635,
   0.09783355,
   0.1149784,
   0.1244913,
   0.1076465,
   0.1289328,
   0.1197307,
   0.135836,
   0.1546105,
   0.2053973,
   0.1656234,
   0.1535696,
   0.1774147,
   0.1852881,
   0.1989966};
   Double_t _fehx3024[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3024[20] = {
   0.02952332,
   0.1005118,
   0.08494224,
   0.09748375,
   0.09390257,
   0.1144635,
   0.09566969,
   0.1149784,
   0.1244913,
   0.1051525,
   0.1259037,
   0.1164071,
   0.1320275,
   0.150441,
   0.1995192,
   0.160355,
   0.1477807,
   0.1709606,
   0.1778876,
   0.1892746};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,55);
   Graph_Graph3024->SetMinimum(0.5153525);
   Graph_Graph3024->SetMaximum(1.710309);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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

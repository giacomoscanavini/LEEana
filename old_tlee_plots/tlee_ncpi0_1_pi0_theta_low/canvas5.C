#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 23:09:35 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-3.94507,3.553846,436.2417);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__13->SetBinContent(1,32.23507);
   hmc__13->SetBinContent(2,85.49458);
   hmc__13->SetBinContent(3,128.6157);
   hmc__13->SetBinContent(4,169.2428);
   hmc__13->SetBinContent(5,183.4576);
   hmc__13->SetBinContent(6,197.2535);
   hmc__13->SetBinContent(7,192.8626);
   hmc__13->SetBinContent(8,187.505);
   hmc__13->SetBinContent(9,193.2861);
   hmc__13->SetBinContent(10,170.7013);
   hmc__13->SetBinContent(11,168.1427);
   hmc__13->SetBinContent(12,157.0426);
   hmc__13->SetBinContent(13,167.0909);
   hmc__13->SetBinContent(14,123.4683);
   hmc__13->SetBinContent(15,138.2495);
   hmc__13->SetBinContent(16,123.7745);
   hmc__13->SetBinContent(17,104.2452);
   hmc__13->SetBinContent(18,90.34008);
   hmc__13->SetBinContent(19,95.77047);
   hmc__13->SetBinContent(20,87.90537);
   hmc__13->SetBinContent(21,81.39651);
   hmc__13->SetBinContent(22,68.3882);
   hmc__13->SetBinContent(23,54.81765);
   hmc__13->SetBinContent(24,37.49255);
   hmc__13->SetBinContent(25,10.86686);
   hmc__13->SetBinError(1,13.01935);
   hmc__13->SetBinError(2,27.16777);
   hmc__13->SetBinError(3,44.13944);
   hmc__13->SetBinError(4,52.2515);
   hmc__13->SetBinError(5,60.81078);
   hmc__13->SetBinError(6,71.24101);
   hmc__13->SetBinError(7,71.23041);
   hmc__13->SetBinError(8,67.13955);
   hmc__13->SetBinError(9,68.84194);
   hmc__13->SetBinError(10,65.14475);
   hmc__13->SetBinError(11,69.1697);
   hmc__13->SetBinError(12,59.95055);
   hmc__13->SetBinError(13,65.11316);
   hmc__13->SetBinError(14,51.35124);
   hmc__13->SetBinError(15,45.83453);
   hmc__13->SetBinError(16,49.83487);
   hmc__13->SetBinError(17,43.64642);
   hmc__13->SetBinError(18,39.80272);
   hmc__13->SetBinError(19,37.53463);
   hmc__13->SetBinError(20,32.19207);
   hmc__13->SetBinError(21,30.29949);
   hmc__13->SetBinError(22,25.54364);
   hmc__13->SetBinError(23,18.771);
   hmc__13->SetBinError(24,15.2888);
   hmc__13->SetBinError(25,6.812448);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetMinimum(-3.94507);
   hmc__13->SetMaximum(414.2324);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,3.15);
   hs5_stack_5->SetMinimum(-2.083393e-08);
   hs5_stack_5->SetMaximum(207.1162);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.6443849);
   hbadmatch_stack_1->SetBinContent(2,0.305647);
   hbadmatch_stack_1->SetBinContent(3,2.416362);
   hbadmatch_stack_1->SetBinContent(4,3.905059);
   hbadmatch_stack_1->SetBinContent(5,2.288488);
   hbadmatch_stack_1->SetBinContent(6,3.689979);
   hbadmatch_stack_1->SetBinContent(7,3.552109);
   hbadmatch_stack_1->SetBinContent(8,5.533725);
   hbadmatch_stack_1->SetBinContent(9,5.928881);
   hbadmatch_stack_1->SetBinContent(10,6.459933);
   hbadmatch_stack_1->SetBinContent(11,4.662843);
   hbadmatch_stack_1->SetBinContent(12,5.899817);
   hbadmatch_stack_1->SetBinContent(13,4.382077);
   hbadmatch_stack_1->SetBinContent(14,1.070345);
   hbadmatch_stack_1->SetBinContent(15,4.860588);
   hbadmatch_stack_1->SetBinContent(16,5.610582);
   hbadmatch_stack_1->SetBinContent(17,2.135456);
   hbadmatch_stack_1->SetBinContent(18,1.672096);
   hbadmatch_stack_1->SetBinContent(19,1.653753);
   hbadmatch_stack_1->SetBinContent(20,2.236182);
   hbadmatch_stack_1->SetBinContent(21,2.919807);
   hbadmatch_stack_1->SetBinContent(22,1.848518);
   hbadmatch_stack_1->SetBinContent(23,0.9968908);
   hbadmatch_stack_1->SetBinContent(24,1.004567);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6443849);
   hbadmatch_stack_1->SetBinError(2,0.2242141);
   hbadmatch_stack_1->SetBinError(3,0.9823338);
   hbadmatch_stack_1->SetBinError(4,1.025348);
   hbadmatch_stack_1->SetBinError(5,0.7090154);
   hbadmatch_stack_1->SetBinError(6,1.022319);
   hbadmatch_stack_1->SetBinError(7,0.8798129);
   hbadmatch_stack_1->SetBinError(8,1.274001);
   hbadmatch_stack_1->SetBinError(9,1.230131);
   hbadmatch_stack_1->SetBinError(10,1.706404);
   hbadmatch_stack_1->SetBinError(11,1.151421);
   hbadmatch_stack_1->SetBinError(12,1.247816);
   hbadmatch_stack_1->SetBinError(13,1.042459);
   hbadmatch_stack_1->SetBinError(14,0.561611);
   hbadmatch_stack_1->SetBinError(15,1.276538);
   hbadmatch_stack_1->SetBinError(16,2.207864);
   hbadmatch_stack_1->SetBinError(17,0.7669623);
   hbadmatch_stack_1->SetBinError(18,0.6143876);
   hbadmatch_stack_1->SetBinError(19,0.6276215);
   hbadmatch_stack_1->SetBinError(20,0.7430991);
   hbadmatch_stack_1->SetBinError(21,0.8798968);
   hbadmatch_stack_1->SetBinError(22,0.701366);
   hbadmatch_stack_1->SetBinError(23,0.4919793);
   hbadmatch_stack_1->SetBinError(24,0.4497336);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,4.110651);
   hext_stack_2->SetBinContent(2,8.769125);
   hext_stack_2->SetBinContent(3,10.90586);
   hext_stack_2->SetBinContent(4,14.10675);
   hext_stack_2->SetBinContent(5,9.991752);
   hext_stack_2->SetBinContent(6,13.49109);
   hext_stack_2->SetBinContent(7,16.73229);
   hext_stack_2->SetBinContent(8,12.76727);
   hext_stack_2->SetBinContent(9,25.09204);
   hext_stack_2->SetBinContent(10,8.275974);
   hext_stack_2->SetBinContent(11,11.59497);
   hext_stack_2->SetBinContent(12,11.63245);
   hext_stack_2->SetBinContent(13,20.50254);
   hext_stack_2->SetBinContent(14,9.312597);
   hext_stack_2->SetBinContent(15,19.74283);
   hext_stack_2->SetBinContent(16,11.56625);
   hext_stack_2->SetBinContent(17,11.23744);
   hext_stack_2->SetBinContent(18,5.840789);
   hext_stack_2->SetBinContent(19,9.836107);
   hext_stack_2->SetBinContent(20,8.896047);
   hext_stack_2->SetBinContent(21,5.434191);
   hext_stack_2->SetBinContent(22,9.119473);
   hext_stack_2->SetBinContent(23,8.284733);
   hext_stack_2->SetBinContent(24,8.836965);
   hext_stack_2->SetBinContent(25,0.8131978);
   hext_stack_2->SetBinError(1,1.499292);
   hext_stack_2->SetBinError(2,2.216622);
   hext_stack_2->SetBinError(3,2.279585);
   hext_stack_2->SetBinError(4,2.730578);
   hext_stack_2->SetBinError(5,1.934591);
   hext_stack_2->SetBinError(6,2.564353);
   hext_stack_2->SetBinError(7,2.822156);
   hext_stack_2->SetBinError(8,2.470657);
   hext_stack_2->SetBinError(9,3.612337);
   hext_stack_2->SetBinError(10,1.795123);
   hext_stack_2->SetBinError(11,2.12981);
   hext_stack_2->SetBinError(12,2.3091);
   hext_stack_2->SetBinError(13,3.168306);
   hext_stack_2->SetBinError(14,1.966097);
   hext_stack_2->SetBinError(15,3.251525);
   hext_stack_2->SetBinError(16,2.311038);
   hext_stack_2->SetBinError(17,2.258438);
   hext_stack_2->SetBinError(18,1.538068);
   hext_stack_2->SetBinError(19,2.285415);
   hext_stack_2->SetBinError(20,2.058577);
   hext_stack_2->SetBinError(21,1.483351);
   hext_stack_2->SetBinError(22,2.133111);
   hext_stack_2->SetBinError(23,2.196161);
   hext_stack_2->SetBinError(24,2.318599);
   hext_stack_2->SetBinError(25,0.5750177);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.375357);
   hdirt_stack_3->SetBinContent(5,0.9099599);
   hdirt_stack_3->SetBinContent(6,1.180849);
   hdirt_stack_3->SetBinContent(7,1.25839);
   hdirt_stack_3->SetBinContent(8,1.82793);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinContent(10,1.256918);
   hdirt_stack_3->SetBinContent(11,1.114166);
   hdirt_stack_3->SetBinContent(12,0.7001346);
   hdirt_stack_3->SetBinContent(13,0.1586307);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.7680599);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,0.6951543);
   hdirt_stack_3->SetBinContent(18,1.237181);
   hdirt_stack_3->SetBinContent(19,0.1651799);
   hdirt_stack_3->SetBinContent(20,1.338784);
   hdirt_stack_3->SetBinContent(21,0.4817154);
   hdirt_stack_3->SetBinContent(23,0.7670878);
   hdirt_stack_3->SetBinContent(24,0.2761429);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.2690641);
   hdirt_stack_3->SetBinError(5,0.5081362);
   hdirt_stack_3->SetBinError(6,0.5410205);
   hdirt_stack_3->SetBinError(7,0.5284789);
   hdirt_stack_3->SetBinError(8,1.068708);
   hdirt_stack_3->SetBinError(9,0.1952625);
   hdirt_stack_3->SetBinError(10,0.5630061);
   hdirt_stack_3->SetBinError(11,0.569712);
   hdirt_stack_3->SetBinError(12,0.4057766);
   hdirt_stack_3->SetBinError(13,0.1586307);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.4586476);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.4258516);
   hdirt_stack_3->SetBinError(18,0.586007);
   hdirt_stack_3->SetBinError(19,0.1651799);
   hdirt_stack_3->SetBinError(20,0.6400497);
   hdirt_stack_3->SetBinError(21,0.3420373);
   hdirt_stack_3->SetBinError(23,0.5461925);
   hdirt_stack_3->SetBinError(24,0.1952625);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,1.980379);
   houtFV_stack_4->SetBinContent(2,5.219717);
   houtFV_stack_4->SetBinContent(3,7.556248);
   houtFV_stack_4->SetBinContent(4,10.56106);
   houtFV_stack_4->SetBinContent(5,17.77957);
   houtFV_stack_4->SetBinContent(6,14.14282);
   houtFV_stack_4->SetBinContent(7,10.89073);
   houtFV_stack_4->SetBinContent(8,11.55292);
   houtFV_stack_4->SetBinContent(9,10.20798);
   houtFV_stack_4->SetBinContent(10,11.27683);
   houtFV_stack_4->SetBinContent(11,10.62517);
   houtFV_stack_4->SetBinContent(12,7.905879);
   houtFV_stack_4->SetBinContent(13,9.038044);
   houtFV_stack_4->SetBinContent(14,8.557222);
   houtFV_stack_4->SetBinContent(15,7.134726);
   houtFV_stack_4->SetBinContent(16,7.423074);
   houtFV_stack_4->SetBinContent(17,6.368637);
   houtFV_stack_4->SetBinContent(18,6.609088);
   houtFV_stack_4->SetBinContent(19,8.411631);
   houtFV_stack_4->SetBinContent(20,6.788224);
   houtFV_stack_4->SetBinContent(21,7.284711);
   houtFV_stack_4->SetBinContent(22,4.565624);
   houtFV_stack_4->SetBinContent(23,4.42);
   houtFV_stack_4->SetBinContent(24,4.980968);
   houtFV_stack_4->SetBinContent(25,1.788358);
   houtFV_stack_4->SetBinError(1,0.6776043);
   houtFV_stack_4->SetBinError(2,1.22227);
   houtFV_stack_4->SetBinError(3,1.499856);
   houtFV_stack_4->SetBinError(4,1.519864);
   houtFV_stack_4->SetBinError(5,2.258573);
   houtFV_stack_4->SetBinError(6,1.899281);
   houtFV_stack_4->SetBinError(7,1.643778);
   houtFV_stack_4->SetBinError(8,1.627812);
   houtFV_stack_4->SetBinError(9,1.595222);
   houtFV_stack_4->SetBinError(10,1.635167);
   houtFV_stack_4->SetBinError(11,1.790781);
   houtFV_stack_4->SetBinError(12,1.37393);
   houtFV_stack_4->SetBinError(13,1.478174);
   houtFV_stack_4->SetBinError(14,1.464539);
   houtFV_stack_4->SetBinError(15,1.287576);
   houtFV_stack_4->SetBinError(16,1.2978);
   houtFV_stack_4->SetBinError(17,1.19848);
   houtFV_stack_4->SetBinError(18,1.281043);
   houtFV_stack_4->SetBinError(19,1.408959);
   houtFV_stack_4->SetBinError(20,1.269042);
   houtFV_stack_4->SetBinError(21,1.402046);
   houtFV_stack_4->SetBinError(22,1.127321);
   houtFV_stack_4->SetBinError(23,1.033713);
   houtFV_stack_4->SetBinError(24,1.201443);
   houtFV_stack_4->SetBinError(25,0.6649697);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1039642);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4125499);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6525787);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.8806103);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5780081);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.265568);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5580943);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3987499);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1497466);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.398983);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1776146);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1961954);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1554321);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.06518023);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08854323);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02035842);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3101109);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05705851);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2257003);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.246647);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2942065);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2370906);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.09492402);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2548985);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.192512);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1086856);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1937685);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1458638);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1362147);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1299965);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04656421);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06260951);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.01482777);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.01677252);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2583256);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2294473);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.476476);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.8110595);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.605719);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.094559);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9552091);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5167229);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5332183);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6395586);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8145064);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7617036);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4469566);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5672497);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2590469);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7770283);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2338693);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4432944);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2413537);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2792808);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.544207);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4268667);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08742689);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.09164184);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2128576);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2725928);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2287042);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.321082);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3740014);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1245396);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1936835);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1826315);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2330153);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2164207);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1942692);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2032346);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06624384);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3056295);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.08381185);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1791833);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1080724);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1068692);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2167341);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1768066);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03923707);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02862678);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.40772);
   hNCpi0inFVres_stack_7->SetBinContent(2,27.54274);
   hNCpi0inFVres_stack_7->SetBinContent(3,43.07645);
   hNCpi0inFVres_stack_7->SetBinContent(4,56.59637);
   hNCpi0inFVres_stack_7->SetBinContent(5,59.84155);
   hNCpi0inFVres_stack_7->SetBinContent(6,65.707);
   hNCpi0inFVres_stack_7->SetBinContent(7,71.04909);
   hNCpi0inFVres_stack_7->SetBinContent(8,68.26633);
   hNCpi0inFVres_stack_7->SetBinContent(9,61.17543);
   hNCpi0inFVres_stack_7->SetBinContent(10,64.11507);
   hNCpi0inFVres_stack_7->SetBinContent(11,60.11909);
   hNCpi0inFVres_stack_7->SetBinContent(12,53.94041);
   hNCpi0inFVres_stack_7->SetBinContent(13,54.20651);
   hNCpi0inFVres_stack_7->SetBinContent(14,45.35832);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.4126);
   hNCpi0inFVres_stack_7->SetBinContent(16,39.24646);
   hNCpi0inFVres_stack_7->SetBinContent(17,32.57122);
   hNCpi0inFVres_stack_7->SetBinContent(18,32.24567);
   hNCpi0inFVres_stack_7->SetBinContent(19,30.88335);
   hNCpi0inFVres_stack_7->SetBinContent(20,29.03283);
   hNCpi0inFVres_stack_7->SetBinContent(21,26.67955);
   hNCpi0inFVres_stack_7->SetBinContent(22,20.45655);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.84271);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.457854);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.441792);
   hNCpi0inFVres_stack_7->SetBinError(1,1.02612);
   hNCpi0inFVres_stack_7->SetBinError(2,1.670317);
   hNCpi0inFVres_stack_7->SetBinError(3,2.188955);
   hNCpi0inFVres_stack_7->SetBinError(4,2.481474);
   hNCpi0inFVres_stack_7->SetBinError(5,2.254111);
   hNCpi0inFVres_stack_7->SetBinError(6,2.511411);
   hNCpi0inFVres_stack_7->SetBinError(7,2.706313);
   hNCpi0inFVres_stack_7->SetBinError(8,2.549786);
   hNCpi0inFVres_stack_7->SetBinError(9,2.215205);
   hNCpi0inFVres_stack_7->SetBinError(10,2.448424);
   hNCpi0inFVres_stack_7->SetBinError(11,2.323603);
   hNCpi0inFVres_stack_7->SetBinError(12,2.044403);
   hNCpi0inFVres_stack_7->SetBinError(13,2.187795);
   hNCpi0inFVres_stack_7->SetBinError(14,1.9948);
   hNCpi0inFVres_stack_7->SetBinError(15,2.02489);
   hNCpi0inFVres_stack_7->SetBinError(16,1.846037);
   hNCpi0inFVres_stack_7->SetBinError(17,1.542019);
   hNCpi0inFVres_stack_7->SetBinError(18,1.698702);
   hNCpi0inFVres_stack_7->SetBinError(19,1.735636);
   hNCpi0inFVres_stack_7->SetBinError(20,1.67205);
   hNCpi0inFVres_stack_7->SetBinError(21,1.601691);
   hNCpi0inFVres_stack_7->SetBinError(22,1.324866);
   hNCpi0inFVres_stack_7->SetBinError(23,1.133001);
   hNCpi0inFVres_stack_7->SetBinError(24,0.853048);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6904295);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.796748);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.403385);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.82958);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.23158);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.62832);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.21611);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.94347);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.49518);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.79495);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.60575);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.938583);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.32805);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.50401);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.58986);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.940788);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.277336);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.347897);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.129321);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.637135);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.996994);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.271959);
   hNCpi0inFVdis_stack_8->SetBinContent(22,5.263457);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.891365);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.838889);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5979238);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8731837);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.087079);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.671029);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.39518);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.408273);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.666732);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.515753);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.214093);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.375852);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.09681);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7595311);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.091312);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.177918);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.085005);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9730898);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8281415);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5168329);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6640901);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6840584);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7748705);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.776549);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9679465);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4930756);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4359959);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1421078);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03683791);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1422871);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.08444149);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02952655);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1839615);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02604834);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1118695);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.06827068);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02165026);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1352255);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.93224);
   hCCpi0inFV_stack_10->SetBinContent(2,12.46595);
   hCCpi0inFV_stack_10->SetBinContent(3,19.41128);
   hCCpi0inFV_stack_10->SetBinContent(4,27.2823);
   hCCpi0inFV_stack_10->SetBinContent(5,31.65447);
   hCCpi0inFV_stack_10->SetBinContent(6,37.00014);
   hCCpi0inFV_stack_10->SetBinContent(7,29.88853);
   hCCpi0inFV_stack_10->SetBinContent(8,35.70992);
   hCCpi0inFV_stack_10->SetBinContent(9,34.12994);
   hCCpi0inFV_stack_10->SetBinContent(10,29.90639);
   hCCpi0inFV_stack_10->SetBinContent(11,27.48849);
   hCCpi0inFV_stack_10->SetBinContent(12,25.11549);
   hCCpi0inFV_stack_10->SetBinContent(13,22.33227);
   hCCpi0inFV_stack_10->SetBinContent(14,22.84894);
   hCCpi0inFV_stack_10->SetBinContent(15,24.78361);
   hCCpi0inFV_stack_10->SetBinContent(16,19.70666);
   hCCpi0inFV_stack_10->SetBinContent(17,20.64418);
   hCCpi0inFV_stack_10->SetBinContent(18,16.13114);
   hCCpi0inFV_stack_10->SetBinContent(19,19.58889);
   hCCpi0inFV_stack_10->SetBinContent(20,14.05122);
   hCCpi0inFV_stack_10->SetBinContent(21,13.29822);
   hCCpi0inFV_stack_10->SetBinContent(22,11.56735);
   hCCpi0inFV_stack_10->SetBinContent(23,9.038054);
   hCCpi0inFV_stack_10->SetBinContent(24,5.307667);
   hCCpi0inFV_stack_10->SetBinContent(25,1.608988);
   hCCpi0inFV_stack_10->SetBinError(1,1.082946);
   hCCpi0inFV_stack_10->SetBinError(2,1.755285);
   hCCpi0inFV_stack_10->SetBinError(3,2.199273);
   hCCpi0inFV_stack_10->SetBinError(4,2.594147);
   hCCpi0inFV_stack_10->SetBinError(5,2.8929);
   hCCpi0inFV_stack_10->SetBinError(6,3.031098);
   hCCpi0inFV_stack_10->SetBinError(7,2.734347);
   hCCpi0inFV_stack_10->SetBinError(8,3.041484);
   hCCpi0inFV_stack_10->SetBinError(9,2.939767);
   hCCpi0inFV_stack_10->SetBinError(10,2.810726);
   hCCpi0inFV_stack_10->SetBinError(11,2.633863);
   hCCpi0inFV_stack_10->SetBinError(12,2.541293);
   hCCpi0inFV_stack_10->SetBinError(13,2.31896);
   hCCpi0inFV_stack_10->SetBinError(14,2.39008);
   hCCpi0inFV_stack_10->SetBinError(15,2.508813);
   hCCpi0inFV_stack_10->SetBinError(16,2.214026);
   hCCpi0inFV_stack_10->SetBinError(17,2.223451);
   hCCpi0inFV_stack_10->SetBinError(18,2.047719);
   hCCpi0inFV_stack_10->SetBinError(19,2.247962);
   hCCpi0inFV_stack_10->SetBinError(20,1.859799);
   hCCpi0inFV_stack_10->SetBinError(21,1.766124);
   hCCpi0inFV_stack_10->SetBinError(22,1.692447);
   hCCpi0inFV_stack_10->SetBinError(23,1.520456);
   hCCpi0inFV_stack_10->SetBinError(24,1.238763);
   hCCpi0inFV_stack_10->SetBinError(25,0.6801404);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.722404);
   hNCinFV_stack_11->SetBinContent(2,8.442052);
   hNCinFV_stack_11->SetBinContent(3,14.51452);
   hNCinFV_stack_11->SetBinContent(4,16.63805);
   hNCinFV_stack_11->SetBinContent(5,17.93495);
   hNCinFV_stack_11->SetBinContent(6,17.44264);
   hNCinFV_stack_11->SetBinContent(7,17.95604);
   hNCinFV_stack_11->SetBinContent(8,13.28857);
   hNCinFV_stack_11->SetBinContent(9,15.65385);
   hNCinFV_stack_11->SetBinContent(10,15.75028);
   hNCinFV_stack_11->SetBinContent(11,16.17759);
   hNCinFV_stack_11->SetBinContent(12,12.20881);
   hNCinFV_stack_11->SetBinContent(13,17.03928);
   hNCinFV_stack_11->SetBinContent(14,9.796326);
   hNCinFV_stack_11->SetBinContent(15,13.74274);
   hNCinFV_stack_11->SetBinContent(16,11.64213);
   hNCinFV_stack_11->SetBinContent(17,12.48739);
   hNCinFV_stack_11->SetBinContent(18,9.555399);
   hNCinFV_stack_11->SetBinContent(19,10.69891);
   hNCinFV_stack_11->SetBinContent(20,8.108313);
   hNCinFV_stack_11->SetBinContent(21,6.488652);
   hNCinFV_stack_11->SetBinContent(22,6.897645);
   hNCinFV_stack_11->SetBinContent(23,4.699576);
   hNCinFV_stack_11->SetBinContent(24,2.694218);
   hNCinFV_stack_11->SetBinContent(25,0.8347965);
   hNCinFV_stack_11->SetBinError(1,1.042451);
   hNCinFV_stack_11->SetBinError(2,1.745307);
   hNCinFV_stack_11->SetBinError(3,2.210212);
   hNCinFV_stack_11->SetBinError(4,2.22534);
   hNCinFV_stack_11->SetBinError(5,2.377405);
   hNCinFV_stack_11->SetBinError(6,2.399659);
   hNCinFV_stack_11->SetBinError(7,2.53644);
   hNCinFV_stack_11->SetBinError(8,1.892613);
   hNCinFV_stack_11->SetBinError(9,2.183768);
   hNCinFV_stack_11->SetBinError(10,2.157546);
   hNCinFV_stack_11->SetBinError(11,2.090701);
   hNCinFV_stack_11->SetBinError(12,1.85443);
   hNCinFV_stack_11->SetBinError(13,2.126737);
   hNCinFV_stack_11->SetBinError(14,1.598183);
   hNCinFV_stack_11->SetBinError(15,2.091163);
   hNCinFV_stack_11->SetBinError(16,1.832066);
   hNCinFV_stack_11->SetBinError(17,1.912364);
   hNCinFV_stack_11->SetBinError(18,1.857511);
   hNCinFV_stack_11->SetBinError(19,2.033673);
   hNCinFV_stack_11->SetBinError(20,1.500097);
   hNCinFV_stack_11->SetBinError(21,1.373655);
   hNCinFV_stack_11->SetBinError(22,1.317734);
   hNCinFV_stack_11->SetBinError(23,1.157708);
   hNCinFV_stack_11->SetBinError(24,0.8680669);
   hNCinFV_stack_11->SetBinError(25,0.3821275);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.69754);
   hnumuCCinFV_stack_12->SetBinContent(2,10.8179);
   hnumuCCinFV_stack_12->SetBinContent(3,13.41524);
   hnumuCCinFV_stack_12->SetBinContent(4,22.59052);
   hnumuCCinFV_stack_12->SetBinContent(5,23.29521);
   hnumuCCinFV_stack_12->SetBinContent(6,24.06904);
   hnumuCCinFV_stack_12->SetBinContent(7,21.25982);
   hnumuCCinFV_stack_12->SetBinContent(8,23.23381);
   hnumuCCinFV_stack_12->SetBinContent(9,24.00489);
   hnumuCCinFV_stack_12->SetBinContent(10,18.22635);
   hnumuCCinFV_stack_12->SetBinContent(11,25.98597);
   hnumuCCinFV_stack_12->SetBinContent(12,26.37185);
   hnumuCCinFV_stack_12->SetBinContent(13,28.19723);
   hnumuCCinFV_stack_12->SetBinContent(14,13.86395);
   hnumuCCinFV_stack_12->SetBinContent(15,13.49786);
   hnumuCCinFV_stack_12->SetBinContent(16,18.63089);
   hnumuCCinFV_stack_12->SetBinContent(17,11.5301);
   hnumuCCinFV_stack_12->SetBinContent(18,9.865726);
   hnumuCCinFV_stack_12->SetBinContent(19,8.34222);
   hnumuCCinFV_stack_12->SetBinContent(20,10.73308);
   hnumuCCinFV_stack_12->SetBinContent(21,11.15487);
   hnumuCCinFV_stack_12->SetBinContent(22,8.220129);
   hnumuCCinFV_stack_12->SetBinContent(23,10.28467);
   hnumuCCinFV_stack_12->SetBinContent(24,4.887849);
   hnumuCCinFV_stack_12->SetBinContent(25,1.528564);
   hnumuCCinFV_stack_12->SetBinError(1,0.838541);
   hnumuCCinFV_stack_12->SetBinError(2,1.760215);
   hnumuCCinFV_stack_12->SetBinError(3,2.114926);
   hnumuCCinFV_stack_12->SetBinError(4,2.837128);
   hnumuCCinFV_stack_12->SetBinError(5,2.974687);
   hnumuCCinFV_stack_12->SetBinError(6,3.67734);
   hnumuCCinFV_stack_12->SetBinError(7,2.734754);
   hnumuCCinFV_stack_12->SetBinError(8,2.616216);
   hnumuCCinFV_stack_12->SetBinError(9,2.742196);
   hnumuCCinFV_stack_12->SetBinError(10,2.365428);
   hnumuCCinFV_stack_12->SetBinError(11,3.133353);
   hnumuCCinFV_stack_12->SetBinError(12,2.782045);
   hnumuCCinFV_stack_12->SetBinError(13,3.239258);
   hnumuCCinFV_stack_12->SetBinError(14,2.110533);
   hnumuCCinFV_stack_12->SetBinError(15,1.936653);
   hnumuCCinFV_stack_12->SetBinError(16,2.605332);
   hnumuCCinFV_stack_12->SetBinError(17,1.807984);
   hnumuCCinFV_stack_12->SetBinError(18,1.878391);
   hnumuCCinFV_stack_12->SetBinError(19,1.510039);
   hnumuCCinFV_stack_12->SetBinError(20,1.744598);
   hnumuCCinFV_stack_12->SetBinError(21,1.892419);
   hnumuCCinFV_stack_12->SetBinError(22,1.507635);
   hnumuCCinFV_stack_12->SetBinError(23,1.953336);
   hnumuCCinFV_stack_12->SetBinError(24,1.247148);
   hnumuCCinFV_stack_12->SetBinError(25,0.6631494);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.802833);
   hnueCCinFV_stack_13->SetBinContent(2,1.747976);
   hnueCCinFV_stack_13->SetBinContent(3,1.123984);
   hnueCCinFV_stack_13->SetBinContent(4,1.203589);
   hnueCCinFV_stack_13->SetBinContent(5,2.93141);
   hnueCCinFV_stack_13->SetBinContent(6,0.9247923);
   hnueCCinFV_stack_13->SetBinContent(7,0.7817899);
   hnueCCinFV_stack_13->SetBinContent(8,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,1.77042);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(13,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(14,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(15,0.9355028);
   hnueCCinFV_stack_13->SetBinContent(16,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(17,1.909863);
   hnueCCinFV_stack_13->SetBinContent(18,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(21,0.6905718);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.7129175);
   hnueCCinFV_stack_13->SetBinError(2,0.6853088);
   hnueCCinFV_stack_13->SetBinError(3,0.6021119);
   hnueCCinFV_stack_13->SetBinError(4,0.6266705);
   hnueCCinFV_stack_13->SetBinError(5,1.323939);
   hnueCCinFV_stack_13->SetBinError(6,0.5452471);
   hnueCCinFV_stack_13->SetBinError(7,0.3908977);
   hnueCCinFV_stack_13->SetBinError(8,0.5197486);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.6875145);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(13,0.2538659);
   hnueCCinFV_stack_13->SetBinError(14,0.438694);
   hnueCCinFV_stack_13->SetBinError(15,0.4701509);
   hnueCCinFV_stack_13->SetBinError(16,0.2770047);
   hnueCCinFV_stack_13->SetBinError(17,1.606124);
   hnueCCinFV_stack_13->SetBinError(18,0.5946997);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(21,0.4008118);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__14->SetBinContent(1,32.23507);
   hmcerror__14->SetBinContent(2,85.49458);
   hmcerror__14->SetBinContent(3,128.6157);
   hmcerror__14->SetBinContent(4,169.2428);
   hmcerror__14->SetBinContent(5,183.4576);
   hmcerror__14->SetBinContent(6,197.2535);
   hmcerror__14->SetBinContent(7,192.8626);
   hmcerror__14->SetBinContent(8,187.505);
   hmcerror__14->SetBinContent(9,193.2861);
   hmcerror__14->SetBinContent(10,170.7013);
   hmcerror__14->SetBinContent(11,168.1427);
   hmcerror__14->SetBinContent(12,157.0426);
   hmcerror__14->SetBinContent(13,167.0909);
   hmcerror__14->SetBinContent(14,123.4683);
   hmcerror__14->SetBinContent(15,138.2495);
   hmcerror__14->SetBinContent(16,123.7745);
   hmcerror__14->SetBinContent(17,104.2452);
   hmcerror__14->SetBinContent(18,90.34008);
   hmcerror__14->SetBinContent(19,95.77047);
   hmcerror__14->SetBinContent(20,87.90537);
   hmcerror__14->SetBinContent(21,81.39651);
   hmcerror__14->SetBinContent(22,68.3882);
   hmcerror__14->SetBinContent(23,54.81765);
   hmcerror__14->SetBinContent(24,37.49255);
   hmcerror__14->SetBinContent(25,10.86686);
   hmcerror__14->SetBinError(1,13.01935);
   hmcerror__14->SetBinError(2,27.16777);
   hmcerror__14->SetBinError(3,44.13944);
   hmcerror__14->SetBinError(4,52.2515);
   hmcerror__14->SetBinError(5,60.81078);
   hmcerror__14->SetBinError(6,71.24101);
   hmcerror__14->SetBinError(7,71.23041);
   hmcerror__14->SetBinError(8,67.13955);
   hmcerror__14->SetBinError(9,68.84194);
   hmcerror__14->SetBinError(10,65.14475);
   hmcerror__14->SetBinError(11,69.1697);
   hmcerror__14->SetBinError(12,59.95055);
   hmcerror__14->SetBinError(13,65.11316);
   hmcerror__14->SetBinError(14,51.35124);
   hmcerror__14->SetBinError(15,45.83453);
   hmcerror__14->SetBinError(16,49.83487);
   hmcerror__14->SetBinError(17,43.64642);
   hmcerror__14->SetBinError(18,39.80272);
   hmcerror__14->SetBinError(19,37.53463);
   hmcerror__14->SetBinError(20,32.19207);
   hmcerror__14->SetBinError(21,30.29949);
   hmcerror__14->SetBinError(22,25.54364);
   hmcerror__14->SetBinError(23,18.771);
   hmcerror__14->SetBinError(24,15.2888);
   hmcerror__14->SetBinError(25,6.812448);
   hmcerror__14->SetBinError(26,0.3895343);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3017[25] = {
   31,
   82,
   134,
   137,
   167,
   142,
   169,
   148,
   148,
   129,
   137,
   129,
   148,
   123,
   111,
   109,
   92,
   79,
   94,
   74,
   91,
   62,
   46,
   31,
   8};
   Double_t _felx3017[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3017[25] = {
   5.7094,
   9.1791,
   11.57584,
   11.7047,
   12.92285,
   11.91638,
   13,
   12.16553,
   12.16553,
   11.35782,
   11.7047,
   11.35782,
   12.16553,
   11.09054,
   10.53565,
   10.44031,
   9.7138,
   9.0124,
   9.8173,
   8.7275,
   9.6617,
   8.0018,
   6.9153,
   5.7094,
   3.0307};
   Double_t _fehx3017[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3017[25] = {
   5.5017,
   8.9774,
   11.57584,
   11.7047,
   12.92285,
   11.91638,
   13,
   12.16553,
   12.16553,
   11.35782,
   11.7047,
   11.35782,
   12.16553,
   11.09054,
   10.53565,
   10.44031,
   9.513,
   8.8105,
   9.616,
   8.5253,
   9.46,
   7.7989,
   6.7108,
   5.5017,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,3.465);
   Graph_Graph3017->SetMinimum(4.47237);
   Graph_Graph3017->SetMaximum(199.7031);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.7","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.4","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3018[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3018[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3018[25] = {
   0.4038877,
   0.3177718,
   0.3431886,
   0.308737,
   0.3314704,
   0.3611647,
   0.3693324,
   0.358068,
   0.356166,
   0.3816302,
   0.4113749,
   0.3817471,
   0.3896869,
   0.4159063,
   0.3315349,
   0.4026264,
   0.41869,
   0.4405877,
   0.3919228,
   0.3662128,
   0.3722456,
   0.3735094,
   0.3424263,
   0.4077823,
   0.6269011};
   Double_t _fehx3018[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3018[25] = {
   0.4038877,
   0.3177718,
   0.3431886,
   0.308737,
   0.3314704,
   0.3611647,
   0.3693324,
   0.358068,
   0.356166,
   0.3816302,
   0.4113749,
   0.3817471,
   0.3896869,
   0.4159063,
   0.3315349,
   0.4026264,
   0.41869,
   0.4405877,
   0.3919228,
   0.3662128,
   0.3722456,
   0.3735094,
   0.3424263,
   0.4077823,
   0.6269011};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,3.465);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3019[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3019[25] = {
   0.2271609,
   0.2632079,
   0.2791488,
   0.2708924,
   0.2911478,
   0.3061218,
   0.3195853,
   0.3385054,
   0.3250005,
   0.3531512,
   0.3733444,
   0.3483238,
   0.3598606,
   0.3765308,
   0.313838,
   0.3620719,
   0.3608847,
   0.3787463,
   0.3352005,
   0.3301233,
   0.3199455,
   0.284633,
   0.2796486,
   0.2389296,
   0.3635701};
   Double_t _fehx3019[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3019[25] = {
   0.2271609,
   0.2632079,
   0.2791488,
   0.2708924,
   0.2911478,
   0.3061218,
   0.3195853,
   0.3385054,
   0.3250005,
   0.3531512,
   0.3733444,
   0.3483238,
   0.3598606,
   0.3765308,
   0.313838,
   0.3620719,
   0.3608847,
   0.3787463,
   0.3352005,
   0.3301233,
   0.3199455,
   0.284633,
   0.2796486,
   0.2389296,
   0.3635701};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,3.465);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3020[25] = {
   0.9616857,
   0.9591252,
   1.041863,
   0.8094881,
   0.9102919,
   0.7198858,
   0.8762715,
   0.7893121,
   0.7657044,
   0.7557062,
   0.814784,
   0.8214332,
   0.8857452,
   0.996207,
   0.8028964,
   0.8806339,
   0.8825346,
   0.8744734,
   0.9815134,
   0.8418143,
   1.117984,
   0.9065892,
   0.8391458,
   0.8268309,
   0.7361831};
   Double_t _felx3020[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3020[25] = {
   0.1771177,
   0.1073647,
   0.09000329,
   0.06915924,
   0.0704405,
   0.06041147,
   0.0674055,
   0.06488106,
   0.06294051,
   0.06653622,
   0.0696117,
   0.07232316,
   0.07280781,
   0.08982496,
   0.07620755,
   0.08434943,
   0.09318222,
   0.09976081,
   0.1025086,
   0.0992829,
   0.1186992,
   0.1170056,
   0.126151,
   0.1522809,
   0.2788938};
   Double_t _fehx3020[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3020[25] = {
   0.1706744,
   0.1050055,
   0.09000329,
   0.06915924,
   0.0704405,
   0.06041147,
   0.0674055,
   0.06488106,
   0.06294051,
   0.06653622,
   0.0696117,
   0.07232316,
   0.07280781,
   0.08982496,
   0.07620755,
   0.08434943,
   0.09125599,
   0.09752593,
   0.1004067,
   0.0969827,
   0.1162212,
   0.1140387,
   0.1224204,
   0.1467412,
   0.256707};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,3.465);
   Graph_Graph3020->SetMinimum(0.3795977);
   Graph_Graph3020->SetMaximum(1.311897);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

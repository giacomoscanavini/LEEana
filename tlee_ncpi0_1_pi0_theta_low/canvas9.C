#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 23:09:36 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",86,109,1200,900);
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
   pad1->Range(-0.4846154,-0.9700722,3.553846,107.2696);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__25->SetBinContent(1,6.30171);
   hmc__25->SetBinContent(2,18.54729);
   hmc__25->SetBinContent(3,32.85959);
   hmc__25->SetBinContent(4,41.59254);
   hmc__25->SetBinContent(5,43.71661);
   hmc__25->SetBinContent(6,45.4487);
   hmc__25->SetBinContent(7,48.50361);
   hmc__25->SetBinContent(8,38.2819);
   hmc__25->SetBinContent(9,44.12641);
   hmc__25->SetBinContent(10,37.66382);
   hmc__25->SetBinContent(11,36.51942);
   hmc__25->SetBinContent(12,37.08891);
   hmc__25->SetBinContent(13,34.66857);
   hmc__25->SetBinContent(14,20.15691);
   hmc__25->SetBinContent(15,21.37079);
   hmc__25->SetBinContent(16,24.35341);
   hmc__25->SetBinContent(17,19.07219);
   hmc__25->SetBinContent(18,16.57752);
   hmc__25->SetBinContent(19,15.61856);
   hmc__25->SetBinContent(20,16.32938);
   hmc__25->SetBinContent(21,16.20954);
   hmc__25->SetBinContent(22,18.0819);
   hmc__25->SetBinContent(23,12.23621);
   hmc__25->SetBinContent(24,12.56613);
   hmc__25->SetBinContent(25,2.697504);
   hmc__25->SetBinError(1,4.793251);
   hmc__25->SetBinError(2,11.1598);
   hmc__25->SetBinError(3,13.32797);
   hmc__25->SetBinError(4,15.54011);
   hmc__25->SetBinError(5,21.31414);
   hmc__25->SetBinError(6,19.40493);
   hmc__25->SetBinError(7,19.03701);
   hmc__25->SetBinError(8,15.7258);
   hmc__25->SetBinError(9,18.73938);
   hmc__25->SetBinError(10,26.77905);
   hmc__25->SetBinError(11,16.34566);
   hmc__25->SetBinError(12,15.34016);
   hmc__25->SetBinError(13,13.85111);
   hmc__25->SetBinError(14,10.66897);
   hmc__25->SetBinError(15,16.46589);
   hmc__25->SetBinError(16,12.1779);
   hmc__25->SetBinError(17,17.88722);
   hmc__25->SetBinError(18,9.109692);
   hmc__25->SetBinError(19,10.00572);
   hmc__25->SetBinError(20,8.668725);
   hmc__25->SetBinError(21,11.17401);
   hmc__25->SetBinError(22,15.23186);
   hmc__25->SetBinError(23,8.278479);
   hmc__25->SetBinError(24,9.072822);
   hmc__25->SetBinError(25,6.912219);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-0.9700722);
   hmc__25->SetMaximum(101.8576);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,3.15);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(50.92879);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,0.1106221);
   hbadmatch_stack_1->SetBinContent(3,0.500304);
   hbadmatch_stack_1->SetBinContent(4,1.236637);
   hbadmatch_stack_1->SetBinContent(5,1.070811);
   hbadmatch_stack_1->SetBinContent(6,0.5348271);
   hbadmatch_stack_1->SetBinContent(7,1.339208);
   hbadmatch_stack_1->SetBinContent(8,1.643155);
   hbadmatch_stack_1->SetBinContent(9,1.575371);
   hbadmatch_stack_1->SetBinContent(10,2.060394);
   hbadmatch_stack_1->SetBinContent(11,0.5664285);
   hbadmatch_stack_1->SetBinContent(12,2.139825);
   hbadmatch_stack_1->SetBinContent(13,1.160977);
   hbadmatch_stack_1->SetBinContent(14,0.3546466);
   hbadmatch_stack_1->SetBinContent(15,1.64416);
   hbadmatch_stack_1->SetBinContent(16,0.7704073);
   hbadmatch_stack_1->SetBinContent(17,0.4507997);
   hbadmatch_stack_1->SetBinContent(18,1.123658);
   hbadmatch_stack_1->SetBinContent(19,0.6451061);
   hbadmatch_stack_1->SetBinContent(21,1.504415);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.2193965);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.1106221);
   hbadmatch_stack_1->SetBinError(3,0.3565267);
   hbadmatch_stack_1->SetBinError(4,0.5831272);
   hbadmatch_stack_1->SetBinError(5,0.5042649);
   hbadmatch_stack_1->SetBinError(6,0.2787318);
   hbadmatch_stack_1->SetBinError(7,0.5104574);
   hbadmatch_stack_1->SetBinError(8,0.7916425);
   hbadmatch_stack_1->SetBinError(9,0.6023754);
   hbadmatch_stack_1->SetBinError(10,0.7009846);
   hbadmatch_stack_1->SetBinError(11,0.3373406);
   hbadmatch_stack_1->SetBinError(12,0.8229767);
   hbadmatch_stack_1->SetBinError(13,0.4648086);
   hbadmatch_stack_1->SetBinError(14,0.2684039);
   hbadmatch_stack_1->SetBinError(15,0.6789754);
   hbadmatch_stack_1->SetBinError(16,0.5008065);
   hbadmatch_stack_1->SetBinError(17,0.3577123);
   hbadmatch_stack_1->SetBinError(18,0.5188295);
   hbadmatch_stack_1->SetBinError(19,0.417193);
   hbadmatch_stack_1->SetBinError(21,0.6750848);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.2193965);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,4.181263);
   hext_stack_2->SetBinContent(3,6.132056);
   hext_stack_2->SetBinContent(4,5.248246);
   hext_stack_2->SetBinContent(5,3.737183);
   hext_stack_2->SetBinContent(6,5.561054);
   hext_stack_2->SetBinContent(7,8.870096);
   hext_stack_2->SetBinContent(8,2.987417);
   hext_stack_2->SetBinContent(9,4.841647);
   hext_stack_2->SetBinContent(10,2.428004);
   hext_stack_2->SetBinContent(11,3.483397);
   hext_stack_2->SetBinContent(12,5.236656);
   hext_stack_2->SetBinContent(13,5.967652);
   hext_stack_2->SetBinContent(14,2.517386);
   hext_stack_2->SetBinContent(15,2.987417);
   hext_stack_2->SetBinContent(16,5.076662);
   hext_stack_2->SetBinContent(17,1.78639);
   hext_stack_2->SetBinContent(18,1.544194);
   hext_stack_2->SetBinContent(19,0.6416141);
   hext_stack_2->SetBinContent(20,2.428004);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,5.076662);
   hext_stack_2->SetBinContent(23,0.7309963);
   hext_stack_2->SetBinContent(24,5.539512);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.540793);
   hext_stack_2->SetBinError(3,1.772165);
   hext_stack_2->SetBinError(4,1.638217);
   hext_stack_2->SetBinError(5,1.188642);
   hext_stack_2->SetBinError(6,1.689695);
   hext_stack_2->SetBinError(7,2.169382);
   hext_stack_2->SetBinError(8,1.187264);
   hext_stack_2->SetBinError(9,1.586957);
   hext_stack_2->SetBinError(10,1.028599);
   hext_stack_2->SetBinError(11,1.197416);
   hext_stack_2->SetBinError(12,1.658262);
   hext_stack_2->SetBinError(13,1.737927);
   hext_stack_2->SetBinError(14,0.9575503);
   hext_stack_2->SetBinError(15,1.187264);
   hext_stack_2->SetBinError(16,1.662762);
   hext_stack_2->SetBinError(17,0.8039566);
   hext_stack_2->SetBinError(18,0.7753719);
   hext_stack_2->SetBinError(19,0.6416141);
   hext_stack_2->SetBinError(20,1.028599);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,1.662762);
   hext_stack_2->SetBinError(23,0.5201503);
   hext_stack_2->SetBinError(24,1.859751);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.1564614);
   hdirt_stack_3->SetBinContent(5,0.4149213);
   hdirt_stack_3->SetBinContent(7,0.5265896);
   hdirt_stack_3->SetBinContent(8,0.6787259);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.8191268);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.2623434);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.2628198);
   hdirt_stack_3->SetBinContent(23,0.4289006);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(4,0.1564614);
   hdirt_stack_3->SetBinError(5,0.4149213);
   hdirt_stack_3->SetBinError(7,0.3723595);
   hdirt_stack_3->SetBinError(8,0.4782747);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.4702608);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.2623434);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(21,0.2628198);
   hdirt_stack_3->SetBinError(23,0.4289006);
   hdirt_stack_3->SetBinError(24,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,1.126311);
   houtFV_stack_4->SetBinContent(2,3.508314);
   houtFV_stack_4->SetBinContent(3,5.201767);
   houtFV_stack_4->SetBinContent(4,5.785864);
   houtFV_stack_4->SetBinContent(5,10.72803);
   houtFV_stack_4->SetBinContent(6,7.238647);
   houtFV_stack_4->SetBinContent(7,5.978372);
   houtFV_stack_4->SetBinContent(8,7.831413);
   houtFV_stack_4->SetBinContent(9,7.348358);
   houtFV_stack_4->SetBinContent(10,6.270924);
   houtFV_stack_4->SetBinContent(11,7.061239);
   houtFV_stack_4->SetBinContent(12,4.545289);
   houtFV_stack_4->SetBinContent(13,4.532827);
   houtFV_stack_4->SetBinContent(14,4.565389);
   houtFV_stack_4->SetBinContent(15,4.2457);
   houtFV_stack_4->SetBinContent(16,4.320635);
   houtFV_stack_4->SetBinContent(17,2.987535);
   houtFV_stack_4->SetBinContent(18,2.184986);
   houtFV_stack_4->SetBinContent(19,3.674016);
   houtFV_stack_4->SetBinContent(20,3.939273);
   houtFV_stack_4->SetBinContent(21,4.368793);
   houtFV_stack_4->SetBinContent(22,2.631393);
   houtFV_stack_4->SetBinContent(23,2.864921);
   houtFV_stack_4->SetBinContent(24,2.222193);
   houtFV_stack_4->SetBinContent(25,1.085076);
   houtFV_stack_4->SetBinError(1,0.5017713);
   houtFV_stack_4->SetBinError(2,1.049175);
   houtFV_stack_4->SetBinError(3,1.313474);
   houtFV_stack_4->SetBinError(4,1.134676);
   houtFV_stack_4->SetBinError(5,1.809009);
   houtFV_stack_4->SetBinError(6,1.345197);
   houtFV_stack_4->SetBinError(7,1.211949);
   houtFV_stack_4->SetBinError(8,1.348535);
   houtFV_stack_4->SetBinError(9,1.398245);
   houtFV_stack_4->SetBinError(10,1.221126);
   houtFV_stack_4->SetBinError(11,1.519344);
   houtFV_stack_4->SetBinError(12,1.10169);
   houtFV_stack_4->SetBinError(13,0.9927529);
   houtFV_stack_4->SetBinError(14,1.074694);
   houtFV_stack_4->SetBinError(15,1.020972);
   houtFV_stack_4->SetBinError(16,0.9905332);
   houtFV_stack_4->SetBinError(17,0.7634209);
   houtFV_stack_4->SetBinError(18,0.7045992);
   houtFV_stack_4->SetBinError(19,0.9564397);
   houtFV_stack_4->SetBinError(20,0.9611438);
   houtFV_stack_4->SetBinError(21,1.14642);
   houtFV_stack_4->SetBinError(22,0.9148718);
   houtFV_stack_4->SetBinError(23,0.8248919);
   houtFV_stack_4->SetBinError(24,0.7899645);
   houtFV_stack_4->SetBinError(25,0.5057272);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2724139);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1355755);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2018338);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.07733114);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2011688);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1112314);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1428088);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04882585);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05346346);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05527143);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1458081);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.04775501);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05230494);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.06494296);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02952655);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1587601);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.03723348);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03089111);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03191456);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1294588);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02830213);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03027385);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03827103);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02165026);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1138256);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02632953);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02862678);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.160519);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.956885);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.304118);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.220787);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.7335);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.921412);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.611979);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.87034);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.615079);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.28462);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.819038);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.912915);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.225774);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.133307);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.12968);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.350879);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.907698);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.119527);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.845363);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.307301);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.910197);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.154153);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.04139);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.9763635);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.01754354);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3817032);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5222708);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5957609);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8936886);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7137936);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9613299);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9489739);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7359062);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6940924);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8777816);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6860335);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6208795);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7164225);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6086217);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5947153);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4309189);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4542105);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3570079);
   hNCpi0inFVres_stack_7->SetBinError(19,0.579431);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4528134);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3455684);
   hNCpi0inFVres_stack_7->SetBinError(22,0.267915);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4395933);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2808425);
   hNCpi0inFVres_stack_7->SetBinError(25,0.01754354);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.9953313);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.680418);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.456097);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.588049);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.47297);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.927099);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.90962);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.917584);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.52133);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.172408);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.112908);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.004276);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.601836);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.258489);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.080737);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7140261);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4017564);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5912384);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4481321);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5654581);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6712168);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.178002);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.4773634);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1165029);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.01822845);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4915045);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5370979);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9787422);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8027279);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3676224);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5317045);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4406231);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4009431);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5761174);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4590865);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2484075);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3120233);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8675655);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4449891);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4263535);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2192062);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1347308);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2049855);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1654555);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.187373);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2647599);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5981519);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2339147);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06730875);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.01822846);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,1.323754);
   hCCpi0inFV_stack_10->SetBinContent(2,1.91081);
   hCCpi0inFV_stack_10->SetBinContent(3,6.421544);
   hCCpi0inFV_stack_10->SetBinContent(4,6.243208);
   hCCpi0inFV_stack_10->SetBinContent(5,8.394655);
   hCCpi0inFV_stack_10->SetBinContent(6,10.41506);
   hCCpi0inFV_stack_10->SetBinContent(7,8.697442);
   hCCpi0inFV_stack_10->SetBinContent(8,8.508678);
   hCCpi0inFV_stack_10->SetBinContent(9,9.068254);
   hCCpi0inFV_stack_10->SetBinContent(10,8.56646);
   hCCpi0inFV_stack_10->SetBinContent(11,6.539258);
   hCCpi0inFV_stack_10->SetBinContent(12,7.894762);
   hCCpi0inFV_stack_10->SetBinContent(13,7.640042);
   hCCpi0inFV_stack_10->SetBinContent(14,4.733375);
   hCCpi0inFV_stack_10->SetBinContent(15,5.068555);
   hCCpi0inFV_stack_10->SetBinContent(16,4.25094);
   hCCpi0inFV_stack_10->SetBinContent(17,3.860437);
   hCCpi0inFV_stack_10->SetBinContent(18,3.877725);
   hCCpi0inFV_stack_10->SetBinContent(19,4.010443);
   hCCpi0inFV_stack_10->SetBinContent(20,3.065221);
   hCCpi0inFV_stack_10->SetBinContent(21,3.422537);
   hCCpi0inFV_stack_10->SetBinContent(22,3.658029);
   hCCpi0inFV_stack_10->SetBinContent(23,2.539312);
   hCCpi0inFV_stack_10->SetBinContent(24,1.462145);
   hCCpi0inFV_stack_10->SetBinContent(25,0.5352025);
   hCCpi0inFV_stack_10->SetBinError(1,0.5560625);
   hCCpi0inFV_stack_10->SetBinError(2,0.6501237);
   hCCpi0inFV_stack_10->SetBinError(3,1.259774);
   hCCpi0inFV_stack_10->SetBinError(4,1.287212);
   hCCpi0inFV_stack_10->SetBinError(5,1.494665);
   hCCpi0inFV_stack_10->SetBinError(6,1.6284);
   hCCpi0inFV_stack_10->SetBinError(7,1.504137);
   hCCpi0inFV_stack_10->SetBinError(8,1.497758);
   hCCpi0inFV_stack_10->SetBinError(9,1.524693);
   hCCpi0inFV_stack_10->SetBinError(10,1.526573);
   hCCpi0inFV_stack_10->SetBinError(11,1.282148);
   hCCpi0inFV_stack_10->SetBinError(12,1.447471);
   hCCpi0inFV_stack_10->SetBinError(13,1.348037);
   hCCpi0inFV_stack_10->SetBinError(14,1.12743);
   hCCpi0inFV_stack_10->SetBinError(15,1.116678);
   hCCpi0inFV_stack_10->SetBinError(16,0.9702681);
   hCCpi0inFV_stack_10->SetBinError(17,0.930285);
   hCCpi0inFV_stack_10->SetBinError(18,1.046039);
   hCCpi0inFV_stack_10->SetBinError(19,0.9723583);
   hCCpi0inFV_stack_10->SetBinError(20,0.8403738);
   hCCpi0inFV_stack_10->SetBinError(21,0.8766773);
   hCCpi0inFV_stack_10->SetBinError(22,0.907614);
   hCCpi0inFV_stack_10->SetBinError(23,0.8333082);
   hCCpi0inFV_stack_10->SetBinError(24,0.6198731);
   hCCpi0inFV_stack_10->SetBinError(25,0.3921167);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.3235489);
   hNCinFV_stack_11->SetBinContent(3,2.557367);
   hNCinFV_stack_11->SetBinContent(4,2.221754);
   hNCinFV_stack_11->SetBinContent(5,1.653869);
   hNCinFV_stack_11->SetBinContent(6,1.862893);
   hNCinFV_stack_11->SetBinContent(7,3.016203);
   hNCinFV_stack_11->SetBinContent(8,2.05424);
   hNCinFV_stack_11->SetBinContent(9,2.442329);
   hNCinFV_stack_11->SetBinContent(10,2.239134);
   hNCinFV_stack_11->SetBinContent(11,2.540166);
   hNCinFV_stack_11->SetBinContent(12,2.05801);
   hNCinFV_stack_11->SetBinContent(13,1.499624);
   hNCinFV_stack_11->SetBinContent(14,0.5867651);
   hNCinFV_stack_11->SetBinContent(15,0.7265906);
   hNCinFV_stack_11->SetBinContent(16,0.5352025);
   hNCinFV_stack_11->SetBinContent(17,1.616907);
   hNCinFV_stack_11->SetBinContent(18,2.2977);
   hNCinFV_stack_11->SetBinContent(19,1.956225);
   hNCinFV_stack_11->SetBinContent(20,0.5867651);
   hNCinFV_stack_11->SetBinContent(21,0.3178158);
   hNCinFV_stack_11->SetBinContent(22,0.9269427);
   hNCinFV_stack_11->SetBinContent(23,1.103714);
   hNCinFV_stack_11->SetBinContent(24,0.3401776);
   hNCinFV_stack_11->SetBinContent(25,0.1236948);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.2335661);
   hNCinFV_stack_11->SetBinError(3,0.9746484);
   hNCinFV_stack_11->SetBinError(4,0.7729476);
   hNCinFV_stack_11->SetBinError(5,0.7738423);
   hNCinFV_stack_11->SetBinError(6,0.6554044);
   hNCinFV_stack_11->SetBinError(7,0.9070868);
   hNCinFV_stack_11->SetBinError(8,0.6272963);
   hNCinFV_stack_11->SetBinError(9,0.7290318);
   hNCinFV_stack_11->SetBinError(10,0.7144556);
   hNCinFV_stack_11->SetBinError(11,0.8517795);
   hNCinFV_stack_11->SetBinError(12,0.921091);
   hNCinFV_stack_11->SetBinError(13,0.5856355);
   hNCinFV_stack_11->SetBinError(14,0.3387718);
   hNCinFV_stack_11->SetBinError(15,0.3698002);
   hNCinFV_stack_11->SetBinError(16,0.3921167);
   hNCinFV_stack_11->SetBinError(17,0.7633767);
   hNCinFV_stack_11->SetBinError(18,0.8775555);
   hNCinFV_stack_11->SetBinError(19,1.102208);
   hNCinFV_stack_11->SetBinError(20,0.3387718);
   hNCinFV_stack_11->SetBinError(21,0.2310027);
   hNCinFV_stack_11->SetBinError(22,0.4800908);
   hNCinFV_stack_11->SetBinError(23,0.5558728);
   hNCinFV_stack_11->SetBinError(24,0.3401776);
   hNCinFV_stack_11->SetBinError(25,0.1236948);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,3.464947);
   hnumuCCinFV_stack_12->SetBinContent(3,3.863913);
   hnumuCCinFV_stack_12->SetBinContent(4,9.065819);
   hnumuCCinFV_stack_12->SetBinContent(5,7.436249);
   hnumuCCinFV_stack_12->SetBinContent(6,8.310084);
   hnumuCCinFV_stack_12->SetBinContent(7,9.286797);
   hnumuCCinFV_stack_12->SetBinContent(8,5.759477);
   hnumuCCinFV_stack_12->SetBinContent(9,10.35337);
   hnumuCCinFV_stack_12->SetBinContent(10,5.767478);
   hnumuCCinFV_stack_12->SetBinContent(11,9.048082);
   hnumuCCinFV_stack_12->SetBinContent(12,7.747767);
   hnumuCCinFV_stack_12->SetBinContent(13,5.980004);
   hnumuCCinFV_stack_12->SetBinContent(14,2.007555);
   hnumuCCinFV_stack_12->SetBinContent(15,1.994966);
   hnumuCCinFV_stack_12->SetBinContent(16,5.316427);
   hnumuCCinFV_stack_12->SetBinContent(17,3.419863);
   hnumuCCinFV_stack_12->SetBinContent(18,2.538968);
   hnumuCCinFV_stack_12->SetBinContent(19,1.340238);
   hnumuCCinFV_stack_12->SetBinContent(20,3.437361);
   hnumuCCinFV_stack_12->SetBinContent(21,2.537592);
   hnumuCCinFV_stack_12->SetBinContent(22,3.241697);
   hnumuCCinFV_stack_12->SetBinContent(23,2.012381);
   hnumuCCinFV_stack_12->SetBinContent(24,1.355054);
   hnumuCCinFV_stack_12->SetBinContent(25,0.692416);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,1.149974);
   hnumuCCinFV_stack_12->SetBinError(3,1.051664);
   hnumuCCinFV_stack_12->SetBinError(4,1.660483);
   hnumuCCinFV_stack_12->SetBinError(5,1.406147);
   hnumuCCinFV_stack_12->SetBinError(6,1.930135);
   hnumuCCinFV_stack_12->SetBinError(7,2.129445);
   hnumuCCinFV_stack_12->SetBinError(8,1.190636);
   hnumuCCinFV_stack_12->SetBinError(9,1.85238);
   hnumuCCinFV_stack_12->SetBinError(10,1.27543);
   hnumuCCinFV_stack_12->SetBinError(11,1.661057);
   hnumuCCinFV_stack_12->SetBinError(12,1.523191);
   hnumuCCinFV_stack_12->SetBinError(13,1.581077);
   hnumuCCinFV_stack_12->SetBinError(14,0.7335438);
   hnumuCCinFV_stack_12->SetBinError(15,0.782623);
   hnumuCCinFV_stack_12->SetBinError(16,1.409831);
   hnumuCCinFV_stack_12->SetBinError(17,1.037289);
   hnumuCCinFV_stack_12->SetBinError(18,0.7282451);
   hnumuCCinFV_stack_12->SetBinError(19,0.6848488);
   hnumuCCinFV_stack_12->SetBinError(20,0.9390885);
   hnumuCCinFV_stack_12->SetBinError(21,0.8235257);
   hnumuCCinFV_stack_12->SetBinError(22,0.9270099);
   hnumuCCinFV_stack_12->SetBinError(23,0.7288605);
   hnumuCCinFV_stack_12->SetBinError(24,0.8214865);
   hnumuCCinFV_stack_12->SetBinError(25,0.5128225);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.7539932);
   hnueCCinFV_stack_13->SetBinContent(3,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(4,0.6372864);
   hnueCCinFV_stack_13->SetBinContent(5,1.865515);
   hnueCCinFV_stack_13->SetBinContent(6,0.5846147);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(17,1.569686);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.4489435);
   hnueCCinFV_stack_13->SetBinError(3,0.1529246);
   hnueCCinFV_stack_13->SetBinError(4,0.4665552);
   hnueCCinFV_stack_13->SetBinError(5,1.234249);
   hnueCCinFV_stack_13->SetBinError(6,0.4261145);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3172361);
   hnueCCinFV_stack_13->SetBinError(17,1.569686);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__26->SetBinContent(1,6.30171);
   hmcerror__26->SetBinContent(2,18.54729);
   hmcerror__26->SetBinContent(3,32.85959);
   hmcerror__26->SetBinContent(4,41.59254);
   hmcerror__26->SetBinContent(5,43.71661);
   hmcerror__26->SetBinContent(6,45.4487);
   hmcerror__26->SetBinContent(7,48.50361);
   hmcerror__26->SetBinContent(8,38.2819);
   hmcerror__26->SetBinContent(9,44.12641);
   hmcerror__26->SetBinContent(10,37.66382);
   hmcerror__26->SetBinContent(11,36.51942);
   hmcerror__26->SetBinContent(12,37.08891);
   hmcerror__26->SetBinContent(13,34.66857);
   hmcerror__26->SetBinContent(14,20.15691);
   hmcerror__26->SetBinContent(15,21.37079);
   hmcerror__26->SetBinContent(16,24.35341);
   hmcerror__26->SetBinContent(17,19.07219);
   hmcerror__26->SetBinContent(18,16.57752);
   hmcerror__26->SetBinContent(19,15.61856);
   hmcerror__26->SetBinContent(20,16.32938);
   hmcerror__26->SetBinContent(21,16.20954);
   hmcerror__26->SetBinContent(22,18.0819);
   hmcerror__26->SetBinContent(23,12.23621);
   hmcerror__26->SetBinContent(24,12.56613);
   hmcerror__26->SetBinContent(25,2.697504);
   hmcerror__26->SetBinError(1,4.793251);
   hmcerror__26->SetBinError(2,11.1598);
   hmcerror__26->SetBinError(3,13.32797);
   hmcerror__26->SetBinError(4,15.54011);
   hmcerror__26->SetBinError(5,21.31414);
   hmcerror__26->SetBinError(6,19.40493);
   hmcerror__26->SetBinError(7,19.03701);
   hmcerror__26->SetBinError(8,15.7258);
   hmcerror__26->SetBinError(9,18.73938);
   hmcerror__26->SetBinError(10,26.77905);
   hmcerror__26->SetBinError(11,16.34566);
   hmcerror__26->SetBinError(12,15.34016);
   hmcerror__26->SetBinError(13,13.85111);
   hmcerror__26->SetBinError(14,10.66897);
   hmcerror__26->SetBinError(15,16.46589);
   hmcerror__26->SetBinError(16,12.1779);
   hmcerror__26->SetBinError(17,17.88722);
   hmcerror__26->SetBinError(18,9.109692);
   hmcerror__26->SetBinError(19,10.00572);
   hmcerror__26->SetBinError(20,8.668725);
   hmcerror__26->SetBinError(21,11.17401);
   hmcerror__26->SetBinError(22,15.23186);
   hmcerror__26->SetBinError(23,8.278479);
   hmcerror__26->SetBinError(24,9.072822);
   hmcerror__26->SetBinError(25,6.912219);
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
   Double_t _fy3033[25] = {
   5,
   26,
   29,
   30,
   35,
   39,
   44,
   39,
   40,
   30,
   29,
   25,
   22,
   27,
   20,
   15,
   18,
   18,
   20,
   16,
   22,
   15,
   10,
   8,
   3};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   2.48995,
   5.2453,
   5.5285,
   5.6197,
   6.0548,
   6.3813,
   6.7671,
   6.3813,
   6.4604,
   5.6197,
   5.5285,
   5.1474,
   4.8417,
   5.3414,
   4.6266,
   4.0385,
   4.4008,
   4.4008,
   4.6266,
   4.1628,
   4.8417,
   4.0385,
   3.34883,
   3.0307,
   2.143368};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   2.21064,
   5.0358,
   5.3201,
   5.4117,
   5.8483,
   6.1757,
   6.5623,
   6.1757,
   6.2549,
   5.4117,
   5.3201,
   4.9374,
   4.6299,
   5.1322,
   4.4133,
   3.8197,
   4.1858,
   4.1858,
   4.4133,
   3.9454,
   4.6299,
   3.8197,
   3.1179,
   2.7896,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,3.465);
   Graph_Graph3033->SetMinimum(0.7709688);
   Graph_Graph3033->SetMaximum(55.53287);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.1/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
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
   Double_t _fely3034[25] = {
   0.7606269,
   0.6016942,
   0.4056037,
   0.3736274,
   0.4875526,
   0.4269633,
   0.3924864,
   0.4107893,
   0.424675,
   0.7110018,
   0.4475883,
   0.4136051,
   0.3995294,
   0.5292959,
   0.7704858,
   0.500049,
   0.937869,
   0.5495207,
   0.6406301,
   0.5308666,
   0.6893476,
   0.8423817,
   0.6765557,
   0.722006,
   2.56245};
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   0.7606269,
   0.6016942,
   0.4056037,
   0.3736274,
   0.4875526,
   0.4269633,
   0.3924864,
   0.4107893,
   0.424675,
   0.7110018,
   0.4475883,
   0.4136051,
   0.3995294,
   0.5292959,
   0.7704858,
   0.500049,
   0.937869,
   0.5495207,
   0.6406301,
   0.5308666,
   0.6893476,
   0.8423817,
   0.6765557,
   0.722006,
   2.56245};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,3.465);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
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
   Double_t _fely3035[25] = {
   0.3006502,
   0.2297532,
   0.2217523,
   0.2254293,
   0.2687269,
   0.2579811,
   0.2511756,
   0.275791,
   0.2675836,
   0.2950351,
   0.2944786,
   0.2363995,
   0.2701007,
   0.3294927,
   0.2806575,
   0.2732626,
   0.3644063,
   0.3319753,
   0.3040861,
   0.2949577,
   0.3060672,
   0.1986497,
   0.3018999,
   0.2438278,
   0.5593242};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0.3006502,
   0.2297532,
   0.2217523,
   0.2254293,
   0.2687269,
   0.2579811,
   0.2511756,
   0.275791,
   0.2675836,
   0.2950351,
   0.2944786,
   0.2363995,
   0.2701007,
   0.3294927,
   0.2806575,
   0.2732626,
   0.3644063,
   0.3319753,
   0.3040861,
   0.2949577,
   0.3060672,
   0.1986497,
   0.3018999,
   0.2438278,
   0.5593242};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,3.465);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3036[25] = {
   0.7934354,
   1.401822,
   0.882543,
   0.7212832,
   0.8006111,
   0.8581103,
   0.907149,
   1.018758,
   0.9064866,
   0.7965203,
   0.7940981,
   0.6740559,
   0.6345805,
   1.339491,
   0.9358567,
   0.6159302,
   0.9437825,
   1.085807,
   1.280527,
   0.9798288,
   1.357225,
   0.8295587,
   0.8172464,
   0.6366319,
   1.112139};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
   0.3951229,
   0.2828068,
   0.1682462,
   0.1351132,
   0.1385011,
   0.1404066,
   0.1395175,
   0.1666923,
   0.1464066,
   0.1492068,
   0.1513852,
   0.1387854,
   0.1396567,
   0.264991,
   0.2164917,
   0.165829,
   0.2307443,
   0.2654679,
   0.2962244,
   0.2549269,
   0.2986945,
   0.2233448,
   0.2736819,
   0.24118,
   0.7945746};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
   0.3508,
   0.2715113,
   0.161904,
   0.1301123,
   0.1337775,
   0.1358829,
   0.1352951,
   0.1613217,
   0.1417496,
   0.1436843,
   0.1456787,
   0.1331233,
   0.1335475,
   0.2546124,
   0.2065108,
   0.1568446,
   0.2194714,
   0.2524985,
   0.2825676,
   0.2416135,
   0.2856281,
   0.2112444,
   0.2548093,
   0.2219935,
   0.6391909};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,3.465);
   Graph_Graph3036->SetMinimum(0.1741882);
   Graph_Graph3036->SetMaximum(1.894707);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 17:14:59 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-7.332684,3.553846,810.8404);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__10->SetBinContent(1,60.87156);
   hmc__10->SetBinContent(2,192.6716);
   hmc__10->SetBinContent(3,281.1126);
   hmc__10->SetBinContent(4,345.2632);
   hmc__10->SetBinContent(5,360.1895);
   hmc__10->SetBinContent(6,366.6342);
   hmc__10->SetBinContent(7,347.8939);
   hmc__10->SetBinContent(8,322.2529);
   hmc__10->SetBinContent(9,295.3461);
   hmc__10->SetBinContent(10,266.2503);
   hmc__10->SetBinContent(11,238.2723);
   hmc__10->SetBinContent(12,228.8249);
   hmc__10->SetBinContent(13,191.5232);
   hmc__10->SetBinContent(14,167.5562);
   hmc__10->SetBinContent(15,178.7768);
   hmc__10->SetBinContent(16,164.7346);
   hmc__10->SetBinContent(17,144.1858);
   hmc__10->SetBinContent(18,141.6688);
   hmc__10->SetBinContent(19,135.1338);
   hmc__10->SetBinContent(20,134.6506);
   hmc__10->SetBinContent(21,108.9928);
   hmc__10->SetBinContent(22,89.84911);
   hmc__10->SetBinContent(23,54.24902);
   hmc__10->SetBinContent(24,20.3594);
   hmc__10->SetBinError(1,18.64897);
   hmc__10->SetBinError(2,47.05356);
   hmc__10->SetBinError(3,69.68048);
   hmc__10->SetBinError(4,82.32891);
   hmc__10->SetBinError(5,86.60455);
   hmc__10->SetBinError(6,89.34284);
   hmc__10->SetBinError(7,86.45278);
   hmc__10->SetBinError(8,78.92143);
   hmc__10->SetBinError(9,71.34484);
   hmc__10->SetBinError(10,63.7421);
   hmc__10->SetBinError(11,62.18142);
   hmc__10->SetBinError(12,57.82069);
   hmc__10->SetBinError(13,49.93916);
   hmc__10->SetBinError(14,51.82389);
   hmc__10->SetBinError(15,50.66869);
   hmc__10->SetBinError(16,54.79064);
   hmc__10->SetBinError(17,37.70647);
   hmc__10->SetBinError(18,38.87652);
   hmc__10->SetBinError(19,36.47684);
   hmc__10->SetBinError(20,38.1105);
   hmc__10->SetBinError(21,32.83738);
   hmc__10->SetBinError(22,26.62866);
   hmc__10->SetBinError(23,18.57642);
   hmc__10->SetBinError(24,16.14635);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-7.332684);
   hmc__10->SetMaximum(769.9318);
   hmc__10->SetEntries(4778.995);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,3.15);
   hs4_stack_4->SetMinimum(-1.479728e-08);
   hs4_stack_4->SetMaximum(384.9659);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,3.618921);
   hbadmatch_stack_1->SetBinContent(3,7.765973);
   hbadmatch_stack_1->SetBinContent(4,7.581198);
   hbadmatch_stack_1->SetBinContent(5,10.44507);
   hbadmatch_stack_1->SetBinContent(6,8.756252);
   hbadmatch_stack_1->SetBinContent(7,6.93437);
   hbadmatch_stack_1->SetBinContent(8,9.357114);
   hbadmatch_stack_1->SetBinContent(9,9.026822);
   hbadmatch_stack_1->SetBinContent(10,5.641519);
   hbadmatch_stack_1->SetBinContent(11,6.847483);
   hbadmatch_stack_1->SetBinContent(12,5.172597);
   hbadmatch_stack_1->SetBinContent(13,6.118442);
   hbadmatch_stack_1->SetBinContent(14,2.30269);
   hbadmatch_stack_1->SetBinContent(15,5.797001);
   hbadmatch_stack_1->SetBinContent(16,6.055015);
   hbadmatch_stack_1->SetBinContent(17,2.894577);
   hbadmatch_stack_1->SetBinContent(18,3.978399);
   hbadmatch_stack_1->SetBinContent(19,4.928216);
   hbadmatch_stack_1->SetBinContent(20,2.709817);
   hbadmatch_stack_1->SetBinContent(21,2.204452);
   hbadmatch_stack_1->SetBinContent(22,1.628176);
   hbadmatch_stack_1->SetBinContent(23,2.461105);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.9322176);
   hbadmatch_stack_1->SetBinError(3,1.579392);
   hbadmatch_stack_1->SetBinError(4,1.420822);
   hbadmatch_stack_1->SetBinError(5,1.850057);
   hbadmatch_stack_1->SetBinError(6,1.561504);
   hbadmatch_stack_1->SetBinError(7,1.366855);
   hbadmatch_stack_1->SetBinError(8,1.634059);
   hbadmatch_stack_1->SetBinError(9,2.146803);
   hbadmatch_stack_1->SetBinError(10,1.271632);
   hbadmatch_stack_1->SetBinError(11,1.342874);
   hbadmatch_stack_1->SetBinError(12,1.169751);
   hbadmatch_stack_1->SetBinError(13,1.325057);
   hbadmatch_stack_1->SetBinError(14,0.7502343);
   hbadmatch_stack_1->SetBinError(15,2.236273);
   hbadmatch_stack_1->SetBinError(16,2.000822);
   hbadmatch_stack_1->SetBinError(17,0.9209127);
   hbadmatch_stack_1->SetBinError(18,1.071181);
   hbadmatch_stack_1->SetBinError(19,1.212545);
   hbadmatch_stack_1->SetBinError(20,0.8033563);
   hbadmatch_stack_1->SetBinError(21,0.7608678);
   hbadmatch_stack_1->SetBinError(22,0.8116161);
   hbadmatch_stack_1->SetBinError(23,1.121656);
   hbadmatch_stack_1->SetEntries(466);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,6.075805);
   hext_stack_2->SetBinContent(2,17.73861);
   hext_stack_2->SetBinContent(3,21.80737);
   hext_stack_2->SetBinContent(4,28.11101);
   hext_stack_2->SetBinContent(5,31.65784);
   hext_stack_2->SetBinContent(6,33.16292);
   hext_stack_2->SetBinContent(7,34.5846);
   hext_stack_2->SetBinContent(8,29.72859);
   hext_stack_2->SetBinContent(9,29.58018);
   hext_stack_2->SetBinContent(10,29.15205);
   hext_stack_2->SetBinContent(11,21.98614);
   hext_stack_2->SetBinContent(12,29.22984);
   hext_stack_2->SetBinContent(13,28.08065);
   hext_stack_2->SetBinContent(14,17.21668);
   hext_stack_2->SetBinContent(15,23.89221);
   hext_stack_2->SetBinContent(16,25.12637);
   hext_stack_2->SetBinContent(17,15.48219);
   hext_stack_2->SetBinContent(18,11.84598);
   hext_stack_2->SetBinContent(19,13.23295);
   hext_stack_2->SetBinContent(20,11.50722);
   hext_stack_2->SetBinContent(21,11.17124);
   hext_stack_2->SetBinContent(22,6.806801);
   hext_stack_2->SetBinContent(23,3.069618);
   hext_stack_2->SetBinContent(24,3.558419);
   hext_stack_2->SetBinError(1,1.616168);
   hext_stack_2->SetBinError(2,2.758728);
   hext_stack_2->SetBinError(3,2.98789);
   hext_stack_2->SetBinError(4,3.462229);
   hext_stack_2->SetBinError(5,3.707857);
   hext_stack_2->SetBinError(6,3.61692);
   hext_stack_2->SetBinError(7,3.807112);
   hext_stack_2->SetBinError(8,3.518249);
   hext_stack_2->SetBinError(9,3.510974);
   hext_stack_2->SetBinError(10,3.572845);
   hext_stack_2->SetBinError(11,2.940282);
   hext_stack_2->SetBinError(12,3.562329);
   hext_stack_2->SetBinError(13,3.510041);
   hext_stack_2->SetBinError(14,2.838107);
   hext_stack_2->SetBinError(15,3.185521);
   hext_stack_2->SetBinError(16,3.200174);
   hext_stack_2->SetBinError(17,2.543923);
   hext_stack_2->SetBinError(18,2.202608);
   hext_stack_2->SetBinError(19,2.265238);
   hext_stack_2->SetBinError(20,2.269064);
   hext_stack_2->SetBinError(21,2.260419);
   hext_stack_2->SetBinError(22,1.697809);
   hext_stack_2->SetBinError(23,1.212305);
   hext_stack_2->SetBinError(24,1.301958);
   hext_stack_2->SetEntries(1214);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.566992);
   hdirt_stack_3->SetBinContent(3,1.728496);
   hdirt_stack_3->SetBinContent(4,4.331312);
   hdirt_stack_3->SetBinContent(5,2.31833);
   hdirt_stack_3->SetBinContent(6,4.665369);
   hdirt_stack_3->SetBinContent(7,5.271873);
   hdirt_stack_3->SetBinContent(8,4.156616);
   hdirt_stack_3->SetBinContent(9,5.349704);
   hdirt_stack_3->SetBinContent(10,4.860586);
   hdirt_stack_3->SetBinContent(11,3.324513);
   hdirt_stack_3->SetBinContent(12,2.475766);
   hdirt_stack_3->SetBinContent(13,2.377454);
   hdirt_stack_3->SetBinContent(14,1.309016);
   hdirt_stack_3->SetBinContent(15,2.115194);
   hdirt_stack_3->SetBinContent(16,3.094118);
   hdirt_stack_3->SetBinContent(17,1.685231);
   hdirt_stack_3->SetBinContent(18,1.84688);
   hdirt_stack_3->SetBinContent(19,3.765049);
   hdirt_stack_3->SetBinContent(20,1.456941);
   hdirt_stack_3->SetBinContent(21,1.51498);
   hdirt_stack_3->SetBinContent(22,1.763973);
   hdirt_stack_3->SetBinContent(23,1.114166);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.8626343);
   hdirt_stack_3->SetBinError(3,0.6907024);
   hdirt_stack_3->SetBinError(4,1.119122);
   hdirt_stack_3->SetBinError(5,0.7151435);
   hdirt_stack_3->SetBinError(6,1.152777);
   hdirt_stack_3->SetBinError(7,1.237543);
   hdirt_stack_3->SetBinError(8,1.338133);
   hdirt_stack_3->SetBinError(9,1.179755);
   hdirt_stack_3->SetBinError(10,1.658683);
   hdirt_stack_3->SetBinError(11,0.9546654);
   hdirt_stack_3->SetBinError(12,0.8068456);
   hdirt_stack_3->SetBinError(13,0.7817256);
   hdirt_stack_3->SetBinError(14,0.5734455);
   hdirt_stack_3->SetBinError(15,0.7508688);
   hdirt_stack_3->SetBinError(16,0.9400663);
   hdirt_stack_3->SetBinError(17,0.5945041);
   hdirt_stack_3->SetBinError(18,0.6412006);
   hdirt_stack_3->SetBinError(19,1.163456);
   hdirt_stack_3->SetBinError(20,0.5800707);
   hdirt_stack_3->SetBinError(21,0.5463913);
   hdirt_stack_3->SetBinError(22,0.7249304);
   hdirt_stack_3->SetBinError(23,0.569712);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetEntries(263);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,6.144772);
   houtFV_stack_4->SetBinContent(2,18.77526);
   houtFV_stack_4->SetBinContent(3,31.57683);
   houtFV_stack_4->SetBinContent(4,41.10629);
   houtFV_stack_4->SetBinContent(5,41.33457);
   houtFV_stack_4->SetBinContent(6,43.69327);
   houtFV_stack_4->SetBinContent(7,38.0276);
   houtFV_stack_4->SetBinContent(8,39.69796);
   houtFV_stack_4->SetBinContent(9,30.03126);
   houtFV_stack_4->SetBinContent(10,28.27427);
   houtFV_stack_4->SetBinContent(11,26.15104);
   houtFV_stack_4->SetBinContent(12,29.15641);
   houtFV_stack_4->SetBinContent(13,18.49599);
   houtFV_stack_4->SetBinContent(14,18.69676);
   houtFV_stack_4->SetBinContent(15,21.6083);
   houtFV_stack_4->SetBinContent(16,23.69375);
   houtFV_stack_4->SetBinContent(17,20.45842);
   houtFV_stack_4->SetBinContent(18,20.92703);
   houtFV_stack_4->SetBinContent(19,21.02454);
   houtFV_stack_4->SetBinContent(20,28.85781);
   houtFV_stack_4->SetBinContent(21,16.29686);
   houtFV_stack_4->SetBinContent(22,10.60018);
   houtFV_stack_4->SetBinContent(23,10.42501);
   houtFV_stack_4->SetBinContent(24,2.197444);
   houtFV_stack_4->SetBinError(1,1.283289);
   houtFV_stack_4->SetBinError(2,2.193464);
   houtFV_stack_4->SetBinError(3,2.839524);
   houtFV_stack_4->SetBinError(4,3.359823);
   houtFV_stack_4->SetBinError(5,3.188142);
   houtFV_stack_4->SetBinError(6,3.28695);
   houtFV_stack_4->SetBinError(7,3.075326);
   houtFV_stack_4->SetBinError(8,3.176469);
   houtFV_stack_4->SetBinError(9,2.733817);
   houtFV_stack_4->SetBinError(10,2.755456);
   houtFV_stack_4->SetBinError(11,2.616026);
   houtFV_stack_4->SetBinError(12,2.954823);
   houtFV_stack_4->SetBinError(13,2.164857);
   houtFV_stack_4->SetBinError(14,2.121835);
   houtFV_stack_4->SetBinError(15,2.353652);
   houtFV_stack_4->SetBinError(16,2.42436);
   houtFV_stack_4->SetBinError(17,2.186258);
   houtFV_stack_4->SetBinError(18,2.268356);
   houtFV_stack_4->SetBinError(19,2.237127);
   houtFV_stack_4->SetBinError(20,2.805712);
   houtFV_stack_4->SetBinError(21,1.98017);
   houtFV_stack_4->SetBinError(22,1.594888);
   houtFV_stack_4->SetBinError(23,1.653837);
   houtFV_stack_4->SetBinError(24,0.760276);
   houtFV_stack_4->SetEntries(2510);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.110366);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,8.158298);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,11.0154);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.32221);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.23876);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.91243);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.944547);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.734558);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.463768);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.837014);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.915562);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.30517);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.190826);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.454216);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.244466);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.046254);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.618544);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.589476);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.948272);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.729976);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.840744);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.630994);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.239394);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6141361);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5914701);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9822384);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.082042);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.090907);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.099909);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.002535);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.851376);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8725244);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7321707);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7059183);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5460186);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6336697);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5142032);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5527492);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5231453);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3185193);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5051672);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4118635);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3247714);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4749196);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4575982);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4213615);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3385597);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2874767);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.505944);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.171472);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9474399);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.296858);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.501704);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8934723);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4472753);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3342211);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2936159);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3933343);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2454852);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3948984);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(258);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,19.63271);
   hNCpi0inFVres_stack_7->SetBinContent(2,58.89829);
   hNCpi0inFVres_stack_7->SetBinContent(3,97.92723);
   hNCpi0inFVres_stack_7->SetBinContent(4,119.6717);
   hNCpi0inFVres_stack_7->SetBinContent(5,127.9649);
   hNCpi0inFVres_stack_7->SetBinContent(6,128.0049);
   hNCpi0inFVres_stack_7->SetBinContent(7,124.0608);
   hNCpi0inFVres_stack_7->SetBinContent(8,113.4498);
   hNCpi0inFVres_stack_7->SetBinContent(9,110.3773);
   hNCpi0inFVres_stack_7->SetBinContent(10,97.44435);
   hNCpi0inFVres_stack_7->SetBinContent(11,82.955);
   hNCpi0inFVres_stack_7->SetBinContent(12,84.61325);
   hNCpi0inFVres_stack_7->SetBinContent(13,73.23033);
   hNCpi0inFVres_stack_7->SetBinContent(14,65.43375);
   hNCpi0inFVres_stack_7->SetBinContent(15,58.53346);
   hNCpi0inFVres_stack_7->SetBinContent(16,53.76099);
   hNCpi0inFVres_stack_7->SetBinContent(17,50.32732);
   hNCpi0inFVres_stack_7->SetBinContent(18,51.38421);
   hNCpi0inFVres_stack_7->SetBinContent(19,45.88421);
   hNCpi0inFVres_stack_7->SetBinContent(20,43.40998);
   hNCpi0inFVres_stack_7->SetBinContent(21,34.79923);
   hNCpi0inFVres_stack_7->SetBinContent(22,28.00193);
   hNCpi0inFVres_stack_7->SetBinContent(23,17.42844);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.763627);
   hNCpi0inFVres_stack_7->SetBinError(1,1.450231);
   hNCpi0inFVres_stack_7->SetBinError(2,2.489527);
   hNCpi0inFVres_stack_7->SetBinError(3,3.237428);
   hNCpi0inFVres_stack_7->SetBinError(4,3.576867);
   hNCpi0inFVres_stack_7->SetBinError(5,3.732921);
   hNCpi0inFVres_stack_7->SetBinError(6,3.64433);
   hNCpi0inFVres_stack_7->SetBinError(7,3.634161);
   hNCpi0inFVres_stack_7->SetBinError(8,3.476651);
   hNCpi0inFVres_stack_7->SetBinError(9,3.480484);
   hNCpi0inFVres_stack_7->SetBinError(10,3.179271);
   hNCpi0inFVres_stack_7->SetBinError(11,2.976055);
   hNCpi0inFVres_stack_7->SetBinError(12,3.032037);
   hNCpi0inFVres_stack_7->SetBinError(13,2.815933);
   hNCpi0inFVres_stack_7->SetBinError(14,2.685487);
   hNCpi0inFVres_stack_7->SetBinError(15,2.53327);
   hNCpi0inFVres_stack_7->SetBinError(16,2.309507);
   hNCpi0inFVres_stack_7->SetBinError(17,2.314334);
   hNCpi0inFVres_stack_7->SetBinError(18,2.365948);
   hNCpi0inFVres_stack_7->SetBinError(19,2.1734);
   hNCpi0inFVres_stack_7->SetBinError(20,2.166533);
   hNCpi0inFVres_stack_7->SetBinError(21,1.873874);
   hNCpi0inFVres_stack_7->SetBinError(22,1.784544);
   hNCpi0inFVres_stack_7->SetBinError(23,1.365427);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9202506);
   hNCpi0inFVres_stack_7->SetEntries(31278);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.55146);
   hNCpi0inFVdis_stack_8->SetBinContent(2,17.00064);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.89619);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.0326);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.83982);
   hNCpi0inFVdis_stack_8->SetBinContent(6,30.06204);
   hNCpi0inFVdis_stack_8->SetBinContent(7,26.1439);
   hNCpi0inFVdis_stack_8->SetBinContent(8,26.64811);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.51961);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.61328);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.17295);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.37403);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.54841);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.12567);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.38017);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.173987);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.492594);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.798334);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.081471);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.516006);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.305007);
   hNCpi0inFVdis_stack_8->SetBinContent(22,5.353663);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.440926);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.22644);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7758745);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.405229);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.569725);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.475814);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.628245);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.795795);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.680918);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.757292);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.396337);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.380945);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.451082);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.185049);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.162919);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.095862);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.152582);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9873757);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.935872);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9716806);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7921322);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9269921);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8361928);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7339849);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4683861);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.306585);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(15);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,10.35844);
   hCCpi0inFV_stack_10->SetBinContent(2,31.48515);
   hCCpi0inFV_stack_10->SetBinContent(3,40.87896);
   hCCpi0inFV_stack_10->SetBinContent(4,52.39239);
   hCCpi0inFV_stack_10->SetBinContent(5,55.49635);
   hCCpi0inFV_stack_10->SetBinContent(6,57.0236);
   hCCpi0inFV_stack_10->SetBinContent(7,53.46254);
   hCCpi0inFV_stack_10->SetBinContent(8,50.62727);
   hCCpi0inFV_stack_10->SetBinContent(9,43.83183);
   hCCpi0inFV_stack_10->SetBinContent(10,41.23627);
   hCCpi0inFV_stack_10->SetBinContent(11,37.81852);
   hCCpi0inFV_stack_10->SetBinContent(12,31.53033);
   hCCpi0inFV_stack_10->SetBinContent(13,24.94048);
   hCCpi0inFV_stack_10->SetBinContent(14,23.28021);
   hCCpi0inFV_stack_10->SetBinContent(15,25.59416);
   hCCpi0inFV_stack_10->SetBinContent(16,22.6739);
   hCCpi0inFV_stack_10->SetBinContent(17,20.46858);
   hCCpi0inFV_stack_10->SetBinContent(18,23.02232);
   hCCpi0inFV_stack_10->SetBinContent(19,20.73401);
   hCCpi0inFV_stack_10->SetBinContent(20,16.92534);
   hCCpi0inFV_stack_10->SetBinContent(21,17.93265);
   hCCpi0inFV_stack_10->SetBinContent(22,15.60733);
   hCCpi0inFV_stack_10->SetBinContent(23,7.658187);
   hCCpi0inFV_stack_10->SetBinContent(24,2.984305);
   hCCpi0inFV_stack_10->SetBinError(1,1.575328);
   hCCpi0inFV_stack_10->SetBinError(2,2.834652);
   hCCpi0inFV_stack_10->SetBinError(3,3.133395);
   hCCpi0inFV_stack_10->SetBinError(4,3.710313);
   hCCpi0inFV_stack_10->SetBinError(5,3.699897);
   hCCpi0inFV_stack_10->SetBinError(6,3.777469);
   hCCpi0inFV_stack_10->SetBinError(7,3.694934);
   hCCpi0inFV_stack_10->SetBinError(8,3.5608);
   hCCpi0inFV_stack_10->SetBinError(9,3.340509);
   hCCpi0inFV_stack_10->SetBinError(10,3.197849);
   hCCpi0inFV_stack_10->SetBinError(11,3.095529);
   hCCpi0inFV_stack_10->SetBinError(12,2.861246);
   hCCpi0inFV_stack_10->SetBinError(13,2.562379);
   hCCpi0inFV_stack_10->SetBinError(14,2.385866);
   hCCpi0inFV_stack_10->SetBinError(15,2.540632);
   hCCpi0inFV_stack_10->SetBinError(16,2.373131);
   hCCpi0inFV_stack_10->SetBinError(17,2.289023);
   hCCpi0inFV_stack_10->SetBinError(18,2.392984);
   hCCpi0inFV_stack_10->SetBinError(19,2.260087);
   hCCpi0inFV_stack_10->SetBinError(20,1.95232);
   hCCpi0inFV_stack_10->SetBinError(21,2.132264);
   hCCpi0inFV_stack_10->SetBinError(22,1.995895);
   hCCpi0inFV_stack_10->SetBinError(23,1.328449);
   hCCpi0inFV_stack_10->SetBinError(24,0.8560416);
   hCCpi0inFV_stack_10->SetEntries(3118);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.758251);
   hNCinFV_stack_11->SetBinContent(2,13.8213);
   hNCinFV_stack_11->SetBinContent(3,20.26848);
   hNCinFV_stack_11->SetBinContent(4,24.62641);
   hNCinFV_stack_11->SetBinContent(5,20.67145);
   hNCinFV_stack_11->SetBinContent(6,24.4471);
   hNCinFV_stack_11->SetBinContent(7,22.33861);
   hNCinFV_stack_11->SetBinContent(8,15.20338);
   hNCinFV_stack_11->SetBinContent(9,19.15098);
   hNCinFV_stack_11->SetBinContent(10,15.09965);
   hNCinFV_stack_11->SetBinContent(11,19.63692);
   hNCinFV_stack_11->SetBinContent(12,11.98202);
   hNCinFV_stack_11->SetBinContent(13,10.32485);
   hNCinFV_stack_11->SetBinContent(14,13.43125);
   hNCinFV_stack_11->SetBinContent(15,11.57906);
   hNCinFV_stack_11->SetBinContent(16,10.17125);
   hNCinFV_stack_11->SetBinContent(17,11.07912);
   hNCinFV_stack_11->SetBinContent(18,9.18429);
   hNCinFV_stack_11->SetBinContent(19,7.567456);
   hNCinFV_stack_11->SetBinContent(20,8.111112);
   hNCinFV_stack_11->SetBinContent(21,7.277759);
   hNCinFV_stack_11->SetBinContent(22,6.451643);
   hNCinFV_stack_11->SetBinContent(23,4.979962);
   hNCinFV_stack_11->SetBinContent(24,1.570342);
   hNCinFV_stack_11->SetBinError(1,1.039675);
   hNCinFV_stack_11->SetBinError(2,1.882348);
   hNCinFV_stack_11->SetBinError(3,2.280264);
   hNCinFV_stack_11->SetBinError(4,2.490375);
   hNCinFV_stack_11->SetBinError(5,2.254406);
   hNCinFV_stack_11->SetBinError(6,2.523844);
   hNCinFV_stack_11->SetBinError(7,2.313687);
   hNCinFV_stack_11->SetBinError(8,1.953483);
   hNCinFV_stack_11->SetBinError(9,2.175877);
   hNCinFV_stack_11->SetBinError(10,1.922355);
   hNCinFV_stack_11->SetBinError(11,2.264172);
   hNCinFV_stack_11->SetBinError(12,1.69988);
   hNCinFV_stack_11->SetBinError(13,1.570769);
   hNCinFV_stack_11->SetBinError(14,1.862032);
   hNCinFV_stack_11->SetBinError(15,1.734027);
   hNCinFV_stack_11->SetBinError(16,1.544771);
   hNCinFV_stack_11->SetBinError(17,1.733814);
   hNCinFV_stack_11->SetBinError(18,1.480374);
   hNCinFV_stack_11->SetBinError(19,1.387167);
   hNCinFV_stack_11->SetBinError(20,1.442671);
   hNCinFV_stack_11->SetBinError(21,1.402671);
   hNCinFV_stack_11->SetBinError(22,1.208194);
   hNCinFV_stack_11->SetBinError(23,1.127006);
   hNCinFV_stack_11->SetBinError(24,0.5552036);
   hNCinFV_stack_11->SetEntries(1336);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.048929);
   hnumuCCinFV_stack_12->SetBinContent(2,16.48694);
   hnumuCCinFV_stack_12->SetBinContent(3,19.95678);
   hnumuCCinFV_stack_12->SetBinContent(4,27.04621);
   hnumuCCinFV_stack_12->SetBinContent(5,29.13525);
   hnumuCCinFV_stack_12->SetBinContent(6,23.15584);
   hnumuCCinFV_stack_12->SetBinContent(7,24.64734);
   hnumuCCinFV_stack_12->SetBinContent(8,23.53795);
   hnumuCCinFV_stack_12->SetBinContent(9,20.77733);
   hnumuCCinFV_stack_12->SetBinContent(10,19.6511);
   hnumuCCinFV_stack_12->SetBinContent(11,17.38338);
   hnumuCCinFV_stack_12->SetBinContent(12,14.32176);
   hnumuCCinFV_stack_12->SetBinContent(13,12.7971);
   hnumuCCinFV_stack_12->SetBinContent(14,11.60751);
   hnumuCCinFV_stack_12->SetBinContent(15,13.41306);
   hnumuCCinFV_stack_12->SetBinContent(16,8.136786);
   hnumuCCinFV_stack_12->SetBinContent(17,11.34298);
   hnumuCCinFV_stack_12->SetBinContent(18,7.531546);
   hnumuCCinFV_stack_12->SetBinContent(19,8.164144);
   hnumuCCinFV_stack_12->SetBinContent(20,9.826305);
   hnumuCCinFV_stack_12->SetBinContent(21,8.244303);
   hnumuCCinFV_stack_12->SetBinContent(22,10.63065);
   hnumuCCinFV_stack_12->SetBinContent(23,2.658221);
   hnumuCCinFV_stack_12->SetBinContent(24,1.250815);
   hnumuCCinFV_stack_12->SetBinError(1,1.026222);
   hnumuCCinFV_stack_12->SetBinError(2,2.101575);
   hnumuCCinFV_stack_12->SetBinError(3,2.31015);
   hnumuCCinFV_stack_12->SetBinError(4,3.013056);
   hnumuCCinFV_stack_12->SetBinError(5,3.128521);
   hnumuCCinFV_stack_12->SetBinError(6,3.268621);
   hnumuCCinFV_stack_12->SetBinError(7,2.778927);
   hnumuCCinFV_stack_12->SetBinError(8,2.514706);
   hnumuCCinFV_stack_12->SetBinError(9,2.60266);
   hnumuCCinFV_stack_12->SetBinError(10,2.687188);
   hnumuCCinFV_stack_12->SetBinError(11,2.41701);
   hnumuCCinFV_stack_12->SetBinError(12,2.223561);
   hnumuCCinFV_stack_12->SetBinError(13,1.890363);
   hnumuCCinFV_stack_12->SetBinError(14,2.006805);
   hnumuCCinFV_stack_12->SetBinError(15,2.258922);
   hnumuCCinFV_stack_12->SetBinError(16,1.496004);
   hnumuCCinFV_stack_12->SetBinError(17,2.168499);
   hnumuCCinFV_stack_12->SetBinError(18,1.596213);
   hnumuCCinFV_stack_12->SetBinError(19,1.462849);
   hnumuCCinFV_stack_12->SetBinError(20,1.724616);
   hnumuCCinFV_stack_12->SetBinError(21,1.452825);
   hnumuCCinFV_stack_12->SetBinError(22,2.637165);
   hnumuCCinFV_stack_12->SetBinError(23,0.8793213);
   hnumuCCinFV_stack_12->SetBinError(24,0.5125506);
   hnumuCCinFV_stack_12->SetEntries(1360);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.679137);
   hnueCCinFV_stack_13->SetBinContent(2,3.674616);
   hnueCCinFV_stack_13->SetBinContent(3,3.729146);
   hnueCCinFV_stack_13->SetBinContent(4,2.745194);
   hnueCCinFV_stack_13->SetBinContent(5,3.445273);
   hnueCCinFV_stack_13->SetBinContent(6,3.803108);
   hnueCCinFV_stack_13->SetBinContent(7,3.459158);
   hnueCCinFV_stack_13->SetBinContent(8,1.758832);
   hnueCCinFV_stack_13->SetBinContent(9,1.190851);
   hnueCCinFV_stack_13->SetBinContent(10,2.105475);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,1.701181);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,1.39653);
   hnueCCinFV_stack_13->SetBinContent(16,1.174613);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.6668286);
   hnueCCinFV_stack_13->SetBinContent(19,1.482957);
   hnueCCinFV_stack_13->SetBinContent(20,1.488456);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.220651);
   hnueCCinFV_stack_13->SetBinContent(23,0.6623923);
   hnueCCinFV_stack_13->SetBinError(1,0.7895732);
   hnueCCinFV_stack_13->SetBinError(2,1.34448);
   hnueCCinFV_stack_13->SetBinError(3,1.683334);
   hnueCCinFV_stack_13->SetBinError(4,0.9574489);
   hnueCCinFV_stack_13->SetBinError(5,1.349194);
   hnueCCinFV_stack_13->SetBinError(6,1.49328);
   hnueCCinFV_stack_13->SetBinError(7,1.025915);
   hnueCCinFV_stack_13->SetBinError(8,0.6919403);
   hnueCCinFV_stack_13->SetBinError(9,0.565802);
   hnueCCinFV_stack_13->SetBinError(10,1.340473);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.6705183);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.7310288);
   hnueCCinFV_stack_13->SetBinError(16,0.5910469);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.471616);
   hnueCCinFV_stack_13->SetBinError(19,0.7329496);
   hnueCCinFV_stack_13->SetBinError(20,0.639842);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.6602962);
   hnueCCinFV_stack_13->SetBinError(23,0.3872778);
   hnueCCinFV_stack_13->SetEntries(135);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__11->SetBinContent(1,60.87156);
   hmcerror__11->SetBinContent(2,192.6716);
   hmcerror__11->SetBinContent(3,281.1126);
   hmcerror__11->SetBinContent(4,345.2632);
   hmcerror__11->SetBinContent(5,360.1895);
   hmcerror__11->SetBinContent(6,366.6342);
   hmcerror__11->SetBinContent(7,347.8939);
   hmcerror__11->SetBinContent(8,322.2529);
   hmcerror__11->SetBinContent(9,295.3461);
   hmcerror__11->SetBinContent(10,266.2503);
   hmcerror__11->SetBinContent(11,238.2723);
   hmcerror__11->SetBinContent(12,228.8249);
   hmcerror__11->SetBinContent(13,191.5232);
   hmcerror__11->SetBinContent(14,167.5562);
   hmcerror__11->SetBinContent(15,178.7768);
   hmcerror__11->SetBinContent(16,164.7346);
   hmcerror__11->SetBinContent(17,144.1858);
   hmcerror__11->SetBinContent(18,141.6688);
   hmcerror__11->SetBinContent(19,135.1338);
   hmcerror__11->SetBinContent(20,134.6506);
   hmcerror__11->SetBinContent(21,108.9928);
   hmcerror__11->SetBinContent(22,89.84911);
   hmcerror__11->SetBinContent(23,54.24902);
   hmcerror__11->SetBinContent(24,20.3594);
   hmcerror__11->SetBinError(1,18.64897);
   hmcerror__11->SetBinError(2,47.05356);
   hmcerror__11->SetBinError(3,69.68048);
   hmcerror__11->SetBinError(4,82.32891);
   hmcerror__11->SetBinError(5,86.60455);
   hmcerror__11->SetBinError(6,89.34284);
   hmcerror__11->SetBinError(7,86.45278);
   hmcerror__11->SetBinError(8,78.92143);
   hmcerror__11->SetBinError(9,71.34484);
   hmcerror__11->SetBinError(10,63.7421);
   hmcerror__11->SetBinError(11,62.18142);
   hmcerror__11->SetBinError(12,57.82069);
   hmcerror__11->SetBinError(13,49.93916);
   hmcerror__11->SetBinError(14,51.82389);
   hmcerror__11->SetBinError(15,50.66869);
   hmcerror__11->SetBinError(16,54.79064);
   hmcerror__11->SetBinError(17,37.70647);
   hmcerror__11->SetBinError(18,38.87652);
   hmcerror__11->SetBinError(19,36.47684);
   hmcerror__11->SetBinError(20,38.1105);
   hmcerror__11->SetBinError(21,32.83738);
   hmcerror__11->SetBinError(22,26.62866);
   hmcerror__11->SetBinError(23,18.57642);
   hmcerror__11->SetBinError(24,16.14635);
   hmcerror__11->SetBinError(25,0.3895343);
   hmcerror__11->SetEntries(4778.995);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3013[24] = {
   69,
   195,
   280,
   359,
   345,
   330,
   322,
   300,
   260,
   236,
   214,
   201,
   191,
   174,
   151,
   155,
   149,
   123,
   128,
   133,
   106,
   95,
   54,
   25};
   Double_t _felx3013[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3013[24] = {
   8.4327,
   13.96424,
   16.7332,
   18.9473,
   18.57418,
   18.1659,
   17.94436,
   17.32051,
   16.12452,
   15.36229,
   14.62874,
   14.17745,
   13.82027,
   13.19091,
   12.28821,
   12.4499,
   12.20656,
   11.09054,
   11.31371,
   11.53256,
   10.29563,
   9.8686,
   7.4785,
   5.1474};
   Double_t _fehx3013[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3013[24] = {
   8.2304,
   13.96424,
   16.7332,
   18.9473,
   18.57418,
   18.1659,
   17.94436,
   17.32051,
   16.12452,
   15.36229,
   14.62874,
   14.17745,
   13.82027,
   13.19091,
   12.28821,
   12.4499,
   12.20656,
   11.09054,
   11.31371,
   11.53256,
   10.29563,
   9.667,
   7.275,
   4.9374};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,3.465);
   Graph_Graph3013->SetMinimum(17.86734);
   Graph_Graph3013->SetMaximum(413.7568);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4595.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.4","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.8","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 587.3","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.1","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1694.0","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  342.3","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 728.0","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.7","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.8","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3014[24] = {
   0.3063659,
   0.2442164,
   0.2478739,
   0.2384526,
   0.2404417,
   0.2436839,
   0.2485033,
   0.2449053,
   0.2415635,
   0.2394066,
   0.2609679,
   0.2526853,
   0.2607473,
   0.3092926,
   0.2834187,
   0.3325994,
   0.2615131,
   0.2744184,
   0.2699313,
   0.2830326,
   0.3012802,
   0.2963709,
   0.3424286,
   0.7930658};
   Double_t _fehx3014[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3014[24] = {
   0.3063659,
   0.2442164,
   0.2478739,
   0.2384526,
   0.2404417,
   0.2436839,
   0.2485033,
   0.2449053,
   0.2415635,
   0.2394066,
   0.2609679,
   0.2526853,
   0.2607473,
   0.3092926,
   0.2834187,
   0.3325994,
   0.2615131,
   0.2744184,
   0.2699313,
   0.2830326,
   0.3012802,
   0.2963709,
   0.3424286,
   0.7930658};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,3.465);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3015[24] = {
   0.2146368,
   0.2045766,
   0.213875,
   0.2106001,
   0.2113583,
   0.2120005,
   0.2178335,
   0.2120278,
   0.2203703,
   0.2143336,
   0.2116172,
   0.2162933,
   0.2051107,
   0.2099904,
   0.2092929,
   0.1962387,
   0.2067468,
   0.2120972,
   0.2041944,
   0.2042225,
   0.2020005,
   0.2095007,
   0.2239359,
   0.2452423};
   Double_t _fehx3015[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3015[24] = {
   0.2146368,
   0.2045766,
   0.213875,
   0.2106001,
   0.2113583,
   0.2120005,
   0.2178335,
   0.2120278,
   0.2203703,
   0.2143336,
   0.2116172,
   0.2162933,
   0.2051107,
   0.2099904,
   0.2092929,
   0.1962387,
   0.2067468,
   0.2120972,
   0.2041944,
   0.2042225,
   0.2020005,
   0.2095007,
   0.2239359,
   0.2452423};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,3.465);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3016[24] = {
   1.133534,
   1.012085,
   0.9960421,
   1.039786,
   0.9578293,
   0.9000797,
   0.9255695,
   0.9309459,
   0.8803231,
   0.8863839,
   0.8981322,
   0.8784008,
   0.9972681,
   1.038458,
   0.8446286,
   0.9409073,
   1.033389,
   0.8682225,
   0.9472093,
   0.9877419,
   0.9725409,
   1.057328,
   0.9954098,
   1.227934};
   Double_t _felx3016[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3016[24] = {
   0.1385327,
   0.0724769,
   0.0595249,
   0.05487782,
   0.05156779,
   0.04954776,
   0.05157997,
   0.05374818,
   0.05459532,
   0.05769867,
   0.06139505,
   0.06195762,
   0.07215979,
   0.07872527,
   0.0687349,
   0.07557549,
   0.08465853,
   0.07828498,
   0.08372227,
   0.08564809,
   0.09446152,
   0.1098353,
   0.137855,
   0.2528267};
   Double_t _fehx3016[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3016[24] = {
   0.1352093,
   0.0724769,
   0.0595249,
   0.05487782,
   0.05156779,
   0.04954776,
   0.05157997,
   0.05374818,
   0.05459532,
   0.05769867,
   0.06139505,
   0.06195762,
   0.07215979,
   0.07872527,
   0.0687349,
   0.07557549,
   0.08465853,
   0.07828498,
   0.08372227,
   0.08564809,
   0.09446152,
   0.1075915,
   0.1341038,
   0.242512};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,3.465);
   Graph_Graph3016->SetMinimum(0.7064385);
   Graph_Graph3016->SetMaximum(1.539901);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

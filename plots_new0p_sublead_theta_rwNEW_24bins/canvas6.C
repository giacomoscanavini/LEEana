#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 17:15:00 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",242,172,1200,900);
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
   pad1->Range(-0.4846154,-5.537733,3.553846,612.3566);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__16->SetBinContent(1,45.2362);
   hmc__16->SetBinContent(2,142.335);
   hmc__16->SetBinContent(3,208.6448);
   hmc__16->SetBinContent(4,249.0981);
   hmc__16->SetBinContent(5,266.5331);
   hmc__16->SetBinContent(6,276.8866);
   hmc__16->SetBinContent(7,259.0475);
   hmc__16->SetBinContent(8,242.8559);
   hmc__16->SetBinContent(9,228.1484);
   hmc__16->SetBinContent(10,202.9022);
   hmc__16->SetBinContent(11,187.1991);
   hmc__16->SetBinContent(12,179.7712);
   hmc__16->SetBinContent(13,155.1761);
   hmc__16->SetBinContent(14,131.1643);
   hmc__16->SetBinContent(15,141.53);
   hmc__16->SetBinContent(16,127.1362);
   hmc__16->SetBinContent(17,111.8761);
   hmc__16->SetBinContent(18,115.5498);
   hmc__16->SetBinContent(19,107.427);
   hmc__16->SetBinContent(20,105.9393);
   hmc__16->SetBinContent(21,80.1619);
   hmc__16->SetBinContent(22,65.58891);
   hmc__16->SetBinContent(23,39.06627);
   hmc__16->SetBinContent(24,13.73154);
   hmc__16->SetBinError(1,15.55316);
   hmc__16->SetBinError(2,38.33982);
   hmc__16->SetBinError(3,56.08587);
   hmc__16->SetBinError(4,64.67658);
   hmc__16->SetBinError(5,69.82249);
   hmc__16->SetBinError(6,77.32354);
   hmc__16->SetBinError(7,68.35597);
   hmc__16->SetBinError(8,65.11739);
   hmc__16->SetBinError(9,59.00534);
   hmc__16->SetBinError(10,54.13002);
   hmc__16->SetBinError(11,50.01762);
   hmc__16->SetBinError(12,46.64794);
   hmc__16->SetBinError(13,42.31274);
   hmc__16->SetBinError(14,42.16955);
   hmc__16->SetBinError(15,41.17158);
   hmc__16->SetBinError(16,41.92661);
   hmc__16->SetBinError(17,30.59122);
   hmc__16->SetBinError(18,33.54354);
   hmc__16->SetBinError(19,32.89747);
   hmc__16->SetBinError(20,31.18542);
   hmc__16->SetBinError(21,27.09497);
   hmc__16->SetBinError(22,19.35582);
   hmc__16->SetBinError(23,16.9315);
   hmc__16->SetBinError(24,10.79331);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-5.537733);
   hmc__16->SetMaximum(581.4619);
   hmc__16->SetEntries(3645.257);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,3.15);
   hs6_stack_6->SetMinimum(-1.479728e-08);
   hs6_stack_6->SetMaximum(290.731);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,1.763345);
   hbadmatch_stack_1->SetBinContent(3,3.673628);
   hbadmatch_stack_1->SetBinContent(4,5.58216);
   hbadmatch_stack_1->SetBinContent(5,5.600961);
   hbadmatch_stack_1->SetBinContent(6,6.757214);
   hbadmatch_stack_1->SetBinContent(7,4.296394);
   hbadmatch_stack_1->SetBinContent(8,6.338643);
   hbadmatch_stack_1->SetBinContent(9,7.418845);
   hbadmatch_stack_1->SetBinContent(10,4.616594);
   hbadmatch_stack_1->SetBinContent(11,5.027379);
   hbadmatch_stack_1->SetBinContent(12,3.903786);
   hbadmatch_stack_1->SetBinContent(13,4.228975);
   hbadmatch_stack_1->SetBinContent(14,1.765797);
   hbadmatch_stack_1->SetBinContent(15,4.129433);
   hbadmatch_stack_1->SetBinContent(16,4.642742);
   hbadmatch_stack_1->SetBinContent(17,1.777765);
   hbadmatch_stack_1->SetBinContent(18,2.317982);
   hbadmatch_stack_1->SetBinContent(19,2.953374);
   hbadmatch_stack_1->SetBinContent(20,2.316386);
   hbadmatch_stack_1->SetBinContent(21,1.059554);
   hbadmatch_stack_1->SetBinContent(22,1.628176);
   hbadmatch_stack_1->SetBinContent(23,1.243857);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.6382735);
   hbadmatch_stack_1->SetBinError(3,1.137721);
   hbadmatch_stack_1->SetBinError(4,1.216583);
   hbadmatch_stack_1->SetBinError(5,1.17766);
   hbadmatch_stack_1->SetBinError(6,1.378272);
   hbadmatch_stack_1->SetBinError(7,1.09192);
   hbadmatch_stack_1->SetBinError(8,1.317754);
   hbadmatch_stack_1->SetBinError(9,2.026323);
   hbadmatch_stack_1->SetBinError(10,1.185449);
   hbadmatch_stack_1->SetBinError(11,1.136038);
   hbadmatch_stack_1->SetBinError(12,1.010667);
   hbadmatch_stack_1->SetBinError(13,1.128739);
   hbadmatch_stack_1->SetBinError(14,0.6390883);
   hbadmatch_stack_1->SetBinError(15,2.076199);
   hbadmatch_stack_1->SetBinError(16,1.891928);
   hbadmatch_stack_1->SetBinError(17,0.7190886);
   hbadmatch_stack_1->SetBinError(18,0.8044907);
   hbadmatch_stack_1->SetBinError(19,0.9387647);
   hbadmatch_stack_1->SetBinError(20,0.7536494);
   hbadmatch_stack_1->SetBinError(21,0.4786948);
   hbadmatch_stack_1->SetBinError(22,0.8116161);
   hbadmatch_stack_1->SetBinError(23,0.9339452);
   hbadmatch_stack_1->SetEntries(316);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,3.889996);
   hext_stack_2->SetBinContent(2,10.67803);
   hext_stack_2->SetBinContent(3,10.38676);
   hext_stack_2->SetBinContent(4,12.8004);
   hext_stack_2->SetBinContent(5,15.78782);
   hext_stack_2->SetBinContent(6,18.96836);
   hext_stack_2->SetBinContent(7,17.81918);
   hext_stack_2->SetBinContent(8,17.66359);
   hext_stack_2->SetBinContent(9,17.2614);
   hext_stack_2->SetBinContent(10,15.96658);
   hext_stack_2->SetBinContent(11,15.01216);
   hext_stack_2->SetBinContent(12,20.80105);
   hext_stack_2->SetBinContent(13,19.49905);
   hext_stack_2->SetBinContent(14,8.477858);
   hext_stack_2->SetBinContent(15,16.0416);
   hext_stack_2->SetBinContent(16,14.27676);
   hext_stack_2->SetBinContent(17,10.52962);
   hext_stack_2->SetBinContent(18,8.440376);
   hext_stack_2->SetBinContent(19,8.198181);
   hext_stack_2->SetBinContent(20,8.266022);
   hext_stack_2->SetBinContent(21,4.460999);
   hext_stack_2->SetBinContent(22,4.696014);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(24,2.338622);
   hext_stack_2->SetBinError(1,1.264566);
   hext_stack_2->SetBinError(2,2.179211);
   hext_stack_2->SetBinError(3,1.993501);
   hext_stack_2->SetBinError(4,2.331193);
   hext_stack_2->SetBinError(5,2.616115);
   hext_stack_2->SetBinError(6,2.751186);
   hext_stack_2->SetBinError(7,2.683137);
   hext_stack_2->SetBinError(8,2.710958);
   hext_stack_2->SetBinError(9,2.705382);
   hext_stack_2->SetBinError(10,2.561607);
   hext_stack_2->SetBinError(11,2.445169);
   hext_stack_2->SetBinError(12,3.04655);
   hext_stack_2->SetBinError(13,2.95388);
   hext_stack_2->SetBinError(14,2.034329);
   hext_stack_2->SetBinError(15,2.612111);
   hext_stack_2->SetBinError(16,2.360757);
   hext_stack_2->SetBinError(17,2.167447);
   hext_stack_2->SetBinError(18,1.82829);
   hext_stack_2->SetBinError(19,1.815902);
   hext_stack_2->SetBinError(20,1.93907);
   hext_stack_2->SetBinError(21,1.372818);
   hext_stack_2->SetBinError(22,1.459786);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(24,1.095047);
   hext_stack_2->SetEntries(711);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.1292);
   hdirt_stack_3->SetBinContent(3,1.171413);
   hdirt_stack_3->SetBinContent(4,2.528738);
   hdirt_stack_3->SetBinContent(5,1.903995);
   hdirt_stack_3->SetBinContent(6,2.505859);
   hdirt_stack_3->SetBinContent(7,2.304269);
   hdirt_stack_3->SetBinContent(8,2.468833);
   hdirt_stack_3->SetBinContent(9,4.497698);
   hdirt_stack_3->SetBinContent(10,2.771329);
   hdirt_stack_3->SetBinContent(11,1.939609);
   hdirt_stack_3->SetBinContent(12,1.79842);
   hdirt_stack_3->SetBinContent(13,1.54127);
   hdirt_stack_3->SetBinContent(14,0.8327577);
   hdirt_stack_3->SetBinContent(15,1.208347);
   hdirt_stack_3->SetBinContent(16,2.875222);
   hdirt_stack_3->SetBinContent(17,1.190193);
   hdirt_stack_3->SetBinContent(18,1.627984);
   hdirt_stack_3->SetBinContent(19,2.869779);
   hdirt_stack_3->SetBinContent(20,0.7139341);
   hdirt_stack_3->SetBinContent(21,0.7139341);
   hdirt_stack_3->SetBinContent(22,1.335073);
   hdirt_stack_3->SetBinContent(23,0.7759784);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.8051754);
   hdirt_stack_3->SetBinError(3,0.5610561);
   hdirt_stack_3->SetBinError(4,0.8341876);
   hdirt_stack_3->SetBinError(5,0.6739726);
   hdirt_stack_3->SetBinError(6,0.8206668);
   hdirt_stack_3->SetBinError(7,0.8108561);
   hdirt_stack_3->SetBinError(8,1.146143);
   hdirt_stack_3->SetBinError(9,1.113014);
   hdirt_stack_3->SetBinError(10,1.264717);
   hdirt_stack_3->SetBinError(11,0.7310536);
   hdirt_stack_3->SetBinError(12,0.7298578);
   hdirt_stack_3->SetBinError(13,0.6015139);
   hdirt_stack_3->SetBinError(14,0.4420469);
   hdirt_stack_3->SetBinError(15,0.528378);
   hdirt_stack_3->SetBinError(16,0.9142261);
   hdirt_stack_3->SetBinError(17,0.5170999);
   hdirt_stack_3->SetBinError(18,0.6026798);
   hdirt_stack_3->SetBinError(19,1.037773);
   hdirt_stack_3->SetBinError(20,0.3660028);
   hdirt_stack_3->SetBinError(21,0.3660028);
   hdirt_stack_3->SetBinError(22,0.5844386);
   hdirt_stack_3->SetBinError(23,0.458477);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetEntries(173);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.873541);
   houtFV_stack_4->SetBinContent(2,8.687229);
   houtFV_stack_4->SetBinContent(3,14.773);
   houtFV_stack_4->SetBinContent(4,21.15041);
   houtFV_stack_4->SetBinContent(5,21.30977);
   houtFV_stack_4->SetBinContent(6,25.2911);
   houtFV_stack_4->SetBinContent(7,22.47656);
   houtFV_stack_4->SetBinContent(8,21.80787);
   houtFV_stack_4->SetBinContent(9,15.83182);
   houtFV_stack_4->SetBinContent(10,16.74116);
   houtFV_stack_4->SetBinContent(11,17.00539);
   houtFV_stack_4->SetBinContent(12,18.07339);
   houtFV_stack_4->SetBinContent(13,13.00104);
   houtFV_stack_4->SetBinContent(14,10.49919);
   houtFV_stack_4->SetBinContent(15,14.28405);
   houtFV_stack_4->SetBinContent(16,15.89662);
   houtFV_stack_4->SetBinContent(17,13.16965);
   houtFV_stack_4->SetBinContent(18,13.45093);
   houtFV_stack_4->SetBinContent(19,14.67264);
   houtFV_stack_4->SetBinContent(20,16.683);
   houtFV_stack_4->SetBinContent(21,11.00627);
   houtFV_stack_4->SetBinContent(22,6.208436);
   houtFV_stack_4->SetBinContent(23,5.413275);
   houtFV_stack_4->SetBinContent(24,0.8770706);
   houtFV_stack_4->SetBinError(1,0.8717657);
   houtFV_stack_4->SetBinError(2,1.462762);
   houtFV_stack_4->SetBinError(3,1.926147);
   houtFV_stack_4->SetBinError(4,2.340508);
   houtFV_stack_4->SetBinError(5,2.27115);
   houtFV_stack_4->SetBinError(6,2.496292);
   houtFV_stack_4->SetBinError(7,2.333728);
   houtFV_stack_4->SetBinError(8,2.369912);
   houtFV_stack_4->SetBinError(9,1.968246);
   houtFV_stack_4->SetBinError(10,2.10539);
   houtFV_stack_4->SetBinError(11,2.112807);
   houtFV_stack_4->SetBinError(12,2.121485);
   houtFV_stack_4->SetBinError(13,1.823606);
   houtFV_stack_4->SetBinError(14,1.531492);
   houtFV_stack_4->SetBinError(15,1.900834);
   houtFV_stack_4->SetBinError(16,1.975005);
   houtFV_stack_4->SetBinError(17,1.769483);
   houtFV_stack_4->SetBinError(18,1.810106);
   houtFV_stack_4->SetBinError(19,1.86164);
   houtFV_stack_4->SetBinError(20,2.146105);
   houtFV_stack_4->SetBinError(21,1.620022);
   houtFV_stack_4->SetBinError(22,1.209137);
   houtFV_stack_4->SetBinError(23,1.168197);
   houtFV_stack_4->SetBinError(24,0.5197486);
   houtFV_stack_4->SetEntries(1472);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.691698);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.220068);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,9.523237);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.60835);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,9.509788);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.935426);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.011557);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.051004);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.781045);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.20926);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.440926);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.747666);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.037708);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.078562);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.091348);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7670858);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.339376);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.436358);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.674176);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.715526);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.477876);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8629078);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5526317);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8444918);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.005313);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.014625);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.017977);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9378456);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8154953);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.818513);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6811791);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6391732);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4683861);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5828529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.503366);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5241985);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5124972);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2468026);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4633044);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.398251);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4732778);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4462588);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.408066);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2541827);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2070706);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.283408);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9474399);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.241058);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7391858);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8655723);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4246589);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2936159);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3913503);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2452205);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3939116);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(229);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.23446);
   hNCpi0inFVres_stack_7->SetBinContent(2,51.50925);
   hNCpi0inFVres_stack_7->SetBinContent(3,86.61755);
   hNCpi0inFVres_stack_7->SetBinContent(4,103.7955);
   hNCpi0inFVres_stack_7->SetBinContent(5,114.2845);
   hNCpi0inFVres_stack_7->SetBinContent(6,113.6308);
   hNCpi0inFVres_stack_7->SetBinContent(7,109.5862);
   hNCpi0inFVres_stack_7->SetBinContent(8,100.7596);
   hNCpi0inFVres_stack_7->SetBinContent(9,99.7245);
   hNCpi0inFVres_stack_7->SetBinContent(10,87.53235);
   hNCpi0inFVres_stack_7->SetBinContent(11,74.70007);
   hNCpi0inFVres_stack_7->SetBinContent(12,75.76328);
   hNCpi0inFVres_stack_7->SetBinContent(13,65.99274);
   hNCpi0inFVres_stack_7->SetBinContent(14,60.72295);
   hNCpi0inFVres_stack_7->SetBinContent(15,53.81867);
   hNCpi0inFVres_stack_7->SetBinContent(16,48.55083);
   hNCpi0inFVres_stack_7->SetBinContent(17,46.13168);
   hNCpi0inFVres_stack_7->SetBinContent(18,47.66137);
   hNCpi0inFVres_stack_7->SetBinContent(19,42.13264);
   hNCpi0inFVres_stack_7->SetBinContent(20,40.44128);
   hNCpi0inFVres_stack_7->SetBinContent(21,32.19223);
   hNCpi0inFVres_stack_7->SetBinContent(22,25.08603);
   hNCpi0inFVres_stack_7->SetBinContent(23,16.34083);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.703587);
   hNCpi0inFVres_stack_7->SetBinError(1,1.353497);
   hNCpi0inFVres_stack_7->SetBinError(2,2.33038);
   hNCpi0inFVres_stack_7->SetBinError(3,3.042478);
   hNCpi0inFVres_stack_7->SetBinError(4,3.328043);
   hNCpi0inFVres_stack_7->SetBinError(5,3.53822);
   hNCpi0inFVres_stack_7->SetBinError(6,3.446273);
   hNCpi0inFVres_stack_7->SetBinError(7,3.401724);
   hNCpi0inFVres_stack_7->SetBinError(8,3.271971);
   hNCpi0inFVres_stack_7->SetBinError(9,3.326386);
   hNCpi0inFVres_stack_7->SetBinError(10,3.026137);
   hNCpi0inFVres_stack_7->SetBinError(11,2.830844);
   hNCpi0inFVres_stack_7->SetBinError(12,2.888574);
   hNCpi0inFVres_stack_7->SetBinError(13,2.671124);
   hNCpi0inFVres_stack_7->SetBinError(14,2.603035);
   hNCpi0inFVres_stack_7->SetBinError(15,2.432661);
   hNCpi0inFVres_stack_7->SetBinError(16,2.205119);
   hNCpi0inFVres_stack_7->SetBinError(17,2.225923);
   hNCpi0inFVres_stack_7->SetBinError(18,2.281176);
   hNCpi0inFVres_stack_7->SetBinError(19,2.075976);
   hNCpi0inFVres_stack_7->SetBinError(20,2.117718);
   hNCpi0inFVres_stack_7->SetBinError(21,1.805647);
   hNCpi0inFVres_stack_7->SetBinError(22,1.679567);
   hNCpi0inFVres_stack_7->SetBinError(23,1.337079);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8399477);
   hNCpi0inFVres_stack_7->SetEntries(27989);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.546724);
   hNCpi0inFVdis_stack_8->SetBinContent(2,14.25232);
   hNCpi0inFVdis_stack_8->SetBinContent(3,19.50749);
   hNCpi0inFVdis_stack_8->SetBinContent(4,20.42336);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.31161);
   hNCpi0inFVdis_stack_8->SetBinContent(6,26.2834);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.65447);
   hNCpi0inFVdis_stack_8->SetBinContent(8,23.28648);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.58188);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.47975);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.0777);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.6585);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.25255);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.564755);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.77642);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.905029);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.82349);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.542826);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.579936);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.88842);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.204449);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.502709);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.259908);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.14274);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7130503);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.283917);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.446694);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.375225);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.5087);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.682075);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.52459);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.642703);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.340301);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.284498);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.329929);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.097813);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.117898);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.009241);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.079431);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.906078);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9005126);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8744178);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7745768);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8957091);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7758741);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6653782);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.455609);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3027526);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(14);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,6.156874);
   hCCpi0inFV_stack_10->SetBinContent(2,22.08748);
   hCCpi0inFV_stack_10->SetBinContent(3,28.31278);
   hCCpi0inFV_stack_10->SetBinContent(4,34.30949);
   hCCpi0inFV_stack_10->SetBinContent(5,37.63839);
   hCCpi0inFV_stack_10->SetBinContent(6,37.67223);
   hCCpi0inFV_stack_10->SetBinContent(7,35.92715);
   hCCpi0inFV_stack_10->SetBinContent(8,34.11506);
   hCCpi0inFV_stack_10->SetBinContent(9,29.92302);
   hCCpi0inFV_stack_10->SetBinContent(10,27.81801);
   hCCpi0inFV_stack_10->SetBinContent(11,26.47713);
   hCCpi0inFV_stack_10->SetBinContent(12,22.68561);
   hCCpi0inFV_stack_10->SetBinContent(13,19.02512);
   hCCpi0inFV_stack_10->SetBinContent(14,17.47974);
   hCCpi0inFV_stack_10->SetBinContent(15,18.26691);
   hCCpi0inFV_stack_10->SetBinContent(16,15.79187);
   hCCpi0inFV_stack_10->SetBinContent(17,13.00594);
   hCCpi0inFV_stack_10->SetBinContent(18,18.30836);
   hCCpi0inFV_stack_10->SetBinContent(19,16.16148);
   hCCpi0inFV_stack_10->SetBinContent(20,12.91265);
   hCCpi0inFV_stack_10->SetBinContent(21,11.96404);
   hCCpi0inFV_stack_10->SetBinContent(22,10.12138);
   hCCpi0inFV_stack_10->SetBinContent(23,4.542985);
   hCCpi0inFV_stack_10->SetBinContent(24,1.375317);
   hCCpi0inFV_stack_10->SetBinError(1,1.225153);
   hCCpi0inFV_stack_10->SetBinError(2,2.377409);
   hCCpi0inFV_stack_10->SetBinError(3,2.595337);
   hCCpi0inFV_stack_10->SetBinError(4,2.998521);
   hCCpi0inFV_stack_10->SetBinError(5,3.017635);
   hCCpi0inFV_stack_10->SetBinError(6,3.034697);
   hCCpi0inFV_stack_10->SetBinError(7,2.997068);
   hCCpi0inFV_stack_10->SetBinError(8,2.917491);
   hCCpi0inFV_stack_10->SetBinError(9,2.763932);
   hCCpi0inFV_stack_10->SetBinError(10,2.615617);
   hCCpi0inFV_stack_10->SetBinError(11,2.578277);
   hCCpi0inFV_stack_10->SetBinError(12,2.431525);
   hCCpi0inFV_stack_10->SetBinError(13,2.249854);
   hCCpi0inFV_stack_10->SetBinError(14,2.062265);
   hCCpi0inFV_stack_10->SetBinError(15,2.15975);
   hCCpi0inFV_stack_10->SetBinError(16,1.985182);
   hCCpi0inFV_stack_10->SetBinError(17,1.799466);
   hCCpi0inFV_stack_10->SetBinError(18,2.130791);
   hCCpi0inFV_stack_10->SetBinError(19,2.048808);
   hCCpi0inFV_stack_10->SetBinError(20,1.710819);
   hCCpi0inFV_stack_10->SetBinError(21,1.755259);
   hCCpi0inFV_stack_10->SetBinError(22,1.557552);
   hCCpi0inFV_stack_10->SetBinError(23,1.047824);
   hCCpi0inFV_stack_10->SetBinError(24,0.5198233);
   hCCpi0inFV_stack_10->SetEntries(2161);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.561535);
   hNCinFV_stack_11->SetBinContent(2,11.62724);
   hNCinFV_stack_11->SetBinContent(3,17.53414);
   hNCinFV_stack_11->SetBinContent(4,19.83978);
   hNCinFV_stack_11->SetBinContent(5,18.22403);
   hNCinFV_stack_11->SetBinContent(6,21.37597);
   hNCinFV_stack_11->SetBinContent(7,18.57544);
   hNCinFV_stack_11->SetBinContent(8,12.3222);
   hNCinFV_stack_11->SetBinContent(9,16.02997);
   hNCinFV_stack_11->SetBinContent(10,13.44248);
   hNCinFV_stack_11->SetBinContent(11,16.02382);
   hNCinFV_stack_11->SetBinContent(12,10.26822);
   hNCinFV_stack_11->SetBinContent(13,9.004479);
   hNCinFV_stack_11->SetBinContent(14,11.96742);
   hNCinFV_stack_11->SetBinContent(15,9.921886);
   hNCinFV_stack_11->SetBinContent(16,8.264109);
   hNCinFV_stack_11->SetBinContent(17,8.68327);
   hNCinFV_stack_11->SetBinContent(18,7.863916);
   hNCinFV_stack_11->SetBinContent(19,6.298645);
   hNCinFV_stack_11->SetBinContent(20,6.060511);
   hNCinFV_stack_11->SetBinContent(21,5.080315);
   hNCinFV_stack_11->SetBinContent(22,4.596067);
   hNCinFV_stack_11->SetBinContent(23,4.246354);
   hNCinFV_stack_11->SetBinContent(24,1.373626);
   hNCinFV_stack_11->SetBinError(1,1.020895);
   hNCinFV_stack_11->SetBinError(2,1.722364);
   hNCinFV_stack_11->SetBinError(3,2.113567);
   hNCinFV_stack_11->SetBinError(4,2.229169);
   hNCinFV_stack_11->SetBinError(5,2.122252);
   hNCinFV_stack_11->SetBinError(6,2.350097);
   hNCinFV_stack_11->SetBinError(7,2.103731);
   hNCinFV_stack_11->SetBinError(8,1.733584);
   hNCinFV_stack_11->SetBinError(9,1.981732);
   hNCinFV_stack_11->SetBinError(10,1.809191);
   hNCinFV_stack_11->SetBinError(11,2.030576);
   hNCinFV_stack_11->SetBinError(12,1.582503);
   hNCinFV_stack_11->SetBinError(13,1.469501);
   hNCinFV_stack_11->SetBinError(14,1.755636);
   hNCinFV_stack_11->SetBinError(15,1.607661);
   hNCinFV_stack_11->SetBinError(16,1.40131);
   hNCinFV_stack_11->SetBinError(17,1.545552);
   hNCinFV_stack_11->SetBinError(18,1.372453);
   hNCinFV_stack_11->SetBinError(19,1.255931);
   hNCinFV_stack_11->SetBinError(20,1.257628);
   hNCinFV_stack_11->SetBinError(21,1.178757);
   hNCinFV_stack_11->SetBinError(22,0.9990474);
   hNCinFV_stack_11->SetBinError(23,1.0378);
   hNCinFV_stack_11->SetBinError(24,0.519186);
   hNCinFV_stack_11->SetEntries(1123);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.627437);
   hnumuCCinFV_stack_12->SetBinContent(2,10.36229);
   hnumuCCinFV_stack_12->SetBinContent(3,12.91504);
   hnumuCCinFV_stack_12->SetBinContent(4,14.12957);
   hnumuCCinFV_stack_12->SetBinContent(5,17.93549);
   hnumuCCinFV_stack_12->SetBinContent(6,12.45884);
   hnumuCCinFV_stack_12->SetBinContent(7,15.99969);
   hnumuCCinFV_stack_12->SetBinContent(8,15.51235);
   hnumuCCinFV_stack_12->SetBinContent(9,12.88881);
   hnumuCCinFV_stack_12->SetBinContent(10,11.88438);
   hnumuCCinFV_stack_12->SetBinContent(11,12.41419);
   hnumuCCinFV_stack_12->SetBinContent(12,8.602995);
   hnumuCCinFV_stack_12->SetBinContent(13,9.202393);
   hnumuCCinFV_stack_12->SetBinContent(14,7.272291);
   hnumuCCinFV_stack_12->SetBinContent(15,9.399459);
   hnumuCCinFV_stack_12->SetBinContent(16,6.419563);
   hnumuCCinFV_stack_12->SetBinContent(17,7.972632);
   hnumuCCinFV_stack_12->SetBinContent(18,5.367329);
   hnumuCCinFV_stack_12->SetBinContent(19,5.089033);
   hnumuCCinFV_stack_12->SetBinContent(20,7.607427);
   hnumuCCinFV_stack_12->SetBinContent(21,5.358953);
   hnumuCCinFV_stack_12->SetBinContent(22,4.760094);
   hnumuCCinFV_stack_12->SetBinContent(23,1.468584);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,0.8171568);
   hnumuCCinFV_stack_12->SetBinError(2,1.66912);
   hnumuCCinFV_stack_12->SetBinError(3,1.859735);
   hnumuCCinFV_stack_12->SetBinError(4,2.283857);
   hnumuCCinFV_stack_12->SetBinError(5,2.254742);
   hnumuCCinFV_stack_12->SetBinError(6,1.943406);
   hnumuCCinFV_stack_12->SetBinError(7,2.302739);
   hnumuCCinFV_stack_12->SetBinError(8,2.060498);
   hnumuCCinFV_stack_12->SetBinError(9,2.132953);
   hnumuCCinFV_stack_12->SetBinError(10,2.269496);
   hnumuCCinFV_stack_12->SetBinError(11,2.132275);
   hnumuCCinFV_stack_12->SetBinError(12,1.795553);
   hnumuCCinFV_stack_12->SetBinError(13,1.569922);
   hnumuCCinFV_stack_12->SetBinError(14,1.652113);
   hnumuCCinFV_stack_12->SetBinError(15,1.963561);
   hnumuCCinFV_stack_12->SetBinError(16,1.365419);
   hnumuCCinFV_stack_12->SetBinError(17,1.961838);
   hnumuCCinFV_stack_12->SetBinError(18,1.443126);
   hnumuCCinFV_stack_12->SetBinError(19,1.142428);
   hnumuCCinFV_stack_12->SetBinError(20,1.542872);
   hnumuCCinFV_stack_12->SetBinError(21,1.164257);
   hnumuCCinFV_stack_12->SetBinError(22,1.064363);
   hnumuCCinFV_stack_12->SetBinError(23,0.6153502);
   hnumuCCinFV_stack_12->SetBinError(24,0.2770047);
   hnumuCCinFV_stack_12->SetEntries(859);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.142244);
   hnueCCinFV_stack_13->SetBinContent(2,2.62778);
   hnueCCinFV_stack_13->SetBinContent(3,2.890509);
   hnueCCinFV_stack_13->SetBinContent(4,2.745194);
   hnueCCinFV_stack_13->SetBinContent(5,1.46849);
   hnueCCinFV_stack_13->SetBinContent(6,3.05996);
   hnueCCinFV_stack_13->SetBinContent(7,2.601435);
   hnueCCinFV_stack_13->SetBinContent(8,1.261258);
   hnueCCinFV_stack_13->SetBinContent(9,1.190851);
   hnueCCinFV_stack_13->SetBinContent(10,2.105475);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,1.701181);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,1.39653);
   hnueCCinFV_stack_13->SetBinContent(16,1.174613);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.6668286);
   hnueCCinFV_stack_13->SetBinContent(19,1.286242);
   hnueCCinFV_stack_13->SetBinContent(20,1.29174);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.023935);
   hnueCCinFV_stack_13->SetBinContent(23,0.6623923);
   hnueCCinFV_stack_13->SetBinError(1,0.6848417);
   hnueCCinFV_stack_13->SetBinError(2,1.217773);
   hnueCCinFV_stack_13->SetBinError(3,1.591356);
   hnueCCinFV_stack_13->SetBinError(4,0.9574489);
   hnueCCinFV_stack_13->SetBinError(5,0.5574704);
   hnueCCinFV_stack_13->SetBinError(6,1.295228);
   hnueCCinFV_stack_13->SetBinError(7,0.9310859);
   hnueCCinFV_stack_13->SetBinError(8,0.5909405);
   hnueCCinFV_stack_13->SetBinError(9,0.565802);
   hnueCCinFV_stack_13->SetBinError(10,1.340473);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.6705183);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.7310288);
   hnueCCinFV_stack_13->SetBinError(16,0.5910469);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.471616);
   hnueCCinFV_stack_13->SetBinError(19,0.7060582);
   hnueCCinFV_stack_13->SetBinError(20,0.6088521);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.6303128);
   hnueCCinFV_stack_13->SetBinError(23,0.3872778);
   hnueCCinFV_stack_13->SetEntries(111);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__17->SetBinContent(1,45.2362);
   hmcerror__17->SetBinContent(2,142.335);
   hmcerror__17->SetBinContent(3,208.6448);
   hmcerror__17->SetBinContent(4,249.0981);
   hmcerror__17->SetBinContent(5,266.5331);
   hmcerror__17->SetBinContent(6,276.8866);
   hmcerror__17->SetBinContent(7,259.0475);
   hmcerror__17->SetBinContent(8,242.8559);
   hmcerror__17->SetBinContent(9,228.1484);
   hmcerror__17->SetBinContent(10,202.9022);
   hmcerror__17->SetBinContent(11,187.1991);
   hmcerror__17->SetBinContent(12,179.7712);
   hmcerror__17->SetBinContent(13,155.1761);
   hmcerror__17->SetBinContent(14,131.1643);
   hmcerror__17->SetBinContent(15,141.53);
   hmcerror__17->SetBinContent(16,127.1362);
   hmcerror__17->SetBinContent(17,111.8761);
   hmcerror__17->SetBinContent(18,115.5498);
   hmcerror__17->SetBinContent(19,107.427);
   hmcerror__17->SetBinContent(20,105.9393);
   hmcerror__17->SetBinContent(21,80.1619);
   hmcerror__17->SetBinContent(22,65.58891);
   hmcerror__17->SetBinContent(23,39.06627);
   hmcerror__17->SetBinContent(24,13.73154);
   hmcerror__17->SetBinError(1,15.55316);
   hmcerror__17->SetBinError(2,38.33982);
   hmcerror__17->SetBinError(3,56.08587);
   hmcerror__17->SetBinError(4,64.67658);
   hmcerror__17->SetBinError(5,69.82249);
   hmcerror__17->SetBinError(6,77.32354);
   hmcerror__17->SetBinError(7,68.35597);
   hmcerror__17->SetBinError(8,65.11739);
   hmcerror__17->SetBinError(9,59.00534);
   hmcerror__17->SetBinError(10,54.13002);
   hmcerror__17->SetBinError(11,50.01762);
   hmcerror__17->SetBinError(12,46.64794);
   hmcerror__17->SetBinError(13,42.31274);
   hmcerror__17->SetBinError(14,42.16955);
   hmcerror__17->SetBinError(15,41.17158);
   hmcerror__17->SetBinError(16,41.92661);
   hmcerror__17->SetBinError(17,30.59122);
   hmcerror__17->SetBinError(18,33.54354);
   hmcerror__17->SetBinError(19,32.89747);
   hmcerror__17->SetBinError(20,31.18542);
   hmcerror__17->SetBinError(21,27.09497);
   hmcerror__17->SetBinError(22,19.35582);
   hmcerror__17->SetBinError(23,16.9315);
   hmcerror__17->SetBinError(24,10.79331);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(3645.257);

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
   
   Double_t _fx3021[24] = {
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
   Double_t _fy3021[24] = {
   47,
   136,
   207,
   262,
   258,
   258,
   252,
   215,
   198,
   181,
   175,
   162,
   148,
   141,
   111,
   121,
   128,
   94,
   102,
   111,
   86,
   71,
   37,
   21};
   Double_t _felx3021[24] = {
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
   Double_t _fely3021[24] = {
   6.9882,
   11.6619,
   14.38749,
   16.18641,
   16.06238,
   16.06238,
   15.87451,
   14.66288,
   14.07125,
   13.45362,
   13.22876,
   12.72792,
   12.16553,
   11.87434,
   10.53565,
   11,
   11.31371,
   9.8173,
   10.0995,
   10.53565,
   9.3967,
   8.5518,
   6.2203,
   4.7354};
   Double_t _fehx3021[24] = {
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
   Double_t _fehy3021[24] = {
   6.7839,
   11.6619,
   14.38749,
   16.18641,
   16.06238,
   16.06238,
   15.87451,
   14.66288,
   14.07125,
   13.45362,
   13.22876,
   12.72792,
   12.16553,
   11.87434,
   10.53565,
   11,
   11.31371,
   9.616,
   10.0995,
   10.53565,
   9.1951,
   8.3496,
   6.0141,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,3.465);
   Graph_Graph3021->SetMinimum(14.63814);
   Graph_Graph3021->SetMaximum(304.3786);
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
   entry=leg->AddEntry("NULL","POT: 6.37e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3522.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 502.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
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
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
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
   Double_t _fely3022[24] = {
   0.3438211,
   0.2693633,
   0.2688103,
   0.259643,
   0.2619656,
   0.2792607,
   0.2638743,
   0.2681319,
   0.258627,
   0.2667789,
   0.2671894,
   0.2594851,
   0.2726757,
   0.3215018,
   0.2909037,
   0.3297771,
   0.2734383,
   0.290295,
   0.3062308,
   0.2943708,
   0.3380031,
   0.2951082,
   0.4334045,
   0.786023};
   Double_t _fehx3022[24] = {
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
   Double_t _fehy3022[24] = {
   0.3438211,
   0.2693633,
   0.2688103,
   0.259643,
   0.2619656,
   0.2792607,
   0.2638743,
   0.2681319,
   0.258627,
   0.2667789,
   0.2671894,
   0.2594851,
   0.2726757,
   0.3215018,
   0.2909037,
   0.3297771,
   0.2734383,
   0.290295,
   0.3062308,
   0.2943708,
   0.3380031,
   0.2951082,
   0.4334045,
   0.786023};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,3.465);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3023[24] = {
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
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
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
   Double_t _fely3023[24] = {
   0.2346003,
   0.2170294,
   0.2303387,
   0.228991,
   0.2292903,
   0.2263078,
   0.2345783,
   0.2254141,
   0.2345581,
   0.2324908,
   0.221545,
   0.2288387,
   0.2133728,
   0.2232105,
   0.2231777,
   0.2098151,
   0.2155892,
   0.2186805,
   0.2194127,
   0.2110837,
   0.2209081,
   0.2155353,
   0.2509024,
   0.2727341};
   Double_t _fehx3023[24] = {
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
   Double_t _fehy3023[24] = {
   0.2346003,
   0.2170294,
   0.2303387,
   0.228991,
   0.2292903,
   0.2263078,
   0.2345783,
   0.2254141,
   0.2345581,
   0.2324908,
   0.221545,
   0.2288387,
   0.2133728,
   0.2232105,
   0.2231777,
   0.2098151,
   0.2155892,
   0.2186805,
   0.2194127,
   0.2110837,
   0.2209081,
   0.2155353,
   0.2509024,
   0.2727341};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,3.465);
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
   
   Double_t _fx3024[24] = {
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
   Double_t _fy3024[24] = {
   1.038991,
   0.9554924,
   0.9921169,
   1.051795,
   0.9679849,
   0.9317893,
   0.9727947,
   0.8852988,
   0.8678563,
   0.8920556,
   0.9348334,
   0.9011455,
   0.9537552,
   1.074988,
   0.7842863,
   0.9517351,
   1.144122,
   0.8135018,
   0.9494816,
   1.04777,
   1.072829,
   1.0825,
   0.9471085,
   1.529326};
   Double_t _felx3024[24] = {
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
   Double_t _fely3024[24] = {
   0.1544825,
   0.0819328,
   0.06895689,
   0.06498008,
   0.06026411,
   0.05801067,
   0.06128031,
   0.06037688,
   0.06167586,
   0.06630597,
   0.07066676,
   0.07080068,
   0.07839819,
   0.09053031,
   0.07444116,
   0.08652137,
   0.1011271,
   0.08496161,
   0.09401268,
   0.09944995,
   0.1172215,
   0.1303849,
   0.1592243,
   0.3448556};
   Double_t _fehx3024[24] = {
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
   Double_t _fehy3024[24] = {
   0.1499662,
   0.0819328,
   0.06895689,
   0.06498008,
   0.06026411,
   0.05801067,
   0.06128031,
   0.06037688,
   0.06167586,
   0.06630597,
   0.07066676,
   0.07080068,
   0.07839819,
   0.09053031,
   0.07444116,
   0.08652137,
   0.1011271,
   0.0832195,
   0.09401268,
   0.09944995,
   0.1147066,
   0.127302,
   0.1539461,
   0.3293803};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,3.465);
   Graph_Graph3024->SetMinimum(0.594959);
   Graph_Graph3024->SetMaximum(1.973592);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

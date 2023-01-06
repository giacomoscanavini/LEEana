#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 23:52:12 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",242,172,1200,900);
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
   pad1->Range(-4.119231,-4.98,3.957692,550.6832);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__4->SetBinContent(1,213.9482);
   hmc__4->SetBinContent(2,216.2826);
   hmc__4->SetBinContent(3,206.7934);
   hmc__4->SetBinContent(4,205.1462);
   hmc__4->SetBinContent(5,186.0218);
   hmc__4->SetBinContent(6,189.3881);
   hmc__4->SetBinContent(7,216.5092);
   hmc__4->SetBinContent(8,196.6869);
   hmc__4->SetBinContent(9,199.4248);
   hmc__4->SetBinContent(10,205.3915);
   hmc__4->SetBinContent(11,194.8807);
   hmc__4->SetBinContent(12,216.7591);
   hmc__4->SetBinContent(13,215.8664);
   hmc__4->SetBinContent(14,216.4206);
   hmc__4->SetBinContent(15,207.0534);
   hmc__4->SetBinContent(16,222.89);
   hmc__4->SetBinContent(17,202.6968);
   hmc__4->SetBinContent(18,222.2225);
   hmc__4->SetBinContent(19,202.6013);
   hmc__4->SetBinContent(20,199.485);
   hmc__4->SetBinContent(21,197.5817);
   hmc__4->SetBinContent(22,203.5407);
   hmc__4->SetBinContent(23,206.1523);
   hmc__4->SetBinContent(24,214.6706);
   hmc__4->SetBinContent(25,226.5379);
   hmc__4->SetBinError(1,57.89117);
   hmc__4->SetBinError(2,61.52828);
   hmc__4->SetBinError(3,58.3901);
   hmc__4->SetBinError(4,58.7979);
   hmc__4->SetBinError(5,52.44074);
   hmc__4->SetBinError(6,53.89994);
   hmc__4->SetBinError(7,58.57871);
   hmc__4->SetBinError(8,56.89223);
   hmc__4->SetBinError(9,56.33404);
   hmc__4->SetBinError(10,56.04499);
   hmc__4->SetBinError(11,55.45913);
   hmc__4->SetBinError(12,64.85252);
   hmc__4->SetBinError(13,61.36935);
   hmc__4->SetBinError(14,61.62493);
   hmc__4->SetBinError(15,61.35);
   hmc__4->SetBinError(16,62.87479);
   hmc__4->SetBinError(17,57.10032);
   hmc__4->SetBinError(18,56.7238);
   hmc__4->SetBinError(19,63.89652);
   hmc__4->SetBinError(20,63.46769);
   hmc__4->SetBinError(21,54.73542);
   hmc__4->SetBinError(22,59.56732);
   hmc__4->SetBinError(23,57.47206);
   hmc__4->SetBinError(24,62.06712);
   hmc__4->SetBinError(25,62.13335);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-4.98);
   hmc__4->SetMaximum(522.9);
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
   hs2_stack_2->SetMinimum(-2.129585e-09);
   hs2_stack_2->SetMaximum(237.8649);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.475054);
   hbadmatch_stack_1->SetBinContent(2,5.159958);
   hbadmatch_stack_1->SetBinContent(3,4.260538);
   hbadmatch_stack_1->SetBinContent(4,6.951986);
   hbadmatch_stack_1->SetBinContent(5,2.672983);
   hbadmatch_stack_1->SetBinContent(6,4.431595);
   hbadmatch_stack_1->SetBinContent(7,5.272559);
   hbadmatch_stack_1->SetBinContent(8,7.203738);
   hbadmatch_stack_1->SetBinContent(9,6.195095);
   hbadmatch_stack_1->SetBinContent(10,2.633922);
   hbadmatch_stack_1->SetBinContent(11,3.047854);
   hbadmatch_stack_1->SetBinContent(12,4.170415);
   hbadmatch_stack_1->SetBinContent(13,2.551803);
   hbadmatch_stack_1->SetBinContent(14,5.96724);
   hbadmatch_stack_1->SetBinContent(15,5.47879);
   hbadmatch_stack_1->SetBinContent(16,7.106259);
   hbadmatch_stack_1->SetBinContent(17,4.780607);
   hbadmatch_stack_1->SetBinContent(18,3.317139);
   hbadmatch_stack_1->SetBinContent(19,2.262852);
   hbadmatch_stack_1->SetBinContent(20,6.002938);
   hbadmatch_stack_1->SetBinContent(21,5.719718);
   hbadmatch_stack_1->SetBinContent(22,4.363853);
   hbadmatch_stack_1->SetBinContent(23,4.41312);
   hbadmatch_stack_1->SetBinContent(24,4.173449);
   hbadmatch_stack_1->SetBinContent(25,6.817462);
   hbadmatch_stack_1->SetBinError(1,1.142212);
   hbadmatch_stack_1->SetBinError(2,1.18536);
   hbadmatch_stack_1->SetBinError(3,0.990298);
   hbadmatch_stack_1->SetBinError(4,1.465057);
   hbadmatch_stack_1->SetBinError(5,0.7741573);
   hbadmatch_stack_1->SetBinError(6,1.057621);
   hbadmatch_stack_1->SetBinError(7,1.174268);
   hbadmatch_stack_1->SetBinError(8,1.440333);
   hbadmatch_stack_1->SetBinError(9,2.301446);
   hbadmatch_stack_1->SetBinError(10,0.8131463);
   hbadmatch_stack_1->SetBinError(11,0.8953455);
   hbadmatch_stack_1->SetBinError(12,1.110554);
   hbadmatch_stack_1->SetBinError(13,0.7645086);
   hbadmatch_stack_1->SetBinError(14,1.605894);
   hbadmatch_stack_1->SetBinError(15,1.965819);
   hbadmatch_stack_1->SetBinError(16,1.444381);
   hbadmatch_stack_1->SetBinError(17,1.195886);
   hbadmatch_stack_1->SetBinError(18,0.9260221);
   hbadmatch_stack_1->SetBinError(19,0.7675718);
   hbadmatch_stack_1->SetBinError(20,1.386384);
   hbadmatch_stack_1->SetBinError(21,1.452304);
   hbadmatch_stack_1->SetBinError(22,1.134376);
   hbadmatch_stack_1->SetBinError(23,1.088805);
   hbadmatch_stack_1->SetBinError(24,1.80001);
   hbadmatch_stack_1->SetBinError(25,1.424139);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,16.84762);
   hext_stack_2->SetBinContent(2,14.56802);
   hext_stack_2->SetBinContent(3,16.67604);
   hext_stack_2->SetBinContent(4,16.46975);
   hext_stack_2->SetBinContent(5,23.10654);
   hext_stack_2->SetBinContent(6,23.36751);
   hext_stack_2->SetBinContent(7,36.19821);
   hext_stack_2->SetBinContent(8,23.14685);
   hext_stack_2->SetBinContent(9,24.96795);
   hext_stack_2->SetBinContent(10,25.33424);
   hext_stack_2->SetBinContent(11,14.56802);
   hext_stack_2->SetBinContent(12,18.63836);
   hext_stack_2->SetBinContent(13,18.43365);
   hext_stack_2->SetBinContent(14,7.772812);
   hext_stack_2->SetBinContent(15,11.09181);
   hext_stack_2->SetBinContent(16,16.35605);
   hext_stack_2->SetBinContent(17,16.72788);
   hext_stack_2->SetBinContent(18,29.8758);
   hext_stack_2->SetBinContent(19,18.28366);
   hext_stack_2->SetBinContent(20,16.26226);
   hext_stack_2->SetBinContent(21,16.98608);
   hext_stack_2->SetBinContent(22,14.95585);
   hext_stack_2->SetBinContent(23,17.05946);
   hext_stack_2->SetBinContent(24,14.56802);
   hext_stack_2->SetBinContent(25,14.49023);
   hext_stack_2->SetBinError(1,2.712005);
   hext_stack_2->SetBinError(2,2.519542);
   hext_stack_2->SetBinError(3,2.726902);
   hext_stack_2->SetBinError(4,2.526824);
   hext_stack_2->SetBinError(5,3.339203);
   hext_stack_2->SetBinError(6,3.305774);
   hext_stack_2->SetBinError(7,4.166492);
   hext_stack_2->SetBinError(8,3.206149);
   hext_stack_2->SetBinError(9,3.472451);
   hext_stack_2->SetBinError(10,3.61858);
   hext_stack_2->SetBinError(11,2.519542);
   hext_stack_2->SetBinError(12,3.076825);
   hext_stack_2->SetBinError(13,3.196491);
   hext_stack_2->SetBinError(14,1.843762);
   hext_stack_2->SetBinError(15,2.170964);
   hext_stack_2->SetBinError(16,2.732377);
   hext_stack_2->SetBinError(17,2.798114);
   hext_stack_2->SetBinError(18,3.816725);
   hext_stack_2->SetBinError(19,2.892156);
   hext_stack_2->SetBinError(20,2.733473);
   hext_stack_2->SetBinError(21,2.818445);
   hext_stack_2->SetBinError(22,2.603976);
   hext_stack_2->SetBinError(23,2.780912);
   hext_stack_2->SetBinError(24,2.519542);
   hext_stack_2->SetBinError(25,2.534388);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.758115);
   hdirt_stack_3->SetBinContent(2,2.117434);
   hdirt_stack_3->SetBinContent(3,2.195411);
   hdirt_stack_3->SetBinContent(4,2.012898);
   hdirt_stack_3->SetBinContent(5,1.63523);
   hdirt_stack_3->SetBinContent(6,1.971064);
   hdirt_stack_3->SetBinContent(7,2.691459);
   hdirt_stack_3->SetBinContent(8,1.469707);
   hdirt_stack_3->SetBinContent(9,1.388505);
   hdirt_stack_3->SetBinContent(10,2.749665);
   hdirt_stack_3->SetBinContent(11,2.323137);
   hdirt_stack_3->SetBinContent(12,0.6765288);
   hdirt_stack_3->SetBinContent(13,2.608353);
   hdirt_stack_3->SetBinContent(14,1.90356);
   hdirt_stack_3->SetBinContent(15,2.273109);
   hdirt_stack_3->SetBinContent(16,2.593468);
   hdirt_stack_3->SetBinContent(17,1.857172);
   hdirt_stack_3->SetBinContent(18,1.911765);
   hdirt_stack_3->SetBinContent(19,2.123655);
   hdirt_stack_3->SetBinContent(20,2.005291);
   hdirt_stack_3->SetBinContent(21,2.271491);
   hdirt_stack_3->SetBinContent(22,1.995313);
   hdirt_stack_3->SetBinContent(23,1.834423);
   hdirt_stack_3->SetBinContent(24,2.069808);
   hdirt_stack_3->SetBinContent(25,1.8281);
   hdirt_stack_3->SetBinError(1,0.3923271);
   hdirt_stack_3->SetBinError(2,0.7841045);
   hdirt_stack_3->SetBinError(3,0.79738);
   hdirt_stack_3->SetBinError(4,0.7904976);
   hdirt_stack_3->SetBinError(5,0.605349);
   hdirt_stack_3->SetBinError(6,0.7656395);
   hdirt_stack_3->SetBinError(7,0.8191843);
   hdirt_stack_3->SetBinError(8,0.5677231);
   hdirt_stack_3->SetBinError(9,0.5959484);
   hdirt_stack_3->SetBinError(10,1.284461);
   hdirt_stack_3->SetBinError(11,0.7569415);
   hdirt_stack_3->SetBinError(12,0.4454619);
   hdirt_stack_3->SetBinError(13,0.7897601);
   hdirt_stack_3->SetBinError(14,0.8344788);
   hdirt_stack_3->SetBinError(15,1.093342);
   hdirt_stack_3->SetBinError(16,0.7702708);
   hdirt_stack_3->SetBinError(17,0.7088763);
   hdirt_stack_3->SetBinError(18,0.6829274);
   hdirt_stack_3->SetBinError(19,0.7921477);
   hdirt_stack_3->SetBinError(20,0.7484868);
   hdirt_stack_3->SetBinError(21,0.8363974);
   hdirt_stack_3->SetBinError(22,0.7049347);
   hdirt_stack_3->SetBinError(23,0.7366308);
   hdirt_stack_3->SetBinError(24,0.7506818);
   hdirt_stack_3->SetBinError(25,0.6771483);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,16.44164);
   houtFV_stack_4->SetBinContent(2,14.71194);
   houtFV_stack_4->SetBinContent(3,15.39097);
   houtFV_stack_4->SetBinContent(4,14.37523);
   houtFV_stack_4->SetBinContent(5,12.63958);
   houtFV_stack_4->SetBinContent(6,12.81782);
   houtFV_stack_4->SetBinContent(7,14.70654);
   houtFV_stack_4->SetBinContent(8,12.74597);
   houtFV_stack_4->SetBinContent(9,14.2923);
   houtFV_stack_4->SetBinContent(10,14.80537);
   houtFV_stack_4->SetBinContent(11,13.67847);
   houtFV_stack_4->SetBinContent(12,15.92919);
   houtFV_stack_4->SetBinContent(13,13.41853);
   houtFV_stack_4->SetBinContent(14,15.0117);
   houtFV_stack_4->SetBinContent(15,13.26388);
   houtFV_stack_4->SetBinContent(16,17.93605);
   houtFV_stack_4->SetBinContent(17,17.11532);
   houtFV_stack_4->SetBinContent(18,14.63895);
   houtFV_stack_4->SetBinContent(19,16.93806);
   houtFV_stack_4->SetBinContent(20,12.63214);
   houtFV_stack_4->SetBinContent(21,14.48857);
   houtFV_stack_4->SetBinContent(22,16.61495);
   houtFV_stack_4->SetBinContent(23,15.00443);
   houtFV_stack_4->SetBinContent(24,15.84029);
   houtFV_stack_4->SetBinContent(25,15.6867);
   houtFV_stack_4->SetBinError(1,2.099474);
   houtFV_stack_4->SetBinError(2,1.877491);
   houtFV_stack_4->SetBinError(3,1.940949);
   houtFV_stack_4->SetBinError(4,1.91592);
   houtFV_stack_4->SetBinError(5,1.778377);
   houtFV_stack_4->SetBinError(6,1.783126);
   houtFV_stack_4->SetBinError(7,1.988889);
   houtFV_stack_4->SetBinError(8,1.741171);
   houtFV_stack_4->SetBinError(9,1.866283);
   houtFV_stack_4->SetBinError(10,1.946655);
   houtFV_stack_4->SetBinError(11,1.845074);
   houtFV_stack_4->SetBinError(12,1.883612);
   houtFV_stack_4->SetBinError(13,1.815549);
   houtFV_stack_4->SetBinError(14,1.882187);
   houtFV_stack_4->SetBinError(15,1.806075);
   houtFV_stack_4->SetBinError(16,2.129047);
   houtFV_stack_4->SetBinError(17,2.071082);
   houtFV_stack_4->SetBinError(18,1.882778);
   houtFV_stack_4->SetBinError(19,2.11795);
   houtFV_stack_4->SetBinError(20,1.805716);
   houtFV_stack_4->SetBinError(21,1.898214);
   houtFV_stack_4->SetBinError(22,2.032869);
   houtFV_stack_4->SetBinError(23,1.891857);
   houtFV_stack_4->SetBinError(24,1.998066);
   houtFV_stack_4->SetBinError(25,1.968679);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.09602);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.260631);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.395576);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.419054);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.116769);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.826667);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.112005);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.369985);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.044644);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.811458);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.344205);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.044611);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.024571);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.33996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.48505);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.301055);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.792035);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.185909);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.734433);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.223409);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.034988);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.88938);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.201157);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.982168);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.776565);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.851435);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5389648);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6785568);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6665884);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7438808);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8060449);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6582204);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.793871);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6768925);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.001151);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.018664);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4878374);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8367686);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7165875);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.633761);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6395866);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6933309);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6783986);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7542857);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7025274);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6776758);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6663578);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8989193);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8502387);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.7054958);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4669447);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6336041);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.049142);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.8958957);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7962618);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.447809);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5963385);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.346195);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2893266);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5695649);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5953318);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.744164);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.649592);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.85873);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4808437);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.089044);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6291727);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.7382072);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.464724);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2612593);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.649922);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4574043);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.980716);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5513452);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.7592837);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1371537);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2549958);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3664565);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2517687);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2426239);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1596535);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2001347);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3811193);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08384207);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1791938);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2528216);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2843865);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974472);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2498087);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.189708);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3096729);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2261937);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2586888);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1926506);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.09507956);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1897283);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1478798);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3860025);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2040207);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2248987);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,79.61825);
   hNCpi0inFVres_stack_7->SetBinContent(2,88.82802);
   hNCpi0inFVres_stack_7->SetBinContent(3,78.83421);
   hNCpi0inFVres_stack_7->SetBinContent(4,76.23895);
   hNCpi0inFVres_stack_7->SetBinContent(5,70.35421);
   hNCpi0inFVres_stack_7->SetBinContent(6,73.86945);
   hNCpi0inFVres_stack_7->SetBinContent(7,76.48375);
   hNCpi0inFVres_stack_7->SetBinContent(8,71.25243);
   hNCpi0inFVres_stack_7->SetBinContent(9,76.21485);
   hNCpi0inFVres_stack_7->SetBinContent(10,72.24271);
   hNCpi0inFVres_stack_7->SetBinContent(11,70.60535);
   hNCpi0inFVres_stack_7->SetBinContent(12,84.05943);
   hNCpi0inFVres_stack_7->SetBinContent(13,82.49854);
   hNCpi0inFVres_stack_7->SetBinContent(14,81.72198);
   hNCpi0inFVres_stack_7->SetBinContent(15,82.0868);
   hNCpi0inFVres_stack_7->SetBinContent(16,80.67633);
   hNCpi0inFVres_stack_7->SetBinContent(17,75.27127);
   hNCpi0inFVres_stack_7->SetBinContent(18,77.88355);
   hNCpi0inFVres_stack_7->SetBinContent(19,77.83011);
   hNCpi0inFVres_stack_7->SetBinContent(20,72.46512);
   hNCpi0inFVres_stack_7->SetBinContent(21,75.34324);
   hNCpi0inFVres_stack_7->SetBinContent(22,76.26953);
   hNCpi0inFVres_stack_7->SetBinContent(23,81.15361);
   hNCpi0inFVres_stack_7->SetBinContent(24,85.32534);
   hNCpi0inFVres_stack_7->SetBinContent(25,84.81418);
   hNCpi0inFVres_stack_7->SetBinError(1,2.871392);
   hNCpi0inFVres_stack_7->SetBinError(2,3.184725);
   hNCpi0inFVres_stack_7->SetBinError(3,2.91315);
   hNCpi0inFVres_stack_7->SetBinError(4,2.899621);
   hNCpi0inFVres_stack_7->SetBinError(5,2.681074);
   hNCpi0inFVres_stack_7->SetBinError(6,2.759731);
   hNCpi0inFVres_stack_7->SetBinError(7,2.914936);
   hNCpi0inFVres_stack_7->SetBinError(8,2.766912);
   hNCpi0inFVres_stack_7->SetBinError(9,2.944497);
   hNCpi0inFVres_stack_7->SetBinError(10,2.770057);
   hNCpi0inFVres_stack_7->SetBinError(11,2.614938);
   hNCpi0inFVres_stack_7->SetBinError(12,3.021618);
   hNCpi0inFVres_stack_7->SetBinError(13,2.974663);
   hNCpi0inFVres_stack_7->SetBinError(14,2.925998);
   hNCpi0inFVres_stack_7->SetBinError(15,3.024503);
   hNCpi0inFVres_stack_7->SetBinError(16,2.910435);
   hNCpi0inFVres_stack_7->SetBinError(17,2.855719);
   hNCpi0inFVres_stack_7->SetBinError(18,2.944323);
   hNCpi0inFVres_stack_7->SetBinError(19,3.064791);
   hNCpi0inFVres_stack_7->SetBinError(20,2.65464);
   hNCpi0inFVres_stack_7->SetBinError(21,2.780417);
   hNCpi0inFVres_stack_7->SetBinError(22,2.656061);
   hNCpi0inFVres_stack_7->SetBinError(23,2.953003);
   hNCpi0inFVres_stack_7->SetBinError(24,3.056464);
   hNCpi0inFVres_stack_7->SetBinError(25,3.050647);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,15.26409);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.9167);
   hNCpi0inFVdis_stack_8->SetBinContent(3,18.3324);
   hNCpi0inFVdis_stack_8->SetBinContent(4,15.66464);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.37838);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.8);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.2277);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.19279);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.4741);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.27781);
   hNCpi0inFVdis_stack_8->SetBinContent(11,16.48962);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.55318);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.05417);
   hNCpi0inFVdis_stack_8->SetBinContent(14,19.22943);
   hNCpi0inFVdis_stack_8->SetBinContent(15,18.54975);
   hNCpi0inFVdis_stack_8->SetBinContent(16,18.03403);
   hNCpi0inFVdis_stack_8->SetBinContent(17,18.72566);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.20575);
   hNCpi0inFVdis_stack_8->SetBinContent(19,14.93706);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.10243);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.57591);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.7438);
   hNCpi0inFVdis_stack_8->SetBinContent(23,16.9472);
   hNCpi0inFVdis_stack_8->SetBinContent(24,18.11843);
   hNCpi0inFVdis_stack_8->SetBinContent(25,14.58469);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.328181);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.328017);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.47241);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.368797);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.225968);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.227538);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.375383);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.203067);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.253314);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.460277);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.407858);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.315435);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.489606);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.547255);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.549967);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.325019);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.519329);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.259162);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.293279);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.247811);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.113484);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.726115);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.368091);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.634655);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.21407);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1028605);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08634114);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1384211);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05782241);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05535072);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1817762);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06363495);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.0707117);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06587026);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1281576);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.04404794);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03195992);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1326073);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03246768);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01881452);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,35.72813);
   hCCpi0inFV_stack_10->SetBinContent(2,29.8616);
   hCCpi0inFV_stack_10->SetBinContent(3,30.77578);
   hCCpi0inFV_stack_10->SetBinContent(4,29.95396);
   hCCpi0inFV_stack_10->SetBinContent(5,24.30379);
   hCCpi0inFV_stack_10->SetBinContent(6,23.36124);
   hCCpi0inFV_stack_10->SetBinContent(7,26.72181);
   hCCpi0inFV_stack_10->SetBinContent(8,28.69044);
   hCCpi0inFV_stack_10->SetBinContent(9,25.1721);
   hCCpi0inFV_stack_10->SetBinContent(10,33.02873);
   hCCpi0inFV_stack_10->SetBinContent(11,35.4284);
   hCCpi0inFV_stack_10->SetBinContent(12,38.46798);
   hCCpi0inFV_stack_10->SetBinContent(13,38.1889);
   hCCpi0inFV_stack_10->SetBinContent(14,33.26827);
   hCCpi0inFV_stack_10->SetBinContent(15,29.00973);
   hCCpi0inFV_stack_10->SetBinContent(16,37.08642);
   hCCpi0inFV_stack_10->SetBinContent(17,26.71966);
   hCCpi0inFV_stack_10->SetBinContent(18,31.82627);
   hCCpi0inFV_stack_10->SetBinContent(19,30.95294);
   hCCpi0inFV_stack_10->SetBinContent(20,27.75452);
   hCCpi0inFV_stack_10->SetBinContent(21,26.22864);
   hCCpi0inFV_stack_10->SetBinContent(22,32.47279);
   hCCpi0inFV_stack_10->SetBinContent(23,29.10295);
   hCCpi0inFV_stack_10->SetBinContent(24,36.81118);
   hCCpi0inFV_stack_10->SetBinContent(25,35.00505);
   hCCpi0inFV_stack_10->SetBinError(1,3.007651);
   hCCpi0inFV_stack_10->SetBinError(2,2.731284);
   hCCpi0inFV_stack_10->SetBinError(3,2.802825);
   hCCpi0inFV_stack_10->SetBinError(4,2.730152);
   hCCpi0inFV_stack_10->SetBinError(5,2.357665);
   hCCpi0inFV_stack_10->SetBinError(6,2.45546);
   hCCpi0inFV_stack_10->SetBinError(7,2.580697);
   hCCpi0inFV_stack_10->SetBinError(8,2.677759);
   hCCpi0inFV_stack_10->SetBinError(9,2.483978);
   hCCpi0inFV_stack_10->SetBinError(10,2.9203);
   hCCpi0inFV_stack_10->SetBinError(11,3.060996);
   hCCpi0inFV_stack_10->SetBinError(12,3.123126);
   hCCpi0inFV_stack_10->SetBinError(13,3.09905);
   hCCpi0inFV_stack_10->SetBinError(14,2.916728);
   hCCpi0inFV_stack_10->SetBinError(15,2.664275);
   hCCpi0inFV_stack_10->SetBinError(16,3.001899);
   hCCpi0inFV_stack_10->SetBinError(17,2.570399);
   hCCpi0inFV_stack_10->SetBinError(18,2.768058);
   hCCpi0inFV_stack_10->SetBinError(19,2.826654);
   hCCpi0inFV_stack_10->SetBinError(20,2.633634);
   hCCpi0inFV_stack_10->SetBinError(21,2.581067);
   hCCpi0inFV_stack_10->SetBinError(22,2.901432);
   hCCpi0inFV_stack_10->SetBinError(23,2.707722);
   hCCpi0inFV_stack_10->SetBinError(24,3.009496);
   hCCpi0inFV_stack_10->SetBinError(25,2.958937);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,16.48761);
   hNCinFV_stack_11->SetBinContent(2,18.3233);
   hNCinFV_stack_11->SetBinContent(3,21.55625);
   hNCinFV_stack_11->SetBinContent(4,19.0746);
   hNCinFV_stack_11->SetBinContent(5,13.05915);
   hNCinFV_stack_11->SetBinContent(6,16.0297);
   hNCinFV_stack_11->SetBinContent(7,18.29468);
   hNCinFV_stack_11->SetBinContent(8,16.46803);
   hNCinFV_stack_11->SetBinContent(9,15.93842);
   hNCinFV_stack_11->SetBinContent(10,14.79803);
   hNCinFV_stack_11->SetBinContent(11,18.39287);
   hNCinFV_stack_11->SetBinContent(12,18.9504);
   hNCinFV_stack_11->SetBinContent(13,14.28862);
   hNCinFV_stack_11->SetBinContent(14,21.65116);
   hNCinFV_stack_11->SetBinContent(15,20.88073);
   hNCinFV_stack_11->SetBinContent(16,19.48062);
   hNCinFV_stack_11->SetBinContent(17,17.56883);
   hNCinFV_stack_11->SetBinContent(18,22.34696);
   hNCinFV_stack_11->SetBinContent(19,15.22377);
   hNCinFV_stack_11->SetBinContent(20,17.81173);
   hNCinFV_stack_11->SetBinContent(21,16.90248);
   hNCinFV_stack_11->SetBinContent(22,17.00406);
   hNCinFV_stack_11->SetBinContent(23,16.97886);
   hNCinFV_stack_11->SetBinContent(24,15.95885);
   hNCinFV_stack_11->SetBinContent(25,21.55961);
   hNCinFV_stack_11->SetBinError(1,2.348552);
   hNCinFV_stack_11->SetBinError(2,2.333384);
   hNCinFV_stack_11->SetBinError(3,2.528035);
   hNCinFV_stack_11->SetBinError(4,2.275872);
   hNCinFV_stack_11->SetBinError(5,2.025689);
   hNCinFV_stack_11->SetBinError(6,2.11455);
   hNCinFV_stack_11->SetBinError(7,2.134008);
   hNCinFV_stack_11->SetBinError(8,2.090417);
   hNCinFV_stack_11->SetBinError(9,2.152913);
   hNCinFV_stack_11->SetBinError(10,1.999507);
   hNCinFV_stack_11->SetBinError(11,2.331325);
   hNCinFV_stack_11->SetBinError(12,2.410301);
   hNCinFV_stack_11->SetBinError(13,1.95273);
   hNCinFV_stack_11->SetBinError(14,2.762969);
   hNCinFV_stack_11->SetBinError(15,2.413464);
   hNCinFV_stack_11->SetBinError(16,2.444767);
   hNCinFV_stack_11->SetBinError(17,2.212514);
   hNCinFV_stack_11->SetBinError(18,2.693921);
   hNCinFV_stack_11->SetBinError(19,2.008558);
   hNCinFV_stack_11->SetBinError(20,2.28804);
   hNCinFV_stack_11->SetBinError(21,2.159032);
   hNCinFV_stack_11->SetBinError(22,2.473577);
   hNCinFV_stack_11->SetBinError(23,2.235575);
   hNCinFV_stack_11->SetBinError(24,2.037825);
   hNCinFV_stack_11->SetBinError(25,2.681253);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,19.82536);
   hnumuCCinFV_stack_12->SetBinContent(2,21.30164);
   hnumuCCinFV_stack_12->SetBinContent(3,13.35971);
   hnumuCCinFV_stack_12->SetBinContent(4,18.27737);
   hnumuCCinFV_stack_12->SetBinContent(5,14.99473);
   hnumuCCinFV_stack_12->SetBinContent(6,13.05899);
   hnumuCCinFV_stack_12->SetBinContent(7,13.79341);
   hnumuCCinFV_stack_12->SetBinContent(8,15.66186);
   hnumuCCinFV_stack_12->SetBinContent(9,13.66498);
   hnumuCCinFV_stack_12->SetBinContent(10,14.76306);
   hnumuCCinFV_stack_12->SetBinContent(11,13.34143);
   hnumuCCinFV_stack_12->SetBinContent(12,18.18448);
   hnumuCCinFV_stack_12->SetBinContent(13,22.12952);
   hnumuCCinFV_stack_12->SetBinContent(14,22.66703);
   hnumuCCinFV_stack_12->SetBinContent(15,20.4347);
   hnumuCCinFV_stack_12->SetBinContent(16,17.44996);
   hnumuCCinFV_stack_12->SetBinContent(17,17.30097);
   hnumuCCinFV_stack_12->SetBinContent(18,17.45853);
   hnumuCCinFV_stack_12->SetBinContent(19,19.03478);
   hnumuCCinFV_stack_12->SetBinContent(20,22.9854);
   hnumuCCinFV_stack_12->SetBinContent(21,18.31229);
   hnumuCCinFV_stack_12->SetBinContent(22,15.29805);
   hnumuCCinFV_stack_12->SetBinContent(23,16.14092);
   hnumuCCinFV_stack_12->SetBinContent(24,14.06873);
   hnumuCCinFV_stack_12->SetBinContent(25,25.89589);
   hnumuCCinFV_stack_12->SetBinError(1,2.514462);
   hnumuCCinFV_stack_12->SetBinError(2,2.492739);
   hnumuCCinFV_stack_12->SetBinError(3,1.852511);
   hnumuCCinFV_stack_12->SetBinError(4,2.521436);
   hnumuCCinFV_stack_12->SetBinError(5,2.234);
   hnumuCCinFV_stack_12->SetBinError(6,1.819308);
   hnumuCCinFV_stack_12->SetBinError(7,1.965205);
   hnumuCCinFV_stack_12->SetBinError(8,2.157866);
   hnumuCCinFV_stack_12->SetBinError(9,1.913631);
   hnumuCCinFV_stack_12->SetBinError(10,2.475358);
   hnumuCCinFV_stack_12->SetBinError(11,1.856868);
   hnumuCCinFV_stack_12->SetBinError(12,2.346166);
   hnumuCCinFV_stack_12->SetBinError(13,3.078612);
   hnumuCCinFV_stack_12->SetBinError(14,2.606727);
   hnumuCCinFV_stack_12->SetBinError(15,2.575744);
   hnumuCCinFV_stack_12->SetBinError(16,2.569306);
   hnumuCCinFV_stack_12->SetBinError(17,2.201104);
   hnumuCCinFV_stack_12->SetBinError(18,2.359732);
   hnumuCCinFV_stack_12->SetBinError(19,2.734855);
   hnumuCCinFV_stack_12->SetBinError(20,3.302335);
   hnumuCCinFV_stack_12->SetBinError(21,3.448827);
   hnumuCCinFV_stack_12->SetBinError(22,1.985561);
   hnumuCCinFV_stack_12->SetBinError(23,2.16783);
   hnumuCCinFV_stack_12->SetBinError(24,1.907209);
   hnumuCCinFV_stack_12->SetBinError(25,3.069693);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,3.836492);
   hnueCCinFV_stack_13->SetBinContent(2,1.513463);
   hnueCCinFV_stack_13->SetBinContent(3,0.9516344);
   hnueCCinFV_stack_13->SetBinContent(4,1.811907);
   hnueCCinFV_stack_13->SetBinContent(5,2.945977);
   hnueCCinFV_stack_13->SetBinContent(6,1.372374);
   hnueCCinFV_stack_13->SetBinContent(7,2.39247);
   hnueCCinFV_stack_13->SetBinContent(8,1.00044);
   hnueCCinFV_stack_13->SetBinContent(9,2.672557);
   hnueCCinFV_stack_13->SetBinContent(10,1.376967);
   hnueCCinFV_stack_13->SetBinContent(11,1.008167);
   hnueCCinFV_stack_13->SetBinContent(12,1.340333);
   hnueCCinFV_stack_13->SetBinContent(13,1.020145);
   hnueCCinFV_stack_13->SetBinContent(14,2.010489);
   hnueCCinFV_stack_13->SetBinContent(16,1.725388);
   hnueCCinFV_stack_13->SetBinContent(17,2.190047);
   hnueCCinFV_stack_13->SetBinContent(18,2.701874);
   hnueCCinFV_stack_13->SetBinContent(19,0.7996369);
   hnueCCinFV_stack_13->SetBinContent(20,1.978479);
   hnueCCinFV_stack_13->SetBinContent(21,1.886614);
   hnueCCinFV_stack_13->SetBinContent(22,0.4334879);
   hnueCCinFV_stack_13->SetBinContent(23,1.271851);
   hnueCCinFV_stack_13->SetBinContent(24,2.184159);
   hnueCCinFV_stack_13->SetBinContent(25,1.320205);
   hnueCCinFV_stack_13->SetBinError(1,1.665403);
   hnueCCinFV_stack_13->SetBinError(2,0.6488335);
   hnueCCinFV_stack_13->SetBinError(3,0.4905563);
   hnueCCinFV_stack_13->SetBinError(4,1.161994);
   hnueCCinFV_stack_13->SetBinError(5,0.9655673);
   hnueCCinFV_stack_13->SetBinError(6,0.5752113);
   hnueCCinFV_stack_13->SetBinError(7,0.8927641);
   hnueCCinFV_stack_13->SetBinError(8,0.6603813);
   hnueCCinFV_stack_13->SetBinError(9,0.9022151);
   hnueCCinFV_stack_13->SetBinError(10,0.9271982);
   hnueCCinFV_stack_13->SetBinError(11,0.7668684);
   hnueCCinFV_stack_13->SetBinError(12,0.629982);
   hnueCCinFV_stack_13->SetBinError(13,0.5493492);
   hnueCCinFV_stack_13->SetBinError(14,0.732511);
   hnueCCinFV_stack_13->SetBinError(16,0.7419992);
   hnueCCinFV_stack_13->SetBinError(17,0.7492788);
   hnueCCinFV_stack_13->SetBinError(18,1.444123);
   hnueCCinFV_stack_13->SetBinError(19,0.4930632);
   hnueCCinFV_stack_13->SetBinError(20,0.8802064);
   hnueCCinFV_stack_13->SetBinError(21,0.6897859);
   hnueCCinFV_stack_13->SetBinError(22,0.3078282);
   hnueCCinFV_stack_13->SetBinError(23,0.5703318);
   hnueCCinFV_stack_13->SetBinError(24,0.8896344);
   hnueCCinFV_stack_13->SetBinError(25,0.5457101);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__5->SetBinContent(1,213.9482);
   hmcerror__5->SetBinContent(2,216.2826);
   hmcerror__5->SetBinContent(3,206.7934);
   hmcerror__5->SetBinContent(4,205.1462);
   hmcerror__5->SetBinContent(5,186.0218);
   hmcerror__5->SetBinContent(6,189.3881);
   hmcerror__5->SetBinContent(7,216.5092);
   hmcerror__5->SetBinContent(8,196.6869);
   hmcerror__5->SetBinContent(9,199.4248);
   hmcerror__5->SetBinContent(10,205.3915);
   hmcerror__5->SetBinContent(11,194.8807);
   hmcerror__5->SetBinContent(12,216.7591);
   hmcerror__5->SetBinContent(13,215.8664);
   hmcerror__5->SetBinContent(14,216.4206);
   hmcerror__5->SetBinContent(15,207.0534);
   hmcerror__5->SetBinContent(16,222.89);
   hmcerror__5->SetBinContent(17,202.6968);
   hmcerror__5->SetBinContent(18,222.2225);
   hmcerror__5->SetBinContent(19,202.6013);
   hmcerror__5->SetBinContent(20,199.485);
   hmcerror__5->SetBinContent(21,197.5817);
   hmcerror__5->SetBinContent(22,203.5407);
   hmcerror__5->SetBinContent(23,206.1523);
   hmcerror__5->SetBinContent(24,214.6706);
   hmcerror__5->SetBinContent(25,226.5379);
   hmcerror__5->SetBinError(1,57.89117);
   hmcerror__5->SetBinError(2,61.52828);
   hmcerror__5->SetBinError(3,58.3901);
   hmcerror__5->SetBinError(4,58.7979);
   hmcerror__5->SetBinError(5,52.44074);
   hmcerror__5->SetBinError(6,53.89994);
   hmcerror__5->SetBinError(7,58.57871);
   hmcerror__5->SetBinError(8,56.89223);
   hmcerror__5->SetBinError(9,56.33404);
   hmcerror__5->SetBinError(10,56.04499);
   hmcerror__5->SetBinError(11,55.45913);
   hmcerror__5->SetBinError(12,64.85252);
   hmcerror__5->SetBinError(13,61.36935);
   hmcerror__5->SetBinError(14,61.62493);
   hmcerror__5->SetBinError(15,61.35);
   hmcerror__5->SetBinError(16,62.87479);
   hmcerror__5->SetBinError(17,57.10032);
   hmcerror__5->SetBinError(18,56.7238);
   hmcerror__5->SetBinError(19,63.89652);
   hmcerror__5->SetBinError(20,63.46769);
   hmcerror__5->SetBinError(21,54.73542);
   hmcerror__5->SetBinError(22,59.56732);
   hmcerror__5->SetBinError(23,57.47206);
   hmcerror__5->SetBinError(24,62.06712);
   hmcerror__5->SetBinError(25,62.13335);
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
   220,
   193,
   208,
   199,
   187,
   179,
   187,
   207,
   173,
   198,
   208,
   205,
   214,
   223,
   196,
   202,
   196,
   187,
   191,
   191,
   180,
   199,
   249,
   195,
   187};
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
   14.8324,
   13.89244,
   14.42221,
   14.10674,
   13.67479,
   13.37909,
   13.67479,
   14.38749,
   13.15295,
   14.07125,
   14.42221,
   14.31782,
   14.62874,
   14.93318,
   14,
   14.21267,
   14,
   13.67479,
   13.82027,
   13.82027,
   13.41641,
   14.10674,
   15.77973,
   13.96424,
   13.67479};
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
   14.8324,
   13.89244,
   14.42221,
   14.10674,
   13.67479,
   13.37909,
   13.67479,
   14.38749,
   13.15295,
   14.07125,
   14.42221,
   14.31782,
   14.62874,
   14.93318,
   14,
   14.21267,
   14,
   13.67479,
   13.82027,
   13.82027,
   13.41641,
   14.10674,
   15.77973,
   13.96424,
   13.67479};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(149.3538);
   Graph_Graph3005->SetMaximum(275.273);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.8/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all");
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
   0.270585,
   0.2844809,
   0.2823596,
   0.2866146,
   0.2819064,
   0.2846004,
   0.27056,
   0.2892528,
   0.2824827,
   0.272869,
   0.2845799,
   0.2991917,
   0.2842932,
   0.2847461,
   0.2963003,
   0.2820888,
   0.2817031,
   0.2552568,
   0.3153805,
   0.3181577,
   0.2770268,
   0.2926556,
   0.2787844,
   0.2891273,
   0.2742735};
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
   0.270585,
   0.2844809,
   0.2823596,
   0.2866146,
   0.2819064,
   0.2846004,
   0.27056,
   0.2892528,
   0.2824827,
   0.272869,
   0.2845799,
   0.2991917,
   0.2842932,
   0.2847461,
   0.2963003,
   0.2820888,
   0.2817031,
   0.2552568,
   0.3153805,
   0.3181577,
   0.2770268,
   0.2926556,
   0.2787844,
   0.2891273,
   0.2742735};
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
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   0.2555623,
   0.2674635,
   0.2590643,
   0.2557439,
   0.256922,
   0.2600251,
   0.2528581,
   0.2446345,
   0.2522343,
   0.241661,
   0.2667463,
   0.2692066,
   0.2618393,
   0.2614416,
   0.2675886,
   0.2652597,
   0.2623662,
   0.2388581,
   0.2674669,
   0.2749087,
   0.2563851,
   0.2643416,
   0.2555996,
   0.2658706,
   0.2512918};
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
   0.2555623,
   0.2674635,
   0.2590643,
   0.2557439,
   0.256922,
   0.2600251,
   0.2528581,
   0.2446345,
   0.2522343,
   0.241661,
   0.2667463,
   0.2692066,
   0.2618393,
   0.2614416,
   0.2675886,
   0.2652597,
   0.2623662,
   0.2388581,
   0.2674669,
   0.2749087,
   0.2563851,
   0.2643416,
   0.2555996,
   0.2658706,
   0.2512918};
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
   1.028286,
   0.8923509,
   1.005835,
   0.9700398,
   1.005258,
   0.945149,
   0.8637048,
   1.052434,
   0.8674951,
   0.9640125,
   1.06732,
   0.9457505,
   0.9913539,
   1.030401,
   0.9466155,
   0.9062765,
   0.9669613,
   0.8414989,
   0.942738,
   0.9574655,
   0.9110155,
   0.9776915,
   1.207845,
   0.9083685,
   0.8254688};
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
   0.06932706,
   0.06423282,
   0.06974211,
   0.0687643,
   0.07351178,
   0.07064376,
   0.06316035,
   0.07314924,
   0.06595443,
   0.06850939,
   0.07400531,
   0.06605408,
   0.06776756,
   0.06900076,
   0.0676154,
   0.06376539,
   0.06906866,
   0.0615365,
   0.06821413,
   0.06927978,
   0.06790309,
   0.06930672,
   0.07654405,
   0.06504962,
   0.06036425};
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
   0.06932706,
   0.06423282,
   0.06974211,
   0.0687643,
   0.07351178,
   0.07064376,
   0.06316035,
   0.07314924,
   0.06595443,
   0.06850939,
   0.07400531,
   0.06605408,
   0.06776756,
   0.06900076,
   0.0676154,
   0.06376539,
   0.06906866,
   0.0615365,
   0.06821413,
   0.06927978,
   0.06790309,
   0.06930672,
   0.07654405,
   0.06504962,
   0.06036425};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.7131761);
   Graph_Graph3008->SetMaximum(1.336317);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

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

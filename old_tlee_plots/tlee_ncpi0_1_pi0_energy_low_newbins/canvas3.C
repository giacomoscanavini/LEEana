#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 19:43:28 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-4.538292,338.4615,501.8396);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__7->SetBinContent(1,117.3597);
   hmc__7->SetBinContent(2,219.8195);
   hmc__7->SetBinContent(3,226.9146);
   hmc__7->SetBinContent(4,205.9881);
   hmc__7->SetBinContent(5,165.5381);
   hmc__7->SetBinContent(6,157.7713);
   hmc__7->SetBinContent(7,113.0492);
   hmc__7->SetBinContent(8,82.85565);
   hmc__7->SetBinContent(9,60.86707);
   hmc__7->SetBinContent(10,66.66245);
   hmc__7->SetBinContent(11,40.56467);
   hmc__7->SetBinContent(12,34.74864);
   hmc__7->SetBinContent(13,27.40314);
   hmc__7->SetBinContent(14,14.48255);
   hmc__7->SetBinContent(15,10.66644);
   hmc__7->SetBinContent(16,12.33216);
   hmc__7->SetBinContent(17,6.915637);
   hmc__7->SetBinContent(18,5.960039);
   hmc__7->SetBinContent(19,5.844434);
   hmc__7->SetBinContent(20,4.475509);
   hmc__7->SetBinContent(21,13.93457);
   hmc__7->SetBinError(1,32.78226);
   hmc__7->SetBinError(2,53.70707);
   hmc__7->SetBinError(3,48.598);
   hmc__7->SetBinError(4,50.00319);
   hmc__7->SetBinError(5,43.96137);
   hmc__7->SetBinError(6,42.04569);
   hmc__7->SetBinError(7,38.49999);
   hmc__7->SetBinError(8,25.54807);
   hmc__7->SetBinError(9,22.3111);
   hmc__7->SetBinError(10,24.02527);
   hmc__7->SetBinError(11,17.89477);
   hmc__7->SetBinError(12,14.69956);
   hmc__7->SetBinError(13,16.15116);
   hmc__7->SetBinError(14,12.32976);
   hmc__7->SetBinError(15,10.51632);
   hmc__7->SetBinError(16,8.707332);
   hmc__7->SetBinError(17,10.05428);
   hmc__7->SetBinError(18,5.878634);
   hmc__7->SetBinError(19,5.918813);
   hmc__7->SetBinError(20,4.744154);
   hmc__7->SetBinError(21,7.596085);
   hmc__7->SetMinimum(-4.538292);
   hmc__7->SetMaximum(476.5207);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,300);
   hs3_stack_3->SetMinimum(-2.292092e-08);
   hs3_stack_3->SetMaximum(238.2603);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,3.117226);
   hbadmatch_stack_1->SetBinContent(2,6.740408);
   hbadmatch_stack_1->SetBinContent(3,6.300349);
   hbadmatch_stack_1->SetBinContent(4,8.350552);
   hbadmatch_stack_1->SetBinContent(5,6.959106);
   hbadmatch_stack_1->SetBinContent(6,5.517179);
   hbadmatch_stack_1->SetBinContent(7,3.522936);
   hbadmatch_stack_1->SetBinContent(8,2.975645);
   hbadmatch_stack_1->SetBinContent(9,2.160099);
   hbadmatch_stack_1->SetBinContent(10,2.269122);
   hbadmatch_stack_1->SetBinContent(11,1.566636);
   hbadmatch_stack_1->SetBinContent(12,1.363097);
   hbadmatch_stack_1->SetBinContent(13,0.6947839);
   hbadmatch_stack_1->SetBinContent(15,0.8098258);
   hbadmatch_stack_1->SetBinContent(16,0.6056442);
   hbadmatch_stack_1->SetBinContent(18,0.7363783);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.908917);
   hbadmatch_stack_1->SetBinError(2,1.565365);
   hbadmatch_stack_1->SetBinError(3,1.289196);
   hbadmatch_stack_1->SetBinError(4,1.609277);
   hbadmatch_stack_1->SetBinError(5,1.506894);
   hbadmatch_stack_1->SetBinError(6,1.337979);
   hbadmatch_stack_1->SetBinError(7,0.9229615);
   hbadmatch_stack_1->SetBinError(8,0.8383501);
   hbadmatch_stack_1->SetBinError(9,0.771078);
   hbadmatch_stack_1->SetBinError(10,0.9022805);
   hbadmatch_stack_1->SetBinError(11,0.6266897);
   hbadmatch_stack_1->SetBinError(12,0.6943985);
   hbadmatch_stack_1->SetBinError(13,0.4329969);
   hbadmatch_stack_1->SetBinError(15,0.4988381);
   hbadmatch_stack_1->SetBinError(16,0.3499808);
   hbadmatch_stack_1->SetBinError(18,0.5222028);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,23.45248);
   hext_stack_2->SetBinContent(2,56.87794);
   hext_stack_2->SetBinContent(3,63.16439);
   hext_stack_2->SetBinContent(4,48.04854);
   hext_stack_2->SetBinContent(5,21.37205);
   hext_stack_2->SetBinContent(6,23.61688);
   hext_stack_2->SetBinContent(7,15.30343);
   hext_stack_2->SetBinContent(8,9.697655);
   hext_stack_2->SetBinContent(9,4.132192);
   hext_stack_2->SetBinContent(10,8.414427);
   hext_stack_2->SetBinContent(11,3.166181);
   hext_stack_2->SetBinContent(12,2.014225);
   hext_stack_2->SetBinContent(13,0.8131978);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,2.973055);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,1.868591);
   hext_stack_2->SetBinError(1,3.263726);
   hext_stack_2->SetBinError(2,5.031276);
   hext_stack_2->SetBinError(3,5.517465);
   hext_stack_2->SetBinError(4,4.865868);
   hext_stack_2->SetBinError(5,3.093052);
   hext_stack_2->SetBinError(6,3.282085);
   hext_stack_2->SetBinError(7,2.598801);
   hext_stack_2->SetBinError(8,2.15278);
   hext_stack_2->SetBinError(9,1.282292);
   hext_stack_2->SetBinError(10,1.95221);
   hext_stack_2->SetBinError(11,1.061777);
   hext_stack_2->SetBinError(12,1.045894);
   hext_stack_2->SetBinError(13,0.5750177);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,1.346105);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.840497);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,1.538269);
   hdirt_stack_3->SetBinContent(2,6.196391);
   hdirt_stack_3->SetBinContent(3,3.644718);
   hdirt_stack_3->SetBinContent(4,3.041232);
   hdirt_stack_3->SetBinContent(5,3.973557);
   hdirt_stack_3->SetBinContent(6,0.9499705);
   hdirt_stack_3->SetBinContent(7,1.417716);
   hdirt_stack_3->SetBinContent(8,1.496275);
   hdirt_stack_3->SetBinContent(9,0.4762587);
   hdirt_stack_3->SetBinContent(11,0.6177251);
   hdirt_stack_3->SetBinContent(13,0.4142698);
   hdirt_stack_3->SetBinError(1,0.6499973);
   hdirt_stack_3->SetBinError(2,1.306868);
   hdirt_stack_3->SetBinError(3,0.9839168);
   hdirt_stack_3->SetBinError(4,1.167538);
   hdirt_stack_3->SetBinError(5,1.029834);
   hdirt_stack_3->SetBinError(6,0.4962669);
   hdirt_stack_3->SetBinError(7,0.6091131);
   hdirt_stack_3->SetBinError(8,0.7089847);
   hdirt_stack_3->SetBinError(9,0.3652866);
   hdirt_stack_3->SetBinError(11,0.4549508);
   hdirt_stack_3->SetBinError(13,0.4142698);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,23.43946);
   houtFV_stack_4->SetBinContent(2,47.18702);
   houtFV_stack_4->SetBinContent(3,49.17558);
   houtFV_stack_4->SetBinContent(4,42.90731);
   houtFV_stack_4->SetBinContent(5,35.16398);
   houtFV_stack_4->SetBinContent(6,30.36736);
   houtFV_stack_4->SetBinContent(7,17.56175);
   houtFV_stack_4->SetBinContent(8,12.18619);
   houtFV_stack_4->SetBinContent(9,9.534468);
   houtFV_stack_4->SetBinContent(10,10.57546);
   houtFV_stack_4->SetBinContent(11,7.087821);
   houtFV_stack_4->SetBinContent(12,6.429664);
   houtFV_stack_4->SetBinContent(13,5.506404);
   houtFV_stack_4->SetBinContent(14,3.325002);
   houtFV_stack_4->SetBinContent(15,0.7336084);
   houtFV_stack_4->SetBinContent(16,1.808125);
   houtFV_stack_4->SetBinContent(17,1.521869);
   houtFV_stack_4->SetBinContent(18,1.574709);
   houtFV_stack_4->SetBinContent(19,0.6803553);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,1.58111);
   houtFV_stack_4->SetBinError(1,2.404802);
   houtFV_stack_4->SetBinError(2,3.415116);
   houtFV_stack_4->SetBinError(3,3.545718);
   houtFV_stack_4->SetBinError(4,3.532428);
   houtFV_stack_4->SetBinError(5,3.01803);
   houtFV_stack_4->SetBinError(6,2.828498);
   houtFV_stack_4->SetBinError(7,2.066032);
   houtFV_stack_4->SetBinError(8,1.768107);
   houtFV_stack_4->SetBinError(9,1.519694);
   houtFV_stack_4->SetBinError(10,1.689282);
   houtFV_stack_4->SetBinError(11,1.341808);
   houtFV_stack_4->SetBinError(12,1.440448);
   houtFV_stack_4->SetBinError(13,1.237768);
   houtFV_stack_4->SetBinError(14,0.943693);
   houtFV_stack_4->SetBinError(15,0.4394482);
   houtFV_stack_4->SetBinError(16,0.6089965);
   houtFV_stack_4->SetBinError(17,0.6410216);
   houtFV_stack_4->SetBinError(18,0.8043901);
   houtFV_stack_4->SetBinError(19,0.4810838);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.7769607);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.344597);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.908226);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.114279);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.007435);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.645901);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.353262);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5819772);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7698691);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9422302);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9041596);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3644458);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4817998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.124488);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3687109);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1977595);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.07441414);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.09901901);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4844061);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4070031);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4986973);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5126763);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3330099);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6080238);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.461795);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1898456);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.33904);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3772721);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3808367);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1080553);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.200592);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.09351075);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2052779);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1715382);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04466495);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05740778);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3525195);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.186488);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1157774);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3818133);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3857434);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08341822);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1074635);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05367815);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.04236947);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08587139);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04496329);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1741373);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1606368);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04830117);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04952566);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04027067);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03025005);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,15.09273);
   hNCpi0inFVres_stack_7->SetBinContent(2,23.17685);
   hNCpi0inFVres_stack_7->SetBinContent(3,27.64971);
   hNCpi0inFVres_stack_7->SetBinContent(4,29.97688);
   hNCpi0inFVres_stack_7->SetBinContent(5,25.17316);
   hNCpi0inFVres_stack_7->SetBinContent(6,23.86175);
   hNCpi0inFVres_stack_7->SetBinContent(7,16.06754);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.98714);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.61997);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.24214);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.699431);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.264182);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.009233);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.803848);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.074081);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.837893);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.506559);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.041884);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5885522);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.211585);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.340242);
   hNCpi0inFVres_stack_7->SetBinError(1,1.40626);
   hNCpi0inFVres_stack_7->SetBinError(2,1.462116);
   hNCpi0inFVres_stack_7->SetBinError(3,1.692478);
   hNCpi0inFVres_stack_7->SetBinError(4,1.77955);
   hNCpi0inFVres_stack_7->SetBinError(5,1.489545);
   hNCpi0inFVres_stack_7->SetBinError(6,1.515136);
   hNCpi0inFVres_stack_7->SetBinError(7,1.247444);
   hNCpi0inFVres_stack_7->SetBinError(8,1.167871);
   hNCpi0inFVres_stack_7->SetBinError(9,1.044953);
   hNCpi0inFVres_stack_7->SetBinError(10,1.059904);
   hNCpi0inFVres_stack_7->SetBinError(11,0.717378);
   hNCpi0inFVres_stack_7->SetBinError(12,0.808396);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6242627);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3561633);
   hNCpi0inFVres_stack_7->SetBinError(15,0.465326);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4479979);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1659493);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3507461);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2309368);
   hNCpi0inFVres_stack_7->SetBinError(20,0.0688784);
   hNCpi0inFVres_stack_7->SetBinError(21,0.366523);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.332715);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.418025);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.646094);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.06204);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.241323);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.826196);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.093686);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.958278);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.285354);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.880957);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.231809);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.143281);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.495749);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.167537);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6008667);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.789614);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.326396);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.2081593);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.30047);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.100758);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.839372);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7640704);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7405082);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7609363);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9173777);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.338224);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.031021);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7492399);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8904549);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.449331);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6216315);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5961895);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8401034);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4184248);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.537845);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2837007);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4257634);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1139817);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.09622158);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1646687);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6890395);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6005705);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,18.7142);
   hCCpi0inFV_stack_10->SetBinContent(2,33.61651);
   hCCpi0inFV_stack_10->SetBinContent(3,30.60636);
   hCCpi0inFV_stack_10->SetBinContent(4,35.73865);
   hCCpi0inFV_stack_10->SetBinContent(5,34.43373);
   hCCpi0inFV_stack_10->SetBinContent(6,37.82416);
   hCCpi0inFV_stack_10->SetBinContent(7,27.6783);
   hCCpi0inFV_stack_10->SetBinContent(8,22.03217);
   hCCpi0inFV_stack_10->SetBinContent(9,15.52826);
   hCCpi0inFV_stack_10->SetBinContent(10,18.32916);
   hCCpi0inFV_stack_10->SetBinContent(11,11.49117);
   hCCpi0inFV_stack_10->SetBinContent(12,8.436076);
   hCCpi0inFV_stack_10->SetBinContent(13,6.038124);
   hCCpi0inFV_stack_10->SetBinContent(14,2.835772);
   hCCpi0inFV_stack_10->SetBinContent(15,3.074514);
   hCCpi0inFV_stack_10->SetBinContent(16,2.687587);
   hCCpi0inFV_stack_10->SetBinContent(17,2.889025);
   hCCpi0inFV_stack_10->SetBinContent(18,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(19,1.717185);
   hCCpi0inFV_stack_10->SetBinContent(20,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(21,3.321102);
   hCCpi0inFV_stack_10->SetBinError(1,2.209857);
   hCCpi0inFV_stack_10->SetBinError(2,2.972282);
   hCCpi0inFV_stack_10->SetBinError(3,2.746409);
   hCCpi0inFV_stack_10->SetBinError(4,3.005333);
   hCCpi0inFV_stack_10->SetBinError(5,3.002634);
   hCCpi0inFV_stack_10->SetBinError(6,3.118238);
   hCCpi0inFV_stack_10->SetBinError(7,2.617785);
   hCCpi0inFV_stack_10->SetBinError(8,2.325343);
   hCCpi0inFV_stack_10->SetBinError(9,1.968385);
   hCCpi0inFV_stack_10->SetBinError(10,2.1942);
   hCCpi0inFV_stack_10->SetBinError(11,1.660093);
   hCCpi0inFV_stack_10->SetBinError(12,1.527742);
   hCCpi0inFV_stack_10->SetBinError(13,1.277952);
   hCCpi0inFV_stack_10->SetBinError(14,0.808577);
   hCCpi0inFV_stack_10->SetBinError(15,0.920955);
   hCCpi0inFV_stack_10->SetBinError(16,0.7975418);
   hCCpi0inFV_stack_10->SetBinError(17,0.7845188);
   hCCpi0inFV_stack_10->SetBinError(18,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(19,0.6217711);
   hCCpi0inFV_stack_10->SetBinError(20,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(21,0.9204367);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,4.885413);
   hNCinFV_stack_11->SetBinContent(2,4.896242);
   hNCinFV_stack_11->SetBinContent(3,4.794016);
   hNCinFV_stack_11->SetBinContent(4,4.924452);
   hNCinFV_stack_11->SetBinContent(5,5.892697);
   hNCinFV_stack_11->SetBinContent(6,7.484063);
   hNCinFV_stack_11->SetBinContent(7,7.00022);
   hNCinFV_stack_11->SetBinContent(8,5.275221);
   hNCinFV_stack_11->SetBinContent(9,3.907045);
   hNCinFV_stack_11->SetBinContent(10,4.558689);
   hNCinFV_stack_11->SetBinContent(11,4.103139);
   hNCinFV_stack_11->SetBinContent(12,2.947865);
   hNCinFV_stack_11->SetBinContent(13,3.587924);
   hNCinFV_stack_11->SetBinContent(14,0.7810513);
   hNCinFV_stack_11->SetBinContent(15,0.9942025);
   hNCinFV_stack_11->SetBinContent(16,1.165776);
   hNCinFV_stack_11->SetBinContent(17,0.556244);
   hNCinFV_stack_11->SetBinContent(18,0.6568091);
   hNCinFV_stack_11->SetBinContent(19,0.6895752);
   hNCinFV_stack_11->SetBinContent(20,0.3257984);
   hNCinFV_stack_11->SetBinContent(21,0.785171);
   hNCinFV_stack_11->SetBinError(1,1.139506);
   hNCinFV_stack_11->SetBinError(2,1.150641);
   hNCinFV_stack_11->SetBinError(3,1.043736);
   hNCinFV_stack_11->SetBinError(4,1.293838);
   hNCinFV_stack_11->SetBinError(5,1.071244);
   hNCinFV_stack_11->SetBinError(6,1.515676);
   hNCinFV_stack_11->SetBinError(7,1.499545);
   hNCinFV_stack_11->SetBinError(8,1.236079);
   hNCinFV_stack_11->SetBinError(9,1.072573);
   hNCinFV_stack_11->SetBinError(10,1.08407);
   hNCinFV_stack_11->SetBinError(11,1.210304);
   hNCinFV_stack_11->SetBinError(12,0.9528015);
   hNCinFV_stack_11->SetBinError(13,1.285699);
   hNCinFV_stack_11->SetBinError(14,0.4614337);
   hNCinFV_stack_11->SetBinError(15,0.5109051);
   hNCinFV_stack_11->SetBinError(16,0.5091869);
   hNCinFV_stack_11->SetBinError(17,0.556244);
   hNCinFV_stack_11->SetBinError(18,0.4108499);
   hNCinFV_stack_11->SetBinError(19,0.3540286);
   hNCinFV_stack_11->SetBinError(20,0.2352857);
   hNCinFV_stack_11->SetBinError(21,0.3925882);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,20.20152);
   hnumuCCinFV_stack_12->SetBinContent(2,29.23536);
   hnumuCCinFV_stack_12->SetBinContent(3,30.42868);
   hnumuCCinFV_stack_12->SetBinContent(4,23.53041);
   hnumuCCinFV_stack_12->SetBinContent(5,20.73409);
   hnumuCCinFV_stack_12->SetBinContent(6,20.08065);
   hnumuCCinFV_stack_12->SetBinContent(7,18.39341);
   hnumuCCinFV_stack_12->SetBinContent(8,9.423527);
   hnumuCCinFV_stack_12->SetBinContent(9,10.70363);
   hnumuCCinFV_stack_12->SetBinContent(10,8.045286);
   hnumuCCinFV_stack_12->SetBinContent(11,4.039598);
   hnumuCCinFV_stack_12->SetBinContent(12,4.058098);
   hnumuCCinFV_stack_12->SetBinContent(13,4.52225);
   hnumuCCinFV_stack_12->SetBinContent(14,3.469636);
   hnumuCCinFV_stack_12->SetBinContent(15,1.804334);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(18,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(19,0.7657652);
   hnumuCCinFV_stack_12->SetBinContent(20,0.8753801);
   hnumuCCinFV_stack_12->SetBinContent(21,2.677293);
   hnumuCCinFV_stack_12->SetBinError(1,2.776735);
   hnumuCCinFV_stack_12->SetBinError(2,3.089395);
   hnumuCCinFV_stack_12->SetBinError(3,3.321289);
   hnumuCCinFV_stack_12->SetBinError(4,2.658213);
   hnumuCCinFV_stack_12->SetBinError(5,2.718951);
   hnumuCCinFV_stack_12->SetBinError(6,2.406826);
   hnumuCCinFV_stack_12->SetBinError(7,3.508098);
   hnumuCCinFV_stack_12->SetBinError(8,1.545781);
   hnumuCCinFV_stack_12->SetBinError(9,1.667902);
   hnumuCCinFV_stack_12->SetBinError(10,1.446835);
   hnumuCCinFV_stack_12->SetBinError(11,1.048748);
   hnumuCCinFV_stack_12->SetBinError(12,0.9830309);
   hnumuCCinFV_stack_12->SetBinError(13,1.107609);
   hnumuCCinFV_stack_12->SetBinError(14,0.9624002);
   hnumuCCinFV_stack_12->SetBinError(15,0.602721);
   hnumuCCinFV_stack_12->SetBinError(16,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(17,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(18,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(19,0.4548787);
   hnumuCCinFV_stack_12->SetBinError(20,0.5191111);
   hnumuCCinFV_stack_12->SetBinError(21,0.8428598);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,1.222256);
   hnueCCinFV_stack_13->SetBinContent(2,4.380018);
   hnueCCinFV_stack_13->SetBinContent(3,2.24164);
   hnueCCinFV_stack_13->SetBinContent(5,0.536893);
   hnueCCinFV_stack_13->SetBinContent(6,0.8064182);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.4138155);
   hnueCCinFV_stack_13->SetBinError(1,0.5978286);
   hnueCCinFV_stack_13->SetBinError(2,1.906861);
   hnueCCinFV_stack_13->SetBinError(3,1.287874);
   hnueCCinFV_stack_13->SetBinError(5,0.3929602);
   hnueCCinFV_stack_13->SetBinError(6,0.4036537);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.3152389);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.2929666);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__8->SetBinContent(1,117.3597);
   hmcerror__8->SetBinContent(2,219.8195);
   hmcerror__8->SetBinContent(3,226.9146);
   hmcerror__8->SetBinContent(4,205.9881);
   hmcerror__8->SetBinContent(5,165.5381);
   hmcerror__8->SetBinContent(6,157.7713);
   hmcerror__8->SetBinContent(7,113.0492);
   hmcerror__8->SetBinContent(8,82.85565);
   hmcerror__8->SetBinContent(9,60.86707);
   hmcerror__8->SetBinContent(10,66.66245);
   hmcerror__8->SetBinContent(11,40.56467);
   hmcerror__8->SetBinContent(12,34.74864);
   hmcerror__8->SetBinContent(13,27.40314);
   hmcerror__8->SetBinContent(14,14.48255);
   hmcerror__8->SetBinContent(15,10.66644);
   hmcerror__8->SetBinContent(16,12.33216);
   hmcerror__8->SetBinContent(17,6.915637);
   hmcerror__8->SetBinContent(18,5.960039);
   hmcerror__8->SetBinContent(19,5.844434);
   hmcerror__8->SetBinContent(20,4.475509);
   hmcerror__8->SetBinContent(21,13.93457);
   hmcerror__8->SetBinError(1,32.78226);
   hmcerror__8->SetBinError(2,53.70707);
   hmcerror__8->SetBinError(3,48.598);
   hmcerror__8->SetBinError(4,50.00319);
   hmcerror__8->SetBinError(5,43.96137);
   hmcerror__8->SetBinError(6,42.04569);
   hmcerror__8->SetBinError(7,38.49999);
   hmcerror__8->SetBinError(8,25.54807);
   hmcerror__8->SetBinError(9,22.3111);
   hmcerror__8->SetBinError(10,24.02527);
   hmcerror__8->SetBinError(11,17.89477);
   hmcerror__8->SetBinError(12,14.69956);
   hmcerror__8->SetBinError(13,16.15116);
   hmcerror__8->SetBinError(14,12.32976);
   hmcerror__8->SetBinError(15,10.51632);
   hmcerror__8->SetBinError(16,8.707332);
   hmcerror__8->SetBinError(17,10.05428);
   hmcerror__8->SetBinError(18,5.878634);
   hmcerror__8->SetBinError(19,5.918813);
   hmcerror__8->SetBinError(20,4.744154);
   hmcerror__8->SetBinError(21,7.596085);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3009[20] = {
   110,
   205,
   221,
   193,
   185,
   132,
   113,
   80,
   52,
   41,
   28,
   29,
   11,
   21,
   14,
   8,
   8,
   3,
   1,
   3};
   Double_t _felx3009[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3009[20] = {
   10.48809,
   14.31782,
   14.86607,
   13.89244,
   13.60147,
   11.48913,
   10.63015,
   9.0683,
   7.3419,
   6.5384,
   5.4358,
   5.5285,
   3.4975,
   4.7354,
   3.9102,
   3.0307,
   3.0307,
   2.143368,
   1,
   2.143368};
   Double_t _fehx3009[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3009[20] = {
   10.48809,
   14.31782,
   14.86607,
   13.89244,
   13.60147,
   11.48913,
   10.63015,
   8.8665,
   7.1381,
   6.3331,
   5.2271,
   5.3201,
   3.27,
   4.5229,
   3.6898,
   2.7896,
   2.7896,
   1.72422,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,330);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(259.4527);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1458.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 285.7","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 307.1","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.3","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.8","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  218.9","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  65.1","F");

   ci = 1467;
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

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 315.8","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 69.4","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 211.7","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3010[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3010[20] = {
   0.2793315,
   0.2443235,
   0.2141687,
   0.2427479,
   0.2655664,
   0.2664977,
   0.3405596,
   0.3083443,
   0.3665545,
   0.3604019,
   0.4411417,
   0.4230254,
   0.5893908,
   0.8513528,
   0.9859259,
   0.7060671,
   1.453847,
   0.9863416,
   1.012726,
   1.060025};
   Double_t _fehx3010[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3010[20] = {
   0.2793315,
   0.2443235,
   0.2141687,
   0.2427479,
   0.2655664,
   0.2664977,
   0.3405596,
   0.3083443,
   0.3665545,
   0.3604019,
   0.4411417,
   0.4230254,
   0.5893908,
   0.8513528,
   0.9859259,
   0.7060671,
   1.453847,
   0.9863416,
   1.012726,
   1.060025};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,330);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3011[20] = {
   0.1686667,
   0.1708196,
   0.1802538,
   0.1811841,
   0.2163118,
   0.1990362,
   0.2102641,
   0.2158527,
   0.2426405,
   0.2154436,
   0.2287977,
   0.2177061,
   0.2596896,
   0.2947973,
   0.318211,
   0.2743305,
   0.3238248,
   0.3245376,
   0.3236949,
   0.4123299};
   Double_t _fehx3011[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3011[20] = {
   0.1686667,
   0.1708196,
   0.1802538,
   0.1811841,
   0.2163118,
   0.1990362,
   0.2102641,
   0.2158527,
   0.2426405,
   0.2154436,
   0.2287977,
   0.2177061,
   0.2596896,
   0.2947973,
   0.318211,
   0.2743305,
   0.3238248,
   0.3245376,
   0.3236949,
   0.4123299};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,330);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3012[20] = {
   0.9372895,
   0.9325834,
   0.9739346,
   0.9369472,
   1.117567,
   0.836654,
   0.9995648,
   0.9655346,
   0.8543207,
   0.6150389,
   0.6902558,
   0.8345651,
   0.4014139,
   1.450021,
   1.312528,
   0.6487105,
   1.156799,
   0.5033524,
   0.171103,
   0.6703148};
   Double_t _felx3012[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3012[20] = {
   0.08936705,
   0.06513445,
   0.06551393,
   0.06744294,
   0.08216519,
   0.07282138,
   0.09403114,
   0.109447,
   0.1206219,
   0.0980822,
   0.1340033,
   0.1590998,
   0.1276314,
   0.3269727,
   0.3665891,
   0.2457559,
   0.4382388,
   0.3596231,
   0.171103,
   0.4789104};
   Double_t _fehx3012[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3012[20] = {
   0.08936705,
   0.06513445,
   0.06551393,
   0.06744294,
   0.08216519,
   0.07282138,
   0.09403114,
   0.1070114,
   0.1172736,
   0.09500251,
   0.1288584,
   0.1531024,
   0.1193294,
   0.3122999,
   0.3459261,
   0.2262053,
   0.4033757,
   0.2892968,
   0.2326504,
   0.3852567};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,330);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.938553);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",20,0,300);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,300,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

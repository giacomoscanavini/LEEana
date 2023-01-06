#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 18:31:55 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",164,172,1200,900);
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
   pad1->Range(-92.30769,-1.7,676.9231,187.9842);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__25->SetBinContent(1,2.646186);
   hmc__25->SetBinContent(2,26.67884);
   hmc__25->SetBinContent(3,57.45518);
   hmc__25->SetBinContent(4,83.52596);
   hmc__25->SetBinContent(5,79.47559);
   hmc__25->SetBinContent(6,75.02985);
   hmc__25->SetBinContent(7,60.02711);
   hmc__25->SetBinContent(8,43.51328);
   hmc__25->SetBinContent(9,44.18445);
   hmc__25->SetBinContent(10,31.27693);
   hmc__25->SetBinContent(11,27.18435);
   hmc__25->SetBinContent(12,22.83118);
   hmc__25->SetBinContent(13,14.42327);
   hmc__25->SetBinContent(14,14.41719);
   hmc__25->SetBinContent(15,10.68878);
   hmc__25->SetBinContent(16,9.026697);
   hmc__25->SetBinContent(17,5.596974);
   hmc__25->SetBinContent(18,4.580541);
   hmc__25->SetBinContent(19,3.469212);
   hmc__25->SetBinContent(20,4.550126);
   hmc__25->SetBinContent(21,40.00747);
   hmc__25->SetBinError(1,3.88252);
   hmc__25->SetBinError(2,12.58715);
   hmc__25->SetBinError(3,23.07963);
   hmc__25->SetBinError(4,30.90441);
   hmc__25->SetBinError(5,30.62296);
   hmc__25->SetBinError(6,28.2653);
   hmc__25->SetBinError(7,22.55987);
   hmc__25->SetBinError(8,17.44782);
   hmc__25->SetBinError(9,16.48752);
   hmc__25->SetBinError(10,19.31571);
   hmc__25->SetBinError(11,11.44847);
   hmc__25->SetBinError(12,12.89961);
   hmc__25->SetBinError(13,10.54742);
   hmc__25->SetBinError(14,8.865145);
   hmc__25->SetBinError(15,10.6082);
   hmc__25->SetBinError(16,8.882909);
   hmc__25->SetBinError(17,5.746052);
   hmc__25->SetBinError(18,9.911569);
   hmc__25->SetBinError(19,4.08929);
   hmc__25->SetBinError(20,5.939616);
   hmc__25->SetBinError(21,23.9452);
   hmc__25->SetMinimum(-1.7);
   hmc__25->SetMaximum(178.5);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,600);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(87.70226);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(2,0.7620949);
   hbadmatch_stack_1->SetBinContent(3,2.404073);
   hbadmatch_stack_1->SetBinContent(4,2.729814);
   hbadmatch_stack_1->SetBinContent(5,2.741053);
   hbadmatch_stack_1->SetBinContent(6,3.700371);
   hbadmatch_stack_1->SetBinContent(7,3.536056);
   hbadmatch_stack_1->SetBinContent(8,0.7002679);
   hbadmatch_stack_1->SetBinContent(10,0.7590794);
   hbadmatch_stack_1->SetBinContent(11,0.7287998);
   hbadmatch_stack_1->SetBinContent(12,0.5384118);
   hbadmatch_stack_1->SetBinContent(13,0.7607957);
   hbadmatch_stack_1->SetBinContent(14,0.1106221);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(16,0.6360607);
   hbadmatch_stack_1->SetBinContent(19,0.4689288);
   hbadmatch_stack_1->SetBinContent(21,0.1279738);
   hbadmatch_stack_1->SetBinError(2,0.4529168);
   hbadmatch_stack_1->SetBinError(3,0.7997654);
   hbadmatch_stack_1->SetBinError(4,0.763202);
   hbadmatch_stack_1->SetBinError(5,0.8528395);
   hbadmatch_stack_1->SetBinError(6,0.9054191);
   hbadmatch_stack_1->SetBinError(7,0.9982179);
   hbadmatch_stack_1->SetBinError(8,0.4141774);
   hbadmatch_stack_1->SetBinError(10,0.3877934);
   hbadmatch_stack_1->SetBinError(11,0.5546409);
   hbadmatch_stack_1->SetBinError(12,0.4268903);
   hbadmatch_stack_1->SetBinError(13,0.4522722);
   hbadmatch_stack_1->SetBinError(14,0.1106221);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(16,0.4822316);
   hbadmatch_stack_1->SetBinError(19,0.3637275);
   hbadmatch_stack_1->SetBinError(21,0.1279737);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,8.795075);
   hext_stack_2->SetBinContent(3,7.981877);
   hext_stack_2->SetBinContent(4,12.08535);
   hext_stack_2->SetBinContent(5,10.82366);
   hext_stack_2->SetBinContent(6,7.537797);
   hext_stack_2->SetBinContent(7,9.429508);
   hext_stack_2->SetBinContent(8,5.732637);
   hext_stack_2->SetBinContent(9,7.732501);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(11,5.236656);
   hext_stack_2->SetBinContent(12,1.137595);
   hext_stack_2->SetBinContent(13,1.626396);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(15,0.6416141);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.6416141);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,6.221437);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,2.1083);
   hext_stack_2->SetBinError(3,2.02837);
   hext_stack_2->SetBinError(4,2.561906);
   hext_stack_2->SetBinError(5,2.266367);
   hext_stack_2->SetBinError(6,1.7757);
   hext_stack_2->SetBinError(7,2.248955);
   hext_stack_2->SetBinError(8,1.665546);
   hext_stack_2->SetBinError(9,2.06648);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(11,1.658262);
   hext_stack_2->SetBinError(12,0.6602113);
   hext_stack_2->SetBinError(13,0.8131978);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(15,0.6416141);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.6416141);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,1.731894);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.6669159);
   hdirt_stack_3->SetBinContent(4,0.5389627);
   hdirt_stack_3->SetBinContent(5,0.4762587);
   hdirt_stack_3->SetBinContent(6,0.4172728);
   hdirt_stack_3->SetBinContent(7,0.665001);
   hdirt_stack_3->SetBinContent(8,0.7670878);
   hdirt_stack_3->SetBinContent(10,0.7135442);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.4822861);
   hdirt_stack_3->SetBinError(4,0.3274167);
   hdirt_stack_3->SetBinError(5,0.3652866);
   hdirt_stack_3->SetBinError(6,0.4149279);
   hdirt_stack_3->SetBinError(7,0.3973583);
   hdirt_stack_3->SetBinError(8,0.5461925);
   hdirt_stack_3->SetBinError(10,0.4321644);
   hdirt_stack_3->SetBinError(12,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,0.9286332);
   houtFV_stack_4->SetBinContent(2,4.324836);
   houtFV_stack_4->SetBinContent(3,13.4094);
   houtFV_stack_4->SetBinContent(4,14.78262);
   houtFV_stack_4->SetBinContent(5,15.51926);
   houtFV_stack_4->SetBinContent(6,12.82619);
   houtFV_stack_4->SetBinContent(7,10.44464);
   houtFV_stack_4->SetBinContent(8,7.891462);
   houtFV_stack_4->SetBinContent(9,6.297673);
   houtFV_stack_4->SetBinContent(10,7.398191);
   houtFV_stack_4->SetBinContent(11,3.752834);
   houtFV_stack_4->SetBinContent(12,4.026623);
   houtFV_stack_4->SetBinContent(13,1.853244);
   houtFV_stack_4->SetBinContent(14,2.39585);
   houtFV_stack_4->SetBinContent(15,2.138323);
   houtFV_stack_4->SetBinContent(16,2.483509);
   houtFV_stack_4->SetBinContent(17,0.7319179);
   houtFV_stack_4->SetBinContent(18,0.8370686);
   houtFV_stack_4->SetBinContent(19,0.574264);
   houtFV_stack_4->SetBinContent(20,0.9775664);
   houtFV_stack_4->SetBinContent(21,2.653158);
   houtFV_stack_4->SetBinError(1,0.48078);
   houtFV_stack_4->SetBinError(2,1.0231);
   houtFV_stack_4->SetBinError(3,1.803348);
   houtFV_stack_4->SetBinError(4,1.932015);
   houtFV_stack_4->SetBinError(5,2.067341);
   houtFV_stack_4->SetBinError(6,1.710466);
   houtFV_stack_4->SetBinError(7,1.579999);
   houtFV_stack_4->SetBinError(8,1.392955);
   houtFV_stack_4->SetBinError(9,1.257562);
   houtFV_stack_4->SetBinError(10,1.403536);
   houtFV_stack_4->SetBinError(11,0.929328);
   houtFV_stack_4->SetBinError(12,1.272822);
   houtFV_stack_4->SetBinError(13,0.6851541);
   houtFV_stack_4->SetBinError(14,0.7857345);
   houtFV_stack_4->SetBinError(15,0.8343305);
   houtFV_stack_4->SetBinError(16,0.9870134);
   houtFV_stack_4->SetBinError(17,0.438694);
   houtFV_stack_4->SetBinError(18,0.3953921);
   houtFV_stack_4->SetBinError(19,0.574264);
   houtFV_stack_4->SetBinError(20,0.6480154);
   houtFV_stack_4->SetBinError(21,0.840726);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1817589);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1469515);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2983287);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1462059);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1617673);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02952655);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.101082);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03762904);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05790484);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05398477);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02165026);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04603037);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02660775);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.106717);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.225861);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.142779);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.787975);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.60322);
   hNCpi0inFVres_stack_7->SetBinContent(5,14.94391);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.7118);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.549889);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.788917);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.971014);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.037743);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.794652);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.544003);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.820138);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.220751);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.860005);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.132537);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.309517);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.183416);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5050279);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.6051873);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.792036);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1423177);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4347883);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7284889);
   hNCpi0inFVres_stack_7->SetBinError(4,1.049074);
   hNCpi0inFVres_stack_7->SetBinError(5,1.115524);
   hNCpi0inFVres_stack_7->SetBinError(6,1.011162);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7763742);
   hNCpi0inFVres_stack_7->SetBinError(8,0.620165);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6816106);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7892164);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7339055);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5447333);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4518183);
   hNCpi0inFVres_stack_7->SetBinError(14,0.404755);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4295068);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2949387);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4312626);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6175412);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1566997);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3489366);
   hNCpi0inFVres_stack_7->SetBinError(21,0.973043);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.04939748);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.716767);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.840656);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.016917);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.858293);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.109957);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.25244);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.723586);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.71206);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.263436);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.582821);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.518196);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.639583);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8686824);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6560273);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6588606);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6623116);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.4122201);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.9923575);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2105554);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.13595);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.02858284);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2318578);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3577519);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7135592);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3360487);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6948425);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4955527);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4130776);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7405592);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3797517);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4435722);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6117663);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5491927);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4358262);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4410797);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3502448);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3196089);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2599461);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4493343);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1272832);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.110658);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01881452);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(2,3.17764);
   hCCpi0inFV_stack_10->SetBinContent(3,8.820067);
   hCCpi0inFV_stack_10->SetBinContent(4,16.67271);
   hCCpi0inFV_stack_10->SetBinContent(5,16.77152);
   hCCpi0inFV_stack_10->SetBinContent(6,14.36909);
   hCCpi0inFV_stack_10->SetBinContent(7,11.48177);
   hCCpi0inFV_stack_10->SetBinContent(8,9.020206);
   hCCpi0inFV_stack_10->SetBinContent(9,11.81482);
   hCCpi0inFV_stack_10->SetBinContent(10,6.600299);
   hCCpi0inFV_stack_10->SetBinContent(11,5.435658);
   hCCpi0inFV_stack_10->SetBinContent(12,5.09154);
   hCCpi0inFV_stack_10->SetBinContent(13,2.639056);
   hCCpi0inFV_stack_10->SetBinContent(14,3.828832);
   hCCpi0inFV_stack_10->SetBinContent(15,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(16,1.947476);
   hCCpi0inFV_stack_10->SetBinContent(17,1.268811);
   hCCpi0inFV_stack_10->SetBinContent(18,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(19,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(20,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(21,8.185011);
   hCCpi0inFV_stack_10->SetBinError(1,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(2,0.8775989);
   hCCpi0inFV_stack_10->SetBinError(3,1.473898);
   hCCpi0inFV_stack_10->SetBinError(4,1.976929);
   hCCpi0inFV_stack_10->SetBinError(5,2.094421);
   hCCpi0inFV_stack_10->SetBinError(6,1.88806);
   hCCpi0inFV_stack_10->SetBinError(7,1.795842);
   hCCpi0inFV_stack_10->SetBinError(8,1.524905);
   hCCpi0inFV_stack_10->SetBinError(9,1.772822);
   hCCpi0inFV_stack_10->SetBinError(10,1.264822);
   hCCpi0inFV_stack_10->SetBinError(11,1.084462);
   hCCpi0inFV_stack_10->SetBinError(12,1.093378);
   hCCpi0inFV_stack_10->SetBinError(13,0.784283);
   hCCpi0inFV_stack_10->SetBinError(14,0.9673668);
   hCCpi0inFV_stack_10->SetBinError(15,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(16,0.7600326);
   hCCpi0inFV_stack_10->SetBinError(17,0.5889569);
   hCCpi0inFV_stack_10->SetBinError(18,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(19,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(20,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(21,1.503501);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(2,1.073786);
   hNCinFV_stack_11->SetBinContent(3,1.840158);
   hNCinFV_stack_11->SetBinContent(4,3.66804);
   hNCinFV_stack_11->SetBinContent(5,3.057177);
   hNCinFV_stack_11->SetBinContent(6,3.09775);
   hNCinFV_stack_11->SetBinContent(7,4.053428);
   hNCinFV_stack_11->SetBinContent(8,1.219045);
   hNCinFV_stack_11->SetBinContent(9,1.889825);
   hNCinFV_stack_11->SetBinContent(10,2.338433);
   hNCinFV_stack_11->SetBinContent(11,1.256917);
   hNCinFV_stack_11->SetBinContent(12,2.484406);
   hNCinFV_stack_11->SetBinContent(13,1.921017);
   hNCinFV_stack_11->SetBinContent(14,1.262302);
   hNCinFV_stack_11->SetBinContent(15,1.747113);
   hNCinFV_stack_11->SetBinContent(16,0.5867651);
   hNCinFV_stack_11->SetBinContent(17,0.3391881);
   hNCinFV_stack_11->SetBinContent(18,0.3320811);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.9021621);
   hNCinFV_stack_11->SetBinContent(21,2.518048);
   hNCinFV_stack_11->SetBinError(2,0.5557297);
   hNCinFV_stack_11->SetBinError(3,0.6658858);
   hNCinFV_stack_11->SetBinError(4,0.9176487);
   hNCinFV_stack_11->SetBinError(5,0.7676773);
   hNCinFV_stack_11->SetBinError(6,0.889413);
   hNCinFV_stack_11->SetBinError(7,1.156206);
   hNCinFV_stack_11->SetBinError(8,0.4740689);
   hNCinFV_stack_11->SetBinError(9,0.6518829);
   hNCinFV_stack_11->SetBinError(10,0.8459032);
   hNCinFV_stack_11->SetBinError(11,0.7119103);
   hNCinFV_stack_11->SetBinError(12,1.114111);
   hNCinFV_stack_11->SetBinError(13,0.8234023);
   hNCinFV_stack_11->SetBinError(14,0.5515531);
   hNCinFV_stack_11->SetBinError(15,0.7413026);
   hNCinFV_stack_11->SetBinError(16,0.3387718);
   hNCinFV_stack_11->SetBinError(17,0.2425237);
   hNCinFV_stack_11->SetBinError(18,0.3320811);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.7323606);
   hNCinFV_stack_11->SetBinError(21,0.9166922);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.8406703);
   hnumuCCinFV_stack_12->SetBinContent(2,5.547794);
   hnumuCCinFV_stack_12->SetBinContent(3,13.55079);
   hnumuCCinFV_stack_12->SetBinContent(4,16.21383);
   hnumuCCinFV_stack_12->SetBinContent(5,13.19976);
   hnumuCCinFV_stack_12->SetBinContent(6,17.15854);
   hnumuCCinFV_stack_12->SetBinContent(7,8.022572);
   hnumuCCinFV_stack_12->SetBinContent(8,9.501449);
   hnumuCCinFV_stack_12->SetBinContent(9,5.969115);
   hnumuCCinFV_stack_12->SetBinContent(10,5.713542);
   hnumuCCinFV_stack_12->SetBinContent(11,4.03178);
   hnumuCCinFV_stack_12->SetBinContent(12,4.322322);
   hnumuCCinFV_stack_12->SetBinContent(13,1.110191);
   hnumuCCinFV_stack_12->SetBinContent(14,2.736251);
   hnumuCCinFV_stack_12->SetBinContent(15,1.251537);
   hnumuCCinFV_stack_12->SetBinContent(16,1.152577);
   hnumuCCinFV_stack_12->SetBinContent(17,0.6127455);
   hnumuCCinFV_stack_12->SetBinContent(18,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(20,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(21,4.793086);
   hnumuCCinFV_stack_12->SetBinError(1,0.5099247);
   hnumuCCinFV_stack_12->SetBinError(2,1.229658);
   hnumuCCinFV_stack_12->SetBinError(3,2.613601);
   hnumuCCinFV_stack_12->SetBinError(4,2.382132);
   hnumuCCinFV_stack_12->SetBinError(5,1.942385);
   hnumuCCinFV_stack_12->SetBinError(6,2.422681);
   hnumuCCinFV_stack_12->SetBinError(7,1.491271);
   hnumuCCinFV_stack_12->SetBinError(8,1.718857);
   hnumuCCinFV_stack_12->SetBinError(9,1.538234);
   hnumuCCinFV_stack_12->SetBinError(10,1.242823);
   hnumuCCinFV_stack_12->SetBinError(11,1.007131);
   hnumuCCinFV_stack_12->SetBinError(12,1.21413);
   hnumuCCinFV_stack_12->SetBinError(13,0.478552);
   hnumuCCinFV_stack_12->SetBinError(14,0.9033715);
   hnumuCCinFV_stack_12->SetBinError(15,0.568734);
   hnumuCCinFV_stack_12->SetBinError(16,0.5304696);
   hnumuCCinFV_stack_12->SetBinError(17,0.3544895);
   hnumuCCinFV_stack_12->SetBinError(18,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(20,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(21,1.142904);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(9,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(21,4.874202);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.1529246);
   hnueCCinFV_stack_13->SetBinError(9,0.438694);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.2502081);
   hnueCCinFV_stack_13->SetBinError(21,2.105627);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__26->SetBinContent(1,2.646186);
   hmcerror__26->SetBinContent(2,26.67884);
   hmcerror__26->SetBinContent(3,57.45518);
   hmcerror__26->SetBinContent(4,83.52596);
   hmcerror__26->SetBinContent(5,79.47559);
   hmcerror__26->SetBinContent(6,75.02985);
   hmcerror__26->SetBinContent(7,60.02711);
   hmcerror__26->SetBinContent(8,43.51328);
   hmcerror__26->SetBinContent(9,44.18445);
   hmcerror__26->SetBinContent(10,31.27693);
   hmcerror__26->SetBinContent(11,27.18435);
   hmcerror__26->SetBinContent(12,22.83118);
   hmcerror__26->SetBinContent(13,14.42327);
   hmcerror__26->SetBinContent(14,14.41719);
   hmcerror__26->SetBinContent(15,10.68878);
   hmcerror__26->SetBinContent(16,9.026697);
   hmcerror__26->SetBinContent(17,5.596974);
   hmcerror__26->SetBinContent(18,4.580541);
   hmcerror__26->SetBinContent(19,3.469212);
   hmcerror__26->SetBinContent(20,4.550126);
   hmcerror__26->SetBinContent(21,40.00747);
   hmcerror__26->SetBinError(1,3.88252);
   hmcerror__26->SetBinError(2,12.58715);
   hmcerror__26->SetBinError(3,23.07963);
   hmcerror__26->SetBinError(4,30.90441);
   hmcerror__26->SetBinError(5,30.62296);
   hmcerror__26->SetBinError(6,28.2653);
   hmcerror__26->SetBinError(7,22.55987);
   hmcerror__26->SetBinError(8,17.44782);
   hmcerror__26->SetBinError(9,16.48752);
   hmcerror__26->SetBinError(10,19.31571);
   hmcerror__26->SetBinError(11,11.44847);
   hmcerror__26->SetBinError(12,12.89961);
   hmcerror__26->SetBinError(13,10.54742);
   hmcerror__26->SetBinError(14,8.865145);
   hmcerror__26->SetBinError(15,10.6082);
   hmcerror__26->SetBinError(16,8.882909);
   hmcerror__26->SetBinError(17,5.746052);
   hmcerror__26->SetBinError(18,9.911569);
   hmcerror__26->SetBinError(19,4.08929);
   hmcerror__26->SetBinError(20,5.939616);
   hmcerror__26->SetBinError(21,23.9452);
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
   
   Double_t _fx3033[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3033[20] = {
   6,
   26,
   59,
   84,
   85,
   74,
   42,
   48,
   34,
   29,
   17,
   11,
   11,
   12,
   10,
   4,
   4,
   2,
   1,
   4};
   Double_t _felx3033[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3033[20] = {
   2.67925,
   5.2453,
   7.8097,
   9.2886,
   9.3428,
   8.7275,
   6.6155,
   7.0604,
   5.9703,
   5.5285,
   4.2835,
   3.4975,
   3.4975,
   3.64022,
   3.34883,
   2.29683,
   2.29683,
   2,
   1,
   2.29683};
   Double_t _fehx3033[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3033[20] = {
   2.41858,
   5.0358,
   7.6066,
   9.0869,
   9.1411,
   8.5253,
   6.4104,
   6.8561,
   5.7635,
   5.3201,
   4.0673,
   3.27,
   3.27,
   3.4155,
   3.1179,
   1.98186,
   1.98186,
   1.51917,
   1.35971,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,660);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(103.5552);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.91#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.1/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 563.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 82.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 113.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  98.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  28.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 123.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 33.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 111.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3034[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3034[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3034[20] = {
   1.467214,
   0.4718025,
   0.401698,
   0.3699976,
   0.3853128,
   0.3767208,
   0.3758279,
   0.400977,
   0.3731521,
   0.6175707,
   0.4211418,
   0.5649997,
   0.731278,
   0.6149012,
   0.9924612,
   0.9840708,
   1.026636,
   2.163842,
   1.178738,
   1.305374};
   Double_t _fehx3034[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3034[20] = {
   1.467214,
   0.4718025,
   0.401698,
   0.3699976,
   0.3853128,
   0.3767208,
   0.3758279,
   0.400977,
   0.3731521,
   0.6175707,
   0.4211418,
   0.5649997,
   0.731278,
   0.6149012,
   0.9924612,
   0.9840708,
   1.026636,
   2.163842,
   1.178738,
   1.305374};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,660);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3035[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3035[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3035[20] = {
   0.4365667,
   0.2214254,
   0.2708356,
   0.2965354,
   0.3104519,
   0.2891426,
   0.2549132,
   0.2881529,
   0.2572711,
   0.2756467,
   0.2576879,
   0.2585752,
   0.302108,
   0.2615174,
   0.2951259,
   0.3290302,
   0.3282619,
   0.3848493,
   0.431444,
   0.488663};
   Double_t _fehx3035[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3035[20] = {
   0.4365667,
   0.2214254,
   0.2708356,
   0.2965354,
   0.3104519,
   0.2891426,
   0.2549132,
   0.2881529,
   0.2572711,
   0.2756467,
   0.2576879,
   0.2585752,
   0.302108,
   0.2615174,
   0.2951259,
   0.3290302,
   0.3282619,
   0.3848493,
   0.431444,
   0.488663};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,660);
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
   
   Double_t _fx3036[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3036[20] = {
   2.267414,
   0.974555,
   1.026887,
   1.005675,
   1.069511,
   0.9862742,
   0.6996838,
   1.103112,
   0.7695015,
   0.927201,
   0.6253599,
   0.4817972,
   0.7626564,
   0.83234,
   0.9355606,
   0.44313,
   0.7146719,
   0.4366296,
   0.2882499,
   0.8790966};
   Double_t _felx3036[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3036[20] = {
   1.012495,
   0.196609,
   0.1359268,
   0.1112061,
   0.1175556,
   0.1163204,
   0.1102085,
   0.1622585,
   0.1351222,
   0.1767597,
   0.1575723,
   0.1531896,
   0.2424901,
   0.2524917,
   0.3133034,
   0.2544485,
   0.41037,
   0.4366296,
   0.2882499,
   0.5047839};
   Double_t _fehx3036[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3036[20] = {
   0.9139872,
   0.1887563,
   0.1323919,
   0.1087913,
   0.1150177,
   0.1136254,
   0.1067917,
   0.1575634,
   0.1304418,
   0.1700966,
   0.1496192,
   0.1432252,
   0.226717,
   0.2369048,
   0.2916985,
   0.2195554,
   0.3540949,
   0.3316573,
   0.3919363,
   0.4355616};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,660);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(3.499542);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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

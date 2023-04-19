#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 15:06:06 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
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
   pad1->Range(-92.30769,-1.16,676.9231,128.2716);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__25->SetBinContent(1,1.497978);
   hmc__25->SetBinContent(2,11.96873);
   hmc__25->SetBinContent(3,27.97747);
   hmc__25->SetBinContent(4,45.80504);
   hmc__25->SetBinContent(5,57.33179);
   hmc__25->SetBinContent(6,53.21941);
   hmc__25->SetBinContent(7,52.79334);
   hmc__25->SetBinContent(8,39.84147);
   hmc__25->SetBinContent(9,31.74487);
   hmc__25->SetBinContent(10,27.11724);
   hmc__25->SetBinContent(11,22.66306);
   hmc__25->SetBinContent(12,17.37745);
   hmc__25->SetBinContent(13,14.56382);
   hmc__25->SetBinContent(14,14.54404);
   hmc__25->SetBinContent(15,8.917128);
   hmc__25->SetBinContent(16,7.796518);
   hmc__25->SetBinContent(17,6.272962);
   hmc__25->SetBinContent(18,4.672012);
   hmc__25->SetBinContent(19,4.276432);
   hmc__25->SetBinContent(20,2.808943);
   hmc__25->SetBinContent(21,1.331078);
   hmc__25->SetBinContent(22,1.290202);
   hmc__25->SetBinContent(23,1.823377);
   hmc__25->SetBinContent(24,3.117008);
   hmc__25->SetBinContent(25,19.78409);
   hmc__25->SetBinError(1,3.108561);
   hmc__25->SetBinError(2,7.044675);
   hmc__25->SetBinError(3,15.52561);
   hmc__25->SetBinError(4,17.09153);
   hmc__25->SetBinError(5,22.17307);
   hmc__25->SetBinError(6,20.76534);
   hmc__25->SetBinError(7,21.7477);
   hmc__25->SetBinError(8,17.80398);
   hmc__25->SetBinError(9,16.02423);
   hmc__25->SetBinError(10,14.52695);
   hmc__25->SetBinError(11,12.94131);
   hmc__25->SetBinError(12,16.96369);
   hmc__25->SetBinError(13,8.43236);
   hmc__25->SetBinError(14,11.39279);
   hmc__25->SetBinError(15,9.384638);
   hmc__25->SetBinError(16,6.498634);
   hmc__25->SetBinError(17,6.94979);
   hmc__25->SetBinError(18,5.312509);
   hmc__25->SetBinError(19,8.62142);
   hmc__25->SetBinError(20,2.883436);
   hmc__25->SetBinError(21,3.030665);
   hmc__25->SetBinError(22,2.002766);
   hmc__25->SetBinError(23,5.753081);
   hmc__25->SetBinError(24,4.993557);
   hmc__25->SetBinError(25,18.41847);
   hmc__25->SetMinimum(-1.16);
   hmc__25->SetMaximum(121.8);
   hmc__25->SetEntries(469.1651);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,600);
   hs9_stack_9->SetMinimum(-1.281244e-08);
   hs9_stack_9->SetMaximum(60.19837);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(3,1.57788);
   hbadmatch_stack_1->SetBinContent(4,1.518779);
   hbadmatch_stack_1->SetBinContent(5,2.447713);
   hbadmatch_stack_1->SetBinContent(6,1.514621);
   hbadmatch_stack_1->SetBinContent(7,2.585803);
   hbadmatch_stack_1->SetBinContent(8,2.468313);
   hbadmatch_stack_1->SetBinContent(9,1.01866);
   hbadmatch_stack_1->SetBinContent(10,0.7336084);
   hbadmatch_stack_1->SetBinContent(12,0.895408);
   hbadmatch_stack_1->SetBinContent(13,0.2193965);
   hbadmatch_stack_1->SetBinContent(14,0.7061186);
   hbadmatch_stack_1->SetBinContent(15,0.5640803);
   hbadmatch_stack_1->SetBinContent(19,0.6360607);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinError(3,0.6789041);
   hbadmatch_stack_1->SetBinError(4,0.5892709);
   hbadmatch_stack_1->SetBinError(5,0.79941);
   hbadmatch_stack_1->SetBinError(6,0.6496431);
   hbadmatch_stack_1->SetBinError(7,0.8083481);
   hbadmatch_stack_1->SetBinError(8,0.7569526);
   hbadmatch_stack_1->SetBinError(9,0.5202509);
   hbadmatch_stack_1->SetBinError(10,0.4394482);
   hbadmatch_stack_1->SetBinError(12,0.5269624);
   hbadmatch_stack_1->SetBinError(13,0.2193965);
   hbadmatch_stack_1->SetBinError(14,0.5460665);
   hbadmatch_stack_1->SetBinError(15,0.4072508);
   hbadmatch_stack_1->SetBinError(19,0.4822316);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetEntries(71);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,3.800614);
   hext_stack_2->SetBinContent(3,2.428004);
   hext_stack_2->SetBinContent(4,3.159);
   hext_stack_2->SetBinContent(5,2.841783);
   hext_stack_2->SetBinContent(6,4.449409);
   hext_stack_2->SetBinContent(7,3.889996);
   hext_stack_2->SetBinContent(8,2.510206);
   hext_stack_2->SetBinContent(9,2.110787);
   hext_stack_2->SetBinContent(10,1.614806);
   hext_stack_2->SetBinContent(11,1.055394);
   hext_stack_2->SetBinContent(13,2.338622);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(16,0.8131978);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,2.103607);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.319182);
   hext_stack_2->SetBinError(3,1.028599);
   hext_stack_2->SetBinError(4,1.152637);
   hext_stack_2->SetBinError(5,1.011007);
   hext_stack_2->SetBinError(6,1.396677);
   hext_stack_2->SetBinError(7,1.264566);
   hext_stack_2->SetBinError(8,1.057404);
   hext_stack_2->SetBinError(9,0.8669371);
   hext_stack_2->SetBinError(10,0.8528597);
   hext_stack_2->SetBinError(11,0.6130171);
   hext_stack_2->SetBinError(13,1.095047);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(16,0.5750177);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,0.9761052);
   hext_stack_2->SetEntries(92);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.5429839);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.4172728);
   hdirt_stack_3->SetBinContent(8,0.665001);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(4,0.4278058);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.4149279);
   hdirt_stack_3->SetBinError(8,0.3973583);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetEntries(11);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.3917402);
   houtFV_stack_4->SetBinContent(2,2.544317);
   houtFV_stack_4->SetBinContent(3,4.547787);
   houtFV_stack_4->SetBinContent(4,7.757837);
   houtFV_stack_4->SetBinContent(5,10.64312);
   houtFV_stack_4->SetBinContent(6,8.795385);
   houtFV_stack_4->SetBinContent(7,7.333785);
   houtFV_stack_4->SetBinContent(8,6.024165);
   houtFV_stack_4->SetBinContent(9,5.031525);
   houtFV_stack_4->SetBinContent(10,5.169021);
   houtFV_stack_4->SetBinContent(11,3.17189);
   houtFV_stack_4->SetBinContent(12,3.133922);
   houtFV_stack_4->SetBinContent(13,2.782519);
   houtFV_stack_4->SetBinContent(14,2.642437);
   houtFV_stack_4->SetBinContent(15,1.519349);
   houtFV_stack_4->SetBinContent(16,1.320373);
   houtFV_stack_4->SetBinContent(17,0.3401776);
   houtFV_stack_4->SetBinContent(18,1.163622);
   houtFV_stack_4->SetBinContent(19,0.9676124);
   houtFV_stack_4->SetBinContent(21,0.5884556);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.3401776);
   houtFV_stack_4->SetBinContent(24,0.5884556);
   houtFV_stack_4->SetBinContent(25,1.75076);
   houtFV_stack_4->SetBinError(1,0.2770047);
   houtFV_stack_4->SetBinError(2,0.8005452);
   houtFV_stack_4->SetBinError(3,1.044726);
   houtFV_stack_4->SetBinError(4,1.349741);
   houtFV_stack_4->SetBinError(5,1.650575);
   houtFV_stack_4->SetBinError(6,1.496191);
   houtFV_stack_4->SetBinError(7,1.316001);
   houtFV_stack_4->SetBinError(8,1.241845);
   houtFV_stack_4->SetBinError(9,1.109574);
   houtFV_stack_4->SetBinError(10,1.151525);
   houtFV_stack_4->SetBinError(11,0.9107427);
   houtFV_stack_4->SetBinError(12,0.7834877);
   houtFV_stack_4->SetBinError(13,0.8319397);
   houtFV_stack_4->SetBinError(14,0.7851269);
   houtFV_stack_4->SetBinError(15,0.7122934);
   houtFV_stack_4->SetBinError(16,0.5548703);
   houtFV_stack_4->SetBinError(17,0.3401776);
   houtFV_stack_4->SetBinError(18,0.6148386);
   houtFV_stack_4->SetBinError(19,0.5837242);
   houtFV_stack_4->SetBinError(21,0.3397478);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.3401776);
   houtFV_stack_4->SetBinError(24,0.3397478);
   houtFV_stack_4->SetBinError(25,0.7341339);
   houtFV_stack_4->SetEntries(344);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(26);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.09731799);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.296026);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.090115);
   hNCpi0inFVres_stack_7->SetBinContent(4,10.57298);
   hNCpi0inFVres_stack_7->SetBinContent(5,15.07104);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.95156);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.41905);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.479391);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.477975);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.797656);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.117846);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.657492);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.403984);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.054566);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.470162);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.132698);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.6546538);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.256172);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.4321178);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.5438859);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.463426);
   hNCpi0inFVres_stack_7->SetBinError(1,0.097318);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3680294);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7806258);
   hNCpi0inFVres_stack_7->SetBinError(4,1.03798);
   hNCpi0inFVres_stack_7->SetBinError(5,1.270661);
   hNCpi0inFVres_stack_7->SetBinError(6,1.322837);
   hNCpi0inFVres_stack_7->SetBinError(7,1.290971);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9887871);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9037122);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6947571);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7598658);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7016325);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6455862);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5901525);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5811255);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4876561);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1962949);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4075096);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1371558);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2338466);
   hNCpi0inFVres_stack_7->SetBinError(21,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(22,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(23,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3743209);
   hNCpi0inFVres_stack_7->SetEntries(2042);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.10139);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.245625);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.402488);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.395504);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.659558);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.884838);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.589644);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.939062);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.022762);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.823054);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.502368);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8071078);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7817042);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3763178);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2926179);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2783359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.473804);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.6134722);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.380558);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3413269);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4625329);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6410991);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3704014);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4059941);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.56442);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4498782);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5204729);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5227114);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3085891);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2162644);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2511016);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3465144);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1313578);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.122146);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1458657);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2438946);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3100573);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3962917);
   hNCpi0inFVdis_stack_8->SetEntries(441);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(2,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(3,5.528863);
   hCCpi0inFV_stack_10->SetBinContent(4,7.626883);
   hCCpi0inFV_stack_10->SetBinContent(5,11.32959);
   hCCpi0inFV_stack_10->SetBinContent(6,10.01047);
   hCCpi0inFV_stack_10->SetBinContent(7,9.335874);
   hCCpi0inFV_stack_10->SetBinContent(8,6.984831);
   hCCpi0inFV_stack_10->SetBinContent(9,6.810518);
   hCCpi0inFV_stack_10->SetBinContent(10,6.303717);
   hCCpi0inFV_stack_10->SetBinContent(11,5.976125);
   hCCpi0inFV_stack_10->SetBinContent(12,3.56274);
   hCCpi0inFV_stack_10->SetBinContent(13,2.741658);
   hCCpi0inFV_stack_10->SetBinContent(14,2.982615);
   hCCpi0inFV_stack_10->SetBinContent(15,1.318683);
   hCCpi0inFV_stack_10->SetBinContent(16,1.584896);
   hCCpi0inFV_stack_10->SetBinContent(17,1.316992);
   hCCpi0inFV_stack_10->SetBinContent(18,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(19,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(20,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(22,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(23,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(24,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(25,4.814009);
   hCCpi0inFV_stack_10->SetBinError(2,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(3,1.220897);
   hCCpi0inFV_stack_10->SetBinError(4,1.368854);
   hCCpi0inFV_stack_10->SetBinError(5,1.60887);
   hCCpi0inFV_stack_10->SetBinError(6,1.624991);
   hCCpi0inFV_stack_10->SetBinError(7,1.527401);
   hCCpi0inFV_stack_10->SetBinError(8,1.366052);
   hCCpi0inFV_stack_10->SetBinError(9,1.394271);
   hCCpi0inFV_stack_10->SetBinError(10,1.256721);
   hCCpi0inFV_stack_10->SetBinError(11,1.244859);
   hCCpi0inFV_stack_10->SetBinError(12,0.9514697);
   hCCpi0inFV_stack_10->SetBinError(13,0.7737076);
   hCCpi0inFV_stack_10->SetBinError(14,0.8556548);
   hCCpi0inFV_stack_10->SetBinError(15,0.5542732);
   hCCpi0inFV_stack_10->SetBinError(16,0.6314705);
   hCCpi0inFV_stack_10->SetBinError(17,0.5536755);
   hCCpi0inFV_stack_10->SetBinError(18,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(19,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(20,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(21,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(22,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(23,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(24,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(25,1.179628);
   hCCpi0inFV_stack_10->SetEntries(397);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(2,0.536893);
   hNCinFV_stack_11->SetBinContent(3,0.7336084);
   hNCinFV_stack_11->SetBinContent(4,2.145881);
   hNCinFV_stack_11->SetBinContent(5,1.517089);
   hNCinFV_stack_11->SetBinContent(6,2.053982);
   hNCinFV_stack_11->SetBinContent(7,1.663932);
   hNCinFV_stack_11->SetBinContent(8,2.340906);
   hNCinFV_stack_11->SetBinContent(9,1.412273);
   hNCinFV_stack_11->SetBinContent(10,0.785171);
   hNCinFV_stack_11->SetBinContent(11,2.243935);
   hNCinFV_stack_11->SetBinContent(12,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,0.785171);
   hNCinFV_stack_11->SetBinContent(15,1.268811);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,1.178602);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(23,0.1950248);
   hNCinFV_stack_11->SetBinContent(24,0.3401776);
   hNCinFV_stack_11->SetBinContent(25,1.515398);
   hNCinFV_stack_11->SetBinError(2,0.3929602);
   hNCinFV_stack_11->SetBinError(3,0.4394482);
   hNCinFV_stack_11->SetBinError(4,0.785499);
   hNCinFV_stack_11->SetBinError(5,0.5887087);
   hNCinFV_stack_11->SetBinError(6,0.7078105);
   hNCinFV_stack_11->SetBinError(7,0.6518637);
   hNCinFV_stack_11->SetBinError(8,0.8093475);
   hNCinFV_stack_11->SetBinError(9,0.6510715);
   hNCinFV_stack_11->SetBinError(10,0.3925882);
   hNCinFV_stack_11->SetBinError(11,0.7328326);
   hNCinFV_stack_11->SetBinError(12,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.3925882);
   hNCinFV_stack_11->SetBinError(15,0.5889569);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.4811646);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(23,0.1950249);
   hNCinFV_stack_11->SetBinError(24,0.3401776);
   hNCinFV_stack_11->SetBinError(25,0.588146);
   hNCinFV_stack_11->SetEntries(97);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.6023208);
   hnumuCCinFV_stack_12->SetBinContent(2,2.25225);
   hnumuCCinFV_stack_12->SetBinContent(3,6.858218);
   hnumuCCinFV_stack_12->SetBinContent(4,10.15137);
   hnumuCCinFV_stack_12->SetBinContent(5,9.633989);
   hnumuCCinFV_stack_12->SetBinContent(6,8.826708);
   hnumuCCinFV_stack_12->SetBinContent(7,11.43226);
   hnumuCCinFV_stack_12->SetBinContent(8,6.2313);
   hnumuCCinFV_stack_12->SetBinContent(9,5.070558);
   hnumuCCinFV_stack_12->SetBinContent(10,5.408111);
   hnumuCCinFV_stack_12->SetBinContent(11,2.82429);
   hnumuCCinFV_stack_12->SetBinContent(12,3.377887);
   hnumuCCinFV_stack_12->SetBinContent(13,2.281241);
   hnumuCCinFV_stack_12->SetBinContent(14,2.807133);
   hnumuCCinFV_stack_12->SetBinContent(15,0.9664377);
   hnumuCCinFV_stack_12->SetBinContent(16,0.8354262);
   hnumuCCinFV_stack_12->SetBinContent(17,2.23971);
   hnumuCCinFV_stack_12->SetBinContent(18,0.233987);
   hnumuCCinFV_stack_12->SetBinContent(19,0.4206591);
   hnumuCCinFV_stack_12->SetBinContent(20,0.6127455);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,2.989073);
   hnumuCCinFV_stack_12->SetBinError(1,0.4507912);
   hnumuCCinFV_stack_12->SetBinError(2,0.7806722);
   hnumuCCinFV_stack_12->SetBinError(3,1.676731);
   hnumuCCinFV_stack_12->SetBinError(4,2.207922);
   hnumuCCinFV_stack_12->SetBinError(5,1.670028);
   hnumuCCinFV_stack_12->SetBinError(6,1.628463);
   hnumuCCinFV_stack_12->SetBinError(7,1.951527);
   hnumuCCinFV_stack_12->SetBinError(8,1.272784);
   hnumuCCinFV_stack_12->SetBinError(9,1.163542);
   hnumuCCinFV_stack_12->SetBinError(10,1.637383);
   hnumuCCinFV_stack_12->SetBinError(11,0.8926444);
   hnumuCCinFV_stack_12->SetBinError(12,0.9406771);
   hnumuCCinFV_stack_12->SetBinError(13,0.7423461);
   hnumuCCinFV_stack_12->SetBinError(14,1.068864);
   hnumuCCinFV_stack_12->SetBinError(15,0.4623982);
   hnumuCCinFV_stack_12->SetBinError(16,0.4200274);
   hnumuCCinFV_stack_12->SetBinError(17,0.8231562);
   hnumuCCinFV_stack_12->SetBinError(18,0.233987);
   hnumuCCinFV_stack_12->SetBinError(19,0.2982373);
   hnumuCCinFV_stack_12->SetBinError(20,0.3544895);
   hnumuCCinFV_stack_12->SetBinError(22,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.8975539);
   hnumuCCinFV_stack_12->SetEntries(332);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(25,3.348865);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.2502081);
   hnueCCinFV_stack_13->SetBinError(25,1.739544);
   hnueCCinFV_stack_13->SetEntries(12);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__26->SetBinContent(1,1.497978);
   hmcerror__26->SetBinContent(2,11.96873);
   hmcerror__26->SetBinContent(3,27.97747);
   hmcerror__26->SetBinContent(4,45.80504);
   hmcerror__26->SetBinContent(5,57.33179);
   hmcerror__26->SetBinContent(6,53.21941);
   hmcerror__26->SetBinContent(7,52.79334);
   hmcerror__26->SetBinContent(8,39.84147);
   hmcerror__26->SetBinContent(9,31.74487);
   hmcerror__26->SetBinContent(10,27.11724);
   hmcerror__26->SetBinContent(11,22.66306);
   hmcerror__26->SetBinContent(12,17.37745);
   hmcerror__26->SetBinContent(13,14.56382);
   hmcerror__26->SetBinContent(14,14.54404);
   hmcerror__26->SetBinContent(15,8.917128);
   hmcerror__26->SetBinContent(16,7.796518);
   hmcerror__26->SetBinContent(17,6.272962);
   hmcerror__26->SetBinContent(18,4.672012);
   hmcerror__26->SetBinContent(19,4.276432);
   hmcerror__26->SetBinContent(20,2.808943);
   hmcerror__26->SetBinContent(21,1.331078);
   hmcerror__26->SetBinContent(22,1.290202);
   hmcerror__26->SetBinContent(23,1.823377);
   hmcerror__26->SetBinContent(24,3.117008);
   hmcerror__26->SetBinContent(25,19.78409);
   hmcerror__26->SetBinError(1,3.108561);
   hmcerror__26->SetBinError(2,7.044675);
   hmcerror__26->SetBinError(3,15.52561);
   hmcerror__26->SetBinError(4,17.09153);
   hmcerror__26->SetBinError(5,22.17307);
   hmcerror__26->SetBinError(6,20.76534);
   hmcerror__26->SetBinError(7,21.7477);
   hmcerror__26->SetBinError(8,17.80398);
   hmcerror__26->SetBinError(9,16.02423);
   hmcerror__26->SetBinError(10,14.52695);
   hmcerror__26->SetBinError(11,12.94131);
   hmcerror__26->SetBinError(12,16.96369);
   hmcerror__26->SetBinError(13,8.43236);
   hmcerror__26->SetBinError(14,11.39279);
   hmcerror__26->SetBinError(15,9.384638);
   hmcerror__26->SetBinError(16,6.498634);
   hmcerror__26->SetBinError(17,6.94979);
   hmcerror__26->SetBinError(18,5.312509);
   hmcerror__26->SetBinError(19,8.62142);
   hmcerror__26->SetBinError(20,2.883436);
   hmcerror__26->SetBinError(21,3.030665);
   hmcerror__26->SetBinError(22,2.002766);
   hmcerror__26->SetBinError(23,5.753081);
   hmcerror__26->SetBinError(24,4.993557);
   hmcerror__26->SetBinError(25,18.41847);
   hmcerror__26->SetEntries(469.1651);

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
   
   Double_t _fx3033[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3033[24] = {
   3,
   11,
   36,
   32,
   58,
   47,
   47,
   27,
   32,
   26,
   10,
   16,
   9,
   6,
   5,
   4,
   5,
   2,
   2,
   4,
   2,
   1,
   0,
   1};
   Double_t _felx3033[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3033[24] = {
   2.143368,
   3.4975,
   6.1381,
   5.7977,
   7.7446,
   6.9882,
   6.9882,
   5.3414,
   5.7977,
   5.2453,
   3.34883,
   4.1628,
   3.19354,
   2.67925,
   2.48995,
   2.29683,
   2.48995,
   2,
   2,
   2.29683,
   2,
   1,
   0,
   1};
   Double_t _fehx3033[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3033[24] = {
   1.72422,
   3.27,
   5.9318,
   5.5904,
   7.5415,
   6.7839,
   6.7839,
   5.1322,
   5.5904,
   5.0358,
   3.1179,
   3.9454,
   2.9582,
   2.41858,
   2.21064,
   1.98186,
   2.21064,
   1.51917,
   1.51917,
   1.98186,
   1.51917,
   1.35971,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,660);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(72.09565);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.84#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 386.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 34.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 77.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  109.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  24.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 88.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 21.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 83.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.0","F");

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
   
   Double_t _fx3034[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3034[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3034[24] = {
   2.075172,
   0.5885902,
   0.5549328,
   0.3731364,
   0.3867501,
   0.3901836,
   0.4119401,
   0.4468707,
   0.5047817,
   0.535709,
   0.5710311,
   0.9761901,
   0.5789936,
   0.7833304,
   1.052428,
   0.8335303,
   1.107896,
   1.137092,
   2.016031,
   1.02652,
   2.276851,
   1.552289,
   3.155179,
   1.602035};
   Double_t _fehx3034[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3034[24] = {
   2.075172,
   0.5885902,
   0.5549328,
   0.3731364,
   0.3867501,
   0.3901836,
   0.4119401,
   0.4468707,
   0.5047817,
   0.535709,
   0.5710311,
   0.9761901,
   0.5789936,
   0.7833304,
   1.052428,
   0.8335303,
   1.107896,
   1.137092,
   2.016031,
   1.02652,
   2.276851,
   1.552289,
   3.155179,
   1.602035};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   
   Double_t _fx3035[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3035[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3035[24] = {
   0.5476838,
   0.2408528,
   0.2505003,
   0.2579967,
   0.2832231,
   0.2608569,
   0.2858535,
   0.2716653,
   0.2959117,
   0.2824571,
   0.3309771,
   0.3147153,
   0.2728107,
   0.2923802,
   0.4031,
   0.3202105,
   0.3349666,
   0.3698393,
   0.3487495,
   0.4337168,
   0.5977558,
   0.6380435,
   0.5137302,
   0.4230168};
   Double_t _fehx3035[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3035[24] = {
   0.5476838,
   0.2408528,
   0.2505003,
   0.2579967,
   0.2832231,
   0.2608569,
   0.2858535,
   0.2716653,
   0.2959117,
   0.2824571,
   0.3309771,
   0.3147153,
   0.2728107,
   0.2923802,
   0.4031,
   0.3202105,
   0.3349666,
   0.3698393,
   0.3487495,
   0.4337168,
   0.5977558,
   0.6380435,
   0.5137302,
   0.4230168};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3036[24] = {
   2.0027,
   0.9190619,
   1.28675,
   0.6986131,
   1.011655,
   0.8831364,
   0.8902638,
   0.6776859,
   1.008037,
   0.9587996,
   0.4412466,
   0.9207337,
   0.6179697,
   0.41254,
   0.5607187,
   0.5130495,
   0.7970717,
   0.4280811,
   0.4676796,
   1.424023,
   1.502542,
   0.7750726,
   0,
   0.3208205};
   Double_t _felx3036[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3036[24] = {
   1.430841,
   0.2922199,
   0.2193944,
   0.1265734,
   0.1350839,
   0.1313092,
   0.132369,
   0.1340663,
   0.1826343,
   0.1934304,
   0.147766,
   0.2395519,
   0.219279,
   0.1842163,
   0.2792323,
   0.2945969,
   0.3969337,
   0.4280811,
   0.4676796,
   0.8176849,
   1.502542,
   0.7750726,
   0,
   0.3208205};
   Double_t _fehx3036[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3036[24] = {
   1.151032,
   0.273212,
   0.2120206,
   0.1220477,
   0.1315413,
   0.1274704,
   0.1284992,
   0.1288155,
   0.1761041,
   0.1857047,
   0.1375763,
   0.2270414,
   0.2031198,
   0.1662935,
   0.2479094,
   0.2541981,
   0.3524077,
   0.325164,
   0.3552424,
   0.7055538,
   1.141308,
   1.053874,
   0.6294913,
   0.4362228};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,660);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(3.469105);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

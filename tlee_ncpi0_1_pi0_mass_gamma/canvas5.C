#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sun Oct 23 18:44:00 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
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
   pad1->Range(-61.53846,-7.12,451.2821,787.3221);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__13->SetBinContent(1,97.49381);
   hmc__13->SetBinContent(2,109.1628);
   hmc__13->SetBinContent(3,114.78);
   hmc__13->SetBinContent(4,103.8067);
   hmc__13->SetBinContent(5,118.1811);
   hmc__13->SetBinContent(6,143.2693);
   hmc__13->SetBinContent(7,148.3385);
   hmc__13->SetBinContent(8,168.3645);
   hmc__13->SetBinContent(9,200.022);
   hmc__13->SetBinContent(10,263.15);
   hmc__13->SetBinContent(11,310.4036);
   hmc__13->SetBinContent(12,339.6817);
   hmc__13->SetBinContent(13,282.541);
   hmc__13->SetBinContent(14,155.3384);
   hmc__13->SetBinContent(15,76.81654);
   hmc__13->SetBinContent(16,58.97786);
   hmc__13->SetBinContent(17,38.32818);
   hmc__13->SetBinContent(18,31.01913);
   hmc__13->SetBinContent(19,24.2772);
   hmc__13->SetBinContent(20,24.81692);
   hmc__13->SetBinContent(21,22.99554);
   hmc__13->SetBinContent(22,17.84386);
   hmc__13->SetBinContent(23,13.7269);
   hmc__13->SetBinContent(24,16.68222);
   hmc__13->SetBinContent(25,13.35156);
   hmc__13->SetBinContent(26,13.67422);
   hmc__13->SetBinContent(27,10.54403);
   hmc__13->SetBinContent(28,11.65711);
   hmc__13->SetBinContent(29,10.84794);
   hmc__13->SetBinContent(30,10.35767);
   hmc__13->SetBinContent(31,7.966576);
   hmc__13->SetBinContent(32,9.519566);
   hmc__13->SetBinContent(33,5.661727);
   hmc__13->SetBinContent(34,6.471975);
   hmc__13->SetBinContent(35,69.575);
   hmc__13->SetBinError(1,33.06094);
   hmc__13->SetBinError(2,31.77077);
   hmc__13->SetBinError(3,33.50116);
   hmc__13->SetBinError(4,35.80386);
   hmc__13->SetBinError(5,37.10117);
   hmc__13->SetBinError(6,45.4259);
   hmc__13->SetBinError(7,50.92528);
   hmc__13->SetBinError(8,63.91);
   hmc__13->SetBinError(9,74.8625);
   hmc__13->SetBinError(10,106.8645);
   hmc__13->SetBinError(11,132.4643);
   hmc__13->SetBinError(12,141.1902);
   hmc__13->SetBinError(13,134.1125);
   hmc__13->SetBinError(14,94.49228);
   hmc__13->SetBinError(15,55.44469);
   hmc__13->SetBinError(16,23.16509);
   hmc__13->SetBinError(17,16.69691);
   hmc__13->SetBinError(18,14.86557);
   hmc__13->SetBinError(19,14.49056);
   hmc__13->SetBinError(20,17.28591);
   hmc__13->SetBinError(21,12.46307);
   hmc__13->SetBinError(22,9.550032);
   hmc__13->SetBinError(23,9.756293);
   hmc__13->SetBinError(24,10.87758);
   hmc__13->SetBinError(25,10.5936);
   hmc__13->SetBinError(26,11.6119);
   hmc__13->SetBinError(27,9.002468);
   hmc__13->SetBinError(28,9.004395);
   hmc__13->SetBinError(29,8.854727);
   hmc__13->SetBinError(30,11.36996);
   hmc__13->SetBinError(31,8.215744);
   hmc__13->SetBinError(32,8.06004);
   hmc__13->SetBinError(33,5.516667);
   hmc__13->SetBinError(34,7.211092);
   hmc__13->SetBinError(35,48.96355);
   hmc__13->SetMinimum(-7.12);
   hmc__13->SetMaximum(747.6);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",34,0,400);
   hs5_stack_5->SetMinimum(-1.450578e-08);
   hs5_stack_5->SetMaximum(356.6657);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.256907);
   hbadmatch_stack_1->SetBinContent(2,3.57102);
   hbadmatch_stack_1->SetBinContent(3,4.137946);
   hbadmatch_stack_1->SetBinContent(4,2.507282);
   hbadmatch_stack_1->SetBinContent(5,3.520829);
   hbadmatch_stack_1->SetBinContent(6,3.984755);
   hbadmatch_stack_1->SetBinContent(7,4.275051);
   hbadmatch_stack_1->SetBinContent(8,3.89018);
   hbadmatch_stack_1->SetBinContent(9,6.101207);
   hbadmatch_stack_1->SetBinContent(10,6.343328);
   hbadmatch_stack_1->SetBinContent(11,6.557819);
   hbadmatch_stack_1->SetBinContent(12,5.13942);
   hbadmatch_stack_1->SetBinContent(13,4.55784);
   hbadmatch_stack_1->SetBinContent(14,2.251837);
   hbadmatch_stack_1->SetBinContent(15,3.866515);
   hbadmatch_stack_1->SetBinContent(16,2.431933);
   hbadmatch_stack_1->SetBinContent(17,0.5171255);
   hbadmatch_stack_1->SetBinContent(18,0.004623768);
   hbadmatch_stack_1->SetBinContent(19,0.4182467);
   hbadmatch_stack_1->SetBinContent(20,1.075589);
   hbadmatch_stack_1->SetBinContent(21,0.5639433);
   hbadmatch_stack_1->SetBinContent(22,0.4689584);
   hbadmatch_stack_1->SetBinContent(23,1.718171);
   hbadmatch_stack_1->SetBinContent(24,0.5221819);
   hbadmatch_stack_1->SetBinContent(25,0.948718);
   hbadmatch_stack_1->SetBinContent(26,0.5867651);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.6571898);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(33,0.185722);
   hbadmatch_stack_1->SetBinContent(34,0.1236948);
   hbadmatch_stack_1->SetBinContent(35,0.5971297);
   hbadmatch_stack_1->SetBinError(1,1.0276);
   hbadmatch_stack_1->SetBinError(2,0.9440359);
   hbadmatch_stack_1->SetBinError(3,1.020231);
   hbadmatch_stack_1->SetBinError(4,0.816204);
   hbadmatch_stack_1->SetBinError(5,1.101397);
   hbadmatch_stack_1->SetBinError(6,1.18439);
   hbadmatch_stack_1->SetBinError(7,0.9746676);
   hbadmatch_stack_1->SetBinError(8,0.990583);
   hbadmatch_stack_1->SetBinError(9,1.290873);
   hbadmatch_stack_1->SetBinError(10,1.287366);
   hbadmatch_stack_1->SetBinError(11,1.285278);
   hbadmatch_stack_1->SetBinError(12,1.195208);
   hbadmatch_stack_1->SetBinError(13,1.459036);
   hbadmatch_stack_1->SetBinError(14,0.7998573);
   hbadmatch_stack_1->SetBinError(15,2.056354);
   hbadmatch_stack_1->SetBinError(16,1.003796);
   hbadmatch_stack_1->SetBinError(17,0.3044574);
   hbadmatch_stack_1->SetBinError(18,0.004623768);
   hbadmatch_stack_1->SetBinError(19,0.2964164);
   hbadmatch_stack_1->SetBinError(20,0.5098543);
   hbadmatch_stack_1->SetBinError(21,0.3753944);
   hbadmatch_stack_1->SetBinError(22,0.2882678);
   hbadmatch_stack_1->SetBinError(23,0.8509215);
   hbadmatch_stack_1->SetBinError(24,0.3065464);
   hbadmatch_stack_1->SetBinError(25,0.6078974);
   hbadmatch_stack_1->SetBinError(26,0.3387718);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.482642);
   hbadmatch_stack_1->SetBinError(29,0.4753932);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(33,0.185722);
   hbadmatch_stack_1->SetBinError(34,0.1236948);
   hbadmatch_stack_1->SetBinError(35,0.3567713);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,11.61091);
   hext_stack_2->SetBinContent(2,14.24363);
   hext_stack_2->SetBinContent(3,17.25422);
   hext_stack_2->SetBinContent(4,11.25621);
   hext_stack_2->SetBinContent(5,12.31878);
   hext_stack_2->SetBinContent(6,18.51585);
   hext_stack_2->SetBinContent(7,12.69943);
   hext_stack_2->SetBinContent(8,21.02606);
   hext_stack_2->SetBinContent(9,19.70535);
   hext_stack_2->SetBinContent(10,27.34683);
   hext_stack_2->SetBinContent(11,18.50432);
   hext_stack_2->SetBinContent(12,26.30025);
   hext_stack_2->SetBinContent(13,30.63433);
   hext_stack_2->SetBinContent(14,6.567377);
   hext_stack_2->SetBinContent(15,3.807795);
   hext_stack_2->SetBinContent(16,6.012373);
   hext_stack_2->SetBinContent(17,3.379654);
   hext_stack_2->SetBinContent(18,1.939204);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,0.8131978);
   hext_stack_2->SetBinContent(22,1.544194);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,1.048213);
   hext_stack_2->SetBinContent(28,0.6487947);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(32,0.7309963);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,5.572643);
   hext_stack_2->SetBinError(1,2.436298);
   hext_stack_2->SetBinError(2,2.498571);
   hext_stack_2->SetBinError(3,2.742315);
   hext_stack_2->SetBinError(4,2.198468);
   hext_stack_2->SetBinError(5,2.237823);
   hext_stack_2->SetBinError(6,3.205877);
   hext_stack_2->SetBinError(7,2.375217);
   hext_stack_2->SetBinError(8,3.375759);
   hext_stack_2->SetBinError(9,3.126749);
   hext_stack_2->SetBinError(10,3.703589);
   hext_stack_2->SetBinError(11,3.002218);
   hext_stack_2->SetBinError(12,3.689312);
   hext_stack_2->SetBinError(13,4.021359);
   hext_stack_2->SetBinError(14,1.581482);
   hext_stack_2->SetBinError(15,1.24058);
   hext_stack_2->SetBinError(16,1.511499);
   hext_stack_2->SetBinError(17,1.406172);
   hext_stack_2->SetBinError(18,0.912471);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.5750177);
   hext_stack_2->SetBinError(22,0.7753719);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,0.7595995);
   hext_stack_2->SetBinError(28,0.4587671);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(32,0.5201503);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,1.670027);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.5388689);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.5682533);
   hdirt_stack_3->SetBinContent(4,1.212455);
   hdirt_stack_3->SetBinContent(5,1.251234);
   hdirt_stack_3->SetBinContent(6,2.618258);
   hdirt_stack_3->SetBinContent(7,1.363112);
   hdirt_stack_3->SetBinContent(8,0.9140499);
   hdirt_stack_3->SetBinContent(9,0.5868663);
   hdirt_stack_3->SetBinContent(10,1.487391);
   hdirt_stack_3->SetBinContent(11,1.741965);
   hdirt_stack_3->SetBinContent(12,1.21377);
   hdirt_stack_3->SetBinContent(13,1.277624);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinError(1,0.4239131);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.3394302);
   hdirt_stack_3->SetBinError(4,0.4730784);
   hdirt_stack_3->SetBinError(5,0.5729254);
   hdirt_stack_3->SetBinError(6,0.8576788);
   hdirt_stack_3->SetBinError(7,0.6912205);
   hdirt_stack_3->SetBinError(8,0.4788161);
   hdirt_stack_3->SetBinError(9,0.3503208);
   hdirt_stack_3->SetBinError(10,1.013785);
   hdirt_stack_3->SetBinError(11,0.6577878);
   hdirt_stack_3->SetBinError(12,0.5532013);
   hdirt_stack_3->SetBinError(13,0.5459963);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetBinError(27,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,9.5416);
   houtFV_stack_4->SetBinContent(2,11.8672);
   houtFV_stack_4->SetBinContent(3,13.80385);
   houtFV_stack_4->SetBinContent(4,9.193389);
   houtFV_stack_4->SetBinContent(5,8.793267);
   houtFV_stack_4->SetBinContent(6,12.22041);
   houtFV_stack_4->SetBinContent(7,13.56356);
   houtFV_stack_4->SetBinContent(8,11.37824);
   houtFV_stack_4->SetBinContent(9,12.16359);
   houtFV_stack_4->SetBinContent(10,15.62335);
   houtFV_stack_4->SetBinContent(11,17.54636);
   houtFV_stack_4->SetBinContent(12,17.35147);
   houtFV_stack_4->SetBinContent(13,15.46663);
   houtFV_stack_4->SetBinContent(14,10.08836);
   houtFV_stack_4->SetBinContent(15,4.929497);
   houtFV_stack_4->SetBinContent(16,2.898877);
   houtFV_stack_4->SetBinContent(17,1.368056);
   houtFV_stack_4->SetBinContent(18,1.239658);
   houtFV_stack_4->SetBinContent(19,1.210404);
   houtFV_stack_4->SetBinContent(20,0.5111502);
   houtFV_stack_4->SetBinContent(21,0.4199372);
   houtFV_stack_4->SetBinContent(22,1.563289);
   houtFV_stack_4->SetBinContent(23,0.9162772);
   houtFV_stack_4->SetBinContent(24,0.7817899);
   houtFV_stack_4->SetBinContent(25,0.5352025);
   houtFV_stack_4->SetBinContent(26,1.336574);
   houtFV_stack_4->SetBinContent(27,0.7188972);
   houtFV_stack_4->SetBinContent(28,1.073786);
   houtFV_stack_4->SetBinContent(29,0.7319179);
   houtFV_stack_4->SetBinContent(30,0.8770706);
   houtFV_stack_4->SetBinContent(31,0.3917402);
   houtFV_stack_4->SetBinContent(32,0.3934307);
   houtFV_stack_4->SetBinContent(33,0.3917402);
   houtFV_stack_4->SetBinContent(34,4.828564e-09);
   houtFV_stack_4->SetBinContent(35,2.179042);
   houtFV_stack_4->SetBinError(1,1.553968);
   houtFV_stack_4->SetBinError(2,1.739331);
   houtFV_stack_4->SetBinError(3,1.885779);
   houtFV_stack_4->SetBinError(4,1.476735);
   houtFV_stack_4->SetBinError(5,1.430354);
   houtFV_stack_4->SetBinError(6,1.710863);
   houtFV_stack_4->SetBinError(7,1.967606);
   houtFV_stack_4->SetBinError(8,1.776611);
   houtFV_stack_4->SetBinError(9,1.691793);
   houtFV_stack_4->SetBinError(10,1.961236);
   houtFV_stack_4->SetBinError(11,2.104884);
   houtFV_stack_4->SetBinError(12,2.078283);
   houtFV_stack_4->SetBinError(13,2.049698);
   houtFV_stack_4->SetBinError(14,1.638548);
   houtFV_stack_4->SetBinError(15,1.037858);
   houtFV_stack_4->SetBinError(16,0.8156281);
   houtFV_stack_4->SetBinError(17,0.547315);
   houtFV_stack_4->SetBinError(18,0.5407291);
   houtFV_stack_4->SetBinError(19,0.5045228);
   houtFV_stack_4->SetBinError(20,0.301222);
   houtFV_stack_4->SetBinError(21,0.2975314);
   houtFV_stack_4->SetBinError(22,0.613321);
   houtFV_stack_4->SetBinError(23,0.5094059);
   houtFV_stack_4->SetBinError(24,0.3908977);
   houtFV_stack_4->SetBinError(25,0.3921167);
   houtFV_stack_4->SetBinError(26,0.6305274);
   houtFV_stack_4->SetBinError(27,0.3642357);
   houtFV_stack_4->SetBinError(28,0.5557297);
   houtFV_stack_4->SetBinError(29,0.438694);
   houtFV_stack_4->SetBinError(30,0.5197486);
   houtFV_stack_4->SetBinError(31,0.2770047);
   houtFV_stack_4->SetBinError(32,0.2781975);
   houtFV_stack_4->SetBinError(33,0.2770047);
   houtFV_stack_4->SetBinError(34,4.828564e-09);
   houtFV_stack_4->SetBinError(35,0.8103315);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1238139);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1124771);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1563112);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3046861);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3026566);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1920068);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1513291);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4861502);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9268746);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5031898);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7565805);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3096087);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2267805);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1294197);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2425242);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05204101);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05048421);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08854323);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.2606483);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.06543029);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06596624);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1027999);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1291471);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1834172);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1133537);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1030168);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2168809);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3375131);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2096282);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3610742);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1680587);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1177853);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.09770959);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1447144);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03689442);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03255344);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06260951);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.2009378);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2003044);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4446933);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1850593);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2375662);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3526234);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.584006);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6445292);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5352847);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.017123);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.324302);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.383828);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.348282);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.10764);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.063423);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1955231);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3453187);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1390032);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1920793);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.06562697);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1417359);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08788056);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1722092);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08840033);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1537132);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1282996);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3376495);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.187749);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1594955);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2738007);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3377749);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3269318);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2601341);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3026058);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3077753);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1261713);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1517612);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1216524);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1332985);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06562698);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1296664);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1282646);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.29559);
   hNCpi0inFVres_stack_7->SetBinContent(2,22.32349);
   hNCpi0inFVres_stack_7->SetBinContent(3,23.4259);
   hNCpi0inFVres_stack_7->SetBinContent(4,24.15338);
   hNCpi0inFVres_stack_7->SetBinContent(5,30.24155);
   hNCpi0inFVres_stack_7->SetBinContent(6,36.2119);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.93663);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.65371);
   hNCpi0inFVres_stack_7->SetBinContent(9,72.66839);
   hNCpi0inFVres_stack_7->SetBinContent(10,105.856);
   hNCpi0inFVres_stack_7->SetBinContent(11,142.3797);
   hNCpi0inFVres_stack_7->SetBinContent(12,157.163);
   hNCpi0inFVres_stack_7->SetBinContent(13,117.6619);
   hNCpi0inFVres_stack_7->SetBinContent(14,60.28255);
   hNCpi0inFVres_stack_7->SetBinContent(15,26.90643);
   hNCpi0inFVres_stack_7->SetBinContent(16,17.69629);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.853679);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.074871);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.685835);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.142179);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.074974);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.613908);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.082122);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.512011);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.172455);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.230937);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.3387);
   hNCpi0inFVres_stack_7->SetBinContent(28,1.346542);
   hNCpi0inFVres_stack_7->SetBinContent(29,1.400177);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.9227521);
   hNCpi0inFVres_stack_7->SetBinContent(31,1.886503);
   hNCpi0inFVres_stack_7->SetBinContent(32,1.442651);
   hNCpi0inFVres_stack_7->SetBinContent(33,1.440349);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.7929206);
   hNCpi0inFVres_stack_7->SetBinContent(35,6.80197);
   hNCpi0inFVres_stack_7->SetBinError(1,1.398075);
   hNCpi0inFVres_stack_7->SetBinError(2,1.584991);
   hNCpi0inFVres_stack_7->SetBinError(3,1.613304);
   hNCpi0inFVres_stack_7->SetBinError(4,1.470116);
   hNCpi0inFVres_stack_7->SetBinError(5,1.680838);
   hNCpi0inFVres_stack_7->SetBinError(6,1.874588);
   hNCpi0inFVres_stack_7->SetBinError(7,2.100604);
   hNCpi0inFVres_stack_7->SetBinError(8,2.318984);
   hNCpi0inFVres_stack_7->SetBinError(9,2.603125);
   hNCpi0inFVres_stack_7->SetBinError(10,3.058611);
   hNCpi0inFVres_stack_7->SetBinError(11,3.471887);
   hNCpi0inFVres_stack_7->SetBinError(12,3.608755);
   hNCpi0inFVres_stack_7->SetBinError(13,3.22507);
   hNCpi0inFVres_stack_7->SetBinError(14,2.453556);
   hNCpi0inFVres_stack_7->SetBinError(15,1.550023);
   hNCpi0inFVres_stack_7->SetBinError(16,1.575433);
   hNCpi0inFVres_stack_7->SetBinError(17,1.062786);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7941325);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6809964);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4628205);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7077082);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6334263);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4183674);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4733961);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3711526);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6174334);
   hNCpi0inFVres_stack_7->SetBinError(27,0.342035);
   hNCpi0inFVres_stack_7->SetBinError(28,0.3707788);
   hNCpi0inFVres_stack_7->SetBinError(29,0.3299079);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2790949);
   hNCpi0inFVres_stack_7->SetBinError(31,0.6067335);
   hNCpi0inFVres_stack_7->SetBinError(32,0.6438909);
   hNCpi0inFVres_stack_7->SetBinError(33,0.5330502);
   hNCpi0inFVres_stack_7->SetBinError(34,0.2839924);
   hNCpi0inFVres_stack_7->SetBinError(35,0.9587236);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.225385);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.012876);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.699235);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.314852);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.979205);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.482949);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.29632);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.28278);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.77471);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.78553);
   hNCpi0inFVdis_stack_8->SetBinContent(11,27.11561);
   hNCpi0inFVdis_stack_8->SetBinContent(12,33.63071);
   hNCpi0inFVdis_stack_8->SetBinContent(13,26.04017);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.99986);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.638339);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.828125);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.232249);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.671159);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.643819);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.542402);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.269634);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.429948);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.9845508);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.277325);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.8075609);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.4250337);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.5914921);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.7287753);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.9509593);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.586674);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.2714545);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.7732557);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.09433559);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.5743923);
   hNCpi0inFVdis_stack_8->SetBinContent(35,4.536979);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7391085);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8977158);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8406473);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6987226);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9435507);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.083444);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.222069);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9810894);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.398595);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.431534);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.695905);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.070837);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.634592);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.301447);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8279027);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8831406);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9109865);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4871336);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4219213);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5077849);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2996588);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4194975);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3123873);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4484191);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3026662);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1542101);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2089091);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4322261);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3729716);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.6014097);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1453872);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.346233);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.05068045);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.3073683);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.9092206);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05546193);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05228499);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.3418667);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2007022);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03202375);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02765616);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1853775);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1328217);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,10.28855);
   hCCpi0inFV_stack_10->SetBinContent(2,10.74783);
   hCCpi0inFV_stack_10->SetBinContent(3,11.20371);
   hCCpi0inFV_stack_10->SetBinContent(4,14.17423);
   hCCpi0inFV_stack_10->SetBinContent(5,12.70718);
   hCCpi0inFV_stack_10->SetBinContent(6,22.50338);
   hCCpi0inFV_stack_10->SetBinContent(7,23.43315);
   hCCpi0inFV_stack_10->SetBinContent(8,26.75143);
   hCCpi0inFV_stack_10->SetBinContent(9,37.70425);
   hCCpi0inFV_stack_10->SetBinContent(10,43.87769);
   hCCpi0inFV_stack_10->SetBinContent(11,49.94223);
   hCCpi0inFV_stack_10->SetBinContent(12,60.07663);
   hCCpi0inFV_stack_10->SetBinContent(13,52.16401);
   hCCpi0inFV_stack_10->SetBinContent(14,30.76784);
   hCCpi0inFV_stack_10->SetBinContent(15,14.94003);
   hCCpi0inFV_stack_10->SetBinContent(16,11.77191);
   hCCpi0inFV_stack_10->SetBinContent(17,8.994336);
   hCCpi0inFV_stack_10->SetBinContent(18,6.094053);
   hCCpi0inFV_stack_10->SetBinContent(19,6.338935);
   hCCpi0inFV_stack_10->SetBinContent(20,5.329676);
   hCCpi0inFV_stack_10->SetBinContent(21,6.037693);
   hCCpi0inFV_stack_10->SetBinContent(22,4.681813);
   hCCpi0inFV_stack_10->SetBinContent(23,2.392469);
   hCCpi0inFV_stack_10->SetBinContent(24,4.54109);
   hCCpi0inFV_stack_10->SetBinContent(25,4.93009);
   hCCpi0inFV_stack_10->SetBinContent(26,3.379741);
   hCCpi0inFV_stack_10->SetBinContent(27,2.252388);
   hCCpi0inFV_stack_10->SetBinContent(28,2.432416);
   hCCpi0inFV_stack_10->SetBinContent(29,2.535931);
   hCCpi0inFV_stack_10->SetBinContent(30,3.095889);
   hCCpi0inFV_stack_10->SetBinContent(31,1.629293);
   hCCpi0inFV_stack_10->SetBinContent(32,1.712114);
   hCCpi0inFV_stack_10->SetBinContent(33,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(34,1.26543);
   hCCpi0inFV_stack_10->SetBinContent(35,14.60816);
   hCCpi0inFV_stack_10->SetBinError(1,1.651854);
   hCCpi0inFV_stack_10->SetBinError(2,1.712194);
   hCCpi0inFV_stack_10->SetBinError(3,1.738205);
   hCCpi0inFV_stack_10->SetBinError(4,1.846148);
   hCCpi0inFV_stack_10->SetBinError(5,1.75482);
   hCCpi0inFV_stack_10->SetBinError(6,2.365319);
   hCCpi0inFV_stack_10->SetBinError(7,2.436465);
   hCCpi0inFV_stack_10->SetBinError(8,2.594934);
   hCCpi0inFV_stack_10->SetBinError(9,3.046814);
   hCCpi0inFV_stack_10->SetBinError(10,3.334721);
   hCCpi0inFV_stack_10->SetBinError(11,3.564843);
   hCCpi0inFV_stack_10->SetBinError(12,3.88313);
   hCCpi0inFV_stack_10->SetBinError(13,3.597536);
   hCCpi0inFV_stack_10->SetBinError(14,2.81029);
   hCCpi0inFV_stack_10->SetBinError(15,1.9764);
   hCCpi0inFV_stack_10->SetBinError(16,1.704884);
   hCCpi0inFV_stack_10->SetBinError(17,1.468148);
   hCCpi0inFV_stack_10->SetBinError(18,1.257431);
   hCCpi0inFV_stack_10->SetBinError(19,1.262621);
   hCCpi0inFV_stack_10->SetBinError(20,1.091426);
   hCCpi0inFV_stack_10->SetBinError(21,1.197664);
   hCCpi0inFV_stack_10->SetBinError(22,1.14459);
   hCCpi0inFV_stack_10->SetBinError(23,0.7848912);
   hCCpi0inFV_stack_10->SetBinError(24,1.075819);
   hCCpi0inFV_stack_10->SetBinError(25,1.144463);
   hCCpi0inFV_stack_10->SetBinError(26,0.9348349);
   hCCpi0inFV_stack_10->SetBinError(27,0.7350883);
   hCCpi0inFV_stack_10->SetBinError(28,0.7956773);
   hCCpi0inFV_stack_10->SetBinError(29,0.8325131);
   hCCpi0inFV_stack_10->SetBinError(30,0.8964181);
   hCCpi0inFV_stack_10->SetBinError(31,0.745413);
   hCCpi0inFV_stack_10->SetBinError(32,0.6201715);
   hCCpi0inFV_stack_10->SetBinError(33,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(34,0.5878314);
   hCCpi0inFV_stack_10->SetBinError(35,1.923024);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,12.07026);
   hNCinFV_stack_11->SetBinContent(2,11.82378);
   hNCinFV_stack_11->SetBinContent(3,9.267334);
   hNCinFV_stack_11->SetBinContent(4,11.33562);
   hNCinFV_stack_11->SetBinContent(5,16.00787);
   hNCinFV_stack_11->SetBinContent(6,9.6867);
   hNCinFV_stack_11->SetBinContent(7,12.8978);
   hNCinFV_stack_11->SetBinContent(8,10.90586);
   hNCinFV_stack_11->SetBinContent(9,13.49429);
   hNCinFV_stack_11->SetBinContent(10,14.60143);
   hNCinFV_stack_11->SetBinContent(11,19.85766);
   hNCinFV_stack_11->SetBinContent(12,14.15434);
   hNCinFV_stack_11->SetBinContent(13,16.38053);
   hNCinFV_stack_11->SetBinContent(14,12.3907);
   hNCinFV_stack_11->SetBinContent(15,7.041193);
   hNCinFV_stack_11->SetBinContent(16,6.426942);
   hNCinFV_stack_11->SetBinContent(17,4.909846);
   hNCinFV_stack_11->SetBinContent(18,6.412097);
   hNCinFV_stack_11->SetBinContent(19,5.452112);
   hNCinFV_stack_11->SetBinContent(20,6.312925);
   hNCinFV_stack_11->SetBinContent(21,6.3914);
   hNCinFV_stack_11->SetBinContent(22,2.350634);
   hNCinFV_stack_11->SetBinContent(23,2.557781);
   hNCinFV_stack_11->SetBinContent(24,3.71262);
   hNCinFV_stack_11->SetBinContent(25,2.038863);
   hNCinFV_stack_11->SetBinContent(26,2.06181);
   hNCinFV_stack_11->SetBinContent(27,3.803273);
   hNCinFV_stack_11->SetBinContent(28,2.444657);
   hNCinFV_stack_11->SetBinContent(29,2.214802);
   hNCinFV_stack_11->SetBinContent(30,2.191098);
   hNCinFV_stack_11->SetBinContent(31,2.807389);
   hNCinFV_stack_11->SetBinContent(32,2.472364);
   hNCinFV_stack_11->SetBinContent(33,1.900446);
   hNCinFV_stack_11->SetBinContent(34,2.802102);
   hNCinFV_stack_11->SetBinContent(35,22.23663);
   hNCinFV_stack_11->SetBinError(1,1.803142);
   hNCinFV_stack_11->SetBinError(2,1.796659);
   hNCinFV_stack_11->SetBinError(3,1.543962);
   hNCinFV_stack_11->SetBinError(4,1.67801);
   hNCinFV_stack_11->SetBinError(5,2.083637);
   hNCinFV_stack_11->SetBinError(6,1.812507);
   hNCinFV_stack_11->SetBinError(7,1.822882);
   hNCinFV_stack_11->SetBinError(8,1.658989);
   hNCinFV_stack_11->SetBinError(9,1.771519);
   hNCinFV_stack_11->SetBinError(10,1.990919);
   hNCinFV_stack_11->SetBinError(11,2.486848);
   hNCinFV_stack_11->SetBinError(12,2.022811);
   hNCinFV_stack_11->SetBinError(13,2.383835);
   hNCinFV_stack_11->SetBinError(14,1.895133);
   hNCinFV_stack_11->SetBinError(15,1.35673);
   hNCinFV_stack_11->SetBinError(16,1.649881);
   hNCinFV_stack_11->SetBinError(17,1.287505);
   hNCinFV_stack_11->SetBinError(18,1.593653);
   hNCinFV_stack_11->SetBinError(19,1.526996);
   hNCinFV_stack_11->SetBinError(20,1.508872);
   hNCinFV_stack_11->SetBinError(21,1.635723);
   hNCinFV_stack_11->SetBinError(22,1.090032);
   hNCinFV_stack_11->SetBinError(23,0.8272068);
   hNCinFV_stack_11->SetBinError(24,1.006985);
   hNCinFV_stack_11->SetBinError(25,0.8789086);
   hNCinFV_stack_11->SetBinError(26,0.6512921);
   hNCinFV_stack_11->SetBinError(27,1.077334);
   hNCinFV_stack_11->SetBinError(28,0.8058032);
   hNCinFV_stack_11->SetBinError(29,0.7111313);
   hNCinFV_stack_11->SetBinError(30,0.7976168);
   hNCinFV_stack_11->SetBinError(31,1.040432);
   hNCinFV_stack_11->SetBinError(32,1.02823);
   hNCinFV_stack_11->SetBinError(33,0.7441019);
   hNCinFV_stack_11->SetBinError(34,1.317577);
   hNCinFV_stack_11->SetBinError(35,2.69283);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,21.86111);
   hnumuCCinFV_stack_12->SetBinContent(2,25.13482);
   hnumuCCinFV_stack_12->SetBinContent(3,27.45182);
   hnumuCCinFV_stack_12->SetBinContent(4,23.21281);
   hnumuCCinFV_stack_12->SetBinContent(5,24.20328);
   hnumuCCinFV_stack_12->SetBinContent(6,27.31219);
   hnumuCCinFV_stack_12->SetBinContent(7,24.08325);
   hnumuCCinFV_stack_12->SetBinContent(8,24.29547);
   hnumuCCinFV_stack_12->SetBinContent(9,19.12951);
   hnumuCCinFV_stack_12->SetBinContent(10,26.17752);
   hnumuCCinFV_stack_12->SetBinContent(11,22.97012);
   hnumuCCinFV_stack_12->SetBinContent(12,21.81128);
   hnumuCCinFV_stack_12->SetBinContent(13,15.97086);
   hnumuCCinFV_stack_12->SetBinContent(14,15.41628);
   hnumuCCinFV_stack_12->SetBinContent(15,8.149388);
   hnumuCCinFV_stack_12->SetBinContent(16,6.323561);
   hnumuCCinFV_stack_12->SetBinContent(17,4.788019);
   hnumuCCinFV_stack_12->SetBinContent(18,5.688776);
   hnumuCCinFV_stack_12->SetBinContent(19,2.681973);
   hnumuCCinFV_stack_12->SetBinContent(20,4.000684);
   hnumuCCinFV_stack_12->SetBinContent(21,3.037729);
   hnumuCCinFV_stack_12->SetBinContent(22,1.78494);
   hnumuCCinFV_stack_12->SetBinContent(23,2.298266);
   hnumuCCinFV_stack_12->SetBinContent(24,2.915915);
   hnumuCCinFV_stack_12->SetBinContent(25,1.173887);
   hnumuCCinFV_stack_12->SetBinContent(26,2.605143);
   hnumuCCinFV_stack_12->SetBinContent(27,1.504494);
   hnumuCCinFV_stack_12->SetBinContent(28,2.162818);
   hnumuCCinFV_stack_12->SetBinContent(29,2.000729);
   hnumuCCinFV_stack_12->SetBinContent(30,1.542449);
   hnumuCCinFV_stack_12->SetBinContent(31,0.9801958);
   hnumuCCinFV_stack_12->SetBinContent(32,1.770851);
   hnumuCCinFV_stack_12->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_12->SetBinContent(34,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(35,11.24263);
   hnumuCCinFV_stack_12->SetBinError(1,2.618013);
   hnumuCCinFV_stack_12->SetBinError(2,3.28477);
   hnumuCCinFV_stack_12->SetBinError(3,3.335002);
   hnumuCCinFV_stack_12->SetBinError(4,2.855085);
   hnumuCCinFV_stack_12->SetBinError(5,3.147329);
   hnumuCCinFV_stack_12->SetBinError(6,3.126728);
   hnumuCCinFV_stack_12->SetBinError(7,2.838113);
   hnumuCCinFV_stack_12->SetBinError(8,2.63236);
   hnumuCCinFV_stack_12->SetBinError(9,2.368663);
   hnumuCCinFV_stack_12->SetBinError(10,2.826664);
   hnumuCCinFV_stack_12->SetBinError(11,2.63234);
   hnumuCCinFV_stack_12->SetBinError(12,2.890221);
   hnumuCCinFV_stack_12->SetBinError(13,3.119461);
   hnumuCCinFV_stack_12->SetBinError(14,2.112832);
   hnumuCCinFV_stack_12->SetBinError(15,1.429872);
   hnumuCCinFV_stack_12->SetBinError(16,1.284062);
   hnumuCCinFV_stack_12->SetBinError(17,1.141533);
   hnumuCCinFV_stack_12->SetBinError(18,1.199108);
   hnumuCCinFV_stack_12->SetBinError(19,0.796132);
   hnumuCCinFV_stack_12->SetBinError(20,1.137127);
   hnumuCCinFV_stack_12->SetBinError(21,1.022856);
   hnumuCCinFV_stack_12->SetBinError(22,0.6511936);
   hnumuCCinFV_stack_12->SetBinError(23,1.123171);
   hnumuCCinFV_stack_12->SetBinError(24,0.8752848);
   hnumuCCinFV_stack_12->SetBinError(25,0.5908181);
   hnumuCCinFV_stack_12->SetBinError(26,0.890933);
   hnumuCCinFV_stack_12->SetBinError(27,0.6344715);
   hnumuCCinFV_stack_12->SetBinError(28,0.6984412);
   hnumuCCinFV_stack_12->SetBinError(29,0.7343859);
   hnumuCCinFV_stack_12->SetBinError(30,0.5977372);
   hnumuCCinFV_stack_12->SetBinError(31,0.4383608);
   hnumuCCinFV_stack_12->SetBinError(32,0.6410718);
   hnumuCCinFV_stack_12->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_12->SetBinError(34,0.340721);
   hnumuCCinFV_stack_12->SetBinError(35,1.642654);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.480516);
   hnueCCinFV_stack_13->SetBinContent(2,1.700719);
   hnueCCinFV_stack_13->SetBinContent(3,1.6075);
   hnueCCinFV_stack_13->SetBinContent(4,0.9042566);
   hnueCCinFV_stack_13->SetBinContent(5,0.5026693);
   hnueCCinFV_stack_13->SetBinContent(6,0.9313612);
   hnueCCinFV_stack_13->SetBinContent(7,0.9760798);
   hnueCCinFV_stack_13->SetBinContent(8,0.2107505);
   hnueCCinFV_stack_13->SetBinContent(9,1.694324);
   hnueCCinFV_stack_13->SetBinContent(10,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(11,1.978352);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.9409961);
   hnueCCinFV_stack_13->SetBinContent(14,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.5040739);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,1.764711);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,1.539164);
   hnueCCinFV_stack_13->SetBinError(1,0.6267061);
   hnueCCinFV_stack_13->SetBinError(2,0.6536358);
   hnueCCinFV_stack_13->SetBinError(3,0.7343427);
   hnueCCinFV_stack_13->SetBinError(4,0.4540547);
   hnueCCinFV_stack_13->SetBinError(5,0.3554931);
   hnueCCinFV_stack_13->SetBinError(6,0.4996515);
   hnueCCinFV_stack_13->SetBinError(7,0.5861572);
   hnueCCinFV_stack_13->SetBinError(8,0.2107505);
   hnueCCinFV_stack_13->SetBinError(9,1.222319);
   hnueCCinFV_stack_13->SetBinError(10,0.1711909);
   hnueCCinFV_stack_13->SetBinError(11,0.8302238);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.563664);
   hnueCCinFV_stack_13->SetBinError(14,0.4800908);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3564435);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,1.581755);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,0.5963856);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__14->SetBinContent(1,97.49381);
   hmcerror__14->SetBinContent(2,109.1628);
   hmcerror__14->SetBinContent(3,114.78);
   hmcerror__14->SetBinContent(4,103.8067);
   hmcerror__14->SetBinContent(5,118.1811);
   hmcerror__14->SetBinContent(6,143.2693);
   hmcerror__14->SetBinContent(7,148.3385);
   hmcerror__14->SetBinContent(8,168.3645);
   hmcerror__14->SetBinContent(9,200.022);
   hmcerror__14->SetBinContent(10,263.15);
   hmcerror__14->SetBinContent(11,310.4036);
   hmcerror__14->SetBinContent(12,339.6817);
   hmcerror__14->SetBinContent(13,282.541);
   hmcerror__14->SetBinContent(14,155.3384);
   hmcerror__14->SetBinContent(15,76.81654);
   hmcerror__14->SetBinContent(16,58.97786);
   hmcerror__14->SetBinContent(17,38.32818);
   hmcerror__14->SetBinContent(18,31.01913);
   hmcerror__14->SetBinContent(19,24.2772);
   hmcerror__14->SetBinContent(20,24.81692);
   hmcerror__14->SetBinContent(21,22.99554);
   hmcerror__14->SetBinContent(22,17.84386);
   hmcerror__14->SetBinContent(23,13.7269);
   hmcerror__14->SetBinContent(24,16.68222);
   hmcerror__14->SetBinContent(25,13.35156);
   hmcerror__14->SetBinContent(26,13.67422);
   hmcerror__14->SetBinContent(27,10.54403);
   hmcerror__14->SetBinContent(28,11.65711);
   hmcerror__14->SetBinContent(29,10.84794);
   hmcerror__14->SetBinContent(30,10.35767);
   hmcerror__14->SetBinContent(31,7.966576);
   hmcerror__14->SetBinContent(32,9.519566);
   hmcerror__14->SetBinContent(33,5.661727);
   hmcerror__14->SetBinContent(34,6.471975);
   hmcerror__14->SetBinContent(35,69.575);
   hmcerror__14->SetBinError(1,33.06094);
   hmcerror__14->SetBinError(2,31.77077);
   hmcerror__14->SetBinError(3,33.50116);
   hmcerror__14->SetBinError(4,35.80386);
   hmcerror__14->SetBinError(5,37.10117);
   hmcerror__14->SetBinError(6,45.4259);
   hmcerror__14->SetBinError(7,50.92528);
   hmcerror__14->SetBinError(8,63.91);
   hmcerror__14->SetBinError(9,74.8625);
   hmcerror__14->SetBinError(10,106.8645);
   hmcerror__14->SetBinError(11,132.4643);
   hmcerror__14->SetBinError(12,141.1902);
   hmcerror__14->SetBinError(13,134.1125);
   hmcerror__14->SetBinError(14,94.49228);
   hmcerror__14->SetBinError(15,55.44469);
   hmcerror__14->SetBinError(16,23.16509);
   hmcerror__14->SetBinError(17,16.69691);
   hmcerror__14->SetBinError(18,14.86557);
   hmcerror__14->SetBinError(19,14.49056);
   hmcerror__14->SetBinError(20,17.28591);
   hmcerror__14->SetBinError(21,12.46307);
   hmcerror__14->SetBinError(22,9.550032);
   hmcerror__14->SetBinError(23,9.756293);
   hmcerror__14->SetBinError(24,10.87758);
   hmcerror__14->SetBinError(25,10.5936);
   hmcerror__14->SetBinError(26,11.6119);
   hmcerror__14->SetBinError(27,9.002468);
   hmcerror__14->SetBinError(28,9.004395);
   hmcerror__14->SetBinError(29,8.854727);
   hmcerror__14->SetBinError(30,11.36996);
   hmcerror__14->SetBinError(31,8.215744);
   hmcerror__14->SetBinError(32,8.06004);
   hmcerror__14->SetBinError(33,5.516667);
   hmcerror__14->SetBinError(34,7.211092);
   hmcerror__14->SetBinError(35,48.96355);
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
   
   Double_t _fx3017[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3017[34] = {
   84,
   85,
   98,
   109,
   104,
   116,
   163,
   127,
   189,
   255,
   277,
   356,
   230,
   96,
   76,
   27,
   23,
   29,
   19,
   17,
   14,
   20,
   8,
   11,
   6,
   7,
   10,
   10,
   3,
   6,
   3,
   5,
   3,
   3};
   Double_t _felx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3017[34] = {
   9.2886,
   9.3428,
   10.0209,
   10.44031,
   10.19804,
   10.77033,
   12.76715,
   11.26943,
   13.74773,
   15.96872,
   16.64332,
   18.86796,
   15.16575,
   9.9196,
   8.8425,
   5.3414,
   4.9457,
   5.5285,
   4.5151,
   4.2835,
   3.9102,
   4.6266,
   3.0307,
   3.4975,
   2.67925,
   2.85954,
   3.34883,
   3.34883,
   2.143368,
   2.67925,
   2.143368,
   2.48995,
   2.143368,
   2.143368};
   Double_t _fehx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3017[34] = {
   9.0869,
   9.1411,
   9.82,
   10.44031,
   10.19804,
   10.77033,
   12.76715,
   11.26943,
   13.74773,
   15.96872,
   16.64332,
   18.86796,
   15.16575,
   9.718,
   8.6406,
   5.1322,
   4.7346,
   5.3201,
   4.3011,
   4.0673,
   3.6898,
   4.4133,
   2.7896,
   3.27,
   2.41858,
   2.61053,
   3.1179,
   3.1179,
   1.72422,
   2.41858,
   1.72422,
   2.21064,
   1.72422,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,440);
   Graph_Graph3017->SetMinimum(0.7709688);
   Graph_Graph3017->SetMaximum(412.2691);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.5/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2589.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 271.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 200.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1010.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  231.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 501.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 261.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 375.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 18.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3018[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3018[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3018[34] = {
   0.3391081,
   0.2910401,
   0.2918729,
   0.3449088,
   0.3139348,
   0.3170666,
   0.3433046,
   0.3795931,
   0.3742714,
   0.4060972,
   0.4267485,
   0.4156545,
   0.4746656,
   0.6082997,
   0.7217807,
   0.3927761,
   0.4356301,
   0.4792387,
   0.5968792,
   0.6965375,
   0.5419774,
   0.5352,
   0.7107428,
   0.6520463,
   0.7934351,
   0.8491825,
   0.8537975,
   0.7724379,
   0.8162587,
   1.097733,
   1.031277,
   0.8466815,
   0.9743788,
   1.114203};
   Double_t _fehx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3018[34] = {
   0.3391081,
   0.2910401,
   0.2918729,
   0.3449088,
   0.3139348,
   0.3170666,
   0.3433046,
   0.3795931,
   0.3742714,
   0.4060972,
   0.4267485,
   0.4156545,
   0.4746656,
   0.6082997,
   0.7217807,
   0.3927761,
   0.4356301,
   0.4792387,
   0.5968792,
   0.6965375,
   0.5419774,
   0.5352,
   0.7107428,
   0.6520463,
   0.7934351,
   0.8491825,
   0.8537975,
   0.7724379,
   0.8162587,
   1.097733,
   1.031277,
   0.8466815,
   0.9743788,
   1.114203};
   grae = new TGraphAsymmErrors(34,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,440);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3019[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3019[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3019[34] = {
   0.2288065,
   0.2133183,
   0.2056178,
   0.2567521,
   0.2668637,
   0.2660532,
   0.2954364,
   0.3306187,
   0.3599564,
   0.38636,
   0.4149168,
   0.4038888,
   0.3727231,
   0.3536933,
   0.326506,
   0.2687993,
   0.247788,
   0.2747901,
   0.2751407,
   0.2613975,
   0.2640258,
   0.2451963,
   0.3114144,
   0.2775801,
   0.3090862,
   0.2681379,
   0.3266471,
   0.2807642,
   0.3799407,
   0.3004263,
   0.3717873,
   0.3130441,
   0.3407243,
   0.4000412};
   Double_t _fehx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3019[34] = {
   0.2288065,
   0.2133183,
   0.2056178,
   0.2567521,
   0.2668637,
   0.2660532,
   0.2954364,
   0.3306187,
   0.3599564,
   0.38636,
   0.4149168,
   0.4038888,
   0.3727231,
   0.3536933,
   0.326506,
   0.2687993,
   0.247788,
   0.2747901,
   0.2751407,
   0.2613975,
   0.2640258,
   0.2451963,
   0.3114144,
   0.2775801,
   0.3090862,
   0.2681379,
   0.3266471,
   0.2807642,
   0.3799407,
   0.3004263,
   0.3717873,
   0.3130441,
   0.3407243,
   0.4000412};
   grae = new TGraphAsymmErrors(34,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,440);
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
   
   Double_t _fx3020[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3020[34] = {
   0.8615931,
   0.7786533,
   0.8538075,
   1.050028,
   0.880005,
   0.8096643,
   1.098838,
   0.7543159,
   0.9448963,
   0.969029,
   0.8923866,
   1.04804,
   0.814041,
   0.6180057,
   0.9893703,
   0.4577989,
   0.6000807,
   0.934907,
   0.7826272,
   0.6850166,
   0.6088136,
   1.120834,
   0.5827974,
   0.6593846,
   0.4493856,
   0.5119123,
   0.9484039,
   0.8578454,
   0.2765501,
   0.579281,
   0.3765733,
   0.5252341,
   0.5298737,
   0.463537};
   Double_t _felx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3020[34] = {
   0.09527374,
   0.08558591,
   0.0873053,
   0.1005744,
   0.08629159,
   0.07517544,
   0.08606765,
   0.06693471,
   0.06873109,
   0.06068295,
   0.05361831,
   0.05554601,
   0.05367627,
   0.06385802,
   0.1151119,
   0.0905662,
   0.1290356,
   0.1782287,
   0.1859811,
   0.172604,
   0.1700417,
   0.2592825,
   0.2207855,
   0.2096543,
   0.2006694,
   0.2091191,
   0.3176043,
   0.2872778,
   0.1975829,
   0.2586731,
   0.2690451,
   0.2615613,
   0.3785714,
   0.3311768};
   Double_t _fehx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3020[34] = {
   0.09320489,
   0.08373821,
   0.085555,
   0.1005744,
   0.08629159,
   0.07517544,
   0.08606765,
   0.06693471,
   0.06873109,
   0.06068295,
   0.05361831,
   0.05554601,
   0.05367627,
   0.06256021,
   0.1124836,
   0.0870191,
   0.1235279,
   0.1715103,
   0.1771662,
   0.1638922,
   0.1604572,
   0.2473288,
   0.2032215,
   0.196017,
   0.1811458,
   0.1909089,
   0.2957028,
   0.2674676,
   0.1589444,
   0.2335063,
   0.2164317,
   0.2322207,
   0.3045396,
   0.2664133};
   grae = new TGraphAsymmErrors(34,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,440);
   Graph_Graph3020->SetMinimum(0.07107051);
   Graph_Graph3020->SetMaximum(1.497082);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 20:09:49 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
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
   pad1->Range(-92.30769,-0.96,676.9231,106.1558);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hmc__25->SetBinContent(1,0.1950248);
   hmc__25->SetBinContent(2,2.451161);
   hmc__25->SetBinContent(3,7.23874);
   hmc__25->SetBinContent(4,19.4401);
   hmc__25->SetBinContent(5,22.07195);
   hmc__25->SetBinContent(6,35.38322);
   hmc__25->SetBinContent(7,36.37371);
   hmc__25->SetBinContent(8,47.15224);
   hmc__25->SetBinContent(9,38.87959);
   hmc__25->SetBinContent(10,40.59599);
   hmc__25->SetBinContent(11,36.38473);
   hmc__25->SetBinContent(12,38.64512);
   hmc__25->SetBinContent(13,36.45512);
   hmc__25->SetBinContent(14,23.572);
   hmc__25->SetBinContent(15,22.62482);
   hmc__25->SetBinContent(16,20.88845);
   hmc__25->SetBinContent(17,26.65246);
   hmc__25->SetBinContent(18,17.53198);
   hmc__25->SetBinContent(19,15.90966);
   hmc__25->SetBinContent(20,15.36727);
   hmc__25->SetBinContent(21,10.61778);
   hmc__25->SetBinContent(22,16.56657);
   hmc__25->SetBinContent(23,11.24676);
   hmc__25->SetBinContent(24,11.58443);
   hmc__25->SetBinContent(25,9.258901);
   hmc__25->SetBinContent(26,5.16437);
   hmc__25->SetBinContent(27,7.37157);
   hmc__25->SetBinContent(28,7.045616);
   hmc__25->SetBinContent(29,7.485435);
   hmc__25->SetBinContent(30,3.203344);
   hmc__25->SetBinContent(31,4.545403);
   hmc__25->SetBinContent(32,4.481295);
   hmc__25->SetBinContent(33,4.451421);
   hmc__25->SetBinContent(34,1.145553);
   hmc__25->SetBinContent(35,1.854518);
   hmc__25->SetBinContent(36,2.726024);
   hmc__25->SetBinContent(37,1.256158);
   hmc__25->SetBinContent(38,2.213053);
   hmc__25->SetBinContent(39,1.614911);
   hmc__25->SetBinContent(40,2.935214);
   hmc__25->SetBinContent(41,40.00747);
   hmc__25->SetBinError(1,1.777134);
   hmc__25->SetBinError(2,3.606623);
   hmc__25->SetBinError(3,7.102493);
   hmc__25->SetBinError(4,10.10376);
   hmc__25->SetBinError(5,14.54986);
   hmc__25->SetBinError(6,14.35971);
   hmc__25->SetBinError(7,15.18006);
   hmc__25->SetBinError(8,20.68096);
   hmc__25->SetBinError(9,17.09629);
   hmc__25->SetBinError(10,17.66586);
   hmc__25->SetBinError(11,16.124);
   hmc__25->SetBinError(12,17.1122);
   hmc__25->SetBinError(13,14.97773);
   hmc__25->SetBinError(14,13.54115);
   hmc__25->SetBinError(15,12.42234);
   hmc__25->SetBinError(16,9.947106);
   hmc__25->SetBinError(17,12.52742);
   hmc__25->SetBinError(18,9.83881);
   hmc__25->SetBinError(19,9.774818);
   hmc__25->SetBinError(20,17.21174);
   hmc__25->SetBinError(21,6.762834);
   hmc__25->SetBinError(22,12.84408);
   hmc__25->SetBinError(23,8.018736);
   hmc__25->SetBinError(24,9.780677);
   hmc__25->SetBinError(25,10.97285);
   hmc__25->SetBinError(26,4.192633);
   hmc__25->SetBinError(27,5.868406);
   hmc__25->SetBinError(28,8.21012);
   hmc__25->SetBinError(29,10.22528);
   hmc__25->SetBinError(30,4.374837);
   hmc__25->SetBinError(31,9.818169);
   hmc__25->SetBinError(32,4.461608);
   hmc__25->SetBinError(33,4.59029);
   hmc__25->SetBinError(34,3.567859);
   hmc__25->SetBinError(35,5.343911);
   hmc__25->SetBinError(36,5.85721);
   hmc__25->SetBinError(37,2.074431);
   hmc__25->SetBinError(38,5.34615);
   hmc__25->SetBinError(39,3.092777);
   hmc__25->SetBinError(40,8.932623);
   hmc__25->SetBinError(41,23.81076);
   hmc__25->SetMinimum(-0.96);
   hmc__25->SetMaximum(100.8);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",40,0,600);
   hs9_stack_9->SetMinimum(-1.959049e-08);
   hs9_stack_9->SetMaximum(49.50985);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hbadmatch_stack_1->SetBinContent(3,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,0.5653796);
   hbadmatch_stack_1->SetBinContent(5,1.253945);
   hbadmatch_stack_1->SetBinContent(6,1.150128);
   hbadmatch_stack_1->SetBinContent(7,1.412513);
   hbadmatch_stack_1->SetBinContent(8,1.317301);
   hbadmatch_stack_1->SetBinContent(9,1.433679);
   hbadmatch_stack_1->SetBinContent(10,1.307373);
   hbadmatch_stack_1->SetBinContent(11,1.41451);
   hbadmatch_stack_1->SetBinContent(12,2.285861);
   hbadmatch_stack_1->SetBinContent(13,1.796611);
   hbadmatch_stack_1->SetBinContent(14,1.739445);
   hbadmatch_stack_1->SetBinContent(16,0.7002679);
   hbadmatch_stack_1->SetBinContent(19,0.3348596);
   hbadmatch_stack_1->SetBinContent(20,0.4242198);
   hbadmatch_stack_1->SetBinContent(21,0.2193965);
   hbadmatch_stack_1->SetBinContent(22,0.5094033);
   hbadmatch_stack_1->SetBinContent(23,0.1326562);
   hbadmatch_stack_1->SetBinContent(24,0.4057556);
   hbadmatch_stack_1->SetBinContent(25,0.7607957);
   hbadmatch_stack_1->SetBinContent(27,0.1106221);
   hbadmatch_stack_1->SetBinContent(30,0.3401776);
   hbadmatch_stack_1->SetBinContent(32,0.6360607);
   hbadmatch_stack_1->SetBinContent(37,0.3401776);
   hbadmatch_stack_1->SetBinContent(38,0.1287511);
   hbadmatch_stack_1->SetBinContent(41,0.1279738);
   hbadmatch_stack_1->SetBinError(3,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.4079666);
   hbadmatch_stack_1->SetBinError(5,0.5939438);
   hbadmatch_stack_1->SetBinError(6,0.5355888);
   hbadmatch_stack_1->SetBinError(7,0.5557524);
   hbadmatch_stack_1->SetBinError(8,0.5230837);
   hbadmatch_stack_1->SetBinError(9,0.6240487);
   hbadmatch_stack_1->SetBinError(10,0.5812903);
   hbadmatch_stack_1->SetBinError(11,0.5613197);
   hbadmatch_stack_1->SetBinError(12,0.7104252);
   hbadmatch_stack_1->SetBinError(13,0.623731);
   hbadmatch_stack_1->SetBinError(14,0.7793579);
   hbadmatch_stack_1->SetBinError(16,0.4141774);
   hbadmatch_stack_1->SetBinError(19,0.245734);
   hbadmatch_stack_1->SetBinError(20,0.2999976);
   hbadmatch_stack_1->SetBinError(21,0.2193965);
   hbadmatch_stack_1->SetBinError(22,0.5094033);
   hbadmatch_stack_1->SetBinError(23,0.1326562);
   hbadmatch_stack_1->SetBinError(24,0.4057556);
   hbadmatch_stack_1->SetBinError(25,0.4522722);
   hbadmatch_stack_1->SetBinError(27,0.1106221);
   hbadmatch_stack_1->SetBinError(30,0.3401776);
   hbadmatch_stack_1->SetBinError(32,0.4822316);
   hbadmatch_stack_1->SetBinError(37,0.3401776);
   hbadmatch_stack_1->SetBinError(38,0.1287511);
   hbadmatch_stack_1->SetBinError(41,0.1279737);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hext_stack_2->SetBinContent(2,0.4065989);
   hext_stack_2->SetBinContent(3,2.110787);
   hext_stack_2->SetBinContent(4,6.684288);
   hext_stack_2->SetBinContent(5,3.069618);
   hext_stack_2->SetBinContent(6,4.912259);
   hext_stack_2->SetBinContent(7,4.517249);
   hext_stack_2->SetBinContent(8,7.568097);
   hext_stack_2->SetBinContent(9,6.042674);
   hext_stack_2->SetBinContent(10,4.780987);
   hext_stack_2->SetBinContent(11,3.647801);
   hext_stack_2->SetBinContent(12,3.889996);
   hext_stack_2->SetBinContent(13,8.780714);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,1.868591);
   hext_stack_2->SetBinContent(16,3.864046);
   hext_stack_2->SetBinContent(17,5.86391);
   hext_stack_2->SetBinContent(18,1.868591);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.6487947);
   hext_stack_2->SetBinContent(22,4.587862);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(25,0.8131978);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinContent(27,0.7309963);
   hext_stack_2->SetBinContent(29,0.6416141);
   hext_stack_2->SetBinContent(32,0.3243973);
   hext_stack_2->SetBinContent(33,0.6416141);
   hext_stack_2->SetBinContent(35,0.3243973);
   hext_stack_2->SetBinContent(40,0.7309963);
   hext_stack_2->SetBinContent(41,6.221437);
   hext_stack_2->SetBinError(2,0.4065989);
   hext_stack_2->SetBinError(3,0.8669371);
   hext_stack_2->SetBinError(4,1.921809);
   hext_stack_2->SetBinError(5,1.212305);
   hext_stack_2->SetBinError(6,1.626223);
   hext_stack_2->SetBinError(7,1.553448);
   hext_stack_2->SetBinError(8,2.037195);
   hext_stack_2->SetBinError(9,1.811541);
   hext_stack_2->SetBinError(10,1.361888);
   hext_stack_2->SetBinError(11,1.246589);
   hext_stack_2->SetBinError(12,1.264566);
   hext_stack_2->SetBinError(13,2.201666);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,0.840497);
   hext_stack_2->SetBinError(16,1.437918);
   hext_stack_2->SetBinError(17,1.887831);
   hext_stack_2->SetBinError(18,0.840497);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.4587671);
   hext_stack_2->SetBinError(22,1.593539);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(25,0.5750177);
   hext_stack_2->SetBinError(26,0.5750177);
   hext_stack_2->SetBinError(27,0.5201503);
   hext_stack_2->SetBinError(29,0.6416141);
   hext_stack_2->SetBinError(32,0.3243973);
   hext_stack_2->SetBinError(33,0.6416141);
   hext_stack_2->SetBinError(35,0.3243973);
   hext_stack_2->SetBinError(40,0.5201503);
   hext_stack_2->SetBinError(41,1.731894);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.6669159);
   hdirt_stack_3->SetBinContent(7,0.4008912);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.4762587);
   hdirt_stack_3->SetBinContent(11,0.4149213);
   hdirt_stack_3->SetBinContent(12,0.002351481);
   hdirt_stack_3->SetBinContent(13,0.665001);
   hdirt_stack_3->SetBinContent(15,0.4289006);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.4946486);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(6,0.4822861);
   hdirt_stack_3->SetBinError(7,0.2968804);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3652866);
   hdirt_stack_3->SetBinError(11,0.4149213);
   hdirt_stack_3->SetBinError(12,0.002351481);
   hdirt_stack_3->SetBinError(13,0.3973583);
   hdirt_stack_3->SetBinError(15,0.4289006);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.3726269);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   houtFV_stack_4->SetBinContent(2,0.9286332);
   houtFV_stack_4->SetBinContent(3,1.745795);
   houtFV_stack_4->SetBinContent(4,2.579041);
   houtFV_stack_4->SetBinContent(5,5.344973);
   houtFV_stack_4->SetBinContent(6,8.064423);
   houtFV_stack_4->SetBinContent(7,5.144403);
   houtFV_stack_4->SetBinContent(8,9.638218);
   houtFV_stack_4->SetBinContent(9,6.240539);
   houtFV_stack_4->SetBinContent(10,9.278723);
   houtFV_stack_4->SetBinContent(11,7.73929);
   houtFV_stack_4->SetBinContent(12,5.086902);
   houtFV_stack_4->SetBinContent(13,6.452344);
   houtFV_stack_4->SetBinContent(14,3.9923);
   houtFV_stack_4->SetBinContent(15,3.722618);
   houtFV_stack_4->SetBinContent(16,4.168843);
   houtFV_stack_4->SetBinContent(17,3.114363);
   houtFV_stack_4->SetBinContent(18,3.18331);
   houtFV_stack_4->SetBinContent(19,2.912185);
   houtFV_stack_4->SetBinContent(20,4.486006);
   houtFV_stack_4->SetBinContent(21,1.699354);
   houtFV_stack_4->SetBinContent(22,2.05348);
   houtFV_stack_4->SetBinContent(23,1.981107);
   houtFV_stack_4->SetBinContent(24,2.045515);
   houtFV_stack_4->SetBinContent(25,0.7811482);
   houtFV_stack_4->SetBinContent(26,1.072095);
   houtFV_stack_4->SetBinContent(27,1.178602);
   houtFV_stack_4->SetBinContent(28,1.217248);
   houtFV_stack_4->SetBinContent(29,1.60143);
   houtFV_stack_4->SetBinContent(30,0.536893);
   houtFV_stack_4->SetBinContent(31,1.649658);
   houtFV_stack_4->SetBinContent(32,0.8338502);
   houtFV_stack_4->SetBinContent(33,0.5352025);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,0.4453284);
   houtFV_stack_4->SetBinContent(36,0.3917402);
   houtFV_stack_4->SetBinContent(38,0.574264);
   houtFV_stack_4->SetBinContent(39,0.7825416);
   houtFV_stack_4->SetBinContent(40,0.1950248);
   houtFV_stack_4->SetBinContent(41,2.653158);
   houtFV_stack_4->SetBinError(2,0.48078);
   houtFV_stack_4->SetBinError(3,0.6934501);
   houtFV_stack_4->SetBinError(4,0.7522365);
   houtFV_stack_4->SetBinError(5,1.094095);
   houtFV_stack_4->SetBinError(6,1.433534);
   houtFV_stack_4->SetBinError(7,1.08575);
   houtFV_stack_4->SetBinError(8,1.59807);
   houtFV_stack_4->SetBinError(9,1.36209);
   houtFV_stack_4->SetBinError(10,1.555188);
   houtFV_stack_4->SetBinError(11,1.332439);
   houtFV_stack_4->SetBinError(12,1.072521);
   houtFV_stack_4->SetBinError(13,1.242254);
   houtFV_stack_4->SetBinError(14,0.9763215);
   houtFV_stack_4->SetBinError(15,0.9515677);
   houtFV_stack_4->SetBinError(16,1.017272);
   houtFV_stack_4->SetBinError(17,0.984952);
   houtFV_stack_4->SetBinError(18,0.7818774);
   houtFV_stack_4->SetBinError(19,0.8144713);
   houtFV_stack_4->SetBinError(20,1.143044);
   houtFV_stack_4->SetBinError(21,0.6637098);
   houtFV_stack_4->SetBinError(22,0.650492);
   houtFV_stack_4->SetBinError(23,0.6912899);
   houtFV_stack_4->SetBinError(24,1.068734);
   houtFV_stack_4->SetBinError(25,0.4015755);
   houtFV_stack_4->SetBinError(26,0.5551335);
   houtFV_stack_4->SetBinError(27,0.4811646);
   houtFV_stack_4->SetBinError(28,0.6211758);
   houtFV_stack_4->SetBinError(29,0.7359957);
   houtFV_stack_4->SetBinError(30,0.3929602);
   houtFV_stack_4->SetBinError(31,0.7568605);
   houtFV_stack_4->SetBinError(32,0.633528);
   houtFV_stack_4->SetBinError(33,0.3921167);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,0.2821406);
   houtFV_stack_4->SetBinError(36,0.2770047);
   houtFV_stack_4->SetBinError(38,0.574264);
   houtFV_stack_4->SetBinError(39,0.6179719);
   houtFV_stack_4->SetBinError(40,0.1950249);
   houtFV_stack_4->SetBinError(41,0.840726);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1817589);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(36,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(41,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1469515);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(36,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(41,0.2983287);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03347047);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1127355);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05281172);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1089556);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06494296);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03613899);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.03762904);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(41,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0202701);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.05424106);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03058298);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04448637);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03827103);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02557584);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02660775);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(41,0.106717);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.225861);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.5367572);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.606022);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.818335);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.969641);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.867325);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.73589);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.011572);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.932333);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.072097);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.639706);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.141895);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.407992);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.385714);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.403202);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.181756);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.789258);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.352432);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.685311);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.932146);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.862506);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.961386);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.582617);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.447695);
   hNCpi0inFVres_stack_7->SetBinContent(26,1.372444);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.007962);
   hNCpi0inFVres_stack_7->SetBinContent(28,1.212789);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.8134871);
   hNCpi0inFVres_stack_7->SetBinContent(30,1.046518);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.4206439);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.7118928);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.9564618);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.353055);
   hNCpi0inFVres_stack_7->SetBinContent(35,0.5602494);
   hNCpi0inFVres_stack_7->SetBinContent(36,0.6231669);
   hNCpi0inFVres_stack_7->SetBinContent(37,0.1174755);
   hNCpi0inFVres_stack_7->SetBinContent(38,0.3875524);
   hNCpi0inFVres_stack_7->SetBinContent(39,0.3942687);
   hNCpi0inFVres_stack_7->SetBinContent(40,0.2109185);
   hNCpi0inFVres_stack_7->SetBinContent(41,4.792036);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1423177);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1694143);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4004244);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5223481);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5077878);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7019375);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7796414);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8943069);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6667895);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7344433);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6950116);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5692701);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5279095);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5006618);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3659814);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4968061);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4666655);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6514434);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4455154);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3696606);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6340097);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3703274);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3994897);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3421313);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2951033);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2747612);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2972084);
   hNCpi0inFVres_stack_7->SetBinError(29,0.2440147);
   hNCpi0inFVres_stack_7->SetBinError(30,0.3534584);
   hNCpi0inFVres_stack_7->SetBinError(31,0.1557401);
   hNCpi0inFVres_stack_7->SetBinError(32,0.2504672);
   hNCpi0inFVres_stack_7->SetBinError(33,0.3774413);
   hNCpi0inFVres_stack_7->SetBinError(34,0.2086276);
   hNCpi0inFVres_stack_7->SetBinError(35,0.284334);
   hNCpi0inFVres_stack_7->SetBinError(36,0.5481892);
   hNCpi0inFVres_stack_7->SetBinError(37,0.05410284);
   hNCpi0inFVres_stack_7->SetBinError(38,0.1470636);
   hNCpi0inFVres_stack_7->SetBinError(39,0.3315463);
   hNCpi0inFVres_stack_7->SetBinError(40,0.1087833);
   hNCpi0inFVres_stack_7->SetBinError(41,0.973043);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.04939748);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.01071203);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.7060549);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.4753302);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.365326);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.7254115);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.291506);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.027317);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8309762);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.521612);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.588345);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.123824);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.128616);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7551117);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9684745);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.994414);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.717645);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.7626474);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5007889);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.418322);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.164499);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.022217);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.4959791);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.343629);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2959536);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2723132);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.5963693);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.1098801);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.5461472);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.5393427);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.1195179);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.4365862);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.2257253);
   hNCpi0inFVdis_stack_8->SetBinContent(35,0.1843649);
   hNCpi0inFVdis_stack_8->SetBinContent(36,0.2278553);
   hNCpi0inFVdis_stack_8->SetBinContent(37,0.2100496);
   hNCpi0inFVdis_stack_8->SetBinContent(38,0.7823079);
   hNCpi0inFVdis_stack_8->SetBinContent(39,0.04467028);
   hNCpi0inFVdis_stack_8->SetBinContent(40,0.1658851);
   hNCpi0inFVdis_stack_8->SetBinContent(41,5.13595);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.02858284);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.01071203);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2316102);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1581397);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3209023);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1885007);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6882109);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2663484);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.204908);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5565082);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4160586);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2616895);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4208219);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.202467);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3600559);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5771031);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4640904);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2622032);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2747014);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1623865);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4127795);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5854154);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1776143);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5365392);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1172104);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.09746704);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4247878);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.06263933);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4366092);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3466199);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.05025987);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.2716883);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.1683309);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.1698172);
   hNCpi0inFVdis_stack_8->SetBinError(36,0.1968098);
   hNCpi0inFVdis_stack_8->SetBinError(37,0.1960112);
   hNCpi0inFVdis_stack_8->SetBinError(38,0.4043277);
   hNCpi0inFVdis_stack_8->SetBinError(39,0.03255229);
   hNCpi0inFVdis_stack_8->SetBinError(40,0.1230503);
   hNCpi0inFVdis_stack_8->SetBinError(41,1.110658);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01881452);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(3,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(4,2.7859);
   hCCpi0inFV_stack_10->SetBinContent(5,3.758431);
   hCCpi0inFV_stack_10->SetBinContent(6,5.061636);
   hCCpi0inFV_stack_10->SetBinContent(7,6.88939);
   hCCpi0inFV_stack_10->SetBinContent(8,9.783323);
   hCCpi0inFV_stack_10->SetBinContent(9,9.50303);
   hCCpi0inFV_stack_10->SetBinContent(10,7.26849);
   hCCpi0inFV_stack_10->SetBinContent(11,5.426647);
   hCCpi0inFV_stack_10->SetBinContent(12,8.942443);
   hCCpi0inFV_stack_10->SetBinContent(13,5.857791);
   hCCpi0inFV_stack_10->SetBinContent(14,5.623977);
   hCCpi0inFV_stack_10->SetBinContent(15,5.197476);
   hCCpi0inFV_stack_10->SetBinContent(16,3.82273);
   hCCpi0inFV_stack_10->SetBinContent(17,7.508446);
   hCCpi0inFV_stack_10->SetBinContent(18,4.30637);
   hCCpi0inFV_stack_10->SetBinContent(19,3.132353);
   hCCpi0inFV_stack_10->SetBinContent(20,3.467945);
   hCCpi0inFV_stack_10->SetBinContent(21,3.328423);
   hCCpi0inFV_stack_10->SetBinContent(22,2.107235);
   hCCpi0inFV_stack_10->SetBinContent(23,3.037559);
   hCCpi0inFV_stack_10->SetBinContent(24,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(25,1.56527);
   hCCpi0inFV_stack_10->SetBinContent(26,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(27,2.263561);
   hCCpi0inFV_stack_10->SetBinContent(28,1.56527);
   hCCpi0inFV_stack_10->SetBinContent(29,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(30,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(31,0.6803553);
   hCCpi0inFV_stack_10->SetBinContent(32,1.26712);
   hCCpi0inFV_stack_10->SetBinContent(33,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(34,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(35,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(36,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(37,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(38,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(39,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(40,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(41,8.185011);
   hCCpi0inFV_stack_10->SetBinError(1,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(3,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(4,0.8327353);
   hCCpi0inFV_stack_10->SetBinError(5,1.002093);
   hCCpi0inFV_stack_10->SetBinError(6,1.080826);
   hCCpi0inFV_stack_10->SetBinError(7,1.295474);
   hCCpi0inFV_stack_10->SetBinError(8,1.493317);
   hCCpi0inFV_stack_10->SetBinError(9,1.575309);
   hCCpi0inFV_stack_10->SetBinError(10,1.380217);
   hCCpi0inFV_stack_10->SetBinError(11,1.144207);
   hCCpi0inFV_stack_10->SetBinError(12,1.501852);
   hCCpi0inFV_stack_10->SetBinError(13,1.263167);
   hCCpi0inFV_stack_10->SetBinError(14,1.276503);
   hCCpi0inFV_stack_10->SetBinError(15,1.215208);
   hCCpi0inFV_stack_10->SetBinError(16,0.9211981);
   hCCpi0inFV_stack_10->SetBinError(17,1.449672);
   hCCpi0inFV_stack_10->SetBinError(18,1.020466);
   hCCpi0inFV_stack_10->SetBinError(19,0.8211108);
   hCCpi0inFV_stack_10->SetBinError(20,0.9620561);
   hCCpi0inFV_stack_10->SetBinError(21,0.844624);
   hCCpi0inFV_stack_10->SetBinError(22,0.6801976);
   hCCpi0inFV_stack_10->SetBinError(23,0.8333549);
   hCCpi0inFV_stack_10->SetBinError(24,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(25,0.5534115);
   hCCpi0inFV_stack_10->SetBinError(26,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(27,0.793432);
   hCCpi0inFV_stack_10->SetBinError(28,0.5534115);
   hCCpi0inFV_stack_10->SetBinError(29,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(30,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(31,0.4810838);
   hCCpi0inFV_stack_10->SetBinError(32,0.5883944);
   hCCpi0inFV_stack_10->SetBinError(33,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(34,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(35,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(36,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(37,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(38,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(39,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(40,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(41,1.503501);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.7336084);
   hNCinFV_stack_11->SetBinContent(5,0.7165);
   hNCinFV_stack_11->SetBinContent(6,1.123658);
   hNCinFV_stack_11->SetBinContent(7,2.240598);
   hNCinFV_stack_11->SetBinContent(8,1.427441);
   hNCinFV_stack_11->SetBinContent(9,1.070952);
   hNCinFV_stack_11->SetBinContent(10,1.986225);
   hNCinFV_stack_11->SetBinContent(11,1.373769);
   hNCinFV_stack_11->SetBinContent(12,1.723981);
   hNCinFV_stack_11->SetBinContent(13,1.794055);
   hNCinFV_stack_11->SetBinContent(14,2.259372);
   hNCinFV_stack_11->SetBinContent(15,0.7522706);
   hNCinFV_stack_11->SetBinContent(16,0.466774);
   hNCinFV_stack_11->SetBinContent(17,0.8026247);
   hNCinFV_stack_11->SetBinContent(18,1.0872);
   hNCinFV_stack_11->SetBinContent(19,1.440486);
   hNCinFV_stack_11->SetBinContent(20,0.8979468);
   hNCinFV_stack_11->SetBinContent(21,0.4843409);
   hNCinFV_stack_11->SetBinContent(22,0.772576);
   hNCinFV_stack_11->SetBinContent(23,0.4358965);
   hNCinFV_stack_11->SetBinContent(24,2.04851);
   hNCinFV_stack_11->SetBinContent(25,1.580839);
   hNCinFV_stack_11->SetBinContent(26,0.3401776);
   hNCinFV_stack_11->SetBinContent(27,0.7660608);
   hNCinFV_stack_11->SetBinContent(28,0.4962409);
   hNCinFV_stack_11->SetBinContent(29,1.747113);
   hNCinFV_stack_11->SetBinContent(31,0.1950248);
   hNCinFV_stack_11->SetBinContent(32,0.3917402);
   hNCinFV_stack_11->SetBinContent(33,0.1950248);
   hNCinFV_stack_11->SetBinContent(34,0.1441633);
   hNCinFV_stack_11->SetBinContent(36,0.3320811);
   hNCinFV_stack_11->SetBinContent(37,0.1950248);
   hNCinFV_stack_11->SetBinContent(40,0.9021621);
   hNCinFV_stack_11->SetBinContent(41,2.518048);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.4394482);
   hNCinFV_stack_11->SetBinError(5,0.4173965);
   hNCinFV_stack_11->SetBinError(6,0.5188295);
   hNCinFV_stack_11->SetBinError(7,0.7445801);
   hNCinFV_stack_11->SetBinError(8,0.5363578);
   hNCinFV_stack_11->SetBinError(9,0.5030594);
   hNCinFV_stack_11->SetBinError(10,0.5798791);
   hNCinFV_stack_11->SetBinError(11,0.5731009);
   hNCinFV_stack_11->SetBinError(12,0.6801551);
   hNCinFV_stack_11->SetBinError(13,0.6233262);
   hNCinFV_stack_11->SetBinError(14,0.9737954);
   hNCinFV_stack_11->SetBinError(15,0.3844602);
   hNCinFV_stack_11->SetBinError(16,0.2773657);
   hNCinFV_stack_11->SetBinError(17,0.4393846);
   hNCinFV_stack_11->SetBinError(18,0.4815522);
   hNCinFV_stack_11->SetBinError(19,0.5178363);
   hNCinFV_stack_11->SetBinError(20,0.668878);
   hNCinFV_stack_11->SetBinError(21,0.3694643);
   hNCinFV_stack_11->SetBinError(22,0.608533);
   hNCinFV_stack_11->SetBinError(23,0.2589301);
   hNCinFV_stack_11->SetBinError(24,1.083604);
   hNCinFV_stack_11->SetBinError(25,0.7498471);
   hNCinFV_stack_11->SetBinError(26,0.3401776);
   hNCinFV_stack_11->SetBinError(27,0.4650237);
   hNCinFV_stack_11->SetBinError(28,0.2965869);
   hNCinFV_stack_11->SetBinError(29,0.7413026);
   hNCinFV_stack_11->SetBinError(31,0.1950249);
   hNCinFV_stack_11->SetBinError(32,0.2770047);
   hNCinFV_stack_11->SetBinError(33,0.1950249);
   hNCinFV_stack_11->SetBinError(34,0.1441632);
   hNCinFV_stack_11->SetBinError(36,0.3320811);
   hNCinFV_stack_11->SetBinError(37,0.1950249);
   hNCinFV_stack_11->SetBinError(40,0.7323606);
   hNCinFV_stack_11->SetBinError(41,0.9166922);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hnumuCCinFV_stack_12->SetBinContent(2,0.8406703);
   hnumuCCinFV_stack_12->SetBinContent(3,1.767983);
   hnumuCCinFV_stack_12->SetBinContent(4,3.779811);
   hnumuCCinFV_stack_12->SetBinContent(5,4.594283);
   hnumuCCinFV_stack_12->SetBinContent(6,8.956503);
   hnumuCCinFV_stack_12->SetBinContent(7,9.070391);
   hnumuCCinFV_stack_12->SetBinContent(8,7.143438);
   hnumuCCinFV_stack_12->SetBinContent(9,5.512197);
   hnumuCCinFV_stack_12->SetBinContent(10,7.687561);
   hnumuCCinFV_stack_12->SetBinContent(11,7.709137);
   hnumuCCinFV_stack_12->SetBinContent(12,9.449396);
   hnumuCCinFV_stack_12->SetBinContent(13,4.661119);
   hnumuCCinFV_stack_12->SetBinContent(14,3.361453);
   hnumuCCinFV_stack_12->SetBinContent(15,5.345528);
   hnumuCCinFV_stack_12->SetBinContent(16,4.155921);
   hnumuCCinFV_stack_12->SetBinContent(17,4.149323);
   hnumuCCinFV_stack_12->SetBinContent(18,1.819792);
   hnumuCCinFV_stack_12->SetBinContent(19,3.627537);
   hnumuCCinFV_stack_12->SetBinContent(20,2.086006);
   hnumuCCinFV_stack_12->SetBinContent(21,1.630448);
   hnumuCCinFV_stack_12->SetBinContent(22,2.401332);
   hnumuCCinFV_stack_12->SetBinContent(23,1.525651);
   hnumuCCinFV_stack_12->SetBinContent(24,2.796671);
   hnumuCCinFV_stack_12->SetBinContent(25,0.9134756);
   hnumuCCinFV_stack_12->SetBinContent(26,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(27,1.02876);
   hnumuCCinFV_stack_12->SetBinContent(28,1.70749);
   hnumuCCinFV_stack_12->SetBinContent(29,1.251537);
   hnumuCCinFV_stack_12->SetBinContent(31,0.9558616);
   hnumuCCinFV_stack_12->SetBinContent(32,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(33,0.6127455);
   hnumuCCinFV_stack_12->SetBinContent(36,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(39,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(41,4.793086);
   hnumuCCinFV_stack_12->SetBinError(2,0.5099247);
   hnumuCCinFV_stack_12->SetBinError(3,0.701503);
   hnumuCCinFV_stack_12->SetBinError(4,1.009927);
   hnumuCCinFV_stack_12->SetBinError(5,1.484505);
   hnumuCCinFV_stack_12->SetBinError(6,2.151082);
   hnumuCCinFV_stack_12->SetBinError(7,1.905964);
   hnumuCCinFV_stack_12->SetBinError(8,1.428936);
   hnumuCCinFV_stack_12->SetBinError(9,1.289732);
   hnumuCCinFV_stack_12->SetBinError(10,1.452395);
   hnumuCCinFV_stack_12->SetBinError(11,1.579683);
   hnumuCCinFV_stack_12->SetBinError(12,1.836841);
   hnumuCCinFV_stack_12->SetBinError(13,1.132181);
   hnumuCCinFV_stack_12->SetBinError(14,0.9705962);
   hnumuCCinFV_stack_12->SetBinError(15,1.19998);
   hnumuCCinFV_stack_12->SetBinError(16,1.230658);
   hnumuCCinFV_stack_12->SetBinError(17,1.390635);
   hnumuCCinFV_stack_12->SetBinError(18,0.6574939);
   hnumuCCinFV_stack_12->SetBinError(19,0.9773886);
   hnumuCCinFV_stack_12->SetBinError(20,0.7676717);
   hnumuCCinFV_stack_12->SetBinError(21,0.6292562);
   hnumuCCinFV_stack_12->SetBinError(22,0.786352);
   hnumuCCinFV_stack_12->SetBinError(23,0.5945433);
   hnumuCCinFV_stack_12->SetBinError(24,1.058598);
   hnumuCCinFV_stack_12->SetBinError(25,0.4362511);
   hnumuCCinFV_stack_12->SetBinError(26,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(27,0.4623802);
   hnumuCCinFV_stack_12->SetBinError(28,0.7760699);
   hnumuCCinFV_stack_12->SetBinError(29,0.568734);
   hnumuCCinFV_stack_12->SetBinError(31,0.4926469);
   hnumuCCinFV_stack_12->SetBinError(32,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(33,0.3544895);
   hnumuCCinFV_stack_12->SetBinError(36,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(39,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(41,1.142904);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hnueCCinFV_stack_13->SetBinContent(14,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(15,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(18,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(28,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(41,4.874202);
   hnueCCinFV_stack_13->SetBinError(14,0.2770047);
   hnueCCinFV_stack_13->SetBinError(15,0.1529246);
   hnueCCinFV_stack_13->SetBinError(18,0.438694);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(28,0.2502081);
   hnueCCinFV_stack_13->SetBinError(41,2.105627);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);
   hmcerror__26->SetBinContent(1,0.1950248);
   hmcerror__26->SetBinContent(2,2.451161);
   hmcerror__26->SetBinContent(3,7.23874);
   hmcerror__26->SetBinContent(4,19.4401);
   hmcerror__26->SetBinContent(5,22.07195);
   hmcerror__26->SetBinContent(6,35.38322);
   hmcerror__26->SetBinContent(7,36.37371);
   hmcerror__26->SetBinContent(8,47.15224);
   hmcerror__26->SetBinContent(9,38.87959);
   hmcerror__26->SetBinContent(10,40.59599);
   hmcerror__26->SetBinContent(11,36.38473);
   hmcerror__26->SetBinContent(12,38.64512);
   hmcerror__26->SetBinContent(13,36.45512);
   hmcerror__26->SetBinContent(14,23.572);
   hmcerror__26->SetBinContent(15,22.62482);
   hmcerror__26->SetBinContent(16,20.88845);
   hmcerror__26->SetBinContent(17,26.65246);
   hmcerror__26->SetBinContent(18,17.53198);
   hmcerror__26->SetBinContent(19,15.90966);
   hmcerror__26->SetBinContent(20,15.36727);
   hmcerror__26->SetBinContent(21,10.61778);
   hmcerror__26->SetBinContent(22,16.56657);
   hmcerror__26->SetBinContent(23,11.24676);
   hmcerror__26->SetBinContent(24,11.58443);
   hmcerror__26->SetBinContent(25,9.258901);
   hmcerror__26->SetBinContent(26,5.16437);
   hmcerror__26->SetBinContent(27,7.37157);
   hmcerror__26->SetBinContent(28,7.045616);
   hmcerror__26->SetBinContent(29,7.485435);
   hmcerror__26->SetBinContent(30,3.203344);
   hmcerror__26->SetBinContent(31,4.545403);
   hmcerror__26->SetBinContent(32,4.481295);
   hmcerror__26->SetBinContent(33,4.451421);
   hmcerror__26->SetBinContent(34,1.145553);
   hmcerror__26->SetBinContent(35,1.854518);
   hmcerror__26->SetBinContent(36,2.726024);
   hmcerror__26->SetBinContent(37,1.256158);
   hmcerror__26->SetBinContent(38,2.213053);
   hmcerror__26->SetBinContent(39,1.614911);
   hmcerror__26->SetBinContent(40,2.935214);
   hmcerror__26->SetBinContent(41,40.00747);
   hmcerror__26->SetBinError(1,1.777134);
   hmcerror__26->SetBinError(2,3.606623);
   hmcerror__26->SetBinError(3,7.102493);
   hmcerror__26->SetBinError(4,10.10376);
   hmcerror__26->SetBinError(5,14.54986);
   hmcerror__26->SetBinError(6,14.35971);
   hmcerror__26->SetBinError(7,15.18006);
   hmcerror__26->SetBinError(8,20.68096);
   hmcerror__26->SetBinError(9,17.09629);
   hmcerror__26->SetBinError(10,17.66586);
   hmcerror__26->SetBinError(11,16.124);
   hmcerror__26->SetBinError(12,17.1122);
   hmcerror__26->SetBinError(13,14.97773);
   hmcerror__26->SetBinError(14,13.54115);
   hmcerror__26->SetBinError(15,12.42234);
   hmcerror__26->SetBinError(16,9.947106);
   hmcerror__26->SetBinError(17,12.52742);
   hmcerror__26->SetBinError(18,9.83881);
   hmcerror__26->SetBinError(19,9.774818);
   hmcerror__26->SetBinError(20,17.21174);
   hmcerror__26->SetBinError(21,6.762834);
   hmcerror__26->SetBinError(22,12.84408);
   hmcerror__26->SetBinError(23,8.018736);
   hmcerror__26->SetBinError(24,9.780677);
   hmcerror__26->SetBinError(25,10.97285);
   hmcerror__26->SetBinError(26,4.192633);
   hmcerror__26->SetBinError(27,5.868406);
   hmcerror__26->SetBinError(28,8.21012);
   hmcerror__26->SetBinError(29,10.22528);
   hmcerror__26->SetBinError(30,4.374837);
   hmcerror__26->SetBinError(31,9.818169);
   hmcerror__26->SetBinError(32,4.461608);
   hmcerror__26->SetBinError(33,4.59029);
   hmcerror__26->SetBinError(34,3.567859);
   hmcerror__26->SetBinError(35,5.343911);
   hmcerror__26->SetBinError(36,5.85721);
   hmcerror__26->SetBinError(37,2.074431);
   hmcerror__26->SetBinError(38,5.34615);
   hmcerror__26->SetBinError(39,3.092777);
   hmcerror__26->SetBinError(40,8.932623);
   hmcerror__26->SetBinError(41,23.81076);
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
   
   Double_t _fx3033[40] = {
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
   292.5,
   307.5,
   322.5,
   337.5,
   352.5,
   367.5,
   382.5,
   397.5,
   412.5,
   427.5,
   442.5,
   457.5,
   472.5,
   487.5,
   502.5,
   517.5,
   532.5,
   547.5,
   562.5,
   577.5,
   592.5};
   Double_t _fy3033[40] = {
   0,
   6,
   5,
   21,
   34,
   25,
   41,
   43,
   48,
   37,
   36,
   38,
   21,
   21,
   25,
   23,
   18,
   16,
   14,
   15,
   10,
   7,
   8,
   3,
   7,
   4,
   6,
   6,
   6,
   4,
   2,
   2,
   2,
   2,
   2,
   0,
   1,
   0,
   1,
   3};
   Double_t _felx3033[40] = {
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
   7.5,
   7.5};
   Double_t _fely3033[40] = {
   0,
   2.67925,
   2.48995,
   4.7354,
   5.9703,
   5.1474,
   6.5384,
   6.6917,
   7.0604,
   6.2203,
   6.1381,
   6.3013,
   4.7354,
   4.7354,
   5.1474,
   4.9457,
   4.4008,
   4.1628,
   3.9102,
   4.0385,
   3.34883,
   2.85954,
   3.0307,
   2.143368,
   2.85954,
   2.29683,
   2.67925,
   2.67925,
   2.67925,
   2.29683,
   2,
   2,
   2,
   2,
   2,
   0,
   1,
   0,
   1,
   2.143368};
   Double_t _fehx3033[40] = {
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
   7.5,
   7.5};
   Double_t _fehy3033[40] = {
   1.1478,
   2.41858,
   2.21064,
   4.5229,
   5.7635,
   4.9374,
   6.3331,
   6.4868,
   6.8561,
   6.0141,
   5.9318,
   6.0955,
   4.5229,
   4.5229,
   4.9374,
   4.7346,
   4.1858,
   3.9454,
   3.6898,
   3.8197,
   3.1179,
   2.61053,
   2.7896,
   1.72422,
   2.61053,
   1.98186,
   2.41858,
   2.41858,
   2.41858,
   1.98186,
   1.51917,
   1.51917,
   1.51917,
   1.51917,
   1.51917,
   1.1478,
   1.35971,
   1.1478,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,660);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(60.34171);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.91#pm0.27","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.1/40","");
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
   
   Double_t _fx3034[40] = {
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
   292.5,
   307.5,
   322.5,
   337.5,
   352.5,
   367.5,
   382.5,
   397.5,
   412.5,
   427.5,
   442.5,
   457.5,
   472.5,
   487.5,
   502.5,
   517.5,
   532.5,
   547.5,
   562.5,
   577.5,
   592.5};
   Double_t _fy3034[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[40] = {
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
   7.5,
   7.5};
   Double_t _fely3034[40] = {
   9.112344,
   1.471394,
   0.9811781,
   0.5197377,
   0.6592013,
   0.4058337,
   0.4173361,
   0.4385997,
   0.4397241,
   0.4351627,
   0.443153,
   0.4428037,
   0.410854,
   0.5744591,
   0.5490579,
   0.4762013,
   0.4700286,
   0.5611921,
   0.6143952,
   1.120026,
   0.6369349,
   0.7753013,
   0.7129819,
   0.8442954,
   1.185114,
   0.8118384,
   0.7960864,
   1.165281,
   1.366024,
   1.365709,
   2.160022,
   0.9956068,
   1.031197,
   3.114529,
   2.881564,
   2.148628,
   1.651409,
   2.415735,
   1.915137,
   3.043261};
   Double_t _fehx3034[40] = {
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
   7.5,
   7.5};
   Double_t _fehy3034[40] = {
   9.112344,
   1.471394,
   0.9811781,
   0.5197377,
   0.6592013,
   0.4058337,
   0.4173361,
   0.4385997,
   0.4397241,
   0.4351627,
   0.443153,
   0.4428037,
   0.410854,
   0.5744591,
   0.5490579,
   0.4762013,
   0.4700286,
   0.5611921,
   0.6143952,
   1.120026,
   0.6369349,
   0.7753013,
   0.7129819,
   0.8442954,
   1.185114,
   0.8118384,
   0.7960864,
   1.165281,
   1.366024,
   1.365709,
   2.160022,
   0.9956068,
   1.031197,
   3.114529,
   2.881564,
   2.148628,
   1.651409,
   2.415735,
   1.915137,
   3.043261};
   grae = new TGraphAsymmErrors(40,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   
   Double_t _fx3035[40] = {
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
   292.5,
   307.5,
   322.5,
   337.5,
   352.5,
   367.5,
   382.5,
   397.5,
   412.5,
   427.5,
   442.5,
   457.5,
   472.5,
   487.5,
   502.5,
   517.5,
   532.5,
   547.5,
   562.5,
   577.5,
   592.5};
   Double_t _fy3035[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[40] = {
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
   7.5,
   7.5};
   Double_t _fely3035[40] = {
   2.296973,
   0.4493756,
   0.2990127,
   0.2441163,
   0.2958673,
   0.282404,
   0.3044134,
   0.3058294,
   0.3192437,
   0.3153875,
   0.2982044,
   0.2970426,
   0.2499063,
   0.2965949,
   0.3241941,
   0.2815741,
   0.2552983,
   0.3092246,
   0.3053035,
   0.2875169,
   0.3109906,
   0.2659134,
   0.313714,
   0.3140047,
   0.3458623,
   0.3461296,
   0.3167128,
   0.3079723,
   0.3267113,
   0.4642,
   0.427061,
   0.4082888,
   0.362826,
   0.6321461,
   0.5190525,
   0.5201338,
   0.6025169,
   0.58782,
   1.034325,
   0.4717456};
   Double_t _fehx3035[40] = {
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
   7.5,
   7.5};
   Double_t _fehy3035[40] = {
   2.296973,
   0.4493756,
   0.2990127,
   0.2441163,
   0.2958673,
   0.282404,
   0.3044134,
   0.3058294,
   0.3192437,
   0.3153875,
   0.2982044,
   0.2970426,
   0.2499063,
   0.2965949,
   0.3241941,
   0.2815741,
   0.2552983,
   0.3092246,
   0.3053035,
   0.2875169,
   0.3109906,
   0.2659134,
   0.313714,
   0.3140047,
   0.3458623,
   0.3461296,
   0.3167128,
   0.3079723,
   0.3267113,
   0.4642,
   0.427061,
   0.4082888,
   0.362826,
   0.6321461,
   0.5190525,
   0.5201338,
   0.6025169,
   0.58782,
   1.034325,
   0.4717456};
   grae = new TGraphAsymmErrors(40,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[40] = {
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
   292.5,
   307.5,
   322.5,
   337.5,
   352.5,
   367.5,
   382.5,
   397.5,
   412.5,
   427.5,
   442.5,
   457.5,
   472.5,
   487.5,
   502.5,
   517.5,
   532.5,
   547.5,
   562.5,
   577.5,
   592.5};
   Double_t _fy3036[40] = {
   0,
   2.44782,
   0.6907279,
   1.080241,
   1.540416,
   0.7065495,
   1.127188,
   0.9119397,
   1.234581,
   0.91142,
   0.9894261,
   0.9833065,
   0.5760508,
   0.8908876,
   1.104981,
   1.101087,
   0.6753597,
   0.9126177,
   0.8799686,
   0.9761004,
   0.9418166,
   0.4225377,
   0.711316,
   0.2589684,
   0.7560293,
   0.7745379,
   0.8139379,
   0.8515934,
   0.8015567,
   1.248695,
   0.440005,
   0.4462996,
   0.4492948,
   1.745882,
   1.078448,
   0,
   0.796078,
   0,
   0.619229,
   1.022072};
   Double_t _felx3036[40] = {
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
   7.5,
   7.5};
   Double_t _fely3036[40] = {
   0,
   1.093053,
   0.3439756,
   0.2435892,
   0.2704926,
   0.1454757,
   0.1797562,
   0.1419169,
   0.1815966,
   0.1532245,
   0.1686999,
   0.1630555,
   0.1298967,
   0.2008909,
   0.2275112,
   0.2367672,
   0.1651179,
   0.2374403,
   0.2457752,
   0.2627988,
   0.3153984,
   0.1726091,
   0.2694732,
   0.1850215,
   0.3088423,
   0.4447455,
   0.3634572,
   0.3802719,
   0.3579285,
   0.7170101,
   0.440005,
   0.4462996,
   0.4492948,
   1.745882,
   1.078448,
   0,
   0.796078,
   0,
   0.619229,
   0.7302255};
   Double_t _fehx3036[40] = {
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
   7.5,
   7.5};
   Double_t _fehy3036[40] = {
   5.885404,
   0.986708,
   0.3053902,
   0.2326582,
   0.2611232,
   0.1395407,
   0.174112,
   0.1375714,
   0.1763419,
   0.1481452,
   0.1630299,
   0.1577301,
   0.1240676,
   0.191876,
   0.2182293,
   0.2266612,
   0.1570511,
   0.2250401,
   0.231922,
   0.2485607,
   0.293649,
   0.1575782,
   0.2480359,
   0.1488395,
   0.2819482,
   0.3837564,
   0.3280957,
   0.3432744,
   0.3231048,
   0.6186847,
   0.3342212,
   0.3390024,
   0.3412776,
   1.326145,
   0.8191726,
   0.4210528,
   1.082435,
   0.51865,
   0.8419719,
   0.5874256};
   grae = new TGraphAsymmErrors(40,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,660);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(6.473944);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_high_all",40,0,600);

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

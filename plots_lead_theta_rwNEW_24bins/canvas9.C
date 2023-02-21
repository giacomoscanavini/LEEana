#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 12:48:29 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",112,135,1200,900);
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
   pad1->Range(-0.4846154,-1.194502,3.553846,132.0867);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__25->SetBinContent(1,18.61501);
   hmc__25->SetBinContent(2,32.8338);
   hmc__25->SetBinContent(3,47.07649);
   hmc__25->SetBinContent(4,53.64692);
   hmc__25->SetBinContent(5,59.72509);
   hmc__25->SetBinContent(6,45.74287);
   hmc__25->SetBinContent(7,58.24092);
   hmc__25->SetBinContent(8,43.78114);
   hmc__25->SetBinContent(9,51.2141);
   hmc__25->SetBinContent(10,34.72497);
   hmc__25->SetBinContent(11,28.0136);
   hmc__25->SetBinContent(12,33.09716);
   hmc__25->SetBinContent(13,26.47136);
   hmc__25->SetBinContent(14,25.55516);
   hmc__25->SetBinContent(15,22.27944);
   hmc__25->SetBinContent(16,25.06048);
   hmc__25->SetBinContent(17,18.95943);
   hmc__25->SetBinContent(18,19.55875);
   hmc__25->SetBinContent(19,17.05602);
   hmc__25->SetBinContent(20,18.33404);
   hmc__25->SetBinContent(21,15.87833);
   hmc__25->SetBinContent(22,12.04655);
   hmc__25->SetBinContent(23,9.380571);
   hmc__25->SetBinContent(24,3.76545);
   hmc__25->SetBinError(1,23.0487);
   hmc__25->SetBinError(2,16.32076);
   hmc__25->SetBinError(3,20.43124);
   hmc__25->SetBinError(4,19.88542);
   hmc__25->SetBinError(5,24.1994);
   hmc__25->SetBinError(6,30.75153);
   hmc__25->SetBinError(7,24.80087);
   hmc__25->SetBinError(8,20.11738);
   hmc__25->SetBinError(9,18.36978);
   hmc__25->SetBinError(10,15.76167);
   hmc__25->SetBinError(11,11.92975);
   hmc__25->SetBinError(12,14.04764);
   hmc__25->SetBinError(13,12.90012);
   hmc__25->SetBinError(14,12.5153);
   hmc__25->SetBinError(15,10.71279);
   hmc__25->SetBinError(16,12.90825);
   hmc__25->SetBinError(17,10.15994);
   hmc__25->SetBinError(18,10.31506);
   hmc__25->SetBinError(19,9.950318);
   hmc__25->SetBinError(20,11.78884);
   hmc__25->SetBinError(21,10.10515);
   hmc__25->SetBinError(22,8.433539);
   hmc__25->SetBinError(23,8.222617);
   hmc__25->SetBinError(24,4.016563);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-1.194502);
   hmc__25->SetMaximum(125.4227);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,3.15);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(62.71134);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,1.127039);
   hbadmatch_stack_1->SetBinContent(4,1.072095);
   hbadmatch_stack_1->SetBinContent(5,0.9490801);
   hbadmatch_stack_1->SetBinContent(6,1.391045);
   hbadmatch_stack_1->SetBinContent(7,1.97493);
   hbadmatch_stack_1->SetBinContent(8,1.560127);
   hbadmatch_stack_1->SetBinContent(9,1.333611);
   hbadmatch_stack_1->SetBinContent(10,1.153835);
   hbadmatch_stack_1->SetBinContent(11,1.935149);
   hbadmatch_stack_1->SetBinContent(12,1.40129);
   hbadmatch_stack_1->SetBinContent(13,0.476476);
   hbadmatch_stack_1->SetBinContent(14,2.284388);
   hbadmatch_stack_1->SetBinContent(15,1.288839);
   hbadmatch_stack_1->SetBinContent(16,0.8753801);
   hbadmatch_stack_1->SetBinContent(17,0.785171);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.9558206);
   hbadmatch_stack_1->SetBinContent(20,0.774857);
   hbadmatch_stack_1->SetBinContent(21,0.9843329);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.5201044);
   hbadmatch_stack_1->SetBinError(4,0.5551335);
   hbadmatch_stack_1->SetBinError(5,0.4895781);
   hbadmatch_stack_1->SetBinError(6,0.5904343);
   hbadmatch_stack_1->SetBinError(7,0.8031556);
   hbadmatch_stack_1->SetBinError(8,0.6045775);
   hbadmatch_stack_1->SetBinError(9,0.6869552);
   hbadmatch_stack_1->SetBinError(10,0.5309099);
   hbadmatch_stack_1->SetBinError(11,0.7647102);
   hbadmatch_stack_1->SetBinError(12,0.5854212);
   hbadmatch_stack_1->SetBinError(13,0.3424171);
   hbadmatch_stack_1->SetBinError(14,0.7580186);
   hbadmatch_stack_1->SetBinError(15,0.5958886);
   hbadmatch_stack_1->SetBinError(16,0.5191111);
   hbadmatch_stack_1->SetBinError(17,0.3925882);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.492529);
   hbadmatch_stack_1->SetBinError(20,0.459396);
   hbadmatch_stack_1->SetBinError(21,0.5059422);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.2946723);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,1.219797);
   hext_stack_2->SetBinContent(2,1.461993);
   hext_stack_2->SetBinContent(3,0.973192);
   hext_stack_2->SetBinContent(4,5.718277);
   hext_stack_2->SetBinContent(5,8.291914);
   hext_stack_2->SetBinContent(6,0.6487947);
   hext_stack_2->SetBinContent(7,6.77367);
   hext_stack_2->SetBinContent(8,3.737183);
   hext_stack_2->SetBinContent(9,9.988921);
   hext_stack_2->SetBinContent(10,3.647801);
   hext_stack_2->SetBinContent(11,1.78639);
   hext_stack_2->SetBinContent(12,5.899812);
   hext_stack_2->SetBinContent(13,4.263464);
   hext_stack_2->SetBinContent(14,3.889996);
   hext_stack_2->SetBinContent(15,2.517386);
   hext_stack_2->SetBinContent(16,7.650299);
   hext_stack_2->SetBinContent(17,3.939067);
   hext_stack_2->SetBinContent(18,5.158864);
   hext_stack_2->SetBinContent(19,1.055394);
   hext_stack_2->SetBinContent(20,3.864046);
   hext_stack_2->SetBinContent(21,3.62185);
   hext_stack_2->SetBinContent(22,0.8131978);
   hext_stack_2->SetBinContent(23,0.7309963);
   hext_stack_2->SetBinContent(24,0.8131978);
   hext_stack_2->SetBinError(1,0.7042499);
   hext_stack_2->SetBinError(2,0.7356036);
   hext_stack_2->SetBinError(3,0.5618727);
   hext_stack_2->SetBinError(4,1.782259);
   hext_stack_2->SetBinError(5,2.149865);
   hext_stack_2->SetBinError(6,0.4587671);
   hext_stack_2->SetBinError(7,1.884738);
   hext_stack_2->SetBinError(8,1.188642);
   hext_stack_2->SetBinError(9,2.325807);
   hext_stack_2->SetBinError(10,1.246589);
   hext_stack_2->SetBinError(11,0.8039566);
   hext_stack_2->SetBinError(12,1.599343);
   hext_stack_2->SetBinError(13,1.560171);
   hext_stack_2->SetBinError(14,1.264566);
   hext_stack_2->SetBinError(15,0.9575503);
   hext_stack_2->SetBinError(16,2.05189);
   hext_stack_2->SetBinError(17,1.526073);
   hext_stack_2->SetBinError(18,1.680734);
   hext_stack_2->SetBinError(19,0.6130171);
   hext_stack_2->SetBinError(20,1.437918);
   hext_stack_2->SetBinError(21,1.422134);
   hext_stack_2->SetBinError(22,0.5750177);
   hext_stack_2->SetBinError(23,0.5201503);
   hext_stack_2->SetBinError(24,0.5750177);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.1564614);
   hdirt_stack_3->SetBinContent(2,0.4762587);
   hdirt_stack_3->SetBinContent(3,0.566972);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.2628198);
   hdirt_stack_3->SetBinContent(7,0.5529928);
   hdirt_stack_3->SetBinContent(9,0.6673524);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(16,0.2620035);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(19,0.4049124);
   hdirt_stack_3->SetBinError(1,0.1564614);
   hdirt_stack_3->SetBinError(2,0.3652866);
   hdirt_stack_3->SetBinError(3,0.4505768);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.2628198);
   hdirt_stack_3->SetBinError(7,0.437291);
   hdirt_stack_3->SetBinError(9,0.3973652);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(16,0.2620035);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(19,0.4049124);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.246011);
   houtFV_stack_4->SetBinContent(2,4.696419);
   houtFV_stack_4->SetBinContent(3,10.47947);
   houtFV_stack_4->SetBinContent(4,9.580877);
   houtFV_stack_4->SetBinContent(5,11.09219);
   houtFV_stack_4->SetBinContent(6,7.493989);
   houtFV_stack_4->SetBinContent(7,7.372432);
   houtFV_stack_4->SetBinContent(8,5.464548);
   houtFV_stack_4->SetBinContent(9,4.680907);
   houtFV_stack_4->SetBinContent(10,4.868291);
   houtFV_stack_4->SetBinContent(11,2.732646);
   houtFV_stack_4->SetBinContent(12,4.477839);
   houtFV_stack_4->SetBinContent(13,4.682871);
   houtFV_stack_4->SetBinContent(14,3.856521);
   houtFV_stack_4->SetBinContent(15,3.726386);
   houtFV_stack_4->SetBinContent(16,3.833714);
   houtFV_stack_4->SetBinContent(17,3.767177);
   houtFV_stack_4->SetBinContent(18,3.619901);
   houtFV_stack_4->SetBinContent(19,3.925376);
   houtFV_stack_4->SetBinContent(20,3.861376);
   houtFV_stack_4->SetBinContent(21,3.766095);
   houtFV_stack_4->SetBinContent(22,4.55605);
   houtFV_stack_4->SetBinContent(23,4.196482);
   houtFV_stack_4->SetBinContent(24,1.318683);
   houtFV_stack_4->SetBinError(1,1.049845);
   houtFV_stack_4->SetBinError(2,1.057081);
   houtFV_stack_4->SetBinError(3,1.683846);
   houtFV_stack_4->SetBinError(4,1.639398);
   houtFV_stack_4->SetBinError(5,1.63565);
   houtFV_stack_4->SetBinError(6,1.295388);
   houtFV_stack_4->SetBinError(7,1.373389);
   houtFV_stack_4->SetBinError(8,1.151329);
   houtFV_stack_4->SetBinError(9,1.082598);
   houtFV_stack_4->SetBinError(10,1.098331);
   houtFV_stack_4->SetBinError(11,0.8554385);
   houtFV_stack_4->SetBinError(12,1.063195);
   houtFV_stack_4->SetBinError(13,1.153008);
   houtFV_stack_4->SetBinError(14,0.9635663);
   houtFV_stack_4->SetBinError(15,0.9709094);
   houtFV_stack_4->SetBinError(16,0.9892196);
   houtFV_stack_4->SetBinError(17,0.9737886);
   houtFV_stack_4->SetBinError(18,0.9323841);
   houtFV_stack_4->SetBinError(19,0.9304537);
   houtFV_stack_4->SetBinError(20,1.001472);
   houtFV_stack_4->SetBinError(21,0.9410676);
   houtFV_stack_4->SetBinError(22,1.058733);
   houtFV_stack_4->SetBinError(23,1.056731);
   houtFV_stack_4->SetBinError(24,0.5542732);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.5719541);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2970212);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.580762);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.357072);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.05617);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.02588);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.11694);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.49443);
   hNCpi0inFVres_stack_7->SetBinContent(7,13.19211);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.85764);
   hNCpi0inFVres_stack_7->SetBinContent(9,9.231125);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.641303);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.665379);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.364809);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.730982);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.669277);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.327765);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.83951);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.193898);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.983484);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.040284);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.10463);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.882926);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.770662);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.7807039);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.404386);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5373969);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8119482);
   hNCpi0inFVres_stack_7->SetBinError(3,1.071802);
   hNCpi0inFVres_stack_7->SetBinError(4,1.246775);
   hNCpi0inFVres_stack_7->SetBinError(5,1.084227);
   hNCpi0inFVres_stack_7->SetBinError(6,1.130304);
   hNCpi0inFVres_stack_7->SetBinError(7,1.214222);
   hNCpi0inFVres_stack_7->SetBinError(8,1.177278);
   hNCpi0inFVres_stack_7->SetBinError(9,1.04595);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8451821);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8272231);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9533497);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7797524);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6543183);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8012525);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7457341);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5651665);
   hNCpi0inFVres_stack_7->SetBinError(18,0.548685);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5955142);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4519637);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4514614);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4628136);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2608584);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2253713);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.590476);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.551198);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.842984);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.574961);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.97153);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.858434);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.152052);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.868644);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.952512);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.53434);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.38039);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.896048);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8644038);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.976172);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.24189);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.585404);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6420361);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6691039);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.502368);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.8087721);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.5583361);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4708042);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4994844);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4951142);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7581141);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5765866);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5688277);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6249078);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4584479);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4952461);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3931691);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3525453);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5071534);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2652967);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3259676);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4152364);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2501964);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2888274);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2548204);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2162644);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3187231);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2847561);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,5.071862);
   hCCpi0inFV_stack_10->SetBinContent(2,6.673723);
   hCCpi0inFV_stack_10->SetBinContent(3,10.01057);
   hCCpi0inFV_stack_10->SetBinContent(4,8.499471);
   hCCpi0inFV_stack_10->SetBinContent(5,9.255792);
   hCCpi0inFV_stack_10->SetBinContent(6,9.455172);
   hCCpi0inFV_stack_10->SetBinContent(7,10.15764);
   hCCpi0inFV_stack_10->SetBinContent(8,9.738496);
   hCCpi0inFV_stack_10->SetBinContent(9,9.550931);
   hCCpi0inFV_stack_10->SetBinContent(10,6.272747);
   hCCpi0inFV_stack_10->SetBinContent(11,5.574116);
   hCCpi0inFV_stack_10->SetBinContent(12,3.857995);
   hCCpi0inFV_stack_10->SetBinContent(13,4.857968);
   hCCpi0inFV_stack_10->SetBinContent(14,4.177855);
   hCCpi0inFV_stack_10->SetBinContent(15,3.045483);
   hCCpi0inFV_stack_10->SetBinContent(16,2.730956);
   hCCpi0inFV_stack_10->SetBinContent(17,4.306599);
   hCCpi0inFV_stack_10->SetBinContent(18,3.624324);
   hCCpi0inFV_stack_10->SetBinContent(19,3.937705);
   hCCpi0inFV_stack_10->SetBinContent(20,4.081168);
   hCCpi0inFV_stack_10->SetBinContent(21,2.392469);
   hCCpi0inFV_stack_10->SetBinContent(22,2.931052);
   hCCpi0inFV_stack_10->SetBinContent(23,1.707042);
   hCCpi0inFV_stack_10->SetBinContent(24,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,1.177351);
   hCCpi0inFV_stack_10->SetBinError(2,1.261463);
   hCCpi0inFV_stack_10->SetBinError(3,1.625232);
   hCCpi0inFV_stack_10->SetBinError(4,1.468573);
   hCCpi0inFV_stack_10->SetBinError(5,1.555832);
   hCCpi0inFV_stack_10->SetBinError(6,1.57593);
   hCCpi0inFV_stack_10->SetBinError(7,1.64402);
   hCCpi0inFV_stack_10->SetBinError(8,1.579577);
   hCCpi0inFV_stack_10->SetBinError(9,1.584053);
   hCCpi0inFV_stack_10->SetBinError(10,1.163241);
   hCCpi0inFV_stack_10->SetBinError(11,1.145493);
   hCCpi0inFV_stack_10->SetBinError(12,1.00081);
   hCCpi0inFV_stack_10->SetBinError(13,1.123306);
   hCCpi0inFV_stack_10->SetBinError(14,0.9457481);
   hCCpi0inFV_stack_10->SetBinError(15,0.91862);
   hCCpi0inFV_stack_10->SetBinError(16,0.8550514);
   hCCpi0inFV_stack_10->SetBinError(17,1.022381);
   hCCpi0inFV_stack_10->SetBinError(18,0.8995814);
   hCCpi0inFV_stack_10->SetBinError(19,0.9872178);
   hCCpi0inFV_stack_10->SetBinError(20,1.025487);
   hCCpi0inFV_stack_10->SetBinError(21,0.7848912);
   hCCpi0inFV_stack_10->SetBinError(22,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(23,0.6185676);
   hCCpi0inFV_stack_10->SetBinError(24,0.1967154);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.123658);
   hNCinFV_stack_11->SetBinContent(2,3.462874);
   hNCinFV_stack_11->SetBinContent(3,3.126077);
   hNCinFV_stack_11->SetBinContent(4,3.424227);
   hNCinFV_stack_11->SetBinContent(5,5.181749);
   hNCinFV_stack_11->SetBinContent(6,2.732646);
   hNCinFV_stack_11->SetBinContent(7,4.783247);
   hNCinFV_stack_11->SetBinContent(8,0.785171);
   hNCinFV_stack_11->SetBinContent(9,2.342597);
   hNCinFV_stack_11->SetBinContent(10,0.9303237);
   hNCinFV_stack_11->SetBinContent(11,1.463836);
   hNCinFV_stack_11->SetBinContent(12,0.3934307);
   hNCinFV_stack_11->SetBinContent(13,0.3917402);
   hNCinFV_stack_11->SetBinContent(14,0.7336084);
   hNCinFV_stack_11->SetBinContent(15,1.752451);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,0.5867651);
   hNCinFV_stack_11->SetBinContent(18,0.7336084);
   hNCinFV_stack_11->SetBinContent(19,0.6803553);
   hNCinFV_stack_11->SetBinContent(20,0.3934307);
   hNCinFV_stack_11->SetBinContent(21,0.4403816);
   hNCinFV_stack_11->SetBinContent(22,0.3917402);
   hNCinFV_stack_11->SetBinContent(23,0.3934307);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.5188295);
   hNCinFV_stack_11->SetBinError(2,0.961023);
   hNCinFV_stack_11->SetBinError(3,0.8995382);
   hNCinFV_stack_11->SetBinError(4,0.8770549);
   hNCinFV_stack_11->SetBinError(5,1.144913);
   hNCinFV_stack_11->SetBinError(6,0.8554385);
   hNCinFV_stack_11->SetBinError(7,1.109705);
   hNCinFV_stack_11->SetBinError(8,0.3925882);
   hNCinFV_stack_11->SetBinError(9,0.8097566);
   hNCinFV_stack_11->SetBinError(10,0.4814682);
   hNCinFV_stack_11->SetBinError(11,0.620407);
   hNCinFV_stack_11->SetBinError(12,0.2781975);
   hNCinFV_stack_11->SetBinError(13,0.2770047);
   hNCinFV_stack_11->SetBinError(14,0.4394482);
   hNCinFV_stack_11->SetBinError(15,0.7345848);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.3387718);
   hNCinFV_stack_11->SetBinError(18,0.4394482);
   hNCinFV_stack_11->SetBinError(19,0.4810838);
   hNCinFV_stack_11->SetBinError(20,0.2781975);
   hNCinFV_stack_11->SetBinError(21,0.2821316);
   hNCinFV_stack_11->SetBinError(22,0.2770047);
   hNCinFV_stack_11->SetBinError(23,0.2781975);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.887464);
   hnumuCCinFV_stack_12->SetBinContent(2,3.039576);
   hnumuCCinFV_stack_12->SetBinContent(3,7.531147);
   hnumuCCinFV_stack_12->SetBinContent(4,7.117726);
   hnumuCCinFV_stack_12->SetBinContent(5,9.563291);
   hnumuCCinFV_stack_12->SetBinContent(6,7.717215);
   hnumuCCinFV_stack_12->SetBinContent(7,10.17025);
   hnumuCCinFV_stack_12->SetBinContent(8,7.741433);
   hnumuCCinFV_stack_12->SetBinContent(9,11.43824);
   hnumuCCinFV_stack_12->SetBinContent(10,8.278403);
   hnumuCCinFV_stack_12->SetBinContent(11,5.391994);
   hnumuCCinFV_stack_12->SetBinContent(12,7.439854);
   hnumuCCinFV_stack_12->SetBinContent(13,5.175551);
   hnumuCCinFV_stack_12->SetBinContent(14,4.635396);
   hnumuCCinFV_stack_12->SetBinContent(15,3.323445);
   hnumuCCinFV_stack_12->SetBinContent(16,3.549604);
   hnumuCCinFV_stack_12->SetBinContent(17,1.372627);
   hnumuCCinFV_stack_12->SetBinContent(18,1.983611);
   hnumuCCinFV_stack_12->SetBinContent(19,2.595984);
   hnumuCCinFV_stack_12->SetBinContent(20,2.50134);
   hnumuCCinFV_stack_12->SetBinContent(21,1.953599);
   hnumuCCinFV_stack_12->SetBinContent(22,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(23,0.7889644);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,0.6963815);
   hnumuCCinFV_stack_12->SetBinError(2,1.055299);
   hnumuCCinFV_stack_12->SetBinError(3,1.500037);
   hnumuCCinFV_stack_12->SetBinError(4,2.130218);
   hnumuCCinFV_stack_12->SetBinError(5,1.9512);
   hnumuCCinFV_stack_12->SetBinError(6,1.430559);
   hnumuCCinFV_stack_12->SetBinError(7,1.780825);
   hnumuCCinFV_stack_12->SetBinError(8,1.51251);
   hnumuCCinFV_stack_12->SetBinError(9,1.870895);
   hnumuCCinFV_stack_12->SetBinError(10,1.632819);
   hnumuCCinFV_stack_12->SetBinError(11,1.219649);
   hnumuCCinFV_stack_12->SetBinError(12,1.485229);
   hnumuCCinFV_stack_12->SetBinError(13,1.225061);
   hnumuCCinFV_stack_12->SetBinError(14,1.525462);
   hnumuCCinFV_stack_12->SetBinError(15,0.9399345);
   hnumuCCinFV_stack_12->SetBinError(16,1.027483);
   hnumuCCinFV_stack_12->SetBinError(17,0.5754733);
   hnumuCCinFV_stack_12->SetBinError(18,0.7700217);
   hnumuCCinFV_stack_12->SetBinError(19,0.9047874);
   hnumuCCinFV_stack_12->SetBinError(20,0.8054276);
   hnumuCCinFV_stack_12->SetBinError(21,0.7007801);
   hnumuCCinFV_stack_12->SetBinError(22,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(23,0.4670659);
   hnumuCCinFV_stack_12->SetBinError(24,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.137414);
   hnueCCinFV_stack_13->SetBinContent(2,3.264009);
   hnueCCinFV_stack_13->SetBinContent(4,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.3700248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.6040059);
   hnueCCinFV_stack_13->SetBinError(2,1.989466);
   hnueCCinFV_stack_13->SetBinError(4,0.320043);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.2655531);
   hnueCCinFV_stack_13->SetBinError(18,0.2502081);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__26->SetBinContent(1,18.61501);
   hmcerror__26->SetBinContent(2,32.8338);
   hmcerror__26->SetBinContent(3,47.07649);
   hmcerror__26->SetBinContent(4,53.64692);
   hmcerror__26->SetBinContent(5,59.72509);
   hmcerror__26->SetBinContent(6,45.74287);
   hmcerror__26->SetBinContent(7,58.24092);
   hmcerror__26->SetBinContent(8,43.78114);
   hmcerror__26->SetBinContent(9,51.2141);
   hmcerror__26->SetBinContent(10,34.72497);
   hmcerror__26->SetBinContent(11,28.0136);
   hmcerror__26->SetBinContent(12,33.09716);
   hmcerror__26->SetBinContent(13,26.47136);
   hmcerror__26->SetBinContent(14,25.55516);
   hmcerror__26->SetBinContent(15,22.27944);
   hmcerror__26->SetBinContent(16,25.06048);
   hmcerror__26->SetBinContent(17,18.95943);
   hmcerror__26->SetBinContent(18,19.55875);
   hmcerror__26->SetBinContent(19,17.05602);
   hmcerror__26->SetBinContent(20,18.33404);
   hmcerror__26->SetBinContent(21,15.87833);
   hmcerror__26->SetBinContent(22,12.04655);
   hmcerror__26->SetBinContent(23,9.380571);
   hmcerror__26->SetBinContent(24,3.76545);
   hmcerror__26->SetBinError(1,23.0487);
   hmcerror__26->SetBinError(2,16.32076);
   hmcerror__26->SetBinError(3,20.43124);
   hmcerror__26->SetBinError(4,19.88542);
   hmcerror__26->SetBinError(5,24.1994);
   hmcerror__26->SetBinError(6,30.75153);
   hmcerror__26->SetBinError(7,24.80087);
   hmcerror__26->SetBinError(8,20.11738);
   hmcerror__26->SetBinError(9,18.36978);
   hmcerror__26->SetBinError(10,15.76167);
   hmcerror__26->SetBinError(11,11.92975);
   hmcerror__26->SetBinError(12,14.04764);
   hmcerror__26->SetBinError(13,12.90012);
   hmcerror__26->SetBinError(14,12.5153);
   hmcerror__26->SetBinError(15,10.71279);
   hmcerror__26->SetBinError(16,12.90825);
   hmcerror__26->SetBinError(17,10.15994);
   hmcerror__26->SetBinError(18,10.31506);
   hmcerror__26->SetBinError(19,9.950318);
   hmcerror__26->SetBinError(20,11.78884);
   hmcerror__26->SetBinError(21,10.10515);
   hmcerror__26->SetBinError(22,8.433539);
   hmcerror__26->SetBinError(23,8.222617);
   hmcerror__26->SetBinError(24,4.016563);
   hmcerror__26->SetBinError(25,0.3895343);
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
   
   Double_t _fx3033[24] = {
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
   Double_t _fy3033[24] = {
   8,
   30,
   46,
   50,
   41,
   42,
   37,
   34,
   37,
   21,
   35,
   27,
   27,
   20,
   17,
   14,
   12,
   11,
   23,
   18,
   10,
   15,
   9,
   1};
   Double_t _felx3033[24] = {
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
   Double_t _fely3033[24] = {
   3.0307,
   5.6197,
   6.9153,
   7.2025,
   6.5384,
   6.6155,
   6.2203,
   5.9703,
   6.2203,
   4.7354,
   6.0548,
   5.3414,
   5.3414,
   4.6266,
   4.2835,
   3.9102,
   3.64022,
   3.4975,
   4.9457,
   4.4008,
   3.34883,
   4.0385,
   3.19354,
   1};
   Double_t _fehx3033[24] = {
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
   Double_t _fehy3033[24] = {
   2.7896,
   5.4117,
   6.7108,
   6.9985,
   6.3331,
   6.4104,
   6.0141,
   5.7635,
   6.0141,
   4.5229,
   5.8483,
   5.1322,
   5.1322,
   4.4133,
   4.0673,
   3.6898,
   3.4155,
   3.27,
   4.7346,
   4.1858,
   3.1179,
   3.8197,
   2.9582,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,3.465);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(62.69835);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all");
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
   
   Double_t _fx3034[24] = {
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
   Double_t _fely3034[24] = {
   1.238178,
   0.497072,
   0.4340008,
   0.3706722,
   0.4051798,
   0.6722694,
   0.4258323,
   0.4594988,
   0.3586861,
   0.4539001,
   0.4258556,
   0.4244363,
   0.4873239,
   0.4897369,
   0.4808374,
   0.5150841,
   0.5358779,
   0.5273887,
   0.5833905,
   0.6430029,
   0.6364117,
   0.7000794,
   0.8765582,
   1.066689};
   Double_t _fehx3034[24] = {
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
   Double_t _fehy3034[24] = {
   1.238178,
   0.497072,
   0.4340008,
   0.3706722,
   0.4051798,
   0.6722694,
   0.4258323,
   0.4594988,
   0.3586861,
   0.4539001,
   0.4258556,
   0.4244363,
   0.4873239,
   0.4897369,
   0.4808374,
   0.5150841,
   0.5358779,
   0.5273887,
   0.5833905,
   0.6430029,
   0.6364117,
   0.7000794,
   0.8765582,
   1.066689};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   Double_t _fely3035[24] = {
   0.2248726,
   0.2665953,
   0.2613027,
   0.2545796,
   0.2509346,
   0.2832023,
   0.2661743,
   0.2917843,
   0.2278127,
   0.267536,
   0.2896126,
   0.2465798,
   0.2479814,
   0.2281714,
   0.2675565,
   0.2170846,
   0.2687083,
   0.2224084,
   0.2733848,
   0.2356569,
   0.2599245,
   0.2803346,
   0.3032193,
   0.3768539};
   Double_t _fehx3035[24] = {
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
   Double_t _fehy3035[24] = {
   0.2248726,
   0.2665953,
   0.2613027,
   0.2545796,
   0.2509346,
   0.2832023,
   0.2661743,
   0.2917843,
   0.2278127,
   0.267536,
   0.2896126,
   0.2465798,
   0.2479814,
   0.2281714,
   0.2675565,
   0.2170846,
   0.2687083,
   0.2224084,
   0.2733848,
   0.2356569,
   0.2599245,
   0.2803346,
   0.3032193,
   0.3768539};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[24] = {
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
   Double_t _fy3036[24] = {
   0.4297608,
   0.9136926,
   0.9771331,
   0.93202,
   0.6864787,
   0.918176,
   0.6352922,
   0.7765902,
   0.7224573,
   0.6047522,
   1.249393,
   0.8157799,
   1.01997,
   0.7826209,
   0.7630352,
   0.5586486,
   0.6329305,
   0.5624081,
   1.348498,
   0.9817803,
   0.6297893,
   1.24517,
   0.9594298,
   0.2655725};
   Double_t _felx3036[24] = {
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
   Double_t _fely3036[24] = {
   0.1628095,
   0.1711559,
   0.146895,
   0.1342575,
   0.1094749,
   0.1446236,
   0.1068029,
   0.136367,
   0.1214568,
   0.1363687,
   0.2161379,
   0.1613854,
   0.2017804,
   0.1810437,
   0.1922624,
   0.1560305,
   0.1920005,
   0.1788202,
   0.2899681,
   0.2400344,
   0.2109057,
   0.3352413,
   0.3404419,
   0.2655725};
   Double_t _fehx3036[24] = {
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
   Double_t _fehy3036[24] = {
   0.1498576,
   0.164821,
   0.142551,
   0.1304548,
   0.1060375,
   0.1401399,
   0.1032625,
   0.1316435,
   0.1174306,
   0.1302492,
   0.2087664,
   0.1550646,
   0.1938775,
   0.172697,
   0.1825584,
   0.1472358,
   0.1801479,
   0.1671886,
   0.2775912,
   0.2283075,
   0.196362,
   0.3170784,
   0.3153539,
   0.3611016};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,3.465);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.788698);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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

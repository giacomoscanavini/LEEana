#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  8 11:41:04 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-342.3077,-20.26,1260.256,2240.329);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__4->SetBinContent(0,1.242356);
   hmc__4->SetBinContent(1,1.857063);
   hmc__4->SetBinContent(2,5.589773);
   hmc__4->SetBinContent(3,41.13202);
   hmc__4->SetBinContent(4,918.486);
   hmc__4->SetBinContent(5,701.9464);
   hmc__4->SetBinContent(6,628.9754);
   hmc__4->SetBinContent(7,545.6382);
   hmc__4->SetBinContent(8,497.644);
   hmc__4->SetBinContent(9,449.1882);
   hmc__4->SetBinContent(10,353.7756);
   hmc__4->SetBinContent(11,305.7524);
   hmc__4->SetBinContent(12,265.3803);
   hmc__4->SetBinContent(13,194.838);
   hmc__4->SetBinContent(14,147.6394);
   hmc__4->SetBinContent(15,120.4561);
   hmc__4->SetBinContent(16,93.9255);
   hmc__4->SetBinContent(17,74.73162);
   hmc__4->SetBinContent(18,57.6835);
   hmc__4->SetBinContent(19,42.63669);
   hmc__4->SetBinContent(20,31.32538);
   hmc__4->SetBinContent(21,26.73342);
   hmc__4->SetBinContent(22,23.72034);
   hmc__4->SetBinContent(23,16.6875);
   hmc__4->SetBinContent(24,12.427);
   hmc__4->SetBinContent(25,14.31287);
   hmc__4->SetBinContent(26,47.76384);
   hmc__4->SetBinError(0,0.4781381);
   hmc__4->SetBinError(1,2.020929);
   hmc__4->SetBinError(2,2.59553);
   hmc__4->SetBinError(3,10.25046);
   hmc__4->SetBinError(4,202.2838);
   hmc__4->SetBinError(5,152.7095);
   hmc__4->SetBinError(6,135.052);
   hmc__4->SetBinError(7,116.9299);
   hmc__4->SetBinError(8,111.4685);
   hmc__4->SetBinError(9,99.40607);
   hmc__4->SetBinError(10,84.55564);
   hmc__4->SetBinError(11,67.02455);
   hmc__4->SetBinError(12,60.44267);
   hmc__4->SetBinError(13,47.85857);
   hmc__4->SetBinError(14,39.35879);
   hmc__4->SetBinError(15,30.35167);
   hmc__4->SetBinError(16,25.06961);
   hmc__4->SetBinError(17,24.00127);
   hmc__4->SetBinError(18,16.75155);
   hmc__4->SetBinError(19,12.2451);
   hmc__4->SetBinError(20,12.05337);
   hmc__4->SetBinError(21,10.6961);
   hmc__4->SetBinError(22,11.08631);
   hmc__4->SetBinError(23,7.629254);
   hmc__4->SetBinError(24,6.085474);
   hmc__4->SetBinError(25,7.867823);
   hmc__4->SetBinError(26,19.66273);
   hmc__4->SetMinimum(-20.26);
   hmc__4->SetMaximum(2127.3);
   hmc__4->SetEntries(5560.658);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-150,1100);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(964.4103);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(3,1.150919);
   hbadmatch_stack_1->SetBinContent(4,17.18345);
   hbadmatch_stack_1->SetBinContent(5,11.05585);
   hbadmatch_stack_1->SetBinContent(6,12.41859);
   hbadmatch_stack_1->SetBinContent(7,7.533209);
   hbadmatch_stack_1->SetBinContent(8,13.14196);
   hbadmatch_stack_1->SetBinContent(9,9.657293);
   hbadmatch_stack_1->SetBinContent(10,10.52091);
   hbadmatch_stack_1->SetBinContent(11,8.803301);
   hbadmatch_stack_1->SetBinContent(12,7.5397);
   hbadmatch_stack_1->SetBinContent(13,4.685797);
   hbadmatch_stack_1->SetBinContent(14,4.736756);
   hbadmatch_stack_1->SetBinContent(15,1.268811);
   hbadmatch_stack_1->SetBinContent(16,3.517302);
   hbadmatch_stack_1->SetBinContent(17,1.579285);
   hbadmatch_stack_1->SetBinContent(18,2.541607);
   hbadmatch_stack_1->SetBinContent(19,1.701785);
   hbadmatch_stack_1->SetBinContent(20,1.314087);
   hbadmatch_stack_1->SetBinContent(21,0.4357758);
   hbadmatch_stack_1->SetBinContent(22,0.5884556);
   hbadmatch_stack_1->SetBinContent(24,0.7336084);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,1.771256);
   hbadmatch_stack_1->SetBinError(3,0.5975644);
   hbadmatch_stack_1->SetBinError(4,2.677155);
   hbadmatch_stack_1->SetBinError(5,1.73012);
   hbadmatch_stack_1->SetBinError(6,2.125332);
   hbadmatch_stack_1->SetBinError(7,1.375542);
   hbadmatch_stack_1->SetBinError(8,2.752811);
   hbadmatch_stack_1->SetBinError(9,1.601995);
   hbadmatch_stack_1->SetBinError(10,2.232963);
   hbadmatch_stack_1->SetBinError(11,1.502556);
   hbadmatch_stack_1->SetBinError(12,1.458999);
   hbadmatch_stack_1->SetBinError(13,1.196015);
   hbadmatch_stack_1->SetBinError(14,1.128017);
   hbadmatch_stack_1->SetBinError(15,0.5889569);
   hbadmatch_stack_1->SetBinError(16,0.933018);
   hbadmatch_stack_1->SetBinError(17,0.6796927);
   hbadmatch_stack_1->SetBinError(18,0.8799355);
   hbadmatch_stack_1->SetBinError(19,0.7242413);
   hbadmatch_stack_1->SetBinError(20,0.6054587);
   hbadmatch_stack_1->SetBinError(21,0.3095914);
   hbadmatch_stack_1->SetBinError(22,0.3397478);
   hbadmatch_stack_1->SetBinError(24,0.4394482);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.6412322);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(3,8.007828);
   hext_stack_2->SetBinContent(4,83.3933);
   hext_stack_2->SetBinContent(5,69.20549);
   hext_stack_2->SetBinContent(6,51.66882);
   hext_stack_2->SetBinContent(7,46.27935);
   hext_stack_2->SetBinContent(8,33.60423);
   hext_stack_2->SetBinContent(9,33.20361);
   hext_stack_2->SetBinContent(10,19.4428);
   hext_stack_2->SetBinContent(11,28.37356);
   hext_stack_2->SetBinContent(12,22.68117);
   hext_stack_2->SetBinContent(13,12.36786);
   hext_stack_2->SetBinContent(14,6.945253);
   hext_stack_2->SetBinContent(15,9.634223);
   hext_stack_2->SetBinContent(16,9.257925);
   hext_stack_2->SetBinContent(17,4.856008);
   hext_stack_2->SetBinContent(18,4.221574);
   hext_stack_2->SetBinContent(19,5.979242);
   hext_stack_2->SetBinContent(20,2.028585);
   hext_stack_2->SetBinContent(21,2.021405);
   hext_stack_2->SetBinContent(22,1.461993);
   hext_stack_2->SetBinContent(23,1.78639);
   hext_stack_2->SetBinContent(24,1.055394);
   hext_stack_2->SetBinContent(25,3.379654);
   hext_stack_2->SetBinContent(26,5.89704);
   hext_stack_2->SetBinError(3,1.909398);
   hext_stack_2->SetBinError(4,6.343986);
   hext_stack_2->SetBinError(5,5.649977);
   hext_stack_2->SetBinError(6,4.888484);
   hext_stack_2->SetBinError(7,4.578339);
   hext_stack_2->SetBinError(8,3.792045);
   hext_stack_2->SetBinError(9,4.018864);
   hext_stack_2->SetBinError(10,2.863012);
   hext_stack_2->SetBinError(11,3.683307);
   hext_stack_2->SetBinError(12,3.354435);
   hext_stack_2->SetBinError(13,2.395333);
   hext_stack_2->SetBinError(14,1.863119);
   hext_stack_2->SetBinError(15,2.075354);
   hext_stack_2->SetBinError(16,2.266897);
   hext_stack_2->SetBinError(17,1.454658);
   hext_stack_2->SetBinError(18,1.226034);
   hext_stack_2->SetBinError(19,1.718811);
   hext_stack_2->SetBinError(20,0.8315593);
   hext_stack_2->SetBinError(21,0.9448239);
   hext_stack_2->SetBinError(22,0.7356036);
   hext_stack_2->SetBinError(23,0.8039566);
   hext_stack_2->SetBinError(24,0.6130171);
   hext_stack_2->SetBinError(25,1.406172);
   hext_stack_2->SetBinError(26,1.701242);
   hext_stack_2->SetEntries(1085);

   ci = 1449;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(3,0.5758626);
   hdirt_stack_3->SetBinContent(4,13.32946);
   hdirt_stack_3->SetBinContent(5,7.42278);
   hdirt_stack_3->SetBinContent(6,6.602675);
   hdirt_stack_3->SetBinContent(7,5.612172);
   hdirt_stack_3->SetBinContent(8,4.253757);
   hdirt_stack_3->SetBinContent(9,2.808516);
   hdirt_stack_3->SetBinContent(10,2.71937);
   hdirt_stack_3->SetBinContent(11,1.932068);
   hdirt_stack_3->SetBinContent(12,1.337348);
   hdirt_stack_3->SetBinContent(13,0.6002214);
   hdirt_stack_3->SetBinContent(15,0.7241209);
   hdirt_stack_3->SetBinContent(16,0.7319759);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(3,0.3389606);
   hdirt_stack_3->SetBinError(4,1.973237);
   hdirt_stack_3->SetBinError(5,1.38584);
   hdirt_stack_3->SetBinError(6,1.364381);
   hdirt_stack_3->SetBinError(7,1.515531);
   hdirt_stack_3->SetBinError(8,1.280425);
   hdirt_stack_3->SetBinError(9,0.9344062);
   hdirt_stack_3->SetBinError(10,0.7923356);
   hdirt_stack_3->SetBinError(11,0.6899377);
   hdirt_stack_3->SetBinError(12,0.5768093);
   hdirt_stack_3->SetBinError(13,0.427823);
   hdirt_stack_3->SetBinError(15,0.3699659);
   hdirt_stack_3->SetBinError(16,0.5190762);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetEntries(206);

   ci = 1450;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(3,3.620943);
   houtFV_stack_4->SetBinContent(4,98.33458);
   houtFV_stack_4->SetBinContent(5,75.78571);
   houtFV_stack_4->SetBinContent(6,56.45284);
   houtFV_stack_4->SetBinContent(7,39.21201);
   houtFV_stack_4->SetBinContent(8,30.81483);
   houtFV_stack_4->SetBinContent(9,26.00487);
   houtFV_stack_4->SetBinContent(10,16.46111);
   houtFV_stack_4->SetBinContent(11,14.05977);
   houtFV_stack_4->SetBinContent(12,9.029891);
   houtFV_stack_4->SetBinContent(13,7.032681);
   houtFV_stack_4->SetBinContent(14,4.804689);
   houtFV_stack_4->SetBinContent(15,3.779198);
   houtFV_stack_4->SetBinContent(16,2.589184);
   houtFV_stack_4->SetBinContent(17,2.195754);
   houtFV_stack_4->SetBinContent(18,2.144191);
   houtFV_stack_4->SetBinContent(19,0.6514121);
   houtFV_stack_4->SetBinContent(20,0.5884556);
   houtFV_stack_4->SetBinContent(21,0.7319179);
   houtFV_stack_4->SetBinContent(22,0.5901461);
   houtFV_stack_4->SetBinContent(23,0.3917402);
   houtFV_stack_4->SetBinContent(24,0.3401776);
   houtFV_stack_4->SetBinContent(25,0.1950248);
   houtFV_stack_4->SetBinContent(26,1.072095);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(3,0.8988449);
   houtFV_stack_4->SetBinError(4,4.941061);
   houtFV_stack_4->SetBinError(5,4.327133);
   houtFV_stack_4->SetBinError(6,3.775685);
   houtFV_stack_4->SetBinError(7,3.136109);
   houtFV_stack_4->SetBinError(8,2.74726);
   houtFV_stack_4->SetBinError(9,2.57252);
   houtFV_stack_4->SetBinError(10,2.054464);
   houtFV_stack_4->SetBinError(11,1.877203);
   houtFV_stack_4->SetBinError(12,1.539495);
   houtFV_stack_4->SetBinError(13,1.340979);
   houtFV_stack_4->SetBinError(14,1.113674);
   houtFV_stack_4->SetBinError(15,0.9769568);
   houtFV_stack_4->SetBinError(16,0.809167);
   houtFV_stack_4->SetBinError(17,0.7598403);
   houtFV_stack_4->SetBinError(18,0.7850774);
   houtFV_stack_4->SetBinError(19,0.3794052);
   houtFV_stack_4->SetBinError(20,0.3397478);
   houtFV_stack_4->SetBinError(21,0.438694);
   houtFV_stack_4->SetBinError(22,0.340721);
   houtFV_stack_4->SetBinError(23,0.2770047);
   houtFV_stack_4->SetBinError(24,0.3401776);
   houtFV_stack_4->SetBinError(25,0.1950249);
   houtFV_stack_4->SetBinError(26,0.5551335);
   houtFV_stack_4->SetEntries(1712);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,50.17023);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.95587);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.22738);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.255513);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.476642);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.719598);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.687289);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.90933);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.044758);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.8923038);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(4,2.360211);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.207552);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9528729);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7141406);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7164084);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5533355);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3644869);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4458949);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3093236);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2667597);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.32078);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.020761);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.027498);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.634234);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.119744);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.914066);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.046086);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.53434);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.101222);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.35349);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.12929);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6067905);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4113113);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.6056136);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.515085);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.466026);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5407059);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2620985);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3931691);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2893876);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4189688);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3424653);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2218905);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3205179);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.733552);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.64249);
   hNCpi0inFVres_stack_7->SetBinContent(4,446.2288);
   hNCpi0inFVres_stack_7->SetBinContent(5,357.2618);
   hNCpi0inFVres_stack_7->SetBinContent(6,326.788);
   hNCpi0inFVres_stack_7->SetBinContent(7,276.0383);
   hNCpi0inFVres_stack_7->SetBinContent(8,235.7601);
   hNCpi0inFVres_stack_7->SetBinContent(9,199.3664);
   hNCpi0inFVres_stack_7->SetBinContent(10,151.2849);
   hNCpi0inFVres_stack_7->SetBinContent(11,117.9735);
   hNCpi0inFVres_stack_7->SetBinContent(12,93.96362);
   hNCpi0inFVres_stack_7->SetBinContent(13,64.29814);
   hNCpi0inFVres_stack_7->SetBinContent(14,49.08395);
   hNCpi0inFVres_stack_7->SetBinContent(15,38.88231);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.9608);
   hNCpi0inFVres_stack_7->SetBinContent(17,21.31305);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.14793);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.855798);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.098258);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.591978);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.151548);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.250034);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.81434);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.436358);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.933799);
   hNCpi0inFVres_stack_7->SetBinError(0,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1252919);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6154946);
   hNCpi0inFVres_stack_7->SetBinError(3,1.128754);
   hNCpi0inFVres_stack_7->SetBinError(4,6.894796);
   hNCpi0inFVres_stack_7->SetBinError(5,6.119706);
   hNCpi0inFVres_stack_7->SetBinError(6,5.926488);
   hNCpi0inFVres_stack_7->SetBinError(7,5.476456);
   hNCpi0inFVres_stack_7->SetBinError(8,5.02209);
   hNCpi0inFVres_stack_7->SetBinError(9,4.603238);
   hNCpi0inFVres_stack_7->SetBinError(10,4.037631);
   hNCpi0inFVres_stack_7->SetBinError(11,3.529234);
   hNCpi0inFVres_stack_7->SetBinError(12,3.217453);
   hNCpi0inFVres_stack_7->SetBinError(13,2.634198);
   hNCpi0inFVres_stack_7->SetBinError(14,2.307049);
   hNCpi0inFVres_stack_7->SetBinError(15,2.055313);
   hNCpi0inFVres_stack_7->SetBinError(16,1.640385);
   hNCpi0inFVres_stack_7->SetBinError(17,1.589825);
   hNCpi0inFVres_stack_7->SetBinError(18,1.233042);
   hNCpi0inFVres_stack_7->SetBinError(19,0.992095);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9074377);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7469071);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5405858);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6216814);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4630239);
   hNCpi0inFVres_stack_7->SetBinError(25,0.398251);
   hNCpi0inFVres_stack_7->SetBinError(26,1.009665);
   hNCpi0inFVres_stack_7->SetEntries(45534);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.211326);
   hNCpi0inFVdis_stack_8->SetBinContent(4,74.13358);
   hNCpi0inFVdis_stack_8->SetBinContent(5,53.08578);
   hNCpi0inFVdis_stack_8->SetBinContent(6,49.43998);
   hNCpi0inFVdis_stack_8->SetBinContent(7,41.90331);
   hNCpi0inFVdis_stack_8->SetBinContent(8,45.10202);
   hNCpi0inFVdis_stack_8->SetBinContent(9,36.53171);
   hNCpi0inFVdis_stack_8->SetBinContent(10,31.16109);
   hNCpi0inFVdis_stack_8->SetBinContent(11,25.13733);
   hNCpi0inFVdis_stack_8->SetBinContent(12,23.089);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.72637);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.16628);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.19641);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.242901);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.988234);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.9419);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.574456);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.736624);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.840239);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.495566);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.644612);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.197876);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.143572);
   hNCpi0inFVdis_stack_8->SetBinContent(26,3.876283);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2847548);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.787954);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.392531);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.243643);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.114169);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.189606);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.984762);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.780959);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.631151);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.55296);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.384159);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.21513);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.087483);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9409179);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9325043);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8512629);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.690261);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6586666);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3333457);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5297988);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4297453);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3266629);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3330545);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5709329);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1455;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.362868);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2070706);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1456;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,0.1950248);
   hCCpi0inFV_stack_11->SetBinContent(1,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(2,0.5884556);
   hCCpi0inFV_stack_11->SetBinContent(3,4.948078);
   hCCpi0inFV_stack_11->SetBinContent(4,45.49308);
   hCCpi0inFV_stack_11->SetBinContent(5,54.77586);
   hCCpi0inFV_stack_11->SetBinContent(6,56.17859);
   hCCpi0inFV_stack_11->SetBinContent(7,66.18968);
   hCCpi0inFV_stack_11->SetBinContent(8,70.66898);
   hCCpi0inFV_stack_11->SetBinContent(9,72.46462);
   hCCpi0inFV_stack_11->SetBinContent(10,68.6202);
   hCCpi0inFV_stack_11->SetBinContent(11,62.36108);
   hCCpi0inFV_stack_11->SetBinContent(12,60.59298);
   hCCpi0inFV_stack_11->SetBinContent(13,55.45127);
   hCCpi0inFV_stack_11->SetBinContent(14,39.85259);
   hCCpi0inFV_stack_11->SetBinContent(15,31.40933);
   hCCpi0inFV_stack_11->SetBinContent(16,26.29984);
   hCCpi0inFV_stack_11->SetBinContent(17,21.82914);
   hCCpi0inFV_stack_11->SetBinContent(18,21.51563);
   hCCpi0inFV_stack_11->SetBinContent(19,11.04686);
   hCCpi0inFV_stack_11->SetBinContent(20,11.49056);
   hCCpi0inFV_stack_11->SetBinContent(21,11.16067);
   hCCpi0inFV_stack_11->SetBinContent(22,10.98553);
   hCCpi0inFV_stack_11->SetBinContent(23,7.472037);
   hCCpi0inFV_stack_11->SetBinContent(24,4.498013);
   hCCpi0inFV_stack_11->SetBinContent(25,4.839881);
   hCCpi0inFV_stack_11->SetBinContent(26,17.57492);
   hCCpi0inFV_stack_11->SetBinError(0,0.1950249);
   hCCpi0inFV_stack_11->SetBinError(1,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(2,0.3397478);
   hCCpi0inFV_stack_11->SetBinError(3,1.057569);
   hCCpi0inFV_stack_11->SetBinError(4,3.296833);
   hCCpi0inFV_stack_11->SetBinError(5,3.675116);
   hCCpi0inFV_stack_11->SetBinError(6,3.764748);
   hCCpi0inFV_stack_11->SetBinError(7,4.093431);
   hCCpi0inFV_stack_11->SetBinError(8,4.259539);
   hCCpi0inFV_stack_11->SetBinError(9,4.288037);
   hCCpi0inFV_stack_11->SetBinError(10,4.069284);
   hCCpi0inFV_stack_11->SetBinError(11,3.892485);
   hCCpi0inFV_stack_11->SetBinError(12,3.887202);
   hCCpi0inFV_stack_11->SetBinError(13,3.757856);
   hCCpi0inFV_stack_11->SetBinError(14,3.255552);
   hCCpi0inFV_stack_11->SetBinError(15,2.810002);
   hCCpi0inFV_stack_11->SetBinError(16,2.538233);
   hCCpi0inFV_stack_11->SetBinError(17,2.316506);
   hCCpi0inFV_stack_11->SetBinError(18,2.35517);
   hCCpi0inFV_stack_11->SetBinError(19,1.678232);
   hCCpi0inFV_stack_11->SetBinError(20,1.720229);
   hCCpi0inFV_stack_11->SetBinError(21,1.652506);
   hCCpi0inFV_stack_11->SetBinError(22,1.699834);
   hCCpi0inFV_stack_11->SetBinError(23,1.401094);
   hCCpi0inFV_stack_11->SetBinError(24,1.038297);
   hCCpi0inFV_stack_11->SetBinError(25,1.092906);
   hCCpi0inFV_stack_11->SetBinError(26,2.139512);
   hCCpi0inFV_stack_11->SetEntries(3599);

   ci = 1458;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(1,0.3934307);
   hNCinFV_stack_12->SetBinContent(2,0.5901461);
   hNCinFV_stack_12->SetBinContent(3,3.659589);
   hNCinFV_stack_12->SetBinContent(4,41.57549);
   hNCinFV_stack_12->SetBinContent(5,25.44854);
   hNCinFV_stack_12->SetBinContent(6,22.50904);
   hNCinFV_stack_12->SetBinContent(7,20.47027);
   hNCinFV_stack_12->SetBinContent(8,20.6217);
   hNCinFV_stack_12->SetBinContent(9,23.99424);
   hNCinFV_stack_12->SetBinContent(10,20.85525);
   hNCinFV_stack_12->SetBinContent(11,16.16836);
   hNCinFV_stack_12->SetBinContent(12,15.54018);
   hNCinFV_stack_12->SetBinContent(13,10.84714);
   hNCinFV_stack_12->SetBinContent(14,10.83531);
   hNCinFV_stack_12->SetBinContent(15,9.226316);
   hNCinFV_stack_12->SetBinContent(16,5.570109);
   hNCinFV_stack_12->SetBinContent(17,4.540041);
   hNCinFV_stack_12->SetBinContent(18,2.699071);
   hNCinFV_stack_12->SetBinContent(19,2.782519);
   hNCinFV_stack_12->SetBinContent(20,1.515398);
   hNCinFV_stack_12->SetBinContent(21,2.145881);
   hNCinFV_stack_12->SetBinContent(22,2.876109);
   hNCinFV_stack_12->SetBinContent(23,1.518779);
   hNCinFV_stack_12->SetBinContent(24,0.6803553);
   hNCinFV_stack_12->SetBinContent(25,1.217248);
   hNCinFV_stack_12->SetBinContent(26,2.984305);
   hNCinFV_stack_12->SetBinError(1,0.2781975);
   hNCinFV_stack_12->SetBinError(2,0.340721);
   hNCinFV_stack_12->SetBinError(3,0.9809496);
   hNCinFV_stack_12->SetBinError(4,3.248851);
   hNCinFV_stack_12->SetBinError(5,2.551425);
   hNCinFV_stack_12->SetBinError(6,2.394854);
   hNCinFV_stack_12->SetBinError(7,2.289168);
   hNCinFV_stack_12->SetBinError(8,2.232523);
   hNCinFV_stack_12->SetBinError(9,2.435202);
   hNCinFV_stack_12->SetBinError(10,2.305292);
   hNCinFV_stack_12->SetBinError(11,2.000574);
   hNCinFV_stack_12->SetBinError(12,1.982547);
   hNCinFV_stack_12->SetBinError(13,1.677617);
   hNCinFV_stack_12->SetBinError(14,1.676235);
   hNCinFV_stack_12->SetBinError(15,1.532048);
   hNCinFV_stack_12->SetBinError(16,1.177384);
   hNCinFV_stack_12->SetBinError(17,1.110732);
   hNCinFV_stack_12->SetBinError(18,0.7611976);
   hNCinFV_stack_12->SetBinError(19,0.8319397);
   hNCinFV_stack_12->SetBinError(20,0.588146);
   hNCinFV_stack_12->SetBinError(21,0.785499);
   hNCinFV_stack_12->SetBinError(22,0.8993325);
   hNCinFV_stack_12->SetBinError(23,0.5892709);
   hNCinFV_stack_12->SetBinError(24,0.4810838);
   hNCinFV_stack_12->SetBinError(25,0.6211758);
   hNCinFV_stack_12->SetBinError(26,0.8560416);
   hNCinFV_stack_12->SetEntries(1151);

   ci = 1459;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,0.8520313);
   hnumuCCinFV_stack_13->SetBinContent(1,0.4531029);
   hnumuCCinFV_stack_13->SetBinContent(2,1.031205);
   hnumuCCinFV_stack_13->SetBinContent(3,6.119692);
   hnumuCCinFV_stack_13->SetBinContent(4,36.61865);
   hnumuCCinFV_stack_13->SetBinContent(5,26.78189);
   hnumuCCinFV_stack_13->SetBinContent(6,31.63445);
   hnumuCCinFV_stack_13->SetBinContent(7,30.89458);
   hnumuCCinFV_stack_13->SetBinContent(8,34.85352);
   hnumuCCinFV_stack_13->SetBinContent(9,34.64244);
   hnumuCCinFV_stack_13->SetBinContent(10,28.32197);
   hnumuCCinFV_stack_13->SetBinContent(11,26.61073);
   hnumuCCinFV_stack_13->SetBinContent(12,25.82818);
   hnumuCCinFV_stack_13->SetBinContent(13,19.01965);
   hnumuCCinFV_stack_13->SetBinContent(14,13.74619);
   hnumuCCinFV_stack_13->SetBinContent(15,12.59909);
   hnumuCCinFV_stack_13->SetBinContent(16,9.825289);
   hnumuCCinFV_stack_13->SetBinContent(17,9.710636);
   hnumuCCinFV_stack_13->SetBinContent(18,4.519146);
   hnumuCCinFV_stack_13->SetBinContent(19,6.625946);
   hnumuCCinFV_stack_13->SetBinContent(20,2.600739);
   hnumuCCinFV_stack_13->SetBinContent(21,2.580939);
   hnumuCCinFV_stack_13->SetBinContent(22,1.473675);
   hnumuCCinFV_stack_13->SetBinContent(23,0.5960084);
   hnumuCCinFV_stack_13->SetBinContent(24,1.91221);
   hnumuCCinFV_stack_13->SetBinContent(25,1.032278);
   hnumuCCinFV_stack_13->SetBinContent(26,5.741201);
   hnumuCCinFV_stack_13->SetBinError(0,0.4302702);
   hnumuCCinFV_stack_13->SetBinError(1,0.3231587);
   hnumuCCinFV_stack_13->SetBinError(2,0.4633123);
   hnumuCCinFV_stack_13->SetBinError(3,1.547226);
   hnumuCCinFV_stack_13->SetBinError(4,3.753754);
   hnumuCCinFV_stack_13->SetBinError(5,2.93719);
   hnumuCCinFV_stack_13->SetBinError(6,3.462242);
   hnumuCCinFV_stack_13->SetBinError(7,4.164004);
   hnumuCCinFV_stack_13->SetBinError(8,3.424793);
   hnumuCCinFV_stack_13->SetBinError(9,3.60693);
   hnumuCCinFV_stack_13->SetBinError(10,3.107631);
   hnumuCCinFV_stack_13->SetBinError(11,2.801701);
   hnumuCCinFV_stack_13->SetBinError(12,2.843165);
   hnumuCCinFV_stack_13->SetBinError(13,2.627484);
   hnumuCCinFV_stack_13->SetBinError(14,2.11414);
   hnumuCCinFV_stack_13->SetBinError(15,2.066221);
   hnumuCCinFV_stack_13->SetBinError(16,1.731025);
   hnumuCCinFV_stack_13->SetBinError(17,1.687419);
   hnumuCCinFV_stack_13->SetBinError(18,1.085182);
   hnumuCCinFV_stack_13->SetBinError(19,1.52275);
   hnumuCCinFV_stack_13->SetBinError(20,0.8120294);
   hnumuCCinFV_stack_13->SetBinError(21,0.7980921);
   hnumuCCinFV_stack_13->SetBinError(22,0.5843523);
   hnumuCCinFV_stack_13->SetBinError(23,0.4256409);
   hnumuCCinFV_stack_13->SetBinError(24,0.6516395);
   hnumuCCinFV_stack_13->SetBinError(25,0.4636994);
   hnumuCCinFV_stack_13->SetBinError(26,1.274789);
   hnumuCCinFV_stack_13->SetEntries(1455);

   ci = 1460;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(4,8.397515);
   hnueCCinFV_stack_14->SetBinContent(5,5.048716);
   hnueCCinFV_stack_14->SetBinContent(6,3.66466);
   hnueCCinFV_stack_14->SetBinContent(7,3.308462);
   hnueCCinFV_stack_14->SetBinContent(8,1.94742);
   hnueCCinFV_stack_14->SetBinContent(9,4.769208);
   hnueCCinFV_stack_14->SetBinContent(10,1.529433);
   hnueCCinFV_stack_14->SetBinContent(11,0.8053985);
   hnueCCinFV_stack_14->SetBinContent(12,3.604346);
   hnueCCinFV_stack_14->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(14,2.199637);
   hnueCCinFV_stack_14->SetBinContent(15,1.010552);
   hnueCCinFV_stack_14->SetBinContent(16,1.539397);
   hnueCCinFV_stack_14->SetBinContent(17,0.441907);
   hnueCCinFV_stack_14->SetBinContent(18,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(20,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(26,0.7319179);
   hnueCCinFV_stack_14->SetBinError(2,0.3401776);
   hnueCCinFV_stack_14->SetBinError(4,2.003427);
   hnueCCinFV_stack_14->SetBinError(5,1.22648);
   hnueCCinFV_stack_14->SetBinError(6,1.088631);
   hnueCCinFV_stack_14->SetBinError(7,0.9041708);
   hnueCCinFV_stack_14->SetBinError(8,0.6534729);
   hnueCCinFV_stack_14->SetBinError(9,1.979796);
   hnueCCinFV_stack_14->SetBinError(10,0.5929878);
   hnueCCinFV_stack_14->SetBinError(11,0.4032948);
   hnueCCinFV_stack_14->SetBinError(12,1.205707);
   hnueCCinFV_stack_14->SetBinError(13,0.3921167);
   hnueCCinFV_stack_14->SetBinError(14,1.045064);
   hnueCCinFV_stack_14->SetBinError(15,0.5170128);
   hnueCCinFV_stack_14->SetBinError(16,0.8198597);
   hnueCCinFV_stack_14->SetBinError(17,0.3143499);
   hnueCCinFV_stack_14->SetBinError(18,0.3921167);
   hnueCCinFV_stack_14->SetBinError(20,0.4531728);
   hnueCCinFV_stack_14->SetBinError(21,0.1967154);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.3401776);
   hnueCCinFV_stack_14->SetBinError(26,0.438694);
   hnueCCinFV_stack_14->SetEntries(151);

   ci = 1461;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__5->SetBinContent(0,1.242356);
   hmcerror__5->SetBinContent(1,1.857063);
   hmcerror__5->SetBinContent(2,5.589773);
   hmcerror__5->SetBinContent(3,41.13202);
   hmcerror__5->SetBinContent(4,918.486);
   hmcerror__5->SetBinContent(5,701.9464);
   hmcerror__5->SetBinContent(6,628.9754);
   hmcerror__5->SetBinContent(7,545.6382);
   hmcerror__5->SetBinContent(8,497.644);
   hmcerror__5->SetBinContent(9,449.1882);
   hmcerror__5->SetBinContent(10,353.7756);
   hmcerror__5->SetBinContent(11,305.7524);
   hmcerror__5->SetBinContent(12,265.3803);
   hmcerror__5->SetBinContent(13,194.838);
   hmcerror__5->SetBinContent(14,147.6394);
   hmcerror__5->SetBinContent(15,120.4561);
   hmcerror__5->SetBinContent(16,93.9255);
   hmcerror__5->SetBinContent(17,74.73162);
   hmcerror__5->SetBinContent(18,57.6835);
   hmcerror__5->SetBinContent(19,42.63669);
   hmcerror__5->SetBinContent(20,31.32538);
   hmcerror__5->SetBinContent(21,26.73342);
   hmcerror__5->SetBinContent(22,23.72034);
   hmcerror__5->SetBinContent(23,16.6875);
   hmcerror__5->SetBinContent(24,12.427);
   hmcerror__5->SetBinContent(25,14.31287);
   hmcerror__5->SetBinContent(26,47.76384);
   hmcerror__5->SetBinError(0,0.4781381);
   hmcerror__5->SetBinError(1,2.020929);
   hmcerror__5->SetBinError(2,2.59553);
   hmcerror__5->SetBinError(3,10.25046);
   hmcerror__5->SetBinError(4,202.2838);
   hmcerror__5->SetBinError(5,152.7095);
   hmcerror__5->SetBinError(6,135.052);
   hmcerror__5->SetBinError(7,116.9299);
   hmcerror__5->SetBinError(8,111.4685);
   hmcerror__5->SetBinError(9,99.40607);
   hmcerror__5->SetBinError(10,84.55564);
   hmcerror__5->SetBinError(11,67.02455);
   hmcerror__5->SetBinError(12,60.44267);
   hmcerror__5->SetBinError(13,47.85857);
   hmcerror__5->SetBinError(14,39.35879);
   hmcerror__5->SetBinError(15,30.35167);
   hmcerror__5->SetBinError(16,25.06961);
   hmcerror__5->SetBinError(17,24.00127);
   hmcerror__5->SetBinError(18,16.75155);
   hmcerror__5->SetBinError(19,12.2451);
   hmcerror__5->SetBinError(20,12.05337);
   hmcerror__5->SetBinError(21,10.6961);
   hmcerror__5->SetBinError(22,11.08631);
   hmcerror__5->SetBinError(23,7.629254);
   hmcerror__5->SetBinError(24,6.085474);
   hmcerror__5->SetBinError(25,7.867823);
   hmcerror__5->SetBinError(26,19.66273);
   hmcerror__5->SetEntries(5560.658);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3005[25] = {
   3,
   6,
   55,
   1013,
   668,
   568,
   463,
   433,
   360,
   291,
   237,
   198,
   141,
   117,
   99,
   64,
   49,
   43,
   31,
   23,
   19,
   16,
   14,
   15,
   9};
   Double_t _felx3005[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3005[25] = {
   2.143368,
   2.67925,
   7.546,
   31.82766,
   25.8457,
   23.83275,
   21.51743,
   20.80865,
   18.97367,
   17.05872,
   15.3948,
   14.07125,
   11.87434,
   10.81665,
   10.0712,
   8.1273,
   7.1318,
   6.6917,
   5.7094,
   4.9457,
   4.5151,
   4.1628,
   3.9102,
   4.0385,
   3.19354};
   Double_t _fehx3005[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3005[25] = {
   1.72422,
   2.41858,
   7.3425,
   31.82766,
   25.8457,
   23.83275,
   21.51743,
   20.80865,
   18.97367,
   17.05872,
   15.3948,
   14.07125,
   11.87434,
   10.81665,
   9.87,
   7.9246,
   6.9277,
   6.4868,
   5.5017,
   4.7346,
   4.3011,
   3.9454,
   3.6898,
   3.8197,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-275,1225);
   Graph_Graph3005->SetMinimum(0.7709688);
   Graph_Graph3005->SetMaximum(1149.225);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4935.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.3","F");

   ci = 1448;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 460.9","F");

   ci = 1449;
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

   ci = 1450;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 396.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2462.2","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  464.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 820.9","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 268.3","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 370.0","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 41.0","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3006[25] = {
   1.088239,
   0.4643355,
   0.2492088,
   0.2202361,
   0.2175515,
   0.2147175,
   0.2142993,
   0.2239924,
   0.2213016,
   0.2390092,
   0.2192118,
   0.2277587,
   0.2456326,
   0.2665872,
   0.2519729,
   0.2669096,
   0.3211661,
   0.2904045,
   0.2871963,
   0.3847798,
   0.4001022,
   0.4673756,
   0.4571837,
   0.4896978,
   0.5497025};
   Double_t _fehx3006[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3006[25] = {
   1.088239,
   0.4643355,
   0.2492088,
   0.2202361,
   0.2175515,
   0.2147175,
   0.2142993,
   0.2239924,
   0.2213016,
   0.2390092,
   0.2192118,
   0.2277587,
   0.2456326,
   0.2665872,
   0.2519729,
   0.2669096,
   0.3211661,
   0.2904045,
   0.2871963,
   0.3847798,
   0.4001022,
   0.4673756,
   0.4571837,
   0.4896978,
   0.5497025};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-275,1225);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3007[25] = {
   0.4827223,
   0.311694,
   0.1820016,
   0.197827,
   0.2087979,
   0.2114808,
   0.2113101,
   0.2185092,
   0.2176053,
   0.2269466,
   0.2104525,
   0.2114763,
   0.225289,
   0.2333113,
   0.2142671,
   0.2208022,
   0.2208755,
   0.2208808,
   0.2116055,
   0.2236599,
   0.2330072,
   0.2428334,
   0.2602287,
   0.2282203,
   0.2181863};
   Double_t _fehx3007[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3007[25] = {
   0.4827223,
   0.311694,
   0.1820016,
   0.197827,
   0.2087979,
   0.2114808,
   0.2113101,
   0.2185092,
   0.2176053,
   0.2269466,
   0.2104525,
   0.2114763,
   0.225289,
   0.2333113,
   0.2142671,
   0.2208022,
   0.2208755,
   0.2208808,
   0.2116055,
   0.2236599,
   0.2330072,
   0.2428334,
   0.2602287,
   0.2282203,
   0.2181863};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-275,1225);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3008[25] = {
   1.615454,
   1.073389,
   1.337158,
   1.102902,
   0.9516397,
   0.903056,
   0.8485477,
   0.8700998,
   0.8014459,
   0.8225553,
   0.7751369,
   0.7460991,
   0.723678,
   0.7924713,
   0.8218761,
   0.6813911,
   0.6556796,
   0.7454472,
   0.7270733,
   0.7342289,
   0.7107208,
   0.6745266,
   0.8389512,
   1.207049,
   0.6288046};
   Double_t _felx3008[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3008[25] = {
   1.154171,
   0.4793129,
   0.183458,
   0.03465231,
   0.03682004,
   0.03789139,
   0.03943535,
   0.04181433,
   0.04223991,
   0.04821905,
   0.05035055,
   0.05302296,
   0.06094468,
   0.073264,
   0.08360888,
   0.08652922,
   0.09543216,
   0.1160072,
   0.1339081,
   0.1578816,
   0.1688934,
   0.175495,
   0.2343191,
   0.3249779,
   0.2231236};
   Double_t _fehx3008[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3008[25] = {
   0.9284663,
   0.4326795,
   0.1785105,
   0.03465231,
   0.03682004,
   0.03789139,
   0.03943535,
   0.04181433,
   0.04223991,
   0.04821905,
   0.05035055,
   0.05302296,
   0.06094468,
   0.073264,
   0.08193856,
   0.08437112,
   0.09270105,
   0.112455,
   0.1290367,
   0.1511426,
   0.1608885,
   0.1663298,
   0.2211116,
   0.3073711,
   0.2066811};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-275,1225);
   Graph_Graph3008->SetMinimum(0.191857);
   Graph_Graph3008->SetMaximum(2.757745);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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

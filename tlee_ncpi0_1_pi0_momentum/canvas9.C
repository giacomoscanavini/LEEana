#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Oct 21 20:21:54 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-2.120039,1692.308,234.4317);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__25->SetBinContent(1,15.87365);
   hmc__25->SetBinContent(2,68.68109);
   hmc__25->SetBinContent(3,106.0019);
   hmc__25->SetBinContent(4,89.71758);
   hmc__25->SetBinContent(5,61.07402);
   hmc__25->SetBinContent(6,57.17883);
   hmc__25->SetBinContent(7,54.21224);
   hmc__25->SetBinContent(8,38.27269);
   hmc__25->SetBinContent(9,27.3126);
   hmc__25->SetBinContent(10,17.22602);
   hmc__25->SetBinContent(11,17.84284);
   hmc__25->SetBinContent(12,16.05943);
   hmc__25->SetBinContent(13,6.987032);
   hmc__25->SetBinContent(14,7.162359);
   hmc__25->SetBinContent(15,6.576911);
   hmc__25->SetBinContent(16,5.94101);
   hmc__25->SetBinContent(17,5.735476);
   hmc__25->SetBinContent(18,6.368869);
   hmc__25->SetBinContent(19,4.002453);
   hmc__25->SetBinContent(20,3.747554);
   hmc__25->SetBinContent(21,2.721593);
   hmc__25->SetBinContent(22,4.515761);
   hmc__25->SetBinContent(23,1.86562);
   hmc__25->SetBinContent(24,1.433663);
   hmc__25->SetBinContent(25,1.74702);
   hmc__25->SetBinContent(26,32.33089);
   hmc__25->SetBinError(1,9.118526);
   hmc__25->SetBinError(2,29.6796);
   hmc__25->SetBinError(3,32.47102);
   hmc__25->SetBinError(4,32.79592);
   hmc__25->SetBinError(5,24.61969);
   hmc__25->SetBinError(6,25.43927);
   hmc__25->SetBinError(7,21.711);
   hmc__25->SetBinError(8,19.30612);
   hmc__25->SetBinError(9,14.97429);
   hmc__25->SetBinError(10,9.99798);
   hmc__25->SetBinError(11,10.89259);
   hmc__25->SetBinError(12,8.642558);
   hmc__25->SetBinError(13,12.5681);
   hmc__25->SetBinError(14,14.67091);
   hmc__25->SetBinError(15,5.106794);
   hmc__25->SetBinError(16,6.262728);
   hmc__25->SetBinError(17,7.922334);
   hmc__25->SetBinError(18,9.10178);
   hmc__25->SetBinError(19,3.914159);
   hmc__25->SetBinError(20,5.706351);
   hmc__25->SetBinError(21,4.366844);
   hmc__25->SetBinError(22,8.104559);
   hmc__25->SetBinError(23,9.296336);
   hmc__25->SetBinError(24,10.60401);
   hmc__25->SetBinError(25,4.36674);
   hmc__25->SetBinError(26,17.98362);
   hmc__25->SetMinimum(-2.120039);
   hmc__25->SetMaximum(222.6041);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,1500);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(111.302);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,1.06939);
   hbadmatch_stack_1->SetBinContent(2,3.344211);
   hbadmatch_stack_1->SetBinContent(3,3.241243);
   hbadmatch_stack_1->SetBinContent(4,3.46098);
   hbadmatch_stack_1->SetBinContent(5,2.400282);
   hbadmatch_stack_1->SetBinContent(6,1.058275);
   hbadmatch_stack_1->SetBinContent(7,0.8615139);
   hbadmatch_stack_1->SetBinContent(8,1.975018);
   hbadmatch_stack_1->SetBinContent(9,0.5504432);
   hbadmatch_stack_1->SetBinContent(10,0.8387748);
   hbadmatch_stack_1->SetBinContent(11,0.08619046);
   hbadmatch_stack_1->SetBinContent(12,0.8152037);
   hbadmatch_stack_1->SetBinContent(14,0.3401776);
   hbadmatch_stack_1->SetBinContent(15,0.1950248);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.5645596);
   hbadmatch_stack_1->SetBinError(2,0.9636809);
   hbadmatch_stack_1->SetBinError(3,0.8884886);
   hbadmatch_stack_1->SetBinError(4,0.9041904);
   hbadmatch_stack_1->SetBinError(5,0.7197611);
   hbadmatch_stack_1->SetBinError(6,0.4872961);
   hbadmatch_stack_1->SetBinError(7,0.4527678);
   hbadmatch_stack_1->SetBinError(8,0.8554361);
   hbadmatch_stack_1->SetBinError(9,0.283699);
   hbadmatch_stack_1->SetBinError(10,0.5619487);
   hbadmatch_stack_1->SetBinError(11,0.08619046);
   hbadmatch_stack_1->SetBinError(12,0.4781521);
   hbadmatch_stack_1->SetBinError(14,0.3401776);
   hbadmatch_stack_1->SetBinError(15,0.1950249);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.2946723);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,1.614806);
   hext_stack_2->SetBinContent(2,12.65194);
   hext_stack_2->SetBinContent(3,21.59706);
   hext_stack_2->SetBinContent(4,8.407247);
   hext_stack_2->SetBinContent(5,6.325181);
   hext_stack_2->SetBinContent(6,3.565599);
   hext_stack_2->SetBinContent(7,9.015729);
   hext_stack_2->SetBinContent(8,4.841647);
   hext_stack_2->SetBinContent(9,3.57278);
   hext_stack_2->SetBinContent(10,1.290409);
   hext_stack_2->SetBinContent(11,3.939067);
   hext_stack_2->SetBinContent(12,3.62185);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,0.8131978);
   hext_stack_2->SetBinContent(17,0.6487947);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(19,1.137595);
   hext_stack_2->SetBinContent(20,0.6487947);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(26,2.345802);
   hext_stack_2->SetBinError(1,0.8528597);
   hext_stack_2->SetBinError(2,2.591089);
   hext_stack_2->SetBinError(3,3.417785);
   hext_stack_2->SetBinError(4,2.003079);
   hext_stack_2->SetBinError(5,1.567144);
   hext_stack_2->SetBinError(6,1.22225);
   hext_stack_2->SetBinError(7,2.256918);
   hext_stack_2->SetBinError(8,1.586957);
   hext_stack_2->SetBinError(9,1.136966);
   hext_stack_2->SetBinError(10,0.788756);
   hext_stack_2->SetBinError(11,1.526073);
   hext_stack_2->SetBinError(12,1.422134);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,0.5750177);
   hext_stack_2->SetBinError(17,0.4587671);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(19,0.6602113);
   hext_stack_2->SetBinError(20,0.4587671);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(26,0.9989624);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.2628198);
   hdirt_stack_3->SetBinContent(3,0.5429839);
   hdirt_stack_3->SetBinContent(4,0.5381464);
   hdirt_stack_3->SetBinContent(5,0.6338169);
   hdirt_stack_3->SetBinContent(6,0.3381872);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.4289006);
   hdirt_stack_3->SetBinContent(9,0.6787259);
   hdirt_stack_3->SetBinContent(10,0.4026575);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.1564614);
   hdirt_stack_3->SetBinContent(17,0.2623434);
   hdirt_stack_3->SetBinError(2,0.2628198);
   hdirt_stack_3->SetBinError(3,0.4278058);
   hdirt_stack_3->SetBinError(4,0.3267618);
   hdirt_stack_3->SetBinError(5,0.4691215);
   hdirt_stack_3->SetBinError(6,0.3381872);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4289006);
   hdirt_stack_3->SetBinError(9,0.4782747);
   hdirt_stack_3->SetBinError(10,0.2984452);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.1564614);
   hdirt_stack_3->SetBinError(17,0.2623434);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,3.75438);
   houtFV_stack_4->SetBinContent(2,9.75885);
   houtFV_stack_4->SetBinContent(3,16.74912);
   houtFV_stack_4->SetBinContent(4,16.67749);
   houtFV_stack_4->SetBinContent(5,9.833302);
   houtFV_stack_4->SetBinContent(6,8.107943);
   houtFV_stack_4->SetBinContent(7,9.261518);
   houtFV_stack_4->SetBinContent(8,7.064614);
   houtFV_stack_4->SetBinContent(9,5.023924);
   houtFV_stack_4->SetBinContent(10,3.198792);
   houtFV_stack_4->SetBinContent(11,2.703711);
   houtFV_stack_4->SetBinContent(12,2.982827);
   houtFV_stack_4->SetBinContent(13,1.015053);
   houtFV_stack_4->SetBinContent(14,2.341117);
   houtFV_stack_4->SetBinContent(15,1.815125);
   houtFV_stack_4->SetBinContent(16,2.186718);
   houtFV_stack_4->SetBinContent(17,1.318683);
   houtFV_stack_4->SetBinContent(18,1.779173);
   houtFV_stack_4->SetBinContent(19,0.5738524);
   houtFV_stack_4->SetBinContent(20,1.217193);
   houtFV_stack_4->SetBinContent(21,0.3917402);
   houtFV_stack_4->SetBinContent(22,0.3934307);
   houtFV_stack_4->SetBinContent(23,0.5884556);
   houtFV_stack_4->SetBinContent(24,0.3401776);
   houtFV_stack_4->SetBinContent(25,0.536893);
   houtFV_stack_4->SetBinContent(26,6.633189);
   houtFV_stack_4->SetBinError(1,0.9304285);
   houtFV_stack_4->SetBinError(2,1.621074);
   houtFV_stack_4->SetBinError(3,2.009596);
   houtFV_stack_4->SetBinError(4,2.080615);
   houtFV_stack_4->SetBinError(5,1.502029);
   houtFV_stack_4->SetBinError(6,1.448285);
   houtFV_stack_4->SetBinError(7,1.540993);
   houtFV_stack_4->SetBinError(8,1.372788);
   houtFV_stack_4->SetBinError(9,1.288358);
   houtFV_stack_4->SetBinError(10,0.8123811);
   houtFV_stack_4->SetBinError(11,0.8832337);
   houtFV_stack_4->SetBinError(12,0.8232376);
   houtFV_stack_4->SetBinError(13,0.6056661);
   houtFV_stack_4->SetBinError(14,0.9963533);
   houtFV_stack_4->SetBinError(15,0.673265);
   houtFV_stack_4->SetBinError(16,1.028802);
   houtFV_stack_4->SetBinError(17,0.5542732);
   houtFV_stack_4->SetBinError(18,0.7246119);
   houtFV_stack_4->SetBinError(19,0.3100351);
   houtFV_stack_4->SetBinError(20,0.5121979);
   houtFV_stack_4->SetBinError(21,0.2770047);
   houtFV_stack_4->SetBinError(22,0.2781975);
   houtFV_stack_4->SetBinError(23,0.3397478);
   houtFV_stack_4->SetBinError(24,0.3401776);
   houtFV_stack_4->SetBinError(25,0.3929602);
   houtFV_stack_4->SetBinError(26,1.281899);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.07685162);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1324158);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.05442126);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1081756);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1744021);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1436813);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05535072);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2899351);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.02537674);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06264375);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05237625);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03195992);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1698483);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.01962509);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.254799);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.071188);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.47774);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.17964);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.06971);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.87566);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.205603);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.518699);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.984718);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.958308);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.605772);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.272592);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.179891);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.024112);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.122089);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.530654);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.6226502);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.267491);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6551015);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2597755);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.6625478);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.7595969);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.4491017);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.1570046);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05578362);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.310153);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3419291);
   hNCpi0inFVres_stack_7->SetBinError(2,1.005021);
   hNCpi0inFVres_stack_7->SetBinError(3,1.085857);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9335218);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9201718);
   hNCpi0inFVres_stack_7->SetBinError(6,1.093865);
   hNCpi0inFVres_stack_7->SetBinError(7,0.767193);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6839892);
   hNCpi0inFVres_stack_7->SetBinError(9,0.646934);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6082118);
   hNCpi0inFVres_stack_7->SetBinError(11,0.61761);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4559286);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3894122);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4158449);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3418155);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1612531);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2293297);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1145708);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3831601);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1297584);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5122481);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5809501);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3202152);
   hNCpi0inFVres_stack_7->SetBinError(24,0.08188375);
   hNCpi0inFVres_stack_7->SetBinError(25,0.04165784);
   hNCpi0inFVres_stack_7->SetBinError(26,0.504806);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.851142);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.255954);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.893517);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.735683);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.074396);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.024536);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.871519);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.736605);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.402255);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8290843);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.111955);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.777121);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4089209);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5026673);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1265333);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3736525);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.06104171);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9002521);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2893213);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.3236184);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5747044);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5485888);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.03556623);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.116643);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.569801);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.666507);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5486513);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.632927);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8630752);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4913806);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5971641);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4936449);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.647378);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2237154);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5154888);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4914308);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2353359);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3752742);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.06283571);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1578042);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04622901);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.568535);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2074878);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1968035);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5475157);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4125427);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02893407);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5092826);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02619662);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,3.903645);
   hCCpi0inFV_stack_10->SetBinContent(2,14.31052);
   hCCpi0inFV_stack_10->SetBinContent(3,20.86683);
   hCCpi0inFV_stack_10->SetBinContent(4,20.48997);
   hCCpi0inFV_stack_10->SetBinContent(5,12.69539);
   hCCpi0inFV_stack_10->SetBinContent(6,15.23202);
   hCCpi0inFV_stack_10->SetBinContent(7,9.948114);
   hCCpi0inFV_stack_10->SetBinContent(8,8.017521);
   hCCpi0inFV_stack_10->SetBinContent(9,4.742939);
   hCCpi0inFV_stack_10->SetBinContent(10,2.305708);
   hCCpi0inFV_stack_10->SetBinContent(11,1.999038);
   hCCpi0inFV_stack_10->SetBinContent(12,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(13,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(14,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(15,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(16,1.180292);
   hCCpi0inFV_stack_10->SetBinContent(17,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(18,1.410583);
   hCCpi0inFV_stack_10->SetBinContent(19,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(20,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(21,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(22,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(23,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(25,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(26,5.417411);
   hCCpi0inFV_stack_10->SetBinError(1,0.9066568);
   hCCpi0inFV_stack_10->SetBinError(2,1.819133);
   hCCpi0inFV_stack_10->SetBinError(3,2.343486);
   hCCpi0inFV_stack_10->SetBinError(4,2.283955);
   hCCpi0inFV_stack_10->SetBinError(5,1.80542);
   hCCpi0inFV_stack_10->SetBinError(6,2.049243);
   hCCpi0inFV_stack_10->SetBinError(7,1.61111);
   hCCpi0inFV_stack_10->SetBinError(8,1.40165);
   hCCpi0inFV_stack_10->SetBinError(9,1.066717);
   hCCpi0inFV_stack_10->SetBinError(10,0.751499);
   hCCpi0inFV_stack_10->SetBinError(11,0.7339349);
   hCCpi0inFV_stack_10->SetBinError(12,0.785313);
   hCCpi0inFV_stack_10->SetBinError(13,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(14,0.438694);
   hCCpi0inFV_stack_10->SetBinError(15,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(16,0.4818523);
   hCCpi0inFV_stack_10->SetBinError(17,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(18,0.6505627);
   hCCpi0inFV_stack_10->SetBinError(19,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(20,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(21,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(22,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(23,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(25,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(26,1.202371);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,1.051834);
   hNCinFV_stack_11->SetBinContent(2,5.339193);
   hNCinFV_stack_11->SetBinContent(3,6.960666);
   hNCinFV_stack_11->SetBinContent(4,3.280917);
   hNCinFV_stack_11->SetBinContent(5,2.241078);
   hNCinFV_stack_11->SetBinContent(6,2.944275);
   hNCinFV_stack_11->SetBinContent(7,2.383178);
   hNCinFV_stack_11->SetBinContent(8,1.224857);
   hNCinFV_stack_11->SetBinContent(9,1.727133);
   hNCinFV_stack_11->SetBinContent(10,1.633577);
   hNCinFV_stack_11->SetBinContent(11,0.6464891);
   hNCinFV_stack_11->SetBinContent(12,1.007122);
   hNCinFV_stack_11->SetBinContent(13,0.4126766);
   hNCinFV_stack_11->SetBinContent(14,0.8426749);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.8662739);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.7054467);
   hNCinFV_stack_11->SetBinContent(25,0.1441633);
   hNCinFV_stack_11->SetBinContent(26,1.153861);
   hNCinFV_stack_11->SetBinError(1,0.5371924);
   hNCinFV_stack_11->SetBinError(2,1.090129);
   hNCinFV_stack_11->SetBinError(3,1.784289);
   hNCinFV_stack_11->SetBinError(4,0.8977647);
   hNCinFV_stack_11->SetBinError(5,0.6805686);
   hNCinFV_stack_11->SetBinError(6,0.7767391);
   hNCinFV_stack_11->SetBinError(7,0.6921454);
   hNCinFV_stack_11->SetBinError(8,0.5032704);
   hNCinFV_stack_11->SetBinError(9,0.7267186);
   hNCinFV_stack_11->SetBinError(10,0.7612012);
   hNCinFV_stack_11->SetBinError(11,0.376075);
   hNCinFV_stack_11->SetBinError(12,0.4556188);
   hNCinFV_stack_11->SetBinError(13,0.2922447);
   hNCinFV_stack_11->SetBinError(14,0.5209985);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.5962281);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.7054467);
   hNCinFV_stack_11->SetBinError(25,0.1441632);
   hNCinFV_stack_11->SetBinError(26,0.5625435);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,2.347775);
   hnumuCCinFV_stack_12->SetBinContent(2,10.48363);
   hnumuCCinFV_stack_12->SetBinContent(3,18.51029);
   hnumuCCinFV_stack_12->SetBinContent(4,20.65965);
   hnumuCCinFV_stack_12->SetBinContent(5,9.902354);
   hnumuCCinFV_stack_12->SetBinContent(6,9.248863);
   hnumuCCinFV_stack_12->SetBinContent(7,8.599808);
   hnumuCCinFV_stack_12->SetBinContent(8,6.185417);
   hnumuCCinFV_stack_12->SetBinContent(9,3.492992);
   hnumuCCinFV_stack_12->SetBinContent(10,2.744572);
   hnumuCCinFV_stack_12->SetBinContent(11,3.2415);
   hnumuCCinFV_stack_12->SetBinContent(12,1.966554);
   hnumuCCinFV_stack_12->SetBinContent(13,1.592111);
   hnumuCCinFV_stack_12->SetBinContent(14,0.8585797);
   hnumuCCinFV_stack_12->SetBinContent(15,1.123306);
   hnumuCCinFV_stack_12->SetBinContent(16,0.6597809);
   hnumuCCinFV_stack_12->SetBinContent(17,1.243706);
   hnumuCCinFV_stack_12->SetBinContent(18,0.8049626);
   hnumuCCinFV_stack_12->SetBinContent(19,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(20,0.9047427);
   hnumuCCinFV_stack_12->SetBinContent(21,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(22,0.4370442);
   hnumuCCinFV_stack_12->SetBinContent(23,0.631348);
   hnumuCCinFV_stack_12->SetBinContent(25,0.2487975);
   hnumuCCinFV_stack_12->SetBinContent(26,9.55552);
   hnumuCCinFV_stack_12->SetBinError(1,0.758848);
   hnumuCCinFV_stack_12->SetBinError(2,1.829737);
   hnumuCCinFV_stack_12->SetBinError(3,2.471796);
   hnumuCCinFV_stack_12->SetBinError(4,2.560921);
   hnumuCCinFV_stack_12->SetBinError(5,2.271361);
   hnumuCCinFV_stack_12->SetBinError(6,1.565603);
   hnumuCCinFV_stack_12->SetBinError(7,1.635976);
   hnumuCCinFV_stack_12->SetBinError(8,1.595835);
   hnumuCCinFV_stack_12->SetBinError(9,0.9963028);
   hnumuCCinFV_stack_12->SetBinError(10,0.8585797);
   hnumuCCinFV_stack_12->SetBinError(11,0.8859278);
   hnumuCCinFV_stack_12->SetBinError(12,0.7188546);
   hnumuCCinFV_stack_12->SetBinError(13,0.6153645);
   hnumuCCinFV_stack_12->SetBinError(14,0.512094);
   hnumuCCinFV_stack_12->SetBinError(15,0.5035942);
   hnumuCCinFV_stack_12->SetBinError(16,0.4874323);
   hnumuCCinFV_stack_12->SetBinError(17,0.5752585);
   hnumuCCinFV_stack_12->SetBinError(18,0.4974781);
   hnumuCCinFV_stack_12->SetBinError(19,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(20,0.5878817);
   hnumuCCinFV_stack_12->SetBinError(21,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(22,0.4370442);
   hnumuCCinFV_stack_12->SetBinError(23,0.366256);
   hnumuCCinFV_stack_12->SetBinError(25,0.2487975);
   hnumuCCinFV_stack_12->SetBinError(26,1.877776);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(5,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(6,0.7834804);
   hnueCCinFV_stack_13->SetBinContent(7,1.909863);
   hnueCCinFV_stack_13->SetBinContent(8,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.157431);
   hnueCCinFV_stack_13->SetBinContent(25,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(26,1.224403);
   hnueCCinFV_stack_13->SetBinError(5,0.3312651);
   hnueCCinFV_stack_13->SetBinError(6,0.3917439);
   hnueCCinFV_stack_13->SetBinError(7,1.606124);
   hnueCCinFV_stack_13->SetBinError(8,0.1529246);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,1.157431);
   hnueCCinFV_stack_13->SetBinError(25,0.3654046);
   hnueCCinFV_stack_13->SetBinError(26,0.5776938);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__26->SetBinContent(1,15.87365);
   hmcerror__26->SetBinContent(2,68.68109);
   hmcerror__26->SetBinContent(3,106.0019);
   hmcerror__26->SetBinContent(4,89.71758);
   hmcerror__26->SetBinContent(5,61.07402);
   hmcerror__26->SetBinContent(6,57.17883);
   hmcerror__26->SetBinContent(7,54.21224);
   hmcerror__26->SetBinContent(8,38.27269);
   hmcerror__26->SetBinContent(9,27.3126);
   hmcerror__26->SetBinContent(10,17.22602);
   hmcerror__26->SetBinContent(11,17.84284);
   hmcerror__26->SetBinContent(12,16.05943);
   hmcerror__26->SetBinContent(13,6.987032);
   hmcerror__26->SetBinContent(14,7.162359);
   hmcerror__26->SetBinContent(15,6.576911);
   hmcerror__26->SetBinContent(16,5.94101);
   hmcerror__26->SetBinContent(17,5.735476);
   hmcerror__26->SetBinContent(18,6.368869);
   hmcerror__26->SetBinContent(19,4.002453);
   hmcerror__26->SetBinContent(20,3.747554);
   hmcerror__26->SetBinContent(21,2.721593);
   hmcerror__26->SetBinContent(22,4.515761);
   hmcerror__26->SetBinContent(23,1.86562);
   hmcerror__26->SetBinContent(24,1.433663);
   hmcerror__26->SetBinContent(25,1.74702);
   hmcerror__26->SetBinContent(26,32.33089);
   hmcerror__26->SetBinError(1,9.118526);
   hmcerror__26->SetBinError(2,29.6796);
   hmcerror__26->SetBinError(3,32.47102);
   hmcerror__26->SetBinError(4,32.79592);
   hmcerror__26->SetBinError(5,24.61969);
   hmcerror__26->SetBinError(6,25.43927);
   hmcerror__26->SetBinError(7,21.711);
   hmcerror__26->SetBinError(8,19.30612);
   hmcerror__26->SetBinError(9,14.97429);
   hmcerror__26->SetBinError(10,9.99798);
   hmcerror__26->SetBinError(11,10.89259);
   hmcerror__26->SetBinError(12,8.642558);
   hmcerror__26->SetBinError(13,12.5681);
   hmcerror__26->SetBinError(14,14.67091);
   hmcerror__26->SetBinError(15,5.106794);
   hmcerror__26->SetBinError(16,6.262728);
   hmcerror__26->SetBinError(17,7.922334);
   hmcerror__26->SetBinError(18,9.10178);
   hmcerror__26->SetBinError(19,3.914159);
   hmcerror__26->SetBinError(20,5.706351);
   hmcerror__26->SetBinError(21,4.366844);
   hmcerror__26->SetBinError(22,8.104559);
   hmcerror__26->SetBinError(23,9.296336);
   hmcerror__26->SetBinError(24,10.60401);
   hmcerror__26->SetBinError(25,4.36674);
   hmcerror__26->SetBinError(26,17.98362);
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
   
   Double_t _fx3033[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3033[25] = {
   13,
   46,
   86,
   89,
   85,
   62,
   31,
   28,
   27,
   25,
   13,
   8,
   6,
   2,
   11,
   6,
   2,
   4,
   3,
   3,
   0,
   0,
   2,
   1,
   2};
   Double_t _felx3033[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3033[25] = {
   3.77763,
   6.9153,
   9.3967,
   9.5566,
   9.3428,
   8.0018,
   5.7094,
   5.4358,
   5.3414,
   5.1474,
   3.77763,
   3.0307,
   2.67925,
   2,
   3.4975,
   2.67925,
   2,
   2.29683,
   2.143368,
   2.143368,
   0,
   0,
   2,
   1,
   2};
   Double_t _fehx3033[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3033[25] = {
   3.5552,
   6.7108,
   9.1951,
   9.3552,
   9.1411,
   7.7989,
   5.5017,
   5.2271,
   5.1322,
   4.9374,
   3.5552,
   2.7896,
   2.41858,
   1.51917,
   3.27,
   2.41858,
   1.51917,
   1.98186,
   1.72422,
   1.72422,
   1.1478,
   1.1478,
   1.51917,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1650);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(108.1907);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 555.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 86.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 109.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  100.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  31.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 126.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 106.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3034[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3034[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3034[25] = {
   0.5744441,
   0.4321364,
   0.3063247,
   0.3655462,
   0.4031124,
   0.4449072,
   0.4004815,
   0.504436,
   0.5482556,
   0.5803998,
   0.6104742,
   0.5381609,
   1.798776,
   2.048335,
   0.776473,
   1.054152,
   1.381286,
   1.429105,
   0.97794,
   1.522687,
   1.604518,
   1.794727,
   4.982973,
   7.396444,
   2.499537};
   Double_t _fehx3034[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3034[25] = {
   0.5744441,
   0.4321364,
   0.3063247,
   0.3655462,
   0.4031124,
   0.4449072,
   0.4004815,
   0.504436,
   0.5482556,
   0.5803998,
   0.6104742,
   0.5381609,
   1.798776,
   2.048335,
   0.776473,
   1.054152,
   1.381286,
   1.429105,
   0.97794,
   1.522687,
   1.604518,
   1.794727,
   4.982973,
   7.396444,
   2.499537};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1650);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3035[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3035[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3035[25] = {
   0.2197847,
   0.245576,
   0.2506894,
   0.2876212,
   0.3113949,
   0.324185,
   0.2810932,
   0.267874,
   0.2523613,
   0.2947852,
   0.2432065,
   0.2155434,
   0.2925195,
   0.3816933,
   0.3050649,
   0.3316422,
   0.3065206,
   0.3053452,
   0.3533016,
   0.3796869,
   0.5310075,
   1.083863,
   0.5713123,
   0.7711596,
   0.5940196};
   Double_t _fehx3035[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3035[25] = {
   0.2197847,
   0.245576,
   0.2506894,
   0.2876212,
   0.3113949,
   0.324185,
   0.2810932,
   0.267874,
   0.2523613,
   0.2947852,
   0.2432065,
   0.2155434,
   0.2925195,
   0.3816933,
   0.3050649,
   0.3316422,
   0.3065206,
   0.3053452,
   0.3533016,
   0.3796869,
   0.5310075,
   1.083863,
   0.5713123,
   0.7711596,
   0.5940196};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1650);
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
   
   Double_t _fx3036[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3036[25] = {
   0.8189671,
   0.6697622,
   0.8113059,
   0.9920018,
   1.391754,
   1.084317,
   0.5718266,
   0.7315921,
   0.9885548,
   1.451293,
   0.7285836,
   0.4981496,
   0.8587337,
   0.2792376,
   1.672518,
   1.009929,
   0.3487069,
   0.628055,
   0.7495403,
   0.8005221,
   0,
   0,
   1.072029,
   0.6975139,
   1.144807};
   Double_t _felx3036[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3036[25] = {
   0.2379811,
   0.1006871,
   0.08864649,
   0.1065187,
   0.152975,
   0.1399434,
   0.1053157,
   0.1420282,
   0.1955654,
   0.2988153,
   0.2117169,
   0.1887177,
   0.3834604,
   0.2792376,
   0.5317846,
   0.4509755,
   0.3487069,
   0.3606339,
   0.5355136,
   0.5719378,
   0,
   0,
   1.072029,
   0.6975139,
   1.144807};
   Double_t _fehx3036[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3036[25] = {
   0.2239686,
   0.09770957,
   0.08674464,
   0.1042739,
   0.1496725,
   0.1363949,
   0.1014845,
   0.1365752,
   0.187906,
   0.2866245,
   0.1992508,
   0.1737048,
   0.3461527,
   0.2121047,
   0.4971939,
   0.4070991,
   0.2648725,
   0.3111793,
   0.4307908,
   0.4600921,
   0.4217383,
   0.2541764,
   0.8142974,
   0.9484166,
   0.8695781};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1650);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.386683);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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

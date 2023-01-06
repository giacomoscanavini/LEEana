#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 21:57:09 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",138,161,1200,900);
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
   pad1->Range(-7.692308,-7.155464,56.41026,791.2437);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__13->SetBinContent(1,357.7732);
   hmc__13->SetBinContent(2,130.8797);
   hmc__13->SetBinContent(3,147.8008);
   hmc__13->SetBinContent(4,160.9382);
   hmc__13->SetBinContent(5,154.6069);
   hmc__13->SetBinContent(6,133.7722);
   hmc__13->SetBinContent(7,143.2123);
   hmc__13->SetBinContent(8,137.0381);
   hmc__13->SetBinContent(9,124.8229);
   hmc__13->SetBinContent(10,125.0869);
   hmc__13->SetBinContent(11,104.2377);
   hmc__13->SetBinContent(12,90.42934);
   hmc__13->SetBinContent(13,82.03805);
   hmc__13->SetBinContent(14,91.4054);
   hmc__13->SetBinContent(15,73.9706);
   hmc__13->SetBinContent(16,65.54671);
   hmc__13->SetBinContent(17,66.80177);
   hmc__13->SetBinContent(18,56.7543);
   hmc__13->SetBinContent(19,54.13115);
   hmc__13->SetBinContent(20,55.88269);
   hmc__13->SetBinContent(21,692.5167);
   hmc__13->SetBinError(1,101.8858);
   hmc__13->SetBinError(2,68.36166);
   hmc__13->SetBinError(3,62.27447);
   hmc__13->SetBinError(4,60.57845);
   hmc__13->SetBinError(5,64.08483);
   hmc__13->SetBinError(6,55.02218);
   hmc__13->SetBinError(7,57.81321);
   hmc__13->SetBinError(8,55.70965);
   hmc__13->SetBinError(9,46.89523);
   hmc__13->SetBinError(10,46.81289);
   hmc__13->SetBinError(11,41.42806);
   hmc__13->SetBinError(12,48.46552);
   hmc__13->SetBinError(13,32.1808);
   hmc__13->SetBinError(14,32.22269);
   hmc__13->SetBinError(15,28.88234);
   hmc__13->SetBinError(16,27.82136);
   hmc__13->SetBinError(17,25.93817);
   hmc__13->SetBinError(18,21.36201);
   hmc__13->SetBinError(19,20.85977);
   hmc__13->SetBinError(20,23.72142);
   hmc__13->SetBinError(21,189.8172);
   hmc__13->SetMinimum(-7.155464);
   hmc__13->SetMaximum(751.3237);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,50);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(375.6619);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,10.38103);
   hbadmatch_stack_1->SetBinContent(2,1.72168);
   hbadmatch_stack_1->SetBinContent(3,2.957557);
   hbadmatch_stack_1->SetBinContent(4,3.350985);
   hbadmatch_stack_1->SetBinContent(5,3.285806);
   hbadmatch_stack_1->SetBinContent(6,4.816103);
   hbadmatch_stack_1->SetBinContent(7,2.462305);
   hbadmatch_stack_1->SetBinContent(8,0.3917402);
   hbadmatch_stack_1->SetBinContent(9,2.699536);
   hbadmatch_stack_1->SetBinContent(10,2.274305);
   hbadmatch_stack_1->SetBinContent(11,1.437038);
   hbadmatch_stack_1->SetBinContent(12,1.579226);
   hbadmatch_stack_1->SetBinContent(13,1.140852);
   hbadmatch_stack_1->SetBinContent(14,1.858326);
   hbadmatch_stack_1->SetBinContent(15,1.10938);
   hbadmatch_stack_1->SetBinContent(16,1.53474);
   hbadmatch_stack_1->SetBinContent(17,2.998145);
   hbadmatch_stack_1->SetBinContent(18,1.357739);
   hbadmatch_stack_1->SetBinContent(19,1.619265);
   hbadmatch_stack_1->SetBinContent(20,0.8707446);
   hbadmatch_stack_1->SetBinContent(21,26.02831);
   hbadmatch_stack_1->SetBinError(1,1.843459);
   hbadmatch_stack_1->SetBinError(2,0.5567624);
   hbadmatch_stack_1->SetBinError(3,0.8847715);
   hbadmatch_stack_1->SetBinError(4,0.8815716);
   hbadmatch_stack_1->SetBinError(5,1.31357);
   hbadmatch_stack_1->SetBinError(6,2.095599);
   hbadmatch_stack_1->SetBinError(7,0.8981852);
   hbadmatch_stack_1->SetBinError(8,0.2770047);
   hbadmatch_stack_1->SetBinError(9,0.8384866);
   hbadmatch_stack_1->SetBinError(10,0.724038);
   hbadmatch_stack_1->SetBinError(11,0.5987228);
   hbadmatch_stack_1->SetBinError(12,0.6548909);
   hbadmatch_stack_1->SetBinError(13,0.4732715);
   hbadmatch_stack_1->SetBinError(14,0.7512422);
   hbadmatch_stack_1->SetBinError(15,0.5352349);
   hbadmatch_stack_1->SetBinError(16,0.5757717);
   hbadmatch_stack_1->SetBinError(17,1.014077);
   hbadmatch_stack_1->SetBinError(18,0.7077993);
   hbadmatch_stack_1->SetBinError(19,0.5546177);
   hbadmatch_stack_1->SetBinError(20,0.3978309);
   hbadmatch_stack_1->SetBinError(21,2.759886);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,35.73971);
   hext_stack_2->SetBinContent(2,8.870096);
   hext_stack_2->SetBinContent(3,7.683431);
   hext_stack_2->SetBinContent(4,11.85033);
   hext_stack_2->SetBinContent(5,8.600371);
   hext_stack_2->SetBinContent(6,8.339405);
   hext_stack_2->SetBinContent(7,11.01401);
   hext_stack_2->SetBinContent(8,11.36871);
   hext_stack_2->SetBinContent(9,13.86733);
   hext_stack_2->SetBinContent(10,11.76095);
   hext_stack_2->SetBinContent(11,10.34645);
   hext_stack_2->SetBinContent(12,3.64062);
   hext_stack_2->SetBinContent(13,7.918446);
   hext_stack_2->SetBinContent(14,14.17018);
   hext_stack_2->SetBinContent(15,6.534245);
   hext_stack_2->SetBinContent(16,4.225983);
   hext_stack_2->SetBinContent(17,9.138242);
   hext_stack_2->SetBinContent(18,4.696014);
   hext_stack_2->SetBinContent(19,4.460999);
   hext_stack_2->SetBinContent(20,8.299094);
   hext_stack_2->SetBinContent(21,74.36876);
   hext_stack_2->SetBinError(1,4.258086);
   hext_stack_2->SetBinError(2,2.169382);
   hext_stack_2->SetBinError(3,1.88164);
   hext_stack_2->SetBinError(4,2.513368);
   hext_stack_2->SetBinError(5,1.824198);
   hext_stack_2->SetBinError(6,1.884101);
   hext_stack_2->SetBinError(7,2.188177);
   hext_stack_2->SetBinError(8,2.427015);
   hext_stack_2->SetBinError(9,2.659809);
   hext_stack_2->SetBinError(10,2.541285);
   hext_stack_2->SetBinError(11,2.20112);
   hext_stack_2->SetBinError(12,1.324834);
   hext_stack_2->SetBinError(13,1.946);
   hext_stack_2->SetBinError(14,2.789879);
   hext_stack_2->SetBinError(15,1.780665);
   hext_stack_2->SetBinError(16,1.279954);
   hext_stack_2->SetBinError(17,2.069513);
   hext_stack_2->SetBinError(18,1.459786);
   hext_stack_2->SetBinError(19,1.372818);
   hext_stack_2->SetBinError(20,2.102551);
   hext_stack_2->SetBinError(21,5.906118);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,2.265417);
   hdirt_stack_3->SetBinContent(2,0.7006109);
   hdirt_stack_3->SetBinContent(3,0.3381872);
   hdirt_stack_3->SetBinContent(4,0.6338169);
   hdirt_stack_3->SetBinContent(5,0.8042576);
   hdirt_stack_3->SetBinContent(6,1.06838);
   hdirt_stack_3->SetBinContent(7,0.6397168);
   hdirt_stack_3->SetBinContent(8,0.9403316);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.31339);
   hdirt_stack_3->SetBinContent(12,0.7466499);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.00255526);
   hdirt_stack_3->SetBinContent(19,0.3569671);
   hdirt_stack_3->SetBinContent(20,0.3569671);
   hdirt_stack_3->SetBinContent(21,5.339596);
   hdirt_stack_3->SetBinError(1,0.7494029);
   hdirt_stack_3->SetBinError(2,0.4060847);
   hdirt_stack_3->SetBinError(3,0.3381872);
   hdirt_stack_3->SetBinError(4,0.4691215);
   hdirt_stack_3->SetBinError(5,0.5063113);
   hdirt_stack_3->SetBinError(6,0.9404988);
   hdirt_stack_3->SetBinError(7,0.3270696);
   hdirt_stack_3->SetBinError(8,0.5220551);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2231598);
   hdirt_stack_3->SetBinError(12,0.3864596);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.00255526);
   hdirt_stack_3->SetBinError(19,0.258803);
   hdirt_stack_3->SetBinError(20,0.258803);
   hdirt_stack_3->SetBinError(21,1.225189);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,29.1212);
   houtFV_stack_4->SetBinContent(2,6.801924);
   houtFV_stack_4->SetBinContent(3,8.690132);
   houtFV_stack_4->SetBinContent(4,9.477037);
   houtFV_stack_4->SetBinContent(5,6.74461);
   houtFV_stack_4->SetBinContent(6,7.237383);
   houtFV_stack_4->SetBinContent(7,7.987932);
   houtFV_stack_4->SetBinContent(8,7.97345);
   houtFV_stack_4->SetBinContent(9,8.183683);
   houtFV_stack_4->SetBinContent(10,6.072474);
   houtFV_stack_4->SetBinContent(11,6.684876);
   houtFV_stack_4->SetBinContent(12,8.341309);
   houtFV_stack_4->SetBinContent(13,4.587905);
   houtFV_stack_4->SetBinContent(14,4.581836);
   houtFV_stack_4->SetBinContent(15,5.742639);
   houtFV_stack_4->SetBinContent(16,5.178242);
   houtFV_stack_4->SetBinContent(17,6.109429);
   houtFV_stack_4->SetBinContent(18,3.702781);
   houtFV_stack_4->SetBinContent(19,5.612781);
   houtFV_stack_4->SetBinContent(20,3.441471);
   houtFV_stack_4->SetBinContent(21,50.79652);
   houtFV_stack_4->SetBinError(1,2.719041);
   houtFV_stack_4->SetBinError(2,1.232281);
   houtFV_stack_4->SetBinError(3,1.430693);
   houtFV_stack_4->SetBinError(4,1.650427);
   houtFV_stack_4->SetBinError(5,1.19079);
   houtFV_stack_4->SetBinError(6,1.346018);
   houtFV_stack_4->SetBinError(7,1.554149);
   houtFV_stack_4->SetBinError(8,1.375197);
   houtFV_stack_4->SetBinError(9,1.414921);
   houtFV_stack_4->SetBinError(10,1.162692);
   houtFV_stack_4->SetBinError(11,1.346356);
   houtFV_stack_4->SetBinError(12,1.503547);
   houtFV_stack_4->SetBinError(13,1.149465);
   houtFV_stack_4->SetBinError(14,1.121378);
   houtFV_stack_4->SetBinError(15,1.249207);
   houtFV_stack_4->SetBinError(16,1.125278);
   houtFV_stack_4->SetBinError(17,1.334442);
   houtFV_stack_4->SetBinError(18,0.9321157);
   houtFV_stack_4->SetBinError(19,1.151062);
   houtFV_stack_4->SetBinError(20,0.9388119);
   houtFV_stack_4->SetBinError(21,3.537572);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.7299777);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.06722306);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2069708);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5789444);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2713297);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.06912473);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3078786);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2323013);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3243763);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2598575);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.0567921);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05652677);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1123544);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08160993);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.061669);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2638783);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04769181);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1589233);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2558961);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1094874);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04959411);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1666755);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1973617);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.258055);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1894463);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.0401642);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03997376);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.06591418);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.0605241);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.437992);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.03376);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3829521);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.549598);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5280916);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.243457);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4413615);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6417878);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3961138);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2638509);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4352134);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2706303);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.440039);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5542521);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2162175);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5101862);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4564325);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1885241);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4079788);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.208807);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1305431);
   hNCpi0inFVqe_stack_6->SetBinContent(21,2.520504);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2599923);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1100416);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1776728);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.122288);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.349103);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1886181);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2136819);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.155911);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08762232);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.13861);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1328163);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1975601);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2320279);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1372872);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2047941);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2499437);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07866535);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1586556);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1430441);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05717208);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.512349);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,81.2956);
   hNCpi0inFVres_stack_7->SetBinContent(2,56.92319);
   hNCpi0inFVres_stack_7->SetBinContent(3,61.30763);
   hNCpi0inFVres_stack_7->SetBinContent(4,58.52927);
   hNCpi0inFVres_stack_7->SetBinContent(5,59.396);
   hNCpi0inFVres_stack_7->SetBinContent(6,52.05856);
   hNCpi0inFVres_stack_7->SetBinContent(7,51.43913);
   hNCpi0inFVres_stack_7->SetBinContent(8,49.40049);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.83717);
   hNCpi0inFVres_stack_7->SetBinContent(10,43.46101);
   hNCpi0inFVres_stack_7->SetBinContent(11,36.23978);
   hNCpi0inFVres_stack_7->SetBinContent(12,35.55518);
   hNCpi0inFVres_stack_7->SetBinContent(13,30.33676);
   hNCpi0inFVres_stack_7->SetBinContent(14,29.15144);
   hNCpi0inFVres_stack_7->SetBinContent(15,26.99718);
   hNCpi0inFVres_stack_7->SetBinContent(16,22.70576);
   hNCpi0inFVres_stack_7->SetBinContent(17,21.45157);
   hNCpi0inFVres_stack_7->SetBinContent(18,21.55024);
   hNCpi0inFVres_stack_7->SetBinContent(19,18.61227);
   hNCpi0inFVres_stack_7->SetBinContent(20,18.61593);
   hNCpi0inFVres_stack_7->SetBinContent(21,194.8082);
   hNCpi0inFVres_stack_7->SetBinError(1,2.710476);
   hNCpi0inFVres_stack_7->SetBinError(2,2.231001);
   hNCpi0inFVres_stack_7->SetBinError(3,2.31575);
   hNCpi0inFVres_stack_7->SetBinError(4,2.22323);
   hNCpi0inFVres_stack_7->SetBinError(5,2.332805);
   hNCpi0inFVres_stack_7->SetBinError(6,2.044711);
   hNCpi0inFVres_stack_7->SetBinError(7,2.073247);
   hNCpi0inFVres_stack_7->SetBinError(8,2.064722);
   hNCpi0inFVres_stack_7->SetBinError(9,2.136518);
   hNCpi0inFVres_stack_7->SetBinError(10,2.000416);
   hNCpi0inFVres_stack_7->SetBinError(11,1.75021);
   hNCpi0inFVres_stack_7->SetBinError(12,1.825267);
   hNCpi0inFVres_stack_7->SetBinError(13,1.652838);
   hNCpi0inFVres_stack_7->SetBinError(14,1.542836);
   hNCpi0inFVres_stack_7->SetBinError(15,1.717819);
   hNCpi0inFVres_stack_7->SetBinError(16,1.459261);
   hNCpi0inFVres_stack_7->SetBinError(17,1.381304);
   hNCpi0inFVres_stack_7->SetBinError(18,1.677694);
   hNCpi0inFVres_stack_7->SetBinError(19,1.331235);
   hNCpi0inFVres_stack_7->SetBinError(20,1.381372);
   hNCpi0inFVres_stack_7->SetBinError(21,4.502222);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,17.56546);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.06839);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.6419);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.31255);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.11133);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.43127);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.11691);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.51012);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.11347);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.33772);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.975114);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.597146);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.740582);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.140495);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.64671);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.681855);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.776205);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.874937);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.458208);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.90252);
   hNCpi0inFVdis_stack_8->SetBinContent(21,49.49574);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.255013);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.126656);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.034577);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.119001);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.384292);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.137725);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.1723);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.057424);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.000866);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.208168);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7766554);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.187919);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9094454);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.069958);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.249853);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8790554);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7159877);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.784153);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8584237);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6199359);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.479038);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2929012);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1506296);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01413798);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05214635);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03399719);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1581319);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1714955);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1331511);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.009997063);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.030178);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02411083);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.07758017);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,61.79549);
   hCCpi0inFV_stack_10->SetBinContent(2,19.56132);
   hCCpi0inFV_stack_10->SetBinContent(3,28.9193);
   hCCpi0inFV_stack_10->SetBinContent(4,33.50148);
   hCCpi0inFV_stack_10->SetBinContent(5,27.48174);
   hCCpi0inFV_stack_10->SetBinContent(6,25.64798);
   hCCpi0inFV_stack_10->SetBinContent(7,26.77737);
   hCCpi0inFV_stack_10->SetBinContent(8,30.94427);
   hCCpi0inFV_stack_10->SetBinContent(9,18.95998);
   hCCpi0inFV_stack_10->SetBinContent(10,24.79894);
   hCCpi0inFV_stack_10->SetBinContent(11,21.48674);
   hCCpi0inFV_stack_10->SetBinContent(12,16.49221);
   hCCpi0inFV_stack_10->SetBinContent(13,12.47365);
   hCCpi0inFV_stack_10->SetBinContent(14,18.67192);
   hCCpi0inFV_stack_10->SetBinContent(15,10.55091);
   hCCpi0inFV_stack_10->SetBinContent(16,11.61384);
   hCCpi0inFV_stack_10->SetBinContent(17,8.987669);
   hCCpi0inFV_stack_10->SetBinContent(18,8.214236);
   hCCpi0inFV_stack_10->SetBinContent(19,8.803141);
   hCCpi0inFV_stack_10->SetBinContent(20,8.584064);
   hCCpi0inFV_stack_10->SetBinContent(21,91.62607);
   hCCpi0inFV_stack_10->SetBinError(1,3.940148);
   hCCpi0inFV_stack_10->SetBinError(2,2.213907);
   hCCpi0inFV_stack_10->SetBinError(3,2.738134);
   hCCpi0inFV_stack_10->SetBinError(4,2.895119);
   hCCpi0inFV_stack_10->SetBinError(5,2.621697);
   hCCpi0inFV_stack_10->SetBinError(6,2.582554);
   hCCpi0inFV_stack_10->SetBinError(7,2.611697);
   hCCpi0inFV_stack_10->SetBinError(8,2.862404);
   hCCpi0inFV_stack_10->SetBinError(9,2.123863);
   hCCpi0inFV_stack_10->SetBinError(10,2.424796);
   hCCpi0inFV_stack_10->SetBinError(11,2.407366);
   hCCpi0inFV_stack_10->SetBinError(12,2.053813);
   hCCpi0inFV_stack_10->SetBinError(13,1.773876);
   hCCpi0inFV_stack_10->SetBinError(14,2.208015);
   hCCpi0inFV_stack_10->SetBinError(15,1.587135);
   hCCpi0inFV_stack_10->SetBinError(16,1.680298);
   hCCpi0inFV_stack_10->SetBinError(17,1.559211);
   hCCpi0inFV_stack_10->SetBinError(18,1.415387);
   hCCpi0inFV_stack_10->SetBinError(19,1.455366);
   hCCpi0inFV_stack_10->SetBinError(20,1.455572);
   hCCpi0inFV_stack_10->SetBinError(21,4.792426);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,28.27818);
   hNCinFV_stack_11->SetBinContent(2,11.512);
   hNCinFV_stack_11->SetBinContent(3,14.48187);
   hNCinFV_stack_11->SetBinContent(4,14.72567);
   hNCinFV_stack_11->SetBinContent(5,15.83685);
   hNCinFV_stack_11->SetBinContent(6,13.28116);
   hNCinFV_stack_11->SetBinContent(7,17.47696);
   hNCinFV_stack_11->SetBinContent(8,11.76023);
   hNCinFV_stack_11->SetBinContent(9,12.32177);
   hNCinFV_stack_11->SetBinContent(10,11.89118);
   hNCinFV_stack_11->SetBinContent(11,10.82737);
   hNCinFV_stack_11->SetBinContent(12,7.279399);
   hNCinFV_stack_11->SetBinContent(13,8.860045);
   hNCinFV_stack_11->SetBinContent(14,5.380884);
   hNCinFV_stack_11->SetBinContent(15,5.28128);
   hNCinFV_stack_11->SetBinContent(16,7.61448);
   hNCinFV_stack_11->SetBinContent(17,4.410479);
   hNCinFV_stack_11->SetBinContent(18,5.316562);
   hNCinFV_stack_11->SetBinContent(19,4.105492);
   hNCinFV_stack_11->SetBinContent(20,4.208449);
   hNCinFV_stack_11->SetBinContent(21,68.56483);
   hNCinFV_stack_11->SetBinError(1,2.942465);
   hNCinFV_stack_11->SetBinError(2,1.63917);
   hNCinFV_stack_11->SetBinError(3,1.971268);
   hNCinFV_stack_11->SetBinError(4,2.112956);
   hNCinFV_stack_11->SetBinError(5,2.149612);
   hNCinFV_stack_11->SetBinError(6,2.034714);
   hNCinFV_stack_11->SetBinError(7,2.719158);
   hNCinFV_stack_11->SetBinError(8,2.096418);
   hNCinFV_stack_11->SetBinError(9,1.988974);
   hNCinFV_stack_11->SetBinError(10,1.883735);
   hNCinFV_stack_11->SetBinError(11,1.949993);
   hNCinFV_stack_11->SetBinError(12,1.429339);
   hNCinFV_stack_11->SetBinError(13,1.612296);
   hNCinFV_stack_11->SetBinError(14,1.152523);
   hNCinFV_stack_11->SetBinError(15,1.305272);
   hNCinFV_stack_11->SetBinError(16,1.493898);
   hNCinFV_stack_11->SetBinError(17,1.08812);
   hNCinFV_stack_11->SetBinError(18,1.216874);
   hNCinFV_stack_11->SetBinError(19,1.115458);
   hNCinFV_stack_11->SetBinError(20,1.18281);
   hNCinFV_stack_11->SetBinError(21,4.475118);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,87.64875);
   hnumuCCinFV_stack_12->SetBinContent(2,12.48126);
   hnumuCCinFV_stack_12->SetBinContent(3,12.02174);
   hnumuCCinFV_stack_12->SetBinContent(4,15.56768);
   hnumuCCinFV_stack_12->SetBinContent(5,15.50378);
   hnumuCCinFV_stack_12->SetBinContent(6,8.578703);
   hnumuCCinFV_stack_12->SetBinContent(7,12.02896);
   hnumuCCinFV_stack_12->SetBinContent(8,12.06927);
   hnumuCCinFV_stack_12->SetBinContent(9,9.361772);
   hnumuCCinFV_stack_12->SetBinContent(10,12.45526);
   hnumuCCinFV_stack_12->SetBinContent(11,9.436125);
   hnumuCCinFV_stack_12->SetBinContent(12,7.248837);
   hnumuCCinFV_stack_12->SetBinContent(13,7.376144);
   hnumuCCinFV_stack_12->SetBinContent(14,8.218031);
   hnumuCCinFV_stack_12->SetBinContent(15,8.092667);
   hnumuCCinFV_stack_12->SetBinContent(16,6.158565);
   hnumuCCinFV_stack_12->SetBinContent(17,8.590741);
   hnumuCCinFV_stack_12->SetBinContent(18,6.042846);
   hnumuCCinFV_stack_12->SetBinContent(19,5.584145);
   hnumuCCinFV_stack_12->SetBinContent(20,7.196272);
   hnumuCCinFV_stack_12->SetBinContent(21,115.0437);
   hnumuCCinFV_stack_12->SetBinError(1,5.72056);
   hnumuCCinFV_stack_12->SetBinError(2,1.88763);
   hnumuCCinFV_stack_12->SetBinError(3,1.906608);
   hnumuCCinFV_stack_12->SetBinError(4,2.372872);
   hnumuCCinFV_stack_12->SetBinError(5,2.444457);
   hnumuCCinFV_stack_12->SetBinError(6,1.450153);
   hnumuCCinFV_stack_12->SetBinError(7,1.908015);
   hnumuCCinFV_stack_12->SetBinError(8,1.875742);
   hnumuCCinFV_stack_12->SetBinError(9,1.60417);
   hnumuCCinFV_stack_12->SetBinError(10,2.266466);
   hnumuCCinFV_stack_12->SetBinError(11,1.566739);
   hnumuCCinFV_stack_12->SetBinError(12,1.365294);
   hnumuCCinFV_stack_12->SetBinError(13,1.419185);
   hnumuCCinFV_stack_12->SetBinError(14,1.546097);
   hnumuCCinFV_stack_12->SetBinError(15,1.512456);
   hnumuCCinFV_stack_12->SetBinError(16,1.676779);
   hnumuCCinFV_stack_12->SetBinError(17,1.566004);
   hnumuCCinFV_stack_12->SetBinError(18,1.384648);
   hnumuCCinFV_stack_12->SetBinError(19,1.204942);
   hnumuCCinFV_stack_12->SetBinError(20,1.992502);
   hnumuCCinFV_stack_12->SetBinError(21,6.391225);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,1.858186);
   hnueCCinFV_stack_13->SetBinContent(2,0.7890683);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.1953927);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,1.035766);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.9926134);
   hnueCCinFV_stack_13->SetBinContent(14,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.5807405);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,11.70463);
   hnueCCinFV_stack_13->SetBinError(1,0.8777648);
   hnueCCinFV_stack_13->SetBinError(2,0.4671225);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.1950252);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.5280682);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.5089633);
   hnueCCinFV_stack_13->SetBinError(14,0.2770047);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3389978);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,2.522637);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__14->SetBinContent(1,357.7732);
   hmcerror__14->SetBinContent(2,130.8797);
   hmcerror__14->SetBinContent(3,147.8008);
   hmcerror__14->SetBinContent(4,160.9382);
   hmcerror__14->SetBinContent(5,154.6069);
   hmcerror__14->SetBinContent(6,133.7722);
   hmcerror__14->SetBinContent(7,143.2123);
   hmcerror__14->SetBinContent(8,137.0381);
   hmcerror__14->SetBinContent(9,124.8229);
   hmcerror__14->SetBinContent(10,125.0869);
   hmcerror__14->SetBinContent(11,104.2377);
   hmcerror__14->SetBinContent(12,90.42934);
   hmcerror__14->SetBinContent(13,82.03805);
   hmcerror__14->SetBinContent(14,91.4054);
   hmcerror__14->SetBinContent(15,73.9706);
   hmcerror__14->SetBinContent(16,65.54671);
   hmcerror__14->SetBinContent(17,66.80177);
   hmcerror__14->SetBinContent(18,56.7543);
   hmcerror__14->SetBinContent(19,54.13115);
   hmcerror__14->SetBinContent(20,55.88269);
   hmcerror__14->SetBinContent(21,692.5167);
   hmcerror__14->SetBinError(1,101.8858);
   hmcerror__14->SetBinError(2,68.36166);
   hmcerror__14->SetBinError(3,62.27447);
   hmcerror__14->SetBinError(4,60.57845);
   hmcerror__14->SetBinError(5,64.08483);
   hmcerror__14->SetBinError(6,55.02218);
   hmcerror__14->SetBinError(7,57.81321);
   hmcerror__14->SetBinError(8,55.70965);
   hmcerror__14->SetBinError(9,46.89523);
   hmcerror__14->SetBinError(10,46.81289);
   hmcerror__14->SetBinError(11,41.42806);
   hmcerror__14->SetBinError(12,48.46552);
   hmcerror__14->SetBinError(13,32.1808);
   hmcerror__14->SetBinError(14,32.22269);
   hmcerror__14->SetBinError(15,28.88234);
   hmcerror__14->SetBinError(16,27.82136);
   hmcerror__14->SetBinError(17,25.93817);
   hmcerror__14->SetBinError(18,21.36201);
   hmcerror__14->SetBinError(19,20.85977);
   hmcerror__14->SetBinError(20,23.72142);
   hmcerror__14->SetBinError(21,189.8172);
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
   
   Double_t _fx3017[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3017[20] = {
   327,
   115,
   127,
   139,
   119,
   156,
   143,
   111,
   100,
   105,
   89,
   78,
   62,
   72,
   61,
   65,
   57,
   54,
   52,
   44};
   Double_t _felx3017[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3017[20] = {
   18.08314,
   10.72381,
   11.26943,
   11.78983,
   10.90871,
   12.49,
   11.95826,
   10.53565,
   10.1212,
   10.24695,
   9.5566,
   8.9562,
   8.0018,
   8.6108,
   7.9383,
   8.1893,
   7.679,
   7.4785,
   7.3419,
   6.7671};
   Double_t _fehx3017[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3017[20] = {
   18.08314,
   10.72381,
   11.26943,
   11.78983,
   10.90871,
   12.49,
   11.95826,
   10.53565,
   9.92,
   10.24695,
   9.3552,
   8.7542,
   7.7989,
   8.4085,
   7.7354,
   7.9866,
   7.4757,
   7.275,
   7.1381,
   6.5623};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,55);
   Graph_Graph3017->SetMinimum(6.447876);
   Graph_Graph3017->SetMaximum(375.8682);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2076.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 49.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 202.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 10.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 152.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  3.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  9.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  822.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  186.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 424.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 214.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 271.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3018[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3018[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3018[20] = {
   0.2847775,
   0.5223243,
   0.4213407,
   0.3764083,
   0.4145016,
   0.4113127,
   0.4036889,
   0.4065269,
   0.3756942,
   0.3742429,
   0.3974385,
   0.535949,
   0.3922668,
   0.352525,
   0.390457,
   0.424451,
   0.3882857,
   0.3763946,
   0.3853561,
   0.4244861};
   Double_t _fehx3018[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3018[20] = {
   0.2847775,
   0.5223243,
   0.4213407,
   0.3764083,
   0.4145016,
   0.4113127,
   0.4036889,
   0.4065269,
   0.3756942,
   0.3742429,
   0.3974385,
   0.535949,
   0.3922668,
   0.352525,
   0.390457,
   0.424451,
   0.3882857,
   0.3763946,
   0.3853561,
   0.4244861};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,55);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3019[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3019[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3019[20] = {
   0.2510691,
   0.4346275,
   0.4038138,
   0.3605529,
   0.3660604,
   0.3903943,
   0.3435888,
   0.3567543,
   0.342758,
   0.3332102,
   0.3327678,
   0.3481685,
   0.3446572,
   0.3109277,
   0.3200398,
   0.334152,
   0.3046026,
   0.3179275,
   0.3307423,
   0.3323626};
   Double_t _fehx3019[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3019[20] = {
   0.2510691,
   0.4346275,
   0.4038138,
   0.3605529,
   0.3660604,
   0.3903943,
   0.3435888,
   0.3567543,
   0.342758,
   0.3332102,
   0.3327678,
   0.3481685,
   0.3446572,
   0.3109277,
   0.3200398,
   0.334152,
   0.3046026,
   0.3179275,
   0.3307423,
   0.3323626};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,55);
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
   
   Double_t _fx3020[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3020[20] = {
   0.9139869,
   0.8786694,
   0.8592649,
   0.8636858,
   0.7696937,
   1.166162,
   0.9985177,
   0.809994,
   0.8011353,
   0.8394163,
   0.8538181,
   0.8625519,
   0.7557469,
   0.7876997,
   0.8246519,
   0.9916593,
   0.8532709,
   0.9514698,
   0.96063,
   0.7873636};
   Double_t _felx3020[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3020[20] = {
   0.05054359,
   0.08193634,
   0.07624743,
   0.07325687,
   0.07055771,
   0.09336768,
   0.08350025,
   0.07688123,
   0.08108451,
   0.08191864,
   0.09168088,
   0.09904087,
   0.09753767,
   0.0942045,
   0.107317,
   0.1249384,
   0.1149521,
   0.1317698,
   0.1356317,
   0.1210947};
   Double_t _fehx3020[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3020[20] = {
   0.05054359,
   0.08193634,
   0.07624743,
   0.07325687,
   0.07055771,
   0.09336768,
   0.08350025,
   0.07688123,
   0.07947262,
   0.08191864,
   0.08974876,
   0.09680708,
   0.09506443,
   0.09199129,
   0.104574,
   0.1218459,
   0.1119087,
   0.1281841,
   0.1318668,
   0.1174299};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,55);
   Graph_Graph3020->SetMinimum(0.5980772);
   Graph_Graph3020->SetMaximum(1.319662);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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

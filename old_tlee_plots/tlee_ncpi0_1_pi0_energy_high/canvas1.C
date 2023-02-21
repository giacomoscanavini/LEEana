#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 18:31:52 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-19.9,676.9231,2200.521);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__1->SetBinContent(1,31.01636);
   hmc__1->SetBinContent(2,162.4703);
   hmc__1->SetBinContent(3,449.291);
   hmc__1->SetBinContent(4,786.955);
   hmc__1->SetBinContent(5,902.3969);
   hmc__1->SetBinContent(6,876.5833);
   hmc__1->SetBinContent(7,695.0291);
   hmc__1->SetBinContent(8,557.157);
   hmc__1->SetBinContent(9,462.3321);
   hmc__1->SetBinContent(10,359.8397);
   hmc__1->SetBinContent(11,290.1042);
   hmc__1->SetBinContent(12,222.4421);
   hmc__1->SetBinContent(13,157.9676);
   hmc__1->SetBinContent(14,143.7047);
   hmc__1->SetBinContent(15,107.493);
   hmc__1->SetBinContent(16,92.82785);
   hmc__1->SetBinContent(17,68.7254);
   hmc__1->SetBinContent(18,50.87779);
   hmc__1->SetBinContent(19,44.42032);
   hmc__1->SetBinContent(20,40.21844);
   hmc__1->SetBinContent(21,277.2506);
   hmc__1->SetBinError(1,13.92501);
   hmc__1->SetBinError(2,49.50946);
   hmc__1->SetBinError(3,116.614);
   hmc__1->SetBinError(4,216.1181);
   hmc__1->SetBinError(5,246.0617);
   hmc__1->SetBinError(6,232.6281);
   hmc__1->SetBinError(7,185.3782);
   hmc__1->SetBinError(8,151.0648);
   hmc__1->SetBinError(9,127.5212);
   hmc__1->SetBinError(10,102.3823);
   hmc__1->SetBinError(11,82.61747);
   hmc__1->SetBinError(12,66.3324);
   hmc__1->SetBinError(13,53.37104);
   hmc__1->SetBinError(14,45.21588);
   hmc__1->SetBinError(15,34.89058);
   hmc__1->SetBinError(16,30.40857);
   hmc__1->SetBinError(17,20.55089);
   hmc__1->SetBinError(18,22.42913);
   hmc__1->SetBinError(19,18.96572);
   hmc__1->SetBinError(20,18.17713);
   hmc__1->SetBinError(21,86.91033);
   hmc__1->SetMinimum(-19.9);
   hmc__1->SetMaximum(2089.5);
   hmc__1->SetEntries(7381.09);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,600);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(947.5167);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,3.242989);
   hbadmatch_stack_1->SetBinContent(2,11.0505);
   hbadmatch_stack_1->SetBinContent(3,20.46256);
   hbadmatch_stack_1->SetBinContent(4,24.07551);
   hbadmatch_stack_1->SetBinContent(5,26.4343);
   hbadmatch_stack_1->SetBinContent(6,25.98965);
   hbadmatch_stack_1->SetBinContent(7,23.71795);
   hbadmatch_stack_1->SetBinContent(8,11.63653);
   hbadmatch_stack_1->SetBinContent(9,3.917938);
   hbadmatch_stack_1->SetBinContent(10,7.267099);
   hbadmatch_stack_1->SetBinContent(11,3.213183);
   hbadmatch_stack_1->SetBinContent(12,1.895958);
   hbadmatch_stack_1->SetBinContent(13,1.801219);
   hbadmatch_stack_1->SetBinContent(14,0.6325768);
   hbadmatch_stack_1->SetBinContent(15,1.39619);
   hbadmatch_stack_1->SetBinContent(16,1.691733);
   hbadmatch_stack_1->SetBinContent(17,0.9610817);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,1.061845);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,2.277676);
   hbadmatch_stack_1->SetBinError(1,1.33767);
   hbadmatch_stack_1->SetBinError(2,1.908832);
   hbadmatch_stack_1->SetBinError(3,2.39895);
   hbadmatch_stack_1->SetBinError(4,2.416561);
   hbadmatch_stack_1->SetBinError(5,2.889877);
   hbadmatch_stack_1->SetBinError(6,2.73835);
   hbadmatch_stack_1->SetBinError(7,3.588164);
   hbadmatch_stack_1->SetBinError(8,1.787017);
   hbadmatch_stack_1->SetBinError(9,1.095227);
   hbadmatch_stack_1->SetBinError(10,2.091329);
   hbadmatch_stack_1->SetBinError(11,0.9967971);
   hbadmatch_stack_1->SetBinError(12,0.8537095);
   hbadmatch_stack_1->SetBinError(13,0.6510217);
   hbadmatch_stack_1->SetBinError(14,0.325806);
   hbadmatch_stack_1->SetBinError(15,0.5575744);
   hbadmatch_stack_1->SetBinError(16,0.7675554);
   hbadmatch_stack_1->SetBinError(17,0.4948321);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.5726863);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.8371222);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,9.683293);
   hext_stack_2->SetBinContent(2,39.03564);
   hext_stack_2->SetBinContent(3,83.05852);
   hext_stack_2->SetBinContent(4,110.8048);
   hext_stack_2->SetBinContent(5,123.0369);
   hext_stack_2->SetBinContent(6,113.4263);
   hext_stack_2->SetBinContent(7,77.06926);
   hext_stack_2->SetBinContent(8,43.14907);
   hext_stack_2->SetBinContent(9,46.71184);
   hext_stack_2->SetBinContent(10,30.49152);
   hext_stack_2->SetBinContent(11,21.40072);
   hext_stack_2->SetBinContent(12,11.83439);
   hext_stack_2->SetBinContent(13,8.799484);
   hext_stack_2->SetBinContent(14,6.082985);
   hext_stack_2->SetBinContent(15,7.344672);
   hext_stack_2->SetBinContent(16,3.241202);
   hext_stack_2->SetBinContent(17,4.752265);
   hext_stack_2->SetBinContent(18,2.192989);
   hext_stack_2->SetBinContent(19,0.9660115);
   hext_stack_2->SetBinContent(20,1.78639);
   hext_stack_2->SetBinContent(21,9.46982);
   hext_stack_2->SetBinError(1,2.244296);
   hext_stack_2->SetBinError(2,4.112938);
   hext_stack_2->SetBinError(3,6.169994);
   hext_stack_2->SetBinError(4,7.12892);
   hext_stack_2->SetBinError(5,7.547487);
   hext_stack_2->SetBinError(6,7.42529);
   hext_stack_2->SetBinError(7,6.08132);
   hext_stack_2->SetBinError(8,4.339103);
   hext_stack_2->SetBinError(9,4.689183);
   hext_stack_2->SetBinError(10,3.757277);
   hext_stack_2->SetBinError(11,3.176881);
   hext_stack_2->SetBinError(12,2.217557);
   hext_stack_2->SetBinError(13,2.140106);
   hext_stack_2->SetBinError(14,1.552674);
   hext_stack_2->SetBinError(15,1.959015);
   hext_stack_2->SetBinError(16,1.178414);
   hext_stack_2->SetBinError(17,1.630811);
   hext_stack_2->SetBinError(18,0.9009267);
   hext_stack_2->SetBinError(19,0.7189592);
   hext_stack_2->SetBinError(20,0.8039566);
   hext_stack_2->SetBinError(21,2.046195);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(1,0.5841489);
   hdirt_stack_3->SetBinContent(2,3.977603);
   hdirt_stack_3->SetBinContent(3,10.58747);
   hdirt_stack_3->SetBinContent(4,11.94482);
   hdirt_stack_3->SetBinContent(5,15.10328);
   hdirt_stack_3->SetBinContent(6,9.863071);
   hdirt_stack_3->SetBinContent(7,4.422987);
   hdirt_stack_3->SetBinContent(8,4.663633);
   hdirt_stack_3->SetBinContent(9,1.997854);
   hdirt_stack_3->SetBinContent(10,3.235742);
   hdirt_stack_3->SetBinContent(11,0.7458355);
   hdirt_stack_3->SetBinContent(12,1.819627);
   hdirt_stack_3->SetBinContent(13,1.251623);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,1.730123);
   hdirt_stack_3->SetBinContent(16,0.746255);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinError(1,0.4258231);
   hdirt_stack_3->SetBinError(2,0.9719869);
   hdirt_stack_3->SetBinError(3,1.688912);
   hdirt_stack_3->SetBinError(4,1.913403);
   hdirt_stack_3->SetBinError(5,2.02557);
   hdirt_stack_3->SetBinError(6,1.722681);
   hdirt_stack_3->SetBinError(7,0.9964792);
   hdirt_stack_3->SetBinError(8,1.220598);
   hdirt_stack_3->SetBinError(9,0.7396999);
   hdirt_stack_3->SetBinError(10,0.9217682);
   hdirt_stack_3->SetBinError(11,0.3802618);
   hdirt_stack_3->SetBinError(12,0.7419244);
   hdirt_stack_3->SetBinError(13,0.9559066);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,1.17734);
   hdirt_stack_3->SetBinError(16,0.5299905);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,3.910789);
   houtFV_stack_4->SetBinContent(2,23.46064);
   houtFV_stack_4->SetBinContent(3,61.69321);
   houtFV_stack_4->SetBinContent(4,95.10425);
   houtFV_stack_4->SetBinContent(5,102.7315);
   houtFV_stack_4->SetBinContent(6,95.17523);
   houtFV_stack_4->SetBinContent(7,70.82962);
   houtFV_stack_4->SetBinContent(8,51.40355);
   houtFV_stack_4->SetBinContent(9,40.22983);
   houtFV_stack_4->SetBinContent(10,33.66765);
   houtFV_stack_4->SetBinContent(11,25.16738);
   houtFV_stack_4->SetBinContent(12,15.78554);
   houtFV_stack_4->SetBinContent(13,10.40677);
   houtFV_stack_4->SetBinContent(14,9.916584);
   houtFV_stack_4->SetBinContent(15,7.689894);
   houtFV_stack_4->SetBinContent(16,9.144444);
   houtFV_stack_4->SetBinContent(17,3.683498);
   houtFV_stack_4->SetBinContent(18,2.862276);
   houtFV_stack_4->SetBinContent(19,4.272063);
   houtFV_stack_4->SetBinContent(20,3.078039);
   houtFV_stack_4->SetBinContent(21,9.599248);
   houtFV_stack_4->SetBinError(1,1.00269);
   houtFV_stack_4->SetBinError(2,2.421503);
   houtFV_stack_4->SetBinError(3,3.98989);
   houtFV_stack_4->SetBinError(4,4.938109);
   houtFV_stack_4->SetBinError(5,5.22419);
   houtFV_stack_4->SetBinError(6,4.850092);
   houtFV_stack_4->SetBinError(7,4.210774);
   houtFV_stack_4->SetBinError(8,3.595678);
   houtFV_stack_4->SetBinError(9,3.149322);
   houtFV_stack_4->SetBinError(10,2.9413);
   houtFV_stack_4->SetBinError(11,2.463417);
   houtFV_stack_4->SetBinError(12,2.083626);
   houtFV_stack_4->SetBinError(13,1.54886);
   houtFV_stack_4->SetBinError(14,1.537451);
   houtFV_stack_4->SetBinError(15,1.40422);
   houtFV_stack_4->SetBinError(16,1.615749);
   houtFV_stack_4->SetBinError(17,0.9282497);
   houtFV_stack_4->SetBinError(18,0.8410611);
   houtFV_stack_4->SetBinError(19,1.147988);
   houtFV_stack_4->SetBinError(20,0.9380532);
   houtFV_stack_4->SetBinError(21,1.617436);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4074285);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.87922);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.106713);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.698315);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,13.39537);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,11.06905);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,10.67646);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,9.399734);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.516804);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,7.203284);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.729185);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.804215);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.996994);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.495322);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.320006);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.27056);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.1239);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.296828);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.285006);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,12.89447);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2241206);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4796934);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8758211);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.073608);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.424988);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.154535);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.168532);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.093044);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.225655);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9494667);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6889826);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9755192);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7900248);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3168973);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5439484);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5323908);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3221146);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5138637);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4155267);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.467833);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0339179);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3183827);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.550236);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.474143);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.254944);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.148944);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.841191);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.158647);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9731064);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9324749);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4183041);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6369864);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3398207);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2573417);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3314272);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05405053);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2408437);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.8743764);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02405068);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08938846);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2775803);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5511484);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4180447);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3986242);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3848231);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4783162);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.22853);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3327346);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.166443);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2312389);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1454569);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1379679);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1884661);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04087859);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1416163);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3910319);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.760863);
   hNCpi0inFVres_stack_7->SetBinContent(2,28.99636);
   hNCpi0inFVres_stack_7->SetBinContent(3,116.0015);
   hNCpi0inFVres_stack_7->SetBinContent(4,256.5159);
   hNCpi0inFVres_stack_7->SetBinContent(5,309.0481);
   hNCpi0inFVres_stack_7->SetBinContent(6,292.2366);
   hNCpi0inFVres_stack_7->SetBinContent(7,238.1084);
   hNCpi0inFVres_stack_7->SetBinContent(8,206.7713);
   hNCpi0inFVres_stack_7->SetBinContent(9,159.238);
   hNCpi0inFVres_stack_7->SetBinContent(10,113.6614);
   hNCpi0inFVres_stack_7->SetBinContent(11,97.46553);
   hNCpi0inFVres_stack_7->SetBinContent(12,69.53207);
   hNCpi0inFVres_stack_7->SetBinContent(13,47.91759);
   hNCpi0inFVres_stack_7->SetBinContent(14,40.75128);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.95745);
   hNCpi0inFVres_stack_7->SetBinContent(16,27.28695);
   hNCpi0inFVres_stack_7->SetBinContent(17,21.07568);
   hNCpi0inFVres_stack_7->SetBinContent(18,17.96549);
   hNCpi0inFVres_stack_7->SetBinContent(19,14.82359);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.715);
   hNCpi0inFVres_stack_7->SetBinContent(21,67.33487);
   hNCpi0inFVres_stack_7->SetBinError(1,0.510553);
   hNCpi0inFVres_stack_7->SetBinError(2,1.708749);
   hNCpi0inFVres_stack_7->SetBinError(3,3.368722);
   hNCpi0inFVres_stack_7->SetBinError(4,5.152247);
   hNCpi0inFVres_stack_7->SetBinError(5,5.601753);
   hNCpi0inFVres_stack_7->SetBinError(6,5.428081);
   hNCpi0inFVres_stack_7->SetBinError(7,4.874029);
   hNCpi0inFVres_stack_7->SetBinError(8,4.753957);
   hNCpi0inFVres_stack_7->SetBinError(9,4.071961);
   hNCpi0inFVres_stack_7->SetBinError(10,3.350121);
   hNCpi0inFVres_stack_7->SetBinError(11,3.184438);
   hNCpi0inFVres_stack_7->SetBinError(12,2.689952);
   hNCpi0inFVres_stack_7->SetBinError(13,2.092305);
   hNCpi0inFVres_stack_7->SetBinError(14,2.00744);
   hNCpi0inFVres_stack_7->SetBinError(15,1.980263);
   hNCpi0inFVres_stack_7->SetBinError(16,1.863293);
   hNCpi0inFVres_stack_7->SetBinError(17,1.704247);
   hNCpi0inFVres_stack_7->SetBinError(18,1.640076);
   hNCpi0inFVres_stack_7->SetBinError(19,1.492797);
   hNCpi0inFVres_stack_7->SetBinError(20,1.417799);
   hNCpi0inFVres_stack_7->SetBinError(21,3.485533);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.294937);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.510798);
   hNCpi0inFVdis_stack_8->SetBinContent(3,25.65225);
   hNCpi0inFVdis_stack_8->SetBinContent(4,52.94681);
   hNCpi0inFVdis_stack_8->SetBinContent(5,51.5808);
   hNCpi0inFVdis_stack_8->SetBinContent(6,49.07951);
   hNCpi0inFVdis_stack_8->SetBinContent(7,42.0862);
   hNCpi0inFVdis_stack_8->SetBinContent(8,33.00892);
   hNCpi0inFVdis_stack_8->SetBinContent(9,29.86475);
   hNCpi0inFVdis_stack_8->SetBinContent(10,23.39681);
   hNCpi0inFVdis_stack_8->SetBinContent(11,19.69945);
   hNCpi0inFVdis_stack_8->SetBinContent(12,20.04207);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.90972);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.93882);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.09001);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.6892);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.531462);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.13006);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.053613);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.698833);
   hNCpi0inFVdis_stack_8->SetBinContent(21,44.12331);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4218584);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6182313);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.577747);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.460298);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.213076);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.302262);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.153034);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.919704);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.894921);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.591007);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.410533);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.64032);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.222067);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.489959);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.196401);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.291735);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.213216);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9835196);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8369687);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8201988);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.904672);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.07673115);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2170815);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3899702);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1604503);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2146235);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03464893);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04881885);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1176913);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.189526);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.07646167);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.0878631);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.0245005);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,1.708844);
   hCCpi0inFV_stack_10->SetBinContent(2,12.80584);
   hCCpi0inFV_stack_10->SetBinContent(3,54.81865);
   hCCpi0inFV_stack_10->SetBinContent(4,105.1099);
   hCCpi0inFV_stack_10->SetBinContent(5,128.3735);
   hCCpi0inFV_stack_10->SetBinContent(6,125.3117);
   hCCpi0inFV_stack_10->SetBinContent(7,114.1193);
   hCCpi0inFV_stack_10->SetBinContent(8,93.7347);
   hCCpi0inFV_stack_10->SetBinContent(9,89.74551);
   hCCpi0inFV_stack_10->SetBinContent(10,69.56123);
   hCCpi0inFV_stack_10->SetBinContent(11,60.008);
   hCCpi0inFV_stack_10->SetBinContent(12,47.71062);
   hCCpi0inFV_stack_10->SetBinContent(13,34.26668);
   hCCpi0inFV_stack_10->SetBinContent(14,29.11214);
   hCCpi0inFV_stack_10->SetBinContent(15,21.37374);
   hCCpi0inFV_stack_10->SetBinContent(16,20.12263);
   hCCpi0inFV_stack_10->SetBinContent(17,13.59251);
   hCCpi0inFV_stack_10->SetBinContent(18,9.33005);
   hCCpi0inFV_stack_10->SetBinContent(19,9.911743);
   hCCpi0inFV_stack_10->SetBinContent(20,7.328713);
   hCCpi0inFV_stack_10->SetBinContent(21,46.97121);
   hCCpi0inFV_stack_10->SetBinError(1,0.6671605);
   hCCpi0inFV_stack_10->SetBinError(2,1.788311);
   hCCpi0inFV_stack_10->SetBinError(3,3.726048);
   hCCpi0inFV_stack_10->SetBinError(4,5.124856);
   hCCpi0inFV_stack_10->SetBinError(5,5.641728);
   hCCpi0inFV_stack_10->SetBinError(6,5.62373);
   hCCpi0inFV_stack_10->SetBinError(7,5.374467);
   hCCpi0inFV_stack_10->SetBinError(8,4.858824);
   hCCpi0inFV_stack_10->SetBinError(9,4.811344);
   hCCpi0inFV_stack_10->SetBinError(10,4.174693);
   hCCpi0inFV_stack_10->SetBinError(11,3.884334);
   hCCpi0inFV_stack_10->SetBinError(12,3.459879);
   hCCpi0inFV_stack_10->SetBinError(13,2.880624);
   hCCpi0inFV_stack_10->SetBinError(14,2.684338);
   hCCpi0inFV_stack_10->SetBinError(15,2.339321);
   hCCpi0inFV_stack_10->SetBinError(16,2.27658);
   hCCpi0inFV_stack_10->SetBinError(17,1.8482);
   hCCpi0inFV_stack_10->SetBinError(18,1.57093);
   hCCpi0inFV_stack_10->SetBinError(19,1.606425);
   hCCpi0inFV_stack_10->SetBinError(20,1.315246);
   hCCpi0inFV_stack_10->SetBinError(21,3.48149);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(1,3.292665);
   hNCinFV_stack_11->SetBinContent(2,14.78128);
   hNCinFV_stack_11->SetBinContent(3,26.93794);
   hNCinFV_stack_11->SetBinContent(4,45.58279);
   hNCinFV_stack_11->SetBinContent(5,53.23279);
   hNCinFV_stack_11->SetBinContent(6,57.70362);
   hNCinFV_stack_11->SetBinContent(7,46.80318);
   hNCinFV_stack_11->SetBinContent(8,44.87471);
   hNCinFV_stack_11->SetBinContent(9,34.34302);
   hNCinFV_stack_11->SetBinContent(10,27.11601);
   hNCinFV_stack_11->SetBinContent(11,24.3819);
   hNCinFV_stack_11->SetBinContent(12,21.67735);
   hNCinFV_stack_11->SetBinContent(13,18.99036);
   hNCinFV_stack_11->SetBinContent(14,19.33893);
   hNCinFV_stack_11->SetBinContent(15,13.08248);
   hNCinFV_stack_11->SetBinContent(16,8.87137);
   hNCinFV_stack_11->SetBinContent(17,7.076386);
   hNCinFV_stack_11->SetBinContent(18,7.373794);
   hNCinFV_stack_11->SetBinContent(19,3.320632);
   hNCinFV_stack_11->SetBinContent(20,4.532676);
   hNCinFV_stack_11->SetBinContent(21,31.92706);
   hNCinFV_stack_11->SetBinError(1,0.9465724);
   hNCinFV_stack_11->SetBinError(2,1.972514);
   hNCinFV_stack_11->SetBinError(3,2.592105);
   hNCinFV_stack_11->SetBinError(4,3.360391);
   hNCinFV_stack_11->SetBinError(5,3.776997);
   hNCinFV_stack_11->SetBinError(6,3.856857);
   hNCinFV_stack_11->SetBinError(7,3.459272);
   hNCinFV_stack_11->SetBinError(8,3.704036);
   hNCinFV_stack_11->SetBinError(9,3.42106);
   hNCinFV_stack_11->SetBinError(10,2.782095);
   hNCinFV_stack_11->SetBinError(11,2.800075);
   hNCinFV_stack_11->SetBinError(12,2.690746);
   hNCinFV_stack_11->SetBinError(13,2.541482);
   hNCinFV_stack_11->SetBinError(14,2.699425);
   hNCinFV_stack_11->SetBinError(15,1.91054);
   hNCinFV_stack_11->SetBinError(16,1.521978);
   hNCinFV_stack_11->SetBinError(17,1.436599);
   hNCinFV_stack_11->SetBinError(18,1.926864);
   hNCinFV_stack_11->SetBinError(19,0.9782531);
   hNCinFV_stack_11->SetBinError(20,1.319519);
   hNCinFV_stack_11->SetBinError(21,3.444589);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,4.266657);
   hnumuCCinFV_stack_12->SetBinContent(2,21.65905);
   hnumuCCinFV_stack_12->SetBinContent(3,44.77164);
   hnumuCCinFV_stack_12->SetBinContent(4,72.00701);
   hnumuCCinFV_stack_12->SetBinContent(5,78.56865);
   hnumuCCinFV_stack_12->SetBinContent(6,86.55354);
   hnumuCCinFV_stack_12->SetBinContent(7,61.23045);
   hnumuCCinFV_stack_12->SetBinContent(8,53.47627);
   hnumuCCinFV_stack_12->SetBinContent(9,44.39455);
   hnumuCCinFV_stack_12->SetBinContent(10,38.78411);
   hnumuCCinFV_stack_12->SetBinContent(11,29.20583);
   hnumuCCinFV_stack_12->SetBinContent(12,26.38451);
   hnumuCCinFV_stack_12->SetBinContent(13,15.5475);
   hnumuCCinFV_stack_12->SetBinContent(14,16.10729);
   hnumuCCinFV_stack_12->SetBinContent(15,9.040161);
   hnumuCCinFV_stack_12->SetBinContent(16,8.077063);
   hnumuCCinFV_stack_12->SetBinContent(17,4.946124);
   hnumuCCinFV_stack_12->SetBinContent(18,3.304198);
   hnumuCCinFV_stack_12->SetBinContent(19,3.076831);
   hnumuCCinFV_stack_12->SetBinContent(20,4.428437);
   hnumuCCinFV_stack_12->SetBinContent(21,27.93141);
   hnumuCCinFV_stack_12->SetBinError(1,1.205284);
   hnumuCCinFV_stack_12->SetBinError(2,2.818173);
   hnumuCCinFV_stack_12->SetBinError(3,4.153508);
   hnumuCCinFV_stack_12->SetBinError(4,5.15148);
   hnumuCCinFV_stack_12->SetBinError(5,5.195013);
   hnumuCCinFV_stack_12->SetBinError(6,5.971686);
   hnumuCCinFV_stack_12->SetBinError(7,4.505412);
   hnumuCCinFV_stack_12->SetBinError(8,4.013141);
   hnumuCCinFV_stack_12->SetBinError(9,3.629582);
   hnumuCCinFV_stack_12->SetBinError(10,3.519348);
   hnumuCCinFV_stack_12->SetBinError(11,2.817109);
   hnumuCCinFV_stack_12->SetBinError(12,3.002805);
   hnumuCCinFV_stack_12->SetBinError(13,1.895993);
   hnumuCCinFV_stack_12->SetBinError(14,2.065312);
   hnumuCCinFV_stack_12->SetBinError(15,1.547934);
   hnumuCCinFV_stack_12->SetBinError(16,1.460764);
   hnumuCCinFV_stack_12->SetBinError(17,1.139375);
   hnumuCCinFV_stack_12->SetBinError(18,0.8749724);
   hnumuCCinFV_stack_12->SetBinError(19,0.921813);
   hnumuCCinFV_stack_12->SetBinError(20,1.06487);
   hnumuCCinFV_stack_12->SetBinError(21,3.570414);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,1.66076);
   hnueCCinFV_stack_13->SetBinContent(4,2.892402);
   hnueCCinFV_stack_13->SetBinContent(5,3.173257);
   hnueCCinFV_stack_13->SetBinContent(6,5.485031);
   hnueCCinFV_stack_13->SetBinContent(7,3.731456);
   hnueCCinFV_stack_13->SetBinContent(8,1.58447);
   hnueCCinFV_stack_13->SetBinContent(9,1.515959);
   hnueCCinFV_stack_13->SetBinContent(10,2.079783);
   hnueCCinFV_stack_13->SetBinContent(11,1.194758);
   hnueCCinFV_stack_13->SetBinContent(12,0.3937986);
   hnueCCinFV_stack_13->SetBinContent(13,0.9326293);
   hnueCCinFV_stack_13->SetBinContent(14,1.431729);
   hnueCCinFV_stack_13->SetBinContent(15,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(16,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(17,0.7817899);
   hnueCCinFV_stack_13->SetBinContent(18,0.2016043);
   hnueCCinFV_stack_13->SetBinContent(19,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(21,23.62823);
   hnueCCinFV_stack_13->SetBinError(1,0.1950249);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.787692);
   hnueCCinFV_stack_13->SetBinError(4,1.397028);
   hnueCCinFV_stack_13->SetBinError(5,1.099393);
   hnueCCinFV_stack_13->SetBinError(6,1.302915);
   hnueCCinFV_stack_13->SetBinError(7,1.160665);
   hnueCCinFV_stack_13->SetBinError(8,0.6172611);
   hnueCCinFV_stack_13->SetBinError(9,0.6382484);
   hnueCCinFV_stack_13->SetBinError(10,1.235543);
   hnueCCinFV_stack_13->SetBinError(11,0.5667164);
   hnueCCinFV_stack_13->SetBinError(12,0.2781978);
   hnueCCinFV_stack_13->SetBinError(13,0.4807966);
   hnueCCinFV_stack_13->SetBinError(14,0.5979124);
   hnueCCinFV_stack_13->SetBinError(15,0.4800908);
   hnueCCinFV_stack_13->SetBinError(16,0.4670934);
   hnueCCinFV_stack_13->SetBinError(17,0.3908977);
   hnueCCinFV_stack_13->SetBinError(18,0.1967761);
   hnueCCinFV_stack_13->SetBinError(19,0.3963213);
   hnueCCinFV_stack_13->SetBinError(21,3.529241);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__2->SetBinContent(1,31.01636);
   hmcerror__2->SetBinContent(2,162.4703);
   hmcerror__2->SetBinContent(3,449.291);
   hmcerror__2->SetBinContent(4,786.955);
   hmcerror__2->SetBinContent(5,902.3969);
   hmcerror__2->SetBinContent(6,876.5833);
   hmcerror__2->SetBinContent(7,695.0291);
   hmcerror__2->SetBinContent(8,557.157);
   hmcerror__2->SetBinContent(9,462.3321);
   hmcerror__2->SetBinContent(10,359.8397);
   hmcerror__2->SetBinContent(11,290.1042);
   hmcerror__2->SetBinContent(12,222.4421);
   hmcerror__2->SetBinContent(13,157.9676);
   hmcerror__2->SetBinContent(14,143.7047);
   hmcerror__2->SetBinContent(15,107.493);
   hmcerror__2->SetBinContent(16,92.82785);
   hmcerror__2->SetBinContent(17,68.7254);
   hmcerror__2->SetBinContent(18,50.87779);
   hmcerror__2->SetBinContent(19,44.42032);
   hmcerror__2->SetBinContent(20,40.21844);
   hmcerror__2->SetBinContent(21,277.2506);
   hmcerror__2->SetBinError(1,13.92501);
   hmcerror__2->SetBinError(2,49.50946);
   hmcerror__2->SetBinError(3,116.614);
   hmcerror__2->SetBinError(4,216.1181);
   hmcerror__2->SetBinError(5,246.0617);
   hmcerror__2->SetBinError(6,232.6281);
   hmcerror__2->SetBinError(7,185.3782);
   hmcerror__2->SetBinError(8,151.0648);
   hmcerror__2->SetBinError(9,127.5212);
   hmcerror__2->SetBinError(10,102.3823);
   hmcerror__2->SetBinError(11,82.61747);
   hmcerror__2->SetBinError(12,66.3324);
   hmcerror__2->SetBinError(13,53.37104);
   hmcerror__2->SetBinError(14,45.21588);
   hmcerror__2->SetBinError(15,34.89058);
   hmcerror__2->SetBinError(16,30.40857);
   hmcerror__2->SetBinError(17,20.55089);
   hmcerror__2->SetBinError(18,22.42913);
   hmcerror__2->SetBinError(19,18.96572);
   hmcerror__2->SetBinError(20,18.17713);
   hmcerror__2->SetBinError(21,86.91033);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[20] = {
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
   Double_t _fy3001[20] = {
   26,
   145,
   482,
   879,
   995,
   856,
   643,
   557,
   404,
   335,
   227,
   150,
   145,
   116,
   104,
   70,
   43,
   46,
   21,
   34};
   Double_t _felx3001[20] = {
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
   Double_t _fely3001[20] = {
   5.2453,
   12.04159,
   21.9545,
   29.64793,
   31.54362,
   29.25748,
   25.35744,
   23.60085,
   20.09975,
   18.30301,
   15.06652,
   12.24745,
   12.04159,
   10.77033,
   10.19804,
   8.4925,
   6.6917,
   6.9153,
   4.7354,
   5.9703};
   Double_t _fehx3001[20] = {
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
   Double_t _fehy3001[20] = {
   5.0358,
   12.04159,
   21.9545,
   29.64793,
   31.54362,
   29.25748,
   25.35744,
   23.60085,
   20.09975,
   18.30301,
   15.06652,
   12.24745,
   12.04159,
   10.77033,
   10.19804,
   8.2902,
   6.4868,
   6.7108,
   4.5229,
   5.7635};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,660);
   Graph_Graph3001->SetMinimum(14.63814);
   Graph_Graph3001->SetMaximum(1127.572);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.1/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6278.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 171.2","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 744.9","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 72.8","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 670.2","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  102.7","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.0","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2104.8","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  429.2","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1048.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 483.3","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 625.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.6","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[20] = {
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
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
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
   Double_t _fely3002[20] = {
   0.4489571,
   0.3047293,
   0.2595512,
   0.2746258,
   0.2726757,
   0.2653806,
   0.2667201,
   0.271135,
   0.2758217,
   0.2845219,
   0.2847855,
   0.2982007,
   0.3378607,
   0.3146443,
   0.3245845,
   0.3275802,
   0.2990291,
   0.4408432,
   0.4269604,
   0.45196};
   Double_t _fehx3002[20] = {
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
   Double_t _fehy3002[20] = {
   0.4489571,
   0.3047293,
   0.2595512,
   0.2746258,
   0.2726757,
   0.2653806,
   0.2667201,
   0.271135,
   0.2758217,
   0.2845219,
   0.2847855,
   0.2982007,
   0.3378607,
   0.3146443,
   0.3245845,
   0.3275802,
   0.2990291,
   0.4408432,
   0.4269604,
   0.45196};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,660);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[20] = {
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
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
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
   Double_t _fely3003[20] = {
   0.1875312,
   0.2016313,
   0.235434,
   0.2660723,
   0.2682211,
   0.2587101,
   0.2601296,
   0.264357,
   0.2642717,
   0.2539107,
   0.2701589,
   0.270817,
   0.3069823,
   0.2638438,
   0.2593703,
   0.2400109,
   0.2434432,
   0.2556363,
   0.2677539,
   0.2942085};
   Double_t _fehx3003[20] = {
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
   Double_t _fehy3003[20] = {
   0.1875312,
   0.2016313,
   0.235434,
   0.2660723,
   0.2682211,
   0.2587101,
   0.2601296,
   0.264357,
   0.2642717,
   0.2539107,
   0.2701589,
   0.270817,
   0.3069823,
   0.2638438,
   0.2593703,
   0.2400109,
   0.2434432,
   0.2556363,
   0.2677539,
   0.2942085};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,660);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[20] = {
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
   Double_t _fy3004[20] = {
   0.8382674,
   0.8924709,
   1.072801,
   1.116964,
   1.102619,
   0.9765188,
   0.9251412,
   0.9997181,
   0.8738308,
   0.9309702,
   0.7824775,
   0.6743327,
   0.9179096,
   0.8072107,
   0.9675044,
   0.754084,
   0.6256785,
   0.9041273,
   0.4727566,
   0.8453833};
   Double_t _felx3004[20] = {
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
   Double_t _fely3004[20] = {
   0.169114,
   0.07411567,
   0.04886476,
   0.03767425,
   0.03495538,
   0.03337672,
   0.03648401,
   0.04235942,
   0.04347471,
   0.05086434,
   0.05193486,
   0.05505904,
   0.07622825,
   0.07494763,
   0.09487161,
   0.09148655,
   0.09736867,
   0.1359198,
   0.1066044,
   0.1484468};
   Double_t _fehx3004[20] = {
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
   Double_t _fehy3004[20] = {
   0.1623595,
   0.07411567,
   0.04886476,
   0.03767425,
   0.03495538,
   0.03337672,
   0.03648401,
   0.04235942,
   0.04347471,
   0.05086434,
   0.05193486,
   0.05505904,
   0.07622825,
   0.07494763,
   0.09487161,
   0.08930725,
   0.09438723,
   0.1319004,
   0.1018205,
   0.1433049};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0.2873037);
   Graph_Graph3004->SetMaximum(1.233486);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_energy_high_all",20,0,600);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

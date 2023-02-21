#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Oct 21 23:07:14 2022) by ROOT version 6.26/00
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
   pad1->Range(-40,-4.972574,293.3333,549.8621);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__4->SetBinContent(0,6.628728);
   hmc__4->SetBinContent(1,75.23212);
   hmc__4->SetBinContent(2,125.2281);
   hmc__4->SetBinContent(3,161.9341);
   hmc__4->SetBinContent(4,184.6691);
   hmc__4->SetBinContent(5,194.2897);
   hmc__4->SetBinContent(6,209.549);
   hmc__4->SetBinContent(7,197.4987);
   hmc__4->SetBinContent(8,216.33);
   hmc__4->SetBinContent(9,222.9472);
   hmc__4->SetBinContent(10,218.0799);
   hmc__4->SetBinContent(11,228.022);
   hmc__4->SetBinContent(12,220.4936);
   hmc__4->SetBinContent(13,224.1534);
   hmc__4->SetBinContent(14,233.5343);
   hmc__4->SetBinContent(15,219.7448);
   hmc__4->SetBinContent(16,225.3417);
   hmc__4->SetBinContent(17,245.8858);
   hmc__4->SetBinContent(18,231.1199);
   hmc__4->SetBinContent(19,234.9353);
   hmc__4->SetBinContent(20,248.6287);
   hmc__4->SetBinContent(21,236.4953);
   hmc__4->SetBinContent(22,224.0809);
   hmc__4->SetBinContent(23,212.0074);
   hmc__4->SetBinContent(24,185.6021);
   hmc__4->SetBinContent(25,142.4801);
   hmc__4->SetBinContent(26,54.58936);
   hmc__4->SetBinContent(27,5.450373);
   hmc__4->SetBinError(0,1.206698);
   hmc__4->SetBinError(1,23.85419);
   hmc__4->SetBinError(2,37.53951);
   hmc__4->SetBinError(3,49.90249);
   hmc__4->SetBinError(4,49.80606);
   hmc__4->SetBinError(5,63.44769);
   hmc__4->SetBinError(6,59.63711);
   hmc__4->SetBinError(7,57.67631);
   hmc__4->SetBinError(8,69.27857);
   hmc__4->SetBinError(9,61.67793);
   hmc__4->SetBinError(10,60.60517);
   hmc__4->SetBinError(11,65.1595);
   hmc__4->SetBinError(12,64.02507);
   hmc__4->SetBinError(13,60.92626);
   hmc__4->SetBinError(14,65.05816);
   hmc__4->SetBinError(15,62.63885);
   hmc__4->SetBinError(16,63.27594);
   hmc__4->SetBinError(17,64.24174);
   hmc__4->SetBinError(18,69.18593);
   hmc__4->SetBinError(19,63.58123);
   hmc__4->SetBinError(20,64.4801);
   hmc__4->SetBinError(21,65.95369);
   hmc__4->SetBinError(22,58.92278);
   hmc__4->SetBinError(23,58.6273);
   hmc__4->SetBinError(24,50.89562);
   hmc__4->SetBinError(25,39.72296);
   hmc__4->SetBinError(26,21.69768);
   hmc__4->SetBinError(27,5.474712);
   hmc__4->SetMinimum(-4.972574);
   hmc__4->SetMaximum(522.1203);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,0,260);
   hs2_stack_2->SetMinimum(-2.129585e-09);
   hs2_stack_2->SetMaximum(261.0602);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,3.894128);
   hbadmatch_stack_1->SetBinContent(2,2.110863);
   hbadmatch_stack_1->SetBinContent(3,2.249888);
   hbadmatch_stack_1->SetBinContent(4,1.648554);
   hbadmatch_stack_1->SetBinContent(5,4.2522);
   hbadmatch_stack_1->SetBinContent(6,4.013628);
   hbadmatch_stack_1->SetBinContent(7,3.77159);
   hbadmatch_stack_1->SetBinContent(8,3.015641);
   hbadmatch_stack_1->SetBinContent(9,3.799399);
   hbadmatch_stack_1->SetBinContent(10,6.335607);
   hbadmatch_stack_1->SetBinContent(11,4.96484);
   hbadmatch_stack_1->SetBinContent(12,5.551331);
   hbadmatch_stack_1->SetBinContent(13,5.49479);
   hbadmatch_stack_1->SetBinContent(14,6.198253);
   hbadmatch_stack_1->SetBinContent(15,3.683436);
   hbadmatch_stack_1->SetBinContent(16,5.135233);
   hbadmatch_stack_1->SetBinContent(17,6.469254);
   hbadmatch_stack_1->SetBinContent(18,6.348021);
   hbadmatch_stack_1->SetBinContent(19,7.570491);
   hbadmatch_stack_1->SetBinContent(20,6.224131);
   hbadmatch_stack_1->SetBinContent(21,5.082147);
   hbadmatch_stack_1->SetBinContent(22,4.396357);
   hbadmatch_stack_1->SetBinContent(23,4.989525);
   hbadmatch_stack_1->SetBinContent(24,5.0939);
   hbadmatch_stack_1->SetBinContent(25,5.587932);
   hbadmatch_stack_1->SetBinContent(26,1.353071);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.833193);
   hbadmatch_stack_1->SetBinError(2,0.7233292);
   hbadmatch_stack_1->SetBinError(3,0.7263927);
   hbadmatch_stack_1->SetBinError(4,0.7229134);
   hbadmatch_stack_1->SetBinError(5,2.067422);
   hbadmatch_stack_1->SetBinError(6,1.056997);
   hbadmatch_stack_1->SetBinError(7,0.9420867);
   hbadmatch_stack_1->SetBinError(8,0.8413832);
   hbadmatch_stack_1->SetBinError(9,1.193183);
   hbadmatch_stack_1->SetBinError(10,1.98495);
   hbadmatch_stack_1->SetBinError(11,1.276585);
   hbadmatch_stack_1->SetBinError(12,1.288193);
   hbadmatch_stack_1->SetBinError(13,1.244699);
   hbadmatch_stack_1->SetBinError(14,1.366812);
   hbadmatch_stack_1->SetBinError(15,0.9501537);
   hbadmatch_stack_1->SetBinError(16,1.232817);
   hbadmatch_stack_1->SetBinError(17,1.342803);
   hbadmatch_stack_1->SetBinError(18,1.323701);
   hbadmatch_stack_1->SetBinError(19,1.813357);
   hbadmatch_stack_1->SetBinError(20,1.33899);
   hbadmatch_stack_1->SetBinError(21,1.203535);
   hbadmatch_stack_1->SetBinError(22,1.077759);
   hbadmatch_stack_1->SetBinError(23,1.136854);
   hbadmatch_stack_1->SetBinError(24,1.378053);
   hbadmatch_stack_1->SetBinError(25,1.23165);
   hbadmatch_stack_1->SetBinError(26,0.59673);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(1,3.897177);
   hext_stack_2->SetBinContent(2,9.87201);
   hext_stack_2->SetBinContent(3,10.43583);
   hext_stack_2->SetBinContent(4,15.3884);
   hext_stack_2->SetBinContent(5,16.49287);
   hext_stack_2->SetBinContent(6,18.4293);
   hext_stack_2->SetBinContent(7,13.86575);
   hext_stack_2->SetBinContent(8,10.93181);
   hext_stack_2->SetBinContent(9,11.76655);
   hext_stack_2->SetBinContent(10,21.32456);
   hext_stack_2->SetBinContent(11,20.33537);
   hext_stack_2->SetBinContent(12,20.05847);
   hext_stack_2->SetBinContent(13,16.95572);
   hext_stack_2->SetBinContent(14,15.13185);
   hext_stack_2->SetBinContent(15,20.21128);
   hext_stack_2->SetBinContent(16,21.66332);
   hext_stack_2->SetBinContent(17,24.66951);
   hext_stack_2->SetBinContent(18,18.17116);
   hext_stack_2->SetBinContent(19,16.90665);
   hext_stack_2->SetBinContent(20,33.28299);
   hext_stack_2->SetBinContent(21,29.33516);
   hext_stack_2->SetBinContent(22,26.10555);
   hext_stack_2->SetBinContent(23,28.22068);
   hext_stack_2->SetBinContent(24,21.35769);
   hext_stack_2->SetBinContent(25,15.56439);
   hext_stack_2->SetBinContent(26,5.972061);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(1,1.182339);
   hext_stack_2->SetBinError(2,2.053562);
   hext_stack_2->SetBinError(3,2.168829);
   hext_stack_2->SetBinError(4,2.5451);
   hext_stack_2->SetBinError(5,2.753742);
   hext_stack_2->SetBinError(6,2.958382);
   hext_stack_2->SetBinError(7,2.296242);
   hext_stack_2->SetBinError(8,2.174403);
   hext_stack_2->SetBinError(9,2.110703);
   hext_stack_2->SetBinError(10,3.261756);
   hext_stack_2->SetBinError(11,3.202235);
   hext_stack_2->SetBinError(12,3.012804);
   hext_stack_2->SetBinError(13,2.876976);
   hext_stack_2->SetBinError(14,2.614343);
   hext_stack_2->SetBinError(15,3.043558);
   hext_stack_2->SetBinError(16,3.21588);
   hext_stack_2->SetBinError(17,3.388834);
   hext_stack_2->SetBinError(18,2.703225);
   hext_stack_2->SetBinError(19,2.74722);
   hext_stack_2->SetBinError(20,4.228249);
   hext_stack_2->SetBinError(21,3.734773);
   hext_stack_2->SetBinError(22,3.534656);
   hext_stack_2->SetBinError(23,3.83548);
   hext_stack_2->SetBinError(24,3.157431);
   hext_stack_2->SetBinError(25,2.555706);
   hext_stack_2->SetBinError(26,1.776376);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.941116);
   hdirt_stack_3->SetBinContent(2,2.239327);
   hdirt_stack_3->SetBinContent(3,3.892356);
   hdirt_stack_3->SetBinContent(4,2.535865);
   hdirt_stack_3->SetBinContent(5,3.119497);
   hdirt_stack_3->SetBinContent(6,0.5758626);
   hdirt_stack_3->SetBinContent(7,0.8457623);
   hdirt_stack_3->SetBinContent(8,1.559793);
   hdirt_stack_3->SetBinContent(9,2.586779);
   hdirt_stack_3->SetBinContent(10,1.169767);
   hdirt_stack_3->SetBinContent(11,1.896021);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,1.197001);
   hdirt_stack_3->SetBinContent(14,1.64192);
   hdirt_stack_3->SetBinContent(15,1.07113);
   hdirt_stack_3->SetBinContent(16,1.912393);
   hdirt_stack_3->SetBinContent(17,1.491749);
   hdirt_stack_3->SetBinContent(18,1.968738);
   hdirt_stack_3->SetBinContent(19,2.117445);
   hdirt_stack_3->SetBinContent(20,1.781033);
   hdirt_stack_3->SetBinContent(21,3.951662);
   hdirt_stack_3->SetBinContent(22,2.98143);
   hdirt_stack_3->SetBinContent(23,3.139966);
   hdirt_stack_3->SetBinContent(24,1.29767);
   hdirt_stack_3->SetBinContent(25,2.14023);
   hdirt_stack_3->SetBinContent(26,0.5149939);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4983014);
   hdirt_stack_3->SetBinError(2,0.7439905);
   hdirt_stack_3->SetBinError(3,1.031337);
   hdirt_stack_3->SetBinError(4,0.7356287);
   hdirt_stack_3->SetBinError(5,1.21588);
   hdirt_stack_3->SetBinError(6,0.3389606);
   hdirt_stack_3->SetBinError(7,0.4516994);
   hdirt_stack_3->SetBinError(8,0.6295299);
   hdirt_stack_3->SetBinError(9,0.8147261);
   hdirt_stack_3->SetBinError(10,0.6043763);
   hdirt_stack_3->SetBinError(11,1.180313);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.567895);
   hdirt_stack_3->SetBinError(14,0.6526925);
   hdirt_stack_3->SetBinError(15,0.5555408);
   hdirt_stack_3->SetBinError(16,0.6468139);
   hdirt_stack_3->SetBinError(17,0.6050558);
   hdirt_stack_3->SetBinError(18,0.7191281);
   hdirt_stack_3->SetBinError(19,0.7996816);
   hdirt_stack_3->SetBinError(20,0.6443707);
   hdirt_stack_3->SetBinError(21,1.209716);
   hdirt_stack_3->SetBinError(22,0.9256584);
   hdirt_stack_3->SetBinError(23,0.9562961);
   hdirt_stack_3->SetBinError(24,0.500426);
   hdirt_stack_3->SetBinError(25,0.7642586);
   hdirt_stack_3->SetBinError(26,0.303235);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,4.919967);
   houtFV_stack_4->SetBinContent(1,33.14793);
   houtFV_stack_4->SetBinContent(2,17.87239);
   houtFV_stack_4->SetBinContent(3,18.14318);
   houtFV_stack_4->SetBinContent(4,14.12958);
   houtFV_stack_4->SetBinContent(5,12.66013);
   houtFV_stack_4->SetBinContent(6,14.61282);
   houtFV_stack_4->SetBinContent(7,11.56126);
   houtFV_stack_4->SetBinContent(8,12.74276);
   houtFV_stack_4->SetBinContent(9,9.436007);
   houtFV_stack_4->SetBinContent(10,8.891875);
   houtFV_stack_4->SetBinContent(11,11.3149);
   houtFV_stack_4->SetBinContent(12,9.618328);
   houtFV_stack_4->SetBinContent(13,9.333332);
   houtFV_stack_4->SetBinContent(14,9.86149);
   houtFV_stack_4->SetBinContent(15,11.86378);
   houtFV_stack_4->SetBinContent(16,6.559587);
   houtFV_stack_4->SetBinContent(17,12.74472);
   houtFV_stack_4->SetBinContent(18,10.98416);
   houtFV_stack_4->SetBinContent(19,11.15556);
   houtFV_stack_4->SetBinContent(20,12.13403);
   houtFV_stack_4->SetBinContent(21,10.71334);
   houtFV_stack_4->SetBinContent(22,14.39422);
   houtFV_stack_4->SetBinContent(23,19.56388);
   houtFV_stack_4->SetBinContent(24,19.00493);
   houtFV_stack_4->SetBinContent(25,22.3834);
   houtFV_stack_4->SetBinContent(26,18.89854);
   houtFV_stack_4->SetBinContent(27,2.478476);
   houtFV_stack_4->SetBinError(0,1.059192);
   houtFV_stack_4->SetBinError(1,2.844277);
   houtFV_stack_4->SetBinError(2,2.107486);
   houtFV_stack_4->SetBinError(3,2.160746);
   houtFV_stack_4->SetBinError(4,1.808248);
   houtFV_stack_4->SetBinError(5,1.695884);
   houtFV_stack_4->SetBinError(6,1.952848);
   houtFV_stack_4->SetBinError(7,1.608583);
   houtFV_stack_4->SetBinError(8,1.840443);
   houtFV_stack_4->SetBinError(9,1.535681);
   houtFV_stack_4->SetBinError(10,1.41465);
   houtFV_stack_4->SetBinError(11,1.699726);
   houtFV_stack_4->SetBinError(12,1.529701);
   houtFV_stack_4->SetBinError(13,1.55983);
   houtFV_stack_4->SetBinError(14,1.539832);
   houtFV_stack_4->SetBinError(15,1.72306);
   houtFV_stack_4->SetBinError(16,1.21446);
   houtFV_stack_4->SetBinError(17,1.813864);
   houtFV_stack_4->SetBinError(18,1.734087);
   houtFV_stack_4->SetBinError(19,1.595279);
   houtFV_stack_4->SetBinError(20,1.797161);
   houtFV_stack_4->SetBinError(21,1.693697);
   houtFV_stack_4->SetBinError(22,1.92577);
   houtFV_stack_4->SetBinError(23,2.271205);
   houtFV_stack_4->SetBinError(24,2.164543);
   houtFV_stack_4->SetBinError(25,2.346929);
   houtFV_stack_4->SetBinError(26,2.160398);
   houtFV_stack_4->SetBinError(27,0.7490907);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.9065614);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.445483);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.599816);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.030503);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.356205);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.437343);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.528312);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.857875);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.083823);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.865486);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.496584);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.097907);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.381261);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.066251);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.892479);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.319858);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.507482);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.837354);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.263369);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.752552);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.078412);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.365474);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.197744);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.449126);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.604026);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.366877);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3054837);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7653686);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6772115);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5689212);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6011387);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8770071);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6096143);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7145698);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7273306);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6547782);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8342846);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6961412);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.055099);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8324496);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7247893);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7682864);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7065822);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.028718);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8675849);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7768843);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6374433);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.689945);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7146324);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8841464);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4282454);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2754121);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.10808);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2057056);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.528771);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.045275);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4696441);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7257796);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7865192);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.042872);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.162795);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8507553);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5595695);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4329856);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.121055);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5564082);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.069869);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.6167095);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6649275);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.570418);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.9473761);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.779974);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3870123);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.743959);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9641982);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4270952);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1567287);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.07633901);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04764111);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0725513);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1995271);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4197577);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1502155);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3145095);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2372099);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3163551);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3314651);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2503015);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1542191);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1178998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2948389);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2312716);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2895631);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1592614);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2342083);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1751791);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3809178);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2200827);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1287137);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1811401);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3163491);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.187059);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.0504189);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.06649547);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.7194154);
   hNCpi0inFVres_stack_7->SetBinContent(1,13.11217);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.69788);
   hNCpi0inFVres_stack_7->SetBinContent(3,59.1685);
   hNCpi0inFVres_stack_7->SetBinContent(4,71.31317);
   hNCpi0inFVres_stack_7->SetBinContent(5,79.07468);
   hNCpi0inFVres_stack_7->SetBinContent(6,87.66098);
   hNCpi0inFVres_stack_7->SetBinContent(7,83.87835);
   hNCpi0inFVres_stack_7->SetBinContent(8,89.59136);
   hNCpi0inFVres_stack_7->SetBinContent(9,96.19354);
   hNCpi0inFVres_stack_7->SetBinContent(10,85.65933);
   hNCpi0inFVres_stack_7->SetBinContent(11,95.92305);
   hNCpi0inFVres_stack_7->SetBinContent(12,88.59811);
   hNCpi0inFVres_stack_7->SetBinContent(13,86.7173);
   hNCpi0inFVres_stack_7->SetBinContent(14,96.79031);
   hNCpi0inFVres_stack_7->SetBinContent(15,88.79218);
   hNCpi0inFVres_stack_7->SetBinContent(16,93.00984);
   hNCpi0inFVres_stack_7->SetBinContent(17,94.03912);
   hNCpi0inFVres_stack_7->SetBinContent(18,87.95731);
   hNCpi0inFVres_stack_7->SetBinContent(19,89.17776);
   hNCpi0inFVres_stack_7->SetBinContent(20,83.03688);
   hNCpi0inFVres_stack_7->SetBinContent(21,85.14342);
   hNCpi0inFVres_stack_7->SetBinContent(22,83.61131);
   hNCpi0inFVres_stack_7->SetBinContent(23,66.85261);
   hNCpi0inFVres_stack_7->SetBinContent(24,57.07357);
   hNCpi0inFVres_stack_7->SetBinContent(25,35.78673);
   hNCpi0inFVres_stack_7->SetBinContent(26,8.624258);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.7376971);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2733299);
   hNCpi0inFVres_stack_7->SetBinError(1,1.146119);
   hNCpi0inFVres_stack_7->SetBinError(2,2.105058);
   hNCpi0inFVres_stack_7->SetBinError(3,2.423869);
   hNCpi0inFVres_stack_7->SetBinError(4,2.741273);
   hNCpi0inFVres_stack_7->SetBinError(5,2.801822);
   hNCpi0inFVres_stack_7->SetBinError(6,3.07751);
   hNCpi0inFVres_stack_7->SetBinError(7,2.969084);
   hNCpi0inFVres_stack_7->SetBinError(8,3.073329);
   hNCpi0inFVres_stack_7->SetBinError(9,3.349874);
   hNCpi0inFVres_stack_7->SetBinError(10,3.040452);
   hNCpi0inFVres_stack_7->SetBinError(11,3.184206);
   hNCpi0inFVres_stack_7->SetBinError(12,2.984196);
   hNCpi0inFVres_stack_7->SetBinError(13,2.988343);
   hNCpi0inFVres_stack_7->SetBinError(14,3.296104);
   hNCpi0inFVres_stack_7->SetBinError(15,3.137412);
   hNCpi0inFVres_stack_7->SetBinError(16,3.260976);
   hNCpi0inFVres_stack_7->SetBinError(17,3.287028);
   hNCpi0inFVres_stack_7->SetBinError(18,3.145827);
   hNCpi0inFVres_stack_7->SetBinError(19,3.134479);
   hNCpi0inFVres_stack_7->SetBinError(20,2.9748);
   hNCpi0inFVres_stack_7->SetBinError(21,2.95457);
   hNCpi0inFVres_stack_7->SetBinError(22,3.058445);
   hNCpi0inFVres_stack_7->SetBinError(23,2.635035);
   hNCpi0inFVres_stack_7->SetBinError(24,2.340731);
   hNCpi0inFVres_stack_7->SetBinError(25,1.874509);
   hNCpi0inFVres_stack_7->SetBinError(26,0.9941488);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1985595);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.3225855);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.327457);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.452898);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.98725);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.78987);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.30771);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.45684);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.24885);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.45464);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.35821);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.49677);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.8815);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.286);
   hNCpi0inFVdis_stack_8->SetBinContent(13,19.63369);
   hNCpi0inFVdis_stack_8->SetBinContent(14,18.21534);
   hNCpi0inFVdis_stack_8->SetBinContent(15,19.88568);
   hNCpi0inFVdis_stack_8->SetBinContent(16,19.95526);
   hNCpi0inFVdis_stack_8->SetBinContent(17,17.36931);
   hNCpi0inFVdis_stack_8->SetBinContent(18,18.59105);
   hNCpi0inFVdis_stack_8->SetBinContent(19,17.95482);
   hNCpi0inFVdis_stack_8->SetBinContent(20,20.56123);
   hNCpi0inFVdis_stack_8->SetBinContent(21,17.85296);
   hNCpi0inFVdis_stack_8->SetBinContent(22,17.34027);
   hNCpi0inFVdis_stack_8->SetBinContent(23,16.16042);
   hNCpi0inFVdis_stack_8->SetBinContent(24,12.33182);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.869208);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.091639);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.1964617);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2970509);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6341529);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9632556);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.070201);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.400579);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.317683);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.496059);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.394318);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.319798);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.601058);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.237368);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.539263);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.342779);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.52087);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.500575);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.529285);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.716103);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.353343);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.481913);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.468378);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.650441);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.412452);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.401114);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.471165);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.131151);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8979505);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1905211);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1097577);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03399719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.04462993);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1111496);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1459375);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.0341084);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.1847543);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02411083);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02632837);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.07571536);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1290034);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02419538);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1388276);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1290437);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(1,9.28126);
   hCCpi0inFV_stack_10->SetBinContent(2,17.18578);
   hCCpi0inFV_stack_10->SetBinContent(3,26.5045);
   hCCpi0inFV_stack_10->SetBinContent(4,27.43467);
   hCCpi0inFV_stack_10->SetBinContent(5,28.24611);
   hCCpi0inFV_stack_10->SetBinContent(6,26.75163);
   hCCpi0inFV_stack_10->SetBinContent(7,30.51979);
   hCCpi0inFV_stack_10->SetBinContent(8,36.11843);
   hCCpi0inFV_stack_10->SetBinContent(9,34.92073);
   hCCpi0inFV_stack_10->SetBinContent(10,33.01938);
   hCCpi0inFV_stack_10->SetBinContent(11,27.2819);
   hCCpi0inFV_stack_10->SetBinContent(12,32.70327);
   hCCpi0inFV_stack_10->SetBinContent(13,32.01514);
   hCCpi0inFV_stack_10->SetBinContent(14,35.85765);
   hCCpi0inFV_stack_10->SetBinContent(15,31.53357);
   hCCpi0inFV_stack_10->SetBinContent(16,30.3556);
   hCCpi0inFV_stack_10->SetBinContent(17,37.66957);
   hCCpi0inFV_stack_10->SetBinContent(18,36.91838);
   hCCpi0inFV_stack_10->SetBinContent(19,34.37626);
   hCCpi0inFV_stack_10->SetBinContent(20,40.0755);
   hCCpi0inFV_stack_10->SetBinContent(21,37.52786);
   hCCpi0inFV_stack_10->SetBinContent(22,34.58613);
   hCCpi0inFV_stack_10->SetBinContent(23,28.28481);
   hCCpi0inFV_stack_10->SetBinContent(24,32.84026);
   hCCpi0inFV_stack_10->SetBinContent(25,23.90804);
   hCCpi0inFV_stack_10->SetBinContent(26,8.931232);
   hCCpi0inFV_stack_10->SetBinContent(27,0.536893);
   hCCpi0inFV_stack_10->SetBinError(0,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(1,1.519706);
   hCCpi0inFV_stack_10->SetBinError(2,2.023147);
   hCCpi0inFV_stack_10->SetBinError(3,2.637676);
   hCCpi0inFV_stack_10->SetBinError(4,2.606297);
   hCCpi0inFV_stack_10->SetBinError(5,2.659142);
   hCCpi0inFV_stack_10->SetBinError(6,2.544267);
   hCCpi0inFV_stack_10->SetBinError(7,2.774401);
   hCCpi0inFV_stack_10->SetBinError(8,3.039393);
   hCCpi0inFV_stack_10->SetBinError(9,2.981482);
   hCCpi0inFV_stack_10->SetBinError(10,2.904363);
   hCCpi0inFV_stack_10->SetBinError(11,2.605102);
   hCCpi0inFV_stack_10->SetBinError(12,2.896834);
   hCCpi0inFV_stack_10->SetBinError(13,2.81001);
   hCCpi0inFV_stack_10->SetBinError(14,3.00602);
   hCCpi0inFV_stack_10->SetBinError(15,2.835809);
   hCCpi0inFV_stack_10->SetBinError(16,2.719731);
   hCCpi0inFV_stack_10->SetBinError(17,3.040032);
   hCCpi0inFV_stack_10->SetBinError(18,3.034931);
   hCCpi0inFV_stack_10->SetBinError(19,2.899629);
   hCCpi0inFV_stack_10->SetBinError(20,3.25347);
   hCCpi0inFV_stack_10->SetBinError(21,3.037653);
   hCCpi0inFV_stack_10->SetBinError(22,2.959316);
   hCCpi0inFV_stack_10->SetBinError(23,2.612892);
   hCCpi0inFV_stack_10->SetBinError(24,2.840402);
   hCCpi0inFV_stack_10->SetBinError(25,2.498483);
   hCCpi0inFV_stack_10->SetBinError(26,1.520976);
   hCCpi0inFV_stack_10->SetBinError(27,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1298672);
   hNCinFV_stack_11->SetBinContent(1,4.565652);
   hNCinFV_stack_11->SetBinContent(2,12.316);
   hNCinFV_stack_11->SetBinContent(3,12.18884);
   hNCinFV_stack_11->SetBinContent(4,17.6208);
   hNCinFV_stack_11->SetBinContent(5,17.49215);
   hNCinFV_stack_11->SetBinContent(6,18.73945);
   hNCinFV_stack_11->SetBinContent(7,17.98804);
   hNCinFV_stack_11->SetBinContent(8,22.72425);
   hNCinFV_stack_11->SetBinContent(9,22.47369);
   hNCinFV_stack_11->SetBinContent(10,19.13309);
   hNCinFV_stack_11->SetBinContent(11,20.80809);
   hNCinFV_stack_11->SetBinContent(12,18.57991);
   hNCinFV_stack_11->SetBinContent(13,21.16566);
   hNCinFV_stack_11->SetBinContent(14,19.35077);
   hNCinFV_stack_11->SetBinContent(15,16.03891);
   hNCinFV_stack_11->SetBinContent(16,21.18592);
   hNCinFV_stack_11->SetBinContent(17,19.24608);
   hNCinFV_stack_11->SetBinContent(18,19.00066);
   hNCinFV_stack_11->SetBinContent(19,21.67554);
   hNCinFV_stack_11->SetBinContent(20,21.4006);
   hNCinFV_stack_11->SetBinContent(21,18.41559);
   hNCinFV_stack_11->SetBinContent(22,16.31403);
   hNCinFV_stack_11->SetBinContent(23,20.31802);
   hNCinFV_stack_11->SetBinContent(24,13.45187);
   hNCinFV_stack_11->SetBinContent(25,10.68132);
   hNCinFV_stack_11->SetBinContent(26,1.489288);
   hNCinFV_stack_11->SetBinContent(27,0.5352025);
   hNCinFV_stack_11->SetBinError(0,0.1298672);
   hNCinFV_stack_11->SetBinError(1,1.1963);
   hNCinFV_stack_11->SetBinError(2,1.742023);
   hNCinFV_stack_11->SetBinError(3,1.821936);
   hNCinFV_stack_11->SetBinError(4,2.251763);
   hNCinFV_stack_11->SetBinError(5,2.176661);
   hNCinFV_stack_11->SetBinError(6,2.613164);
   hNCinFV_stack_11->SetBinError(7,2.200266);
   hNCinFV_stack_11->SetBinError(8,2.509569);
   hNCinFV_stack_11->SetBinError(9,2.900532);
   hNCinFV_stack_11->SetBinError(10,2.292625);
   hNCinFV_stack_11->SetBinError(11,2.555433);
   hNCinFV_stack_11->SetBinError(12,2.394039);
   hNCinFV_stack_11->SetBinError(13,2.639204);
   hNCinFV_stack_11->SetBinError(14,2.396918);
   hNCinFV_stack_11->SetBinError(15,2.100937);
   hNCinFV_stack_11->SetBinError(16,2.418243);
   hNCinFV_stack_11->SetBinError(17,2.230563);
   hNCinFV_stack_11->SetBinError(18,2.488005);
   hNCinFV_stack_11->SetBinError(19,2.554339);
   hNCinFV_stack_11->SetBinError(20,2.432056);
   hNCinFV_stack_11->SetBinError(21,2.243442);
   hNCinFV_stack_11->SetBinError(22,2.377953);
   hNCinFV_stack_11->SetBinError(23,2.51044);
   hNCinFV_stack_11->SetBinError(24,1.764507);
   hNCinFV_stack_11->SetBinError(25,1.725244);
   hNCinFV_stack_11->SetBinError(26,0.6142297);
   hNCinFV_stack_11->SetBinError(27,0.3921167);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,1.710423);
   hnumuCCinFV_stack_12->SetBinContent(2,7.387915);
   hnumuCCinFV_stack_12->SetBinContent(3,13.42552);
   hnumuCCinFV_stack_12->SetBinContent(4,11.72473);
   hnumuCCinFV_stack_12->SetBinContent(5,12.93803);
   hnumuCCinFV_stack_12->SetBinContent(6,11.81478);
   hnumuCCinFV_stack_12->SetBinContent(7,12.30977);
   hnumuCCinFV_stack_12->SetBinContent(8,14.65527);
   hnumuCCinFV_stack_12->SetBinContent(9,13.87002);
   hnumuCCinFV_stack_12->SetBinContent(10,19.51416);
   hnumuCCinFV_stack_12->SetBinContent(11,20.0242);
   hnumuCCinFV_stack_12->SetBinContent(12,22.79498);
   hnumuCCinFV_stack_12->SetBinContent(13,20.49358);
   hnumuCCinFV_stack_12->SetBinContent(14,23.82727);
   hnumuCCinFV_stack_12->SetBinContent(15,19.38926);
   hnumuCCinFV_stack_12->SetBinContent(16,19.97236);
   hnumuCCinFV_stack_12->SetBinContent(17,23.70939);
   hnumuCCinFV_stack_12->SetBinContent(18,22.53397);
   hnumuCCinFV_stack_12->SetBinContent(19,27.10243);
   hnumuCCinFV_stack_12->SetBinContent(20,21.18908);
   hnumuCCinFV_stack_12->SetBinContent(21,22.07668);
   hnumuCCinFV_stack_12->SetBinContent(22,18.18873);
   hnumuCCinFV_stack_12->SetBinContent(23,18.36218);
   hnumuCCinFV_stack_12->SetBinContent(24,17.07047);
   hnumuCCinFV_stack_12->SetBinContent(25,16.17661);
   hnumuCCinFV_stack_12->SetBinContent(26,7.142012);
   hnumuCCinFV_stack_12->SetBinError(1,0.6196373);
   hnumuCCinFV_stack_12->SetBinError(2,1.341934);
   hnumuCCinFV_stack_12->SetBinError(3,2.320754);
   hnumuCCinFV_stack_12->SetBinError(4,1.8592);
   hnumuCCinFV_stack_12->SetBinError(5,2.098772);
   hnumuCCinFV_stack_12->SetBinError(6,1.787359);
   hnumuCCinFV_stack_12->SetBinError(7,1.862276);
   hnumuCCinFV_stack_12->SetBinError(8,2.244966);
   hnumuCCinFV_stack_12->SetBinError(9,2.228971);
   hnumuCCinFV_stack_12->SetBinError(10,2.422316);
   hnumuCCinFV_stack_12->SetBinError(11,2.433092);
   hnumuCCinFV_stack_12->SetBinError(12,2.942415);
   hnumuCCinFV_stack_12->SetBinError(13,2.529007);
   hnumuCCinFV_stack_12->SetBinError(14,2.999841);
   hnumuCCinFV_stack_12->SetBinError(15,2.320031);
   hnumuCCinFV_stack_12->SetBinError(16,2.471603);
   hnumuCCinFV_stack_12->SetBinError(17,2.888003);
   hnumuCCinFV_stack_12->SetBinError(18,2.623429);
   hnumuCCinFV_stack_12->SetBinError(19,3.348585);
   hnumuCCinFV_stack_12->SetBinError(20,2.650603);
   hnumuCCinFV_stack_12->SetBinError(21,2.448954);
   hnumuCCinFV_stack_12->SetBinError(22,2.298288);
   hnumuCCinFV_stack_12->SetBinError(23,2.297119);
   hnumuCCinFV_stack_12->SetBinError(24,2.182124);
   hnumuCCinFV_stack_12->SetBinError(25,3.346012);
   hnumuCCinFV_stack_12->SetBinError(26,2.09286);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,0.7908461);
   hnueCCinFV_stack_13->SetBinContent(4,1.991975);
   hnueCCinFV_stack_13->SetBinContent(5,0.835849);
   hnueCCinFV_stack_13->SetBinContent(6,1.330562);
   hnueCCinFV_stack_13->SetBinContent(7,1.194656);
   hnueCCinFV_stack_13->SetBinContent(8,2.59821);
   hnueCCinFV_stack_13->SetBinContent(9,3.261176);
   hnueCCinFV_stack_13->SetBinContent(10,1.70796);
   hnueCCinFV_stack_13->SetBinContent(11,1.390059);
   hnueCCinFV_stack_13->SetBinContent(12,1.381212);
   hnueCCinFV_stack_13->SetBinContent(13,3.626661);
   hnueCCinFV_stack_13->SetBinContent(14,1.03682);
   hnueCCinFV_stack_13->SetBinContent(15,2.27622);
   hnueCCinFV_stack_13->SetBinContent(16,0.6556042);
   hnueCCinFV_stack_13->SetBinContent(17,3.304661);
   hnueCCinFV_stack_13->SetBinContent(18,2.220434);
   hnueCCinFV_stack_13->SetBinContent(19,1.60352);
   hnueCCinFV_stack_13->SetBinContent(20,3.375159);
   hnueCCinFV_stack_13->SetBinContent(21,1.931042);
   hnueCCinFV_stack_13->SetBinContent(22,1.016378);
   hnueCCinFV_stack_13->SetBinContent(23,1.76857);
   hnueCCinFV_stack_13->SetBinContent(24,1.093734);
   hnueCCinFV_stack_13->SetBinContent(25,0.6057764);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.468091);
   hnueCCinFV_stack_13->SetBinError(4,1.343669);
   hnueCCinFV_stack_13->SetBinError(5,0.42006);
   hnueCCinFV_stack_13->SetBinError(6,0.6257285);
   hnueCCinFV_stack_13->SetBinError(7,0.5124127);
   hnueCCinFV_stack_13->SetBinError(8,1.013496);
   hnueCCinFV_stack_13->SetBinError(9,1.147983);
   hnueCCinFV_stack_13->SetBinError(10,0.711689);
   hnueCCinFV_stack_13->SetBinError(11,0.5255532);
   hnueCCinFV_stack_13->SetBinError(12,0.5887294);
   hnueCCinFV_stack_13->SetBinError(13,1.413126);
   hnueCCinFV_stack_13->SetBinError(14,0.4647793);
   hnueCCinFV_stack_13->SetBinError(15,0.8899302);
   hnueCCinFV_stack_13->SetBinError(16,0.3825648);
   hnueCCinFV_stack_13->SetBinError(17,1.65395);
   hnueCCinFV_stack_13->SetBinError(18,0.8439939);
   hnueCCinFV_stack_13->SetBinError(19,0.9545291);
   hnueCCinFV_stack_13->SetBinError(20,1.038082);
   hnueCCinFV_stack_13->SetBinError(21,0.703014);
   hnueCCinFV_stack_13->SetBinError(22,0.5190566);
   hnueCCinFV_stack_13->SetBinError(23,0.7525515);
   hnueCCinFV_stack_13->SetBinError(24,0.4936907);
   hnueCCinFV_stack_13->SetBinError(25,0.4539029);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__5->SetBinContent(0,6.628728);
   hmcerror__5->SetBinContent(1,75.23212);
   hmcerror__5->SetBinContent(2,125.2281);
   hmcerror__5->SetBinContent(3,161.9341);
   hmcerror__5->SetBinContent(4,184.6691);
   hmcerror__5->SetBinContent(5,194.2897);
   hmcerror__5->SetBinContent(6,209.549);
   hmcerror__5->SetBinContent(7,197.4987);
   hmcerror__5->SetBinContent(8,216.33);
   hmcerror__5->SetBinContent(9,222.9472);
   hmcerror__5->SetBinContent(10,218.0799);
   hmcerror__5->SetBinContent(11,228.022);
   hmcerror__5->SetBinContent(12,220.4936);
   hmcerror__5->SetBinContent(13,224.1534);
   hmcerror__5->SetBinContent(14,233.5343);
   hmcerror__5->SetBinContent(15,219.7448);
   hmcerror__5->SetBinContent(16,225.3417);
   hmcerror__5->SetBinContent(17,245.8858);
   hmcerror__5->SetBinContent(18,231.1199);
   hmcerror__5->SetBinContent(19,234.9353);
   hmcerror__5->SetBinContent(20,248.6287);
   hmcerror__5->SetBinContent(21,236.4953);
   hmcerror__5->SetBinContent(22,224.0809);
   hmcerror__5->SetBinContent(23,212.0074);
   hmcerror__5->SetBinContent(24,185.6021);
   hmcerror__5->SetBinContent(25,142.4801);
   hmcerror__5->SetBinContent(26,54.58936);
   hmcerror__5->SetBinContent(27,5.450373);
   hmcerror__5->SetBinError(0,1.206698);
   hmcerror__5->SetBinError(1,23.85419);
   hmcerror__5->SetBinError(2,37.53951);
   hmcerror__5->SetBinError(3,49.90249);
   hmcerror__5->SetBinError(4,49.80606);
   hmcerror__5->SetBinError(5,63.44769);
   hmcerror__5->SetBinError(6,59.63711);
   hmcerror__5->SetBinError(7,57.67631);
   hmcerror__5->SetBinError(8,69.27857);
   hmcerror__5->SetBinError(9,61.67793);
   hmcerror__5->SetBinError(10,60.60517);
   hmcerror__5->SetBinError(11,65.1595);
   hmcerror__5->SetBinError(12,64.02507);
   hmcerror__5->SetBinError(13,60.92626);
   hmcerror__5->SetBinError(14,65.05816);
   hmcerror__5->SetBinError(15,62.63885);
   hmcerror__5->SetBinError(16,63.27594);
   hmcerror__5->SetBinError(17,64.24174);
   hmcerror__5->SetBinError(18,69.18593);
   hmcerror__5->SetBinError(19,63.58123);
   hmcerror__5->SetBinError(20,64.4801);
   hmcerror__5->SetBinError(21,65.95369);
   hmcerror__5->SetBinError(22,58.92278);
   hmcerror__5->SetBinError(23,58.6273);
   hmcerror__5->SetBinError(24,50.89562);
   hmcerror__5->SetBinError(25,39.72296);
   hmcerror__5->SetBinError(26,21.69768);
   hmcerror__5->SetBinError(27,5.474712);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3005[26] = {
   72,
   109,
   164,
   172,
   173,
   186,
   193,
   200,
   240,
   234,
   241,
   223,
   243,
   219,
   223,
   232,
   223,
   223,
   201,
   211,
   227,
   229,
   210,
   141,
   127,
   48};
   Double_t _felx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3005[26] = {
   8.6108,
   10.44031,
   12.80625,
   13.11488,
   13.15295,
   13.63818,
   13.89244,
   14.14214,
   15.49193,
   15.29706,
   15.52417,
   14.93318,
   15.58846,
   14.79865,
   14.93318,
   15.23155,
   14.93318,
   14.93318,
   14.17745,
   14.52584,
   15.06652,
   15.13275,
   14.49138,
   11.87434,
   11.26943,
   7.0604};
   Double_t _fehx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3005[26] = {
   8.4085,
   10.44031,
   12.80625,
   13.11488,
   13.15295,
   13.63818,
   13.89244,
   14.14214,
   15.49193,
   15.29706,
   15.52417,
   14.93318,
   15.58846,
   14.79865,
   14.93318,
   15.23155,
   14.93318,
   14.93318,
   14.17745,
   14.52584,
   15.06652,
   15.13275,
   14.49138,
   11.87434,
   11.26943,
   6.8561};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,286);
   Graph_Graph3005->SetMinimum(19.17471);
   Graph_Graph3005->SetMaximum(280.3533);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.3/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4964.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.2","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.3","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 48.9","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 363.7","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1950.5","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  405.9","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 774.8","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 444.4","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3006[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3006[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3006[26] = {
   0.3170745,
   0.2997689,
   0.3081654,
   0.2697044,
   0.3265624,
   0.2845975,
   0.2920339,
   0.3202449,
   0.2766481,
   0.2779035,
   0.2857597,
   0.2903716,
   0.2718061,
   0.2785807,
   0.2850527,
   0.2807999,
   0.2612666,
   0.2993508,
   0.270633,
   0.2593429,
   0.2788795,
   0.2629532,
   0.2765343,
   0.2742191,
   0.2787966,
   0.3974708};
   Double_t _fehx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3006[26] = {
   0.3170745,
   0.2997689,
   0.3081654,
   0.2697044,
   0.3265624,
   0.2845975,
   0.2920339,
   0.3202449,
   0.2766481,
   0.2779035,
   0.2857597,
   0.2903716,
   0.2718061,
   0.2785807,
   0.2850527,
   0.2807999,
   0.2612666,
   0.2993508,
   0.270633,
   0.2593429,
   0.2788795,
   0.2629532,
   0.2765343,
   0.2742191,
   0.2787966,
   0.3974708};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,286);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3007[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3007[26] = {
   0.2622752,
   0.2626337,
   0.2624798,
   0.2571786,
   0.2927866,
   0.2692807,
   0.2768673,
   0.2896103,
   0.2593725,
   0.2578226,
   0.2728831,
   0.2666567,
   0.2540215,
   0.2609351,
   0.2678524,
   0.2561777,
   0.2418453,
   0.2576383,
   0.2530651,
   0.2408337,
   0.2560987,
   0.242262,
   0.244866,
   0.249128,
   0.2363723,
   0.2764484};
   Double_t _fehx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3007[26] = {
   0.2622752,
   0.2626337,
   0.2624798,
   0.2571786,
   0.2927866,
   0.2692807,
   0.2768673,
   0.2896103,
   0.2593725,
   0.2578226,
   0.2728831,
   0.2666567,
   0.2540215,
   0.2609351,
   0.2678524,
   0.2561777,
   0.2418453,
   0.2576383,
   0.2530651,
   0.2408337,
   0.2560987,
   0.242262,
   0.244866,
   0.249128,
   0.2363723,
   0.2764484};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,286);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3008[26] = {
   0.957038,
   0.8704114,
   1.012758,
   0.9313957,
   0.890423,
   0.8876206,
   0.9772218,
   0.9245137,
   1.076488,
   1.073001,
   1.056915,
   1.011367,
   1.084079,
   0.9377636,
   1.014813,
   1.029548,
   0.9069252,
   0.9648673,
   0.8555547,
   0.848655,
   0.95985,
   1.021952,
   0.9905317,
   0.7596899,
   0.8913527,
   0.8792922};
   Double_t _felx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3008[26] = {
   0.1144564,
   0.08337029,
   0.07908308,
   0.07101825,
   0.06769761,
   0.0650835,
   0.07034197,
   0.06537299,
   0.069487,
   0.07014429,
   0.06808191,
   0.06772617,
   0.0695437,
   0.06336819,
   0.06795693,
   0.06759311,
   0.0607322,
   0.06461229,
   0.06034618,
   0.05842382,
   0.06370748,
   0.06753252,
   0.06835318,
   0.06397743,
   0.07909476,
   0.1293366};
   Double_t _fehx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3008[26] = {
   0.1117674,
   0.08337029,
   0.07908308,
   0.07101825,
   0.06769761,
   0.0650835,
   0.07034197,
   0.06537299,
   0.069487,
   0.07014429,
   0.06808191,
   0.06772617,
   0.0695437,
   0.06336819,
   0.06795693,
   0.06759311,
   0.0607322,
   0.06461229,
   0.06034618,
   0.05842382,
   0.06370748,
   0.06753252,
   0.06835318,
   0.06397743,
   0.07909476,
   0.1255941};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,286);
   Graph_Graph3008->SetMinimum(0.6499214);
   Graph_Graph3008->SetMaximum(1.199414);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sun Oct 23 14:05:11 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-61.53846,-12.18,451.2821,1346.852);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hmc__4->SetBinContent(1,124.0795);
   hmc__4->SetBinContent(2,173.0298);
   hmc__4->SetBinContent(3,189.6095);
   hmc__4->SetBinContent(4,198.7072);
   hmc__4->SetBinContent(5,208.2467);
   hmc__4->SetBinContent(6,235.7496);
   hmc__4->SetBinContent(7,238.1274);
   hmc__4->SetBinContent(8,247.779);
   hmc__4->SetBinContent(9,322.425);
   hmc__4->SetBinContent(10,419.0652);
   hmc__4->SetBinContent(11,488.2363);
   hmc__4->SetBinContent(12,557.084);
   hmc__4->SetBinContent(13,488.9013);
   hmc__4->SetBinContent(14,300.8721);
   hmc__4->SetBinContent(15,166.2989);
   hmc__4->SetBinContent(16,112.8367);
   hmc__4->SetBinContent(17,82.94022);
   hmc__4->SetBinContent(18,63.27137);
   hmc__4->SetBinContent(19,51.71125);
   hmc__4->SetBinContent(20,52.80542);
   hmc__4->SetBinContent(21,51.19112);
   hmc__4->SetBinContent(22,37.31064);
   hmc__4->SetBinContent(23,30.71437);
   hmc__4->SetBinContent(24,32.29883);
   hmc__4->SetBinContent(25,24.75357);
   hmc__4->SetBinContent(26,23.98773);
   hmc__4->SetBinContent(27,27.24191);
   hmc__4->SetBinContent(28,18.59179);
   hmc__4->SetBinContent(29,21.75991);
   hmc__4->SetBinContent(30,18.04866);
   hmc__4->SetBinContent(31,17.59388);
   hmc__4->SetBinContent(32,14.5163);
   hmc__4->SetBinContent(33,12.19672);
   hmc__4->SetBinContent(34,10.0832);
   hmc__4->SetBinContent(35,122.8857);
   hmc__4->SetBinError(1,37.43639);
   hmc__4->SetBinError(2,43.31757);
   hmc__4->SetBinError(3,45.28264);
   hmc__4->SetBinError(4,47.97787);
   hmc__4->SetBinError(5,55.91314);
   hmc__4->SetBinError(6,56.13039);
   hmc__4->SetBinError(7,78.42312);
   hmc__4->SetBinError(8,82.83467);
   hmc__4->SetBinError(9,97.55769);
   hmc__4->SetBinError(10,136.7914);
   hmc__4->SetBinError(11,161.2263);
   hmc__4->SetBinError(12,176.6563);
   hmc__4->SetBinError(13,157.5874);
   hmc__4->SetBinError(14,111.8758);
   hmc__4->SetBinError(15,66.27746);
   hmc__4->SetBinError(16,31.96309);
   hmc__4->SetBinError(17,32.07131);
   hmc__4->SetBinError(18,24.0331);
   hmc__4->SetBinError(19,22.46266);
   hmc__4->SetBinError(20,25.90097);
   hmc__4->SetBinError(21,20.0031);
   hmc__4->SetBinError(22,16.67683);
   hmc__4->SetBinError(23,15.58752);
   hmc__4->SetBinError(24,15.68562);
   hmc__4->SetBinError(25,14.59523);
   hmc__4->SetBinError(26,11.81949);
   hmc__4->SetBinError(27,15.40912);
   hmc__4->SetBinError(28,11.34411);
   hmc__4->SetBinError(29,15.14006);
   hmc__4->SetBinError(30,12.08819);
   hmc__4->SetBinError(31,12.15396);
   hmc__4->SetBinError(32,10.48827);
   hmc__4->SetBinError(33,9.528964);
   hmc__4->SetBinError(34,8.340299);
   hmc__4->SetBinError(35,42.53582);
   hmc__4->SetMinimum(-12.18);
   hmc__4->SetMaximum(1278.9);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",34,0,400);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(584.9383);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,5.279647);
   hbadmatch_stack_1->SetBinContent(2,7.321486);
   hbadmatch_stack_1->SetBinContent(3,6.945649);
   hbadmatch_stack_1->SetBinContent(4,4.845598);
   hbadmatch_stack_1->SetBinContent(5,5.348628);
   hbadmatch_stack_1->SetBinContent(6,8.537209);
   hbadmatch_stack_1->SetBinContent(7,9.015978);
   hbadmatch_stack_1->SetBinContent(8,5.397093);
   hbadmatch_stack_1->SetBinContent(9,7.340068);
   hbadmatch_stack_1->SetBinContent(10,8.171576);
   hbadmatch_stack_1->SetBinContent(11,7.88413);
   hbadmatch_stack_1->SetBinContent(12,10.68044);
   hbadmatch_stack_1->SetBinContent(13,5.275099);
   hbadmatch_stack_1->SetBinContent(14,7.950661);
   hbadmatch_stack_1->SetBinContent(15,4.724881);
   hbadmatch_stack_1->SetBinContent(16,3.571245);
   hbadmatch_stack_1->SetBinContent(17,1.444068);
   hbadmatch_stack_1->SetBinContent(18,1.128282);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.9827781);
   hbadmatch_stack_1->SetBinContent(21,1.264132);
   hbadmatch_stack_1->SetBinContent(22,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,1.838087);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(25,0.5017479);
   hbadmatch_stack_1->SetBinContent(26,0.3917402);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.4207742);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(33,0.3807468);
   hbadmatch_stack_1->SetBinContent(34,0.3204102);
   hbadmatch_stack_1->SetBinContent(35,0.8163177);
   hbadmatch_stack_1->SetBinError(1,1.327774);
   hbadmatch_stack_1->SetBinError(2,1.433736);
   hbadmatch_stack_1->SetBinError(3,1.352507);
   hbadmatch_stack_1->SetBinError(4,1.101462);
   hbadmatch_stack_1->SetBinError(5,1.267983);
   hbadmatch_stack_1->SetBinError(6,1.640383);
   hbadmatch_stack_1->SetBinError(7,1.509132);
   hbadmatch_stack_1->SetBinError(8,1.372545);
   hbadmatch_stack_1->SetBinError(9,1.397439);
   hbadmatch_stack_1->SetBinError(10,1.474522);
   hbadmatch_stack_1->SetBinError(11,1.40693);
   hbadmatch_stack_1->SetBinError(12,2.336607);
   hbadmatch_stack_1->SetBinError(13,1.604858);
   hbadmatch_stack_1->SetBinError(14,2.059862);
   hbadmatch_stack_1->SetBinError(15,2.100966);
   hbadmatch_stack_1->SetBinError(16,1.181167);
   hbadmatch_stack_1->SetBinError(17,0.5684905);
   hbadmatch_stack_1->SetBinError(18,0.5188501);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.5301044);
   hbadmatch_stack_1->SetBinError(21,0.5366536);
   hbadmatch_stack_1->SetBinError(22,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.8593295);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(25,0.4126089);
   hbadmatch_stack_1->SetBinError(26,0.2770047);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.4207742);
   hbadmatch_stack_1->SetBinError(29,0.4753932);
   hbadmatch_stack_1->SetBinError(33,0.269309);
   hbadmatch_stack_1->SetBinError(34,0.2323733);
   hbadmatch_stack_1->SetBinError(35,0.6163994);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,16.21754);
   hext_stack_2->SetBinContent(2,27.9366);
   hext_stack_2->SetBinContent(3,31.59164);
   hext_stack_2->SetBinContent(4,34.10178);
   hext_stack_2->SetBinContent(5,25.74921);
   hext_stack_2->SetBinContent(6,33.58426);
   hext_stack_2->SetBinContent(7,20.20693);
   hext_stack_2->SetBinContent(8,29.14922);
   hext_stack_2->SetBinContent(9,26.45149);
   hext_stack_2->SetBinContent(10,40.86387);
   hext_stack_2->SetBinContent(11,27.92066);
   hext_stack_2->SetBinContent(12,39.52439);
   hext_stack_2->SetBinContent(13,45.97964);
   hext_stack_2->SetBinContent(14,12.89697);
   hext_stack_2->SetBinContent(15,10.02923);
   hext_stack_2->SetBinContent(16,6.896183);
   hext_stack_2->SetBinContent(17,4.5432);
   hext_stack_2->SetBinContent(18,3.483397);
   hext_stack_2->SetBinContent(19,2.345802);
   hext_stack_2->SetBinContent(20,2.357392);
   hext_stack_2->SetBinContent(21,5.88986);
   hext_stack_2->SetBinContent(22,2.763991);
   hext_stack_2->SetBinContent(23,1.544194);
   hext_stack_2->SetBinContent(24,3.539649);
   hext_stack_2->SetBinContent(25,1.461993);
   hext_stack_2->SetBinContent(26,1.454812);
   hext_stack_2->SetBinContent(27,1.697008);
   hext_stack_2->SetBinContent(28,0.7309963);
   hext_stack_2->SetBinContent(29,1.055394);
   hext_stack_2->SetBinContent(30,1.048213);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinContent(32,0.3243973);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,2.27519);
   hext_stack_2->SetBinError(1,2.864897);
   hext_stack_2->SetBinError(2,3.706048);
   hext_stack_2->SetBinError(3,3.709064);
   hext_stack_2->SetBinError(4,4.025627);
   hext_stack_2->SetBinError(5,3.304551);
   hext_stack_2->SetBinError(6,4.096959);
   hext_stack_2->SetBinError(7,2.792438);
   hext_stack_2->SetBinError(8,3.798942);
   hext_stack_2->SetBinError(9,3.463441);
   hext_stack_2->SetBinError(10,4.452414);
   hext_stack_2->SetBinError(11,3.512169);
   hext_stack_2->SetBinError(12,4.297916);
   hext_stack_2->SetBinError(13,4.884267);
   hext_stack_2->SetBinError(14,2.256579);
   hext_stack_2->SetBinError(15,2.130374);
   hext_stack_2->SetBinError(16,1.65573);
   hext_stack_2->SetBinError(17,1.394531);
   hext_stack_2->SetBinError(18,1.197416);
   hext_stack_2->SetBinError(19,0.9989624);
   hext_stack_2->SetBinError(20,0.9653222);
   hext_stack_2->SetBinError(21,1.759382);
   hext_stack_2->SetBinError(22,1.047459);
   hext_stack_2->SetBinError(23,0.7753719);
   hext_stack_2->SetBinError(24,1.400848);
   hext_stack_2->SetBinError(25,0.7356036);
   hext_stack_2->SetBinError(26,0.8615765);
   hext_stack_2->SetBinError(27,0.8873887);
   hext_stack_2->SetBinError(28,0.5201503);
   hext_stack_2->SetBinError(29,0.6130171);
   hext_stack_2->SetBinError(30,0.7595995);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetBinError(32,0.3243973);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.9336798);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.57221);
   hdirt_stack_3->SetBinContent(2,2.634583);
   hdirt_stack_3->SetBinContent(3,2.684582);
   hdirt_stack_3->SetBinContent(4,3.542492);
   hdirt_stack_3->SetBinContent(5,4.533606);
   hdirt_stack_3->SetBinContent(6,3.683089);
   hdirt_stack_3->SetBinContent(7,3.302553);
   hdirt_stack_3->SetBinContent(8,2.385962);
   hdirt_stack_3->SetBinContent(9,1.718003);
   hdirt_stack_3->SetBinContent(10,4.344272);
   hdirt_stack_3->SetBinContent(11,3.795119);
   hdirt_stack_3->SetBinContent(12,3.766932);
   hdirt_stack_3->SetBinContent(13,3.637158);
   hdirt_stack_3->SetBinContent(14,1.37123);
   hdirt_stack_3->SetBinContent(15,2.110102);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinContent(20,1.091433);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.4713104);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinContent(26,0.2761429);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.6895089);
   hdirt_stack_3->SetBinError(2,0.9312388);
   hdirt_stack_3->SetBinError(3,0.8884392);
   hdirt_stack_3->SetBinError(4,0.9314717);
   hdirt_stack_3->SetBinError(5,1.111099);
   hdirt_stack_3->SetBinError(6,0.8733856);
   hdirt_stack_3->SetBinError(7,0.9818136);
   hdirt_stack_3->SetBinError(8,0.7905768);
   hdirt_stack_3->SetBinError(9,0.5997387);
   hdirt_stack_3->SetBinError(10,1.625751);
   hdirt_stack_3->SetBinError(11,1.035075);
   hdirt_stack_3->SetBinError(12,1.051078);
   hdirt_stack_3->SetBinError(13,0.9121184);
   hdirt_stack_3->SetBinError(14,0.6158577);
   hdirt_stack_3->SetBinError(15,0.8275084);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetBinError(20,0.552635);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.3341085);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetBinError(26,0.1952625);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetBinError(29,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,12.95952);
   houtFV_stack_4->SetBinContent(2,17.00698);
   houtFV_stack_4->SetBinContent(3,20.6706);
   houtFV_stack_4->SetBinContent(4,19.11396);
   houtFV_stack_4->SetBinContent(5,15.41341);
   houtFV_stack_4->SetBinContent(6,21.91491);
   houtFV_stack_4->SetBinContent(7,20.12645);
   houtFV_stack_4->SetBinContent(8,17.51939);
   houtFV_stack_4->SetBinContent(9,24.24721);
   houtFV_stack_4->SetBinContent(10,30.29804);
   houtFV_stack_4->SetBinContent(11,26.73579);
   houtFV_stack_4->SetBinContent(12,30.747);
   houtFV_stack_4->SetBinContent(13,31.64227);
   houtFV_stack_4->SetBinContent(14,21.1105);
   houtFV_stack_4->SetBinContent(15,9.743187);
   houtFV_stack_4->SetBinContent(16,5.609766);
   houtFV_stack_4->SetBinContent(17,5.556635);
   houtFV_stack_4->SetBinContent(18,4.624538);
   houtFV_stack_4->SetBinContent(19,5.346867);
   houtFV_stack_4->SetBinContent(20,4.330648);
   houtFV_stack_4->SetBinContent(21,2.92297);
   houtFV_stack_4->SetBinContent(22,3.139927);
   houtFV_stack_4->SetBinContent(23,2.119543);
   houtFV_stack_4->SetBinContent(24,1.588948);
   houtFV_stack_4->SetBinContent(25,1.713804);
   houtFV_stack_4->SetBinContent(26,1.545585);
   houtFV_stack_4->SetBinContent(27,1.717194);
   houtFV_stack_4->SetBinContent(28,1.202537);
   houtFV_stack_4->SetBinContent(29,1.360255);
   houtFV_stack_4->SetBinContent(30,0.8178564);
   houtFV_stack_4->SetBinContent(31,1.091527);
   houtFV_stack_4->SetBinContent(32,0.5619521);
   houtFV_stack_4->SetBinContent(33,0.1967154);
   houtFV_stack_4->SetBinContent(35,6.428065);
   houtFV_stack_4->SetBinError(1,1.906741);
   houtFV_stack_4->SetBinError(2,2.064551);
   houtFV_stack_4->SetBinError(3,2.350725);
   houtFV_stack_4->SetBinError(4,2.206924);
   houtFV_stack_4->SetBinError(5,1.933571);
   houtFV_stack_4->SetBinError(6,2.336589);
   houtFV_stack_4->SetBinError(7,2.205062);
   houtFV_stack_4->SetBinError(8,2.085328);
   houtFV_stack_4->SetBinError(9,2.500869);
   houtFV_stack_4->SetBinError(10,2.700067);
   houtFV_stack_4->SetBinError(11,2.535252);
   houtFV_stack_4->SetBinError(12,2.743028);
   houtFV_stack_4->SetBinError(13,2.807532);
   houtFV_stack_4->SetBinError(14,2.322267);
   houtFV_stack_4->SetBinError(15,1.481119);
   houtFV_stack_4->SetBinError(16,1.141418);
   houtFV_stack_4->SetBinError(17,1.152519);
   houtFV_stack_4->SetBinError(18,1.132552);
   houtFV_stack_4->SetBinError(19,1.08308);
   houtFV_stack_4->SetBinError(20,1.033837);
   houtFV_stack_4->SetBinError(21,0.7940993);
   houtFV_stack_4->SetBinError(22,0.816344);
   houtFV_stack_4->SetBinError(23,0.7135473);
   houtFV_stack_4->SetBinError(24,0.6650071);
   houtFV_stack_4->SetBinError(25,0.6207051);
   houtFV_stack_4->SetBinError(26,0.6466997);
   houtFV_stack_4->SetBinError(27,0.6217878);
   houtFV_stack_4->SetBinError(28,0.5704492);
   houtFV_stack_4->SetBinError(29,0.5701118);
   houtFV_stack_4->SetBinError(30,0.409943);
   houtFV_stack_4->SetBinError(31,0.5210766);
   houtFV_stack_4->SetBinError(32,0.3251211);
   houtFV_stack_4->SetBinError(33,0.1967154);
   houtFV_stack_4->SetBinError(35,1.350741);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.537136);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.151564);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.24459);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.419769);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.603576);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.892364);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.433603);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.461442);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.19743);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,8.424762);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,10.53923);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,10.99524);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,12.84032);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.807149);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.911559);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.344353);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.306322);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.58411);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.063163);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8026644);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.4343);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.780319);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6815824);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1789641);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4671284);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.3844095);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.698489);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.521157);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.2487242);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.3012904);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.4050895);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.09912433);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.5951371);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.400821);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4231021);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6959062);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5304959);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6739401);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5159439);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5564566);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4682721);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6298326);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8623419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9666355);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.24668);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.271517);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.366327);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.037006);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.902118);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8037426);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3108171);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7033258);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4117603);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.377753);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5329711);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2291115);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2536017);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1088571);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1978592);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2707058);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.3217722);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1963209);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.2047515);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1608931);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.2852763);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.08551757);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3477713);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.436895);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2094316);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5537993);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2710672);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3601947);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4990132);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8444445);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9422);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5052887);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.218392);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.692174);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.907544);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.033234);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.209481);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.471043);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5174733);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4559175);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.0462512);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1827291);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.204266);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2490974);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1620379);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.05330649);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1588909);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.04146549);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08909542);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1813534);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1155547);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1658796);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1841247);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3565687);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2454483);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.15356);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2868242);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3752793);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3537236);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4097069);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.5282396);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3741269);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1782966);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2034218);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03342979);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1243396);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1323506);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1332973);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.09051211);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.03080086);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1307963);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.02971407);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,33.45885);
   hNCpi0inFVres_stack_7->SetBinContent(2,47.51876);
   hNCpi0inFVres_stack_7->SetBinContent(3,47.39782);
   hNCpi0inFVres_stack_7->SetBinContent(4,60.43938);
   hNCpi0inFVres_stack_7->SetBinContent(5,66.5561);
   hNCpi0inFVres_stack_7->SetBinContent(6,75.46342);
   hNCpi0inFVres_stack_7->SetBinContent(7,85.82008);
   hNCpi0inFVres_stack_7->SetBinContent(8,95.01486);
   hNCpi0inFVres_stack_7->SetBinContent(9,130.0397);
   hNCpi0inFVres_stack_7->SetBinContent(10,178.5501);
   hNCpi0inFVres_stack_7->SetBinContent(11,233.3592);
   hNCpi0inFVres_stack_7->SetBinContent(12,261.6554);
   hNCpi0inFVres_stack_7->SetBinContent(13,216.3939);
   hNCpi0inFVres_stack_7->SetBinContent(14,133.8348);
   hNCpi0inFVres_stack_7->SetBinContent(15,67.16579);
   hNCpi0inFVres_stack_7->SetBinContent(16,41.96098);
   hNCpi0inFVres_stack_7->SetBinContent(17,27.65045);
   hNCpi0inFVres_stack_7->SetBinContent(18,20.67724);
   hNCpi0inFVres_stack_7->SetBinContent(19,16.01099);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.65487);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.99363);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.07598);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.707668);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.100963);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.79691);
   hNCpi0inFVres_stack_7->SetBinContent(26,6.931178);
   hNCpi0inFVres_stack_7->SetBinContent(27,5.957192);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.074407);
   hNCpi0inFVres_stack_7->SetBinContent(29,4.923468);
   hNCpi0inFVres_stack_7->SetBinContent(30,3.983749);
   hNCpi0inFVres_stack_7->SetBinContent(31,3.563892);
   hNCpi0inFVres_stack_7->SetBinContent(32,1.986463);
   hNCpi0inFVres_stack_7->SetBinContent(33,4.30905);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.69049);
   hNCpi0inFVres_stack_7->SetBinContent(35,17.22228);
   hNCpi0inFVres_stack_7->SetBinError(1,1.874507);
   hNCpi0inFVres_stack_7->SetBinError(2,2.405295);
   hNCpi0inFVres_stack_7->SetBinError(3,2.289243);
   hNCpi0inFVres_stack_7->SetBinError(4,2.680902);
   hNCpi0inFVres_stack_7->SetBinError(5,2.714836);
   hNCpi0inFVres_stack_7->SetBinError(6,2.848452);
   hNCpi0inFVres_stack_7->SetBinError(7,3.137884);
   hNCpi0inFVres_stack_7->SetBinError(8,3.15249);
   hNCpi0inFVres_stack_7->SetBinError(9,3.687249);
   hNCpi0inFVres_stack_7->SetBinError(10,4.197251);
   hNCpi0inFVres_stack_7->SetBinError(11,4.818983);
   hNCpi0inFVres_stack_7->SetBinError(12,5.18137);
   hNCpi0inFVres_stack_7->SetBinError(13,4.712615);
   hNCpi0inFVres_stack_7->SetBinError(14,3.826643);
   hNCpi0inFVres_stack_7->SetBinError(15,2.824594);
   hNCpi0inFVres_stack_7->SetBinError(16,2.226622);
   hNCpi0inFVres_stack_7->SetBinError(17,1.821697);
   hNCpi0inFVres_stack_7->SetBinError(18,1.415802);
   hNCpi0inFVres_stack_7->SetBinError(19,1.340448);
   hNCpi0inFVres_stack_7->SetBinError(20,1.229799);
   hNCpi0inFVres_stack_7->SetBinError(21,1.143833);
   hNCpi0inFVres_stack_7->SetBinError(22,1.072353);
   hNCpi0inFVres_stack_7->SetBinError(23,0.919437);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7849911);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8095553);
   hNCpi0inFVres_stack_7->SetBinError(26,1.045646);
   hNCpi0inFVres_stack_7->SetBinError(27,0.8705388);
   hNCpi0inFVres_stack_7->SetBinError(28,0.7366843);
   hNCpi0inFVres_stack_7->SetBinError(29,0.7902881);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7524953);
   hNCpi0inFVres_stack_7->SetBinError(31,0.6373991);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5244037);
   hNCpi0inFVres_stack_7->SetBinError(33,0.9538884);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5714226);
   hNCpi0inFVres_stack_7->SetBinError(35,1.490266);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.769177);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.68781);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.40347);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.16238);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.717);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.18559);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.14847);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.6719);
   hNCpi0inFVdis_stack_8->SetBinContent(9,23.41525);
   hNCpi0inFVdis_stack_8->SetBinContent(10,34.40186);
   hNCpi0inFVdis_stack_8->SetBinContent(11,45.50214);
   hNCpi0inFVdis_stack_8->SetBinContent(12,49.23203);
   hNCpi0inFVdis_stack_8->SetBinContent(13,42.61996);
   hNCpi0inFVdis_stack_8->SetBinContent(14,30.83604);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.5423);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.17753);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.836903);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.521208);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.518589);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.7135);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.283058);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.213718);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.531486);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.220294);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.8484765);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.360563);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.470886);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.950391);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.865072);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.200156);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.368847);
   hNCpi0inFVdis_stack_8->SetBinContent(32,1.19065);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.9263524);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.281565);
   hNCpi0inFVdis_stack_8->SetBinContent(35,8.605055);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8612689);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.186015);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.095116);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9692906);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.364258);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.251025);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.589788);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.419423);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.674034);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.961952);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.26372);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.357503);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.010451);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.950801);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.232264);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.111971);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.991659);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7922925);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8702554);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8275727);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4019229);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4375885);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6039824);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4743428);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2192337);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3209594);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.6283341);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.5836318);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.4763537);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3128846);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.4133027);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.4162327);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.4166957);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.3391269);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.197118);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03723348);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.04462993);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.3418667);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2195167);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.06344445);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02632953);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02632837);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1853775);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1341477);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03235999);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,10.06083);
   hCCpi0inFV_stack_10->SetBinContent(2,15.53201);
   hCCpi0inFV_stack_10->SetBinContent(3,19.87853);
   hCCpi0inFV_stack_10->SetBinContent(4,17.90734);
   hCCpi0inFV_stack_10->SetBinContent(5,23.44808);
   hCCpi0inFV_stack_10->SetBinContent(6,26.53802);
   hCCpi0inFV_stack_10->SetBinContent(7,32.38846);
   hCCpi0inFV_stack_10->SetBinContent(8,35.08317);
   hCCpi0inFV_stack_10->SetBinContent(9,51.00391);
   hCCpi0inFV_stack_10->SetBinContent(10,63.64557);
   hCCpi0inFV_stack_10->SetBinContent(11,74.28486);
   hCCpi0inFV_stack_10->SetBinContent(12,92.51487);
   hCCpi0inFV_stack_10->SetBinContent(13,78.9998);
   hCCpi0inFV_stack_10->SetBinContent(14,47.26135);
   hCCpi0inFV_stack_10->SetBinContent(15,27.03219);
   hCCpi0inFV_stack_10->SetBinContent(16,18.28067);
   hCCpi0inFV_stack_10->SetBinContent(17,15.5623);
   hCCpi0inFV_stack_10->SetBinContent(18,10.0518);
   hCCpi0inFV_stack_10->SetBinContent(19,8.851786);
   hCCpi0inFV_stack_10->SetBinContent(20,11.67526);
   hCCpi0inFV_stack_10->SetBinContent(21,8.438871);
   hCCpi0inFV_stack_10->SetBinContent(22,9.270035);
   hCCpi0inFV_stack_10->SetBinContent(23,5.660318);
   hCCpi0inFV_stack_10->SetBinContent(24,6.707668);
   hCCpi0inFV_stack_10->SetBinContent(25,5.075243);
   hCCpi0inFV_stack_10->SetBinContent(26,5.181749);
   hCCpi0inFV_stack_10->SetBinContent(27,6.197211);
   hCCpi0inFV_stack_10->SetBinContent(28,2.684076);
   hCCpi0inFV_stack_10->SetBinContent(29,5.673442);
   hCCpi0inFV_stack_10->SetBinContent(30,3.854671);
   hCCpi0inFV_stack_10->SetBinContent(31,3.129458);
   hCCpi0inFV_stack_10->SetBinContent(32,2.929362);
   hCCpi0inFV_stack_10->SetBinContent(33,2.245626);
   hCCpi0inFV_stack_10->SetBinContent(34,2.284224);
   hCCpi0inFV_stack_10->SetBinContent(35,26.5885);
   hCCpi0inFV_stack_10->SetBinError(1,1.636082);
   hCCpi0inFV_stack_10->SetBinError(2,1.98654);
   hCCpi0inFV_stack_10->SetBinError(3,2.325248);
   hCCpi0inFV_stack_10->SetBinError(4,2.068822);
   hCCpi0inFV_stack_10->SetBinError(5,2.373702);
   hCCpi0inFV_stack_10->SetBinError(6,2.535345);
   hCCpi0inFV_stack_10->SetBinError(7,2.833217);
   hCCpi0inFV_stack_10->SetBinError(8,3.033263);
   hCCpi0inFV_stack_10->SetBinError(9,3.513296);
   hCCpi0inFV_stack_10->SetBinError(10,3.976831);
   hCCpi0inFV_stack_10->SetBinError(11,4.353014);
   hCCpi0inFV_stack_10->SetBinError(12,4.816874);
   hCCpi0inFV_stack_10->SetBinError(13,4.412065);
   hCCpi0inFV_stack_10->SetBinError(14,3.462782);
   hCCpi0inFV_stack_10->SetBinError(15,2.612297);
   hCCpi0inFV_stack_10->SetBinError(16,2.113517);
   hCCpi0inFV_stack_10->SetBinError(17,1.949986);
   hCCpi0inFV_stack_10->SetBinError(18,1.61448);
   hCCpi0inFV_stack_10->SetBinError(19,1.535843);
   hCCpi0inFV_stack_10->SetBinError(20,1.669923);
   hCCpi0inFV_stack_10->SetBinError(21,1.433174);
   hCCpi0inFV_stack_10->SetBinError(22,1.582245);
   hCCpi0inFV_stack_10->SetBinError(23,1.225392);
   hCCpi0inFV_stack_10->SetBinError(24,1.312326);
   hCCpi0inFV_stack_10->SetBinError(25,1.177914);
   hCCpi0inFV_stack_10->SetBinError(26,1.144913);
   hCCpi0inFV_stack_10->SetBinError(27,1.286858);
   hCCpi0inFV_stack_10->SetBinError(28,0.7963257);
   hCCpi0inFV_stack_10->SetBinError(29,1.261029);
   hCCpi0inFV_stack_10->SetBinError(30,0.9287364);
   hCCpi0inFV_stack_10->SetBinError(31,0.9002741);
   hCCpi0inFV_stack_10->SetBinError(32,0.8777653);
   hCCpi0inFV_stack_10->SetBinError(33,0.7332843);
   hCCpi0inFV_stack_10->SetBinError(34,0.7442404);
   hCCpi0inFV_stack_10->SetBinError(35,2.566505);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,16.04284);
   hNCinFV_stack_11->SetBinContent(2,13.92931);
   hNCinFV_stack_11->SetBinContent(3,13.76171);
   hNCinFV_stack_11->SetBinContent(4,20.01769);
   hNCinFV_stack_11->SetBinContent(5,24.57578);
   hNCinFV_stack_11->SetBinContent(6,16.96801);
   hNCinFV_stack_11->SetBinContent(7,19.99134);
   hNCinFV_stack_11->SetBinContent(8,15.6554);
   hNCinFV_stack_11->SetBinContent(9,23.69297);
   hNCinFV_stack_11->SetBinContent(10,21.28238);
   hNCinFV_stack_11->SetBinContent(11,29.8562);
   hNCinFV_stack_11->SetBinContent(12,26.85578);
   hNCinFV_stack_11->SetBinContent(13,25.79978);
   hNCinFV_stack_11->SetBinContent(14,18.04548);
   hNCinFV_stack_11->SetBinContent(15,14.03822);
   hNCinFV_stack_11->SetBinContent(16,11.33383);
   hNCinFV_stack_11->SetBinContent(17,9.810848);
   hNCinFV_stack_11->SetBinContent(18,7.486853);
   hNCinFV_stack_11->SetBinContent(19,7.766418);
   hNCinFV_stack_11->SetBinContent(20,6.6134);
   hNCinFV_stack_11->SetBinContent(21,9.850847);
   hNCinFV_stack_11->SetBinContent(22,3.972582);
   hNCinFV_stack_11->SetBinContent(23,5.38833);
   hNCinFV_stack_11->SetBinContent(24,6.252625);
   hNCinFV_stack_11->SetBinContent(25,4.254064);
   hNCinFV_stack_11->SetBinContent(26,2.616461);
   hNCinFV_stack_11->SetBinContent(27,5.127252);
   hNCinFV_stack_11->SetBinContent(28,4.396314);
   hNCinFV_stack_11->SetBinContent(29,4.240645);
   hNCinFV_stack_11->SetBinContent(30,4.879131);
   hNCinFV_stack_11->SetBinContent(31,4.416649);
   hNCinFV_stack_11->SetBinContent(32,4.838757);
   hNCinFV_stack_11->SetBinContent(33,2.454681);
   hNCinFV_stack_11->SetBinContent(34,2.586396);
   hNCinFV_stack_11->SetBinContent(35,36.23034);
   hNCinFV_stack_11->SetBinError(1,2.050291);
   hNCinFV_stack_11->SetBinError(2,1.882931);
   hNCinFV_stack_11->SetBinError(3,1.878247);
   hNCinFV_stack_11->SetBinError(4,2.271864);
   hNCinFV_stack_11->SetBinError(5,2.589713);
   hNCinFV_stack_11->SetBinError(6,2.234174);
   hNCinFV_stack_11->SetBinError(7,2.319719);
   hNCinFV_stack_11->SetBinError(8,1.979567);
   hNCinFV_stack_11->SetBinError(9,2.461274);
   hNCinFV_stack_11->SetBinError(10,2.255941);
   hNCinFV_stack_11->SetBinError(11,3.010415);
   hNCinFV_stack_11->SetBinError(12,2.693621);
   hNCinFV_stack_11->SetBinError(13,2.836458);
   hNCinFV_stack_11->SetBinError(14,2.220463);
   hNCinFV_stack_11->SetBinError(15,1.961922);
   hNCinFV_stack_11->SetBinError(16,2.165461);
   hNCinFV_stack_11->SetBinError(17,1.728769);
   hNCinFV_stack_11->SetBinError(18,1.625835);
   hNCinFV_stack_11->SetBinError(19,1.693828);
   hNCinFV_stack_11->SetBinError(20,1.412952);
   hNCinFV_stack_11->SetBinError(21,1.897478);
   hNCinFV_stack_11->SetBinError(22,1.342099);
   hNCinFV_stack_11->SetBinError(23,1.243473);
   hNCinFV_stack_11->SetBinError(24,1.363534);
   hNCinFV_stack_11->SetBinError(25,1.28835);
   hNCinFV_stack_11->SetBinError(26,0.704381);
   hNCinFV_stack_11->SetBinError(27,1.241952);
   hNCinFV_stack_11->SetBinError(28,1.346957);
   hNCinFV_stack_11->SetBinError(29,1.055524);
   hNCinFV_stack_11->SetBinError(30,1.337407);
   hNCinFV_stack_11->SetBinError(31,1.323339);
   hNCinFV_stack_11->SetBinError(32,1.538413);
   hNCinFV_stack_11->SetBinError(33,0.8754111);
   hNCinFV_stack_11->SetBinError(34,0.9993096);
   hNCinFV_stack_11->SetBinError(35,3.417407);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,17.375);
   hnumuCCinFV_stack_12->SetBinContent(2,23.97146);
   hnumuCCinFV_stack_12->SetBinContent(3,29.41461);
   hnumuCCinFV_stack_12->SetBinContent(4,22.86299);
   hnumuCCinFV_stack_12->SetBinContent(5,23.87093);
   hnumuCCinFV_stack_12->SetBinContent(6,29.24162);
   hnumuCCinFV_stack_12->SetBinContent(7,24.17126);
   hnumuCCinFV_stack_12->SetBinContent(8,22.72067);
   hnumuCCinFV_stack_12->SetBinContent(9,25.628);
   hnumuCCinFV_stack_12->SetBinContent(10,25.54718);
   hnumuCCinFV_stack_12->SetBinContent(11,23.67814);
   hnumuCCinFV_stack_12->SetBinContent(12,26.27729);
   hnumuCCinFV_stack_12->SetBinContent(13,22.62654);
   hnumuCCinFV_stack_12->SetBinContent(14,17.37416);
   hnumuCCinFV_stack_12->SetBinContent(15,11.37634);
   hnumuCCinFV_stack_12->SetBinContent(16,9.90188);
   hnumuCCinFV_stack_12->SetBinContent(17,8.732981);
   hnumuCCinFV_stack_12->SetBinContent(18,8.08289);
   hnumuCCinFV_stack_12->SetBinContent(19,4.87513);
   hnumuCCinFV_stack_12->SetBinContent(20,5.837859);
   hnumuCCinFV_stack_12->SetBinContent(21,6.043113);
   hnumuCCinFV_stack_12->SetBinContent(22,2.954892);
   hnumuCCinFV_stack_12->SetBinContent(23,1.817719);
   hnumuCCinFV_stack_12->SetBinContent(24,4.303395);
   hnumuCCinFV_stack_12->SetBinContent(25,4.295891);
   hnumuCCinFV_stack_12->SetBinContent(26,3.584785);
   hnumuCCinFV_stack_12->SetBinContent(27,2.737718);
   hnumuCCinFV_stack_12->SetBinContent(28,2.414427);
   hnumuCCinFV_stack_12->SetBinContent(29,1.522465);
   hnumuCCinFV_stack_12->SetBinContent(30,1.857266);
   hnumuCCinFV_stack_12->SetBinContent(31,2.594896);
   hnumuCCinFV_stack_12->SetBinContent(32,2.008977);
   hnumuCCinFV_stack_12->SetBinContent(33,1.16259);
   hnumuCCinFV_stack_12->SetBinContent(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(35,18.34203);
   hnumuCCinFV_stack_12->SetBinError(1,2.246571);
   hnumuCCinFV_stack_12->SetBinError(2,3.20725);
   hnumuCCinFV_stack_12->SetBinError(3,3.471423);
   hnumuCCinFV_stack_12->SetBinError(4,2.733633);
   hnumuCCinFV_stack_12->SetBinError(5,3.096568);
   hnumuCCinFV_stack_12->SetBinError(6,2.930884);
   hnumuCCinFV_stack_12->SetBinError(7,2.978027);
   hnumuCCinFV_stack_12->SetBinError(8,2.88678);
   hnumuCCinFV_stack_12->SetBinError(9,2.90873);
   hnumuCCinFV_stack_12->SetBinError(10,2.798212);
   hnumuCCinFV_stack_12->SetBinError(11,2.683458);
   hnumuCCinFV_stack_12->SetBinError(12,2.823952);
   hnumuCCinFV_stack_12->SetBinError(13,3.608819);
   hnumuCCinFV_stack_12->SetBinError(14,2.217575);
   hnumuCCinFV_stack_12->SetBinError(15,1.968382);
   hnumuCCinFV_stack_12->SetBinError(16,1.677863);
   hnumuCCinFV_stack_12->SetBinError(17,1.486979);
   hnumuCCinFV_stack_12->SetBinError(18,1.456491);
   hnumuCCinFV_stack_12->SetBinError(19,1.16147);
   hnumuCCinFV_stack_12->SetBinError(20,1.318924);
   hnumuCCinFV_stack_12->SetBinError(21,1.412848);
   hnumuCCinFV_stack_12->SetBinError(22,0.8878838);
   hnumuCCinFV_stack_12->SetBinError(23,0.607821);
   hnumuCCinFV_stack_12->SetBinError(24,1.098202);
   hnumuCCinFV_stack_12->SetBinError(25,1.644105);
   hnumuCCinFV_stack_12->SetBinError(26,1.02343);
   hnumuCCinFV_stack_12->SetBinError(27,0.856599);
   hnumuCCinFV_stack_12->SetBinError(28,0.7422542);
   hnumuCCinFV_stack_12->SetBinError(29,0.6533531);
   hnumuCCinFV_stack_12->SetBinError(30,0.6799255);
   hnumuCCinFV_stack_12->SetBinError(31,0.762982);
   hnumuCCinFV_stack_12->SetBinError(32,0.6368921);
   hnumuCCinFV_stack_12->SetBinError(33,0.5348054);
   hnumuCCinFV_stack_12->SetBinError(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(35,2.106395);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.597298);
   hnueCCinFV_stack_13->SetBinContent(2,2.743158);
   hnueCCinFV_stack_13->SetBinContent(3,4.326392);
   hnueCCinFV_stack_13->SetBinContent(4,1.89313);
   hnueCCinFV_stack_13->SetBinContent(5,1.802316);
   hnueCCinFV_stack_13->SetBinContent(6,1.87115);
   hnueCCinFV_stack_13->SetBinContent(7,1.546137);
   hnueCCinFV_stack_13->SetBinContent(8,2.19892);
   hnueCCinFV_stack_13->SetBinContent(9,1.435297);
   hnueCCinFV_stack_13->SetBinContent(10,1.798834);
   hnueCCinFV_stack_13->SetBinContent(11,2.431471);
   hnueCCinFV_stack_13->SetBinContent(12,2.581951);
   hnueCCinFV_stack_13->SetBinContent(13,0.8139001);
   hnueCCinFV_stack_13->SetBinContent(14,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(15,1.091894);
   hnueCCinFV_stack_13->SetBinContent(16,1.304351);
   hnueCCinFV_stack_13->SetBinContent(17,0.9942417);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.4965161);
   hnueCCinFV_stack_13->SetBinContent(21,0.5320274);
   hnueCCinFV_stack_13->SetBinContent(22,1.112413);
   hnueCCinFV_stack_13->SetBinContent(23,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967203);
   hnueCCinFV_stack_13->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.270652);
   hnueCCinFV_stack_13->SetBinContent(35,4.935636);
   hnueCCinFV_stack_13->SetBinError(1,0.9306463);
   hnueCCinFV_stack_13->SetBinError(2,1.586513);
   hnueCCinFV_stack_13->SetBinError(3,1.357522);
   hnueCCinFV_stack_13->SetBinError(4,0.932585);
   hnueCCinFV_stack_13->SetBinError(5,0.6512078);
   hnueCCinFV_stack_13->SetBinError(6,0.784602);
   hnueCCinFV_stack_13->SetBinError(7,0.647449);
   hnueCCinFV_stack_13->SetBinError(8,1.36049);
   hnueCCinFV_stack_13->SetBinError(9,0.6583238);
   hnueCCinFV_stack_13->SetBinError(10,0.7528881);
   hnueCCinFV_stack_13->SetBinError(11,0.8614765);
   hnueCCinFV_stack_13->SetBinError(12,0.9490158);
   hnueCCinFV_stack_13->SetBinError(13,0.4078684);
   hnueCCinFV_stack_13->SetBinError(14,0.5197486);
   hnueCCinFV_stack_13->SetBinError(15,0.5776423);
   hnueCCinFV_stack_13->SetBinError(16,0.7149596);
   hnueCCinFV_stack_13->SetBinError(17,0.5109251);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.3585769);
   hnueCCinFV_stack_13->SetBinError(21,0.3765922);
   hnueCCinFV_stack_13->SetBinError(22,0.6463727);
   hnueCCinFV_stack_13->SetBinError(23,0.4078967);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3041673);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.270652);
   hnueCCinFV_stack_13->SetBinError(35,1.420589);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__5->SetBinContent(1,124.0795);
   hmcerror__5->SetBinContent(2,173.0298);
   hmcerror__5->SetBinContent(3,189.6095);
   hmcerror__5->SetBinContent(4,198.7072);
   hmcerror__5->SetBinContent(5,208.2467);
   hmcerror__5->SetBinContent(6,235.7496);
   hmcerror__5->SetBinContent(7,238.1274);
   hmcerror__5->SetBinContent(8,247.779);
   hmcerror__5->SetBinContent(9,322.425);
   hmcerror__5->SetBinContent(10,419.0652);
   hmcerror__5->SetBinContent(11,488.2363);
   hmcerror__5->SetBinContent(12,557.084);
   hmcerror__5->SetBinContent(13,488.9013);
   hmcerror__5->SetBinContent(14,300.8721);
   hmcerror__5->SetBinContent(15,166.2989);
   hmcerror__5->SetBinContent(16,112.8367);
   hmcerror__5->SetBinContent(17,82.94022);
   hmcerror__5->SetBinContent(18,63.27137);
   hmcerror__5->SetBinContent(19,51.71125);
   hmcerror__5->SetBinContent(20,52.80542);
   hmcerror__5->SetBinContent(21,51.19112);
   hmcerror__5->SetBinContent(22,37.31064);
   hmcerror__5->SetBinContent(23,30.71437);
   hmcerror__5->SetBinContent(24,32.29883);
   hmcerror__5->SetBinContent(25,24.75357);
   hmcerror__5->SetBinContent(26,23.98773);
   hmcerror__5->SetBinContent(27,27.24191);
   hmcerror__5->SetBinContent(28,18.59179);
   hmcerror__5->SetBinContent(29,21.75991);
   hmcerror__5->SetBinContent(30,18.04866);
   hmcerror__5->SetBinContent(31,17.59388);
   hmcerror__5->SetBinContent(32,14.5163);
   hmcerror__5->SetBinContent(33,12.19672);
   hmcerror__5->SetBinContent(34,10.0832);
   hmcerror__5->SetBinContent(35,122.8857);
   hmcerror__5->SetBinError(1,37.43639);
   hmcerror__5->SetBinError(2,43.31757);
   hmcerror__5->SetBinError(3,45.28264);
   hmcerror__5->SetBinError(4,47.97787);
   hmcerror__5->SetBinError(5,55.91314);
   hmcerror__5->SetBinError(6,56.13039);
   hmcerror__5->SetBinError(7,78.42312);
   hmcerror__5->SetBinError(8,82.83467);
   hmcerror__5->SetBinError(9,97.55769);
   hmcerror__5->SetBinError(10,136.7914);
   hmcerror__5->SetBinError(11,161.2263);
   hmcerror__5->SetBinError(12,176.6563);
   hmcerror__5->SetBinError(13,157.5874);
   hmcerror__5->SetBinError(14,111.8758);
   hmcerror__5->SetBinError(15,66.27746);
   hmcerror__5->SetBinError(16,31.96309);
   hmcerror__5->SetBinError(17,32.07131);
   hmcerror__5->SetBinError(18,24.0331);
   hmcerror__5->SetBinError(19,22.46266);
   hmcerror__5->SetBinError(20,25.90097);
   hmcerror__5->SetBinError(21,20.0031);
   hmcerror__5->SetBinError(22,16.67683);
   hmcerror__5->SetBinError(23,15.58752);
   hmcerror__5->SetBinError(24,15.68562);
   hmcerror__5->SetBinError(25,14.59523);
   hmcerror__5->SetBinError(26,11.81949);
   hmcerror__5->SetBinError(27,15.40912);
   hmcerror__5->SetBinError(28,11.34411);
   hmcerror__5->SetBinError(29,15.14006);
   hmcerror__5->SetBinError(30,12.08819);
   hmcerror__5->SetBinError(31,12.15396);
   hmcerror__5->SetBinError(32,10.48827);
   hmcerror__5->SetBinError(33,9.528964);
   hmcerror__5->SetBinError(34,8.340299);
   hmcerror__5->SetBinError(35,42.53582);
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
   
   Double_t _fx3005[34] = {
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
   Double_t _fy3005[34] = {
   130,
   161,
   164,
   179,
   204,
   210,
   253,
   253,
   319,
   422,
   496,
   609,
   494,
   228,
   161,
   85,
   77,
   66,
   54,
   35,
   37,
   44,
   29,
   24,
   21,
   21,
   13,
   25,
   16,
   8,
   15,
   15,
   12,
   6};
   Double_t _felx3005[34] = {
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
   Double_t _fely3005[34] = {
   11.40175,
   12.68858,
   12.80625,
   13.37909,
   14.28286,
   14.49138,
   15.90597,
   15.90597,
   17.86057,
   20.54264,
   22.27106,
   24.67793,
   22.22611,
   15.09967,
   12.68858,
   9.3428,
   8.8995,
   8.2509,
   7.4785,
   6.0548,
   6.2203,
   6.7671,
   5.5285,
   5.0476,
   4.7354,
   4.7354,
   3.77763,
   5.1474,
   4.1628,
   3.0307,
   4.0385,
   4.0385,
   3.64022,
   2.67925};
   Double_t _fehx3005[34] = {
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
   Double_t _fehy3005[34] = {
   11.40175,
   12.68858,
   12.80625,
   13.37909,
   14.28286,
   14.49138,
   15.90597,
   15.90597,
   17.86057,
   20.54264,
   22.27106,
   24.67793,
   22.22611,
   15.09967,
   12.68858,
   9.1411,
   8.6976,
   8.0483,
   7.275,
   5.8483,
   6.0141,
   6.5623,
   5.3201,
   4.837,
   4.5229,
   4.5229,
   3.5552,
   4.9374,
   3.9454,
   2.7896,
   3.8197,
   3.8197,
   3.4155,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(2.988675);
   Graph_Graph3005->SetMaximum(696.7136);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.3/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4886.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 118.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 464.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 364.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1934.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  397.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 749.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 408.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 421.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 36.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[34] = {
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
   Double_t _fy3006[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[34] = {
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
   Double_t _fely3006[34] = {
   0.301713,
   0.2503475,
   0.2388205,
   0.2414501,
   0.2684947,
   0.2380933,
   0.3293326,
   0.3343087,
   0.3025748,
   0.3264204,
   0.3302218,
   0.3171088,
   0.3223298,
   0.3718386,
   0.3985443,
   0.2832685,
   0.3866799,
   0.3798416,
   0.4343863,
   0.4904983,
   0.3907533,
   0.4469726,
   0.5074994,
   0.4856405,
   0.5896213,
   0.4927306,
   0.5656402,
   0.6101678,
   0.6957778,
   0.6697556,
   0.690806,
   0.7225165,
   0.7812728,
   0.827148};
   Double_t _fehx3006[34] = {
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
   Double_t _fehy3006[34] = {
   0.301713,
   0.2503475,
   0.2388205,
   0.2414501,
   0.2684947,
   0.2380933,
   0.3293326,
   0.3343087,
   0.3025748,
   0.3264204,
   0.3302218,
   0.3171088,
   0.3223298,
   0.3718386,
   0.3985443,
   0.2832685,
   0.3866799,
   0.3798416,
   0.4343863,
   0.4904983,
   0.3907533,
   0.4469726,
   0.5074994,
   0.4856405,
   0.5896213,
   0.4927306,
   0.5656402,
   0.6101678,
   0.6957778,
   0.6697556,
   0.690806,
   0.7225165,
   0.7812728,
   0.827148};
   grae = new TGraphAsymmErrors(34,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,440);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3007[34] = {
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
   Double_t _fy3007[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[34] = {
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
   Double_t _fely3007[34] = {
   0.2191528,
   0.1956955,
   0.1925341,
   0.2034537,
   0.2227687,
   0.2098291,
   0.2475824,
   0.2704194,
   0.2825409,
   0.294085,
   0.3193888,
   0.3082727,
   0.2874449,
   0.2666577,
   0.2501542,
   0.2443854,
   0.268454,
   0.2715461,
   0.2472246,
   0.2422659,
   0.2261041,
   0.2457328,
   0.2837302,
   0.2507846,
   0.2564143,
   0.2560112,
   0.2436531,
   0.2576009,
   0.2704219,
   0.2678678,
   0.2617271,
   0.2615833,
   0.3038231,
   0.3011834};
   Double_t _fehx3007[34] = {
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
   Double_t _fehy3007[34] = {
   0.2191528,
   0.1956955,
   0.1925341,
   0.2034537,
   0.2227687,
   0.2098291,
   0.2475824,
   0.2704194,
   0.2825409,
   0.294085,
   0.3193888,
   0.3082727,
   0.2874449,
   0.2666577,
   0.2501542,
   0.2443854,
   0.268454,
   0.2715461,
   0.2472246,
   0.2422659,
   0.2261041,
   0.2457328,
   0.2837302,
   0.2507846,
   0.2564143,
   0.2560112,
   0.2436531,
   0.2576009,
   0.2704219,
   0.2678678,
   0.2617271,
   0.2615833,
   0.3038231,
   0.3011834};
   grae = new TGraphAsymmErrors(34,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,440);
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
   
   Double_t _fx3008[34] = {
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
   Double_t _fy3008[34] = {
   1.047715,
   0.9304757,
   0.8649356,
   0.9008229,
   0.9796073,
   0.8907757,
   1.062457,
   1.021071,
   0.9893774,
   1.007003,
   1.015902,
   1.093192,
   1.010429,
   0.7577972,
   0.9681365,
   0.753301,
   0.9283795,
   1.043126,
   1.04426,
   0.6628108,
   0.7227817,
   1.179288,
   0.9441836,
   0.7430609,
   0.8483626,
   0.8754477,
   0.477206,
   1.344679,
   0.7352972,
   0.4432463,
   0.8525693,
   1.033321,
   0.9838713,
   0.5950492};
   Double_t _felx3008[34] = {
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
   Double_t _fely3008[34] = {
   0.09189072,
   0.07333176,
   0.06754013,
   0.06733067,
   0.06858623,
   0.06146936,
   0.06679607,
   0.06419419,
   0.0553945,
   0.04902015,
   0.04561533,
   0.04429839,
   0.04546135,
   0.05018634,
   0.07629985,
   0.0827993,
   0.1073002,
   0.130405,
   0.1446204,
   0.1146625,
   0.1215113,
   0.1813719,
   0.1799972,
   0.1562781,
   0.1913017,
   0.1974093,
   0.1386698,
   0.2768641,
   0.1913059,
   0.1679183,
   0.2295401,
   0.2782045,
   0.298459,
   0.2657142};
   Double_t _fehx3008[34] = {
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
   Double_t _fehy3008[34] = {
   0.09189072,
   0.07333176,
   0.06754013,
   0.06733067,
   0.06858623,
   0.06146936,
   0.06679607,
   0.06419419,
   0.0553945,
   0.04902015,
   0.04561533,
   0.04429839,
   0.04546135,
   0.05018634,
   0.07629985,
   0.08101176,
   0.1048659,
   0.1272029,
   0.140685,
   0.1107519,
   0.1174833,
   0.1758828,
   0.1732121,
   0.1497577,
   0.1827171,
   0.1885506,
   0.1305048,
   0.2655688,
   0.1813151,
   0.15456,
   0.2171039,
   0.2631318,
   0.2800344,
   0.2398623};
   grae = new TGraphAsymmErrors(34,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0.141836);
   Graph_Graph3008->SetMaximum(1.74374);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_mass_all",34,0,400);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

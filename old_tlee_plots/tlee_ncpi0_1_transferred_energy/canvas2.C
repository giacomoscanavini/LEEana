#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Oct 21 19:09:15 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-276.9231,-15,2030.769,1658.684);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__4->SetBinContent(2,8.903138);
   hmc__4->SetBinContent(3,213.8566);
   hmc__4->SetBinContent(4,548.801);
   hmc__4->SetBinContent(5,643.6794);
   hmc__4->SetBinContent(6,635.0116);
   hmc__4->SetBinContent(7,591.9821);
   hmc__4->SetBinContent(8,460.1883);
   hmc__4->SetBinContent(9,417.2927);
   hmc__4->SetBinContent(10,349.9576);
   hmc__4->SetBinContent(11,284.6595);
   hmc__4->SetBinContent(12,226.6296);
   hmc__4->SetBinContent(13,163.3319);
   hmc__4->SetBinContent(14,135.1672);
   hmc__4->SetBinContent(15,108.0806);
   hmc__4->SetBinContent(16,79.3757);
   hmc__4->SetBinContent(17,69.21252);
   hmc__4->SetBinContent(18,56.93203);
   hmc__4->SetBinContent(19,47.0268);
   hmc__4->SetBinContent(20,31.8798);
   hmc__4->SetBinContent(21,28.29844);
   hmc__4->SetBinContent(22,18.82617);
   hmc__4->SetBinContent(23,12.63984);
   hmc__4->SetBinContent(24,12.17171);
   hmc__4->SetBinContent(25,4.217289);
   hmc__4->SetBinContent(26,36.82767);
   hmc__4->SetBinError(1,0.3895343);
   hmc__4->SetBinError(2,7.913664);
   hmc__4->SetBinError(3,47.65235);
   hmc__4->SetBinError(4,157.4579);
   hmc__4->SetBinError(5,177.3417);
   hmc__4->SetBinError(6,198.9523);
   hmc__4->SetBinError(7,224.8099);
   hmc__4->SetBinError(8,195.8953);
   hmc__4->SetBinError(9,161.3003);
   hmc__4->SetBinError(10,116.9853);
   hmc__4->SetBinError(11,85.05779);
   hmc__4->SetBinError(12,72.06436);
   hmc__4->SetBinError(13,48.94149);
   hmc__4->SetBinError(14,51.46075);
   hmc__4->SetBinError(15,42.37801);
   hmc__4->SetBinError(16,33.17302);
   hmc__4->SetBinError(17,29.25429);
   hmc__4->SetBinError(18,34.8242);
   hmc__4->SetBinError(19,25.22606);
   hmc__4->SetBinError(20,18.61153);
   hmc__4->SetBinError(21,19.98657);
   hmc__4->SetBinError(22,10.68162);
   hmc__4->SetBinError(23,11.15103);
   hmc__4->SetBinError(24,9.914276);
   hmc__4->SetBinError(25,4.759868);
   hmc__4->SetBinError(26,25.69369);
   hmc__4->SetMinimum(-15);
   hmc__4->SetMaximum(1575);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,1800);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(675.8634);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,6.964757);
   hbadmatch_stack_1->SetBinContent(4,18.71387);
   hbadmatch_stack_1->SetBinContent(5,14.78681);
   hbadmatch_stack_1->SetBinContent(6,9.699343);
   hbadmatch_stack_1->SetBinContent(7,16.56777);
   hbadmatch_stack_1->SetBinContent(8,8.202604);
   hbadmatch_stack_1->SetBinContent(9,10.34695);
   hbadmatch_stack_1->SetBinContent(10,7.210075);
   hbadmatch_stack_1->SetBinContent(11,6.705369);
   hbadmatch_stack_1->SetBinContent(12,3.796098);
   hbadmatch_stack_1->SetBinContent(13,4.7873);
   hbadmatch_stack_1->SetBinContent(14,1.92812);
   hbadmatch_stack_1->SetBinContent(15,2.12431);
   hbadmatch_stack_1->SetBinContent(16,0.8364185);
   hbadmatch_stack_1->SetBinContent(17,1.043169);
   hbadmatch_stack_1->SetBinContent(18,0.6469922);
   hbadmatch_stack_1->SetBinContent(19,1.304973);
   hbadmatch_stack_1->SetBinContent(20,0.1172267);
   hbadmatch_stack_1->SetBinContent(21,0.6475976);
   hbadmatch_stack_1->SetBinContent(23,0.5610657);
   hbadmatch_stack_1->SetBinContent(26,1.30938);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.34702);
   hbadmatch_stack_1->SetBinError(4,2.877087);
   hbadmatch_stack_1->SetBinError(5,2.14698);
   hbadmatch_stack_1->SetBinError(6,1.587052);
   hbadmatch_stack_1->SetBinError(7,2.906386);
   hbadmatch_stack_1->SetBinError(8,1.387857);
   hbadmatch_stack_1->SetBinError(9,1.777392);
   hbadmatch_stack_1->SetBinError(10,1.471077);
   hbadmatch_stack_1->SetBinError(11,2.001507);
   hbadmatch_stack_1->SetBinError(12,1.065761);
   hbadmatch_stack_1->SetBinError(13,1.150779);
   hbadmatch_stack_1->SetBinError(14,0.6842135);
   hbadmatch_stack_1->SetBinError(15,0.7841475);
   hbadmatch_stack_1->SetBinError(16,0.4513143);
   hbadmatch_stack_1->SetBinError(17,0.4906577);
   hbadmatch_stack_1->SetBinError(18,0.3766765);
   hbadmatch_stack_1->SetBinError(19,0.7648202);
   hbadmatch_stack_1->SetBinError(20,0.1172267);
   hbadmatch_stack_1->SetBinError(21,0.3768218);
   hbadmatch_stack_1->SetBinError(23,0.5610657);
   hbadmatch_stack_1->SetBinError(26,0.5510687);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,1.454812);
   hext_stack_2->SetBinContent(3,51.4801);
   hext_stack_2->SetBinContent(4,76.17392);
   hext_stack_2->SetBinContent(5,74.47527);
   hext_stack_2->SetBinContent(6,55.76353);
   hext_stack_2->SetBinContent(7,55.17533);
   hext_stack_2->SetBinContent(8,35.23661);
   hext_stack_2->SetBinContent(9,24.0163);
   hext_stack_2->SetBinContent(10,21.83767);
   hext_stack_2->SetBinContent(11,17.73578);
   hext_stack_2->SetBinContent(12,9.641403);
   hext_stack_2->SetBinContent(13,11.50282);
   hext_stack_2->SetBinContent(14,7.930035);
   hext_stack_2->SetBinContent(15,3.159);
   hext_stack_2->SetBinContent(16,5.001641);
   hext_stack_2->SetBinContent(17,3.483397);
   hext_stack_2->SetBinContent(18,3.704052);
   hext_stack_2->SetBinContent(19,2.192989);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,2.566457);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,1.704188);
   hext_stack_2->SetBinError(2,0.8615765);
   hext_stack_2->SetBinError(3,4.971623);
   hext_stack_2->SetBinError(4,5.938123);
   hext_stack_2->SetBinError(5,5.831157);
   hext_stack_2->SetBinError(6,4.974505);
   hext_stack_2->SetBinError(7,5.150664);
   hext_stack_2->SetBinError(8,4.120422);
   hext_stack_2->SetBinError(9,3.337455);
   hext_stack_2->SetBinError(10,3.150323);
   hext_stack_2->SetBinError(11,3.045869);
   hext_stack_2->SetBinError(12,2.0263);
   hext_stack_2->SetBinError(13,2.239091);
   hext_stack_2->SetBinError(14,1.928947);
   hext_stack_2->SetBinError(15,1.152637);
   hext_stack_2->SetBinError(16,1.582242);
   hext_stack_2->SetBinError(17,1.197416);
   hext_stack_2->SetBinError(18,1.443106);
   hext_stack_2->SetBinError(19,0.9009267);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,1.283228);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,0.7656743);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.15957);
   hdirt_stack_3->SetBinContent(3,6.759978);
   hdirt_stack_3->SetBinContent(4,12.12625);
   hdirt_stack_3->SetBinContent(5,8.489521);
   hdirt_stack_3->SetBinContent(6,6.942565);
   hdirt_stack_3->SetBinContent(7,6.112229);
   hdirt_stack_3->SetBinContent(8,2.593917);
   hdirt_stack_3->SetBinContent(9,1.471007);
   hdirt_stack_3->SetBinContent(10,0.6342855);
   hdirt_stack_3->SetBinContent(11,2.818961);
   hdirt_stack_3->SetBinContent(12,0.2863297);
   hdirt_stack_3->SetBinContent(15,0.5318602);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinError(2,0.15957);
   hdirt_stack_3->SetBinError(3,1.395533);
   hdirt_stack_3->SetBinError(4,1.833066);
   hdirt_stack_3->SetBinError(5,1.471114);
   hdirt_stack_3->SetBinError(6,1.374064);
   hdirt_stack_3->SetBinError(7,1.487687);
   hdirt_stack_3->SetBinError(8,0.8288981);
   hdirt_stack_3->SetBinError(9,0.5372734);
   hdirt_stack_3->SetBinError(10,0.3980035);
   hdirt_stack_3->SetBinError(11,1.310041);
   hdirt_stack_3->SetBinError(12,0.2025938);
   hdirt_stack_3->SetBinError(15,0.4172928);
   hdirt_stack_3->SetBinError(19,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,2.985337);
   houtFV_stack_4->SetBinContent(3,31.9303);
   houtFV_stack_4->SetBinContent(4,75.20534);
   houtFV_stack_4->SetBinContent(5,68.90057);
   houtFV_stack_4->SetBinContent(6,51.27191);
   houtFV_stack_4->SetBinContent(7,40.51378);
   houtFV_stack_4->SetBinContent(8,28.31324);
   houtFV_stack_4->SetBinContent(9,22.70401);
   houtFV_stack_4->SetBinContent(10,12.52874);
   houtFV_stack_4->SetBinContent(11,10.88428);
   houtFV_stack_4->SetBinContent(12,8.329065);
   houtFV_stack_4->SetBinContent(13,3.979885);
   houtFV_stack_4->SetBinContent(14,3.928796);
   houtFV_stack_4->SetBinContent(15,2.840843);
   houtFV_stack_4->SetBinContent(16,1.352826);
   houtFV_stack_4->SetBinContent(17,1.528225);
   houtFV_stack_4->SetBinContent(18,0.3917402);
   houtFV_stack_4->SetBinContent(19,1.125349);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,0.8013712);
   houtFV_stack_4->SetBinContent(22,0.3401776);
   houtFV_stack_4->SetBinContent(25,0.1967154);
   houtFV_stack_4->SetBinContent(26,0.7319179);
   houtFV_stack_4->SetBinError(2,0.8562984);
   houtFV_stack_4->SetBinError(3,2.771809);
   houtFV_stack_4->SetBinError(4,4.395457);
   houtFV_stack_4->SetBinError(5,4.181691);
   houtFV_stack_4->SetBinError(6,3.55321);
   houtFV_stack_4->SetBinError(7,3.167718);
   houtFV_stack_4->SetBinError(8,2.569761);
   houtFV_stack_4->SetBinError(9,2.303576);
   houtFV_stack_4->SetBinError(10,1.727662);
   houtFV_stack_4->SetBinError(11,1.701519);
   houtFV_stack_4->SetBinError(12,1.458854);
   houtFV_stack_4->SetBinError(13,0.9894578);
   houtFV_stack_4->SetBinError(14,1.072967);
   houtFV_stack_4->SetBinError(15,0.8098046);
   houtFV_stack_4->SetBinError(16,0.5753376);
   houtFV_stack_4->SetBinError(17,0.5926009);
   houtFV_stack_4->SetBinError(18,0.2770047);
   houtFV_stack_4->SetBinError(19,0.5194673);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.4937705);
   houtFV_stack_4->SetBinError(22,0.3401776);
   houtFV_stack_4->SetBinError(25,0.1967154);
   houtFV_stack_4->SetBinError(26,0.438694);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.289238);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.98798);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,17.66569);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,19.56041);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,14.58595);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.799421);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.136159);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.258677);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.807994);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.634991);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.871926);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.723328);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.004429);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.94296);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3278244);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.499626);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1402267);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5017039);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.275705);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.575573);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.657407);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.386537);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8392841);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6468235);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5354821);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7785964);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8240322);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8605375);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8465224);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3797045);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5785183);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1060063);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2498462);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06271466);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1561744);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3649989);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.696071);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.79244);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.8912);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.681787);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.972944);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.377376);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9797927);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7041637);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6501732);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.585902);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3543343);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3263664);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1647701);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2185845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1081027);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4250549);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.536706);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4912707);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3104902);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3752163);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3010291);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2159729);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2708407);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2273473);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2524479);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1828361);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1763406);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.09308042);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2025098);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01881452);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.59163);
   hNCpi0inFVres_stack_7->SetBinContent(3,71.25224);
   hNCpi0inFVres_stack_7->SetBinContent(4,241.4502);
   hNCpi0inFVres_stack_7->SetBinContent(5,308.4937);
   hNCpi0inFVres_stack_7->SetBinContent(6,297.4961);
   hNCpi0inFVres_stack_7->SetBinContent(7,244.0269);
   hNCpi0inFVres_stack_7->SetBinContent(8,189.6259);
   hNCpi0inFVres_stack_7->SetBinContent(9,147.8397);
   hNCpi0inFVres_stack_7->SetBinContent(10,115.5937);
   hNCpi0inFVres_stack_7->SetBinContent(11,85.55518);
   hNCpi0inFVres_stack_7->SetBinContent(12,66.40398);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.77522);
   hNCpi0inFVres_stack_7->SetBinContent(14,31.55381);
   hNCpi0inFVres_stack_7->SetBinContent(15,27.85129);
   hNCpi0inFVres_stack_7->SetBinContent(16,22.70512);
   hNCpi0inFVres_stack_7->SetBinContent(17,14.93216);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.13654);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.091844);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.687515);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.245116);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.125259);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.973191);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.007317);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.5240285);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.000783);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4457668);
   hNCpi0inFVres_stack_7->SetBinError(3,2.854005);
   hNCpi0inFVres_stack_7->SetBinError(4,5.369661);
   hNCpi0inFVres_stack_7->SetBinError(5,6.051695);
   hNCpi0inFVres_stack_7->SetBinError(6,5.429928);
   hNCpi0inFVres_stack_7->SetBinError(7,4.502324);
   hNCpi0inFVres_stack_7->SetBinError(8,3.998687);
   hNCpi0inFVres_stack_7->SetBinError(9,3.496293);
   hNCpi0inFVres_stack_7->SetBinError(10,3.275944);
   hNCpi0inFVres_stack_7->SetBinError(11,3.093158);
   hNCpi0inFVres_stack_7->SetBinError(12,2.948198);
   hNCpi0inFVres_stack_7->SetBinError(13,2.248091);
   hNCpi0inFVres_stack_7->SetBinError(14,1.952161);
   hNCpi0inFVres_stack_7->SetBinError(15,2.052103);
   hNCpi0inFVres_stack_7->SetBinError(16,2.099206);
   hNCpi0inFVres_stack_7->SetBinError(17,1.470291);
   hNCpi0inFVres_stack_7->SetBinError(18,1.703546);
   hNCpi0inFVres_stack_7->SetBinError(19,1.210622);
   hNCpi0inFVres_stack_7->SetBinError(20,1.049882);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9837805);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7595278);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6460522);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5869717);
   hNCpi0inFVres_stack_7->SetBinError(25,0.23257);
   hNCpi0inFVres_stack_7->SetBinError(26,0.872491);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6183873);
   hNCpi0inFVdis_stack_8->SetBinContent(3,16.42614);
   hNCpi0inFVdis_stack_8->SetBinContent(4,32.466);
   hNCpi0inFVdis_stack_8->SetBinContent(5,37.96726);
   hNCpi0inFVdis_stack_8->SetBinContent(6,43.39776);
   hNCpi0inFVdis_stack_8->SetBinContent(7,36.77691);
   hNCpi0inFVdis_stack_8->SetBinContent(8,33.33263);
   hNCpi0inFVdis_stack_8->SetBinContent(9,33.32325);
   hNCpi0inFVdis_stack_8->SetBinContent(10,28.22907);
   hNCpi0inFVdis_stack_8->SetBinContent(11,28.58386);
   hNCpi0inFVdis_stack_8->SetBinContent(12,23.98222);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.78452);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.069);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.25759);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.646126);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.560795);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.936048);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.295056);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.133134);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.468554);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.723351);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.519928);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.259543);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.005068);
   hNCpi0inFVdis_stack_8->SetBinContent(26,4.617565);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2523197);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.384402);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.932777);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.071797);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.162099);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.69755);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.652912);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.728032);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.691751);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.865723);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.817553);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.394869);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.511429);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.291417);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.195921);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.130022);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.004661);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.048346);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.143838);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7203096);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4727943);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6912583);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7652654);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2778545);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.7945608);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1770052);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.3315399);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.3037316);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1437473);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.09954487);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1346949);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1738851);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1556115);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.05089554);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.06989517);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01830775);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(3,4.941316);
   hCCpi0inFV_stack_10->SetBinContent(4,18.21727);
   hCCpi0inFV_stack_10->SetBinContent(5,37.00444);
   hCCpi0inFV_stack_10->SetBinContent(6,60.44328);
   hCCpi0inFV_stack_10->SetBinContent(7,89.7178);
   hCCpi0inFV_stack_10->SetBinContent(8,82.96276);
   hCCpi0inFV_stack_10->SetBinContent(9,89.87747);
   hCCpi0inFV_stack_10->SetBinContent(10,83.33507);
   hCCpi0inFV_stack_10->SetBinContent(11,67.09815);
   hCCpi0inFV_stack_10->SetBinContent(12,53.48964);
   hCCpi0inFV_stack_10->SetBinContent(13,39.62837);
   hCCpi0inFV_stack_10->SetBinContent(14,32.63156);
   hCCpi0inFV_stack_10->SetBinContent(15,28.52818);
   hCCpi0inFV_stack_10->SetBinContent(16,16.69783);
   hCCpi0inFV_stack_10->SetBinContent(17,16.98147);
   hCCpi0inFV_stack_10->SetBinContent(18,15.18995);
   hCCpi0inFV_stack_10->SetBinContent(19,10.54838);
   hCCpi0inFV_stack_10->SetBinContent(20,6.066665);
   hCCpi0inFV_stack_10->SetBinContent(21,4.496323);
   hCCpi0inFV_stack_10->SetBinContent(22,4.630693);
   hCCpi0inFV_stack_10->SetBinContent(23,3.035868);
   hCCpi0inFV_stack_10->SetBinContent(24,2.434496);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(26,6.840611);
   hCCpi0inFV_stack_10->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(3,1.056316);
   hCCpi0inFV_stack_10->SetBinError(4,2.121628);
   hCCpi0inFV_stack_10->SetBinError(5,2.983339);
   hCCpi0inFV_stack_10->SetBinError(6,3.891107);
   hCCpi0inFV_stack_10->SetBinError(7,4.69286);
   hCCpi0inFV_stack_10->SetBinError(8,4.515256);
   hCCpi0inFV_stack_10->SetBinError(9,4.732541);
   hCCpi0inFV_stack_10->SetBinError(10,4.630339);
   hCCpi0inFV_stack_10->SetBinError(11,4.139021);
   hCCpi0inFV_stack_10->SetBinError(12,3.672334);
   hCCpi0inFV_stack_10->SetBinError(13,3.178013);
   hCCpi0inFV_stack_10->SetBinError(14,2.893148);
   hCCpi0inFV_stack_10->SetBinError(15,2.741062);
   hCCpi0inFV_stack_10->SetBinError(16,2.034268);
   hCCpi0inFV_stack_10->SetBinError(17,2.007997);
   hCCpi0inFV_stack_10->SetBinError(18,2.03166);
   hCCpi0inFV_stack_10->SetBinError(19,1.629636);
   hCCpi0inFV_stack_10->SetBinError(20,1.177136);
   hCCpi0inFV_stack_10->SetBinError(21,1.037978);
   hCCpi0inFV_stack_10->SetBinError(22,1.14211);
   hCCpi0inFV_stack_10->SetBinError(23,0.8329575);
   hCCpi0inFV_stack_10->SetBinError(24,0.8784752);
   hCCpi0inFV_stack_10->SetBinError(25,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(26,1.316726);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,10.41592);
   hNCinFV_stack_11->SetBinContent(4,25.85558);
   hNCinFV_stack_11->SetBinContent(5,32.38839);
   hNCinFV_stack_11->SetBinContent(6,34.11095);
   hNCinFV_stack_11->SetBinContent(7,43.58593);
   hNCinFV_stack_11->SetBinContent(8,32.3344);
   hNCinFV_stack_11->SetBinContent(9,38.46229);
   hNCinFV_stack_11->SetBinContent(10,36.0341);
   hNCinFV_stack_11->SetBinContent(11,27.94057);
   hNCinFV_stack_11->SetBinContent(12,28.13674);
   hNCinFV_stack_11->SetBinContent(13,22.10497);
   hNCinFV_stack_11->SetBinContent(14,20.52654);
   hNCinFV_stack_11->SetBinContent(15,14.23855);
   hNCinFV_stack_11->SetBinContent(16,14.89725);
   hNCinFV_stack_11->SetBinContent(17,15.16544);
   hNCinFV_stack_11->SetBinContent(18,8.888542);
   hNCinFV_stack_11->SetBinContent(19,8.140242);
   hNCinFV_stack_11->SetBinContent(20,8.407356);
   hNCinFV_stack_11->SetBinContent(21,8.97879);
   hNCinFV_stack_11->SetBinContent(22,4.230042);
   hNCinFV_stack_11->SetBinContent(23,2.281873);
   hNCinFV_stack_11->SetBinContent(24,1.860647);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,5.50732);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,1.607171);
   hNCinFV_stack_11->SetBinError(4,2.618004);
   hNCinFV_stack_11->SetBinError(5,2.86977);
   hNCinFV_stack_11->SetBinError(6,2.807781);
   hNCinFV_stack_11->SetBinError(7,3.24801);
   hNCinFV_stack_11->SetBinError(8,2.73752);
   hNCinFV_stack_11->SetBinError(9,3.132329);
   hNCinFV_stack_11->SetBinError(10,3.190422);
   hNCinFV_stack_11->SetBinError(11,2.822805);
   hNCinFV_stack_11->SetBinError(12,2.925266);
   hNCinFV_stack_11->SetBinError(13,2.624052);
   hNCinFV_stack_11->SetBinError(14,2.550596);
   hNCinFV_stack_11->SetBinError(15,2.273219);
   hNCinFV_stack_11->SetBinError(16,2.415138);
   hNCinFV_stack_11->SetBinError(17,2.50226);
   hNCinFV_stack_11->SetBinError(18,1.89138);
   hNCinFV_stack_11->SetBinError(19,1.90729);
   hNCinFV_stack_11->SetBinError(20,1.966387);
   hNCinFV_stack_11->SetBinError(21,2.118274);
   hNCinFV_stack_11->SetBinError(22,1.32286);
   hNCinFV_stack_11->SetBinError(23,1.171822);
   hNCinFV_stack_11->SetBinError(24,0.6808988);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,1.272484);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_12->SetBinContent(3,8.635133);
   hnumuCCinFV_stack_12->SetBinContent(4,31.50968);
   hnumuCCinFV_stack_12->SetBinContent(5,36.84514);
   hnumuCCinFV_stack_12->SetBinContent(6,50.69585);
   hnumuCCinFV_stack_12->SetBinContent(7,41.14841);
   hnumuCCinFV_stack_12->SetBinContent(8,35.36398);
   hnumuCCinFV_stack_12->SetBinContent(9,40.92722);
   hnumuCCinFV_stack_12->SetBinContent(10,36.92599);
   hnumuCCinFV_stack_12->SetBinContent(11,30.80085);
   hnumuCCinFV_stack_12->SetBinContent(12,27.09687);
   hnumuCCinFV_stack_12->SetBinContent(13,19.75258);
   hnumuCCinFV_stack_12->SetBinContent(14,16.81152);
   hnumuCCinFV_stack_12->SetBinContent(15,13.02358);
   hnumuCCinFV_stack_12->SetBinContent(16,6.737311);
   hnumuCCinFV_stack_12->SetBinContent(17,7.776158);
   hnumuCCinFV_stack_12->SetBinContent(18,7.326746);
   hnumuCCinFV_stack_12->SetBinContent(19,7.863577);
   hnumuCCinFV_stack_12->SetBinContent(20,4.070508);
   hnumuCCinFV_stack_12->SetBinContent(21,3.57107);
   hnumuCCinFV_stack_12->SetBinContent(22,1.717185);
   hnumuCCinFV_stack_12->SetBinContent(23,2.554687);
   hnumuCCinFV_stack_12->SetBinContent(24,2.057363);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,5.355492);
   hnumuCCinFV_stack_12->SetBinError(2,0.300021);
   hnumuCCinFV_stack_12->SetBinError(3,2.114551);
   hnumuCCinFV_stack_12->SetBinError(4,3.807151);
   hnumuCCinFV_stack_12->SetBinError(5,3.873755);
   hnumuCCinFV_stack_12->SetBinError(6,4.200865);
   hnumuCCinFV_stack_12->SetBinError(7,3.900156);
   hnumuCCinFV_stack_12->SetBinError(8,3.059544);
   hnumuCCinFV_stack_12->SetBinError(9,3.516939);
   hnumuCCinFV_stack_12->SetBinError(10,3.31061);
   hnumuCCinFV_stack_12->SetBinError(11,2.953194);
   hnumuCCinFV_stack_12->SetBinError(12,3.667103);
   hnumuCCinFV_stack_12->SetBinError(13,2.597218);
   hnumuCCinFV_stack_12->SetBinError(14,2.323394);
   hnumuCCinFV_stack_12->SetBinError(15,1.840818);
   hnumuCCinFV_stack_12->SetBinError(16,1.293789);
   hnumuCCinFV_stack_12->SetBinError(17,1.424611);
   hnumuCCinFV_stack_12->SetBinError(18,1.360703);
   hnumuCCinFV_stack_12->SetBinError(19,1.416521);
   hnumuCCinFV_stack_12->SetBinError(20,0.9542287);
   hnumuCCinFV_stack_12->SetBinError(21,0.9206376);
   hnumuCCinFV_stack_12->SetBinError(22,0.6217711);
   hnumuCCinFV_stack_12->SetBinError(23,0.7916056);
   hnumuCCinFV_stack_12->SetBinError(24,0.7087455);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,1.220336);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,2.36194);
   hnueCCinFV_stack_13->SetBinContent(4,2.221877);
   hnueCCinFV_stack_13->SetBinContent(5,3.538672);
   hnueCCinFV_stack_13->SetBinContent(6,2.435022);
   hnueCCinFV_stack_13->SetBinContent(7,1.945491);
   hnueCCinFV_stack_13->SetBinContent(8,3.350318);
   hnueCCinFV_stack_13->SetBinContent(9,1.77394);
   hnueCCinFV_stack_13->SetBinContent(10,3.39039);
   hnueCCinFV_stack_13->SetBinContent(11,2.024349);
   hnueCCinFV_stack_13->SetBinContent(12,1.163767);
   hnueCCinFV_stack_13->SetBinContent(13,0.5584189);
   hnueCCinFV_stack_13->SetBinContent(14,1.710121);
   hnueCCinFV_stack_13->SetBinContent(15,2.194594);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.1952904);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,1.070405);
   hnueCCinFV_stack_13->SetBinContent(20,0.8615913);
   hnueCCinFV_stack_13->SetBinContent(21,0.7500277);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,1.11635);
   hnueCCinFV_stack_13->SetBinContent(25,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(26,7.370477);
   hnueCCinFV_stack_13->SetBinError(3,1.426612);
   hnueCCinFV_stack_13->SetBinError(4,0.9025611);
   hnueCCinFV_stack_13->SetBinError(5,1.069581);
   hnueCCinFV_stack_13->SetBinError(6,0.8472258);
   hnueCCinFV_stack_13->SetBinError(7,0.7006621);
   hnueCCinFV_stack_13->SetBinError(8,0.9988108);
   hnueCCinFV_stack_13->SetBinError(9,0.6405776);
   hnueCCinFV_stack_13->SetBinError(10,1.138378);
   hnueCCinFV_stack_13->SetBinError(11,1.215697);
   hnueCCinFV_stack_13->SetBinError(12,0.6272642);
   hnueCCinFV_stack_13->SetBinError(13,0.4041659);
   hnueCCinFV_stack_13->SetBinError(14,0.7265873);
   hnueCCinFV_stack_13->SetBinError(15,0.7636908);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.195025);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.5545368);
   hnueCCinFV_stack_13->SetBinError(20,0.4332246);
   hnueCCinFV_stack_13->SetBinError(21,0.4528814);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.8660013);
   hnueCCinFV_stack_13->SetBinError(25,0.4394482);
   hnueCCinFV_stack_13->SetBinError(26,2.01345);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__5->SetBinContent(2,8.903138);
   hmcerror__5->SetBinContent(3,213.8566);
   hmcerror__5->SetBinContent(4,548.801);
   hmcerror__5->SetBinContent(5,643.6794);
   hmcerror__5->SetBinContent(6,635.0116);
   hmcerror__5->SetBinContent(7,591.9821);
   hmcerror__5->SetBinContent(8,460.1883);
   hmcerror__5->SetBinContent(9,417.2927);
   hmcerror__5->SetBinContent(10,349.9576);
   hmcerror__5->SetBinContent(11,284.6595);
   hmcerror__5->SetBinContent(12,226.6296);
   hmcerror__5->SetBinContent(13,163.3319);
   hmcerror__5->SetBinContent(14,135.1672);
   hmcerror__5->SetBinContent(15,108.0806);
   hmcerror__5->SetBinContent(16,79.3757);
   hmcerror__5->SetBinContent(17,69.21252);
   hmcerror__5->SetBinContent(18,56.93203);
   hmcerror__5->SetBinContent(19,47.0268);
   hmcerror__5->SetBinContent(20,31.8798);
   hmcerror__5->SetBinContent(21,28.29844);
   hmcerror__5->SetBinContent(22,18.82617);
   hmcerror__5->SetBinContent(23,12.63984);
   hmcerror__5->SetBinContent(24,12.17171);
   hmcerror__5->SetBinContent(25,4.217289);
   hmcerror__5->SetBinContent(26,36.82767);
   hmcerror__5->SetBinError(1,0.3895343);
   hmcerror__5->SetBinError(2,7.913664);
   hmcerror__5->SetBinError(3,47.65235);
   hmcerror__5->SetBinError(4,157.4579);
   hmcerror__5->SetBinError(5,177.3417);
   hmcerror__5->SetBinError(6,198.9523);
   hmcerror__5->SetBinError(7,224.8099);
   hmcerror__5->SetBinError(8,195.8953);
   hmcerror__5->SetBinError(9,161.3003);
   hmcerror__5->SetBinError(10,116.9853);
   hmcerror__5->SetBinError(11,85.05779);
   hmcerror__5->SetBinError(12,72.06436);
   hmcerror__5->SetBinError(13,48.94149);
   hmcerror__5->SetBinError(14,51.46075);
   hmcerror__5->SetBinError(15,42.37801);
   hmcerror__5->SetBinError(16,33.17302);
   hmcerror__5->SetBinError(17,29.25429);
   hmcerror__5->SetBinError(18,34.8242);
   hmcerror__5->SetBinError(19,25.22606);
   hmcerror__5->SetBinError(20,18.61153);
   hmcerror__5->SetBinError(21,19.98657);
   hmcerror__5->SetBinError(22,10.68162);
   hmcerror__5->SetBinError(23,11.15103);
   hmcerror__5->SetBinError(24,9.914276);
   hmcerror__5->SetBinError(25,4.759868);
   hmcerror__5->SetBinError(26,25.69369);
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
   
   Double_t _fx3005[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3005[25] = {
   0,
   5,
   256,
   685,
   750,
   680,
   570,
   427,
   419,
   280,
   213,
   175,
   123,
   82,
   69,
   51,
   49,
   38,
   26,
   8,
   18,
   5,
   11,
   5,
   3};
   Double_t _felx3005[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3005[25] = {
   0,
   2.48995,
   16,
   26.1725,
   27.38613,
   26.07681,
   23.87467,
   20.66398,
   20.46949,
   16.7332,
   14.59452,
   13.22876,
   11.09054,
   9.1791,
   8.4327,
   7.2725,
   7.1318,
   6.3013,
   5.2453,
   3.0307,
   4.4008,
   2.48995,
   3.4975,
   2.48995,
   2.143368};
   Double_t _fehx3005[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3005[25] = {
   1.1478,
   2.21064,
   16,
   26.1725,
   27.38613,
   26.07681,
   23.87467,
   20.66398,
   20.46949,
   16.7332,
   14.59452,
   13.22876,
   11.09054,
   8.9774,
   8.2304,
   7.0686,
   6.9277,
   6.0955,
   5.0358,
   2.7896,
   4.1858,
   2.21064,
   3.27,
   2.21064,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1980);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(855.1247);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4948.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 118.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 465.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 370.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1948.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  401.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 769.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 439.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 434.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 34.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3006[25] = {
   0,
   0.8888623,
   0.2228239,
   0.2869125,
   0.2755125,
   0.3133049,
   0.379758,
   0.425685,
   0.3865399,
   0.3342843,
   0.2988054,
   0.317983,
   0.2996444,
   0.3807193,
   0.3920963,
   0.4179241,
   0.4226734,
   0.6116802,
   0.5364188,
   0.5838034,
   0.7062781,
   0.5673814,
   0.882213,
   0.8145342,
   1.128656};
   Double_t _fehx3006[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3006[25] = {
   0,
   0.8888623,
   0.2228239,
   0.2869125,
   0.2755125,
   0.3133049,
   0.379758,
   0.425685,
   0.3865399,
   0.3342843,
   0.2988054,
   0.317983,
   0.2996444,
   0.3807193,
   0.3920963,
   0.4179241,
   0.4226734,
   0.6116802,
   0.5364188,
   0.5838034,
   0.7062781,
   0.5673814,
   0.882213,
   0.8145342,
   1.128656};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1980);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3007[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3007[25] = {
   0,
   0.2571223,
   0.1693493,
   0.2332907,
   0.2628077,
   0.3017767,
   0.3740314,
   0.4147715,
   0.3773651,
   0.3134201,
   0.2754644,
   0.2552635,
   0.242533,
   0.2230936,
   0.2597352,
   0.2997729,
   0.2858714,
   0.3277026,
   0.3315407,
   0.3792315,
   0.3566204,
   0.2921713,
   0.4114122,
   0.2937429,
   0.4443463};
   Double_t _fehx3007[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3007[25] = {
   0,
   0.2571223,
   0.1693493,
   0.2332907,
   0.2628077,
   0.3017767,
   0.3740314,
   0.4147715,
   0.3773651,
   0.3134201,
   0.2754644,
   0.2552635,
   0.242533,
   0.2230936,
   0.2597352,
   0.2997729,
   0.2858714,
   0.3277026,
   0.3315407,
   0.3792315,
   0.3566204,
   0.2921713,
   0.4114122,
   0.2937429,
   0.4443463};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1980);
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
   
   Double_t _fx3008[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3008[25] = {
   10,
   0.5615997,
   1.197064,
   1.248176,
   1.165176,
   1.070847,
   0.962867,
   0.9278811,
   1.004091,
   0.800097,
   0.7482624,
   0.7721852,
   0.7530678,
   0.6066562,
   0.6384124,
   0.642514,
   0.7079644,
   0.6674626,
   0.5528763,
   0.2509426,
   0.6360774,
   0.2655877,
   0.8702644,
   0.4107885,
   0.7113574};
   Double_t _felx3008[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3008[25] = {
   0,
   0.2796711,
   0.0748165,
   0.04769033,
   0.04254622,
   0.04106509,
   0.04033006,
   0.04490331,
   0.04905307,
   0.04781494,
   0.0512701,
   0.05837172,
   0.06790184,
   0.06790924,
   0.07802232,
   0.09162124,
   0.1030421,
   0.1106811,
   0.1115385,
   0.09506648,
   0.1555139,
   0.13226,
   0.2767045,
   0.2045686,
   0.5082336};
   Double_t _fehx3008[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3008[25] = {
   0,
   0.248299,
   0.0748165,
   0.04769033,
   0.04254622,
   0.04106509,
   0.04033006,
   0.04490331,
   0.04905307,
   0.04781494,
   0.0512701,
   0.05837172,
   0.06790184,
   0.06641701,
   0.07615057,
   0.08905244,
   0.1000932,
   0.1070663,
   0.1070836,
   0.08750369,
   0.1479163,
   0.1174238,
   0.2587059,
   0.1816211,
   0.4088455};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1980);
   Graph_Graph3008->SetMinimum(0.1199949);
   Graph_Graph3008->SetMaximum(10.98667);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_nc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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

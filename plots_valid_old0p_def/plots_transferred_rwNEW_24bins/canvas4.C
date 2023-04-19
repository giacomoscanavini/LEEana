#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 16:15:25 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-246.1538,-12.84,1805.128,1419.834);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__10->SetBinContent(2,6.185596);
   hmc__10->SetBinContent(3,152.7627);
   hmc__10->SetBinContent(4,526.3285);
   hmc__10->SetBinContent(5,577.1587);
   hmc__10->SetBinContent(6,538.6753);
   hmc__10->SetBinContent(7,471.0857);
   hmc__10->SetBinContent(8,385.3563);
   hmc__10->SetBinContent(9,299.472);
   hmc__10->SetBinContent(10,235.3282);
   hmc__10->SetBinContent(11,177.7716);
   hmc__10->SetBinContent(12,124.7536);
   hmc__10->SetBinContent(13,96.09695);
   hmc__10->SetBinContent(14,72.70759);
   hmc__10->SetBinContent(15,53.47617);
   hmc__10->SetBinContent(16,44.75379);
   hmc__10->SetBinContent(17,29.43726);
   hmc__10->SetBinContent(18,18.08416);
   hmc__10->SetBinContent(19,20.61104);
   hmc__10->SetBinContent(20,13.2627);
   hmc__10->SetBinContent(21,8.93666);
   hmc__10->SetBinContent(22,12.34697);
   hmc__10->SetBinContent(23,6.367072);
   hmc__10->SetBinContent(24,5.141152);
   hmc__10->SetBinContent(25,34.00517);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,6.399341);
   hmc__10->SetBinError(3,43.22403);
   hmc__10->SetBinError(4,144.3787);
   hmc__10->SetBinError(5,149.7142);
   hmc__10->SetBinError(6,123.0915);
   hmc__10->SetBinError(7,126.9633);
   hmc__10->SetBinError(8,119.1844);
   hmc__10->SetBinError(9,95.31765);
   hmc__10->SetBinError(10,72.69186);
   hmc__10->SetBinError(11,52.29312);
   hmc__10->SetBinError(12,36.94323);
   hmc__10->SetBinError(13,33.86897);
   hmc__10->SetBinError(14,25.61658);
   hmc__10->SetBinError(15,25.29207);
   hmc__10->SetBinError(16,23.6113);
   hmc__10->SetBinError(17,16.75664);
   hmc__10->SetBinError(18,9.718629);
   hmc__10->SetBinError(19,10.91952);
   hmc__10->SetBinError(20,12.04353);
   hmc__10->SetBinError(21,10.23161);
   hmc__10->SetBinError(22,11.51588);
   hmc__10->SetBinError(23,6.628392);
   hmc__10->SetBinError(24,7.975628);
   hmc__10->SetBinError(25,17.27785);
   hmc__10->SetMinimum(-12.84);
   hmc__10->SetMaximum(1348.2);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,1600);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(606.0166);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(2,0.7302274);
   hbadmatch_stack_1->SetBinContent(3,6.209718);
   hbadmatch_stack_1->SetBinContent(4,20.83384);
   hbadmatch_stack_1->SetBinContent(5,12.81547);
   hbadmatch_stack_1->SetBinContent(6,9.14299);
   hbadmatch_stack_1->SetBinContent(7,12.19521);
   hbadmatch_stack_1->SetBinContent(8,7.925845);
   hbadmatch_stack_1->SetBinContent(9,7.90723);
   hbadmatch_stack_1->SetBinContent(10,2.782519);
   hbadmatch_stack_1->SetBinContent(11,4.633631);
   hbadmatch_stack_1->SetBinContent(12,3.379359);
   hbadmatch_stack_1->SetBinContent(13,2.815373);
   hbadmatch_stack_1->SetBinContent(14,2.13399);
   hbadmatch_stack_1->SetBinContent(15,1.507871);
   hbadmatch_stack_1->SetBinContent(16,1.072095);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,1.00903);
   hbadmatch_stack_1->SetBinError(2,0.4379386);
   hbadmatch_stack_1->SetBinError(3,1.289312);
   hbadmatch_stack_1->SetBinError(4,3.119898);
   hbadmatch_stack_1->SetBinError(5,1.901218);
   hbadmatch_stack_1->SetBinError(6,1.580119);
   hbadmatch_stack_1->SetBinError(7,1.821277);
   hbadmatch_stack_1->SetBinError(8,1.427431);
   hbadmatch_stack_1->SetBinError(9,1.535843);
   hbadmatch_stack_1->SetBinError(10,0.8319397);
   hbadmatch_stack_1->SetBinError(11,1.162067);
   hbadmatch_stack_1->SetBinError(12,1.777455);
   hbadmatch_stack_1->SetBinError(13,0.9062206);
   hbadmatch_stack_1->SetBinError(14,0.7431431);
   hbadmatch_stack_1->SetBinError(15,0.6356258);
   hbadmatch_stack_1->SetBinError(16,0.5551335);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.451826);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(2,1.37261);
   hext_stack_2->SetBinContent(3,38.98097);
   hext_stack_2->SetBinContent(4,106.2014);
   hext_stack_2->SetBinContent(5,83.82378);
   hext_stack_2->SetBinContent(6,74.25462);
   hext_stack_2->SetBinContent(7,47.89692);
   hext_stack_2->SetBinContent(8,31.84101);
   hext_stack_2->SetBinContent(9,21.97336);
   hext_stack_2->SetBinContent(10,18.38023);
   hext_stack_2->SetBinContent(11,12.32319);
   hext_stack_2->SetBinContent(12,9.380438);
   hext_stack_2->SetBinContent(13,3.490578);
   hext_stack_2->SetBinContent(14,4.296596);
   hext_stack_2->SetBinContent(15,4.435048);
   hext_stack_2->SetBinContent(16,3.241202);
   hext_stack_2->SetBinContent(17,1.868591);
   hext_stack_2->SetBinContent(18,2.192989);
   hext_stack_2->SetBinContent(19,4.994461);
   hext_stack_2->SetBinContent(20,0.8131978);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,1.055394);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,3.248382);
   hext_stack_2->SetBinError(2,0.8259691);
   hext_stack_2->SetBinError(3,4.26492);
   hext_stack_2->SetBinError(4,7.129006);
   hext_stack_2->SetBinError(5,6.071402);
   hext_stack_2->SetBinError(6,5.775262);
   hext_stack_2->SetBinError(7,4.620848);
   hext_stack_2->SetBinError(8,3.687967);
   hext_stack_2->SetBinError(9,3.293861);
   hext_stack_2->SetBinError(10,2.832358);
   hext_stack_2->SetBinError(11,2.267812);
   hext_stack_2->SetBinError(12,2.080391);
   hext_stack_2->SetBinError(13,1.110227);
   hext_stack_2->SetBinError(14,1.328326);
   hext_stack_2->SetBinError(15,1.533985);
   hext_stack_2->SetBinError(16,1.178414);
   hext_stack_2->SetBinError(17,0.840497);
   hext_stack_2->SetBinError(18,0.9009267);
   hext_stack_2->SetBinError(19,1.644594);
   hext_stack_2->SetBinError(20,0.5750177);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.6130171);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,1.089706);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(3,6.626352);
   hdirt_stack_3->SetBinContent(4,14.4736);
   hdirt_stack_3->SetBinContent(5,10.27961);
   hdirt_stack_3->SetBinContent(6,7.843972);
   hdirt_stack_3->SetBinContent(7,5.068095);
   hdirt_stack_3->SetBinContent(8,3.059023);
   hdirt_stack_3->SetBinContent(9,3.309026);
   hdirt_stack_3->SetBinContent(10,1.747331);
   hdirt_stack_3->SetBinContent(11,2.726679);
   hdirt_stack_3->SetBinContent(12,0.5735468);
   hdirt_stack_3->SetBinContent(13,0.4244012);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.7833549);
   hdirt_stack_3->SetBinError(3,1.35709);
   hdirt_stack_3->SetBinError(4,1.962338);
   hdirt_stack_3->SetBinError(5,1.706959);
   hdirt_stack_3->SetBinError(6,1.438734);
   hdirt_stack_3->SetBinError(7,1.145929);
   hdirt_stack_3->SetBinError(8,0.9386699);
   hdirt_stack_3->SetBinError(9,1.205156);
   hdirt_stack_3->SetBinError(10,0.7376358);
   hdirt_stack_3->SetBinError(11,1.295654);
   hdirt_stack_3->SetBinError(12,0.4403438);
   hdirt_stack_3->SetBinError(13,0.2451693);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.5539236);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(2,2.392469);
   houtFV_stack_4->SetBinContent(3,30.41411);
   houtFV_stack_4->SetBinContent(4,93.62954);
   houtFV_stack_4->SetBinContent(5,93.45499);
   houtFV_stack_4->SetBinContent(6,77.44874);
   houtFV_stack_4->SetBinContent(7,53.71246);
   houtFV_stack_4->SetBinContent(8,41.38689);
   houtFV_stack_4->SetBinContent(9,32.8707);
   houtFV_stack_4->SetBinContent(10,24.58374);
   houtFV_stack_4->SetBinContent(11,14.75317);
   houtFV_stack_4->SetBinContent(12,10.13448);
   houtFV_stack_4->SetBinContent(13,9.85551);
   houtFV_stack_4->SetBinContent(14,5.588465);
   houtFV_stack_4->SetBinContent(15,3.608027);
   houtFV_stack_4->SetBinContent(16,4.475221);
   houtFV_stack_4->SetBinContent(17,1.176911);
   houtFV_stack_4->SetBinContent(18,0.744234);
   houtFV_stack_4->SetBinContent(19,1.674097);
   houtFV_stack_4->SetBinContent(20,1.270501);
   houtFV_stack_4->SetBinContent(21,0.7302274);
   houtFV_stack_4->SetBinContent(22,0.9775374);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.1967154);
   houtFV_stack_4->SetBinContent(25,0.5884556);
   houtFV_stack_4->SetBinError(2,0.7848912);
   houtFV_stack_4->SetBinError(3,2.668006);
   houtFV_stack_4->SetBinError(4,4.862257);
   houtFV_stack_4->SetBinError(5,4.8509);
   houtFV_stack_4->SetBinError(6,4.624319);
   houtFV_stack_4->SetBinError(7,3.738379);
   houtFV_stack_4->SetBinError(8,3.190394);
   houtFV_stack_4->SetBinError(9,2.89216);
   houtFV_stack_4->SetBinError(10,2.500906);
   houtFV_stack_4->SetBinError(11,1.90606);
   houtFV_stack_4->SetBinError(12,1.579495);
   houtFV_stack_4->SetBinError(13,1.636651);
   houtFV_stack_4->SetBinError(14,1.206171);
   houtFV_stack_4->SetBinError(15,1.000625);
   houtFV_stack_4->SetBinError(16,1.134534);
   houtFV_stack_4->SetBinError(17,0.4804759);
   houtFV_stack_4->SetBinError(18,0.4443531);
   houtFV_stack_4->SetBinError(19,0.7154284);
   houtFV_stack_4->SetBinError(20,0.5895188);
   houtFV_stack_4->SetBinError(21,0.4379386);
   houtFV_stack_4->SetBinError(22,0.5027737);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.1967154);
   houtFV_stack_4->SetBinError(25,0.3397478);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.644612);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,9.744614);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.39645);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,15.75392);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,15.17252);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,13.97149);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.059475);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.97304);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.404312);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.80837);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.733384);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.492158);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.338208);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5852358);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.975508);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6968357);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4297453);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.044087);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.132082);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.254942);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.311633);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.309159);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8972288);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9017727);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5811807);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6837937);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5882811);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4002008);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3603705);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1727406);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3460456);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1815295);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.157854);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.785608);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.728976);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6546538);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8228858);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3901041);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.32337);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4408476);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4165616);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1962949);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2499367);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2390593);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.046422);
   hNCpi0inFVres_stack_7->SetBinContent(3,42.63834);
   hNCpi0inFVres_stack_7->SetBinContent(4,182.699);
   hNCpi0inFVres_stack_7->SetBinContent(5,237.1717);
   hNCpi0inFVres_stack_7->SetBinContent(6,219.7263);
   hNCpi0inFVres_stack_7->SetBinContent(7,179.969);
   hNCpi0inFVres_stack_7->SetBinContent(8,133.7685);
   hNCpi0inFVres_stack_7->SetBinContent(9,95.2561);
   hNCpi0inFVres_stack_7->SetBinContent(10,67.30054);
   hNCpi0inFVres_stack_7->SetBinContent(11,45.49064);
   hNCpi0inFVres_stack_7->SetBinContent(12,26.92642);
   hNCpi0inFVres_stack_7->SetBinContent(13,19.50999);
   hNCpi0inFVres_stack_7->SetBinContent(14,14.41722);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.265985);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.390605);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.478554);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.869476);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.924276);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.407626);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5860679);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.5852358);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.445904);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2368179);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.632826);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3663515);
   hNCpi0inFVres_stack_7->SetBinError(3,2.105591);
   hNCpi0inFVres_stack_7->SetBinError(4,4.367398);
   hNCpi0inFVres_stack_7->SetBinError(5,5.047536);
   hNCpi0inFVres_stack_7->SetBinError(6,4.853256);
   hNCpi0inFVres_stack_7->SetBinError(7,4.362026);
   hNCpi0inFVres_stack_7->SetBinError(8,3.782731);
   hNCpi0inFVres_stack_7->SetBinError(9,3.141091);
   hNCpi0inFVres_stack_7->SetBinError(10,2.657379);
   hNCpi0inFVres_stack_7->SetBinError(11,2.218859);
   hNCpi0inFVres_stack_7->SetBinError(12,1.635777);
   hNCpi0inFVres_stack_7->SetBinError(13,1.466534);
   hNCpi0inFVres_stack_7->SetBinError(14,1.263058);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8655074);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5842412);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7924605);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4789997);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4230513);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3722355);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2215976);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1727406);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2422936);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1155977);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4988354);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.621052);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.14605);
   hNCpi0inFVdis_stack_8->SetBinContent(5,29.6575);
   hNCpi0inFVdis_stack_8->SetBinContent(6,30.77731);
   hNCpi0inFVdis_stack_8->SetBinContent(7,32.23692);
   hNCpi0inFVdis_stack_8->SetBinContent(8,27.07289);
   hNCpi0inFVdis_stack_8->SetBinContent(9,20.6494);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.01186);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.33268);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.86618);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.813616);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.728574);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.738784);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.761116);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.020593);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.965794);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6139679);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.534676);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.9763402);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.98979);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.007639);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9868499);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.694676);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.812693);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.789771);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.85933);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.636213);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.471501);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.497913);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.195485);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.110883);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9949026);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7345154);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6527806);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.560441);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3693482);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4323036);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2233471);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4691479);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3728455);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.336735);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.340279);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(3,3.319412);
   hCCpi0inFV_stack_10->SetBinContent(4,17.95195);
   hCCpi0inFV_stack_10->SetBinContent(5,35.05032);
   hCCpi0inFV_stack_10->SetBinContent(6,48.34562);
   hCCpi0inFV_stack_10->SetBinContent(7,70.82828);
   hCCpi0inFV_stack_10->SetBinContent(8,72.9881);
   hCCpi0inFV_stack_10->SetBinContent(9,66.57563);
   hCCpi0inFV_stack_10->SetBinContent(10,57.15443);
   hCCpi0inFV_stack_10->SetBinContent(11,46.00326);
   hCCpi0inFV_stack_10->SetBinContent(12,34.9672);
   hCCpi0inFV_stack_10->SetBinContent(13,29.34349);
   hCCpi0inFV_stack_10->SetBinContent(14,23.11914);
   hCCpi0inFV_stack_10->SetBinContent(15,14.99821);
   hCCpi0inFV_stack_10->SetBinContent(16,12.81743);
   hCCpi0inFV_stack_10->SetBinContent(17,8.828156);
   hCCpi0inFV_stack_10->SetBinContent(18,7.003555);
   hCCpi0inFV_stack_10->SetBinContent(19,6.016793);
   hCCpi0inFV_stack_10->SetBinContent(20,3.856305);
   hCCpi0inFV_stack_10->SetBinContent(21,2.274872);
   hCCpi0inFV_stack_10->SetBinContent(22,3.966192);
   hCCpi0inFV_stack_10->SetBinContent(23,2.298879);
   hCCpi0inFV_stack_10->SetBinContent(24,2.342597);
   hCCpi0inFV_stack_10->SetBinContent(25,9.07501);
   hCCpi0inFV_stack_10->SetBinError(3,0.9200768);
   hCCpi0inFV_stack_10->SetBinError(4,2.135084);
   hCCpi0inFV_stack_10->SetBinError(5,2.899011);
   hCCpi0inFV_stack_10->SetBinError(6,3.480615);
   hCCpi0inFV_stack_10->SetBinError(7,4.182499);
   hCCpi0inFV_stack_10->SetBinError(8,4.233521);
   hCCpi0inFV_stack_10->SetBinError(9,4.103358);
   hCCpi0inFV_stack_10->SetBinError(10,3.793436);
   hCCpi0inFV_stack_10->SetBinError(11,3.399471);
   hCCpi0inFV_stack_10->SetBinError(12,3.012352);
   hCCpi0inFV_stack_10->SetBinError(13,2.768586);
   hCCpi0inFV_stack_10->SetBinError(14,2.478515);
   hCCpi0inFV_stack_10->SetBinError(15,1.942702);
   hCCpi0inFV_stack_10->SetBinError(16,1.8444);
   hCCpi0inFV_stack_10->SetBinError(17,1.480409);
   hCCpi0inFV_stack_10->SetBinError(18,1.297347);
   hCCpi0inFV_stack_10->SetBinError(19,1.19386);
   hCCpi0inFV_stack_10->SetBinError(20,1.000479);
   hCCpi0inFV_stack_10->SetBinError(21,0.7415988);
   hCCpi0inFV_stack_10->SetBinError(22,0.9620965);
   hCCpi0inFV_stack_10->SetBinError(23,0.7066675);
   hCCpi0inFV_stack_10->SetBinError(24,0.8097566);
   hCCpi0inFV_stack_10->SetBinError(25,1.57018);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,6.750401);
   hNCinFV_stack_11->SetBinContent(4,17.34757);
   hNCinFV_stack_11->SetBinContent(5,25.23215);
   hNCinFV_stack_11->SetBinContent(6,25.026);
   hNCinFV_stack_11->SetBinContent(7,23.39902);
   hNCinFV_stack_11->SetBinContent(8,27.02057);
   hNCinFV_stack_11->SetBinContent(9,20.15087);
   hNCinFV_stack_11->SetBinContent(10,15.63654);
   hNCinFV_stack_11->SetBinContent(11,17.25736);
   hNCinFV_stack_11->SetBinContent(12,10.21835);
   hNCinFV_stack_11->SetBinContent(13,9.809701);
   hNCinFV_stack_11->SetBinContent(14,8.502851);
   hNCinFV_stack_11->SetBinContent(15,7.174026);
   hNCinFV_stack_11->SetBinContent(16,5.465293);
   hNCinFV_stack_11->SetBinContent(17,2.837462);
   hNCinFV_stack_11->SetBinContent(18,2.050601);
   hNCinFV_stack_11->SetBinContent(19,2.055672);
   hNCinFV_stack_11->SetBinContent(20,0.5901461);
   hNCinFV_stack_11->SetBinContent(21,1.175221);
   hNCinFV_stack_11->SetBinContent(22,1.897603);
   hNCinFV_stack_11->SetBinContent(23,0.7868615);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,3.267849);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,1.27217);
   hNCinFV_stack_11->SetBinError(4,2.105337);
   hNCinFV_stack_11->SetBinError(5,2.581037);
   hNCinFV_stack_11->SetBinError(6,2.466451);
   hNCinFV_stack_11->SetBinError(7,2.410837);
   hNCinFV_stack_11->SetBinError(8,2.611261);
   hNCinFV_stack_11->SetBinError(9,2.309201);
   hNCinFV_stack_11->SetBinError(10,1.962108);
   hNCinFV_stack_11->SetBinError(11,2.077762);
   hNCinFV_stack_11->SetBinError(12,1.594982);
   hNCinFV_stack_11->SetBinError(13,1.568634);
   hNCinFV_stack_11->SetBinError(14,1.469024);
   hNCinFV_stack_11->SetBinError(15,1.358984);
   hNCinFV_stack_11->SetBinError(16,1.209773);
   hNCinFV_stack_11->SetBinError(17,0.8089864);
   hNCinFV_stack_11->SetBinError(18,0.7068742);
   hNCinFV_stack_11->SetBinError(19,0.7082781);
   hNCinFV_stack_11->SetBinError(20,0.340721);
   hNCinFV_stack_11->SetBinError(21,0.4797863);
   hNCinFV_stack_11->SetBinError(22,0.785685);
   hNCinFV_stack_11->SetBinError(23,0.3934307);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.9410263);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,5.307168);
   hnumuCCinFV_stack_12->SetBinContent(4,31.08693);
   hnumuCCinFV_stack_12->SetBinContent(5,32.80598);
   hnumuCCinFV_stack_12->SetBinContent(6,25.89434);
   hnumuCCinFV_stack_12->SetBinContent(7,28.85538);
   hnumuCCinFV_stack_12->SetBinContent(8,23.41729);
   hnumuCCinFV_stack_12->SetBinContent(9,19.28911);
   hnumuCCinFV_stack_12->SetBinContent(10,19.10223);
   hnumuCCinFV_stack_12->SetBinContent(11,14.70406);
   hnumuCCinFV_stack_12->SetBinContent(12,11.62028);
   hnumuCCinFV_stack_12->SetBinContent(13,8.818047);
   hnumuCCinFV_stack_12->SetBinContent(14,7.682172);
   hnumuCCinFV_stack_12->SetBinContent(15,7.328531);
   hnumuCCinFV_stack_12->SetBinContent(16,7.165726);
   hnumuCCinFV_stack_12->SetBinContent(17,5.489973);
   hnumuCCinFV_stack_12->SetBinContent(18,1.318683);
   hnumuCCinFV_stack_12->SetBinContent(19,2.816235);
   hnumuCCinFV_stack_12->SetBinContent(20,3.092275);
   hnumuCCinFV_stack_12->SetBinContent(21,1.804013);
   hnumuCCinFV_stack_12->SetBinContent(22,1.515398);
   hnumuCCinFV_stack_12->SetBinContent(23,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(24,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(25,6.425082);
   hnumuCCinFV_stack_12->SetBinError(3,1.270645);
   hnumuCCinFV_stack_12->SetBinError(4,3.74213);
   hnumuCCinFV_stack_12->SetBinError(5,3.764126);
   hnumuCCinFV_stack_12->SetBinError(6,2.757727);
   hnumuCCinFV_stack_12->SetBinError(7,3.207427);
   hnumuCCinFV_stack_12->SetBinError(8,3.248321);
   hnumuCCinFV_stack_12->SetBinError(9,2.192259);
   hnumuCCinFV_stack_12->SetBinError(10,2.290624);
   hnumuCCinFV_stack_12->SetBinError(11,1.935133);
   hnumuCCinFV_stack_12->SetBinError(12,1.741547);
   hnumuCCinFV_stack_12->SetBinError(13,1.692265);
   hnumuCCinFV_stack_12->SetBinError(14,1.412596);
   hnumuCCinFV_stack_12->SetBinError(15,1.418534);
   hnumuCCinFV_stack_12->SetBinError(16,1.357971);
   hnumuCCinFV_stack_12->SetBinError(17,1.618351);
   hnumuCCinFV_stack_12->SetBinError(18,0.5542732);
   hnumuCCinFV_stack_12->SetBinError(19,0.8403573);
   hnumuCCinFV_stack_12->SetBinError(20,0.8480518);
   hnumuCCinFV_stack_12->SetBinError(21,0.7075491);
   hnumuCCinFV_stack_12->SetBinError(22,0.588146);
   hnumuCCinFV_stack_12->SetBinError(23,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(24,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(25,1.284868);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(3,0.7481789);
   hnueCCinFV_stack_13->SetBinContent(4,3.028248);
   hnueCCinFV_stack_13->SetBinContent(5,2.629331);
   hnueCCinFV_stack_13->SetBinContent(6,2.439707);
   hnueCCinFV_stack_13->SetBinContent(7,1.01352);
   hnueCCinFV_stack_13->SetBinContent(8,2.025928);
   hnueCCinFV_stack_13->SetBinContent(9,2.97086);
   hnueCCinFV_stack_13->SetBinContent(10,1.348715);
   hnueCCinFV_stack_13->SetBinContent(11,1.556357);
   hnueCCinFV_stack_13->SetBinContent(12,1.767419);
   hnueCCinFV_stack_13->SetBinContent(13,0.4270637);
   hnueCCinFV_stack_13->SetBinContent(14,0.2182412);
   hnueCCinFV_stack_13->SetBinContent(15,1.858941);
   hnueCCinFV_stack_13->SetBinContent(16,1.99651);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1969809);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,1.024854);
   hnueCCinFV_stack_13->SetBinContent(23,0.9381727);
   hnueCCinFV_stack_13->SetBinContent(25,6.05406);
   hnueCCinFV_stack_13->SetBinError(3,0.545424);
   hnueCCinFV_stack_13->SetBinError(4,1.51776);
   hnueCCinFV_stack_13->SetBinError(5,0.933513);
   hnueCCinFV_stack_13->SetBinError(6,0.8411803);
   hnueCCinFV_stack_13->SetBinError(7,0.5244887);
   hnueCCinFV_stack_13->SetBinError(8,0.7755434);
   hnueCCinFV_stack_13->SetBinError(9,0.8604928);
   hnueCCinFV_stack_13->SetBinError(10,0.5638344);
   hnueCCinFV_stack_13->SetBinError(11,0.7928002);
   hnueCCinFV_stack_13->SetBinError(12,1.198918);
   hnueCCinFV_stack_13->SetBinError(13,0.3029147);
   hnueCCinFV_stack_13->SetBinError(14,0.2182412);
   hnueCCinFV_stack_13->SetBinError(15,0.8070479);
   hnueCCinFV_stack_13->SetBinError(16,0.7373924);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967155);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.5272749);
   hnueCCinFV_stack_13->SetBinError(23,0.7683121);
   hnueCCinFV_stack_13->SetBinError(25,2.045236);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__11->SetBinContent(2,6.185596);
   hmcerror__11->SetBinContent(3,152.7627);
   hmcerror__11->SetBinContent(4,526.3285);
   hmcerror__11->SetBinContent(5,577.1587);
   hmcerror__11->SetBinContent(6,538.6753);
   hmcerror__11->SetBinContent(7,471.0857);
   hmcerror__11->SetBinContent(8,385.3563);
   hmcerror__11->SetBinContent(9,299.472);
   hmcerror__11->SetBinContent(10,235.3282);
   hmcerror__11->SetBinContent(11,177.7716);
   hmcerror__11->SetBinContent(12,124.7536);
   hmcerror__11->SetBinContent(13,96.09695);
   hmcerror__11->SetBinContent(14,72.70759);
   hmcerror__11->SetBinContent(15,53.47617);
   hmcerror__11->SetBinContent(16,44.75379);
   hmcerror__11->SetBinContent(17,29.43726);
   hmcerror__11->SetBinContent(18,18.08416);
   hmcerror__11->SetBinContent(19,20.61104);
   hmcerror__11->SetBinContent(20,13.2627);
   hmcerror__11->SetBinContent(21,8.93666);
   hmcerror__11->SetBinContent(22,12.34697);
   hmcerror__11->SetBinContent(23,6.367072);
   hmcerror__11->SetBinContent(24,5.141152);
   hmcerror__11->SetBinContent(25,34.00517);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,6.399341);
   hmcerror__11->SetBinError(3,43.22403);
   hmcerror__11->SetBinError(4,144.3787);
   hmcerror__11->SetBinError(5,149.7142);
   hmcerror__11->SetBinError(6,123.0915);
   hmcerror__11->SetBinError(7,126.9633);
   hmcerror__11->SetBinError(8,119.1844);
   hmcerror__11->SetBinError(9,95.31765);
   hmcerror__11->SetBinError(10,72.69186);
   hmcerror__11->SetBinError(11,52.29312);
   hmcerror__11->SetBinError(12,36.94323);
   hmcerror__11->SetBinError(13,33.86897);
   hmcerror__11->SetBinError(14,25.61658);
   hmcerror__11->SetBinError(15,25.29207);
   hmcerror__11->SetBinError(16,23.6113);
   hmcerror__11->SetBinError(17,16.75664);
   hmcerror__11->SetBinError(18,9.718629);
   hmcerror__11->SetBinError(19,10.91952);
   hmcerror__11->SetBinError(20,12.04353);
   hmcerror__11->SetBinError(21,10.23161);
   hmcerror__11->SetBinError(22,11.51588);
   hmcerror__11->SetBinError(23,6.628392);
   hmcerror__11->SetBinError(24,7.975628);
   hmcerror__11->SetBinError(25,17.27785);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3013[24] = {
   0,
   2,
   195,
   635,
   642,
   557,
   438,
   309,
   237,
   223,
   139,
   115,
   84,
   55,
   36,
   29,
   23,
   22,
   20,
   10,
   12,
   6,
   8,
   1};
   Double_t _felx3013[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3013[24] = {
   0,
   2,
   13.96424,
   25.19921,
   25.33772,
   23.60085,
   20.92845,
   17.5784,
   15.3948,
   14.93318,
   11.78983,
   10.72381,
   9.2886,
   7.546,
   6.1381,
   5.5285,
   4.9457,
   4.8417,
   4.6266,
   3.34883,
   3.64022,
   2.67925,
   3.0307,
   1};
   Double_t _fehx3013[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3013[24] = {
   1.1478,
   1.51917,
   13.96424,
   25.19921,
   25.33772,
   23.60085,
   20.92845,
   17.5784,
   15.3948,
   14.93318,
   11.78983,
   10.72381,
   9.0869,
   7.3425,
   5.9318,
   5.3201,
   4.7346,
   4.6299,
   4.4133,
   3.1179,
   3.4155,
   2.41858,
   2.7896,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1760);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(734.0715);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3798.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.9","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 474.2","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.3","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.1","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1290.1","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  253.6","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 570.0","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.0","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 260.6","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 26.8","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   
   Double_t _fx3014[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3014[24] = {
   0,
   1.034555,
   0.2829489,
   0.2743129,
   0.2593986,
   0.2285079,
   0.269512,
   0.3092837,
   0.3182857,
   0.3088957,
   0.2941591,
   0.2961295,
   0.3524458,
   0.3523234,
   0.4729597,
   0.5275821,
   0.5692325,
   0.5374111,
   0.5297896,
   0.9080754,
   1.144904,
   0.9326883,
   1.041042,
   1.551331};
   Double_t _fehx3014[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3014[24] = {
   0,
   1.034555,
   0.2829489,
   0.2743129,
   0.2593986,
   0.2285079,
   0.269512,
   0.3092837,
   0.3182857,
   0.3088957,
   0.2941591,
   0.2961295,
   0.3524458,
   0.3523234,
   0.4729597,
   0.5275821,
   0.5692325,
   0.5374111,
   0.5297896,
   0.9080754,
   1.144904,
   0.9326883,
   1.041042,
   1.551331};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1760);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3015[24] = {
   0,
   0.329849,
   0.2249485,
   0.2272358,
   0.2141674,
   0.2048331,
   0.2406898,
   0.2736483,
   0.2758259,
   0.2658488,
   0.2561706,
   0.2460258,
   0.2496696,
   0.2377368,
   0.2228288,
   0.2180455,
   0.2313528,
   0.2186377,
   0.2151519,
   0.256957,
   0.2742693,
   0.2673696,
   0.4308526,
   0.3156872};
   Double_t _fehx3015[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3015[24] = {
   0,
   0.329849,
   0.2249485,
   0.2272358,
   0.2141674,
   0.2048331,
   0.2406898,
   0.2736483,
   0.2758259,
   0.2658488,
   0.2561706,
   0.2460258,
   0.2496696,
   0.2377368,
   0.2228288,
   0.2180455,
   0.2313528,
   0.2186377,
   0.2151519,
   0.256957,
   0.2742693,
   0.2673696,
   0.4308526,
   0.3156872};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1760);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3016[24] = {
   10,
   0.3233318,
   1.27649,
   1.206471,
   1.112346,
   1.034018,
   0.9297671,
   0.8018554,
   0.791393,
   0.9476127,
   0.7819023,
   0.9218169,
   0.8741172,
   0.7564547,
   0.6731971,
   0.6479898,
   0.7813228,
   1.216534,
   0.9703536,
   0.7539941,
   1.342784,
   0.4859491,
   1.256464,
   0.1945089};
   Double_t _felx3016[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3016[24] = {
   0,
   0.3233318,
   0.09141134,
   0.04787734,
   0.04390078,
   0.04381275,
   0.04442599,
   0.04561596,
   0.0514065,
   0.06345684,
   0.06632009,
   0.08595986,
   0.09665863,
   0.1037856,
   0.114782,
   0.1235314,
   0.1680082,
   0.2677315,
   0.2244719,
   0.2524998,
   0.4073356,
   0.2169965,
   0.4759959,
   0.1945089};
   Double_t _fehx3016[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3016[24] = {
   0,
   0.245598,
   0.09141134,
   0.04787734,
   0.04390078,
   0.04381275,
   0.04442599,
   0.04561596,
   0.0514065,
   0.06345684,
   0.06632009,
   0.08595986,
   0.09455971,
   0.1009867,
   0.1109242,
   0.1188748,
   0.160837,
   0.2560196,
   0.2141231,
   0.2350878,
   0.3821898,
   0.1958845,
   0.4381292,
   0.2644757};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1760);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(11);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",24,0,1600);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(0,1,1600,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Feb 18 11:38:27 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-92.30769,-16.98577,676.9231,1878.268);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__1->SetBinContent(1,21.64523);
   hmc__1->SetBinContent(2,100.3741);
   hmc__1->SetBinContent(3,275.6057);
   hmc__1->SetBinContent(4,556.3157);
   hmc__1->SetBinContent(5,817.101);
   hmc__1->SetBinContent(6,849.2885);
   hmc__1->SetBinContent(7,838.6963);
   hmc__1->SetBinContent(8,698.0873);
   hmc__1->SetBinContent(9,550.2227);
   hmc__1->SetBinContent(10,482.7806);
   hmc__1->SetBinContent(11,393.4658);
   hmc__1->SetBinContent(12,329.3691);
   hmc__1->SetBinContent(13,275.6803);
   hmc__1->SetBinContent(14,220.2612);
   hmc__1->SetBinContent(15,168.6653);
   hmc__1->SetBinContent(16,149.6452);
   hmc__1->SetBinContent(17,119.5442);
   hmc__1->SetBinContent(18,96.83694);
   hmc__1->SetBinContent(19,85.40105);
   hmc__1->SetBinContent(20,63.94743);
   hmc__1->SetBinContent(21,42.4687);
   hmc__1->SetBinContent(22,38.43566);
   hmc__1->SetBinContent(23,34.64028);
   hmc__1->SetBinContent(24,28.98825);
   hmc__1->SetBinContent(25,236.3444);
   hmc__1->SetBinError(1,15.11);
   hmc__1->SetBinError(2,31.89538);
   hmc__1->SetBinError(3,65.87312);
   hmc__1->SetBinError(4,134.7099);
   hmc__1->SetBinError(5,177.2287);
   hmc__1->SetBinError(6,191.4842);
   hmc__1->SetBinError(7,207.4007);
   hmc__1->SetBinError(8,171.4352);
   hmc__1->SetBinError(9,149.8767);
   hmc__1->SetBinError(10,135.4396);
   hmc__1->SetBinError(11,114.5713);
   hmc__1->SetBinError(12,102.3987);
   hmc__1->SetBinError(13,85.5897);
   hmc__1->SetBinError(14,74.91369);
   hmc__1->SetBinError(15,59.5786);
   hmc__1->SetBinError(16,52.10367);
   hmc__1->SetBinError(17,42.62941);
   hmc__1->SetBinError(18,39.95917);
   hmc__1->SetBinError(19,31.22506);
   hmc__1->SetBinError(20,25.24642);
   hmc__1->SetBinError(21,25.22722);
   hmc__1->SetBinError(22,16.83765);
   hmc__1->SetBinError(23,15.32773);
   hmc__1->SetBinError(24,16.50231);
   hmc__1->SetBinError(25,57.14311);
   hmc__1->SetMinimum(-16.98577);
   hmc__1->SetMaximum(1783.506);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,600);
   hs1_stack_1->SetMinimum(-4.412017e-09);
   hs1_stack_1->SetMaximum(891.7529);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.464678);
   hbadmatch_stack_1->SetBinContent(2,6.989738);
   hbadmatch_stack_1->SetBinContent(3,15.64712);
   hbadmatch_stack_1->SetBinContent(4,22.10802);
   hbadmatch_stack_1->SetBinContent(5,20.50471);
   hbadmatch_stack_1->SetBinContent(6,23.43238);
   hbadmatch_stack_1->SetBinContent(7,23.43259);
   hbadmatch_stack_1->SetBinContent(8,20.64329);
   hbadmatch_stack_1->SetBinContent(9,12.91575);
   hbadmatch_stack_1->SetBinContent(10,7.390266);
   hbadmatch_stack_1->SetBinContent(11,3.382686);
   hbadmatch_stack_1->SetBinContent(12,6.739793);
   hbadmatch_stack_1->SetBinContent(13,2.418395);
   hbadmatch_stack_1->SetBinContent(14,2.238913);
   hbadmatch_stack_1->SetBinContent(15,1.545967);
   hbadmatch_stack_1->SetBinContent(16,0.7868615);
   hbadmatch_stack_1->SetBinContent(17,0.9818863);
   hbadmatch_stack_1->SetBinContent(18,1.270501);
   hbadmatch_stack_1->SetBinContent(19,1.513131);
   hbadmatch_stack_1->SetBinContent(20,0.8176194);
   hbadmatch_stack_1->SetBinContent(21,0.536893);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,1.128119);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,2.107235);
   hbadmatch_stack_1->SetBinError(1,1.106781);
   hbadmatch_stack_1->SetBinError(2,1.396988);
   hbadmatch_stack_1->SetBinError(3,2.281769);
   hbadmatch_stack_1->SetBinError(4,2.392142);
   hbadmatch_stack_1->SetBinError(5,2.243428);
   hbadmatch_stack_1->SetBinError(6,2.697979);
   hbadmatch_stack_1->SetBinError(7,2.60619);
   hbadmatch_stack_1->SetBinError(8,3.378082);
   hbadmatch_stack_1->SetBinError(9,1.94885);
   hbadmatch_stack_1->SetBinError(10,1.427702);
   hbadmatch_stack_1->SetBinError(11,0.9340956);
   hbadmatch_stack_1->SetBinError(12,2.081569);
   hbadmatch_stack_1->SetBinError(13,0.8387124);
   hbadmatch_stack_1->SetBinError(14,0.8563497);
   hbadmatch_stack_1->SetBinError(15,0.5988954);
   hbadmatch_stack_1->SetBinError(16,0.3934307);
   hbadmatch_stack_1->SetBinError(17,0.4391155);
   hbadmatch_stack_1->SetBinError(18,0.5895188);
   hbadmatch_stack_1->SetBinError(19,0.7090034);
   hbadmatch_stack_1->SetBinError(20,0.4096766);
   hbadmatch_stack_1->SetBinError(21,0.3929602);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.5911238);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.6801976);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,7.732501);
   hext_stack_2->SetBinContent(2,25.77239);
   hext_stack_2->SetBinContent(3,51.26663);
   hext_stack_2->SetBinContent(4,77.28676);
   hext_stack_2->SetBinContent(5,99.36984);
   hext_stack_2->SetBinContent(6,104.1911);
   hext_stack_2->SetBinContent(7,94.30635);
   hext_stack_2->SetBinContent(8,82.15909);
   hext_stack_2->SetBinContent(9,35.7625);
   hext_stack_2->SetBinContent(10,39.19999);
   hext_stack_2->SetBinContent(11,32.58354);
   hext_stack_2->SetBinContent(12,26.83654);
   hext_stack_2->SetBinContent(13,18.96553);
   hext_stack_2->SetBinContent(14,11.75219);
   hext_stack_2->SetBinContent(15,4.296596);
   hext_stack_2->SetBinContent(16,10.58587);
   hext_stack_2->SetBinContent(17,2.923985);
   hext_stack_2->SetBinContent(18,6.938073);
   hext_stack_2->SetBinContent(19,2.834603);
   hext_stack_2->SetBinContent(20,5.158864);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,1.461993);
   hext_stack_2->SetBinContent(23,1.290409);
   hext_stack_2->SetBinContent(24,1.461993);
   hext_stack_2->SetBinContent(25,9.46982);
   hext_stack_2->SetBinError(1,2.06648);
   hext_stack_2->SetBinError(2,3.284494);
   hext_stack_2->SetBinError(3,4.885395);
   hext_stack_2->SetBinError(4,5.833308);
   hext_stack_2->SetBinError(5,6.80224);
   hext_stack_2->SetBinError(6,6.970275);
   hext_stack_2->SetBinError(7,6.726178);
   hext_stack_2->SetBinError(8,6.44073);
   hext_stack_2->SetBinError(9,3.749547);
   hext_stack_2->SetBinError(10,4.285656);
   hext_stack_2->SetBinError(11,3.8905);
   hext_stack_2->SetBinError(12,3.572723);
   hext_stack_2->SetBinError(13,3.039039);
   hext_stack_2->SetBinError(14,2.203967);
   hext_stack_2->SetBinError(15,1.328326);
   hext_stack_2->SetBinError(16,2.286132);
   hext_stack_2->SetBinError(17,1.040301);
   hext_stack_2->SetBinError(18,1.916355);
   hext_stack_2->SetBinError(19,1.106046);
   hext_stack_2->SetBinError(20,1.680734);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,0.7356036);
   hext_stack_2->SetBinError(23,0.788756);
   hext_stack_2->SetBinError(24,0.7356036);
   hext_stack_2->SetBinError(25,2.046195);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,3.309515);
   hdirt_stack_3->SetBinContent(3,5.134748);
   hdirt_stack_3->SetBinContent(4,9.075876);
   hdirt_stack_3->SetBinContent(5,12.04401);
   hdirt_stack_3->SetBinContent(6,12.41428);
   hdirt_stack_3->SetBinContent(7,7.363165);
   hdirt_stack_3->SetBinContent(8,5.144936);
   hdirt_stack_3->SetBinContent(9,4.639668);
   hdirt_stack_3->SetBinContent(10,2.279988);
   hdirt_stack_3->SetBinContent(11,1.795931);
   hdirt_stack_3->SetBinContent(12,2.959599);
   hdirt_stack_3->SetBinContent(13,0.5831082);
   hdirt_stack_3->SetBinContent(14,1.333719);
   hdirt_stack_3->SetBinContent(15,1.576753);
   hdirt_stack_3->SetBinContent(16,0.3235058);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,1.730123);
   hdirt_stack_3->SetBinContent(19,0.4080678);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.8845611);
   hdirt_stack_3->SetBinError(3,1.126085);
   hdirt_stack_3->SetBinError(4,1.577985);
   hdirt_stack_3->SetBinError(5,1.955419);
   hdirt_stack_3->SetBinError(6,1.824944);
   hdirt_stack_3->SetBinError(7,1.483193);
   hdirt_stack_3->SetBinError(8,1.177154);
   hdirt_stack_3->SetBinError(9,1.157359);
   hdirt_stack_3->SetBinError(10,0.8003216);
   hdirt_stack_3->SetBinError(11,0.6857104);
   hdirt_stack_3->SetBinError(12,0.9008491);
   hdirt_stack_3->SetBinError(13,0.3436842);
   hdirt_stack_3->SetBinError(14,0.65183);
   hdirt_stack_3->SetBinError(15,1.006703);
   hdirt_stack_3->SetBinError(16,0.2288138);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,1.17734);
   hdirt_stack_3->SetBinError(19,0.4080678);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetBinError(25,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,2.732646);
   houtFV_stack_4->SetBinContent(2,12.32217);
   houtFV_stack_4->SetBinContent(3,39.28466);
   houtFV_stack_4->SetBinContent(4,62.67118);
   houtFV_stack_4->SetBinContent(5,94.62483);
   houtFV_stack_4->SetBinContent(6,89.83328);
   houtFV_stack_4->SetBinContent(7,86.40299);
   houtFV_stack_4->SetBinContent(8,71.61575);
   houtFV_stack_4->SetBinContent(9,51.7726);
   houtFV_stack_4->SetBinContent(10,44.6329);
   houtFV_stack_4->SetBinContent(11,32.13149);
   houtFV_stack_4->SetBinContent(12,27.79016);
   houtFV_stack_4->SetBinContent(13,22.55031);
   houtFV_stack_4->SetBinContent(14,14.06029);
   houtFV_stack_4->SetBinContent(15,12.22078);
   houtFV_stack_4->SetBinContent(16,10.41482);
   houtFV_stack_4->SetBinContent(17,7.936927);
   houtFV_stack_4->SetBinContent(18,6.533469);
   houtFV_stack_4->SetBinContent(19,8.66476);
   houtFV_stack_4->SetBinContent(20,3.512746);
   houtFV_stack_4->SetBinContent(21,2.653063);
   houtFV_stack_4->SetBinContent(22,2.289031);
   houtFV_stack_4->SetBinContent(23,3.36313);
   houtFV_stack_4->SetBinContent(24,2.688928);
   houtFV_stack_4->SetBinContent(25,9.528862);
   houtFV_stack_4->SetBinError(1,0.8554385);
   houtFV_stack_4->SetBinError(2,1.791454);
   houtFV_stack_4->SetBinError(3,3.103327);
   houtFV_stack_4->SetBinError(4,4.031151);
   houtFV_stack_4->SetBinError(5,4.932256);
   houtFV_stack_4->SetBinError(6,4.899748);
   houtFV_stack_4->SetBinError(7,4.653177);
   houtFV_stack_4->SetBinError(8,4.286743);
   houtFV_stack_4->SetBinError(9,3.593889);
   houtFV_stack_4->SetBinError(10,3.297004);
   houtFV_stack_4->SetBinError(11,2.849595);
   houtFV_stack_4->SetBinError(12,2.641851);
   houtFV_stack_4->SetBinError(13,2.366537);
   houtFV_stack_4->SetBinError(14,1.860836);
   houtFV_stack_4->SetBinError(15,1.822953);
   houtFV_stack_4->SetBinError(16,1.563804);
   houtFV_stack_4->SetBinError(17,1.415759);
   houtFV_stack_4->SetBinError(18,1.329613);
   houtFV_stack_4->SetBinError(19,1.51072);
   houtFV_stack_4->SetBinError(20,0.9401669);
   houtFV_stack_4->SetBinError(21,0.7878828);
   houtFV_stack_4->SetBinError(22,0.7460029);
   houtFV_stack_4->SetBinError(23,1.001433);
   houtFV_stack_4->SetBinError(24,0.7585831);
   houtFV_stack_4->SetBinError(25,1.590187);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6539899);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.46517);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.810114);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.454558);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,9.24408);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.026503);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.087543);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.304343);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.624614);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,7.253873);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.814018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.338718);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.729406);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.870491);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.276934);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,2.176544);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.137275);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.259412);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.118416);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.004736);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5860679);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9489359);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,9.131133);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2280886);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4712852);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7413281);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8375497);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.055765);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8032327);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9157275);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8442222);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8075823);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9446001);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7898366);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7473846);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7475153);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8697323);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5790001);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5203481);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6656715);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5038166);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4941312);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.305844);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2215976);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3032882);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9216582);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.129786);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.137761);
   hNCpi0inFVqe_stack_6->SetBinContent(5,4.12972);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.606166);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.76078);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.783944);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.623112);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.34328);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.032636);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4184998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.6692721);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2665161);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.502333);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.7088992);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4814304);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4985743);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.394733);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5621171);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.5375177);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3071139);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1080562);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3125578);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.92494);
   hNCpi0inFVres_stack_7->SetBinContent(2,20.23256);
   hNCpi0inFVres_stack_7->SetBinContent(3,76.48286);
   hNCpi0inFVres_stack_7->SetBinContent(4,189.2969);
   hNCpi0inFVres_stack_7->SetBinContent(5,317.0432);
   hNCpi0inFVres_stack_7->SetBinContent(6,333.9587);
   hNCpi0inFVres_stack_7->SetBinContent(7,326.7527);
   hNCpi0inFVres_stack_7->SetBinContent(8,263.0626);
   hNCpi0inFVres_stack_7->SetBinContent(9,233.8476);
   hNCpi0inFVres_stack_7->SetBinContent(10,190.6868);
   hNCpi0inFVres_stack_7->SetBinContent(11,153.6288);
   hNCpi0inFVres_stack_7->SetBinContent(12,120.8033);
   hNCpi0inFVres_stack_7->SetBinContent(13,106.0458);
   hNCpi0inFVres_stack_7->SetBinContent(14,87.78838);
   hNCpi0inFVres_stack_7->SetBinContent(15,62.21477);
   hNCpi0inFVres_stack_7->SetBinContent(16,52.57162);
   hNCpi0inFVres_stack_7->SetBinContent(17,40.89442);
   hNCpi0inFVres_stack_7->SetBinContent(18,32.8436);
   hNCpi0inFVres_stack_7->SetBinContent(19,27.77873);
   hNCpi0inFVres_stack_7->SetBinContent(20,21.3235);
   hNCpi0inFVres_stack_7->SetBinContent(21,14.02811);
   hNCpi0inFVres_stack_7->SetBinContent(22,14.51537);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.143751);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.065052);
   hNCpi0inFVres_stack_7->SetBinContent(25,49.44299);
   hNCpi0inFVres_stack_7->SetBinError(1,0.406792);
   hNCpi0inFVres_stack_7->SetBinError(2,1.480598);
   hNCpi0inFVres_stack_7->SetBinError(3,2.893746);
   hNCpi0inFVres_stack_7->SetBinError(4,4.385459);
   hNCpi0inFVres_stack_7->SetBinError(5,5.899614);
   hNCpi0inFVres_stack_7->SetBinError(6,5.958212);
   hNCpi0inFVres_stack_7->SetBinError(7,5.966974);
   hNCpi0inFVres_stack_7->SetBinError(8,5.186454);
   hNCpi0inFVres_stack_7->SetBinError(9,5.024137);
   hNCpi0inFVres_stack_7->SetBinError(10,4.543752);
   hNCpi0inFVres_stack_7->SetBinError(11,4.026321);
   hNCpi0inFVres_stack_7->SetBinError(12,3.535918);
   hNCpi0inFVres_stack_7->SetBinError(13,3.417041);
   hNCpi0inFVres_stack_7->SetBinError(14,3.105838);
   hNCpi0inFVres_stack_7->SetBinError(15,2.580497);
   hNCpi0inFVres_stack_7->SetBinError(16,2.396162);
   hNCpi0inFVres_stack_7->SetBinError(17,2.074737);
   hNCpi0inFVres_stack_7->SetBinError(18,1.932097);
   hNCpi0inFVres_stack_7->SetBinError(19,1.782799);
   hNCpi0inFVres_stack_7->SetBinError(20,1.531615);
   hNCpi0inFVres_stack_7->SetBinError(21,1.202357);
   hNCpi0inFVres_stack_7->SetBinError(22,1.274383);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8969751);
   hNCpi0inFVres_stack_7->SetBinError(24,1.030706);
   hNCpi0inFVres_stack_7->SetBinError(25,2.309662);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.541315);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.95022);
   hNCpi0inFVdis_stack_8->SetBinContent(4,38.01587);
   hNCpi0inFVdis_stack_8->SetBinContent(5,59.31731);
   hNCpi0inFVdis_stack_8->SetBinContent(6,53.67299);
   hNCpi0inFVdis_stack_8->SetBinContent(7,49.43218);
   hNCpi0inFVdis_stack_8->SetBinContent(8,45.24301);
   hNCpi0inFVdis_stack_8->SetBinContent(9,35.83254);
   hNCpi0inFVdis_stack_8->SetBinContent(10,29.88418);
   hNCpi0inFVdis_stack_8->SetBinContent(11,30.33093);
   hNCpi0inFVdis_stack_8->SetBinContent(12,23.39474);
   hNCpi0inFVdis_stack_8->SetBinContent(13,20.46555);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.49768);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.79844);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.46687);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.7878);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.929457);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.867256);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.417112);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.858032);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.61207);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.226375);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.57072);
   hNCpi0inFVdis_stack_8->SetBinContent(25,30.55378);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2578571);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5327894);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.277636);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.919177);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.540123);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.343385);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.271929);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.158591);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.933069);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.804821);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.865444);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.574799);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.424848);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.302227);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.318662);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.158588);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.2112);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.064301);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9995535);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8947675);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8303941);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6403904);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7249149);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6595034);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.809989);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2231999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.6701043);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2510999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2647179);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.07891307);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.3419921);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.08369995);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.118917);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,1.173642);
   hCCpi0inFV_stack_10->SetBinContent(2,6.785666);
   hCCpi0inFV_stack_10->SetBinContent(3,23.6464);
   hCCpi0inFV_stack_10->SetBinContent(4,68.18335);
   hCCpi0inFV_stack_10->SetBinContent(5,97.56994);
   hCCpi0inFV_stack_10->SetBinContent(6,105.4577);
   hCCpi0inFV_stack_10->SetBinContent(7,107.1359);
   hCCpi0inFV_stack_10->SetBinContent(8,97.867);
   hCCpi0inFV_stack_10->SetBinContent(9,81.10027);
   hCCpi0inFV_stack_10->SetBinContent(10,79.22681);
   hCCpi0inFV_stack_10->SetBinContent(11,70.88361);
   hCCpi0inFV_stack_10->SetBinContent(12,56.25883);
   hCCpi0inFV_stack_10->SetBinContent(13,52.48613);
   hCCpi0inFV_stack_10->SetBinContent(14,40.00072);
   hCCpi0inFV_stack_10->SetBinContent(15,33.65337);
   hCCpi0inFV_stack_10->SetBinContent(16,28.37532);
   hCCpi0inFV_stack_10->SetBinContent(17,20.77631);
   hCCpi0inFV_stack_10->SetBinContent(18,17.17933);
   hCCpi0inFV_stack_10->SetBinContent(19,16.7241);
   hCCpi0inFV_stack_10->SetBinContent(20,12.63987);
   hCCpi0inFV_stack_10->SetBinContent(21,9.673);
   hCCpi0inFV_stack_10->SetBinContent(22,7.916086);
   hCCpi0inFV_stack_10->SetBinContent(23,7.569147);
   hCCpi0inFV_stack_10->SetBinContent(24,5.763443);
   hCCpi0inFV_stack_10->SetBinContent(25,46.97121);
   hCCpi0inFV_stack_10->SetBinError(1,0.5397663);
   hCCpi0inFV_stack_10->SetBinError(2,1.330951);
   hCCpi0inFV_stack_10->SetBinError(3,2.43579);
   hCCpi0inFV_stack_10->SetBinError(4,4.122766);
   hCCpi0inFV_stack_10->SetBinError(5,4.92741);
   hCCpi0inFV_stack_10->SetBinError(6,5.132973);
   hCCpi0inFV_stack_10->SetBinError(7,5.201413);
   hCCpi0inFV_stack_10->SetBinError(8,4.978551);
   hCCpi0inFV_stack_10->SetBinError(9,4.506224);
   hCCpi0inFV_stack_10->SetBinError(10,4.510635);
   hCCpi0inFV_stack_10->SetBinError(11,4.239501);
   hCCpi0inFV_stack_10->SetBinError(12,3.772345);
   hCCpi0inFV_stack_10->SetBinError(13,3.641473);
   hCCpi0inFV_stack_10->SetBinError(14,3.157527);
   hCCpi0inFV_stack_10->SetBinError(15,2.869375);
   hCCpi0inFV_stack_10->SetBinError(16,2.662193);
   hCCpi0inFV_stack_10->SetBinError(17,2.233755);
   hCCpi0inFV_stack_10->SetBinError(18,2.11999);
   hCCpi0inFV_stack_10->SetBinError(19,2.088938);
   hCCpi0inFV_stack_10->SetBinError(20,1.79869);
   hCCpi0inFV_stack_10->SetBinError(21,1.544745);
   hCCpi0inFV_stack_10->SetBinError(22,1.429428);
   hCCpi0inFV_stack_10->SetBinError(23,1.387406);
   hCCpi0inFV_stack_10->SetBinError(24,1.19315);
   hCCpi0inFV_stack_10->SetBinError(25,3.48149);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.339216);
   hNCinFV_stack_11->SetBinContent(2,9.174754);
   hNCinFV_stack_11->SetBinContent(3,17.43763);
   hNCinFV_stack_11->SetBinContent(4,32.14738);
   hNCinFV_stack_11->SetBinContent(5,44.15584);
   hNCinFV_stack_11->SetBinContent(6,45.92158);
   hNCinFV_stack_11->SetBinContent(7,52.7442);
   hNCinFV_stack_11->SetBinContent(8,46.0747);
   hNCinFV_stack_11->SetBinContent(9,34.15487);
   hNCinFV_stack_11->SetBinContent(10,35.67534);
   hNCinFV_stack_11->SetBinContent(11,26.2191);
   hNCinFV_stack_11->SetBinContent(12,22.38018);
   hNCinFV_stack_11->SetBinContent(13,19.82349);
   hNCinFV_stack_11->SetBinContent(14,16.18466);
   hNCinFV_stack_11->SetBinContent(15,16.85379);
   hNCinFV_stack_11->SetBinContent(16,14.16317);
   hNCinFV_stack_11->SetBinContent(17,13.24238);
   hNCinFV_stack_11->SetBinContent(18,10.15495);
   hNCinFV_stack_11->SetBinContent(19,8.212546);
   hNCinFV_stack_11->SetBinContent(20,4.552957);
   hNCinFV_stack_11->SetBinContent(21,4.496323);
   hNCinFV_stack_11->SetBinContent(22,3.912939);
   hNCinFV_stack_11->SetBinContent(23,3.322793);
   hNCinFV_stack_11->SetBinContent(24,2.053982);
   hNCinFV_stack_11->SetBinContent(25,26.69152);
   hNCinFV_stack_11->SetBinError(1,0.8089383);
   hNCinFV_stack_11->SetBinError(2,1.54472);
   hNCinFV_stack_11->SetBinError(3,2.095793);
   hNCinFV_stack_11->SetBinError(4,2.857827);
   hNCinFV_stack_11->SetBinError(5,3.296776);
   hNCinFV_stack_11->SetBinError(6,3.398934);
   hNCinFV_stack_11->SetBinError(7,3.671221);
   hNCinFV_stack_11->SetBinError(8,3.361144);
   hNCinFV_stack_11->SetBinError(9,2.951126);
   hNCinFV_stack_11->SetBinError(10,3.009493);
   hNCinFV_stack_11->SetBinError(11,2.618504);
   hNCinFV_stack_11->SetBinError(12,2.337869);
   hNCinFV_stack_11->SetBinError(13,2.271827);
   hNCinFV_stack_11->SetBinError(14,1.951997);
   hNCinFV_stack_11->SetBinError(15,2.058088);
   hNCinFV_stack_11->SetBinError(16,1.913012);
   hNCinFV_stack_11->SetBinError(17,1.798096);
   hNCinFV_stack_11->SetBinError(18,1.605715);
   hNCinFV_stack_11->SetBinError(19,1.415153);
   hNCinFV_stack_11->SetBinError(20,1.019998);
   hNCinFV_stack_11->SetBinError(21,1.037978);
   hNCinFV_stack_11->SetBinError(22,0.981813);
   hNCinFV_stack_11->SetBinError(23,0.9207963);
   hNCinFV_stack_11->SetBinError(24,0.7078105);
   hNCinFV_stack_11->SetBinError(25,2.691338);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,3.305909);
   hnumuCCinFV_stack_12->SetBinContent(2,11.46538);
   hnumuCCinFV_stack_12->SetBinContent(3,28.01757);
   hnumuCCinFV_stack_12->SetBinContent(4,48.41872);
   hnumuCCinFV_stack_12->SetBinContent(5,61.76163);
   hnumuCCinFV_stack_12->SetBinContent(6,68.3038);
   hnumuCCinFV_stack_12->SetBinContent(7,74.54845);
   hnumuCCinFV_stack_12->SetBinContent(8,54.01688);
   hnumuCCinFV_stack_12->SetBinContent(9,46.95193);
   hnumuCCinFV_stack_12->SetBinContent(10,43.25503);
   hnumuCCinFV_stack_12->SetBinContent(11,33.39516);
   hnumuCCinFV_stack_12->SetBinContent(12,32.27148);
   hnumuCCinFV_stack_12->SetBinContent(13,24.99904);
   hnumuCCinFV_stack_12->SetBinContent(14,23.10321);
   hnumuCCinFV_stack_12->SetBinContent(15,14.56967);
   hnumuCCinFV_stack_12->SetBinContent(16,12.79248);
   hnumuCCinFV_stack_12->SetBinContent(17,13.67536);
   hnumuCCinFV_stack_12->SetBinContent(18,7.14554);
   hnumuCCinFV_stack_12->SetBinContent(19,6.613226);
   hnumuCCinFV_stack_12->SetBinContent(20,5.284611);
   hnumuCCinFV_stack_12->SetBinContent(21,1.982134);
   hnumuCCinFV_stack_12->SetBinContent(22,3.521824);
   hnumuCCinFV_stack_12->SetBinContent(23,3.335833);
   hnumuCCinFV_stack_12->SetBinContent(24,3.095023);
   hnumuCCinFV_stack_12->SetBinContent(25,27.93141);
   hnumuCCinFV_stack_12->SetBinError(1,1.099075);
   hnumuCCinFV_stack_12->SetBinError(2,1.865086);
   hnumuCCinFV_stack_12->SetBinError(3,3.277034);
   hnumuCCinFV_stack_12->SetBinError(4,4.332196);
   hnumuCCinFV_stack_12->SetBinError(5,4.756818);
   hnumuCCinFV_stack_12->SetBinError(6,4.832354);
   hnumuCCinFV_stack_12->SetBinError(7,5.697712);
   hnumuCCinFV_stack_12->SetBinError(8,4.238772);
   hnumuCCinFV_stack_12->SetBinError(9,3.666641);
   hnumuCCinFV_stack_12->SetBinError(10,3.754566);
   hnumuCCinFV_stack_12->SetBinError(11,3.004959);
   hnumuCCinFV_stack_12->SetBinError(12,3.25927);
   hnumuCCinFV_stack_12->SetBinError(13,2.569441);
   hnumuCCinFV_stack_12->SetBinError(14,2.632313);
   hnumuCCinFV_stack_12->SetBinError(15,2.236627);
   hnumuCCinFV_stack_12->SetBinError(16,1.771416);
   hnumuCCinFV_stack_12->SetBinError(17,1.898443);
   hnumuCCinFV_stack_12->SetBinError(18,1.390588);
   hnumuCCinFV_stack_12->SetBinError(19,1.32247);
   hnumuCCinFV_stack_12->SetBinError(20,1.188796);
   hnumuCCinFV_stack_12->SetBinError(21,0.6760425);
   hnumuCCinFV_stack_12->SetBinError(22,0.9424139);
   hnumuCCinFV_stack_12->SetBinError(23,0.9669444);
   hnumuCCinFV_stack_12->SetBinError(24,0.8596227);
   hnumuCCinFV_stack_12->SetBinError(25,3.570414);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,0.7309457);
   hnueCCinFV_stack_13->SetBinContent(4,2.838639);
   hnueCCinFV_stack_13->SetBinContent(5,1.518779);
   hnueCCinFV_stack_13->SetBinContent(6,2.833079);
   hnueCCinFV_stack_13->SetBinContent(7,4.30816);
   hnueCCinFV_stack_13->SetBinContent(8,3.421668);
   hnueCCinFV_stack_13->SetBinContent(9,2.534237);
   hnueCCinFV_stack_13->SetBinContent(10,0.8737744);
   hnueCCinFV_stack_13->SetBinContent(11,1.457244);
   hnueCCinFV_stack_13->SetBinContent(12,1.801617);
   hnueCCinFV_stack_13->SetBinContent(13,1.194758);
   hnueCCinFV_stack_13->SetBinContent(15,0.7872293);
   hnueCCinFV_stack_13->SetBinContent(16,0.735914);
   hnueCCinFV_stack_13->SetBinContent(17,1.575191);
   hnueCCinFV_stack_13->SetBinContent(18,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(19,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(20,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(25,23.62823);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.4265486);
   hnueCCinFV_stack_13->SetBinError(4,1.482133);
   hnueCCinFV_stack_13->SetBinError(5,0.5892709);
   hnueCCinFV_stack_13->SetBinError(6,1.04544);
   hnueCCinFV_stack_13->SetBinError(7,1.156532);
   hnueCCinFV_stack_13->SetBinError(8,1.012737);
   hnueCCinFV_stack_13->SetBinError(9,0.9529537);
   hnueCCinFV_stack_13->SetBinError(10,0.5175972);
   hnueCCinFV_stack_13->SetBinError(11,0.6092994);
   hnueCCinFV_stack_13->SetBinError(12,1.203825);
   hnueCCinFV_stack_13->SetBinError(13,0.5667164);
   hnueCCinFV_stack_13->SetBinError(15,0.3934309);
   hnueCCinFV_stack_13->SetBinError(16,0.4387122);
   hnueCCinFV_stack_13->SetBinError(17,0.6591837);
   hnueCCinFV_stack_13->SetBinError(18,0.3387718);
   hnueCCinFV_stack_13->SetBinError(19,0.4670934);
   hnueCCinFV_stack_13->SetBinError(20,0.3387718);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.3963213);
   hnueCCinFV_stack_13->SetBinError(25,3.529241);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__2->SetBinContent(1,21.64523);
   hmcerror__2->SetBinContent(2,100.3741);
   hmcerror__2->SetBinContent(3,275.6057);
   hmcerror__2->SetBinContent(4,556.3157);
   hmcerror__2->SetBinContent(5,817.101);
   hmcerror__2->SetBinContent(6,849.2885);
   hmcerror__2->SetBinContent(7,838.6963);
   hmcerror__2->SetBinContent(8,698.0873);
   hmcerror__2->SetBinContent(9,550.2227);
   hmcerror__2->SetBinContent(10,482.7806);
   hmcerror__2->SetBinContent(11,393.4658);
   hmcerror__2->SetBinContent(12,329.3691);
   hmcerror__2->SetBinContent(13,275.6803);
   hmcerror__2->SetBinContent(14,220.2612);
   hmcerror__2->SetBinContent(15,168.6653);
   hmcerror__2->SetBinContent(16,149.6452);
   hmcerror__2->SetBinContent(17,119.5442);
   hmcerror__2->SetBinContent(18,96.83694);
   hmcerror__2->SetBinContent(19,85.40105);
   hmcerror__2->SetBinContent(20,63.94743);
   hmcerror__2->SetBinContent(21,42.4687);
   hmcerror__2->SetBinContent(22,38.43566);
   hmcerror__2->SetBinContent(23,34.64028);
   hmcerror__2->SetBinContent(24,28.98825);
   hmcerror__2->SetBinContent(25,236.3444);
   hmcerror__2->SetBinError(1,15.11);
   hmcerror__2->SetBinError(2,31.89538);
   hmcerror__2->SetBinError(3,65.87312);
   hmcerror__2->SetBinError(4,134.7099);
   hmcerror__2->SetBinError(5,177.2287);
   hmcerror__2->SetBinError(6,191.4842);
   hmcerror__2->SetBinError(7,207.4007);
   hmcerror__2->SetBinError(8,171.4352);
   hmcerror__2->SetBinError(9,149.8767);
   hmcerror__2->SetBinError(10,135.4396);
   hmcerror__2->SetBinError(11,114.5713);
   hmcerror__2->SetBinError(12,102.3987);
   hmcerror__2->SetBinError(13,85.5897);
   hmcerror__2->SetBinError(14,74.91369);
   hmcerror__2->SetBinError(15,59.5786);
   hmcerror__2->SetBinError(16,52.10367);
   hmcerror__2->SetBinError(17,42.62941);
   hmcerror__2->SetBinError(18,39.95917);
   hmcerror__2->SetBinError(19,31.22506);
   hmcerror__2->SetBinError(20,25.24642);
   hmcerror__2->SetBinError(21,25.22722);
   hmcerror__2->SetBinError(22,16.83765);
   hmcerror__2->SetBinError(23,15.32773);
   hmcerror__2->SetBinError(24,16.50231);
   hmcerror__2->SetBinError(25,57.14311);
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
   
   Double_t _fx3001[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3001[24] = {
   14,
   86,
   249,
   575,
   785,
   818,
   709,
   596,
   510,
   392,
   313,
   275,
   188,
   146,
   125,
   109,
   85,
   89,
   59,
   43,
   39,
   26,
   17,
   30};
   Double_t _felx3001[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3001[24] = {
   3.9102,
   9.3967,
   15.77973,
   23.97916,
   28.01785,
   28.6007,
   26.62705,
   24.41311,
   22.58318,
   19.79899,
   17.69181,
   16.58312,
   13.71131,
   12.08305,
   11.18034,
   10.44031,
   9.3428,
   9.5566,
   7.8097,
   6.6917,
   6.3813,
   5.2453,
   4.2835,
   5.6197};
   Double_t _fehx3001[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3001[24] = {
   3.6898,
   9.1951,
   15.77973,
   23.97916,
   28.01785,
   28.6007,
   26.62705,
   24.41311,
   22.58318,
   19.79899,
   17.69181,
   16.58312,
   13.71131,
   12.08305,
   11.18034,
   10.44031,
   9.1411,
   9.3552,
   7.6066,
   6.4868,
   6.1757,
   5.0358,
   4.0673,
   5.4117};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,660);
   Graph_Graph3001->SetMinimum(9.08082);
   Graph_Graph3001->SetMaximum(930.2518);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 178.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 712.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  97.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  25.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2705.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  508.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 485.4","F");

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
   
   Double_t _fx3002[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3002[24] = {
   0.6980751,
   0.3177649,
   0.2390121,
   0.2421466,
   0.2168994,
   0.2254642,
   0.2472894,
   0.2455785,
   0.2723927,
   0.2805406,
   0.2911848,
   0.3108935,
   0.3104672,
   0.340113,
   0.3532358,
   0.3481812,
   0.3565995,
   0.4126439,
   0.3656285,
   0.3947995,
   0.5940191,
   0.4380737,
   0.4424829,
   0.5692759};
   Double_t _fehx3002[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3002[24] = {
   0.6980751,
   0.3177649,
   0.2390121,
   0.2421466,
   0.2168994,
   0.2254642,
   0.2472894,
   0.2455785,
   0.2723927,
   0.2805406,
   0.2911848,
   0.3108935,
   0.3104672,
   0.340113,
   0.3532358,
   0.3481812,
   0.3565995,
   0.4126439,
   0.3656285,
   0.3947995,
   0.5940191,
   0.4380737,
   0.4424829,
   0.5692759};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
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
   
   Double_t _fx3003[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3003[24] = {
   0.208827,
   0.165521,
   0.1853045,
   0.1992326,
   0.2079095,
   0.2164836,
   0.2275726,
   0.2352187,
   0.2634108,
   0.265322,
   0.2732554,
   0.2661253,
   0.2975676,
   0.3028542,
   0.3210032,
   0.3038573,
   0.3106156,
   0.3014591,
   0.2942192,
   0.2999892,
   0.3250089,
   0.3005903,
   0.2672852,
   0.2765273};
   Double_t _fehx3003[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3003[24] = {
   0.208827,
   0.165521,
   0.1853045,
   0.1992326,
   0.2079095,
   0.2164836,
   0.2275726,
   0.2352187,
   0.2634108,
   0.265322,
   0.2732554,
   0.2661253,
   0.2975676,
   0.3028542,
   0.3210032,
   0.3038573,
   0.3106156,
   0.3014591,
   0.2942192,
   0.2999892,
   0.3250089,
   0.3005903,
   0.2672852,
   0.2765273};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
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
   
   Double_t _fx3004[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3004[24] = {
   0.6467937,
   0.8567943,
   0.9034645,
   1.033586,
   0.9607135,
   0.9631592,
   0.8453596,
   0.8537614,
   0.9268975,
   0.811963,
   0.7954948,
   0.8349295,
   0.6819494,
   0.6628494,
   0.7411129,
   0.7283893,
   0.7110339,
   0.9190708,
   0.690858,
   0.6724273,
   0.9183234,
   0.6764552,
   0.4907581,
   1.034902};
   Double_t _felx3004[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3004[24] = {
   0.1806495,
   0.09361674,
   0.05725474,
   0.0431035,
   0.03428934,
   0.03367607,
   0.03174815,
   0.03497143,
   0.04104371,
   0.04101032,
   0.04496403,
   0.05034814,
   0.04973627,
   0.05485781,
   0.06628716,
   0.06976704,
   0.0781535,
   0.09868755,
   0.09144736,
   0.1046438,
   0.1502589,
   0.1364696,
   0.1236566,
   0.1938613};
   Double_t _fehx3004[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3004[24] = {
   0.1704671,
   0.09160825,
   0.05725474,
   0.0431035,
   0.03428934,
   0.03367607,
   0.03174815,
   0.03497143,
   0.04104371,
   0.04101032,
   0.04496403,
   0.05034814,
   0.04973627,
   0.05485781,
   0.06628716,
   0.06976704,
   0.07646626,
   0.09660776,
   0.08906917,
   0.1014396,
   0.1454177,
   0.131019,
   0.1174153,
   0.186686};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0.2816529);
   Graph_Graph3004->SetMaximum(1.307037);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

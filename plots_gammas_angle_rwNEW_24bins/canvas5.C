#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 18:43:50 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
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
   pad1->Range(-1.307692,-5.610657,1.25641,620.4206);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__13->SetBinContent(1,103.348);
   hmc__13->SetBinContent(2,80.97211);
   hmc__13->SetBinContent(3,74.91705);
   hmc__13->SetBinContent(4,77.02718);
   hmc__13->SetBinContent(5,79.53563);
   hmc__13->SetBinContent(6,85.81843);
   hmc__13->SetBinContent(7,91.69273);
   hmc__13->SetBinContent(8,91.0102);
   hmc__13->SetBinContent(9,92.52435);
   hmc__13->SetBinContent(10,103.8645);
   hmc__13->SetBinContent(11,118.4518);
   hmc__13->SetBinContent(12,134.2459);
   hmc__13->SetBinContent(13,127.5797);
   hmc__13->SetBinContent(14,143.0425);
   hmc__13->SetBinContent(15,154.7954);
   hmc__13->SetBinContent(16,156.8453);
   hmc__13->SetBinContent(17,168.7719);
   hmc__13->SetBinContent(18,184.7905);
   hmc__13->SetBinContent(19,205.7133);
   hmc__13->SetBinContent(20,212.2613);
   hmc__13->SetBinContent(21,241.6471);
   hmc__13->SetBinContent(22,280.5329);
   hmc__13->SetBinContent(23,274.1606);
   hmc__13->SetBinContent(24,280.1297);
   hmc__13->SetBinContent(25,0.02789998);
   hmc__13->SetBinError(1,33.31587);
   hmc__13->SetBinError(2,26.37383);
   hmc__13->SetBinError(3,25.29587);
   hmc__13->SetBinError(4,30.18685);
   hmc__13->SetBinError(5,28.57299);
   hmc__13->SetBinError(6,32.51677);
   hmc__13->SetBinError(7,31.01505);
   hmc__13->SetBinError(8,39.44534);
   hmc__13->SetBinError(9,41.97653);
   hmc__13->SetBinError(10,42.23591);
   hmc__13->SetBinError(11,42.63555);
   hmc__13->SetBinError(12,47.32039);
   hmc__13->SetBinError(13,52.27672);
   hmc__13->SetBinError(14,52.86276);
   hmc__13->SetBinError(15,58.48984);
   hmc__13->SetBinError(16,59.36822);
   hmc__13->SetBinError(17,65.49979);
   hmc__13->SetBinError(18,69.79146);
   hmc__13->SetBinError(19,73.73387);
   hmc__13->SetBinError(20,86.1392);
   hmc__13->SetBinError(21,91.37751);
   hmc__13->SetBinError(22,106.8023);
   hmc__13->SetBinError(23,82.3502);
   hmc__13->SetBinError(24,87.48435);
   hmc__13->SetBinError(25,0.2453937);
   hmc__13->SetMinimum(-5.610657);
   hmc__13->SetMaximum(589.119);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,-1,1);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(294.5595);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.75253);
   hbadmatch_stack_1->SetBinContent(2,3.4804);
   hbadmatch_stack_1->SetBinContent(3,1.383715);
   hbadmatch_stack_1->SetBinContent(4,2.71068);
   hbadmatch_stack_1->SetBinContent(5,1.090433);
   hbadmatch_stack_1->SetBinContent(6,5.747446);
   hbadmatch_stack_1->SetBinContent(7,2.479839);
   hbadmatch_stack_1->SetBinContent(8,2.185195);
   hbadmatch_stack_1->SetBinContent(9,1.46781);
   hbadmatch_stack_1->SetBinContent(10,0.9882006);
   hbadmatch_stack_1->SetBinContent(11,1.024826);
   hbadmatch_stack_1->SetBinContent(12,2.077676);
   hbadmatch_stack_1->SetBinContent(13,3.237711);
   hbadmatch_stack_1->SetBinContent(14,4.010416);
   hbadmatch_stack_1->SetBinContent(15,3.68605);
   hbadmatch_stack_1->SetBinContent(16,3.65672);
   hbadmatch_stack_1->SetBinContent(17,3.782988);
   hbadmatch_stack_1->SetBinContent(18,3.438334);
   hbadmatch_stack_1->SetBinContent(19,4.622273);
   hbadmatch_stack_1->SetBinContent(20,4.519687);
   hbadmatch_stack_1->SetBinContent(21,4.072043);
   hbadmatch_stack_1->SetBinContent(22,6.652867);
   hbadmatch_stack_1->SetBinContent(23,5.45383);
   hbadmatch_stack_1->SetBinContent(24,7.058407);
   hbadmatch_stack_1->SetBinError(1,0.8643865);
   hbadmatch_stack_1->SetBinError(2,0.9571127);
   hbadmatch_stack_1->SetBinError(3,0.650668);
   hbadmatch_stack_1->SetBinError(4,0.8588701);
   hbadmatch_stack_1->SetBinError(5,0.5618932);
   hbadmatch_stack_1->SetBinError(6,2.231702);
   hbadmatch_stack_1->SetBinError(7,0.7694731);
   hbadmatch_stack_1->SetBinError(8,0.7117205);
   hbadmatch_stack_1->SetBinError(9,0.6214738);
   hbadmatch_stack_1->SetBinError(10,0.4398932);
   hbadmatch_stack_1->SetBinError(11,0.4597985);
   hbadmatch_stack_1->SetBinError(12,0.7147581);
   hbadmatch_stack_1->SetBinError(13,1.341706);
   hbadmatch_stack_1->SetBinError(14,1.020502);
   hbadmatch_stack_1->SetBinError(15,1.069229);
   hbadmatch_stack_1->SetBinError(16,0.9822801);
   hbadmatch_stack_1->SetBinError(17,1.026906);
   hbadmatch_stack_1->SetBinError(18,0.9592719);
   hbadmatch_stack_1->SetBinError(19,1.237003);
   hbadmatch_stack_1->SetBinError(20,1.100216);
   hbadmatch_stack_1->SetBinError(21,0.9855955);
   hbadmatch_stack_1->SetBinError(22,1.392171);
   hbadmatch_stack_1->SetBinError(23,1.244171);
   hbadmatch_stack_1->SetBinError(24,1.390611);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,10.42865);
   hext_stack_2->SetBinContent(2,8.007828);
   hext_stack_2->SetBinContent(3,5.89704);
   hext_stack_2->SetBinContent(4,9.048861);
   hext_stack_2->SetBinContent(5,9.358896);
   hext_stack_2->SetBinContent(6,4.303776);
   hext_stack_2->SetBinContent(7,8.153461);
   hext_stack_2->SetBinContent(8,8.526928);
   hext_stack_2->SetBinContent(9,7.180269);
   hext_stack_2->SetBinContent(10,6.057034);
   hext_stack_2->SetBinContent(11,12.45006);
   hext_stack_2->SetBinContent(12,13.63231);
   hext_stack_2->SetBinContent(13,9.272285);
   hext_stack_2->SetBinContent(14,11.2159);
   hext_stack_2->SetBinContent(15,12.84229);
   hext_stack_2->SetBinContent(16,6.400202);
   hext_stack_2->SetBinContent(17,11.00683);
   hext_stack_2->SetBinContent(18,6.228619);
   hext_stack_2->SetBinContent(19,24.86138);
   hext_stack_2->SetBinContent(20,12.37504);
   hext_stack_2->SetBinContent(21,14.45269);
   hext_stack_2->SetBinContent(22,18.22023);
   hext_stack_2->SetBinContent(23,23.75534);
   hext_stack_2->SetBinContent(24,23.21746);
   hext_stack_2->SetBinError(1,2.214728);
   hext_stack_2->SetBinError(2,1.909398);
   hext_stack_2->SetBinError(3,1.701242);
   hext_stack_2->SetBinError(4,2.10333);
   hext_stack_2->SetBinError(5,2.220728);
   hext_stack_2->SetBinError(6,1.250299);
   hext_stack_2->SetBinError(7,2.008298);
   hext_stack_2->SetBinError(8,2.206415);
   hext_stack_2->SetBinError(9,1.928098);
   hext_stack_2->SetBinError(10,1.696844);
   hext_stack_2->SetBinError(11,2.407844);
   hext_stack_2->SetBinError(12,2.61309);
   hext_stack_2->SetBinError(13,2.176332);
   hext_stack_2->SetBinError(14,2.388335);
   hext_stack_2->SetBinError(15,2.522982);
   hext_stack_2->SetBinError(16,1.648403);
   hext_stack_2->SetBinError(17,2.233678);
   hext_stack_2->SetBinError(18,1.672799);
   hext_stack_2->SetBinError(19,3.777323);
   hext_stack_2->SetBinError(20,2.35296);
   hext_stack_2->SetBinError(21,2.637742);
   hext_stack_2->SetBinError(22,2.834995);
   hext_stack_2->SetBinError(23,3.37057);
   hext_stack_2->SetBinError(24,3.225765);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,1.638486);
   hdirt_stack_3->SetBinContent(2,0.6951543);
   hdirt_stack_3->SetBinContent(3,0.7618795);
   hdirt_stack_3->SetBinContent(4,0.6983124);
   hdirt_stack_3->SetBinContent(6,0.2188956);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(8,0.4247338);
   hdirt_stack_3->SetBinContent(9,1.327952);
   hdirt_stack_3->SetBinContent(10,0.6566868);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.5784179);
   hdirt_stack_3->SetBinContent(15,1.506171);
   hdirt_stack_3->SetBinContent(16,0.8223017);
   hdirt_stack_3->SetBinContent(17,0.792581);
   hdirt_stack_3->SetBinContent(18,1.198579);
   hdirt_stack_3->SetBinContent(19,0.9099599);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinContent(22,0.7431962);
   hdirt_stack_3->SetBinContent(23,1.070511);
   hdirt_stack_3->SetBinContent(24,0.8012123);
   hdirt_stack_3->SetBinError(1,0.7054699);
   hdirt_stack_3->SetBinError(2,0.4258516);
   hdirt_stack_3->SetBinError(3,0.480555);
   hdirt_stack_3->SetBinError(4,0.4046009);
   hdirt_stack_3->SetBinError(6,0.2188956);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(8,0.4247338);
   hdirt_stack_3->SetBinError(9,0.626827);
   hdirt_stack_3->SetBinError(10,0.3791383);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.3389702);
   hdirt_stack_3->SetBinError(15,0.9901357);
   hdirt_stack_3->SetBinError(16,0.4266534);
   hdirt_stack_3->SetBinError(17,0.3568152);
   hdirt_stack_3->SetBinError(18,0.5681126);
   hdirt_stack_3->SetBinError(19,0.5081362);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetBinError(22,0.4510495);
   hdirt_stack_3->SetBinError(23,0.5037311);
   hdirt_stack_3->SetBinError(24,0.4985242);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,8.461524);
   houtFV_stack_4->SetBinContent(2,5.521318);
   houtFV_stack_4->SetBinContent(3,3.827514);
   houtFV_stack_4->SetBinContent(4,4.033669);
   houtFV_stack_4->SetBinContent(5,2.774181);
   houtFV_stack_4->SetBinContent(6,2.876109);
   houtFV_stack_4->SetBinContent(7,4.106564);
   houtFV_stack_4->SetBinContent(8,3.847758);
   houtFV_stack_4->SetBinContent(9,5.919434);
   houtFV_stack_4->SetBinContent(10,3.846641);
   houtFV_stack_4->SetBinContent(11,6.338258);
   houtFV_stack_4->SetBinContent(12,5.99727);
   houtFV_stack_4->SetBinContent(13,6.107002);
   houtFV_stack_4->SetBinContent(14,6.996504);
   houtFV_stack_4->SetBinContent(15,6.925905);
   houtFV_stack_4->SetBinContent(16,8.432858);
   houtFV_stack_4->SetBinContent(17,11.37699);
   houtFV_stack_4->SetBinContent(18,10.43446);
   houtFV_stack_4->SetBinContent(19,10.01742);
   houtFV_stack_4->SetBinContent(20,14.13062);
   houtFV_stack_4->SetBinContent(21,14.23426);
   houtFV_stack_4->SetBinContent(22,19.49914);
   houtFV_stack_4->SetBinContent(23,23.84782);
   houtFV_stack_4->SetBinContent(24,26.81465);
   houtFV_stack_4->SetBinError(1,1.365774);
   houtFV_stack_4->SetBinError(2,1.220058);
   houtFV_stack_4->SetBinError(3,0.9642547);
   houtFV_stack_4->SetBinError(4,1.024338);
   houtFV_stack_4->SetBinError(5,0.7826096);
   houtFV_stack_4->SetBinError(6,0.8993325);
   houtFV_stack_4->SetBinError(7,1.000664);
   houtFV_stack_4->SetBinError(8,0.926914);
   houtFV_stack_4->SetBinError(9,1.2663);
   houtFV_stack_4->SetBinError(10,0.9730855);
   houtFV_stack_4->SetBinError(11,1.286458);
   houtFV_stack_4->SetBinError(12,1.215698);
   houtFV_stack_4->SetBinError(13,1.24123);
   houtFV_stack_4->SetBinError(14,1.326567);
   houtFV_stack_4->SetBinError(15,1.307359);
   houtFV_stack_4->SetBinError(16,1.453553);
   houtFV_stack_4->SetBinError(17,1.763384);
   houtFV_stack_4->SetBinError(18,1.622198);
   houtFV_stack_4->SetBinError(19,1.588833);
   houtFV_stack_4->SetBinError(20,1.845208);
   houtFV_stack_4->SetBinError(21,1.883389);
   houtFV_stack_4->SetBinError(22,2.239411);
   houtFV_stack_4->SetBinError(23,2.466261);
   houtFV_stack_4->SetBinError(24,2.617348);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.394344);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6546538);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6976678);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.443781);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1962949);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2285151);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5437177);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8087721);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.423076);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5294358);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8092678);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.143572);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.435694);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.8375041);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.031972);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1480721);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3187231);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4658177);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.168174);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2352292);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3330545);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4148453);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3487535);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3283469);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.98394);
   hNCpi0inFVres_stack_7->SetBinContent(2,27.22021);
   hNCpi0inFVres_stack_7->SetBinContent(3,26.14024);
   hNCpi0inFVres_stack_7->SetBinContent(4,25.5153);
   hNCpi0inFVres_stack_7->SetBinContent(5,30.21615);
   hNCpi0inFVres_stack_7->SetBinContent(6,32.11752);
   hNCpi0inFVres_stack_7->SetBinContent(7,33.55869);
   hNCpi0inFVres_stack_7->SetBinContent(8,36.64097);
   hNCpi0inFVres_stack_7->SetBinContent(9,38.22895);
   hNCpi0inFVres_stack_7->SetBinContent(10,44.31651);
   hNCpi0inFVres_stack_7->SetBinContent(11,51.58748);
   hNCpi0inFVres_stack_7->SetBinContent(12,56.92239);
   hNCpi0inFVres_stack_7->SetBinContent(13,57.22878);
   hNCpi0inFVres_stack_7->SetBinContent(14,65.46063);
   hNCpi0inFVres_stack_7->SetBinContent(15,69.3456);
   hNCpi0inFVres_stack_7->SetBinContent(16,73.06142);
   hNCpi0inFVres_stack_7->SetBinContent(17,77.06563);
   hNCpi0inFVres_stack_7->SetBinContent(18,84.79164);
   hNCpi0inFVres_stack_7->SetBinContent(19,89.27439);
   hNCpi0inFVres_stack_7->SetBinContent(20,99.91014);
   hNCpi0inFVres_stack_7->SetBinContent(21,111.379);
   hNCpi0inFVres_stack_7->SetBinContent(22,120.1987);
   hNCpi0inFVres_stack_7->SetBinContent(23,98.17868);
   hNCpi0inFVres_stack_7->SetBinContent(24,76.26247);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,2.104713);
   hNCpi0inFVres_stack_7->SetBinError(2,1.7088);
   hNCpi0inFVres_stack_7->SetBinError(3,1.637956);
   hNCpi0inFVres_stack_7->SetBinError(4,1.603718);
   hNCpi0inFVres_stack_7->SetBinError(5,1.772965);
   hNCpi0inFVres_stack_7->SetBinError(6,1.892544);
   hNCpi0inFVres_stack_7->SetBinError(7,1.897644);
   hNCpi0inFVres_stack_7->SetBinError(8,1.942376);
   hNCpi0inFVres_stack_7->SetBinError(9,1.984107);
   hNCpi0inFVres_stack_7->SetBinError(10,2.172804);
   hNCpi0inFVres_stack_7->SetBinError(11,2.377545);
   hNCpi0inFVres_stack_7->SetBinError(12,2.501614);
   hNCpi0inFVres_stack_7->SetBinError(13,2.483618);
   hNCpi0inFVres_stack_7->SetBinError(14,2.648785);
   hNCpi0inFVres_stack_7->SetBinError(15,2.736704);
   hNCpi0inFVres_stack_7->SetBinError(16,2.78828);
   hNCpi0inFVres_stack_7->SetBinError(17,2.951686);
   hNCpi0inFVres_stack_7->SetBinError(18,3.106504);
   hNCpi0inFVres_stack_7->SetBinError(19,3.111847);
   hNCpi0inFVres_stack_7->SetBinError(20,3.280257);
   hNCpi0inFVres_stack_7->SetBinError(21,3.467923);
   hNCpi0inFVres_stack_7->SetBinError(22,3.563358);
   hNCpi0inFVres_stack_7->SetBinError(23,3.267001);
   hNCpi0inFVres_stack_7->SetBinError(24,2.838533);
   hNCpi0inFVres_stack_7->SetBinError(25,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.587751);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.327507);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.300935);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.03913);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.324267);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.999108);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.702578);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.335819);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.678749);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.146255);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.299702);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.76877);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.44295);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.978352);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.789788);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.58693);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.63111);
   hNCpi0inFVdis_stack_8->SetBinContent(18,13.28627);
   hNCpi0inFVdis_stack_8->SetBinContent(19,15.61642);
   hNCpi0inFVdis_stack_8->SetBinContent(20,17.30604);
   hNCpi0inFVdis_stack_8->SetBinContent(21,21.27799);
   hNCpi0inFVdis_stack_8->SetBinContent(22,24.59578);
   hNCpi0inFVdis_stack_8->SetBinContent(23,25.9697);
   hNCpi0inFVdis_stack_8->SetBinContent(24,22.74741);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9450113);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7873684);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7695357);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8630305);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.729508);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8617895);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7134134);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9310073);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7843555);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.00344);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9689728);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9512373);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.062471);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9507598);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.046941);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.161356);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.141355);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.199792);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.294233);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.353857);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.508098);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.622038);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.689982);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.606891);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,13.49598);
   hCCpi0inFV_stack_10->SetBinContent(2,12.4569);
   hCCpi0inFV_stack_10->SetBinContent(3,11.95282);
   hCCpi0inFV_stack_10->SetBinContent(4,10.1695);
   hCCpi0inFV_stack_10->SetBinContent(5,11.11281);
   hCCpi0inFV_stack_10->SetBinContent(6,12.51253);
   hCCpi0inFV_stack_10->SetBinContent(7,18.1111);
   hCCpi0inFV_stack_10->SetBinContent(8,9.700209);
   hCCpi0inFV_stack_10->SetBinContent(9,14.41344);
   hCCpi0inFV_stack_10->SetBinContent(10,14.36678);
   hCCpi0inFV_stack_10->SetBinContent(11,15.57439);
   hCCpi0inFV_stack_10->SetBinContent(12,19.62433);
   hCCpi0inFV_stack_10->SetBinContent(13,16.61202);
   hCCpi0inFV_stack_10->SetBinContent(14,22.26487);
   hCCpi0inFV_stack_10->SetBinContent(15,23.12874);
   hCCpi0inFV_stack_10->SetBinContent(16,26.44599);
   hCCpi0inFV_stack_10->SetBinContent(17,24.2705);
   hCCpi0inFV_stack_10->SetBinContent(18,29.87986);
   hCCpi0inFV_stack_10->SetBinContent(19,26.00004);
   hCCpi0inFV_stack_10->SetBinContent(20,29.40176);
   hCCpi0inFV_stack_10->SetBinContent(21,36.71496);
   hCCpi0inFV_stack_10->SetBinContent(22,42.34249);
   hCCpi0inFV_stack_10->SetBinContent(23,37.4128);
   hCCpi0inFV_stack_10->SetBinContent(24,37.92754);
   hCCpi0inFV_stack_10->SetBinError(1,1.776964);
   hCCpi0inFV_stack_10->SetBinError(2,1.772089);
   hCCpi0inFV_stack_10->SetBinError(3,1.731996);
   hCCpi0inFV_stack_10->SetBinError(4,1.62983);
   hCCpi0inFV_stack_10->SetBinError(5,1.640563);
   hCCpi0inFV_stack_10->SetBinError(6,1.739867);
   hCCpi0inFV_stack_10->SetBinError(7,2.141649);
   hCCpi0inFV_stack_10->SetBinError(8,1.548622);
   hCCpi0inFV_stack_10->SetBinError(9,1.966192);
   hCCpi0inFV_stack_10->SetBinError(10,1.887624);
   hCCpi0inFV_stack_10->SetBinError(11,2.040973);
   hCCpi0inFV_stack_10->SetBinError(12,2.26466);
   hCCpi0inFV_stack_10->SetBinError(13,1.969455);
   hCCpi0inFV_stack_10->SetBinError(14,2.376234);
   hCCpi0inFV_stack_10->SetBinError(15,2.489859);
   hCCpi0inFV_stack_10->SetBinError(16,2.618762);
   hCCpi0inFV_stack_10->SetBinError(17,2.478263);
   hCCpi0inFV_stack_10->SetBinError(18,2.721421);
   hCCpi0inFV_stack_10->SetBinError(19,2.543918);
   hCCpi0inFV_stack_10->SetBinError(20,2.674938);
   hCCpi0inFV_stack_10->SetBinError(21,3.05991);
   hCCpi0inFV_stack_10->SetBinError(22,3.285313);
   hCCpi0inFV_stack_10->SetBinError(23,3.039778);
   hCCpi0inFV_stack_10->SetBinError(24,3.120047);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,9.421342);
   hNCinFV_stack_11->SetBinContent(2,7.427375);
   hNCinFV_stack_11->SetBinContent(3,9.773354);
   hNCinFV_stack_11->SetBinContent(4,6.250464);
   hNCinFV_stack_11->SetBinContent(5,7.914396);
   hNCinFV_stack_11->SetBinContent(6,9.412516);
   hNCinFV_stack_11->SetBinContent(7,6.748562);
   hNCinFV_stack_11->SetBinContent(8,7.949661);
   hNCinFV_stack_11->SetBinContent(9,5.863187);
   hNCinFV_stack_11->SetBinContent(10,9.716719);
   hNCinFV_stack_11->SetBinContent(11,8.733142);
   hNCinFV_stack_11->SetBinContent(12,13.28164);
   hNCinFV_stack_11->SetBinContent(13,7.625781);
   hNCinFV_stack_11->SetBinContent(14,10.17294);
   hNCinFV_stack_11->SetBinContent(15,11.61939);
   hNCinFV_stack_11->SetBinContent(16,9.131644);
   hNCinFV_stack_11->SetBinContent(17,9.916815);
   hNCinFV_stack_11->SetBinContent(18,12.27003);
   hNCinFV_stack_11->SetBinContent(19,14.79534);
   hNCinFV_stack_11->SetBinContent(20,11.72867);
   hNCinFV_stack_11->SetBinContent(21,14.61601);
   hNCinFV_stack_11->SetBinContent(22,19.80114);
   hNCinFV_stack_11->SetBinContent(23,25.9451);
   hNCinFV_stack_11->SetBinContent(24,27.7345);
   hNCinFV_stack_11->SetBinError(1,1.544411);
   hNCinFV_stack_11->SetBinError(2,1.359608);
   hNCinFV_stack_11->SetBinError(3,1.582897);
   hNCinFV_stack_11->SetBinError(4,1.271879);
   hNCinFV_stack_11->SetBinError(5,1.429196);
   hNCinFV_stack_11->SetBinError(6,1.429741);
   hNCinFV_stack_11->SetBinError(7,1.209259);
   hNCinFV_stack_11->SetBinError(8,1.481762);
   hNCinFV_stack_11->SetBinError(9,1.159441);
   hNCinFV_stack_11->SetBinError(10,1.594542);
   hNCinFV_stack_11->SetBinError(11,1.532671);
   hNCinFV_stack_11->SetBinError(12,1.893705);
   hNCinFV_stack_11->SetBinError(13,1.374006);
   hNCinFV_stack_11->SetBinError(14,1.544985);
   hNCinFV_stack_11->SetBinError(15,1.77816);
   hNCinFV_stack_11->SetBinError(16,1.558352);
   hNCinFV_stack_11->SetBinError(17,1.607043);
   hNCinFV_stack_11->SetBinError(18,1.686913);
   hNCinFV_stack_11->SetBinError(19,1.982768);
   hNCinFV_stack_11->SetBinError(20,1.699381);
   hNCinFV_stack_11->SetBinError(21,1.871551);
   hNCinFV_stack_11->SetBinError(22,2.194278);
   hNCinFV_stack_11->SetBinError(23,2.55131);
   hNCinFV_stack_11->SetBinError(24,2.683743);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,8.418661);
   hnumuCCinFV_stack_12->SetBinContent(2,9.09623);
   hnumuCCinFV_stack_12->SetBinContent(3,8.321398);
   hnumuCCinFV_stack_12->SetBinContent(4,9.852723);
   hnumuCCinFV_stack_12->SetBinContent(5,8.883117);
   hnumuCCinFV_stack_12->SetBinContent(6,10.67622);
   hnumuCCinFV_stack_12->SetBinContent(7,11.3002);
   hnumuCCinFV_stack_12->SetBinContent(8,12.50729);
   hnumuCCinFV_stack_12->SetBinContent(9,10.99814);
   hnumuCCinFV_stack_12->SetBinContent(10,13.88938);
   hnumuCCinFV_stack_12->SetBinContent(11,12.0761);
   hnumuCCinFV_stack_12->SetBinContent(12,13.06352);
   hnumuCCinFV_stack_12->SetBinContent(13,14.51141);
   hnumuCCinFV_stack_12->SetBinContent(14,12.38834);
   hnumuCCinFV_stack_12->SetBinContent(15,14.49423);
   hnumuCCinFV_stack_12->SetBinContent(16,14.66564);
   hnumuCCinFV_stack_12->SetBinContent(17,16.06492);
   hnumuCCinFV_stack_12->SetBinContent(18,22.01493);
   hnumuCCinFV_stack_12->SetBinContent(19,18.27749);
   hnumuCCinFV_stack_12->SetBinContent(20,20.2236);
   hnumuCCinFV_stack_12->SetBinContent(21,21.1142);
   hnumuCCinFV_stack_12->SetBinContent(22,25.69864);
   hnumuCCinFV_stack_12->SetBinContent(23,28.35685);
   hnumuCCinFV_stack_12->SetBinContent(24,49.81206);
   hnumuCCinFV_stack_12->SetBinError(1,1.700842);
   hnumuCCinFV_stack_12->SetBinError(2,1.692875);
   hnumuCCinFV_stack_12->SetBinError(3,1.675723);
   hnumuCCinFV_stack_12->SetBinError(4,1.612128);
   hnumuCCinFV_stack_12->SetBinError(5,1.628609);
   hnumuCCinFV_stack_12->SetBinError(6,2.048599);
   hnumuCCinFV_stack_12->SetBinError(7,1.918192);
   hnumuCCinFV_stack_12->SetBinError(8,2.16441);
   hnumuCCinFV_stack_12->SetBinError(9,1.976577);
   hnumuCCinFV_stack_12->SetBinError(10,2.185369);
   hnumuCCinFV_stack_12->SetBinError(11,1.959513);
   hnumuCCinFV_stack_12->SetBinError(12,2.094299);
   hnumuCCinFV_stack_12->SetBinError(13,2.087128);
   hnumuCCinFV_stack_12->SetBinError(14,1.76514);
   hnumuCCinFV_stack_12->SetBinError(15,2.117653);
   hnumuCCinFV_stack_12->SetBinError(16,2.024989);
   hnumuCCinFV_stack_12->SetBinError(17,2.144917);
   hnumuCCinFV_stack_12->SetBinError(18,3.875213);
   hnumuCCinFV_stack_12->SetBinError(19,2.577715);
   hnumuCCinFV_stack_12->SetBinError(20,2.817039);
   hnumuCCinFV_stack_12->SetBinError(21,2.621692);
   hnumuCCinFV_stack_12->SetBinError(22,2.627281);
   hnumuCCinFV_stack_12->SetBinError(23,2.888323);
   hnumuCCinFV_stack_12->SetBinError(24,4.159557);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.536893);
   hnueCCinFV_stack_13->SetBinContent(5,2.164385);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.5040739);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.6494422);
   hnueCCinFV_stack_13->SetBinContent(16,0.7635999);
   hnueCCinFV_stack_13->SetBinContent(17,0.8038652);
   hnueCCinFV_stack_13->SetBinContent(18,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,1.331703);
   hnueCCinFV_stack_13->SetBinContent(22,1.622691);
   hnueCCinFV_stack_13->SetBinContent(23,3.083099);
   hnueCCinFV_stack_13->SetBinContent(24,5.996482);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.3929602);
   hnueCCinFV_stack_13->SetBinError(5,1.678565);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.3564435);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.3778196);
   hnueCCinFV_stack_13->SetBinError(16,0.4831621);
   hnueCCinFV_stack_13->SetBinError(17,0.4023665);
   hnueCCinFV_stack_13->SetBinError(18,0.438694);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.5589871);
   hnueCCinFV_stack_13->SetBinError(22,0.6904377);
   hnueCCinFV_stack_13->SetBinError(23,1.378389);
   hnueCCinFV_stack_13->SetBinError(24,1.29525);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__14->SetBinContent(1,103.348);
   hmcerror__14->SetBinContent(2,80.97211);
   hmcerror__14->SetBinContent(3,74.91705);
   hmcerror__14->SetBinContent(4,77.02718);
   hmcerror__14->SetBinContent(5,79.53563);
   hmcerror__14->SetBinContent(6,85.81843);
   hmcerror__14->SetBinContent(7,91.69273);
   hmcerror__14->SetBinContent(8,91.0102);
   hmcerror__14->SetBinContent(9,92.52435);
   hmcerror__14->SetBinContent(10,103.8645);
   hmcerror__14->SetBinContent(11,118.4518);
   hmcerror__14->SetBinContent(12,134.2459);
   hmcerror__14->SetBinContent(13,127.5797);
   hmcerror__14->SetBinContent(14,143.0425);
   hmcerror__14->SetBinContent(15,154.7954);
   hmcerror__14->SetBinContent(16,156.8453);
   hmcerror__14->SetBinContent(17,168.7719);
   hmcerror__14->SetBinContent(18,184.7905);
   hmcerror__14->SetBinContent(19,205.7133);
   hmcerror__14->SetBinContent(20,212.2613);
   hmcerror__14->SetBinContent(21,241.6471);
   hmcerror__14->SetBinContent(22,280.5329);
   hmcerror__14->SetBinContent(23,274.1606);
   hmcerror__14->SetBinContent(24,280.1297);
   hmcerror__14->SetBinContent(25,0.02789998);
   hmcerror__14->SetBinError(1,33.31587);
   hmcerror__14->SetBinError(2,26.37383);
   hmcerror__14->SetBinError(3,25.29587);
   hmcerror__14->SetBinError(4,30.18685);
   hmcerror__14->SetBinError(5,28.57299);
   hmcerror__14->SetBinError(6,32.51677);
   hmcerror__14->SetBinError(7,31.01505);
   hmcerror__14->SetBinError(8,39.44534);
   hmcerror__14->SetBinError(9,41.97653);
   hmcerror__14->SetBinError(10,42.23591);
   hmcerror__14->SetBinError(11,42.63555);
   hmcerror__14->SetBinError(12,47.32039);
   hmcerror__14->SetBinError(13,52.27672);
   hmcerror__14->SetBinError(14,52.86276);
   hmcerror__14->SetBinError(15,58.48984);
   hmcerror__14->SetBinError(16,59.36822);
   hmcerror__14->SetBinError(17,65.49979);
   hmcerror__14->SetBinError(18,69.79146);
   hmcerror__14->SetBinError(19,73.73387);
   hmcerror__14->SetBinError(20,86.1392);
   hmcerror__14->SetBinError(21,91.37751);
   hmcerror__14->SetBinError(22,106.8023);
   hmcerror__14->SetBinError(23,82.3502);
   hmcerror__14->SetBinError(24,87.48435);
   hmcerror__14->SetBinError(25,0.2453937);
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
   
   Double_t _fx3017[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3017[24] = {
   82,
   53,
   56,
   60,
   54,
   64,
   75,
   74,
   65,
   82,
   78,
   87,
   99,
   111,
   104,
   131,
   141,
   135,
   163,
   146,
   167,
   181,
   201,
   212};
   Double_t _felx3017[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3017[24] = {
   9.1791,
   7.4105,
   7.6127,
   7.8743,
   7.4785,
   8.1273,
   8.7852,
   8.7275,
   8.1893,
   9.1791,
   8.9562,
   9.4503,
   10.0712,
   10.53565,
   10.19804,
   11.44552,
   11.87434,
   11.61895,
   12.76715,
   12.08305,
   12.92285,
   13.45362,
   14.17745,
   14.56022};
   Double_t _fehx3017[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3017[24] = {
   8.9774,
   7.2068,
   7.4094,
   7.6713,
   7.275,
   7.9246,
   8.5831,
   8.5253,
   7.9866,
   8.9774,
   8.7542,
   9.2488,
   9.87,
   10.53565,
   10.19804,
   11.44552,
   11.87434,
   11.61895,
   12.76715,
   12.08305,
   12.92285,
   13.45362,
   14.17745,
   14.56022};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(27.49243);
   Graph_Graph3017->SetMaximum(244.6573);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3018[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3018[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3018[24] = {
   0.322366,
   0.325715,
   0.3376517,
   0.3918987,
   0.3592477,
   0.378902,
   0.3382499,
   0.4334167,
   0.4536809,
   0.4066444,
   0.3599401,
   0.3524903,
   0.4097575,
   0.3695597,
   0.3778526,
   0.3785145,
   0.3880965,
   0.3776789,
   0.3584302,
   0.4058168,
   0.3781445,
   0.3807124,
   0.3003721,
   0.3122995};
   Double_t _fehx3018[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3018[24] = {
   0.322366,
   0.325715,
   0.3376517,
   0.3918987,
   0.3592477,
   0.378902,
   0.3382499,
   0.4334167,
   0.4536809,
   0.4066444,
   0.3599401,
   0.3524903,
   0.4097575,
   0.3695597,
   0.3778526,
   0.3785145,
   0.3880965,
   0.3776789,
   0.3584302,
   0.4058168,
   0.3781445,
   0.3807124,
   0.3003721,
   0.3122995};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-1.2,1.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Angle between photons [cosine]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3019[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3019[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3019[24] = {
   0.2564448,
   0.2619556,
   0.2729515,
   0.264103,
   0.2809219,
   0.3021825,
   0.282132,
   0.3141504,
   0.3285197,
   0.3095312,
   0.319497,
   0.3060497,
   0.3280327,
   0.3340117,
   0.3433766,
   0.3561757,
   0.3476256,
   0.3511484,
   0.3386563,
   0.3659045,
   0.3630208,
   0.3456706,
   0.2770769,
   0.2215953};
   Double_t _fehx3019[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3019[24] = {
   0.2564448,
   0.2619556,
   0.2729515,
   0.264103,
   0.2809219,
   0.3021825,
   0.282132,
   0.3141504,
   0.3285197,
   0.3095312,
   0.319497,
   0.3060497,
   0.3280327,
   0.3340117,
   0.3433766,
   0.3561757,
   0.3476256,
   0.3511484,
   0.3386563,
   0.3659045,
   0.3630208,
   0.3456706,
   0.2770769,
   0.2215953};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-1.2,1.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3020[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3020[24] = {
   0.7934359,
   0.6545464,
   0.7474934,
   0.7789458,
   0.678941,
   0.7457606,
   0.8179493,
   0.8130957,
   0.7025178,
   0.7894904,
   0.6584957,
   0.6480644,
   0.7759858,
   0.775993,
   0.6718546,
   0.8352178,
   0.835447,
   0.7305572,
   0.7923648,
   0.6878315,
   0.6910905,
   0.6452007,
   0.7331468,
   0.7567923};
   Double_t _felx3020[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3020[24] = {
   0.08881741,
   0.09151917,
   0.101615,
   0.1022275,
   0.09402704,
   0.09470344,
   0.09581131,
   0.09589584,
   0.08850968,
   0.08837574,
   0.0756105,
   0.07039544,
   0.07894048,
   0.073654,
   0.06588076,
   0.07297332,
   0.07035733,
   0.06287636,
   0.0620628,
   0.05692534,
   0.05347818,
   0.04795739,
   0.05171219,
   0.05197671};
   Double_t _fehx3020[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3020[24] = {
   0.08686575,
   0.08900349,
   0.09890138,
   0.09959211,
   0.09146844,
   0.09234147,
   0.09360721,
   0.09367412,
   0.0863189,
   0.08643379,
   0.07390517,
   0.06889446,
   0.07736343,
   0.073654,
   0.06588076,
   0.07297332,
   0.07035733,
   0.06287636,
   0.0620628,
   0.05692534,
   0.05347818,
   0.04795739,
   0.05171219,
   0.05197671};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.5281743);
   Graph_Graph3020->SetMaximum(0.9464094);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

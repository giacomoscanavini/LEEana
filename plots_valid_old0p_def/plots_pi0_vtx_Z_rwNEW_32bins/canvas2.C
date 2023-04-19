#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 17 21:15:01 2023) by ROOT version 6.26/00
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
   pad1->Range(-169.2308,-4.542543,1241.026,502.3096);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__4->SetBinContent(0,1.725646);
   hmc__4->SetBinContent(1,130.5825);
   hmc__4->SetBinContent(2,194.9283);
   hmc__4->SetBinContent(3,193.7771);
   hmc__4->SetBinContent(4,185.8858);
   hmc__4->SetBinContent(5,206.9717);
   hmc__4->SetBinContent(6,197.5);
   hmc__4->SetBinContent(7,197.3716);
   hmc__4->SetBinContent(8,207.2629);
   hmc__4->SetBinContent(9,195.1504);
   hmc__4->SetBinContent(10,197.154);
   hmc__4->SetBinContent(11,200.4452);
   hmc__4->SetBinContent(12,184.576);
   hmc__4->SetBinContent(13,198.9082);
   hmc__4->SetBinContent(14,227.1272);
   hmc__4->SetBinContent(15,209.427);
   hmc__4->SetBinContent(16,200.2391);
   hmc__4->SetBinContent(17,204.041);
   hmc__4->SetBinContent(18,202.482);
   hmc__4->SetBinContent(19,199.6245);
   hmc__4->SetBinContent(20,200.2832);
   hmc__4->SetBinContent(21,202.8517);
   hmc__4->SetBinContent(22,194.379);
   hmc__4->SetBinContent(23,188.3072);
   hmc__4->SetBinContent(24,203.2176);
   hmc__4->SetBinContent(25,193.2975);
   hmc__4->SetBinContent(26,206.2053);
   hmc__4->SetBinContent(27,199.3627);
   hmc__4->SetBinContent(28,198.3971);
   hmc__4->SetBinContent(29,166.6098);
   hmc__4->SetBinContent(30,98.15349);
   hmc__4->SetBinContent(31,2.511003);
   hmc__4->SetBinError(0,0.5991823);
   hmc__4->SetBinError(1,35.05395);
   hmc__4->SetBinError(2,50.13764);
   hmc__4->SetBinError(3,59.23114);
   hmc__4->SetBinError(4,47.62911);
   hmc__4->SetBinError(5,56.09098);
   hmc__4->SetBinError(6,58.61933);
   hmc__4->SetBinError(7,52.80657);
   hmc__4->SetBinError(8,55.39997);
   hmc__4->SetBinError(9,55.1306);
   hmc__4->SetBinError(10,53.12851);
   hmc__4->SetBinError(11,55.82991);
   hmc__4->SetBinError(12,51.13388);
   hmc__4->SetBinError(13,53.55034);
   hmc__4->SetBinError(14,62.67153);
   hmc__4->SetBinError(15,66.10189);
   hmc__4->SetBinError(16,57.46035);
   hmc__4->SetBinError(17,57.01752);
   hmc__4->SetBinError(18,55.56582);
   hmc__4->SetBinError(19,52.9319);
   hmc__4->SetBinError(20,54.5379);
   hmc__4->SetBinError(21,55.03668);
   hmc__4->SetBinError(22,61.10259);
   hmc__4->SetBinError(23,52.3317);
   hmc__4->SetBinError(24,53.5564);
   hmc__4->SetBinError(25,57.65175);
   hmc__4->SetBinError(26,61.27409);
   hmc__4->SetBinError(27,51.97811);
   hmc__4->SetBinError(28,53.18284);
   hmc__4->SetBinError(29,46.3082);
   hmc__4->SetBinError(30,27.55044);
   hmc__4->SetBinError(31,2.724027);
   hmc__4->SetBinError(32,0.3895343);
   hmc__4->SetBinError(33,0.3895343);
   hmc__4->SetMinimum(-4.542543);
   hmc__4->SetMaximum(476.967);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",32,0,1100);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(238.4835);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,3.269923);
   hbadmatch_stack_1->SetBinContent(2,3.284244);
   hbadmatch_stack_1->SetBinContent(3,2.48923);
   hbadmatch_stack_1->SetBinContent(4,7.729234);
   hbadmatch_stack_1->SetBinContent(5,7.925955);
   hbadmatch_stack_1->SetBinContent(6,4.96194);
   hbadmatch_stack_1->SetBinContent(7,4.061751);
   hbadmatch_stack_1->SetBinContent(8,4.425798);
   hbadmatch_stack_1->SetBinContent(9,4.110653);
   hbadmatch_stack_1->SetBinContent(10,3.194404);
   hbadmatch_stack_1->SetBinContent(11,3.487958);
   hbadmatch_stack_1->SetBinContent(12,4.583496);
   hbadmatch_stack_1->SetBinContent(13,1.943829);
   hbadmatch_stack_1->SetBinContent(14,6.176355);
   hbadmatch_stack_1->SetBinContent(15,2.283357);
   hbadmatch_stack_1->SetBinContent(16,3.923831);
   hbadmatch_stack_1->SetBinContent(17,3.903345);
   hbadmatch_stack_1->SetBinContent(18,3.647796);
   hbadmatch_stack_1->SetBinContent(19,3.075755);
   hbadmatch_stack_1->SetBinContent(20,5.529204);
   hbadmatch_stack_1->SetBinContent(21,8.928589);
   hbadmatch_stack_1->SetBinContent(22,4.464232);
   hbadmatch_stack_1->SetBinContent(23,3.662761);
   hbadmatch_stack_1->SetBinContent(24,4.345885);
   hbadmatch_stack_1->SetBinContent(25,2.802645);
   hbadmatch_stack_1->SetBinContent(26,2.889025);
   hbadmatch_stack_1->SetBinContent(27,4.253072);
   hbadmatch_stack_1->SetBinContent(28,3.062323);
   hbadmatch_stack_1->SetBinContent(29,2.304025);
   hbadmatch_stack_1->SetBinContent(30,3.354118);
   hbadmatch_stack_1->SetBinError(1,0.8650739);
   hbadmatch_stack_1->SetBinError(2,0.9372668);
   hbadmatch_stack_1->SetBinError(3,0.7725867);
   hbadmatch_stack_1->SetBinError(4,1.788232);
   hbadmatch_stack_1->SetBinError(5,1.540743);
   hbadmatch_stack_1->SetBinError(6,1.342381);
   hbadmatch_stack_1->SetBinError(7,1.130903);
   hbadmatch_stack_1->SetBinError(8,1.124566);
   hbadmatch_stack_1->SetBinError(9,1.112958);
   hbadmatch_stack_1->SetBinError(10,1.007375);
   hbadmatch_stack_1->SetBinError(11,0.9801542);
   hbadmatch_stack_1->SetBinError(12,2.142881);
   hbadmatch_stack_1->SetBinError(13,0.6622373);
   hbadmatch_stack_1->SetBinError(14,1.934965);
   hbadmatch_stack_1->SetBinError(15,0.7356454);
   hbadmatch_stack_1->SetBinError(16,0.9840601);
   hbadmatch_stack_1->SetBinError(17,1.010416);
   hbadmatch_stack_1->SetBinError(18,1.008929);
   hbadmatch_stack_1->SetBinError(19,0.8947331);
   hbadmatch_stack_1->SetBinError(20,1.24956);
   hbadmatch_stack_1->SetBinError(21,1.594794);
   hbadmatch_stack_1->SetBinError(22,1.058424);
   hbadmatch_stack_1->SetBinError(23,0.9869458);
   hbadmatch_stack_1->SetBinError(24,1.131931);
   hbadmatch_stack_1->SetBinError(25,0.7911558);
   hbadmatch_stack_1->SetBinError(26,0.7845188);
   hbadmatch_stack_1->SetBinError(27,1.85153);
   hbadmatch_stack_1->SetBinError(28,0.9830801);
   hbadmatch_stack_1->SetBinError(29,0.8582235);
   hbadmatch_stack_1->SetBinError(30,1.006569);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,7.131198);
   hext_stack_2->SetBinContent(2,19.51499);
   hext_stack_2->SetBinContent(3,22.16365);
   hext_stack_2->SetBinContent(4,15.42311);
   hext_stack_2->SetBinContent(5,20.6107);
   hext_stack_2->SetBinContent(6,14.55366);
   hext_stack_2->SetBinContent(7,17.75455);
   hext_stack_2->SetBinContent(8,21.14857);
   hext_stack_2->SetBinContent(9,9.90955);
   hext_stack_2->SetBinContent(10,12.73697);
   hext_stack_2->SetBinContent(11,25.27081);
   hext_stack_2->SetBinContent(12,8.849747);
   hext_stack_2->SetBinContent(13,12.89697);
   hext_stack_2->SetBinContent(14,22.61056);
   hext_stack_2->SetBinContent(15,15.22123);
   hext_stack_2->SetBinContent(16,14.72802);
   hext_stack_2->SetBinContent(17,12.06941);
   hext_stack_2->SetBinContent(18,16.99326);
   hext_stack_2->SetBinContent(19,21.24513);
   hext_stack_2->SetBinContent(20,14.65022);
   hext_stack_2->SetBinContent(21,22.85282);
   hext_stack_2->SetBinContent(22,19.76878);
   hext_stack_2->SetBinContent(23,13.34546);
   hext_stack_2->SetBinContent(24,16.07909);
   hext_stack_2->SetBinContent(25,8.518169);
   hext_stack_2->SetBinContent(26,17.10853);
   hext_stack_2->SetBinContent(27,11.98721);
   hext_stack_2->SetBinContent(28,16.94854);
   hext_stack_2->SetBinContent(29,10.76023);
   hext_stack_2->SetBinContent(30,3.494987);
   hext_stack_2->SetBinContent(31,0.4065989);
   hext_stack_2->SetBinError(1,1.728522);
   hext_stack_2->SetBinError(2,3.181959);
   hext_stack_2->SetBinError(3,3.439714);
   hext_stack_2->SetBinError(4,2.75857);
   hext_stack_2->SetBinError(5,3.103187);
   hext_stack_2->SetBinError(6,2.598171);
   hext_stack_2->SetBinError(7,3.001672);
   hext_stack_2->SetBinError(8,3.253453);
   hext_stack_2->SetBinError(9,1.918998);
   hext_stack_2->SetBinError(10,2.259888);
   hext_stack_2->SetBinError(11,3.573059);
   hext_stack_2->SetBinError(12,1.78091);
   hext_stack_2->SetBinError(13,2.256579);
   hext_stack_2->SetBinError(14,3.335576);
   hext_stack_2->SetBinError(15,2.587215);
   hext_stack_2->SetBinError(16,2.516574);
   hext_stack_2->SetBinError(17,2.272423);
   hext_stack_2->SetBinError(18,2.782522);
   hext_stack_2->SetBinError(19,3.200413);
   hext_stack_2->SetBinError(20,2.531438);
   hext_stack_2->SetBinError(21,3.137005);
   hext_stack_2->SetBinError(22,3.178668);
   hext_stack_2->SetBinError(23,2.487659);
   hext_stack_2->SetBinError(24,2.760249);
   hext_stack_2->SetBinError(25,1.807653);
   hext_stack_2->SetBinError(26,2.909166);
   hext_stack_2->SetBinError(27,2.259163);
   hext_stack_2->SetBinError(28,2.911733);
   hext_stack_2->SetBinError(29,2.192955);
   hext_stack_2->SetBinError(30,1.169498);
   hext_stack_2->SetBinError(31,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,6.168429);
   hdirt_stack_3->SetBinContent(2,5.902966);
   hdirt_stack_3->SetBinContent(3,4.675277);
   hdirt_stack_3->SetBinContent(4,2.429353);
   hdirt_stack_3->SetBinContent(5,1.186939);
   hdirt_stack_3->SetBinContent(6,1.312822);
   hdirt_stack_3->SetBinContent(7,1.573012);
   hdirt_stack_3->SetBinContent(8,1.31892);
   hdirt_stack_3->SetBinContent(9,1.860816);
   hdirt_stack_3->SetBinContent(10,2.742697);
   hdirt_stack_3->SetBinContent(11,0.8520056);
   hdirt_stack_3->SetBinContent(12,0.3695036);
   hdirt_stack_3->SetBinContent(13,1.992378);
   hdirt_stack_3->SetBinContent(14,1.253978);
   hdirt_stack_3->SetBinContent(15,0.9396383);
   hdirt_stack_3->SetBinContent(16,1.023377);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,0.4797767);
   hdirt_stack_3->SetBinContent(19,0.7567513);
   hdirt_stack_3->SetBinContent(20,1.356197);
   hdirt_stack_3->SetBinContent(21,1.437086);
   hdirt_stack_3->SetBinContent(22,1.292466);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.7321214);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,2.245472);
   hdirt_stack_3->SetBinContent(27,1.190193);
   hdirt_stack_3->SetBinContent(28,1.217301);
   hdirt_stack_3->SetBinContent(29,0.6951543);
   hdirt_stack_3->SetBinContent(30,0.3569671);
   hdirt_stack_3->SetBinError(1,1.321384);
   hdirt_stack_3->SetBinError(2,1.227777);
   hdirt_stack_3->SetBinError(3,1.078742);
   hdirt_stack_3->SetBinError(4,0.8110418);
   hdirt_stack_3->SetBinError(5,0.6014376);
   hdirt_stack_3->SetBinError(6,0.6152015);
   hdirt_stack_3->SetBinError(7,0.6762364);
   hdirt_stack_3->SetBinError(8,0.5583609);
   hdirt_stack_3->SetBinError(9,0.6884205);
   hdirt_stack_3->SetBinError(10,1.279068);
   hdirt_stack_3->SetBinError(11,0.3911799);
   hdirt_stack_3->SetBinError(12,0.2657029);
   hdirt_stack_3->SetBinError(13,0.7891338);
   hdirt_stack_3->SetBinError(14,0.6057728);
   hdirt_stack_3->SetBinError(15,0.4868118);
   hdirt_stack_3->SetBinError(16,0.5655242);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.3404134);
   hdirt_stack_3->SetBinError(19,0.4605545);
   hdirt_stack_3->SetBinError(20,0.5430927);
   hdirt_stack_3->SetBinError(21,0.61377);
   hdirt_stack_3->SetBinError(22,0.5501154);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.4557629);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.237476);
   hdirt_stack_3->SetBinError(27,0.5170999);
   hdirt_stack_3->SetBinError(28,0.5249886);
   hdirt_stack_3->SetBinError(29,0.4258516);
   hdirt_stack_3->SetBinError(30,0.258803);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.536893);
   houtFV_stack_4->SetBinContent(1,26.11683);
   houtFV_stack_4->SetBinContent(2,18.01719);
   houtFV_stack_4->SetBinContent(3,11.88624);
   houtFV_stack_4->SetBinContent(4,11.85862);
   houtFV_stack_4->SetBinContent(5,10.57885);
   houtFV_stack_4->SetBinContent(6,13.1924);
   houtFV_stack_4->SetBinContent(7,11.87642);
   houtFV_stack_4->SetBinContent(8,12.8849);
   houtFV_stack_4->SetBinContent(9,11.65918);
   houtFV_stack_4->SetBinContent(10,11.19347);
   houtFV_stack_4->SetBinContent(11,12.17198);
   houtFV_stack_4->SetBinContent(12,11.2575);
   houtFV_stack_4->SetBinContent(13,8.563326);
   houtFV_stack_4->SetBinContent(14,12.08551);
   houtFV_stack_4->SetBinContent(15,12.94896);
   houtFV_stack_4->SetBinContent(16,13.10884);
   houtFV_stack_4->SetBinContent(17,13.03862);
   houtFV_stack_4->SetBinContent(18,11.67637);
   houtFV_stack_4->SetBinContent(19,11.02141);
   houtFV_stack_4->SetBinContent(20,14.0332);
   houtFV_stack_4->SetBinContent(21,12.68451);
   houtFV_stack_4->SetBinContent(22,12.94453);
   houtFV_stack_4->SetBinContent(23,12.41992);
   houtFV_stack_4->SetBinContent(24,12.38407);
   houtFV_stack_4->SetBinContent(25,15.28127);
   houtFV_stack_4->SetBinContent(26,10.80738);
   houtFV_stack_4->SetBinContent(27,16.69221);
   houtFV_stack_4->SetBinContent(28,11.42396);
   houtFV_stack_4->SetBinContent(29,16.81506);
   houtFV_stack_4->SetBinContent(30,15.33017);
   houtFV_stack_4->SetBinContent(31,0.7336084);
   houtFV_stack_4->SetBinError(0,0.3929602);
   houtFV_stack_4->SetBinError(1,2.561409);
   houtFV_stack_4->SetBinError(2,2.126704);
   houtFV_stack_4->SetBinError(3,1.741274);
   houtFV_stack_4->SetBinError(4,1.734631);
   houtFV_stack_4->SetBinError(5,1.597419);
   houtFV_stack_4->SetBinError(6,1.787806);
   houtFV_stack_4->SetBinError(7,1.682247);
   houtFV_stack_4->SetBinError(8,1.797938);
   houtFV_stack_4->SetBinError(9,1.626011);
   houtFV_stack_4->SetBinError(10,1.653524);
   houtFV_stack_4->SetBinError(11,1.71045);
   houtFV_stack_4->SetBinError(12,1.645136);
   houtFV_stack_4->SetBinError(13,1.507143);
   houtFV_stack_4->SetBinError(14,1.713515);
   houtFV_stack_4->SetBinError(15,1.771356);
   houtFV_stack_4->SetBinError(16,1.829234);
   houtFV_stack_4->SetBinError(17,1.782526);
   houtFV_stack_4->SetBinError(18,1.728616);
   houtFV_stack_4->SetBinError(19,1.631456);
   houtFV_stack_4->SetBinError(20,1.874607);
   houtFV_stack_4->SetBinError(21,1.845678);
   houtFV_stack_4->SetBinError(22,1.810102);
   houtFV_stack_4->SetBinError(23,1.784882);
   houtFV_stack_4->SetBinError(24,1.780309);
   houtFV_stack_4->SetBinError(25,1.973541);
   houtFV_stack_4->SetBinError(26,1.639756);
   houtFV_stack_4->SetBinError(27,2.042518);
   houtFV_stack_4->SetBinError(28,1.672587);
   houtFV_stack_4->SetBinError(29,2.125068);
   houtFV_stack_4->SetBinError(30,1.986927);
   houtFV_stack_4->SetBinError(31,0.4394482);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.938894);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.565816);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.536916);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.48278);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.471738);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.861506);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.261156);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.857434);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.20702);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.331069);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.899616);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.220302);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.584338);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.651924);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.58317);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.319452);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.608662);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.711052);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.333734);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.44043);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.301594);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.885166);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.838912);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.248866);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.84051);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,4.05631);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,4.404896);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,3.877788);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.686626);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4879888);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5555585);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.505808);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.541126);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6220463);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.615283);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5795039);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5210948);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6105738);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5461369);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5157142);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5607299);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6648912);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6160206);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5977427);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6286336);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5381206);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6768331);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6235567);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5154);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4982493);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.489448);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3716245);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5492757);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.7798361);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.6559525);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.6924659);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.6901204);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3825485);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.3442606);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.198876);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.031972);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.98979);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9904539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8654041);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.26979);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9202038);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.9065858);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.116672);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3905998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5995177);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.892472);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.144572);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.225944);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.8501219);
   hNCpi0inFVqe_stack_6->SetBinContent(26,1.311972);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.892472);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.6825538);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3984141);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3283469);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.336735);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.316066);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3498677);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4161726);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2682147);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2545655);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4027059);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1043922);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1532389);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3223657);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4036712);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3744943);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2770189);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.4094153);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.3223657);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1982678);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1974492);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.7953222);
   hNCpi0inFVres_stack_7->SetBinContent(1,40.82716);
   hNCpi0inFVres_stack_7->SetBinContent(2,76.67382);
   hNCpi0inFVres_stack_7->SetBinContent(3,79.2121);
   hNCpi0inFVres_stack_7->SetBinContent(4,69.5274);
   hNCpi0inFVres_stack_7->SetBinContent(5,81.53491);
   hNCpi0inFVres_stack_7->SetBinContent(6,86.51891);
   hNCpi0inFVres_stack_7->SetBinContent(7,82.97459);
   hNCpi0inFVres_stack_7->SetBinContent(8,83.0261);
   hNCpi0inFVres_stack_7->SetBinContent(9,88.92279);
   hNCpi0inFVres_stack_7->SetBinContent(10,84.99387);
   hNCpi0inFVres_stack_7->SetBinContent(11,83.63056);
   hNCpi0inFVres_stack_7->SetBinContent(12,85.564);
   hNCpi0inFVres_stack_7->SetBinContent(13,90.20276);
   hNCpi0inFVres_stack_7->SetBinContent(14,98.21268);
   hNCpi0inFVres_stack_7->SetBinContent(15,92.09695);
   hNCpi0inFVres_stack_7->SetBinContent(16,90.31116);
   hNCpi0inFVres_stack_7->SetBinContent(17,93.97606);
   hNCpi0inFVres_stack_7->SetBinContent(18,91.36841);
   hNCpi0inFVres_stack_7->SetBinContent(19,88.38557);
   hNCpi0inFVres_stack_7->SetBinContent(20,83.93534);
   hNCpi0inFVres_stack_7->SetBinContent(21,74.56188);
   hNCpi0inFVres_stack_7->SetBinContent(22,76.2359);
   hNCpi0inFVres_stack_7->SetBinContent(23,86.09039);
   hNCpi0inFVres_stack_7->SetBinContent(24,87.00887);
   hNCpi0inFVres_stack_7->SetBinContent(25,85.20238);
   hNCpi0inFVres_stack_7->SetBinContent(26,91.34022);
   hNCpi0inFVres_stack_7->SetBinContent(27,86.90934);
   hNCpi0inFVres_stack_7->SetBinContent(28,95.95633);
   hNCpi0inFVres_stack_7->SetBinContent(29,78.29803);
   hNCpi0inFVres_stack_7->SetBinContent(30,35.62166);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.3068998);
   hNCpi0inFVres_stack_7->SetBinError(0,0.356662);
   hNCpi0inFVres_stack_7->SetBinError(1,2.064807);
   hNCpi0inFVres_stack_7->SetBinError(2,2.847033);
   hNCpi0inFVres_stack_7->SetBinError(3,2.974159);
   hNCpi0inFVres_stack_7->SetBinError(4,2.721978);
   hNCpi0inFVres_stack_7->SetBinError(5,2.928119);
   hNCpi0inFVres_stack_7->SetBinError(6,3.041298);
   hNCpi0inFVres_stack_7->SetBinError(7,2.943641);
   hNCpi0inFVres_stack_7->SetBinError(8,3.008099);
   hNCpi0inFVres_stack_7->SetBinError(9,3.066056);
   hNCpi0inFVres_stack_7->SetBinError(10,2.984294);
   hNCpi0inFVres_stack_7->SetBinError(11,2.920966);
   hNCpi0inFVres_stack_7->SetBinError(12,3.011224);
   hNCpi0inFVres_stack_7->SetBinError(13,3.118845);
   hNCpi0inFVres_stack_7->SetBinError(14,3.283953);
   hNCpi0inFVres_stack_7->SetBinError(15,3.143125);
   hNCpi0inFVres_stack_7->SetBinError(16,3.08344);
   hNCpi0inFVres_stack_7->SetBinError(17,3.193238);
   hNCpi0inFVres_stack_7->SetBinError(18,3.168092);
   hNCpi0inFVres_stack_7->SetBinError(19,3.08223);
   hNCpi0inFVres_stack_7->SetBinError(20,3.009899);
   hNCpi0inFVres_stack_7->SetBinError(21,2.799692);
   hNCpi0inFVres_stack_7->SetBinError(22,2.859027);
   hNCpi0inFVres_stack_7->SetBinError(23,3.026836);
   hNCpi0inFVres_stack_7->SetBinError(24,3.120986);
   hNCpi0inFVres_stack_7->SetBinError(25,2.945877);
   hNCpi0inFVres_stack_7->SetBinError(26,3.117538);
   hNCpi0inFVres_stack_7->SetBinError(27,3.037701);
   hNCpi0inFVres_stack_7->SetBinError(28,3.282788);
   hNCpi0inFVres_stack_7->SetBinError(29,2.933841);
   hNCpi0inFVres_stack_7->SetBinError(30,2.032558);
   hNCpi0inFVres_stack_7->SetBinError(31,0.09253378);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.649624);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.78913);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.12951);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.05086);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.1638);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.28254);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.10925);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.97796);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.83191);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.0116);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.63037);
   hNCpi0inFVdis_stack_8->SetBinContent(12,17.35751);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.5724);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.26036);
   hNCpi0inFVdis_stack_8->SetBinContent(15,16.61966);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.48323);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.04548);
   hNCpi0inFVdis_stack_8->SetBinContent(18,17.1501);
   hNCpi0inFVdis_stack_8->SetBinContent(19,16.35278);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.68817);
   hNCpi0inFVdis_stack_8->SetBinContent(21,13.48439);
   hNCpi0inFVdis_stack_8->SetBinContent(22,15.17069);
   hNCpi0inFVdis_stack_8->SetBinContent(23,16.00901);
   hNCpi0inFVdis_stack_8->SetBinContent(24,15.0732);
   hNCpi0inFVdis_stack_8->SetBinContent(25,16.38683);
   hNCpi0inFVdis_stack_8->SetBinContent(26,18.2387);
   hNCpi0inFVdis_stack_8->SetBinContent(27,16.53646);
   hNCpi0inFVdis_stack_8->SetBinContent(28,16.89883);
   hNCpi0inFVdis_stack_8->SetBinContent(29,11.00194);
   hNCpi0inFVdis_stack_8->SetBinContent(30,6.985826);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.051516);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.200008);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.306405);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.201088);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.376121);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.314696);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.349706);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.320947);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.361049);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.375226);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.266161);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.305908);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.210288);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.314794);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.327707);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.346819);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.403311);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.357613);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.269589);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.307199);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.193205);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.284169);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.282754);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.26762);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.291699);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.404189);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.309282);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.342888);
   hNCpi0inFVdis_stack_8->SetBinError(29,1.025626);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.8950214);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04832419);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.125218);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.1012383);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,15.51419);
   hCCpi0inFV_stack_10->SetBinContent(2,22.70611);
   hCCpi0inFV_stack_10->SetBinContent(3,24.11802);
   hCCpi0inFV_stack_10->SetBinContent(4,26.6031);
   hCCpi0inFV_stack_10->SetBinContent(5,30.51792);
   hCCpi0inFV_stack_10->SetBinContent(6,26.00012);
   hCCpi0inFV_stack_10->SetBinContent(7,25.12575);
   hCCpi0inFV_stack_10->SetBinContent(8,28.26074);
   hCCpi0inFV_stack_10->SetBinContent(9,26.8647);
   hCCpi0inFV_stack_10->SetBinContent(10,29.75892);
   hCCpi0inFV_stack_10->SetBinContent(11,26.97925);
   hCCpi0inFV_stack_10->SetBinContent(12,25.75826);
   hCCpi0inFV_stack_10->SetBinContent(13,30.1151);
   hCCpi0inFV_stack_10->SetBinContent(14,29.21781);
   hCCpi0inFV_stack_10->SetBinContent(15,32.05441);
   hCCpi0inFV_stack_10->SetBinContent(16,25.20401);
   hCCpi0inFV_stack_10->SetBinContent(17,23.21074);
   hCCpi0inFV_stack_10->SetBinContent(18,25.12848);
   hCCpi0inFV_stack_10->SetBinContent(19,23.6781);
   hCCpi0inFV_stack_10->SetBinContent(20,26.30265);
   hCCpi0inFV_stack_10->SetBinContent(21,27.19884);
   hCCpi0inFV_stack_10->SetBinContent(22,27.55852);
   hCCpi0inFV_stack_10->SetBinContent(23,23.91346);
   hCCpi0inFV_stack_10->SetBinContent(24,31.04306);
   hCCpi0inFV_stack_10->SetBinContent(25,25.78038);
   hCCpi0inFV_stack_10->SetBinContent(26,31.01363);
   hCCpi0inFV_stack_10->SetBinContent(27,25.33016);
   hCCpi0inFV_stack_10->SetBinContent(28,24.3166);
   hCCpi0inFV_stack_10->SetBinContent(29,19.49987);
   hCCpi0inFV_stack_10->SetBinContent(30,16.16813);
   hCCpi0inFV_stack_10->SetBinContent(31,0.9801958);
   hCCpi0inFV_stack_10->SetBinError(1,1.995204);
   hCCpi0inFV_stack_10->SetBinError(2,2.344947);
   hCCpi0inFV_stack_10->SetBinError(3,2.489561);
   hCCpi0inFV_stack_10->SetBinError(4,2.528692);
   hCCpi0inFV_stack_10->SetBinError(5,2.760255);
   hCCpi0inFV_stack_10->SetBinError(6,2.516727);
   hCCpi0inFV_stack_10->SetBinError(7,2.475299);
   hCCpi0inFV_stack_10->SetBinError(8,2.69731);
   hCCpi0inFV_stack_10->SetBinError(9,2.610253);
   hCCpi0inFV_stack_10->SetBinError(10,2.752345);
   hCCpi0inFV_stack_10->SetBinError(11,2.659205);
   hCCpi0inFV_stack_10->SetBinError(12,2.561481);
   hCCpi0inFV_stack_10->SetBinError(13,2.752572);
   hCCpi0inFV_stack_10->SetBinError(14,2.672425);
   hCCpi0inFV_stack_10->SetBinError(15,2.778206);
   hCCpi0inFV_stack_10->SetBinError(16,2.444759);
   hCCpi0inFV_stack_10->SetBinError(17,2.456935);
   hCCpi0inFV_stack_10->SetBinError(18,2.475551);
   hCCpi0inFV_stack_10->SetBinError(19,2.482236);
   hCCpi0inFV_stack_10->SetBinError(20,2.496985);
   hCCpi0inFV_stack_10->SetBinError(21,2.614736);
   hCCpi0inFV_stack_10->SetBinError(22,2.593334);
   hCCpi0inFV_stack_10->SetBinError(23,2.52082);
   hCCpi0inFV_stack_10->SetBinError(24,2.822693);
   hCCpi0inFV_stack_10->SetBinError(25,2.546412);
   hCCpi0inFV_stack_10->SetBinError(26,2.837597);
   hCCpi0inFV_stack_10->SetBinError(27,2.488272);
   hCCpi0inFV_stack_10->SetBinError(28,2.509738);
   hCCpi0inFV_stack_10->SetBinError(29,2.221216);
   hCCpi0inFV_stack_10->SetBinError(30,2.058072);
   hCCpi0inFV_stack_10->SetBinError(31,0.4383608);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,7.130916);
   hNCinFV_stack_11->SetBinContent(2,13.62459);
   hNCinFV_stack_11->SetBinContent(3,12.61082);
   hNCinFV_stack_11->SetBinContent(4,12.506);
   hNCinFV_stack_11->SetBinContent(5,16.17066);
   hNCinFV_stack_11->SetBinContent(6,13.83422);
   hNCinFV_stack_11->SetBinContent(7,16.70187);
   hNCinFV_stack_11->SetBinContent(8,14.17331);
   hNCinFV_stack_11->SetBinContent(9,14.95619);
   hNCinFV_stack_11->SetBinContent(10,15.87528);
   hNCinFV_stack_11->SetBinContent(11,13.97491);
   hNCinFV_stack_11->SetBinContent(12,14.16824);
   hNCinFV_stack_11->SetBinContent(13,13.91827);
   hNCinFV_stack_11->SetBinContent(14,18.13612);
   hNCinFV_stack_11->SetBinContent(15,13.19251);
   hNCinFV_stack_11->SetBinContent(16,16.71479);
   hNCinFV_stack_11->SetBinContent(17,17.4507);
   hNCinFV_stack_11->SetBinContent(18,14.22596);
   hNCinFV_stack_11->SetBinContent(19,16.55733);
   hNCinFV_stack_11->SetBinContent(20,18.17923);
   hNCinFV_stack_11->SetBinContent(21,18.21558);
   hNCinFV_stack_11->SetBinContent(22,15.32378);
   hNCinFV_stack_11->SetBinContent(23,14.52303);
   hNCinFV_stack_11->SetBinContent(24,16.26871);
   hNCinFV_stack_11->SetBinContent(25,17.46967);
   hNCinFV_stack_11->SetBinContent(26,13.24745);
   hNCinFV_stack_11->SetBinContent(27,15.62809);
   hNCinFV_stack_11->SetBinContent(28,14.10943);
   hNCinFV_stack_11->SetBinContent(29,12.60405);
   hNCinFV_stack_11->SetBinContent(30,6.743639);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,1.374459);
   hNCinFV_stack_11->SetBinError(2,1.87204);
   hNCinFV_stack_11->SetBinError(3,1.777645);
   hNCinFV_stack_11->SetBinError(4,1.79926);
   hNCinFV_stack_11->SetBinError(5,2.049777);
   hNCinFV_stack_11->SetBinError(6,1.830274);
   hNCinFV_stack_11->SetBinError(7,2.038478);
   hNCinFV_stack_11->SetBinError(8,1.91405);
   hNCinFV_stack_11->SetBinError(9,1.902216);
   hNCinFV_stack_11->SetBinError(10,2.011027);
   hNCinFV_stack_11->SetBinError(11,1.903741);
   hNCinFV_stack_11->SetBinError(12,1.913531);
   hNCinFV_stack_11->SetBinError(13,1.913435);
   hNCinFV_stack_11->SetBinError(14,2.141937);
   hNCinFV_stack_11->SetBinError(15,1.809089);
   hNCinFV_stack_11->SetBinError(16,1.990493);
   hNCinFV_stack_11->SetBinError(17,2.086736);
   hNCinFV_stack_11->SetBinError(18,1.851117);
   hNCinFV_stack_11->SetBinError(19,2.067929);
   hNCinFV_stack_11->SetBinError(20,2.13204);
   hNCinFV_stack_11->SetBinError(21,2.121472);
   hNCinFV_stack_11->SetBinError(22,2.020514);
   hNCinFV_stack_11->SetBinError(23,1.893319);
   hNCinFV_stack_11->SetBinError(24,2.030178);
   hNCinFV_stack_11->SetBinError(25,2.16783);
   hNCinFV_stack_11->SetBinError(26,1.798649);
   hNCinFV_stack_11->SetBinError(27,1.961264);
   hNCinFV_stack_11->SetBinError(28,1.833433);
   hNCinFV_stack_11->SetBinError(29,1.7769);
   hNCinFV_stack_11->SetBinError(30,1.271128);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,10.91569);
   hnumuCCinFV_stack_12->SetBinContent(2,16.63532);
   hnumuCCinFV_stack_12->SetBinContent(3,18.13314);
   hnumuCCinFV_stack_12->SetBinContent(4,20.40132);
   hnumuCCinFV_stack_12->SetBinContent(5,12.97126);
   hnumuCCinFV_stack_12->SetBinContent(6,14.95899);
   hnumuCCinFV_stack_12->SetBinContent(7,14.08054);
   hnumuCCinFV_stack_12->SetBinContent(8,20.37715);
   hnumuCCinFV_stack_12->SetBinContent(9,14.15174);
   hnumuCCinFV_stack_12->SetBinContent(10,14.18184);
   hnumuCCinFV_stack_12->SetBinContent(11,14.15496);
   hnumuCCinFV_stack_12->SetBinContent(12,11.04924);
   hnumuCCinFV_stack_12->SetBinContent(13,17.70538);
   hnumuCCinFV_stack_12->SetBinContent(14,16.37409);
   hnumuCCinFV_stack_12->SetBinContent(15,17.31138);
   hnumuCCinFV_stack_12->SetBinContent(16,12.53898);
   hnumuCCinFV_stack_12->SetBinContent(17,15.89369);
   hnumuCCinFV_stack_12->SetBinContent(18,16.1081);
   hnumuCCinFV_stack_12->SetBinContent(19,12.88276);
   hnumuCCinFV_stack_12->SetBinContent(20,16.15079);
   hnumuCCinFV_stack_12->SetBinContent(21,18.47076);
   hnumuCCinFV_stack_12->SetBinContent(22,15.81812);
   hnumuCCinFV_stack_12->SetBinContent(23,14.59047);
   hnumuCCinFV_stack_12->SetBinContent(24,14.4643);
   hnumuCCinFV_stack_12->SetBinContent(25,13.49343);
   hnumuCCinFV_stack_12->SetBinContent(26,12.34262);
   hnumuCCinFV_stack_12->SetBinContent(27,13.66819);
   hnumuCCinFV_stack_12->SetBinContent(28,9.593508);
   hnumuCCinFV_stack_12->SetBinContent(29,11.1576);
   hnumuCCinFV_stack_12->SetBinContent(30,8.828473);
   hnumuCCinFV_stack_12->SetBinError(1,2.122495);
   hnumuCCinFV_stack_12->SetBinError(2,2.403766);
   hnumuCCinFV_stack_12->SetBinError(3,2.315101);
   hnumuCCinFV_stack_12->SetBinError(4,2.467025);
   hnumuCCinFV_stack_12->SetBinError(5,1.828305);
   hnumuCCinFV_stack_12->SetBinError(6,2.273821);
   hnumuCCinFV_stack_12->SetBinError(7,2.400167);
   hnumuCCinFV_stack_12->SetBinError(8,2.746196);
   hnumuCCinFV_stack_12->SetBinError(9,2.341274);
   hnumuCCinFV_stack_12->SetBinError(10,2.230244);
   hnumuCCinFV_stack_12->SetBinError(11,1.981725);
   hnumuCCinFV_stack_12->SetBinError(12,2.047388);
   hnumuCCinFV_stack_12->SetBinError(13,2.330893);
   hnumuCCinFV_stack_12->SetBinError(14,3.123715);
   hnumuCCinFV_stack_12->SetBinError(15,2.28424);
   hnumuCCinFV_stack_12->SetBinError(16,1.900191);
   hnumuCCinFV_stack_12->SetBinError(17,2.553314);
   hnumuCCinFV_stack_12->SetBinError(18,2.25703);
   hnumuCCinFV_stack_12->SetBinError(19,2.038715);
   hnumuCCinFV_stack_12->SetBinError(20,2.797183);
   hnumuCCinFV_stack_12->SetBinError(21,2.209372);
   hnumuCCinFV_stack_12->SetBinError(22,2.114814);
   hnumuCCinFV_stack_12->SetBinError(23,1.92673);
   hnumuCCinFV_stack_12->SetBinError(24,1.998053);
   hnumuCCinFV_stack_12->SetBinError(25,2.09862);
   hnumuCCinFV_stack_12->SetBinError(26,1.964127);
   hnumuCCinFV_stack_12->SetBinError(27,2.284537);
   hnumuCCinFV_stack_12->SetBinError(28,1.527964);
   hnumuCCinFV_stack_12->SetBinError(29,1.984888);
   hnumuCCinFV_stack_12->SetBinError(30,1.801117);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.305493);
   hnueCCinFV_stack_13->SetBinContent(2,0.9315238);
   hnueCCinFV_stack_13->SetBinContent(3,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(4,1.9952);
   hnueCCinFV_stack_13->SetBinContent(5,2.751163);
   hnueCCinFV_stack_13->SetBinContent(6,0.977303);
   hnueCCinFV_stack_13->SetBinContent(7,1.862217);
   hnueCCinFV_stack_13->SetBinContent(8,1.975547);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,0.8640677);
   hnueCCinFV_stack_13->SetBinContent(11,1.085857);
   hnueCCinFV_stack_13->SetBinContent(12,1.338508);
   hnueCCinFV_stack_13->SetBinContent(13,1.869692);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.86362);
   hnueCCinFV_stack_13->SetBinContent(16,1.004542);
   hnueCCinFV_stack_13->SetBinContent(17,0.8975527);
   hnueCCinFV_stack_13->SetBinContent(18,1.602102);
   hnueCCinFV_stack_13->SetBinContent(19,1.707721);
   hnueCCinFV_stack_13->SetBinContent(20,1.418046);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.576748);
   hnueCCinFV_stack_13->SetBinContent(23,0.8410603);
   hnueCCinFV_stack_13->SetBinContent(24,1.315597);
   hnueCCinFV_stack_13->SetBinContent(25,1.962252);
   hnueCCinFV_stack_13->SetBinContent(26,1.603958);
   hnueCCinFV_stack_13->SetBinContent(27,1.84257);
   hnueCCinFV_stack_13->SetBinContent(28,0.3099382);
   hnueCCinFV_stack_13->SetBinContent(29,1.466653);
   hnueCCinFV_stack_13->SetBinContent(30,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.6094479);
   hnueCCinFV_stack_13->SetBinError(2,0.5575178);
   hnueCCinFV_stack_13->SetBinError(3,0.2758068);
   hnueCCinFV_stack_13->SetBinError(4,0.7872795);
   hnueCCinFV_stack_13->SetBinError(5,1.839099);
   hnueCCinFV_stack_13->SetBinError(6,0.5020508);
   hnueCCinFV_stack_13->SetBinError(7,0.7596284);
   hnueCCinFV_stack_13->SetBinError(8,0.7270421);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.5230935);
   hnueCCinFV_stack_13->SetBinError(11,0.5487395);
   hnueCCinFV_stack_13->SetBinError(12,0.6800867);
   hnueCCinFV_stack_13->SetBinError(13,0.8652832);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6915641);
   hnueCCinFV_stack_13->SetBinError(16,0.4496359);
   hnueCCinFV_stack_13->SetBinError(17,0.558584);
   hnueCCinFV_stack_13->SetBinError(18,0.9585051);
   hnueCCinFV_stack_13->SetBinError(19,0.8779705);
   hnueCCinFV_stack_13->SetBinError(20,0.6357467);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.7621998);
   hnueCCinFV_stack_13->SetBinError(23,0.496926);
   hnueCCinFV_stack_13->SetBinError(24,0.6063249);
   hnueCCinFV_stack_13->SetBinError(25,0.8301541);
   hnueCCinFV_stack_13->SetBinError(26,0.6294072);
   hnueCCinFV_stack_13->SetBinError(27,0.7546551);
   hnueCCinFV_stack_13->SetBinError(28,0.3099382);
   hnueCCinFV_stack_13->SetBinError(29,0.6110264);
   hnueCCinFV_stack_13->SetBinError(30,0.1950249);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__5->SetBinContent(0,1.725646);
   hmcerror__5->SetBinContent(1,130.5825);
   hmcerror__5->SetBinContent(2,194.9283);
   hmcerror__5->SetBinContent(3,193.7771);
   hmcerror__5->SetBinContent(4,185.8858);
   hmcerror__5->SetBinContent(5,206.9717);
   hmcerror__5->SetBinContent(6,197.5);
   hmcerror__5->SetBinContent(7,197.3716);
   hmcerror__5->SetBinContent(8,207.2629);
   hmcerror__5->SetBinContent(9,195.1504);
   hmcerror__5->SetBinContent(10,197.154);
   hmcerror__5->SetBinContent(11,200.4452);
   hmcerror__5->SetBinContent(12,184.576);
   hmcerror__5->SetBinContent(13,198.9082);
   hmcerror__5->SetBinContent(14,227.1272);
   hmcerror__5->SetBinContent(15,209.427);
   hmcerror__5->SetBinContent(16,200.2391);
   hmcerror__5->SetBinContent(17,204.041);
   hmcerror__5->SetBinContent(18,202.482);
   hmcerror__5->SetBinContent(19,199.6245);
   hmcerror__5->SetBinContent(20,200.2832);
   hmcerror__5->SetBinContent(21,202.8517);
   hmcerror__5->SetBinContent(22,194.379);
   hmcerror__5->SetBinContent(23,188.3072);
   hmcerror__5->SetBinContent(24,203.2176);
   hmcerror__5->SetBinContent(25,193.2975);
   hmcerror__5->SetBinContent(26,206.2053);
   hmcerror__5->SetBinContent(27,199.3627);
   hmcerror__5->SetBinContent(28,198.3971);
   hmcerror__5->SetBinContent(29,166.6098);
   hmcerror__5->SetBinContent(30,98.15349);
   hmcerror__5->SetBinContent(31,2.511003);
   hmcerror__5->SetBinError(0,0.5991823);
   hmcerror__5->SetBinError(1,35.05395);
   hmcerror__5->SetBinError(2,50.13764);
   hmcerror__5->SetBinError(3,59.23114);
   hmcerror__5->SetBinError(4,47.62911);
   hmcerror__5->SetBinError(5,56.09098);
   hmcerror__5->SetBinError(6,58.61933);
   hmcerror__5->SetBinError(7,52.80657);
   hmcerror__5->SetBinError(8,55.39997);
   hmcerror__5->SetBinError(9,55.1306);
   hmcerror__5->SetBinError(10,53.12851);
   hmcerror__5->SetBinError(11,55.82991);
   hmcerror__5->SetBinError(12,51.13388);
   hmcerror__5->SetBinError(13,53.55034);
   hmcerror__5->SetBinError(14,62.67153);
   hmcerror__5->SetBinError(15,66.10189);
   hmcerror__5->SetBinError(16,57.46035);
   hmcerror__5->SetBinError(17,57.01752);
   hmcerror__5->SetBinError(18,55.56582);
   hmcerror__5->SetBinError(19,52.9319);
   hmcerror__5->SetBinError(20,54.5379);
   hmcerror__5->SetBinError(21,55.03668);
   hmcerror__5->SetBinError(22,61.10259);
   hmcerror__5->SetBinError(23,52.3317);
   hmcerror__5->SetBinError(24,53.5564);
   hmcerror__5->SetBinError(25,57.65175);
   hmcerror__5->SetBinError(26,61.27409);
   hmcerror__5->SetBinError(27,51.97811);
   hmcerror__5->SetBinError(28,53.18284);
   hmcerror__5->SetBinError(29,46.3082);
   hmcerror__5->SetBinError(30,27.55044);
   hmcerror__5->SetBinError(31,2.724027);
   hmcerror__5->SetBinError(32,0.3895343);
   hmcerror__5->SetBinError(33,0.3895343);
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
   
   Double_t _fx3005[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3005[32] = {
   118,
   167,
   174,
   154,
   171,
   191,
   169,
   180,
   203,
   157,
   179,
   163,
   166,
   163,
   180,
   171,
   183,
   190,
   168,
   164,
   163,
   174,
   186,
   132,
   175,
   173,
   165,
   162,
   146,
   85,
   2,
   0};
   Double_t _felx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3005[32] = {
   10.86278,
   12.92285,
   13.19091,
   12.40967,
   13.0767,
   13.82027,
   13,
   13.41641,
   14.24781,
   12.52996,
   13.37909,
   12.76715,
   12.8841,
   12.76715,
   13.41641,
   13.0767,
   13.52775,
   13.78405,
   12.96148,
   12.80625,
   12.76715,
   13.19091,
   13.63818,
   11.48913,
   13.22876,
   13.15295,
   12.84523,
   12.72792,
   12.08305,
   9.3428,
   2,
   0};
   Double_t _fehx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3005[32] = {
   10.86278,
   12.92285,
   13.19091,
   12.40967,
   13.0767,
   13.82027,
   13,
   13.41641,
   14.24781,
   12.52996,
   13.37909,
   12.76715,
   12.8841,
   12.76715,
   13.41641,
   13.0767,
   13.52775,
   13.78405,
   12.96148,
   12.80625,
   12.76715,
   13.19091,
   13.63818,
   11.48913,
   13.22876,
   13.15295,
   12.84523,
   12.72792,
   12.08305,
   9.1411,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1210);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(238.9726);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.5/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 396.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2469.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3006[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3006[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3006[32] = {
   0.2684429,
   0.2572108,
   0.3056664,
   0.2562278,
   0.271008,
   0.2968067,
   0.267549,
   0.2672932,
   0.2825031,
   0.2694772,
   0.2785295,
   0.2770343,
   0.2692214,
   0.2759315,
   0.3156321,
   0.2869587,
   0.2794415,
   0.2744236,
   0.2651574,
   0.2723039,
   0.2713148,
   0.3143477,
   0.277906,
   0.2635421,
   0.2982539,
   0.2971509,
   0.2607213,
   0.2680626,
   0.2779441,
   0.2806873,
   1.084836,
   0};
   Double_t _fehx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3006[32] = {
   0.2684429,
   0.2572108,
   0.3056664,
   0.2562278,
   0.271008,
   0.2968067,
   0.267549,
   0.2672932,
   0.2825031,
   0.2694772,
   0.2785295,
   0.2770343,
   0.2692214,
   0.2759315,
   0.3156321,
   0.2869587,
   0.2794415,
   0.2744236,
   0.2651574,
   0.2723039,
   0.2713148,
   0.3143477,
   0.277906,
   0.2635421,
   0.2982539,
   0.2971509,
   0.2607213,
   0.2680626,
   0.2779441,
   0.2806873,
   1.084836,
   0};
   grae = new TGraphAsymmErrors(32,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1210);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3007[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3007[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3007[32] = {
   0.2246782,
   0.232607,
   0.2369369,
   0.2369451,
   0.2412195,
   0.2548601,
   0.2485506,
   0.2388061,
   0.2619225,
   0.254955,
   0.2398049,
   0.2614537,
   0.2518842,
   0.2464086,
   0.2551283,
   0.2638296,
   0.2583248,
   0.2553326,
   0.2477293,
   0.2508095,
   0.2284545,
   0.235887,
   0.2599199,
   0.241293,
   0.2696447,
   0.2480274,
   0.2464834,
   0.2486614,
   0.2420786,
   0.2311832,
   0.4185046,
   0};
   Double_t _fehx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3007[32] = {
   0.2246782,
   0.232607,
   0.2369369,
   0.2369451,
   0.2412195,
   0.2548601,
   0.2485506,
   0.2388061,
   0.2619225,
   0.254955,
   0.2398049,
   0.2614537,
   0.2518842,
   0.2464086,
   0.2551283,
   0.2638296,
   0.2583248,
   0.2553326,
   0.2477293,
   0.2508095,
   0.2284545,
   0.235887,
   0.2599199,
   0.241293,
   0.2696447,
   0.2480274,
   0.2464834,
   0.2486614,
   0.2420786,
   0.2311832,
   0.4185046,
   0};
   grae = new TGraphAsymmErrors(32,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1210);
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
   
   Double_t _fx3008[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3008[32] = {
   0.9036434,
   0.8567255,
   0.8979391,
   0.8284655,
   0.8262,
   0.9670886,
   0.8562531,
   0.8684621,
   1.040223,
   0.7963318,
   0.8930121,
   0.883105,
   0.834556,
   0.7176597,
   0.8594879,
   0.8539791,
   0.8968785,
   0.9383552,
   0.8415803,
   0.8188406,
   0.8035426,
   0.8951585,
   0.9877477,
   0.6495501,
   0.9053401,
   0.8389698,
   0.8276371,
   0.8165442,
   0.8762991,
   0.8659906,
   0.7964945,
   10};
   Double_t _felx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3008[32] = {
   0.08318711,
   0.06629541,
   0.06807259,
   0.06675965,
   0.06318109,
   0.06997608,
   0.06586562,
   0.06473134,
   0.07300936,
   0.0635542,
   0.06674686,
   0.06917013,
   0.06477411,
   0.05621144,
   0.06406245,
   0.06530541,
   0.06629917,
   0.06807544,
   0.06492933,
   0.06394071,
   0.06293831,
   0.06786179,
   0.07242517,
   0.05653608,
   0.06843728,
   0.06378569,
   0.06443146,
   0.06415377,
   0.07252303,
   0.09518561,
   0.7964945,
   0};
   Double_t _fehx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3008[32] = {
   0.08318711,
   0.06629541,
   0.06807259,
   0.06675965,
   0.06318109,
   0.06997608,
   0.06586562,
   0.06473134,
   0.07300936,
   0.0635542,
   0.06674686,
   0.06917013,
   0.06477411,
   0.05621144,
   0.06406245,
   0.06530541,
   0.06629917,
   0.06807544,
   0.06492933,
   0.06394071,
   0.06293831,
   0.06786179,
   0.07242517,
   0.05653608,
   0.06843728,
   0.06378569,
   0.06443146,
   0.06415377,
   0.07252303,
   0.09313067,
   0.6050052,
   0};
   grae = new TGraphAsymmErrors(32,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1210);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

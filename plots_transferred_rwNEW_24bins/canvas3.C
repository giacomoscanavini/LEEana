#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Feb 18 16:15:24 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-246.1538,-3.659093,1805.128,404.6187);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__7->SetBinContent(2,1.604554);
   hmc__7->SetBinContent(3,34.58395);
   hmc__7->SetBinContent(4,140.2724);
   hmc__7->SetBinContent(5,155.6812);
   hmc__7->SetBinContent(6,182.9547);
   hmc__7->SetBinContent(7,173.3102);
   hmc__7->SetBinContent(8,155.0406);
   hmc__7->SetBinContent(9,152.8119);
   hmc__7->SetBinContent(10,136.2993);
   hmc__7->SetBinContent(11,97.88717);
   hmc__7->SetBinContent(12,78.53808);
   hmc__7->SetBinContent(13,73.04848);
   hmc__7->SetBinContent(14,58.36726);
   hmc__7->SetBinContent(15,47.02128);
   hmc__7->SetBinContent(16,37.18943);
   hmc__7->SetBinContent(17,27.81329);
   hmc__7->SetBinContent(18,18.16);
   hmc__7->SetBinContent(19,18.81223);
   hmc__7->SetBinContent(20,9.451085);
   hmc__7->SetBinContent(21,12.91088);
   hmc__7->SetBinContent(22,10.4876);
   hmc__7->SetBinContent(23,5.711776);
   hmc__7->SetBinContent(24,6.832601);
   hmc__7->SetBinContent(25,50.26558);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,8.337623);
   hmc__7->SetBinError(3,17.11365);
   hmc__7->SetBinError(4,31.84457);
   hmc__7->SetBinError(5,37.01373);
   hmc__7->SetBinError(6,47.3494);
   hmc__7->SetBinError(7,47.98884);
   hmc__7->SetBinError(8,45.98337);
   hmc__7->SetBinError(9,44.3292);
   hmc__7->SetBinError(10,41.38449);
   hmc__7->SetBinError(11,31.48105);
   hmc__7->SetBinError(12,25.78969);
   hmc__7->SetBinError(13,24.06252);
   hmc__7->SetBinError(14,37.86189);
   hmc__7->SetBinError(15,21.96053);
   hmc__7->SetBinError(16,17.51467);
   hmc__7->SetBinError(17,15.76037);
   hmc__7->SetBinError(18,9.893149);
   hmc__7->SetBinError(19,11.99239);
   hmc__7->SetBinError(20,7.534598);
   hmc__7->SetBinError(21,20.56639);
   hmc__7->SetBinError(22,12.53404);
   hmc__7->SetBinError(23,6.516297);
   hmc__7->SetBinError(24,7.096186);
   hmc__7->SetBinError(25,17.97124);
   hmc__7->SetMinimum(-3.659093);
   hmc__7->SetMaximum(384.2048);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,1600);
   hs3_stack_3->SetMinimum(-1.150846e-08);
   hs3_stack_3->SetMaximum(192.1024);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(3,1.371206);
   hbadmatch_stack_1->SetBinContent(4,6.444025);
   hbadmatch_stack_1->SetBinContent(5,3.118229);
   hbadmatch_stack_1->SetBinContent(6,5.412553);
   hbadmatch_stack_1->SetBinContent(7,7.331392);
   hbadmatch_stack_1->SetBinContent(8,3.877213);
   hbadmatch_stack_1->SetBinContent(9,5.321547);
   hbadmatch_stack_1->SetBinContent(10,4.303476);
   hbadmatch_stack_1->SetBinContent(11,3.470524);
   hbadmatch_stack_1->SetBinContent(12,2.627339);
   hbadmatch_stack_1->SetBinContent(13,2.300647);
   hbadmatch_stack_1->SetBinContent(14,1.793812);
   hbadmatch_stack_1->SetBinContent(15,2.342597);
   hbadmatch_stack_1->SetBinContent(16,1.320373);
   hbadmatch_stack_1->SetBinContent(17,1.26712);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.6360607);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,0.6803553);
   hbadmatch_stack_1->SetBinContent(22,0.2239027);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,1.347517);
   hbadmatch_stack_1->SetBinError(3,0.5745658);
   hbadmatch_stack_1->SetBinError(4,1.686205);
   hbadmatch_stack_1->SetBinError(5,0.9733057);
   hbadmatch_stack_1->SetBinError(6,1.199888);
   hbadmatch_stack_1->SetBinError(7,1.454204);
   hbadmatch_stack_1->SetBinError(8,1.071307);
   hbadmatch_stack_1->SetBinError(9,1.205136);
   hbadmatch_stack_1->SetBinError(10,1.092535);
   hbadmatch_stack_1->SetBinError(11,1.023613);
   hbadmatch_stack_1->SetBinError(12,0.771556);
   hbadmatch_stack_1->SetBinError(13,0.749447);
   hbadmatch_stack_1->SetBinError(14,0.6607123);
   hbadmatch_stack_1->SetBinError(15,0.8097566);
   hbadmatch_stack_1->SetBinError(16,0.5548703);
   hbadmatch_stack_1->SetBinError(17,0.5883944);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.4822316);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.4810838);
   hbadmatch_stack_1->SetBinError(22,0.2239027);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.5649826);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,12.33913);
   hext_stack_2->SetBinContent(4,45.56429);
   hext_stack_2->SetBinContent(5,35.98751);
   hext_stack_2->SetBinContent(6,40.47163);
   hext_stack_2->SetBinContent(7,22.66082);
   hext_stack_2->SetBinContent(8,17.27576);
   hext_stack_2->SetBinContent(9,15.6769);
   hext_stack_2->SetBinContent(10,19.41408);
   hext_stack_2->SetBinContent(11,11.23467);
   hext_stack_2->SetBinContent(12,12.29006);
   hext_stack_2->SetBinContent(13,9.93985);
   hext_stack_2->SetBinContent(14,7.422464);
   hext_stack_2->SetBinContent(15,4.613812);
   hext_stack_2->SetBinContent(16,3.248382);
   hext_stack_2->SetBinContent(17,2.27519);
   hext_stack_2->SetBinContent(18,3.323403);
   hext_stack_2->SetBinContent(19,3.408376);
   hext_stack_2->SetBinContent(20,0.8131978);
   hext_stack_2->SetBinContent(21,2.6702);
   hext_stack_2->SetBinContent(22,0.973192);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,1.055394);
   hext_stack_2->SetBinContent(25,14.27834);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,2.557817);
   hext_stack_2->SetBinError(4,4.700009);
   hext_stack_2->SetBinError(5,4.021615);
   hext_stack_2->SetBinError(6,4.388196);
   hext_stack_2->SetBinError(7,3.117316);
   hext_stack_2->SetBinError(8,2.62996);
   hext_stack_2->SetBinError(9,2.754773);
   hext_stack_2->SetBinError(10,3.000274);
   hext_stack_2->SetBinError(11,2.331709);
   hext_stack_2->SetBinError(12,2.410945);
   hext_stack_2->SetBinError(13,2.16324);
   hext_stack_2->SetBinError(14,1.939769);
   hext_stack_2->SetBinError(15,1.439057);
   hext_stack_2->SetBinError(16,1.089706);
   hext_stack_2->SetBinError(17,0.9336798);
   hext_stack_2->SetBinError(18,1.20364);
   hext_stack_2->SetBinError(19,1.082827);
   hext_stack_2->SetBinError(20,0.5750177);
   hext_stack_2->SetBinError(21,1.050314);
   hext_stack_2->SetBinError(22,0.5618727);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.6130171);
   hext_stack_2->SetBinError(25,2.715701);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(3,1.521847);
   hdirt_stack_3->SetBinContent(4,4.742173);
   hdirt_stack_3->SetBinContent(5,4.713671);
   hdirt_stack_3->SetBinContent(6,1.873565);
   hdirt_stack_3->SetBinContent(7,2.238391);
   hdirt_stack_3->SetBinContent(8,1.803788);
   hdirt_stack_3->SetBinContent(9,2.384005);
   hdirt_stack_3->SetBinContent(10,2.162252);
   hdirt_stack_3->SetBinContent(11,1.219358);
   hdirt_stack_3->SetBinContent(12,0.165479);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.5276377);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinError(3,0.641729);
   hdirt_stack_3->SetBinError(4,1.070703);
   hdirt_stack_3->SetBinError(5,1.189537);
   hdirt_stack_3->SetBinError(6,0.7218599);
   hdirt_stack_3->SetBinError(7,0.7402909);
   hdirt_stack_3->SetBinError(8,0.6887231);
   hdirt_stack_3->SetBinError(9,1.119861);
   hdirt_stack_3->SetBinError(10,0.8463251);
   hdirt_stack_3->SetBinError(11,0.6416845);
   hdirt_stack_3->SetBinError(12,0.165479);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.4133105);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(2,0.9303237);
   houtFV_stack_4->SetBinContent(3,10.90557);
   houtFV_stack_4->SetBinContent(4,34.6801);
   houtFV_stack_4->SetBinContent(5,38.71021);
   houtFV_stack_4->SetBinContent(6,40.45748);
   houtFV_stack_4->SetBinContent(7,37.41045);
   houtFV_stack_4->SetBinContent(8,28.51566);
   houtFV_stack_4->SetBinContent(9,27.76036);
   houtFV_stack_4->SetBinContent(10,23.91069);
   houtFV_stack_4->SetBinContent(11,19.92213);
   houtFV_stack_4->SetBinContent(12,10.99691);
   houtFV_stack_4->SetBinContent(13,11.35177);
   houtFV_stack_4->SetBinContent(14,8.941379);
   houtFV_stack_4->SetBinContent(15,6.930779);
   houtFV_stack_4->SetBinContent(16,6.761184);
   houtFV_stack_4->SetBinContent(17,4.733002);
   houtFV_stack_4->SetBinContent(18,1.779373);
   houtFV_stack_4->SetBinContent(19,2.012584);
   houtFV_stack_4->SetBinContent(20,2.342597);
   houtFV_stack_4->SetBinContent(21,1.412273);
   houtFV_stack_4->SetBinContent(22,1.172562);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(24,0.7834804);
   houtFV_stack_4->SetBinContent(25,2.050601);
   houtFV_stack_4->SetBinError(2,0.4814682);
   houtFV_stack_4->SetBinError(3,1.630356);
   houtFV_stack_4->SetBinError(4,2.956366);
   houtFV_stack_4->SetBinError(5,3.182994);
   houtFV_stack_4->SetBinError(6,3.525167);
   houtFV_stack_4->SetBinError(7,3.043836);
   houtFV_stack_4->SetBinError(8,2.621806);
   houtFV_stack_4->SetBinError(9,2.653515);
   houtFV_stack_4->SetBinError(10,2.465256);
   houtFV_stack_4->SetBinError(11,2.256664);
   houtFV_stack_4->SetBinError(12,1.599379);
   houtFV_stack_4->SetBinError(13,1.720592);
   houtFV_stack_4->SetBinError(14,1.501633);
   houtFV_stack_4->SetBinError(15,1.439178);
   houtFV_stack_4->SetBinError(16,1.407081);
   houtFV_stack_4->SetBinError(17,1.106769);
   houtFV_stack_4->SetBinError(18,0.5932497);
   houtFV_stack_4->SetBinError(19,0.7917678);
   houtFV_stack_4->SetBinError(20,0.8097566);
   houtFV_stack_4->SetBinError(21,0.6510715);
   houtFV_stack_4->SetBinError(22,0.5392737);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(24,0.3917439);
   houtFV_stack_4->SetBinError(25,0.7068742);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.283408);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.32459);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.898456);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.449808);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.185922);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.324758);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8366721);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6420361);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4246589);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3503303);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5707061);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.364665);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3716255);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3943225);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3199419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2888274);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3901041);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2390593);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.75481);
   hNCpi0inFVres_stack_7->SetBinContent(4,20.93157);
   hNCpi0inFVres_stack_7->SetBinContent(5,32.56026);
   hNCpi0inFVres_stack_7->SetBinContent(6,39.92737);
   hNCpi0inFVres_stack_7->SetBinContent(7,39.15764);
   hNCpi0inFVres_stack_7->SetBinContent(8,34.07399);
   hNCpi0inFVres_stack_7->SetBinContent(9,27.79996);
   hNCpi0inFVres_stack_7->SetBinContent(10,24.12214);
   hNCpi0inFVres_stack_7->SetBinContent(11,17.02671);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.92115);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.494337);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.772995);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.591482);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.165166);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.620784);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.6546538);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.046254);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.6554859);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.9771723);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.739354);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.307068);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.617544);
   hNCpi0inFVres_stack_7->SetBinError(2,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7083495);
   hNCpi0inFVres_stack_7->SetBinError(4,1.536858);
   hNCpi0inFVres_stack_7->SetBinError(5,1.857847);
   hNCpi0inFVres_stack_7->SetBinError(6,2.040441);
   hNCpi0inFVres_stack_7->SetBinError(7,2.022255);
   hNCpi0inFVres_stack_7->SetBinError(8,1.838313);
   hNCpi0inFVres_stack_7->SetBinError(9,1.697201);
   hNCpi0inFVres_stack_7->SetBinError(10,1.613779);
   hNCpi0inFVres_stack_7->SetBinError(11,1.379911);
   hNCpi0inFVres_stack_7->SetBinError(12,1.102883);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9786981);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7547689);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7772527);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5471458);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5393848);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1962949);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3185193);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2404119);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3978442);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3047819);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2032767);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4507425);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.01769);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.660301);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.089114);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.997364);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.155218);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.404406);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.362639);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.051004);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.699674);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.778638);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.62652);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.608166);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.687626);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.217398);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.087604);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5437177);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.199708);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6420361);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.01869);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.216894);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3378888);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4413612);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7465598);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8128268);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8747889);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9253111);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8786732);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.818513);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6976456);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6288912);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6606827);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5795045);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4453858);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5405264);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2767844);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1480721);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4219004);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2888274);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4076689);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4403318);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(3,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(4,7.151906);
   hCCpi0inFV_stack_10->SetBinContent(5,12.26549);
   hCCpi0inFV_stack_10->SetBinContent(6,16.53797);
   hCCpi0inFV_stack_10->SetBinContent(7,25.75047);
   hCCpi0inFV_stack_10->SetBinContent(8,32.1923);
   hCCpi0inFV_stack_10->SetBinContent(9,38.01403);
   hCCpi0inFV_stack_10->SetBinContent(10,31.47367);
   hCCpi0inFV_stack_10->SetBinContent(11,22.54883);
   hCCpi0inFV_stack_10->SetBinContent(12,22.12704);
   hCCpi0inFV_stack_10->SetBinContent(13,21.35285);
   hCCpi0inFV_stack_10->SetBinContent(14,19.00276);
   hCCpi0inFV_stack_10->SetBinContent(15,15.43653);
   hCCpi0inFV_stack_10->SetBinContent(16,11.50298);
   hCCpi0inFV_stack_10->SetBinContent(17,7.617329);
   hCCpi0inFV_stack_10->SetBinContent(18,5.538538);
   hCCpi0inFV_stack_10->SetBinContent(19,5.325212);
   hCCpi0inFV_stack_10->SetBinContent(20,1.815594);
   hCCpi0inFV_stack_10->SetBinContent(21,3.738708);
   hCCpi0inFV_stack_10->SetBinContent(22,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(23,1.566961);
   hCCpi0inFV_stack_10->SetBinContent(24,2.21944);
   hCCpi0inFV_stack_10->SetBinContent(25,13.12972);
   hCCpi0inFV_stack_10->SetBinError(3,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(4,1.379071);
   hCCpi0inFV_stack_10->SetBinError(5,1.747921);
   hCCpi0inFV_stack_10->SetBinError(6,2.033065);
   hCCpi0inFV_stack_10->SetBinError(7,2.541518);
   hCCpi0inFV_stack_10->SetBinError(8,2.86223);
   hCCpi0inFV_stack_10->SetBinError(9,3.12548);
   hCCpi0inFV_stack_10->SetBinError(10,2.842559);
   hCCpi0inFV_stack_10->SetBinError(11,2.345433);
   hCCpi0inFV_stack_10->SetBinError(12,2.347599);
   hCCpi0inFV_stack_10->SetBinError(13,2.374034);
   hCCpi0inFV_stack_10->SetBinError(14,2.211108);
   hCCpi0inFV_stack_10->SetBinError(15,2.017418);
   hCCpi0inFV_stack_10->SetBinError(16,1.70369);
   hCCpi0inFV_stack_10->SetBinError(17,1.3728);
   hCCpi0inFV_stack_10->SetBinError(18,1.139121);
   hCCpi0inFV_stack_10->SetBinError(19,1.178071);
   hCCpi0inFV_stack_10->SetBinError(20,0.6070992);
   hCCpi0inFV_stack_10->SetBinError(21,0.9668886);
   hCCpi0inFV_stack_10->SetBinError(22,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(23,0.5540095);
   hCCpi0inFV_stack_10->SetBinError(24,0.8195922);
   hCCpi0inFV_stack_10->SetBinError(25,1.872373);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.1950248);
   hNCinFV_stack_11->SetBinContent(4,2.00411);
   hNCinFV_stack_11->SetBinContent(5,4.003148);
   hNCinFV_stack_11->SetBinContent(6,5.716952);
   hNCinFV_stack_11->SetBinContent(7,6.445489);
   hNCinFV_stack_11->SetBinContent(8,8.307827);
   hNCinFV_stack_11->SetBinContent(9,8.646314);
   hNCinFV_stack_11->SetBinContent(10,4.792782);
   hNCinFV_stack_11->SetBinContent(11,6.338983);
   hNCinFV_stack_11->SetBinContent(12,3.622633);
   hNCinFV_stack_11->SetBinContent(13,4.196482);
   hNCinFV_stack_11->SetBinContent(14,3.032487);
   hNCinFV_stack_11->SetBinContent(15,2.636135);
   hNCinFV_stack_11->SetBinContent(16,3.606336);
   hNCinFV_stack_11->SetBinContent(17,2.002419);
   hNCinFV_stack_11->SetBinContent(18,1.320373);
   hNCinFV_stack_11->SetBinContent(19,1.752451);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,1.125349);
   hNCinFV_stack_11->SetBinContent(22,1.270501);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(24,0.3917402);
   hNCinFV_stack_11->SetBinContent(25,1.463836);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.1950249);
   hNCinFV_stack_11->SetBinError(4,0.7352871);
   hNCinFV_stack_11->SetBinError(5,1.038897);
   hNCinFV_stack_11->SetBinError(6,1.210199);
   hNCinFV_stack_11->SetBinError(7,1.286744);
   hNCinFV_stack_11->SetBinError(8,1.456021);
   hNCinFV_stack_11->SetBinError(9,1.49501);
   hNCinFV_stack_11->SetBinError(10,1.01823);
   hNCinFV_stack_11->SetBinError(11,1.316193);
   hNCinFV_stack_11->SetBinError(12,0.8992132);
   hNCinFV_stack_11->SetBinError(13,1.056731);
   hNCinFV_stack_11->SetBinError(14,0.832162);
   hNCinFV_stack_11->SetBinError(15,0.810528);
   hNCinFV_stack_11->SetBinError(16,1.000295);
   hNCinFV_stack_11->SetBinError(17,0.7348366);
   hNCinFV_stack_11->SetBinError(18,0.5548703);
   hNCinFV_stack_11->SetBinError(19,0.7345848);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.5194673);
   hNCinFV_stack_11->SetBinError(22,0.5895188);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(24,0.2770047);
   hNCinFV_stack_11->SetBinError(25,0.620407);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,1.539467);
   hnumuCCinFV_stack_12->SetBinContent(4,14.50391);
   hnumuCCinFV_stack_12->SetBinContent(5,17.71366);
   hnumuCCinFV_stack_12->SetBinContent(6,22.99593);
   hnumuCCinFV_stack_12->SetBinContent(7,23.37568);
   hnumuCCinFV_stack_12->SetBinContent(8,18.92807);
   hnumuCCinFV_stack_12->SetBinContent(9,17.65076);
   hnumuCCinFV_stack_12->SetBinContent(10,18.63982);
   hnumuCCinFV_stack_12->SetBinContent(11,10.03003);
   hnumuCCinFV_stack_12->SetBinContent(12,10.00502);
   hnumuCCinFV_stack_12->SetBinContent(13,10.07474);
   hnumuCCinFV_stack_12->SetBinContent(14,7.793023);
   hnumuCCinFV_stack_12->SetBinContent(15,6.272972);
   hnumuCCinFV_stack_12->SetBinContent(16,4.257425);
   hnumuCCinFV_stack_12->SetBinContent(17,5.959409);
   hnumuCCinFV_stack_12->SetBinContent(18,3.157461);
   hnumuCCinFV_stack_12->SetBinContent(19,3.534454);
   hnumuCCinFV_stack_12->SetBinContent(20,1.573495);
   hnumuCCinFV_stack_12->SetBinContent(21,1.608988);
   hnumuCCinFV_stack_12->SetBinContent(22,2.246009);
   hnumuCCinFV_stack_12->SetBinContent(23,1.515398);
   hnumuCCinFV_stack_12->SetBinContent(24,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(25,10.05144);
   hnumuCCinFV_stack_12->SetBinError(3,0.7342633);
   hnumuCCinFV_stack_12->SetBinError(4,2.433151);
   hnumuCCinFV_stack_12->SetBinError(5,2.854851);
   hnumuCCinFV_stack_12->SetBinError(6,2.799256);
   hnumuCCinFV_stack_12->SetBinError(7,2.730891);
   hnumuCCinFV_stack_12->SetBinError(8,3.193851);
   hnumuCCinFV_stack_12->SetBinError(9,2.442712);
   hnumuCCinFV_stack_12->SetBinError(10,2.290795);
   hnumuCCinFV_stack_12->SetBinError(11,1.597476);
   hnumuCCinFV_stack_12->SetBinError(12,1.840178);
   hnumuCCinFV_stack_12->SetBinError(13,1.606642);
   hnumuCCinFV_stack_12->SetBinError(14,1.489892);
   hnumuCCinFV_stack_12->SetBinError(15,1.314391);
   hnumuCCinFV_stack_12->SetBinError(16,1.097175);
   hnumuCCinFV_stack_12->SetBinError(17,1.63339);
   hnumuCCinFV_stack_12->SetBinError(18,0.9158451);
   hnumuCCinFV_stack_12->SetBinError(19,1.015229);
   hnumuCCinFV_stack_12->SetBinError(20,0.6098784);
   hnumuCCinFV_stack_12->SetBinError(21,0.6801404);
   hnumuCCinFV_stack_12->SetBinError(22,0.7743738);
   hnumuCCinFV_stack_12->SetBinError(23,0.588146);
   hnumuCCinFV_stack_12->SetBinError(24,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(25,1.61463);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.7868615);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,1.72261);
   hnueCCinFV_stack_13->SetBinContent(15,0.8824278);
   hnueCCinFV_stack_13->SetBinContent(16,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(18,0.5985879);
   hnueCCinFV_stack_13->SetBinContent(19,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,3.467664);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.3934307);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,1.577117);
   hnueCCinFV_stack_13->SetBinError(15,0.562594);
   hnueCCinFV_stack_13->SetBinError(16,0.3152389);
   hnueCCinFV_stack_13->SetBinError(18,0.4334685);
   hnueCCinFV_stack_13->SetBinError(19,0.3326517);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.7431478);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,1.419187);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__8->SetBinContent(2,1.604554);
   hmcerror__8->SetBinContent(3,34.58395);
   hmcerror__8->SetBinContent(4,140.2724);
   hmcerror__8->SetBinContent(5,155.6812);
   hmcerror__8->SetBinContent(6,182.9547);
   hmcerror__8->SetBinContent(7,173.3102);
   hmcerror__8->SetBinContent(8,155.0406);
   hmcerror__8->SetBinContent(9,152.8119);
   hmcerror__8->SetBinContent(10,136.2993);
   hmcerror__8->SetBinContent(11,97.88717);
   hmcerror__8->SetBinContent(12,78.53808);
   hmcerror__8->SetBinContent(13,73.04848);
   hmcerror__8->SetBinContent(14,58.36726);
   hmcerror__8->SetBinContent(15,47.02128);
   hmcerror__8->SetBinContent(16,37.18943);
   hmcerror__8->SetBinContent(17,27.81329);
   hmcerror__8->SetBinContent(18,18.16);
   hmcerror__8->SetBinContent(19,18.81223);
   hmcerror__8->SetBinContent(20,9.451085);
   hmcerror__8->SetBinContent(21,12.91088);
   hmcerror__8->SetBinContent(22,10.4876);
   hmcerror__8->SetBinContent(23,5.711776);
   hmcerror__8->SetBinContent(24,6.832601);
   hmcerror__8->SetBinContent(25,50.26558);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,8.337623);
   hmcerror__8->SetBinError(3,17.11365);
   hmcerror__8->SetBinError(4,31.84457);
   hmcerror__8->SetBinError(5,37.01373);
   hmcerror__8->SetBinError(6,47.3494);
   hmcerror__8->SetBinError(7,47.98884);
   hmcerror__8->SetBinError(8,45.98337);
   hmcerror__8->SetBinError(9,44.3292);
   hmcerror__8->SetBinError(10,41.38449);
   hmcerror__8->SetBinError(11,31.48105);
   hmcerror__8->SetBinError(12,25.78969);
   hmcerror__8->SetBinError(13,24.06252);
   hmcerror__8->SetBinError(14,37.86189);
   hmcerror__8->SetBinError(15,21.96053);
   hmcerror__8->SetBinError(16,17.51467);
   hmcerror__8->SetBinError(17,15.76037);
   hmcerror__8->SetBinError(18,9.893149);
   hmcerror__8->SetBinError(19,11.99239);
   hmcerror__8->SetBinError(20,7.534598);
   hmcerror__8->SetBinError(21,20.56639);
   hmcerror__8->SetBinError(22,12.53404);
   hmcerror__8->SetBinError(23,6.516297);
   hmcerror__8->SetBinError(24,7.096186);
   hmcerror__8->SetBinError(25,17.97124);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[24] = {
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
   Double_t _fy3009[24] = {
   0,
   1,
   36,
   128,
   159,
   155,
   174,
   153,
   132,
   113,
   94,
   58,
   49,
   46,
   29,
   23,
   22,
   15,
   13,
   8,
   14,
   7,
   6,
   2};
   Double_t _felx3009[24] = {
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
   Double_t _fely3009[24] = {
   0,
   1,
   6.1381,
   11.31371,
   12.60952,
   12.4499,
   13.19091,
   12.36932,
   11.48913,
   10.63015,
   9.8173,
   7.7446,
   7.1318,
   6.9153,
   5.5285,
   4.9457,
   4.8417,
   4.0385,
   3.77763,
   3.0307,
   3.9102,
   2.85954,
   2.67925,
   2};
   Double_t _fehx3009[24] = {
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
   Double_t _fehy3009[24] = {
   1.1478,
   1.35971,
   5.9318,
   11.31371,
   12.60952,
   12.4499,
   13.19091,
   12.36932,
   11.48913,
   10.63015,
   9.616,
   7.5415,
   6.9277,
   6.7108,
   5.3201,
   4.7346,
   4.6299,
   3.8197,
   3.5552,
   2.7896,
   3.6898,
   2.61053,
   2.41858,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1760);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(205.91);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.17","h");
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
   entry=leg->AddEntry("","BNB Data, 1437.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.1","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 273.3","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 323.0","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.1","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  283.5","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  69.1","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 306.0","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 72.0","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 204.3","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.0","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[24] = {
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
   Double_t _fy3010[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[24] = {
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
   Double_t _fely3010[24] = {
   0,
   5.196223,
   0.4948437,
   0.2270195,
   0.2377534,
   0.258804,
   0.2768957,
   0.2965891,
   0.2900901,
   0.3036296,
   0.3216055,
   0.3283718,
   0.3294048,
   0.6486837,
   0.4670339,
   0.4709583,
   0.5666487,
   0.544777,
   0.6374785,
   0.7972204,
   1.59295,
   1.19513,
   1.140853,
   1.038578};
   Double_t _fehx3010[24] = {
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
   Double_t _fehy3010[24] = {
   0,
   5.196223,
   0.4948437,
   0.2270195,
   0.2377534,
   0.258804,
   0.2768957,
   0.2965891,
   0.2900901,
   0.3036296,
   0.3216055,
   0.3283718,
   0.3294048,
   0.6486837,
   0.4670339,
   0.4709583,
   0.5666487,
   0.544777,
   0.6374785,
   0.7972204,
   1.59295,
   1.19513,
   1.140853,
   1.038578};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1760);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[24] = {
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
   Double_t _fy3011[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[24] = {
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
   Double_t _fely3011[24] = {
   0,
   0.5338432,
   0.1861481,
   0.1520832,
   0.1685904,
   0.1860641,
   0.2198071,
   0.2396997,
   0.240124,
   0.2211931,
   0.2319474,
   0.2325119,
   0.2246588,
   0.225026,
   0.217064,
   0.212984,
   0.260522,
   0.2176996,
   0.2217781,
   0.253056,
   0.235551,
   0.2723797,
   0.4383617,
   0.262092};
   Double_t _fehx3011[24] = {
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
   Double_t _fehy3011[24] = {
   0,
   0.5338432,
   0.1861481,
   0.1520832,
   0.1685904,
   0.1860641,
   0.2198071,
   0.2396997,
   0.240124,
   0.2211931,
   0.2319474,
   0.2325119,
   0.2246588,
   0.225026,
   0.217064,
   0.212984,
   0.260522,
   0.2176996,
   0.2217781,
   0.253056,
   0.235551,
   0.2723797,
   0.4383617,
   0.262092};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1760);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[24] = {
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
   Double_t _fy3012[24] = {
   10,
   0.623226,
   1.040945,
   0.9125101,
   1.021318,
   0.8472044,
   1.00398,
   0.986838,
   0.8638073,
   0.8290579,
   0.9602893,
   0.7384953,
   0.6707874,
   0.788113,
   0.616742,
   0.6184553,
   0.7909887,
   0.8259913,
   0.6910398,
   0.8464637,
   1.084357,
   0.6674548,
   1.050461,
   0.2927143};
   Double_t _felx3012[24] = {
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
   Double_t _fely3012[24] = {
   0,
   0.623226,
   0.1774841,
   0.08065526,
   0.08099579,
   0.0680491,
   0.07611156,
   0.07978112,
   0.07518478,
   0.07799121,
   0.100292,
   0.09860949,
   0.09763106,
   0.1184791,
   0.1175744,
   0.1329867,
   0.1740786,
   0.2223844,
   0.2008071,
   0.3206722,
   0.3028608,
   0.2726591,
   0.4690747,
   0.2927143};
   Double_t _fehx3012[24] = {
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
   Double_t _fehy3012[24] = {
   0,
   0.8474066,
   0.1715189,
   0.08065526,
   0.08099579,
   0.0680491,
   0.07611156,
   0.07978112,
   0.07518478,
   0.07799121,
   0.09823555,
   0.09602349,
   0.09483702,
   0.1149754,
   0.1131424,
   0.1273104,
   0.1664636,
   0.2103359,
   0.1889835,
   0.2951619,
   0.2857899,
   0.2489158,
   0.4234375,
   0.2223414};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1760);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(11);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_nc_transferred_energy_all",24,0,1600);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Jan 13 22:27:18 2023) by ROOT version 6.26/00
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
   pad1->Range(-184.6154,-42.94,1353.846,4748.26);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__1->SetBinContent(1,825.6613);
   hmc__1->SetBinContent(2,1859.688);
   hmc__1->SetBinContent(3,1559.677);
   hmc__1->SetBinContent(4,1063.24);
   hmc__1->SetBinContent(5,720.0098);
   hmc__1->SetBinContent(6,440.3357);
   hmc__1->SetBinContent(7,229.0091);
   hmc__1->SetBinContent(8,147.0859);
   hmc__1->SetBinContent(9,115.9428);
   hmc__1->SetBinContent(10,84.2257);
   hmc__1->SetBinContent(11,75.6681);
   hmc__1->SetBinContent(12,67.79982);
   hmc__1->SetBinContent(13,429.4404);
   hmc__1->SetBinError(1,179.5954);
   hmc__1->SetBinError(2,419.4591);
   hmc__1->SetBinError(3,382.2816);
   hmc__1->SetBinError(4,260.767);
   hmc__1->SetBinError(5,185.3079);
   hmc__1->SetBinError(6,105.9383);
   hmc__1->SetBinError(7,57.01767);
   hmc__1->SetBinError(8,40.68635);
   hmc__1->SetBinError(9,36.68216);
   hmc__1->SetBinError(10,26.28997);
   hmc__1->SetBinError(11,31.90224);
   hmc__1->SetBinError(12,24.46848);
   hmc__1->SetBinError(13,105.2362);
   hmc__1->SetMinimum(-42.94);
   hmc__1->SetMaximum(4508.7);
   hmc__1->SetEntries(7497.432);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",12,0,1200);
   hs1_stack_1->SetMinimum(-1.103704e-08);
   hs1_stack_1->SetMaximum(1952.672);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,33.63667);
   hbadmatch_stack_1->SetBinContent(2,37.41262);
   hbadmatch_stack_1->SetBinContent(3,38.03984);
   hbadmatch_stack_1->SetBinContent(4,21.52677);
   hbadmatch_stack_1->SetBinContent(5,17.85567);
   hbadmatch_stack_1->SetBinContent(6,7.480026);
   hbadmatch_stack_1->SetBinContent(7,3.24717);
   hbadmatch_stack_1->SetBinContent(8,2.24943);
   hbadmatch_stack_1->SetBinContent(9,5.078882);
   hbadmatch_stack_1->SetBinContent(10,2.977704);
   hbadmatch_stack_1->SetBinContent(12,0.9925678);
   hbadmatch_stack_1->SetBinContent(13,5.114728);
   hbadmatch_stack_1->SetBinError(1,7.034117);
   hbadmatch_stack_1->SetBinError(2,8.062582);
   hbadmatch_stack_1->SetBinError(3,6.423092);
   hbadmatch_stack_1->SetBinError(4,4.707896);
   hbadmatch_stack_1->SetBinError(5,6.530718);
   hbadmatch_stack_1->SetBinError(6,2.836693);
   hbadmatch_stack_1->SetBinError(7,1.887621);
   hbadmatch_stack_1->SetBinError(8,1.601529);
   hbadmatch_stack_1->SetBinError(9,2.273715);
   hbadmatch_stack_1->SetBinError(10,1.719178);
   hbadmatch_stack_1->SetBinError(12,0.9925678);
   hbadmatch_stack_1->SetBinError(13,2.291407);
   hbadmatch_stack_1->SetEntries(159);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,127.178);
   houtFV_stack_4->SetBinContent(2,186.431);
   houtFV_stack_4->SetBinContent(3,139.0067);
   houtFV_stack_4->SetBinContent(4,99.78196);
   houtFV_stack_4->SetBinContent(5,71.15849);
   houtFV_stack_4->SetBinContent(6,44.12319);
   houtFV_stack_4->SetBinContent(7,41.02583);
   houtFV_stack_4->SetBinContent(8,19.30238);
   houtFV_stack_4->SetBinContent(9,22.0786);
   houtFV_stack_4->SetBinContent(10,12.11083);
   houtFV_stack_4->SetBinContent(11,14.16168);
   houtFV_stack_4->SetBinContent(12,12.90338);
   houtFV_stack_4->SetBinContent(13,61.56926);
   houtFV_stack_4->SetBinError(1,11.24179);
   houtFV_stack_4->SetBinError(2,13.73422);
   houtFV_stack_4->SetBinError(3,11.85524);
   houtFV_stack_4->SetBinError(4,9.9853);
   houtFV_stack_4->SetBinError(5,8.453928);
   houtFV_stack_4->SetBinError(6,6.659599);
   houtFV_stack_4->SetBinError(7,6.415471);
   houtFV_stack_4->SetBinError(8,4.438702);
   houtFV_stack_4->SetBinError(9,4.713113);
   houtFV_stack_4->SetBinError(10,3.501336);
   houtFV_stack_4->SetBinError(11,3.793519);
   houtFV_stack_4->SetBinError(12,3.578754);
   houtFV_stack_4->SetBinError(13,7.904055);
   houtFV_stack_4->SetEntries(852);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.915298);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,17.3353);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,23.27884);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,23.27884);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,20.80236);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.915298);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.962355);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.971766);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.467061);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,9.410593);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.101356);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.930201);
   hNCpi0inFVcoh_stack_5->SetBinError(3,3.395567);
   hNCpi0inFVcoh_stack_5->SetBinError(4,3.395567);
   hNCpi0inFVcoh_stack_5->SetBinError(5,3.209874);
   hNCpi0inFVcoh_stack_5->SetBinError(6,2.101356);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.400904);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.213219);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.310426);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(13,2.158938);
   hNCpi0inFVcoh_stack_5->SetEntries(261);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.981178);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.448238);
   hNCpi0inFVqe_stack_6->SetBinContent(3,5.943532);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.962355);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.485883);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinError(2,1.642706);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.71575);
   hNCpi0inFVqe_stack_6->SetBinError(4,1.400904);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.857875);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4952944);
   hNCpi0inFVqe_stack_6->SetEntries(46);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,283.3084);
   hNCpi0inFVres_stack_7->SetBinContent(2,805.4096);
   hNCpi0inFVres_stack_7->SetBinContent(3,723.6251);
   hNCpi0inFVres_stack_7->SetBinContent(4,507.4108);
   hNCpi0inFVres_stack_7->SetBinContent(5,287.7661);
   hNCpi0inFVres_stack_7->SetBinContent(6,166.4189);
   hNCpi0inFVres_stack_7->SetBinContent(7,76.77063);
   hNCpi0inFVres_stack_7->SetBinContent(8,41.10943);
   hNCpi0inFVres_stack_7->SetBinContent(9,40.61414);
   hNCpi0inFVres_stack_7->SetBinContent(10,32.19413);
   hNCpi0inFVres_stack_7->SetBinContent(11,25.26001);
   hNCpi0inFVres_stack_7->SetBinContent(12,16.84001);
   hNCpi0inFVres_stack_7->SetBinContent(13,132.2436);
   hNCpi0inFVres_stack_7->SetBinError(1,11.84572);
   hNCpi0inFVres_stack_7->SetBinError(2,19.9737);
   hNCpi0inFVres_stack_7->SetBinError(3,18.93165);
   hNCpi0inFVres_stack_7->SetBinError(4,15.85825);
   hNCpi0inFVres_stack_7->SetBinError(5,11.93855);
   hNCpi0inFVres_stack_7->SetBinError(6,9.078896);
   hNCpi0inFVres_stack_7->SetBinError(7,6.166365);
   hNCpi0inFVres_stack_7->SetBinError(8,4.512347);
   hNCpi0inFVres_stack_7->SetBinError(9,4.485081);
   hNCpi0inFVres_stack_7->SetBinError(10,3.993191);
   hNCpi0inFVres_stack_7->SetBinError(11,3.537109);
   hNCpi0inFVres_stack_7->SetBinError(12,2.888038);
   hNCpi0inFVres_stack_7->SetBinError(13,8.093177);
   hNCpi0inFVres_stack_7->SetEntries(6337);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,68.35062);
   hNCpi0inFVdis_stack_8->SetBinContent(2,179.2966);
   hNCpi0inFVdis_stack_8->SetBinContent(3,114.9083);
   hNCpi0inFVdis_stack_8->SetBinContent(4,93.11534);
   hNCpi0inFVdis_stack_8->SetBinContent(5,56.46356);
   hNCpi0inFVdis_stack_8->SetBinContent(6,36.65178);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.30707);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.8306);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.39177);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.448238);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.457649);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.448238);
   hNCpi0inFVdis_stack_8->SetBinContent(13,33.68002);
   hNCpi0inFVdis_stack_8->SetBinError(1,5.818392);
   hNCpi0inFVdis_stack_8->SetBinError(2,9.423618);
   hNCpi0inFVdis_stack_8->SetBinError(3,7.544099);
   hNCpi0inFVdis_stack_8->SetBinError(4,6.791134);
   hNCpi0inFVdis_stack_8->SetBinError(5,5.288297);
   hNCpi0inFVdis_stack_8->SetBinError(6,4.260683);
   hNCpi0inFVdis_stack_8->SetBinError(7,3.171431);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.971766);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.375348);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.642706);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.485883);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.642706);
   hNCpi0inFVdis_stack_8->SetBinError(13,4.084302);
   hNCpi0inFVdis_stack_8->SetEntries(1307);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.4952944);
   hNCpi0inFVmec_stack_9->SetEntries(2);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,152.9182);
   hCCpi0inFV_stack_10->SetBinContent(2,334.3797);
   hCCpi0inFV_stack_10->SetBinContent(3,253.0429);
   hCCpi0inFV_stack_10->SetBinContent(4,167.4028);
   hCCpi0inFV_stack_10->SetBinContent(5,126.3191);
   hCCpi0inFV_stack_10->SetBinContent(6,88.88013);
   hCCpi0inFV_stack_10->SetBinContent(7,31.76217);
   hCCpi0inFV_stack_10->SetBinContent(8,19.85136);
   hCCpi0inFV_stack_10->SetBinContent(9,19.85136);
   hCCpi0inFV_stack_10->SetBinContent(10,7.940543);
   hCCpi0inFV_stack_10->SetBinContent(11,11.14163);
   hCCpi0inFV_stack_10->SetBinContent(12,13.09091);
   hCCpi0inFV_stack_10->SetBinContent(13,77.05029);
   hCCpi0inFV_stack_10->SetBinError(1,12.37265);
   hCCpi0inFV_stack_10->SetBinError(2,18.2996);
   hCCpi0inFV_stack_10->SetBinError(3,15.88281);
   hCCpi0inFV_stack_10->SetBinError(4,12.92106);
   hCCpi0inFV_stack_10->SetBinError(5,11.21207);
   hCCpi0inFV_stack_10->SetBinError(6,9.426659);
   hCCpi0inFV_stack_10->SetBinError(7,5.614812);
   hCCpi0inFV_stack_10->SetBinError(8,4.438898);
   hCCpi0inFV_stack_10->SetBinError(9,4.438898);
   hCCpi0inFV_stack_10->SetBinError(10,2.807406);
   hCCpi0inFV_stack_10->SetBinError(11,3.366072);
   hCCpi0inFV_stack_10->SetBinError(12,3.635233);
   hCCpi0inFV_stack_10->SetBinError(13,8.78791);
   hCCpi0inFV_stack_10->SetEntries(1309);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,82.38313);
   hNCinFV_stack_11->SetBinContent(2,133.9967);
   hNCinFV_stack_11->SetBinContent(3,106.2048);
   hNCinFV_stack_11->SetBinContent(4,64.51691);
   hNCinFV_stack_11->SetBinContent(5,53.59866);
   hNCinFV_stack_11->SetBinContent(6,35.73244);
   hNCinFV_stack_11->SetBinContent(7,23.82163);
   hNCinFV_stack_11->SetBinContent(8,15.88109);
   hNCinFV_stack_11->SetBinContent(9,5.955407);
   hNCinFV_stack_11->SetBinContent(10,7.940543);
   hNCinFV_stack_11->SetBinContent(11,6.947975);
   hNCinFV_stack_11->SetBinContent(12,7.940543);
   hNCinFV_stack_11->SetBinContent(13,36.72501);
   hNCinFV_stack_11->SetBinError(1,9.042723);
   hNCinFV_stack_11->SetBinError(2,11.5326);
   hNCinFV_stack_11->SetBinError(3,10.2672);
   hNCinFV_stack_11->SetBinError(4,8.002338);
   hNCinFV_stack_11->SetBinError(5,7.293854);
   hNCinFV_stack_11->SetBinError(6,5.955407);
   hNCinFV_stack_11->SetBinError(7,4.86257);
   hNCinFV_stack_11->SetBinError(8,3.970271);
   hNCinFV_stack_11->SetBinError(9,2.431285);
   hNCinFV_stack_11->SetBinError(10,2.807406);
   hNCinFV_stack_11->SetBinError(11,2.626088);
   hNCinFV_stack_11->SetBinError(12,2.807406);
   hNCinFV_stack_11->SetBinError(13,6.037555);
   hNCinFV_stack_11->SetEntries(586);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,63.04815);
   hnumuCCinFV_stack_12->SetBinContent(2,152.8573);
   hnumuCCinFV_stack_12->SetBinContent(3,151.1147);
   hnumuCCinFV_stack_12->SetBinContent(4,77.2813);
   hnumuCCinFV_stack_12->SetBinContent(5,81.79655);
   hnumuCCinFV_stack_12->SetBinContent(6,51.14332);
   hnumuCCinFV_stack_12->SetBinContent(7,25.63181);
   hnumuCCinFV_stack_12->SetBinContent(8,25.61562);
   hnumuCCinFV_stack_12->SetBinContent(9,6.512998);
   hnumuCCinFV_stack_12->SetBinContent(10,10.04279);
   hnumuCCinFV_stack_12->SetBinContent(11,10.2321);
   hnumuCCinFV_stack_12->SetBinContent(12,6.619826);
   hnumuCCinFV_stack_12->SetBinContent(13,57.93618);
   hnumuCCinFV_stack_12->SetBinError(1,9.200181);
   hnumuCCinFV_stack_12->SetBinError(2,15.41021);
   hnumuCCinFV_stack_12->SetBinError(3,17.25176);
   hnumuCCinFV_stack_12->SetBinError(4,9.070606);
   hnumuCCinFV_stack_12->SetBinError(5,11.2452);
   hnumuCCinFV_stack_12->SetBinError(6,7.391035);
   hnumuCCinFV_stack_12->SetBinError(7,8.044926);
   hnumuCCinFV_stack_12->SetBinError(8,5.913055);
   hnumuCCinFV_stack_12->SetBinError(9,2.678505);
   hnumuCCinFV_stack_12->SetBinError(10,3.416672);
   hnumuCCinFV_stack_12->SetBinError(11,3.447999);
   hnumuCCinFV_stack_12->SetBinError(12,2.719299);
   hnumuCCinFV_stack_12->SetBinError(13,9.125021);
   hnumuCCinFV_stack_12->SetEntries(639);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,3.446364);
   hnueCCinFV_stack_13->SetBinContent(2,6.625311);
   hnueCCinFV_stack_13->SetBinContent(3,4.512239);
   hnueCCinFV_stack_13->SetBinContent(4,4.962839);
   hnueCCinFV_stack_13->SetBinContent(5,2.763437);
   hnueCCinFV_stack_13->SetBinContent(7,1.985136);
   hnueCCinFV_stack_13->SetBinContent(8,2.27427);
   hnueCCinFV_stack_13->SetBinContent(9,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(10,3.094444);
   hnueCCinFV_stack_13->SetBinContent(12,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,15.21537);
   hnueCCinFV_stack_13->SetBinError(1,1.992625);
   hnueCCinFV_stack_13->SetBinError(2,2.773043);
   hnueCCinFV_stack_13->SetBinError(3,2.272378);
   hnueCCinFV_stack_13->SetBinError(4,2.219449);
   hnueCCinFV_stack_13->SetBinError(5,1.605034);
   hnueCCinFV_stack_13->SetBinError(7,1.403703);
   hnueCCinFV_stack_13->SetBinError(8,1.621096);
   hnueCCinFV_stack_13->SetBinError(9,0.9925678);
   hnueCCinFV_stack_13->SetBinError(10,1.789119);
   hnueCCinFV_stack_13->SetBinError(12,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,8.024556);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__2->SetBinContent(1,825.6613);
   hmcerror__2->SetBinContent(2,1859.688);
   hmcerror__2->SetBinContent(3,1559.677);
   hmcerror__2->SetBinContent(4,1063.24);
   hmcerror__2->SetBinContent(5,720.0098);
   hmcerror__2->SetBinContent(6,440.3357);
   hmcerror__2->SetBinContent(7,229.0091);
   hmcerror__2->SetBinContent(8,147.0859);
   hmcerror__2->SetBinContent(9,115.9428);
   hmcerror__2->SetBinContent(10,84.2257);
   hmcerror__2->SetBinContent(11,75.6681);
   hmcerror__2->SetBinContent(12,67.79982);
   hmcerror__2->SetBinContent(13,429.4404);
   hmcerror__2->SetBinError(1,179.5954);
   hmcerror__2->SetBinError(2,419.4591);
   hmcerror__2->SetBinError(3,382.2816);
   hmcerror__2->SetBinError(4,260.767);
   hmcerror__2->SetBinError(5,185.3079);
   hmcerror__2->SetBinError(6,105.9383);
   hmcerror__2->SetBinError(7,57.01767);
   hmcerror__2->SetBinError(8,40.68635);
   hmcerror__2->SetBinError(9,36.68216);
   hmcerror__2->SetBinError(10,26.28997);
   hmcerror__2->SetBinError(11,31.90224);
   hmcerror__2->SetBinError(12,24.46848);
   hmcerror__2->SetBinError(13,105.2362);
   hmcerror__2->SetEntries(7497.432);

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
   
   Double_t _fx3001[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3001[12] = {
   1086,
   2147,
   2015,
   1512,
   881,
   575,
   326,
   189,
   126,
   111,
   60,
   67};
   Double_t _felx3001[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3001[12] = {
   32.95451,
   46.33573,
   44.88875,
   38.88444,
   29.68164,
   23.97916,
   18.05547,
   13.74773,
   11.22497,
   10.53565,
   7.8743,
   8.3119};
   Double_t _fehx3001[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3001[12] = {
   32.95451,
   46.33573,
   44.88875,
   38.88444,
   29.68164,
   23.97916,
   18.05547,
   13.74773,
   11.22497,
   10.53565,
   7.6713,
   8.1094};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(46.91313);
   Graph_Graph3001->SetMaximum(2407.457);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.27#pm0.28","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 7.24e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 9095.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 170.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 789.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  119.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  22.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  3006.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  613.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1226.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 544.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 661.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3002[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3002[12] = {
   1,
   1,
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
   Double_t _felx3002[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3002[12] = {
   0.217517,
   0.2255535,
   0.2451031,
   0.2452569,
   0.2573686,
   0.2405854,
   0.2489756,
   0.2766162,
   0.3163816,
   0.3121371,
   0.4216075,
   0.3608929};
   Double_t _fehx3002[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3002[12] = {
   0.217517,
   0.2255535,
   0.2451031,
   0.2452569,
   0.2573686,
   0.2405854,
   0.2489756,
   0.2766162,
   0.3163816,
   0.3121371,
   0.4216075,
   0.3608929};
   grae = new TGraphAsymmErrors(12,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3003[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3003[12] = {
   1,
   1,
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
   Double_t _felx3003[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3003[12] = {
   0.199606,
   0.2211911,
   0.2418128,
   0.2387094,
   0.227793,
   0.2224143,
   0.2157326,
   0.2142633,
   0.2332412,
   0.2275753,
   0.2199793,
   0.2232524};
   Double_t _fehx3003[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3003[12] = {
   0.199606,
   0.2211911,
   0.2418128,
   0.2387094,
   0.227793,
   0.2224143,
   0.2157326,
   0.2142633,
   0.2332412,
   0.2275753,
   0.2199793,
   0.2232524};
   grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
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
   
   Double_t _fx3004[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3004[12] = {
   1.315309,
   1.154495,
   1.291934,
   1.422068,
   1.223594,
   1.305822,
   1.423524,
   1.284963,
   1.086743,
   1.317888,
   0.7929365,
   0.9882032};
   Double_t _felx3004[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3004[12] = {
   0.03991287,
   0.02491587,
   0.0287808,
   0.03657165,
   0.04122394,
   0.05445654,
   0.07884172,
   0.09346731,
   0.09681476,
   0.1250883,
   0.1040637,
   0.1225947};
   Double_t _fehx3004[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3004[12] = {
   0.03991287,
   0.02491587,
   0.0287808,
   0.03657165,
   0.04122394,
   0.05445654,
   0.07884172,
   0.09346731,
   0.09681476,
   0.1250883,
   0.1013809,
   0.119608};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.6075236);
   Graph_Graph3004->SetMaximum(1.583715);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_4_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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

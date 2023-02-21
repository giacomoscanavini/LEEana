#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Jan 13 22:27:19 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-17.5,1353.846,1935.132);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__16->SetBinContent(1,361.5818);
   hmc__16->SetBinContent(2,667.9218);
   hmc__16->SetBinContent(3,610.4115);
   hmc__16->SetBinContent(4,428.0194);
   hmc__16->SetBinContent(5,284.114);
   hmc__16->SetBinContent(6,181.9602);
   hmc__16->SetBinContent(7,88.2297);
   hmc__16->SetBinContent(8,58.3399);
   hmc__16->SetBinContent(9,55.2752);
   hmc__16->SetBinContent(10,32.71912);
   hmc__16->SetBinContent(11,32.7112);
   hmc__16->SetBinContent(12,27.11342);
   hmc__16->SetBinContent(13,169.5554);
   hmc__16->SetBinError(1,96.09256);
   hmc__16->SetBinError(2,165.3901);
   hmc__16->SetBinError(3,151.8106);
   hmc__16->SetBinError(4,115.3101);
   hmc__16->SetBinError(5,82.12285);
   hmc__16->SetBinError(6,49.1018);
   hmc__16->SetBinError(7,27.44278);
   hmc__16->SetBinError(8,19.70921);
   hmc__16->SetBinError(9,25.50171);
   hmc__16->SetBinError(10,13.43816);
   hmc__16->SetBinError(11,17.15691);
   hmc__16->SetBinError(12,14.72775);
   hmc__16->SetBinError(13,53.17089);
   hmc__16->SetMinimum(-17.5);
   hmc__16->SetMaximum(1837.5);
   hmc__16->SetEntries(2960.461);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",12,0,1200);
   hs6_stack_6->SetMinimum(-1.103704e-08);
   hs6_stack_6->SetMaximum(701.3178);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,14.45391);
   hbadmatch_stack_1->SetBinContent(2,16.45594);
   hbadmatch_stack_1->SetBinContent(3,18.42616);
   hbadmatch_stack_1->SetBinContent(4,7.160439);
   hbadmatch_stack_1->SetBinContent(5,2.977704);
   hbadmatch_stack_1->SetBinContent(6,2.15061);
   hbadmatch_stack_1->SetBinContent(9,1.985136);
   hbadmatch_stack_1->SetBinContent(12,0.9925678);
   hbadmatch_stack_1->SetBinContent(13,4.12216);
   hbadmatch_stack_1->SetBinError(1,5.368468);
   hbadmatch_stack_1->SetBinError(2,4.125365);
   hbadmatch_stack_1->SetBinError(3,4.553846);
   hbadmatch_stack_1->SetBinError(4,2.713531);
   hbadmatch_stack_1->SetBinError(5,1.719178);
   hbadmatch_stack_1->SetBinError(6,1.525205);
   hbadmatch_stack_1->SetBinError(9,1.403703);
   hbadmatch_stack_1->SetBinError(12,0.9925678);
   hbadmatch_stack_1->SetBinError(13,2.065273);
   hbadmatch_stack_1->SetEntries(63);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,65.50948);
   houtFV_stack_4->SetBinContent(2,88.90939);
   houtFV_stack_4->SetBinContent(3,62.307);
   houtFV_stack_4->SetBinContent(4,36.72501);
   houtFV_stack_4->SetBinContent(5,24.06042);
   houtFV_stack_4->SetBinContent(6,12.07756);
   houtFV_stack_4->SetBinContent(7,15.88109);
   houtFV_stack_4->SetBinContent(8,4.962839);
   houtFV_stack_4->SetBinContent(9,10.16779);
   houtFV_stack_4->SetBinContent(10,2.977704);
   houtFV_stack_4->SetBinContent(11,4.962839);
   houtFV_stack_4->SetBinContent(12,4.962839);
   houtFV_stack_4->SetBinContent(13,22.29193);
   houtFV_stack_4->SetBinError(1,8.063659);
   houtFV_stack_4->SetBinError(2,9.496562);
   houtFV_stack_4->SetBinError(3,7.924838);
   houtFV_stack_4->SetBinError(4,6.037555);
   houtFV_stack_4->SetBinError(5,4.916872);
   houtFV_stack_4->SetBinError(6,3.490142);
   houtFV_stack_4->SetBinError(7,3.970271);
   houtFV_stack_4->SetBinError(8,2.219449);
   houtFV_stack_4->SetBinError(9,3.223529);
   houtFV_stack_4->SetBinError(10,1.719178);
   houtFV_stack_4->SetBinError(11,2.219449);
   houtFV_stack_4->SetBinError(12,2.219449);
   houtFV_stack_4->SetBinError(13,4.765518);
   houtFV_stack_4->SetEntries(356);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.438827);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,13.37295);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,17.3353);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,18.82119);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,16.84001);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.952944);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.962355);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.485883);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,7.92471);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.785809);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.573625);
   hNCpi0inFVcoh_stack_5->SetBinError(3,2.930201);
   hNCpi0inFVcoh_stack_5->SetBinError(4,3.0532);
   hNCpi0inFVcoh_stack_5->SetBinError(5,2.888038);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.566258);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.400904);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.857875);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.981178);
   hNCpi0inFVcoh_stack_5->SetEntries(201);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.476472);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.107512);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetEntries(14);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,134.2248);
   hNCpi0inFVres_stack_7->SetBinContent(2,296.6813);
   hNCpi0inFVres_stack_7->SetBinContent(3,298.1672);
   hNCpi0inFVres_stack_7->SetBinContent(4,215.6824);
   hNCpi0inFVres_stack_7->SetBinContent(5,126.3001);
   hNCpi0inFVres_stack_7->SetBinContent(6,70.8271);
   hNCpi0inFVres_stack_7->SetBinContent(7,40.11885);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.31648);
   hNCpi0inFVres_stack_7->SetBinContent(9,18.82119);
   hNCpi0inFVres_stack_7->SetBinContent(10,14.36354);
   hNCpi0inFVres_stack_7->SetBinContent(11,16.84001);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.934122);
   hNCpi0inFVres_stack_7->SetBinContent(13,53.49179);
   hNCpi0inFVres_stack_7->SetBinError(1,8.153575);
   hNCpi0inFVres_stack_7->SetBinError(2,12.12207);
   hNCpi0inFVres_stack_7->SetBinError(3,12.15239);
   hNCpi0inFVres_stack_7->SetBinError(4,10.34372);
   hNCpi0inFVres_stack_7->SetBinError(5,7.909217);
   hNCpi0inFVres_stack_7->SetBinError(6,5.922859);
   hNCpi0inFVres_stack_7->SetBinError(7,4.457649);
   hNCpi0inFVres_stack_7->SetBinError(8,3.093112);
   hNCpi0inFVres_stack_7->SetBinError(9,3.0532);
   hNCpi0inFVres_stack_7->SetBinError(10,2.667242);
   hNCpi0inFVres_stack_7->SetBinError(11,2.888038);
   hNCpi0inFVres_stack_7->SetBinError(12,1.853222);
   hNCpi0inFVres_stack_7->SetBinError(13,5.14725);
   hNCpi0inFVres_stack_7->SetEntries(2648);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,29.22237);
   hNCpi0inFVdis_stack_8->SetBinContent(2,66.36945);
   hNCpi0inFVdis_stack_8->SetBinContent(3,37.14708);
   hNCpi0inFVdis_stack_8->SetBinContent(4,36.15649);
   hNCpi0inFVdis_stack_8->SetBinContent(5,24.76472);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.34472);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.905888);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.438827);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.438827);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.981178);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.971766);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.971766);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.84942);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.804428);
   hNCpi0inFVdis_stack_8->SetBinError(2,5.733447);
   hNCpi0inFVdis_stack_8->SetBinError(3,4.289375);
   hNCpi0inFVdis_stack_8->SetBinError(4,4.231797);
   hNCpi0inFVdis_stack_8->SetBinError(5,3.50226);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.84525);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.215024);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.785809);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.785809);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9905888);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.213219);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.213219);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.801808);
   hNCpi0inFVdis_stack_8->SetEntries(518);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,57.56894);
   hCCpi0inFV_stack_10->SetBinContent(2,91.77);
   hCCpi0inFV_stack_10->SetBinContent(3,94.5087);
   hCCpi0inFV_stack_10->SetBinContent(4,60.54664);
   hCCpi0inFV_stack_10->SetBinContent(5,44.66555);
   hCCpi0inFV_stack_10->SetBinContent(6,43.67299);
   hCCpi0inFV_stack_10->SetBinContent(7,9.925678);
   hCCpi0inFV_stack_10->SetBinContent(8,5.955407);
   hCCpi0inFV_stack_10->SetBinContent(9,8.93311);
   hCCpi0inFV_stack_10->SetBinContent(10,3.970271);
   hCCpi0inFV_stack_10->SetBinContent(11,3.970271);
   hCCpi0inFV_stack_10->SetBinContent(12,2.977704);
   hCCpi0inFV_stack_10->SetBinContent(13,31.99541);
   hCCpi0inFV_stack_10->SetBinError(1,7.559172);
   hCCpi0inFV_stack_10->SetBinError(2,9.573034);
   hCCpi0inFV_stack_10->SetBinError(3,9.698741);
   hCCpi0inFV_stack_10->SetBinError(4,7.752203);
   hCCpi0inFV_stack_10->SetBinError(5,6.658348);
   hCCpi0inFV_stack_10->SetBinError(6,6.58395);
   hCCpi0inFV_stack_10->SetBinError(7,3.138775);
   hCCpi0inFV_stack_10->SetBinError(8,2.431285);
   hCCpi0inFV_stack_10->SetBinError(9,2.977704);
   hCCpi0inFV_stack_10->SetBinError(10,1.985136);
   hCCpi0inFV_stack_10->SetBinError(11,1.985136);
   hCCpi0inFV_stack_10->SetBinError(12,1.719178);
   hCCpi0inFV_stack_10->SetBinError(13,5.660701);
   hCCpi0inFV_stack_10->SetEntries(463);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,33.74731);
   hNCinFV_stack_11->SetBinContent(2,47.64326);
   hNCinFV_stack_11->SetBinContent(3,36.72501);
   hNCinFV_stack_11->SetBinContent(4,32.75474);
   hNCinFV_stack_11->SetBinContent(5,21.83649);
   hNCinFV_stack_11->SetBinContent(6,14.88852);
   hNCinFV_stack_11->SetBinContent(7,3.970271);
   hNCinFV_stack_11->SetBinContent(8,6.947975);
   hNCinFV_stack_11->SetBinContent(9,3.970271);
   hNCinFV_stack_11->SetBinContent(10,2.977704);
   hNCinFV_stack_11->SetBinContent(11,0.9925678);
   hNCinFV_stack_11->SetBinContent(12,2.977704);
   hNCinFV_stack_11->SetBinContent(13,16.87365);
   hNCinFV_stack_11->SetBinError(1,5.787615);
   hNCinFV_stack_11->SetBinError(2,6.876712);
   hNCinFV_stack_11->SetBinError(3,6.037555);
   hNCinFV_stack_11->SetBinError(4,5.701868);
   hNCinFV_stack_11->SetBinError(5,4.655556);
   hNCinFV_stack_11->SetBinError(6,3.844199);
   hNCinFV_stack_11->SetBinError(7,1.985136);
   hNCinFV_stack_11->SetBinError(8,2.626088);
   hNCinFV_stack_11->SetBinError(9,1.985136);
   hNCinFV_stack_11->SetBinError(10,1.719178);
   hNCinFV_stack_11->SetBinError(11,0.9925678);
   hNCinFV_stack_11->SetBinError(12,1.719178);
   hNCinFV_stack_11->SetBinError(13,4.092462);
   hNCinFV_stack_11->SetEntries(228);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,15.48395);
   hnumuCCinFV_stack_12->SetBinContent(2,39.59881);
   hnumuCCinFV_stack_12->SetBinContent(3,43.31858);
   hnumuCCinFV_stack_12->SetBinContent(4,19.18187);
   hnumuCCinFV_stack_12->SetBinContent(5,21.18116);
   hnumuCCinFV_stack_12->SetBinContent(6,16.05514);
   hnumuCCinFV_stack_12->SetBinContent(7,2.977704);
   hnumuCCinFV_stack_12->SetBinContent(8,9.967624);
   hnumuCCinFV_stack_12->SetBinContent(9,1.985136);
   hnumuCCinFV_stack_12->SetBinContent(10,2.977704);
   hnumuCCinFV_stack_12->SetBinContent(11,0.9925678);
   hnumuCCinFV_stack_12->SetBinContent(12,2.322974);
   hnumuCCinFV_stack_12->SetBinContent(13,6.947976);
   hnumuCCinFV_stack_12->SetBinError(1,4.01716);
   hnumuCCinFV_stack_12->SetBinError(2,9.213145);
   hnumuCCinFV_stack_12->SetBinError(3,10.62872);
   hnumuCCinFV_stack_12->SetBinError(4,4.387018);
   hnumuCCinFV_stack_12->SetBinError(5,4.76193);
   hnumuCCinFV_stack_12->SetBinError(6,4.192736);
   hnumuCCinFV_stack_12->SetBinError(7,1.719178);
   hnumuCCinFV_stack_12->SetBinError(8,4.117439);
   hnumuCCinFV_stack_12->SetBinError(9,1.403703);
   hnumuCCinFV_stack_12->SetBinError(10,1.719178);
   hnumuCCinFV_stack_12->SetBinError(11,0.9925678);
   hnumuCCinFV_stack_12->SetBinError(12,1.642821);
   hnumuCCinFV_stack_12->SetBinError(13,2.626088);
   hnumuCCinFV_stack_12->SetEntries(163);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,3.446364);
   hnueCCinFV_stack_13->SetBinContent(2,6.625311);
   hnueCCinFV_stack_13->SetBinContent(5,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(7,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(8,2.27427);
   hnueCCinFV_stack_13->SetBinContent(9,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(10,1.985136);
   hnueCCinFV_stack_13->SetBinContent(12,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,10.05833);
   hnueCCinFV_stack_13->SetBinError(1,1.992625);
   hnueCCinFV_stack_13->SetBinError(2,2.773043);
   hnueCCinFV_stack_13->SetBinError(5,0.9925678);
   hnueCCinFV_stack_13->SetBinError(7,0.9925678);
   hnueCCinFV_stack_13->SetBinError(8,1.621096);
   hnueCCinFV_stack_13->SetBinError(9,0.9925678);
   hnueCCinFV_stack_13->SetBinError(10,1.403703);
   hnueCCinFV_stack_13->SetBinError(12,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,7.684029);
   hnueCCinFV_stack_13->SetEntries(22);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__17->SetBinContent(1,361.5818);
   hmcerror__17->SetBinContent(2,667.9218);
   hmcerror__17->SetBinContent(3,610.4115);
   hmcerror__17->SetBinContent(4,428.0194);
   hmcerror__17->SetBinContent(5,284.114);
   hmcerror__17->SetBinContent(6,181.9602);
   hmcerror__17->SetBinContent(7,88.2297);
   hmcerror__17->SetBinContent(8,58.3399);
   hmcerror__17->SetBinContent(9,55.2752);
   hmcerror__17->SetBinContent(10,32.71912);
   hmcerror__17->SetBinContent(11,32.7112);
   hmcerror__17->SetBinContent(12,27.11342);
   hmcerror__17->SetBinContent(13,169.5554);
   hmcerror__17->SetBinError(1,96.09256);
   hmcerror__17->SetBinError(2,165.3901);
   hmcerror__17->SetBinError(3,151.8106);
   hmcerror__17->SetBinError(4,115.3101);
   hmcerror__17->SetBinError(5,82.12285);
   hmcerror__17->SetBinError(6,49.1018);
   hmcerror__17->SetBinError(7,27.44278);
   hmcerror__17->SetBinError(8,19.70921);
   hmcerror__17->SetBinError(9,25.50171);
   hmcerror__17->SetBinError(10,13.43816);
   hmcerror__17->SetBinError(11,17.15691);
   hmcerror__17->SetBinError(12,14.72775);
   hmcerror__17->SetBinError(13,53.17089);
   hmcerror__17->SetEntries(2960.461);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[12] = {
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
   Double_t _fy3021[12] = {
   515,
   875,
   859,
   609,
   379,
   230,
   141,
   76,
   56,
   41,
   29,
   39};
   Double_t _felx3021[12] = {
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
   Double_t _fely3021[12] = {
   22.69361,
   29.5804,
   29.3087,
   24.67793,
   19.46792,
   15.16575,
   11.87434,
   8.8425,
   7.6127,
   6.5384,
   5.5285,
   6.3813};
   Double_t _fehx3021[12] = {
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
   Double_t _fehy3021[12] = {
   22.69361,
   29.5804,
   29.3087,
   24.67793,
   19.46792,
   15.16575,
   11.87434,
   8.6406,
   7.4094,
   6.3331,
   5.3201,
   6.1757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1320);
   Graph_Graph3021->SetMinimum(21.12435);
   Graph_Graph3021->SetMaximum(992.6913);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.36#pm0.32","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

   ci = 1499;
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

   ci = 1500;
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

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 333.5","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.6","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1258.3","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  240.7","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 428.5","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 209.4","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 176.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 18.3","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[12] = {
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
   Double_t _fy3022[12] = {
   1,
   1,
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
   Double_t _felx3022[12] = {
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
   Double_t _fely3022[12] = {
   0.2657561,
   0.247619,
   0.2487021,
   0.2694038,
   0.289049,
   0.2698492,
   0.3110379,
   0.3378341,
   0.4613589,
   0.4107129,
   0.5244967,
   0.5431903};
   Double_t _fehx3022[12] = {
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
   Double_t _fehy3022[12] = {
   0.2657561,
   0.247619,
   0.2487021,
   0.2694038,
   0.289049,
   0.2698492,
   0.3110379,
   0.3378341,
   0.4613589,
   0.4107129,
   0.5244967,
   0.5431903};
   grae = new TGraphAsymmErrors(12,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1320);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[12] = {
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
   Double_t _fy3023[12] = {
   1,
   1,
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
   Double_t _felx3023[12] = {
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
   Double_t _fely3023[12] = {
   0.2111868,
   0.2226094,
   0.2257647,
   0.2300132,
   0.2222053,
   0.220718,
   0.2230574,
   0.2439414,
   0.2448172,
   0.2626379,
   0.2554513,
   0.2793319};
   Double_t _fehx3023[12] = {
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
   Double_t _fehy3023[12] = {
   0.2111868,
   0.2226094,
   0.2257647,
   0.2300132,
   0.2222053,
   0.220718,
   0.2230574,
   0.2439414,
   0.2448172,
   0.2626379,
   0.2554513,
   0.2793319};
   grae = new TGraphAsymmErrors(12,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1320);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[12] = {
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
   Double_t _fy3024[12] = {
   1.424297,
   1.310034,
   1.407247,
   1.422833,
   1.333972,
   1.264013,
   1.598101,
   1.302711,
   1.013113,
   1.25309,
   0.8865466,
   1.438402};
   Double_t _felx3024[12] = {
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
   Double_t _fely3024[12] = {
   0.06276204,
   0.04428722,
   0.04801466,
   0.05765609,
   0.06852152,
   0.08334655,
   0.1345844,
   0.1515687,
   0.1377236,
   0.1998342,
   0.1690094,
   0.2353558};
   Double_t _fehx3024[12] = {
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
   Double_t _fehy3024[12] = {
   0.06276204,
   0.04428722,
   0.04801466,
   0.05765609,
   0.06852152,
   0.08334655,
   0.1345844,
   0.1481079,
   0.1340457,
   0.1935596,
   0.1626385,
   0.2277728};
   grae = new TGraphAsymmErrors(12,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1320);
   Graph_Graph3024->SetMinimum(0.6160223);
   Graph_Graph3024->SetMaximum(1.834201);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_4_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

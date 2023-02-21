#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 20:55:44 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-1.184123,163.3333,130.9391);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__25->SetBinContent(2,15.8616);
   hmc__25->SetBinContent(3,34.65462);
   hmc__25->SetBinContent(4,40.92337);
   hmc__25->SetBinContent(5,38.20885);
   hmc__25->SetBinContent(6,23.40192);
   hmc__25->SetBinContent(7,26.04698);
   hmc__25->SetBinContent(8,29.95049);
   hmc__25->SetBinContent(9,25.21382);
   hmc__25->SetBinContent(10,27.74421);
   hmc__25->SetBinContent(11,17.82992);
   hmc__25->SetBinContent(12,25.08509);
   hmc__25->SetBinContent(13,18.7539);
   hmc__25->SetBinContent(14,18.97033);
   hmc__25->SetBinContent(15,23.20018);
   hmc__25->SetBinContent(16,25.94577);
   hmc__25->SetBinContent(17,22.08574);
   hmc__25->SetBinContent(18,34.30036);
   hmc__25->SetBinContent(19,31.52758);
   hmc__25->SetBinContent(20,25.4838);
   hmc__25->SetBinContent(21,35.49437);
   hmc__25->SetBinContent(22,42.47432);
   hmc__25->SetBinContent(23,59.20615);
   hmc__25->SetBinContent(24,48.08434);
   hmc__25->SetBinContent(25,30.41324);
   hmc__25->SetBinContent(26,0.1967154);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,10.57556);
   hmc__25->SetBinError(3,17.82291);
   hmc__25->SetBinError(4,20.2593);
   hmc__25->SetBinError(5,14.72655);
   hmc__25->SetBinError(6,14.12796);
   hmc__25->SetBinError(7,15.80486);
   hmc__25->SetBinError(8,14.94497);
   hmc__25->SetBinError(9,18.68406);
   hmc__25->SetBinError(10,14.59233);
   hmc__25->SetBinError(11,9.911393);
   hmc__25->SetBinError(12,17.14184);
   hmc__25->SetBinError(13,10.00779);
   hmc__25->SetBinError(14,10.16324);
   hmc__25->SetBinError(15,13.8978);
   hmc__25->SetBinError(16,15.49725);
   hmc__25->SetBinError(17,11.83737);
   hmc__25->SetBinError(18,20.10035);
   hmc__25->SetBinError(19,14.01216);
   hmc__25->SetBinError(20,9.689434);
   hmc__25->SetBinError(21,15.76045);
   hmc__25->SetBinError(22,15.34909);
   hmc__25->SetBinError(23,21.58951);
   hmc__25->SetBinError(24,19.51067);
   hmc__25->SetBinError(25,16.89634);
   hmc__25->SetBinError(26,0.7244736);
   hmc__25->SetBinError(27,0.3895343);
   hmc__25->SetMinimum(-1.184123);
   hmc__25->SetMaximum(124.3329);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",26,-130,130);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(62.16646);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,0.5352025);
   hbadmatch_stack_1->SetBinContent(3,0.3917402);
   hbadmatch_stack_1->SetBinContent(4,0.8770706);
   hbadmatch_stack_1->SetBinContent(5,0.7459332);
   hbadmatch_stack_1->SetBinContent(6,0.9801958);
   hbadmatch_stack_1->SetBinContent(7,1.322064);
   hbadmatch_stack_1->SetBinContent(8,0.9303237);
   hbadmatch_stack_1->SetBinContent(9,1.427636);
   hbadmatch_stack_1->SetBinContent(10,1.306821);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,1.052975);
   hbadmatch_stack_1->SetBinContent(13,0.9269427);
   hbadmatch_stack_1->SetBinContent(14,1.237272);
   hbadmatch_stack_1->SetBinContent(15,1.694629);
   hbadmatch_stack_1->SetBinContent(16,0.785171);
   hbadmatch_stack_1->SetBinContent(17,0.5850745);
   hbadmatch_stack_1->SetBinContent(18,2.274652);
   hbadmatch_stack_1->SetBinContent(19,0.6374149);
   hbadmatch_stack_1->SetBinContent(20,1.337513);
   hbadmatch_stack_1->SetBinContent(21,1.413964);
   hbadmatch_stack_1->SetBinContent(22,0.8230063);
   hbadmatch_stack_1->SetBinContent(23,1.153835);
   hbadmatch_stack_1->SetBinContent(24,0.4277573);
   hbadmatch_stack_1->SetBinContent(25,0.4608405);
   hbadmatch_stack_1->SetBinError(2,0.3921167);
   hbadmatch_stack_1->SetBinError(3,0.2770047);
   hbadmatch_stack_1->SetBinError(4,0.5197486);
   hbadmatch_stack_1->SetBinError(5,0.5294888);
   hbadmatch_stack_1->SetBinError(6,0.4383608);
   hbadmatch_stack_1->SetBinError(7,0.5554667);
   hbadmatch_stack_1->SetBinError(8,0.4814682);
   hbadmatch_stack_1->SetBinError(9,0.5419594);
   hbadmatch_stack_1->SetBinError(10,0.6028295);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.5578749);
   hbadmatch_stack_1->SetBinError(13,0.4800908);
   hbadmatch_stack_1->SetBinError(14,0.5672738);
   hbadmatch_stack_1->SetBinError(15,0.7787298);
   hbadmatch_stack_1->SetBinError(16,0.3925882);
   hbadmatch_stack_1->SetBinError(17,0.337793);
   hbadmatch_stack_1->SetBinError(18,0.8294178);
   hbadmatch_stack_1->SetBinError(19,0.3700299);
   hbadmatch_stack_1->SetBinError(20,0.6574264);
   hbadmatch_stack_1->SetBinError(21,0.6515799);
   hbadmatch_stack_1->SetBinError(22,0.412847);
   hbadmatch_stack_1->SetBinError(23,0.5309099);
   hbadmatch_stack_1->SetBinError(24,0.3034424);
   hbadmatch_stack_1->SetBinError(25,0.3262361);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(5,3.786253);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,0.8131978);
   hext_stack_2->SetBinContent(8,3.532468);
   hext_stack_2->SetBinContent(9,3.704052);
   hext_stack_2->SetBinContent(10,1.290409);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,1.137595);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,1.055394);
   hext_stack_2->SetBinContent(15,4.517249);
   hext_stack_2->SetBinContent(16,1.868591);
   hext_stack_2->SetBinContent(17,4.435048);
   hext_stack_2->SetBinContent(18,8.616311);
   hext_stack_2->SetBinContent(19,5.40106);
   hext_stack_2->SetBinContent(20,4.863188);
   hext_stack_2->SetBinContent(21,6.788031);
   hext_stack_2->SetBinContent(22,6.884593);
   hext_stack_2->SetBinContent(23,16.03878);
   hext_stack_2->SetBinContent(24,9.276695);
   hext_stack_2->SetBinContent(25,2.752401);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(5,1.463777);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,0.5750177);
   hext_stack_2->SetBinError(8,1.47091);
   hext_stack_2->SetBinError(9,1.443106);
   hext_stack_2->SetBinError(10,0.788756);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.6602113);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.6130171);
   hext_stack_2->SetBinError(15,1.553448);
   hext_stack_2->SetBinError(16,0.840497);
   hext_stack_2->SetBinError(17,1.533985);
   hext_stack_2->SetBinError(18,2.174202);
   hext_stack_2->SetBinError(19,1.694111);
   hext_stack_2->SetBinError(20,1.383773);
   hext_stack_2->SetBinError(21,1.774777);
   hext_stack_2->SetBinError(22,1.675566);
   hext_stack_2->SetBinError(23,2.913736);
   hext_stack_2->SetBinError(24,2.207157);
   hext_stack_2->SetBinError(25,1.07854);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(6,0.002351481);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinContent(12,0.4762587);
   hdirt_stack_3->SetBinContent(13,0.1564614);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(21,1.416003);
   hdirt_stack_3->SetBinContent(22,0.4289006);
   hdirt_stack_3->SetBinContent(23,0.4026575);
   hdirt_stack_3->SetBinContent(25,0.6951543);
   hdirt_stack_3->SetBinError(6,0.002351481);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetBinError(12,0.3652866);
   hdirt_stack_3->SetBinError(13,0.1564614);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(21,0.6658183);
   hdirt_stack_3->SetBinError(22,0.4289006);
   hdirt_stack_3->SetBinError(23,0.2984452);
   hdirt_stack_3->SetBinError(25,0.4258516);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(2,11.48862);
   houtFV_stack_4->SetBinContent(3,11.54237);
   houtFV_stack_4->SetBinContent(4,4.8445);
   houtFV_stack_4->SetBinContent(5,2.488736);
   houtFV_stack_4->SetBinContent(6,2.279029);
   houtFV_stack_4->SetBinContent(7,3.181543);
   houtFV_stack_4->SetBinContent(8,2.856402);
   houtFV_stack_4->SetBinContent(9,4.305249);
   houtFV_stack_4->SetBinContent(10,4.348444);
   houtFV_stack_4->SetBinContent(11,2.925981);
   houtFV_stack_4->SetBinContent(12,4.85771);
   houtFV_stack_4->SetBinContent(13,1.322064);
   houtFV_stack_4->SetBinContent(14,4.236634);
   houtFV_stack_4->SetBinContent(15,3.098655);
   houtFV_stack_4->SetBinContent(16,3.697258);
   houtFV_stack_4->SetBinContent(17,2.910768);
   houtFV_stack_4->SetBinContent(18,3.322793);
   houtFV_stack_4->SetBinContent(19,3.797819);
   houtFV_stack_4->SetBinContent(20,2.250697);
   houtFV_stack_4->SetBinContent(21,5.548646);
   houtFV_stack_4->SetBinContent(22,4.104039);
   houtFV_stack_4->SetBinContent(23,2.929362);
   houtFV_stack_4->SetBinContent(24,8.157602);
   houtFV_stack_4->SetBinContent(25,20.80134);
   houtFV_stack_4->SetBinError(2,1.659664);
   houtFV_stack_4->SetBinError(3,1.732688);
   houtFV_stack_4->SetBinError(4,1.05877);
   houtFV_stack_4->SetBinError(5,0.7798795);
   houtFV_stack_4->SetBinError(6,0.7427943);
   houtFV_stack_4->SetBinError(7,0.8783533);
   houtFV_stack_4->SetBinError(8,0.8524378);
   houtFV_stack_4->SetBinError(9,1.095815);
   houtFV_stack_4->SetBinError(10,1.074446);
   houtFV_stack_4->SetBinError(11,0.8770106);
   houtFV_stack_4->SetBinError(12,1.124062);
   houtFV_stack_4->SetBinError(13,0.5554667);
   houtFV_stack_4->SetBinError(14,1.087749);
   houtFV_stack_4->SetBinError(15,0.8491944);
   houtFV_stack_4->SetBinError(16,0.9890076);
   houtFV_stack_4->SetBinError(17,0.828191);
   houtFV_stack_4->SetBinError(18,0.9207963);
   houtFV_stack_4->SetBinError(19,1.006152);
   houtFV_stack_4->SetBinError(20,0.7346377);
   houtFV_stack_4->SetBinError(21,1.199072);
   houtFV_stack_4->SetBinError(22,1.111495);
   houtFV_stack_4->SetBinError(23,0.8777653);
   houtFV_stack_4->SetBinError(24,1.428399);
   houtFV_stack_4->SetBinError(25,2.271459);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1954681);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.60459);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.887003);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.59092);
   hNCpi0inFVres_stack_7->SetBinContent(5,9.551802);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.608667);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.115677);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.1083);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.674191);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.172318);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.949278);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.677991);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.653252);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.570384);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.420178);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.744193);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.42001);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.383396);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.396014);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.637904);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.55894);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.60951);
   hNCpi0inFVres_stack_7->SetBinContent(23,14.00554);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.89875);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.073322);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4272476);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8008063);
   hNCpi0inFVres_stack_7->SetBinError(4,1.125963);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9989691);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7874096);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6637673);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8229786);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8360384);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7784204);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6985282);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5558494);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5937137);
   hNCpi0inFVres_stack_7->SetBinError(14,0.607805);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7246909);
   hNCpi0inFVres_stack_7->SetBinError(16,0.806659);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7017251);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7815392);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7522726);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8592644);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9107912);
   hNCpi0inFVres_stack_7->SetBinError(22,1.05558);
   hNCpi0inFVres_stack_7->SetBinError(23,1.275147);
   hNCpi0inFVres_stack_7->SetBinError(24,1.195595);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2880395);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.366108);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.360138);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.458457);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.980412);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.911826);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.147148);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8780218);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.060704);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.7670858);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9625539);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.102222);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.213158);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.170808);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.530268);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8086039);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.575858);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.301762);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.513256);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.189826);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3614489);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6195385);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6673259);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4960313);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5065776);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5140139);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2784203);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.35757);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2468026);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3148322);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3684702);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3903545);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3538311);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2180566);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2623461);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4031079);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.530105);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6283753);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4608469);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3174996);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(2,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(3,7.266801);
   hCCpi0inFV_stack_10->SetBinContent(4,9.020726);
   hCCpi0inFV_stack_10->SetBinContent(5,7.80958);
   hCCpi0inFV_stack_10->SetBinContent(6,5.455453);
   hCCpi0inFV_stack_10->SetBinContent(7,5.942634);
   hCCpi0inFV_stack_10->SetBinContent(8,7.608979);
   hCCpi0inFV_stack_10->SetBinContent(9,3.664661);
   hCCpi0inFV_stack_10->SetBinContent(10,5.071862);
   hCCpi0inFV_stack_10->SetBinContent(11,3.356521);
   hCCpi0inFV_stack_10->SetBinContent(12,6.024732);
   hCCpi0inFV_stack_10->SetBinContent(13,4.729407);
   hCCpi0inFV_stack_10->SetBinContent(14,3.373806);
   hCCpi0inFV_stack_10->SetBinContent(15,2.887334);
   hCCpi0inFV_stack_10->SetBinContent(16,5.770229);
   hCCpi0inFV_stack_10->SetBinContent(17,4.511704);
   hCCpi0inFV_stack_10->SetBinContent(18,4.761996);
   hCCpi0inFV_stack_10->SetBinContent(19,8.74205);
   hCCpi0inFV_stack_10->SetBinContent(20,3.319412);
   hCCpi0inFV_stack_10->SetBinContent(21,3.714922);
   hCCpi0inFV_stack_10->SetBinContent(22,8.330902);
   hCCpi0inFV_stack_10->SetBinContent(23,10.61451);
   hCCpi0inFV_stack_10->SetBinContent(24,7.098823);
   hCCpi0inFV_stack_10->SetBinContent(25,1.710423);
   hCCpi0inFV_stack_10->SetBinContent(26,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(2,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(3,1.380441);
   hCCpi0inFV_stack_10->SetBinError(4,1.525962);
   hCCpi0inFV_stack_10->SetBinError(5,1.455994);
   hCCpi0inFV_stack_10->SetBinError(6,1.175986);
   hCCpi0inFV_stack_10->SetBinError(7,1.17402);
   hCCpi0inFV_stack_10->SetBinError(8,1.39615);
   hCCpi0inFV_stack_10->SetBinError(9,0.9819618);
   hCCpi0inFV_stack_10->SetBinError(10,1.177351);
   hCCpi0inFV_stack_10->SetBinError(11,0.9613211);
   hCCpi0inFV_stack_10->SetBinError(12,1.228134);
   hCCpi0inFV_stack_10->SetBinError(13,1.068252);
   hCCpi0inFV_stack_10->SetBinError(14,0.932934);
   hCCpi0inFV_stack_10->SetBinError(15,0.7840966);
   hCCpi0inFV_stack_10->SetBinError(16,1.227069);
   hCCpi0inFV_stack_10->SetBinError(17,1.069926);
   hCCpi0inFV_stack_10->SetBinError(18,1.070276);
   hCCpi0inFV_stack_10->SetBinError(19,1.514559);
   hCCpi0inFV_stack_10->SetBinError(20,0.9200768);
   hCCpi0inFV_stack_10->SetBinError(21,0.9467875);
   hCCpi0inFV_stack_10->SetBinError(22,1.459444);
   hCCpi0inFV_stack_10->SetBinError(23,1.596011);
   hCCpi0inFV_stack_10->SetBinError(24,1.341101);
   hCCpi0inFV_stack_10->SetBinError(25,0.6196373);
   hCCpi0inFV_stack_10->SetBinError(26,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(2,0.3401776);
   hNCinFV_stack_11->SetBinContent(3,1.515398);
   hNCinFV_stack_11->SetBinContent(4,2.390778);
   hNCinFV_stack_11->SetBinContent(5,3.914629);
   hNCinFV_stack_11->SetBinContent(6,1.660551);
   hNCinFV_stack_11->SetBinContent(7,2.736028);
   hNCinFV_stack_11->SetBinContent(8,0.9286332);
   hNCinFV_stack_11->SetBinContent(9,1.375317);
   hNCinFV_stack_11->SetBinContent(10,2.145881);
   hNCinFV_stack_11->SetBinContent(11,0.5901461);
   hNCinFV_stack_11->SetBinContent(12,1.947476);
   hNCinFV_stack_11->SetBinContent(13,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,0.7319179);
   hNCinFV_stack_11->SetBinContent(15,1.070405);
   hNCinFV_stack_11->SetBinContent(16,1.413964);
   hNCinFV_stack_11->SetBinContent(17,0.5884556);
   hNCinFV_stack_11->SetBinContent(18,1.121968);
   hNCinFV_stack_11->SetBinContent(19,1.465526);
   hNCinFV_stack_11->SetBinContent(20,1.123658);
   hNCinFV_stack_11->SetBinContent(21,2.055672);
   hNCinFV_stack_11->SetBinContent(22,2.000729);
   hNCinFV_stack_11->SetBinContent(23,1.663932);
   hNCinFV_stack_11->SetBinContent(24,2.834081);
   hNCinFV_stack_11->SetBinContent(25,0.8304313);
   hNCinFV_stack_11->SetBinError(2,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.588146);
   hNCinFV_stack_11->SetBinError(4,0.7844693);
   hNCinFV_stack_11->SetBinError(5,0.9821502);
   hNCinFV_stack_11->SetBinError(6,0.650847);
   hNCinFV_stack_11->SetBinError(7,0.8562123);
   hNCinFV_stack_11->SetBinError(8,0.48078);
   hNCinFV_stack_11->SetBinError(9,0.5198233);
   hNCinFV_stack_11->SetBinError(10,0.785499);
   hNCinFV_stack_11->SetBinError(11,0.340721);
   hNCinFV_stack_11->SetBinError(12,0.7600326);
   hNCinFV_stack_11->SetBinError(13,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.438694);
   hNCinFV_stack_11->SetBinError(15,0.5545368);
   hNCinFV_stack_11->SetBinError(16,0.6515799);
   hNCinFV_stack_11->SetBinError(17,0.3397478);
   hNCinFV_stack_11->SetBinError(18,0.5181909);
   hNCinFV_stack_11->SetBinError(19,0.6209405);
   hNCinFV_stack_11->SetBinError(20,0.5188295);
   hNCinFV_stack_11->SetBinError(21,0.7082781);
   hNCinFV_stack_11->SetBinError(22,0.7343859);
   hNCinFV_stack_11->SetBinError(23,0.6518637);
   hNCinFV_stack_11->SetBinError(24,0.8081673);
   hNCinFV_stack_11->SetBinError(25,0.3945474);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinContent(3,5.378136);
   hnumuCCinFV_stack_12->SetBinContent(4,6.319769);
   hnumuCCinFV_stack_12->SetBinContent(5,5.518117);
   hnumuCCinFV_stack_12->SetBinContent(6,3.857473);
   hnumuCCinFV_stack_12->SetBinContent(7,4.80064);
   hnumuCCinFV_stack_12->SetBinContent(8,5.838231);
   hnumuCCinFV_stack_12->SetBinContent(9,4.156793);
   hnumuCCinFV_stack_12->SetBinContent(10,4.942265);
   hnumuCCinFV_stack_12->SetBinContent(11,3.795752);
   hnumuCCinFV_stack_12->SetBinContent(12,5.115365);
   hnumuCCinFV_stack_12->SetBinContent(13,5.525188);
   hnumuCCinFV_stack_12->SetBinContent(14,3.606901);
   hnumuCCinFV_stack_12->SetBinContent(15,4.04836);
   hnumuCCinFV_stack_12->SetBinContent(16,5.895937);
   hnumuCCinFV_stack_12->SetBinContent(17,3.366552);
   hnumuCCinFV_stack_12->SetBinContent(18,6.697633);
   hnumuCCinFV_stack_12->SetBinContent(19,5.50163);
   hnumuCCinFV_stack_12->SetBinContent(20,4.891999);
   hnumuCCinFV_stack_12->SetBinContent(21,4.740045);
   hnumuCCinFV_stack_12->SetBinContent(22,6.682561);
   hnumuCCinFV_stack_12->SetBinContent(23,8.404597);
   hnumuCCinFV_stack_12->SetBinContent(24,5.676637);
   hnumuCCinFV_stack_12->SetBinContent(25,1.308451);
   hnumuCCinFV_stack_12->SetBinError(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinError(3,1.726197);
   hnumuCCinFV_stack_12->SetBinError(4,1.362603);
   hnumuCCinFV_stack_12->SetBinError(5,1.181665);
   hnumuCCinFV_stack_12->SetBinError(6,1.031105);
   hnumuCCinFV_stack_12->SetBinError(7,1.357248);
   hnumuCCinFV_stack_12->SetBinError(8,1.644859);
   hnumuCCinFV_stack_12->SetBinError(9,1.301803);
   hnumuCCinFV_stack_12->SetBinError(10,1.152346);
   hnumuCCinFV_stack_12->SetBinError(11,1.100716);
   hnumuCCinFV_stack_12->SetBinError(12,1.188177);
   hnumuCCinFV_stack_12->SetBinError(13,1.212479);
   hnumuCCinFV_stack_12->SetBinError(14,1.129881);
   hnumuCCinFV_stack_12->SetBinError(15,1.090955);
   hnumuCCinFV_stack_12->SetBinError(16,1.375431);
   hnumuCCinFV_stack_12->SetBinError(17,0.9343347);
   hnumuCCinFV_stack_12->SetBinError(18,1.601255);
   hnumuCCinFV_stack_12->SetBinError(19,1.238745);
   hnumuCCinFV_stack_12->SetBinError(20,1.21121);
   hnumuCCinFV_stack_12->SetBinError(21,1.614567);
   hnumuCCinFV_stack_12->SetBinError(22,1.273043);
   hnumuCCinFV_stack_12->SetBinError(23,1.594287);
   hnumuCCinFV_stack_12->SetBinError(24,1.320232);
   hnumuCCinFV_stack_12->SetBinError(25,0.603244);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,1.157431);
   hnueCCinFV_stack_13->SetBinContent(5,0.7958433);
   hnueCCinFV_stack_13->SetBinContent(6,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(10,1.72261);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(18,0.756103);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.5985879);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_13->SetBinError(4,1.157431);
   hnueCCinFV_stack_13->SetBinError(5,0.4899295);
   hnueCCinFV_stack_13->SetBinError(6,0.1711909);
   hnueCCinFV_stack_13->SetBinError(10,1.577117);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.2502081);
   hnueCCinFV_stack_13->SetBinError(18,0.4499676);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.4334685);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.2171002);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__26->SetBinContent(2,15.8616);
   hmcerror__26->SetBinContent(3,34.65462);
   hmcerror__26->SetBinContent(4,40.92337);
   hmcerror__26->SetBinContent(5,38.20885);
   hmcerror__26->SetBinContent(6,23.40192);
   hmcerror__26->SetBinContent(7,26.04698);
   hmcerror__26->SetBinContent(8,29.95049);
   hmcerror__26->SetBinContent(9,25.21382);
   hmcerror__26->SetBinContent(10,27.74421);
   hmcerror__26->SetBinContent(11,17.82992);
   hmcerror__26->SetBinContent(12,25.08509);
   hmcerror__26->SetBinContent(13,18.7539);
   hmcerror__26->SetBinContent(14,18.97033);
   hmcerror__26->SetBinContent(15,23.20018);
   hmcerror__26->SetBinContent(16,25.94577);
   hmcerror__26->SetBinContent(17,22.08574);
   hmcerror__26->SetBinContent(18,34.30036);
   hmcerror__26->SetBinContent(19,31.52758);
   hmcerror__26->SetBinContent(20,25.4838);
   hmcerror__26->SetBinContent(21,35.49437);
   hmcerror__26->SetBinContent(22,42.47432);
   hmcerror__26->SetBinContent(23,59.20615);
   hmcerror__26->SetBinContent(24,48.08434);
   hmcerror__26->SetBinContent(25,30.41324);
   hmcerror__26->SetBinContent(26,0.1967154);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,10.57556);
   hmcerror__26->SetBinError(3,17.82291);
   hmcerror__26->SetBinError(4,20.2593);
   hmcerror__26->SetBinError(5,14.72655);
   hmcerror__26->SetBinError(6,14.12796);
   hmcerror__26->SetBinError(7,15.80486);
   hmcerror__26->SetBinError(8,14.94497);
   hmcerror__26->SetBinError(9,18.68406);
   hmcerror__26->SetBinError(10,14.59233);
   hmcerror__26->SetBinError(11,9.911393);
   hmcerror__26->SetBinError(12,17.14184);
   hmcerror__26->SetBinError(13,10.00779);
   hmcerror__26->SetBinError(14,10.16324);
   hmcerror__26->SetBinError(15,13.8978);
   hmcerror__26->SetBinError(16,15.49725);
   hmcerror__26->SetBinError(17,11.83737);
   hmcerror__26->SetBinError(18,20.10035);
   hmcerror__26->SetBinError(19,14.01216);
   hmcerror__26->SetBinError(20,9.689434);
   hmcerror__26->SetBinError(21,15.76045);
   hmcerror__26->SetBinError(22,15.34909);
   hmcerror__26->SetBinError(23,21.58951);
   hmcerror__26->SetBinError(24,19.51067);
   hmcerror__26->SetBinError(25,16.89634);
   hmcerror__26->SetBinError(26,0.7244736);
   hmcerror__26->SetBinError(27,0.3895343);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3033[26] = {
   1,
   17,
   34,
   33,
   27,
   26,
   29,
   18,
   24,
   19,
   13,
   16,
   11,
   13,
   12,
   21,
   14,
   15,
   33,
   20,
   37,
   44,
   36,
   46,
   26,
   0};
   Double_t _felx3033[26] = {
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
   Double_t _fely3033[26] = {
   1,
   4.2835,
   5.9703,
   5.8847,
   5.3414,
   5.2453,
   5.5285,
   4.4008,
   5.0476,
   4.5151,
   3.77763,
   4.1628,
   3.4975,
   3.77763,
   3.64022,
   4.7354,
   3.9102,
   4.0385,
   5.8847,
   4.6266,
   6.2203,
   6.7671,
   6.1381,
   6.9153,
   5.2453,
   0};
   Double_t _fehx3033[26] = {
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
   Double_t _fehy3033[26] = {
   1.35971,
   4.0673,
   5.7635,
   5.6776,
   5.1322,
   5.0358,
   5.3201,
   4.1858,
   4.837,
   4.3011,
   3.5552,
   3.9454,
   3.27,
   3.5552,
   3.4155,
   4.5229,
   3.6898,
   3.8197,
   5.6776,
   4.4133,
   6.0141,
   6.5623,
   5.9318,
   6.7108,
   5.0358,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-156,156);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(57.98188);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.3/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3034[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3034[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[26] = {
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
   Double_t _fely3034[26] = {
   0,
   0.6667399,
   0.5143011,
   0.4950546,
   0.3854224,
   0.6037095,
   0.6067826,
   0.4989891,
   0.7410245,
   0.5259596,
   0.5558856,
   0.6833478,
   0.5336378,
   0.5357439,
   0.5990386,
   0.5972941,
   0.5359736,
   0.5860098,
   0.4444414,
   0.3802194,
   0.4440269,
   0.3613735,
   0.3646498,
   0.4057594,
   0.5555588,
   3.682852};
   Double_t _fehx3034[26] = {
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
   Double_t _fehy3034[26] = {
   0,
   0.6667399,
   0.5143011,
   0.4950546,
   0.3854224,
   0.6037095,
   0.6067826,
   0.4989891,
   0.7410245,
   0.5259596,
   0.5558856,
   0.6833478,
   0.5336378,
   0.5357439,
   0.5990386,
   0.5972941,
   0.5359736,
   0.5860098,
   0.4444414,
   0.3802194,
   0.4440269,
   0.3613735,
   0.3646498,
   0.4057594,
   0.5555588,
   3.682852};
   grae = new TGraphAsymmErrors(26,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-156,156);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3035[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[26] = {
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
   Double_t _fely3035[26] = {
   0,
   0.2692902,
   0.2754492,
   0.3162871,
   0.2776204,
   0.3063038,
   0.2671803,
   0.2483625,
   0.2593359,
   0.2511271,
   0.2828422,
   0.2645478,
   0.2739784,
   0.2609476,
   0.2288629,
   0.2340332,
   0.2444004,
   0.2057919,
   0.2363145,
   0.2266396,
   0.2523933,
   0.2571,
   0.2046237,
   0.2530101,
   0.213738,
   2.162984};
   Double_t _fehx3035[26] = {
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
   Double_t _fehy3035[26] = {
   0,
   0.2692902,
   0.2754492,
   0.3162871,
   0.2776204,
   0.3063038,
   0.2671803,
   0.2483625,
   0.2593359,
   0.2511271,
   0.2828422,
   0.2645478,
   0.2739784,
   0.2609476,
   0.2288629,
   0.2340332,
   0.2444004,
   0.2057919,
   0.2363145,
   0.2266396,
   0.2523933,
   0.2571,
   0.2046237,
   0.2530101,
   0.213738,
   2.162984};
   grae = new TGraphAsymmErrors(26,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-156,156);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
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
   125};
   Double_t _fy3036[26] = {
   10,
   1.071771,
   0.98111,
   0.8063853,
   0.7066426,
   1.11102,
   1.113373,
   0.6009919,
   0.951859,
   0.6848277,
   0.7291117,
   0.6378291,
   0.5865446,
   0.6852807,
   0.5172375,
   0.8093806,
   0.6338932,
   0.4373132,
   1.046703,
   0.7848123,
   1.042419,
   1.03592,
   0.6080449,
   0.9566525,
   0.8548909,
   0};
   Double_t _felx3036[26] = {
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
   Double_t _fely3036[26] = {
   0,
   0.2700548,
   0.17228,
   0.143798,
   0.1397948,
   0.2241397,
   0.2122511,
   0.1469358,
   0.2001918,
   0.1627403,
   0.2118703,
   0.1659472,
   0.1864945,
   0.1991336,
   0.1569048,
   0.1825115,
   0.1770464,
   0.1177393,
   0.1866524,
   0.1815506,
   0.1752475,
   0.1593222,
   0.1036734,
   0.1438161,
   0.1724677,
   0};
   Double_t _fehx3036[26] = {
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
   Double_t _fehy3036[26] = {
   0,
   0.2564244,
   0.1663126,
   0.1387374,
   0.1343197,
   0.2151875,
   0.2042502,
   0.1397573,
   0.1918393,
   0.155027,
   0.1993952,
   0.1572807,
   0.1743637,
   0.1874084,
   0.1472187,
   0.1743213,
   0.1670671,
   0.1113603,
   0.1800836,
   0.1731806,
   0.1694382,
   0.1545004,
   0.1001889,
   0.1395631,
   0.1655792,
   5.834826};
   grae = new TGraphAsymmErrors(26,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-156,156);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(-130,1,130,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

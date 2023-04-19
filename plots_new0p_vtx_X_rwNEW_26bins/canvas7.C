#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Mar 13 17:56:39 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-1.982181,293.3333,219.1875);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__19->SetBinContent(1,26.89229);
   hmc__19->SetBinContent(2,39.08515);
   hmc__19->SetBinContent(3,52.71917);
   hmc__19->SetBinContent(4,66.41398);
   hmc__19->SetBinContent(5,70.2968);
   hmc__19->SetBinContent(6,80.92842);
   hmc__19->SetBinContent(7,78.47143);
   hmc__19->SetBinContent(8,86.48526);
   hmc__19->SetBinContent(9,86.14876);
   hmc__19->SetBinContent(10,87.54967);
   hmc__19->SetBinContent(11,93.72242);
   hmc__19->SetBinContent(12,89.21027);
   hmc__19->SetBinContent(13,95.88552);
   hmc__19->SetBinContent(14,95.44467);
   hmc__19->SetBinContent(15,83.72934);
   hmc__19->SetBinContent(16,87.72386);
   hmc__19->SetBinContent(17,95.65823);
   hmc__19->SetBinContent(18,96.74433);
   hmc__19->SetBinContent(19,99.10907);
   hmc__19->SetBinContent(20,95.92301);
   hmc__19->SetBinContent(21,95.80138);
   hmc__19->SetBinContent(22,86.74613);
   hmc__19->SetBinContent(23,85.97387);
   hmc__19->SetBinContent(24,68.17985);
   hmc__19->SetBinContent(25,51.09497);
   hmc__19->SetBinContent(26,20.44372);
   hmc__19->SetBinContent(27,0.125218);
   hmc__19->SetBinError(1,10.00513);
   hmc__19->SetBinError(2,12.71135);
   hmc__19->SetBinError(3,17.18231);
   hmc__19->SetBinError(4,21.63936);
   hmc__19->SetBinError(5,21.93432);
   hmc__19->SetBinError(6,24.45325);
   hmc__19->SetBinError(7,25.29454);
   hmc__19->SetBinError(8,26.63316);
   hmc__19->SetBinError(9,26.74199);
   hmc__19->SetBinError(10,25.69857);
   hmc__19->SetBinError(11,28.28477);
   hmc__19->SetBinError(12,26.45947);
   hmc__19->SetBinError(13,32.94603);
   hmc__19->SetBinError(14,28.40786);
   hmc__19->SetBinError(15,30.07971);
   hmc__19->SetBinError(16,28.55026);
   hmc__19->SetBinError(17,26.63291);
   hmc__19->SetBinError(18,26.67032);
   hmc__19->SetBinError(19,27.79709);
   hmc__19->SetBinError(20,25.5453);
   hmc__19->SetBinError(21,28.6669);
   hmc__19->SetBinError(22,26.59744);
   hmc__19->SetBinError(23,25.7378);
   hmc__19->SetBinError(24,21.95447);
   hmc__19->SetBinError(25,19.01595);
   hmc__19->SetBinError(26,11.03855);
   hmc__19->SetBinError(27,2.724936);
   hmc__19->SetMinimum(-1.982181);
   hmc__19->SetMaximum(208.129);
   hmc__19->SetEntries(1993.425);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",26,0,260);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(104.0645);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,1.610679);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,1.148149);
   hbadmatch_stack_1->SetBinContent(5,0.9286332);
   hbadmatch_stack_1->SetBinContent(6,0.983129);
   hbadmatch_stack_1->SetBinContent(7,1.857266);
   hbadmatch_stack_1->SetBinContent(8,1.269896);
   hbadmatch_stack_1->SetBinContent(9,2.159928);
   hbadmatch_stack_1->SetBinContent(10,1.465526);
   hbadmatch_stack_1->SetBinContent(11,1.412273);
   hbadmatch_stack_1->SetBinContent(12,1.975378);
   hbadmatch_stack_1->SetBinContent(13,3.707366);
   hbadmatch_stack_1->SetBinContent(14,2.147792);
   hbadmatch_stack_1->SetBinContent(15,1.813516);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,2.38145);
   hbadmatch_stack_1->SetBinContent(18,2.042147);
   hbadmatch_stack_1->SetBinContent(19,3.189547);
   hbadmatch_stack_1->SetBinContent(20,1.694262);
   hbadmatch_stack_1->SetBinContent(21,1.368401);
   hbadmatch_stack_1->SetBinContent(22,1.148224);
   hbadmatch_stack_1->SetBinContent(23,2.077676);
   hbadmatch_stack_1->SetBinContent(24,1.571947);
   hbadmatch_stack_1->SetBinContent(25,1.746068);
   hbadmatch_stack_1->SetBinContent(26,0.5456259);
   hbadmatch_stack_1->SetBinError(1,0.6806271);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.5284502);
   hbadmatch_stack_1->SetBinError(5,0.48078);
   hbadmatch_stack_1->SetBinError(6,0.4376292);
   hbadmatch_stack_1->SetBinError(7,0.6799255);
   hbadmatch_stack_1->SetBinError(8,0.594072);
   hbadmatch_stack_1->SetBinError(9,0.9135332);
   hbadmatch_stack_1->SetBinError(10,0.6209405);
   hbadmatch_stack_1->SetBinError(11,0.6510715);
   hbadmatch_stack_1->SetBinError(12,0.7359596);
   hbadmatch_stack_1->SetBinError(13,1.040445);
   hbadmatch_stack_1->SetBinError(14,0.7364803);
   hbadmatch_stack_1->SetBinError(15,0.7652245);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.8275865);
   hbadmatch_stack_1->SetBinError(18,0.7684662);
   hbadmatch_stack_1->SetBinError(19,1.357177);
   hbadmatch_stack_1->SetBinError(20,0.6616485);
   hbadmatch_stack_1->SetBinError(21,0.5660527);
   hbadmatch_stack_1->SetBinError(22,0.5763381);
   hbadmatch_stack_1->SetBinError(23,0.7147581);
   hbadmatch_stack_1->SetBinError(24,0.6092372);
   hbadmatch_stack_1->SetBinError(25,0.6317628);
   hbadmatch_stack_1->SetBinError(26,0.3974038);
   hbadmatch_stack_1->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(1,0.6487947);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,2.110787);
   hext_stack_2->SetBinContent(4,2.6702);
   hext_stack_2->SetBinContent(5,2.428004);
   hext_stack_2->SetBinContent(6,3.330584);
   hext_stack_2->SetBinContent(7,3.083979);
   hext_stack_2->SetBinContent(8,1.704188);
   hext_stack_2->SetBinContent(9,3.889996);
   hext_stack_2->SetBinContent(10,4.442228);
   hext_stack_2->SetBinContent(11,4.214394);
   hext_stack_2->SetBinContent(12,3.483397);
   hext_stack_2->SetBinContent(13,3.476217);
   hext_stack_2->SetBinContent(14,1.704188);
   hext_stack_2->SetBinContent(15,4.53161);
   hext_stack_2->SetBinContent(16,3.159);
   hext_stack_2->SetBinContent(17,6.468042);
   hext_stack_2->SetBinContent(18,5.344809);
   hext_stack_2->SetBinContent(19,4.93821);
   hext_stack_2->SetBinContent(20,5.993603);
   hext_stack_2->SetBinContent(21,6.075805);
   hext_stack_2->SetBinContent(22,3.159);
   hext_stack_2->SetBinContent(23,7.187449);
   hext_stack_2->SetBinContent(24,4.468179);
   hext_stack_2->SetBinContent(25,3.412785);
   hext_stack_2->SetBinContent(26,1.861411);
   hext_stack_2->SetBinError(1,0.4587671);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.8669371);
   hext_stack_2->SetBinError(4,1.050314);
   hext_stack_2->SetBinError(5,1.028599);
   hext_stack_2->SetBinError(6,1.116937);
   hext_stack_2->SetBinError(7,1.033093);
   hext_stack_2->SetBinError(8,0.7656743);
   hext_stack_2->SetBinError(9,1.264566);
   hext_stack_2->SetBinError(10,1.466939);
   hext_stack_2->SetBinError(11,1.305512);
   hext_stack_2->SetBinError(12,1.197416);
   hext_stack_2->SetBinError(13,1.278674);
   hext_stack_2->SetBinError(14,0.7656743);
   hext_stack_2->SetBinError(15,1.418025);
   hext_stack_2->SetBinError(16,1.152637);
   hext_stack_2->SetBinError(17,1.783178);
   hext_stack_2->SetBinError(18,1.530177);
   hext_stack_2->SetBinError(19,1.475167);
   hext_stack_2->SetBinError(20,1.59747);
   hext_stack_2->SetBinError(21,1.616168);
   hext_stack_2->SetBinError(22,1.152637);
   hext_stack_2->SetBinError(23,1.875196);
   hext_stack_2->SetBinError(24,1.297469);
   hext_stack_2->SetBinError(25,1.14352);
   hext_stack_2->SetBinError(26,0.9526997);
   hext_stack_2->SetEntries(235);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.2188956);
   hdirt_stack_3->SetBinContent(3,0.7798856);
   hdirt_stack_3->SetBinContent(4,0.1753185);
   hdirt_stack_3->SetBinContent(5,0.6566868);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.4854208);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.2605212);
   hdirt_stack_3->SetBinContent(13,0.3381872);
   hdirt_stack_3->SetBinContent(14,0.2516114);
   hdirt_stack_3->SetBinContent(16,0.6030744);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.2620342);
   hdirt_stack_3->SetBinContent(21,0.6951543);
   hdirt_stack_3->SetBinContent(22,0.3569671);
   hdirt_stack_3->SetBinContent(23,0.5628052);
   hdirt_stack_3->SetBinContent(24,0.1651799);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.2188956);
   hdirt_stack_3->SetBinError(3,0.4839582);
   hdirt_stack_3->SetBinError(4,0.1753185);
   hdirt_stack_3->SetBinError(5,0.3791383);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.3678436);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2605212);
   hdirt_stack_3->SetBinError(13,0.3381872);
   hdirt_stack_3->SetBinError(14,0.2516114);
   hdirt_stack_3->SetBinError(16,0.3509261);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.2620342);
   hdirt_stack_3->SetBinError(21,0.4258516);
   hdirt_stack_3->SetBinError(22,0.258803);
   hdirt_stack_3->SetBinError(23,0.4466122);
   hdirt_stack_3->SetBinError(24,0.1651799);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetEntries(33);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(1,9.717951);
   houtFV_stack_4->SetBinContent(2,1.268811);
   houtFV_stack_4->SetBinContent(3,1.261889);
   houtFV_stack_4->SetBinContent(4,0.9835768);
   houtFV_stack_4->SetBinContent(5,1.857266);
   houtFV_stack_4->SetBinContent(6,2.737987);
   houtFV_stack_4->SetBinContent(7,1.372227);
   houtFV_stack_4->SetBinContent(8,2.339216);
   houtFV_stack_4->SetBinContent(9,1.465526);
   houtFV_stack_4->SetBinContent(10,1.660551);
   houtFV_stack_4->SetBinContent(11,2.252388);
   houtFV_stack_4->SetBinContent(12,1.320373);
   houtFV_stack_4->SetBinContent(13,1.463836);
   houtFV_stack_4->SetBinContent(14,1.713804);
   houtFV_stack_4->SetBinContent(15,1.357224);
   houtFV_stack_4->SetBinContent(16,2.537621);
   houtFV_stack_4->SetBinContent(17,1.515328);
   houtFV_stack_4->SetBinContent(18,1.568848);
   houtFV_stack_4->SetBinContent(19,2.340825);
   houtFV_stack_4->SetBinContent(20,0.9768147);
   houtFV_stack_4->SetBinContent(21,2.205138);
   houtFV_stack_4->SetBinContent(22,1.121968);
   houtFV_stack_4->SetBinContent(23,2.137584);
   houtFV_stack_4->SetBinContent(24,0.7868615);
   houtFV_stack_4->SetBinContent(25,1.804013);
   houtFV_stack_4->SetBinContent(26,6.272351);
   houtFV_stack_4->SetBinError(1,1.554855);
   houtFV_stack_4->SetBinError(2,0.5889569);
   houtFV_stack_4->SetBinError(3,0.518272);
   houtFV_stack_4->SetBinError(4,0.4398689);
   houtFV_stack_4->SetBinError(5,0.6799255);
   houtFV_stack_4->SetBinError(6,0.8383468);
   houtFV_stack_4->SetBinError(7,0.5185479);
   houtFV_stack_4->SetBinError(8,0.8089383);
   houtFV_stack_4->SetBinError(9,0.6209405);
   houtFV_stack_4->SetBinError(10,0.650847);
   houtFV_stack_4->SetBinError(11,0.7350883);
   houtFV_stack_4->SetBinError(12,0.5548703);
   houtFV_stack_4->SetBinError(13,0.620407);
   houtFV_stack_4->SetBinError(14,0.6207051);
   houtFV_stack_4->SetBinError(15,0.5690936);
   houtFV_stack_4->SetBinError(16,0.8329108);
   houtFV_stack_4->SetBinError(17,0.6383356);
   houtFV_stack_4->SetBinError(18,0.6830356);
   houtFV_stack_4->SetBinError(19,0.7194731);
   houtFV_stack_4->SetBinError(20,0.4368475);
   houtFV_stack_4->SetBinError(21,0.812918);
   houtFV_stack_4->SetBinError(22,0.5181909);
   houtFV_stack_4->SetBinError(23,0.6896655);
   houtFV_stack_4->SetBinError(24,0.3934307);
   houtFV_stack_4->SetBinError(25,0.7075491);
   houtFV_stack_4->SetBinError(26,1.334652);
   houtFV_stack_4->SetEntries(240);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.501704);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8375041);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8502901);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6961718);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8654041);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.125218);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2454852);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3487535);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3309054);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2155126);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3498677);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1012383);
   hNCpi0inFVqe_stack_6->SetEntries(242);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.589649);
   hNCpi0inFVres_stack_7->SetBinContent(2,19.94177);
   hNCpi0inFVres_stack_7->SetBinContent(3,26.23722);
   hNCpi0inFVres_stack_7->SetBinContent(4,32.50845);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.27082);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.88745);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.98392);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.13278);
   hNCpi0inFVres_stack_7->SetBinContent(9,42.88098);
   hNCpi0inFVres_stack_7->SetBinContent(10,43.80648);
   hNCpi0inFVres_stack_7->SetBinContent(11,49.57088);
   hNCpi0inFVres_stack_7->SetBinContent(12,42.71505);
   hNCpi0inFVres_stack_7->SetBinContent(13,43.03111);
   hNCpi0inFVres_stack_7->SetBinContent(14,48.0548);
   hNCpi0inFVres_stack_7->SetBinContent(15,41.67028);
   hNCpi0inFVres_stack_7->SetBinContent(16,44.38377);
   hNCpi0inFVres_stack_7->SetBinContent(17,46.50218);
   hNCpi0inFVres_stack_7->SetBinContent(18,42.12485);
   hNCpi0inFVres_stack_7->SetBinContent(19,43.59277);
   hNCpi0inFVres_stack_7->SetBinContent(20,41.17624);
   hNCpi0inFVres_stack_7->SetBinContent(21,44.73386);
   hNCpi0inFVres_stack_7->SetBinContent(22,43.01218);
   hNCpi0inFVres_stack_7->SetBinContent(23,34.06653);
   hNCpi0inFVres_stack_7->SetBinContent(24,29.19746);
   hNCpi0inFVres_stack_7->SetBinContent(25,19.53839);
   hNCpi0inFVres_stack_7->SetBinContent(26,4.574287);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.125218);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7299524);
   hNCpi0inFVres_stack_7->SetBinError(2,1.450522);
   hNCpi0inFVres_stack_7->SetBinError(3,1.620757);
   hNCpi0inFVres_stack_7->SetBinError(4,1.835506);
   hNCpi0inFVres_stack_7->SetBinError(5,1.988957);
   hNCpi0inFVres_stack_7->SetBinError(6,2.150703);
   hNCpi0inFVres_stack_7->SetBinError(7,1.999058);
   hNCpi0inFVres_stack_7->SetBinError(8,2.180287);
   hNCpi0inFVres_stack_7->SetBinError(9,2.140499);
   hNCpi0inFVres_stack_7->SetBinError(10,2.1138);
   hNCpi0inFVres_stack_7->SetBinError(11,2.362176);
   hNCpi0inFVres_stack_7->SetBinError(12,2.088236);
   hNCpi0inFVres_stack_7->SetBinError(13,2.173878);
   hNCpi0inFVres_stack_7->SetBinError(14,2.310406);
   hNCpi0inFVres_stack_7->SetBinError(15,2.164377);
   hNCpi0inFVres_stack_7->SetBinError(16,2.176577);
   hNCpi0inFVres_stack_7->SetBinError(17,2.231962);
   hNCpi0inFVres_stack_7->SetBinError(18,2.106515);
   hNCpi0inFVres_stack_7->SetBinError(19,2.177009);
   hNCpi0inFVres_stack_7->SetBinError(20,2.065529);
   hNCpi0inFVres_stack_7->SetBinError(21,2.25423);
   hNCpi0inFVres_stack_7->SetBinError(22,2.163799);
   hNCpi0inFVres_stack_7->SetBinError(23,1.890143);
   hNCpi0inFVres_stack_7->SetBinError(24,1.725459);
   hNCpi0inFVres_stack_7->SetBinError(25,1.499925);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6661091);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1012383);
   hNCpi0inFVres_stack_7->SetEntries(17544);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.9901175);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.10887);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.234831);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.775908);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.381971);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.03108);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.753576);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.626525);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.181949);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.114117);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.699688);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.905357);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.449916);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.248375);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.220812);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.825738);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.790686);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.742127);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.542162);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.486442);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.8068);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.699104);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.681166);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.215164);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.602197);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.4042178);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1854181);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5865691);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6199041);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8581689);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7099035);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9222216);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9211309);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.875752);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8253787);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9307635);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9806518);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.861375);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.963165);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8236477);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8620527);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9955869);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8269492);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9890175);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8820993);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9055405);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8653203);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9055053);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9100785);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7660724);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7674686);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1342881);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(20);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(1,4.589913);
   hCCpi0inFV_stack_10->SetBinContent(2,5.176678);
   hCCpi0inFV_stack_10->SetBinContent(3,9.493723);
   hCCpi0inFV_stack_10->SetBinContent(4,9.857882);
   hCCpi0inFV_stack_10->SetBinContent(5,9.716719);
   hCCpi0inFV_stack_10->SetBinContent(6,10.37303);
   hCCpi0inFV_stack_10->SetBinContent(7,9.96608);
   hCCpi0inFV_stack_10->SetBinContent(8,13.09488);
   hCCpi0inFV_stack_10->SetBinContent(9,10.51059);
   hCCpi0inFV_stack_10->SetBinContent(10,10.44864);
   hCCpi0inFV_stack_10->SetBinContent(11,8.56237);
   hCCpi0inFV_stack_10->SetBinContent(12,11.1436);
   hCCpi0inFV_stack_10->SetBinContent(13,13.08769);
   hCCpi0inFV_stack_10->SetBinContent(14,12.16437);
   hCCpi0inFV_stack_10->SetBinContent(15,8.879377);
   hCCpi0inFV_stack_10->SetBinContent(16,10.93388);
   hCCpi0inFV_stack_10->SetBinContent(17,12.33949);
   hCCpi0inFV_stack_10->SetBinContent(18,15.42819);
   hCCpi0inFV_stack_10->SetBinContent(19,12.74043);
   hCCpi0inFV_stack_10->SetBinContent(20,15.93929);
   hCCpi0inFV_stack_10->SetBinContent(21,13.1473);
   hCCpi0inFV_stack_10->SetBinContent(22,11.82026);
   hCCpi0inFV_stack_10->SetBinContent(23,12.94254);
   hCCpi0inFV_stack_10->SetBinContent(24,10.59509);
   hCCpi0inFV_stack_10->SetBinContent(25,7.083817);
   hCCpi0inFV_stack_10->SetBinContent(26,3.806432);
   hCCpi0inFV_stack_10->SetBinError(1,1.092737);
   hCCpi0inFV_stack_10->SetBinError(2,1.144046);
   hCCpi0inFV_stack_10->SetBinError(3,1.624589);
   hCCpi0inFV_stack_10->SetBinError(4,1.555731);
   hCCpi0inFV_stack_10->SetBinError(5,1.594542);
   hCCpi0inFV_stack_10->SetBinError(6,1.557883);
   hCCpi0inFV_stack_10->SetBinError(7,1.531113);
   hCCpi0inFV_stack_10->SetBinError(8,1.853081);
   hCCpi0inFV_stack_10->SetBinError(9,1.581695);
   hCCpi0inFV_stack_10->SetBinError(10,1.653789);
   hCCpi0inFV_stack_10->SetBinError(11,1.409092);
   hCCpi0inFV_stack_10->SetBinError(12,1.665471);
   hCCpi0inFV_stack_10->SetBinError(13,1.830333);
   hCCpi0inFV_stack_10->SetBinError(14,1.811526);
   hCCpi0inFV_stack_10->SetBinError(15,1.492917);
   hCCpi0inFV_stack_10->SetBinError(16,1.609976);
   hCCpi0inFV_stack_10->SetBinError(17,1.79202);
   hCCpi0inFV_stack_10->SetBinError(18,1.954989);
   hCCpi0inFV_stack_10->SetBinError(19,1.77621);
   hCCpi0inFV_stack_10->SetBinError(20,2.072813);
   hCCpi0inFV_stack_10->SetBinError(21,1.799547);
   hCCpi0inFV_stack_10->SetBinError(22,1.750767);
   hCCpi0inFV_stack_10->SetBinError(23,1.808986);
   hCCpi0inFV_stack_10->SetBinError(24,1.635837);
   hCCpi0inFV_stack_10->SetBinError(25,1.31586);
   hCCpi0inFV_stack_10->SetBinError(26,1.020103);
   hCCpi0inFV_stack_10->SetEntries(1165);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,2.145881);
   hNCinFV_stack_11->SetBinContent(2,5.855343);
   hNCinFV_stack_11->SetBinContent(3,3.462874);
   hNCinFV_stack_11->SetBinContent(4,7.198776);
   hNCinFV_stack_11->SetBinContent(5,6.395617);
   hNCinFV_stack_11->SetBinContent(6,6.984073);
   hNCinFV_stack_11->SetBinContent(7,7.285603);
   hNCinFV_stack_11->SetBinContent(8,9.564804);
   hNCinFV_stack_11->SetBinContent(9,8.164365);
   hNCinFV_stack_11->SetBinContent(10,7.62409);
   hNCinFV_stack_11->SetBinContent(11,5.771895);
   hNCinFV_stack_11->SetBinContent(12,7.864524);
   hNCinFV_stack_11->SetBinContent(13,9.750294);
   hNCinFV_stack_11->SetBinContent(14,8.882758);
   hNCinFV_stack_11->SetBinContent(15,6.156874);
   hNCinFV_stack_11->SetBinContent(16,7.814044);
   hNCinFV_stack_11->SetBinContent(17,8.412642);
   hNCinFV_stack_11->SetBinContent(18,7.088888);
   hNCinFV_stack_11->SetBinContent(19,7.767552);
   hNCinFV_stack_11->SetBinContent(20,8.349246);
   hNCinFV_stack_11->SetBinContent(21,8.215927);
   hNCinFV_stack_11->SetBinContent(22,7.182478);
   hNCinFV_stack_11->SetBinContent(23,8.731451);
   hNCinFV_stack_11->SetBinContent(24,4.646547);
   hNCinFV_stack_11->SetBinContent(25,4.396579);
   hNCinFV_stack_11->SetBinContent(26,0.7302274);
   hNCinFV_stack_11->SetBinError(1,0.785499);
   hNCinFV_stack_11->SetBinError(2,1.240814);
   hNCinFV_stack_11->SetBinError(3,0.961023);
   hNCinFV_stack_11->SetBinError(4,1.28769);
   hNCinFV_stack_11->SetBinError(5,1.302061);
   hNCinFV_stack_11->SetBinError(6,1.345656);
   hNCinFV_stack_11->SetBinError(7,1.331229);
   hNCinFV_stack_11->SetBinError(8,1.56915);
   hNCinFV_stack_11->SetBinError(9,1.429326);
   hNCinFV_stack_11->SetBinError(10,1.373765);
   hNCinFV_stack_11->SetBinError(11,1.194537);
   hNCinFV_stack_11->SetBinError(12,1.443002);
   hNCinFV_stack_11->SetBinError(13,1.641621);
   hNCinFV_stack_11->SetBinError(14,1.493361);
   hNCinFV_stack_11->SetBinError(15,1.225153);
   hNCinFV_stack_11->SetBinError(16,1.386823);
   hNCinFV_stack_11->SetBinError(17,1.429223);
   hNCinFV_stack_11->SetBinError(18,1.316615);
   hNCinFV_stack_11->SetBinError(19,1.401518);
   hNCinFV_stack_11->SetBinError(20,1.441192);
   hNCinFV_stack_11->SetBinError(21,1.415621);
   hNCinFV_stack_11->SetBinError(22,1.360202);
   hNCinFV_stack_11->SetBinError(23,1.532455);
   hNCinFV_stack_11->SetBinError(24,1.075673);
   hNCinFV_stack_11->SetBinError(25,1.075501);
   hNCinFV_stack_11->SetBinError(26,0.4379386);
   hNCinFV_stack_11->SetEntries(747);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(2,2.826269);
   hnumuCCinFV_stack_12->SetBinContent(3,3.21819);
   hnumuCCinFV_stack_12->SetBinContent(4,5.545449);
   hnumuCCinFV_stack_12->SetBinContent(5,4.953943);
   hnumuCCinFV_stack_12->SetBinContent(6,4.962647);
   hnumuCCinFV_stack_12->SetBinContent(7,6.716578);
   hnumuCCinFV_stack_12->SetBinContent(8,6.640771);
   hnumuCCinFV_stack_12->SetBinContent(9,7.789851);
   hnumuCCinFV_stack_12->SetBinContent(10,8.703266);
   hnumuCCinFV_stack_12->SetBinContent(11,11.69221);
   hnumuCCinFV_stack_12->SetBinContent(12,12.32856);
   hnumuCCinFV_stack_12->SetBinContent(13,11.17109);
   hnumuCCinFV_stack_12->SetBinContent(14,12.95645);
   hnumuCCinFV_stack_12->SetBinContent(15,10.41662);
   hnumuCCinFV_stack_12->SetBinContent(16,8.682706);
   hnumuCCinFV_stack_12->SetBinContent(17,9.606903);
   hnumuCCinFV_stack_12->SetBinContent(18,13.37061);
   hnumuCCinFV_stack_12->SetBinContent(19,15.72626);
   hnumuCCinFV_stack_12->SetBinContent(20,11.36706);
   hnumuCCinFV_stack_12->SetBinContent(21,11.99948);
   hnumuCCinFV_stack_12->SetBinContent(22,10.20877);
   hnumuCCinFV_stack_12->SetBinContent(23,9.039989);
   hnumuCCinFV_stack_12->SetBinContent(24,10.48964);
   hnumuCCinFV_stack_12->SetBinContent(25,7.897327);
   hnumuCCinFV_stack_12->SetBinContent(26,2.123954);
   hnumuCCinFV_stack_12->SetBinError(1,0.48078);
   hnumuCCinFV_stack_12->SetBinError(2,0.7876539);
   hnumuCCinFV_stack_12->SetBinError(3,0.8912169);
   hnumuCCinFV_stack_12->SetBinError(4,1.265211);
   hnumuCCinFV_stack_12->SetBinError(5,1.511493);
   hnumuCCinFV_stack_12->SetBinError(6,1.185863);
   hnumuCCinFV_stack_12->SetBinError(7,1.3161);
   hnumuCCinFV_stack_12->SetBinError(8,1.52079);
   hnumuCCinFV_stack_12->SetBinError(9,1.874641);
   hnumuCCinFV_stack_12->SetBinError(10,1.709863);
   hnumuCCinFV_stack_12->SetBinError(11,1.924889);
   hnumuCCinFV_stack_12->SetBinError(12,1.977635);
   hnumuCCinFV_stack_12->SetBinError(13,1.938523);
   hnumuCCinFV_stack_12->SetBinError(14,2.380391);
   hnumuCCinFV_stack_12->SetBinError(15,1.731555);
   hnumuCCinFV_stack_12->SetBinError(16,1.675863);
   hnumuCCinFV_stack_12->SetBinError(17,1.695791);
   hnumuCCinFV_stack_12->SetBinError(18,1.940373);
   hnumuCCinFV_stack_12->SetBinError(19,2.765978);
   hnumuCCinFV_stack_12->SetBinError(20,1.976286);
   hnumuCCinFV_stack_12->SetBinError(21,1.792177);
   hnumuCCinFV_stack_12->SetBinError(22,1.672737);
   hnumuCCinFV_stack_12->SetBinError(23,1.611147);
   hnumuCCinFV_stack_12->SetBinError(24,1.745006);
   hnumuCCinFV_stack_12->SetBinError(25,2.756203);
   hnumuCCinFV_stack_12->SetBinError(26,0.7715519);
   hnumuCCinFV_stack_12->SetEntries(869);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.4424184);
   hnueCCinFV_stack_13->SetBinContent(6,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(7,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(9,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(10,0.6193069);
   hnueCCinFV_stack_13->SetBinContent(11,0.3941557);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(15,0.7897245);
   hnueCCinFV_stack_13->SetBinContent(17,0.536893);
   hnueCCinFV_stack_13->SetBinContent(18,1.244012);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,1.020533);
   hnueCCinFV_stack_13->SetBinContent(21,0.441907);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.7091648);
   hnueCCinFV_stack_13->SetBinContent(24,0.4296511);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.3147324);
   hnueCCinFV_stack_13->SetBinError(6,0.2476759);
   hnueCCinFV_stack_13->SetBinError(7,0.2871419);
   hnueCCinFV_stack_13->SetBinError(9,0.4213728);
   hnueCCinFV_stack_13->SetBinError(10,0.4458496);
   hnueCCinFV_stack_13->SetBinError(11,0.2787107);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.3387718);
   hnueCCinFV_stack_13->SetBinError(15,0.6258613);
   hnueCCinFV_stack_13->SetBinError(17,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.5789449);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.5892049);
   hnueCCinFV_stack_13->SetBinError(21,0.3143499);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.5038584);
   hnueCCinFV_stack_13->SetBinError(24,0.305097);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetEntries(40);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__20->SetBinContent(1,26.89229);
   hmcerror__20->SetBinContent(2,39.08515);
   hmcerror__20->SetBinContent(3,52.71917);
   hmcerror__20->SetBinContent(4,66.41398);
   hmcerror__20->SetBinContent(5,70.2968);
   hmcerror__20->SetBinContent(6,80.92842);
   hmcerror__20->SetBinContent(7,78.47143);
   hmcerror__20->SetBinContent(8,86.48526);
   hmcerror__20->SetBinContent(9,86.14876);
   hmcerror__20->SetBinContent(10,87.54967);
   hmcerror__20->SetBinContent(11,93.72242);
   hmcerror__20->SetBinContent(12,89.21027);
   hmcerror__20->SetBinContent(13,95.88552);
   hmcerror__20->SetBinContent(14,95.44467);
   hmcerror__20->SetBinContent(15,83.72934);
   hmcerror__20->SetBinContent(16,87.72386);
   hmcerror__20->SetBinContent(17,95.65823);
   hmcerror__20->SetBinContent(18,96.74433);
   hmcerror__20->SetBinContent(19,99.10907);
   hmcerror__20->SetBinContent(20,95.92301);
   hmcerror__20->SetBinContent(21,95.80138);
   hmcerror__20->SetBinContent(22,86.74613);
   hmcerror__20->SetBinContent(23,85.97387);
   hmcerror__20->SetBinContent(24,68.17985);
   hmcerror__20->SetBinContent(25,51.09497);
   hmcerror__20->SetBinContent(26,20.44372);
   hmcerror__20->SetBinContent(27,0.125218);
   hmcerror__20->SetBinError(1,10.00513);
   hmcerror__20->SetBinError(2,12.71135);
   hmcerror__20->SetBinError(3,17.18231);
   hmcerror__20->SetBinError(4,21.63936);
   hmcerror__20->SetBinError(5,21.93432);
   hmcerror__20->SetBinError(6,24.45325);
   hmcerror__20->SetBinError(7,25.29454);
   hmcerror__20->SetBinError(8,26.63316);
   hmcerror__20->SetBinError(9,26.74199);
   hmcerror__20->SetBinError(10,25.69857);
   hmcerror__20->SetBinError(11,28.28477);
   hmcerror__20->SetBinError(12,26.45947);
   hmcerror__20->SetBinError(13,32.94603);
   hmcerror__20->SetBinError(14,28.40786);
   hmcerror__20->SetBinError(15,30.07971);
   hmcerror__20->SetBinError(16,28.55026);
   hmcerror__20->SetBinError(17,26.63291);
   hmcerror__20->SetBinError(18,26.67032);
   hmcerror__20->SetBinError(19,27.79709);
   hmcerror__20->SetBinError(20,25.5453);
   hmcerror__20->SetBinError(21,28.6669);
   hmcerror__20->SetBinError(22,26.59744);
   hmcerror__20->SetBinError(23,25.7378);
   hmcerror__20->SetBinError(24,21.95447);
   hmcerror__20->SetBinError(25,19.01595);
   hmcerror__20->SetBinError(26,11.03855);
   hmcerror__20->SetBinError(27,2.724936);
   hmcerror__20->SetEntries(1993.425);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3025[26] = {
   19,
   17,
   42,
   51,
   48,
   53,
   60,
   56,
   70,
   75,
   78,
   58,
   68,
   63,
   71,
   68,
   70,
   75,
   76,
   61,
   71,
   66,
   48,
   40,
   35,
   13};
   Double_t _felx3025[26] = {
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
   Double_t _fely3025[26] = {
   4.5151,
   4.2835,
   6.6155,
   7.2725,
   7.0604,
   7.4105,
   7.8743,
   7.6127,
   8.4925,
   8.7852,
   8.9562,
   7.7446,
   8.3726,
   8.0648,
   8.5518,
   8.3726,
   8.4925,
   8.7852,
   8.8425,
   7.9383,
   8.5518,
   8.2509,
   7.0604,
   6.4604,
   6.0548,
   3.77763};
   Double_t _fehx3025[26] = {
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
   Double_t _fehy3025[26] = {
   4.3011,
   4.0673,
   6.4104,
   7.0686,
   6.8561,
   7.2068,
   7.6713,
   7.4094,
   8.2902,
   8.5831,
   8.7542,
   7.5415,
   8.1701,
   7.862,
   8.3496,
   8.1701,
   8.2902,
   8.5831,
   8.6406,
   7.7354,
   8.3496,
   8.0483,
   6.8561,
   6.2549,
   5.8483,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,286);
   Graph_Graph3025->SetMinimum(1.469187);
   Graph_Graph3025->SetMaximum(94.50738);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.6/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 94.1","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  950.2","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.5","F");

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 176.4","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3026[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3026[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[26] = {
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
   Double_t _fely3026[26] = {
   0.3720446,
   0.3252218,
   0.3259215,
   0.3258254,
   0.3120244,
   0.302159,
   0.3223408,
   0.3079503,
   0.3104164,
   0.2935313,
   0.301793,
   0.2965967,
   0.3435975,
   0.2976369,
   0.3592493,
   0.3254561,
   0.2784174,
   0.2756784,
   0.2804697,
   0.2663105,
   0.2992327,
   0.3066124,
   0.2993677,
   0.3220082,
   0.3721687,
   0.5399482};
   Double_t _fehx3026[26] = {
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
   Double_t _fehy3026[26] = {
   0.3720446,
   0.3252218,
   0.3259215,
   0.3258254,
   0.3120244,
   0.302159,
   0.3223408,
   0.3079503,
   0.3104164,
   0.2935313,
   0.301793,
   0.2965967,
   0.3435975,
   0.2976369,
   0.3592493,
   0.3254561,
   0.2784174,
   0.2756784,
   0.2804697,
   0.2663105,
   0.2992327,
   0.3066124,
   0.2993677,
   0.3220082,
   0.3721687,
   0.5399482};
   grae = new TGraphAsymmErrors(26,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,286);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3027[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[26] = {
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
   Double_t _fely3027[26] = {
   0.2309934,
   0.2372349,
   0.2344448,
   0.2361713,
   0.2589343,
   0.2511468,
   0.2448213,
   0.2582876,
   0.2416725,
   0.2367232,
   0.2498459,
   0.2453816,
   0.2315727,
   0.2493376,
   0.2351295,
   0.2521652,
   0.2307716,
   0.2348856,
   0.2367769,
   0.2239845,
   0.2280095,
   0.2411518,
   0.2192121,
   0.2282209,
   0.2378715,
   0.2376637};
   Double_t _fehx3027[26] = {
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
   Double_t _fehy3027[26] = {
   0.2309934,
   0.2372349,
   0.2344448,
   0.2361713,
   0.2589343,
   0.2511468,
   0.2448213,
   0.2582876,
   0.2416725,
   0.2367232,
   0.2498459,
   0.2453816,
   0.2315727,
   0.2493376,
   0.2351295,
   0.2521652,
   0.2307716,
   0.2348856,
   0.2367769,
   0.2239845,
   0.2280095,
   0.2411518,
   0.2192121,
   0.2282209,
   0.2378715,
   0.2376637};
   grae = new TGraphAsymmErrors(26,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,286);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3028[26] = {
   0.7065222,
   0.4349478,
   0.7966741,
   0.7679106,
   0.6828191,
   0.6548997,
   0.7646095,
   0.6475092,
   0.812548,
   0.8566566,
   0.8322448,
   0.6501494,
   0.709179,
   0.6600683,
   0.8479704,
   0.7751597,
   0.7317719,
   0.7752392,
   0.7668319,
   0.6359267,
   0.7411167,
   0.7608408,
   0.5583092,
   0.5866836,
   0.684999,
   0.635892};
   Double_t _felx3028[26] = {
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
   Double_t _fely3028[26] = {
   0.1678957,
   0.109594,
   0.1254857,
   0.1095025,
   0.100437,
   0.09156857,
   0.1003461,
   0.08802309,
   0.09857948,
   0.1003453,
   0.09556091,
   0.08681288,
   0.08731871,
   0.08449712,
   0.1021362,
   0.09544267,
   0.08877961,
   0.09080842,
   0.08921989,
   0.08275699,
   0.08926594,
   0.09511548,
   0.08212263,
   0.09475527,
   0.1185009,
   0.1847819};
   Double_t _fehx3028[26] = {
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
   Double_t _fehy3028[26] = {
   0.159938,
   0.1040625,
   0.1215952,
   0.1064324,
   0.09753076,
   0.08905153,
   0.09775915,
   0.0856724,
   0.09623122,
   0.09803692,
   0.09340561,
   0.08453623,
   0.08520682,
   0.08237233,
   0.09972132,
   0.09313429,
   0.08666479,
   0.08871941,
   0.08718274,
   0.08064175,
   0.08715532,
   0.09277993,
   0.07974632,
   0.09174118,
   0.1144594,
   0.1739018};
   grae = new TGraphAsymmErrors(26,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,286);
   Graph_Graph3028->SetMinimum(0.2624198);
   Graph_Graph3028->SetMaximum(1.017627);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,260,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

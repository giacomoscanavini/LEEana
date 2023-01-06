#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 21:27:22 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-7.692308,-32.36,56.41026,3578.335);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__10->SetBinContent(1,1545.502);
   hmc__10->SetBinContent(2,169.1158);
   hmc__10->SetBinContent(3,173.9432);
   hmc__10->SetBinContent(4,162.2671);
   hmc__10->SetBinContent(5,165.8287);
   hmc__10->SetBinContent(6,137.7941);
   hmc__10->SetBinContent(7,128.8975);
   hmc__10->SetBinContent(8,123.4178);
   hmc__10->SetBinContent(9,118.2623);
   hmc__10->SetBinContent(10,115.086);
   hmc__10->SetBinContent(11,90.07684);
   hmc__10->SetBinContent(12,79.94933);
   hmc__10->SetBinContent(13,69.96029);
   hmc__10->SetBinContent(14,61.47493);
   hmc__10->SetBinContent(15,48.63262);
   hmc__10->SetBinContent(16,48.31815);
   hmc__10->SetBinContent(17,47.35207);
   hmc__10->SetBinContent(18,40.658);
   hmc__10->SetBinContent(19,37.13529);
   hmc__10->SetBinContent(20,30.2654);
   hmc__10->SetBinContent(21,335.5264);
   hmc__10->SetBinError(1,337.8895);
   hmc__10->SetBinError(2,51.82785);
   hmc__10->SetBinError(3,46.45441);
   hmc__10->SetBinError(4,44.74834);
   hmc__10->SetBinError(5,51.31973);
   hmc__10->SetBinError(6,38.34291);
   hmc__10->SetBinError(7,32.13784);
   hmc__10->SetBinError(8,38.0885);
   hmc__10->SetBinError(9,34.86331);
   hmc__10->SetBinError(10,32.97328);
   hmc__10->SetBinError(11,27.0933);
   hmc__10->SetBinError(12,22.22631);
   hmc__10->SetBinError(13,19.8328);
   hmc__10->SetBinError(14,23.61441);
   hmc__10->SetBinError(15,15.75855);
   hmc__10->SetBinError(16,16.76114);
   hmc__10->SetBinError(17,15.88721);
   hmc__10->SetBinError(18,14.65552);
   hmc__10->SetBinError(19,14.96004);
   hmc__10->SetBinError(20,12.00946);
   hmc__10->SetBinError(21,77.91381);
   hmc__10->SetMinimum(-32.36);
   hmc__10->SetMaximum(3397.8);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,50);
   hs4_stack_4->SetMinimum(-1.545884e-08);
   hs4_stack_4->SetMaximum(1622.777);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,34.67676);
   hbadmatch_stack_1->SetBinContent(2,3.715717);
   hbadmatch_stack_1->SetBinContent(3,3.290504);
   hbadmatch_stack_1->SetBinContent(4,4.29684);
   hbadmatch_stack_1->SetBinContent(5,2.774935);
   hbadmatch_stack_1->SetBinContent(6,3.291076);
   hbadmatch_stack_1->SetBinContent(7,2.136966);
   hbadmatch_stack_1->SetBinContent(8,2.866202);
   hbadmatch_stack_1->SetBinContent(9,2.202112);
   hbadmatch_stack_1->SetBinContent(10,1.999793);
   hbadmatch_stack_1->SetBinContent(11,1.895396);
   hbadmatch_stack_1->SetBinContent(12,1.1341);
   hbadmatch_stack_1->SetBinContent(13,1.608988);
   hbadmatch_stack_1->SetBinContent(14,2.037225);
   hbadmatch_stack_1->SetBinContent(15,2.255667);
   hbadmatch_stack_1->SetBinContent(16,0.8313336);
   hbadmatch_stack_1->SetBinContent(17,1.028984);
   hbadmatch_stack_1->SetBinContent(18,1.913843);
   hbadmatch_stack_1->SetBinContent(19,1.638192);
   hbadmatch_stack_1->SetBinContent(20,1.151677);
   hbadmatch_stack_1->SetBinContent(21,20.83897);
   hbadmatch_stack_1->SetBinError(1,3.206917);
   hbadmatch_stack_1->SetBinError(2,1.041694);
   hbadmatch_stack_1->SetBinError(3,0.9842637);
   hbadmatch_stack_1->SetBinError(4,1.879915);
   hbadmatch_stack_1->SetBinError(5,0.8748575);
   hbadmatch_stack_1->SetBinError(6,1.332771);
   hbadmatch_stack_1->SetBinError(7,0.695017);
   hbadmatch_stack_1->SetBinError(8,0.8556248);
   hbadmatch_stack_1->SetBinError(9,0.7319539);
   hbadmatch_stack_1->SetBinError(10,0.6512723);
   hbadmatch_stack_1->SetBinError(11,0.7207528);
   hbadmatch_stack_1->SetBinError(12,0.5945658);
   hbadmatch_stack_1->SetBinError(13,0.6801404);
   hbadmatch_stack_1->SetBinError(14,0.8828104);
   hbadmatch_stack_1->SetBinError(15,0.8633065);
   hbadmatch_stack_1->SetBinError(16,0.5054927);
   hbadmatch_stack_1->SetBinError(17,0.630536);
   hbadmatch_stack_1->SetBinError(18,0.7458596);
   hbadmatch_stack_1->SetBinError(19,0.7720364);
   hbadmatch_stack_1->SetBinError(20,0.5263188);
   hbadmatch_stack_1->SetBinError(21,2.88179);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,204.1104);
   hext_stack_2->SetBinContent(2,18.1871);
   hext_stack_2->SetBinContent(3,17.828);
   hext_stack_2->SetBinContent(4,16.8504);
   hext_stack_2->SetBinContent(5,24.60161);
   hext_stack_2->SetBinContent(6,14.43675);
   hext_stack_2->SetBinContent(7,17.99958);
   hext_stack_2->SetBinContent(8,15.14621);
   hext_stack_2->SetBinContent(9,13.90928);
   hext_stack_2->SetBinContent(10,13.02824);
   hext_stack_2->SetBinContent(11,11.63686);
   hext_stack_2->SetBinContent(12,10.93181);
   hext_stack_2->SetBinContent(13,12.44287);
   hext_stack_2->SetBinContent(14,3.159);
   hext_stack_2->SetBinContent(15,3.159);
   hext_stack_2->SetBinContent(16,3.889996);
   hext_stack_2->SetBinContent(17,9.627043);
   hext_stack_2->SetBinContent(18,6.538654);
   hext_stack_2->SetBinContent(19,5.340399);
   hext_stack_2->SetBinContent(20,3.814975);
   hext_stack_2->SetBinContent(21,50.80655);
   hext_stack_2->SetBinError(1,9.716681);
   hext_stack_2->SetBinError(2,2.950742);
   hext_stack_2->SetBinError(3,2.733033);
   hext_stack_2->SetBinError(4,2.649273);
   hext_stack_2->SetBinError(5,3.514558);
   hext_stack_2->SetBinError(6,2.35759);
   hext_stack_2->SetBinError(7,2.71817);
   hext_stack_2->SetBinError(8,2.536215);
   hext_stack_2->SetBinError(9,2.583631);
   hext_stack_2->SetBinError(10,2.425286);
   hext_stack_2->SetBinError(11,2.338176);
   hext_stack_2->SetBinError(12,2.174403);
   hext_stack_2->SetBinError(13,2.449268);
   hext_stack_2->SetBinError(14,1.152637);
   hext_stack_2->SetBinError(15,1.152637);
   hext_stack_2->SetBinError(16,1.264566);
   hext_stack_2->SetBinError(17,2.123275);
   hext_stack_2->SetBinError(18,1.818211);
   hext_stack_2->SetBinError(19,1.485368);
   hext_stack_2->SetBinError(20,1.156649);
   hext_stack_2->SetBinError(21,4.778793);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,23.4486);
   hdirt_stack_3->SetBinContent(2,1.864729);
   hdirt_stack_3->SetBinContent(3,2.078861);
   hdirt_stack_3->SetBinContent(4,1.609697);
   hdirt_stack_3->SetBinContent(5,2.185769);
   hdirt_stack_3->SetBinContent(6,2.660648);
   hdirt_stack_3->SetBinContent(7,2.603704);
   hdirt_stack_3->SetBinContent(8,2.732229);
   hdirt_stack_3->SetBinContent(9,1.330983);
   hdirt_stack_3->SetBinContent(10,2.023122);
   hdirt_stack_3->SetBinContent(11,1.21377);
   hdirt_stack_3->SetBinContent(12,1.720339);
   hdirt_stack_3->SetBinContent(13,0.7751814);
   hdirt_stack_3->SetBinContent(14,0.6486359);
   hdirt_stack_3->SetBinContent(15,1.553378);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,1.164455);
   hdirt_stack_3->SetBinContent(18,0.5357686);
   hdirt_stack_3->SetBinContent(20,1.250286);
   hdirt_stack_3->SetBinContent(21,5.314717);
   hdirt_stack_3->SetBinError(1,2.692965);
   hdirt_stack_3->SetBinError(2,0.6774697);
   hdirt_stack_3->SetBinError(3,0.6790458);
   hdirt_stack_3->SetBinError(4,0.6467391);
   hdirt_stack_3->SetBinError(5,0.7627083);
   hdirt_stack_3->SetBinError(6,0.8491836);
   hdirt_stack_3->SetBinError(7,0.8772509);
   hdirt_stack_3->SetBinError(8,0.794189);
   hdirt_stack_3->SetBinError(9,0.5833065);
   hdirt_stack_3->SetBinError(10,1.088289);
   hdirt_stack_3->SetBinError(11,0.5532013);
   hdirt_stack_3->SetBinError(12,0.6948507);
   hdirt_stack_3->SetBinError(13,0.4918152);
   hdirt_stack_3->SetBinError(14,0.3899356);
   hdirt_stack_3->SetBinError(15,0.7038561);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.6210219);
   hdirt_stack_3->SetBinError(18,0.3206237);
   hdirt_stack_3->SetBinError(20,0.6442406);
   hdirt_stack_3->SetBinError(21,1.26936);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,181.0179);
   houtFV_stack_4->SetBinContent(2,14.47246);
   houtFV_stack_4->SetBinContent(3,18.57056);
   houtFV_stack_4->SetBinContent(4,18.46493);
   houtFV_stack_4->SetBinContent(5,19.90044);
   houtFV_stack_4->SetBinContent(6,15.28587);
   houtFV_stack_4->SetBinContent(7,15.26851);
   houtFV_stack_4->SetBinContent(8,17.41798);
   houtFV_stack_4->SetBinContent(9,17.86284);
   houtFV_stack_4->SetBinContent(10,20.62438);
   houtFV_stack_4->SetBinContent(11,12.79285);
   houtFV_stack_4->SetBinContent(12,11.73029);
   houtFV_stack_4->SetBinContent(13,9.47836);
   houtFV_stack_4->SetBinContent(14,7.330778);
   houtFV_stack_4->SetBinContent(15,6.277007);
   houtFV_stack_4->SetBinContent(16,8.240158);
   houtFV_stack_4->SetBinContent(17,5.506173);
   houtFV_stack_4->SetBinContent(18,6.60399);
   houtFV_stack_4->SetBinContent(19,5.476551);
   houtFV_stack_4->SetBinContent(20,4.860611);
   houtFV_stack_4->SetBinContent(21,59.55968);
   houtFV_stack_4->SetBinError(1,6.720483);
   houtFV_stack_4->SetBinError(2,1.898602);
   houtFV_stack_4->SetBinError(3,2.175378);
   houtFV_stack_4->SetBinError(4,2.164402);
   houtFV_stack_4->SetBinError(5,2.211028);
   houtFV_stack_4->SetBinError(6,1.847538);
   houtFV_stack_4->SetBinError(7,1.993025);
   houtFV_stack_4->SetBinError(8,2.065567);
   houtFV_stack_4->SetBinError(9,2.177287);
   houtFV_stack_4->SetBinError(10,2.696937);
   houtFV_stack_4->SetBinError(11,1.78728);
   houtFV_stack_4->SetBinError(12,1.704388);
   houtFV_stack_4->SetBinError(13,1.474128);
   houtFV_stack_4->SetBinError(14,1.325143);
   houtFV_stack_4->SetBinError(15,1.228107);
   houtFV_stack_4->SetBinError(16,1.457974);
   houtFV_stack_4->SetBinError(17,1.170281);
   houtFV_stack_4->SetBinError(18,1.302803);
   houtFV_stack_4->SetBinError(19,1.182218);
   houtFV_stack_4->SetBinError(20,1.113294);
   houtFV_stack_4->SetBinError(21,3.978255);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,50.30513);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.472606);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.855924);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.885707);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.691416);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.072168);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.089389);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.800469);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.225352);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.558196);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.619887);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.237461);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.581057);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.018786);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9250582);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.410694);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.003827);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.7282497);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.275241);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.9863076);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.298921);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.677401);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.799878);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9648528);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8701081);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7008851);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7000479);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7066229);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6035354);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.694365);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7567596);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3862426);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3311836);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6832613);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7029213);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1845979);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4832039);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3316423);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.318106);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3780085);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.372511);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.012606);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.556565);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4214477);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1493436);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3602734);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1014476);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4381201);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3964317);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.436518);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.294322);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.04706571);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1470354);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08581661);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.07449514);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02563002);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1750463);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09678319);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1721138);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6441372);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1279372);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09894358);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2263896);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05242992);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1879825);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1883135);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1879152);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1351535);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03789905);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1069147);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05298776);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0471319);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01836556);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.118981);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07052174);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06940572);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,488.6689);
   hNCpi0inFVres_stack_7->SetBinContent(2,59.72345);
   hNCpi0inFVres_stack_7->SetBinContent(3,59.09677);
   hNCpi0inFVres_stack_7->SetBinContent(4,56.22524);
   hNCpi0inFVres_stack_7->SetBinContent(5,48.89358);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.45924);
   hNCpi0inFVres_stack_7->SetBinContent(7,41.08747);
   hNCpi0inFVres_stack_7->SetBinContent(8,40.82919);
   hNCpi0inFVres_stack_7->SetBinContent(9,34.223);
   hNCpi0inFVres_stack_7->SetBinContent(10,32.13781);
   hNCpi0inFVres_stack_7->SetBinContent(11,29.80076);
   hNCpi0inFVres_stack_7->SetBinContent(12,24.5131);
   hNCpi0inFVres_stack_7->SetBinContent(13,20.78119);
   hNCpi0inFVres_stack_7->SetBinContent(14,19.55227);
   hNCpi0inFVres_stack_7->SetBinContent(15,15.52294);
   hNCpi0inFVres_stack_7->SetBinContent(16,15.62074);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.28004);
   hNCpi0inFVres_stack_7->SetBinContent(18,11.88011);
   hNCpi0inFVres_stack_7->SetBinContent(19,11.27319);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.892254);
   hNCpi0inFVres_stack_7->SetBinContent(21,78.03687);
   hNCpi0inFVres_stack_7->SetBinError(1,7.59293);
   hNCpi0inFVres_stack_7->SetBinError(2,2.583789);
   hNCpi0inFVres_stack_7->SetBinError(3,2.624874);
   hNCpi0inFVres_stack_7->SetBinError(4,2.59254);
   hNCpi0inFVres_stack_7->SetBinError(5,2.383034);
   hNCpi0inFVres_stack_7->SetBinError(6,2.434567);
   hNCpi0inFVres_stack_7->SetBinError(7,2.168379);
   hNCpi0inFVres_stack_7->SetBinError(8,2.260413);
   hNCpi0inFVres_stack_7->SetBinError(9,1.961553);
   hNCpi0inFVres_stack_7->SetBinError(10,2.033475);
   hNCpi0inFVres_stack_7->SetBinError(11,2.029661);
   hNCpi0inFVres_stack_7->SetBinError(12,1.647812);
   hNCpi0inFVres_stack_7->SetBinError(13,1.536066);
   hNCpi0inFVres_stack_7->SetBinError(14,1.553248);
   hNCpi0inFVres_stack_7->SetBinError(15,1.287175);
   hNCpi0inFVres_stack_7->SetBinError(16,1.227637);
   hNCpi0inFVres_stack_7->SetBinError(17,1.22231);
   hNCpi0inFVres_stack_7->SetBinError(18,1.285514);
   hNCpi0inFVres_stack_7->SetBinError(19,1.130759);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8011456);
   hNCpi0inFVres_stack_7->SetBinError(21,3.069134);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,97.92);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.29645);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.06708);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.57871);
   hNCpi0inFVdis_stack_8->SetBinContent(5,12.20981);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.42256);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.735601);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.879327);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.479117);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.167392);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.422292);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.51575);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.558406);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.773656);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.99805);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.920138);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.808428);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.063055);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.050668);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.587318);
   hNCpi0inFVdis_stack_8->SetBinContent(21,16.37581);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.304543);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.353585);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.214249);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.296029);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.286722);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.174284);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9261383);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9267964);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9874564);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.176922);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8485718);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.713811);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6371316);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8435984);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5624028);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5743954);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5516604);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4193868);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4944002);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3917703);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.597006);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.2757376);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.142053);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,232.0802);
   hCCpi0inFV_stack_10->SetBinContent(2,24.40873);
   hCCpi0inFV_stack_10->SetBinContent(3,29.96763);
   hCCpi0inFV_stack_10->SetBinContent(4,25.56346);
   hCCpi0inFV_stack_10->SetBinContent(5,24.46327);
   hCCpi0inFV_stack_10->SetBinContent(6,18.94399);
   hCCpi0inFV_stack_10->SetBinContent(7,21.08254);
   hCCpi0inFV_stack_10->SetBinContent(8,19.86434);
   hCCpi0inFV_stack_10->SetBinContent(9,23.84631);
   hCCpi0inFV_stack_10->SetBinContent(10,18.27746);
   hCCpi0inFV_stack_10->SetBinContent(11,14.20966);
   hCCpi0inFV_stack_10->SetBinContent(12,16.34294);
   hCCpi0inFV_stack_10->SetBinContent(13,9.537518);
   hCCpi0inFV_stack_10->SetBinContent(14,12.33065);
   hCCpi0inFV_stack_10->SetBinContent(15,9.263487);
   hCCpi0inFV_stack_10->SetBinContent(16,8.412642);
   hCCpi0inFV_stack_10->SetBinContent(17,7.475557);
   hCCpi0inFV_stack_10->SetBinContent(18,4.8365);
   hCCpi0inFV_stack_10->SetBinContent(19,6.450561);
   hCCpi0inFV_stack_10->SetBinContent(20,6.287887);
   hCCpi0inFV_stack_10->SetBinContent(21,45.47949);
   hCCpi0inFV_stack_10->SetBinError(1,7.629356);
   hCCpi0inFV_stack_10->SetBinError(2,2.468787);
   hCCpi0inFV_stack_10->SetBinError(3,2.797878);
   hCCpi0inFV_stack_10->SetBinError(4,2.526368);
   hCCpi0inFV_stack_10->SetBinError(5,2.485394);
   hCCpi0inFV_stack_10->SetBinError(6,2.179919);
   hCCpi0inFV_stack_10->SetBinError(7,2.29174);
   hCCpi0inFV_stack_10->SetBinError(8,2.2148);
   hCCpi0inFV_stack_10->SetBinError(9,2.45964);
   hCCpi0inFV_stack_10->SetBinError(10,2.161577);
   hCCpi0inFV_stack_10->SetBinError(11,1.902272);
   hCCpi0inFV_stack_10->SetBinError(12,1.994138);
   hCCpi0inFV_stack_10->SetBinError(13,1.474673);
   hCCpi0inFV_stack_10->SetBinError(14,1.734538);
   hCCpi0inFV_stack_10->SetBinError(15,1.537045);
   hCCpi0inFV_stack_10->SetBinError(16,1.429223);
   hCCpi0inFV_stack_10->SetBinError(17,1.3447);
   hCCpi0inFV_stack_10->SetBinError(18,1.0923);
   hCCpi0inFV_stack_10->SetBinError(19,1.287516);
   hCCpi0inFV_stack_10->SetBinError(20,1.353947);
   hCCpi0inFV_stack_10->SetBinError(21,3.403254);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,106.4755);
   hNCinFV_stack_11->SetBinContent(2,11.49839);
   hNCinFV_stack_11->SetBinContent(3,9.401452);
   hNCinFV_stack_11->SetBinContent(4,8.364019);
   hNCinFV_stack_11->SetBinContent(5,9.476669);
   hNCinFV_stack_11->SetBinContent(6,8.813163);
   hNCinFV_stack_11->SetBinContent(7,7.497067);
   hNCinFV_stack_11->SetBinContent(8,4.835064);
   hNCinFV_stack_11->SetBinContent(9,5.568968);
   hNCinFV_stack_11->SetBinContent(10,6.347069);
   hNCinFV_stack_11->SetBinContent(11,5.050684);
   hNCinFV_stack_11->SetBinContent(12,3.771424);
   hNCinFV_stack_11->SetBinContent(13,3.81414);
   hNCinFV_stack_11->SetBinContent(14,5.445831);
   hNCinFV_stack_11->SetBinContent(15,2.781543);
   hNCinFV_stack_11->SetBinContent(16,4.520198);
   hNCinFV_stack_11->SetBinContent(17,2.734715);
   hNCinFV_stack_11->SetBinContent(18,2.962234);
   hNCinFV_stack_11->SetBinContent(19,1.454166);
   hNCinFV_stack_11->SetBinContent(20,1.207162);
   hNCinFV_stack_11->SetBinContent(21,19.80628);
   hNCinFV_stack_11->SetBinError(1,5.373659);
   hNCinFV_stack_11->SetBinError(2,2.101274);
   hNCinFV_stack_11->SetBinError(3,1.654974);
   hNCinFV_stack_11->SetBinError(4,1.433769);
   hNCinFV_stack_11->SetBinError(5,1.606799);
   hNCinFV_stack_11->SetBinError(6,1.627798);
   hNCinFV_stack_11->SetBinError(7,1.4421);
   hNCinFV_stack_11->SetBinError(8,1.159711);
   hNCinFV_stack_11->SetBinError(9,1.160346);
   hNCinFV_stack_11->SetBinError(10,1.347809);
   hNCinFV_stack_11->SetBinError(11,1.203187);
   hNCinFV_stack_11->SetBinError(12,0.9351876);
   hNCinFV_stack_11->SetBinError(13,1.103374);
   hNCinFV_stack_11->SetBinError(14,1.492889);
   hNCinFV_stack_11->SetBinError(15,1.035142);
   hNCinFV_stack_11->SetBinError(16,1.201606);
   hNCinFV_stack_11->SetBinError(17,0.8591916);
   hNCinFV_stack_11->SetBinError(18,0.8911183);
   hNCinFV_stack_11->SetBinError(19,0.6443262);
   hNCinFV_stack_11->SetBinError(20,0.5069131);
   hNCinFV_stack_11->SetBinError(21,2.239577);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,101.037);
   hnumuCCinFV_stack_12->SetBinContent(2,16.82441);
   hnumuCCinFV_stack_12->SetBinContent(3,16.2131);
   hnumuCCinFV_stack_12->SetBinContent(4,11.82264);
   hnumuCCinFV_stack_12->SetBinContent(5,16.0972);
   hnumuCCinFV_stack_12->SetBinContent(6,11.45266);
   hnumuCCinFV_stack_12->SetBinContent(7,7.298886);
   hnumuCCinFV_stack_12->SetBinContent(8,8.845284);
   hnumuCCinFV_stack_12->SetBinContent(9,6.776124);
   hnumuCCinFV_stack_12->SetBinContent(10,8.221429);
   hnumuCCinFV_stack_12->SetBinContent(11,5.790079);
   hnumuCCinFV_stack_12->SetBinContent(12,3.902728);
   hnumuCCinFV_stack_12->SetBinContent(13,5.10736);
   hnumuCCinFV_stack_12->SetBinContent(14,3.061725);
   hnumuCCinFV_stack_12->SetBinContent(15,3.378877);
   hnumuCCinFV_stack_12->SetBinContent(16,1.959016);
   hnumuCCinFV_stack_12->SetBinContent(17,2.429353);
   hnumuCCinFV_stack_12->SetBinContent(18,2.382341);
   hnumuCCinFV_stack_12->SetBinContent(19,2.148301);
   hnumuCCinFV_stack_12->SetBinContent(20,2.208507);
   hnumuCCinFV_stack_12->SetBinContent(21,30.09898);
   hnumuCCinFV_stack_12->SetBinError(1,5.911166);
   hnumuCCinFV_stack_12->SetBinError(2,2.186623);
   hnumuCCinFV_stack_12->SetBinError(3,2.496156);
   hnumuCCinFV_stack_12->SetBinError(4,1.83506);
   hnumuCCinFV_stack_12->SetBinError(5,2.941428);
   hnumuCCinFV_stack_12->SetBinError(6,1.940256);
   hnumuCCinFV_stack_12->SetBinError(7,1.406066);
   hnumuCCinFV_stack_12->SetBinError(8,1.621839);
   hnumuCCinFV_stack_12->SetBinError(9,1.398979);
   hnumuCCinFV_stack_12->SetBinError(10,1.475286);
   hnumuCCinFV_stack_12->SetBinError(11,1.329021);
   hnumuCCinFV_stack_12->SetBinError(12,0.9782249);
   hnumuCCinFV_stack_12->SetBinError(13,1.129097);
   hnumuCCinFV_stack_12->SetBinError(14,0.9622245);
   hnumuCCinFV_stack_12->SetBinError(15,0.9944955);
   hnumuCCinFV_stack_12->SetBinError(16,0.6676442);
   hnumuCCinFV_stack_12->SetBinError(17,0.7032111);
   hnumuCCinFV_stack_12->SetBinError(18,0.7316296);
   hnumuCCinFV_stack_12->SetBinError(19,0.7775667);
   hnumuCCinFV_stack_12->SetBinError(20,0.7638175);
   hnumuCCinFV_stack_12->SetBinError(21,3.452137);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,21.92911);
   hnueCCinFV_stack_13->SetBinContent(2,0.2303483);
   hnueCCinFV_stack_13->SetBinContent(3,0.4239897);
   hnueCCinFV_stack_13->SetBinContent(4,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(5,0.4325931);
   hnueCCinFV_stack_13->SetBinContent(6,1.517861);
   hnueCCinFV_stack_13->SetBinContent(7,0.7013245);
   hnueCCinFV_stack_13->SetBinContent(8,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(9,1.543895);
   hnueCCinFV_stack_13->SetBinContent(10,0.6540641);
   hnueCCinFV_stack_13->SetBinContent(11,0.4975739);
   hnueCCinFV_stack_13->SetBinContent(13,0.2007115);
   hnueCCinFV_stack_13->SetBinContent(14,1.090732);
   hnueCCinFV_stack_13->SetBinContent(15,0.4991921);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,1.737981);
   hnueCCinFV_stack_13->SetBinError(1,3.24426);
   hnueCCinFV_stack_13->SetBinError(2,0.2303483);
   hnueCCinFV_stack_13->SetBinError(3,0.300765);
   hnueCCinFV_stack_13->SetBinError(4,0.2451269);
   hnueCCinFV_stack_13->SetBinError(5,0.4325931);
   hnueCCinFV_stack_13->SetBinError(6,0.7137061);
   hnueCCinFV_stack_13->SetBinError(7,0.4961329);
   hnueCCinFV_stack_13->SetBinError(8,0.4394482);
   hnueCCinFV_stack_13->SetBinError(9,1.173326);
   hnueCCinFV_stack_13->SetBinError(10,0.3812133);
   hnueCCinFV_stack_13->SetBinError(11,0.3599592);
   hnueCCinFV_stack_13->SetBinError(13,0.196756);
   hnueCCinFV_stack_13->SetBinError(14,0.596548);
   hnueCCinFV_stack_13->SetBinError(15,0.3613204);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.7759747);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__11->SetBinContent(1,1545.502);
   hmcerror__11->SetBinContent(2,169.1158);
   hmcerror__11->SetBinContent(3,173.9432);
   hmcerror__11->SetBinContent(4,162.2671);
   hmcerror__11->SetBinContent(5,165.8287);
   hmcerror__11->SetBinContent(6,137.7941);
   hmcerror__11->SetBinContent(7,128.8975);
   hmcerror__11->SetBinContent(8,123.4178);
   hmcerror__11->SetBinContent(9,118.2623);
   hmcerror__11->SetBinContent(10,115.086);
   hmcerror__11->SetBinContent(11,90.07684);
   hmcerror__11->SetBinContent(12,79.94933);
   hmcerror__11->SetBinContent(13,69.96029);
   hmcerror__11->SetBinContent(14,61.47493);
   hmcerror__11->SetBinContent(15,48.63262);
   hmcerror__11->SetBinContent(16,48.31815);
   hmcerror__11->SetBinContent(17,47.35207);
   hmcerror__11->SetBinContent(18,40.658);
   hmcerror__11->SetBinContent(19,37.13529);
   hmcerror__11->SetBinContent(20,30.2654);
   hmcerror__11->SetBinContent(21,335.5264);
   hmcerror__11->SetBinError(1,337.8895);
   hmcerror__11->SetBinError(2,51.82785);
   hmcerror__11->SetBinError(3,46.45441);
   hmcerror__11->SetBinError(4,44.74834);
   hmcerror__11->SetBinError(5,51.31973);
   hmcerror__11->SetBinError(6,38.34291);
   hmcerror__11->SetBinError(7,32.13784);
   hmcerror__11->SetBinError(8,38.0885);
   hmcerror__11->SetBinError(9,34.86331);
   hmcerror__11->SetBinError(10,32.97328);
   hmcerror__11->SetBinError(11,27.0933);
   hmcerror__11->SetBinError(12,22.22631);
   hmcerror__11->SetBinError(13,19.8328);
   hmcerror__11->SetBinError(14,23.61441);
   hmcerror__11->SetBinError(15,15.75855);
   hmcerror__11->SetBinError(16,16.76114);
   hmcerror__11->SetBinError(17,15.88721);
   hmcerror__11->SetBinError(18,14.65552);
   hmcerror__11->SetBinError(19,14.96004);
   hmcerror__11->SetBinError(20,12.00946);
   hmcerror__11->SetBinError(21,77.91381);
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
   
   Double_t _fx3013[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3013[20] = {
   1618,
   181,
   167,
   175,
   161,
   144,
   102,
   124,
   141,
   108,
   93,
   70,
   60,
   69,
   64,
   52,
   36,
   42,
   37,
   27};
   Double_t _felx3013[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3013[20] = {
   40.22437,
   13.45362,
   12.92285,
   13.22876,
   12.68858,
   12,
   10.0995,
   11.13553,
   11.87434,
   10.3923,
   9.7658,
   8.4925,
   7.8743,
   8.4327,
   8.1273,
   7.3419,
   6.1381,
   6.6155,
   6.2203,
   5.3414};
   Double_t _fehx3013[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3013[20] = {
   40.22437,
   13.45362,
   12.92285,
   13.22876,
   12.68858,
   12,
   10.0995,
   11.13553,
   11.87434,
   10.3923,
   9.564,
   8.2902,
   7.6713,
   8.2304,
   7.9246,
   7.1381,
   5.9318,
   6.4104,
   6.0141,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,55);
   Graph_Graph3013->SetMinimum(19.49274);
   Graph_Graph3013->SetMaximum(1821.881);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3471.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 76.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 426.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 51.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 417.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  102.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1076.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 533.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 212.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 237.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3014[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3014[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3014[20] = {
   0.2186277,
   0.3064636,
   0.2670665,
   0.2757697,
   0.3094743,
   0.2782623,
   0.2493287,
   0.3086143,
   0.2947965,
   0.2865099,
   0.3007799,
   0.278005,
   0.2834865,
   0.3841308,
   0.3240325,
   0.3468911,
   0.3355125,
   0.3604584,
   0.4028523,
   0.3968049};
   Double_t _fehx3014[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3014[20] = {
   0.2186277,
   0.3064636,
   0.2670665,
   0.2757697,
   0.3094743,
   0.2782623,
   0.2493287,
   0.3086143,
   0.2947965,
   0.2865099,
   0.3007799,
   0.278005,
   0.2834865,
   0.3841308,
   0.3240325,
   0.3468911,
   0.3355125,
   0.3604584,
   0.4028523,
   0.3968049};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,55);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3015[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3015[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3015[20] = {
   0.2020795,
   0.2179825,
   0.2150842,
   0.2168928,
   0.1976657,
   0.2123258,
   0.2052137,
   0.2123128,
   0.1949964,
   0.1913699,
   0.2009634,
   0.2086485,
   0.2037311,
   0.217074,
   0.2108379,
   0.2254354,
   0.1898664,
   0.2165539,
   0.217898,
   0.232711};
   Double_t _fehx3015[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3015[20] = {
   0.2020795,
   0.2179825,
   0.2150842,
   0.2168928,
   0.1976657,
   0.2123258,
   0.2052137,
   0.2123128,
   0.1949964,
   0.1913699,
   0.2009634,
   0.2086485,
   0.2037311,
   0.217074,
   0.2108379,
   0.2254354,
   0.1898664,
   0.2165539,
   0.217898,
   0.232711};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,55);
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
   
   Double_t _fx3016[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3016[20] = {
   1.046909,
   1.070272,
   0.9600835,
   1.078469,
   0.9708813,
   1.045037,
   0.7913266,
   1.004717,
   1.192265,
   0.9384285,
   1.032452,
   0.8755545,
   0.8576294,
   1.122409,
   1.315989,
   1.0762,
   0.7602624,
   1.033007,
   0.9963568,
   0.8921077};
   Double_t _felx3016[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3016[20] = {
   0.02602674,
   0.07955271,
   0.07429349,
   0.0815246,
   0.07651616,
   0.08708645,
   0.07835301,
   0.09022627,
   0.1004068,
   0.09030033,
   0.1084163,
   0.1062235,
   0.1125539,
   0.137173,
   0.1671162,
   0.1519491,
   0.1296268,
   0.1627109,
   0.1675037,
   0.1764853};
   Double_t _fehx3016[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3016[20] = {
   0.02602674,
   0.07955271,
   0.07429349,
   0.0815246,
   0.07651616,
   0.08708645,
   0.07835301,
   0.09022627,
   0.1004068,
   0.09030033,
   0.106176,
   0.1036932,
   0.1096522,
   0.1338822,
   0.1629483,
   0.1477312,
   0.1252701,
   0.1576664,
   0.1619511,
   0.1695732};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,55);
   Graph_Graph3016->SetMinimum(0.5458053);
   Graph_Graph3016->SetMaximum(1.563768);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

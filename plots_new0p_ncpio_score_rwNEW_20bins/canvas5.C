#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Mar 13 17:22:31 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",138,161,1200,900);
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
   pad1->Range(0.2307692,-6.527059,6.641026,721.7554);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmc__13->SetBinContent(4,276.4674);
   hmc__13->SetBinContent(5,326.353);
   hmc__13->SetBinContent(6,320.7288);
   hmc__13->SetBinContent(7,260.6323);
   hmc__13->SetBinContent(8,240.9868);
   hmc__13->SetBinContent(9,236.0619);
   hmc__13->SetBinContent(10,210.0242);
   hmc__13->SetBinContent(11,216.4886);
   hmc__13->SetBinContent(12,183.7086);
   hmc__13->SetBinContent(13,134.3955);
   hmc__13->SetBinContent(14,63.90487);
   hmc__13->SetBinContent(15,21.58698);
   hmc__13->SetBinContent(16,4.811335);
   hmc__13->SetBinContent(17,0.4042178);
   hmc__13->SetBinContent(18,0.1952999);
   hmc__13->SetBinContent(19,0.2089179);
   hmc__13->SetBinContent(20,0.05579997);
   hmc__13->SetBinContent(21,0.02789998);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,0.3895343);
   hmc__13->SetBinError(3,0.3895343);
   hmc__13->SetBinError(4,64.65777);
   hmc__13->SetBinError(5,75.37627);
   hmc__13->SetBinError(6,82.75268);
   hmc__13->SetBinError(7,72.84977);
   hmc__13->SetBinError(8,60.77821);
   hmc__13->SetBinError(9,66.13457);
   hmc__13->SetBinError(10,66.28616);
   hmc__13->SetBinError(11,65.83954);
   hmc__13->SetBinError(12,54.65539);
   hmc__13->SetBinError(13,41.76392);
   hmc__13->SetBinError(14,21.76616);
   hmc__13->SetBinError(15,9.664606);
   hmc__13->SetBinError(16,4.267718);
   hmc__13->SetBinError(17,1.702926);
   hmc__13->SetBinError(18,0.4494842);
   hmc__13->SetBinError(19,0.8180498);
   hmc__13->SetBinError(20,0.301503);
   hmc__13->SetBinError(21,0.2404565);
   hmc__13->SetMinimum(-6.527059);
   hmc__13->SetMaximum(685.3412);
   hmc__13->SetEntries(2462.59);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,1,6);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(342.6706);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,10.03782);
   hbadmatch_stack_1->SetBinContent(5,10.73307);
   hbadmatch_stack_1->SetBinContent(6,5.309882);
   hbadmatch_stack_1->SetBinContent(7,8.951272);
   hbadmatch_stack_1->SetBinContent(8,7.117227);
   hbadmatch_stack_1->SetBinContent(9,4.640741);
   hbadmatch_stack_1->SetBinContent(10,3.667115);
   hbadmatch_stack_1->SetBinContent(11,2.108925);
   hbadmatch_stack_1->SetBinContent(12,3.546427);
   hbadmatch_stack_1->SetBinContent(13,1.999038);
   hbadmatch_stack_1->SetBinError(4,1.676653);
   hbadmatch_stack_1->SetBinError(5,1.723281);
   hbadmatch_stack_1->SetBinError(6,1.22604);
   hbadmatch_stack_1->SetBinError(7,1.64107);
   hbadmatch_stack_1->SetBinError(8,1.357126);
   hbadmatch_stack_1->SetBinError(9,1.067964);
   hbadmatch_stack_1->SetBinError(10,0.9770114);
   hbadmatch_stack_1->SetBinError(11,0.6806842);
   hbadmatch_stack_1->SetBinError(12,1.37162);
   hbadmatch_stack_1->SetBinError(13,0.7339349);
   hbadmatch_stack_1->SetEntries(235);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,27.68124);
   hext_stack_2->SetBinContent(5,27.11464);
   hext_stack_2->SetBinContent(6,19.4428);
   hext_stack_2->SetBinContent(7,14.19456);
   hext_stack_2->SetBinContent(8,12.40099);
   hext_stack_2->SetBinContent(9,8.839795);
   hext_stack_2->SetBinContent(10,8.250023);
   hext_stack_2->SetBinContent(11,7.434054);
   hext_stack_2->SetBinContent(12,2.599588);
   hext_stack_2->SetBinContent(13,1.779209);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,0.6416141);
   hext_stack_2->SetBinError(4,3.457436);
   hext_stack_2->SetBinError(5,3.43562);
   hext_stack_2->SetBinError(6,2.863012);
   hext_stack_2->SetBinError(7,2.347996);
   hext_stack_2->SetBinError(8,2.251208);
   hext_stack_2->SetBinError(9,1.92592);
   hext_stack_2->SetBinError(10,1.921184);
   hext_stack_2->SetBinError(11,1.922661);
   hext_stack_2->SetBinError(12,0.9884288);
   hext_stack_2->SetBinError(13,0.9206235);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,0.6416141);
   hext_stack_2->SetEntries(327);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,1.034054);
   hdirt_stack_3->SetBinContent(5,1.322513);
   hdirt_stack_3->SetBinContent(6,1.00185);
   hdirt_stack_3->SetBinContent(7,1.698728);
   hdirt_stack_3->SetBinContent(8,1.094232);
   hdirt_stack_3->SetBinContent(9,1.06134);
   hdirt_stack_3->SetBinContent(10,0.6131097);
   hdirt_stack_3->SetBinContent(11,0.4377912);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.1446783);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinError(4,0.4382317);
   hdirt_stack_3->SetBinError(5,0.514048);
   hdirt_stack_3->SetBinError(6,0.5307743);
   hdirt_stack_3->SetBinError(7,0.7245876);
   hdirt_stack_3->SetBinError(8,0.6437069);
   hdirt_stack_3->SetBinError(9,0.5623019);
   hdirt_stack_3->SetBinError(10,0.3557628);
   hdirt_stack_3->SetBinError(11,0.3095651);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.1446783);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetEntries(44);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,18.81534);
   houtFV_stack_4->SetBinContent(5,29.17794);
   houtFV_stack_4->SetBinContent(6,21.82589);
   houtFV_stack_4->SetBinContent(7,13.27283);
   houtFV_stack_4->SetBinContent(8,13.89927);
   houtFV_stack_4->SetBinContent(9,13.64723);
   houtFV_stack_4->SetBinContent(10,10.39189);
   houtFV_stack_4->SetBinContent(11,7.242258);
   houtFV_stack_4->SetBinContent(12,4.47463);
   houtFV_stack_4->SetBinContent(13,2.036152);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinError(4,2.202566);
   houtFV_stack_4->SetBinError(5,2.751166);
   houtFV_stack_4->SetBinError(6,2.309197);
   houtFV_stack_4->SetBinError(7,1.832953);
   houtFV_stack_4->SetBinError(8,1.810444);
   houtFV_stack_4->SetBinError(9,1.809835);
   houtFV_stack_4->SetBinError(10,1.623103);
   houtFV_stack_4->SetBinError(11,1.341565);
   houtFV_stack_4->SetBinError(12,1.131512);
   houtFV_stack_4->SetBinError(13,0.7445765);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetEntries(584);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3901041);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2390593);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9202038);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.561744);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9623858);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.477876);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.143572);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9766676);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.841576);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.701076);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.38039);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2682147);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4490123);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2576051);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.408066);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3330545);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2449556);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4781865);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4156262);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3525453);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(268);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,48.6392);
   hNCpi0inFVres_stack_7->SetBinContent(5,66.8681);
   hNCpi0inFVres_stack_7->SetBinContent(6,84.34969);
   hNCpi0inFVres_stack_7->SetBinContent(7,88.39404);
   hNCpi0inFVres_stack_7->SetBinContent(8,94.18031);
   hNCpi0inFVres_stack_7->SetBinContent(9,117.0951);
   hNCpi0inFVres_stack_7->SetBinContent(10,118.8062);
   hNCpi0inFVres_stack_7->SetBinContent(11,139.7625);
   hNCpi0inFVres_stack_7->SetBinContent(12,130.4885);
   hNCpi0inFVres_stack_7->SetBinContent(13,101.6156);
   hNCpi0inFVres_stack_7->SetBinContent(14,48.9698);
   hNCpi0inFVres_stack_7->SetBinContent(15,17.5505);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.919306);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3484178);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(4,2.281233);
   hNCpi0inFVres_stack_7->SetBinError(5,2.65611);
   hNCpi0inFVres_stack_7->SetBinError(6,2.995803);
   hNCpi0inFVres_stack_7->SetBinError(7,3.07189);
   hNCpi0inFVres_stack_7->SetBinError(8,3.154014);
   hNCpi0inFVres_stack_7->SetBinError(9,3.590344);
   hNCpi0inFVres_stack_7->SetBinError(10,3.550456);
   hNCpi0inFVres_stack_7->SetBinError(11,3.867456);
   hNCpi0inFVres_stack_7->SetBinError(12,3.755581);
   hNCpi0inFVres_stack_7->SetBinError(13,3.325947);
   hNCpi0inFVres_stack_7->SetBinError(14,2.305298);
   hNCpi0inFVres_stack_7->SetBinError(15,1.352898);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6958306);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1283607);
   hNCpi0inFVres_stack_7->SetBinError(18,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(20,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(19586);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.57946);
   hNCpi0inFVdis_stack_8->SetBinContent(5,20.19354);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.34258);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.23894);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.65157);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.49038);
   hNCpi0inFVdis_stack_8->SetBinContent(10,22.32308);
   hNCpi0inFVdis_stack_8->SetBinContent(11,19.22666);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.86895);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.87025);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.672853);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.952344);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.204836);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.49735);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.483312);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.379652);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.517275);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.405689);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.560628);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.419101);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.45579);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.158056);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7625073);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4609878);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.4467362);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2792353);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(25);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,51.11073);
   hCCpi0inFV_stack_10->SetBinContent(5,70.68964);
   hCCpi0inFV_stack_10->SetBinContent(6,62.15183);
   hCCpi0inFV_stack_10->SetBinContent(7,47.44514);
   hCCpi0inFV_stack_10->SetBinContent(8,38.7286);
   hCCpi0inFV_stack_10->SetBinContent(9,32.52126);
   hCCpi0inFV_stack_10->SetBinContent(10,20.50175);
   hCCpi0inFV_stack_10->SetBinContent(11,22.06914);
   hCCpi0inFV_stack_10->SetBinContent(12,12.02574);
   hCCpi0inFV_stack_10->SetBinContent(13,5.80539);
   hCCpi0inFV_stack_10->SetBinContent(14,3.272921);
   hCCpi0inFV_stack_10->SetBinContent(15,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1950248);
   hCCpi0inFV_stack_10->SetBinError(4,3.576012);
   hCCpi0inFV_stack_10->SetBinError(5,4.257944);
   hCCpi0inFV_stack_10->SetBinError(6,3.966012);
   hCCpi0inFV_stack_10->SetBinError(7,3.487557);
   hCCpi0inFV_stack_10->SetBinError(8,3.055137);
   hCCpi0inFV_stack_10->SetBinError(9,2.930548);
   hCCpi0inFV_stack_10->SetBinError(10,2.26203);
   hCCpi0inFV_stack_10->SetBinError(11,2.375605);
   hCCpi0inFV_stack_10->SetBinError(12,1.779977);
   hCCpi0inFV_stack_10->SetBinError(13,1.141956);
   hCCpi0inFV_stack_10->SetBinError(14,0.9420814);
   hCCpi0inFV_stack_10->SetBinError(15,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(16,0.1950249);
   hCCpi0inFV_stack_10->SetEntries(1562);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,27.44143);
   hNCinFV_stack_11->SetBinContent(5,30.32984);
   hNCinFV_stack_11->SetBinContent(6,33.85949);
   hNCinFV_stack_11->SetBinContent(7,24.2767);
   hNCinFV_stack_11->SetBinContent(8,24.02443);
   hNCinFV_stack_11->SetBinContent(9,21.52001);
   hNCinFV_stack_11->SetBinContent(10,11.67373);
   hNCinFV_stack_11->SetBinContent(11,9.228007);
   hNCinFV_stack_11->SetBinContent(12,7.859452);
   hNCinFV_stack_11->SetBinContent(13,5.178369);
   hNCinFV_stack_11->SetBinContent(14,3.769477);
   hNCinFV_stack_11->SetBinContent(15,0.1967154);
   hNCinFV_stack_11->SetBinError(4,2.691544);
   hNCinFV_stack_11->SetBinError(5,2.767896);
   hNCinFV_stack_11->SetBinError(6,2.924344);
   hNCinFV_stack_11->SetBinError(7,2.506172);
   hNCinFV_stack_11->SetBinError(8,2.466017);
   hNCinFV_stack_11->SetBinError(9,2.280815);
   hNCinFV_stack_11->SetBinError(10,1.710427);
   hNCinFV_stack_11->SetBinError(11,1.532264);
   hNCinFV_stack_11->SetBinError(12,1.442313);
   hNCinFV_stack_11->SetBinError(13,1.144335);
   hNCinFV_stack_11->SetBinError(14,0.9417711);
   hNCinFV_stack_11->SetBinError(15,0.1967154);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,72.47211);
   hnumuCCinFV_stack_12->SetBinContent(5,65.68182);
   hnumuCCinFV_stack_12->SetBinContent(6,66.27878);
   hnumuCCinFV_stack_12->SetBinContent(7,40.70718);
   hnumuCCinFV_stack_12->SetBinContent(8,26.14428);
   hnumuCCinFV_stack_12->SetBinContent(9,15.42768);
   hnumuCCinFV_stack_12->SetBinContent(10,11.8378);
   hnumuCCinFV_stack_12->SetBinContent(11,6.440604);
   hnumuCCinFV_stack_12->SetBinContent(12,1.191155);
   hnumuCCinFV_stack_12->SetBinContent(13,0.6238208);
   hnumuCCinFV_stack_12->SetBinContent(14,1.203136);
   hnumuCCinFV_stack_12->SetBinContent(15,0.0006863147);
   hnumuCCinFV_stack_12->SetBinError(4,4.842522);
   hnumuCCinFV_stack_12->SetBinError(5,4.657362);
   hnumuCCinFV_stack_12->SetBinError(6,5.059153);
   hnumuCCinFV_stack_12->SetBinError(7,3.564441);
   hnumuCCinFV_stack_12->SetBinError(8,3.726959);
   hnumuCCinFV_stack_12->SetBinError(9,2.099417);
   hnumuCCinFV_stack_12->SetBinError(10,1.733179);
   hnumuCCinFV_stack_12->SetBinError(11,1.334069);
   hnumuCCinFV_stack_12->SetBinError(12,0.5441485);
   hnumuCCinFV_stack_12->SetBinError(13,0.3559308);
   hnumuCCinFV_stack_12->SetBinError(14,0.6317086);
   hnumuCCinFV_stack_12->SetBinError(15,0.0006863147);
   hnumuCCinFV_stack_12->SetEntries(1201);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,3.958231);
   hnueCCinFV_stack_13->SetBinContent(5,3.126339);
   hnueCCinFV_stack_13->SetBinContent(6,3.492624);
   hnueCCinFV_stack_13->SetBinContent(7,1.281601);
   hnueCCinFV_stack_13->SetBinContent(8,1.184277);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.2486649);
   hnueCCinFV_stack_13->SetBinError(4,1.820251);
   hnueCCinFV_stack_13->SetBinError(5,0.9400955);
   hnueCCinFV_stack_13->SetBinError(6,0.9995198);
   hnueCCinFV_stack_13->SetBinError(7,0.5268103);
   hnueCCinFV_stack_13->SetBinError(8,0.5445209);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.2486649);
   hnueCCinFV_stack_13->SetEntries(52);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__14->SetBinContent(4,276.4674);
   hmcerror__14->SetBinContent(5,326.353);
   hmcerror__14->SetBinContent(6,320.7288);
   hmcerror__14->SetBinContent(7,260.6323);
   hmcerror__14->SetBinContent(8,240.9868);
   hmcerror__14->SetBinContent(9,236.0619);
   hmcerror__14->SetBinContent(10,210.0242);
   hmcerror__14->SetBinContent(11,216.4886);
   hmcerror__14->SetBinContent(12,183.7086);
   hmcerror__14->SetBinContent(13,134.3955);
   hmcerror__14->SetBinContent(14,63.90487);
   hmcerror__14->SetBinContent(15,21.58698);
   hmcerror__14->SetBinContent(16,4.811335);
   hmcerror__14->SetBinContent(17,0.4042178);
   hmcerror__14->SetBinContent(18,0.1952999);
   hmcerror__14->SetBinContent(19,0.2089179);
   hmcerror__14->SetBinContent(20,0.05579997);
   hmcerror__14->SetBinContent(21,0.02789998);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,0.3895343);
   hmcerror__14->SetBinError(3,0.3895343);
   hmcerror__14->SetBinError(4,64.65777);
   hmcerror__14->SetBinError(5,75.37627);
   hmcerror__14->SetBinError(6,82.75268);
   hmcerror__14->SetBinError(7,72.84977);
   hmcerror__14->SetBinError(8,60.77821);
   hmcerror__14->SetBinError(9,66.13457);
   hmcerror__14->SetBinError(10,66.28616);
   hmcerror__14->SetBinError(11,65.83954);
   hmcerror__14->SetBinError(12,54.65539);
   hmcerror__14->SetBinError(13,41.76392);
   hmcerror__14->SetBinError(14,21.76616);
   hmcerror__14->SetBinError(15,9.664606);
   hmcerror__14->SetBinError(16,4.267718);
   hmcerror__14->SetBinError(17,1.702926);
   hmcerror__14->SetBinError(18,0.4494842);
   hmcerror__14->SetBinError(19,0.8180498);
   hmcerror__14->SetBinError(20,0.301503);
   hmcerror__14->SetBinError(21,0.2404565);
   hmcerror__14->SetEntries(2462.59);

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
   
   Double_t _fx3017[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3017[20] = {
   0,
   0,
   0,
   200,
   272,
   236,
   214,
   165,
   175,
   159,
   147,
   130,
   94,
   43,
   7,
   3,
   1,
   3,
   0,
   0};
   Double_t _felx3017[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3017[20] = {
   0,
   0,
   0,
   14.14214,
   16.49242,
   15.36229,
   14.62874,
   12.84523,
   13.22876,
   12.60952,
   12.12436,
   11.40175,
   9.8173,
   6.6917,
   2.85954,
   2.143368,
   1,
   2.143368,
   0,
   0};
   Double_t _fehx3017[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3017[20] = {
   1.1478,
   1.1478,
   1.1478,
   14.14214,
   16.49242,
   15.36229,
   14.62874,
   12.84523,
   13.22876,
   12.60952,
   12.12436,
   11.40175,
   9.616,
   6.4868,
   2.61053,
   1.72422,
   1.35971,
   1.72422,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0.5,6.5);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(317.3417);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.1/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   
   Double_t _fx3018[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3018[20] = {
   0,
   0,
   0,
   0.2338712,
   0.2309655,
   0.2580145,
   0.2795117,
   0.2522056,
   0.2801578,
   0.3156121,
   0.3041247,
   0.2975113,
   0.3107538,
   0.3406025,
   0.4477053,
   0.8870134,
   4.212892,
   2.301508,
   3.915652,
   5.403282};
   Double_t _fehx3018[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3018[20] = {
   0,
   0,
   0,
   0.2338712,
   0.2309655,
   0.2580145,
   0.2795117,
   0.2522056,
   0.2801578,
   0.3156121,
   0.3041247,
   0.2975113,
   0.3107538,
   0.3406025,
   0.4477053,
   0.8870134,
   4.212892,
   2.301508,
   3.915652,
   5.403282};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0.5,6.5);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("BDT Score");
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
   
   Double_t _fx3019[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3019[20] = {
   0,
   0,
   0,
   0.1716914,
   0.1845539,
   0.1971785,
   0.2214033,
   0.2204548,
   0.2396067,
   0.2512843,
   0.2616371,
   0.268606,
   0.2826366,
   0.2810901,
   0.279142,
   0.3385927,
   0.937956,
   1.52376,
   1.610544,
   4.192097};
   Double_t _fehx3019[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3019[20] = {
   0,
   0,
   0,
   0.1716914,
   0.1845539,
   0.1971785,
   0.2214033,
   0.2204548,
   0.2396067,
   0.2512843,
   0.2616371,
   0.268606,
   0.2826366,
   0.2810901,
   0.279142,
   0.3385927,
   0.937956,
   1.52376,
   1.610544,
   4.192097};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0.5,6.5);
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
   
   Double_t _fx3020[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3020[20] = {
   10,
   10,
   10,
   0.7234125,
   0.8334534,
   0.7358242,
   0.8210801,
   0.6846849,
   0.7413311,
   0.7570558,
   0.6790194,
   0.7076424,
   0.6994281,
   0.6728752,
   0.3242695,
   0.6235276,
   2.473914,
   15.36099,
   0,
   0};
   Double_t _felx3020[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3020[20] = {
   0,
   0,
   0,
   0.05115299,
   0.05053554,
   0.04789807,
   0.05612788,
   0.05330265,
   0.05603936,
   0.06003843,
   0.05600458,
   0.06206435,
   0.07304783,
   0.1047135,
   0.132466,
   0.445483,
   2.473914,
   10.97475,
   0,
   0};
   Double_t _fehx3020[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3020[20] = {
   0,
   0,
   0,
   0.05115299,
   0.05053554,
   0.04789807,
   0.05612788,
   0.05330265,
   0.05603936,
   0.06003843,
   0.05600458,
   0.06206435,
   0.07155001,
   0.1015071,
   0.1209308,
   0.3583662,
   3.363805,
   8.828576,
   5.494023,
   20.5699};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0.5,6.5);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(26.60852);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_nc_pio_score_all",20,1,6);

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
   TLine *line = new TLine(1,1,6,1);
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

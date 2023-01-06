#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Sep 28 18:06:31 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(-230.7692,-6.762505,1692.308,747.7907);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__19->SetBinContent(1,40.47868);
   hmc__19->SetBinContent(2,224.9695);
   hmc__19->SetBinContent(3,338.1252);
   hmc__19->SetBinContent(4,274.133);
   hmc__19->SetBinContent(5,208.9971);
   hmc__19->SetBinContent(6,173.5318);
   hmc__19->SetBinContent(7,140.583);
   hmc__19->SetBinContent(8,96.80379);
   hmc__19->SetBinContent(9,68.39516);
   hmc__19->SetBinContent(10,45.90398);
   hmc__19->SetBinContent(11,33.77403);
   hmc__19->SetBinContent(12,25.43658);
   hmc__19->SetBinContent(13,15.70918);
   hmc__19->SetBinContent(14,10.88488);
   hmc__19->SetBinContent(15,10.50339);
   hmc__19->SetBinContent(16,6.58037);
   hmc__19->SetBinContent(17,6.58064);
   hmc__19->SetBinContent(18,6.122106);
   hmc__19->SetBinContent(19,3.189776);
   hmc__19->SetBinContent(20,4.399906);
   hmc__19->SetBinContent(21,2.743113);
   hmc__19->SetBinContent(22,2.661344);
   hmc__19->SetBinContent(23,2.068953);
   hmc__19->SetBinContent(24,1.620335);
   hmc__19->SetBinContent(25,1.436515);
   hmc__19->SetBinContent(26,15.07723);
   hmc__19->SetBinError(1,11.68739);
   hmc__19->SetBinError(2,50.15031);
   hmc__19->SetBinError(3,83.72826);
   hmc__19->SetBinError(4,77.27916);
   hmc__19->SetBinError(5,62.32088);
   hmc__19->SetBinError(6,47.22296);
   hmc__19->SetBinError(7,38.24194);
   hmc__19->SetBinError(8,23.03897);
   hmc__19->SetBinError(9,15.06067);
   hmc__19->SetBinError(10,10.55139);
   hmc__19->SetBinError(11,7.938183);
   hmc__19->SetBinError(12,6.455107);
   hmc__19->SetBinError(13,4.645138);
   hmc__19->SetBinError(14,3.126957);
   hmc__19->SetBinError(15,3.074823);
   hmc__19->SetBinError(16,2.004986);
   hmc__19->SetBinError(17,2.123532);
   hmc__19->SetBinError(18,2.251229);
   hmc__19->SetBinError(19,1.462292);
   hmc__19->SetBinError(20,1.48319);
   hmc__19->SetBinError(21,1.319164);
   hmc__19->SetBinError(22,1.386139);
   hmc__19->SetBinError(23,0.9249374);
   hmc__19->SetBinError(24,0.9340071);
   hmc__19->SetBinError(25,1.055981);
   hmc__19->SetBinError(26,3.501109);
   hmc__19->SetMinimum(-6.762505);
   hmc__19->SetMaximum(710.063);
   hmc__19->SetEntries(1759.741);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,1500);
   hs7_stack_7->SetMinimum(-1.427841e-08);
   hs7_stack_7->SetMaximum(355.0315);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.3917402);
   hbadmatch_stack_1->SetBinContent(2,0.6336827);
   hbadmatch_stack_1->SetBinContent(3,1.504176);
   hbadmatch_stack_1->SetBinContent(4,1.268811);
   hbadmatch_stack_1->SetBinContent(5,1.176954);
   hbadmatch_stack_1->SetBinContent(6,1.125349);
   hbadmatch_stack_1->SetBinContent(7,0.8368844);
   hbadmatch_stack_1->SetBinContent(8,0.7319179);
   hbadmatch_stack_1->SetBinContent(9,1.073786);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.4287143);
   hbadmatch_stack_1->SetBinContent(13,0.2112329);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.2770047);
   hbadmatch_stack_1->SetBinError(2,0.3677878);
   hbadmatch_stack_1->SetBinError(3,0.6341422);
   hbadmatch_stack_1->SetBinError(4,0.5889569);
   hbadmatch_stack_1->SetBinError(5,0.5411214);
   hbadmatch_stack_1->SetBinError(6,0.5194673);
   hbadmatch_stack_1->SetBinError(7,0.6020045);
   hbadmatch_stack_1->SetBinError(8,0.438694);
   hbadmatch_stack_1->SetBinError(9,0.5557297);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.3041718);
   hbadmatch_stack_1->SetBinError(13,0.211233);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetEntries(43);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(2,0.973192);
   hext_stack_2->SetBinContent(3,4.670063);
   hext_stack_2->SetBinContent(4,0.973192);
   hext_stack_2->SetBinContent(5,2.890854);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,0.7309963);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinError(2,0.5618727);
   hext_stack_2->SetBinError(3,1.612283);
   hext_stack_2->SetBinError(4,0.5618727);
   hext_stack_2->SetBinError(5,1.323597);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,0.5201503);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetEntries(30);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(3,0.1967154);
   houtFV_stack_4->SetBinContent(4,0.5352025);
   houtFV_stack_4->SetBinContent(5,0.3401776);
   houtFV_stack_4->SetBinContent(6,0.2552519);
   houtFV_stack_4->SetBinContent(7,0.1950248);
   houtFV_stack_4->SetBinContent(8,1.26712);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(10,0.3401776);
   houtFV_stack_4->SetBinError(3,0.1967154);
   houtFV_stack_4->SetBinError(4,0.3921167);
   houtFV_stack_4->SetBinError(5,0.3401776);
   houtFV_stack_4->SetBinError(6,0.255252);
   houtFV_stack_4->SetBinError(7,0.1950249);
   houtFV_stack_4->SetBinError(8,0.5883944);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(10,0.3401776);
   houtFV_stack_4->SetEntries(13);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.650438);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.845718);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.859423);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.309213);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.12018);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.415614);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.148535);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.744833);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.739521);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.432867);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.7232762);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.129765);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.7474959);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.3248467);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.4080233);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1771861);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.08167386);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.08308727);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.08905201);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.05785787);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.08074981);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1841348);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.01830775);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6185164);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5325291);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7093868);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4928103);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7794349);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7989082);
   hNCpi0inFVres_stack_7->SetBinError(7,0.832251);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5579669);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4041838);
   hNCpi0inFVres_stack_7->SetBinError(10,0.696277);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3083967);
   hNCpi0inFVres_stack_7->SetBinError(12,0.08176343);
   hNCpi0inFVres_stack_7->SetBinError(13,0.342143);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1449295);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3390801);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1035073);
   hNCpi0inFVres_stack_7->SetBinError(17,0.08167386);
   hNCpi0inFVres_stack_7->SetBinError(18,0.08308727);
   hNCpi0inFVres_stack_7->SetBinError(19,0.06406014);
   hNCpi0inFVres_stack_7->SetBinError(21,0.05785787);
   hNCpi0inFVres_stack_7->SetBinError(22,0.05976214);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1389007);
   hNCpi0inFVres_stack_7->SetBinError(24,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(26,0.01830775);
   hNCpi0inFVres_stack_7->SetEntries(660);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5556452);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.998376);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.474575);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.82721);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.980817);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.116896);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.846015);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.391839);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.623851);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.699728);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.291038);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8062815);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.6706778);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.231349);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.08496293);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1537325);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3818567);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2927861);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6472082);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.2848868);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.5686252);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1869453);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6524116);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5078803);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4880222);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7838316);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4674709);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4431191);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6075631);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4397312);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7039512);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4814793);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2317732);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3200895);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1143356);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.0445203);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.08933646);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.222587);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2183542);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.574822);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2848868);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2426356);
   hNCpi0inFVdis_stack_8->SetEntries(528);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,32.89619);
   hCCpi0inFV_stack_10->SetBinContent(2,179.5838);
   hCCpi0inFV_stack_10->SetBinContent(3,282.0534);
   hCCpi0inFV_stack_10->SetBinContent(4,230.2115);
   hCCpi0inFV_stack_10->SetBinContent(5,172.51);
   hCCpi0inFV_stack_10->SetBinContent(6,145.9467);
   hCCpi0inFV_stack_10->SetBinContent(7,119.893);
   hCCpi0inFV_stack_10->SetBinContent(8,78.26504);
   hCCpi0inFV_stack_10->SetBinContent(9,53.36498);
   hCCpi0inFV_stack_10->SetBinContent(10,34.50872);
   hCCpi0inFV_stack_10->SetBinContent(11,26.86562);
   hCCpi0inFV_stack_10->SetBinContent(12,19.73911);
   hCCpi0inFV_stack_10->SetBinContent(13,11.24057);
   hCCpi0inFV_stack_10->SetBinContent(14,8.799312);
   hCCpi0inFV_stack_10->SetBinContent(15,8.153139);
   hCCpi0inFV_stack_10->SetBinContent(16,5.281494);
   hCCpi0inFV_stack_10->SetBinContent(17,4.389816);
   hCCpi0inFV_stack_10->SetBinContent(18,4.393198);
   hCCpi0inFV_stack_10->SetBinContent(19,2.340906);
   hCCpi0inFV_stack_10->SetBinContent(20,2.717034);
   hCCpi0inFV_stack_10->SetBinContent(21,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(22,1.608988);
   hCCpi0inFV_stack_10->SetBinContent(23,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(24,1.127039);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(26,8.841339);
   hCCpi0inFV_stack_10->SetBinError(1,2.840716);
   hCCpi0inFV_stack_10->SetBinError(2,6.748032);
   hCCpi0inFV_stack_10->SetBinError(3,8.423575);
   hCCpi0inFV_stack_10->SetBinError(4,7.62842);
   hCCpi0inFV_stack_10->SetBinError(5,6.611453);
   hCCpi0inFV_stack_10->SetBinError(6,6.053588);
   hCCpi0inFV_stack_10->SetBinError(7,5.496101);
   hCCpi0inFV_stack_10->SetBinError(8,4.398333);
   hCCpi0inFV_stack_10->SetBinError(9,3.67619);
   hCCpi0inFV_stack_10->SetBinError(10,2.959216);
   hCCpi0inFV_stack_10->SetBinError(11,2.568932);
   hCCpi0inFV_stack_10->SetBinError(12,2.260778);
   hCCpi0inFV_stack_10->SetBinError(13,1.700527);
   hCCpi0inFV_stack_10->SetBinError(14,1.455137);
   hCCpi0inFV_stack_10->SetBinError(15,1.495648);
   hCCpi0inFV_stack_10->SetBinError(16,1.109741);
   hCCpi0inFV_stack_10->SetBinError(17,1.074268);
   hCCpi0inFV_stack_10->SetBinError(18,1.074885);
   hCCpi0inFV_stack_10->SetBinError(19,0.8093475);
   hCCpi0inFV_stack_10->SetBinError(20,0.8211166);
   hCCpi0inFV_stack_10->SetBinError(21,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(22,0.6801404);
   hCCpi0inFV_stack_10->SetBinError(23,0.588146);
   hCCpi0inFV_stack_10->SetBinError(24,0.5201044);
   hCCpi0inFV_stack_10->SetBinError(25,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(26,1.507677);
   hCCpi0inFV_stack_10->SetEntries(6147);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,2.340906);
   hNCinFV_stack_11->SetBinContent(3,3.66297);
   hNCinFV_stack_11->SetBinContent(4,2.194063);
   hNCinFV_stack_11->SetBinContent(5,1.465526);
   hNCinFV_stack_11->SetBinContent(6,1.608988);
   hNCinFV_stack_11->SetBinContent(7,1.268811);
   hNCinFV_stack_11->SetBinContent(8,1.125349);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,0.5901461);
   hNCinFV_stack_11->SetBinContent(12,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(26,0.9286332);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.8093475);
   hNCinFV_stack_11->SetBinError(3,0.9816245);
   hNCinFV_stack_11->SetBinError(4,0.7594044);
   hNCinFV_stack_11->SetBinError(5,0.6209405);
   hNCinFV_stack_11->SetBinError(6,0.6801404);
   hNCinFV_stack_11->SetBinError(7,0.5889569);
   hNCinFV_stack_11->SetBinError(8,0.5194673);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.340721);
   hNCinFV_stack_11->SetBinError(12,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(26,0.48078);
   hNCinFV_stack_11->SetEntries(73);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,4.78964);
   hnumuCCinFV_stack_12->SetBinContent(2,33.49163);
   hnumuCCinFV_stack_12->SetBinContent(3,36.48671);
   hnumuCCinFV_stack_12->SetBinContent(4,32.1334);
   hnumuCCinFV_stack_12->SetBinContent(5,22.09293);
   hnumuCCinFV_stack_12->SetBinContent(6,17.65639);
   hnumuCCinFV_stack_12->SetBinContent(7,11.66373);
   hnumuCCinFV_stack_12->SetBinContent(8,10.27769);
   hnumuCCinFV_stack_12->SetBinContent(9,9.485144);
   hnumuCCinFV_stack_12->SetBinContent(10,6.729032);
   hnumuCCinFV_stack_12->SetBinContent(11,3.905125);
   hnumuCCinFV_stack_12->SetBinContent(12,3.600788);
   hnumuCCinFV_stack_12->SetBinContent(13,2.8392);
   hnumuCCinFV_stack_12->SetBinContent(14,0.7974585);
   hnumuCCinFV_stack_12->SetBinContent(15,1.465526);
   hnumuCCinFV_stack_12->SetBinContent(16,0.9679575);
   hnumuCCinFV_stack_12->SetBinContent(17,1.402896);
   hnumuCCinFV_stack_12->SetBinContent(18,1.170381);
   hnumuCCinFV_stack_12->SetBinContent(19,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(20,1.342695);
   hnumuCCinFV_stack_12->SetBinContent(21,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(23,0.3694195);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(25,0.4214012);
   hnumuCCinFV_stack_12->SetBinContent(26,3.467299);
   hnumuCCinFV_stack_12->SetBinError(1,1.106911);
   hnumuCCinFV_stack_12->SetBinError(2,3.191531);
   hnumuCCinFV_stack_12->SetBinError(3,3.182836);
   hnumuCCinFV_stack_12->SetBinError(4,2.870463);
   hnumuCCinFV_stack_12->SetBinError(5,2.367731);
   hnumuCCinFV_stack_12->SetBinError(6,2.180079);
   hnumuCCinFV_stack_12->SetBinError(7,1.715619);
   hnumuCCinFV_stack_12->SetBinError(8,1.645423);
   hnumuCCinFV_stack_12->SetBinError(9,1.597231);
   hnumuCCinFV_stack_12->SetBinError(10,1.299536);
   hnumuCCinFV_stack_12->SetBinError(11,1.001919);
   hnumuCCinFV_stack_12->SetBinError(12,0.9600669);
   hnumuCCinFV_stack_12->SetBinError(13,0.8093956);
   hnumuCCinFV_stack_12->SetBinError(14,0.4714999);
   hnumuCCinFV_stack_12->SetBinError(15,0.6209405);
   hnumuCCinFV_stack_12->SetBinError(16,0.4981638);
   hnumuCCinFV_stack_12->SetBinError(17,0.5311697);
   hnumuCCinFV_stack_12->SetBinError(18,0.6195845);
   hnumuCCinFV_stack_12->SetBinError(19,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(20,0.6156062);
   hnumuCCinFV_stack_12->SetBinError(21,0.438694);
   hnumuCCinFV_stack_12->SetBinError(23,0.3694195);
   hnumuCCinFV_stack_12->SetBinError(24,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(25,0.2986313);
   hnumuCCinFV_stack_12->SetBinError(26,0.9773815);
   hnumuCCinFV_stack_12->SetEntries(885);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,1.217248);
   hnueCCinFV_stack_13->SetBinContent(4,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,0.9286332);
   hnueCCinFV_stack_13->SetBinError(3,0.6211758);
   hnueCCinFV_stack_13->SetBinError(4,0.4810838);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.48078);
   hnueCCinFV_stack_13->SetEntries(16);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__20->SetBinContent(1,40.47868);
   hmcerror__20->SetBinContent(2,224.9695);
   hmcerror__20->SetBinContent(3,338.1252);
   hmcerror__20->SetBinContent(4,274.133);
   hmcerror__20->SetBinContent(5,208.9971);
   hmcerror__20->SetBinContent(6,173.5318);
   hmcerror__20->SetBinContent(7,140.583);
   hmcerror__20->SetBinContent(8,96.80379);
   hmcerror__20->SetBinContent(9,68.39516);
   hmcerror__20->SetBinContent(10,45.90398);
   hmcerror__20->SetBinContent(11,33.77403);
   hmcerror__20->SetBinContent(12,25.43658);
   hmcerror__20->SetBinContent(13,15.70918);
   hmcerror__20->SetBinContent(14,10.88488);
   hmcerror__20->SetBinContent(15,10.50339);
   hmcerror__20->SetBinContent(16,6.58037);
   hmcerror__20->SetBinContent(17,6.58064);
   hmcerror__20->SetBinContent(18,6.122106);
   hmcerror__20->SetBinContent(19,3.189776);
   hmcerror__20->SetBinContent(20,4.399906);
   hmcerror__20->SetBinContent(21,2.743113);
   hmcerror__20->SetBinContent(22,2.661344);
   hmcerror__20->SetBinContent(23,2.068953);
   hmcerror__20->SetBinContent(24,1.620335);
   hmcerror__20->SetBinContent(25,1.436515);
   hmcerror__20->SetBinContent(26,15.07723);
   hmcerror__20->SetBinError(1,11.68739);
   hmcerror__20->SetBinError(2,50.15031);
   hmcerror__20->SetBinError(3,83.72826);
   hmcerror__20->SetBinError(4,77.27916);
   hmcerror__20->SetBinError(5,62.32088);
   hmcerror__20->SetBinError(6,47.22296);
   hmcerror__20->SetBinError(7,38.24194);
   hmcerror__20->SetBinError(8,23.03897);
   hmcerror__20->SetBinError(9,15.06067);
   hmcerror__20->SetBinError(10,10.55139);
   hmcerror__20->SetBinError(11,7.938183);
   hmcerror__20->SetBinError(12,6.455107);
   hmcerror__20->SetBinError(13,4.645138);
   hmcerror__20->SetBinError(14,3.126957);
   hmcerror__20->SetBinError(15,3.074823);
   hmcerror__20->SetBinError(16,2.004986);
   hmcerror__20->SetBinError(17,2.123532);
   hmcerror__20->SetBinError(18,2.251229);
   hmcerror__20->SetBinError(19,1.462292);
   hmcerror__20->SetBinError(20,1.48319);
   hmcerror__20->SetBinError(21,1.319164);
   hmcerror__20->SetBinError(22,1.386139);
   hmcerror__20->SetBinError(23,0.9249374);
   hmcerror__20->SetBinError(24,0.9340071);
   hmcerror__20->SetBinError(25,1.055981);
   hmcerror__20->SetBinError(26,3.501109);
   hmcerror__20->SetEntries(1759.741);

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
   
   Double_t _fx3025[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3025[25] = {
   41,
   230,
   293,
   234,
   186,
   134,
   104,
   74,
   60,
   44,
   32,
   23,
   12,
   19,
   13,
   6,
   6,
   2,
   5,
   5,
   2,
   4,
   2,
   1,
   0};
   Double_t _felx3025[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3025[25] = {
   6.5384,
   15.16575,
   17.11724,
   15.29706,
   13.63818,
   11.57584,
   10.19804,
   8.7275,
   7.8743,
   6.7671,
   5.7977,
   4.9457,
   3.64022,
   4.5151,
   3.77763,
   2.67925,
   2.67925,
   2,
   2.48995,
   2.48995,
   2,
   2.29683,
   2,
   1,
   0};
   Double_t _fehx3025[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3025[25] = {
   6.3331,
   15.16575,
   17.11724,
   15.29706,
   13.63818,
   11.57584,
   10.19804,
   8.5253,
   7.6713,
   6.5623,
   5.5904,
   4.7346,
   3.4155,
   4.3011,
   3.5552,
   2.41858,
   2.41858,
   1.51917,
   2.21064,
   2.21064,
   1.51917,
   1.98186,
   1.51917,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1650);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(341.129);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1532.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 3.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  29.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1429.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 16.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 204.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3026[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3026[25] = {
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
   Double_t _felx3026[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3026[25] = {
   0.2887294,
   0.2229205,
   0.247625,
   0.2819039,
   0.2981902,
   0.2721286,
   0.2720239,
   0.2379966,
   0.2202008,
   0.2298579,
   0.2350381,
   0.2537726,
   0.2956958,
   0.2872752,
   0.2927457,
   0.3046919,
   0.3226938,
   0.3677213,
   0.4584308,
   0.3370958,
   0.4809002,
   0.5208418,
   0.4470558,
   0.5764285,
   0.7350991};
   Double_t _fehx3026[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3026[25] = {
   0.2887294,
   0.2229205,
   0.247625,
   0.2819039,
   0.2981902,
   0.2721286,
   0.2720239,
   0.2379966,
   0.2202008,
   0.2298579,
   0.2350381,
   0.2537726,
   0.2956958,
   0.2872752,
   0.2927457,
   0.3046919,
   0.3226938,
   0.3677213,
   0.4584308,
   0.3370958,
   0.4809002,
   0.5208418,
   0.4470558,
   0.5764285,
   0.7350991};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1650);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3027[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3027[25] = {
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
   Double_t _felx3027[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3027[25] = {
   0.2887294,
   0.2229205,
   0.247625,
   0.2819039,
   0.2981902,
   0.2721286,
   0.2720239,
   0.2379966,
   0.2202008,
   0.2298579,
   0.2350381,
   0.2537726,
   0.2956958,
   0.2872752,
   0.2927457,
   0.3046919,
   0.3226938,
   0.3677213,
   0.4584308,
   0.3370958,
   0.4809002,
   0.5208418,
   0.4470558,
   0.5764285,
   0.7350991};
   Double_t _fehx3027[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3027[25] = {
   0.2887294,
   0.2229205,
   0.247625,
   0.2819039,
   0.2981902,
   0.2721286,
   0.2720239,
   0.2379966,
   0.2202008,
   0.2298579,
   0.2350381,
   0.2537726,
   0.2956958,
   0.2872752,
   0.2927457,
   0.3046919,
   0.3226938,
   0.3677213,
   0.4584308,
   0.3370958,
   0.4809002,
   0.5208418,
   0.4470558,
   0.5764285,
   0.7350991};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1650);
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
   
   Double_t _fx3028[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3028[25] = {
   1.012879,
   1.022361,
   0.8665428,
   0.8536003,
   0.8899646,
   0.772193,
   0.7397765,
   0.7644329,
   0.8772551,
   0.9585225,
   0.9474736,
   0.9042097,
   0.7638847,
   1.74554,
   1.237695,
   0.9118028,
   0.9117654,
   0.326685,
   1.567508,
   1.136388,
   0.7290987,
   1.503,
   0.9666726,
   0.6171564,
   0};
   Double_t _felx3028[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3028[25] = {
   0.161527,
   0.06741249,
   0.05062397,
   0.0558016,
   0.06525537,
   0.06670731,
   0.07254105,
   0.0901566,
   0.1151295,
   0.1474186,
   0.1716615,
   0.1944326,
   0.2317257,
   0.4148046,
   0.3596581,
   0.407158,
   0.4071413,
   0.326685,
   0.7806034,
   0.5659098,
   0.7290987,
   0.863034,
   0.9666726,
   0.6171564,
   0};
   Double_t _fehx3028[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3028[25] = {
   0.1564552,
   0.06741249,
   0.05062397,
   0.0558016,
   0.06525537,
   0.06670731,
   0.07254105,
   0.08806784,
   0.1121615,
   0.1429571,
   0.1655236,
   0.1861335,
   0.2174207,
   0.3951444,
   0.3384811,
   0.3675447,
   0.3675296,
   0.248145,
   0.6930392,
   0.5024289,
   0.5538124,
   0.744684,
   0.73427,
   0.8391538,
   0.7990169};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1650);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(2.486602);
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
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

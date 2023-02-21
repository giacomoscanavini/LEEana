#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Jan 16 04:37:11 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",60,83,1200,900);
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
   pad1->Range(-1.307692,-7.386659,1.25641,816.809);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__19->SetBinContent(1,96.01183);
   hmc__19->SetBinContent(2,81.6721);
   hmc__19->SetBinContent(3,73.91531);
   hmc__19->SetBinContent(4,70.80276);
   hmc__19->SetBinContent(5,65.56565);
   hmc__19->SetBinContent(6,67.33889);
   hmc__19->SetBinContent(7,64.26172);
   hmc__19->SetBinContent(8,75.00864);
   hmc__19->SetBinContent(9,79.86685);
   hmc__19->SetBinContent(10,89.42284);
   hmc__19->SetBinContent(11,103.3927);
   hmc__19->SetBinContent(12,109.9981);
   hmc__19->SetBinContent(13,111.1718);
   hmc__19->SetBinContent(14,124.1265);
   hmc__19->SetBinContent(15,129.6066);
   hmc__19->SetBinContent(16,162.047);
   hmc__19->SetBinContent(17,197.0022);
   hmc__19->SetBinContent(18,210.6692);
   hmc__19->SetBinContent(19,263.4286);
   hmc__19->SetBinContent(20,369.3329);
   hmc__19->SetBinError(1,31.90891);
   hmc__19->SetBinError(2,24.94812);
   hmc__19->SetBinError(3,26.20694);
   hmc__19->SetBinError(4,22.81029);
   hmc__19->SetBinError(5,20.33114);
   hmc__19->SetBinError(6,22.50837);
   hmc__19->SetBinError(7,23.40641);
   hmc__19->SetBinError(8,21.63433);
   hmc__19->SetBinError(9,25.71639);
   hmc__19->SetBinError(10,29.3612);
   hmc__19->SetBinError(11,31.84373);
   hmc__19->SetBinError(12,34.2913);
   hmc__19->SetBinError(13,35.601);
   hmc__19->SetBinError(14,41.67516);
   hmc__19->SetBinError(15,43.46895);
   hmc__19->SetBinError(16,60.68882);
   hmc__19->SetBinError(17,68.28691);
   hmc__19->SetBinError(18,64.82113);
   hmc__19->SetBinError(19,86.06458);
   hmc__19->SetBinError(20,96.16809);
   hmc__19->SetBinError(21,0.4673072);
   hmc__19->SetMinimum(-7.386659);
   hmc__19->SetMaximum(775.5992);
   hmc__19->SetEntries(2518.982);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,-1,1);
   hs7_stack_7->SetMinimum(-1.232915e-08);
   hs7_stack_7->SetMaximum(387.7996);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,3.163028);
   hbadmatch_stack_1->SetBinContent(2,1.94435);
   hbadmatch_stack_1->SetBinContent(3,1.617699);
   hbadmatch_stack_1->SetBinContent(4,1.633784);
   hbadmatch_stack_1->SetBinContent(5,1.592022);
   hbadmatch_stack_1->SetBinContent(6,1.82542);
   hbadmatch_stack_1->SetBinContent(7,0.4943003);
   hbadmatch_stack_1->SetBinContent(8,2.910216);
   hbadmatch_stack_1->SetBinContent(9,0.9680721);
   hbadmatch_stack_1->SetBinContent(10,2.845379);
   hbadmatch_stack_1->SetBinContent(11,3.760068);
   hbadmatch_stack_1->SetBinContent(12,6.951337);
   hbadmatch_stack_1->SetBinContent(13,2.225816);
   hbadmatch_stack_1->SetBinContent(14,3.475908);
   hbadmatch_stack_1->SetBinContent(15,1.907651);
   hbadmatch_stack_1->SetBinContent(16,3.062965);
   hbadmatch_stack_1->SetBinContent(17,5.418089);
   hbadmatch_stack_1->SetBinContent(18,5.113998);
   hbadmatch_stack_1->SetBinContent(19,3.983826);
   hbadmatch_stack_1->SetBinContent(20,4.619823);
   hbadmatch_stack_1->SetBinError(1,1.122155);
   hbadmatch_stack_1->SetBinError(2,0.8577802);
   hbadmatch_stack_1->SetBinError(3,0.7574616);
   hbadmatch_stack_1->SetBinError(4,0.6175123);
   hbadmatch_stack_1->SetBinError(5,0.7490679);
   hbadmatch_stack_1->SetBinError(6,0.7845873);
   hbadmatch_stack_1->SetBinError(7,0.3312182);
   hbadmatch_stack_1->SetBinError(8,1.147491);
   hbadmatch_stack_1->SetBinError(9,0.6001893);
   hbadmatch_stack_1->SetBinError(10,0.9581027);
   hbadmatch_stack_1->SetBinError(11,1.237614);
   hbadmatch_stack_1->SetBinError(12,2.662092);
   hbadmatch_stack_1->SetBinError(13,0.8099765);
   hbadmatch_stack_1->SetBinError(14,1.095727);
   hbadmatch_stack_1->SetBinError(15,0.8340718);
   hbadmatch_stack_1->SetBinError(16,1.086515);
   hbadmatch_stack_1->SetBinError(17,1.570161);
   hbadmatch_stack_1->SetBinError(18,1.512624);
   hbadmatch_stack_1->SetBinError(19,1.065458);
   hbadmatch_stack_1->SetBinError(20,1.261862);
   hbadmatch_stack_1->SetEntries(180);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,7.230728);
   houtFV_stack_4->SetBinContent(2,2.292215);
   houtFV_stack_4->SetBinContent(3,2.037936);
   houtFV_stack_4->SetBinContent(4,3.609077);
   houtFV_stack_4->SetBinContent(5,2.271334);
   houtFV_stack_4->SetBinContent(6,2.349371);
   houtFV_stack_4->SetBinContent(7,0.9127098);
   houtFV_stack_4->SetBinContent(8,2.626599);
   houtFV_stack_4->SetBinContent(9,2.792619);
   houtFV_stack_4->SetBinContent(10,2.313096);
   houtFV_stack_4->SetBinContent(11,2.57404);
   houtFV_stack_4->SetBinContent(12,2.738129);
   houtFV_stack_4->SetBinContent(13,4.379527);
   houtFV_stack_4->SetBinContent(14,5.282558);
   houtFV_stack_4->SetBinContent(15,4.351032);
   houtFV_stack_4->SetBinContent(16,7.388017);
   houtFV_stack_4->SetBinContent(17,8.816014);
   houtFV_stack_4->SetBinContent(18,6.908207);
   houtFV_stack_4->SetBinContent(19,8.043633);
   houtFV_stack_4->SetBinContent(20,9.360496);
   houtFV_stack_4->SetBinError(1,1.621027);
   houtFV_stack_4->SetBinError(2,0.851191);
   houtFV_stack_4->SetBinError(3,0.8717467);
   houtFV_stack_4->SetBinError(4,1.187828);
   houtFV_stack_4->SetBinError(5,0.9024504);
   houtFV_stack_4->SetBinError(6,0.9240623);
   houtFV_stack_4->SetBinError(7,0.554787);
   houtFV_stack_4->SetBinError(8,0.9962067);
   houtFV_stack_4->SetBinError(9,0.9873857);
   houtFV_stack_4->SetBinError(10,0.7966402);
   houtFV_stack_4->SetBinError(11,0.9672156);
   houtFV_stack_4->SetBinError(12,0.9609192);
   houtFV_stack_4->SetBinError(13,1.228802);
   houtFV_stack_4->SetBinError(14,1.440456);
   houtFV_stack_4->SetBinError(15,1.180922);
   houtFV_stack_4->SetBinError(16,1.595858);
   houtFV_stack_4->SetBinError(17,1.726516);
   houtFV_stack_4->SetBinError(18,1.479631);
   houtFV_stack_4->SetBinError(19,1.563954);
   houtFV_stack_4->SetBinError(20,1.769848);
   houtFV_stack_4->SetEntries(289);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6448606);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.430334);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.704144);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3683554);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1193532);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.41322);
   hNCpi0inFVcoh_stack_5->SetEntries(67);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.867983);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2317183);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2648209);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1986157);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5872512);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5210459);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3972314);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4548407);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3886355);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4548407);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2317183);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.099701);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.099701);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.340015);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.274204);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.183492);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.671435);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4474832);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08758128);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09362833);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.08108451);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2767835);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2727958);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1146708);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2687489);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2646402);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2687489);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08758128);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4559733);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4559733);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3983681);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.6009408);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.548596);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.6117837);
   hNCpi0inFVqe_stack_6->SetEntries(285);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,39.87163);
   hNCpi0inFVres_stack_7->SetBinContent(2,37.61333);
   hNCpi0inFVres_stack_7->SetBinContent(3,34.61819);
   hNCpi0inFVres_stack_7->SetBinContent(4,36.52827);
   hNCpi0inFVres_stack_7->SetBinContent(5,34.23943);
   hNCpi0inFVres_stack_7->SetBinContent(6,35.13448);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.4079);
   hNCpi0inFVres_stack_7->SetBinContent(8,38.31837);
   hNCpi0inFVres_stack_7->SetBinContent(9,42.98071);
   hNCpi0inFVres_stack_7->SetBinContent(10,48.28061);
   hNCpi0inFVres_stack_7->SetBinContent(11,53.05214);
   hNCpi0inFVres_stack_7->SetBinContent(12,56.83059);
   hNCpi0inFVres_stack_7->SetBinContent(13,55.4454);
   hNCpi0inFVres_stack_7->SetBinContent(14,67.08727);
   hNCpi0inFVres_stack_7->SetBinContent(15,67.50682);
   hNCpi0inFVres_stack_7->SetBinContent(16,89.27637);
   hNCpi0inFVres_stack_7->SetBinContent(17,97.91969);
   hNCpi0inFVres_stack_7->SetBinContent(18,113.5167);
   hNCpi0inFVres_stack_7->SetBinContent(19,130.9215);
   hNCpi0inFVres_stack_7->SetBinContent(20,158.0189);
   hNCpi0inFVres_stack_7->SetBinError(1,2.415833);
   hNCpi0inFVres_stack_7->SetBinError(2,2.364315);
   hNCpi0inFVres_stack_7->SetBinError(3,2.318728);
   hNCpi0inFVres_stack_7->SetBinError(4,2.392818);
   hNCpi0inFVres_stack_7->SetBinError(5,2.240747);
   hNCpi0inFVres_stack_7->SetBinError(6,2.195881);
   hNCpi0inFVres_stack_7->SetBinError(7,2.184897);
   hNCpi0inFVres_stack_7->SetBinError(8,2.308133);
   hNCpi0inFVres_stack_7->SetBinError(9,2.529135);
   hNCpi0inFVres_stack_7->SetBinError(10,2.725713);
   hNCpi0inFVres_stack_7->SetBinError(11,2.866413);
   hNCpi0inFVres_stack_7->SetBinError(12,2.99504);
   hNCpi0inFVres_stack_7->SetBinError(13,2.830141);
   hNCpi0inFVres_stack_7->SetBinError(14,3.197578);
   hNCpi0inFVres_stack_7->SetBinError(15,3.034689);
   hNCpi0inFVres_stack_7->SetBinError(16,3.697646);
   hNCpi0inFVres_stack_7->SetBinError(17,3.830837);
   hNCpi0inFVres_stack_7->SetBinError(18,4.13949);
   hNCpi0inFVres_stack_7->SetBinError(19,4.44848);
   hNCpi0inFVres_stack_7->SetBinError(20,4.879646);
   hNCpi0inFVres_stack_7->SetEntries(21010);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.394344);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.368658);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.8067);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.038025);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.384175);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.879434);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.053542);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.888816);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.963224);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.054329);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.863916);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.303239);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.138514);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.01627);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.56193);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.00164);
   hNCpi0inFVdis_stack_8->SetBinContent(17,16.97871);
   hNCpi0inFVdis_stack_8->SetBinContent(18,21.86674);
   hNCpi0inFVdis_stack_8->SetBinContent(19,28.70654);
   hNCpi0inFVdis_stack_8->SetBinContent(20,44.2975);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.117925);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7601997);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9841361);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8783906);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6986738);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8562813);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8257188);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.041912);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9089904);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.044538);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9071803);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9924518);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.178444);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.464909);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.198269);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.342556);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.600929);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.799807);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.051567);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.503719);
   hNCpi0inFVdis_stack_8->SetEntries(3969);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2893277);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2893277);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.256225);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1655131);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.2583545);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.2583545);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2562251);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.0740197);
   hNCpi0inFVmec_stack_9->SetEntries(23);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,11.32653);
   hCCpi0inFV_stack_10->SetBinContent(2,16.09097);
   hCCpi0inFV_stack_10->SetBinContent(3,12.45108);
   hCCpi0inFV_stack_10->SetBinContent(4,9.633587);
   hCCpi0inFV_stack_10->SetBinContent(5,8.764708);
   hCCpi0inFV_stack_10->SetBinContent(6,9.998045);
   hCCpi0inFV_stack_10->SetBinContent(7,9.381376);
   hCCpi0inFV_stack_10->SetBinContent(8,9.593893);
   hCCpi0inFV_stack_10->SetBinContent(9,8.328435);
   hCCpi0inFV_stack_10->SetBinContent(10,9.785528);
   hCCpi0inFV_stack_10->SetBinContent(11,14.60498);
   hCCpi0inFV_stack_10->SetBinContent(12,13.49693);
   hCCpi0inFV_stack_10->SetBinContent(13,16.83293);
   hCCpi0inFV_stack_10->SetBinContent(14,16.77028);
   hCCpi0inFV_stack_10->SetBinContent(15,15.08104);
   hCCpi0inFV_stack_10->SetBinContent(16,19.15905);
   hCCpi0inFV_stack_10->SetBinContent(17,32.66494);
   hCCpi0inFV_stack_10->SetBinContent(18,27.92677);
   hCCpi0inFV_stack_10->SetBinContent(19,37.09925);
   hCCpi0inFV_stack_10->SetBinContent(20,61.66297);
   hCCpi0inFV_stack_10->SetBinError(1,1.995232);
   hCCpi0inFV_stack_10->SetBinError(2,2.436221);
   hCCpi0inFV_stack_10->SetBinError(3,2.084336);
   hCCpi0inFV_stack_10->SetBinError(4,1.790793);
   hCCpi0inFV_stack_10->SetBinError(5,1.587288);
   hCCpi0inFV_stack_10->SetBinError(6,1.888241);
   hCCpi0inFV_stack_10->SetBinError(7,1.744268);
   hCCpi0inFV_stack_10->SetBinError(8,1.785171);
   hCCpi0inFV_stack_10->SetBinError(9,1.589674);
   hCCpi0inFV_stack_10->SetBinError(10,1.849619);
   hCCpi0inFV_stack_10->SetBinError(11,2.264185);
   hCCpi0inFV_stack_10->SetBinError(12,2.195768);
   hCCpi0inFV_stack_10->SetBinError(13,2.432862);
   hCCpi0inFV_stack_10->SetBinError(14,2.487667);
   hCCpi0inFV_stack_10->SetBinError(15,2.24472);
   hCCpi0inFV_stack_10->SetBinError(16,2.600348);
   hCCpi0inFV_stack_10->SetBinError(17,3.384651);
   hCCpi0inFV_stack_10->SetBinError(18,3.063085);
   hCCpi0inFV_stack_10->SetBinError(19,3.609396);
   hCCpi0inFV_stack_10->SetBinError(20,4.694501);
   hCCpi0inFV_stack_10->SetEntries(1155);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,11.82347);
   hNCinFV_stack_11->SetBinContent(2,8.001871);
   hNCinFV_stack_11->SetBinContent(3,7.343441);
   hNCinFV_stack_11->SetBinContent(4,5.49714);
   hNCinFV_stack_11->SetBinContent(5,8.872819);
   hNCinFV_stack_11->SetBinContent(6,6.176452);
   hNCinFV_stack_11->SetBinContent(7,5.030344);
   hNCinFV_stack_11->SetBinContent(8,3.204925);
   hNCinFV_stack_11->SetBinContent(9,6.730477);
   hNCinFV_stack_11->SetBinContent(10,6.834883);
   hNCinFV_stack_11->SetBinContent(11,4.988582);
   hNCinFV_stack_11->SetBinContent(12,8.426905);
   hNCinFV_stack_11->SetBinContent(13,8.23527);
   hNCinFV_stack_11->SetBinContent(14,6.622366);
   hNCinFV_stack_11->SetBinContent(15,11.35667);
   hNCinFV_stack_11->SetBinContent(16,11.67359);
   hNCinFV_stack_11->SetBinContent(17,13.69065);
   hNCinFV_stack_11->SetBinContent(18,16.19538);
   hNCinFV_stack_11->SetBinContent(19,32.1156);
   hNCinFV_stack_11->SetBinContent(20,50.45702);
   hNCinFV_stack_11->SetBinError(1,2.044757);
   hNCinFV_stack_11->SetBinError(2,1.620411);
   hNCinFV_stack_11->SetBinError(3,1.510804);
   hNCinFV_stack_11->SetBinError(4,1.325459);
   hNCinFV_stack_11->SetBinError(5,1.764455);
   hNCinFV_stack_11->SetBinError(6,1.417799);
   hNCinFV_stack_11->SetBinError(7,1.283702);
   hNCinFV_stack_11->SetBinError(8,1.016029);
   hNCinFV_stack_11->SetBinError(9,1.67416);
   hNCinFV_stack_11->SetBinError(10,1.534066);
   hNCinFV_stack_11->SetBinError(11,1.351915);
   hNCinFV_stack_11->SetBinError(12,1.70718);
   hNCinFV_stack_11->SetBinError(13,1.637134);
   hNCinFV_stack_11->SetBinError(14,1.486269);
   hNCinFV_stack_11->SetBinError(15,2.017941);
   hNCinFV_stack_11->SetBinError(16,1.940875);
   hNCinFV_stack_11->SetBinError(17,2.148681);
   hNCinFV_stack_11->SetBinError(18,2.342161);
   hNCinFV_stack_11->SetBinError(19,3.331178);
   hNCinFV_stack_11->SetBinError(20,4.235118);
   hNCinFV_stack_11->SetEntries(750);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,13.26792);
   hnumuCCinFV_stack_12->SetBinContent(2,9.538467);
   hnumuCCinFV_stack_12->SetBinContent(3,8.448478);
   hnumuCCinFV_stack_12->SetBinContent(4,7.336129);
   hnumuCCinFV_stack_12->SetBinContent(5,4.374417);
   hnumuCCinFV_stack_12->SetBinContent(6,5.697245);
   hnumuCCinFV_stack_12->SetBinContent(7,6.418483);
   hnumuCCinFV_stack_12->SetBinContent(8,10.91167);
   hnumuCCinFV_stack_12->SetBinContent(9,11.70609);
   hnumuCCinFV_stack_12->SetBinContent(10,11.85418);
   hnumuCCinFV_stack_12->SetBinContent(11,18.1603);
   hnumuCCinFV_stack_12->SetBinContent(12,13.36656);
   hnumuCCinFV_stack_12->SetBinContent(13,14.39327);
   hnumuCCinFV_stack_12->SetBinContent(14,10.11572);
   hnumuCCinFV_stack_12->SetBinContent(15,17.19656);
   hnumuCCinFV_stack_12->SetBinContent(16,17.06323);
   hnumuCCinFV_stack_12->SetBinContent(17,19.12734);
   hnumuCCinFV_stack_12->SetBinContent(18,14.72989);
   hnumuCCinFV_stack_12->SetBinContent(19,18.77547);
   hnumuCCinFV_stack_12->SetBinContent(20,30.30991);
   hnumuCCinFV_stack_12->SetBinError(1,2.196297);
   hnumuCCinFV_stack_12->SetBinError(2,1.945073);
   hnumuCCinFV_stack_12->SetBinError(3,2.152866);
   hnumuCCinFV_stack_12->SetBinError(4,1.638704);
   hnumuCCinFV_stack_12->SetBinError(5,1.277606);
   hnumuCCinFV_stack_12->SetBinError(6,1.382061);
   hnumuCCinFV_stack_12->SetBinError(7,1.565602);
   hnumuCCinFV_stack_12->SetBinError(8,2.190647);
   hnumuCCinFV_stack_12->SetBinError(9,2.278572);
   hnumuCCinFV_stack_12->SetBinError(10,2.200614);
   hnumuCCinFV_stack_12->SetBinError(11,2.925251);
   hnumuCCinFV_stack_12->SetBinError(12,2.375332);
   hnumuCCinFV_stack_12->SetBinError(13,2.729854);
   hnumuCCinFV_stack_12->SetBinError(14,1.908559);
   hnumuCCinFV_stack_12->SetBinError(15,2.868028);
   hnumuCCinFV_stack_12->SetBinError(16,3.903937);
   hnumuCCinFV_stack_12->SetBinError(17,3.189649);
   hnumuCCinFV_stack_12->SetBinError(18,2.640681);
   hnumuCCinFV_stack_12->SetBinError(19,2.924511);
   hnumuCCinFV_stack_12->SetBinError(20,3.11927);
   hnumuCCinFV_stack_12->SetEntries(802);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(2,0.5243112);
   hnueCCinFV_stack_13->SetBinContent(3,0.2938611);
   hnueCCinFV_stack_13->SetBinContent(4,0.2950345);
   hnueCCinFV_stack_13->SetBinContent(5,0.4463965);
   hnueCCinFV_stack_13->SetBinContent(6,0.7242924);
   hnueCCinFV_stack_13->SetBinContent(7,1.00891);
   hnueCCinFV_stack_13->SetBinContent(12,0.2971461);
   hnueCCinFV_stack_13->SetBinContent(14,1.235067);
   hnueCCinFV_stack_13->SetBinContent(15,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(17,0.9805174);
   hnueCCinFV_stack_13->SetBinContent(18,1.426241);
   hnueCCinFV_stack_13->SetBinContent(19,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(20,6.065268);
   hnueCCinFV_stack_13->SetBinError(2,0.372968);
   hnueCCinFV_stack_13->SetBinError(3,0.2938611);
   hnueCCinFV_stack_13->SetBinError(4,0.2950345);
   hnueCCinFV_stack_13->SetBinError(5,0.4459146);
   hnueCCinFV_stack_13->SetBinError(6,0.5256747);
   hnueCCinFV_stack_13->SetBinError(7,0.7680269);
   hnueCCinFV_stack_13->SetBinError(12,0.2971461);
   hnueCCinFV_stack_13->SetBinError(14,0.7272377);
   hnueCCinFV_stack_13->SetBinError(15,0.4459143);
   hnueCCinFV_stack_13->SetBinError(17,0.5865482);
   hnueCCinFV_stack_13->SetBinError(18,0.7367248);
   hnueCCinFV_stack_13->SetBinError(19,0.554787);
   hnueCCinFV_stack_13->SetBinError(20,1.472821);
   hnueCCinFV_stack_13->SetEntries(44);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__20->SetBinContent(1,96.01183);
   hmcerror__20->SetBinContent(2,81.6721);
   hmcerror__20->SetBinContent(3,73.91531);
   hmcerror__20->SetBinContent(4,70.80276);
   hmcerror__20->SetBinContent(5,65.56565);
   hmcerror__20->SetBinContent(6,67.33889);
   hmcerror__20->SetBinContent(7,64.26172);
   hmcerror__20->SetBinContent(8,75.00864);
   hmcerror__20->SetBinContent(9,79.86685);
   hmcerror__20->SetBinContent(10,89.42284);
   hmcerror__20->SetBinContent(11,103.3927);
   hmcerror__20->SetBinContent(12,109.9981);
   hmcerror__20->SetBinContent(13,111.1718);
   hmcerror__20->SetBinContent(14,124.1265);
   hmcerror__20->SetBinContent(15,129.6066);
   hmcerror__20->SetBinContent(16,162.047);
   hmcerror__20->SetBinContent(17,197.0022);
   hmcerror__20->SetBinContent(18,210.6692);
   hmcerror__20->SetBinContent(19,263.4286);
   hmcerror__20->SetBinContent(20,369.3329);
   hmcerror__20->SetBinError(1,31.90891);
   hmcerror__20->SetBinError(2,24.94812);
   hmcerror__20->SetBinError(3,26.20694);
   hmcerror__20->SetBinError(4,22.81029);
   hmcerror__20->SetBinError(5,20.33114);
   hmcerror__20->SetBinError(6,22.50837);
   hmcerror__20->SetBinError(7,23.40641);
   hmcerror__20->SetBinError(8,21.63433);
   hmcerror__20->SetBinError(9,25.71639);
   hmcerror__20->SetBinError(10,29.3612);
   hmcerror__20->SetBinError(11,31.84373);
   hmcerror__20->SetBinError(12,34.2913);
   hmcerror__20->SetBinError(13,35.601);
   hmcerror__20->SetBinError(14,41.67516);
   hmcerror__20->SetBinError(15,43.46895);
   hmcerror__20->SetBinError(16,60.68882);
   hmcerror__20->SetBinError(17,68.28691);
   hmcerror__20->SetBinError(18,64.82113);
   hmcerror__20->SetBinError(19,86.06458);
   hmcerror__20->SetBinError(20,96.16809);
   hmcerror__20->SetBinError(21,0.4673072);
   hmcerror__20->SetEntries(2518.982);

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
   
   Double_t _fx3025[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3025[20] = {
   78,
   68,
   78,
   51,
   50,
   54,
   63,
   53,
   78,
   66,
   74,
   80,
   86,
   94,
   102,
   121,
   142,
   192,
   197,
   261};
   Double_t _felx3025[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3025[20] = {
   8.9562,
   8.3726,
   8.9562,
   7.2725,
   7.2025,
   7.4785,
   8.0648,
   7.4105,
   8.9562,
   8.2509,
   8.7275,
   9.0683,
   9.3967,
   9.8173,
   10.0995,
   11,
   11.91638,
   13.85641,
   14.03567,
   16.15549};
   Double_t _fehx3025[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3025[20] = {
   8.7542,
   8.1701,
   8.7542,
   7.0686,
   6.9985,
   7.275,
   7.862,
   7.2068,
   8.7542,
   8.0483,
   8.5253,
   8.8665,
   9.1951,
   9.616,
   10.0995,
   11,
   11.91638,
   13.85641,
   14.03567,
   16.15549};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-1.2,1.2);
   Graph_Graph3025->SetMinimum(19.3617);
   Graph_Graph3025->SetMaximum(300.5913);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.78#pm0.20","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1988.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 59.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 88.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  3.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1272.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  231.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 360.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 233.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 262.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3026[20] = {
   0.3323435,
   0.3054668,
   0.3545536,
   0.3221667,
   0.3100882,
   0.3342552,
   0.3642357,
   0.2884244,
   0.3219908,
   0.3283412,
   0.3079883,
   0.3117445,
   0.3202342,
   0.3357475,
   0.3353914,
   0.3745137,
   0.3466303,
   0.3076916,
   0.3267094,
   0.2603832};
   Double_t _fehx3026[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3026[20] = {
   0.3323435,
   0.3054668,
   0.3545536,
   0.3221667,
   0.3100882,
   0.3342552,
   0.3642357,
   0.2884244,
   0.3219908,
   0.3283412,
   0.3079883,
   0.3117445,
   0.3202342,
   0.3357475,
   0.3353914,
   0.3745137,
   0.3466303,
   0.3076916,
   0.3267094,
   0.2603832};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-1.2,1.2);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3027[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3027[20] = {
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
   Double_t _felx3027[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3027[20] = {
   0.2370383,
   0.2332042,
   0.2380663,
   0.2404879,
   0.2467993,
   0.2311039,
   0.2393679,
   0.2218691,
   0.2464203,
   0.254232,
   0.2518524,
   0.2562654,
   0.2764606,
   0.2947304,
   0.3057955,
   0.3179538,
   0.2905943,
   0.2774426,
   0.2445013,
   0.2292779};
   Double_t _fehx3027[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3027[20] = {
   0.2370383,
   0.2332042,
   0.2380663,
   0.2404879,
   0.2467993,
   0.2311039,
   0.2393679,
   0.2218691,
   0.2464203,
   0.254232,
   0.2518524,
   0.2562654,
   0.2764606,
   0.2947304,
   0.3057955,
   0.3179538,
   0.2905943,
   0.2774426,
   0.2445013,
   0.2292779};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-1.2,1.2);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3028[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3028[20] = {
   0.8123999,
   0.8325976,
   1.055262,
   0.7203109,
   0.7625944,
   0.801914,
   0.9803659,
   0.7065852,
   0.9766254,
   0.7380665,
   0.7157181,
   0.7272854,
   0.7735777,
   0.757292,
   0.7869968,
   0.746697,
   0.7208043,
   0.9113816,
   0.7478308,
   0.7066794};
   Double_t _felx3028[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3028[20] = {
   0.09328225,
   0.1025148,
   0.1211684,
   0.1027149,
   0.1098517,
   0.1110577,
   0.1254993,
   0.09879528,
   0.1121391,
   0.09226838,
   0.08441121,
   0.08244053,
   0.08452416,
   0.07909109,
   0.07792429,
   0.06788155,
   0.06048855,
   0.0657733,
   0.05328074,
   0.04374236};
   Double_t _fehx3028[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3028[20] = {
   0.09117834,
   0.1000354,
   0.1184356,
   0.09983508,
   0.1067403,
   0.1080356,
   0.1223434,
   0.09607959,
   0.1096099,
   0.09000274,
   0.08245556,
   0.08060595,
   0.08271075,
   0.07746936,
   0.07792429,
   0.06788155,
   0.06048855,
   0.0657733,
   0.05328074,
   0.04374236};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-1.2,1.2);
   Graph_Graph3028->SetMinimum(0.5511992);
   Graph_Graph3028->SetMaximum(1.230288);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_6_pi0_costheta_all",20,-1,1);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}

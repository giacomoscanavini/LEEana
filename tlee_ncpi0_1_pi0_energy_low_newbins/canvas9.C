#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 19:43:30 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",34,57,1200,900);
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
   pad1->Range(-46.15385,-1.94,338.4615,214.5232);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__25->SetBinContent(1,45.8534);
   hmc__25->SetBinContent(2,85.53674);
   hmc__25->SetBinContent(3,95.73668);
   hmc__25->SetBinContent(4,80.25189);
   hmc__25->SetBinContent(5,74.33649);
   hmc__25->SetBinContent(6,62.75917);
   hmc__25->SetBinContent(7,44.53581);
   hmc__25->SetBinContent(8,36.94888);
   hmc__25->SetBinContent(9,25.25417);
   hmc__25->SetBinContent(10,23.81641);
   hmc__25->SetBinContent(11,18.53446);
   hmc__25->SetBinContent(12,15.11236);
   hmc__25->SetBinContent(13,16.3064);
   hmc__25->SetBinContent(14,5.997687);
   hmc__25->SetBinContent(15,4.960713);
   hmc__25->SetBinContent(16,6.625676);
   hmc__25->SetBinContent(17,2.202153);
   hmc__25->SetBinContent(18,3.522298);
   hmc__25->SetBinContent(19,3.301828);
   hmc__25->SetBinContent(20,1.782808);
   hmc__25->SetBinContent(21,7.21312);
   hmc__25->SetBinError(1,18.79837);
   hmc__25->SetBinError(2,33.94526);
   hmc__25->SetBinError(3,31.54069);
   hmc__25->SetBinError(4,29.54265);
   hmc__25->SetBinError(5,28.52245);
   hmc__25->SetBinError(6,23.61879);
   hmc__25->SetBinError(7,19.0124);
   hmc__25->SetBinError(8,14.87775);
   hmc__25->SetBinError(9,14.48973);
   hmc__25->SetBinError(10,12.04501);
   hmc__25->SetBinError(11,12.32316);
   hmc__25->SetBinError(12,17.29044);
   hmc__25->SetBinError(13,17.48756);
   hmc__25->SetBinError(14,7.77022);
   hmc__25->SetBinError(15,7.503356);
   hmc__25->SetBinError(16,4.711564);
   hmc__25->SetBinError(17,4.416954);
   hmc__25->SetBinError(18,4.680152);
   hmc__25->SetBinError(19,5.904196);
   hmc__25->SetBinError(20,4.809321);
   hmc__25->SetBinError(21,8.79797);
   hmc__25->SetMinimum(-1.94);
   hmc__25->SetMaximum(203.7);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,300);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(100.5235);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,0.5352025);
   hbadmatch_stack_1->SetBinContent(2,3.611409);
   hbadmatch_stack_1->SetBinContent(3,1.749627);
   hbadmatch_stack_1->SetBinContent(4,2.832291);
   hbadmatch_stack_1->SetBinContent(5,2.42565);
   hbadmatch_stack_1->SetBinContent(6,2.350734);
   hbadmatch_stack_1->SetBinContent(7,1.422597);
   hbadmatch_stack_1->SetBinContent(8,1.018549);
   hbadmatch_stack_1->SetBinContent(9,1.363141);
   hbadmatch_stack_1->SetBinContent(10,0.7733087);
   hbadmatch_stack_1->SetBinContent(11,1.029743);
   hbadmatch_stack_1->SetBinContent(12,0.8956656);
   hbadmatch_stack_1->SetBinContent(13,0.3546062);
   hbadmatch_stack_1->SetBinContent(15,0.1279738);
   hbadmatch_stack_1->SetBinContent(16,0.213904);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.3921167);
   hbadmatch_stack_1->SetBinError(2,0.9112738);
   hbadmatch_stack_1->SetBinError(3,0.617106);
   hbadmatch_stack_1->SetBinError(4,0.9345602);
   hbadmatch_stack_1->SetBinError(5,0.7627492);
   hbadmatch_stack_1->SetBinError(6,0.8295439);
   hbadmatch_stack_1->SetBinError(7,0.6194372);
   hbadmatch_stack_1->SetBinError(8,0.4299205);
   hbadmatch_stack_1->SetBinError(9,0.5946667);
   hbadmatch_stack_1->SetBinError(10,0.4585958);
   hbadmatch_stack_1->SetBinError(11,0.4881826);
   hbadmatch_stack_1->SetBinError(12,0.6062769);
   hbadmatch_stack_1->SetBinError(13,0.2678908);
   hbadmatch_stack_1->SetBinError(15,0.1279737);
   hbadmatch_stack_1->SetBinError(16,0.213904);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,5.636075);
   hext_stack_2->SetBinContent(2,15.70562);
   hext_stack_2->SetBinContent(3,18.50867);
   hext_stack_2->SetBinContent(4,15.56156);
   hext_stack_2->SetBinContent(5,8.649442);
   hext_stack_2->SetBinContent(6,5.40824);
   hext_stack_2->SetBinContent(7,4.613812);
   hext_stack_2->SetBinContent(8,4.587862);
   hext_stack_2->SetBinContent(9,1.379791);
   hext_stack_2->SetBinContent(10,2.517386);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,2.566457);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(21,1.137595);
   hext_stack_2->SetBinError(1,1.765321);
   hext_stack_2->SetBinError(2,2.604605);
   hext_stack_2->SetBinError(3,3.237105);
   hext_stack_2->SetBinError(4,2.863279);
   hext_stack_2->SetBinError(5,2.014317);
   hext_stack_2->SetBinError(6,1.63365);
   hext_stack_2->SetBinError(7,1.439057);
   hext_stack_2->SetBinError(8,1.593539);
   hext_stack_2->SetBinError(9,0.6935586);
   hext_stack_2->SetBinError(10,0.9575503);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,1.283228);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(21,0.6602113);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,0.9051592);
   hdirt_stack_3->SetBinContent(2,1.820549);
   hdirt_stack_3->SetBinContent(3,0.4834816);
   hdirt_stack_3->SetBinContent(4,0.264355);
   hdirt_stack_3->SetBinContent(5,0.2945329);
   hdirt_stack_3->SetBinContent(8,0.4149213);
   hdirt_stack_3->SetBinContent(9,0.3381872);
   hdirt_stack_3->SetBinError(1,0.5633738);
   hdirt_stack_3->SetBinError(2,0.7017677);
   hdirt_stack_3->SetBinError(3,0.3433964);
   hdirt_stack_3->SetBinError(4,0.2620141);
   hdirt_stack_3->SetBinError(5,0.2086718);
   hdirt_stack_3->SetBinError(8,0.4149213);
   hdirt_stack_3->SetBinError(9,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,9.350835);
   houtFV_stack_4->SetBinContent(2,13.73885);
   houtFV_stack_4->SetBinContent(3,17.30383);
   houtFV_stack_4->SetBinContent(4,15.19534);
   houtFV_stack_4->SetBinContent(5,14.14367);
   houtFV_stack_4->SetBinContent(6,9.122242);
   houtFV_stack_4->SetBinContent(7,7.939736);
   houtFV_stack_4->SetBinContent(8,5.158593);
   houtFV_stack_4->SetBinContent(9,3.742674);
   houtFV_stack_4->SetBinContent(10,4.266224);
   houtFV_stack_4->SetBinContent(11,3.845757);
   houtFV_stack_4->SetBinContent(12,3.187634);
   houtFV_stack_4->SetBinContent(13,3.41411);
   houtFV_stack_4->SetBinContent(14,1.66276);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.6349909);
   houtFV_stack_4->SetBinContent(17,0.9849763);
   houtFV_stack_4->SetBinContent(18,0.8411002);
   houtFV_stack_4->SetBinContent(19,0.3401776);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,0.8368759);
   houtFV_stack_4->SetBinError(1,1.54637);
   houtFV_stack_4->SetBinError(2,1.808034);
   houtFV_stack_4->SetBinError(3,2.088075);
   houtFV_stack_4->SetBinError(4,1.893937);
   houtFV_stack_4->SetBinError(5,1.923343);
   houtFV_stack_4->SetBinError(6,1.580098);
   houtFV_stack_4->SetBinError(7,1.401645);
   houtFV_stack_4->SetBinError(8,1.148316);
   houtFV_stack_4->SetBinError(9,0.9108335);
   houtFV_stack_4->SetBinError(10,1.120591);
   houtFV_stack_4->SetBinError(11,1.0153);
   houtFV_stack_4->SetBinError(12,1.156909);
   houtFV_stack_4->SetBinError(13,0.9979826);
   houtFV_stack_4->SetBinError(14,0.6828561);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.3260638);
   houtFV_stack_4->SetBinError(17,0.5064494);
   houtFV_stack_4->SetBinError(18,0.6737424);
   houtFV_stack_4->SetBinError(19,0.3401776);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.6373526);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1324158);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1691609);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.04904586);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.235966);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1081756);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1439898);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.0385056);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1996193);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02414102);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1275711);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1050653);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3248363);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1563534);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03585128);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07344762);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04366864);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1716447);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05601192);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02535645);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05284983);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.908871);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.37342);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.99128);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.68706);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.26579);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.61686);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.788394);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.356136);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.166875);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.997447);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.620103);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.737508);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.091994);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.125551);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.6789191);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.027408);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2058525);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.7534047);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3173105);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1004227);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.7197619);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8916521);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9893267);
   hNCpi0inFVres_stack_7->SetBinError(3,1.148446);
   hNCpi0inFVres_stack_7->SetBinError(4,1.107112);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9899369);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9573056);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7649825);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6723183);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5463211);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6553858);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5178349);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6103483);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4296172);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3214002);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1927377);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3441444);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1284315);
   hNCpi0inFVres_stack_7->SetBinError(18,0.319185);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1857874);
   hNCpi0inFVres_stack_7->SetBinError(20,0.04652018);
   hNCpi0inFVres_stack_7->SetBinError(21,0.313404);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.824858);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.632177);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.991952);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.724999);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.411081);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.372015);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.933348);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.063328);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.9862549);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6897499);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7569658);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.218881);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.6517416);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9876145);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.556585);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6220189);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.227844);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1237802);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.08308727);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9521583);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.070637);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4224675);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.469866);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5939222);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5718108);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9943281);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.586079);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4100329);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8244401);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3213966);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2108703);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2373741);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7519978);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3094769);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5323192);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2824128);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4185748);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1047065);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.07516967);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.08308727);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6806665);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4979788);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,4.182399);
   hCCpi0inFV_stack_10->SetBinContent(2,13.5034);
   hCCpi0inFV_stack_10->SetBinContent(3,15.19408);
   hCCpi0inFV_stack_10->SetBinContent(4,15.21276);
   hCCpi0inFV_stack_10->SetBinContent(5,16.30517);
   hCCpi0inFV_stack_10->SetBinContent(6,16.98618);
   hCCpi0inFV_stack_10->SetBinContent(7,11.61714);
   hCCpi0inFV_stack_10->SetBinContent(8,9.678073);
   hCCpi0inFV_stack_10->SetBinContent(9,5.236693);
   hCCpi0inFV_stack_10->SetBinContent(10,5.926287);
   hCCpi0inFV_stack_10->SetBinContent(11,5.619981);
   hCCpi0inFV_stack_10->SetBinContent(12,2.89133);
   hCCpi0inFV_stack_10->SetBinContent(13,3.107071);
   hCCpi0inFV_stack_10->SetBinContent(14,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(15,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(16,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(17,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(18,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(19,1.127039);
   hCCpi0inFV_stack_10->SetBinContent(20,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(21,1.752451);
   hCCpi0inFV_stack_10->SetBinError(1,1.017015);
   hCCpi0inFV_stack_10->SetBinError(2,1.812424);
   hCCpi0inFV_stack_10->SetBinError(3,1.954589);
   hCCpi0inFV_stack_10->SetBinError(4,1.955194);
   hCCpi0inFV_stack_10->SetBinError(5,2.089335);
   hCCpi0inFV_stack_10->SetBinError(6,2.086927);
   hCCpi0inFV_stack_10->SetBinError(7,1.681637);
   hCCpi0inFV_stack_10->SetBinError(8,1.545388);
   hCCpi0inFV_stack_10->SetBinError(9,1.128345);
   hCCpi0inFV_stack_10->SetBinError(10,1.224418);
   hCCpi0inFV_stack_10->SetBinError(11,1.160423);
   hCCpi0inFV_stack_10->SetBinError(12,0.9474626);
   hCCpi0inFV_stack_10->SetBinError(13,0.928454);
   hCCpi0inFV_stack_10->SetBinError(14,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(15,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(16,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(17,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(18,0.438694);
   hCCpi0inFV_stack_10->SetBinError(19,0.5201044);
   hCCpi0inFV_stack_10->SetBinError(20,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(21,0.7345848);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,2.321285);
   hNCinFV_stack_11->SetBinContent(2,2.78747);
   hNCinFV_stack_11->SetBinContent(3,2.777619);
   hNCinFV_stack_11->SetBinContent(4,1.907918);
   hNCinFV_stack_11->SetBinContent(5,2.860363);
   hNCinFV_stack_11->SetBinContent(6,4.927322);
   hNCinFV_stack_11->SetBinContent(7,3.306817);
   hNCinFV_stack_11->SetBinContent(8,1.928639);
   hNCinFV_stack_11->SetBinContent(9,2.114982);
   hNCinFV_stack_11->SetBinContent(10,1.868306);
   hNCinFV_stack_11->SetBinContent(11,2.644493);
   hNCinFV_stack_11->SetBinContent(12,0.7399201);
   hNCinFV_stack_11->SetBinContent(13,2.500612);
   hNCinFV_stack_11->SetBinContent(14,0.5578294);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.7740358);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(19,0.297835);
   hNCinFV_stack_11->SetBinContent(21,0.3934307);
   hNCinFV_stack_11->SetBinError(1,0.770456);
   hNCinFV_stack_11->SetBinError(2,0.8896762);
   hNCinFV_stack_11->SetBinError(3,0.8365958);
   hNCinFV_stack_11->SetBinError(4,0.5631114);
   hNCinFV_stack_11->SetBinError(5,0.746942);
   hNCinFV_stack_11->SetBinError(6,1.307399);
   hNCinFV_stack_11->SetBinError(7,1.033319);
   hNCinFV_stack_11->SetBinError(8,0.6420628);
   hNCinFV_stack_11->SetBinError(9,0.7823034);
   hNCinFV_stack_11->SetBinError(10,0.7040193);
   hNCinFV_stack_11->SetBinError(11,1.068373);
   hNCinFV_stack_11->SetBinError(12,0.3848772);
   hNCinFV_stack_11->SetBinError(13,1.152451);
   hNCinFV_stack_11->SetBinError(14,0.4038479);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.4272467);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.2204646);
   hNCinFV_stack_11->SetBinError(21,0.2781975);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,14.46864);
   hnumuCCinFV_stack_12->SetBinContent(2,17.90539);
   hnumuCCinFV_stack_12->SetBinContent(3,20.52689);
   hnumuCCinFV_stack_12->SetBinContent(4,11.35279);
   hnumuCCinFV_stack_12->SetBinContent(5,11.13645);
   hnumuCCinFV_stack_12->SetBinContent(6,10.83205);
   hnumuCCinFV_stack_12->SetBinContent(7,5.828377);
   hnumuCCinFV_stack_12->SetBinContent(8,4.725452);
   hnumuCCinFV_stack_12->SetBinContent(9,5.136174);
   hnumuCCinFV_stack_12->SetBinContent(10,2.582234);
   hnumuCCinFV_stack_12->SetBinContent(11,1.610818);
   hnumuCCinFV_stack_12->SetBinContent(12,1.515398);
   hnumuCCinFV_stack_12->SetBinContent(13,3.555052);
   hnumuCCinFV_stack_12->SetBinContent(14,1.270501);
   hnumuCCinFV_stack_12->SetBinContent(15,1.609309);
   hnumuCCinFV_stack_12->SetBinContent(18,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(19,0.5707403);
   hnumuCCinFV_stack_12->SetBinContent(20,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(21,1.302369);
   hnumuCCinFV_stack_12->SetBinError(1,2.280321);
   hnumuCCinFV_stack_12->SetBinError(2,2.546782);
   hnumuCCinFV_stack_12->SetBinError(3,2.84362);
   hnumuCCinFV_stack_12->SetBinError(4,1.939559);
   hnumuCCinFV_stack_12->SetBinError(5,1.986331);
   hnumuCCinFV_stack_12->SetBinError(6,1.832203);
   hnumuCCinFV_stack_12->SetBinError(7,1.260633);
   hnumuCCinFV_stack_12->SetBinError(8,1.08375);
   hnumuCCinFV_stack_12->SetBinError(9,1.135366);
   hnumuCCinFV_stack_12->SetBinError(10,0.8501169);
   hnumuCCinFV_stack_12->SetBinError(11,0.6924303);
   hnumuCCinFV_stack_12->SetBinError(12,0.588146);
   hnumuCCinFV_stack_12->SetBinError(13,0.9895039);
   hnumuCCinFV_stack_12->SetBinError(14,0.5895188);
   hnumuCCinFV_stack_12->SetBinError(15,0.5702963);
   hnumuCCinFV_stack_12->SetBinError(18,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(19,0.4109501);
   hnumuCCinFV_stack_12->SetBinError(20,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(21,0.600904);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,0.5688501);
   hnueCCinFV_stack_13->SetBinContent(2,2.302997);
   hnueCCinFV_stack_13->SetBinContent(3,2.044925);
   hnueCCinFV_stack_13->SetBinContent(5,0.536893);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_13->SetBinError(1,0.3318674);
   hnueCCinFV_stack_13->SetBinError(2,1.632617);
   hnueCCinFV_stack_13->SetBinError(3,1.272762);
   hnueCCinFV_stack_13->SetBinError(5,0.3929602);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.2171002);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__26->SetBinContent(1,45.8534);
   hmcerror__26->SetBinContent(2,85.53674);
   hmcerror__26->SetBinContent(3,95.73668);
   hmcerror__26->SetBinContent(4,80.25189);
   hmcerror__26->SetBinContent(5,74.33649);
   hmcerror__26->SetBinContent(6,62.75917);
   hmcerror__26->SetBinContent(7,44.53581);
   hmcerror__26->SetBinContent(8,36.94888);
   hmcerror__26->SetBinContent(9,25.25417);
   hmcerror__26->SetBinContent(10,23.81641);
   hmcerror__26->SetBinContent(11,18.53446);
   hmcerror__26->SetBinContent(12,15.11236);
   hmcerror__26->SetBinContent(13,16.3064);
   hmcerror__26->SetBinContent(14,5.997687);
   hmcerror__26->SetBinContent(15,4.960713);
   hmcerror__26->SetBinContent(16,6.625676);
   hmcerror__26->SetBinContent(17,2.202153);
   hmcerror__26->SetBinContent(18,3.522298);
   hmcerror__26->SetBinContent(19,3.301828);
   hmcerror__26->SetBinContent(20,1.782808);
   hmcerror__26->SetBinContent(21,7.21312);
   hmcerror__26->SetBinError(1,18.79837);
   hmcerror__26->SetBinError(2,33.94526);
   hmcerror__26->SetBinError(3,31.54069);
   hmcerror__26->SetBinError(4,29.54265);
   hmcerror__26->SetBinError(5,28.52245);
   hmcerror__26->SetBinError(6,23.61879);
   hmcerror__26->SetBinError(7,19.0124);
   hmcerror__26->SetBinError(8,14.87775);
   hmcerror__26->SetBinError(9,14.48973);
   hmcerror__26->SetBinError(10,12.04501);
   hmcerror__26->SetBinError(11,12.32316);
   hmcerror__26->SetBinError(12,17.29044);
   hmcerror__26->SetBinError(13,17.48756);
   hmcerror__26->SetBinError(14,7.77022);
   hmcerror__26->SetBinError(15,7.503356);
   hmcerror__26->SetBinError(16,4.711564);
   hmcerror__26->SetBinError(17,4.416954);
   hmcerror__26->SetBinError(18,4.680152);
   hmcerror__26->SetBinError(19,5.904196);
   hmcerror__26->SetBinError(20,4.809321);
   hmcerror__26->SetBinError(21,8.79797);
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
   
   Double_t _fx3033[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3033[20] = {
   46,
   77,
   97,
   81,
   67,
   57,
   43,
   32,
   18,
   14,
   11,
   12,
   4,
   5,
   4,
   4,
   2,
   2,
   1,
   1};
   Double_t _felx3033[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3033[20] = {
   6.9153,
   8.8995,
   9.9704,
   9.1239,
   8.3119,
   7.679,
   6.6917,
   5.7977,
   4.4008,
   3.9102,
   3.4975,
   3.64022,
   2.29683,
   2.48995,
   2.29683,
   2.29683,
   2,
   2,
   1,
   1};
   Double_t _fehx3033[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3033[20] = {
   6.7108,
   8.6976,
   9.769,
   8.9221,
   8.1094,
   7.4757,
   6.4868,
   5.5904,
   4.1858,
   3.6898,
   3.27,
   3.4155,
   1.98186,
   2.21064,
   1.98186,
   1.98186,
   1.51917,
   1.51917,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,330);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(117.4459);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 578.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 87.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 115.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 130.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 115.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3034[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3034[20] = {
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
   Double_t _felx3034[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3034[20] = {
   0.4099668,
   0.3968501,
   0.3294526,
   0.368124,
   0.3836938,
   0.37634,
   0.4269014,
   0.4026578,
   0.5737559,
   0.5057443,
   0.6648783,
   1.144126,
   1.072435,
   1.295536,
   1.512556,
   0.7111069,
   2.005743,
   1.328721,
   1.78816,
   2.697609};
   Double_t _fehx3034[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3034[20] = {
   0.4099668,
   0.3968501,
   0.3294526,
   0.368124,
   0.3836938,
   0.37634,
   0.4269014,
   0.4026578,
   0.5737559,
   0.5057443,
   0.6648783,
   1.144126,
   1.072435,
   1.295536,
   1.512556,
   0.7111069,
   2.005743,
   1.328721,
   1.78816,
   2.697609};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,330);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3035[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3035[20] = {
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
   Double_t _felx3035[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3035[20] = {
   0.1911809,
   0.2304921,
   0.2458157,
   0.2557991,
   0.295432,
   0.262345,
   0.3069855,
   0.2425722,
   0.3124426,
   0.2728016,
   0.3108673,
   0.2814289,
   0.2805843,
   0.3708236,
   0.3792507,
   0.3194968,
   0.5276623,
   0.4238842,
   0.3688593,
   0.7759859};
   Double_t _fehx3035[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3035[20] = {
   0.1911809,
   0.2304921,
   0.2458157,
   0.2557991,
   0.295432,
   0.262345,
   0.3069855,
   0.2425722,
   0.3124426,
   0.2728016,
   0.3108673,
   0.2814289,
   0.2805843,
   0.3708236,
   0.3792507,
   0.3194968,
   0.5276623,
   0.4238842,
   0.3688593,
   0.7759859};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,330);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3036[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3036[20] = {
   1.003197,
   0.9001979,
   1.013196,
   1.009322,
   0.901307,
   0.9082337,
   0.9655152,
   0.8660615,
   0.7127536,
   0.58783,
   0.5934891,
   0.7940522,
   0.2453025,
   0.8336547,
   0.8063356,
   0.603712,
   0.908202,
   0.5678111,
   0.3028625,
   0.5609128};
   Double_t _felx3036[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3036[20] = {
   0.1508132,
   0.104043,
   0.104144,
   0.1136908,
   0.1118145,
   0.1223566,
   0.1502544,
   0.1569114,
   0.1742603,
   0.1641809,
   0.1887026,
   0.2408771,
   0.1408545,
   0.4151517,
   0.463004,
   0.3466559,
   0.908202,
   0.5678111,
   0.3028625,
   0.5609128};
   Double_t _fehx3036[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3036[20] = {
   0.1463534,
   0.1016826,
   0.1020403,
   0.1111762,
   0.1090904,
   0.1191172,
   0.1456536,
   0.1513009,
   0.1657469,
   0.1549268,
   0.1764281,
   0.2260071,
   0.1215388,
   0.3685821,
   0.3995111,
   0.2991182,
   0.6898566,
   0.4313008,
   0.4118052,
   0.7626787};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,330);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.757865);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

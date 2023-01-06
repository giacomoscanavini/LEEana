#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Sep 28 16:07:01 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",190,172,1200,900);
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
   pad1->Range(-276.9231,-7.608951,2030.769,841.3898);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__25->SetBinContent(0,0.3401776);
   hmc__25->SetBinContent(1,0.1967154);
   hmc__25->SetBinContent(2,3.818502);
   hmc__25->SetBinContent(3,58.51478);
   hmc__25->SetBinContent(4,191.1253);
   hmc__25->SetBinContent(5,323.6606);
   hmc__25->SetBinContent(6,380.4476);
   hmc__25->SetBinContent(7,370.5634);
   hmc__25->SetBinContent(8,336.9126);
   hmc__25->SetBinContent(9,269.4869);
   hmc__25->SetBinContent(10,228.1265);
   hmc__25->SetBinContent(11,193.5003);
   hmc__25->SetBinContent(12,144.3546);
   hmc__25->SetBinContent(13,116.4106);
   hmc__25->SetBinContent(14,91.76989);
   hmc__25->SetBinContent(15,72.39416);
   hmc__25->SetBinContent(16,51.17017);
   hmc__25->SetBinContent(17,40.45687);
   hmc__25->SetBinContent(18,36.69786);
   hmc__25->SetBinContent(19,24.5384);
   hmc__25->SetBinContent(20,16.11967);
   hmc__25->SetBinContent(21,95.73792);
   hmc__25->SetBinError(0,0.3401776);
   hmc__25->SetBinError(1,0.4218229);
   hmc__25->SetBinError(2,1.609922);
   hmc__25->SetBinError(3,14.11544);
   hmc__25->SetBinError(4,50.15295);
   hmc__25->SetBinError(5,83.28575);
   hmc__25->SetBinError(6,105.8682);
   hmc__25->SetBinError(7,99.42288);
   hmc__25->SetBinError(8,88.29102);
   hmc__25->SetBinError(9,71.59342);
   hmc__25->SetBinError(10,57.28496);
   hmc__25->SetBinError(11,48.43288);
   hmc__25->SetBinError(12,36.48668);
   hmc__25->SetBinError(13,28.9581);
   hmc__25->SetBinError(14,22.17546);
   hmc__25->SetBinError(15,18.86286);
   hmc__25->SetBinError(16,13.29891);
   hmc__25->SetBinError(17,9.036183);
   hmc__25->SetBinError(18,9.531309);
   hmc__25->SetBinError(19,5.358741);
   hmc__25->SetBinError(20,4.916708);
   hmc__25->SetBinError(21,16.21137);
   hmc__25->SetMinimum(-7.608951);
   hmc__25->SetMaximum(798.9399);
   hmc__25->SetEntries(3014.754);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,1800);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(399.4699);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(3,0.3900192);
   hbadmatch_stack_1->SetBinContent(4,0.536893);
   hbadmatch_stack_1->SetBinContent(5,0.6387796);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,1.121968);
   hbadmatch_stack_1->SetBinContent(8,0.1950248);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,1.184408);
   hbadmatch_stack_1->SetBinContent(11,1.037565);
   hbadmatch_stack_1->SetBinContent(12,0.7625952);
   hbadmatch_stack_1->SetBinContent(13,0.7588764);
   hbadmatch_stack_1->SetBinContent(14,1.526508);
   hbadmatch_stack_1->SetBinContent(15,0.3917402);
   hbadmatch_stack_1->SetBinContent(21,0.3934307);
   hbadmatch_stack_1->SetBinError(3,0.3438095);
   hbadmatch_stack_1->SetBinError(4,0.3929602);
   hbadmatch_stack_1->SetBinError(5,0.468889);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.5181909);
   hbadmatch_stack_1->SetBinError(8,0.1950249);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.5666328);
   hbadmatch_stack_1->SetBinError(11,0.4926707);
   hbadmatch_stack_1->SetBinError(12,0.4531658);
   hbadmatch_stack_1->SetBinError(13,0.5394715);
   hbadmatch_stack_1->SetBinError(14,0.6563349);
   hbadmatch_stack_1->SetBinError(15,0.2770047);
   hbadmatch_stack_1->SetBinError(21,0.2781975);
   hbadmatch_stack_1->SetEntries(40);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,0.9660115);
   hext_stack_2->SetBinContent(4,0.3243973);
   hext_stack_2->SetBinContent(5,5.483261);
   hext_stack_2->SetBinContent(6,2.352983);
   hext_stack_2->SetBinContent(7,9.112292);
   hext_stack_2->SetBinContent(8,6.538654);
   hext_stack_2->SetBinContent(9,3.15182);
   hext_stack_2->SetBinContent(10,3.979379);
   hext_stack_2->SetBinContent(11,7.878134);
   hext_stack_2->SetBinContent(12,2.192989);
   hext_stack_2->SetBinContent(13,4.345666);
   hext_stack_2->SetBinContent(14,3.241202);
   hext_stack_2->SetBinContent(15,1.614806);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,4.028449);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,7.396514);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.7189592);
   hext_stack_2->SetBinError(4,0.3243973);
   hext_stack_2->SetBinError(5,1.711754);
   hext_stack_2->SetBinError(6,0.8925942);
   hext_stack_2->SetBinError(7,2.179763);
   hext_stack_2->SetBinError(8,1.818211);
   hext_stack_2->SetBinError(9,1.23684);
   hext_stack_2->SetBinError(10,1.207483);
   hext_stack_2->SetBinError(11,2.158194);
   hext_stack_2->SetBinError(12,0.9009267);
   hext_stack_2->SetBinError(13,1.579311);
   hext_stack_2->SetBinError(14,1.178414);
   hext_stack_2->SetBinError(15,0.8528597);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,1.479117);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,2.056985);
   hext_stack_2->SetEntries(141);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.577569);
   hdirt_stack_3->SetBinContent(10,0.165896);
   hdirt_stack_3->SetBinContent(11,1.167841e-06);
   hdirt_stack_3->SetBinContent(12,0.2665913);
   hdirt_stack_3->SetBinContent(19,0.2441834);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4096513);
   hdirt_stack_3->SetBinError(10,0.165896);
   hdirt_stack_3->SetBinError(11,1.167841e-06);
   hdirt_stack_3->SetBinError(12,0.2665913);
   hdirt_stack_3->SetBinError(19,0.2441834);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(3,0.5884556);
   houtFV_stack_4->SetBinContent(4,3.79527);
   houtFV_stack_4->SetBinContent(5,1.805717);
   houtFV_stack_4->SetBinContent(6,3.070962);
   houtFV_stack_4->SetBinContent(7,3.940173);
   houtFV_stack_4->SetBinContent(8,2.9057);
   houtFV_stack_4->SetBinContent(9,2.172933);
   houtFV_stack_4->SetBinContent(10,2.61974);
   houtFV_stack_4->SetBinContent(11,1.262405);
   houtFV_stack_4->SetBinContent(12,2.026121);
   houtFV_stack_4->SetBinContent(13,0.4325497);
   houtFV_stack_4->SetBinContent(14,0.8575791);
   houtFV_stack_4->SetBinContent(15,0.7834804);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.4519673);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(21,0.5352025);
   houtFV_stack_4->SetBinError(3,0.3397478);
   houtFV_stack_4->SetBinError(4,0.9906097);
   houtFV_stack_4->SetBinError(5,0.7080169);
   houtFV_stack_4->SetBinError(6,0.9123374);
   houtFV_stack_4->SetBinError(7,1.030043);
   houtFV_stack_4->SetBinError(8,0.8787331);
   houtFV_stack_4->SetBinError(9,0.7745052);
   houtFV_stack_4->SetBinError(10,1.07345);
   houtFV_stack_4->SetBinError(11,0.5848842);
   houtFV_stack_4->SetBinError(12,1.017413);
   houtFV_stack_4->SetBinError(13,0.352496);
   houtFV_stack_4->SetBinError(14,0.4331411);
   houtFV_stack_4->SetBinError(15,0.3917439);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(18,0.3222584);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(21,0.3921167);
   houtFV_stack_4->SetEntries(116);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.2642637);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.298545);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.220423);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.859856);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.773294);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.465027);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.593547);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.584314);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.908998);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.509632);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.394947);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.477687);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.626894);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.8576074);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1942882);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1895681);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.08743493);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1780678);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1562702);
   hNCpi0inFVres_stack_7->SetBinError(3,0.09158295);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3981418);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2111132);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4572874);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4737337);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4314954);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2938986);
   hNCpi0inFVres_stack_7->SetBinError(10,0.810657);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4926713);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8323113);
   hNCpi0inFVres_stack_7->SetBinError(13,0.437582);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8403991);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7227143);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5850676);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1058811);
   hNCpi0inFVres_stack_7->SetBinError(18,0.07927706);
   hNCpi0inFVres_stack_7->SetBinError(19,0.06574814);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1142029);
   hNCpi0inFVres_stack_7->SetBinError(21,0.06460099);
   hNCpi0inFVres_stack_7->SetEntries(536);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3350201);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8580103);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.016158);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7740214);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.897326);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.205951);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.252751);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.212566);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.915221);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.869845);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.256678);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.191158);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.507763);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.034375);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8139309);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7163749);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2531578);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.912191);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1559987);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2606007);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2583389);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2315143);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3786759);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2992246);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8297038);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5611739);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4927922);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5150099);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4998064);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6357576);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5724578);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3470044);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2976927);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2737588);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.09378911);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4393031);
   hNCpi0inFVdis_stack_8->SetEntries(436);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(2,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(3,38.72892);
   hCCpi0inFV_stack_10->SetBinContent(4,148.4703);
   hCCpi0inFV_stack_10->SetBinContent(5,264.2768);
   hCCpi0inFV_stack_10->SetBinContent(6,312.0999);
   hCCpi0inFV_stack_10->SetBinContent(7,291.7198);
   hCCpi0inFV_stack_10->SetBinContent(8,263.5432);
   hCCpi0inFV_stack_10->SetBinContent(9,217.4068);
   hCCpi0inFV_stack_10->SetBinContent(10,171.6392);
   hCCpi0inFV_stack_10->SetBinContent(11,146.4571);
   hCCpi0inFV_stack_10->SetBinContent(12,108.4081);
   hCCpi0inFV_stack_10->SetBinContent(13,85.46503);
   hCCpi0inFV_stack_10->SetBinContent(14,65.44099);
   hCCpi0inFV_stack_10->SetBinContent(15,55.02433);
   hCCpi0inFV_stack_10->SetBinContent(16,38.18487);
   hCCpi0inFV_stack_10->SetBinContent(17,25.51701);
   hCCpi0inFV_stack_10->SetBinContent(18,25.59423);
   hCCpi0inFV_stack_10->SetBinContent(19,17.7241);
   hCCpi0inFV_stack_10->SetBinContent(20,12.26514);
   hCCpi0inFV_stack_10->SetBinContent(21,66.26562);
   hCCpi0inFV_stack_10->SetBinError(2,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(3,3.059641);
   hCCpi0inFV_stack_10->SetBinError(4,6.184783);
   hCCpi0inFV_stack_10->SetBinError(5,8.278109);
   hCCpi0inFV_stack_10->SetBinError(6,8.856611);
   hCCpi0inFV_stack_10->SetBinError(7,8.591748);
   hCCpi0inFV_stack_10->SetBinError(8,8.186798);
   hCCpi0inFV_stack_10->SetBinError(9,7.510394);
   hCCpi0inFV_stack_10->SetBinError(10,6.541273);
   hCCpi0inFV_stack_10->SetBinError(11,6.078831);
   hCCpi0inFV_stack_10->SetBinError(12,5.256769);
   hCCpi0inFV_stack_10->SetBinError(13,4.634935);
   hCCpi0inFV_stack_10->SetBinError(14,4.07507);
   hCCpi0inFV_stack_10->SetBinError(15,3.773755);
   hCCpi0inFV_stack_10->SetBinError(16,3.13054);
   hCCpi0inFV_stack_10->SetBinError(17,2.545074);
   hCCpi0inFV_stack_10->SetBinError(18,2.578659);
   hCCpi0inFV_stack_10->SetBinError(19,2.122078);
   hCCpi0inFV_stack_10->SetBinError(20,1.817391);
   hCCpi0inFV_stack_10->SetBinError(21,4.124864);
   hCCpi0inFV_stack_10->SetEntries(10012);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(4,0.1967154);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(6,1.413964);
   hNCinFV_stack_11->SetBinContent(7,2.053982);
   hNCinFV_stack_11->SetBinContent(8,2.539312);
   hNCinFV_stack_11->SetBinContent(9,1.323754);
   hNCinFV_stack_11->SetBinContent(10,1.610679);
   hNCinFV_stack_11->SetBinContent(11,0.5901461);
   hNCinFV_stack_11->SetBinContent(12,0.9252522);
   hNCinFV_stack_11->SetBinContent(13,0.7336084);
   hNCinFV_stack_11->SetBinContent(14,1.125349);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.8753801);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.3934307);
   hNCinFV_stack_11->SetBinError(4,0.1967154);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(6,0.6515799);
   hNCinFV_stack_11->SetBinError(7,0.7078105);
   hNCinFV_stack_11->SetBinError(8,0.8333082);
   hNCinFV_stack_11->SetBinError(9,0.5560625);
   hNCinFV_stack_11->SetBinError(10,0.6806271);
   hNCinFV_stack_11->SetBinError(11,0.340721);
   hNCinFV_stack_11->SetBinError(12,0.4794006);
   hNCinFV_stack_11->SetBinError(13,0.4394482);
   hNCinFV_stack_11->SetBinError(14,0.5194673);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.5191111);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.2781975);
   hNCinFV_stack_11->SetEntries(63);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(1,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(2,2.173731);
   hnumuCCinFV_stack_12->SetBinContent(3,17.24209);
   hnumuCCinFV_stack_12->SetBinContent(4,35.30495);
   hnumuCCinFV_stack_12->SetBinContent(5,48.82767);
   hnumuCCinFV_stack_12->SetBinContent(6,57.12391);
   hnumuCCinFV_stack_12->SetBinContent(7,57.61143);
   hnumuCCinFV_stack_12->SetBinContent(8,56.74542);
   hnumuCCinFV_stack_12->SetBinContent(9,40.24509);
   hnumuCCinFV_stack_12->SetBinContent(10,40.69111);
   hnumuCCinFV_stack_12->SetBinContent(11,31.91552);
   hnumuCCinFV_stack_12->SetBinContent(12,24.92867);
   hnumuCCinFV_stack_12->SetBinContent(13,20.95114);
   hnumuCCinFV_stack_12->SetBinContent(14,14.90941);
   hnumuCCinFV_stack_12->SetBinContent(15,11.05172);
   hnumuCCinFV_stack_12->SetBinContent(16,9.712609);
   hnumuCCinFV_stack_12->SetBinContent(17,9.70648);
   hnumuCCinFV_stack_12->SetBinContent(18,7.262274);
   hnumuCCinFV_stack_12->SetBinContent(19,5.519435);
   hnumuCCinFV_stack_12->SetBinContent(20,2.300569);
   hnumuCCinFV_stack_12->SetBinContent(21,17.41475);
   hnumuCCinFV_stack_12->SetBinError(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(1,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(2,0.8097871);
   hnumuCCinFV_stack_12->SetBinError(3,2.647442);
   hnumuCCinFV_stack_12->SetBinError(4,4.231222);
   hnumuCCinFV_stack_12->SetBinError(5,3.814794);
   hnumuCCinFV_stack_12->SetBinError(6,4.442989);
   hnumuCCinFV_stack_12->SetBinError(7,4.188113);
   hnumuCCinFV_stack_12->SetBinError(8,5.564115);
   hnumuCCinFV_stack_12->SetBinError(9,3.178864);
   hnumuCCinFV_stack_12->SetBinError(10,3.799358);
   hnumuCCinFV_stack_12->SetBinError(11,2.917399);
   hnumuCCinFV_stack_12->SetBinError(12,2.507535);
   hnumuCCinFV_stack_12->SetBinError(13,2.506868);
   hnumuCCinFV_stack_12->SetBinError(14,2.284708);
   hnumuCCinFV_stack_12->SetBinError(15,1.685934);
   hnumuCCinFV_stack_12->SetBinError(16,1.622903);
   hnumuCCinFV_stack_12->SetBinError(17,1.59031);
   hnumuCCinFV_stack_12->SetBinError(18,1.373914);
   hnumuCCinFV_stack_12->SetBinError(19,1.161711);
   hnumuCCinFV_stack_12->SetBinError(20,0.7071359);
   hnumuCCinFV_stack_12->SetBinError(21,2.097664);
   hnumuCCinFV_stack_12->SetEntries(2089);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.4216878);
   hnueCCinFV_stack_13->SetBinContent(11,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(12,0.4647934);
   hnueCCinFV_stack_13->SetBinContent(13,1.072095);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(18,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,1.270501);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.4216878);
   hnueCCinFV_stack_13->SetBinError(11,0.3921167);
   hnueCCinFV_stack_13->SetBinError(12,0.3325098);
   hnueCCinFV_stack_13->SetBinError(13,0.5551335);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(18,0.5197486);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.5895188);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__26->SetBinContent(0,0.3401776);
   hmcerror__26->SetBinContent(1,0.1967154);
   hmcerror__26->SetBinContent(2,3.818502);
   hmcerror__26->SetBinContent(3,58.51478);
   hmcerror__26->SetBinContent(4,191.1253);
   hmcerror__26->SetBinContent(5,323.6606);
   hmcerror__26->SetBinContent(6,380.4476);
   hmcerror__26->SetBinContent(7,370.5634);
   hmcerror__26->SetBinContent(8,336.9126);
   hmcerror__26->SetBinContent(9,269.4869);
   hmcerror__26->SetBinContent(10,228.1265);
   hmcerror__26->SetBinContent(11,193.5003);
   hmcerror__26->SetBinContent(12,144.3546);
   hmcerror__26->SetBinContent(13,116.4106);
   hmcerror__26->SetBinContent(14,91.76989);
   hmcerror__26->SetBinContent(15,72.39416);
   hmcerror__26->SetBinContent(16,51.17017);
   hmcerror__26->SetBinContent(17,40.45687);
   hmcerror__26->SetBinContent(18,36.69786);
   hmcerror__26->SetBinContent(19,24.5384);
   hmcerror__26->SetBinContent(20,16.11967);
   hmcerror__26->SetBinContent(21,95.73792);
   hmcerror__26->SetBinError(0,0.3401776);
   hmcerror__26->SetBinError(1,0.4218229);
   hmcerror__26->SetBinError(2,1.609922);
   hmcerror__26->SetBinError(3,14.11544);
   hmcerror__26->SetBinError(4,50.15295);
   hmcerror__26->SetBinError(5,83.28575);
   hmcerror__26->SetBinError(6,105.8682);
   hmcerror__26->SetBinError(7,99.42288);
   hmcerror__26->SetBinError(8,88.29102);
   hmcerror__26->SetBinError(9,71.59342);
   hmcerror__26->SetBinError(10,57.28496);
   hmcerror__26->SetBinError(11,48.43288);
   hmcerror__26->SetBinError(12,36.48668);
   hmcerror__26->SetBinError(13,28.9581);
   hmcerror__26->SetBinError(14,22.17546);
   hmcerror__26->SetBinError(15,18.86286);
   hmcerror__26->SetBinError(16,13.29891);
   hmcerror__26->SetBinError(17,9.036183);
   hmcerror__26->SetBinError(18,9.531309);
   hmcerror__26->SetBinError(19,5.358741);
   hmcerror__26->SetBinError(20,4.916708);
   hmcerror__26->SetBinError(21,16.21137);
   hmcerror__26->SetEntries(3014.754);

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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3033[20] = {
   0,
   8,
   71,
   197,
   345,
   336,
   334,
   277,
   227,
   198,
   148,
   114,
   99,
   68,
   54,
   44,
   32,
   19,
   16,
   10};
   Double_t _felx3033[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3033[20] = {
   0,
   3.0307,
   8.5518,
   14.03567,
   18.57418,
   18.3303,
   18.27567,
   16.64332,
   15.06652,
   14.07125,
   12.16553,
   10.67708,
   10.0712,
   8.3726,
   7.4785,
   6.7671,
   5.7977,
   4.5151,
   4.1628,
   3.34883};
   Double_t _fehx3033[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3033[20] = {
   1.1478,
   2.7896,
   8.3496,
   14.03567,
   18.57418,
   18.3303,
   18.27567,
   16.64332,
   15.06652,
   14.07125,
   12.16553,
   10.67708,
   9.87,
   8.1701,
   7.275,
   6.5623,
   5.5904,
   4.3011,
   3.9454,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1980);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(399.9316);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2597.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 57.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 27.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  23.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2289.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 14.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 494.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
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
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3034[20] = {
   2.144331,
   0.421611,
   0.2412287,
   0.2624088,
   0.2573243,
   0.2782728,
   0.2683019,
   0.2620592,
   0.2656657,
   0.2511105,
   0.2502987,
   0.2527573,
   0.2487583,
   0.241642,
   0.2605577,
   0.2598957,
   0.2233535,
   0.2597238,
   0.2183818,
   0.3050129};
   Double_t _fehx3034[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3034[20] = {
   2.144331,
   0.421611,
   0.2412287,
   0.2624088,
   0.2573243,
   0.2782728,
   0.2683019,
   0.2620592,
   0.2656657,
   0.2511105,
   0.2502987,
   0.2527573,
   0.2487583,
   0.241642,
   0.2605577,
   0.2598957,
   0.2233535,
   0.2597238,
   0.2183818,
   0.3050129};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1980);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
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
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3035[20] = {
   2.144331,
   0.421611,
   0.2412287,
   0.2624088,
   0.2573243,
   0.2782728,
   0.2683019,
   0.2620592,
   0.2656657,
   0.2511105,
   0.2502987,
   0.2527573,
   0.2487583,
   0.241642,
   0.2605577,
   0.2598957,
   0.2233535,
   0.2597238,
   0.2183818,
   0.3050129};
   Double_t _fehx3035[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3035[20] = {
   2.144331,
   0.421611,
   0.2412287,
   0.2624088,
   0.2573243,
   0.2782728,
   0.2683019,
   0.2620592,
   0.2656657,
   0.2511105,
   0.2502987,
   0.2527573,
   0.2487583,
   0.241642,
   0.2605577,
   0.2598957,
   0.2233535,
   0.2597238,
   0.2183818,
   0.3050129};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1980);
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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3036[20] = {
   0,
   2.095062,
   1.213369,
   1.030738,
   1.065931,
   0.8831703,
   0.9013303,
   0.8221718,
   0.8423415,
   0.8679395,
   0.7648567,
   0.7897217,
   0.8504381,
   0.7409838,
   0.7459165,
   0.859876,
   0.7909658,
   0.5177413,
   0.6520391,
   0.6203601};
   Double_t _felx3036[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3036[20] = {
   0,
   0.7936882,
   0.1461477,
   0.07343702,
   0.05738782,
   0.04818089,
   0.0493186,
   0.04939951,
   0.05590817,
   0.06168177,
   0.06287084,
   0.07396422,
   0.08651447,
   0.09123472,
   0.1033025,
   0.132247,
   0.1433057,
   0.1230344,
   0.1696443,
   0.207748};
   Double_t _fehx3036[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3036[20] = {
   5.834826,
   0.7305483,
   0.1426922,
   0.07343702,
   0.05738782,
   0.04818089,
   0.0493186,
   0.04939951,
   0.05590817,
   0.06168177,
   0.06287084,
   0.07396422,
   0.08478611,
   0.08902811,
   0.1004915,
   0.1282446,
   0.1381817,
   0.117203,
   0.1607847,
   0.1934221};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1980);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(6.418309);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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

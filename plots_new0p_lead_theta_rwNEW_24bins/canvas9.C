#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 16:16:05 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-0.7684332,3.553846,84.97254);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__25->SetBinContent(1,10.28634);
   hmc__25->SetBinContent(2,18.79501);
   hmc__25->SetBinContent(3,24.20849);
   hmc__25->SetBinContent(4,26.83802);
   hmc__25->SetBinContent(5,33.42125);
   hmc__25->SetBinContent(6,27.86708);
   hmc__25->SetBinContent(7,38.42166);
   hmc__25->SetBinContent(8,31.39518);
   hmc__25->SetBinContent(9,36.68013);
   hmc__25->SetBinContent(10,25.56068);
   hmc__25->SetBinContent(11,23.73987);
   hmc__25->SetBinContent(12,24.464);
   hmc__25->SetBinContent(13,18.73035);
   hmc__25->SetBinContent(14,20.51276);
   hmc__25->SetBinContent(15,18.57633);
   hmc__25->SetBinContent(16,17.00132);
   hmc__25->SetBinContent(17,14.35578);
   hmc__25->SetBinContent(18,13.55198);
   hmc__25->SetBinContent(19,14.23172);
   hmc__25->SetBinContent(20,11.81876);
   hmc__25->SetBinContent(21,10.94533);
   hmc__25->SetBinContent(22,8.087677);
   hmc__25->SetBinContent(23,7.924527);
   hmc__25->SetBinContent(24,3.121194);
   hmc__25->SetBinError(1,24.09313);
   hmc__25->SetBinError(2,12.8508);
   hmc__25->SetBinError(3,12.48117);
   hmc__25->SetBinError(4,12.71968);
   hmc__25->SetBinError(5,17.75072);
   hmc__25->SetBinError(6,20.88025);
   hmc__25->SetBinError(7,17.25807);
   hmc__25->SetBinError(8,15.08201);
   hmc__25->SetBinError(9,16.68001);
   hmc__25->SetBinError(10,13.27606);
   hmc__25->SetBinError(11,11.19841);
   hmc__25->SetBinError(12,11.43213);
   hmc__25->SetBinError(13,12.5269);
   hmc__25->SetBinError(14,10.87421);
   hmc__25->SetBinError(15,10.27909);
   hmc__25->SetBinError(16,10.13985);
   hmc__25->SetBinError(17,10.12476);
   hmc__25->SetBinError(18,10.55087);
   hmc__25->SetBinError(19,9.69489);
   hmc__25->SetBinError(20,11.83357);
   hmc__25->SetBinError(21,9.366913);
   hmc__25->SetBinError(22,6.675468);
   hmc__25->SetBinError(23,7.714201);
   hmc__25->SetBinError(24,3.819175);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.7684332);
   hmc__25->SetMaximum(80.68549);
   hmc__25->SetEntries(469.1651);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,3.15);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(40.34274);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,0.5901461);
   hbadmatch_stack_1->SetBinContent(4,0.6803553);
   hbadmatch_stack_1->SetBinContent(5,0.9490801);
   hbadmatch_stack_1->SetBinContent(6,0.4260668);
   hbadmatch_stack_1->SetBinContent(7,1.097859);
   hbadmatch_stack_1->SetBinContent(8,0.9269427);
   hbadmatch_stack_1->SetBinContent(9,0.9278559);
   hbadmatch_stack_1->SetBinContent(10,0.6169422);
   hbadmatch_stack_1->SetBinContent(11,1.738434);
   hbadmatch_stack_1->SetBinContent(12,1.40129);
   hbadmatch_stack_1->SetBinContent(14,2.039412);
   hbadmatch_stack_1->SetBinContent(15,1.288839);
   hbadmatch_stack_1->SetBinContent(16,0.8753801);
   hbadmatch_stack_1->SetBinContent(17,0.3917402);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.9558206);
   hbadmatch_stack_1->SetBinContent(20,0.4346794);
   hbadmatch_stack_1->SetBinContent(21,0.7876176);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.2193965);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.340721);
   hbadmatch_stack_1->SetBinError(4,0.4810838);
   hbadmatch_stack_1->SetBinError(5,0.4895781);
   hbadmatch_stack_1->SetBinError(6,0.3023493);
   hbadmatch_stack_1->SetBinError(7,0.6123074);
   hbadmatch_stack_1->SetBinError(8,0.4800908);
   hbadmatch_stack_1->SetBinError(9,0.5543192);
   hbadmatch_stack_1->SetBinError(10,0.3569979);
   hbadmatch_stack_1->SetBinError(11,0.7389755);
   hbadmatch_stack_1->SetBinError(12,0.5854212);
   hbadmatch_stack_1->SetBinError(14,0.7173418);
   hbadmatch_stack_1->SetBinError(15,0.5958886);
   hbadmatch_stack_1->SetBinError(16,0.5191111);
   hbadmatch_stack_1->SetBinError(17,0.2770047);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.492529);
   hbadmatch_stack_1->SetBinError(20,0.3087456);
   hbadmatch_stack_1->SetBinError(21,0.4661336);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.2193965);
   hbadmatch_stack_1->SetEntries(71);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,1.048213);
   hext_stack_2->SetBinContent(5,2.338622);
   hext_stack_2->SetBinContent(6,0.3243973);
   hext_stack_2->SetBinContent(7,1.779209);
   hext_stack_2->SetBinContent(8,2.517386);
   hext_stack_2->SetBinContent(9,4.117831);
   hext_stack_2->SetBinContent(10,2.916804);
   hext_stack_2->SetBinContent(11,1.78639);
   hext_stack_2->SetBinContent(12,2.919576);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,2.192989);
   hext_stack_2->SetBinContent(15,0.973192);
   hext_stack_2->SetBinContent(16,2.428004);
   hext_stack_2->SetBinContent(17,2.420823);
   hext_stack_2->SetBinContent(18,2.592407);
   hext_stack_2->SetBinContent(19,0.6487947);
   hext_stack_2->SetBinContent(20,1.290409);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.8131978);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,0.7595995);
   hext_stack_2->SetBinError(5,1.095047);
   hext_stack_2->SetBinError(6,0.3243973);
   hext_stack_2->SetBinError(7,0.9206235);
   hext_stack_2->SetBinError(8,0.9575503);
   hext_stack_2->SetBinError(9,1.430621);
   hext_stack_2->SetBinError(10,1.132884);
   hext_stack_2->SetBinError(11,0.8039566);
   hext_stack_2->SetBinError(12,0.973192);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.9009267);
   hext_stack_2->SetBinError(15,0.5618727);
   hext_stack_2->SetBinError(16,1.028599);
   hext_stack_2->SetBinError(17,1.122148);
   hext_stack_2->SetBinError(18,1.085446);
   hext_stack_2->SetBinError(19,0.4587671);
   hext_stack_2->SetBinError(20,0.788756);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.5750177);
   hext_stack_2->SetEntries(92);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.5529928);
   hdirt_stack_3->SetBinContent(9,0.6673524);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(19,0.4049124);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(7,0.437291);
   hdirt_stack_3->SetBinError(9,0.3973652);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(19,0.4049124);
   hdirt_stack_3->SetEntries(11);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,1.110369);
   houtFV_stack_4->SetBinContent(2,3.374355);
   houtFV_stack_4->SetBinContent(3,5.520237);
   houtFV_stack_4->SetBinContent(4,5.092631);
   houtFV_stack_4->SetBinContent(5,5.336437);
   houtFV_stack_4->SetBinContent(6,4.599448);
   houtFV_stack_4->SetBinContent(7,4.104583);
   houtFV_stack_4->SetBinContent(8,4.394143);
   houtFV_stack_4->SetBinContent(9,3.018665);
   houtFV_stack_4->SetBinContent(10,3.406146);
   houtFV_stack_4->SetBinContent(11,2.535931);
   houtFV_stack_4->SetBinContent(12,2.931052);
   houtFV_stack_4->SetBinContent(13,3.465623);
   houtFV_stack_4->SetBinContent(14,2.337742);
   houtFV_stack_4->SetBinContent(15,3.531361);
   houtFV_stack_4->SetBinContent(16,3.100106);
   houtFV_stack_4->SetBinContent(17,2.195754);
   houtFV_stack_4->SetBinContent(18,2.35109);
   houtFV_stack_4->SetBinContent(19,3.338611);
   houtFV_stack_4->SetBinContent(20,2.88118);
   houtFV_stack_4->SetBinContent(21,2.495594);
   houtFV_stack_4->SetBinContent(22,2.694);
   houtFV_stack_4->SetBinContent(23,4.001457);
   houtFV_stack_4->SetBinContent(24,1.123658);
   houtFV_stack_4->SetBinError(1,0.6452545);
   houtFV_stack_4->SetBinError(2,0.8993757);
   houtFV_stack_4->SetBinError(3,1.194104);
   houtFV_stack_4->SetBinError(4,1.245763);
   houtFV_stack_4->SetBinError(5,1.092639);
   houtFV_stack_4->SetBinError(6,0.99971);
   houtFV_stack_4->SetBinError(7,1.000333);
   houtFV_stack_4->SetBinError(8,1.008983);
   houtFV_stack_4->SetBinError(9,0.8647285);
   houtFV_stack_4->SetBinError(10,0.9066915);
   houtFV_stack_4->SetBinError(11,0.8325131);
   houtFV_stack_4->SetBinError(12,0.8781425);
   houtFV_stack_4->SetBinError(13,0.9713746);
   houtFV_stack_4->SetBinError(14,0.7623778);
   houtFV_stack_4->SetBinError(15,0.9511206);
   houtFV_stack_4->SetBinError(16,0.8862509);
   houtFV_stack_4->SetBinError(17,0.7598403);
   houtFV_stack_4->SetBinError(18,0.7228208);
   houtFV_stack_4->SetBinError(19,0.8665897);
   houtFV_stack_4->SetBinError(20,0.9004364);
   houtFV_stack_4->SetBinError(21,0.7335366);
   houtFV_stack_4->SetBinError(22,0.7598915);
   houtFV_stack_4->SetBinError(23,1.038578);
   houtFV_stack_4->SetBinError(24,0.5188295);
   houtFV_stack_4->SetEntries(344);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(26);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.632658);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.19157);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.299032);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.345782);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.198976);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.312407);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.860207);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.728747);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.515767);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.638063);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.661475);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.695041);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.298696);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.334477);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.965728);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.183856);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.998598);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.43943);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.593716);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.477708);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.38039);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.32559);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.6554859);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.3764861);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4648418);
   hNCpi0inFVres_stack_7->SetBinError(2,0.542562);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7886451);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8228997);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8993951);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9398492);
   hNCpi0inFVres_stack_7->SetBinError(7,1.075548);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9501115);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9631317);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7915591);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7810402);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9259779);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7459512);
   hNCpi0inFVres_stack_7->SetBinError(14,0.647141);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7863801);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6823214);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5603252);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4621819);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5562587);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3657307);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3525453);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4180388);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2404119);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2236377);
   hNCpi0inFVres_stack_7->SetEntries(2042);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.005072);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.532844);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.657894);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.789184);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.687458);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.11908);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.896544);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.422908);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.367108);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.199372);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.379894);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5996859);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9348222);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6420361);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.557504);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.5025361);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3988212);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.385757);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3553854);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5896028);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4069516);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4802842);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4592961);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.429217);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4273996);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3353836);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4129646);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2608584);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.237152);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3620771);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1536621);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2888274);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2486359);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2820092);
   hNCpi0inFVdis_stack_8->SetEntries(441);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,3.069443);
   hCCpi0inFV_stack_10->SetBinContent(2,4.566488);
   hCCpi0inFV_stack_10->SetBinContent(3,5.379642);
   hCCpi0inFV_stack_10->SetBinContent(4,4.001457);
   hCCpi0inFV_stack_10->SetBinContent(5,5.603806);
   hCCpi0inFV_stack_10->SetBinContent(6,4.666852);
   hCCpi0inFV_stack_10->SetBinContent(7,7.728138);
   hCCpi0inFV_stack_10->SetBinContent(8,7.088271);
   hCCpi0inFV_stack_10->SetBinContent(9,7.713337);
   hCCpi0inFV_stack_10->SetBinContent(10,4.116975);
   hCCpi0inFV_stack_10->SetBinContent(11,4.591936);
   hCCpi0inFV_stack_10->SetBinContent(12,3.126077);
   hCCpi0inFV_stack_10->SetBinContent(13,3.589158);
   hCCpi0inFV_stack_10->SetBinContent(14,3.98114);
   hCCpi0inFV_stack_10->SetBinContent(15,2.605533);
   hCCpi0inFV_stack_10->SetBinContent(16,2.535931);
   hCCpi0inFV_stack_10->SetBinContent(17,3.576372);
   hCCpi0inFV_stack_10->SetBinContent(18,2.644128);
   hCCpi0inFV_stack_10->SetBinContent(19,3.349249);
   hCCpi0inFV_stack_10->SetBinContent(20,3.319412);
   hCCpi0inFV_stack_10->SetBinContent(21,2.195754);
   hCCpi0inFV_stack_10->SetBinContent(22,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(23,1.512017);
   hCCpi0inFV_stack_10->SetBinContent(24,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,0.9198757);
   hCCpi0inFV_stack_10->SetBinError(2,1.062365);
   hCCpi0inFV_stack_10->SetBinError(3,1.195779);
   hCCpi0inFV_stack_10->SetBinError(4,1.038578);
   hCCpi0inFV_stack_10->SetBinError(5,1.264761);
   hCCpi0inFV_stack_10->SetBinError(6,1.118088);
   hCCpi0inFV_stack_10->SetBinError(7,1.439073);
   hCCpi0inFV_stack_10->SetBinError(8,1.340055);
   hCCpi0inFV_stack_10->SetBinError(9,1.412222);
   hCCpi0inFV_stack_10->SetBinError(10,0.9321157);
   hCCpi0inFV_stack_10->SetBinError(11,1.028227);
   hCCpi0inFV_stack_10->SetBinError(12,0.8995382);
   hCCpi0inFV_stack_10->SetBinError(13,0.9565282);
   hCCpi0inFV_stack_10->SetBinError(14,0.9250635);
   hCCpi0inFV_stack_10->SetBinError(15,0.8637145);
   hCCpi0inFV_stack_10->SetBinError(16,0.8325131);
   hCCpi0inFV_stack_10->SetBinError(17,0.9238363);
   hCCpi0inFV_stack_10->SetBinError(18,0.7855485);
   hCCpi0inFV_stack_10->SetBinError(19,0.9269145);
   hCCpi0inFV_stack_10->SetBinError(20,0.9200768);
   hCCpi0inFV_stack_10->SetBinError(21,0.7598403);
   hCCpi0inFV_stack_10->SetBinError(22,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(23,0.5870189);
   hCCpi0inFV_stack_10->SetBinError(24,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(397);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.9269427);
   hNCinFV_stack_11->SetBinContent(2,2.000729);
   hNCinFV_stack_11->SetBinContent(3,1.608988);
   hNCinFV_stack_11->SetBinContent(4,1.710423);
   hNCinFV_stack_11->SetBinContent(5,2.984305);
   hNCinFV_stack_11->SetBinContent(6,1.805704);
   hNCinFV_stack_11->SetBinContent(7,2.442341);
   hNCinFV_stack_11->SetBinContent(8,0.3917402);
   hNCinFV_stack_11->SetBinContent(9,1.805704);
   hNCinFV_stack_11->SetBinContent(11,1.123658);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(14,0.7336084);
   hNCinFV_stack_11->SetBinContent(15,1.412273);
   hNCinFV_stack_11->SetBinContent(16,0.3934307);
   hNCinFV_stack_11->SetBinContent(17,0.3917402);
   hNCinFV_stack_11->SetBinContent(18,0.7336084);
   hNCinFV_stack_11->SetBinContent(19,0.6803553);
   hNCinFV_stack_11->SetBinContent(20,0.3934307);
   hNCinFV_stack_11->SetBinContent(21,0.3934307);
   hNCinFV_stack_11->SetBinContent(22,0.3917402);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.4800908);
   hNCinFV_stack_11->SetBinError(2,0.7343859);
   hNCinFV_stack_11->SetBinError(3,0.6801404);
   hNCinFV_stack_11->SetBinError(4,0.6196373);
   hNCinFV_stack_11->SetBinError(5,0.8560416);
   hNCinFV_stack_11->SetBinError(6,0.7080169);
   hNCinFV_stack_11->SetBinError(7,0.759212);
   hNCinFV_stack_11->SetBinError(8,0.2770047);
   hNCinFV_stack_11->SetBinError(9,0.7080169);
   hNCinFV_stack_11->SetBinError(11,0.5188295);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(14,0.4394482);
   hNCinFV_stack_11->SetBinError(15,0.6510715);
   hNCinFV_stack_11->SetBinError(16,0.2781975);
   hNCinFV_stack_11->SetBinError(17,0.2770047);
   hNCinFV_stack_11->SetBinError(18,0.4394482);
   hNCinFV_stack_11->SetBinError(19,0.4810838);
   hNCinFV_stack_11->SetBinError(20,0.2781975);
   hNCinFV_stack_11->SetBinError(21,0.2781975);
   hNCinFV_stack_11->SetBinError(22,0.2770047);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetEntries(97);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.352262);
   hnumuCCinFV_stack_12->SetBinContent(2,1.912537);
   hnumuCCinFV_stack_12->SetBinContent(3,3.634278);
   hnumuCCinFV_stack_12->SetBinContent(4,4.661782);
   hnumuCCinFV_stack_12->SetBinContent(5,6.266767);
   hnumuCCinFV_stack_12->SetBinContent(6,5.264985);
   hnumuCCinFV_stack_12->SetBinContent(7,8.848186);
   hnumuCCinFV_stack_12->SetBinContent(8,5.92504);
   hnumuCCinFV_stack_12->SetBinContent(9,9.518614);
   hnumuCCinFV_stack_12->SetBinContent(10,6.421205);
   hnumuCCinFV_stack_12->SetBinContent(11,4.018978);
   hnumuCCinFV_stack_12->SetBinContent(12,5.983164);
   hnumuCCinFV_stack_12->SetBinContent(13,3.674542);
   hnumuCCinFV_stack_12->SetBinContent(14,3.961765);
   hnumuCCinFV_stack_12->SetBinContent(15,2.836683);
   hnumuCCinFV_stack_12->SetBinContent(16,3.122581);
   hnumuCCinFV_stack_12->SetBinContent(17,1.372627);
   hnumuCCinFV_stack_12->SetBinContent(18,1.643433);
   hnumuCCinFV_stack_12->SetBinContent(19,1.800072);
   hnumuCCinFV_stack_12->SetBinContent(20,1.352452);
   hnumuCCinFV_stack_12->SetBinContent(21,1.953599);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(23,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1950248);
   hnumuCCinFV_stack_12->SetBinError(1,0.5754926);
   hnumuCCinFV_stack_12->SetBinError(2,0.9182301);
   hnumuCCinFV_stack_12->SetBinError(3,1.044024);
   hnumuCCinFV_stack_12->SetBinError(4,1.847934);
   hnumuCCinFV_stack_12->SetBinError(5,1.435939);
   hnumuCCinFV_stack_12->SetBinError(6,1.153285);
   hnumuCCinFV_stack_12->SetBinError(7,1.69198);
   hnumuCCinFV_stack_12->SetBinError(8,1.38034);
   hnumuCCinFV_stack_12->SetBinError(9,1.675218);
   hnumuCCinFV_stack_12->SetBinError(10,1.437605);
   hnumuCCinFV_stack_12->SetBinError(11,1.036217);
   hnumuCCinFV_stack_12->SetBinError(12,1.345136);
   hnumuCCinFV_stack_12->SetBinError(13,1.004308);
   hnumuCCinFV_stack_12->SetBinError(14,1.474599);
   hnumuCCinFV_stack_12->SetBinError(15,0.8746457);
   hnumuCCinFV_stack_12->SetBinError(16,0.9818258);
   hnumuCCinFV_stack_12->SetBinError(17,0.5754733);
   hnumuCCinFV_stack_12->SetBinError(18,0.6908057);
   hnumuCCinFV_stack_12->SetBinError(19,0.7610882);
   hnumuCCinFV_stack_12->SetBinError(20,0.618983);
   hnumuCCinFV_stack_12->SetBinError(21,0.7007801);
   hnumuCCinFV_stack_12->SetBinError(22,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(23,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(24,0.1950249);
   hnumuCCinFV_stack_12->SetEntries(332);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.7695078);
   hnueCCinFV_stack_13->SetBinContent(2,1.909863);
   hnueCCinFV_stack_13->SetBinContent(4,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(18,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.5448118);
   hnueCCinFV_stack_13->SetBinError(2,1.606124);
   hnueCCinFV_stack_13->SetBinError(4,0.320043);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.2171002);
   hnueCCinFV_stack_13->SetBinError(18,0.2502081);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetEntries(12);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__26->SetBinContent(1,10.28634);
   hmcerror__26->SetBinContent(2,18.79501);
   hmcerror__26->SetBinContent(3,24.20849);
   hmcerror__26->SetBinContent(4,26.83802);
   hmcerror__26->SetBinContent(5,33.42125);
   hmcerror__26->SetBinContent(6,27.86708);
   hmcerror__26->SetBinContent(7,38.42166);
   hmcerror__26->SetBinContent(8,31.39518);
   hmcerror__26->SetBinContent(9,36.68013);
   hmcerror__26->SetBinContent(10,25.56068);
   hmcerror__26->SetBinContent(11,23.73987);
   hmcerror__26->SetBinContent(12,24.464);
   hmcerror__26->SetBinContent(13,18.73035);
   hmcerror__26->SetBinContent(14,20.51276);
   hmcerror__26->SetBinContent(15,18.57633);
   hmcerror__26->SetBinContent(16,17.00132);
   hmcerror__26->SetBinContent(17,14.35578);
   hmcerror__26->SetBinContent(18,13.55198);
   hmcerror__26->SetBinContent(19,14.23172);
   hmcerror__26->SetBinContent(20,11.81876);
   hmcerror__26->SetBinContent(21,10.94533);
   hmcerror__26->SetBinContent(22,8.087677);
   hmcerror__26->SetBinContent(23,7.924527);
   hmcerror__26->SetBinContent(24,3.121194);
   hmcerror__26->SetBinError(1,24.09313);
   hmcerror__26->SetBinError(2,12.8508);
   hmcerror__26->SetBinError(3,12.48117);
   hmcerror__26->SetBinError(4,12.71968);
   hmcerror__26->SetBinError(5,17.75072);
   hmcerror__26->SetBinError(6,20.88025);
   hmcerror__26->SetBinError(7,17.25807);
   hmcerror__26->SetBinError(8,15.08201);
   hmcerror__26->SetBinError(9,16.68001);
   hmcerror__26->SetBinError(10,13.27606);
   hmcerror__26->SetBinError(11,11.19841);
   hmcerror__26->SetBinError(12,11.43213);
   hmcerror__26->SetBinError(13,12.5269);
   hmcerror__26->SetBinError(14,10.87421);
   hmcerror__26->SetBinError(15,10.27909);
   hmcerror__26->SetBinError(16,10.13985);
   hmcerror__26->SetBinError(17,10.12476);
   hmcerror__26->SetBinError(18,10.55087);
   hmcerror__26->SetBinError(19,9.69489);
   hmcerror__26->SetBinError(20,11.83357);
   hmcerror__26->SetBinError(21,9.366913);
   hmcerror__26->SetBinError(22,6.675468);
   hmcerror__26->SetBinError(23,7.714201);
   hmcerror__26->SetBinError(24,3.819175);
   hmcerror__26->SetBinError(25,0.3895343);
   hmcerror__26->SetEntries(469.1651);

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
   
   Double_t _fx3033[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3033[24] = {
   5,
   11,
   23,
   25,
   17,
   25,
   25,
   27,
   32,
   20,
   29,
   22,
   17,
   17,
   13,
   10,
   11,
   7,
   19,
   14,
   8,
   12,
   8,
   0};
   Double_t _felx3033[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3033[24] = {
   2.48995,
   3.4975,
   4.9457,
   5.1474,
   4.2835,
   5.1474,
   5.1474,
   5.3414,
   5.7977,
   4.6266,
   5.5285,
   4.8417,
   4.2835,
   4.2835,
   3.77763,
   3.34883,
   3.4975,
   2.85954,
   4.5151,
   3.9102,
   3.0307,
   3.64022,
   3.0307,
   0};
   Double_t _fehx3033[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3033[24] = {
   2.21064,
   3.27,
   4.7346,
   4.9374,
   4.0673,
   4.9374,
   4.9374,
   5.1322,
   5.5904,
   4.4133,
   5.3201,
   4.6299,
   4.0673,
   4.0673,
   3.5552,
   3.1179,
   3.27,
   2.61053,
   4.3011,
   3.6898,
   2.7896,
   3.4155,
   2.7896,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,3.465);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(41.34944);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 397.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 36.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  111.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 93.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3034[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3034[24] = {
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
   Double_t _felx3034[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3034[24] = {
   2.342246,
   0.6837349,
   0.51557,
   0.4739425,
   0.5311209,
   0.7492801,
   0.4491756,
   0.4803925,
   0.4547424,
   0.5193938,
   0.4717131,
   0.4673042,
   0.6688025,
   0.5301193,
   0.5533435,
   0.5964156,
   0.7052745,
   0.7785482,
   0.6812171,
   1.001253,
   0.8557906,
   0.8253876,
   0.9734589,
   1.223626};
   Double_t _fehx3034[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3034[24] = {
   2.342246,
   0.6837349,
   0.51557,
   0.4739425,
   0.5311209,
   0.7492801,
   0.4491756,
   0.4803925,
   0.4547424,
   0.5193938,
   0.4717131,
   0.4673042,
   0.6688025,
   0.5301193,
   0.5533435,
   0.5964156,
   0.7052745,
   0.7785482,
   0.6812171,
   1.001253,
   0.8557906,
   0.8253876,
   0.9734589,
   1.223626};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,3.465);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3035[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3035[24] = {
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
   Double_t _felx3035[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3035[24] = {
   0.2665293,
   0.2672248,
   0.2498163,
   0.3024578,
   0.2750462,
   0.3134358,
   0.2972898,
   0.308285,
   0.2593282,
   0.2944666,
   0.2940542,
   0.2680854,
   0.2884824,
   0.2444337,
   0.2816704,
   0.2670259,
   0.3064425,
   0.262067,
   0.2916505,
   0.2888153,
   0.284196,
   0.3061206,
   0.3257459,
   0.3940518};
   Double_t _fehx3035[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3035[24] = {
   0.2665293,
   0.2672248,
   0.2498163,
   0.3024578,
   0.2750462,
   0.3134358,
   0.2972898,
   0.308285,
   0.2593282,
   0.2944666,
   0.2940542,
   0.2680854,
   0.2884824,
   0.2444337,
   0.2816704,
   0.2670259,
   0.3064425,
   0.262067,
   0.2916505,
   0.2888153,
   0.284196,
   0.3061206,
   0.3257459,
   0.3940518};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,3.465);
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
   
   Double_t _fx3036[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3036[24] = {
   0.4860816,
   0.5852617,
   0.95008,
   0.9315142,
   0.5086584,
   0.8971158,
   0.6506746,
   0.8600046,
   0.8724068,
   0.7824519,
   1.221573,
   0.8992807,
   0.907618,
   0.8287524,
   0.6998152,
   0.5881895,
   0.7662421,
   0.5165295,
   1.335046,
   1.184557,
   0.7309052,
   1.483739,
   1.009524,
   0};
   Double_t _felx3036[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3036[24] = {
   0.2420638,
   0.1860866,
   0.2042961,
   0.191795,
   0.128167,
   0.1847126,
   0.1339713,
   0.1701344,
   0.158061,
   0.1810046,
   0.2328782,
   0.1979112,
   0.228693,
   0.2088212,
   0.2033572,
   0.1969747,
   0.2436302,
   0.2110053,
   0.3172561,
   0.3308468,
   0.2768943,
   0.4500946,
   0.3824455,
   0};
   Double_t _fehx3036[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3036[24] = {
   0.2149103,
   0.1739824,
   0.195576,
   0.1839703,
   0.121698,
   0.1771768,
   0.1285056,
   0.163471,
   0.1524095,
   0.1726597,
   0.2240998,
   0.1892536,
   0.2171503,
   0.1982814,
   0.1913833,
   0.1833916,
   0.2277829,
   0.1926308,
   0.3022193,
   0.3121985,
   0.2548666,
   0.4223091,
   0.352021,
   0.3677439};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,3.465);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.096653);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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

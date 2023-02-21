#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 15:23:26 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-61.53846,-14.4,451.2821,1592.337);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__16->SetBinContent(1,504.3208);
   hmc__16->SetBinContent(2,644.3749);
   hmc__16->SetBinContent(3,556.1618);
   hmc__16->SetBinContent(4,417.4646);
   hmc__16->SetBinContent(5,307.9662);
   hmc__16->SetBinContent(6,189.5925);
   hmc__16->SetBinContent(7,117.9095);
   hmc__16->SetBinContent(8,82.9753);
   hmc__16->SetBinContent(9,46.72867);
   hmc__16->SetBinContent(10,26.80752);
   hmc__16->SetBinContent(11,18.41779);
   hmc__16->SetBinContent(12,12.3935);
   hmc__16->SetBinContent(13,7.873915);
   hmc__16->SetBinContent(14,3.905238);
   hmc__16->SetBinContent(15,3.779067);
   hmc__16->SetBinContent(16,1.824432);
   hmc__16->SetBinContent(17,3.611448);
   hmc__16->SetBinError(1,123.8754);
   hmc__16->SetBinError(2,139.6221);
   hmc__16->SetBinError(3,125.8572);
   hmc__16->SetBinError(4,104.7674);
   hmc__16->SetBinError(5,81.45134);
   hmc__16->SetBinError(6,55.11704);
   hmc__16->SetBinError(7,37.26417);
   hmc__16->SetBinError(8,31.79398);
   hmc__16->SetBinError(9,19.19447);
   hmc__16->SetBinError(10,14.00064);
   hmc__16->SetBinError(11,10.55337);
   hmc__16->SetBinError(12,8.392808);
   hmc__16->SetBinError(13,5.731702);
   hmc__16->SetBinError(14,5.000828);
   hmc__16->SetBinError(15,4.450386);
   hmc__16->SetBinError(16,5.207545);
   hmc__16->SetBinError(17,5.469727);
   hmc__16->SetMinimum(-14.4);
   hmc__16->SetMaximum(1512);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",16,0,400);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(676.5936);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,10.8335);
   hbadmatch_stack_1->SetBinContent(2,17.9125);
   hbadmatch_stack_1->SetBinContent(3,12.9031);
   hbadmatch_stack_1->SetBinContent(4,12.71182);
   hbadmatch_stack_1->SetBinContent(5,5.467328);
   hbadmatch_stack_1->SetBinContent(6,3.061248);
   hbadmatch_stack_1->SetBinContent(7,0.9801958);
   hbadmatch_stack_1->SetBinContent(8,0.8276445);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(10,0.5352025);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.724545);
   hbadmatch_stack_1->SetBinError(2,2.778106);
   hbadmatch_stack_1->SetBinError(3,1.889879);
   hbadmatch_stack_1->SetBinError(4,1.852662);
   hbadmatch_stack_1->SetBinError(5,1.217301);
   hbadmatch_stack_1->SetBinError(6,1.787751);
   hbadmatch_stack_1->SetBinError(7,0.4383608);
   hbadmatch_stack_1->SetBinError(8,0.4154996);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(10,0.3921167);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,68.54674);
   hext_stack_2->SetBinContent(2,87.78482);
   hext_stack_2->SetBinContent(3,56.52488);
   hext_stack_2->SetBinContent(4,22.91902);
   hext_stack_2->SetBinContent(5,23.99753);
   hext_stack_2->SetBinContent(6,6.959614);
   hext_stack_2->SetBinContent(7,5.337628);
   hext_stack_2->SetBinContent(8,4.385977);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.8131978);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinError(1,5.678847);
   hext_stack_2->SetBinError(2,6.418477);
   hext_stack_2->SetBinError(3,4.968189);
   hext_stack_2->SetBinError(4,3.135577);
   hext_stack_2->SetBinError(5,3.377261);
   hext_stack_2->SetBinError(6,1.751802);
   hext_stack_2->SetBinError(7,1.594567);
   hext_stack_2->SetBinError(8,1.274103);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.5750177);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,7.593314);
   hdirt_stack_3->SetBinContent(2,12.95245);
   hdirt_stack_3->SetBinContent(3,8.771414);
   hdirt_stack_3->SetBinContent(4,3.9865);
   hdirt_stack_3->SetBinContent(5,3.366706);
   hdirt_stack_3->SetBinContent(6,0.9185919);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinError(1,1.398822);
   hdirt_stack_3->SetBinError(2,1.839589);
   hdirt_stack_3->SetBinError(3,1.617529);
   hdirt_stack_3->SetBinError(4,1.114909);
   hdirt_stack_3->SetBinError(5,1.335823);
   hdirt_stack_3->SetBinError(6,0.5150623);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,58.50231);
   houtFV_stack_4->SetBinContent(2,81.93607);
   houtFV_stack_4->SetBinContent(3,66.38184);
   houtFV_stack_4->SetBinContent(4,43.74592);
   houtFV_stack_4->SetBinContent(5,23.41575);
   houtFV_stack_4->SetBinContent(6,10.54141);
   houtFV_stack_4->SetBinContent(7,8.443579);
   houtFV_stack_4->SetBinContent(8,4.05471);
   houtFV_stack_4->SetBinContent(9,2.394159);
   houtFV_stack_4->SetBinContent(10,1.467217);
   houtFV_stack_4->SetBinContent(11,0.3401776);
   houtFV_stack_4->SetBinContent(12,0.5352025);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinError(1,3.820277);
   houtFV_stack_4->SetBinError(2,4.489745);
   houtFV_stack_4->SetBinError(3,4.12349);
   houtFV_stack_4->SetBinError(4,3.26259);
   houtFV_stack_4->SetBinError(5,2.42496);
   houtFV_stack_4->SetBinError(6,1.647177);
   houtFV_stack_4->SetBinError(7,1.501778);
   houtFV_stack_4->SetBinError(8,1.01996);
   houtFV_stack_4->SetBinError(9,0.785313);
   houtFV_stack_4->SetBinError(10,0.6214735);
   houtFV_stack_4->SetBinError(11,0.3401776);
   houtFV_stack_4->SetBinError(12,0.3921167);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,14.44729);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,14.91792);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,15.09994);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.59605);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.15282);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.042954);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.243064);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.76602);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.06752);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6131358);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.316398);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.207901);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.291272);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.997669);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.082462);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8807013);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7665803);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6636216);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6073782);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1749792);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8507857);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.952344);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.868476);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.46509);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5430539);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2514891);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4609878);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4212073);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4226683);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1881969);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,194.18);
   hNCpi0inFVres_stack_7->SetBinContent(2,249.9767);
   hNCpi0inFVres_stack_7->SetBinContent(3,220.1226);
   hNCpi0inFVres_stack_7->SetBinContent(4,173.1303);
   hNCpi0inFVres_stack_7->SetBinContent(5,124.8449);
   hNCpi0inFVres_stack_7->SetBinContent(6,81.52824);
   hNCpi0inFVres_stack_7->SetBinContent(7,46.44189);
   hNCpi0inFVres_stack_7->SetBinContent(8,30.05955);
   hNCpi0inFVres_stack_7->SetBinContent(9,15.15473);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.584751);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.900383);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.667206);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.04983);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.032804);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.8366721);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1952999);
   hNCpi0inFVres_stack_7->SetBinError(1,4.56126);
   hNCpi0inFVres_stack_7->SetBinError(2,5.159195);
   hNCpi0inFVres_stack_7->SetBinError(3,4.875862);
   hNCpi0inFVres_stack_7->SetBinError(4,4.233803);
   hNCpi0inFVres_stack_7->SetBinError(5,3.673795);
   hNCpi0inFVres_stack_7->SetBinError(6,2.947726);
   hNCpi0inFVres_stack_7->SetBinError(7,2.195051);
   hNCpi0inFVres_stack_7->SetBinError(8,1.819783);
   hNCpi0inFVres_stack_7->SetBinError(9,1.21342);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8584702);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8466017);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6520348);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5047172);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3564798);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3199419);
   hNCpi0inFVres_stack_7->SetBinError(16,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(17,0.07381642);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,31.55386);
   hNCpi0inFVdis_stack_8->SetBinContent(2,44.12038);
   hNCpi0inFVdis_stack_8->SetBinContent(3,41.50756);
   hNCpi0inFVdis_stack_8->SetBinContent(4,36.08747);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.95465);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.0692);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.519157);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.17058);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.03265);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.319116);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.119912);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.9346539);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4600178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.877358);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.821956);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.200202);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.110683);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.979673);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.55294);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.182692);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8712588);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9243294);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7545114);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5741623);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4999391);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3135935);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1399647);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3016796);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.06238626);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,49.83957);
   hCCpi0inFV_stack_10->SetBinContent(2,68.27255);
   hCCpi0inFV_stack_10->SetBinContent(3,65.9527);
   hCCpi0inFV_stack_10->SetBinContent(4,58.31073);
   hCCpi0inFV_stack_10->SetBinContent(5,52.24251);
   hCCpi0inFV_stack_10->SetBinContent(6,35.04824);
   hCCpi0inFV_stack_10->SetBinContent(7,18.1794);
   hCCpi0inFV_stack_10->SetBinContent(8,16.43206);
   hCCpi0inFV_stack_10->SetBinContent(9,9.573256);
   hCCpi0inFV_stack_10->SetBinContent(10,5.821768);
   hCCpi0inFV_stack_10->SetBinContent(11,4.643166);
   hCCpi0inFV_stack_10->SetBinContent(12,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(13,2.000729);
   hCCpi0inFV_stack_10->SetBinContent(14,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(15,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(16,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(17,1.463836);
   hCCpi0inFV_stack_10->SetBinError(1,3.499224);
   hCCpi0inFV_stack_10->SetBinError(2,4.142135);
   hCCpi0inFV_stack_10->SetBinError(3,4.003996);
   hCCpi0inFV_stack_10->SetBinError(4,3.863079);
   hCCpi0inFV_stack_10->SetBinError(5,3.614273);
   hCCpi0inFV_stack_10->SetBinError(6,2.974605);
   hCCpi0inFV_stack_10->SetBinError(7,2.099564);
   hCCpi0inFV_stack_10->SetBinError(8,2.071208);
   hCCpi0inFV_stack_10->SetBinError(9,1.570204);
   hCCpi0inFV_stack_10->SetBinError(10,1.177823);
   hCCpi0inFV_stack_10->SetBinError(11,1.075057);
   hCCpi0inFV_stack_10->SetBinError(12,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(13,0.7343859);
   hCCpi0inFV_stack_10->SetBinError(14,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(15,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(16,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(17,0.620407);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,33.50978);
   hNCinFV_stack_11->SetBinContent(2,28.47258);
   hNCinFV_stack_11->SetBinContent(3,32.29591);
   hNCinFV_stack_11->SetBinContent(4,27.93399);
   hNCinFV_stack_11->SetBinContent(5,22.66879);
   hNCinFV_stack_11->SetBinContent(6,15.10653);
   hNCinFV_stack_11->SetBinContent(7,12.90558);
   hNCinFV_stack_11->SetBinContent(8,8.58968);
   hNCinFV_stack_11->SetBinContent(9,3.771167);
   hNCinFV_stack_11->SetBinContent(10,3.127768);
   hNCinFV_stack_11->SetBinContent(11,2.342597);
   hNCinFV_stack_11->SetBinContent(12,2.300569);
   hNCinFV_stack_11->SetBinContent(13,1.804013);
   hNCinFV_stack_11->SetBinContent(14,0.7319179);
   hNCinFV_stack_11->SetBinContent(15,0.8770706);
   hNCinFV_stack_11->SetBinContent(16,0.3934307);
   hNCinFV_stack_11->SetBinContent(17,1.125349);
   hNCinFV_stack_11->SetBinError(1,2.937809);
   hNCinFV_stack_11->SetBinError(2,2.683086);
   hNCinFV_stack_11->SetBinError(3,2.871617);
   hNCinFV_stack_11->SetBinError(4,2.654029);
   hNCinFV_stack_11->SetBinError(5,2.370726);
   hNCinFV_stack_11->SetBinError(6,1.886865);
   hNCinFV_stack_11->SetBinError(7,1.765999);
   hNCinFV_stack_11->SetBinError(8,1.507334);
   hNCinFV_stack_11->SetBinError(9,0.9421226);
   hNCinFV_stack_11->SetBinError(10,0.8999062);
   hNCinFV_stack_11->SetBinError(11,0.8097566);
   hNCinFV_stack_11->SetBinError(12,0.7071359);
   hNCinFV_stack_11->SetBinError(13,0.7075491);
   hNCinFV_stack_11->SetBinError(14,0.438694);
   hNCinFV_stack_11->SetBinError(15,0.5197486);
   hNCinFV_stack_11->SetBinError(16,0.2781975);
   hNCinFV_stack_11->SetBinError(17,0.5194673);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,25.67508);
   hnumuCCinFV_stack_12->SetBinContent(2,32.05441);
   hnumuCCinFV_stack_12->SetBinContent(3,30.39504);
   hnumuCCinFV_stack_12->SetBinContent(4,22.89721);
   hnumuCCinFV_stack_12->SetBinContent(5,16.60989);
   hnumuCCinFV_stack_12->SetBinContent(6,13.16295);
   hnumuCCinFV_stack_12->SetBinContent(7,10.47587);
   hnumuCCinFV_stack_12->SetBinContent(8,6.128233);
   hnumuCCinFV_stack_12->SetBinContent(9,5.525866);
   hnumuCCinFV_stack_12->SetBinContent(10,1.853885);
   hnumuCCinFV_stack_12->SetBinContent(11,1.460455);
   hnumuCCinFV_stack_12->SetBinContent(12,1.402996);
   hnumuCCinFV_stack_12->SetBinContent(13,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(17,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.972579);
   hnumuCCinFV_stack_12->SetBinError(2,3.333101);
   hnumuCCinFV_stack_12->SetBinError(3,3.421649);
   hnumuCCinFV_stack_12->SetBinError(4,2.676271);
   hnumuCCinFV_stack_12->SetBinError(5,2.307034);
   hnumuCCinFV_stack_12->SetBinError(6,2.025915);
   hnumuCCinFV_stack_12->SetBinError(7,1.668323);
   hnumuCCinFV_stack_12->SetBinError(8,1.269135);
   hnumuCCinFV_stack_12->SetBinError(9,1.220385);
   hnumuCCinFV_stack_12->SetBinError(10,0.6789509);
   hnumuCCinFV_stack_12->SetBinError(11,0.6193387);
   hnumuCCinFV_stack_12->SetBinError(12,0.5309165);
   hnumuCCinFV_stack_12->SetBinError(13,0.340721);
   hnumuCCinFV_stack_12->SetBinError(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(17,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,8.760624);
   hnueCCinFV_stack_13->SetBinContent(2,3.770862);
   hnueCCinFV_stack_13->SetBinContent(3,4.22677);
   hnueCCinFV_stack_13->SetBinContent(4,3.652575);
   hnueCCinFV_stack_13->SetBinContent(5,1.702315);
   hnueCCinFV_stack_13->SetBinContent(6,0.7212367);
   hnueCCinFV_stack_13->SetBinContent(7,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(9,1.32013);
   hnueCCinFV_stack_13->SetBinContent(10,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(12,1.084408);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.313953);
   hnueCCinFV_stack_13->SetBinError(2,1.023698);
   hnueCCinFV_stack_13->SetBinError(3,1.178722);
   hnueCCinFV_stack_13->SetBinError(4,1.491723);
   hnueCCinFV_stack_13->SetBinError(5,0.7306767);
   hnueCCinFV_stack_13->SetBinError(6,0.4220181);
   hnueCCinFV_stack_13->SetBinError(7,0.438694);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(9,1.103342);
   hnueCCinFV_stack_13->SetBinError(10,0.3743698);
   hnueCCinFV_stack_13->SetBinError(12,0.6604876);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2921355);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__17->SetBinContent(1,504.3208);
   hmcerror__17->SetBinContent(2,644.3749);
   hmcerror__17->SetBinContent(3,556.1618);
   hmcerror__17->SetBinContent(4,417.4646);
   hmcerror__17->SetBinContent(5,307.9662);
   hmcerror__17->SetBinContent(6,189.5925);
   hmcerror__17->SetBinContent(7,117.9095);
   hmcerror__17->SetBinContent(8,82.9753);
   hmcerror__17->SetBinContent(9,46.72867);
   hmcerror__17->SetBinContent(10,26.80752);
   hmcerror__17->SetBinContent(11,18.41779);
   hmcerror__17->SetBinContent(12,12.3935);
   hmcerror__17->SetBinContent(13,7.873915);
   hmcerror__17->SetBinContent(14,3.905238);
   hmcerror__17->SetBinContent(15,3.779067);
   hmcerror__17->SetBinContent(16,1.824432);
   hmcerror__17->SetBinContent(17,3.611448);
   hmcerror__17->SetBinError(1,123.8754);
   hmcerror__17->SetBinError(2,139.6221);
   hmcerror__17->SetBinError(3,125.8572);
   hmcerror__17->SetBinError(4,104.7674);
   hmcerror__17->SetBinError(5,81.45134);
   hmcerror__17->SetBinError(6,55.11704);
   hmcerror__17->SetBinError(7,37.26417);
   hmcerror__17->SetBinError(8,31.79398);
   hmcerror__17->SetBinError(9,19.19447);
   hmcerror__17->SetBinError(10,14.00064);
   hmcerror__17->SetBinError(11,10.55337);
   hmcerror__17->SetBinError(12,8.392808);
   hmcerror__17->SetBinError(13,5.731702);
   hmcerror__17->SetBinError(14,5.000828);
   hmcerror__17->SetBinError(15,4.450386);
   hmcerror__17->SetBinError(16,5.207545);
   hmcerror__17->SetBinError(17,5.469727);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3021[16] = {
   502,
   720,
   553,
   440,
   279,
   169,
   101,
   56,
   38,
   24,
   15,
   17,
   8,
   6,
   1,
   3};
   Double_t _felx3021[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3021[16] = {
   22.40536,
   26.83282,
   23.51595,
   20.97618,
   16.70329,
   13,
   10.04988,
   7.6127,
   6.3013,
   5.0476,
   4.0385,
   4.2835,
   3.0307,
   2.67925,
   1,
   2.143368};
   Double_t _fehx3021[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3021[16] = {
   22.40536,
   26.83282,
   23.51595,
   20.97618,
   16.70329,
   13,
   10.04988,
   7.4094,
   6.0955,
   4.837,
   3.8197,
   4.0673,
   2.7896,
   2.41858,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,440);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(821.5161);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2932.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 390.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 196.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 168.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3022[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3022[16] = {
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
   Double_t _felx3022[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3022[16] = {
   0.2456282,
   0.2166784,
   0.2262959,
   0.2509612,
   0.2644814,
   0.2907132,
   0.3160405,
   0.383174,
   0.4107643,
   0.5222655,
   0.5729989,
   0.6771942,
   0.7279355,
   1.280544,
   1.177641,
   2.854338};
   Double_t _fehx3022[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3022[16] = {
   0.2456282,
   0.2166784,
   0.2262959,
   0.2509612,
   0.2644814,
   0.2907132,
   0.3160405,
   0.383174,
   0.4107643,
   0.5222655,
   0.5729989,
   0.6771942,
   0.7279355,
   1.280544,
   1.177641,
   2.854338};
   grae = new TGraphAsymmErrors(16,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,440);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3023[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3023[16] = {
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
   Double_t _felx3023[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3023[16] = {
   0.191166,
   0.1924814,
   0.2042497,
   0.2161393,
   0.2251954,
   0.250176,
   0.2802534,
   0.310811,
   0.325944,
   0.319059,
   0.2852876,
   0.3059015,
   0.3544053,
   0.4294805,
   0.3375114,
   0.4929365};
   Double_t _fehx3023[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3023[16] = {
   0.191166,
   0.1924814,
   0.2042497,
   0.2161393,
   0.2251954,
   0.250176,
   0.2802534,
   0.310811,
   0.325944,
   0.319059,
   0.2852876,
   0.3059015,
   0.3544053,
   0.4294805,
   0.3375114,
   0.4929365};
   grae = new TGraphAsymmErrors(16,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,440);
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
   
   Double_t _fx3024[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3024[16] = {
   0.9953982,
   1.117362,
   0.994315,
   1.053982,
   0.9059435,
   0.8913855,
   0.8565894,
   0.6748997,
   0.8132053,
   0.8952713,
   0.8144301,
   1.371686,
   1.016013,
   1.536398,
   0.2646156,
   1.644347};
   Double_t _felx3024[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3024[16] = {
   0.0444268,
   0.04164162,
   0.04228257,
   0.0502466,
   0.05423742,
   0.06856811,
   0.08523383,
   0.09174658,
   0.1348487,
   0.1882905,
   0.2192717,
   0.3456246,
   0.3849038,
   0.6860658,
   0.2646156,
   1.174814};
   Double_t _fehx3024[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3024[16] = {
   0.0444268,
   0.04164162,
   0.04228257,
   0.0502466,
   0.05423742,
   0.06856811,
   0.08523383,
   0.08929646,
   0.1304445,
   0.1804345,
   0.2073919,
   0.32818,
   0.3542837,
   0.619317,
   0.3598004,
   0.9450723};
   grae = new TGraphAsymmErrors(16,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,440);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.848362);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

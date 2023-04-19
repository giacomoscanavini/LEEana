#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 16:16:05 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-2.38882,3.553846,264.1532);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__22->SetBinContent(1,35.35);
   hmc__22->SetBinContent(2,80.64476);
   hmc__22->SetBinContent(3,117.9933);
   hmc__22->SetBinContent(4,119.441);
   hmc__22->SetBinContent(5,111.6987);
   hmc__22->SetBinContent(6,97.93926);
   hmc__22->SetBinContent(7,83.19183);
   hmc__22->SetBinContent(8,74.905);
   hmc__22->SetBinContent(9,57.99483);
   hmc__22->SetBinContent(10,48.54533);
   hmc__22->SetBinContent(11,40.09711);
   hmc__22->SetBinContent(12,41.50761);
   hmc__22->SetBinContent(13,27.84828);
   hmc__22->SetBinContent(14,27.93796);
   hmc__22->SetBinContent(15,26.30407);
   hmc__22->SetBinContent(16,28.47497);
   hmc__22->SetBinContent(17,25.10801);
   hmc__22->SetBinContent(18,21.3245);
   hmc__22->SetBinContent(19,15.66621);
   hmc__22->SetBinContent(20,22.10186);
   hmc__22->SetBinContent(21,17.86238);
   hmc__22->SetBinContent(22,18.38207);
   hmc__22->SetBinContent(23,10.52569);
   hmc__22->SetBinContent(24,3.413152);
   hmc__22->SetBinError(1,15.48777);
   hmc__22->SetBinError(2,28.83894);
   hmc__22->SetBinError(3,31.7698);
   hmc__22->SetBinError(4,36.57184);
   hmc__22->SetBinError(5,30.82833);
   hmc__22->SetBinError(6,27.31226);
   hmc__22->SetBinError(7,25.38757);
   hmc__22->SetBinError(8,22.55074);
   hmc__22->SetBinError(9,19.62663);
   hmc__22->SetBinError(10,14.92241);
   hmc__22->SetBinError(11,17.37614);
   hmc__22->SetBinError(12,17.09575);
   hmc__22->SetBinError(13,14.41092);
   hmc__22->SetBinError(14,11.86778);
   hmc__22->SetBinError(15,11.14981);
   hmc__22->SetBinError(16,22.43868);
   hmc__22->SetBinError(17,16.88661);
   hmc__22->SetBinError(18,12.17201);
   hmc__22->SetBinError(19,9.80093);
   hmc__22->SetBinError(20,16.40601);
   hmc__22->SetBinError(21,11.23473);
   hmc__22->SetBinError(22,13.59197);
   hmc__22->SetBinError(23,9.217994);
   hmc__22->SetBinError(24,4.871254);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-2.38882);
   hmc__22->SetMaximum(250.8261);
   hmc__22->SetEntries(1133.738);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,3.15);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(125.4131);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.9303237);
   hbadmatch_stack_1->SetBinContent(2,2.545382);
   hbadmatch_stack_1->SetBinContent(3,2.609609);
   hbadmatch_stack_1->SetBinContent(4,3.565999);
   hbadmatch_stack_1->SetBinContent(5,1.858957);
   hbadmatch_stack_1->SetBinContent(6,2.285351);
   hbadmatch_stack_1->SetBinContent(7,2.558186);
   hbadmatch_stack_1->SetBinContent(8,3.117553);
   hbadmatch_stack_1->SetBinContent(9,2.998184);
   hbadmatch_stack_1->SetBinContent(10,1.746672);
   hbadmatch_stack_1->SetBinContent(11,2.32247);
   hbadmatch_stack_1->SetBinContent(12,0.5352025);
   hbadmatch_stack_1->SetBinContent(13,2.04943);
   hbadmatch_stack_1->SetBinContent(14,1.663412);
   hbadmatch_stack_1->SetBinContent(15,1.261647);
   hbadmatch_stack_1->SetBinContent(16,0.8770706);
   hbadmatch_stack_1->SetBinContent(17,1.687917);
   hbadmatch_stack_1->SetBinContent(18,1.073786);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.785171);
   hbadmatch_stack_1->SetBinContent(22,0.9024922);
   hbadmatch_stack_1->SetBinContent(23,1.073786);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.4814682);
   hbadmatch_stack_1->SetBinError(2,1.271762);
   hbadmatch_stack_1->SetBinError(3,0.863465);
   hbadmatch_stack_1->SetBinError(4,0.919558);
   hbadmatch_stack_1->SetBinError(5,0.6804124);
   hbadmatch_stack_1->SetBinError(6,0.7517171);
   hbadmatch_stack_1->SetBinError(7,0.8741337);
   hbadmatch_stack_1->SetBinError(8,0.9311789);
   hbadmatch_stack_1->SetBinError(9,0.9472777);
   hbadmatch_stack_1->SetBinError(10,0.6320804);
   hbadmatch_stack_1->SetBinError(11,0.9545138);
   hbadmatch_stack_1->SetBinError(12,0.3921167);
   hbadmatch_stack_1->SetBinError(13,0.8662755);
   hbadmatch_stack_1->SetBinError(14,0.6400655);
   hbadmatch_stack_1->SetBinError(15,0.6678117);
   hbadmatch_stack_1->SetBinError(16,0.5197486);
   hbadmatch_stack_1->SetBinError(17,0.6594983);
   hbadmatch_stack_1->SetBinError(18,0.5557297);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.3925882);
   hbadmatch_stack_1->SetBinError(22,0.4526115);
   hbadmatch_stack_1->SetBinError(23,0.5557297);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.916804);
   hext_stack_2->SetBinContent(2,8.186592);
   hext_stack_2->SetBinContent(3,14.66459);
   hext_stack_2->SetBinContent(4,11.91219);
   hext_stack_2->SetBinContent(5,14.03179);
   hext_stack_2->SetBinContent(6,17.08982);
   hext_stack_2->SetBinContent(7,13.76642);
   hext_stack_2->SetBinContent(8,13.43484);
   hext_stack_2->SetBinContent(9,12.32319);
   hext_stack_2->SetBinContent(10,14.77715);
   hext_stack_2->SetBinContent(11,8.905998);
   hext_stack_2->SetBinContent(12,12.21063);
   hext_stack_2->SetBinContent(13,7.444006);
   hext_stack_2->SetBinContent(14,9.794217);
   hext_stack_2->SetBinContent(15,8.040958);
   hext_stack_2->SetBinContent(16,8.388476);
   hext_stack_2->SetBinContent(17,5.429782);
   hext_stack_2->SetBinContent(18,4.117831);
   hext_stack_2->SetBinContent(19,2.834603);
   hext_stack_2->SetBinContent(20,3.330584);
   hext_stack_2->SetBinContent(21,2.428004);
   hext_stack_2->SetBinContent(22,1.779209);
   hext_stack_2->SetBinContent(23,2.192989);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinError(1,1.132884);
   hext_stack_2->SetBinError(2,1.834006);
   hext_stack_2->SetBinError(3,2.450668);
   hext_stack_2->SetBinError(4,2.200574);
   hext_stack_2->SetBinError(5,2.421642);
   hext_stack_2->SetBinError(6,2.720315);
   hext_stack_2->SetBinError(7,2.439542);
   hext_stack_2->SetBinError(8,2.459133);
   hext_stack_2->SetBinError(9,2.267812);
   hext_stack_2->SetBinError(10,2.394265);
   hext_stack_2->SetBinError(11,1.923594);
   hext_stack_2->SetBinError(12,2.327282);
   hext_stack_2->SetBinError(13,1.777386);
   hext_stack_2->SetBinError(14,2.07175);
   hext_stack_2->SetBinError(15,1.725143);
   hext_stack_2->SetBinError(16,2.068721);
   hext_stack_2->SetBinError(17,1.437083);
   hext_stack_2->SetBinError(18,1.430621);
   hext_stack_2->SetBinError(19,1.106046);
   hext_stack_2->SetBinError(20,1.116937);
   hext_stack_2->SetBinError(21,1.028599);
   hext_stack_2->SetBinError(22,0.9206235);
   hext_stack_2->SetBinError(23,0.9009267);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetEntries(503);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.6097389);
   hdirt_stack_3->SetBinContent(2,0.9525174);
   hdirt_stack_3->SetBinContent(3,2.294121);
   hdirt_stack_3->SetBinContent(4,2.123665);
   hdirt_stack_3->SetBinContent(5,1.891371);
   hdirt_stack_3->SetBinContent(6,1.380093);
   hdirt_stack_3->SetBinContent(7,1.087465);
   hdirt_stack_3->SetBinContent(8,1.491792);
   hdirt_stack_3->SetBinContent(9,1.42627);
   hdirt_stack_3->SetBinContent(10,0.4142144);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,1.195944);
   hdirt_stack_3->SetBinContent(15,0.811899);
   hdirt_stack_3->SetBinContent(16,0.5090927);
   hdirt_stack_3->SetBinContent(17,0.2761429);
   hdirt_stack_3->SetBinContent(18,0.8606333);
   hdirt_stack_3->SetBinContent(19,1.147013);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinContent(21,0.6123907);
   hdirt_stack_3->SetBinContent(22,0.3569671);
   hdirt_stack_3->SetBinContent(23,0.6951543);
   hdirt_stack_3->SetBinError(1,0.3899956);
   hdirt_stack_3->SetBinError(2,0.5165933);
   hdirt_stack_3->SetBinError(3,0.8734808);
   hdirt_stack_3->SetBinError(4,0.7833706);
   hdirt_stack_3->SetBinError(5,0.6118382);
   hdirt_stack_3->SetBinError(6,0.6465947);
   hdirt_stack_3->SetBinError(7,0.5790138);
   hdirt_stack_3->SetBinError(8,0.6050722);
   hdirt_stack_3->SetBinError(9,0.6670199);
   hdirt_stack_3->SetBinError(10,0.2391468);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.6109736);
   hdirt_stack_3->SetBinError(15,0.476673);
   hdirt_stack_3->SetBinError(16,0.3601374);
   hdirt_stack_3->SetBinError(17,0.1952625);
   hdirt_stack_3->SetBinError(18,0.456873);
   hdirt_stack_3->SetBinError(19,0.9535811);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetBinError(21,0.4468697);
   hdirt_stack_3->SetBinError(22,0.258803);
   hdirt_stack_3->SetBinError(23,0.4258516);
   hdirt_stack_3->SetEntries(90);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,5.944525);
   houtFV_stack_4->SetBinContent(2,13.11426);
   houtFV_stack_4->SetBinContent(3,22.99097);
   houtFV_stack_4->SetBinContent(4,21.40112);
   houtFV_stack_4->SetBinContent(5,24.83303);
   houtFV_stack_4->SetBinContent(6,20.12643);
   houtFV_stack_4->SetBinContent(7,17.3902);
   houtFV_stack_4->SetBinContent(8,15.18362);
   houtFV_stack_4->SetBinContent(9,10.56807);
   houtFV_stack_4->SetBinContent(10,8.230678);
   houtFV_stack_4->SetBinContent(11,7.94721);
   houtFV_stack_4->SetBinContent(12,9.063334);
   houtFV_stack_4->SetBinContent(13,5.163457);
   houtFV_stack_4->SetBinContent(14,6.74871);
   houtFV_stack_4->SetBinContent(15,6.021125);
   houtFV_stack_4->SetBinContent(16,8.340612);
   houtFV_stack_4->SetBinContent(17,7.764967);
   houtFV_stack_4->SetBinContent(18,7.130738);
   houtFV_stack_4->SetBinContent(19,4.599448);
   houtFV_stack_4->SetBinContent(20,7.533673);
   houtFV_stack_4->SetBinContent(21,6.581106);
   houtFV_stack_4->SetBinContent(22,6.408309);
   houtFV_stack_4->SetBinContent(23,1.857266);
   houtFV_stack_4->SetBinContent(24,1.125349);
   houtFV_stack_4->SetBinError(1,1.265599);
   houtFV_stack_4->SetBinError(2,1.857505);
   houtFV_stack_4->SetBinError(3,2.439314);
   houtFV_stack_4->SetBinError(4,2.34229);
   houtFV_stack_4->SetBinError(5,2.453961);
   houtFV_stack_4->SetBinError(6,2.317999);
   houtFV_stack_4->SetBinError(7,2.116567);
   houtFV_stack_4->SetBinError(8,2.193104);
   houtFV_stack_4->SetBinError(9,1.570043);
   houtFV_stack_4->SetBinError(10,1.516171);
   houtFV_stack_4->SetBinError(11,1.434081);
   houtFV_stack_4->SetBinError(12,1.478176);
   houtFV_stack_4->SetBinError(13,1.144017);
   houtFV_stack_4->SetBinError(14,1.271909);
   houtFV_stack_4->SetBinError(15,1.307908);
   houtFV_stack_4->SetBinError(16,1.869286);
   houtFV_stack_4->SetBinError(17,1.377312);
   houtFV_stack_4->SetBinError(18,1.346576);
   houtFV_stack_4->SetBinError(19,0.99971);
   houtFV_stack_4->SetBinError(20,1.278388);
   houtFV_stack_4->SetBinError(21,1.388542);
   houtFV_stack_4->SetBinError(22,1.28115);
   houtFV_stack_4->SetBinError(23,0.6799255);
   houtFV_stack_4->SetBinError(24,0.5194673);
   houtFV_stack_4->SetEntries(1038);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.881262);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.109702);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.80313);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.63357);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.855194);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.87819);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5304361);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4065525);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6027682);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5251252);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5280202);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4855902);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3320795);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.283386);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.04832419);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.726742);
   hNCpi0inFVres_stack_7->SetBinContent(2,12.25428);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.6914);
   hNCpi0inFVres_stack_7->SetBinContent(4,21.44756);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.60456);
   hNCpi0inFVres_stack_7->SetBinContent(6,16.1329);
   hNCpi0inFVres_stack_7->SetBinContent(7,13.45649);
   hNCpi0inFVres_stack_7->SetBinContent(8,14.92889);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.403653);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.912911);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.181622);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.64645);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.552773);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.78047);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.551366);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.12332);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.37018);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.285984);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.645772);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.51989);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.56748);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.75438);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.366276);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.1394999);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6842672);
   hNCpi0inFVres_stack_7->SetBinError(2,1.089569);
   hNCpi0inFVres_stack_7->SetBinError(3,1.285305);
   hNCpi0inFVres_stack_7->SetBinError(4,1.554297);
   hNCpi0inFVres_stack_7->SetBinError(5,1.442337);
   hNCpi0inFVres_stack_7->SetBinError(6,1.240227);
   hNCpi0inFVres_stack_7->SetBinError(7,1.192878);
   hNCpi0inFVres_stack_7->SetBinError(8,1.290217);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8256536);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8261642);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8719292);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7657757);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5465522);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6832243);
   hNCpi0inFVres_stack_7->SetBinError(15,0.531266);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6086585);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4875229);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5306553);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3534638);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3580226);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5892179);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3413259);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4042329);
   hNCpi0inFVres_stack_7->SetBinError(24,0.06238626);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.55203);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.709884);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.149818);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.570398);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.256346);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.779302);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.350096);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.825462);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.896544);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.29669);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6410357);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.920372);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.032804);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5015358);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5988538);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5184118);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6109983);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8277728);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9189099);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7275047);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6180707);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7279954);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4046334);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4592961);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3492176);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1771895);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3235708);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3564798);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2608584);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1658436);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1922885);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,9.168736);
   hCCpi0inFV_stack_10->SetBinContent(2,20.56412);
   hCCpi0inFV_stack_10->SetBinContent(3,26.78946);
   hCCpi0inFV_stack_10->SetBinContent(4,26.61899);
   hCCpi0inFV_stack_10->SetBinContent(5,22.77871);
   hCCpi0inFV_stack_10->SetBinContent(6,19.63184);
   hCCpi0inFV_stack_10->SetBinContent(7,17.50785);
   hCCpi0inFV_stack_10->SetBinContent(8,14.90021);
   hCCpi0inFV_stack_10->SetBinContent(9,11.77892);
   hCCpi0inFV_stack_10->SetBinContent(10,7.440774);
   hCCpi0inFV_stack_10->SetBinContent(11,5.630157);
   hCCpi0inFV_stack_10->SetBinContent(12,5.94313);
   hCCpi0inFV_stack_10->SetBinContent(13,3.41395);
   hCCpi0inFV_stack_10->SetBinContent(14,2.486059);
   hCCpi0inFV_stack_10->SetBinContent(15,3.846031);
   hCCpi0inFV_stack_10->SetBinContent(16,4.248045);
   hCCpi0inFV_stack_10->SetBinContent(17,3.66128);
   hCCpi0inFV_stack_10->SetBinContent(18,3.034178);
   hCCpi0inFV_stack_10->SetBinContent(19,2.899686);
   hCCpi0inFV_stack_10->SetBinContent(20,3.781783);
   hCCpi0inFV_stack_10->SetBinContent(21,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(22,4.815489);
   hCCpi0inFV_stack_10->SetBinContent(23,2.105544);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9801958);
   hCCpi0inFV_stack_10->SetBinError(1,1.498469);
   hCCpi0inFV_stack_10->SetBinError(2,2.284672);
   hCCpi0inFV_stack_10->SetBinError(3,2.694166);
   hCCpi0inFV_stack_10->SetBinError(4,2.581033);
   hCCpi0inFV_stack_10->SetBinError(5,2.356141);
   hCCpi0inFV_stack_10->SetBinError(6,2.263734);
   hCCpi0inFV_stack_10->SetBinError(7,2.131345);
   hCCpi0inFV_stack_10->SetBinError(8,1.94835);
   hCCpi0inFV_stack_10->SetBinError(9,1.762914);
   hCCpi0inFV_stack_10->SetBinError(10,1.336705);
   hCCpi0inFV_stack_10->SetBinError(11,1.12929);
   hCCpi0inFV_stack_10->SetBinError(12,1.231241);
   hCCpi0inFV_stack_10->SetBinError(13,0.9088576);
   hCCpi0inFV_stack_10->SetBinError(14,0.8559962);
   hCCpi0inFV_stack_10->SetBinError(15,0.9593426);
   hCCpi0inFV_stack_10->SetBinError(16,1.038119);
   hCCpi0inFV_stack_10->SetBinError(17,0.9812871);
   hCCpi0inFV_stack_10->SetBinError(18,0.8325598);
   hCCpi0inFV_stack_10->SetBinError(19,0.836642);
   hCCpi0inFV_stack_10->SetBinError(20,1.007541);
   hCCpi0inFV_stack_10->SetBinError(21,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(22,1.115654);
   hCCpi0inFV_stack_10->SetBinError(23,0.6797106);
   hCCpi0inFV_stack_10->SetBinError(24,0.4383608);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.107235);
   hNCinFV_stack_11->SetBinContent(2,6.090705);
   hNCinFV_stack_11->SetBinContent(3,6.118227);
   hNCinFV_stack_11->SetBinContent(4,6.698838);
   hNCinFV_stack_11->SetBinContent(5,6.67916);
   hNCinFV_stack_11->SetBinContent(6,4.439689);
   hNCinFV_stack_11->SetBinContent(7,4.291763);
   hNCinFV_stack_11->SetBinContent(8,1.807394);
   hNCinFV_stack_11->SetBinContent(9,2.000729);
   hNCinFV_stack_11->SetBinContent(10,1.91221);
   hNCinFV_stack_11->SetBinContent(11,1.608988);
   hNCinFV_stack_11->SetBinContent(12,1.180292);
   hNCinFV_stack_11->SetBinContent(13,0.5352025);
   hNCinFV_stack_11->SetBinContent(14,0.1950248);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.5850745);
   hNCinFV_stack_11->SetBinContent(18,0.3917402);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,1.465526);
   hNCinFV_stack_11->SetBinContent(21,0.7771782);
   hNCinFV_stack_11->SetBinContent(23,0.3934307);
   hNCinFV_stack_11->SetBinError(1,0.6801976);
   hNCinFV_stack_11->SetBinError(2,1.316304);
   hNCinFV_stack_11->SetBinError(3,1.160457);
   hNCinFV_stack_11->SetBinError(4,1.287402);
   hNCinFV_stack_11->SetBinError(5,1.359443);
   hNCinFV_stack_11->SetBinError(6,1.055652);
   hNCinFV_stack_11->SetBinError(7,1.110863);
   hNCinFV_stack_11->SetBinError(8,0.7084844);
   hNCinFV_stack_11->SetBinError(9,0.7343859);
   hNCinFV_stack_11->SetBinError(10,0.6516395);
   hNCinFV_stack_11->SetBinError(11,0.6801404);
   hNCinFV_stack_11->SetBinError(12,0.4818523);
   hNCinFV_stack_11->SetBinError(13,0.3921167);
   hNCinFV_stack_11->SetBinError(14,0.1950249);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.337793);
   hNCinFV_stack_11->SetBinError(18,0.2770047);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.6209405);
   hNCinFV_stack_11->SetBinError(21,0.4404482);
   hNCinFV_stack_11->SetBinError(23,0.2781975);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,3.498082);
   hnumuCCinFV_stack_12->SetBinContent(2,7.091306);
   hnumuCCinFV_stack_12->SetBinContent(3,15.86751);
   hnumuCCinFV_stack_12->SetBinContent(4,14.76987);
   hnumuCCinFV_stack_12->SetBinContent(5,11.49029);
   hnumuCCinFV_stack_12->SetBinContent(6,11.71598);
   hnumuCCinFV_stack_12->SetBinContent(7,8.000405);
   hnumuCCinFV_stack_12->SetBinContent(8,7.837507);
   hnumuCCinFV_stack_12->SetBinContent(9,7.375912);
   hnumuCCinFV_stack_12->SetBinContent(10,5.66111);
   hnumuCCinFV_stack_12->SetBinContent(11,5.83173);
   hnumuCCinFV_stack_12->SetBinContent(12,5.614208);
   hnumuCCinFV_stack_12->SetBinContent(13,4.21886);
   hnumuCCinFV_stack_12->SetBinContent(14,1.293417);
   hnumuCCinFV_stack_12->SetBinContent(15,2.510492);
   hnumuCCinFV_stack_12->SetBinContent(16,1.963372);
   hnumuCCinFV_stack_12->SetBinContent(17,2.625729);
   hnumuCCinFV_stack_12->SetBinContent(18,1.509238);
   hnumuCCinFV_stack_12->SetBinContent(19,1.783835);
   hnumuCCinFV_stack_12->SetBinContent(20,2.761075);
   hnumuCCinFV_stack_12->SetBinContent(21,1.49788);
   hnumuCCinFV_stack_12->SetBinContent(22,1.80647);
   hnumuCCinFV_stack_12->SetBinContent(23,0.4504772);
   hnumuCCinFV_stack_12->SetBinContent(24,0.536893);
   hnumuCCinFV_stack_12->SetBinError(1,1.439755);
   hnumuCCinFV_stack_12->SetBinError(2,1.372745);
   hnumuCCinFV_stack_12->SetBinError(3,2.890061);
   hnumuCCinFV_stack_12->SetBinError(4,2.763196);
   hnumuCCinFV_stack_12->SetBinError(5,2.04129);
   hnumuCCinFV_stack_12->SetBinError(6,1.78362);
   hnumuCCinFV_stack_12->SetBinError(7,1.494715);
   hnumuCCinFV_stack_12->SetBinError(8,1.366521);
   hnumuCCinFV_stack_12->SetBinError(9,1.556514);
   hnumuCCinFV_stack_12->SetBinError(10,1.249476);
   hnumuCCinFV_stack_12->SetBinError(11,1.33188);
   hnumuCCinFV_stack_12->SetBinError(12,1.242676);
   hnumuCCinFV_stack_12->SetBinError(13,1.181821);
   hnumuCCinFV_stack_12->SetBinError(14,0.5304047);
   hnumuCCinFV_stack_12->SetBinError(15,0.8083321);
   hnumuCCinFV_stack_12->SetBinError(16,0.714105);
   hnumuCCinFV_stack_12->SetBinError(17,0.88255);
   hnumuCCinFV_stack_12->SetBinError(18,0.694189);
   hnumuCCinFV_stack_12->SetBinError(19,0.7040033);
   hnumuCCinFV_stack_12->SetBinError(20,0.8087624);
   hnumuCCinFV_stack_12->SetBinError(21,0.631849);
   hnumuCCinFV_stack_12->SetBinError(22,0.7090367);
   hnumuCCinFV_stack_12->SetBinError(23,0.3210795);
   hnumuCCinFV_stack_12->SetBinError(24,0.3929602);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.9866226);
   hnueCCinFV_stack_13->SetBinContent(2,2.998106);
   hnueCCinFV_stack_13->SetBinContent(3,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(17,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.4428891);
   hnueCCinFV_stack_13->SetBinError(2,1.495939);
   hnueCCinFV_stack_13->SetBinError(3,0.5475369);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1529246);
   hnueCCinFV_stack_13->SetBinError(17,0.3025491);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__23->SetBinContent(1,35.35);
   hmcerror__23->SetBinContent(2,80.64476);
   hmcerror__23->SetBinContent(3,117.9933);
   hmcerror__23->SetBinContent(4,119.441);
   hmcerror__23->SetBinContent(5,111.6987);
   hmcerror__23->SetBinContent(6,97.93926);
   hmcerror__23->SetBinContent(7,83.19183);
   hmcerror__23->SetBinContent(8,74.905);
   hmcerror__23->SetBinContent(9,57.99483);
   hmcerror__23->SetBinContent(10,48.54533);
   hmcerror__23->SetBinContent(11,40.09711);
   hmcerror__23->SetBinContent(12,41.50761);
   hmcerror__23->SetBinContent(13,27.84828);
   hmcerror__23->SetBinContent(14,27.93796);
   hmcerror__23->SetBinContent(15,26.30407);
   hmcerror__23->SetBinContent(16,28.47497);
   hmcerror__23->SetBinContent(17,25.10801);
   hmcerror__23->SetBinContent(18,21.3245);
   hmcerror__23->SetBinContent(19,15.66621);
   hmcerror__23->SetBinContent(20,22.10186);
   hmcerror__23->SetBinContent(21,17.86238);
   hmcerror__23->SetBinContent(22,18.38207);
   hmcerror__23->SetBinContent(23,10.52569);
   hmcerror__23->SetBinContent(24,3.413152);
   hmcerror__23->SetBinError(1,15.48777);
   hmcerror__23->SetBinError(2,28.83894);
   hmcerror__23->SetBinError(3,31.7698);
   hmcerror__23->SetBinError(4,36.57184);
   hmcerror__23->SetBinError(5,30.82833);
   hmcerror__23->SetBinError(6,27.31226);
   hmcerror__23->SetBinError(7,25.38757);
   hmcerror__23->SetBinError(8,22.55074);
   hmcerror__23->SetBinError(9,19.62663);
   hmcerror__23->SetBinError(10,14.92241);
   hmcerror__23->SetBinError(11,17.37614);
   hmcerror__23->SetBinError(12,17.09575);
   hmcerror__23->SetBinError(13,14.41092);
   hmcerror__23->SetBinError(14,11.86778);
   hmcerror__23->SetBinError(15,11.14981);
   hmcerror__23->SetBinError(16,22.43868);
   hmcerror__23->SetBinError(17,16.88661);
   hmcerror__23->SetBinError(18,12.17201);
   hmcerror__23->SetBinError(19,9.80093);
   hmcerror__23->SetBinError(20,16.40601);
   hmcerror__23->SetBinError(21,11.23473);
   hmcerror__23->SetBinError(22,13.59197);
   hmcerror__23->SetBinError(23,9.217994);
   hmcerror__23->SetBinError(24,4.871254);
   hmcerror__23->SetBinError(25,0.3895343);
   hmcerror__23->SetEntries(1133.738);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[24] = {
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
   Double_t _fy3029[24] = {
   32,
   77,
   110,
   112,
   119,
   110,
   69,
   62,
   44,
   41,
   31,
   29,
   38,
   17,
   30,
   19,
   17,
   22,
   21,
   24,
   21,
   15,
   9,
   4};
   Double_t _felx3029[24] = {
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
   Double_t _fely3029[24] = {
   5.7977,
   8.8995,
   10.48809,
   10.58301,
   10.90871,
   10.48809,
   8.4327,
   8.0018,
   6.7671,
   6.5384,
   5.7094,
   5.5285,
   6.3013,
   4.2835,
   5.6197,
   4.5151,
   4.2835,
   4.8417,
   4.7354,
   5.0476,
   4.7354,
   4.0385,
   3.19354,
   2.29683};
   Double_t _fehx3029[24] = {
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
   Double_t _fehy3029[24] = {
   5.5904,
   8.6976,
   10.48809,
   10.58301,
   10.90871,
   10.48809,
   8.2304,
   7.7989,
   6.5623,
   6.3331,
   5.5017,
   5.3201,
   6.0955,
   4.0673,
   5.4117,
   4.3011,
   4.0673,
   4.6299,
   4.5229,
   4.837,
   4.5229,
   3.8197,
   2.9582,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,3.465);
   Graph_Graph3029->SetMinimum(1.532853);
   Graph_Graph3029->SetMaximum(142.7293);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1073.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.4","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 246.1","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.9","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
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
   Double_t _fy3030[24] = {
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
   Double_t _felx3030[24] = {
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
   Double_t _fely3030[24] = {
   0.4381264,
   0.3576047,
   0.2692508,
   0.3061917,
   0.2759955,
   0.2788694,
   0.305169,
   0.3010579,
   0.3384203,
   0.3073913,
   0.4333513,
   0.4118702,
   0.5174797,
   0.4247907,
   0.4238814,
   0.788014,
   0.6725588,
   0.5707993,
   0.6256095,
   0.742291,
   0.6289601,
   0.7394146,
   0.8757613,
   1.427201};
   Double_t _fehx3030[24] = {
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
   Double_t _fehy3030[24] = {
   0.4381264,
   0.3576047,
   0.2692508,
   0.3061917,
   0.2759955,
   0.2788694,
   0.305169,
   0.3010579,
   0.3384203,
   0.3073913,
   0.4333513,
   0.4118702,
   0.5174797,
   0.4247907,
   0.4238814,
   0.788014,
   0.6725588,
   0.5707993,
   0.6256095,
   0.742291,
   0.6289601,
   0.7394146,
   0.8757613,
   1.427201};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,3.465);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[24] = {
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
   Double_t _fy3031[24] = {
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
   Double_t _felx3031[24] = {
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
   Double_t _fely3031[24] = {
   0.2117044,
   0.2005978,
   0.1867886,
   0.1921322,
   0.1939134,
   0.1936324,
   0.1965916,
   0.1965342,
   0.199913,
   0.1790773,
   0.1808569,
   0.1877129,
   0.1997068,
   0.1809975,
   0.1913329,
   0.1956968,
   0.1871271,
   0.2117874,
   0.2406122,
   0.2003159,
   0.2440632,
   0.2158865,
   0.2405401,
   0.4245654};
   Double_t _fehx3031[24] = {
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
   Double_t _fehy3031[24] = {
   0.2117044,
   0.2005978,
   0.1867886,
   0.1921322,
   0.1939134,
   0.1936324,
   0.1965916,
   0.1965342,
   0.199913,
   0.1790773,
   0.1808569,
   0.1877129,
   0.1997068,
   0.1809975,
   0.1913329,
   0.1956968,
   0.1871271,
   0.2117874,
   0.2406122,
   0.2003159,
   0.2440632,
   0.2158865,
   0.2405401,
   0.4245654};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,3.465);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[24] = {
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
   Double_t _fy3032[24] = {
   0.9052334,
   0.9548047,
   0.9322561,
   0.9377015,
   1.065366,
   1.123145,
   0.8294084,
   0.8277151,
   0.7586883,
   0.8445715,
   0.773123,
   0.6986671,
   1.364537,
   0.6084911,
   1.140508,
   0.6672527,
   0.6770748,
   1.031677,
   1.340464,
   1.085882,
   1.175655,
   0.8160126,
   0.8550507,
   1.171937};
   Double_t _felx3032[24] = {
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
   Double_t _fely3032[24] = {
   0.1640085,
   0.1103543,
   0.08888713,
   0.08860446,
   0.09766197,
   0.1070877,
   0.1013645,
   0.106826,
   0.1166845,
   0.1346865,
   0.1423893,
   0.1331924,
   0.2262725,
   0.1533219,
   0.2136437,
   0.1585638,
   0.1706029,
   0.2270487,
   0.3022683,
   0.228379,
   0.2651046,
   0.2196978,
   0.3034043,
   0.6729352};
   Double_t _fehx3032[24] = {
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
   Double_t _fehy3032[24] = {
   0.1581443,
   0.1078508,
   0.08888713,
   0.08860446,
   0.09766197,
   0.1070877,
   0.0989328,
   0.1041172,
   0.1131532,
   0.1304575,
   0.1372094,
   0.1281717,
   0.2188825,
   0.1455833,
   0.2057362,
   0.1510484,
   0.1619921,
   0.2171165,
   0.2887041,
   0.2188504,
   0.2532081,
   0.2077949,
   0.2810457,
   0.5806539};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,3.465);
   Graph_Graph3032->SetMinimum(0.325427);
   Graph_Graph3032->SetMaximum(1.882333);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

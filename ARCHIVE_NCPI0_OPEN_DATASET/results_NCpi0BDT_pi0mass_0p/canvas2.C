#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 13:35:49 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-0.6251996,338.4615,52.68129);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hmc__4->SetBinContent(0,8.503307);
   hmc__4->SetBinContent(2,7.749962);
   hmc__4->SetBinContent(3,9.491052);
   hmc__4->SetBinContent(4,8.23765);
   hmc__4->SetBinContent(5,8.887254);
   hmc__4->SetBinContent(6,10.11564);
   hmc__4->SetBinContent(7,14.86698);
   hmc__4->SetBinContent(8,13.40527);
   hmc__4->SetBinContent(9,14.74486);
   hmc__4->SetBinContent(10,18.26185);
   hmc__4->SetBinContent(11,24.42359);
   hmc__4->SetBinContent(12,25.70049);
   hmc__4->SetBinContent(13,31.25998);
   hmc__4->SetBinContent(14,30.44195);
   hmc__4->SetBinContent(15,24.9935);
   hmc__4->SetBinContent(16,11.82415);
   hmc__4->SetBinContent(17,6.61509);
   hmc__4->SetBinContent(18,4.208635);
   hmc__4->SetBinContent(19,3.267527);
   hmc__4->SetBinContent(20,2.905947);
   hmc__4->SetBinContent(21,1.672726);
   hmc__4->SetBinContent(22,2.052194);
   hmc__4->SetBinContent(23,2.032089);
   hmc__4->SetBinContent(24,1.92625);
   hmc__4->SetBinContent(25,1.723223);
   hmc__4->SetBinContent(26,1.25678);
   hmc__4->SetBinContent(27,1.478918);
   hmc__4->SetBinContent(28,1.123897);
   hmc__4->SetBinContent(29,1.06222);
   hmc__4->SetBinContent(30,11.29214);
   hmc__4->SetBinError(0,0.7481663);
   hmc__4->SetBinError(1,0.125509);
   hmc__4->SetBinError(2,2.970418);
   hmc__4->SetBinError(3,4.22063);
   hmc__4->SetBinError(4,3.396598);
   hmc__4->SetBinError(5,3.000747);
   hmc__4->SetBinError(6,3.878586);
   hmc__4->SetBinError(7,6.3616);
   hmc__4->SetBinError(8,5.30268);
   hmc__4->SetBinError(9,4.69304);
   hmc__4->SetBinError(10,4.938196);
   hmc__4->SetBinError(11,7.227815);
   hmc__4->SetBinError(12,7.645442);
   hmc__4->SetBinError(13,9.398839);
   hmc__4->SetBinError(14,8.592219);
   hmc__4->SetBinError(15,15.12983);
   hmc__4->SetBinError(16,6.767802);
   hmc__4->SetBinError(17,3.940789);
   hmc__4->SetBinError(18,2.96154);
   hmc__4->SetBinError(19,1.69084);
   hmc__4->SetBinError(20,1.486375);
   hmc__4->SetBinError(21,1.086491);
   hmc__4->SetBinError(22,2.739128);
   hmc__4->SetBinError(23,2.349584);
   hmc__4->SetBinError(24,2.021403);
   hmc__4->SetBinError(25,1.538615);
   hmc__4->SetBinError(26,1.296839);
   hmc__4->SetBinError(27,1.281199);
   hmc__4->SetBinError(28,1.204855);
   hmc__4->SetBinError(29,0.9487108);
   hmc__4->SetBinError(30,5.136661);
   hmc__4->SetMinimum(-0.6251996);
   hmc__4->SetMaximum(50.01597);
   hmc__4->SetEntries(300.4418);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",29,0,300);
   hs2_stack_2->SetMinimum(-6.202043e-09);
   hs2_stack_2->SetMaximum(32.82298);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hbadmatch_stack_1->SetBinContent(0,0.2028846);
   hbadmatch_stack_1->SetBinContent(2,0.1801276);
   hbadmatch_stack_1->SetBinContent(3,0.3084127);
   hbadmatch_stack_1->SetBinContent(4,0.2283721);
   hbadmatch_stack_1->SetBinContent(5,0.3135341);
   hbadmatch_stack_1->SetBinContent(6,0.03825059);
   hbadmatch_stack_1->SetBinContent(7,0.1444338);
   hbadmatch_stack_1->SetBinContent(8,0.4464516);
   hbadmatch_stack_1->SetBinContent(9,0.4514505);
   hbadmatch_stack_1->SetBinContent(10,0.4593193);
   hbadmatch_stack_1->SetBinContent(11,0.1862397);
   hbadmatch_stack_1->SetBinContent(12,0.7084135);
   hbadmatch_stack_1->SetBinContent(13,0.385111);
   hbadmatch_stack_1->SetBinContent(14,0.3256886);
   hbadmatch_stack_1->SetBinContent(15,0.5046318);
   hbadmatch_stack_1->SetBinContent(16,0.1099809);
   hbadmatch_stack_1->SetBinContent(17,0.03825059);
   hbadmatch_stack_1->SetBinContent(18,0.0486765);
   hbadmatch_stack_1->SetBinContent(19,0.0127502);
   hbadmatch_stack_1->SetBinContent(21,0.06212959);
   hbadmatch_stack_1->SetBinContent(22,0.07470649);
   hbadmatch_stack_1->SetBinContent(23,0.02550039);
   hbadmatch_stack_1->SetBinContent(24,0.06195629);
   hbadmatch_stack_1->SetBinContent(26,0.02550039);
   hbadmatch_stack_1->SetBinContent(27,0.1366628);
   hbadmatch_stack_1->SetBinContent(28,0.07848676);
   hbadmatch_stack_1->SetBinContent(29,0.07716441);
   hbadmatch_stack_1->SetBinContent(30,0.2464427);
   hbadmatch_stack_1->SetBinError(0,0.09831013);
   hbadmatch_stack_1->SetBinError(2,0.1035066);
   hbadmatch_stack_1->SetBinError(3,0.1314702);
   hbadmatch_stack_1->SetBinError(4,0.1249819);
   hbadmatch_stack_1->SetBinError(5,0.1387265);
   hbadmatch_stack_1->SetBinError(6,0.02208399);
   hbadmatch_stack_1->SetBinError(7,0.07062713);
   hbadmatch_stack_1->SetBinError(8,0.1644161);
   hbadmatch_stack_1->SetBinError(9,0.1552389);
   hbadmatch_stack_1->SetBinError(10,0.1586102);
   hbadmatch_stack_1->SetBinError(11,0.09311069);
   hbadmatch_stack_1->SetBinError(12,0.2037184);
   hbadmatch_stack_1->SetBinError(13,0.1385505);
   hbadmatch_stack_1->SetBinError(14,0.1279309);
   hbadmatch_stack_1->SetBinError(15,0.3663096);
   hbadmatch_stack_1->SetBinError(16,0.07505288);
   hbadmatch_stack_1->SetBinError(17,0.02208399);
   hbadmatch_stack_1->SetBinError(18,0.0286658);
   hbadmatch_stack_1->SetBinError(19,0.0127502);
   hbadmatch_stack_1->SetBinError(21,0.06195653);
   hbadmatch_stack_1->SetBinError(22,0.06325464);
   hbadmatch_stack_1->SetBinError(23,0.0180315);
   hbadmatch_stack_1->SetBinError(24,0.06195629);
   hbadmatch_stack_1->SetBinError(26,0.0180315);
   hbadmatch_stack_1->SetBinError(27,0.08854226);
   hbadmatch_stack_1->SetBinError(28,0.06412362);
   hbadmatch_stack_1->SetBinError(29,0.06379553);
   hbadmatch_stack_1->SetBinError(30,0.1225832);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hext_stack_2->SetBinContent(0,0.707576);
   hext_stack_2->SetBinContent(2,0.7811952);
   hext_stack_2->SetBinContent(3,0.9679743);
   hext_stack_2->SetBinContent(4,0.3585572);
   hext_stack_2->SetBinContent(5,0.9066251);
   hext_stack_2->SetBinContent(6,0.793465);
   hext_stack_2->SetBinContent(7,1.690552);
   hext_stack_2->SetBinContent(8,1.154754);
   hext_stack_2->SetBinContent(9,1.105674);
   hext_stack_2->SetBinContent(10,1.154754);
   hext_stack_2->SetBinContent(11,1.874599);
   hext_stack_2->SetBinContent(12,0.5576063);
   hext_stack_2->SetBinContent(13,1.292454);
   hext_stack_2->SetBinContent(14,1.614201);
   hext_stack_2->SetBinContent(15,2.186809);
   hext_stack_2->SetBinContent(16,0.3217476);
   hext_stack_2->SetBinContent(17,0.4594475);
   hext_stack_2->SetBinContent(18,0.06134926);
   hext_stack_2->SetBinContent(20,0.4103681);
   hext_stack_2->SetBinContent(21,0.03680956);
   hext_stack_2->SetBinContent(22,0.01226985);
   hext_stack_2->SetBinContent(24,0.01226985);
   hext_stack_2->SetBinContent(26,0.01226985);
   hext_stack_2->SetBinContent(28,0.01226985);
   hext_stack_2->SetBinContent(29,0.1990491);
   hext_stack_2->SetBinContent(30,0.2726682);
   hext_stack_2->SetBinError(0,0.3467226);
   hext_stack_2->SetBinError(2,0.3480228);
   hext_stack_2->SetBinError(3,0.4007367);
   hext_stack_2->SetBinError(4,0.2039061);
   hext_stack_2->SetBinError(5,0.3997964);
   hext_stack_2->SetBinError(6,0.348239);
   hext_stack_2->SetBinError(7,0.5640645);
   hext_stack_2->SetBinError(8,0.4472805);
   hext_stack_2->SetBinError(9,0.4466068);
   hext_stack_2->SetBinError(10,0.4472805);
   hext_stack_2->SetBinError(11,0.5660627);
   hext_stack_2->SetBinError(12,0.284953);
   hext_stack_2->SetBinError(13,0.4888023);
   hext_stack_2->SetBinError(14,0.529201);
   hext_stack_2->SetBinError(15,0.6313591);
   hext_stack_2->SetBinError(16,0.2027956);
   hext_stack_2->SetBinError(17,0.2828318);
   hext_stack_2->SetBinError(18,0.02743622);
   hext_stack_2->SetBinError(20,0.2817652);
   hext_stack_2->SetBinError(21,0.02125201);
   hext_stack_2->SetBinError(22,0.01226985);
   hext_stack_2->SetBinError(24,0.01226985);
   hext_stack_2->SetBinError(26,0.01226985);
   hext_stack_2->SetBinError(28,0.01226985);
   hext_stack_2->SetBinError(29,0.1990491);
   hext_stack_2->SetBinError(30,0.2013053);
   hext_stack_2->SetEntries(312);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hdirt_stack_3->SetBinContent(0,0.04420907);
   hdirt_stack_3->SetBinContent(2,0.04420907);
   hdirt_stack_3->SetBinContent(3,0.06286905);
   hdirt_stack_3->SetBinContent(4,0.1938546);
   hdirt_stack_3->SetBinContent(5,0.1228428);
   hdirt_stack_3->SetBinContent(6,0.1303955);
   hdirt_stack_3->SetBinContent(7,0.1631743);
   hdirt_stack_3->SetBinContent(8,0.009838338);
   hdirt_stack_3->SetBinContent(9,0.01643923);
   hdirt_stack_3->SetBinContent(10,0.05407806);
   hdirt_stack_3->SetBinContent(12,0.4670875);
   hdirt_stack_3->SetBinContent(13,0.06886792);
   hdirt_stack_3->SetBinContent(14,0.07920298);
   hdirt_stack_3->SetBinContent(15,0.06064831);
   hdirt_stack_3->SetBinContent(20,0.009448108);
   hdirt_stack_3->SetBinContent(30,0.04420907);
   hdirt_stack_3->SetBinError(0,0.04420907);
   hdirt_stack_3->SetBinError(2,0.04420907);
   hdirt_stack_3->SetBinError(3,0.05383113);
   hdirt_stack_3->SetBinError(4,0.09269794);
   hdirt_stack_3->SetBinError(5,0.06924118);
   hdirt_stack_3->SetBinError(6,0.07174087);
   hdirt_stack_3->SetBinError(7,0.08137146);
   hdirt_stack_3->SetBinError(8,0.009838337);
   hdirt_stack_3->SetBinError(9,0.01162429);
   hdirt_stack_3->SetBinError(10,0.04529723);
   hdirt_stack_3->SetBinError(12,0.3098265);
   hdirt_stack_3->SetBinError(13,0.04644489);
   hdirt_stack_3->SetBinError(14,0.04915495);
   hdirt_stack_3->SetBinError(15,0.04571177);
   hdirt_stack_3->SetBinError(20,0.009448109);
   hdirt_stack_3->SetBinError(30,0.04420907);
   hdirt_stack_3->SetEntries(54);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   houtFV_stack_4->SetBinContent(0,0.9481446);
   houtFV_stack_4->SetBinContent(2,0.9201835);
   houtFV_stack_4->SetBinContent(3,1.234305);
   houtFV_stack_4->SetBinContent(4,0.561196);
   houtFV_stack_4->SetBinContent(5,0.646858);
   houtFV_stack_4->SetBinContent(6,0.9612278);
   houtFV_stack_4->SetBinContent(7,1.454141);
   houtFV_stack_4->SetBinContent(8,0.7632997);
   houtFV_stack_4->SetBinContent(9,1.244541);
   houtFV_stack_4->SetBinContent(10,1.012302);
   houtFV_stack_4->SetBinContent(11,1.451034);
   houtFV_stack_4->SetBinContent(12,1.357467);
   houtFV_stack_4->SetBinContent(13,1.596415);
   houtFV_stack_4->SetBinContent(14,1.389438);
   houtFV_stack_4->SetBinContent(15,1.326015);
   houtFV_stack_4->SetBinContent(16,0.7487271);
   houtFV_stack_4->SetBinContent(17,0.2988259);
   houtFV_stack_4->SetBinContent(18,0.1986191);
   houtFV_stack_4->SetBinContent(20,0.2238959);
   houtFV_stack_4->SetBinContent(21,0.1380235);
   houtFV_stack_4->SetBinContent(22,0.1858689);
   houtFV_stack_4->SetBinContent(23,0.07470649);
   houtFV_stack_4->SetBinContent(25,0.1858689);
   houtFV_stack_4->SetBinContent(26,0.02550039);
   houtFV_stack_4->SetBinContent(27,0.1366628);
   houtFV_stack_4->SetBinContent(28,0.1366628);
   houtFV_stack_4->SetBinContent(29,0.07470649);
   houtFV_stack_4->SetBinContent(30,0.3896498);
   houtFV_stack_4->SetBinError(0,0.2321693);
   houtFV_stack_4->SetBinError(2,0.2266378);
   houtFV_stack_4->SetBinError(3,0.2524076);
   houtFV_stack_4->SetBinError(4,0.1688068);
   houtFV_stack_4->SetBinError(5,0.1889053);
   houtFV_stack_4->SetBinError(6,0.2378083);
   houtFV_stack_4->SetBinError(7,0.2929661);
   houtFV_stack_4->SetBinError(8,0.2006865);
   houtFV_stack_4->SetBinError(9,0.2632089);
   houtFV_stack_4->SetBinError(10,0.238117);
   houtFV_stack_4->SetBinError(11,0.286007);
   houtFV_stack_4->SetBinError(12,0.2686694);
   houtFV_stack_4->SetBinError(13,0.295785);
   houtFV_stack_4->SetBinError(14,0.2787985);
   houtFV_stack_4->SetBinError(15,0.265428);
   houtFV_stack_4->SetBinError(16,0.2076953);
   houtFV_stack_4->SetBinError(17,0.1265093);
   houtFV_stack_4->SetBinError(18,0.1080662);
   houtFV_stack_4->SetBinError(20,0.1164045);
   houtFV_stack_4->SetBinError(21,0.0981061);
   houtFV_stack_4->SetBinError(22,0.1073114);
   houtFV_stack_4->SetBinError(23,0.06325464);
   houtFV_stack_4->SetBinError(25,0.1073114);
   houtFV_stack_4->SetBinError(26,0.0180315);
   houtFV_stack_4->SetBinError(27,0.08854226);
   houtFV_stack_4->SetBinError(28,0.08854226);
   houtFV_stack_4->SetBinError(29,0.06325464);
   houtFV_stack_4->SetBinError(30,0.142357);
   houtFV_stack_4->SetEntries(494);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hNCpi0inFV_stack_5->SetBinContent(0,3.062966);
   hNCpi0inFV_stack_5->SetBinContent(2,2.552771);
   hNCpi0inFV_stack_5->SetBinContent(3,3.5385);
   hNCpi0inFV_stack_5->SetBinContent(4,3.706234);
   hNCpi0inFV_stack_5->SetBinContent(5,3.070145);
   hNCpi0inFV_stack_5->SetBinContent(6,4.49155);
   hNCpi0inFV_stack_5->SetBinContent(7,6.107798);
   hNCpi0inFV_stack_5->SetBinContent(8,6.734539);
   hNCpi0inFV_stack_5->SetBinContent(9,7.470649);
   hNCpi0inFV_stack_5->SetBinContent(10,10.34454);
   hNCpi0inFV_stack_5->SetBinContent(11,13.67147);
   hNCpi0inFV_stack_5->SetBinContent(12,17.8676);
   hNCpi0inFV_stack_5->SetBinContent(13,20.96882);
   hNCpi0inFV_stack_5->SetBinContent(14,20.35123);
   hNCpi0inFV_stack_5->SetBinContent(15,14.49665);
   hNCpi0inFV_stack_5->SetBinContent(16,7.333986);
   hNCpi0inFV_stack_5->SetBinContent(17,3.658823);
   hNCpi0inFV_stack_5->SetBinContent(18,2.601977);
   hNCpi0inFV_stack_5->SetBinContent(19,1.557881);
   hNCpi0inFV_stack_5->SetBinContent(20,1.284555);
   hNCpi0inFV_stack_5->SetBinContent(21,0.7743599);
   hNCpi0inFV_stack_5->SetBinContent(22,0.7835208);
   hNCpi0inFV_stack_5->SetBinContent(23,0.8889714);
   hNCpi0inFV_stack_5->SetBinContent(24,0.9839345);
   hNCpi0inFV_stack_5->SetBinContent(25,0.7707705);
   hNCpi0inFV_stack_5->SetBinContent(26,0.8199767);
   hNCpi0inFV_stack_5->SetBinContent(27,0.6851086);
   hNCpi0inFV_stack_5->SetBinContent(28,0.4482389);
   hNCpi0inFV_stack_5->SetBinContent(29,0.3607822);
   hNCpi0inFV_stack_5->SetBinContent(30,3.698868);
   hNCpi0inFV_stack_5->SetBinError(0,0.4050273);
   hNCpi0inFV_stack_5->SetBinError(2,0.3690551);
   hNCpi0inFV_stack_5->SetBinError(3,0.4305269);
   hNCpi0inFV_stack_5->SetBinError(4,0.453634);
   hNCpi0inFV_stack_5->SetBinError(5,0.3898001);
   hNCpi0inFV_stack_5->SetBinError(6,0.4962691);
   hNCpi0inFV_stack_5->SetBinError(7,0.5805247);
   hNCpi0inFV_stack_5->SetBinError(8,0.6027369);
   hNCpi0inFV_stack_5->SetBinError(9,0.6325464);
   hNCpi0inFV_stack_5->SetBinError(10,0.7537502);
   hNCpi0inFV_stack_5->SetBinError(11,0.8680744);
   hNCpi0inFV_stack_5->SetBinError(12,0.9779761);
   hNCpi0inFV_stack_5->SetBinError(13,1.05876);
   hNCpi0inFV_stack_5->SetBinError(14,1.049239);
   hNCpi0inFV_stack_5->SetBinError(15,0.8775942);
   hNCpi0inFV_stack_5->SetBinError(16,0.6263188);
   hNCpi0inFV_stack_5->SetBinError(17,0.4461861);
   hNCpi0inFV_stack_5->SetBinError(18,0.3740022);
   hNCpi0inFV_stack_5->SetBinError(19,0.2843164);
   hNCpi0inFV_stack_5->SetBinError(20,0.2552574);
   hNCpi0inFV_stack_5->SetBinError(21,0.1931603);
   hNCpi0inFV_stack_5->SetBinError(22,0.2086263);
   hNCpi0inFV_stack_5->SetBinError(23,0.211956);
   hNCpi0inFV_stack_5->SetBinError(24,0.228424);
   hNCpi0inFV_stack_5->SetBinError(25,0.2082363);
   hNCpi0inFV_stack_5->SetBinError(26,0.2168834);
   hNCpi0inFV_stack_5->SetBinError(27,0.1901918);
   hNCpi0inFV_stack_5->SetBinError(28,0.1549416);
   hNCpi0inFV_stack_5->SetBinError(29,0.1408658);
   hNCpi0inFV_stack_5->SetBinError(30,0.4433329);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hCCpi0inFV_stack_6->SetBinContent(0,0.7663739);
   hCCpi0inFV_stack_6->SetBinContent(2,0.8276715);
   hCCpi0inFV_stack_6->SetBinContent(3,0.7528604);
   hCCpi0inFV_stack_6->SetBinContent(4,1.023378);
   hCCpi0inFV_stack_6->SetBinContent(5,1.642282);
   hCCpi0inFV_stack_6->SetBinContent(6,1.353878);
   hCCpi0inFV_stack_6->SetBinContent(7,2.2139);
   hCCpi0inFV_stack_6->SetBinContent(8,1.834662);
   hCCpi0inFV_stack_6->SetBinContent(9,1.89359);
   hCCpi0inFV_stack_6->SetBinContent(10,2.810583);
   hCCpi0inFV_stack_6->SetBinContent(11,4.102811);
   hCCpi0inFV_stack_6->SetBinContent(12,3.252424);
   hCCpi0inFV_stack_6->SetBinContent(13,4.777293);
   hCCpi0inFV_stack_6->SetBinContent(14,4.683868);
   hCCpi0inFV_stack_6->SetBinContent(15,4.838394);
   hCCpi0inFV_stack_6->SetBinContent(16,2.198663);
   hCCpi0inFV_stack_6->SetBinContent(17,1.553305);
   hCCpi0inFV_stack_6->SetBinContent(18,0.813319);
   hCCpi0inFV_stack_6->SetBinContent(19,1.393112);
   hCCpi0inFV_stack_6->SetBinContent(20,0.4640524);
   hCCpi0inFV_stack_6->SetBinContent(21,0.3498267);
   hCCpi0inFV_stack_6->SetBinContent(22,0.6336246);
   hCCpi0inFV_stack_6->SetBinContent(23,0.6341078);
   hCCpi0inFV_stack_6->SetBinContent(24,0.6439698);
   hCCpi0inFV_stack_6->SetBinContent(25,0.4864895);
   hCCpi0inFV_stack_6->SetBinContent(26,0.3480321);
   hCCpi0inFV_stack_6->SetBinContent(27,0.4182117);
   hCCpi0inFV_stack_6->SetBinContent(28,0.3607822);
   hCCpi0inFV_stack_6->SetBinContent(29,0.26237);
   hCCpi0inFV_stack_6->SetBinContent(30,3.480111);
   hCCpi0inFV_stack_6->SetBinError(0,0.2015492);
   hCCpi0inFV_stack_6->SetBinError(2,0.2101941);
   hCCpi0inFV_stack_6->SetBinError(3,0.1926234);
   hCCpi0inFV_stack_6->SetBinError(4,0.2332913);
   hCCpi0inFV_stack_6->SetBinError(5,0.306825);
   hCCpi0inFV_stack_6->SetBinError(6,0.2797048);
   hCCpi0inFV_stack_6->SetBinError(7,0.3503357);
   hCCpi0inFV_stack_6->SetBinError(8,0.3140438);
   hCCpi0inFV_stack_6->SetBinError(9,0.3167079);
   hCCpi0inFV_stack_6->SetBinError(10,0.3951967);
   hCCpi0inFV_stack_6->SetBinError(11,0.4737486);
   hCCpi0inFV_stack_6->SetBinError(12,0.4117176);
   hCCpi0inFV_stack_6->SetBinError(13,0.5162748);
   hCCpi0inFV_stack_6->SetBinError(14,0.5013834);
   hCCpi0inFV_stack_6->SetBinError(15,0.5242097);
   hCCpi0inFV_stack_6->SetBinError(16,0.3419905);
   hCCpi0inFV_stack_6->SetBinError(17,0.2971882);
   hCCpi0inFV_stack_6->SetBinError(18,0.2022237);
   hCCpi0inFV_stack_6->SetBinError(19,0.2836377);
   hCCpi0inFV_stack_6->SetBinError(20,0.1557465);
   hCCpi0inFV_stack_6->SetBinError(21,0.1290537);
   hCCpi0inFV_stack_6->SetBinError(22,0.1884424);
   hCCpi0inFV_stack_6->SetBinError(23,0.1884745);
   hCCpi0inFV_stack_6->SetBinError(24,0.1919425);
   hCCpi0inFV_stack_6->SetBinError(25,0.1565075);
   hCCpi0inFV_stack_6->SetBinError(26,0.1402876);
   hCCpi0inFV_stack_6->SetBinError(27,0.1617893);
   hCCpi0inFV_stack_6->SetBinError(28,0.1408658);
   hCCpi0inFV_stack_6->SetBinError(29,0.1117638);
   hCCpi0inFV_stack_6->SetBinError(30,0.4297577);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hNCinFV_stack_7->SetBinContent(0,0.8982725);
   hNCinFV_stack_7->SetBinContent(2,0.6359025);
   hNCinFV_stack_7->SetBinContent(3,0.8327268);
   hNCinFV_stack_7->SetBinContent(4,0.6486527);
   hNCinFV_stack_7->SetBinContent(5,0.8108159);
   hNCinFV_stack_7->SetBinContent(6,0.497445);
   hNCinFV_stack_7->SetBinContent(7,0.646858);
   hNCinFV_stack_7->SetBinContent(8,0.5484458);
   hNCinFV_stack_7->SetBinContent(9,0.5594013);
   hNCinFV_stack_7->SetBinContent(10,0.9074333);
   hNCinFV_stack_7->SetBinContent(11,0.9838996);
   hNCinFV_stack_7->SetBinContent(12,0.5739462);
   hNCinFV_stack_7->SetBinContent(13,0.6833139);
   hNCinFV_stack_7->SetBinContent(14,0.497445);
   hNCinFV_stack_7->SetBinContent(15,0.6723584);
   hNCinFV_stack_7->SetBinContent(16,0.4737393);
   hNCinFV_stack_7->SetBinContent(17,0.1749134);
   hNCinFV_stack_7->SetBinContent(18,0.2478252);
   hNCinFV_stack_7->SetBinContent(19,0.07470649);
   hNCinFV_stack_7->SetBinContent(20,0.2113693);
   hNCinFV_stack_7->SetBinContent(21,0.07470649);
   hNCinFV_stack_7->SetBinContent(22,0.03825059);
   hNCinFV_stack_7->SetBinContent(23,0.07470649);
   hNCinFV_stack_7->SetBinContent(24,0.1986191);
   hNCinFV_stack_7->SetBinContent(26,0.02550039);
   hNCinFV_stack_7->SetBinContent(27,0.07470649);
   hNCinFV_stack_7->SetBinContent(29,0.0127502);
   hNCinFV_stack_7->SetBinContent(30,1.705499);
   hNCinFV_stack_7->SetBinError(0,0.2121039);
   hNCinFV_stack_7->SetBinError(2,0.180269);
   hNCinFV_stack_7->SetBinError(3,0.2172578);
   hNCinFV_stack_7->SetBinError(4,0.1807193);
   hNCinFV_stack_7->SetBinError(5,0.2020503);
   hNCinFV_stack_7->SetBinError(6,0.1663818);
   hNCinFV_stack_7->SetBinError(7,0.1889053);
   hNCinFV_stack_7->SetBinError(8,0.1683246);
   hNCinFV_stack_7->SetBinError(9,0.1775429);
   hNCinFV_stack_7->SetBinError(10,0.2262788);
   hNCinFV_stack_7->SetBinError(11,0.2349603);
   hNCinFV_stack_7->SetBinError(12,0.1692877);
   hNCinFV_stack_7->SetBinError(13,0.1979865);
   hNCinFV_stack_7->SetBinError(14,0.1663818);
   hNCinFV_stack_7->SetBinError(15,0.1897639);
   hNCinFV_stack_7->SetBinError(16,0.1559873);
   hNCinFV_stack_7->SetBinError(17,0.09125478);
   hNCinFV_stack_7->SetBinError(18,0.1239126);
   hNCinFV_stack_7->SetBinError(19,0.06325464);
   hNCinFV_stack_7->SetBinError(20,0.1088158);
   hNCinFV_stack_7->SetBinError(21,0.06325464);
   hNCinFV_stack_7->SetBinError(22,0.02208399);
   hNCinFV_stack_7->SetBinError(23,0.06325464);
   hNCinFV_stack_7->SetBinError(24,0.1080662);
   hNCinFV_stack_7->SetBinError(26,0.0180315);
   hNCinFV_stack_7->SetBinError(27,0.06325464);
   hNCinFV_stack_7->SetBinError(29,0.0127502);
   hNCinFV_stack_7->SetBinError(30,0.3030905);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hnumuCCinFV_stack_8->SetBinContent(0,1.796332);
   hnumuCCinFV_stack_8->SetBinContent(2,1.795152);
   hnumuCCinFV_stack_8->SetBinContent(3,1.719459);
   hnumuCCinFV_stack_8->SetBinContent(4,1.503026);
   hnumuCCinFV_stack_8->SetBinContent(5,1.29837);
   hnumuCCinFV_stack_8->SetBinContent(6,1.7626);
   hnumuCCinFV_stack_8->SetBinContent(7,2.397541);
   hnumuCCinFV_stack_8->SetBinContent(8,1.898782);
   hnumuCCinFV_stack_8->SetBinContent(9,1.989419);
   hnumuCCinFV_stack_8->SetBinContent(10,1.518838);
   hnumuCCinFV_stack_8->SetBinContent(11,2.12803);
   hnumuCCinFV_stack_8->SetBinContent(12,0.903192);
   hnumuCCinFV_stack_8->SetBinContent(13,1.425752);
   hnumuCCinFV_stack_8->SetBinContent(14,1.349059);
   hnumuCCinFV_stack_8->SetBinContent(15,0.7840837);
   hnumuCCinFV_stack_8->SetBinContent(16,0.62456);
   hnumuCCinFV_stack_8->SetBinContent(17,0.4315248);
   hnumuCCinFV_stack_8->SetBinContent(18,0.2368697);
   hnumuCCinFV_stack_8->SetBinContent(19,0.2290778);
   hnumuCCinFV_stack_8->SetBinContent(20,0.2227713);
   hnumuCCinFV_stack_8->SetBinContent(21,0.1749134);
   hnumuCCinFV_stack_8->SetBinContent(22,0.3239524);
   hnumuCCinFV_stack_8->SetBinContent(23,0.2593898);
   hnumuCCinFV_stack_8->SetBinContent(24,0.02550045);
   hnumuCCinFV_stack_8->SetBinContent(25,0.2545804);
   hnumuCCinFV_stack_8->SetBinContent(27,0.02756554);
   hnumuCCinFV_stack_8->SetBinContent(28,0.08745668);
   hnumuCCinFV_stack_8->SetBinContent(29,0.07539791);
   hnumuCCinFV_stack_8->SetBinContent(30,1.318032);
   hnumuCCinFV_stack_8->SetBinError(0,0.3468508);
   hnumuCCinFV_stack_8->SetBinError(2,0.4606929);
   hnumuCCinFV_stack_8->SetBinError(3,0.4870627);
   hnumuCCinFV_stack_8->SetBinError(4,0.4862518);
   hnumuCCinFV_stack_8->SetBinError(5,0.2816076);
   hnumuCCinFV_stack_8->SetBinError(6,0.5356686);
   hnumuCCinFV_stack_8->SetBinError(7,0.4452574);
   hnumuCCinFV_stack_8->SetBinError(8,0.3484604);
   hnumuCCinFV_stack_8->SetBinError(9,0.3503372);
   hnumuCCinFV_stack_8->SetBinError(10,0.3026553);
   hnumuCCinFV_stack_8->SetBinError(11,0.4319125);
   hnumuCCinFV_stack_8->SetBinError(12,0.3045929);
   hnumuCCinFV_stack_8->SetBinError(13,0.3819921);
   hnumuCCinFV_stack_8->SetBinError(14,0.279239);
   hnumuCCinFV_stack_8->SetBinError(15,0.2199786);
   hnumuCCinFV_stack_8->SetBinError(16,0.1865018);
   hnumuCCinFV_stack_8->SetBinError(17,0.1648279);
   hnumuCCinFV_stack_8->SetBinError(18,0.1102997);
   hnumuCCinFV_stack_8->SetBinError(19,0.1178907);
   hnumuCCinFV_stack_8->SetBinError(20,0.1156881);
   hnumuCCinFV_stack_8->SetBinError(21,0.09125478);
   hnumuCCinFV_stack_8->SetBinError(22,0.1454293);
   hnumuCCinFV_stack_8->SetBinError(23,0.1651531);
   hnumuCCinFV_stack_8->SetBinError(24,0.0180315);
   hnumuCCinFV_stack_8->SetBinError(25,0.1525441);
   hnumuCCinFV_stack_8->SetBinError(27,0.0195464);
   hnumuCCinFV_stack_8->SetBinError(28,0.06452687);
   hnumuCCinFV_stack_8->SetBinError(29,0.07539791);
   hnumuCCinFV_stack_8->SetBinError(30,0.2728003);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hnueCCinFV_stack_9->SetBinContent(0,0.07654906);
   hnueCCinFV_stack_9->SetBinContent(2,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(3,0.07394372);
   hnueCCinFV_stack_9->SetBinContent(4,0.01437801);
   hnueCCinFV_stack_9->SetBinContent(5,0.07578161);
   hnueCCinFV_stack_9->SetBinContent(6,0.08682881);
   hnueCCinFV_stack_9->SetBinContent(7,0.04858173);
   hnueCCinFV_stack_9->SetBinContent(8,0.01449376);
   hnueCCinFV_stack_9->SetBinContent(9,0.01369573);
   hnueCCinFV_stack_9->SetBinContent(11,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(12,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.151809);
   hnueCCinFV_stack_9->SetBinContent(15,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(20,0.07948712);
   hnueCCinFV_stack_9->SetBinContent(21,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(23,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(25,0.02551418);
   hnueCCinFV_stack_9->SetBinContent(30,0.1366628);
   hnueCCinFV_stack_9->SetBinError(0,0.06365164);
   hnueCCinFV_stack_9->SetBinError(2,0.0127502);
   hnueCCinFV_stack_9->SetBinError(3,0.06310531);
   hnueCCinFV_stack_9->SetBinError(4,0.01437801);
   hnueCCinFV_stack_9->SetBinError(5,0.06348009);
   hnueCCinFV_stack_9->SetBinError(6,0.07516787);
   hnueCCinFV_stack_9->SetBinError(7,0.04858173);
   hnueCCinFV_stack_9->SetBinError(8,0.01449376);
   hnueCCinFV_stack_9->SetBinError(9,0.01369573);
   hnueCCinFV_stack_9->SetBinError(11,0.0180315);
   hnueCCinFV_stack_9->SetBinError(12,0.0127502);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.08982838);
   hnueCCinFV_stack_9->SetBinError(15,0.08761943);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(20,0.07948712);
   hnueCCinFV_stack_9->SetBinError(21,0.06195629);
   hnueCCinFV_stack_9->SetBinError(23,0.06325464);
   hnueCCinFV_stack_9->SetBinError(25,0.01803151);
   hnueCCinFV_stack_9->SetBinError(30,0.08854226);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);
   hmcerror__5->SetBinContent(0,8.503307);
   hmcerror__5->SetBinContent(2,7.749962);
   hmcerror__5->SetBinContent(3,9.491052);
   hmcerror__5->SetBinContent(4,8.23765);
   hmcerror__5->SetBinContent(5,8.887254);
   hmcerror__5->SetBinContent(6,10.11564);
   hmcerror__5->SetBinContent(7,14.86698);
   hmcerror__5->SetBinContent(8,13.40527);
   hmcerror__5->SetBinContent(9,14.74486);
   hmcerror__5->SetBinContent(10,18.26185);
   hmcerror__5->SetBinContent(11,24.42359);
   hmcerror__5->SetBinContent(12,25.70049);
   hmcerror__5->SetBinContent(13,31.25998);
   hmcerror__5->SetBinContent(14,30.44195);
   hmcerror__5->SetBinContent(15,24.9935);
   hmcerror__5->SetBinContent(16,11.82415);
   hmcerror__5->SetBinContent(17,6.61509);
   hmcerror__5->SetBinContent(18,4.208635);
   hmcerror__5->SetBinContent(19,3.267527);
   hmcerror__5->SetBinContent(20,2.905947);
   hmcerror__5->SetBinContent(21,1.672726);
   hmcerror__5->SetBinContent(22,2.052194);
   hmcerror__5->SetBinContent(23,2.032089);
   hmcerror__5->SetBinContent(24,1.92625);
   hmcerror__5->SetBinContent(25,1.723223);
   hmcerror__5->SetBinContent(26,1.25678);
   hmcerror__5->SetBinContent(27,1.478918);
   hmcerror__5->SetBinContent(28,1.123897);
   hmcerror__5->SetBinContent(29,1.06222);
   hmcerror__5->SetBinContent(30,11.29214);
   hmcerror__5->SetBinError(0,0.7481663);
   hmcerror__5->SetBinError(1,0.125509);
   hmcerror__5->SetBinError(2,2.970418);
   hmcerror__5->SetBinError(3,4.22063);
   hmcerror__5->SetBinError(4,3.396598);
   hmcerror__5->SetBinError(5,3.000747);
   hmcerror__5->SetBinError(6,3.878586);
   hmcerror__5->SetBinError(7,6.3616);
   hmcerror__5->SetBinError(8,5.30268);
   hmcerror__5->SetBinError(9,4.69304);
   hmcerror__5->SetBinError(10,4.938196);
   hmcerror__5->SetBinError(11,7.227815);
   hmcerror__5->SetBinError(12,7.645442);
   hmcerror__5->SetBinError(13,9.398839);
   hmcerror__5->SetBinError(14,8.592219);
   hmcerror__5->SetBinError(15,15.12983);
   hmcerror__5->SetBinError(16,6.767802);
   hmcerror__5->SetBinError(17,3.940789);
   hmcerror__5->SetBinError(18,2.96154);
   hmcerror__5->SetBinError(19,1.69084);
   hmcerror__5->SetBinError(20,1.486375);
   hmcerror__5->SetBinError(21,1.086491);
   hmcerror__5->SetBinError(22,2.739128);
   hmcerror__5->SetBinError(23,2.349584);
   hmcerror__5->SetBinError(24,2.021403);
   hmcerror__5->SetBinError(25,1.538615);
   hmcerror__5->SetBinError(26,1.296839);
   hmcerror__5->SetBinError(27,1.281199);
   hmcerror__5->SetBinError(28,1.204855);
   hmcerror__5->SetBinError(29,0.9487108);
   hmcerror__5->SetBinError(30,5.136661);
   hmcerror__5->SetEntries(300.4418);

   ci = TColor::GetColor("#666666");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3005[29] = {
   0,
   4,
   7,
   13,
   11,
   10,
   12,
   7,
   9,
   14,
   12,
   18,
   27,
   24,
   10,
   3,
   2,
   0,
   0,
   1,
   2,
   1,
   2,
   1,
   0,
   0,
   0,
   2,
   0};
   Double_t _felx3005[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3005[29] = {
   0,
   2.29683,
   2.85954,
   3.77763,
   3.4975,
   3.34883,
   3.64022,
   2.85954,
   3.19354,
   3.9102,
   3.64022,
   4.4008,
   5.3414,
   5.0476,
   3.34883,
   2.143368,
   2,
   0,
   0,
   1,
   2,
   1,
   2,
   1,
   0,
   0,
   0,
   2,
   0};
   Double_t _fehx3005[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3005[29] = {
   1.1478,
   1.98186,
   2.61053,
   3.5552,
   3.27,
   3.1179,
   3.4155,
   2.61053,
   2.9582,
   3.6898,
   3.4155,
   4.1858,
   5.1322,
   4.837,
   3.1179,
   1.72422,
   1.51917,
   1.1478,
   1.1478,
   1.35971,
   1.51917,
   1.35971,
   1.51917,
   1.35971,
   1.1478,
   1.1478,
   1.1478,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,330);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(35.34542);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.67#pm0.05(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.66/29","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 192.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.4","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 18.0","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.5","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 18.3","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  158.3","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 46.6","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 11.2","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 25.4","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.0","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3006[29] = {
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
   1,
   1,
   1,
   1};
   Double_t _felx3006[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3006[29] = {
   0,
   0.3832816,
   0.4446957,
   0.412326,
   0.3376461,
   0.3834247,
   0.4279013,
   0.3955669,
   0.3182831,
   0.2704106,
   0.2959358,
   0.2974824,
   0.3006668,
   0.2822493,
   0.6053504,
   0.5723709,
   0.5957271,
   0.7036817,
   0.5174679,
   0.5114941,
   0.6495332,
   1.334732,
   1.156241,
   1.049398,
   0.8928704,
   1.031875,
   0.8663084,
   1.072033,
   0.8931393};
   Double_t _fehx3006[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3006[29] = {
   0,
   0.3832816,
   0.4446957,
   0.412326,
   0.3376461,
   0.3834247,
   0.4279013,
   0.3955669,
   0.3182831,
   0.2704106,
   0.2959358,
   0.2974824,
   0.3006668,
   0.2822493,
   0.6053504,
   0.5723709,
   0.5957271,
   0.7036817,
   0.5174679,
   0.5114941,
   0.6495332,
   1.334732,
   1.156241,
   1.049398,
   0.8928704,
   1.031875,
   0.8663084,
   1.072033,
   0.8931393};
   grae = new TGraphAsymmErrors(29,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,330);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3007[29] = {
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
   1,
   1,
   1,
   1};
   Double_t _felx3007[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3007[29] = {
   0,
   0.2122273,
   0.1972653,
   0.2174418,
   0.2120047,
   0.2305153,
   0.1976432,
   0.2043493,
   0.2061548,
   0.2165438,
   0.2248251,
   0.247895,
   0.2289131,
   0.2245042,
   0.2214141,
   0.2381558,
   0.2143572,
   0.266815,
   0.270693,
   0.2633632,
   0.2891342,
   0.3265252,
   0.3357199,
   0.2887991,
   0.3577166,
   0.35511,
   0.3641077,
   0.3638503,
   0.3698588};
   Double_t _fehx3007[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3007[29] = {
   0,
   0.2122273,
   0.1972653,
   0.2174418,
   0.2120047,
   0.2305153,
   0.1976432,
   0.2043493,
   0.2061548,
   0.2165438,
   0.2248251,
   0.247895,
   0.2289131,
   0.2245042,
   0.2214141,
   0.2381558,
   0.2143572,
   0.266815,
   0.270693,
   0.2633632,
   0.2891342,
   0.3265252,
   0.3357199,
   0.2887991,
   0.3577166,
   0.35511,
   0.3641077,
   0.3638503,
   0.3698588};
   grae = new TGraphAsymmErrors(29,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,330);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3008[29] = {
   10,
   0.5161315,
   0.7375368,
   1.57812,
   1.237728,
   0.9885682,
   0.8071579,
   0.5221829,
   0.6103822,
   0.7666257,
   0.4913283,
   0.7003758,
   0.8637242,
   0.7883858,
   0.400104,
   0.2537179,
   0.3023391,
   0,
   0,
   0.3441218,
   1.195653,
   0.4872835,
   0.9842089,
   0.5191434,
   0,
   0,
   0,
   1.779522,
   0};
   Double_t _felx3008[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3008[29] = {
   0,
   0.2963666,
   0.301288,
   0.458581,
   0.3935411,
   0.3310547,
   0.2448527,
   0.2133147,
   0.2165867,
   0.2141185,
   0.1490452,
   0.1712341,
   0.1708702,
   0.1658107,
   0.133988,
   0.1812703,
   0.3023391,
   0,
   0,
   0.3441218,
   1.195653,
   0.4872835,
   0.9842089,
   0.5191434,
   0,
   0,
   0,
   1.779522,
   0};
   Double_t _fehx3008[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3008[29] = {
   0,
   0.2557251,
   0.2750517,
   0.4315794,
   0.3679427,
   0.3082257,
   0.2297373,
   0.1947391,
   0.2006258,
   0.2020497,
   0.1398443,
   0.1628685,
   0.164178,
   0.1588926,
   0.1247484,
   0.1458219,
   0.2296522,
   0.272725,
   0.3512748,
   0.4679059,
   0.9082004,
   0.6625642,
   0.7475903,
   0.7058845,
   0.6660773,
   0.9132865,
   0.776108,
   1.351698,
   1.080567};
   grae = new TGraphAsymmErrors(29,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,330);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_pi0_mass_all",29,0,300);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sun Oct 23 18:44:00 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
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
   pad1->Range(-61.53846,-6.26,451.2821,692.2242);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__16->SetBinContent(1,50.06828);
   hmc__16->SetBinContent(2,89.26794);
   hmc__16->SetBinContent(3,110.0014);
   hmc__16->SetBinContent(4,119.6313);
   hmc__16->SetBinContent(5,119.4479);
   hmc__16->SetBinContent(6,128.5598);
   hmc__16->SetBinContent(7,131.5169);
   hmc__16->SetBinContent(8,137.6233);
   hmc__16->SetBinContent(9,166.5905);
   hmc__16->SetBinContent(10,207.8602);
   hmc__16->SetBinContent(11,236.6996);
   hmc__16->SetBinContent(12,263.2766);
   hmc__16->SetBinContent(13,247.7464);
   hmc__16->SetBinContent(14,174.9881);
   hmc__16->SetBinContent(15,105.4104);
   hmc__16->SetBinContent(16,70.15272);
   hmc__16->SetBinContent(17,52.67934);
   hmc__16->SetBinContent(18,38.53666);
   hmc__16->SetBinContent(19,37.12444);
   hmc__16->SetBinContent(20,33.18735);
   hmc__16->SetBinContent(21,30.67348);
   hmc__16->SetBinContent(22,21.58171);
   hmc__16->SetBinContent(23,21.50882);
   hmc__16->SetBinContent(24,19.66317);
   hmc__16->SetBinContent(25,14.57137);
   hmc__16->SetBinContent(26,13.55676);
   hmc__16->SetBinContent(27,15.46688);
   hmc__16->SetBinContent(28,11.63819);
   hmc__16->SetBinContent(29,11.42033);
   hmc__16->SetBinContent(30,12.00472);
   hmc__16->SetBinContent(31,8.573576);
   hmc__16->SetBinContent(32,9.541078);
   hmc__16->SetBinContent(33,5.816422);
   hmc__16->SetBinContent(34,6.667308);
   hmc__16->SetBinContent(35,72.84293);
   hmc__16->SetBinError(1,17.40626);
   hmc__16->SetBinError(2,27.64876);
   hmc__16->SetBinError(3,31.95995);
   hmc__16->SetBinError(4,35.52026);
   hmc__16->SetBinError(5,38.26703);
   hmc__16->SetBinError(6,35.18131);
   hmc__16->SetBinError(7,50.05423);
   hmc__16->SetBinError(8,36.06012);
   hmc__16->SetBinError(9,48.34488);
   hmc__16->SetBinError(10,62.09034);
   hmc__16->SetBinError(11,65.51614);
   hmc__16->SetBinError(12,69.27985);
   hmc__16->SetBinError(13,62.94198);
   hmc__16->SetBinError(14,46.04436);
   hmc__16->SetBinError(15,34.29298);
   hmc__16->SetBinError(16,21.59842);
   hmc__16->SetBinError(17,20.42651);
   hmc__16->SetBinError(18,16.1195);
   hmc__16->SetBinError(19,13.52853);
   hmc__16->SetBinError(20,17.75127);
   hmc__16->SetBinError(21,12.56174);
   hmc__16->SetBinError(22,10.22006);
   hmc__16->SetBinError(23,11.64982);
   hmc__16->SetBinError(24,9.172345);
   hmc__16->SetBinError(25,10.4133);
   hmc__16->SetBinError(26,8.260716);
   hmc__16->SetBinError(27,8.788603);
   hmc__16->SetBinError(28,8.447235);
   hmc__16->SetBinError(29,9.971325);
   hmc__16->SetBinError(30,8.078046);
   hmc__16->SetBinError(31,6.685196);
   hmc__16->SetBinError(32,8.208423);
   hmc__16->SetBinError(33,5.223211);
   hmc__16->SetBinError(34,8.283265);
   hmc__16->SetBinError(35,23.95064);
   hmc__16->SetMinimum(-6.26);
   hmc__16->SetMaximum(657.3);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",34,0,400);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(276.4404);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.703874);
   hbadmatch_stack_1->SetBinContent(2,3.635103);
   hbadmatch_stack_1->SetBinContent(3,4.037569);
   hbadmatch_stack_1->SetBinContent(4,3.176181);
   hbadmatch_stack_1->SetBinContent(5,3.685884);
   hbadmatch_stack_1->SetBinContent(6,4.693262);
   hbadmatch_stack_1->SetBinContent(7,5.745879);
   hbadmatch_stack_1->SetBinContent(8,3.463094);
   hbadmatch_stack_1->SetBinContent(9,4.35616);
   hbadmatch_stack_1->SetBinContent(10,4.196142);
   hbadmatch_stack_1->SetBinContent(11,2.333957);
   hbadmatch_stack_1->SetBinContent(12,6.73472);
   hbadmatch_stack_1->SetBinContent(13,3.509616);
   hbadmatch_stack_1->SetBinContent(14,4.839244);
   hbadmatch_stack_1->SetBinContent(15,2.750406);
   hbadmatch_stack_1->SetBinContent(16,0.9097561);
   hbadmatch_stack_1->SetBinContent(17,1.26712);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,0.7698135);
   hbadmatch_stack_1->SetBinContent(23,0.1199161);
   hbadmatch_stack_1->SetBinContent(26,0.3998213);
   hbadmatch_stack_1->SetBinContent(33,0.3917402);
   hbadmatch_stack_1->SetBinContent(35,0.5610657);
   hbadmatch_stack_1->SetBinError(1,0.8083349);
   hbadmatch_stack_1->SetBinError(2,1.04829);
   hbadmatch_stack_1->SetBinError(3,0.993466);
   hbadmatch_stack_1->SetBinError(4,0.8659338);
   hbadmatch_stack_1->SetBinError(5,0.9419076);
   hbadmatch_stack_1->SetBinError(6,1.134779);
   hbadmatch_stack_1->SetBinError(7,1.245761);
   hbadmatch_stack_1->SetBinError(8,1.185051);
   hbadmatch_stack_1->SetBinError(9,1.088747);
   hbadmatch_stack_1->SetBinError(10,1.081637);
   hbadmatch_stack_1->SetBinError(11,0.827696);
   hbadmatch_stack_1->SetBinError(12,2.068805);
   hbadmatch_stack_1->SetBinError(13,1.040728);
   hbadmatch_stack_1->SetBinError(14,1.806612);
   hbadmatch_stack_1->SetBinError(15,0.9733451);
   hbadmatch_stack_1->SetBinError(16,0.5329788);
   hbadmatch_stack_1->SetBinError(17,0.5883944);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.4680361);
   hbadmatch_stack_1->SetBinError(23,0.1199161);
   hbadmatch_stack_1->SetBinError(26,0.3998213);
   hbadmatch_stack_1->SetBinError(33,0.2770047);
   hbadmatch_stack_1->SetBinError(35,0.5610657);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,10.16768);
   hext_stack_2->SetBinContent(2,13.07731);
   hext_stack_2->SetBinContent(3,25.92678);
   hext_stack_2->SetBinContent(4,23.00998);
   hext_stack_2->SetBinContent(5,15.5528);
   hext_stack_2->SetBinContent(6,18.30521);
   hext_stack_2->SetBinContent(7,15.49655);
   hext_stack_2->SetBinContent(8,19.01025);
   hext_stack_2->SetBinContent(9,15.54562);
   hext_stack_2->SetBinContent(10,22.09146);
   hext_stack_2->SetBinContent(11,17.28011);
   hext_stack_2->SetBinContent(12,16.7566);
   hext_stack_2->SetBinContent(13,18.33992);
   hext_stack_2->SetBinContent(14,10.11584);
   hext_stack_2->SetBinContent(15,4.221574);
   hext_stack_2->SetBinContent(16,6.165187);
   hext_stack_2->SetBinContent(17,3.972198);
   hext_stack_2->SetBinContent(18,2.916804);
   hext_stack_2->SetBinContent(19,2.263601);
   hext_stack_2->SetBinContent(20,3.405605);
   hext_stack_2->SetBinContent(21,3.786253);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,1.544194);
   hext_stack_2->SetBinContent(24,3.62185);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,1.868591);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinContent(29,0.7309963);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(35,0.8131978);
   hext_stack_2->SetBinError(1,2.264322);
   hext_stack_2->SetBinError(2,2.571339);
   hext_stack_2->SetBinError(3,3.574356);
   hext_stack_2->SetBinError(4,3.390073);
   hext_stack_2->SetBinError(5,2.568601);
   hext_stack_2->SetBinError(6,2.78585);
   hext_stack_2->SetBinError(7,2.463563);
   hext_stack_2->SetBinError(8,2.915476);
   hext_stack_2->SetBinError(9,2.607473);
   hext_stack_2->SetBinError(10,3.146999);
   hext_stack_2->SetBinError(11,2.895207);
   hext_stack_2->SetBinError(12,2.650403);
   hext_stack_2->SetBinError(13,2.982136);
   hext_stack_2->SetBinError(14,2.175708);
   hext_stack_2->SetBinError(15,1.226034);
   hext_stack_2->SetBinError(16,1.571905);
   hext_stack_2->SetBinError(17,1.288106);
   hext_stack_2->SetBinError(18,1.132884);
   hext_stack_2->SetBinError(19,0.9684198);
   hext_stack_2->SetBinError(20,1.228348);
   hext_stack_2->SetBinError(21,1.463777);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,0.7753719);
   hext_stack_2->SetBinError(24,1.422134);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.840497);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetBinError(29,0.5201503);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(35,0.5750177);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.252237);
   hdirt_stack_3->SetBinContent(2,2.671405);
   hdirt_stack_3->SetBinContent(3,1.840369);
   hdirt_stack_3->SetBinContent(4,3.056414);
   hdirt_stack_3->SetBinContent(5,3.635633);
   hdirt_stack_3->SetBinContent(6,1.619061);
   hdirt_stack_3->SetBinContent(7,2.789896);
   hdirt_stack_3->SetBinContent(8,2.455608);
   hdirt_stack_3->SetBinContent(9,2.477219);
   hdirt_stack_3->SetBinContent(10,1.104887);
   hdirt_stack_3->SetBinContent(11,3.722844);
   hdirt_stack_3->SetBinContent(12,2.178008);
   hdirt_stack_3->SetBinContent(13,2.57843);
   hdirt_stack_3->SetBinContent(14,0.8949713);
   hdirt_stack_3->SetBinContent(15,2.110102);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.9769442);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.5862043);
   hdirt_stack_3->SetBinError(2,0.9773925);
   hdirt_stack_3->SetBinError(3,0.7302451);
   hdirt_stack_3->SetBinError(4,0.9271274);
   hdirt_stack_3->SetBinError(5,0.9471577);
   hdirt_stack_3->SetBinError(6,0.6442253);
   hdirt_stack_3->SetBinError(7,0.7719639);
   hdirt_stack_3->SetBinError(8,0.8321032);
   hdirt_stack_3->SetBinError(9,1.234283);
   hdirt_stack_3->SetBinError(10,0.4592811);
   hdirt_stack_3->SetBinError(11,1.117017);
   hdirt_stack_3->SetBinError(12,0.8111669);
   hdirt_stack_3->SetBinError(13,0.7627341);
   hdirt_stack_3->SetBinError(14,0.495829);
   hdirt_stack_3->SetBinError(15,0.8275084);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(20,0.5042685);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(29,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,8.703557);
   houtFV_stack_4->SetBinContent(2,10.89253);
   houtFV_stack_4->SetBinContent(3,15.68151);
   houtFV_stack_4->SetBinContent(4,13.10782);
   houtFV_stack_4->SetBinContent(5,13.49752);
   houtFV_stack_4->SetBinContent(6,17.06342);
   houtFV_stack_4->SetBinContent(7,14.51172);
   houtFV_stack_4->SetBinContent(8,16.71379);
   houtFV_stack_4->SetBinContent(9,18.65088);
   houtFV_stack_4->SetBinContent(10,22.32776);
   houtFV_stack_4->SetBinContent(11,19.98916);
   houtFV_stack_4->SetBinContent(12,21.53309);
   houtFV_stack_4->SetBinContent(13,23.23326);
   houtFV_stack_4->SetBinContent(14,16.93266);
   houtFV_stack_4->SetBinContent(15,8.427486);
   houtFV_stack_4->SetBinContent(16,4.774712);
   houtFV_stack_4->SetBinContent(17,4.778479);
   houtFV_stack_4->SetBinContent(18,3.811351);
   houtFV_stack_4->SetBinContent(19,4.497752);
   houtFV_stack_4->SetBinContent(20,3.554159);
   houtFV_stack_4->SetBinContent(21,2.913262);
   houtFV_stack_4->SetBinContent(22,2.506791);
   houtFV_stack_4->SetBinContent(23,2.212152);
   houtFV_stack_4->SetBinContent(24,0.9252217);
   houtFV_stack_4->SetBinContent(25,1.790766);
   houtFV_stack_4->SetBinContent(26,0.704401);
   houtFV_stack_4->SetBinContent(27,1.520479);
   houtFV_stack_4->SetBinContent(29,0.9685152);
   houtFV_stack_4->SetBinContent(30,0.5867651);
   houtFV_stack_4->SetBinContent(31,0.7498922);
   houtFV_stack_4->SetBinContent(32,0.9553829);
   houtFV_stack_4->SetBinContent(35,5.785989);
   houtFV_stack_4->SetBinError(1,1.569277);
   houtFV_stack_4->SetBinError(2,1.615319);
   houtFV_stack_4->SetBinError(3,2.072446);
   houtFV_stack_4->SetBinError(4,1.848173);
   houtFV_stack_4->SetBinError(5,1.811214);
   houtFV_stack_4->SetBinError(6,2.077292);
   houtFV_stack_4->SetBinError(7,1.825794);
   houtFV_stack_4->SetBinError(8,2.112082);
   houtFV_stack_4->SetBinError(9,2.159149);
   houtFV_stack_4->SetBinError(10,2.332336);
   houtFV_stack_4->SetBinError(11,2.224565);
   houtFV_stack_4->SetBinError(12,2.354643);
   houtFV_stack_4->SetBinError(13,2.400673);
   houtFV_stack_4->SetBinError(14,2.073296);
   houtFV_stack_4->SetBinError(15,1.395021);
   houtFV_stack_4->SetBinError(16,1.033185);
   houtFV_stack_4->SetBinError(17,1.102557);
   houtFV_stack_4->SetBinError(18,1.046569);
   houtFV_stack_4->SetBinError(19,1.000951);
   houtFV_stack_4->SetBinError(20,0.9254117);
   houtFV_stack_4->SetBinError(21,0.8669394);
   houtFV_stack_4->SetBinError(22,0.7484144);
   houtFV_stack_4->SetBinError(23,0.7179185);
   houtFV_stack_4->SetBinError(24,0.5214983);
   houtFV_stack_4->SetBinError(25,0.6639145);
   houtFV_stack_4->SetBinError(26,0.381885);
   houtFV_stack_4->SetBinError(27,0.5898501);
   houtFV_stack_4->SetBinError(29,0.4982929);
   houtFV_stack_4->SetBinError(30,0.3387718);
   houtFV_stack_4->SetBinError(31,0.3820121);
   houtFV_stack_4->SetBinError(32,0.427899);
   houtFV_stack_4->SetBinError(35,1.28803);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.399406);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.973708);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.101643);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.933259);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.655449);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.481533);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.507408);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.886717);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.216761);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.497251);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.908771);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,11.79541);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,11.2531);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,8.015511);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.528871);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.298778);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.713741);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.589922);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.280245);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.450857);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.063317);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.6486011);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.7546476);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.252351);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4992333);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1142903);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.4025692);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.5005244);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5596033);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.09591387);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2591538);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.07406837);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.2292755);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.55291);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.886705);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4158817);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6715332);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5284081);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6334141);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5235767);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4658649);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5158454);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7244828);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7594698);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8669978);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.10745);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.329929);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.2699);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.068729);
   hNCpi0inFVcoh_stack_5->SetBinError(15,1.058392);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6454513);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4887852);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7039544);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4708979);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5008432);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3871556);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3176999);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3201289);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1265239);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2017138);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06333532);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1923191);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2833044);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2608273);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.05918372);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1150878);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.05571912);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1513713);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3451981);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.5448233);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.06537335);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1532855);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06773257);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1002558);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1041077);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4346843);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2400576);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.09628156);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1957387);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4372665);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7338475);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5128489);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.9586258);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6353722);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5947548);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1472927);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05391745);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.0566724);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0696628);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.07226992);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.03469857);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.03546278);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.1628412);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03940893);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08895197);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04258999);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05689914);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06408313);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1958465);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1174403);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.0580987);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07307335);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1797023);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2861729);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.162052);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4055857);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2318247);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2430834);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1472927);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03429755);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02863013);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04330004);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05746958);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02453713);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02508921);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.12496);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,13.22036);
   hNCpi0inFVres_stack_7->SetBinContent(2,27.98142);
   hNCpi0inFVres_stack_7->SetBinContent(3,30.95422);
   hNCpi0inFVres_stack_7->SetBinContent(4,38.30503);
   hNCpi0inFVres_stack_7->SetBinContent(5,43.53674);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.91525);
   hNCpi0inFVres_stack_7->SetBinContent(7,46.31459);
   hNCpi0inFVres_stack_7->SetBinContent(8,50.36401);
   hNCpi0inFVres_stack_7->SetBinContent(9,64.35449);
   hNCpi0inFVres_stack_7->SetBinContent(10,86.57444);
   hNCpi0inFVres_stack_7->SetBinContent(11,103.5277);
   hNCpi0inFVres_stack_7->SetBinContent(12,112.6839);
   hNCpi0inFVres_stack_7->SetBinContent(13,106.161);
   hNCpi0inFVres_stack_7->SetBinContent(14,77.64763);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.94573);
   hNCpi0inFVres_stack_7->SetBinContent(16,26.99857);
   hNCpi0inFVres_stack_7->SetBinContent(17,17.4343);
   hNCpi0inFVres_stack_7->SetBinContent(18,12.57688);
   hNCpi0inFVres_stack_7->SetBinContent(19,11.58682);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.3119);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.203157);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.607536);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.943223);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.200118);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.143965);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.637694);
   hNCpi0inFVres_stack_7->SetBinContent(27,4.70668);
   hNCpi0inFVres_stack_7->SetBinContent(28,3.347876);
   hNCpi0inFVres_stack_7->SetBinContent(29,2.522176);
   hNCpi0inFVres_stack_7->SetBinContent(30,3.599701);
   hNCpi0inFVres_stack_7->SetBinContent(31,2.60673);
   hNCpi0inFVres_stack_7->SetBinContent(32,2.202433);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.041829);
   hNCpi0inFVres_stack_7->SetBinContent(34,1.993025);
   hNCpi0inFVres_stack_7->SetBinContent(35,13.64837);
   hNCpi0inFVres_stack_7->SetBinError(1,1.241183);
   hNCpi0inFVres_stack_7->SetBinError(2,1.865114);
   hNCpi0inFVres_stack_7->SetBinError(3,1.908158);
   hNCpi0inFVres_stack_7->SetBinError(4,2.231258);
   hNCpi0inFVres_stack_7->SetBinError(5,2.360105);
   hNCpi0inFVres_stack_7->SetBinError(6,2.193626);
   hNCpi0inFVres_stack_7->SetBinError(7,2.332135);
   hNCpi0inFVres_stack_7->SetBinError(8,2.448265);
   hNCpi0inFVres_stack_7->SetBinError(9,2.692697);
   hNCpi0inFVres_stack_7->SetBinError(10,3.142868);
   hNCpi0inFVres_stack_7->SetBinError(11,3.427339);
   hNCpi0inFVres_stack_7->SetBinError(12,3.763788);
   hNCpi0inFVres_stack_7->SetBinError(13,3.578734);
   hNCpi0inFVres_stack_7->SetBinError(14,3.074374);
   hNCpi0inFVres_stack_7->SetBinError(15,2.317026);
   hNCpi0inFVres_stack_7->SetBinError(16,1.760844);
   hNCpi0inFVres_stack_7->SetBinError(17,1.438699);
   hNCpi0inFVres_stack_7->SetBinError(18,1.051566);
   hNCpi0inFVres_stack_7->SetBinError(19,1.196809);
   hNCpi0inFVres_stack_7->SetBinError(20,1.114938);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9009958);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7972295);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7504265);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8667065);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6717026);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6121831);
   hNCpi0inFVres_stack_7->SetBinError(27,0.7405424);
   hNCpi0inFVres_stack_7->SetBinError(28,0.8053819);
   hNCpi0inFVres_stack_7->SetBinError(29,0.4300612);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7621303);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4852413);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5183758);
   hNCpi0inFVres_stack_7->SetBinError(33,0.5145313);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5070883);
   hNCpi0inFVres_stack_7->SetBinError(35,1.422245);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.686241);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.847725);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.786806);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.021251);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.910481);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.404937);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.730803);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.537598);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.07752);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.15836);
   hNCpi0inFVdis_stack_8->SetBinContent(11,20.81768);
   hNCpi0inFVdis_stack_8->SetBinContent(12,22.05794);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.13066);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.62138);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.911928);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.069589);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.495991);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.733293);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.52518);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.224879);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.315013);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.368072);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.13606);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.006904);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.098368);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.165464);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.375409);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.249815);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.7743049);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.067611);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.003423);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.2674734);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.696319);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.9754298);
   hNCpi0inFVdis_stack_8->SetBinContent(35,5.512259);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3893255);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9686875);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8242523);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7867285);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8800112);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8953329);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.182724);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.002748);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.312699);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.384187);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.578103);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.599713);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.365906);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.435777);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9150997);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7813574);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5716434);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5671956);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8384979);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7011244);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3058221);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3392323);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3032781);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2503145);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2859212);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2762638);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.4373824);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4767655);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.284781);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3383254);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3806272);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.1108566);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3901625);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.2975317);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.003482);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,3.035868);
   hCCpi0inFV_stack_10->SetBinContent(2,8.06166);
   hCCpi0inFV_stack_10->SetBinContent(3,10.15326);
   hCCpi0inFV_stack_10->SetBinContent(4,11.28814);
   hCCpi0inFV_stack_10->SetBinContent(5,11.7236);
   hCCpi0inFV_stack_10->SetBinContent(6,11.88167);
   hCCpi0inFV_stack_10->SetBinContent(7,15.93148);
   hCCpi0inFV_stack_10->SetBinContent(8,16.91735);
   hCCpi0inFV_stack_10->SetBinContent(9,21.90155);
   hCCpi0inFV_stack_10->SetBinContent(10,28.40204);
   hCCpi0inFV_stack_10->SetBinContent(11,34.40849);
   hCCpi0inFV_stack_10->SetBinContent(12,43.78285);
   hCCpi0inFV_stack_10->SetBinContent(13,40.58952);
   hCCpi0inFV_stack_10->SetBinContent(14,24.04475);
   hCCpi0inFV_stack_10->SetBinContent(15,18.42582);
   hCCpi0inFV_stack_10->SetBinContent(16,10.51143);
   hCCpi0inFV_stack_10->SetBinContent(17,8.581441);
   hCCpi0inFV_stack_10->SetBinContent(18,6.35697);
   hCCpi0inFV_stack_10->SetBinContent(19,6.496117);
   hCCpi0inFV_stack_10->SetBinContent(20,3.321102);
   hCCpi0inFV_stack_10->SetBinContent(21,5.235003);
   hCCpi0inFV_stack_10->SetBinContent(22,3.714533);
   hCCpi0inFV_stack_10->SetBinContent(23,4.770331);
   hCCpi0inFV_stack_10->SetBinContent(24,2.932743);
   hCCpi0inFV_stack_10->SetBinContent(25,2.482678);
   hCCpi0inFV_stack_10->SetBinContent(26,2.498975);
   hCCpi0inFV_stack_10->SetBinContent(27,4.14661);
   hCCpi0inFV_stack_10->SetBinContent(28,2.789281);
   hCCpi0inFV_stack_10->SetBinContent(29,2.729266);
   hCCpi0inFV_stack_10->SetBinContent(30,2.653871);
   hCCpi0inFV_stack_10->SetBinContent(31,1.178602);
   hCCpi0inFV_stack_10->SetBinContent(32,1.322064);
   hCCpi0inFV_stack_10->SetBinContent(33,1.412273);
   hCCpi0inFV_stack_10->SetBinContent(34,1.712114);
   hCCpi0inFV_stack_10->SetBinContent(35,16.74332);
   hCCpi0inFV_stack_10->SetBinError(1,0.8329575);
   hCCpi0inFV_stack_10->SetBinError(2,1.408523);
   hCCpi0inFV_stack_10->SetBinError(3,1.605509);
   hCCpi0inFV_stack_10->SetBinError(4,1.628758);
   hCCpi0inFV_stack_10->SetBinError(5,1.698797);
   hCCpi0inFV_stack_10->SetBinError(6,1.664412);
   hCCpi0inFV_stack_10->SetBinError(7,1.96726);
   hCCpi0inFV_stack_10->SetBinError(8,2.144694);
   hCCpi0inFV_stack_10->SetBinError(9,2.323497);
   hCCpi0inFV_stack_10->SetBinError(10,2.625437);
   hCCpi0inFV_stack_10->SetBinError(11,2.96499);
   hCCpi0inFV_stack_10->SetBinError(12,3.286982);
   hCCpi0inFV_stack_10->SetBinError(13,3.220098);
   hCCpi0inFV_stack_10->SetBinError(14,2.411422);
   hCCpi0inFV_stack_10->SetBinError(15,2.131816);
   hCCpi0inFV_stack_10->SetBinError(16,1.581783);
   hCCpi0inFV_stack_10->SetBinError(17,1.459591);
   hCCpi0inFV_stack_10->SetBinError(18,1.241379);
   hCCpi0inFV_stack_10->SetBinError(19,1.326219);
   hCCpi0inFV_stack_10->SetBinError(20,0.9204367);
   hCCpi0inFV_stack_10->SetBinError(21,1.128051);
   hCCpi0inFV_stack_10->SetBinError(22,0.9615599);
   hCCpi0inFV_stack_10->SetBinError(23,1.19364);
   hCCpi0inFV_stack_10->SetBinError(24,0.8785195);
   hCCpi0inFV_stack_10->SetBinError(25,0.8552222);
   hCCpi0inFV_stack_10->SetBinError(26,0.7344388);
   hCCpi0inFV_stack_10->SetBinError(27,1.075328);
   hCCpi0inFV_stack_10->SetBinError(28,0.8335302);
   hCCpi0inFV_stack_10->SetBinError(29,0.854664);
   hCCpi0inFV_stack_10->SetBinError(30,0.8392677);
   hCCpi0inFV_stack_10->SetBinError(31,0.4811646);
   hCCpi0inFV_stack_10->SetBinError(32,0.5554667);
   hCCpi0inFV_stack_10->SetBinError(33,0.6510715);
   hCCpi0inFV_stack_10->SetBinError(34,0.6201715);
   hCCpi0inFV_stack_10->SetBinError(35,2.042709);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,4.208279);
   hNCinFV_stack_11->SetBinContent(2,4.484915);
   hNCinFV_stack_11->SetBinContent(3,5.30828);
   hNCinFV_stack_11->SetBinContent(4,9.495683);
   hNCinFV_stack_11->SetBinContent(5,10.17178);
   hNCinFV_stack_11->SetBinContent(6,10.1991);
   hNCinFV_stack_11->SetBinContent(7,9.216475);
   hNCinFV_stack_11->SetBinContent(8,7.10574);
   hNCinFV_stack_11->SetBinContent(9,10.4423);
   hNCinFV_stack_11->SetBinContent(10,7.97864);
   hNCinFV_stack_11->SetBinContent(11,13.15497);
   hNCinFV_stack_11->SetBinContent(12,13.60081);
   hNCinFV_stack_11->SetBinContent(13,12.63898);
   hNCinFV_stack_11->SetBinContent(14,7.348668);
   hNCinFV_stack_11->SetBinContent(15,6.358567);
   hNCinFV_stack_11->SetBinContent(16,6.213162);
   hNCinFV_stack_11->SetBinContent(17,5.896463);
   hNCinFV_stack_11->SetBinContent(18,2.550243);
   hNCinFV_stack_11->SetBinContent(19,3.682233);
   hNCinFV_stack_11->SetBinContent(20,3.018902);
   hNCinFV_stack_11->SetBinContent(21,4.379764);
   hNCinFV_stack_11->SetBinContent(22,2.25435);
   hNCinFV_stack_11->SetBinContent(23,2.529455);
   hNCinFV_stack_11->SetBinContent(24,2.848461);
   hNCinFV_stack_11->SetBinContent(25,1.501498);
   hNCinFV_stack_11->SetBinContent(26,1.252065);
   hNCinFV_stack_11->SetBinContent(27,0.9021298);
   hNCinFV_stack_11->SetBinContent(28,2.371689);
   hNCinFV_stack_11->SetBinContent(29,2.188911);
   hNCinFV_stack_11->SetBinContent(30,2.160499);
   hNCinFV_stack_11->SetBinContent(31,1.192744);
   hNCinFV_stack_11->SetBinContent(32,3.423603);
   hNCinFV_stack_11->SetBinContent(33,0.2995255);
   hNCinFV_stack_11->SetBinContent(34,1.093653);
   hNCinFV_stack_11->SetBinContent(35,15.92429);
   hNCinFV_stack_11->SetBinError(1,1.046502);
   hNCinFV_stack_11->SetBinError(2,1.047079);
   hNCinFV_stack_11->SetBinError(3,1.102829);
   hNCinFV_stack_11->SetBinError(4,1.62181);
   hNCinFV_stack_11->SetBinError(5,1.622215);
   hNCinFV_stack_11->SetBinError(6,1.721295);
   hNCinFV_stack_11->SetBinError(7,1.51428);
   hNCinFV_stack_11->SetBinError(8,1.330814);
   hNCinFV_stack_11->SetBinError(9,1.623866);
   hNCinFV_stack_11->SetBinError(10,1.305786);
   hNCinFV_stack_11->SetBinError(11,1.793371);
   hNCinFV_stack_11->SetBinError(12,1.895572);
   hNCinFV_stack_11->SetBinError(13,1.93146);
   hNCinFV_stack_11->SetBinError(14,1.315712);
   hNCinFV_stack_11->SetBinError(15,1.324842);
   hNCinFV_stack_11->SetBinError(16,1.516694);
   hNCinFV_stack_11->SetBinError(17,1.498466);
   hNCinFV_stack_11->SetBinError(18,0.7266466);
   hNCinFV_stack_11->SetBinError(19,0.8937468);
   hNCinFV_stack_11->SetBinError(20,0.9636329);
   hNCinFV_stack_11->SetBinError(21,1.310906);
   hNCinFV_stack_11->SetBinError(22,0.8463605);
   hNCinFV_stack_11->SetBinError(23,0.7804286);
   hNCinFV_stack_11->SetBinError(24,0.9805385);
   hNCinFV_stack_11->SetBinError(25,0.8302115);
   hNCinFV_stack_11->SetBinError(26,0.5159017);
   hNCinFV_stack_11->SetBinError(27,0.4705577);
   hNCinFV_stack_11->SetBinError(28,1.142653);
   hNCinFV_stack_11->SetBinError(29,0.8604415);
   hNCinFV_stack_11->SetBinError(30,0.7600197);
   hNCinFV_stack_11->SetBinError(31,0.4870683);
   hNCinFV_stack_11->SetBinError(32,1.221966);
   hNCinFV_stack_11->SetBinError(33,0.2219614);
   hNCinFV_stack_11->SetBinError(34,0.5174765);
   hNCinFV_stack_11->SetBinError(35,2.200064);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,2.269012);
   hnumuCCinFV_stack_12->SetBinContent(2,6.77667);
   hnumuCCinFV_stack_12->SetBinContent(3,5.71308);
   hnumuCCinFV_stack_12->SetBinContent(4,7.609606);
   hnumuCCinFV_stack_12->SetBinContent(5,7.059629);
   hnumuCCinFV_stack_12->SetBinContent(6,9.091289);
   hnumuCCinFV_stack_12->SetBinContent(7,9.821354);
   hnumuCCinFV_stack_12->SetBinContent(8,7.7837);
   hnumuCCinFV_stack_12->SetBinContent(9,9.6173);
   hnumuCCinFV_stack_12->SetBinContent(10,10.22833);
   hnumuCCinFV_stack_12->SetBinContent(11,10.09144);
   hnumuCCinFV_stack_12->SetBinContent(12,10.41201);
   hnumuCCinFV_stack_12->SetBinContent(13,9.925383);
   hnumuCCinFV_stack_12->SetBinContent(14,8.53457);
   hnumuCCinFV_stack_12->SetBinContent(15,5.344304);
   hnumuCCinFV_stack_12->SetBinContent(16,5.314897);
   hnumuCCinFV_stack_12->SetBinContent(17,4.25038);
   hnumuCCinFV_stack_12->SetBinContent(18,3.71137);
   hnumuCCinFV_stack_12->SetBinContent(19,3.539103);
   hnumuCCinFV_stack_12->SetBinContent(20,3.358512);
   hnumuCCinFV_stack_12->SetBinContent(21,2.209657);
   hnumuCCinFV_stack_12->SetBinContent(22,2.926758);
   hnumuCCinFV_stack_12->SetBinContent(23,1.372726);
   hnumuCCinFV_stack_12->SetBinContent(24,1.860943);
   hnumuCCinFV_stack_12->SetBinContent(25,2.592268);
   hnumuCCinFV_stack_12->SetBinContent(26,1.517089);
   hnumuCCinFV_stack_12->SetBinContent(27,1.467217);
   hnumuCCinFV_stack_12->SetBinContent(28,0.9855721);
   hnumuCCinFV_stack_12->SetBinContent(29,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(30,1.163287);
   hnumuCCinFV_stack_12->SetBinContent(31,1.186711);
   hnumuCCinFV_stack_12->SetBinContent(32,0.8286846);
   hnumuCCinFV_stack_12->SetBinContent(33,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(34,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(35,8.793794);
   hnumuCCinFV_stack_12->SetBinError(1,0.7911787);
   hnumuCCinFV_stack_12->SetBinError(2,1.895335);
   hnumuCCinFV_stack_12->SetBinError(3,1.435516);
   hnumuCCinFV_stack_12->SetBinError(4,1.467316);
   hnumuCCinFV_stack_12->SetBinError(5,1.589007);
   hnumuCCinFV_stack_12->SetBinError(6,1.801881);
   hnumuCCinFV_stack_12->SetBinError(7,2.130531);
   hnumuCCinFV_stack_12->SetBinError(8,1.422652);
   hnumuCCinFV_stack_12->SetBinError(9,2.177227);
   hnumuCCinFV_stack_12->SetBinError(10,1.696682);
   hnumuCCinFV_stack_12->SetBinError(11,1.92767);
   hnumuCCinFV_stack_12->SetBinError(12,1.913668);
   hnumuCCinFV_stack_12->SetBinError(13,1.693671);
   hnumuCCinFV_stack_12->SetBinError(14,1.505753);
   hnumuCCinFV_stack_12->SetBinError(15,1.303415);
   hnumuCCinFV_stack_12->SetBinError(16,1.221625);
   hnumuCCinFV_stack_12->SetBinError(17,1.069394);
   hnumuCCinFV_stack_12->SetBinError(18,1.023121);
   hnumuCCinFV_stack_12->SetBinError(19,1.017298);
   hnumuCCinFV_stack_12->SetBinError(20,0.8887388);
   hnumuCCinFV_stack_12->SetBinError(21,0.8083199);
   hnumuCCinFV_stack_12->SetBinError(22,0.9196968);
   hnumuCCinFV_stack_12->SetBinError(23,0.5753622);
   hnumuCCinFV_stack_12->SetBinError(24,0.7113715);
   hnumuCCinFV_stack_12->SetBinError(25,0.847057);
   hnumuCCinFV_stack_12->SetBinError(26,0.5887087);
   hnumuCCinFV_stack_12->SetBinError(27,0.6214735);
   hnumuCCinFV_stack_12->SetBinError(28,0.5219698);
   hnumuCCinFV_stack_12->SetBinError(29,0.340721);
   hnumuCCinFV_stack_12->SetBinError(30,0.5349878);
   hnumuCCinFV_stack_12->SetBinError(31,0.545478);
   hnumuCCinFV_stack_12->SetBinError(32,0.4164732);
   hnumuCCinFV_stack_12->SetBinError(33,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(34,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(35,1.475347);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.356388);
   hnueCCinFV_stack_13->SetBinContent(2,2.712214);
   hnueCCinFV_stack_13->SetBinContent(3,2.430127);
   hnueCCinFV_stack_13->SetBinContent(4,1.487184);
   hnueCCinFV_stack_13->SetBinContent(5,0.785171);
   hnueCCinFV_stack_13->SetBinContent(6,2.470408);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,1.289128);
   hnueCCinFV_stack_13->SetBinContent(9,0.7549087);
   hnueCCinFV_stack_13->SetBinContent(10,0.8479808);
   hnueCCinFV_stack_13->SetBinContent(11,1.712425);
   hnueCCinFV_stack_13->SetBinContent(12,1.209602);
   hnueCCinFV_stack_13->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.7908806);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.7975264);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(23,1.091422);
   hnueCCinFV_stack_13->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(35,3.011116);
   hnueCCinFV_stack_13->SetBinError(1,1.121856);
   hnueCCinFV_stack_13->SetBinError(2,1.616045);
   hnueCCinFV_stack_13->SetBinError(3,0.8933854);
   hnueCCinFV_stack_13->SetBinError(4,0.845849);
   hnueCCinFV_stack_13->SetBinError(5,0.3925882);
   hnueCCinFV_stack_13->SetBinError(6,1.416448);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.5953858);
   hnueCCinFV_stack_13->SetBinError(9,0.4493869);
   hnueCCinFV_stack_13->SetBinError(10,0.4909786);
   hnueCCinFV_stack_13->SetBinError(11,0.7450527);
   hnueCCinFV_stack_13->SetBinError(12,0.5781583);
   hnueCCinFV_stack_13->SetBinError(13,0.2781975);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.5616999);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.4715374);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2998007);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(23,0.6451021);
   hnueCCinFV_stack_13->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3041673);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(35,1.260316);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__17->SetBinContent(1,50.06828);
   hmcerror__17->SetBinContent(2,89.26794);
   hmcerror__17->SetBinContent(3,110.0014);
   hmcerror__17->SetBinContent(4,119.6313);
   hmcerror__17->SetBinContent(5,119.4479);
   hmcerror__17->SetBinContent(6,128.5598);
   hmcerror__17->SetBinContent(7,131.5169);
   hmcerror__17->SetBinContent(8,137.6233);
   hmcerror__17->SetBinContent(9,166.5905);
   hmcerror__17->SetBinContent(10,207.8602);
   hmcerror__17->SetBinContent(11,236.6996);
   hmcerror__17->SetBinContent(12,263.2766);
   hmcerror__17->SetBinContent(13,247.7464);
   hmcerror__17->SetBinContent(14,174.9881);
   hmcerror__17->SetBinContent(15,105.4104);
   hmcerror__17->SetBinContent(16,70.15272);
   hmcerror__17->SetBinContent(17,52.67934);
   hmcerror__17->SetBinContent(18,38.53666);
   hmcerror__17->SetBinContent(19,37.12444);
   hmcerror__17->SetBinContent(20,33.18735);
   hmcerror__17->SetBinContent(21,30.67348);
   hmcerror__17->SetBinContent(22,21.58171);
   hmcerror__17->SetBinContent(23,21.50882);
   hmcerror__17->SetBinContent(24,19.66317);
   hmcerror__17->SetBinContent(25,14.57137);
   hmcerror__17->SetBinContent(26,13.55676);
   hmcerror__17->SetBinContent(27,15.46688);
   hmcerror__17->SetBinContent(28,11.63819);
   hmcerror__17->SetBinContent(29,11.42033);
   hmcerror__17->SetBinContent(30,12.00472);
   hmcerror__17->SetBinContent(31,8.573576);
   hmcerror__17->SetBinContent(32,9.541078);
   hmcerror__17->SetBinContent(33,5.816422);
   hmcerror__17->SetBinContent(34,6.667308);
   hmcerror__17->SetBinContent(35,72.84293);
   hmcerror__17->SetBinError(1,17.40626);
   hmcerror__17->SetBinError(2,27.64876);
   hmcerror__17->SetBinError(3,31.95995);
   hmcerror__17->SetBinError(4,35.52026);
   hmcerror__17->SetBinError(5,38.26703);
   hmcerror__17->SetBinError(6,35.18131);
   hmcerror__17->SetBinError(7,50.05423);
   hmcerror__17->SetBinError(8,36.06012);
   hmcerror__17->SetBinError(9,48.34488);
   hmcerror__17->SetBinError(10,62.09034);
   hmcerror__17->SetBinError(11,65.51614);
   hmcerror__17->SetBinError(12,69.27985);
   hmcerror__17->SetBinError(13,62.94198);
   hmcerror__17->SetBinError(14,46.04436);
   hmcerror__17->SetBinError(15,34.29298);
   hmcerror__17->SetBinError(16,21.59842);
   hmcerror__17->SetBinError(17,20.42651);
   hmcerror__17->SetBinError(18,16.1195);
   hmcerror__17->SetBinError(19,13.52853);
   hmcerror__17->SetBinError(20,17.75127);
   hmcerror__17->SetBinError(21,12.56174);
   hmcerror__17->SetBinError(22,10.22006);
   hmcerror__17->SetBinError(23,11.64982);
   hmcerror__17->SetBinError(24,9.172345);
   hmcerror__17->SetBinError(25,10.4133);
   hmcerror__17->SetBinError(26,8.260716);
   hmcerror__17->SetBinError(27,8.788603);
   hmcerror__17->SetBinError(28,8.447235);
   hmcerror__17->SetBinError(29,9.971325);
   hmcerror__17->SetBinError(30,8.078046);
   hmcerror__17->SetBinError(31,6.685196);
   hmcerror__17->SetBinError(32,8.208423);
   hmcerror__17->SetBinError(33,5.223211);
   hmcerror__17->SetBinError(34,8.283265);
   hmcerror__17->SetBinError(35,23.95064);
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
   
   Double_t _fx3021[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3021[34] = {
   66,
   96,
   106,
   102,
   131,
   125,
   153,
   172,
   160,
   228,
   252,
   313,
   277,
   151,
   115,
   67,
   52,
   41,
   37,
   28,
   22,
   27,
   27,
   17,
   12,
   16,
   15,
   10,
   14,
   8,
   10,
   13,
   9,
   2};
   Double_t _felx3021[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3021[34] = {
   8.2509,
   9.9196,
   10.29563,
   10.0995,
   11.44552,
   11.18034,
   12.36932,
   13.11488,
   12.64911,
   15.09967,
   15.87451,
   17.69181,
   16.64332,
   12.28821,
   10.72381,
   8.3119,
   7.3419,
   6.5384,
   6.2203,
   5.4358,
   4.8417,
   5.3414,
   5.3414,
   4.2835,
   3.64022,
   4.1628,
   4.0385,
   3.34883,
   3.9102,
   3.0307,
   3.34883,
   3.77763,
   3.19354,
   2};
   Double_t _fehx3021[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3021[34] = {
   8.0483,
   9.718,
   10.29563,
   10.0995,
   11.44552,
   11.18034,
   12.36932,
   13.11488,
   12.64911,
   15.09967,
   15.87451,
   17.69181,
   16.64332,
   12.28821,
   10.72381,
   8.1094,
   7.1381,
   6.3331,
   6.0141,
   5.2271,
   4.6299,
   5.1322,
   5.1322,
   4.0673,
   3.4155,
   3.9454,
   3.8197,
   3.1179,
   3.6898,
   2.7896,
   3.1179,
   3.5552,
   2.9582,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,440);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(363.761);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.06#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.4/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2874.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 277.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 278.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  93.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  5.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1024.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  199.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 375.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 181.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 160.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all");
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
   
   Double_t _fx3022[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3022[34] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3022[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3022[34] = {
   0.3476504,
   0.3097278,
   0.2905413,
   0.2969144,
   0.320366,
   0.2736571,
   0.3805915,
   0.2620205,
   0.290202,
   0.2987119,
   0.2767902,
   0.2631447,
   0.2540581,
   0.2631285,
   0.3253282,
   0.3078772,
   0.3877518,
   0.4182899,
   0.3644104,
   0.5348807,
   0.4095309,
   0.4735521,
   0.5416298,
   0.4664733,
   0.714641,
   0.6093429,
   0.5682209,
   0.7258204,
   0.8731202,
   0.6729056,
   0.7797442,
   0.8603245,
   0.898011,
   1.24237};
   Double_t _fehx3022[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3022[34] = {
   0.3476504,
   0.3097278,
   0.2905413,
   0.2969144,
   0.320366,
   0.2736571,
   0.3805915,
   0.2620205,
   0.290202,
   0.2987119,
   0.2767902,
   0.2631447,
   0.2540581,
   0.2631285,
   0.3253282,
   0.3078772,
   0.3877518,
   0.4182899,
   0.3644104,
   0.5348807,
   0.4095309,
   0.4735521,
   0.5416298,
   0.4664733,
   0.714641,
   0.6093429,
   0.5682209,
   0.7258204,
   0.8731202,
   0.6729056,
   0.7797442,
   0.8603245,
   0.898011,
   1.24237};
   grae = new TGraphAsymmErrors(34,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
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
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3023[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3023[34] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3023[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3023[34] = {
   0.1919551,
   0.2023311,
   0.1841798,
   0.1858621,
   0.2044504,
   0.1871946,
   0.2126502,
   0.2064094,
   0.2161028,
   0.2238077,
   0.2282078,
   0.2261834,
   0.2224405,
   0.2246019,
   0.2328192,
   0.2247285,
   0.244115,
   0.2864963,
   0.2382562,
   0.2401347,
   0.2431571,
   0.2533871,
   0.2699261,
   0.2863946,
   0.2691899,
   0.2831159,
   0.2662996,
   0.3491648,
   0.267901,
   0.2827852,
   0.3495138,
   0.3359208,
   0.4140975,
   0.3768991};
   Double_t _fehx3023[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3023[34] = {
   0.1919551,
   0.2023311,
   0.1841798,
   0.1858621,
   0.2044504,
   0.1871946,
   0.2126502,
   0.2064094,
   0.2161028,
   0.2238077,
   0.2282078,
   0.2261834,
   0.2224405,
   0.2246019,
   0.2328192,
   0.2247285,
   0.244115,
   0.2864963,
   0.2382562,
   0.2401347,
   0.2431571,
   0.2533871,
   0.2699261,
   0.2863946,
   0.2691899,
   0.2831159,
   0.2662996,
   0.3491648,
   0.267901,
   0.2827852,
   0.3495138,
   0.3359208,
   0.4140975,
   0.3768991};
   grae = new TGraphAsymmErrors(34,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
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
   
   Double_t _fx3024[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3024[34] = {
   1.3182,
   1.075414,
   0.9636243,
   0.8526197,
   1.096713,
   0.9723101,
   1.163348,
   1.249788,
   0.9604392,
   1.096891,
   1.06464,
   1.188864,
   1.118079,
   0.8629158,
   1.090974,
   0.9550592,
   0.9871042,
   1.063922,
   0.9966479,
   0.843695,
   0.717232,
   1.251059,
   1.255299,
   0.8645603,
   0.8235328,
   1.180223,
   0.9698145,
   0.8592403,
   1.225883,
   0.6664043,
   1.166374,
   1.36253,
   1.547343,
   0.2999711};
   Double_t _felx3024[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3024[34] = {
   0.1647929,
   0.1111216,
   0.09359547,
   0.08442193,
   0.09582025,
   0.08696605,
   0.09405113,
   0.09529548,
   0.07592938,
   0.07264337,
   0.06706604,
   0.06719854,
   0.06717884,
   0.07022309,
   0.1017338,
   0.1184829,
   0.1393696,
   0.169667,
   0.1675527,
   0.1637913,
   0.1578465,
   0.2474966,
   0.2483353,
   0.2178438,
   0.2498201,
   0.3070645,
   0.2611064,
   0.287745,
   0.3423893,
   0.2524589,
   0.390599,
   0.3959333,
   0.5490558,
   0.2999711};
   Double_t _fehx3024[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3024[34] = {
   0.1607465,
   0.1088633,
   0.09359547,
   0.08442193,
   0.09582025,
   0.08696605,
   0.09405113,
   0.09529548,
   0.07592938,
   0.07264337,
   0.06706604,
   0.06719854,
   0.06717884,
   0.07022309,
   0.1017338,
   0.1155964,
   0.1355009,
   0.1643396,
   0.1619984,
   0.1575028,
   0.1509415,
   0.2378032,
   0.2386091,
   0.2068486,
   0.234398,
   0.2910282,
   0.24696,
   0.2679025,
   0.3230904,
   0.2323752,
   0.3636639,
   0.3726204,
   0.5085945,
   0.2278536};
   grae = new TGraphAsymmErrors(34,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,440);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.261531);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

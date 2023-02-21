#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 18:43:51 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-1.9,1.25641,210.1);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__22->SetBinContent(1,68.45561);
   hmc__22->SetBinContent(2,30.59305);
   hmc__22->SetBinContent(3,22.34587);
   hmc__22->SetBinContent(4,21.37607);
   hmc__22->SetBinContent(5,20.52218);
   hmc__22->SetBinContent(6,19.71835);
   hmc__22->SetBinContent(7,23.77432);
   hmc__22->SetBinContent(8,22.07386);
   hmc__22->SetBinContent(9,17.75986);
   hmc__22->SetBinContent(10,20.06364);
   hmc__22->SetBinContent(11,23.72365);
   hmc__22->SetBinContent(12,21.44057);
   hmc__22->SetBinContent(13,25.72225);
   hmc__22->SetBinContent(14,30.22502);
   hmc__22->SetBinContent(15,38.50568);
   hmc__22->SetBinContent(16,31.22879);
   hmc__22->SetBinContent(17,35.55347);
   hmc__22->SetBinContent(18,45.1087);
   hmc__22->SetBinContent(19,45.44394);
   hmc__22->SetBinContent(20,61.25216);
   hmc__22->SetBinContent(21,74.20278);
   hmc__22->SetBinContent(22,83.2001);
   hmc__22->SetBinContent(23,94.58311);
   hmc__22->SetBinContent(24,87.12477);
   hmc__22->SetBinError(1,26.25425);
   hmc__22->SetBinError(2,21.07933);
   hmc__22->SetBinError(3,14.81884);
   hmc__22->SetBinError(4,18.37507);
   hmc__22->SetBinError(5,17.57266);
   hmc__22->SetBinError(6,10.46684);
   hmc__22->SetBinError(7,16.38749);
   hmc__22->SetBinError(8,12.40767);
   hmc__22->SetBinError(9,9.032271);
   hmc__22->SetBinError(10,9.868822);
   hmc__22->SetBinError(11,9.72281);
   hmc__22->SetBinError(12,13.17953);
   hmc__22->SetBinError(13,12.8128);
   hmc__22->SetBinError(14,11.96504);
   hmc__22->SetBinError(15,16.05452);
   hmc__22->SetBinError(16,20.03026);
   hmc__22->SetBinError(17,13.40322);
   hmc__22->SetBinError(18,17.75881);
   hmc__22->SetBinError(19,15.64894);
   hmc__22->SetBinError(20,25.87638);
   hmc__22->SetBinError(21,26.13131);
   hmc__22->SetBinError(22,32.47129);
   hmc__22->SetBinError(23,27.55616);
   hmc__22->SetBinError(24,27.59217);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-1.9);
   hmc__22->SetMaximum(199.5);
   hmc__22->SetEntries(948.2139);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,-1,1);
   hs8_stack_8->SetMinimum(-1.664691e-08);
   hs8_stack_8->SetMaximum(99.31229);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.447276);
   hbadmatch_stack_1->SetBinContent(2,1.410583);
   hbadmatch_stack_1->SetBinContent(3,0.536893);
   hbadmatch_stack_1->SetBinContent(4,0.7868615);
   hbadmatch_stack_1->SetBinContent(5,0.785171);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,1.379602);
   hbadmatch_stack_1->SetBinContent(8,0.7812945);
   hbadmatch_stack_1->SetBinContent(9,0.6803553);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,0.8770706);
   hbadmatch_stack_1->SetBinContent(12,1.215558);
   hbadmatch_stack_1->SetBinContent(13,1.369515);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,1.618276);
   hbadmatch_stack_1->SetBinContent(16,0.8770706);
   hbadmatch_stack_1->SetBinContent(17,0.6230135);
   hbadmatch_stack_1->SetBinContent(18,0.8753801);
   hbadmatch_stack_1->SetBinContent(19,0.7319179);
   hbadmatch_stack_1->SetBinContent(20,1.487414);
   hbadmatch_stack_1->SetBinContent(21,2.890345);
   hbadmatch_stack_1->SetBinContent(22,3.161518);
   hbadmatch_stack_1->SetBinContent(23,2.833603);
   hbadmatch_stack_1->SetBinContent(24,4.151271);
   hbadmatch_stack_1->SetBinError(1,0.8093277);
   hbadmatch_stack_1->SetBinError(2,0.6505627);
   hbadmatch_stack_1->SetBinError(3,0.3929602);
   hbadmatch_stack_1->SetBinError(4,0.3934307);
   hbadmatch_stack_1->SetBinError(5,0.3925882);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.6299171);
   hbadmatch_stack_1->SetBinError(8,0.4661454);
   hbadmatch_stack_1->SetBinError(9,0.4810838);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.5197486);
   hbadmatch_stack_1->SetBinError(12,0.6206425);
   hbadmatch_stack_1->SetBinError(13,0.5739892);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.7666032);
   hbadmatch_stack_1->SetBinError(16,0.5197486);
   hbadmatch_stack_1->SetBinError(17,0.3610284);
   hbadmatch_stack_1->SetBinError(18,0.5191111);
   hbadmatch_stack_1->SetBinError(19,0.438694);
   hbadmatch_stack_1->SetBinError(20,0.6282177);
   hbadmatch_stack_1->SetBinError(21,0.9771845);
   hbadmatch_stack_1->SetBinError(22,0.9632529);
   hbadmatch_stack_1->SetBinError(23,1.246785);
   hbadmatch_stack_1->SetBinError(24,1.114363);
   hbadmatch_stack_1->SetEntries(124);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,7.671841);
   hext_stack_2->SetBinContent(2,6.475223);
   hext_stack_2->SetBinContent(3,3.97497);
   hext_stack_2->SetBinContent(4,3.483397);
   hext_stack_2->SetBinContent(5,3.647801);
   hext_stack_2->SetBinContent(6,4.703194);
   hext_stack_2->SetBinContent(7,4.132192);
   hext_stack_2->SetBinContent(8,4.759445);
   hext_stack_2->SetBinContent(9,4.225983);
   hext_stack_2->SetBinContent(10,6.214257);
   hext_stack_2->SetBinContent(11,7.754043);
   hext_stack_2->SetBinContent(12,5.318858);
   hext_stack_2->SetBinContent(13,3.814975);
   hext_stack_2->SetBinContent(14,10.03641);
   hext_stack_2->SetBinContent(15,7.829063);
   hext_stack_2->SetBinContent(16,5.020411);
   hext_stack_2->SetBinContent(17,5.415421);
   hext_stack_2->SetBinContent(18,10.41706);
   hext_stack_2->SetBinContent(19,6.978384);
   hext_stack_2->SetBinContent(20,14.1327);
   hext_stack_2->SetBinContent(21,14.13988);
   hext_stack_2->SetBinContent(22,17.31765);
   hext_stack_2->SetBinContent(23,21.0692);
   hext_stack_2->SetBinContent(24,20.58758);
   hext_stack_2->SetBinError(1,1.899118);
   hext_stack_2->SetBinError(2,1.72584);
   hext_stack_2->SetBinError(3,1.150171);
   hext_stack_2->SetBinError(4,1.197416);
   hext_stack_2->SetBinError(5,1.246589);
   hext_stack_2->SetBinError(6,1.389163);
   hext_stack_2->SetBinError(7,1.282292);
   hext_stack_2->SetBinError(8,1.567911);
   hext_stack_2->SetBinError(9,1.279954);
   hext_stack_2->SetBinError(10,1.789038);
   hext_stack_2->SetBinError(11,1.914873);
   hext_stack_2->SetBinError(12,1.676283);
   hext_stack_2->SetBinError(13,1.156649);
   hext_stack_2->SetBinError(14,2.082617);
   hext_stack_2->SetBinError(15,1.981925);
   hext_stack_2->SetBinError(16,1.495396);
   hext_stack_2->SetBinError(17,1.570863);
   hext_stack_2->SetBinError(18,2.229596);
   hext_stack_2->SetBinError(19,1.673777);
   hext_stack_2->SetBinError(20,2.643402);
   hext_stack_2->SetBinError(21,2.605066);
   hext_stack_2->SetBinError(22,2.801368);
   hext_stack_2->SetBinError(23,2.976261);
   hext_stack_2->SetBinError(24,2.903707);
   hext_stack_2->SetEntries(479);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,1.753564);
   hdirt_stack_3->SetBinContent(2,0.8545573);
   hdirt_stack_3->SetBinContent(3,0.6993364);
   hdirt_stack_3->SetBinContent(4,1.231002);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.2761429);
   hdirt_stack_3->SetBinContent(8,0.6951543);
   hdirt_stack_3->SetBinContent(9,0.6084618);
   hdirt_stack_3->SetBinContent(10,0.260563);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.4416219);
   hdirt_stack_3->SetBinContent(17,1.478111);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.9422435);
   hdirt_stack_3->SetBinContent(20,1.763839);
   hdirt_stack_3->SetBinContent(21,0.2762635);
   hdirt_stack_3->SetBinContent(22,1.17241);
   hdirt_stack_3->SetBinContent(23,1.891919);
   hdirt_stack_3->SetBinContent(24,2.496045);
   hdirt_stack_3->SetBinError(1,0.6568517);
   hdirt_stack_3->SetBinError(2,0.5258746);
   hdirt_stack_3->SetBinError(3,0.4010076);
   hdirt_stack_3->SetBinError(4,0.5979361);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.1952625);
   hdirt_stack_3->SetBinError(8,0.4258516);
   hdirt_stack_3->SetBinError(9,0.4468525);
   hdirt_stack_3->SetBinError(10,0.260563);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(16,0.2559507);
   hdirt_stack_3->SetBinError(17,1.01974);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.4923441);
   hdirt_stack_3->SetBinError(20,0.7509981);
   hdirt_stack_3->SetBinError(21,0.1952626);
   hdirt_stack_3->SetBinError(22,0.5622831);
   hdirt_stack_3->SetBinError(23,0.7653982);
   hdirt_stack_3->SetBinError(24,0.8300377);
   hdirt_stack_3->SetEntries(82);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,21.49186);
   houtFV_stack_4->SetBinContent(2,10.7255);
   houtFV_stack_4->SetBinContent(3,4.939626);
   houtFV_stack_4->SetBinContent(4,4.406428);
   houtFV_stack_4->SetBinContent(5,5.254945);
   houtFV_stack_4->SetBinContent(6,3.183081);
   houtFV_stack_4->SetBinContent(7,6.05882);
   houtFV_stack_4->SetBinContent(8,6.359254);
   houtFV_stack_4->SetBinContent(9,3.806432);
   houtFV_stack_4->SetBinContent(10,3.127768);
   houtFV_stack_4->SetBinContent(11,1.663932);
   houtFV_stack_4->SetBinContent(12,5.197308);
   houtFV_stack_4->SetBinContent(13,5.257953);
   houtFV_stack_4->SetBinContent(14,4.796486);
   houtFV_stack_4->SetBinContent(15,7.319716);
   houtFV_stack_4->SetBinContent(16,4.198874);
   houtFV_stack_4->SetBinContent(17,5.314314);
   houtFV_stack_4->SetBinContent(18,8.713696);
   houtFV_stack_4->SetBinContent(19,9.752686);
   houtFV_stack_4->SetBinContent(20,7.896162);
   houtFV_stack_4->SetBinContent(21,16.00743);
   houtFV_stack_4->SetBinContent(22,16.23912);
   houtFV_stack_4->SetBinContent(23,19.33582);
   houtFV_stack_4->SetBinContent(24,22.66492);
   houtFV_stack_4->SetBinError(1,2.318715);
   houtFV_stack_4->SetBinError(2,1.657906);
   houtFV_stack_4->SetBinError(3,1.056002);
   houtFV_stack_4->SetBinError(4,1.051952);
   houtFV_stack_4->SetBinError(5,1.169707);
   houtFV_stack_4->SetBinError(6,0.922976);
   houtFV_stack_4->SetBinError(7,1.257364);
   houtFV_stack_4->SetBinError(8,1.743515);
   houtFV_stack_4->SetBinError(9,1.020103);
   houtFV_stack_4->SetBinError(10,0.8999062);
   houtFV_stack_4->SetBinError(11,0.6518637);
   houtFV_stack_4->SetBinError(12,1.184127);
   houtFV_stack_4->SetBinError(13,1.159362);
   houtFV_stack_4->SetBinError(14,1.048996);
   houtFV_stack_4->SetBinError(15,1.345571);
   houtFV_stack_4->SetBinError(16,0.9898981);
   houtFV_stack_4->SetBinError(17,1.116025);
   houtFV_stack_4->SetBinError(18,1.485443);
   houtFV_stack_4->SetBinError(19,1.602792);
   houtFV_stack_4->SetBinError(20,1.447868);
   houtFV_stack_4->SetBinError(21,2.195277);
   houtFV_stack_4->SetBinError(22,1.994363);
   houtFV_stack_4->SetBinError(23,2.248958);
   houtFV_stack_4->SetBinError(24,2.414182);
   houtFV_stack_4->SetEntries(862);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.100726);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7953222);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6539899);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.520226);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.007312);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.18933);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6553177);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3605507);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.356662);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3442606);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2280886);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4401114);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4413619);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5085583);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1582371);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(22);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.836444);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.581505);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.992693);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.814588);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.901616);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.492822);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.383966);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.41253);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.466666);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.857434);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.914066);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.562984);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.209755);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.640466);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.02244);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.330004);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.875891);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.303511);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.806207);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.74918);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.3766);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.38433);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.88587);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.041033);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9118943);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5645918);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3682929);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5390838);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6082856);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3829726);
   hNCpi0inFVres_stack_7->SetBinError(7,0.526852);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5146443);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4773711);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5210948);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5407059);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4304984);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6019059);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6038432);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8262432);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8232543);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9145939);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8327334);
   hNCpi0inFVres_stack_7->SetBinError(19,0.813145);
   hNCpi0inFVres_stack_7->SetBinError(20,1.0728);
   hNCpi0inFVres_stack_7->SetBinError(21,1.084048);
   hNCpi0inFVres_stack_7->SetBinError(22,1.13148);
   hNCpi0inFVres_stack_7->SetBinError(23,1.205106);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8456038);
   hNCpi0inFVres_stack_7->SetEntries(2539);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.685962);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4042178);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.530268);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.031308);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.613304);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.5711221);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.13029);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4042178);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3763178);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3763178);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.449976);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.366276);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.878854);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.254508);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.323758);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.14274);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.882926);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.191906);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.679992);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.500302);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.40772);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.425812);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3997951);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1342881);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2180566);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3482878);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2517472);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2625936);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.41147);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1342881);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1313578);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1313578);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4071111);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4042329);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3111014);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3571158);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.32166);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3027526);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4514614);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5999094);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6426653);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6117412);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6769764);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4543969);
   hNCpi0inFVdis_stack_8->SetEntries(652);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,15.04245);
   hCCpi0inFV_stack_10->SetBinContent(2,3.762714);
   hCCpi0inFV_stack_10->SetBinContent(3,4.682718);
   hCCpi0inFV_stack_10->SetBinContent(4,3.466069);
   hCCpi0inFV_stack_10->SetBinContent(5,3.591364);
   hCCpi0inFV_stack_10->SetBinContent(6,4.106273);
   hCCpi0inFV_stack_10->SetBinContent(7,3.416383);
   hCCpi0inFV_stack_10->SetBinContent(8,2.192373);
   hCCpi0inFV_stack_10->SetBinContent(9,2.280733);
   hCCpi0inFV_stack_10->SetBinContent(10,3.757867);
   hCCpi0inFV_stack_10->SetBinContent(11,5.231622);
   hCCpi0inFV_stack_10->SetBinContent(12,3.324483);
   hCCpi0inFV_stack_10->SetBinContent(13,3.526654);
   hCCpi0inFV_stack_10->SetBinContent(14,5.729489);
   hCCpi0inFV_stack_10->SetBinContent(15,9.863562);
   hCCpi0inFV_stack_10->SetBinContent(16,9.45216);
   hCCpi0inFV_stack_10->SetBinContent(17,7.241416);
   hCCpi0inFV_stack_10->SetBinContent(18,8.911604);
   hCCpi0inFV_stack_10->SetBinContent(19,11.52861);
   hCCpi0inFV_stack_10->SetBinContent(20,12.39904);
   hCCpi0inFV_stack_10->SetBinContent(21,16.21707);
   hCCpi0inFV_stack_10->SetBinContent(22,18.27221);
   hCCpi0inFV_stack_10->SetBinContent(23,15.76004);
   hCCpi0inFV_stack_10->SetBinContent(24,13.23116);
   hCCpi0inFV_stack_10->SetBinError(1,1.938902);
   hCCpi0inFV_stack_10->SetBinError(2,0.9403637);
   hCCpi0inFV_stack_10->SetBinError(3,1.082871);
   hCCpi0inFV_stack_10->SetBinError(4,0.9216092);
   hCCpi0inFV_stack_10->SetBinError(5,0.9590379);
   hCCpi0inFV_stack_10->SetBinError(6,1.000664);
   hCCpi0inFV_stack_10->SetBinError(7,0.9821106);
   hCCpi0inFV_stack_10->SetBinError(8,0.7589683);
   hCCpi0inFV_stack_10->SetBinError(9,0.7433922);
   hCCpi0inFV_stack_10->SetBinError(10,0.9712764);
   hCCpi0inFV_stack_10->SetBinError(11,1.127464);
   hCCpi0inFV_stack_10->SetBinError(12,0.9211559);
   hCCpi0inFV_stack_10->SetBinError(13,0.974931);
   hCCpi0inFV_stack_10->SetBinError(14,1.189638);
   hCCpi0inFV_stack_10->SetBinError(15,1.618924);
   hCCpi0inFV_stack_10->SetBinError(16,1.611475);
   hCCpi0inFV_stack_10->SetBinError(17,1.399581);
   hCCpi0inFV_stack_10->SetBinError(18,1.517676);
   hCCpi0inFV_stack_10->SetBinError(19,1.730057);
   hCCpi0inFV_stack_10->SetBinError(20,1.748172);
   hCCpi0inFV_stack_10->SetBinError(21,2.027139);
   hCCpi0inFV_stack_10->SetBinError(22,2.112733);
   hCCpi0inFV_stack_10->SetBinError(23,2.010136);
   hCCpi0inFV_stack_10->SetBinError(24,1.851254);
   hCCpi0inFV_stack_10->SetEntries(790);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,2.394159);
   hNCinFV_stack_11->SetBinContent(2,0.9269427);
   hNCinFV_stack_11->SetBinContent(3,1.412273);
   hNCinFV_stack_11->SetBinContent(4,1.608988);
   hNCinFV_stack_11->SetBinContent(5,0.5901461);
   hNCinFV_stack_11->SetBinContent(6,0.9785053);
   hNCinFV_stack_11->SetBinContent(7,1.462145);
   hNCinFV_stack_11->SetBinContent(8,1.073786);
   hNCinFV_stack_11->SetBinContent(9,1.270501);
   hNCinFV_stack_11->SetBinContent(10,0.9303237);
   hNCinFV_stack_11->SetBinContent(11,0.9269427);
   hNCinFV_stack_11->SetBinContent(12,0.9252522);
   hNCinFV_stack_11->SetBinContent(13,0.9303237);
   hNCinFV_stack_11->SetBinContent(14,1.123658);
   hNCinFV_stack_11->SetBinContent(15,0.8770706);
   hNCinFV_stack_11->SetBinContent(16,1.070405);
   hNCinFV_stack_11->SetBinContent(17,1.020533);
   hNCinFV_stack_11->SetBinContent(18,0.9286332);
   hNCinFV_stack_11->SetBinContent(19,2.052291);
   hNCinFV_stack_11->SetBinContent(20,3.076205);
   hNCinFV_stack_11->SetBinContent(21,2.445722);
   hNCinFV_stack_11->SetBinContent(22,2.442341);
   hNCinFV_stack_11->SetBinContent(23,3.56769);
   hNCinFV_stack_11->SetBinContent(24,2.249007);
   hNCinFV_stack_11->SetBinError(1,0.785313);
   hNCinFV_stack_11->SetBinError(2,0.4800908);
   hNCinFV_stack_11->SetBinError(3,0.6510715);
   hNCinFV_stack_11->SetBinError(4,0.6801404);
   hNCinFV_stack_11->SetBinError(5,0.340721);
   hNCinFV_stack_11->SetBinError(6,0.4376048);
   hNCinFV_stack_11->SetBinError(7,0.6198731);
   hNCinFV_stack_11->SetBinError(8,0.5557297);
   hNCinFV_stack_11->SetBinError(9,0.5895188);
   hNCinFV_stack_11->SetBinError(10,0.4814682);
   hNCinFV_stack_11->SetBinError(11,0.4800908);
   hNCinFV_stack_11->SetBinError(12,0.4794006);
   hNCinFV_stack_11->SetBinError(13,0.4814682);
   hNCinFV_stack_11->SetBinError(14,0.5188295);
   hNCinFV_stack_11->SetBinError(15,0.5197486);
   hNCinFV_stack_11->SetBinError(16,0.5545368);
   hNCinFV_stack_11->SetBinError(17,0.5892049);
   hNCinFV_stack_11->SetBinError(18,0.48078);
   hNCinFV_stack_11->SetBinError(19,0.7073425);
   hNCinFV_stack_11->SetBinError(20,0.9213145);
   hNCinFV_stack_11->SetBinError(21,0.7600838);
   hNCinFV_stack_11->SetBinError(22,0.759212);
   hNCinFV_stack_11->SetBinError(23,0.919918);
   hNCinFV_stack_11->SetBinError(24,0.7341869);
   hNCinFV_stack_11->SetEntries(152);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,6.307448);
   hnumuCCinFV_stack_12->SetBinContent(2,2.228609);
   hnumuCCinFV_stack_12->SetBinContent(3,3.215053);
   hnumuCCinFV_stack_12->SetBinContent(4,2.979052);
   hnumuCCinFV_stack_12->SetBinContent(5,2.334962);
   hnumuCCinFV_stack_12->SetBinContent(6,3.065011);
   hnumuCCinFV_stack_12->SetBinContent(7,3.408979);
   hnumuCCinFV_stack_12->SetBinContent(8,2.445114);
   hnumuCCinFV_stack_12->SetBinContent(9,1.709447);
   hnumuCCinFV_stack_12->SetBinContent(10,2.314499);
   hnumuCCinFV_stack_12->SetBinContent(11,3.802274);
   hnumuCCinFV_stack_12->SetBinContent(12,2.200719);
   hnumuCCinFV_stack_12->SetBinContent(13,4.120979);
   hnumuCCinFV_stack_12->SetBinContent(14,2.646757);
   hnumuCCinFV_stack_12->SetBinContent(15,3.032607);
   hnumuCCinFV_stack_12->SetBinContent(16,1.969597);
   hnumuCCinFV_stack_12->SetBinContent(17,5.513152);
   hnumuCCinFV_stack_12->SetBinContent(18,6.136993);
   hnumuCCinFV_stack_12->SetBinContent(19,2.890077);
   hnumuCCinFV_stack_12->SetBinContent(20,5.0585);
   hnumuCCinFV_stack_12->SetBinContent(21,5.178781);
   hnumuCCinFV_stack_12->SetBinContent(22,6.028529);
   hnumuCCinFV_stack_12->SetBinContent(23,9.873775);
   hnumuCCinFV_stack_12->SetBinContent(24,9.577875);
   hnumuCCinFV_stack_12->SetBinError(1,2.455875);
   hnumuCCinFV_stack_12->SetBinError(2,0.7695444);
   hnumuCCinFV_stack_12->SetBinError(3,0.9631457);
   hnumuCCinFV_stack_12->SetBinError(4,0.9331686);
   hnumuCCinFV_stack_12->SetBinError(5,0.7537513);
   hnumuCCinFV_stack_12->SetBinError(6,0.8228692);
   hnumuCCinFV_stack_12->SetBinError(7,0.9484708);
   hnumuCCinFV_stack_12->SetBinError(8,0.807211);
   hnumuCCinFV_stack_12->SetBinError(9,0.6670118);
   hnumuCCinFV_stack_12->SetBinError(10,0.7937731);
   hnumuCCinFV_stack_12->SetBinError(11,1.117107);
   hnumuCCinFV_stack_12->SetBinError(12,0.7655346);
   hnumuCCinFV_stack_12->SetBinError(13,0.9582246);
   hnumuCCinFV_stack_12->SetBinError(14,0.8310501);
   hnumuCCinFV_stack_12->SetBinError(15,0.9081192);
   hnumuCCinFV_stack_12->SetBinError(16,0.731351);
   hnumuCCinFV_stack_12->SetBinError(17,2.151605);
   hnumuCCinFV_stack_12->SetBinError(18,1.453801);
   hnumuCCinFV_stack_12->SetBinError(19,0.8520042);
   hnumuCCinFV_stack_12->SetBinError(20,1.141469);
   hnumuCCinFV_stack_12->SetBinError(21,1.316359);
   hnumuCCinFV_stack_12->SetBinError(22,1.241877);
   hnumuCCinFV_stack_12->SetBinError(23,1.937068);
   hnumuCCinFV_stack_12->SetBinError(24,1.598543);
   hnumuCCinFV_stack_12->SetEntries(389);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.6959798);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.9398632);
   hnueCCinFV_stack_13->SetBinContent(21,0.414678);
   hnueCCinFV_stack_13->SetBinContent(22,0.6464702);
   hnueCCinFV_stack_13->SetBinContent(23,0.488997);
   hnueCCinFV_stack_13->SetBinContent(24,0.8501212);
   hnueCCinFV_stack_13->SetBinError(1,0.4110107);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.2463303);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.7687429);
   hnueCCinFV_stack_13->SetBinError(21,0.2936063);
   hnueCCinFV_stack_13->SetBinError(22,0.3740809);
   hnueCCinFV_stack_13->SetBinError(23,0.488997);
   hnueCCinFV_stack_13->SetBinError(24,0.5347523);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__23->SetBinContent(1,68.45561);
   hmcerror__23->SetBinContent(2,30.59305);
   hmcerror__23->SetBinContent(3,22.34587);
   hmcerror__23->SetBinContent(4,21.37607);
   hmcerror__23->SetBinContent(5,20.52218);
   hmcerror__23->SetBinContent(6,19.71835);
   hmcerror__23->SetBinContent(7,23.77432);
   hmcerror__23->SetBinContent(8,22.07386);
   hmcerror__23->SetBinContent(9,17.75986);
   hmcerror__23->SetBinContent(10,20.06364);
   hmcerror__23->SetBinContent(11,23.72365);
   hmcerror__23->SetBinContent(12,21.44057);
   hmcerror__23->SetBinContent(13,25.72225);
   hmcerror__23->SetBinContent(14,30.22502);
   hmcerror__23->SetBinContent(15,38.50568);
   hmcerror__23->SetBinContent(16,31.22879);
   hmcerror__23->SetBinContent(17,35.55347);
   hmcerror__23->SetBinContent(18,45.1087);
   hmcerror__23->SetBinContent(19,45.44394);
   hmcerror__23->SetBinContent(20,61.25216);
   hmcerror__23->SetBinContent(21,74.20278);
   hmcerror__23->SetBinContent(22,83.2001);
   hmcerror__23->SetBinContent(23,94.58311);
   hmcerror__23->SetBinContent(24,87.12477);
   hmcerror__23->SetBinError(1,26.25425);
   hmcerror__23->SetBinError(2,21.07933);
   hmcerror__23->SetBinError(3,14.81884);
   hmcerror__23->SetBinError(4,18.37507);
   hmcerror__23->SetBinError(5,17.57266);
   hmcerror__23->SetBinError(6,10.46684);
   hmcerror__23->SetBinError(7,16.38749);
   hmcerror__23->SetBinError(8,12.40767);
   hmcerror__23->SetBinError(9,9.032271);
   hmcerror__23->SetBinError(10,9.868822);
   hmcerror__23->SetBinError(11,9.72281);
   hmcerror__23->SetBinError(12,13.17953);
   hmcerror__23->SetBinError(13,12.8128);
   hmcerror__23->SetBinError(14,11.96504);
   hmcerror__23->SetBinError(15,16.05452);
   hmcerror__23->SetBinError(16,20.03026);
   hmcerror__23->SetBinError(17,13.40322);
   hmcerror__23->SetBinError(18,17.75881);
   hmcerror__23->SetBinError(19,15.64894);
   hmcerror__23->SetBinError(20,25.87638);
   hmcerror__23->SetBinError(21,26.13131);
   hmcerror__23->SetBinError(22,32.47129);
   hmcerror__23->SetBinError(23,27.55616);
   hmcerror__23->SetBinError(24,27.59217);
   hmcerror__23->SetBinError(25,0.3895343);
   hmcerror__23->SetEntries(948.2139);

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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3029[24] = {
   67,
   34,
   24,
   20,
   14,
   18,
   27,
   15,
   19,
   29,
   18,
   21,
   27,
   23,
   31,
   25,
   32,
   43,
   36,
   56,
   56,
   83,
   72,
   95};
   Double_t _felx3029[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3029[24] = {
   8.3119,
   5.9703,
   5.0476,
   4.6266,
   3.9102,
   4.4008,
   5.3414,
   4.0385,
   4.5151,
   5.5285,
   4.4008,
   4.7354,
   5.3414,
   4.9457,
   5.7094,
   5.1474,
   5.7977,
   6.6917,
   6.1381,
   7.6127,
   7.6127,
   9.234,
   8.6108,
   9.8686};
   Double_t _fehx3029[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3029[24] = {
   8.1094,
   5.7635,
   4.837,
   4.4133,
   3.6898,
   4.1858,
   5.1322,
   3.8197,
   4.3011,
   5.3201,
   4.1858,
   4.5229,
   5.1322,
   4.7346,
   5.5017,
   4.9374,
   5.5904,
   6.4868,
   5.9318,
   7.4094,
   7.4094,
   9.0323,
   8.4085,
   9.667};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(0.63208);
   Graph_Graph3029->SetMaximum(114.1247);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
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
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3030[24] = {
   0.3835223,
   0.6890236,
   0.6631579,
   0.8596094,
   0.8562763,
   0.530817,
   0.6892938,
   0.562098,
   0.5085777,
   0.4918758,
   0.4098362,
   0.6147007,
   0.4981214,
   0.3958654,
   0.4169391,
   0.6414037,
   0.3769876,
   0.3936892,
   0.344357,
   0.4224566,
   0.3521608,
   0.3902794,
   0.2913433,
   0.3166972};
   Double_t _fehx3030[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3030[24] = {
   0.3835223,
   0.6890236,
   0.6631579,
   0.8596094,
   0.8562763,
   0.530817,
   0.6892938,
   0.562098,
   0.5085777,
   0.4918758,
   0.4098362,
   0.6147007,
   0.4981214,
   0.3958654,
   0.4169391,
   0.6414037,
   0.3769876,
   0.3936892,
   0.344357,
   0.4224566,
   0.3521608,
   0.3902794,
   0.2913433,
   0.3166972};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Angle between photons [cosine]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
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
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3031[24] = {
   0.1830743,
   0.1912782,
   0.200558,
   0.2022495,
   0.2093652,
   0.1814657,
   0.1915832,
   0.2097401,
   0.2029933,
   0.2221594,
   0.1843843,
   0.2075836,
   0.1925649,
   0.1741934,
   0.1783633,
   0.2227715,
   0.2028974,
   0.1844305,
   0.1951132,
   0.1798856,
   0.1941336,
   0.1804045,
   0.1654493,
   0.156136};
   Double_t _fehx3031[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3031[24] = {
   0.1830743,
   0.1912782,
   0.200558,
   0.2022495,
   0.2093652,
   0.1814657,
   0.1915832,
   0.2097401,
   0.2029933,
   0.2221594,
   0.1843843,
   0.2075836,
   0.1925649,
   0.1741934,
   0.1783633,
   0.2227715,
   0.2028974,
   0.1844305,
   0.1951132,
   0.1798856,
   0.1941336,
   0.1804045,
   0.1654493,
   0.156136};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
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
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3032[24] = {
   0.9787364,
   1.111364,
   1.074024,
   0.9356256,
   0.6821887,
   0.9128552,
   1.135679,
   0.6795369,
   1.069828,
   1.4454,
   0.7587366,
   0.9794516,
   1.049675,
   0.7609589,
   0.8050759,
   0.8005433,
   0.9000527,
   0.9532529,
   0.7921848,
   0.9142535,
   0.7546887,
   0.997595,
   0.7612352,
   1.09039};
   Double_t _felx3032[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3032[24] = {
   0.1214203,
   0.1951522,
   0.2258852,
   0.2164383,
   0.1905353,
   0.223183,
   0.224671,
   0.182954,
   0.2542305,
   0.2755481,
   0.1855027,
   0.2208617,
   0.2076568,
   0.1636293,
   0.1482742,
   0.1648287,
   0.1630699,
   0.1483461,
   0.1350697,
   0.1242846,
   0.1025932,
   0.1109854,
   0.09103951,
   0.1132697};
   Double_t _fehx3032[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3032[24] = {
   0.1184622,
   0.1883925,
   0.2164606,
   0.2064598,
   0.1797957,
   0.2122794,
   0.2158716,
   0.1730418,
   0.2421809,
   0.2651612,
   0.17644,
   0.2109506,
   0.1995238,
   0.156645,
   0.1428802,
   0.1581041,
   0.1572392,
   0.1438037,
   0.13053,
   0.1209655,
   0.0998534,
   0.1085612,
   0.08890065,
   0.1109558};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0.3697626);
   Graph_Graph3032->SetMaximum(1.832452);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);

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

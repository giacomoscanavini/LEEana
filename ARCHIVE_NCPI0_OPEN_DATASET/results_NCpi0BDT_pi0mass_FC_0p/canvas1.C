#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Apr 18 17:24:01 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-0.4319786,338.4615,36.39988);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hmc__1->SetBinContent(0,20.64555);
   hmc__1->SetBinContent(2,5.715517);
   hmc__1->SetBinContent(3,7.185361);
   hmc__1->SetBinContent(4,8.408234);
   hmc__1->SetBinContent(5,8.785219);
   hmc__1->SetBinContent(6,9.687657);
   hmc__1->SetBinContent(7,11.186);
   hmc__1->SetBinContent(8,11.44498);
   hmc__1->SetBinContent(9,10.30673);
   hmc__1->SetBinContent(10,12.35206);
   hmc__1->SetBinContent(11,16.94116);
   hmc__1->SetBinContent(12,16.93229);
   hmc__1->SetBinContent(13,20.72535);
   hmc__1->SetBinContent(14,21.59893);
   hmc__1->SetBinContent(15,17.40723);
   hmc__1->SetBinContent(16,13.97316);
   hmc__1->SetBinContent(17,8.13148);
   hmc__1->SetBinContent(18,5.745663);
   hmc__1->SetBinContent(19,4.415999);
   hmc__1->SetBinContent(20,3.341024);
   hmc__1->SetBinContent(21,2.496001);
   hmc__1->SetBinContent(22,2.88912);
   hmc__1->SetBinContent(23,2.346343);
   hmc__1->SetBinContent(24,2.617048);
   hmc__1->SetBinContent(25,1.686445);
   hmc__1->SetBinContent(26,1.999794);
   hmc__1->SetBinContent(27,1.551939);
   hmc__1->SetBinContent(28,0.8985766);
   hmc__1->SetBinContent(29,0.8354047);
   hmc__1->SetBinContent(30,13.11081);
   hmc__1->SetBinError(0,1.124277);
   hmc__1->SetBinError(1,0.125509);
   hmc__1->SetBinError(2,3.115133);
   hmc__1->SetBinError(3,3.533616);
   hmc__1->SetBinError(4,3.544322);
   hmc__1->SetBinError(5,3.279336);
   hmc__1->SetBinError(6,3.726401);
   hmc__1->SetBinError(7,4.220133);
   hmc__1->SetBinError(8,4.966996);
   hmc__1->SetBinError(9,4.01335);
   hmc__1->SetBinError(10,4.224515);
   hmc__1->SetBinError(11,7.547745);
   hmc__1->SetBinError(12,6.278213);
   hmc__1->SetBinError(13,6.65138);
   hmc__1->SetBinError(14,5.784748);
   hmc__1->SetBinError(15,5.828557);
   hmc__1->SetBinError(16,5.19881);
   hmc__1->SetBinError(17,3.786975);
   hmc__1->SetBinError(18,2.362023);
   hmc__1->SetBinError(19,2.111776);
   hmc__1->SetBinError(20,1.840048);
   hmc__1->SetBinError(21,1.494158);
   hmc__1->SetBinError(22,2.794851);
   hmc__1->SetBinError(23,1.89833);
   hmc__1->SetBinError(24,2.186791);
   hmc__1->SetBinError(25,1.332085);
   hmc__1->SetBinError(26,1.67978);
   hmc__1->SetBinError(27,1.100142);
   hmc__1->SetBinError(28,0.887338);
   hmc__1->SetBinError(29,0.7620391);
   hmc__1->SetBinError(30,4.019331);
   hmc__1->SetMinimum(-0.4319786);
   hmc__1->SetMaximum(34.55829);
   hmc__1->SetEntries(262.4373);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",29,0,300);
   hs1_stack_1->SetMinimum(-4.223914e-09);
   hs1_stack_1->SetMaximum(22.67887);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hbadmatch_stack_1->SetBinContent(0,0.3179469);
   hbadmatch_stack_1->SetBinContent(2,0.0666905);
   hbadmatch_stack_1->SetBinContent(3,0.3232025);
   hbadmatch_stack_1->SetBinContent(4,0.3480321);
   hbadmatch_stack_1->SetBinContent(5,0.0127502);
   hbadmatch_stack_1->SetBinContent(6,0.2985594);
   hbadmatch_stack_1->SetBinContent(7,0.4505964);
   hbadmatch_stack_1->SetBinContent(8,0.4921446);
   hbadmatch_stack_1->SetBinContent(9,0.4175497);
   hbadmatch_stack_1->SetBinContent(10,0.3375593);
   hbadmatch_stack_1->SetBinContent(11,0.3867663);
   hbadmatch_stack_1->SetBinContent(12,0.1027822);
   hbadmatch_stack_1->SetBinContent(13,0.4019065);
   hbadmatch_stack_1->SetBinContent(14,0.3563363);
   hbadmatch_stack_1->SetBinContent(15,0.09580983);
   hbadmatch_stack_1->SetBinContent(16,0.3480321);
   hbadmatch_stack_1->SetBinContent(17,0.1643087);
   hbadmatch_stack_1->SetBinContent(18,0.03825059);
   hbadmatch_stack_1->SetBinContent(19,0.07470649);
   hbadmatch_stack_1->SetBinContent(20,0.149413);
   hbadmatch_stack_1->SetBinContent(21,0.06195629);
   hbadmatch_stack_1->SetBinContent(23,0.07470649);
   hbadmatch_stack_1->SetBinContent(26,0.06195629);
   hbadmatch_stack_1->SetBinContent(29,0.0149857);
   hbadmatch_stack_1->SetBinContent(30,0.06195629);
   hbadmatch_stack_1->SetBinError(0,0.1158315);
   hbadmatch_stack_1->SetBinError(2,0.02994056);
   hbadmatch_stack_1->SetBinError(3,0.1322542);
   hbadmatch_stack_1->SetBinError(4,0.1402876);
   hbadmatch_stack_1->SetBinError(5,0.0127502);
   hbadmatch_stack_1->SetBinError(6,0.1314846);
   hbadmatch_stack_1->SetBinError(7,0.1551534);
   hbadmatch_stack_1->SetBinError(8,0.1624303);
   hbadmatch_stack_1->SetBinError(9,0.2826652);
   hbadmatch_stack_1->SetBinError(10,0.1460742);
   hbadmatch_stack_1->SetBinError(11,0.1477184);
   hbadmatch_stack_1->SetBinError(12,0.06632185);
   hbadmatch_stack_1->SetBinError(13,0.171052);
   hbadmatch_stack_1->SetBinError(14,0.1415837);
   hbadmatch_stack_1->SetBinError(15,0.06668209);
   hbadmatch_stack_1->SetBinError(16,0.1402876);
   hbadmatch_stack_1->SetBinError(17,0.1003492);
   hbadmatch_stack_1->SetBinError(18,0.02208399);
   hbadmatch_stack_1->SetBinError(19,0.06325464);
   hbadmatch_stack_1->SetBinError(20,0.08945557);
   hbadmatch_stack_1->SetBinError(21,0.06195629);
   hbadmatch_stack_1->SetBinError(23,0.06325464);
   hbadmatch_stack_1->SetBinError(26,0.06195629);
   hbadmatch_stack_1->SetBinError(29,0.0149857);
   hbadmatch_stack_1->SetBinError(30,0.06195629);
   hbadmatch_stack_1->SetEntries(145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hext_stack_2->SetBinContent(0,1.61147);
   hext_stack_2->SetBinContent(2,0.6830363);
   hext_stack_2->SetBinContent(3,0.6830363);
   hext_stack_2->SetBinContent(4,1.390612);
   hext_stack_2->SetBinContent(5,1.451962);
   hext_stack_2->SetBinContent(6,1.228373);
   hext_stack_2->SetBinContent(7,0.992514);
   hext_stack_2->SetBinContent(8,0.1717779);
   hext_stack_2->SetBinContent(9,0.7566555);
   hext_stack_2->SetBinContent(10,0.582146);
   hext_stack_2->SetBinContent(11,1.476501);
   hext_stack_2->SetBinContent(12,0.3340175);
   hext_stack_2->SetBinContent(13,1.439692);
   hext_stack_2->SetBinContent(14,1.68782);
   hext_stack_2->SetBinContent(15,0.496257);
   hext_stack_2->SetBinContent(16,0.2849381);
   hext_stack_2->SetBinContent(17,0.09815882);
   hext_stack_2->SetBinContent(18,0.2603984);
   hext_stack_2->SetBinContent(19,0.2235888);
   hext_stack_2->SetBinContent(20,0.2235888);
   hext_stack_2->SetBinContent(21,0.04907941);
   hext_stack_2->SetBinContent(22,0.211319);
   hext_stack_2->SetBinContent(23,0.211319);
   hext_stack_2->SetBinContent(24,0.211319);
   hext_stack_2->SetBinContent(25,0.01226985);
   hext_stack_2->SetBinContent(27,0.211319);
   hext_stack_2->SetBinContent(28,0.03680956);
   hext_stack_2->SetBinContent(29,0.01226985);
   hext_stack_2->SetBinContent(30,0.4594475);
   hext_stack_2->SetBinError(0,0.49279);
   hext_stack_2->SetBinError(2,0.3462882);
   hext_stack_2->SetBinError(3,0.3462882);
   hext_stack_2->SetBinError(4,0.4900327);
   hext_stack_2->SetBinError(5,0.4908002);
   hext_stack_2->SetBinError(6,0.4482892);
   hext_stack_2->SetBinError(7,0.4011122);
   hext_stack_2->SetBinError(8,0.04590958);
   hext_stack_2->SetBinError(9,0.34759);
   hext_stack_2->SetBinError(10,0.2854809);
   hext_stack_2->SetBinError(11,0.4911068);
   hext_stack_2->SetBinError(12,0.2031664);
   hext_stack_2->SetBinError(13,0.4906468);
   hext_stack_2->SetBinError(14,0.5300538);
   hext_stack_2->SetBinError(15,0.2836291);
   hext_stack_2->SetBinError(16,0.2016789);
   hext_stack_2->SetBinError(17,0.03470438);
   hext_stack_2->SetBinError(18,0.2009311);
   hext_stack_2->SetBinError(19,0.199804);
   hext_stack_2->SetBinError(20,0.199804);
   hext_stack_2->SetBinError(21,0.0245397);
   hext_stack_2->SetBinError(22,0.1994269);
   hext_stack_2->SetBinError(23,0.1994269);
   hext_stack_2->SetBinError(24,0.1994269);
   hext_stack_2->SetBinError(25,0.01226985);
   hext_stack_2->SetBinError(27,0.1994269);
   hext_stack_2->SetBinError(28,0.02125201);
   hext_stack_2->SetBinError(29,0.01226985);
   hext_stack_2->SetBinError(30,0.2828318);
   hext_stack_2->SetEntries(360);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hdirt_stack_3->SetBinContent(0,0.2116068);
   hdirt_stack_3->SetBinContent(2,0.05789381);
   hdirt_stack_3->SetBinContent(3,0.08794745);
   hdirt_stack_3->SetBinContent(4,0.1076992);
   hdirt_stack_3->SetBinContent(5,0.279874);
   hdirt_stack_3->SetBinContent(6,0.27977);
   hdirt_stack_3->SetBinContent(7,0.2989445);
   hdirt_stack_3->SetBinContent(8,0.09352703);
   hdirt_stack_3->SetBinContent(9,0.1284102);
   hdirt_stack_3->SetBinContent(10,0.1714523);
   hdirt_stack_3->SetBinContent(11,0.2364327);
   hdirt_stack_3->SetBinContent(12,0.2130871);
   hdirt_stack_3->SetBinContent(13,0.298538);
   hdirt_stack_3->SetBinContent(14,0.1759713);
   hdirt_stack_3->SetBinContent(15,0.2775522);
   hdirt_stack_3->SetBinContent(16,0.09664445);
   hdirt_stack_3->SetBinContent(17,0.05242869);
   hdirt_stack_3->SetBinContent(19,0.01643923);
   hdirt_stack_3->SetBinContent(22,0.01875223);
   hdirt_stack_3->SetBinContent(23,0.009532444);
   hdirt_stack_3->SetBinContent(24,0.06188048);
   hdirt_stack_3->SetBinContent(26,0.008219617);
   hdirt_stack_3->SetBinContent(29,0.04420907);
   hdirt_stack_3->SetBinContent(30,0.04420907);
   hdirt_stack_3->SetBinError(0,0.08329931);
   hdirt_stack_3->SetBinError(2,0.05034964);
   hdirt_stack_3->SetBinError(3,0.04836475);
   hdirt_stack_3->SetBinError(4,0.06402188);
   hdirt_stack_3->SetBinError(5,0.1175881);
   hdirt_stack_3->SetBinError(6,0.1047143);
   hdirt_stack_3->SetBinError(7,0.1128767);
   hdirt_stack_3->SetBinError(8,0.04857792);
   hdirt_stack_3->SetBinError(9,0.07475376);
   hdirt_stack_3->SetBinError(10,0.08613352);
   hdirt_stack_3->SetBinError(11,0.1027161);
   hdirt_stack_3->SetBinError(12,0.09452328);
   hdirt_stack_3->SetBinError(13,0.2083838);
   hdirt_stack_3->SetBinError(14,0.07901332);
   hdirt_stack_3->SetBinError(15,0.110521);
   hdirt_stack_3->SetBinError(16,0.06305907);
   hdirt_stack_3->SetBinError(17,0.0449667);
   hdirt_stack_3->SetBinError(19,0.01162429);
   hdirt_stack_3->SetBinError(22,0.01336031);
   hdirt_stack_3->SetBinError(23,0.009532444);
   hdirt_stack_3->SetBinError(24,0.0532525);
   hdirt_stack_3->SetBinError(26,0.008219618);
   hdirt_stack_3->SetBinError(29,0.04420907);
   hdirt_stack_3->SetBinError(30,0.04420907);
   hdirt_stack_3->SetEntries(123);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   houtFV_stack_4->SetBinContent(0,3.390471);
   houtFV_stack_4->SetBinContent(2,0.566213);
   houtFV_stack_4->SetBinContent(3,0.972979);
   houtFV_stack_4->SetBinContent(4,1.562888);
   houtFV_stack_4->SetBinContent(5,0.9114239);
   houtFV_stack_4->SetBinContent(6,1.02039);
   houtFV_stack_4->SetBinContent(7,1.381173);
   houtFV_stack_4->SetBinContent(8,1.801929);
   houtFV_stack_4->SetBinContent(9,1.263403);
   houtFV_stack_4->SetBinContent(10,1.730999);
   houtFV_stack_4->SetBinContent(11,1.261807);
   houtFV_stack_4->SetBinContent(12,1.691357);
   houtFV_stack_4->SetBinContent(13,1.85212);
   houtFV_stack_4->SetBinContent(14,1.801871);
   houtFV_stack_4->SetBinContent(15,1.688016);
   houtFV_stack_4->SetBinContent(16,1.306466);
   houtFV_stack_4->SetBinContent(17,0.646858);
   houtFV_stack_4->SetBinContent(18,0.4591944);
   houtFV_stack_4->SetBinContent(19,0.5466511);
   houtFV_stack_4->SetBinContent(20,0.26237);
   houtFV_stack_4->SetBinContent(21,0.4621277);
   houtFV_stack_4->SetBinContent(22,0.2860757);
   houtFV_stack_4->SetBinContent(23,0.2605754);
   houtFV_stack_4->SetBinContent(24,0.3352818);
   houtFV_stack_4->SetBinContent(25,0.149413);
   houtFV_stack_4->SetBinContent(26,0.1129571);
   houtFV_stack_4->SetBinContent(27,0.08745668);
   houtFV_stack_4->SetBinContent(28,0.07470649);
   houtFV_stack_4->SetBinContent(29,0.0127502);
   houtFV_stack_4->SetBinContent(30,0.9601485);
   houtFV_stack_4->SetBinError(0,0.4310481);
   houtFV_stack_4->SetBinError(2,0.1800332);
   houtFV_stack_4->SetBinError(3,0.221335);
   houtFV_stack_4->SetBinError(4,0.2983357);
   houtFV_stack_4->SetBinError(5,0.2196296);
   houtFV_stack_4->SetBinError(6,0.2359893);
   houtFV_stack_4->SetBinError(7,0.2748347);
   houtFV_stack_4->SetBinError(8,0.3246284);
   houtFV_stack_4->SetBinError(9,0.2663564);
   houtFV_stack_4->SetBinError(10,0.3036264);
   houtFV_stack_4->SetBinError(11,0.2520503);
   houtFV_stack_4->SetBinError(12,0.3105873);
   houtFV_stack_4->SetBinError(13,0.3221767);
   houtFV_stack_4->SetBinError(14,0.3091075);
   houtFV_stack_4->SetBinError(15,0.3043386);
   houtFV_stack_4->SetBinError(16,0.2674565);
   houtFV_stack_4->SetBinError(17,0.1889053);
   houtFV_stack_4->SetBinError(18,0.1649097);
   houtFV_stack_4->SetBinError(19,0.1770845);
   houtFV_stack_4->SetBinError(20,0.1117638);
   houtFV_stack_4->SetBinError(21,0.1651624);
   houtFV_stack_4->SetBinError(22,0.1258651);
   houtFV_stack_4->SetBinError(23,0.1245668);
   houtFV_stack_4->SetBinError(24,0.139707);
   houtFV_stack_4->SetBinError(25,0.08945557);
   houtFV_stack_4->SetBinError(26,0.0669989);
   houtFV_stack_4->SetBinError(27,0.06452687);
   houtFV_stack_4->SetBinError(28,0.06325464);
   houtFV_stack_4->SetBinError(29,0.0127502);
   houtFV_stack_4->SetBinError(30,0.2244873);
   houtFV_stack_4->SetEntries(747);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hNCpi0inFV_stack_5->SetBinContent(0,9.976007);
   hNCpi0inFV_stack_5->SetBinContent(2,2.787846);
   hNCpi0inFV_stack_5->SetBinContent(3,3.270746);
   hNCpi0inFV_stack_5->SetBinContent(4,3.161378);
   hNCpi0inFV_stack_5->SetBinContent(5,4.099696);
   hNCpi0inFV_stack_5->SetBinContent(6,4.690169);
   hNCpi0inFV_stack_5->SetBinContent(7,4.941584);
   hNCpi0inFV_stack_5->SetBinContent(8,6.237094);
   hNCpi0inFV_stack_5->SetBinContent(9,5.33325);
   hNCpi0inFV_stack_5->SetBinContent(10,6.845702);
   hNCpi0inFV_stack_5->SetBinContent(11,9.61306);
   hNCpi0inFV_stack_5->SetBinContent(12,11.23705);
   hNCpi0inFV_stack_5->SetBinContent(13,11.40837);
   hNCpi0inFV_stack_5->SetBinContent(14,13.39258);
   hNCpi0inFV_stack_5->SetBinContent(15,10.98423);
   hNCpi0inFV_stack_5->SetBinContent(16,8.9831);
   hNCpi0inFV_stack_5->SetBinContent(17,4.82485);
   hNCpi0inFV_stack_5->SetBinContent(18,3.534911);
   hNCpi0inFV_stack_5->SetBinContent(19,2.46352);
   hNCpi0inFV_stack_5->SetBinContent(20,1.982414);
   hNCpi0inFV_stack_5->SetBinContent(21,1.293716);
   hNCpi0inFV_stack_5->SetBinContent(22,1.741955);
   hNCpi0inFV_stack_5->SetBinContent(23,1.173393);
   hNCpi0inFV_stack_5->SetBinContent(24,1.353878);
   hNCpi0inFV_stack_5->SetBinContent(25,1.144303);
   hNCpi0inFV_stack_5->SetBinContent(26,1.24451);
   hNCpi0inFV_stack_5->SetBinContent(27,0.9074333);
   hNCpi0inFV_stack_5->SetBinContent(28,0.5229454);
   hNCpi0inFV_stack_5->SetBinContent(29,0.5229454);
   hNCpi0inFV_stack_5->SetBinContent(30,5.553781);
   hNCpi0inFV_stack_5->SetBinError(0,0.7277464);
   hNCpi0inFV_stack_5->SetBinError(2,0.3890931);
   hNCpi0inFV_stack_5->SetBinError(3,0.4265437);
   hNCpi0inFV_stack_5->SetBinError(4,0.4140038);
   hNCpi0inFV_stack_5->SetBinError(5,0.4624383);
   hNCpi0inFV_stack_5->SetBinError(6,0.5078989);
   hNCpi0inFV_stack_5->SetBinError(7,0.516976);
   hNCpi0inFV_stack_5->SetBinError(8,0.5793176);
   hNCpi0inFV_stack_5->SetBinError(9,0.5275938);
   hNCpi0inFV_stack_5->SetBinError(10,0.6089387);
   hNCpi0inFV_stack_5->SetBinError(11,0.7273692);
   hNCpi0inFV_stack_5->SetBinError(12,0.7827919);
   hNCpi0inFV_stack_5->SetBinError(13,0.791923);
   hNCpi0inFV_stack_5->SetBinError(14,0.8518264);
   hNCpi0inFV_stack_5->SetBinError(15,0.7669649);
   hNCpi0inFV_stack_5->SetBinError(16,0.7018305);
   hNCpi0inFV_stack_5->SetBinError(17,0.4974777);
   hNCpi0inFV_stack_5->SetBinError(18,0.4374985);
   hNCpi0inFV_stack_5->SetBinError(19,0.3675101);
   hNCpi0inFV_stack_5->SetBinError(20,0.3185778);
   hNCpi0inFV_stack_5->SetBinError(21,0.2671524);
   hNCpi0inFV_stack_5->SetBinError(22,0.3088322);
   hNCpi0inFV_stack_5->SetBinError(23,0.240087);
   hNCpi0inFV_stack_5->SetBinError(24,0.2797048);
   hNCpi0inFV_stack_5->SetBinError(25,0.2517303);
   hNCpi0inFV_stack_5->SetBinError(26,0.2601815);
   hNCpi0inFV_stack_5->SetBinError(27,0.2262788);
   hNCpi0inFV_stack_5->SetBinError(28,0.167356);
   hNCpi0inFV_stack_5->SetBinError(29,0.167356);
   hNCpi0inFV_stack_5->SetBinError(30,0.5444357);
   hNCpi0inFV_stack_5->SetEntries(3802);

   ci = 1438;
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
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hCCpi0inFV_stack_6->SetBinContent(0,2.444928);
   hCCpi0inFV_stack_6->SetBinContent(2,0.6486669);
   hCCpi0inFV_stack_6->SetBinContent(3,0.945684);
   hCCpi0inFV_stack_6->SetBinContent(4,0.8946831);
   hCCpi0inFV_stack_6->SetBinContent(5,0.9074333);
   hCCpi0inFV_stack_6->SetBinContent(6,1.368423);
   hCCpi0inFV_stack_6->SetBinContent(7,1.390334);
   hCCpi0inFV_stack_6->SetBinContent(8,1.25726);
   hCCpi0inFV_stack_6->SetBinContent(9,1.346511);
   hCCpi0inFV_stack_6->SetBinContent(10,1.643543);
   hCCpi0inFV_stack_6->SetBinContent(11,2.7478);
   hCCpi0inFV_stack_6->SetBinContent(12,2.341402);
   hCCpi0inFV_stack_6->SetBinContent(13,2.657549);
   hCCpi0inFV_stack_6->SetBinContent(14,2.943575);
   hCCpi0inFV_stack_6->SetBinContent(15,2.836633);
   hCCpi0inFV_stack_6->SetBinContent(16,2.364759);
   hCCpi0inFV_stack_6->SetBinContent(17,1.780205);
   hCCpi0inFV_stack_6->SetBinContent(18,0.8217714);
   hCCpi0inFV_stack_6->SetBinContent(19,0.6602628);
   hCCpi0inFV_stack_6->SetBinContent(20,0.4609891);
   hCCpi0inFV_stack_6->SetBinContent(21,0.3498267);
   hCCpi0inFV_stack_6->SetBinContent(22,0.4998326);
   hCCpi0inFV_stack_6->SetBinContent(23,0.3625769);
   hCCpi0inFV_stack_6->SetBinContent(24,0.2241195);
   hCCpi0inFV_stack_6->SetBinContent(25,0.3370765);
   hCCpi0inFV_stack_6->SetBinContent(26,0.3735324);
   hCCpi0inFV_stack_6->SetBinContent(27,0.2131639);
   hCCpi0inFV_stack_6->SetBinContent(28,0.2496199);
   hCCpi0inFV_stack_6->SetBinContent(29,0.07470649);
   hCCpi0inFV_stack_6->SetBinContent(30,3.725125);
   hCCpi0inFV_stack_6->SetBinError(0,0.3768211);
   hCCpi0inFV_stack_6->SetBinError(2,0.193749);
   hCCpi0inFV_stack_6->SetBinError(3,0.2273539);
   hCCpi0inFV_stack_6->SetBinError(4,0.2259193);
   hCCpi0inFV_stack_6->SetBinError(5,0.2262788);
   hCCpi0inFV_stack_6->SetBinError(6,0.2745388);
   hCCpi0inFV_stack_6->SetBinError(7,0.2859164);
   hCCpi0inFV_stack_6->SetBinError(8,0.2604937);
   hCCpi0inFV_stack_6->SetBinError(9,0.2626689);
   hCCpi0inFV_stack_6->SetBinError(10,0.2966906);
   hCCpi0inFV_stack_6->SetBinError(11,0.392341);
   hCCpi0inFV_stack_6->SetBinError(12,0.3526482);
   hCCpi0inFV_stack_6->SetBinError(13,0.3750399);
   hCCpi0inFV_stack_6->SetBinError(14,0.3916902);
   hCCpi0inFV_stack_6->SetBinError(15,0.3957107);
   hCCpi0inFV_stack_6->SetBinError(16,0.3685619);
   hCCpi0inFV_stack_6->SetBinError(17,0.3096208);
   hCCpi0inFV_stack_6->SetBinError(18,0.2097919);
   hCCpi0inFV_stack_6->SetBinError(19,0.1937161);
   hCCpi0inFV_stack_6->SetBinError(20,0.1554653);
   hCCpi0inFV_stack_6->SetBinError(21,0.1290537);
   hCCpi0inFV_stack_6->SetBinError(22,0.1665818);
   hCCpi0inFV_stack_6->SetBinError(23,0.1296821);
   hCCpi0inFV_stack_6->SetBinError(24,0.1095603);
   hCCpi0inFV_stack_6->SetBinError(25,0.1284224);
   hCCpi0inFV_stack_6->SetBinError(26,0.1414417);
   hCCpi0inFV_stack_6->SetBinError(27,0.09388896);
   hCCpi0inFV_stack_6->SetBinError(28,0.1110342);
   hCCpi0inFV_stack_6->SetBinError(29,0.06325464);
   hCCpi0inFV_stack_6->SetBinError(30,0.4471761);
   hCCpi0inFV_stack_6->SetEntries(1001);

   ci = 1439;
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
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hNCinFV_stack_7->SetBinContent(0,1.630792);
   hNCinFV_stack_7->SetBinContent(2,0.2113693);
   hNCinFV_stack_7->SetBinContent(3,0.4464442);
   hNCinFV_stack_7->SetBinContent(4,0.5484458);
   hNCinFV_stack_7->SetBinContent(5,0.5976519);
   hNCinFV_stack_7->SetBinContent(6,0.3151655);
   hNCinFV_stack_7->SetBinContent(7,0.8946831);
   hNCinFV_stack_7->SetBinContent(8,0.3990328);
   hNCinFV_stack_7->SetBinContent(9,0.1129571);
   hNCinFV_stack_7->SetBinContent(10,0.5849017);
   hNCinFV_stack_7->SetBinContent(11,0.3498267);
   hNCinFV_stack_7->SetBinContent(12,0.5119899);
   hNCinFV_stack_7->SetBinContent(13,1.317422);
   hNCinFV_stack_7->SetBinContent(14,0.5994466);
   hNCinFV_stack_7->SetBinContent(15,0.4992397);
   hNCinFV_stack_7->SetBinContent(16,0.2878704);
   hNCinFV_stack_7->SetBinContent(17,0.2605754);
   hNCinFV_stack_7->SetBinContent(18,0.3115761);
   hNCinFV_stack_7->SetBinContent(19,0.1366628);
   hNCinFV_stack_7->SetBinContent(20,0.07470649);
   hNCinFV_stack_7->SetBinContent(21,0.149413);
   hNCinFV_stack_7->SetBinContent(22,0.02550039);
   hNCinFV_stack_7->SetBinContent(23,0.149413);
   hNCinFV_stack_7->SetBinContent(24,0.3225317);
   hNCinFV_stack_7->SetBinContent(25,0.0127502);
   hNCinFV_stack_7->SetBinContent(26,0.1366628);
   hNCinFV_stack_7->SetBinContent(27,0.08745668);
   hNCinFV_stack_7->SetBinContent(29,0.06195629);
   hNCinFV_stack_7->SetBinContent(30,0.9693896);
   hNCinFV_stack_7->SetBinError(0,0.2964165);
   hNCinFV_stack_7->SetBinError(2,0.1088158);
   hNCinFV_stack_7->SetBinError(3,0.1644161);
   hNCinFV_stack_7->SetBinError(4,0.1683246);
   hNCinFV_stack_7->SetBinError(5,0.1789111);
   hNCinFV_stack_7->SetBinError(6,0.1005767);
   hNCinFV_stack_7->SetBinError(7,0.2259193);
   hNCinFV_stack_7->SetBinError(8,0.1425864);
   hNCinFV_stack_7->SetBinError(9,0.0669989);
   hNCinFV_stack_7->SetBinError(10,0.1784562);
   hNCinFV_stack_7->SetBinError(11,0.1290537);
   hNCinFV_stack_7->SetBinError(12,0.1575428);
   hNCinFV_stack_7->SetBinError(13,0.273352);
   hNCinFV_stack_7->SetBinError(14,0.1702453);
   hNCinFV_stack_7->SetBinError(15,0.157026);
   hNCinFV_stack_7->SetBinError(16,0.113209);
   hNCinFV_stack_7->SetBinError(17,0.1245668);
   hNCinFV_stack_7->SetBinError(18,0.1271502);
   hNCinFV_stack_7->SetBinError(19,0.08854226);
   hNCinFV_stack_7->SetBinError(20,0.06325464);
   hNCinFV_stack_7->SetBinError(21,0.08945557);
   hNCinFV_stack_7->SetBinError(22,0.0180315);
   hNCinFV_stack_7->SetBinError(23,0.08945557);
   hNCinFV_stack_7->SetBinError(24,0.139124);
   hNCinFV_stack_7->SetBinError(25,0.0127502);
   hNCinFV_stack_7->SetBinError(26,0.08854226);
   hNCinFV_stack_7->SetBinError(27,0.06452687);
   hNCinFV_stack_7->SetBinError(29,0.06195629);
   hNCinFV_stack_7->SetBinError(30,0.2346075);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
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
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hnumuCCinFV_stack_8->SetBinContent(0,0.8416101);
   hnumuCCinFV_stack_8->SetBinContent(2,0.2241195);
   hnumuCCinFV_stack_8->SetBinContent(3,0.3625689);
   hnumuCCinFV_stack_8->SetBinContent(4,0.3150013);
   hnumuCCinFV_stack_8->SetBinContent(5,0.5244286);
   hnumuCCinFV_stack_8->SetBinContent(6,0.4456441);
   hnumuCCinFV_stack_8->SetBinContent(7,0.693833);
   hnumuCCinFV_stack_8->SetBinContent(8,0.9219036);
   hnumuCCinFV_stack_8->SetBinContent(9,0.8382995);
   hnumuCCinFV_stack_8->SetBinContent(10,0.4430006);
   hnumuCCinFV_stack_8->SetBinContent(11,0.8434619);
   hnumuCCinFV_stack_8->SetBinContent(12,0.500605);
   hnumuCCinFV_stack_8->SetBinContent(13,1.087353);
   hnumuCCinFV_stack_8->SetBinContent(14,0.6413311);
   hnumuCCinFV_stack_8->SetBinContent(15,0.5294925);
   hnumuCCinFV_stack_8->SetBinContent(16,0.2885955);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2078772);
   hnumuCCinFV_stack_8->SetBinContent(18,0.2854195);
   hnumuCCinFV_stack_8->SetBinContent(19,0.1986191);
   hnumuCCinFV_stack_8->SetBinContent(20,0.1875429);
   hnumuCCinFV_stack_8->SetBinContent(21,0.1298823);
   hnumuCCinFV_stack_8->SetBinContent(22,0.1056847);
   hnumuCCinFV_stack_8->SetBinContent(23,0.1048276);
   hnumuCCinFV_stack_8->SetBinContent(24,0.1080377);
   hnumuCCinFV_stack_8->SetBinContent(25,0.01445224);
   hnumuCCinFV_stack_8->SetBinContent(26,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(27,0.02982152);
   hnumuCCinFV_stack_8->SetBinContent(28,0.01449529);
   hnumuCCinFV_stack_8->SetBinContent(29,0.09158169);
   hnumuCCinFV_stack_8->SetBinContent(30,0.9289981);
   hnumuCCinFV_stack_8->SetBinError(0,0.2083148);
   hnumuCCinFV_stack_8->SetBinError(2,0.1095603);
   hnumuCCinFV_stack_8->SetBinError(3,0.1467909);
   hnumuCCinFV_stack_8->SetBinError(4,0.1334062);
   hnumuCCinFV_stack_8->SetBinError(5,0.1858662);
   hnumuCCinFV_stack_8->SetBinError(6,0.214396);
   hnumuCCinFV_stack_8->SetBinError(7,0.2226122);
   hnumuCCinFV_stack_8->SetBinError(8,0.4478065);
   hnumuCCinFV_stack_8->SetBinError(9,0.5061038);
   hnumuCCinFV_stack_8->SetBinError(10,0.1650207);
   hnumuCCinFV_stack_8->SetBinError(11,0.2292175);
   hnumuCCinFV_stack_8->SetBinError(12,0.1570317);
   hnumuCCinFV_stack_8->SetBinError(13,0.355672);
   hnumuCCinFV_stack_8->SetBinError(14,0.2354185);
   hnumuCCinFV_stack_8->SetBinError(15,0.1690895);
   hnumuCCinFV_stack_8->SetBinError(16,0.1261414);
   hnumuCCinFV_stack_8->SetBinError(17,0.1037025);
   hnumuCCinFV_stack_8->SetBinError(18,0.1205526);
   hnumuCCinFV_stack_8->SetBinError(19,0.1080662);
   hnumuCCinFV_stack_8->SetBinError(20,0.1011443);
   hnumuCCinFV_stack_8->SetBinError(21,0.06904062);
   hnumuCCinFV_stack_8->SetBinError(22,0.08218675);
   hnumuCCinFV_stack_8->SetBinError(23,0.06682415);
   hnumuCCinFV_stack_8->SetBinError(24,0.06698146);
   hnumuCCinFV_stack_8->SetBinError(25,0.01445224);
   hnumuCCinFV_stack_8->SetBinError(26,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(27,0.02130722);
   hnumuCCinFV_stack_8->SetBinError(28,0.01449529);
   hnumuCCinFV_stack_8->SetBinError(29,0.07985594);
   hnumuCCinFV_stack_8->SetBinError(30,0.2324968);
   hnumuCCinFV_stack_8->SetEntries(284);

   ci = 1441;
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
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hnueCCinFV_stack_9->SetBinContent(0,0.2207192);
   hnueCCinFV_stack_9->SetBinContent(2,0.4696815);
   hnueCCinFV_stack_9->SetBinContent(3,0.09275308);
   hnueCCinFV_stack_9->SetBinContent(4,0.07949371);
   hnueCCinFV_stack_9->SetBinContent(6,0.04116329);
   hnueCCinFV_stack_9->SetBinContent(7,0.1423349);
   hnueCCinFV_stack_9->SetBinContent(8,0.07030885);
   hnueCCinFV_stack_9->SetBinContent(9,0.1096915);
   hnueCCinFV_stack_9->SetBinContent(10,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(11,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(12,3.875852e-07);
   hnueCCinFV_stack_9->SetBinContent(13,0.2624);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(17,0.09621814);
   hnueCCinFV_stack_9->SetBinContent(18,0.03414221);
   hnueCCinFV_stack_9->SetBinContent(19,0.09554926);
   hnueCCinFV_stack_9->SetBinContent(25,0.01618016);
   hnueCCinFV_stack_9->SetBinContent(27,0.01528837);
   hnueCCinFV_stack_9->SetBinContent(30,0.4077536);
   hnueCCinFV_stack_9->SetBinError(0,0.1101444);
   hnueCCinFV_stack_9->SetBinError(2,0.4696815);
   hnueCCinFV_stack_9->SetBinError(3,0.06577864);
   hnueCCinFV_stack_9->SetBinError(4,0.06439055);
   hnueCCinFV_stack_9->SetBinError(6,0.0300616);
   hnueCCinFV_stack_9->SetBinError(7,0.08953517);
   hnueCCinFV_stack_9->SetBinError(8,0.07030884);
   hnueCCinFV_stack_9->SetBinError(9,0.07821272);
   hnueCCinFV_stack_9->SetBinError(10,0.0127502);
   hnueCCinFV_stack_9->SetBinError(11,0.0180315);
   hnueCCinFV_stack_9->SetBinError(12,3.875852e-07);
   hnueCCinFV_stack_9->SetBinError(13,0.138031);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(17,0.08163059);
   hnueCCinFV_stack_9->SetBinError(18,0.02468554);
   hnueCCinFV_stack_9->SetBinError(19,0.08377501);
   hnueCCinFV_stack_9->SetBinError(25,0.01618016);
   hnueCCinFV_stack_9->SetBinError(27,0.01528837);
   hnueCCinFV_stack_9->SetBinError(30,0.1560521);
   hnueCCinFV_stack_9->SetEntries(46);

   ci = 1442;
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
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);
   hmcerror__2->SetBinContent(0,20.64555);
   hmcerror__2->SetBinContent(2,5.715517);
   hmcerror__2->SetBinContent(3,7.185361);
   hmcerror__2->SetBinContent(4,8.408234);
   hmcerror__2->SetBinContent(5,8.785219);
   hmcerror__2->SetBinContent(6,9.687657);
   hmcerror__2->SetBinContent(7,11.186);
   hmcerror__2->SetBinContent(8,11.44498);
   hmcerror__2->SetBinContent(9,10.30673);
   hmcerror__2->SetBinContent(10,12.35206);
   hmcerror__2->SetBinContent(11,16.94116);
   hmcerror__2->SetBinContent(12,16.93229);
   hmcerror__2->SetBinContent(13,20.72535);
   hmcerror__2->SetBinContent(14,21.59893);
   hmcerror__2->SetBinContent(15,17.40723);
   hmcerror__2->SetBinContent(16,13.97316);
   hmcerror__2->SetBinContent(17,8.13148);
   hmcerror__2->SetBinContent(18,5.745663);
   hmcerror__2->SetBinContent(19,4.415999);
   hmcerror__2->SetBinContent(20,3.341024);
   hmcerror__2->SetBinContent(21,2.496001);
   hmcerror__2->SetBinContent(22,2.88912);
   hmcerror__2->SetBinContent(23,2.346343);
   hmcerror__2->SetBinContent(24,2.617048);
   hmcerror__2->SetBinContent(25,1.686445);
   hmcerror__2->SetBinContent(26,1.999794);
   hmcerror__2->SetBinContent(27,1.551939);
   hmcerror__2->SetBinContent(28,0.8985766);
   hmcerror__2->SetBinContent(29,0.8354047);
   hmcerror__2->SetBinContent(30,13.11081);
   hmcerror__2->SetBinError(0,1.124277);
   hmcerror__2->SetBinError(1,0.125509);
   hmcerror__2->SetBinError(2,3.115133);
   hmcerror__2->SetBinError(3,3.533616);
   hmcerror__2->SetBinError(4,3.544322);
   hmcerror__2->SetBinError(5,3.279336);
   hmcerror__2->SetBinError(6,3.726401);
   hmcerror__2->SetBinError(7,4.220133);
   hmcerror__2->SetBinError(8,4.966996);
   hmcerror__2->SetBinError(9,4.01335);
   hmcerror__2->SetBinError(10,4.224515);
   hmcerror__2->SetBinError(11,7.547745);
   hmcerror__2->SetBinError(12,6.278213);
   hmcerror__2->SetBinError(13,6.65138);
   hmcerror__2->SetBinError(14,5.784748);
   hmcerror__2->SetBinError(15,5.828557);
   hmcerror__2->SetBinError(16,5.19881);
   hmcerror__2->SetBinError(17,3.786975);
   hmcerror__2->SetBinError(18,2.362023);
   hmcerror__2->SetBinError(19,2.111776);
   hmcerror__2->SetBinError(20,1.840048);
   hmcerror__2->SetBinError(21,1.494158);
   hmcerror__2->SetBinError(22,2.794851);
   hmcerror__2->SetBinError(23,1.89833);
   hmcerror__2->SetBinError(24,2.186791);
   hmcerror__2->SetBinError(25,1.332085);
   hmcerror__2->SetBinError(26,1.67978);
   hmcerror__2->SetBinError(27,1.100142);
   hmcerror__2->SetBinError(28,0.887338);
   hmcerror__2->SetBinError(29,0.7620391);
   hmcerror__2->SetBinError(30,4.019331);
   hmcerror__2->SetEntries(262.4373);

   ci = TColor::GetColor("#666666");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[29] = {
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
   Double_t _fy3001[29] = {
   0,
   6,
   7,
   6,
   13,
   12,
   13,
   7,
   10,
   18,
   13,
   19,
   19,
   21,
   12,
   9,
   6,
   8,
   3,
   2,
   5,
   7,
   1,
   3,
   1,
   1,
   0,
   1,
   2};
   Double_t _felx3001[29] = {
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
   Double_t _fely3001[29] = {
   0,
   2.67925,
   2.85954,
   2.67925,
   3.77763,
   3.64022,
   3.77763,
   2.85954,
   3.34883,
   4.4008,
   3.77763,
   4.5151,
   4.5151,
   4.7354,
   3.64022,
   3.19354,
   2.67925,
   3.0307,
   2.143368,
   2,
   2.48995,
   2.85954,
   1,
   2.143368,
   1,
   1,
   0,
   1,
   2};
   Double_t _fehx3001[29] = {
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
   Double_t _fehy3001[29] = {
   1.1478,
   2.41858,
   2.61053,
   2.41858,
   3.5552,
   3.4155,
   3.5552,
   2.61053,
   3.1179,
   4.1858,
   3.5552,
   4.3011,
   4.3011,
   4.5229,
   3.4155,
   2.9582,
   2.41858,
   2.7896,
   1.72422,
   1.51917,
   2.21064,
   2.61053,
   1.35971,
   1.72422,
   1.35971,
   1.35971,
   1.1478,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,330);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(28.07519);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.97#pm0.06(data err)#pm0.21(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.89/29","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 225.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.1","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 15.4","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 3.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 24.5","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  129.7","F");

   ci = 1438;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 32.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 9.4","F");

   ci = 1440;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10.2","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.6","F");

   ci = 1442;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_10_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[29] = {
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
   Double_t _fy3002[29] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[29] = {
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
   Double_t _fely3002[29] = {
   0,
   0.5450309,
   0.4917798,
   0.4215299,
   0.3732788,
   0.3846545,
   0.3772693,
   0.4339891,
   0.3893912,
   0.3420091,
   0.4455271,
   0.3707836,
   0.3209297,
   0.2678257,
   0.3348354,
   0.3720569,
   0.4657177,
   0.4110967,
   0.4782103,
   0.5507436,
   0.5986207,
   0.9673711,
   0.809059,
   0.8355946,
   0.7898777,
   0.8399762,
   0.7088823,
   0.9874929,
   0.9121796};
   Double_t _fehx3002[29] = {
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
   Double_t _fehy3002[29] = {
   0,
   0.5450309,
   0.4917798,
   0.4215299,
   0.3732788,
   0.3846545,
   0.3772693,
   0.4339891,
   0.3893912,
   0.3420091,
   0.4455271,
   0.3707836,
   0.3209297,
   0.2678257,
   0.3348354,
   0.3720569,
   0.4657177,
   0.4110967,
   0.4782103,
   0.5507436,
   0.5986207,
   0.9673711,
   0.809059,
   0.8355946,
   0.7898777,
   0.8399762,
   0.7088823,
   0.9874929,
   0.9121796};
   grae = new TGraphAsymmErrors(29,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,330);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} mass [MeV/c^{2}]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[29] = {
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
   Double_t _fy3003[29] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[29] = {
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
   Double_t _fely3003[29] = {
   0,
   0.2397253,
   0.2270885,
   0.1994652,
   0.1829058,
   0.1956782,
   0.1968445,
   0.2273932,
   0.2164933,
   0.1986388,
   0.2039144,
   0.2136887,
   0.2135778,
   0.2048168,
   0.2151368,
   0.2195028,
   0.2261711,
   0.2444454,
   0.244522,
   0.2426174,
   0.2828552,
   0.2826401,
   0.2904454,
   0.2604548,
   0.3189977,
   0.3086608,
   0.3159967,
   0.4134469,
   0.4206051};
   Double_t _fehx3003[29] = {
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
   Double_t _fehy3003[29] = {
   0,
   0.2397253,
   0.2270885,
   0.1994652,
   0.1829058,
   0.1956782,
   0.1968445,
   0.2273932,
   0.2164933,
   0.1986388,
   0.2039144,
   0.2136887,
   0.2135778,
   0.2048168,
   0.2151368,
   0.2195028,
   0.2261711,
   0.2444454,
   0.244522,
   0.2426174,
   0.2828552,
   0.2826401,
   0.2904454,
   0.2604548,
   0.3189977,
   0.3086608,
   0.3159967,
   0.4134469,
   0.4206051};
   grae = new TGraphAsymmErrors(29,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,330);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[29] = {
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
   Double_t _fy3004[29] = {
   10,
   1.049774,
   0.9742029,
   0.7135863,
   1.479758,
   1.23869,
   1.162167,
   0.6116219,
   0.97024,
   1.457247,
   0.767362,
   1.122117,
   0.9167517,
   0.9722705,
   0.6893687,
   0.6440921,
   0.737873,
   1.392355,
   0.6793479,
   0.5986188,
   2.003204,
   2.422883,
   0.4261951,
   1.14633,
   0.5929633,
   0.5000514,
   0,
   1.112871,
   2.394049};
   Double_t _felx3004[29] = {
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
   Double_t _fely3004[29] = {
   0,
   0.4687677,
   0.3979675,
   0.318646,
   0.4299984,
   0.3757585,
   0.3377106,
   0.2498511,
   0.3249169,
   0.3562808,
   0.2229854,
   0.2666563,
   0.217854,
   0.2192424,
   0.2091211,
   0.2285482,
   0.3294911,
   0.5274761,
   0.4853642,
   0.5986188,
   0.9975756,
   0.9897617,
   0.4261951,
   0.8190022,
   0.5929633,
   0.5000514,
   0,
   1.112871,
   2.394049};
   Double_t _fehx3004[29] = {
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
   Double_t _fehy3004[29] = {
   0,
   0.4231603,
   0.3633123,
   0.2876442,
   0.4046797,
   0.352562,
   0.3178259,
   0.2280939,
   0.3025111,
   0.3388747,
   0.2098558,
   0.2540177,
   0.2075285,
   0.2094039,
   0.1962116,
   0.2117059,
   0.2974342,
   0.4855141,
   0.3904484,
   0.4547019,
   0.8856726,
   0.9035728,
   0.5795017,
   0.6588416,
   0.8062581,
   0.6799249,
   0.7395907,
   1.513182,
   1.818484};
   grae = new TGraphAsymmErrors(29,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,330);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_0p_bnb_10_pi0_mass_all",29,0,300);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

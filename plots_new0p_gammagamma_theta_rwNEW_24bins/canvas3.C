#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 20:57:02 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-2.787125,3.553846,308.1974);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__7->SetBinContent(1,36.29081);
   hmc__7->SetBinContent(2,42.77684);
   hmc__7->SetBinContent(3,58.39577);
   hmc__7->SetBinContent(4,101.6414);
   hmc__7->SetBinContent(5,139.3563);
   hmc__7->SetBinContent(6,138.962);
   hmc__7->SetBinContent(7,127.6666);
   hmc__7->SetBinContent(8,115.4482);
   hmc__7->SetBinContent(9,104.7794);
   hmc__7->SetBinContent(10,91.17474);
   hmc__7->SetBinContent(11,97.26881);
   hmc__7->SetBinContent(12,76.36539);
   hmc__7->SetBinContent(13,72.55093);
   hmc__7->SetBinContent(14,58.84026);
   hmc__7->SetBinContent(15,54.57209);
   hmc__7->SetBinContent(16,53.28104);
   hmc__7->SetBinContent(17,47.23048);
   hmc__7->SetBinContent(18,36.96105);
   hmc__7->SetBinContent(19,34.8042);
   hmc__7->SetBinContent(20,34.54488);
   hmc__7->SetBinContent(21,35.1384);
   hmc__7->SetBinContent(22,32.62772);
   hmc__7->SetBinContent(23,27.33413);
   hmc__7->SetBinContent(24,16.78194);
   hmc__7->SetBinError(1,20.32547);
   hmc__7->SetBinError(2,15.03578);
   hmc__7->SetBinError(3,21.05538);
   hmc__7->SetBinError(4,29.85502);
   hmc__7->SetBinError(5,36.35044);
   hmc__7->SetBinError(6,46.99251);
   hmc__7->SetBinError(7,38.02844);
   hmc__7->SetBinError(8,37.15866);
   hmc__7->SetBinError(9,32.57358);
   hmc__7->SetBinError(10,28.59502);
   hmc__7->SetBinError(11,30.5986);
   hmc__7->SetBinError(12,25.36266);
   hmc__7->SetBinError(13,22.88274);
   hmc__7->SetBinError(14,18.35753);
   hmc__7->SetBinError(15,18.63316);
   hmc__7->SetBinError(16,22.68886);
   hmc__7->SetBinError(17,16.7316);
   hmc__7->SetBinError(18,16.93805);
   hmc__7->SetBinError(19,19.06824);
   hmc__7->SetBinError(20,20.92829);
   hmc__7->SetBinError(21,21.27638);
   hmc__7->SetBinError(22,18.72103);
   hmc__7->SetBinError(23,18.55179);
   hmc__7->SetBinError(24,11.46534);
   hmc__7->SetBinError(25,0.3895343);
   hmc__7->SetMinimum(-2.787125);
   hmc__7->SetMaximum(292.6482);
   hmc__7->SetEntries(1602.903);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,3.15);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(146.3241);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.469987);
   hbadmatch_stack_1->SetBinContent(2,2.363788);
   hbadmatch_stack_1->SetBinContent(3,1.514485);
   hbadmatch_stack_1->SetBinContent(4,1.760663);
   hbadmatch_stack_1->SetBinContent(5,4.465576);
   hbadmatch_stack_1->SetBinContent(6,6.138143);
   hbadmatch_stack_1->SetBinContent(7,3.196146);
   hbadmatch_stack_1->SetBinContent(8,3.116222);
   hbadmatch_stack_1->SetBinContent(9,2.918589);
   hbadmatch_stack_1->SetBinContent(10,2.441564);
   hbadmatch_stack_1->SetBinContent(11,4.190762);
   hbadmatch_stack_1->SetBinContent(12,3.731705);
   hbadmatch_stack_1->SetBinContent(13,2.041977);
   hbadmatch_stack_1->SetBinContent(14,1.467217);
   hbadmatch_stack_1->SetBinContent(15,2.535436);
   hbadmatch_stack_1->SetBinContent(16,2.488042);
   hbadmatch_stack_1->SetBinContent(17,1.905376);
   hbadmatch_stack_1->SetBinContent(18,1.196939);
   hbadmatch_stack_1->SetBinContent(19,0.7336084);
   hbadmatch_stack_1->SetBinContent(20,1.637912);
   hbadmatch_stack_1->SetBinContent(21,2.357111);
   hbadmatch_stack_1->SetBinContent(22,1.321927);
   hbadmatch_stack_1->SetBinContent(23,1.073786);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinError(1,0.6825031);
   hbadmatch_stack_1->SetBinError(2,0.8183593);
   hbadmatch_stack_1->SetBinError(3,0.6380131);
   hbadmatch_stack_1->SetBinError(4,0.6373697);
   hbadmatch_stack_1->SetBinError(5,1.504209);
   hbadmatch_stack_1->SetBinError(6,1.369612);
   hbadmatch_stack_1->SetBinError(7,0.8820123);
   hbadmatch_stack_1->SetBinError(8,0.8538955);
   hbadmatch_stack_1->SetBinError(9,0.8306778);
   hbadmatch_stack_1->SetBinError(10,0.8077891);
   hbadmatch_stack_1->SetBinError(11,1.166872);
   hbadmatch_stack_1->SetBinError(12,1.017118);
   hbadmatch_stack_1->SetBinError(13,0.7464935);
   hbadmatch_stack_1->SetBinError(14,0.6214735);
   hbadmatch_stack_1->SetBinError(15,0.8703842);
   hbadmatch_stack_1->SetBinError(16,0.8549953);
   hbadmatch_stack_1->SetBinError(17,0.6951413);
   hbadmatch_stack_1->SetBinError(18,0.488948);
   hbadmatch_stack_1->SetBinError(19,0.4394482);
   hbadmatch_stack_1->SetBinError(20,0.7507199);
   hbadmatch_stack_1->SetBinError(21,0.7650509);
   hbadmatch_stack_1->SetBinError(22,0.6206167);
   hbadmatch_stack_1->SetBinError(23,0.5557297);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,6.007964);
   hext_stack_2->SetBinContent(2,8.992609);
   hext_stack_2->SetBinContent(3,9.394799);
   hext_stack_2->SetBinContent(4,16.6082);
   hext_stack_2->SetBinContent(5,23.26659);
   hext_stack_2->SetBinContent(6,17.74579);
   hext_stack_2->SetBinContent(7,13.04978);
   hext_stack_2->SetBinContent(8,17.48206);
   hext_stack_2->SetBinContent(9,13.25884);
   hext_stack_2->SetBinContent(10,9.801397);
   hext_stack_2->SetBinContent(11,15.94504);
   hext_stack_2->SetBinContent(12,9.651356);
   hext_stack_2->SetBinContent(13,12.19627);
   hext_stack_2->SetBinContent(14,9.972982);
   hext_stack_2->SetBinContent(15,8.57883);
   hext_stack_2->SetBinContent(16,6.325181);
   hext_stack_2->SetBinContent(17,7.855014);
   hext_stack_2->SetBinContent(18,7.784402);
   hext_stack_2->SetBinContent(19,3.326175);
   hext_stack_2->SetBinContent(20,5.276968);
   hext_stack_2->SetBinContent(21,7.276832);
   hext_stack_2->SetBinContent(22,2.834603);
   hext_stack_2->SetBinContent(23,2.752401);
   hext_stack_2->SetBinContent(24,1.939204);
   hext_stack_2->SetBinError(1,1.466119);
   hext_stack_2->SetBinError(2,1.973683);
   hext_stack_2->SetBinError(3,1.981319);
   hext_stack_2->SetBinError(4,2.640739);
   hext_stack_2->SetBinError(5,3.131281);
   hext_stack_2->SetBinError(6,2.722018);
   hext_stack_2->SetBinError(7,2.297478);
   hext_stack_2->SetBinError(8,2.822736);
   hext_stack_2->SetBinError(9,2.448108);
   hext_stack_2->SetBinError(10,2.022609);
   hext_stack_2->SetBinError(11,2.676833);
   hext_stack_2->SetBinError(12,1.889012);
   hext_stack_2->SetBinError(13,2.412187);
   hext_stack_2->SetBinError(14,2.002479);
   hext_stack_2->SetBinError(15,1.982751);
   hext_stack_2->SetBinError(16,1.567144);
   hext_stack_2->SetBinError(17,1.859985);
   hext_stack_2->SetBinError(18,1.825754);
   hext_stack_2->SetBinError(19,1.054716);
   hext_stack_2->SetBinError(20,1.370748);
   hext_stack_2->SetBinError(21,1.837184);
   hext_stack_2->SetBinError(22,1.106046);
   hext_stack_2->SetBinError(23,1.07854);
   hext_stack_2->SetBinError(24,0.912471);
   hext_stack_2->SetEntries(595);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.4762587);
   hdirt_stack_3->SetBinContent(2,0.8257372);
   hdirt_stack_3->SetBinContent(3,1.456393);
   hdirt_stack_3->SetBinContent(4,1.291994);
   hdirt_stack_3->SetBinContent(5,1.476601);
   hdirt_stack_3->SetBinContent(6,1.057319);
   hdirt_stack_3->SetBinContent(7,2.040102);
   hdirt_stack_3->SetBinContent(8,1.633308);
   hdirt_stack_3->SetBinContent(9,1.876863);
   hdirt_stack_3->SetBinContent(10,1.138098);
   hdirt_stack_3->SetBinContent(11,0.4762587);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.8176458);
   hdirt_stack_3->SetBinContent(15,1.165545);
   hdirt_stack_3->SetBinContent(16,0.4142144);
   hdirt_stack_3->SetBinContent(17,1.132946);
   hdirt_stack_3->SetBinContent(18,0.2761429);
   hdirt_stack_3->SetBinContent(19,1.530722);
   hdirt_stack_3->SetBinContent(20,1.004645);
   hdirt_stack_3->SetBinContent(21,0.7352656);
   hdirt_stack_3->SetBinContent(22,0.5570828);
   hdirt_stack_3->SetBinContent(23,1.048687);
   hdirt_stack_3->SetBinContent(24,0.620618);
   hdirt_stack_3->SetBinError(1,0.3652866);
   hdirt_stack_3->SetBinError(2,0.4829962);
   hdirt_stack_3->SetBinError(3,0.6253535);
   hdirt_stack_3->SetBinError(4,0.5694815);
   hdirt_stack_3->SetBinError(5,0.6954374);
   hdirt_stack_3->SetBinError(6,0.5503785);
   hdirt_stack_3->SetBinError(7,0.7759675);
   hdirt_stack_3->SetBinError(8,0.6728223);
   hdirt_stack_3->SetBinError(9,1.084937);
   hdirt_stack_3->SetBinError(10,0.4442437);
   hdirt_stack_3->SetBinError(11,0.3652866);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.4797697);
   hdirt_stack_3->SetBinError(15,0.6016336);
   hdirt_stack_3->SetBinError(16,0.2391468);
   hdirt_stack_3->SetBinError(17,0.526479);
   hdirt_stack_3->SetBinError(18,0.1952625);
   hdirt_stack_3->SetBinError(19,0.6590102);
   hdirt_stack_3->SetBinError(20,0.5859191);
   hdirt_stack_3->SetBinError(21,0.4583545);
   hdirt_stack_3->SetBinError(22,0.4028472);
   hdirt_stack_3->SetBinError(23,0.5656933);
   hdirt_stack_3->SetBinError(24,0.3927772);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,8.611481);
   houtFV_stack_4->SetBinContent(2,10.22359);
   houtFV_stack_4->SetBinContent(3,15.10805);
   houtFV_stack_4->SetBinContent(4,22.10469);
   houtFV_stack_4->SetBinContent(5,28.6623);
   houtFV_stack_4->SetBinContent(6,25.98918);
   houtFV_stack_4->SetBinContent(7,23.25212);
   houtFV_stack_4->SetBinContent(8,19.2589);
   houtFV_stack_4->SetBinContent(9,20.07321);
   houtFV_stack_4->SetBinContent(10,14.5417);
   houtFV_stack_4->SetBinContent(11,15.90527);
   houtFV_stack_4->SetBinContent(12,13.561);
   houtFV_stack_4->SetBinContent(13,12.30714);
   houtFV_stack_4->SetBinContent(14,8.863385);
   houtFV_stack_4->SetBinContent(15,12.33791);
   houtFV_stack_4->SetBinContent(16,12.60913);
   houtFV_stack_4->SetBinContent(17,5.405539);
   houtFV_stack_4->SetBinContent(18,7.172204);
   houtFV_stack_4->SetBinContent(19,8.523022);
   houtFV_stack_4->SetBinContent(20,6.40694);
   houtFV_stack_4->SetBinContent(21,12.11263);
   houtFV_stack_4->SetBinContent(22,9.518831);
   houtFV_stack_4->SetBinContent(23,7.731132);
   houtFV_stack_4->SetBinContent(24,4.729021);
   houtFV_stack_4->SetBinError(1,1.506706);
   houtFV_stack_4->SetBinError(2,1.639939);
   houtFV_stack_4->SetBinError(3,1.930783);
   houtFV_stack_4->SetBinError(4,2.403823);
   houtFV_stack_4->SetBinError(5,2.701924);
   houtFV_stack_4->SetBinError(6,2.6893);
   houtFV_stack_4->SetBinError(7,2.422288);
   houtFV_stack_4->SetBinError(8,2.259206);
   houtFV_stack_4->SetBinError(9,2.295939);
   houtFV_stack_4->SetBinError(10,1.875327);
   houtFV_stack_4->SetBinError(11,1.985775);
   houtFV_stack_4->SetBinError(12,1.803213);
   houtFV_stack_4->SetBinError(13,1.790406);
   houtFV_stack_4->SetBinError(14,1.510664);
   houtFV_stack_4->SetBinError(15,2.15929);
   houtFV_stack_4->SetBinError(16,1.777459);
   houtFV_stack_4->SetBinError(17,1.235964);
   houtFV_stack_4->SetBinError(18,1.306858);
   houtFV_stack_4->SetBinError(19,1.485807);
   houtFV_stack_4->SetBinError(20,1.286215);
   houtFV_stack_4->SetBinError(21,1.735762);
   houtFV_stack_4->SetBinError(22,1.513178);
   houtFV_stack_4->SetBinError(23,1.368494);
   houtFV_stack_4->SetBinError(24,1.099501);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.618208);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.95068);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.10563);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.906754);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.9044259);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8086039);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.04659);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.01869);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4355182);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4171059);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5062571);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3123499);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2693006);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2623461);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4086225);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4076689);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2201295);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.733216);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.134769);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.166588);
   hNCpi0inFVres_stack_7->SetBinContent(4,18.34931);
   hNCpi0inFVres_stack_7->SetBinContent(5,25.34394);
   hNCpi0inFVres_stack_7->SetBinContent(6,26.43501);
   hNCpi0inFVres_stack_7->SetBinContent(7,28.57138);
   hNCpi0inFVres_stack_7->SetBinContent(8,25.29028);
   hNCpi0inFVres_stack_7->SetBinContent(9,21.87951);
   hNCpi0inFVres_stack_7->SetBinContent(10,18.99084);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.36375);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.59348);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.28319);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.72028);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.752407);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.255616);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.192664);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.192168);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.9893);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.515664);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.485683);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.020032);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.571216);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.324422);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5597461);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4907052);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8892765);
   hNCpi0inFVres_stack_7->SetBinError(4,1.437833);
   hNCpi0inFVres_stack_7->SetBinError(5,1.694199);
   hNCpi0inFVres_stack_7->SetBinError(6,1.595485);
   hNCpi0inFVres_stack_7->SetBinError(7,1.752282);
   hNCpi0inFVres_stack_7->SetBinError(8,1.624476);
   hNCpi0inFVres_stack_7->SetBinError(9,1.549804);
   hNCpi0inFVres_stack_7->SetBinError(10,1.432658);
   hNCpi0inFVres_stack_7->SetBinError(11,1.396151);
   hNCpi0inFVres_stack_7->SetBinError(12,1.106582);
   hNCpi0inFVres_stack_7->SetBinError(13,1.113537);
   hNCpi0inFVres_stack_7->SetBinError(14,1.047901);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8738982);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9870476);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8161718);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8440308);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7000587);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6807029);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5613079);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7836944);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6234526);
   hNCpi0inFVres_stack_7->SetBinError(24,0.299954);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.98979);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.492822);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.60783);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.278028);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.001436);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.639647);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.944724);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.439196);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.769428);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.24737);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.43943);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.02941);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.812508);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.659389);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.37118);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.616544);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.593884);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.078394);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.283072);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.753636);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.087108);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8366721);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.613304);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.336735);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3829726);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5199112);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8408353);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8761967);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9057201);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9498044);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7825346);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7489457);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5439948);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4621819);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6939167);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3782854);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3634175);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5382413);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3887721);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5849638);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4919605);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3388471);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2941681);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3505157);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3199419);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2608584);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2517472);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,6.186284);
   hCCpi0inFV_stack_10->SetBinContent(2,7.283913);
   hCCpi0inFV_stack_10->SetBinContent(3,9.926351);
   hCCpi0inFV_stack_10->SetBinContent(4,14.21789);
   hCCpi0inFV_stack_10->SetBinContent(5,24.5827);
   hCCpi0inFV_stack_10->SetBinContent(6,31.45258);
   hCCpi0inFV_stack_10->SetBinContent(7,26.17492);
   hCCpi0inFV_stack_10->SetBinContent(8,25.15827);
   hCCpi0inFV_stack_10->SetBinContent(9,20.76828);
   hCCpi0inFV_stack_10->SetBinContent(10,23.50169);
   hCCpi0inFV_stack_10->SetBinContent(11,23.77482);
   hCCpi0inFV_stack_10->SetBinContent(12,14.28224);
   hCCpi0inFV_stack_10->SetBinContent(13,15.37291);
   hCCpi0inFV_stack_10->SetBinContent(14,10.22153);
   hCCpi0inFV_stack_10->SetBinContent(15,6.68242);
   hCCpi0inFV_stack_10->SetBinContent(16,9.80362);
   hCCpi0inFV_stack_10->SetBinContent(17,10.2387);
   hCCpi0inFV_stack_10->SetBinContent(18,5.444301);
   hCCpi0inFV_stack_10->SetBinContent(19,6.250637);
   hCCpi0inFV_stack_10->SetBinContent(20,6.355279);
   hCCpi0inFV_stack_10->SetBinContent(21,3.720687);
   hCCpi0inFV_stack_10->SetBinContent(22,9.004997);
   hCCpi0inFV_stack_10->SetBinContent(23,5.287195);
   hCCpi0inFV_stack_10->SetBinContent(24,3.403708);
   hCCpi0inFV_stack_10->SetBinError(1,1.338591);
   hCCpi0inFV_stack_10->SetBinError(2,1.33098);
   hCCpi0inFV_stack_10->SetBinError(3,1.545294);
   hCCpi0inFV_stack_10->SetBinError(4,1.899407);
   hCCpi0inFV_stack_10->SetBinError(5,2.458788);
   hCCpi0inFV_stack_10->SetBinError(6,2.840987);
   hCCpi0inFV_stack_10->SetBinError(7,2.595009);
   hCCpi0inFV_stack_10->SetBinError(8,2.549435);
   hCCpi0inFV_stack_10->SetBinError(9,2.362952);
   hCCpi0inFV_stack_10->SetBinError(10,2.437033);
   hCCpi0inFV_stack_10->SetBinError(11,2.505638);
   hCCpi0inFV_stack_10->SetBinError(12,1.909209);
   hCCpi0inFV_stack_10->SetBinError(13,2.01238);
   hCCpi0inFV_stack_10->SetBinError(14,1.597863);
   hCCpi0inFV_stack_10->SetBinError(15,1.254319);
   hCCpi0inFV_stack_10->SetBinError(16,1.58705);
   hCCpi0inFV_stack_10->SetBinError(17,1.596323);
   hCCpi0inFV_stack_10->SetBinError(18,1.173871);
   hCCpi0inFV_stack_10->SetBinError(19,1.210784);
   hCCpi0inFV_stack_10->SetBinError(20,1.241112);
   hCCpi0inFV_stack_10->SetBinError(21,0.853592);
   hCCpi0inFV_stack_10->SetBinError(22,1.496649);
   hCCpi0inFV_stack_10->SetBinError(23,1.17468);
   hCCpi0inFV_stack_10->SetBinError(24,0.9062487);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.5884556);
   hNCinFV_stack_11->SetBinContent(2,1.268811);
   hNCinFV_stack_11->SetBinContent(3,2.642437);
   hNCinFV_stack_11->SetBinContent(4,5.476519);
   hNCinFV_stack_11->SetBinContent(5,5.426647);
   hNCinFV_stack_11->SetBinContent(6,5.476519);
   hNCinFV_stack_11->SetBinContent(7,7.916086);
   hNCinFV_stack_11->SetBinContent(8,4.839881);
   hNCinFV_stack_11->SetBinContent(9,2.053982);
   hNCinFV_stack_11->SetBinContent(10,3.216286);
   hNCinFV_stack_11->SetBinContent(11,2.929362);
   hNCinFV_stack_11->SetBinContent(12,2.87949);
   hNCinFV_stack_11->SetBinContent(13,4.729994);
   hNCinFV_stack_11->SetBinContent(14,4.001457);
   hNCinFV_stack_11->SetBinContent(15,3.611408);
   hNCinFV_stack_11->SetBinContent(16,2.437729);
   hNCinFV_stack_11->SetBinContent(17,2.835772);
   hNCinFV_stack_11->SetBinContent(18,1.125349);
   hNCinFV_stack_11->SetBinContent(19,3.36313);
   hNCinFV_stack_11->SetBinContent(20,1.512017);
   hNCinFV_stack_11->SetBinContent(21,1.465526);
   hNCinFV_stack_11->SetBinContent(22,1.610679);
   hNCinFV_stack_11->SetBinContent(23,1.270501);
   hNCinFV_stack_11->SetBinContent(24,0.7834804);
   hNCinFV_stack_11->SetBinError(1,0.3397478);
   hNCinFV_stack_11->SetBinError(2,0.5889569);
   hNCinFV_stack_11->SetBinError(3,0.7851269);
   hNCinFV_stack_11->SetBinError(4,1.126747);
   hNCinFV_stack_11->SetBinError(5,1.144207);
   hNCinFV_stack_11->SetBinError(6,1.126747);
   hNCinFV_stack_11->SetBinError(7,1.429428);
   hNCinFV_stack_11->SetBinError(8,1.092906);
   hNCinFV_stack_11->SetBinError(9,0.7078105);
   hNCinFV_stack_11->SetBinError(10,0.9615195);
   hNCinFV_stack_11->SetBinError(11,0.8777653);
   hNCinFV_stack_11->SetBinError(12,0.9000686);
   hNCinFV_stack_11->SetBinError(13,1.126842);
   hNCinFV_stack_11->SetBinError(14,1.038578);
   hNCinFV_stack_11->SetBinError(15,1.001287);
   hNCinFV_stack_11->SetBinError(16,0.785873);
   hNCinFV_stack_11->SetBinError(17,0.808577);
   hNCinFV_stack_11->SetBinError(18,0.5194673);
   hNCinFV_stack_11->SetBinError(19,1.001433);
   hNCinFV_stack_11->SetBinError(20,0.5870189);
   hNCinFV_stack_11->SetBinError(21,0.6209405);
   hNCinFV_stack_11->SetBinError(22,0.6806271);
   hNCinFV_stack_11->SetBinError(23,0.5895188);
   hNCinFV_stack_11->SetBinError(24,0.3917439);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,8.65798);
   hnumuCCinFV_stack_12->SetBinContent(2,6.089589);
   hnumuCCinFV_stack_12->SetBinContent(3,6.621108);
   hnumuCCinFV_stack_12->SetBinContent(4,13.05592);
   hnumuCCinFV_stack_12->SetBinContent(5,14.82705);
   hnumuCCinFV_stack_12->SetBinContent(6,13.37731);
   hnumuCCinFV_stack_12->SetBinContent(7,12.78205);
   hnumuCCinFV_stack_12->SetBinContent(8,11.97579);
   hnumuCCinFV_stack_12->SetBinContent(9,16.45576);
   hnumuCCinFV_stack_12->SetBinContent(10,12.81503);
   hnumuCCinFV_stack_12->SetBinContent(11,12.16963);
   hnumuCCinFV_stack_12->SetBinContent(12,12.98188);
   hnumuCCinFV_stack_12->SetBinContent(13,11.15736);
   hnumuCCinFV_stack_12->SetBinContent(14,10.94897);
   hnumuCCinFV_stack_12->SetBinContent(15,8.97736);
   hnumuCCinFV_stack_12->SetBinContent(16,8.34);
   hnumuCCinFV_stack_12->SetBinContent(17,7.347781);
   hnumuCCinFV_stack_12->SetBinContent(18,5.551652);
   hnumuCCinFV_stack_12->SetBinContent(19,3.82695);
   hnumuCCinFV_stack_12->SetBinContent(20,6.830717);
   hnumuCCinFV_stack_12->SetBinContent(21,2.533438);
   hnumuCCinFV_stack_12->SetBinContent(22,1.588762);
   hnumuCCinFV_stack_12->SetBinContent(23,3.092182);
   hnumuCCinFV_stack_12->SetBinContent(24,2.353209);
   hnumuCCinFV_stack_12->SetBinError(1,1.714859);
   hnumuCCinFV_stack_12->SetBinError(2,1.380228);
   hnumuCCinFV_stack_12->SetBinError(3,1.438448);
   hnumuCCinFV_stack_12->SetBinError(4,1.865856);
   hnumuCCinFV_stack_12->SetBinError(5,2.200786);
   hnumuCCinFV_stack_12->SetBinError(6,1.881258);
   hnumuCCinFV_stack_12->SetBinError(7,2.2039);
   hnumuCCinFV_stack_12->SetBinError(8,2.152627);
   hnumuCCinFV_stack_12->SetBinError(9,2.834863);
   hnumuCCinFV_stack_12->SetBinError(10,1.915352);
   hnumuCCinFV_stack_12->SetBinError(11,1.843097);
   hnumuCCinFV_stack_12->SetBinError(12,1.865221);
   hnumuCCinFV_stack_12->SetBinError(13,1.828589);
   hnumuCCinFV_stack_12->SetBinError(14,2.023354);
   hnumuCCinFV_stack_12->SetBinError(15,1.524028);
   hnumuCCinFV_stack_12->SetBinError(16,1.774509);
   hnumuCCinFV_stack_12->SetBinError(17,1.66919);
   hnumuCCinFV_stack_12->SetBinError(18,1.294389);
   hnumuCCinFV_stack_12->SetBinError(19,1.027105);
   hnumuCCinFV_stack_12->SetBinError(20,1.354561);
   hnumuCCinFV_stack_12->SetBinError(21,0.8616544);
   hnumuCCinFV_stack_12->SetBinError(22,0.6102697);
   hnumuCCinFV_stack_12->SetBinError(23,2.288868);
   hnumuCCinFV_stack_12->SetBinError(24,0.8246514);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.4298986);
   hnueCCinFV_stack_13->SetBinContent(2,0.8501212);
   hnueCCinFV_stack_13->SetBinContent(3,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(4,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(5,2.269064);
   hnueCCinFV_stack_13->SetBinContent(6,1.489063);
   hnueCCinFV_stack_13->SetBinContent(7,1.693028);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.6163551);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.4469234);
   hnueCCinFV_stack_13->SetBinContent(17,1.569686);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.3025491);
   hnueCCinFV_stack_13->SetBinError(1,0.305076);
   hnueCCinFV_stack_13->SetBinError(2,0.5347523);
   hnueCCinFV_stack_13->SetBinError(3,0.2192101);
   hnueCCinFV_stack_13->SetBinError(4,0.4494399);
   hnueCCinFV_stack_13->SetBinError(5,1.307659);
   hnueCCinFV_stack_13->SetBinError(6,0.6345901);
   hnueCCinFV_stack_13->SetBinError(7,0.8900724);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3622113);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.3182782);
   hnueCCinFV_stack_13->SetBinError(17,1.569686);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.3025491);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__8->SetBinContent(1,36.29081);
   hmcerror__8->SetBinContent(2,42.77684);
   hmcerror__8->SetBinContent(3,58.39577);
   hmcerror__8->SetBinContent(4,101.6414);
   hmcerror__8->SetBinContent(5,139.3563);
   hmcerror__8->SetBinContent(6,138.962);
   hmcerror__8->SetBinContent(7,127.6666);
   hmcerror__8->SetBinContent(8,115.4482);
   hmcerror__8->SetBinContent(9,104.7794);
   hmcerror__8->SetBinContent(10,91.17474);
   hmcerror__8->SetBinContent(11,97.26881);
   hmcerror__8->SetBinContent(12,76.36539);
   hmcerror__8->SetBinContent(13,72.55093);
   hmcerror__8->SetBinContent(14,58.84026);
   hmcerror__8->SetBinContent(15,54.57209);
   hmcerror__8->SetBinContent(16,53.28104);
   hmcerror__8->SetBinContent(17,47.23048);
   hmcerror__8->SetBinContent(18,36.96105);
   hmcerror__8->SetBinContent(19,34.8042);
   hmcerror__8->SetBinContent(20,34.54488);
   hmcerror__8->SetBinContent(21,35.1384);
   hmcerror__8->SetBinContent(22,32.62772);
   hmcerror__8->SetBinContent(23,27.33413);
   hmcerror__8->SetBinContent(24,16.78194);
   hmcerror__8->SetBinError(1,20.32547);
   hmcerror__8->SetBinError(2,15.03578);
   hmcerror__8->SetBinError(3,21.05538);
   hmcerror__8->SetBinError(4,29.85502);
   hmcerror__8->SetBinError(5,36.35044);
   hmcerror__8->SetBinError(6,46.99251);
   hmcerror__8->SetBinError(7,38.02844);
   hmcerror__8->SetBinError(8,37.15866);
   hmcerror__8->SetBinError(9,32.57358);
   hmcerror__8->SetBinError(10,28.59502);
   hmcerror__8->SetBinError(11,30.5986);
   hmcerror__8->SetBinError(12,25.36266);
   hmcerror__8->SetBinError(13,22.88274);
   hmcerror__8->SetBinError(14,18.35753);
   hmcerror__8->SetBinError(15,18.63316);
   hmcerror__8->SetBinError(16,22.68886);
   hmcerror__8->SetBinError(17,16.7316);
   hmcerror__8->SetBinError(18,16.93805);
   hmcerror__8->SetBinError(19,19.06824);
   hmcerror__8->SetBinError(20,20.92829);
   hmcerror__8->SetBinError(21,21.27638);
   hmcerror__8->SetBinError(22,18.72103);
   hmcerror__8->SetBinError(23,18.55179);
   hmcerror__8->SetBinError(24,11.46534);
   hmcerror__8->SetBinError(25,0.3895343);
   hmcerror__8->SetEntries(1602.903);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[24] = {
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
   Double_t _fy3009[24] = {
   36,
   48,
   51,
   84,
   127,
   104,
   110,
   111,
   95,
   85,
   86,
   69,
   57,
   73,
   48,
   43,
   35,
   28,
   38,
   33,
   38,
   29,
   35,
   7};
   Double_t _felx3009[24] = {
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
   Double_t _fely3009[24] = {
   6.1381,
   7.0604,
   7.2725,
   9.2886,
   11.26943,
   10.19804,
   10.48809,
   10.53565,
   9.8686,
   9.3428,
   9.3967,
   8.4327,
   7.679,
   8.6693,
   7.0604,
   6.6917,
   6.0548,
   5.4358,
   6.3013,
   5.8847,
   6.3013,
   5.5285,
   6.0548,
   2.85954};
   Double_t _fehx3009[24] = {
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
   Double_t _fehy3009[24] = {
   5.9318,
   6.8561,
   7.0686,
   9.0869,
   11.26943,
   10.19804,
   10.48809,
   10.53565,
   9.667,
   9.1411,
   9.1951,
   8.2304,
   7.4757,
   8.4672,
   6.8561,
   6.4868,
   5.8483,
   5.2271,
   6.0955,
   5.6776,
   6.0955,
   5.3201,
   5.8483,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,3.465);
   Graph_Graph3009->SetMinimum(3.726414);
   Graph_Graph3009->SetMaximum(151.6823);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 237.3","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 325.0","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.2","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[24] = {
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
   Double_t _fy3010[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[24] = {
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
   Double_t _fely3010[24] = {
   0.5600719,
   0.3514934,
   0.3605634,
   0.2937288,
   0.2608454,
   0.3381681,
   0.2978731,
   0.3218645,
   0.3108778,
   0.3136287,
   0.3145777,
   0.3321224,
   0.3154025,
   0.3119894,
   0.3414413,
   0.4258336,
   0.3542543,
   0.4582675,
   0.5478718,
   0.6058291,
   0.6055022,
   0.5737767,
   0.6787043,
   0.6831954};
   Double_t _fehx3010[24] = {
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
   Double_t _fehy3010[24] = {
   0.5600719,
   0.3514934,
   0.3605634,
   0.2937288,
   0.2608454,
   0.3381681,
   0.2978731,
   0.3218645,
   0.3108778,
   0.3136287,
   0.3145777,
   0.3321224,
   0.3154025,
   0.3119894,
   0.3414413,
   0.4258336,
   0.3542543,
   0.4582675,
   0.5478718,
   0.6058291,
   0.6055022,
   0.5737767,
   0.6787043,
   0.6831954};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,3.465);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[24] = {
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
   Double_t _fy3011[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[24] = {
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
   Double_t _fely3011[24] = {
   0.1845027,
   0.1689848,
   0.1824073,
   0.1881419,
   0.1960487,
   0.2198301,
   0.2207912,
   0.2049829,
   0.2116557,
   0.2166585,
   0.1906772,
   0.1983498,
   0.2023928,
   0.1968044,
   0.1999684,
   0.1919542,
   0.1787654,
   0.2014826,
   0.2066532,
   0.1911411,
   0.1756451,
   0.2020035,
   0.2366461,
   0.2186323};
   Double_t _fehx3011[24] = {
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
   Double_t _fehy3011[24] = {
   0.1845027,
   0.1689848,
   0.1824073,
   0.1881419,
   0.1960487,
   0.2198301,
   0.2207912,
   0.2049829,
   0.2116557,
   0.2166585,
   0.1906772,
   0.1983498,
   0.2023928,
   0.1968044,
   0.1999684,
   0.1919542,
   0.1787654,
   0.2014826,
   0.2066532,
   0.1911411,
   0.1756451,
   0.2020035,
   0.2366461,
   0.2186323};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,3.465);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[24] = {
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
   Double_t _fy3012[24] = {
   0.9919866,
   1.122102,
   0.873351,
   0.8264347,
   0.9113333,
   0.7484061,
   0.8616194,
   0.9614706,
   0.9066671,
   0.9322757,
   0.8841477,
   0.9035507,
   0.785655,
   1.240647,
   0.8795706,
   0.8070412,
   0.7410469,
   0.7575542,
   1.091822,
   0.955279,
   1.081438,
   0.8888147,
   1.280451,
   0.4171151};
   Double_t _felx3012[24] = {
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
   Double_t _fely3012[24] = {
   0.1691365,
   0.1650519,
   0.1245381,
   0.09138597,
   0.08086775,
   0.07338726,
   0.08215218,
   0.09125875,
   0.09418458,
   0.1024714,
   0.09660548,
   0.1104257,
   0.1058429,
   0.1473362,
   0.1293775,
   0.1255925,
   0.1281969,
   0.1470683,
   0.18105,
   0.1703494,
   0.179328,
   0.1694418,
   0.2215107,
   0.1703939};
   Double_t _fehx3012[24] = {
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
   Double_t _fehy3012[24] = {
   0.1634518,
   0.160276,
   0.1210464,
   0.08940155,
   0.08086775,
   0.07338726,
   0.08215218,
   0.09125875,
   0.09226054,
   0.1002591,
   0.09453287,
   0.1077766,
   0.1030407,
   0.1439015,
   0.1256338,
   0.1217469,
   0.1238247,
   0.1414218,
   0.1751369,
   0.1643543,
   0.1734712,
   0.1630546,
   0.213956,
   0.1555559};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,3.465);
   Graph_Graph3012->SetMinimum(0.1219526);
   Graph_Graph3012->SetMaximum(1.619175);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_gamma_gamma_angle_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

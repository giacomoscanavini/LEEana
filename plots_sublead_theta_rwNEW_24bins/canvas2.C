#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 14:17:34 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-0.4846154,-8.036511,3.553846,888.6689);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__4->SetBinContent(1,63.02966);
   hmc__4->SetBinContent(2,195.6008);
   hmc__4->SetBinContent(3,284.5084);
   hmc__4->SetBinContent(4,360.1048);
   hmc__4->SetBinContent(5,380.1453);
   hmc__4->SetBinContent(6,401.8255);
   hmc__4->SetBinContent(7,377.365);
   hmc__4->SetBinContent(8,381.9439);
   hmc__4->SetBinContent(9,366.9865);
   hmc__4->SetBinContent(10,330.5774);
   hmc__4->SetBinContent(11,317.335);
   hmc__4->SetBinContent(12,306.9134);
   hmc__4->SetBinContent(13,274.2548);
   hmc__4->SetBinContent(14,241.5871);
   hmc__4->SetBinContent(15,247.8056);
   hmc__4->SetBinContent(16,216.5235);
   hmc__4->SetBinContent(17,191.9655);
   hmc__4->SetBinContent(18,190.3652);
   hmc__4->SetBinContent(19,172.1833);
   hmc__4->SetBinContent(20,173.3515);
   hmc__4->SetBinContent(21,126.2794);
   hmc__4->SetBinContent(22,107.1611);
   hmc__4->SetBinContent(23,58.92715);
   hmc__4->SetBinContent(24,22.01572);
   hmc__4->SetBinError(1,20.4605);
   hmc__4->SetBinError(2,52.38981);
   hmc__4->SetBinError(3,79.42129);
   hmc__4->SetBinError(4,93.14095);
   hmc__4->SetBinError(5,101.1034);
   hmc__4->SetBinError(6,113.9735);
   hmc__4->SetBinError(7,106.3135);
   hmc__4->SetBinError(8,103.672);
   hmc__4->SetBinError(9,101.1438);
   hmc__4->SetBinError(10,93.28914);
   hmc__4->SetBinError(11,86.46044);
   hmc__4->SetBinError(12,84.13364);
   hmc__4->SetBinError(13,75.41375);
   hmc__4->SetBinError(14,67.25615);
   hmc__4->SetBinError(15,68.28754);
   hmc__4->SetBinError(16,64.02857);
   hmc__4->SetBinError(17,49.42816);
   hmc__4->SetBinError(18,50.06852);
   hmc__4->SetBinError(19,47.03095);
   hmc__4->SetBinError(20,47.89355);
   hmc__4->SetBinError(21,39.21395);
   hmc__4->SetBinError(22,28.15383);
   hmc__4->SetBinError(23,21.23554);
   hmc__4->SetBinError(24,11.083);
   hmc__4->SetBinError(25,0.3895343);
   hmc__4->SetMinimum(-8.036511);
   hmc__4->SetMaximum(843.8336);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,3.15);
   hs2_stack_2->SetMinimum(-1.479728e-08);
   hs2_stack_2->SetMaximum(421.9168);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.536893);
   hbadmatch_stack_1->SetBinContent(2,1.763345);
   hbadmatch_stack_1->SetBinContent(3,4.262084);
   hbadmatch_stack_1->SetBinContent(4,6.852661);
   hbadmatch_stack_1->SetBinContent(5,6.033467);
   hbadmatch_stack_1->SetBinContent(6,9.301878);
   hbadmatch_stack_1->SetBinContent(7,5.866367);
   hbadmatch_stack_1->SetBinContent(8,9.412682);
   hbadmatch_stack_1->SetBinContent(9,10.72988);
   hbadmatch_stack_1->SetBinContent(10,7.800439);
   hbadmatch_stack_1->SetBinContent(11,10.40764);
   hbadmatch_stack_1->SetBinContent(12,6.760271);
   hbadmatch_stack_1->SetBinContent(13,5.10605);
   hbadmatch_stack_1->SetBinContent(14,3.784628);
   hbadmatch_stack_1->SetBinContent(15,6.486258);
   hbadmatch_stack_1->SetBinContent(16,7.047846);
   hbadmatch_stack_1->SetBinContent(17,2.886258);
   hbadmatch_stack_1->SetBinContent(18,2.908151);
   hbadmatch_stack_1->SetBinContent(19,5.036702);
   hbadmatch_stack_1->SetBinContent(20,3.835165);
   hbadmatch_stack_1->SetBinContent(21,2.473517);
   hbadmatch_stack_1->SetBinContent(22,2.753525);
   hbadmatch_stack_1->SetBinContent(23,2.029028);
   hbadmatch_stack_1->SetBinError(1,0.3929602);
   hbadmatch_stack_1->SetBinError(2,0.6382735);
   hbadmatch_stack_1->SetBinError(3,1.187366);
   hbadmatch_stack_1->SetBinError(4,1.35189);
   hbadmatch_stack_1->SetBinError(5,1.217036);
   hbadmatch_stack_1->SetBinError(6,1.61128);
   hbadmatch_stack_1->SetBinError(7,1.249847);
   hbadmatch_stack_1->SetBinError(8,1.583473);
   hbadmatch_stack_1->SetBinError(9,2.256244);
   hbadmatch_stack_1->SetBinError(10,1.821159);
   hbadmatch_stack_1->SetBinError(11,1.663438);
   hbadmatch_stack_1->SetBinError(12,1.322494);
   hbadmatch_stack_1->SetBinError(13,1.242655);
   hbadmatch_stack_1->SetBinError(14,1.052896);
   hbadmatch_stack_1->SetBinError(15,2.25547);
   hbadmatch_stack_1->SetBinError(16,2.069527);
   hbadmatch_stack_1->SetBinError(17,0.8777961);
   hbadmatch_stack_1->SetBinError(18,0.8736682);
   hbadmatch_stack_1->SetBinError(19,1.181011);
   hbadmatch_stack_1->SetBinError(20,0.9566753);
   hbadmatch_stack_1->SetBinError(21,0.8085202);
   hbadmatch_stack_1->SetBinError(22,0.9636219);
   hbadmatch_stack_1->SetBinError(23,1.013104);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,5.814838);
   hext_stack_2->SetBinContent(2,14.85929);
   hext_stack_2->SetBinContent(3,15.70562);
   hext_stack_2->SetBinContent(4,22.38272);
   hext_stack_2->SetBinContent(5,21.69204);
   hext_stack_2->SetBinContent(6,27.61062);
   hext_stack_2->SetBinContent(7,21.84763);
   hext_stack_2->SetBinContent(8,30.81592);
   hext_stack_2->SetBinContent(9,34.23306);
   hext_stack_2->SetBinContent(10,22.18802);
   hext_stack_2->SetBinContent(11,21.75112);
   hext_stack_2->SetBinContent(12,34.72904);
   hext_stack_2->SetBinContent(13,38.31335);
   hext_stack_2->SetBinContent(14,22.73742);
   hext_stack_2->SetBinContent(15,24.32634);
   hext_stack_2->SetBinContent(16,20.35974);
   hext_stack_2->SetBinContent(17,16.98608);
   hext_stack_2->SetBinContent(18,16.66886);
   hext_stack_2->SetBinContent(19,11.28657);
   hext_stack_2->SetBinContent(20,16.14416);
   hext_stack_2->SetBinContent(21,6.959614);
   hext_stack_2->SetBinContent(22,13.20858);
   hext_stack_2->SetBinContent(23,1.461993);
   hext_stack_2->SetBinContent(24,4.670063);
   hext_stack_2->SetBinError(1,1.683489);
   hext_stack_2->SetBinError(2,2.668896);
   hext_stack_2->SetBinError(3,2.604605);
   hext_stack_2->SetBinError(4,3.2678);
   hext_stack_2->SetBinError(5,3.088216);
   hext_stack_2->SetBinError(6,3.439142);
   hext_stack_2->SetBinError(7,3.063823);
   hext_stack_2->SetBinError(8,3.771255);
   hext_stack_2->SetBinError(9,4.122564);
   hext_stack_2->SetBinError(10,3.092133);
   hext_stack_2->SetBinError(11,2.898088);
   hext_stack_2->SetBinError(12,4.1255);
   hext_stack_2->SetBinError(13,4.424565);
   hext_stack_2->SetBinError(14,3.432318);
   hext_stack_2->SetBinError(15,3.41266);
   hext_stack_2->SetBinError(16,2.825592);
   hext_stack_2->SetBinError(17,2.818445);
   hext_stack_2->SetBinError(18,2.763548);
   hext_stack_2->SetBinError(19,2.121297);
   hext_stack_2->SetBinError(20,2.901343);
   hext_stack_2->SetBinError(21,1.751802);
   hext_stack_2->SetBinError(22,2.720596);
   hext_stack_2->SetBinError(23,0.7356036);
   hext_stack_2->SetBinError(24,1.612283);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.348096);
   hdirt_stack_3->SetBinContent(3,1.171413);
   hdirt_stack_3->SetBinContent(4,2.528738);
   hdirt_stack_3->SetBinContent(5,2.341786);
   hdirt_stack_3->SetBinContent(6,2.884948);
   hdirt_stack_3->SetBinContent(7,2.875877);
   hdirt_stack_3->SetBinContent(8,2.687729);
   hdirt_stack_3->SetBinContent(9,4.716594);
   hdirt_stack_3->SetBinContent(10,2.990225);
   hdirt_stack_3->SetBinContent(11,2.158504);
   hdirt_stack_3->SetBinContent(12,2.017315);
   hdirt_stack_3->SetBinContent(13,1.54127);
   hdirt_stack_3->SetBinContent(14,1.893311);
   hdirt_stack_3->SetBinContent(15,1.611008);
   hdirt_stack_3->SetBinContent(16,3.013294);
   hdirt_stack_3->SetBinContent(17,2.189699);
   hdirt_stack_3->SetBinContent(18,1.984951);
   hdirt_stack_3->SetBinContent(19,3.810937);
   hdirt_stack_3->SetBinContent(20,1.138668);
   hdirt_stack_3->SetBinContent(21,0.7139341);
   hdirt_stack_3->SetBinContent(22,1.335073);
   hdirt_stack_3->SetBinContent(23,0.9140499);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.8343996);
   hdirt_stack_3->SetBinError(3,0.5610561);
   hdirt_stack_3->SetBinError(4,0.8341876);
   hdirt_stack_3->SetBinError(5,0.7416668);
   hdirt_stack_3->SetBinError(6,0.8643327);
   hdirt_stack_3->SetBinError(7,0.8788995);
   hdirt_stack_3->SetBinError(8,1.166858);
   hdirt_stack_3->SetBinError(9,1.134335);
   hdirt_stack_3->SetBinError(10,1.28352);
   hdirt_stack_3->SetBinError(11,0.7631217);
   hdirt_stack_3->SetBinError(12,0.7619761);
   hdirt_stack_3->SetBinError(13,0.6015139);
   hdirt_stack_3->SetBinError(14,0.7066686);
   hdirt_stack_3->SetBinError(15,0.6057355);
   hdirt_stack_3->SetBinError(16,0.9245935);
   hdirt_stack_3->SetBinError(17,0.7811996);
   hdirt_stack_3->SetBinError(18,0.6558978);
   hdirt_stack_3->SetBinError(19,1.146499);
   hdirt_stack_3->SetBinError(20,0.5606753);
   hdirt_stack_3->SetBinError(21,0.3660028);
   hdirt_stack_3->SetBinError(22,0.5844386);
   hdirt_stack_3->SetBinError(23,0.4788161);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.802175);
   houtFV_stack_4->SetBinContent(2,9.667425);
   houtFV_stack_4->SetBinContent(3,16.2884);
   houtFV_stack_4->SetBinContent(4,25.05642);
   houtFV_stack_4->SetBinContent(5,24.43071);
   houtFV_stack_4->SetBinContent(6,28.83902);
   houtFV_stack_4->SetBinContent(7,25.06744);
   houtFV_stack_4->SetBinContent(8,23.37314);
   houtFV_stack_4->SetBinContent(9,19.39782);
   houtFV_stack_4->SetBinContent(10,18.64168);
   houtFV_stack_4->SetBinContent(11,19.44942);
   houtFV_stack_4->SetBinContent(12,19.83876);
   houtFV_stack_4->SetBinContent(13,16.86812);
   houtFV_stack_4->SetBinContent(14,12.45958);
   houtFV_stack_4->SetBinContent(15,17.06855);
   houtFV_stack_4->SetBinContent(16,18.85802);
   houtFV_stack_4->SetBinContent(17,15.16869);
   houtFV_stack_4->SetBinContent(18,17.89406);
   houtFV_stack_4->SetBinContent(19,17.03247);
   houtFV_stack_4->SetBinContent(20,19.52215);
   houtFV_stack_4->SetBinContent(21,12.15702);
   houtFV_stack_4->SetBinContent(22,6.940354);
   houtFV_stack_4->SetBinContent(23,7.757563);
   houtFV_stack_4->SetBinContent(24,1.644412);
   houtFV_stack_4->SetBinError(1,0.9955525);
   houtFV_stack_4->SetBinError(2,1.527034);
   houtFV_stack_4->SetBinError(3,2.013941);
   houtFV_stack_4->SetBinError(4,2.546157);
   houtFV_stack_4->SetBinError(5,2.454967);
   houtFV_stack_4->SetBinError(6,2.699046);
   houtFV_stack_4->SetBinError(7,2.470162);
   houtFV_stack_4->SetBinError(8,2.43367);
   houtFV_stack_4->SetBinError(9,2.172459);
   houtFV_stack_4->SetBinError(10,2.219378);
   houtFV_stack_4->SetBinError(11,2.245222);
   houtFV_stack_4->SetBinError(12,2.201587);
   houtFV_stack_4->SetBinError(13,2.101155);
   houtFV_stack_4->SetBinError(14,1.652207);
   houtFV_stack_4->SetBinError(15,2.075079);
   houtFV_stack_4->SetBinError(16,2.164428);
   houtFV_stack_4->SetBinError(17,1.915654);
   houtFV_stack_4->SetBinError(18,2.125092);
   houtFV_stack_4->SetBinError(19,2.002391);
   houtFV_stack_4->SetBinError(20,2.293662);
   houtFV_stack_4->SetBinError(21,1.704369);
   houtFV_stack_4->SetBinError(22,1.28626);
   houtFV_stack_4->SetBinError(23,1.421637);
   houtFV_stack_4->SetBinError(24,0.6911314);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.719598);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.247968);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,9.606937);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.9282);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,9.537687);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.116444);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.011557);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.078904);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.878364);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.20926);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.440926);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.747666);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.037708);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.078562);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.119248);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7949858);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.339376);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.464258);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.059208);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.674176);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.715526);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.701244);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8629078);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5533355);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8449525);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.006473);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.02891);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.018359);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9441188);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8154953);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8189884);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6880958);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6391732);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4683861);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5828529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.503366);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5241985);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5132561);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2483746);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4633044);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3992271);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3494035);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4732778);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4462588);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4533256);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2541827);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2070706);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5581679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.674176);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.59014);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.548126);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.588644);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.283072);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.882926);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.674008);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7805356);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.68829);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.757708);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.534508);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6131358);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9202038);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.10239);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.710622);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2198343);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4732778);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.395144);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4409948);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3877697);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3388471);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4514614);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4373019);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1878515);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4299718);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4399638);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4328289);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1749792);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2682147);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4105231);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2699026);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,24.45728);
   hNCpi0inFVres_stack_7->SetBinContent(2,73.29177);
   hNCpi0inFVres_stack_7->SetBinContent(3,120.7658);
   hNCpi0inFVres_stack_7->SetBinContent(4,151.0829);
   hNCpi0inFVres_stack_7->SetBinContent(5,167.0732);
   hNCpi0inFVres_stack_7->SetBinContent(6,170.932);
   hNCpi0inFVres_stack_7->SetBinContent(7,171.1459);
   hNCpi0inFVres_stack_7->SetBinContent(8,166.6469);
   hNCpi0inFVres_stack_7->SetBinContent(9,163.3715);
   hNCpi0inFVres_stack_7->SetBinContent(10,150.3091);
   hNCpi0inFVres_stack_7->SetBinContent(11,136.1467);
   hNCpi0inFVres_stack_7->SetBinContent(12,135.6419);
   hNCpi0inFVres_stack_7->SetBinContent(13,114.8335);
   hNCpi0inFVres_stack_7->SetBinContent(14,105.4795);
   hNCpi0inFVres_stack_7->SetBinContent(15,101.5785);
   hNCpi0inFVres_stack_7->SetBinContent(16,90.42856);
   hNCpi0inFVres_stack_7->SetBinContent(17,83.81395);
   hNCpi0inFVres_stack_7->SetBinContent(18,81.23734);
   hNCpi0inFVres_stack_7->SetBinContent(19,73.19925);
   hNCpi0inFVres_stack_7->SetBinContent(20,67.49127);
   hNCpi0inFVres_stack_7->SetBinContent(21,53.69888);
   hNCpi0inFVres_stack_7->SetBinContent(22,36.83778);
   hNCpi0inFVres_stack_7->SetBinContent(23,22.26761);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.491135);
   hNCpi0inFVres_stack_7->SetBinError(1,1.636808);
   hNCpi0inFVres_stack_7->SetBinError(2,2.808667);
   hNCpi0inFVres_stack_7->SetBinError(3,3.587774);
   hNCpi0inFVres_stack_7->SetBinError(4,4.035767);
   hNCpi0inFVres_stack_7->SetBinError(5,4.250463);
   hNCpi0inFVres_stack_7->SetBinError(6,4.28421);
   hNCpi0inFVres_stack_7->SetBinError(7,4.265393);
   hNCpi0inFVres_stack_7->SetBinError(8,4.230063);
   hNCpi0inFVres_stack_7->SetBinError(9,4.234455);
   hNCpi0inFVres_stack_7->SetBinError(10,3.977188);
   hNCpi0inFVres_stack_7->SetBinError(11,3.812474);
   hNCpi0inFVres_stack_7->SetBinError(12,3.858591);
   hNCpi0inFVres_stack_7->SetBinError(13,3.473665);
   hNCpi0inFVres_stack_7->SetBinError(14,3.358003);
   hNCpi0inFVres_stack_7->SetBinError(15,3.349009);
   hNCpi0inFVres_stack_7->SetBinError(16,3.035127);
   hNCpi0inFVres_stack_7->SetBinError(17,3.0372);
   hNCpi0inFVres_stack_7->SetBinError(18,2.992413);
   hNCpi0inFVres_stack_7->SetBinError(19,2.755964);
   hNCpi0inFVres_stack_7->SetBinError(20,2.697543);
   hNCpi0inFVres_stack_7->SetBinError(21,2.321246);
   hNCpi0inFVres_stack_7->SetBinError(22,1.982063);
   hNCpi0inFVres_stack_7->SetBinError(23,1.534598);
   hNCpi0inFVres_stack_7->SetBinError(24,1.023955);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.598219);
   hNCpi0inFVdis_stack_8->SetBinContent(2,18.91097);
   hNCpi0inFVdis_stack_8->SetBinContent(3,26.60475);
   hNCpi0inFVdis_stack_8->SetBinContent(4,29.44739);
   hNCpi0inFVdis_stack_8->SetBinContent(5,32.90834);
   hNCpi0inFVdis_stack_8->SetBinContent(6,37.04919);
   hNCpi0inFVdis_stack_8->SetBinContent(7,34.00808);
   hNCpi0inFVdis_stack_8->SetBinContent(8,33.75632);
   hNCpi0inFVdis_stack_8->SetBinContent(9,28.25948);
   hNCpi0inFVdis_stack_8->SetBinContent(10,25.14132);
   hNCpi0inFVdis_stack_8->SetBinContent(11,25.77042);
   hNCpi0inFVdis_stack_8->SetBinContent(12,22.08459);
   hNCpi0inFVdis_stack_8->SetBinContent(13,20.16082);
   hNCpi0inFVdis_stack_8->SetBinContent(14,18.42801);
   hNCpi0inFVdis_stack_8->SetBinContent(15,19.5309);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.98717);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.8284);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.12884);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.54042);
   hNCpi0inFVdis_stack_8->SetBinContent(20,13.80009);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.605105);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.165339);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.680983);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.630658);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.895384);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.442563);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.692436);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.702772);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.844601);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.999739);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.903958);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.943211);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.673859);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.606143);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.712176);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.496374);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.469163);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.345204);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.440965);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.256776);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.125905);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.311559);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.013186);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.225204);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9704109);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8139825);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5661409);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3347053);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,8.391732);
   hCCpi0inFV_stack_10->SetBinContent(2,29.95031);
   hCCpi0inFV_stack_10->SetBinContent(3,38.36206);
   hCCpi0inFV_stack_10->SetBinContent(4,49.77276);
   hCCpi0inFV_stack_10->SetBinContent(5,53.54387);
   hCCpi0inFV_stack_10->SetBinContent(6,56.29658);
   hCCpi0inFV_stack_10->SetBinContent(7,50.33082);
   hCCpi0inFV_stack_10->SetBinContent(8,52.07127);
   hCCpi0inFV_stack_10->SetBinContent(9,51.22875);
   hCCpi0inFV_stack_10->SetBinContent(10,45.37321);
   hCCpi0inFV_stack_10->SetBinContent(11,42.31038);
   hCCpi0inFV_stack_10->SetBinContent(12,33.05019);
   hCCpi0inFV_stack_10->SetBinContent(13,30.12162);
   hCCpi0inFV_stack_10->SetBinContent(14,33.87686);
   hCCpi0inFV_stack_10->SetBinContent(15,31.41894);
   hCCpi0inFV_stack_10->SetBinContent(16,27.01239);
   hCCpi0inFV_stack_10->SetBinContent(17,25.65278);
   hCCpi0inFV_stack_10->SetBinContent(18,27.4865);
   hCCpi0inFV_stack_10->SetBinContent(19,25.63643);
   hCCpi0inFV_stack_10->SetBinContent(20,20.95413);
   hCCpi0inFV_stack_10->SetBinContent(21,17.33405);
   hCCpi0inFV_stack_10->SetBinContent(22,15.6433);
   hCCpi0inFV_stack_10->SetBinContent(23,8.046638);
   hCCpi0inFV_stack_10->SetBinContent(24,2.055672);
   hCCpi0inFV_stack_10->SetBinError(1,1.447416);
   hCCpi0inFV_stack_10->SetBinError(2,2.780947);
   hCCpi0inFV_stack_10->SetBinError(3,3.041857);
   hCCpi0inFV_stack_10->SetBinError(4,3.579434);
   hCCpi0inFV_stack_10->SetBinError(5,3.647105);
   hCCpi0inFV_stack_10->SetBinError(6,3.713944);
   hCCpi0inFV_stack_10->SetBinError(7,3.53571);
   hCCpi0inFV_stack_10->SetBinError(8,3.596016);
   hCCpi0inFV_stack_10->SetBinError(9,3.615968);
   hCCpi0inFV_stack_10->SetBinError(10,3.39361);
   hCCpi0inFV_stack_10->SetBinError(11,3.245932);
   hCCpi0inFV_stack_10->SetBinError(12,2.887214);
   hCCpi0inFV_stack_10->SetBinError(13,2.770918);
   hCCpi0inFV_stack_10->SetBinError(14,2.897069);
   hCCpi0inFV_stack_10->SetBinError(15,2.835823);
   hCCpi0inFV_stack_10->SetBinError(16,2.602641);
   hCCpi0inFV_stack_10->SetBinError(17,2.532672);
   hCCpi0inFV_stack_10->SetBinError(18,2.632063);
   hCCpi0inFV_stack_10->SetBinError(19,2.601342);
   hCCpi0inFV_stack_10->SetBinError(20,2.214075);
   hCCpi0inFV_stack_10->SetBinError(21,2.104078);
   hCCpi0inFV_stack_10->SetBinError(22,1.962783);
   hCCpi0inFV_stack_10->SetBinError(23,1.460083);
   hCCpi0inFV_stack_10->SetBinError(24,0.7082781);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,4.830346);
   hNCinFV_stack_11->SetBinContent(2,17.43778);
   hNCinFV_stack_11->SetBinContent(3,25.79656);
   hNCinFV_stack_11->SetBinContent(4,31.22213);
   hNCinFV_stack_11->SetBinContent(5,28.87047);
   hNCinFV_stack_11->SetBinContent(6,31.33758);
   hNCinFV_stack_11->SetBinContent(7,27.86008);
   hNCinFV_stack_11->SetBinContent(8,24.82989);
   hNCinFV_stack_11->SetBinContent(9,23.73751);
   hNCinFV_stack_11->SetBinContent(10,23.51736);
   hNCinFV_stack_11->SetBinContent(11,26.37548);
   hNCinFV_stack_11->SetBinContent(12,20.62665);
   hNCinFV_stack_11->SetBinContent(13,19.2727);
   hNCinFV_stack_11->SetBinContent(14,20.3716);
   hNCinFV_stack_11->SetBinContent(15,19.01151);
   hNCinFV_stack_11->SetBinContent(16,15.33839);
   hNCinFV_stack_11->SetBinContent(17,15.50927);
   hNCinFV_stack_11->SetBinContent(18,13.72433);
   hNCinFV_stack_11->SetBinContent(19,11.86875);
   hNCinFV_stack_11->SetBinContent(20,11.1907);
   hNCinFV_stack_11->SetBinContent(21,10.16509);
   hNCinFV_stack_11->SetBinContent(22,8.259037);
   hNCinFV_stack_11->SetBinContent(23,5.708499);
   hNCinFV_stack_11->SetBinContent(24,1.767057);
   hNCinFV_stack_11->SetBinError(1,1.1786);
   hNCinFV_stack_11->SetBinError(2,2.132556);
   hNCinFV_stack_11->SetBinError(3,2.535779);
   hNCinFV_stack_11->SetBinError(4,2.81733);
   hNCinFV_stack_11->SetBinError(5,2.660772);
   hNCinFV_stack_11->SetBinError(6,2.839701);
   hNCinFV_stack_11->SetBinError(7,2.59548);
   hNCinFV_stack_11->SetBinError(8,2.498662);
   hNCinFV_stack_11->SetBinError(9,2.434582);
   hNCinFV_stack_11->SetBinError(10,2.395854);
   hNCinFV_stack_11->SetBinError(11,2.5962);
   hNCinFV_stack_11->SetBinError(12,2.263622);
   hNCinFV_stack_11->SetBinError(13,2.159571);
   hNCinFV_stack_11->SetBinError(14,2.263101);
   hNCinFV_stack_11->SetBinError(15,2.203944);
   hNCinFV_stack_11->SetBinError(16,1.97226);
   hNCinFV_stack_11->SetBinError(17,2.077298);
   hNCinFV_stack_11->SetBinError(18,1.850738);
   hNCinFV_stack_11->SetBinError(19,1.72151);
   hNCinFV_stack_11->SetBinError(20,1.712146);
   hNCinFV_stack_11->SetBinError(21,1.606952);
   hNCinFV_stack_11->SetBinError(22,1.400601);
   hNCinFV_stack_11->SetBinError(23,1.20883);
   hNCinFV_stack_11->SetBinError(24,0.5890229);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,3.99536);
   hnumuCCinFV_stack_12->SetBinContent(2,16.57357);
   hnumuCCinFV_stack_12->SetBinContent(3,20.3532);
   hnumuCCinFV_stack_12->SetBinContent(4,25.56801);
   hnumuCCinFV_stack_12->SetBinContent(5,30.4446);
   hnumuCCinFV_stack_12->SetBinContent(6,24.38473);
   hnumuCCinFV_stack_12->SetBinContent(7,26.73604);
   hnumuCCinFV_stack_12->SetBinContent(8,28.70304);
   hnumuCCinFV_stack_12->SetBinContent(9,23.09282);
   hnumuCCinFV_stack_12->SetBinContent(10,25.74614);
   hnumuCCinFV_stack_12->SetBinContent(11,28.00482);
   hnumuCCinFV_stack_12->SetBinContent(12,25.90232);
   hnumuCCinFV_stack_12->SetBinContent(13,24.04549);
   hnumuCCinFV_stack_12->SetBinContent(14,18.83734);
   hnumuCCinFV_stack_12->SetBinContent(15,21.89134);
   hnumuCCinFV_stack_12->SetBinContent(16,16.276);
   hnumuCCinFV_stack_12->SetBinContent(17,14.33942);
   hnumuCCinFV_stack_12->SetBinContent(18,10.09867);
   hnumuCCinFV_stack_12->SetBinContent(19,10.64919);
   hnumuCCinFV_stack_12->SetBinContent(20,14.95082);
   hnumuCCinFV_stack_12->SetBinContent(21,10.32591);
   hnumuCCinFV_stack_12->SetBinContent(22,11.8611);
   hnumuCCinFV_stack_12->SetBinContent(23,5.395981);
   hnumuCCinFV_stack_12->SetBinContent(24,1.227888);
   hnumuCCinFV_stack_12->SetBinError(1,0.9983042);
   hnumuCCinFV_stack_12->SetBinError(2,2.069764);
   hnumuCCinFV_stack_12->SetBinError(3,2.53683);
   hnumuCCinFV_stack_12->SetBinError(4,3.090416);
   hnumuCCinFV_stack_12->SetBinError(5,3.185188);
   hnumuCCinFV_stack_12->SetBinError(6,3.499146);
   hnumuCCinFV_stack_12->SetBinError(7,2.845649);
   hnumuCCinFV_stack_12->SetBinError(8,2.835457);
   hnumuCCinFV_stack_12->SetBinError(9,2.795125);
   hnumuCCinFV_stack_12->SetBinError(10,3.090571);
   hnumuCCinFV_stack_12->SetBinError(11,3.185149);
   hnumuCCinFV_stack_12->SetBinError(12,2.961179);
   hnumuCCinFV_stack_12->SetBinError(13,2.823781);
   hnumuCCinFV_stack_12->SetBinError(14,2.544869);
   hnumuCCinFV_stack_12->SetBinError(15,2.892038);
   hnumuCCinFV_stack_12->SetBinError(16,2.186342);
   hnumuCCinFV_stack_12->SetBinError(17,2.55677);
   hnumuCCinFV_stack_12->SetBinError(18,1.829002);
   hnumuCCinFV_stack_12->SetBinError(19,1.708243);
   hnumuCCinFV_stack_12->SetBinError(20,2.168533);
   hnumuCCinFV_stack_12->SetBinError(21,1.703914);
   hnumuCCinFV_stack_12->SetBinError(22,2.033692);
   hnumuCCinFV_stack_12->SetBinError(23,1.152619);
   hnumuCCinFV_stack_12->SetBinError(24,0.5034996);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.540352);
   hnueCCinFV_stack_13->SetBinContent(2,3.992148);
   hnueCCinFV_stack_13->SetBinContent(3,3.861568);
   hnueCCinFV_stack_13->SetBinContent(4,3.519542);
   hnueCCinFV_stack_13->SetBinContent(5,1.665206);
   hnueCCinFV_stack_13->SetBinContent(6,3.400137);
   hnueCCinFV_stack_13->SetBinContent(7,3.136637);
   hnueCCinFV_stack_13->SetBinContent(8,1.601436);
   hnueCCinFV_stack_13->SetBinContent(9,1.387566);
   hnueCCinFV_stack_13->SetBinContent(10,3.824333);
   hnueCCinFV_stack_13->SetBinContent(11,0.7339762);
   hnueCCinFV_stack_13->SetBinContent(12,1.701181);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,1.027163);
   hnueCCinFV_stack_13->SetBinContent(15,1.591555);
   hnueCCinFV_stack_13->SetBinContent(16,1.514791);
   hnueCCinFV_stack_13->SetBinContent(17,0.791415);
   hnueCCinFV_stack_13->SetBinContent(18,0.6668286);
   hnueCCinFV_stack_13->SetBinContent(19,1.533918);
   hnueCCinFV_stack_13->SetBinContent(20,1.785597);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.21896);
   hnueCCinFV_stack_13->SetBinContent(23,0.6623923);
   hnueCCinFV_stack_13->SetBinError(1,0.7404628);
   hnueCCinFV_stack_13->SetBinError(2,1.343675);
   hnueCCinFV_stack_13->SetBinError(3,1.69457);
   hnueCCinFV_stack_13->SetBinError(4,1.065379);
   hnueCCinFV_stack_13->SetBinError(5,0.59116);
   hnueCCinFV_stack_13->SetBinError(6,1.339155);
   hnueCCinFV_stack_13->SetBinError(7,1.010285);
   hnueCCinFV_stack_13->SetBinError(8,0.6818589);
   hnueCCinFV_stack_13->SetBinError(9,0.5990233);
   hnueCCinFV_stack_13->SetBinError(10,1.519386);
   hnueCCinFV_stack_13->SetBinError(11,0.4394483);
   hnueCCinFV_stack_13->SetBinError(12,0.6705183);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.5242336);
   hnueCCinFV_stack_13->SetBinError(15,0.7565962);
   hnueCCinFV_stack_13->SetBinError(16,0.681951);
   hnueCCinFV_stack_13->SetBinError(17,0.6263902);
   hnueCCinFV_stack_13->SetBinError(18,0.471616);
   hnueCCinFV_stack_13->SetBinError(19,0.7482389);
   hnueCCinFV_stack_13->SetBinError(20,0.7018932);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.6597946);
   hnueCCinFV_stack_13->SetBinError(23,0.3872778);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__5->SetBinContent(1,63.02966);
   hmcerror__5->SetBinContent(2,195.6008);
   hmcerror__5->SetBinContent(3,284.5084);
   hmcerror__5->SetBinContent(4,360.1048);
   hmcerror__5->SetBinContent(5,380.1453);
   hmcerror__5->SetBinContent(6,401.8255);
   hmcerror__5->SetBinContent(7,377.365);
   hmcerror__5->SetBinContent(8,381.9439);
   hmcerror__5->SetBinContent(9,366.9865);
   hmcerror__5->SetBinContent(10,330.5774);
   hmcerror__5->SetBinContent(11,317.335);
   hmcerror__5->SetBinContent(12,306.9134);
   hmcerror__5->SetBinContent(13,274.2548);
   hmcerror__5->SetBinContent(14,241.5871);
   hmcerror__5->SetBinContent(15,247.8056);
   hmcerror__5->SetBinContent(16,216.5235);
   hmcerror__5->SetBinContent(17,191.9655);
   hmcerror__5->SetBinContent(18,190.3652);
   hmcerror__5->SetBinContent(19,172.1833);
   hmcerror__5->SetBinContent(20,173.3515);
   hmcerror__5->SetBinContent(21,126.2794);
   hmcerror__5->SetBinContent(22,107.1611);
   hmcerror__5->SetBinContent(23,58.92715);
   hmcerror__5->SetBinContent(24,22.01572);
   hmcerror__5->SetBinError(1,20.4605);
   hmcerror__5->SetBinError(2,52.38981);
   hmcerror__5->SetBinError(3,79.42129);
   hmcerror__5->SetBinError(4,93.14095);
   hmcerror__5->SetBinError(5,101.1034);
   hmcerror__5->SetBinError(6,113.9735);
   hmcerror__5->SetBinError(7,106.3135);
   hmcerror__5->SetBinError(8,103.672);
   hmcerror__5->SetBinError(9,101.1438);
   hmcerror__5->SetBinError(10,93.28914);
   hmcerror__5->SetBinError(11,86.46044);
   hmcerror__5->SetBinError(12,84.13364);
   hmcerror__5->SetBinError(13,75.41375);
   hmcerror__5->SetBinError(14,67.25615);
   hmcerror__5->SetBinError(15,68.28754);
   hmcerror__5->SetBinError(16,64.02857);
   hmcerror__5->SetBinError(17,49.42816);
   hmcerror__5->SetBinError(18,50.06852);
   hmcerror__5->SetBinError(19,47.03095);
   hmcerror__5->SetBinError(20,47.89355);
   hmcerror__5->SetBinError(21,39.21395);
   hmcerror__5->SetBinError(22,28.15383);
   hmcerror__5->SetBinError(23,21.23554);
   hmcerror__5->SetBinError(24,11.083);
   hmcerror__5->SetBinError(25,0.3895343);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
   60,
   169,
   272,
   337,
   337,
   341,
   346,
   288,
   270,
   270,
   256,
   267,
   222,
   214,
   201,
   186,
   177,
   154,
   151,
   149,
   125,
   104,
   53,
   25};
   Double_t _felx3005[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3005[24] = {
   7.8743,
   13,
   16.49242,
   18.35756,
   18.35756,
   18.46619,
   18.60108,
   16.97056,
   16.43168,
   16.43168,
   16,
   16.34013,
   14.89966,
   14.62874,
   14.17745,
   13.63818,
   13.30413,
   12.40967,
   12.28821,
   12.20656,
   11.18034,
   10.19804,
   7.4105,
   5.1474};
   Double_t _fehx3005[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3005[24] = {
   7.6713,
   13,
   16.49242,
   18.35756,
   18.35756,
   18.46619,
   18.60108,
   16.97056,
   16.43168,
   16.43168,
   16,
   16.34013,
   14.89966,
   14.62874,
   14.17745,
   13.63818,
   13.30413,
   12.40967,
   12.28821,
   12.20656,
   11.18034,
   10.19804,
   7.2068,
   4.9374};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,3.465);
   Graph_Graph3005->SetMinimum(17.86734);
   Graph_Graph3005->SetMaximum(399.0759);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.2","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3006[24] = {
   0.324617,
   0.2678405,
   0.2791527,
   0.2586496,
   0.26596,
   0.2836392,
   0.281726,
   0.2714326,
   0.2756064,
   0.2822006,
   0.272458,
   0.2741283,
   0.2749769,
   0.2783929,
   0.275569,
   0.2957119,
   0.2574846,
   0.263013,
   0.2731447,
   0.27628,
   0.3105334,
   0.2627243,
   0.3603694,
   0.5034128};
   Double_t _fehx3006[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3006[24] = {
   0.324617,
   0.2678405,
   0.2791527,
   0.2586496,
   0.26596,
   0.2836392,
   0.281726,
   0.2714326,
   0.2756064,
   0.2822006,
   0.272458,
   0.2741283,
   0.2749769,
   0.2783929,
   0.275569,
   0.2957119,
   0.2574846,
   0.263013,
   0.2731447,
   0.27628,
   0.3105334,
   0.2627243,
   0.3603694,
   0.5034128};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,3.465);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3007[24] = {
   0.2406309,
   0.2344345,
   0.2483892,
   0.2448197,
   0.2503993,
   0.2545968,
   0.2687731,
   0.2559992,
   0.2574922,
   0.2663074,
   0.2588531,
   0.2574145,
   0.243119,
   0.2427412,
   0.2481185,
   0.2369156,
   0.2344434,
   0.2354437,
   0.2373381,
   0.2249704,
   0.2465888,
   0.2197777,
   0.2502856,
   0.2616682};
   Double_t _fehx3007[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3007[24] = {
   0.2406309,
   0.2344345,
   0.2483892,
   0.2448197,
   0.2503993,
   0.2545968,
   0.2687731,
   0.2559992,
   0.2574922,
   0.2663074,
   0.2588531,
   0.2574145,
   0.243119,
   0.2427412,
   0.2481185,
   0.2369156,
   0.2344434,
   0.2354437,
   0.2373381,
   0.2249704,
   0.2465888,
   0.2197777,
   0.2502856,
   0.2616682};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,3.465);
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
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   0.9519329,
   0.8640046,
   0.9560351,
   0.9358387,
   0.8865031,
   0.848627,
   0.9168842,
   0.7540375,
   0.7357219,
   0.8167527,
   0.8067186,
   0.8699523,
   0.8094662,
   0.8858088,
   0.8111196,
   0.8590292,
   0.9220405,
   0.8089714,
   0.8769724,
   0.8595253,
   0.9898689,
   0.9705013,
   0.8994157,
   1.135552};
   Double_t _felx3008[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3008[24] = {
   0.1249301,
   0.06646189,
   0.05796814,
   0.05097838,
   0.0482909,
   0.04595573,
   0.049292,
   0.04443208,
   0.04477461,
   0.04970599,
   0.05041991,
   0.05324021,
   0.05432781,
   0.06055264,
   0.05721196,
   0.06298707,
   0.06930481,
   0.06518878,
   0.07136701,
   0.07041506,
   0.08853656,
   0.09516548,
   0.125757,
   0.2338056};
   Double_t _fehx3008[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3008[24] = {
   0.1217094,
   0.06646189,
   0.05796814,
   0.05097838,
   0.0482909,
   0.04595573,
   0.049292,
   0.04443208,
   0.04477461,
   0.04970599,
   0.05041991,
   0.05324021,
   0.05432781,
   0.06055264,
   0.05721196,
   0.06298707,
   0.06930481,
   0.06518878,
   0.07136701,
   0.07041506,
   0.08853656,
   0.09516548,
   0.1223002,
   0.224267};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,3.465);
   Graph_Graph3008->SetMinimum(0.6240601);
   Graph_Graph3008->SetMaximum(1.426706);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

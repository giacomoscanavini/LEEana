#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 10:30:52 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
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
   pad1->Range(-1.307692,-6.053832,1.25641,669.4264);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__7->SetBinContent(1,48.67725);
   hmc__7->SetBinContent(2,32.28803);
   hmc__7->SetBinContent(3,27.376);
   hmc__7->SetBinContent(4,27.99682);
   hmc__7->SetBinContent(5,25.56124);
   hmc__7->SetBinContent(6,25.36584);
   hmc__7->SetBinContent(7,31.73822);
   hmc__7->SetBinContent(8,23.51937);
   hmc__7->SetBinContent(9,26.03392);
   hmc__7->SetBinContent(10,26.37317);
   hmc__7->SetBinContent(11,29.82616);
   hmc__7->SetBinContent(12,38.91973);
   hmc__7->SetBinContent(13,40.17143);
   hmc__7->SetBinContent(14,38.42523);
   hmc__7->SetBinContent(15,35.45578);
   hmc__7->SetBinContent(16,38.93861);
   hmc__7->SetBinContent(17,50.24332);
   hmc__7->SetBinContent(18,52.85835);
   hmc__7->SetBinContent(19,62.34914);
   hmc__7->SetBinContent(20,67.42664);
   hmc__7->SetBinContent(21,96.18919);
   hmc__7->SetBinContent(22,115.2572);
   hmc__7->SetBinContent(23,143.1993);
   hmc__7->SetBinContent(24,187.2719);
   hmc__7->SetBinContent(25,302.6916);
   hmc__7->SetBinError(1,21.00824);
   hmc__7->SetBinError(2,18.82099);
   hmc__7->SetBinError(3,12.59631);
   hmc__7->SetBinError(4,15.69177);
   hmc__7->SetBinError(5,18.74152);
   hmc__7->SetBinError(6,13.51794);
   hmc__7->SetBinError(7,11.5351);
   hmc__7->SetBinError(8,10.19669);
   hmc__7->SetBinError(9,13.75204);
   hmc__7->SetBinError(10,11.40831);
   hmc__7->SetBinError(11,13.28796);
   hmc__7->SetBinError(12,16.99113);
   hmc__7->SetBinError(13,14.76362);
   hmc__7->SetBinError(14,16.22547);
   hmc__7->SetBinError(15,14.18517);
   hmc__7->SetBinError(16,16.11029);
   hmc__7->SetBinError(17,16.45881);
   hmc__7->SetBinError(18,18.34774);
   hmc__7->SetBinError(19,22.66665);
   hmc__7->SetBinError(20,28.84437);
   hmc__7->SetBinError(21,37.96432);
   hmc__7->SetBinError(22,31.04144);
   hmc__7->SetBinError(23,42.77682);
   hmc__7->SetBinError(24,46.15243);
   hmc__7->SetBinError(25,64.38633);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-6.053832);
   hmc__7->SetMaximum(635.6524);
   hmc__7->SetEntries(1653.165);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,-1,1);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(317.8262);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.363478);
   hbadmatch_stack_1->SetBinContent(2,0.8144717);
   hbadmatch_stack_1->SetBinContent(3,1.355058);
   hbadmatch_stack_1->SetBinContent(4,1.660551);
   hbadmatch_stack_1->SetBinContent(5,0.8108466);
   hbadmatch_stack_1->SetBinContent(6,0.9374032);
   hbadmatch_stack_1->SetBinContent(7,1.332722);
   hbadmatch_stack_1->SetBinContent(8,0.3507817);
   hbadmatch_stack_1->SetBinContent(9,0.9027843);
   hbadmatch_stack_1->SetBinContent(10,0.6339369);
   hbadmatch_stack_1->SetBinContent(11,3.652431);
   hbadmatch_stack_1->SetBinContent(12,1.833931);
   hbadmatch_stack_1->SetBinContent(13,0.5698066);
   hbadmatch_stack_1->SetBinContent(14,3.628103);
   hbadmatch_stack_1->SetBinContent(15,2.007844);
   hbadmatch_stack_1->SetBinContent(16,1.189806);
   hbadmatch_stack_1->SetBinContent(17,2.196396);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(19,3.043151);
   hbadmatch_stack_1->SetBinContent(20,2.353034);
   hbadmatch_stack_1->SetBinContent(21,3.735046);
   hbadmatch_stack_1->SetBinContent(22,2.65573);
   hbadmatch_stack_1->SetBinContent(23,3.72733);
   hbadmatch_stack_1->SetBinContent(24,4.4777);
   hbadmatch_stack_1->SetBinContent(25,7.405085);
   hbadmatch_stack_1->SetBinError(1,0.7912477);
   hbadmatch_stack_1->SetBinError(2,0.4778041);
   hbadmatch_stack_1->SetBinError(3,0.6399469);
   hbadmatch_stack_1->SetBinError(4,0.650847);
   hbadmatch_stack_1->SetBinError(5,0.4059551);
   hbadmatch_stack_1->SetBinError(6,0.5142747);
   hbadmatch_stack_1->SetBinError(7,0.6581337);
   hbadmatch_stack_1->SetBinError(8,0.2567406);
   hbadmatch_stack_1->SetBinError(9,0.398976);
   hbadmatch_stack_1->SetBinError(10,0.3664746);
   hbadmatch_stack_1->SetBinError(11,1.113871);
   hbadmatch_stack_1->SetBinError(12,0.7677879);
   hbadmatch_stack_1->SetBinError(13,0.3380194);
   hbadmatch_stack_1->SetBinError(14,1.166212);
   hbadmatch_stack_1->SetBinError(15,0.686411);
   hbadmatch_stack_1->SetBinError(16,0.5456516);
   hbadmatch_stack_1->SetBinError(17,0.883929);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(19,0.9778322);
   hbadmatch_stack_1->SetBinError(20,0.8374217);
   hbadmatch_stack_1->SetBinError(21,1.066374);
   hbadmatch_stack_1->SetBinError(22,0.8494135);
   hbadmatch_stack_1->SetBinError(23,0.9716858);
   hbadmatch_stack_1->SetBinError(24,1.077305);
   hbadmatch_stack_1->SetBinError(25,1.706778);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,8.985429);
   hext_stack_2->SetBinContent(2,5.814838);
   hext_stack_2->SetBinContent(3,5.807659);
   hext_stack_2->SetBinContent(4,5.166044);
   hext_stack_2->SetBinContent(5,5.091023);
   hext_stack_2->SetBinContent(6,5.326038);
   hext_stack_2->SetBinContent(7,10.87991);
   hext_stack_2->SetBinContent(8,4.125011);
   hext_stack_2->SetBinContent(9,6.642398);
   hext_stack_2->SetBinContent(10,8.705693);
   hext_stack_2->SetBinContent(11,6.000783);
   hext_stack_2->SetBinContent(12,13.79672);
   hext_stack_2->SetBinContent(13,12.43129);
   hext_stack_2->SetBinContent(14,9.244757);
   hext_stack_2->SetBinContent(15,7.359033);
   hext_stack_2->SetBinContent(16,8.973839);
   hext_stack_2->SetBinContent(17,12.93886);
   hext_stack_2->SetBinContent(18,11.45091);
   hext_stack_2->SetBinContent(19,6.33677);
   hext_stack_2->SetBinContent(20,13.74047);
   hext_stack_2->SetBinContent(21,18.0227);
   hext_stack_2->SetBinContent(22,20.14508);
   hext_stack_2->SetBinContent(23,25.0717);
   hext_stack_2->SetBinContent(24,20.66978);
   hext_stack_2->SetBinContent(25,34.85873);
   hext_stack_2->SetBinError(1,2.024012);
   hext_stack_2->SetBinError(2,1.683489);
   hext_stack_2->SetBinError(3,1.742221);
   hext_stack_2->SetBinError(4,1.619774);
   hext_stack_2->SetBinError(5,1.537002);
   hext_stack_2->SetBinError(6,1.615154);
   hext_stack_2->SetBinError(7,2.380124);
   hext_stack_2->SetBinError(8,1.358482);
   hext_stack_2->SetBinError(9,1.66204);
   hext_stack_2->SetBinError(10,2.141505);
   hext_stack_2->SetBinError(11,1.533202);
   hext_stack_2->SetBinError(12,2.635985);
   hext_stack_2->SetBinError(13,2.46272);
   hext_stack_2->SetBinError(14,1.844734);
   hext_stack_2->SetBinError(15,1.853466);
   hext_stack_2->SetBinError(16,2.040271);
   hext_stack_2->SetBinError(17,2.454205);
   hext_stack_2->SetBinError(18,2.439363);
   hext_stack_2->SetBinError(19,1.545918);
   hext_stack_2->SetBinError(20,2.533742);
   hext_stack_2->SetBinError(21,2.930307);
   hext_stack_2->SetBinError(22,3.045029);
   hext_stack_2->SetBinError(23,3.393287);
   hext_stack_2->SetBinError(24,2.914036);
   hext_stack_2->SetBinError(25,4.000969);
   hext_stack_2->SetEntries(672);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.8371547);
   hdirt_stack_3->SetBinContent(2,0.4377912);
   hdirt_stack_3->SetBinContent(3,0.7618795);
   hdirt_stack_3->SetBinContent(4,0.6084618);
   hdirt_stack_3->SetBinContent(5,1.880635);
   hdirt_stack_3->SetBinContent(6,0.6417377);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.804172);
   hdirt_stack_3->SetBinContent(11,0.4377912);
   hdirt_stack_3->SetBinContent(12,0.3986344);
   hdirt_stack_3->SetBinContent(13,0.8190863);
   hdirt_stack_3->SetBinContent(15,0.5930034);
   hdirt_stack_3->SetBinContent(16,0.5570828);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.4206735);
   hdirt_stack_3->SetBinContent(19,0.5737875);
   hdirt_stack_3->SetBinContent(20,1.587271);
   hdirt_stack_3->SetBinContent(21,0.9140499);
   hdirt_stack_3->SetBinContent(22,2.686453);
   hdirt_stack_3->SetBinContent(23,2.574108);
   hdirt_stack_3->SetBinContent(24,1.980797);
   hdirt_stack_3->SetBinContent(25,3.637482);
   hdirt_stack_3->SetBinError(1,0.4476927);
   hdirt_stack_3->SetBinError(2,0.3095651);
   hdirt_stack_3->SetBinError(3,0.480555);
   hdirt_stack_3->SetBinError(4,0.4468525);
   hdirt_stack_3->SetBinError(5,1.062201);
   hdirt_stack_3->SetBinError(6,0.4010207);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(10,0.4725875);
   hdirt_stack_3->SetBinError(11,0.3095651);
   hdirt_stack_3->SetBinError(12,0.2948844);
   hdirt_stack_3->SetBinError(13,0.4805535);
   hdirt_stack_3->SetBinError(15,0.4234405);
   hdirt_stack_3->SetBinError(16,0.4028472);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.3064188);
   hdirt_stack_3->SetBinError(19,0.3396768);
   hdirt_stack_3->SetBinError(20,0.6025866);
   hdirt_stack_3->SetBinError(21,0.4788161);
   hdirt_stack_3->SetBinError(22,0.8951295);
   hdirt_stack_3->SetBinError(23,0.8726897);
   hdirt_stack_3->SetBinError(24,0.7131444);
   hdirt_stack_3->SetBinError(25,1.064903);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,13.86659);
   houtFV_stack_4->SetBinContent(2,10.43748);
   houtFV_stack_4->SetBinContent(3,8.277291);
   houtFV_stack_4->SetBinContent(4,7.169923);
   houtFV_stack_4->SetBinContent(5,7.397285);
   houtFV_stack_4->SetBinContent(6,6.124953);
   houtFV_stack_4->SetBinContent(7,6.716514);
   houtFV_stack_4->SetBinContent(8,6.94594);
   houtFV_stack_4->SetBinContent(9,6.516219);
   houtFV_stack_4->SetBinContent(10,4.844806);
   houtFV_stack_4->SetBinContent(11,6.420391);
   houtFV_stack_4->SetBinContent(12,6.397861);
   houtFV_stack_4->SetBinContent(13,7.310133);
   houtFV_stack_4->SetBinContent(14,6.992825);
   houtFV_stack_4->SetBinContent(15,6.722825);
   houtFV_stack_4->SetBinContent(16,4.487655);
   houtFV_stack_4->SetBinContent(17,8.986097);
   houtFV_stack_4->SetBinContent(18,9.893677);
   houtFV_stack_4->SetBinContent(19,12.31859);
   houtFV_stack_4->SetBinContent(20,11.17854);
   houtFV_stack_4->SetBinContent(21,15.86223);
   houtFV_stack_4->SetBinContent(22,23.99404);
   houtFV_stack_4->SetBinContent(23,28.42493);
   houtFV_stack_4->SetBinContent(24,34.58057);
   houtFV_stack_4->SetBinContent(25,46.82004);
   houtFV_stack_4->SetBinError(1,1.904307);
   houtFV_stack_4->SetBinError(2,1.670493);
   houtFV_stack_4->SetBinError(3,1.453084);
   houtFV_stack_4->SetBinError(4,1.242215);
   houtFV_stack_4->SetBinError(5,1.373401);
   houtFV_stack_4->SetBinError(6,1.180806);
   houtFV_stack_4->SetBinError(7,1.266684);
   houtFV_stack_4->SetBinError(8,1.793644);
   houtFV_stack_4->SetBinError(9,1.277487);
   houtFV_stack_4->SetBinError(10,1.070004);
   houtFV_stack_4->SetBinError(11,1.243684);
   houtFV_stack_4->SetBinError(12,1.252576);
   houtFV_stack_4->SetBinError(13,1.381854);
   houtFV_stack_4->SetBinError(14,1.318056);
   houtFV_stack_4->SetBinError(15,1.276433);
   houtFV_stack_4->SetBinError(16,1.089653);
   houtFV_stack_4->SetBinError(17,1.451894);
   houtFV_stack_4->SetBinError(18,1.58451);
   houtFV_stack_4->SetBinError(19,1.783752);
   houtFV_stack_4->SetBinError(20,1.779406);
   houtFV_stack_4->SetBinError(21,1.960322);
   houtFV_stack_4->SetBinError(22,2.615849);
   houtFV_stack_4->SetBinError(23,2.604583);
   houtFV_stack_4->SetBinError(24,2.974622);
   houtFV_stack_4->SetBinError(25,3.635874);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2825034);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.07136732);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2263375);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.202419);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.04354476);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.4796972);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.9454584);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.186372);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,10.16759);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1678695);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05092153);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1978906);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2024189);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03228062);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2456235);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4078399);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6166991);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.153307);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.09327726);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05455795);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08670568);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.03711351);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.04683727);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1071979);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1324635);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.6435912);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4991467);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07723082);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03151795);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05247539);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02180949);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03375293);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06608274);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06345652);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3237599);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1897073);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.382512);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.050275);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.681481);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.389401);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.445044);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.431763);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.405874);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.276783);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.749118);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.535793);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.565228);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.686557);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.323586);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.507245);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.512803);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.070483);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.097579);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.583774);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.982507);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.46417);
   hNCpi0inFVres_stack_7->SetBinContent(21,15.81638);
   hNCpi0inFVres_stack_7->SetBinContent(22,19.16004);
   hNCpi0inFVres_stack_7->SetBinContent(23,21.60219);
   hNCpi0inFVres_stack_7->SetBinContent(24,26.79182);
   hNCpi0inFVres_stack_7->SetBinContent(25,41.71292);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6983902);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5332501);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4942456);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4599183);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4230621);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4021807);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5728653);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4503503);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6358737);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4692871);
   hNCpi0inFVres_stack_7->SetBinError(11,0.493916);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5086977);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7464184);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4969348);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8665425);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7016235);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6719145);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9541817);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9472904);
   hNCpi0inFVres_stack_7->SetBinError(20,1.107535);
   hNCpi0inFVres_stack_7->SetBinError(21,1.302647);
   hNCpi0inFVres_stack_7->SetBinError(22,1.517644);
   hNCpi0inFVres_stack_7->SetBinError(23,1.484188);
   hNCpi0inFVres_stack_7->SetBinError(24,1.58814);
   hNCpi0inFVres_stack_7->SetBinError(25,2.180834);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.582881);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.9628295);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.2552646);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.7865671);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.8742711);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8252844);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.5591202);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6358376);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.3725126);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.198162);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4938788);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6364882);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.767509);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7701465);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3897012);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.636159);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8951031);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.177863);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.626142);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.580114);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.365318);
   hNCpi0inFVdis_stack_8->SetBinContent(22,5.197382);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.091433);
   hNCpi0inFVdis_stack_8->SetBinContent(24,11.15293);
   hNCpi0inFVdis_stack_8->SetBinContent(25,19.11578);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6086499);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2626081);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.09077622);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2314071);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3425825);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3756285);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2801668);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2559556);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1678564);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6154348);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.173367);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2201681);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4602534);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2929134);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1096664);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4764245);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1943089);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2889709);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.560996);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6742433);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7243663);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9454761);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7846693);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.457212);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.745623);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02337297);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,10.6305);
   hCCpi0inFV_stack_10->SetBinContent(2,5.68768);
   hCCpi0inFV_stack_10->SetBinContent(3,4.558547);
   hCCpi0inFV_stack_10->SetBinContent(4,5.625052);
   hCCpi0inFV_stack_10->SetBinContent(5,2.885098);
   hCCpi0inFV_stack_10->SetBinContent(6,4.515367);
   hCCpi0inFV_stack_10->SetBinContent(7,4.339944);
   hCCpi0inFV_stack_10->SetBinContent(8,4.564643);
   hCCpi0inFV_stack_10->SetBinContent(9,3.944665);
   hCCpi0inFV_stack_10->SetBinContent(10,4.499756);
   hCCpi0inFV_stack_10->SetBinContent(11,5.122123);
   hCCpi0inFV_stack_10->SetBinContent(12,7.040486);
   hCCpi0inFV_stack_10->SetBinContent(13,5.155672);
   hCCpi0inFV_stack_10->SetBinContent(14,7.965959);
   hCCpi0inFV_stack_10->SetBinContent(15,5.341509);
   hCCpi0inFV_stack_10->SetBinContent(16,7.948304);
   hCCpi0inFV_stack_10->SetBinContent(17,7.974097);
   hCCpi0inFV_stack_10->SetBinContent(18,8.494755);
   hCCpi0inFV_stack_10->SetBinContent(19,13.96292);
   hCCpi0inFV_stack_10->SetBinContent(20,12.41452);
   hCCpi0inFV_stack_10->SetBinContent(21,19.05052);
   hCCpi0inFV_stack_10->SetBinContent(22,20.44128);
   hCCpi0inFV_stack_10->SetBinContent(23,33.6716);
   hCCpi0inFV_stack_10->SetBinContent(24,40.32059);
   hCCpi0inFV_stack_10->SetBinContent(25,72.94033);
   hCCpi0inFV_stack_10->SetBinError(1,1.621512);
   hCCpi0inFV_stack_10->SetBinError(2,1.17278);
   hCCpi0inFV_stack_10->SetBinError(3,1.059674);
   hCCpi0inFV_stack_10->SetBinError(4,1.161279);
   hCCpi0inFV_stack_10->SetBinError(5,0.8218694);
   hCCpi0inFV_stack_10->SetBinError(6,1.034911);
   hCCpi0inFV_stack_10->SetBinError(7,1.092568);
   hCCpi0inFV_stack_10->SetBinError(8,1.026382);
   hCCpi0inFV_stack_10->SetBinError(9,0.9887154);
   hCCpi0inFV_stack_10->SetBinError(10,1.104358);
   hCCpi0inFV_stack_10->SetBinError(11,1.099394);
   hCCpi0inFV_stack_10->SetBinError(12,1.354467);
   hCCpi0inFV_stack_10->SetBinError(13,1.105921);
   hCCpi0inFV_stack_10->SetBinError(14,1.41549);
   hCCpi0inFV_stack_10->SetBinError(15,1.093547);
   hCCpi0inFV_stack_10->SetBinError(16,1.434388);
   hCCpi0inFV_stack_10->SetBinError(17,1.367617);
   hCCpi0inFV_stack_10->SetBinError(18,1.463241);
   hCCpi0inFV_stack_10->SetBinError(19,1.919723);
   hCCpi0inFV_stack_10->SetBinError(20,1.751547);
   hCCpi0inFV_stack_10->SetBinError(21,2.226112);
   hCCpi0inFV_stack_10->SetBinError(22,2.275418);
   hCCpi0inFV_stack_10->SetBinError(23,2.963225);
   hCCpi0inFV_stack_10->SetBinError(24,3.197192);
   hCCpi0inFV_stack_10->SetBinError(25,4.365995);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.363097);
   hNCinFV_stack_11->SetBinContent(2,1.376601);
   hNCinFV_stack_11->SetBinContent(3,0.7708855);
   hNCinFV_stack_11->SetBinContent(4,1.062478);
   hNCinFV_stack_11->SetBinContent(5,0.9805218);
   hNCinFV_stack_11->SetBinContent(6,0.5138904);
   hNCinFV_stack_11->SetBinContent(7,0.536893);
   hNCinFV_stack_11->SetBinContent(8,0.9882689);
   hNCinFV_stack_11->SetBinContent(9,0.975584);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.795802);
   hNCinFV_stack_11->SetBinContent(12,0.536893);
   hNCinFV_stack_11->SetBinContent(13,0.5707158);
   hNCinFV_stack_11->SetBinContent(14,1.222409);
   hNCinFV_stack_11->SetBinContent(15,0.5318236);
   hNCinFV_stack_11->SetBinContent(16,1.615273);
   hNCinFV_stack_11->SetBinContent(17,1.877104);
   hNCinFV_stack_11->SetBinContent(18,1.882393);
   hNCinFV_stack_11->SetBinContent(19,2.297208);
   hNCinFV_stack_11->SetBinContent(20,1.618119);
   hNCinFV_stack_11->SetBinContent(21,2.467265);
   hNCinFV_stack_11->SetBinContent(22,4.612503);
   hNCinFV_stack_11->SetBinContent(23,8.440503);
   hNCinFV_stack_11->SetBinContent(24,13.71692);
   hNCinFV_stack_11->SetBinContent(25,18.92156);
   hNCinFV_stack_11->SetBinError(1,0.5427932);
   hNCinFV_stack_11->SetBinError(2,0.5300671);
   hNCinFV_stack_11->SetBinError(3,0.6079886);
   hNCinFV_stack_11->SetBinError(4,0.4874477);
   hNCinFV_stack_11->SetBinError(5,0.6422097);
   hNCinFV_stack_11->SetBinError(6,0.3027413);
   hNCinFV_stack_11->SetBinError(7,0.3929602);
   hNCinFV_stack_11->SetBinError(8,0.474711);
   hNCinFV_stack_11->SetBinError(9,0.483067);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.366013);
   hNCinFV_stack_11->SetBinError(12,0.3929602);
   hNCinFV_stack_11->SetBinError(13,0.377277);
   hNCinFV_stack_11->SetBinError(14,0.5075027);
   hNCinFV_stack_11->SetBinError(15,0.3196776);
   hNCinFV_stack_11->SetBinError(16,0.8177165);
   hNCinFV_stack_11->SetBinError(17,0.7145523);
   hNCinFV_stack_11->SetBinError(18,1.095477);
   hNCinFV_stack_11->SetBinError(19,0.6613742);
   hNCinFV_stack_11->SetBinError(20,0.5970092);
   hNCinFV_stack_11->SetBinError(21,0.7278412);
   hNCinFV_stack_11->SetBinError(22,1.081352);
   hNCinFV_stack_11->SetBinError(23,1.630956);
   hNCinFV_stack_11->SetBinError(24,2.013229);
   hNCinFV_stack_11->SetBinError(25,2.382117);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,3.896408);
   hnumuCCinFV_stack_12->SetBinContent(2,3.026236);
   hnumuCCinFV_stack_12->SetBinContent(3,2.858254);
   hnumuCCinFV_stack_12->SetBinContent(4,3.241089);
   hnumuCCinFV_stack_12->SetBinContent(5,3.001497);
   hnumuCCinFV_stack_12->SetBinContent(6,3.520511);
   hnumuCCinFV_stack_12->SetBinContent(7,3.810356);
   hnumuCCinFV_stack_12->SetBinContent(8,3.632102);
   hnumuCCinFV_stack_12->SetBinContent(9,2.783342);
   hnumuCCinFV_stack_12->SetBinContent(10,2.595137);
   hnumuCCinFV_stack_12->SetBinContent(11,3.330666);
   hnumuCCinFV_stack_12->SetBinContent(12,4.565762);
   hnumuCCinFV_stack_12->SetBinContent(13,6.223635);
   hnumuCCinFV_stack_12->SetBinContent(14,5.039231);
   hnumuCCinFV_stack_12->SetBinContent(15,5.989569);
   hnumuCCinFV_stack_12->SetBinContent(16,6.435616);
   hnumuCCinFV_stack_12->SetBinContent(17,8.715117);
   hnumuCCinFV_stack_12->SetBinContent(18,9.14933);
   hnumuCCinFV_stack_12->SetBinContent(19,10.74171);
   hnumuCCinFV_stack_12->SetBinContent(20,10.47161);
   hnumuCCinFV_stack_12->SetBinContent(21,15.69788);
   hnumuCCinFV_stack_12->SetBinContent(22,15.77783);
   hnumuCCinFV_stack_12->SetBinContent(23,12.12755);
   hnumuCCinFV_stack_12->SetBinContent(24,28.97643);
   hnumuCCinFV_stack_12->SetBinContent(25,38.7506);
   hnumuCCinFV_stack_12->SetBinError(1,1.002344);
   hnumuCCinFV_stack_12->SetBinError(2,0.8589073);
   hnumuCCinFV_stack_12->SetBinError(3,0.8517379);
   hnumuCCinFV_stack_12->SetBinError(4,0.9692447);
   hnumuCCinFV_stack_12->SetBinError(5,0.9396551);
   hnumuCCinFV_stack_12->SetBinError(6,0.9740731);
   hnumuCCinFV_stack_12->SetBinError(7,1.079771);
   hnumuCCinFV_stack_12->SetBinError(8,0.9961231);
   hnumuCCinFV_stack_12->SetBinError(9,0.9198381);
   hnumuCCinFV_stack_12->SetBinError(10,0.8885448);
   hnumuCCinFV_stack_12->SetBinError(11,0.8993034);
   hnumuCCinFV_stack_12->SetBinError(12,1.533018);
   hnumuCCinFV_stack_12->SetBinError(13,1.329876);
   hnumuCCinFV_stack_12->SetBinError(14,1.259134);
   hnumuCCinFV_stack_12->SetBinError(15,1.289444);
   hnumuCCinFV_stack_12->SetBinError(16,1.333546);
   hnumuCCinFV_stack_12->SetBinError(17,1.778335);
   hnumuCCinFV_stack_12->SetBinError(18,1.663498);
   hnumuCCinFV_stack_12->SetBinError(19,1.786283);
   hnumuCCinFV_stack_12->SetBinError(20,1.93991);
   hnumuCCinFV_stack_12->SetBinError(21,2.055989);
   hnumuCCinFV_stack_12->SetBinError(22,2.044681);
   hnumuCCinFV_stack_12->SetBinError(23,1.703217);
   hnumuCCinFV_stack_12->SetBinError(24,3.731488);
   hnumuCCinFV_stack_12->SetBinError(25,4.12822);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(4,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(18,0.34964);
   hnueCCinFV_stack_13->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(24,0.756103);
   hnueCCinFV_stack_13->SetBinContent(25,7.829327);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(2,0.340721);
   hnueCCinFV_stack_13->SetBinError(4,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(18,0.2491644);
   hnueCCinFV_stack_13->SetBinError(19,0.2171002);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.2758068);
   hnueCCinFV_stack_13->SetBinError(24,0.4499676);
   hnueCCinFV_stack_13->SetBinError(25,2.38816);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__8->SetBinContent(1,48.67725);
   hmcerror__8->SetBinContent(2,32.28803);
   hmcerror__8->SetBinContent(3,27.376);
   hmcerror__8->SetBinContent(4,27.99682);
   hmcerror__8->SetBinContent(5,25.56124);
   hmcerror__8->SetBinContent(6,25.36584);
   hmcerror__8->SetBinContent(7,31.73822);
   hmcerror__8->SetBinContent(8,23.51937);
   hmcerror__8->SetBinContent(9,26.03392);
   hmcerror__8->SetBinContent(10,26.37317);
   hmcerror__8->SetBinContent(11,29.82616);
   hmcerror__8->SetBinContent(12,38.91973);
   hmcerror__8->SetBinContent(13,40.17143);
   hmcerror__8->SetBinContent(14,38.42523);
   hmcerror__8->SetBinContent(15,35.45578);
   hmcerror__8->SetBinContent(16,38.93861);
   hmcerror__8->SetBinContent(17,50.24332);
   hmcerror__8->SetBinContent(18,52.85835);
   hmcerror__8->SetBinContent(19,62.34914);
   hmcerror__8->SetBinContent(20,67.42664);
   hmcerror__8->SetBinContent(21,96.18919);
   hmcerror__8->SetBinContent(22,115.2572);
   hmcerror__8->SetBinContent(23,143.1993);
   hmcerror__8->SetBinContent(24,187.2719);
   hmcerror__8->SetBinContent(25,302.6916);
   hmcerror__8->SetBinError(1,21.00824);
   hmcerror__8->SetBinError(2,18.82099);
   hmcerror__8->SetBinError(3,12.59631);
   hmcerror__8->SetBinError(4,15.69177);
   hmcerror__8->SetBinError(5,18.74152);
   hmcerror__8->SetBinError(6,13.51794);
   hmcerror__8->SetBinError(7,11.5351);
   hmcerror__8->SetBinError(8,10.19669);
   hmcerror__8->SetBinError(9,13.75204);
   hmcerror__8->SetBinError(10,11.40831);
   hmcerror__8->SetBinError(11,13.28796);
   hmcerror__8->SetBinError(12,16.99113);
   hmcerror__8->SetBinError(13,14.76362);
   hmcerror__8->SetBinError(14,16.22547);
   hmcerror__8->SetBinError(15,14.18517);
   hmcerror__8->SetBinError(16,16.11029);
   hmcerror__8->SetBinError(17,16.45881);
   hmcerror__8->SetBinError(18,18.34774);
   hmcerror__8->SetBinError(19,22.66665);
   hmcerror__8->SetBinError(20,28.84437);
   hmcerror__8->SetBinError(21,37.96432);
   hmcerror__8->SetBinError(22,31.04144);
   hmcerror__8->SetBinError(23,42.77682);
   hmcerror__8->SetBinError(24,46.15243);
   hmcerror__8->SetBinError(25,64.38633);
   hmcerror__8->SetBinError(26,0.3895343);
   hmcerror__8->SetEntries(1653.165);

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
   
   Double_t _fx3009[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3009[25] = {
   52,
   33,
   17,
   24,
   25,
   23,
   23,
   26,
   27,
   24,
   27,
   37,
   28,
   37,
   32,
   36,
   44,
   43,
   54,
   72,
   74,
   99,
   139,
   194,
   280};
   Double_t _felx3009[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3009[25] = {
   7.3419,
   5.8847,
   4.2835,
   5.0476,
   5.1474,
   4.9457,
   4.9457,
   5.2453,
   5.3414,
   5.0476,
   5.3414,
   6.2203,
   5.4358,
   6.2203,
   5.7977,
   6.1381,
   6.7671,
   6.6917,
   7.4785,
   8.6108,
   8.7275,
   10.0712,
   11.78983,
   13.92839,
   16.7332};
   Double_t _fehx3009[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3009[25] = {
   7.1381,
   5.6776,
   4.0673,
   4.837,
   4.9374,
   4.7346,
   4.7346,
   5.0358,
   5.1322,
   4.837,
   5.1322,
   6.0141,
   5.2271,
   6.0141,
   5.5904,
   5.9318,
   6.5623,
   6.4868,
   7.275,
   8.4085,
   8.5253,
   9.87,
   11.78983,
   13.92839,
   16.7332};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(11.44485);
   Graph_Graph3009->SetMaximum(325.1349);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.5/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  220.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 70.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3010[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3010[25] = {
   0.4315823,
   0.5829093,
   0.4601224,
   0.5604839,
   0.7332006,
   0.532919,
   0.3634452,
   0.4335443,
   0.5282357,
   0.4325725,
   0.4455137,
   0.4365686,
   0.3675154,
   0.4222608,
   0.4000808,
   0.4137355,
   0.3275821,
   0.3471114,
   0.3635439,
   0.4277889,
   0.3946838,
   0.2693231,
   0.2987223,
   0.2464462,
   0.2127126};
   Double_t _fehx3010[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3010[25] = {
   0.4315823,
   0.5829093,
   0.4601224,
   0.5604839,
   0.7332006,
   0.532919,
   0.3634452,
   0.4335443,
   0.5282357,
   0.4325725,
   0.4455137,
   0.4365686,
   0.3675154,
   0.4222608,
   0.4000808,
   0.4137355,
   0.3275821,
   0.3471114,
   0.3635439,
   0.4277889,
   0.3946838,
   0.2693231,
   0.2987223,
   0.2464462,
   0.2127126};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3011[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3011[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3011[25] = {
   0.209997,
   0.2049014,
   0.1999254,
   0.2309081,
   0.2413843,
   0.2408912,
   0.1934686,
   0.2234613,
   0.2412182,
   0.2128923,
   0.2389354,
   0.2000055,
   0.2234744,
   0.2225433,
   0.2546429,
   0.2349506,
   0.2271851,
   0.2345533,
   0.2551649,
   0.2102228,
   0.2198262,
   0.2038792,
   0.2049371,
   0.1968637,
   0.1754889};
   Double_t _fehx3011[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3011[25] = {
   0.209997,
   0.2049014,
   0.1999254,
   0.2309081,
   0.2413843,
   0.2408912,
   0.1934686,
   0.2234613,
   0.2412182,
   0.2128923,
   0.2389354,
   0.2000055,
   0.2234744,
   0.2225433,
   0.2546429,
   0.2349506,
   0.2271851,
   0.2345533,
   0.2551649,
   0.2102228,
   0.2198262,
   0.2038792,
   0.2049371,
   0.1968637,
   0.1754889};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3012[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3012[25] = {
   1.068261,
   1.022051,
   0.6209818,
   0.8572403,
   0.9780431,
   0.9067314,
   0.7246783,
   1.105472,
   1.037109,
   0.9100159,
   0.9052455,
   0.9506745,
   0.6970128,
   0.962909,
   0.9025328,
   0.9245321,
   0.8757384,
   0.8134949,
   0.8660905,
   1.067827,
   0.7693172,
   0.8589483,
   0.9706751,
   1.035927,
   0.9250339};
   Double_t _felx3012[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3012[25] = {
   0.1508281,
   0.1822564,
   0.1564692,
   0.1802919,
   0.2013752,
   0.1949749,
   0.1558279,
   0.2230204,
   0.2051708,
   0.1913915,
   0.1790844,
   0.1598238,
   0.1353151,
   0.1618806,
   0.1635192,
   0.1576353,
   0.1346866,
   0.1265968,
   0.1199455,
   0.1277062,
   0.09073265,
   0.0873802,
   0.08233158,
   0.07437524,
   0.05528135};
   Double_t _fehx3012[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3012[25] = {
   0.1466414,
   0.1758423,
   0.1485717,
   0.1727696,
   0.1931596,
   0.1866526,
   0.1491766,
   0.2141129,
   0.1971351,
   0.1834061,
   0.1720704,
   0.1545257,
   0.1301198,
   0.1565143,
   0.1576725,
   0.1523372,
   0.1306104,
   0.1227204,
   0.1166816,
   0.1247059,
   0.08863054,
   0.08563454,
   0.08233158,
   0.07437524,
   0.05528135};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.3790055);
   Graph_Graph3012->SetMaximum(1.405092);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

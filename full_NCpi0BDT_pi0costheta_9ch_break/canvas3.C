#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Jun  8 13:23:06 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-5.969485,1.25641,660.0994);
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
   hmc__7->SetBinContent(1,50.09904);
   hmc__7->SetBinContent(2,32.9622);
   hmc__7->SetBinContent(3,28.78263);
   hmc__7->SetBinContent(4,28.88347);
   hmc__7->SetBinContent(5,26.1255);
   hmc__7->SetBinContent(6,26.75592);
   hmc__7->SetBinContent(7,33.65842);
   hmc__7->SetBinContent(8,24.76127);
   hmc__7->SetBinContent(9,27.87861);
   hmc__7->SetBinContent(10,27.47249);
   hmc__7->SetBinContent(11,31.87166);
   hmc__7->SetBinContent(12,42.24748);
   hmc__7->SetBinContent(13,42.94117);
   hmc__7->SetBinContent(14,40.15329);
   hmc__7->SetBinContent(15,37.9589);
   hmc__7->SetBinContent(16,41.18394);
   hmc__7->SetBinContent(17,53.379);
   hmc__7->SetBinContent(18,56.9313);
   hmc__7->SetBinContent(19,65.23675);
   hmc__7->SetBinContent(20,69.70348);
   hmc__7->SetBinContent(21,101.0289);
   hmc__7->SetBinContent(22,119.7033);
   hmc__7->SetBinContent(23,146.9382);
   hmc__7->SetBinContent(24,187.9783);
   hmc__7->SetBinContent(25,298.4743);
   hmc__7->SetBinError(1,12.31295);
   hmc__7->SetBinError(2,11.25274);
   hmc__7->SetBinError(3,7.846919);
   hmc__7->SetBinError(4,7.841636);
   hmc__7->SetBinError(5,12.49258);
   hmc__7->SetBinError(6,7.503788);
   hmc__7->SetBinError(7,7.835666);
   hmc__7->SetBinError(8,7.227406);
   hmc__7->SetBinError(9,7.267472);
   hmc__7->SetBinError(10,7.21202);
   hmc__7->SetBinError(11,11.07768);
   hmc__7->SetBinError(12,10.27407);
   hmc__7->SetBinError(13,10.28092);
   hmc__7->SetBinError(14,9.392973);
   hmc__7->SetBinError(15,9.712545);
   hmc__7->SetBinError(16,9.773642);
   hmc__7->SetBinError(17,13.06433);
   hmc__7->SetBinError(18,13.20564);
   hmc__7->SetBinError(19,17.2517);
   hmc__7->SetBinError(20,17.38091);
   hmc__7->SetBinError(21,21.4422);
   hmc__7->SetBinError(22,24.32808);
   hmc__7->SetBinError(23,29.17065);
   hmc__7->SetBinError(24,36.32275);
   hmc__7->SetBinError(25,52.87506);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-5.969485);
   hmc__7->SetMaximum(626.796);
   hmc__7->SetEntries(1611.219);
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
   hs3_stack_3->SetMaximum(313.398);
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
   hbadmatch_stack_1->SetBinContent(1,2.508998);
   hbadmatch_stack_1->SetBinContent(2,0.8144717);
   hbadmatch_stack_1->SetBinContent(3,1.441151);
   hbadmatch_stack_1->SetBinContent(4,1.660551);
   hbadmatch_stack_1->SetBinContent(5,0.8108466);
   hbadmatch_stack_1->SetBinContent(6,1.073786);
   hbadmatch_stack_1->SetBinContent(7,1.268811);
   hbadmatch_stack_1->SetBinContent(8,0.5368956);
   hbadmatch_stack_1->SetBinContent(9,1.363313);
   hbadmatch_stack_1->SetBinContent(10,0.6339369);
   hbadmatch_stack_1->SetBinContent(11,3.376726);
   hbadmatch_stack_1->SetBinContent(12,1.964838);
   hbadmatch_stack_1->SetBinContent(13,0.6338658);
   hbadmatch_stack_1->SetBinContent(14,3.994081);
   hbadmatch_stack_1->SetBinContent(15,2.279184);
   hbadmatch_stack_1->SetBinContent(16,1.31608);
   hbadmatch_stack_1->SetBinContent(17,1.841952);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(19,3.231577);
   hbadmatch_stack_1->SetBinContent(20,2.311571);
   hbadmatch_stack_1->SetBinContent(21,3.833886);
   hbadmatch_stack_1->SetBinContent(22,2.839874);
   hbadmatch_stack_1->SetBinContent(23,3.80734);
   hbadmatch_stack_1->SetBinContent(24,4.784938);
   hbadmatch_stack_1->SetBinContent(25,7.738287);
   hbadmatch_stack_1->SetBinError(1,0.8164142);
   hbadmatch_stack_1->SetBinError(2,0.4778041);
   hbadmatch_stack_1->SetBinError(3,0.6602967);
   hbadmatch_stack_1->SetBinError(4,0.650847);
   hbadmatch_stack_1->SetBinError(5,0.4059551);
   hbadmatch_stack_1->SetBinError(6,0.5557297);
   hbadmatch_stack_1->SetBinError(7,0.5889569);
   hbadmatch_stack_1->SetBinError(8,0.3929602);
   hbadmatch_stack_1->SetBinError(9,0.5713784);
   hbadmatch_stack_1->SetBinError(10,0.3664746);
   hbadmatch_stack_1->SetBinError(11,1.020487);
   hbadmatch_stack_1->SetBinError(12,0.7952541);
   hbadmatch_stack_1->SetBinError(13,0.3679081);
   hbadmatch_stack_1->SetBinError(14,1.202491);
   hbadmatch_stack_1->SetBinError(15,0.7427729);
   hbadmatch_stack_1->SetBinError(16,0.606384);
   hbadmatch_stack_1->SetBinError(17,0.7189319);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(19,0.9781289);
   hbadmatch_stack_1->SetBinError(20,0.8053346);
   hbadmatch_stack_1->SetBinError(21,1.052625);
   hbadmatch_stack_1->SetBinError(22,0.8488573);
   hbadmatch_stack_1->SetBinError(23,0.9919029);
   hbadmatch_stack_1->SetBinError(24,1.110004);
   hbadmatch_stack_1->SetBinError(25,1.729738);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1462;
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

   ci = 1463;
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

   ci = 1464;
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
   houtFV_stack_4->SetBinContent(1,14.54652);
   houtFV_stack_4->SetBinContent(2,10.66165);
   houtFV_stack_4->SetBinContent(3,8.710043);
   houtFV_stack_4->SetBinContent(4,7.572046);
   houtFV_stack_4->SetBinContent(5,7.310715);
   houtFV_stack_4->SetBinContent(6,6.593912);
   houtFV_stack_4->SetBinContent(7,7.150075);
   houtFV_stack_4->SetBinContent(8,7.096779);
   houtFV_stack_4->SetBinContent(9,6.688764);
   houtFV_stack_4->SetBinContent(10,5.08176);
   houtFV_stack_4->SetBinContent(11,7.3155);
   houtFV_stack_4->SetBinContent(12,7.01346);
   houtFV_stack_4->SetBinContent(13,7.716559);
   houtFV_stack_4->SetBinContent(14,7.365965);
   houtFV_stack_4->SetBinContent(15,6.887426);
   houtFV_stack_4->SetBinContent(16,5.213634);
   houtFV_stack_4->SetBinContent(17,9.44102);
   houtFV_stack_4->SetBinContent(18,10.95822);
   houtFV_stack_4->SetBinContent(19,12.86611);
   houtFV_stack_4->SetBinContent(20,11.20898);
   houtFV_stack_4->SetBinContent(21,17.32698);
   houtFV_stack_4->SetBinContent(22,25.96397);
   houtFV_stack_4->SetBinContent(23,30.73441);
   houtFV_stack_4->SetBinContent(24,35.92852);
   houtFV_stack_4->SetBinContent(25,47.65536);
   houtFV_stack_4->SetBinError(1,1.947602);
   houtFV_stack_4->SetBinError(2,1.60677);
   houtFV_stack_4->SetBinError(3,1.488077);
   houtFV_stack_4->SetBinError(4,1.274142);
   houtFV_stack_4->SetBinError(5,1.313298);
   houtFV_stack_4->SetBinError(6,1.263789);
   houtFV_stack_4->SetBinError(7,1.330109);
   houtFV_stack_4->SetBinError(8,1.800854);
   houtFV_stack_4->SetBinError(9,1.309539);
   houtFV_stack_4->SetBinError(10,1.119284);
   houtFV_stack_4->SetBinError(11,1.339708);
   houtFV_stack_4->SetBinError(12,1.345098);
   houtFV_stack_4->SetBinError(13,1.400237);
   houtFV_stack_4->SetBinError(14,1.394512);
   houtFV_stack_4->SetBinError(15,1.296021);
   houtFV_stack_4->SetBinError(16,1.209346);
   houtFV_stack_4->SetBinError(17,1.481393);
   houtFV_stack_4->SetBinError(18,1.699341);
   houtFV_stack_4->SetBinError(19,1.799241);
   houtFV_stack_4->SetBinError(20,1.701096);
   houtFV_stack_4->SetBinError(21,2.111991);
   houtFV_stack_4->SetBinError(22,2.74415);
   houtFV_stack_4->SetBinError(23,2.757178);
   houtFV_stack_4->SetBinError(24,3.006623);
   houtFV_stack_4->SetBinError(25,3.56823);
   houtFV_stack_4->SetEntries(1382);

   ci = 1465;
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8511223);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.093924);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,9.411469);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3588378);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6032522);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9873099);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1466;
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.697836);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.29151);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1467;
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
   hNCpi0inFVres_stack_7->SetBinContent(1,5.646618);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.765515);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.850384);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.514752);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.667702);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.371756);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.89315);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.292384);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.839342);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.55527);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.352168);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.8851);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.277444);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.171982);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.742534);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.421512);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.426088);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.16554);
   hNCpi0inFVres_stack_7->SetBinContent(19,12.93601);
   hNCpi0inFVres_stack_7->SetBinContent(20,14.22058);
   hNCpi0inFVres_stack_7->SetBinContent(21,19.95423);
   hNCpi0inFVres_stack_7->SetBinContent(22,24.31977);
   hNCpi0inFVres_stack_7->SetBinContent(23,26.36692);
   hNCpi0inFVres_stack_7->SetBinContent(24,34.75705);
   hNCpi0inFVres_stack_7->SetBinContent(25,48.76092);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7868744);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5849076);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6551612);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6329526);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6155467);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5356429);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7519278);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6431702);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7234365);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5970912);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7300413);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8191865);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8740468);
   hNCpi0inFVres_stack_7->SetBinError(14,0.735133);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9708792);
   hNCpi0inFVres_stack_7->SetBinError(16,0.910292);
   hNCpi0inFVres_stack_7->SetBinError(17,1.016829);
   hNCpi0inFVres_stack_7->SetBinError(18,1.202735);
   hNCpi0inFVres_stack_7->SetBinError(19,1.098728);
   hNCpi0inFVres_stack_7->SetBinError(20,1.213393);
   hNCpi0inFVres_stack_7->SetBinError(21,1.473396);
   hNCpi0inFVres_stack_7->SetBinError(22,1.667123);
   hNCpi0inFVres_stack_7->SetBinError(23,1.62924);
   hNCpi0inFVres_stack_7->SetBinError(24,1.875362);
   hNCpi0inFVres_stack_7->SetBinError(25,2.259303);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1468;
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.395008);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.29669);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8492898);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.795154);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.613304);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.781536);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.031972);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7112858);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.98979);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.343448);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9474399);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5437177);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.868644);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.408121);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.73064);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.137602);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.593548);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.8229);
   hNCpi0inFVdis_stack_8->SetBinContent(22,5.646955);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.902622);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.55471);
   hNCpi0inFVdis_stack_8->SetBinContent(25,18.22541);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4283093);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3492176);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2397359);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3073253);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2517472);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2954882);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3283469);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2436282);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.336735);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5671721);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2936159);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1480721);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4584479);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3038218);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4604953);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6034136);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5259893);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7331008);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8274595);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.867454);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.07922);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.373172);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1469;
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
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1470;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1471;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,11.89931);
   hCCpi0inFV_stack_11->SetBinContent(2,5.882705);
   hCCpi0inFV_stack_11->SetBinContent(3,4.558547);
   hCCpi0inFV_stack_11->SetBinContent(4,6.161945);
   hCCpi0inFV_stack_11->SetBinContent(5,2.885098);
   hCCpi0inFV_stack_11->SetBinContent(6,5.445691);
   hCCpi0inFV_stack_11->SetBinContent(7,4.53666);
   hCCpi0inFV_stack_11->SetBinContent(8,5.099846);
   hCCpi0inFV_stack_11->SetBinContent(9,4.481558);
   hCCpi0inFV_stack_11->SetBinContent(10,5.180111);
   hCCpi0inFV_stack_11->SetBinContent(11,5.122123);
   hCCpi0inFV_stack_11->SetBinContent(12,7.380664);
   hCCpi0inFV_stack_11->SetBinContent(13,6.032743);
   hCCpi0inFV_stack_11->SetBinContent(14,8.306136);
   hCCpi0inFV_stack_11->SetBinContent(15,6.415295);
   hCCpi0inFV_stack_11->SetBinContent(16,9.073652);
   hCCpi0inFV_stack_11->SetBinContent(17,9.827982);
   hCCpi0inFV_stack_11->SetBinContent(18,9.425078);
   hCCpi0inFV_stack_11->SetBinContent(19,14.7464);
   hCCpi0inFV_stack_11->SetBinContent(20,12.75469);
   hCCpi0inFV_stack_11->SetBinContent(21,21.78316);
   hCCpi0inFV_stack_11->SetBinContent(22,22.63704);
   hCCpi0inFV_stack_11->SetBinContent(23,36.73238);
   hCCpi0inFV_stack_11->SetBinContent(24,46.33907);
   hCCpi0inFV_stack_11->SetBinContent(25,82.56516);
   hCCpi0inFV_stack_11->SetBinError(1,1.725158);
   hCCpi0inFV_stack_11->SetBinError(2,1.188885);
   hCCpi0inFV_stack_11->SetBinError(3,1.059674);
   hCCpi0inFV_stack_11->SetBinError(4,1.225964);
   hCCpi0inFV_stack_11->SetBinError(5,0.8218694);
   hCCpi0inFV_stack_11->SetBinError(6,1.141425);
   hCCpi0inFV_stack_11->SetBinError(7,1.110135);
   hCCpi0inFV_stack_11->SetBinError(8,1.098733);
   hCCpi0inFV_stack_11->SetBinError(9,1.063944);
   hCCpi0inFV_stack_11->SetBinError(10,1.204595);
   hCCpi0inFV_stack_11->SetBinError(11,1.099394);
   hCCpi0inFV_stack_11->SetBinError(12,1.396532);
   hCCpi0inFV_stack_11->SetBinError(13,1.221965);
   hCCpi0inFV_stack_11->SetBinError(14,1.455793);
   hCCpi0inFV_stack_11->SetBinError(15,1.226655);
   hCCpi0inFV_stack_11->SetBinError(16,1.525554);
   hCCpi0inFV_stack_11->SetBinError(17,1.526876);
   hCCpi0inFV_stack_11->SetBinError(18,1.540418);
   hCCpi0inFV_stack_11->SetBinError(19,1.959285);
   hCCpi0inFV_stack_11->SetBinError(20,1.784275);
   hCCpi0inFV_stack_11->SetBinError(21,2.384816);
   hCCpi0inFV_stack_11->SetBinError(22,2.398934);
   hCCpi0inFV_stack_11->SetBinError(23,3.079777);
   hCCpi0inFV_stack_11->SetBinError(24,3.412917);
   hCCpi0inFV_stack_11->SetBinError(25,4.635565);
   hCCpi0inFV_stack_11->SetEntries(1506);

   ci = 1472;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.785171);
   hNCinFV_stack_12->SetBinContent(2,0.7834804);
   hNCinFV_stack_12->SetBinContent(3,0.1950248);
   hNCinFV_stack_12->SetBinContent(4,0.3401776);
   hNCinFV_stack_12->SetBinContent(5,0.1950248);
   hNCinFV_stack_12->SetBinContent(6,0.3917402);
   hNCinFV_stack_12->SetBinContent(7,0.536893);
   hNCinFV_stack_12->SetBinContent(8,0.7319179);
   hNCinFV_stack_12->SetBinContent(9,0.975584);
   hNCinFV_stack_12->SetBinContent(10,0.536893);
   hNCinFV_stack_12->SetBinContent(11,0.1967154);
   hNCinFV_stack_12->SetBinContent(12,0.536893);
   hNCinFV_stack_12->SetBinContent(13,0.3401776);
   hNCinFV_stack_12->SetBinContent(14,0.3401776);
   hNCinFV_stack_12->SetBinContent(15,0.1950248);
   hNCinFV_stack_12->SetBinContent(16,0.3934307);
   hNCinFV_stack_12->SetBinContent(17,1.073786);
   hNCinFV_stack_12->SetBinContent(18,0.6803553);
   hNCinFV_stack_12->SetBinContent(19,0.9818863);
   hNCinFV_stack_12->SetBinContent(20,1.127039);
   hNCinFV_stack_12->SetBinContent(21,1.125349);
   hNCinFV_stack_12->SetBinContent(22,1.268811);
   hNCinFV_stack_12->SetBinContent(23,4.301298);
   hNCinFV_stack_12->SetBinContent(24,5.570109);
   hNCinFV_stack_12->SetBinContent(25,7.912705);
   hNCinFV_stack_12->SetBinError(1,0.3925882);
   hNCinFV_stack_12->SetBinError(2,0.3917439);
   hNCinFV_stack_12->SetBinError(3,0.1950249);
   hNCinFV_stack_12->SetBinError(4,0.3401776);
   hNCinFV_stack_12->SetBinError(5,0.1950249);
   hNCinFV_stack_12->SetBinError(6,0.2770047);
   hNCinFV_stack_12->SetBinError(7,0.3929602);
   hNCinFV_stack_12->SetBinError(8,0.438694);
   hNCinFV_stack_12->SetBinError(9,0.483067);
   hNCinFV_stack_12->SetBinError(10,0.3929602);
   hNCinFV_stack_12->SetBinError(11,0.1967154);
   hNCinFV_stack_12->SetBinError(12,0.3929602);
   hNCinFV_stack_12->SetBinError(13,0.3401776);
   hNCinFV_stack_12->SetBinError(14,0.3401776);
   hNCinFV_stack_12->SetBinError(15,0.1950249);
   hNCinFV_stack_12->SetBinError(16,0.2781975);
   hNCinFV_stack_12->SetBinError(17,0.5557297);
   hNCinFV_stack_12->SetBinError(18,0.4810838);
   hNCinFV_stack_12->SetBinError(19,0.4391155);
   hNCinFV_stack_12->SetBinError(20,0.5201044);
   hNCinFV_stack_12->SetBinError(21,0.5194673);
   hNCinFV_stack_12->SetBinError(22,0.5889569);
   hNCinFV_stack_12->SetBinError(23,1.019492);
   hNCinFV_stack_12->SetBinError(24,1.177384);
   hNCinFV_stack_12->SetBinError(25,1.428965);
   hNCinFV_stack_12->SetEntries(135);

   ci = 1473;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,2.627597);
   hnumuCCinFV_stack_13->SetBinContent(2,2.831211);
   hnumuCCinFV_stack_13->SetBinContent(3,2.858254);
   hnumuCCinFV_stack_13->SetBinContent(4,2.704196);
   hnumuCCinFV_stack_13->SetBinContent(5,3.001497);
   hnumuCCinFV_stack_13->SetBinContent(6,2.590188);
   hnumuCCinFV_stack_13->SetBinContent(7,3.61364);
   hnumuCCinFV_stack_13->SetBinContent(8,3.0969);
   hnumuCCinFV_stack_13->SetBinContent(9,2.246449);
   hnumuCCinFV_stack_13->SetBinContent(10,1.914781);
   hnumuCCinFV_stack_13->SetBinContent(11,3.330666);
   hnumuCCinFV_stack_13->SetBinContent(12,4.225584);
   hnumuCCinFV_stack_13->SetBinContent(13,5.346564);
   hnumuCCinFV_stack_13->SetBinContent(14,4.699053);
   hnumuCCinFV_stack_13->SetBinContent(15,4.915783);
   hnumuCCinFV_stack_13->SetBinContent(16,5.310267);
   hnumuCCinFV_stack_13->SetBinContent(17,6.861231);
   hnumuCCinFV_stack_13->SetBinContent(18,8.219007);
   hnumuCCinFV_stack_13->SetBinContent(19,9.95823);
   hnumuCCinFV_stack_13->SetBinContent(20,10.13143);
   hnumuCCinFV_stack_13->SetBinContent(21,12.96523);
   hnumuCCinFV_stack_13->SetBinContent(22,13.58208);
   hnumuCCinFV_stack_13->SetBinContent(23,9.066776);
   hnumuCCinFV_stack_13->SetBinContent(24,22.95795);
   hnumuCCinFV_stack_13->SetBinContent(25,29.12579);
   hnumuCCinFV_stack_13->SetBinError(1,0.811063);
   hnumuCCinFV_stack_13->SetBinError(2,0.836473);
   hnumuCCinFV_stack_13->SetBinError(3,0.8517379);
   hnumuCCinFV_stack_13->SetBinError(4,0.8860122);
   hnumuCCinFV_stack_13->SetBinError(5,0.9396551);
   hnumuCCinFV_stack_13->SetBinError(6,0.8467626);
   hnumuCCinFV_stack_13->SetBinError(7,1.061701);
   hnumuCCinFV_stack_13->SetBinError(8,0.9156996);
   hnumuCCinFV_stack_13->SetBinError(9,0.8316756);
   hnumuCCinFV_stack_13->SetBinError(10,0.7470409);
   hnumuCCinFV_stack_13->SetBinError(11,0.8993034);
   hnumuCCinFV_stack_13->SetBinError(12,1.494799);
   hnumuCCinFV_stack_13->SetBinError(13,1.224105);
   hnumuCCinFV_stack_13->SetBinError(14,1.212311);
   hnumuCCinFV_stack_13->SetBinError(15,1.163542);
   hnumuCCinFV_stack_13->SetBinError(16,1.228209);
   hnumuCCinFV_stack_13->SetBinError(17,1.643624);
   hnumuCCinFV_stack_13->SetBinError(18,1.592299);
   hnumuCCinFV_stack_13->SetBinError(19,1.742797);
   hnumuCCinFV_stack_13->SetBinError(20,1.909851);
   hnumuCCinFV_stack_13->SetBinError(21,1.869576);
   hnumuCCinFV_stack_13->SetBinError(22,1.898253);
   hnumuCCinFV_stack_13->SetBinError(23,1.4821);
   hnumuCCinFV_stack_13->SetBinError(24,3.535256);
   hnumuCCinFV_stack_13->SetBinError(25,3.823042);
   hnumuCCinFV_stack_13->SetEntries(681);

   ci = 1474;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_14->SetBinContent(4,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_14->SetBinContent(18,0.34964);
   hnueCCinFV_stack_14->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_14->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(23,0.3900497);
   hnueCCinFV_stack_14->SetBinContent(24,0.756103);
   hnueCCinFV_stack_14->SetBinContent(25,7.829327);
   hnueCCinFV_stack_14->SetBinError(1,0.2781975);
   hnueCCinFV_stack_14->SetBinError(2,0.340721);
   hnueCCinFV_stack_14->SetBinError(4,0.2502081);
   hnueCCinFV_stack_14->SetBinError(5,0.1950249);
   hnueCCinFV_stack_14->SetBinError(6,0.3025491);
   hnueCCinFV_stack_14->SetBinError(18,0.2491644);
   hnueCCinFV_stack_14->SetBinError(19,0.2171002);
   hnueCCinFV_stack_14->SetBinError(21,0.1967154);
   hnueCCinFV_stack_14->SetBinError(23,0.2758068);
   hnueCCinFV_stack_14->SetBinError(24,0.4499676);
   hnueCCinFV_stack_14->SetBinError(25,2.38816);
   hnueCCinFV_stack_14->SetEntries(36);

   ci = 1475;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_14,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__8->SetBinContent(1,50.09904);
   hmcerror__8->SetBinContent(2,32.9622);
   hmcerror__8->SetBinContent(3,28.78263);
   hmcerror__8->SetBinContent(4,28.88347);
   hmcerror__8->SetBinContent(5,26.1255);
   hmcerror__8->SetBinContent(6,26.75592);
   hmcerror__8->SetBinContent(7,33.65842);
   hmcerror__8->SetBinContent(8,24.76127);
   hmcerror__8->SetBinContent(9,27.87861);
   hmcerror__8->SetBinContent(10,27.47249);
   hmcerror__8->SetBinContent(11,31.87166);
   hmcerror__8->SetBinContent(12,42.24748);
   hmcerror__8->SetBinContent(13,42.94117);
   hmcerror__8->SetBinContent(14,40.15329);
   hmcerror__8->SetBinContent(15,37.9589);
   hmcerror__8->SetBinContent(16,41.18394);
   hmcerror__8->SetBinContent(17,53.379);
   hmcerror__8->SetBinContent(18,56.9313);
   hmcerror__8->SetBinContent(19,65.23675);
   hmcerror__8->SetBinContent(20,69.70348);
   hmcerror__8->SetBinContent(21,101.0289);
   hmcerror__8->SetBinContent(22,119.7033);
   hmcerror__8->SetBinContent(23,146.9382);
   hmcerror__8->SetBinContent(24,187.9783);
   hmcerror__8->SetBinContent(25,298.4743);
   hmcerror__8->SetBinError(1,12.31295);
   hmcerror__8->SetBinError(2,11.25274);
   hmcerror__8->SetBinError(3,7.846919);
   hmcerror__8->SetBinError(4,7.841636);
   hmcerror__8->SetBinError(5,12.49258);
   hmcerror__8->SetBinError(6,7.503788);
   hmcerror__8->SetBinError(7,7.835666);
   hmcerror__8->SetBinError(8,7.227406);
   hmcerror__8->SetBinError(9,7.267472);
   hmcerror__8->SetBinError(10,7.21202);
   hmcerror__8->SetBinError(11,11.07768);
   hmcerror__8->SetBinError(12,10.27407);
   hmcerror__8->SetBinError(13,10.28092);
   hmcerror__8->SetBinError(14,9.392973);
   hmcerror__8->SetBinError(15,9.712545);
   hmcerror__8->SetBinError(16,9.773642);
   hmcerror__8->SetBinError(17,13.06433);
   hmcerror__8->SetBinError(18,13.20564);
   hmcerror__8->SetBinError(19,17.2517);
   hmcerror__8->SetBinError(20,17.38091);
   hmcerror__8->SetBinError(21,21.4422);
   hmcerror__8->SetBinError(22,24.32808);
   hmcerror__8->SetBinError(23,29.17065);
   hmcerror__8->SetBinError(24,36.32275);
   hmcerror__8->SetBinError(25,52.87506);
   hmcerror__8->SetBinError(26,0.3895343);
   hmcerror__8->SetEntries(1611.219);

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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.15","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.4/25","");
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

   ci = 1462;
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

   ci = 1463;
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

   ci = 1464;
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

   ci = 1465;
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

   ci = 1466;
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

   ci = 1467;
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

   ci = 1468;
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

   ci = 1469;
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

   ci = 1470;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1471;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 355.3","F");

   ci = 1472;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 31.5","F");

   ci = 1473;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 178.2","F");

   ci = 1474;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1475;
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
   0.2457722,
   0.3413832,
   0.2726269,
   0.2714922,
   0.4781755,
   0.2804534,
   0.2327996,
   0.2918835,
   0.2606828,
   0.2625179,
   0.3475716,
   0.2431878,
   0.2394187,
   0.2339279,
   0.25587,
   0.2373168,
   0.2447467,
   0.2319574,
   0.2644475,
   0.2493551,
   0.2122383,
   0.2032364,
   0.1985232,
   0.1932284,
   0.1771511};
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
   0.2457722,
   0.3413832,
   0.2726269,
   0.2714922,
   0.4781755,
   0.2804534,
   0.2327996,
   0.2918835,
   0.2606828,
   0.2625179,
   0.3475716,
   0.2431878,
   0.2394187,
   0.2339279,
   0.25587,
   0.2373168,
   0.2447467,
   0.2319574,
   0.2644475,
   0.2493551,
   0.2122383,
   0.2032364,
   0.1985232,
   0.1932284,
   0.1771511};
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
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
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
   0.1878053,
   0.1817194,
   0.1827542,
   0.197926,
   0.2154894,
   0.2110576,
   0.1618763,
   0.1940288,
   0.2062703,
   0.1821265,
   0.1894944,
   0.1627485,
   0.1755176,
   0.1811315,
   0.198115,
   0.197959,
   0.1985904,
   0.2026192,
   0.22705,
   0.2014687,
   0.190981,
   0.1809744,
   0.1845017,
   0.1790778,
   0.1696442};
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
   0.1878053,
   0.1817194,
   0.1827542,
   0.197926,
   0.2154894,
   0.2110576,
   0.1618763,
   0.1940288,
   0.2062703,
   0.1821265,
   0.1894944,
   0.1627485,
   0.1755176,
   0.1811315,
   0.198115,
   0.197959,
   0.1985904,
   0.2026192,
   0.22705,
   0.2014687,
   0.190981,
   0.1809744,
   0.1845017,
   0.1790778,
   0.1696442};
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
   1.037944,
   1.001147,
   0.5906341,
   0.830925,
   0.9569194,
   0.8596228,
   0.6833358,
   1.050027,
   0.9684845,
   0.8736012,
   0.8471476,
   0.8757918,
   0.6520548,
   0.9214687,
   0.843017,
   0.8741271,
   0.8242942,
   0.7552963,
   0.8277543,
   1.032947,
   0.7324637,
   0.8270447,
   0.9459757,
   1.032034,
   0.9381043};
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
   0.1465477,
   0.1785287,
   0.1488224,
   0.1747574,
   0.1970259,
   0.1848451,
   0.146938,
   0.2118349,
   0.1915949,
   0.1837329,
   0.1675909,
   0.1472348,
   0.1265871,
   0.1549138,
   0.1527362,
   0.1490411,
   0.1267746,
   0.1175399,
   0.1146363,
   0.1235347,
   0.08638617,
   0.08413467,
   0.08023661,
   0.07409571,
   0.05606245};
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
   0.1424798,
   0.1722458,
   0.1413109,
   0.167466,
   0.1889877,
   0.1769552,
   0.1406662,
   0.2033741,
   0.184091,
   0.176067,
   0.1610271,
   0.142354,
   0.121727,
   0.1497785,
   0.1472751,
   0.1440319,
   0.1229379,
   0.1139408,
   0.1115169,
   0.1206324,
   0.08438477,
   0.08245385,
   0.08023661,
   0.07409571,
   0.05606245};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.3606527);
   Graph_Graph3012->SetMaximum(1.33456);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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

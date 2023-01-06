#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 09:59:20 2022) by ROOT version 6.26/00
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
   pad1->Range(-170,-2.863458,163.3333,316.6381);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__7->SetBinContent(0,0.7559202);
   hmc__7->SetBinContent(1,0.650777);
   hmc__7->SetBinContent(2,28.01046);
   hmc__7->SetBinContent(3,71.30222);
   hmc__7->SetBinContent(4,92.23968);
   hmc__7->SetBinContent(5,79.38635);
   hmc__7->SetBinContent(6,55.40707);
   hmc__7->SetBinContent(7,48.31523);
   hmc__7->SetBinContent(8,55.7729);
   hmc__7->SetBinContent(9,46.77217);
   hmc__7->SetBinContent(10,48.86927);
   hmc__7->SetBinContent(11,38.37534);
   hmc__7->SetBinContent(12,49.76545);
   hmc__7->SetBinContent(13,41.60441);
   hmc__7->SetBinContent(14,41.15783);
   hmc__7->SetBinContent(15,48.23779);
   hmc__7->SetBinContent(16,51.09263);
   hmc__7->SetBinContent(17,53.29647);
   hmc__7->SetBinContent(18,64.34916);
   hmc__7->SetBinContent(19,67.85514);
   hmc__7->SetBinContent(20,70.24175);
   hmc__7->SetBinContent(21,80.14246);
   hmc__7->SetBinContent(22,117.4432);
   hmc__7->SetBinContent(23,143.1729);
   hmc__7->SetBinContent(24,128.9382);
   hmc__7->SetBinContent(25,68.91663);
   hmc__7->SetBinContent(26,1.337279);
   hmc__7->SetBinContent(27,0.7447861);
   hmc__7->SetBinError(0,0.4620134);
   hmc__7->SetBinError(1,1.421465);
   hmc__7->SetBinError(2,15.77468);
   hmc__7->SetBinError(3,23.8231);
   hmc__7->SetBinError(4,30.37993);
   hmc__7->SetBinError(5,25.05792);
   hmc__7->SetBinError(6,19.53124);
   hmc__7->SetBinError(7,19.32005);
   hmc__7->SetBinError(8,21.40545);
   hmc__7->SetBinError(9,19.10536);
   hmc__7->SetBinError(10,18.25045);
   hmc__7->SetBinError(11,16.06053);
   hmc__7->SetBinError(12,22.57909);
   hmc__7->SetBinError(13,18.08809);
   hmc__7->SetBinError(14,14.29535);
   hmc__7->SetBinError(15,19.26065);
   hmc__7->SetBinError(16,22.14802);
   hmc__7->SetBinError(17,16.84231);
   hmc__7->SetBinError(18,21.32774);
   hmc__7->SetBinError(19,21.43086);
   hmc__7->SetBinError(20,17.29575);
   hmc__7->SetBinError(21,25.92283);
   hmc__7->SetBinError(22,29.16433);
   hmc__7->SetBinError(23,32.87409);
   hmc__7->SetBinError(24,30.25346);
   hmc__7->SetBinError(25,30.43824);
   hmc__7->SetBinError(26,2.671402);
   hmc__7->SetBinError(27,9.33794);
   hmc__7->SetMinimum(-2.863458);
   hmc__7->SetMaximum(300.6631);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",26,-130,130);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(150.3315);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.072095);
   hbadmatch_stack_1->SetBinContent(3,0.5884556);
   hbadmatch_stack_1->SetBinContent(4,3.508416);
   hbadmatch_stack_1->SetBinContent(5,1.555151);
   hbadmatch_stack_1->SetBinContent(6,1.944504);
   hbadmatch_stack_1->SetBinContent(7,1.187612);
   hbadmatch_stack_1->SetBinContent(8,1.880151);
   hbadmatch_stack_1->SetBinContent(9,1.946179);
   hbadmatch_stack_1->SetBinContent(10,1.865601);
   hbadmatch_stack_1->SetBinContent(11,1.217372);
   hbadmatch_stack_1->SetBinContent(12,2.19636);
   hbadmatch_stack_1->SetBinContent(13,2.301527);
   hbadmatch_stack_1->SetBinContent(14,1.589504);
   hbadmatch_stack_1->SetBinContent(15,2.726336);
   hbadmatch_stack_1->SetBinContent(16,0.9151947);
   hbadmatch_stack_1->SetBinContent(17,0.7138256);
   hbadmatch_stack_1->SetBinContent(18,5.247167);
   hbadmatch_stack_1->SetBinContent(19,3.574405);
   hbadmatch_stack_1->SetBinContent(20,4.099837);
   hbadmatch_stack_1->SetBinContent(21,2.480824);
   hbadmatch_stack_1->SetBinContent(22,3.140407);
   hbadmatch_stack_1->SetBinContent(23,3.775411);
   hbadmatch_stack_1->SetBinContent(24,3.164918);
   hbadmatch_stack_1->SetBinContent(25,1.337911);
   hbadmatch_stack_1->SetBinError(2,0.5551335);
   hbadmatch_stack_1->SetBinError(3,0.3397478);
   hbadmatch_stack_1->SetBinError(4,0.9817943);
   hbadmatch_stack_1->SetBinError(5,0.7217789);
   hbadmatch_stack_1->SetBinError(6,0.6459521);
   hbadmatch_stack_1->SetBinError(7,0.4611823);
   hbadmatch_stack_1->SetBinError(8,1.152401);
   hbadmatch_stack_1->SetBinError(9,0.7052329);
   hbadmatch_stack_1->SetBinError(10,0.7258867);
   hbadmatch_stack_1->SetBinError(11,0.5200306);
   hbadmatch_stack_1->SetBinError(12,0.8895825);
   hbadmatch_stack_1->SetBinError(13,0.8331649);
   hbadmatch_stack_1->SetBinError(14,0.7286942);
   hbadmatch_stack_1->SetBinError(15,0.9582904);
   hbadmatch_stack_1->SetBinError(16,0.3655656);
   hbadmatch_stack_1->SetBinError(17,0.3614982);
   hbadmatch_stack_1->SetBinError(18,1.299153);
   hbadmatch_stack_1->SetBinError(19,1.079857);
   hbadmatch_stack_1->SetBinError(20,1.171227);
   hbadmatch_stack_1->SetBinError(21,0.8210934);
   hbadmatch_stack_1->SetBinError(22,0.9561672);
   hbadmatch_stack_1->SetBinError(23,0.9677606);
   hbadmatch_stack_1->SetBinError(24,0.9419009);
   hbadmatch_stack_1->SetBinError(25,0.6136518);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,2.110787);
   hext_stack_2->SetBinContent(5,4.923848);
   hext_stack_2->SetBinContent(6,0.7309963);
   hext_stack_2->SetBinContent(7,2.916804);
   hext_stack_2->SetBinContent(8,6.76649);
   hext_stack_2->SetBinContent(9,5.718277);
   hext_stack_2->SetBinContent(10,2.987417);
   hext_stack_2->SetBinContent(11,1.868591);
   hext_stack_2->SetBinContent(12,5.40824);
   hext_stack_2->SetBinContent(13,2.923985);
   hext_stack_2->SetBinContent(14,3.807795);
   hext_stack_2->SetBinContent(15,8.985429);
   hext_stack_2->SetBinContent(16,5.840789);
   hext_stack_2->SetBinContent(17,17.35513);
   hext_stack_2->SetBinContent(18,16.0316);
   hext_stack_2->SetBinContent(19,15.51967);
   hext_stack_2->SetBinContent(20,20.15503);
   hext_stack_2->SetBinContent(21,20.09878);
   hext_stack_2->SetBinContent(22,36.81507);
   hext_stack_2->SetBinContent(23,48.05132);
   hext_stack_2->SetBinContent(24,37.88369);
   hext_stack_2->SetBinContent(25,18.89933);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.8669371);
   hext_stack_2->SetBinError(5,1.605778);
   hext_stack_2->SetBinError(6,0.5201503);
   hext_stack_2->SetBinError(7,1.132884);
   hext_stack_2->SetBinError(8,1.937379);
   hext_stack_2->SetBinError(9,1.782259);
   hext_stack_2->SetBinError(10,1.187264);
   hext_stack_2->SetBinError(11,0.840497);
   hext_stack_2->SetBinError(12,1.63365);
   hext_stack_2->SetBinError(13,1.040301);
   hext_stack_2->SetBinError(14,1.24058);
   hext_stack_2->SetBinError(15,2.024012);
   hext_stack_2->SetBinError(16,1.538068);
   hext_stack_2->SetBinError(17,2.939985);
   hext_stack_2->SetBinError(18,2.948061);
   hext_stack_2->SetBinError(19,2.695811);
   hext_stack_2->SetBinError(20,2.955448);
   hext_stack_2->SetBinError(21,2.86463);
   hext_stack_2->SetBinError(22,4.012683);
   hext_stack_2->SetBinError(23,4.831185);
   hext_stack_2->SetBinError(24,4.108866);
   hext_stack_2->SetBinError(25,3.040512);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetBinError(27,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(3,1.334496);
   hdirt_stack_3->SetBinContent(4,1.052121);
   hdirt_stack_3->SetBinContent(5,0.6273471);
   hdirt_stack_3->SetBinContent(6,0.3593186);
   hdirt_stack_3->SetBinContent(7,1.285084);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.327738);
   hdirt_stack_3->SetBinContent(11,0.4004149);
   hdirt_stack_3->SetBinContent(12,1.052121);
   hdirt_stack_3->SetBinContent(13,0.1564614);
   hdirt_stack_3->SetBinContent(14,0.4737118);
   hdirt_stack_3->SetBinContent(16,1.510349);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.4950385);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.9140499);
   hdirt_stack_3->SetBinContent(21,2.252429);
   hdirt_stack_3->SetBinContent(22,3.024554);
   hdirt_stack_3->SetBinContent(23,3.249819);
   hdirt_stack_3->SetBinContent(24,0.7759784);
   hdirt_stack_3->SetBinContent(25,2.408666);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(3,0.6307253);
   hdirt_stack_3->SetBinError(4,0.4983258);
   hdirt_stack_3->SetBinError(5,0.3928349);
   hdirt_stack_3->SetBinError(6,0.2588137);
   hdirt_stack_3->SetBinError(7,0.9635251);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2290571);
   hdirt_stack_3->SetBinError(11,0.2964588);
   hdirt_stack_3->SetBinError(12,0.4983258);
   hdirt_stack_3->SetBinError(13,0.1564614);
   hdirt_stack_3->SetBinError(14,0.3359264);
   hdirt_stack_3->SetBinError(16,0.6480633);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.2933304);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4788161);
   hdirt_stack_3->SetBinError(21,0.7912657);
   hdirt_stack_3->SetBinError(22,1.015435);
   hdirt_stack_3->SetBinError(23,0.953601);
   hdirt_stack_3->SetBinError(24,0.458477);
   hdirt_stack_3->SetBinError(25,0.8537272);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.4157426);
   houtFV_stack_4->SetBinContent(1,0.4805651);
   houtFV_stack_4->SetBinContent(2,20.23357);
   houtFV_stack_4->SetBinContent(3,29.08162);
   houtFV_stack_4->SetBinContent(4,18.39068);
   houtFV_stack_4->SetBinContent(5,13.4657);
   houtFV_stack_4->SetBinContent(6,10.55274);
   houtFV_stack_4->SetBinContent(7,7.369505);
   houtFV_stack_4->SetBinContent(8,8.067154);
   houtFV_stack_4->SetBinContent(9,9.593768);
   houtFV_stack_4->SetBinContent(10,10.41163);
   houtFV_stack_4->SetBinContent(11,7.986344);
   houtFV_stack_4->SetBinContent(12,8.067174);
   houtFV_stack_4->SetBinContent(13,6.984561);
   houtFV_stack_4->SetBinContent(14,8.158679);
   houtFV_stack_4->SetBinContent(15,6.393042);
   houtFV_stack_4->SetBinContent(16,7.468776);
   houtFV_stack_4->SetBinContent(17,6.396352);
   houtFV_stack_4->SetBinContent(18,7.809695);
   houtFV_stack_4->SetBinContent(19,9.483701);
   houtFV_stack_4->SetBinContent(20,6.398009);
   houtFV_stack_4->SetBinContent(21,13.20069);
   houtFV_stack_4->SetBinContent(22,13.83999);
   houtFV_stack_4->SetBinContent(23,15.92496);
   houtFV_stack_4->SetBinContent(24,27.22194);
   houtFV_stack_4->SetBinContent(25,34.66969);
   houtFV_stack_4->SetBinContent(26,0.621141);
   houtFV_stack_4->SetBinError(0,0.3126269);
   houtFV_stack_4->SetBinError(1,0.3457859);
   houtFV_stack_4->SetBinError(2,2.131638);
   houtFV_stack_4->SetBinError(3,2.882304);
   houtFV_stack_4->SetBinError(4,2.177556);
   houtFV_stack_4->SetBinError(5,1.859529);
   houtFV_stack_4->SetBinError(6,1.616712);
   houtFV_stack_4->SetBinError(7,1.309593);
   houtFV_stack_4->SetBinError(8,1.374698);
   houtFV_stack_4->SetBinError(9,1.633088);
   houtFV_stack_4->SetBinError(10,1.718793);
   houtFV_stack_4->SetBinError(11,1.883715);
   houtFV_stack_4->SetBinError(12,1.393281);
   houtFV_stack_4->SetBinError(13,1.306568);
   houtFV_stack_4->SetBinError(14,1.425992);
   houtFV_stack_4->SetBinError(15,1.234269);
   houtFV_stack_4->SetBinError(16,1.368874);
   houtFV_stack_4->SetBinError(17,1.226165);
   houtFV_stack_4->SetBinError(18,1.341852);
   houtFV_stack_4->SetBinError(19,1.646427);
   houtFV_stack_4->SetBinError(20,1.187119);
   houtFV_stack_4->SetBinError(21,1.999446);
   houtFV_stack_4->SetBinError(22,1.94673);
   houtFV_stack_4->SetBinError(23,2.008239);
   houtFV_stack_4->SetBinError(24,2.681629);
   houtFV_stack_4->SetBinError(25,2.955158);
   houtFV_stack_4->SetBinError(26,0.3596615);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2387726);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.795966);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.540569);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8906108);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3739952);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.4730084);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2531333);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2761992);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5261996);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4045084);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.341192);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3314591);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.771487);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3651866);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4603368);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.5820339);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2692535);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3226637);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5625038);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4243792);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.013097);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.585243);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.841557);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1554321);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2056575);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3221952);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5223517);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.408949);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1559538);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2446883);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.09618172);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1475746);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2388665);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2891287);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1402007);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1652796);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3614709);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2988144);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2585927);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.258532);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1460993);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1349309);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3009809);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1832638);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3935503);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.404955);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5741202);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1299965);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2392198);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1285733);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.07213301);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4394689);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1433325);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1003364);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.08179031);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.09106161);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.06460924);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05854633);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2750718);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1374262);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0802274);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03616791);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2946717);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1098128);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07225462);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05692212);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04852326);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04176258);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03030932);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1438077);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.007068991);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.046277);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.27612);
   hNCpi0inFVres_stack_7->SetBinContent(4,17.79073);
   hNCpi0inFVres_stack_7->SetBinContent(5,14.30674);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.13163);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.773834);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.70205);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.348808);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.513484);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.107625);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.21905);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.069563);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.07665);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.279134);
   hNCpi0inFVres_stack_7->SetBinContent(16,7.102279);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.86312);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.762692);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.220292);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.751131);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.43031);
   hNCpi0inFVres_stack_7->SetBinContent(22,14.88501);
   hNCpi0inFVres_stack_7->SetBinContent(23,21.0885);
   hNCpi0inFVres_stack_7->SetBinContent(24,18.15662);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.323684);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4429566);
   hNCpi0inFVres_stack_7->SetBinError(3,1.040996);
   hNCpi0inFVres_stack_7->SetBinError(4,1.184709);
   hNCpi0inFVres_stack_7->SetBinError(5,1.148143);
   hNCpi0inFVres_stack_7->SetBinError(6,0.957003);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7395155);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8171659);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9156662);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7809076);
   hNCpi0inFVres_stack_7->SetBinError(11,0.796259);
   hNCpi0inFVres_stack_7->SetBinError(12,0.611594);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6193261);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6683217);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8318409);
   hNCpi0inFVres_stack_7->SetBinError(16,1.001148);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9666495);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8800905);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8716496);
   hNCpi0inFVres_stack_7->SetBinError(20,1.131417);
   hNCpi0inFVres_stack_7->SetBinError(21,1.076282);
   hNCpi0inFVres_stack_7->SetBinError(22,1.221883);
   hNCpi0inFVres_stack_7->SetBinError(23,1.551365);
   hNCpi0inFVres_stack_7->SetBinError(24,1.456726);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4464301);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3560834);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.99652);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.365961);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.06796);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.058702);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.539263);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.697093);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.134747);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.858165);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.864673);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.832511);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.646353);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.979692);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.831035);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.172209);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.165871);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.932088);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.48155);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.241157);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.145092);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.863394);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.263535);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.059238);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.395788);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2090878);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3535626);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8373477);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.892701);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6374317);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4900076);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8099211);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2939701);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6530493);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4402299);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.635699);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4821835);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5881993);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4249232);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6038098);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5610855);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.463312);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7557156);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5961828);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6076975);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7648243);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.22744);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8581094);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4056005);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01822846);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(2,2.7859);
   hCCpi0inFV_stack_10->SetBinContent(3,13.12891);
   hCCpi0inFV_stack_10->SetBinContent(4,23.66564);
   hCCpi0inFV_stack_10->SetBinContent(5,21.76931);
   hCCpi0inFV_stack_10->SetBinContent(6,15.18588);
   hCCpi0inFV_stack_10->SetBinContent(7,12.41217);
   hCCpi0inFV_stack_10->SetBinContent(8,14.79146);
   hCCpi0inFV_stack_10->SetBinContent(9,11.81416);
   hCCpi0inFV_stack_10->SetBinContent(10,11.17448);
   hCCpi0inFV_stack_10->SetBinContent(11,7.615585);
   hCCpi0inFV_stack_10->SetBinContent(12,13.52346);
   hCCpi0inFV_stack_10->SetBinContent(13,11.74536);
   hCCpi0inFV_stack_10->SetBinContent(14,8.631292);
   hCCpi0inFV_stack_10->SetBinContent(15,10.66879);
   hCCpi0inFV_stack_10->SetBinContent(16,13.34107);
   hCCpi0inFV_stack_10->SetBinContent(17,10.02072);
   hCCpi0inFV_stack_10->SetBinContent(18,12.11691);
   hCCpi0inFV_stack_10->SetBinContent(19,16.61916);
   hCCpi0inFV_stack_10->SetBinContent(20,12.44937);
   hCCpi0inFV_stack_10->SetBinContent(21,12.57763);
   hCCpi0inFV_stack_10->SetBinContent(22,20.02262);
   hCCpi0inFV_stack_10->SetBinContent(23,22.2479);
   hCCpi0inFV_stack_10->SetBinContent(24,15.97712);
   hCCpi0inFV_stack_10->SetBinContent(25,4.079117);
   hCCpi0inFV_stack_10->SetBinContent(26,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(2,0.8327353);
   hCCpi0inFV_stack_10->SetBinError(3,1.856848);
   hCCpi0inFV_stack_10->SetBinError(4,2.474144);
   hCCpi0inFV_stack_10->SetBinError(5,2.367366);
   hCCpi0inFV_stack_10->SetBinError(6,1.951021);
   hCCpi0inFV_stack_10->SetBinError(7,1.722678);
   hCCpi0inFV_stack_10->SetBinError(8,1.949201);
   hCCpi0inFV_stack_10->SetBinError(9,1.750014);
   hCCpi0inFV_stack_10->SetBinError(10,1.72804);
   hCCpi0inFV_stack_10->SetBinError(11,1.467062);
   hCCpi0inFV_stack_10->SetBinError(12,1.846357);
   hCCpi0inFV_stack_10->SetBinError(13,1.721977);
   hCCpi0inFV_stack_10->SetBinError(14,1.467133);
   hCCpi0inFV_stack_10->SetBinError(15,1.634164);
   hCCpi0inFV_stack_10->SetBinError(16,1.852365);
   hCCpi0inFV_stack_10->SetBinError(17,1.662714);
   hCCpi0inFV_stack_10->SetBinError(18,1.698956);
   hCCpi0inFV_stack_10->SetBinError(19,2.113061);
   hCCpi0inFV_stack_10->SetBinError(20,1.809514);
   hCCpi0inFV_stack_10->SetBinError(21,1.726116);
   hCCpi0inFV_stack_10->SetBinError(22,2.205492);
   hCCpi0inFV_stack_10->SetBinError(23,2.306038);
   hCCpi0inFV_stack_10->SetBinError(24,2.055558);
   hCCpi0inFV_stack_10->SetBinError(25,0.9555094);
   hCCpi0inFV_stack_10->SetBinError(26,0.2770047);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1702119);
   hNCinFV_stack_11->SetBinContent(2,0.4464437);
   hNCinFV_stack_11->SetBinContent(3,4.105371);
   hNCinFV_stack_11->SetBinContent(4,5.011444);
   hNCinFV_stack_11->SetBinContent(5,6.360554);
   hNCinFV_stack_11->SetBinContent(6,3.330173);
   hNCinFV_stack_11->SetBinContent(7,3.035325);
   hNCinFV_stack_11->SetBinContent(8,2.308857);
   hNCinFV_stack_11->SetBinContent(9,2.319052);
   hNCinFV_stack_11->SetBinContent(10,2.852388);
   hNCinFV_stack_11->SetBinContent(11,2.744953);
   hNCinFV_stack_11->SetBinContent(12,3.063592);
   hNCinFV_stack_11->SetBinContent(13,1.761059);
   hNCinFV_stack_11->SetBinContent(14,2.051183);
   hNCinFV_stack_11->SetBinContent(15,2.480842);
   hNCinFV_stack_11->SetBinContent(16,1.450485);
   hNCinFV_stack_11->SetBinContent(17,1.659542);
   hNCinFV_stack_11->SetBinContent(18,1.85408);
   hNCinFV_stack_11->SetBinContent(19,3.22899);
   hNCinFV_stack_11->SetBinContent(20,2.16822);
   hNCinFV_stack_11->SetBinContent(21,3.293573);
   hNCinFV_stack_11->SetBinContent(22,4.046046);
   hNCinFV_stack_11->SetBinContent(23,3.889284);
   hNCinFV_stack_11->SetBinContent(24,5.268188);
   hNCinFV_stack_11->SetBinContent(25,1.311755);
   hNCinFV_stack_11->SetBinError(1,0.1702119);
   hNCinFV_stack_11->SetBinError(2,0.3156833);
   hNCinFV_stack_11->SetBinError(3,1.039363);
   hNCinFV_stack_11->SetBinError(4,1.179381);
   hNCinFV_stack_11->SetBinError(5,1.315899);
   hNCinFV_stack_11->SetBinError(6,0.9321423);
   hNCinFV_stack_11->SetBinError(7,0.848066);
   hNCinFV_stack_11->SetBinError(8,0.7583011);
   hNCinFV_stack_11->SetBinError(9,0.7327089);
   hNCinFV_stack_11->SetBinError(10,1.201857);
   hNCinFV_stack_11->SetBinError(11,0.8651993);
   hNCinFV_stack_11->SetBinError(12,1.010656);
   hNCinFV_stack_11->SetBinError(13,0.6703044);
   hNCinFV_stack_11->SetBinError(14,0.8220269);
   hNCinFV_stack_11->SetBinError(15,0.8690149);
   hNCinFV_stack_11->SetBinError(16,0.5975503);
   hNCinFV_stack_11->SetBinError(17,0.7797908);
   hNCinFV_stack_11->SetBinError(18,0.8373321);
   hNCinFV_stack_11->SetBinError(19,0.9119867);
   hNCinFV_stack_11->SetBinError(20,0.8561768);
   hNCinFV_stack_11->SetBinError(21,0.9198736);
   hNCinFV_stack_11->SetBinError(22,1.161511);
   hNCinFV_stack_11->SetBinError(23,0.9613838);
   hNCinFV_stack_11->SetBinError(24,1.261606);
   hNCinFV_stack_11->SetBinError(25,0.6606519);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.4881116);
   hnumuCCinFV_stack_12->SetBinContent(3,8.024553);
   hnumuCCinFV_stack_12->SetBinContent(4,9.566467);
   hnumuCCinFV_stack_12->SetBinContent(5,9.551149);
   hnumuCCinFV_stack_12->SetBinContent(6,8.341785);
   hnumuCCinFV_stack_12->SetBinContent(7,9.686444);
   hnumuCCinFV_stack_12->SetBinContent(8,9.757461);
   hnumuCCinFV_stack_12->SetBinContent(9,6.386402);
   hnumuCCinFV_stack_12->SetBinContent(10,8.486225);
   hnumuCCinFV_stack_12->SetBinContent(11,6.771844);
   hnumuCCinFV_stack_12->SetBinContent(12,8.826456);
   hnumuCCinFV_stack_12->SetBinContent(13,8.684086);
   hnumuCCinFV_stack_12->SetBinContent(14,8.278248);
   hnumuCCinFV_stack_12->SetBinContent(15,8.257782);
   hnumuCCinFV_stack_12->SetBinContent(16,10.5695);
   hnumuCCinFV_stack_12->SetBinContent(17,6.766564);
   hnumuCCinFV_stack_12->SetBinContent(18,10.05573);
   hnumuCCinFV_stack_12->SetBinContent(19,8.230933);
   hnumuCCinFV_stack_12->SetBinContent(20,11.07679);
   hnumuCCinFV_stack_12->SetBinContent(21,10.54911);
   hnumuCCinFV_stack_12->SetBinContent(22,16.52462);
   hnumuCCinFV_stack_12->SetBinContent(23,15.20536);
   hnumuCCinFV_stack_12->SetBinContent(24,11.94367);
   hnumuCCinFV_stack_12->SetBinContent(25,2.328197);
   hnumuCCinFV_stack_12->SetBinError(2,0.3452379);
   hnumuCCinFV_stack_12->SetBinError(3,1.921528);
   hnumuCCinFV_stack_12->SetBinError(4,1.625773);
   hnumuCCinFV_stack_12->SetBinError(5,1.573144);
   hnumuCCinFV_stack_12->SetBinError(6,1.482779);
   hnumuCCinFV_stack_12->SetBinError(7,1.811895);
   hnumuCCinFV_stack_12->SetBinError(8,1.947037);
   hnumuCCinFV_stack_12->SetBinError(9,1.48647);
   hnumuCCinFV_stack_12->SetBinError(10,1.486315);
   hnumuCCinFV_stack_12->SetBinError(11,1.466127);
   hnumuCCinFV_stack_12->SetBinError(12,1.574993);
   hnumuCCinFV_stack_12->SetBinError(13,1.534562);
   hnumuCCinFV_stack_12->SetBinError(14,1.58785);
   hnumuCCinFV_stack_12->SetBinError(15,1.548443);
   hnumuCCinFV_stack_12->SetBinError(16,1.767762);
   hnumuCCinFV_stack_12->SetBinError(17,1.295781);
   hnumuCCinFV_stack_12->SetBinError(18,1.942335);
   hnumuCCinFV_stack_12->SetBinError(19,1.479344);
   hnumuCCinFV_stack_12->SetBinError(20,2.511139);
   hnumuCCinFV_stack_12->SetBinError(21,2.013822);
   hnumuCCinFV_stack_12->SetBinError(22,3.19998);
   hnumuCCinFV_stack_12->SetBinError(23,2.066259);
   hnumuCCinFV_stack_12->SetBinError(24,1.82656);
   hnumuCCinFV_stack_12->SetBinError(25,0.805473);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,2.089473);
   hnueCCinFV_stack_13->SetBinContent(5,0.7958433);
   hnueCCinFV_stack_13->SetBinContent(6,0.3973506);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,1.72261);
   hnueCCinFV_stack_13->SetBinContent(11,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(14,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(15,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(16,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.756103);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,0.5985879);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.7968681);
   hnueCCinFV_stack_13->SetBinContent(24,1.351988);
   hnueCCinFV_stack_13->SetBinError(4,1.29543);
   hnueCCinFV_stack_13->SetBinError(5,0.4899295);
   hnueCCinFV_stack_13->SetBinError(6,0.2836451);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,1.577117);
   hnueCCinFV_stack_13->SetBinError(11,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.2179626);
   hnueCCinFV_stack_13->SetBinError(14,0.3025491);
   hnueCCinFV_stack_13->SetBinError(15,0.2502081);
   hnueCCinFV_stack_13->SetBinError(16,0.2252857);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.4499676);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.4334685);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.569462);
   hnueCCinFV_stack_13->SetBinError(24,0.822273);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__8->SetBinContent(0,0.7559202);
   hmcerror__8->SetBinContent(1,0.650777);
   hmcerror__8->SetBinContent(2,28.01046);
   hmcerror__8->SetBinContent(3,71.30222);
   hmcerror__8->SetBinContent(4,92.23968);
   hmcerror__8->SetBinContent(5,79.38635);
   hmcerror__8->SetBinContent(6,55.40707);
   hmcerror__8->SetBinContent(7,48.31523);
   hmcerror__8->SetBinContent(8,55.7729);
   hmcerror__8->SetBinContent(9,46.77217);
   hmcerror__8->SetBinContent(10,48.86927);
   hmcerror__8->SetBinContent(11,38.37534);
   hmcerror__8->SetBinContent(12,49.76545);
   hmcerror__8->SetBinContent(13,41.60441);
   hmcerror__8->SetBinContent(14,41.15783);
   hmcerror__8->SetBinContent(15,48.23779);
   hmcerror__8->SetBinContent(16,51.09263);
   hmcerror__8->SetBinContent(17,53.29647);
   hmcerror__8->SetBinContent(18,64.34916);
   hmcerror__8->SetBinContent(19,67.85514);
   hmcerror__8->SetBinContent(20,70.24175);
   hmcerror__8->SetBinContent(21,80.14246);
   hmcerror__8->SetBinContent(22,117.4432);
   hmcerror__8->SetBinContent(23,143.1729);
   hmcerror__8->SetBinContent(24,128.9382);
   hmcerror__8->SetBinContent(25,68.91663);
   hmcerror__8->SetBinContent(26,1.337279);
   hmcerror__8->SetBinContent(27,0.7447861);
   hmcerror__8->SetBinError(0,0.4620134);
   hmcerror__8->SetBinError(1,1.421465);
   hmcerror__8->SetBinError(2,15.77468);
   hmcerror__8->SetBinError(3,23.8231);
   hmcerror__8->SetBinError(4,30.37993);
   hmcerror__8->SetBinError(5,25.05792);
   hmcerror__8->SetBinError(6,19.53124);
   hmcerror__8->SetBinError(7,19.32005);
   hmcerror__8->SetBinError(8,21.40545);
   hmcerror__8->SetBinError(9,19.10536);
   hmcerror__8->SetBinError(10,18.25045);
   hmcerror__8->SetBinError(11,16.06053);
   hmcerror__8->SetBinError(12,22.57909);
   hmcerror__8->SetBinError(13,18.08809);
   hmcerror__8->SetBinError(14,14.29535);
   hmcerror__8->SetBinError(15,19.26065);
   hmcerror__8->SetBinError(16,22.14802);
   hmcerror__8->SetBinError(17,16.84231);
   hmcerror__8->SetBinError(18,21.32774);
   hmcerror__8->SetBinError(19,21.43086);
   hmcerror__8->SetBinError(20,17.29575);
   hmcerror__8->SetBinError(21,25.92283);
   hmcerror__8->SetBinError(22,29.16433);
   hmcerror__8->SetBinError(23,32.87409);
   hmcerror__8->SetBinError(24,30.25346);
   hmcerror__8->SetBinError(25,30.43824);
   hmcerror__8->SetBinError(26,2.671402);
   hmcerror__8->SetBinError(27,9.33794);
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
   
   Double_t _fx3009[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3009[26] = {
   1,
   27,
   77,
   84,
   82,
   59,
   59,
   52,
   49,
   46,
   49,
   36,
   38,
   35,
   33,
   44,
   38,
   39,
   68,
   55,
   88,
   107,
   118,
   136,
   48,
   1};
   Double_t _felx3009[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3009[26] = {
   1,
   5.3414,
   8.8995,
   9.2886,
   9.1791,
   7.8097,
   7.8097,
   7.3419,
   7.1318,
   6.9153,
   7.1318,
   6.1381,
   6.3013,
   6.0548,
   5.8847,
   6.7671,
   6.3013,
   6.3813,
   8.3726,
   7.546,
   9.5036,
   10.34408,
   10.86278,
   11.6619,
   7.0604,
   1};
   Double_t _fehx3009[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3009[26] = {
   1.35971,
   5.1322,
   8.6976,
   9.0869,
   8.9774,
   7.6066,
   7.6066,
   7.1381,
   6.9277,
   6.7108,
   6.9277,
   5.9318,
   6.0955,
   5.8483,
   5.6776,
   6.5623,
   6.0955,
   6.1757,
   8.1701,
   7.3425,
   9.3021,
   10.34408,
   10.86278,
   11.6619,
   6.8561,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-156,156);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(162.4281);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.9/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1469.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 318.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3010[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3010[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3010[26] = {
   2.184259,
   0.5631709,
   0.3341144,
   0.3293586,
   0.3156451,
   0.3525044,
   0.3998749,
   0.3837966,
   0.4084772,
   0.3734546,
   0.4185118,
   0.4537101,
   0.4347638,
   0.3473301,
   0.3992856,
   0.4334875,
   0.3160117,
   0.3314378,
   0.3158325,
   0.2462317,
   0.3234594,
   0.2483272,
   0.2296112,
   0.2346353,
   0.4416676,
   1.997641};
   Double_t _fehx3010[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3010[26] = {
   2.184259,
   0.5631709,
   0.3341144,
   0.3293586,
   0.3156451,
   0.3525044,
   0.3998749,
   0.3837966,
   0.4084772,
   0.3734546,
   0.4185118,
   0.4537101,
   0.4347638,
   0.3473301,
   0.3992856,
   0.4334875,
   0.3160117,
   0.3314378,
   0.3158325,
   0.2462317,
   0.3234594,
   0.2483272,
   0.2296112,
   0.2346353,
   0.4416676,
   1.997641};
   grae = new TGraphAsymmErrors(26,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-156,156);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
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
   
   Double_t _fx3011[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3011[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3011[26] = {
   0.9879189,
   0.2573607,
   0.2371131,
   0.262791,
   0.2287989,
   0.2552593,
   0.2347567,
   0.2385541,
   0.2344981,
   0.2164496,
   0.2397412,
   0.2105628,
   0.2384642,
   0.1904382,
   0.2003501,
   0.2026815,
   0.1848088,
   0.1742104,
   0.1813944,
   0.1627706,
   0.1787672,
   0.1834645,
   0.1520021,
   0.1707642,
   0.163423,
   0.5851402};
   Double_t _fehx3011[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3011[26] = {
   0.9879189,
   0.2573607,
   0.2371131,
   0.262791,
   0.2287989,
   0.2552593,
   0.2347567,
   0.2385541,
   0.2344981,
   0.2164496,
   0.2397412,
   0.2105628,
   0.2384642,
   0.1904382,
   0.2003501,
   0.2026815,
   0.1848088,
   0.1742104,
   0.1813944,
   0.1627706,
   0.1787672,
   0.1834645,
   0.1520021,
   0.1707642,
   0.163423,
   0.5851402};
   grae = new TGraphAsymmErrors(26,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-156,156);
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
   
   Double_t _fx3012[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3012[26] = {
   1.536625,
   0.9639256,
   1.07991,
   0.910671,
   1.032923,
   1.064846,
   1.221147,
   0.9323525,
   1.047631,
   0.9412867,
   1.276862,
   0.7233935,
   0.9133647,
   0.8503849,
   0.684111,
   0.861181,
   0.7129929,
   0.6060685,
   1.002135,
   0.7830101,
   1.098045,
   0.9110788,
   0.8241784,
   1.054769,
   0.6964937,
   0.7477873};
   Double_t _felx3012[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3012[26] = {
   1.536625,
   0.190693,
   0.1248138,
   0.1007007,
   0.1156257,
   0.1409513,
   0.1616405,
   0.1316392,
   0.1524795,
   0.1415061,
   0.1858433,
   0.1233406,
   0.1514575,
   0.1471117,
   0.1219936,
   0.1324477,
   0.1182311,
   0.0991668,
   0.1233893,
   0.107429,
   0.1185838,
   0.08807731,
   0.07587177,
   0.09044568,
   0.1024484,
   0.7477873};
   Double_t _fehx3012[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3012[26] = {
   2.089364,
   0.1832244,
   0.1219822,
   0.098514,
   0.1130849,
   0.1372857,
   0.1574369,
   0.1279851,
   0.1481158,
   0.1373215,
   0.1805248,
   0.1191952,
   0.1465109,
   0.1420945,
   0.1177003,
   0.1284393,
   0.1143697,
   0.09597173,
   0.120405,
   0.1045318,
   0.1160696,
   0.08807731,
   0.07587177,
   0.09044568,
   0.09948397,
   1.016774};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-156,156);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(3.988588);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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

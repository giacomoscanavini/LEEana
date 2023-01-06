#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 22:48:03 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-1.087571,3.553846,120.2625);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__25->SetBinContent(1,17.49819);
   hmc__25->SetBinContent(2,30.17093);
   hmc__25->SetBinContent(3,41.72363);
   hmc__25->SetBinContent(4,47.3923);
   hmc__25->SetBinContent(5,54.37857);
   hmc__25->SetBinContent(6,39.44381);
   hmc__25->SetBinContent(7,48.84776);
   hmc__25->SetBinContent(8,41.0047);
   hmc__25->SetBinContent(9,42.26727);
   hmc__25->SetBinContent(10,35.21496);
   hmc__25->SetBinContent(11,26.89126);
   hmc__25->SetBinContent(12,24.49515);
   hmc__25->SetBinContent(13,25.6334);
   hmc__25->SetBinContent(14,23.04606);
   hmc__25->SetBinContent(15,20.60201);
   hmc__25->SetBinContent(16,22.07292);
   hmc__25->SetBinContent(17,17.91575);
   hmc__25->SetBinContent(18,19.5761);
   hmc__25->SetBinContent(19,14.82961);
   hmc__25->SetBinContent(20,12.56881);
   hmc__25->SetBinContent(21,20.76583);
   hmc__25->SetBinContent(22,12.02825);
   hmc__25->SetBinContent(23,11.04324);
   hmc__25->SetBinContent(24,7.615772);
   hmc__25->SetBinContent(25,3.562883);
   hmc__25->SetBinError(1,20.17709);
   hmc__25->SetBinError(2,15.16957);
   hmc__25->SetBinError(3,18.73645);
   hmc__25->SetBinError(4,20.72135);
   hmc__25->SetBinError(5,21.29865);
   hmc__25->SetBinError(6,25.07667);
   hmc__25->SetBinError(7,22.82589);
   hmc__25->SetBinError(8,19.37083);
   hmc__25->SetBinError(9,16.32448);
   hmc__25->SetBinError(10,14.18571);
   hmc__25->SetBinError(11,13.20434);
   hmc__25->SetBinError(12,10.33968);
   hmc__25->SetBinError(13,13.09753);
   hmc__25->SetBinError(14,10.62377);
   hmc__25->SetBinError(15,11.01311);
   hmc__25->SetBinError(16,11.34754);
   hmc__25->SetBinError(17,16.29459);
   hmc__25->SetBinError(18,8.609217);
   hmc__25->SetBinError(19,11.85961);
   hmc__25->SetBinError(20,7.65598);
   hmc__25->SetBinError(21,11.52162);
   hmc__25->SetBinError(22,10.20078);
   hmc__25->SetBinError(23,8.635454);
   hmc__25->SetBinError(24,7.86225);
   hmc__25->SetBinError(25,4.110507);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-1.087571);
   hmc__25->SetMaximum(114.195);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,3.15);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(57.0975);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,0.9884148);
   hbadmatch_stack_1->SetBinContent(4,0.7744342);
   hbadmatch_stack_1->SetBinContent(5,0.6806704);
   hbadmatch_stack_1->SetBinContent(6,1.58607);
   hbadmatch_stack_1->SetBinContent(7,1.242779);
   hbadmatch_stack_1->SetBinContent(8,1.694342);
   hbadmatch_stack_1->SetBinContent(9,0.5015851);
   hbadmatch_stack_1->SetBinContent(10,1.312958);
   hbadmatch_stack_1->SetBinContent(11,1.088661);
   hbadmatch_stack_1->SetBinContent(12,1.649763);
   hbadmatch_stack_1->SetBinContent(13,1.269799);
   hbadmatch_stack_1->SetBinContent(14,1.077751);
   hbadmatch_stack_1->SetBinContent(15,1.55827);
   hbadmatch_stack_1->SetBinContent(16,0.759148);
   hbadmatch_stack_1->SetBinContent(17,0.5186003);
   hbadmatch_stack_1->SetBinContent(18,0.5219547);
   hbadmatch_stack_1->SetBinContent(19,0.6803553);
   hbadmatch_stack_1->SetBinContent(20,0.8960377);
   hbadmatch_stack_1->SetBinContent(21,0.5909022);
   hbadmatch_stack_1->SetBinContent(22,0.7336084);
   hbadmatch_stack_1->SetBinContent(24,0.1106221);
   hbadmatch_stack_1->SetBinContent(25,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.4750084);
   hbadmatch_stack_1->SetBinError(4,0.4755056);
   hbadmatch_stack_1->SetBinError(5,0.355442);
   hbadmatch_stack_1->SetBinError(6,0.6218097);
   hbadmatch_stack_1->SetBinError(7,0.658972);
   hbadmatch_stack_1->SetBinError(8,0.6090112);
   hbadmatch_stack_1->SetBinError(9,0.4063118);
   hbadmatch_stack_1->SetBinError(10,0.6264366);
   hbadmatch_stack_1->SetBinError(11,0.4935791);
   hbadmatch_stack_1->SetBinError(12,0.797072);
   hbadmatch_stack_1->SetBinError(13,0.5302668);
   hbadmatch_stack_1->SetBinError(14,0.5755493);
   hbadmatch_stack_1->SetBinError(15,0.5757756);
   hbadmatch_stack_1->SetBinError(16,0.4514588);
   hbadmatch_stack_1->SetBinError(17,0.3095439);
   hbadmatch_stack_1->SetBinError(18,0.3064511);
   hbadmatch_stack_1->SetBinError(19,0.4810838);
   hbadmatch_stack_1->SetBinError(20,0.4165929);
   hbadmatch_stack_1->SetBinError(21,0.4225916);
   hbadmatch_stack_1->SetBinError(22,0.4394482);
   hbadmatch_stack_1->SetBinError(24,0.1106221);
   hbadmatch_stack_1->SetBinError(25,0.2946723);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,1.219797);
   hext_stack_2->SetBinContent(2,1.461993);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,5.318858);
   hext_stack_2->SetBinContent(5,8.366934);
   hext_stack_2->SetBinContent(6,1.297589);
   hext_stack_2->SetBinContent(7,6.367071);
   hext_stack_2->SetBinContent(8,3.654981);
   hext_stack_2->SetBinContent(9,7.504666);
   hext_stack_2->SetBinContent(10,5.89704);
   hext_stack_2->SetBinContent(11,2.185808);
   hext_stack_2->SetBinContent(12,3.229612);
   hext_stack_2->SetBinContent(13,4.049991);
   hext_stack_2->SetBinContent(14,5.718277);
   hext_stack_2->SetBinContent(15,2.435184);
   hext_stack_2->SetBinContent(16,6.221437);
   hext_stack_2->SetBinContent(17,3.856865);
   hext_stack_2->SetBinContent(18,6.912123);
   hext_stack_2->SetBinContent(19,1.544194);
   hext_stack_2->SetBinContent(20,1.704188);
   hext_stack_2->SetBinContent(21,5.781708);
   hext_stack_2->SetBinContent(22,1.055394);
   hext_stack_2->SetBinContent(23,0.8131978);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,0.8131978);
   hext_stack_2->SetBinError(1,0.7042499);
   hext_stack_2->SetBinError(2,0.7356036);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,1.676283);
   hext_stack_2->SetBinError(5,2.209799);
   hext_stack_2->SetBinError(6,0.6487947);
   hext_stack_2->SetBinError(7,1.840357);
   hext_stack_2->SetBinError(8,1.163091);
   hext_stack_2->SetBinError(9,1.955197);
   hext_stack_2->SetBinError(10,1.701242);
   hext_stack_2->SetBinError(11,1.006415);
   hext_stack_2->SetBinError(12,1.206126);
   hext_stack_2->SetBinError(13,1.258643);
   hext_stack_2->SetBinError(14,1.782259);
   hext_stack_2->SetBinError(15,0.9256422);
   hext_stack_2->SetBinError(16,1.731894);
   hext_stack_2->SetBinError(17,1.506257);
   hext_stack_2->SetBinError(18,2.03492);
   hext_stack_2->SetBinError(19,0.7753719);
   hext_stack_2->SetBinError(20,0.7656743);
   hext_stack_2->SetBinError(21,1.871849);
   hext_stack_2->SetBinError(22,0.6130171);
   hext_stack_2->SetBinError(23,0.5750177);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,0.5750177);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.1564614);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.9051592);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.2628198);
   hdirt_stack_3->SetBinContent(7,0.5529928);
   hdirt_stack_3->SetBinContent(9,0.4027664);
   hdirt_stack_3->SetBinContent(10,0.2645861);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.2761429);
   hdirt_stack_3->SetBinContent(16,0.2620035);
   hdirt_stack_3->SetBinContent(18,0.3381872);
   hdirt_stack_3->SetBinContent(19,0.4049124);
   hdirt_stack_3->SetBinError(1,0.1564614);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.5633738);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.2628198);
   hdirt_stack_3->SetBinError(7,0.437291);
   hdirt_stack_3->SetBinError(9,0.2964681);
   hdirt_stack_3->SetBinError(10,0.2645861);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(15,0.1952625);
   hdirt_stack_3->SetBinError(16,0.2620035);
   hdirt_stack_3->SetBinError(18,0.3381872);
   hdirt_stack_3->SetBinError(19,0.4049124);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.423945);
   houtFV_stack_4->SetBinContent(2,3.997978);
   houtFV_stack_4->SetBinContent(3,9.631809);
   houtFV_stack_4->SetBinContent(4,8.967381);
   houtFV_stack_4->SetBinContent(5,10.17574);
   houtFV_stack_4->SetBinContent(6,7.213962);
   houtFV_stack_4->SetBinContent(7,6.930384);
   houtFV_stack_4->SetBinContent(8,6.617023);
   houtFV_stack_4->SetBinContent(9,4.004822);
   houtFV_stack_4->SetBinContent(10,3.303964);
   houtFV_stack_4->SetBinContent(11,3.852901);
   houtFV_stack_4->SetBinContent(12,3.333321);
   houtFV_stack_4->SetBinContent(13,3.604085);
   houtFV_stack_4->SetBinContent(14,4.208481);
   houtFV_stack_4->SetBinContent(15,2.449625);
   houtFV_stack_4->SetBinContent(16,3.978988);
   houtFV_stack_4->SetBinContent(17,4.31822);
   houtFV_stack_4->SetBinContent(18,2.438596);
   houtFV_stack_4->SetBinContent(19,3.908312);
   houtFV_stack_4->SetBinContent(20,2.697006);
   houtFV_stack_4->SetBinContent(21,4.669556);
   houtFV_stack_4->SetBinContent(22,3.153347);
   houtFV_stack_4->SetBinContent(23,5.135521);
   houtFV_stack_4->SetBinContent(24,2.913616);
   houtFV_stack_4->SetBinContent(25,1.318683);
   houtFV_stack_4->SetBinError(1,1.154001);
   houtFV_stack_4->SetBinError(2,0.9636412);
   houtFV_stack_4->SetBinError(3,1.635534);
   houtFV_stack_4->SetBinError(4,1.72891);
   houtFV_stack_4->SetBinError(5,1.624838);
   houtFV_stack_4->SetBinError(6,1.256108);
   houtFV_stack_4->SetBinError(7,1.424223);
   houtFV_stack_4->SetBinError(8,1.271521);
   houtFV_stack_4->SetBinError(9,0.9765891);
   houtFV_stack_4->SetBinError(10,0.8617622);
   houtFV_stack_4->SetBinError(11,0.9315396);
   houtFV_stack_4->SetBinError(12,0.9110623);
   houtFV_stack_4->SetBinError(13,0.9505936);
   houtFV_stack_4->SetBinError(14,1.05397);
   houtFV_stack_4->SetBinError(15,0.7609547);
   houtFV_stack_4->SetBinError(16,0.960275);
   houtFV_stack_4->SetBinError(17,1.046351);
   houtFV_stack_4->SetBinError(18,0.7309632);
   houtFV_stack_4->SetBinError(19,0.9527477);
   houtFV_stack_4->SetBinError(20,0.7394336);
   houtFV_stack_4->SetBinError(21,1.175436);
   houtFV_stack_4->SetBinError(22,0.964833);
   houtFV_stack_4->SetBinError(23,1.195704);
   houtFV_stack_4->SetBinError(24,0.8160973);
   houtFV_stack_4->SetBinError(25,0.5542732);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1379102);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.5155004);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1721303);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1020308);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2522764);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1445945);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1430707);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08840275);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1676034);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05222565);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02461253);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.126408);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.04671451);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05292292);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.0280365);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05535072);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1127391);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05852792);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1318562);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03022596);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01891418);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06881601);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03365108);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03064968);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02036872);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03195992);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.277529);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.338156);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.76974);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.908636);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.424597);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.99357);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.959925);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.028374);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.76944);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.720828);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.067577);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.398144);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.45357);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.445405);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.253821);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.936777);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.016746);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.831951);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.483776);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.79603);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.681517);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.9349722);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.14106);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.5107664);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.3874641);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5859019);
   hNCpi0inFVres_stack_7->SetBinError(2,0.698707);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7893293);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9685285);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9130592);
   hNCpi0inFVres_stack_7->SetBinError(6,1.002078);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7888805);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8248155);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8246459);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5662197);
   hNCpi0inFVres_stack_7->SetBinError(11,0.441826);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5321813);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7189293);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5582786);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4770769);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4789156);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4942379);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3220169);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3482827);
   hNCpi0inFVres_stack_7->SetBinError(20,0.334619);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3842609);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2474819);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3111913);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2211395);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2897472);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.656189);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.567039);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.605536);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.61957);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.397012);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.599698);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.534782);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.637655);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.445873);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.338508);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.450759);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.099635);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9857657);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.3634773);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9899617);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9073775);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4342113);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.3847961);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6894939);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1717018);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5370074);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.4731356);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.310254);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.6443573);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.03728024);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.56334);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8664422);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5320895);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.019408);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8533771);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3165066);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6448797);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4150695);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3814429);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3827326);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3780197);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.286704);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3377207);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1265762);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3218769);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5901972);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1946568);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1514943);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2996436);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.08467426);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2858335);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1853032);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1534499);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.438921);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.03728024);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.485097);
   hCCpi0inFV_stack_10->SetBinContent(2,6.13683);
   hCCpi0inFV_stack_10->SetBinContent(3,9.436043);
   hCCpi0inFV_stack_10->SetBinContent(4,8.288826);
   hCCpi0inFV_stack_10->SetBinContent(5,8.190336);
   hCCpi0inFV_stack_10->SetBinContent(6,9.13623);
   hCCpi0inFV_stack_10->SetBinContent(7,9.945887);
   hCCpi0inFV_stack_10->SetBinContent(8,9.386427);
   hCCpi0inFV_stack_10->SetBinContent(9,10.44841);
   hCCpi0inFV_stack_10->SetBinContent(10,6.635448);
   hCCpi0inFV_stack_10->SetBinContent(11,6.457172);
   hCCpi0inFV_stack_10->SetBinContent(12,3.17764);
   hCCpi0inFV_stack_10->SetBinContent(13,4.626999);
   hCCpi0inFV_stack_10->SetBinContent(14,4.612887);
   hCCpi0inFV_stack_10->SetBinContent(15,4.113612);
   hCCpi0inFV_stack_10->SetBinContent(16,1.65717);
   hCCpi0inFV_stack_10->SetBinContent(17,3.620636);
   hCCpi0inFV_stack_10->SetBinContent(18,4.450368);
   hCCpi0inFV_stack_10->SetBinContent(19,2.644128);
   hCCpi0inFV_stack_10->SetBinContent(20,3.544273);
   hCCpi0inFV_stack_10->SetBinContent(21,4.081168);
   hCCpi0inFV_stack_10->SetBinContent(22,2.929362);
   hCCpi0inFV_stack_10->SetBinContent(23,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(24,1.512017);
   hCCpi0inFV_stack_10->SetBinContent(25,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,1.127559);
   hCCpi0inFV_stack_10->SetBinError(2,1.198696);
   hCCpi0inFV_stack_10->SetBinError(3,1.571899);
   hCCpi0inFV_stack_10->SetBinError(4,1.474141);
   hCCpi0inFV_stack_10->SetBinError(5,1.433198);
   hCCpi0inFV_stack_10->SetBinError(6,1.514217);
   hCCpi0inFV_stack_10->SetBinError(7,1.655899);
   hCCpi0inFV_stack_10->SetBinError(8,1.584478);
   hCCpi0inFV_stack_10->SetBinError(9,1.628407);
   hCCpi0inFV_stack_10->SetBinError(10,1.246447);
   hCCpi0inFV_stack_10->SetBinError(11,1.228719);
   hCCpi0inFV_stack_10->SetBinError(12,0.8775989);
   hCCpi0inFV_stack_10->SetBinError(13,1.099961);
   hCCpi0inFV_stack_10->SetBinError(14,1.061268);
   hCCpi0inFV_stack_10->SetBinError(15,1.006036);
   hCCpi0inFV_stack_10->SetBinError(16,0.6498287);
   hCCpi0inFV_stack_10->SetBinError(17,0.9738974);
   hCCpi0inFV_stack_10->SetBinError(18,0.9908247);
   hCCpi0inFV_stack_10->SetBinError(19,0.7855485);
   hCCpi0inFV_stack_10->SetBinError(20,0.9472091);
   hCCpi0inFV_stack_10->SetBinError(21,1.025487);
   hCCpi0inFV_stack_10->SetBinError(22,0.8777653);
   hCCpi0inFV_stack_10->SetBinError(23,0.785313);
   hCCpi0inFV_stack_10->SetBinError(24,0.5870189);
   hCCpi0inFV_stack_10->SetBinError(25,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.7765957);
   hNCinFV_stack_11->SetBinContent(2,3.625063);
   hNCinFV_stack_11->SetBinContent(3,3.750061);
   hNCinFV_stack_11->SetBinContent(4,3.441975);
   hNCinFV_stack_11->SetBinContent(5,5.08258);
   hNCinFV_stack_11->SetBinContent(6,2.916057);
   hNCinFV_stack_11->SetBinContent(7,2.719446);
   hNCinFV_stack_11->SetBinContent(8,1.542306);
   hNCinFV_stack_11->SetBinContent(9,1.42401);
   hNCinFV_stack_11->SetBinContent(10,1.44829);
   hNCinFV_stack_11->SetBinContent(11,1.907488);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.350308);
   hNCinFV_stack_11->SetBinContent(14,0.5352025);
   hNCinFV_stack_11->SetBinContent(15,0.9965883);
   hNCinFV_stack_11->SetBinContent(16,1.176913);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.8401653);
   hNCinFV_stack_11->SetBinContent(19,0.4623278);
   hNCinFV_stack_11->SetBinContent(20,0.4079483);
   hNCinFV_stack_11->SetBinContent(21,0.3320811);
   hNCinFV_stack_11->SetBinContent(22,0.9399866);
   hNCinFV_stack_11->SetBinContent(23,0.3204102);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.3622011);
   hNCinFV_stack_11->SetBinError(2,1.190344);
   hNCinFV_stack_11->SetBinError(3,1.09563);
   hNCinFV_stack_11->SetBinError(4,1.003066);
   hNCinFV_stack_11->SetBinError(5,1.429814);
   hNCinFV_stack_11->SetBinError(6,0.848417);
   hNCinFV_stack_11->SetBinError(7,0.7065957);
   hNCinFV_stack_11->SetBinError(8,0.6217363);
   hNCinFV_stack_11->SetBinError(9,0.5435197);
   hNCinFV_stack_11->SetBinError(10,0.6157444);
   hNCinFV_stack_11->SetBinError(11,0.8771582);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.2548921);
   hNCinFV_stack_11->SetBinError(14,0.3921167);
   hNCinFV_stack_11->SetBinError(15,0.4788791);
   hNCinFV_stack_11->SetBinError(16,0.5399022);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.3836048);
   hNCinFV_stack_11->SetBinError(19,0.3614436);
   hNCinFV_stack_11->SetBinError(20,0.2886456);
   hNCinFV_stack_11->SetBinError(21,0.3320811);
   hNCinFV_stack_11->SetBinError(22,0.6219125);
   hNCinFV_stack_11->SetBinError(23,0.2323733);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.887464);
   hnumuCCinFV_stack_12->SetBinContent(2,3.039576);
   hnumuCCinFV_stack_12->SetBinContent(3,6.883892);
   hnumuCCinFV_stack_12->SetBinContent(4,6.380179);
   hnumuCCinFV_stack_12->SetBinContent(5,9.776695);
   hnumuCCinFV_stack_12->SetBinContent(6,5.902614);
   hnumuCCinFV_stack_12->SetBinContent(7,10.46809);
   hnumuCCinFV_stack_12->SetBinContent(8,7.407061);
   hnumuCCinFV_stack_12->SetBinContent(9,9.718973);
   hnumuCCinFV_stack_12->SetBinContent(10,10.14042);
   hnumuCCinFV_stack_12->SetBinContent(11,5.61087);
   hnumuCCinFV_stack_12->SetBinContent(12,7.053321);
   hnumuCCinFV_stack_12->SetBinContent(13,6.258378);
   hnumuCCinFV_stack_12->SetBinContent(14,3.056546);
   hnumuCCinFV_stack_12->SetBinContent(15,4.502914);
   hnumuCCinFV_stack_12->SetBinContent(16,4.173109);
   hnumuCCinFV_stack_12->SetBinContent(17,1.935523);
   hnumuCCinFV_stack_12->SetBinContent(18,1.857957);
   hnumuCCinFV_stack_12->SetBinContent(19,2.566434);
   hnumuCCinFV_stack_12->SetBinContent(20,1.332805);
   hnumuCCinFV_stack_12->SetBinContent(21,2.841517);
   hnumuCCinFV_stack_12->SetBinContent(22,1.808446);
   hnumuCCinFV_stack_12->SetBinContent(23,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(24,0.9839892);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,0.6963815);
   hnumuCCinFV_stack_12->SetBinError(2,1.055299);
   hnumuCCinFV_stack_12->SetBinError(3,1.452551);
   hnumuCCinFV_stack_12->SetBinError(4,1.981001);
   hnumuCCinFV_stack_12->SetBinError(5,2.053944);
   hnumuCCinFV_stack_12->SetBinError(6,1.263382);
   hnumuCCinFV_stack_12->SetBinError(7,1.802903);
   hnumuCCinFV_stack_12->SetBinError(8,1.498636);
   hnumuCCinFV_stack_12->SetBinError(9,1.675309);
   hnumuCCinFV_stack_12->SetBinError(10,1.731482);
   hnumuCCinFV_stack_12->SetBinError(11,1.358353);
   hnumuCCinFV_stack_12->SetBinError(12,1.467871);
   hnumuCCinFV_stack_12->SetBinError(13,1.320391);
   hnumuCCinFV_stack_12->SetBinError(14,0.9452448);
   hnumuCCinFV_stack_12->SetBinError(15,1.493902);
   hnumuCCinFV_stack_12->SetBinError(16,1.121555);
   hnumuCCinFV_stack_12->SetBinError(17,0.699303);
   hnumuCCinFV_stack_12->SetBinError(18,0.7242765);
   hnumuCCinFV_stack_12->SetBinError(19,0.886752);
   hnumuCCinFV_stack_12->SetBinError(20,0.6275371);
   hnumuCCinFV_stack_12->SetBinError(21,0.8743194);
   hnumuCCinFV_stack_12->SetBinError(22,0.642967);
   hnumuCCinFV_stack_12->SetBinError(23,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(24,0.5061475);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.137414);
   hnueCCinFV_stack_13->SetBinContent(2,3.067294);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(19,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.6040059);
   hnueCCinFV_stack_13->SetBinError(2,1.979717);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.320043);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.1529246);
   hnueCCinFV_stack_13->SetBinError(11,0.2171002);
   hnueCCinFV_stack_13->SetBinError(19,0.2502081);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.2781975);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__26->SetBinContent(1,17.49819);
   hmcerror__26->SetBinContent(2,30.17093);
   hmcerror__26->SetBinContent(3,41.72363);
   hmcerror__26->SetBinContent(4,47.3923);
   hmcerror__26->SetBinContent(5,54.37857);
   hmcerror__26->SetBinContent(6,39.44381);
   hmcerror__26->SetBinContent(7,48.84776);
   hmcerror__26->SetBinContent(8,41.0047);
   hmcerror__26->SetBinContent(9,42.26727);
   hmcerror__26->SetBinContent(10,35.21496);
   hmcerror__26->SetBinContent(11,26.89126);
   hmcerror__26->SetBinContent(12,24.49515);
   hmcerror__26->SetBinContent(13,25.6334);
   hmcerror__26->SetBinContent(14,23.04606);
   hmcerror__26->SetBinContent(15,20.60201);
   hmcerror__26->SetBinContent(16,22.07292);
   hmcerror__26->SetBinContent(17,17.91575);
   hmcerror__26->SetBinContent(18,19.5761);
   hmcerror__26->SetBinContent(19,14.82961);
   hmcerror__26->SetBinContent(20,12.56881);
   hmcerror__26->SetBinContent(21,20.76583);
   hmcerror__26->SetBinContent(22,12.02825);
   hmcerror__26->SetBinContent(23,11.04324);
   hmcerror__26->SetBinContent(24,7.615772);
   hmcerror__26->SetBinContent(25,3.562883);
   hmcerror__26->SetBinError(1,20.17709);
   hmcerror__26->SetBinError(2,15.16957);
   hmcerror__26->SetBinError(3,18.73645);
   hmcerror__26->SetBinError(4,20.72135);
   hmcerror__26->SetBinError(5,21.29865);
   hmcerror__26->SetBinError(6,25.07667);
   hmcerror__26->SetBinError(7,22.82589);
   hmcerror__26->SetBinError(8,19.37083);
   hmcerror__26->SetBinError(9,16.32448);
   hmcerror__26->SetBinError(10,14.18571);
   hmcerror__26->SetBinError(11,13.20434);
   hmcerror__26->SetBinError(12,10.33968);
   hmcerror__26->SetBinError(13,13.09753);
   hmcerror__26->SetBinError(14,10.62377);
   hmcerror__26->SetBinError(15,11.01311);
   hmcerror__26->SetBinError(16,11.34754);
   hmcerror__26->SetBinError(17,16.29459);
   hmcerror__26->SetBinError(18,8.609217);
   hmcerror__26->SetBinError(19,11.85961);
   hmcerror__26->SetBinError(20,7.65598);
   hmcerror__26->SetBinError(21,11.52162);
   hmcerror__26->SetBinError(22,10.20078);
   hmcerror__26->SetBinError(23,8.635454);
   hmcerror__26->SetBinError(24,7.86225);
   hmcerror__26->SetBinError(25,4.110507);
   hmcerror__26->SetBinError(26,0.3895343);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3033[25] = {
   7,
   27,
   43,
   47,
   45,
   38,
   38,
   33,
   32,
   27,
   29,
   27,
   30,
   19,
   16,
   19,
   14,
   8,
   15,
   18,
   20,
   8,
   15,
   9,
   1};
   Double_t _felx3033[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3033[25] = {
   2.85954,
   5.3414,
   6.6917,
   6.9882,
   6.8416,
   6.3013,
   6.3013,
   5.8847,
   5.7977,
   5.3414,
   5.5285,
   5.3414,
   5.6197,
   4.5151,
   4.1628,
   4.5151,
   3.9102,
   3.0307,
   4.0385,
   4.4008,
   4.6266,
   3.0307,
   4.0385,
   3.19354,
   1};
   Double_t _fehx3033[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3033[25] = {
   2.61053,
   5.1322,
   6.4868,
   6.7839,
   6.637,
   6.0955,
   6.0955,
   5.6776,
   5.5904,
   5.1322,
   5.3201,
   5.1322,
   5.4117,
   4.3011,
   3.9454,
   4.3011,
   3.6898,
   2.7896,
   3.8197,
   4.1858,
   4.4133,
   2.7896,
   3.8197,
   2.9582,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,3.465);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(59.16229);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.5","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.9","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3034[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3034[25] = {
   1.153096,
   0.5027875,
   0.449061,
   0.4372303,
   0.3916736,
   0.6357569,
   0.4672864,
   0.4724052,
   0.3862203,
   0.4028319,
   0.4910273,
   0.4221111,
   0.5109557,
   0.4609796,
   0.5345649,
   0.5140932,
   0.9095125,
   0.4397821,
   0.7997247,
   0.6091255,
   0.5548355,
   0.8480687,
   0.7819678,
   1.032364,
   1.153703};
   Double_t _fehx3034[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3034[25] = {
   1.153096,
   0.5027875,
   0.449061,
   0.4372303,
   0.3916736,
   0.6357569,
   0.4672864,
   0.4724052,
   0.3862203,
   0.4028319,
   0.4910273,
   0.4221111,
   0.5109557,
   0.4609796,
   0.5345649,
   0.5140932,
   0.9095125,
   0.4397821,
   0.7997247,
   0.6091255,
   0.5548355,
   0.8480687,
   0.7819678,
   1.032364,
   1.153703};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,3.465);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3035[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3035[25] = {
   0.2209886,
   0.2558824,
   0.2650239,
   0.2253715,
   0.2381926,
   0.2908158,
   0.2749559,
   0.3072414,
   0.2629635,
   0.2876206,
   0.3379539,
   0.2979954,
   0.3092508,
   0.258608,
   0.3014645,
   0.2439116,
   0.3045392,
   0.2511851,
   0.2871075,
   0.2980663,
   0.2258729,
   0.3138195,
   0.2828402,
   0.3596541,
   0.3834037};
   Double_t _fehx3035[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3035[25] = {
   0.2209886,
   0.2558824,
   0.2650239,
   0.2253715,
   0.2381926,
   0.2908158,
   0.2749559,
   0.3072414,
   0.2629635,
   0.2876206,
   0.3379539,
   0.2979954,
   0.3092508,
   0.258608,
   0.3014645,
   0.2439116,
   0.3045392,
   0.2511851,
   0.2871075,
   0.2980663,
   0.2258729,
   0.3138195,
   0.2828402,
   0.3596541,
   0.3834037};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,3.465);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3036[25] = {
   0.4000414,
   0.8949012,
   1.030591,
   0.9917223,
   0.8275319,
   0.9633958,
   0.7779272,
   0.8047857,
   0.7570871,
   0.7667196,
   1.078417,
   1.102259,
   1.170348,
   0.8244358,
   0.7766234,
   0.8607831,
   0.7814355,
   0.4086616,
   1.01149,
   1.432117,
   0.9631206,
   0.6651008,
   1.358298,
   1.181758,
   0.2806716};
   Double_t _felx3036[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3036[25] = {
   0.1634192,
   0.177038,
   0.1603816,
   0.1474543,
   0.1258143,
   0.1597538,
   0.1289988,
   0.1435128,
   0.1371676,
   0.1516798,
   0.2055872,
   0.2180595,
   0.2192335,
   0.1959163,
   0.202058,
   0.2045538,
   0.2182549,
   0.1548163,
   0.2723268,
   0.3501367,
   0.2227987,
   0.2519651,
   0.365699,
   0.4193324,
   0.2806716};
   Double_t _fehx3036[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3036[25] = {
   0.1491886,
   0.1701041,
   0.1554707,
   0.1431435,
   0.1220518,
   0.1545363,
   0.1247857,
   0.1384622,
   0.1322631,
   0.1457392,
   0.1978375,
   0.209519,
   0.2111191,
   0.1866306,
   0.1915056,
   0.1948586,
   0.2059529,
   0.1425003,
   0.2575725,
   0.3330308,
   0.212527,
   0.2319207,
   0.3458859,
   0.3884308,
   0.3816319};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,3.465);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.941663);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 13:03:47 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
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
   pad1->Range(-1.307692,-7.273943,1.25641,804.345);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__7->SetBinContent(1,56.42507);
   hmc__7->SetBinContent(2,37.54123);
   hmc__7->SetBinContent(3,35.44947);
   hmc__7->SetBinContent(4,33.4671);
   hmc__7->SetBinContent(5,31.972);
   hmc__7->SetBinContent(6,35.99136);
   hmc__7->SetBinContent(7,33.55954);
   hmc__7->SetBinContent(8,29.96975);
   hmc__7->SetBinContent(9,40.42804);
   hmc__7->SetBinContent(10,48.34944);
   hmc__7->SetBinContent(11,51.51583);
   hmc__7->SetBinContent(12,51.02551);
   hmc__7->SetBinContent(13,55.36373);
   hmc__7->SetBinContent(14,61.45598);
   hmc__7->SetBinContent(15,79.7231);
   hmc__7->SetBinContent(16,85.88127);
   hmc__7->SetBinContent(17,128.4294);
   hmc__7->SetBinContent(18,160.4974);
   hmc__7->SetBinContent(19,214.051);
   hmc__7->SetBinContent(20,363.6972);
   hmc__7->SetBinError(1,23.71825);
   hmc__7->SetBinError(2,25.23725);
   hmc__7->SetBinError(3,15.49057);
   hmc__7->SetBinError(4,18.31371);
   hmc__7->SetBinError(5,16.85661);
   hmc__7->SetBinError(6,15.06176);
   hmc__7->SetBinError(7,19.56195);
   hmc__7->SetBinError(8,13.52349);
   hmc__7->SetBinError(9,16.15087);
   hmc__7->SetBinError(10,18.27507);
   hmc__7->SetBinError(11,17.68109);
   hmc__7->SetBinError(12,16.899);
   hmc__7->SetBinError(13,21.52474);
   hmc__7->SetBinError(14,22.75714);
   hmc__7->SetBinError(15,28.37383);
   hmc__7->SetBinError(16,36.87165);
   hmc__7->SetBinError(17,44.64328);
   hmc__7->SetBinError(18,46.43478);
   hmc__7->SetBinError(19,50.69877);
   hmc__7->SetBinError(20,78.36215);
   hmc__7->SetBinError(21,0.3895343);
   hmc__7->SetMinimum(-7.273943);
   hmc__7->SetMaximum(763.7641);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,-1,1);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(381.8821);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,3.079303);
   hbadmatch_stack_1->SetBinContent(2,0.4680692);
   hbadmatch_stack_1->SetBinContent(3,2.486059);
   hbadmatch_stack_1->SetBinContent(4,1.202587);
   hbadmatch_stack_1->SetBinContent(5,1.465526);
   hbadmatch_stack_1->SetBinContent(6,1.217251);
   hbadmatch_stack_1->SetBinContent(7,1.363313);
   hbadmatch_stack_1->SetBinContent(8,0.8306523);
   hbadmatch_stack_1->SetBinContent(9,4.28082);
   hbadmatch_stack_1->SetBinContent(10,1.060744);
   hbadmatch_stack_1->SetBinContent(11,3.100724);
   hbadmatch_stack_1->SetBinContent(12,3.806406);
   hbadmatch_stack_1->SetBinContent(13,1.852973);
   hbadmatch_stack_1->SetBinContent(14,1.6968);
   hbadmatch_stack_1->SetBinContent(15,2.646503);
   hbadmatch_stack_1->SetBinContent(16,2.896646);
   hbadmatch_stack_1->SetBinContent(17,4.030602);
   hbadmatch_stack_1->SetBinContent(18,5.380094);
   hbadmatch_stack_1->SetBinContent(19,4.534969);
   hbadmatch_stack_1->SetBinContent(20,9.058661);
   hbadmatch_stack_1->SetBinError(1,0.9138991);
   hbadmatch_stack_1->SetBinError(2,0.3312849);
   hbadmatch_stack_1->SetBinError(3,0.8559962);
   hbadmatch_stack_1->SetBinError(4,0.4914582);
   hbadmatch_stack_1->SetBinError(5,0.6209405);
   hbadmatch_stack_1->SetBinError(6,0.6211758);
   hbadmatch_stack_1->SetBinError(7,0.5713784);
   hbadmatch_stack_1->SetBinError(8,0.4159333);
   hbadmatch_stack_1->SetBinError(9,1.167704);
   hbadmatch_stack_1->SetBinError(10,0.5570364);
   hbadmatch_stack_1->SetBinError(11,0.9211728);
   hbadmatch_stack_1->SetBinError(12,1.133354);
   hbadmatch_stack_1->SetBinError(13,0.7225782);
   hbadmatch_stack_1->SetBinError(14,0.6627043);
   hbadmatch_stack_1->SetBinError(15,0.9179499);
   hbadmatch_stack_1->SetBinError(16,0.8733086);
   hbadmatch_stack_1->SetBinError(17,1.070849);
   hbadmatch_stack_1->SetBinError(18,1.165428);
   hbadmatch_stack_1->SetBinError(19,1.109837);
   hbadmatch_stack_1->SetBinError(20,1.816556);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,7.873784);
   hext_stack_2->SetBinContent(2,4.93821);
   hext_stack_2->SetBinContent(3,4.296596);
   hext_stack_2->SetBinContent(4,6.463634);
   hext_stack_2->SetBinContent(5,4.863188);
   hext_stack_2->SetBinContent(6,8.320636);
   hext_stack_2->SetBinContent(7,6.635217);
   hext_stack_2->SetBinContent(8,6.235799);
   hext_stack_2->SetBinContent(9,7.455595);
   hext_stack_2->SetBinContent(10,12.62441);
   hext_stack_2->SetBinContent(11,12.07936);
   hext_stack_2->SetBinContent(12,9.787037);
   hext_stack_2->SetBinContent(13,11.26339);
   hext_stack_2->SetBinContent(14,10.91745);
   hext_stack_2->SetBinContent(15,7.544977);
   hext_stack_2->SetBinContent(16,14.09081);
   hext_stack_2->SetBinContent(17,20.3382);
   hext_stack_2->SetBinContent(18,22.43463);
   hext_stack_2->SetBinContent(19,25.37297);
   hext_stack_2->SetBinContent(20,33.7874);
   hext_stack_2->SetBinError(1,1.786691);
   hext_stack_2->SetBinError(2,1.475167);
   hext_stack_2->SetBinError(3,1.328326);
   hext_stack_2->SetBinError(4,1.744878);
   hext_stack_2->SetBinError(5,1.383773);
   hext_stack_2->SetBinError(6,1.953744);
   hext_stack_2->SetBinError(7,1.721504);
   hext_stack_2->SetBinError(8,1.611538);
   hext_stack_2->SetBinError(9,1.758699);
   hext_stack_2->SetBinError(10,2.319561);
   hext_stack_2->SetBinError(11,2.150902);
   hext_stack_2->SetBinError(12,2.119752);
   hext_stack_2->SetBinError(13,2.152222);
   hext_stack_2->SetBinError(14,2.265045);
   hext_stack_2->SetBinError(15,1.718112);
   hext_stack_2->SetBinError(16,2.461016);
   hext_stack_2->SetBinError(17,2.930456);
   hext_stack_2->SetBinError(18,3.121147);
   hext_stack_2->SetBinError(19,3.228216);
   hext_stack_2->SetBinError(20,3.772599);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.8371547);
   hdirt_stack_3->SetBinContent(2,0.5758626);
   hdirt_stack_3->SetBinContent(3,1.013374);
   hdirt_stack_3->SetBinContent(4,2.09953);
   hdirt_stack_3->SetBinContent(5,0.6417377);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.804172);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,0.660638);
   hdirt_stack_3->SetBinContent(11,0.5570828);
   hdirt_stack_3->SetBinContent(12,0.5930034);
   hdirt_stack_3->SetBinContent(13,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.6345888);
   hdirt_stack_3->SetBinContent(15,0.8361309);
   hdirt_stack_3->SetBinContent(16,1.587271);
   hdirt_stack_3->SetBinContent(17,1.782619);
   hdirt_stack_3->SetBinContent(18,3.108204);
   hdirt_stack_3->SetBinContent(19,2.615909);
   hdirt_stack_3->SetBinContent(20,4.286158);
   hdirt_stack_3->SetBinError(1,0.4476927);
   hdirt_stack_3->SetBinError(2,0.3389606);
   hdirt_stack_3->SetBinError(3,0.6030184);
   hdirt_stack_3->SetBinError(4,1.084521);
   hdirt_stack_3->SetBinError(5,0.4010207);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4725875);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.394465);
   hdirt_stack_3->SetBinError(11,0.4028472);
   hdirt_stack_3->SetBinError(12,0.4234405);
   hdirt_stack_3->SetBinError(13,0.4028472);
   hdirt_stack_3->SetBinError(14,0.398124);
   hdirt_stack_3->SetBinError(15,0.4291904);
   hdirt_stack_3->SetBinError(16,0.6025866);
   hdirt_stack_3->SetBinError(17,0.7187535);
   hdirt_stack_3->SetBinError(18,0.9049766);
   hdirt_stack_3->SetBinError(19,0.8932114);
   hdirt_stack_3->SetBinError(20,1.14074);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,16.3102);
   houtFV_stack_4->SetBinContent(2,13.63283);
   houtFV_stack_4->SetBinContent(3,10.03352);
   houtFV_stack_4->SetBinContent(4,8.824422);
   houtFV_stack_4->SetBinContent(5,7.912595);
   houtFV_stack_4->SetBinContent(6,9.671186);
   houtFV_stack_4->SetBinContent(7,8.433663);
   houtFV_stack_4->SetBinContent(8,6.593845);
   houtFV_stack_4->SetBinContent(9,8.653632);
   houtFV_stack_4->SetBinContent(10,7.479862);
   houtFV_stack_4->SetBinContent(11,10.40019);
   houtFV_stack_4->SetBinContent(12,9.765225);
   houtFV_stack_4->SetBinContent(13,7.320868);
   houtFV_stack_4->SetBinContent(14,11.33355);
   houtFV_stack_4->SetBinContent(15,17.4304);
   houtFV_stack_4->SetBinContent(16,13.60314);
   houtFV_stack_4->SetBinContent(17,23.77416);
   houtFV_stack_4->SetBinContent(18,33.09256);
   houtFV_stack_4->SetBinContent(19,41.8828);
   houtFV_stack_4->SetBinContent(20,58.85972);
   houtFV_stack_4->SetBinError(1,2.034398);
   houtFV_stack_4->SetBinError(2,1.835822);
   houtFV_stack_4->SetBinError(3,1.53571);
   houtFV_stack_4->SetBinError(4,1.438751);
   houtFV_stack_4->SetBinError(5,1.379994);
   houtFV_stack_4->SetBinError(6,1.939809);
   houtFV_stack_4->SetBinError(7,1.500343);
   houtFV_stack_4->SetBinError(8,1.287963);
   houtFV_stack_4->SetBinError(9,1.473524);
   houtFV_stack_4->SetBinError(10,1.390489);
   houtFV_stack_4->SetBinError(11,1.610974);
   houtFV_stack_4->SetBinError(12,1.577698);
   houtFV_stack_4->SetBinError(13,1.387511);
   houtFV_stack_4->SetBinError(14,1.676258);
   houtFV_stack_4->SetBinError(15,2.104835);
   houtFV_stack_4->SetBinError(16,1.873618);
   houtFV_stack_4->SetBinError(17,2.473233);
   houtFV_stack_4->SetBinError(18,3.013596);
   houtFV_stack_4->SetBinError(19,3.254017);
   houtFV_stack_4->SetBinError(20,3.946857);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.300266);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,10.80498);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5246312);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.073525);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.725736);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2928421);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,6.371354);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.105556);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.22687);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.741192);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.584914);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.2982);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.23011);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.838678);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.216572);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.270066);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.294133);
   hNCpi0inFVres_stack_7->SetBinContent(12,9.648456);
   hNCpi0inFVres_stack_7->SetBinContent(13,10.66581);
   hNCpi0inFVres_stack_7->SetBinContent(14,13.31782);
   hNCpi0inFVres_stack_7->SetBinContent(15,17.17683);
   hNCpi0inFVres_stack_7->SetBinContent(16,17.00926);
   hNCpi0inFVres_stack_7->SetBinContent(17,24.6549);
   hNCpi0inFVres_stack_7->SetBinContent(18,31.80563);
   hNCpi0inFVres_stack_7->SetBinContent(19,39.10897);
   hNCpi0inFVres_stack_7->SetBinContent(20,58.58939);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8080239);
   hNCpi0inFVres_stack_7->SetBinError(2,0.737072);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6922788);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7032947);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6627895);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7763342);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7530053);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7327026);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7767514);
   hNCpi0inFVres_stack_7->SetBinError(10,1.000332);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9089013);
   hNCpi0inFVres_stack_7->SetBinError(12,1.010397);
   hNCpi0inFVres_stack_7->SetBinError(13,1.034192);
   hNCpi0inFVres_stack_7->SetBinError(14,1.199305);
   hNCpi0inFVres_stack_7->SetBinError(15,1.326313);
   hNCpi0inFVres_stack_7->SetBinError(16,1.312127);
   hNCpi0inFVres_stack_7->SetBinError(17,1.646095);
   hNCpi0inFVres_stack_7->SetBinError(18,1.859453);
   hNCpi0inFVres_stack_7->SetBinError(19,1.99342);
   hNCpi0inFVres_stack_7->SetBinError(20,2.466806);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.883094);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.18509);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.7104537);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.394176);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.17164);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8228858);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.031972);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.087772);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.590476);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.97958);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8778536);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.28648);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.688122);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.831198);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.932756);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.10614);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.780485);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.67943);
   hNCpi0inFVdis_stack_8->SetBinContent(20,21.58655);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4863911);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3447308);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2002212);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4051946);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3800824);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2499367);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3283469);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3307091);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4708042);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4762152);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2115632);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.485122);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3900216);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5561419);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6771682);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8276552);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9704452);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.037636);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.523632);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.04832419);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,12.34261);
   hCCpi0inFV_stack_10->SetBinContent(2,6.421288);
   hCCpi0inFV_stack_10->SetBinContent(3,6.954397);
   hCCpi0inFV_stack_10->SetBinContent(4,3.668578);
   hCCpi0inFV_stack_10->SetBinContent(5,5.587462);
   hCCpi0inFV_stack_10->SetBinContent(6,5.054636);
   hCCpi0inFV_stack_10->SetBinContent(7,5.742325);
   hCCpi0inFV_stack_10->SetBinContent(8,5.479952);
   hCCpi0inFV_stack_10->SetBinContent(9,6.614456);
   hCCpi0inFV_stack_10->SetBinContent(10,8.375338);
   hCCpi0inFV_stack_10->SetBinContent(11,7.664925);
   hCCpi0inFV_stack_10->SetBinContent(12,7.97103);
   hCCpi0inFV_stack_10->SetBinContent(13,9.855442);
   hCCpi0inFV_stack_10->SetBinContent(14,9.68452);
   hCCpi0inFV_stack_10->SetBinContent(15,15.90256);
   hCCpi0inFV_stack_10->SetBinContent(16,15.35207);
   hCCpi0inFV_stack_10->SetBinContent(17,23.49986);
   hCCpi0inFV_stack_10->SetBinContent(18,31.79332);
   hCCpi0inFV_stack_10->SetBinContent(19,45.8678);
   hCCpi0inFV_stack_10->SetBinContent(20,85.26335);
   hCCpi0inFV_stack_10->SetBinError(1,1.736062);
   hCCpi0inFV_stack_10->SetBinError(2,1.252409);
   hCCpi0inFV_stack_10->SetBinError(3,1.3192);
   hCCpi0inFV_stack_10->SetBinError(4,0.9104574);
   hCCpi0inFV_stack_10->SetBinError(5,1.174399);
   hCCpi0inFV_stack_10->SetBinError(6,1.15111);
   hCCpi0inFV_stack_10->SetBinError(7,1.182934);
   hCCpi0inFV_stack_10->SetBinError(8,1.188178);
   hCCpi0inFV_stack_10->SetBinError(9,1.267083);
   hCCpi0inFV_stack_10->SetBinError(10,1.465948);
   hCCpi0inFV_stack_10->SetBinError(11,1.306011);
   hCCpi0inFV_stack_10->SetBinError(12,1.416192);
   hCCpi0inFV_stack_10->SetBinError(13,1.574839);
   hCCpi0inFV_stack_10->SetBinError(14,1.501442);
   hCCpi0inFV_stack_10->SetBinError(15,2.09365);
   hCCpi0inFV_stack_10->SetBinError(16,1.924671);
   hCCpi0inFV_stack_10->SetBinError(17,2.436463);
   hCCpi0inFV_stack_10->SetBinError(18,2.876455);
   hCCpi0inFV_stack_10->SetBinError(19,3.451322);
   hCCpi0inFV_stack_10->SetBinError(20,4.698487);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.375317);
   hNCinFV_stack_11->SetBinContent(2,1.907138);
   hNCinFV_stack_11->SetBinContent(3,1.073786);
   hNCinFV_stack_11->SetBinContent(4,1.26543);
   hNCinFV_stack_11->SetBinContent(5,0.5884556);
   hNCinFV_stack_11->SetBinContent(6,0.7336084);
   hNCinFV_stack_11->SetBinContent(7,1.904217);
   hNCinFV_stack_11->SetBinContent(8,0.536893);
   hNCinFV_stack_11->SetBinContent(9,1.463836);
   hNCinFV_stack_11->SetBinContent(10,0.7336084);
   hNCinFV_stack_11->SetBinContent(11,1.320373);
   hNCinFV_stack_11->SetBinContent(12,1.123658);
   hNCinFV_stack_11->SetBinContent(13,2.200825);
   hNCinFV_stack_11->SetBinContent(14,1.465526);
   hNCinFV_stack_11->SetBinContent(15,3.75656);
   hNCinFV_stack_11->SetBinContent(16,2.447412);
   hNCinFV_stack_11->SetBinContent(17,4.339944);
   hNCinFV_stack_11->SetBinContent(18,7.234041);
   hNCinFV_stack_11->SetBinContent(19,12.84219);
   hNCinFV_stack_11->SetBinContent(20,25.1487);
   hNCinFV_stack_11->SetBinError(1,0.5198233);
   hNCinFV_stack_11->SetBinError(2,0.6501133);
   hNCinFV_stack_11->SetBinError(3,0.5557297);
   hNCinFV_stack_11->SetBinError(4,0.5878314);
   hNCinFV_stack_11->SetBinError(5,0.3397478);
   hNCinFV_stack_11->SetBinError(6,0.4394482);
   hNCinFV_stack_11->SetBinError(7,0.6815447);
   hNCinFV_stack_11->SetBinError(8,0.3929602);
   hNCinFV_stack_11->SetBinError(9,0.620407);
   hNCinFV_stack_11->SetBinError(10,0.4394482);
   hNCinFV_stack_11->SetBinError(11,0.5548703);
   hNCinFV_stack_11->SetBinError(12,0.5188295);
   hNCinFV_stack_11->SetBinError(13,0.7611465);
   hNCinFV_stack_11->SetBinError(14,0.6209405);
   hNCinFV_stack_11->SetBinError(15,1.039357);
   hNCinFV_stack_11->SetBinError(16,0.7605193);
   hNCinFV_stack_11->SetBinError(17,1.092568);
   hNCinFV_stack_11->SetBinError(18,1.345794);
   hNCinFV_stack_11->SetBinError(19,1.775699);
   hNCinFV_stack_11->SetBinError(20,2.559111);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,5.457118);
   hnumuCCinFV_stack_12->SetBinContent(2,2.633338);
   hnumuCCinFV_stack_12->SetBinContent(3,4.348404);
   hnumuCCinFV_stack_12->SetBinContent(4,3.584625);
   hnumuCCinFV_stack_12->SetBinContent(5,4.63056);
   hnumuCCinFV_stack_12->SetBinContent(6,4.790514);
   hnumuCCinFV_stack_12->SetBinContent(7,3.330492);
   hnumuCCinFV_stack_12->SetBinContent(8,3.589881);
   hnumuCCinFV_stack_12->SetBinContent(9,4.161767);
   hnumuCCinFV_stack_12->SetBinContent(10,7.526392);
   hnumuCCinFV_stack_12->SetBinContent(11,6.035763);
   hnumuCCinFV_stack_12->SetBinContent(12,7.42494);
   hnumuCCinFV_stack_12->SetBinContent(13,9.305054);
   hnumuCCinFV_stack_12->SetBinContent(14,10.52229);
   hnumuCCinFV_stack_12->SetBinContent(15,10.77993);
   hnumuCCinFV_stack_12->SetBinContent(16,14.9061);
   hnumuCCinFV_stack_12->SetBinContent(17,19.39998);
   hnumuCCinFV_stack_12->SetBinContent(18,16.94766);
   hnumuCCinFV_stack_12->SetBinContent(19,27.52834);
   hnumuCCinFV_stack_12->SetBinContent(20,47.45432);
   hnumuCCinFV_stack_12->SetBinError(1,1.164838);
   hnumuCCinFV_stack_12->SetBinError(2,0.8663823);
   hnumuCCinFV_stack_12->SetBinError(3,1.060706);
   hnumuCCinFV_stack_12->SetBinError(4,1.028444);
   hnumuCCinFV_stack_12->SetBinError(5,1.135413);
   hnumuCCinFV_stack_12->SetBinError(6,1.189866);
   hnumuCCinFV_stack_12->SetBinError(7,0.9402645);
   hnumuCCinFV_stack_12->SetBinError(8,1.074038);
   hnumuCCinFV_stack_12->SetBinError(9,1.022302);
   hnumuCCinFV_stack_12->SetBinError(10,1.800925);
   hnumuCCinFV_stack_12->SetBinError(11,1.340406);
   hnumuCCinFV_stack_12->SetBinError(12,1.445829);
   hnumuCCinFV_stack_12->SetBinError(13,1.762886);
   hnumuCCinFV_stack_12->SetBinError(14,1.821006);
   hnumuCCinFV_stack_12->SetBinError(15,1.791484);
   hnumuCCinFV_stack_12->SetBinError(16,2.242512);
   hnumuCCinFV_stack_12->SetBinError(17,2.298522);
   hnumuCCinFV_stack_12->SetBinError(18,2.072763);
   hnumuCCinFV_stack_12->SetBinError(19,3.528806);
   hnumuCCinFV_stack_12->SetBinError(20,4.499216);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(15,0.5667402);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(20,8.048536);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(2,0.340721);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.3025491);
   hnueCCinFV_stack_13->SetBinError(15,0.3304775);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.438694);
   hnueCCinFV_stack_13->SetBinError(20,2.398199);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__8->SetBinContent(1,56.42507);
   hmcerror__8->SetBinContent(2,37.54123);
   hmcerror__8->SetBinContent(3,35.44947);
   hmcerror__8->SetBinContent(4,33.4671);
   hmcerror__8->SetBinContent(5,31.972);
   hmcerror__8->SetBinContent(6,35.99136);
   hmcerror__8->SetBinContent(7,33.55954);
   hmcerror__8->SetBinContent(8,29.96975);
   hmcerror__8->SetBinContent(9,40.42804);
   hmcerror__8->SetBinContent(10,48.34944);
   hmcerror__8->SetBinContent(11,51.51583);
   hmcerror__8->SetBinContent(12,51.02551);
   hmcerror__8->SetBinContent(13,55.36373);
   hmcerror__8->SetBinContent(14,61.45598);
   hmcerror__8->SetBinContent(15,79.7231);
   hmcerror__8->SetBinContent(16,85.88127);
   hmcerror__8->SetBinContent(17,128.4294);
   hmcerror__8->SetBinContent(18,160.4974);
   hmcerror__8->SetBinContent(19,214.051);
   hmcerror__8->SetBinContent(20,363.6972);
   hmcerror__8->SetBinError(1,23.71825);
   hmcerror__8->SetBinError(2,25.23725);
   hmcerror__8->SetBinError(3,15.49057);
   hmcerror__8->SetBinError(4,18.31371);
   hmcerror__8->SetBinError(5,16.85661);
   hmcerror__8->SetBinError(6,15.06176);
   hmcerror__8->SetBinError(7,19.56195);
   hmcerror__8->SetBinError(8,13.52349);
   hmcerror__8->SetBinError(9,16.15087);
   hmcerror__8->SetBinError(10,18.27507);
   hmcerror__8->SetBinError(11,17.68109);
   hmcerror__8->SetBinError(12,16.899);
   hmcerror__8->SetBinError(13,21.52474);
   hmcerror__8->SetBinError(14,22.75714);
   hmcerror__8->SetBinError(15,28.37383);
   hmcerror__8->SetBinError(16,36.87165);
   hmcerror__8->SetBinError(17,44.64328);
   hmcerror__8->SetBinError(18,46.43478);
   hmcerror__8->SetBinError(19,50.69877);
   hmcerror__8->SetBinError(20,78.36215);
   hmcerror__8->SetBinError(21,0.3895343);
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
   
   Double_t _fx3009[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3009[20] = {
   65,
   27,
   29,
   30,
   28,
   32,
   32,
   31,
   32,
   45,
   44,
   40,
   46,
   62,
   55,
   86,
   92,
   145,
   213,
   336};
   Double_t _felx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3009[20] = {
   8.1893,
   5.3414,
   5.5285,
   5.6197,
   5.4358,
   5.7977,
   5.7977,
   5.7094,
   5.7977,
   6.8416,
   6.7671,
   6.4604,
   6.9153,
   8.0018,
   7.546,
   9.3967,
   9.7138,
   12.04159,
   14.59452,
   18.3303};
   Double_t _fehx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3009[20] = {
   7.9866,
   5.1322,
   5.3201,
   5.4117,
   5.2271,
   5.5904,
   5.5904,
   5.5017,
   5.5904,
   6.637,
   6.5623,
   6.2549,
   6.7108,
   7.7989,
   7.3425,
   9.1951,
   9.513,
   12.04159,
   14.59452,
   18.3303};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(19.49274);
   Graph_Graph3009->SetMaximum(387.5975);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.6/20","");
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
   
   Double_t _fx3010[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3010[20] = {
   0.4203495,
   0.6722542,
   0.436976,
   0.5472154,
   0.5272305,
   0.4184826,
   0.5829027,
   0.4512381,
   0.3994966,
   0.3779789,
   0.3432166,
   0.3311872,
   0.3887879,
   0.3702999,
   0.3559047,
   0.4293328,
   0.3476096,
   0.289318,
   0.2368537,
   0.2154599};
   Double_t _fehx3010[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3010[20] = {
   0.4203495,
   0.6722542,
   0.436976,
   0.5472154,
   0.5272305,
   0.4184826,
   0.5829027,
   0.4512381,
   0.3994966,
   0.3779789,
   0.3432166,
   0.3311872,
   0.3887879,
   0.3702999,
   0.3559047,
   0.4293328,
   0.3476096,
   0.289318,
   0.2368537,
   0.2154599};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
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
   
   Double_t _fx3011[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3011[20] = {
   0.2019202,
   0.1985222,
   0.2025441,
   0.2256542,
   0.2299488,
   0.1845831,
   0.2062248,
   0.2095486,
   0.1981831,
   0.1939513,
   0.1922739,
   0.2015634,
   0.1991986,
   0.2269022,
   0.2364544,
   0.2202473,
   0.2076858,
   0.2043096,
   0.1969608,
   0.1852782};
   Double_t _fehx3011[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3011[20] = {
   0.2019202,
   0.1985222,
   0.2025441,
   0.2256542,
   0.2299488,
   0.1845831,
   0.2062248,
   0.2095486,
   0.1981831,
   0.1939513,
   0.1922739,
   0.2015634,
   0.1991986,
   0.2269022,
   0.2364544,
   0.2202473,
   0.2076858,
   0.2043096,
   0.1969608,
   0.1852782};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
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
   
   Double_t _fx3012[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3012[20] = {
   1.15197,
   0.7192092,
   0.8180658,
   0.8964028,
   0.8757664,
   0.8891024,
   0.9535292,
   1.034376,
   0.7915298,
   0.9307244,
   0.8541064,
   0.7839216,
   0.8308689,
   1.008852,
   0.6898879,
   1.001382,
   0.7163471,
   0.9034415,
   0.9950901,
   0.9238455};
   Double_t _felx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3012[20] = {
   0.1451358,
   0.1422809,
   0.1559544,
   0.1679172,
   0.1700175,
   0.1610859,
   0.1727586,
   0.1905055,
   0.1434079,
   0.1415032,
   0.1313596,
   0.1266112,
   0.1249067,
   0.1302038,
   0.09465262,
   0.109415,
   0.07563535,
   0.07502673,
   0.06818245,
   0.0503999};
   Double_t _fehx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3012[20] = {
   0.1415435,
   0.1367083,
   0.1500756,
   0.1617021,
   0.1634899,
   0.1553262,
   0.1665815,
   0.1835751,
   0.1382803,
   0.1372715,
   0.1273841,
   0.1225838,
   0.1212129,
   0.1269022,
   0.09210003,
   0.1070676,
   0.07407184,
   0.07502673,
   0.06818245,
   0.0503999};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.5052698);
   Graph_Graph3012->SetMaximum(1.365172);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);

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

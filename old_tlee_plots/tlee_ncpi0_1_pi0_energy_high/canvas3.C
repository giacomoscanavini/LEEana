#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 18:31:53 2022) by ROOT version 6.26/00
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
   pad1->Range(-92.30769,-4.28,676.9231,473.2779);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__7->SetBinContent(1,7.623146);
   hmc__7->SetBinContent(2,50.34646);
   hmc__7->SetBinContent(3,123.8839);
   hmc__7->SetBinContent(4,180.7392);
   hmc__7->SetBinContent(5,202.659);
   hmc__7->SetBinContent(6,197.6295);
   hmc__7->SetBinContent(7,157.9841);
   hmc__7->SetBinContent(8,119.2332);
   hmc__7->SetBinContent(9,112.499);
   hmc__7->SetBinContent(10,81.26817);
   hmc__7->SetBinContent(11,70.33136);
   hmc__7->SetBinContent(12,50.99319);
   hmc__7->SetBinContent(13,35.92659);
   hmc__7->SetBinContent(14,33.71081);
   hmc__7->SetBinContent(15,23.73261);
   hmc__7->SetBinContent(16,23.43977);
   hmc__7->SetBinContent(17,15.48626);
   hmc__7->SetBinContent(18,12.12997);
   hmc__7->SetBinContent(19,9.698196);
   hmc__7->SetBinContent(20,8.263609);
   hmc__7->SetBinContent(21,76.5754);
   hmc__7->SetBinError(1,8.832685);
   hmc__7->SetBinError(2,24.15972);
   hmc__7->SetBinError(3,38.68154);
   hmc__7->SetBinError(4,46.46858);
   hmc__7->SetBinError(5,49.17498);
   hmc__7->SetBinError(6,52.72077);
   hmc__7->SetBinError(7,40.50517);
   hmc__7->SetBinError(8,32.09584);
   hmc__7->SetBinError(9,28.57978);
   hmc__7->SetBinError(10,24.94054);
   hmc__7->SetBinError(11,21.63366);
   hmc__7->SetBinError(12,17.68324);
   hmc__7->SetBinError(13,16.68986);
   hmc__7->SetBinError(14,14.2265);
   hmc__7->SetBinError(15,14.98296);
   hmc__7->SetBinError(16,13.32937);
   hmc__7->SetBinError(17,8.694158);
   hmc__7->SetBinError(18,12.67676);
   hmc__7->SetBinError(19,6.606967);
   hmc__7->SetBinError(20,5.465148);
   hmc__7->SetBinError(21,25.81043);
   hmc__7->SetMinimum(-4.28);
   hmc__7->SetMaximum(449.4);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,600);
   hs3_stack_3->SetMinimum(-3.871883e-08);
   hs3_stack_3->SetMaximum(212.7919);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.071247);
   hbadmatch_stack_1->SetBinContent(2,3.49968);
   hbadmatch_stack_1->SetBinContent(3,5.636392);
   hbadmatch_stack_1->SetBinContent(4,6.129451);
   hbadmatch_stack_1->SetBinContent(5,6.818005);
   hbadmatch_stack_1->SetBinContent(6,9.177403);
   hbadmatch_stack_1->SetBinContent(7,8.217803);
   hbadmatch_stack_1->SetBinContent(8,3.295029);
   hbadmatch_stack_1->SetBinContent(9,1.184982);
   hbadmatch_stack_1->SetBinContent(10,2.368068);
   hbadmatch_stack_1->SetBinContent(11,1.602659);
   hbadmatch_stack_1->SetBinContent(12,0.7359927);
   hbadmatch_stack_1->SetBinContent(13,0.7607957);
   hbadmatch_stack_1->SetBinContent(14,0.4358614);
   hbadmatch_stack_1->SetBinContent(15,0.7336084);
   hbadmatch_stack_1->SetBinContent(16,0.6360607);
   hbadmatch_stack_1->SetBinContent(19,0.8651294);
   hbadmatch_stack_1->SetBinContent(21,0.8609973);
   hbadmatch_stack_1->SetBinError(1,1.071247);
   hbadmatch_stack_1->SetBinError(2,1.052233);
   hbadmatch_stack_1->SetBinError(3,1.268404);
   hbadmatch_stack_1->SetBinError(4,1.175926);
   hbadmatch_stack_1->SetBinError(5,1.416485);
   hbadmatch_stack_1->SetBinError(6,1.627528);
   hbadmatch_stack_1->SetBinError(7,1.615253);
   hbadmatch_stack_1->SetBinError(8,0.9939018);
   hbadmatch_stack_1->SetBinError(9,0.543629);
   hbadmatch_stack_1->SetBinError(10,0.782927);
   hbadmatch_stack_1->SetBinError(11,0.7623714);
   hbadmatch_stack_1->SetBinError(12,0.4703972);
   hbadmatch_stack_1->SetBinError(13,0.4522722);
   hbadmatch_stack_1->SetBinError(14,0.2597164);
   hbadmatch_stack_1->SetBinError(15,0.4394482);
   hbadmatch_stack_1->SetBinError(16,0.4822316);
   hbadmatch_stack_1->SetBinError(19,0.5378407);
   hbadmatch_stack_1->SetBinError(21,0.4221683);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,1.544194);
   hext_stack_2->SetBinContent(2,16.65727);
   hext_stack_2->SetBinContent(3,32.81138);
   hext_stack_2->SetBinContent(4,37.75677);
   hext_stack_2->SetBinContent(5,40.6907);
   hext_stack_2->SetBinContent(6,33.24393);
   hext_stack_2->SetBinContent(7,30.77839);
   hext_stack_2->SetBinContent(8,19.88688);
   hext_stack_2->SetBinContent(9,24.1288);
   hext_stack_2->SetBinContent(10,8.268793);
   hext_stack_2->SetBinContent(11,12.5841);
   hext_stack_2->SetBinContent(12,5.351989);
   hext_stack_2->SetBinContent(13,2.999006);
   hext_stack_2->SetBinContent(14,3.076798);
   hext_stack_2->SetBinContent(15,2.999006);
   hext_stack_2->SetBinContent(16,1.779209);
   hext_stack_2->SetBinContent(17,1.454812);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,0.9660115);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,8.496628);
   hext_stack_2->SetBinError(1,0.7753719);
   hext_stack_2->SetBinError(2,2.775477);
   hext_stack_2->SetBinError(3,3.947599);
   hext_stack_2->SetBinError(4,4.190281);
   hext_stack_2->SetBinError(5,4.25478);
   hext_stack_2->SetBinError(6,3.909013);
   hext_stack_2->SetBinError(7,3.841474);
   hext_stack_2->SetBinError(8,3.026221);
   hext_stack_2->SetBinError(9,3.492242);
   hext_stack_2->SetBinError(10,1.850315);
   hext_stack_2->SetBinError(11,2.50025);
   hext_stack_2->SetBinError(12,1.462956);
   hext_stack_2->SetBinError(13,1.159101);
   hext_stack_2->SetBinError(14,1.126269);
   hext_stack_2->SetBinError(15,1.159101);
   hext_stack_2->SetBinError(16,0.9206235);
   hext_stack_2->SetBinError(17,0.8615765);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,0.7189592);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,1.96754);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,1.090589);
   hdirt_stack_3->SetBinContent(3,2.493341);
   hdirt_stack_3->SetBinContent(4,4.739753);
   hdirt_stack_3->SetBinContent(5,4.694884);
   hdirt_stack_3->SetBinContent(6,2.832128);
   hdirt_stack_3->SetBinContent(7,1.493425);
   hdirt_stack_3->SetBinContent(8,2.054284);
   hdirt_stack_3->SetBinContent(10,1.051731);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.7712369);
   hdirt_stack_3->SetBinContent(13,1.093596);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.399291);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.5347264);
   hdirt_stack_3->SetBinError(3,0.8059965);
   hdirt_stack_3->SetBinError(4,1.111627);
   hdirt_stack_3->SetBinError(5,1.11242);
   hdirt_stack_3->SetBinError(6,0.9318247);
   hdirt_stack_3->SetBinError(7,0.6230034);
   hdirt_stack_3->SetBinError(8,0.8079098);
   hdirt_stack_3->SetBinError(10,0.5487592);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.4884655);
   hdirt_stack_3->SetBinError(13,0.9427539);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.399291);
   hdirt_stack_3->SetBinError(16,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,2.39585);
   houtFV_stack_4->SetBinContent(2,11.74226);
   houtFV_stack_4->SetBinContent(3,31.17628);
   houtFV_stack_4->SetBinContent(4,38.79076);
   houtFV_stack_4->SetBinContent(5,45.28639);
   houtFV_stack_4->SetBinContent(6,41.88419);
   houtFV_stack_4->SetBinContent(7,30.13501);
   houtFV_stack_4->SetBinContent(8,22.25635);
   houtFV_stack_4->SetBinContent(9,15.79325);
   houtFV_stack_4->SetBinContent(10,15.28889);
   houtFV_stack_4->SetBinContent(11,13.40748);
   houtFV_stack_4->SetBinContent(12,7.713235);
   houtFV_stack_4->SetBinContent(13,5.880533);
   houtFV_stack_4->SetBinContent(14,4.629675);
   houtFV_stack_4->SetBinContent(15,4.06591);
   houtFV_stack_4->SetBinContent(16,5.005859);
   houtFV_stack_4->SetBinContent(17,1.973075);
   houtFV_stack_4->SetBinContent(18,2.684488);
   houtFV_stack_4->SetBinContent(19,1.397606);
   houtFV_stack_4->SetBinContent(20,1.709484);
   houtFV_stack_4->SetBinContent(21,5.470835);
   houtFV_stack_4->SetBinError(1,0.7857345);
   houtFV_stack_4->SetBinError(2,1.687975);
   houtFV_stack_4->SetBinError(3,2.896961);
   houtFV_stack_4->SetBinError(4,3.14873);
   houtFV_stack_4->SetBinError(5,3.611422);
   houtFV_stack_4->SetBinError(6,3.209347);
   houtFV_stack_4->SetBinError(7,2.712609);
   houtFV_stack_4->SetBinError(8,2.440938);
   houtFV_stack_4->SetBinError(9,1.94537);
   houtFV_stack_4->SetBinError(10,2.013484);
   houtFV_stack_4->SetBinError(11,1.807094);
   houtFV_stack_4->SetBinError(12,1.56395);
   houtFV_stack_4->SetBinError(13,1.173972);
   houtFV_stack_4->SetBinError(14,1.080996);
   houtFV_stack_4->SetBinError(15,1.036672);
   houtFV_stack_4->SetBinError(16,1.308065);
   houtFV_stack_4->SetBinError(17,0.6911564);
   houtFV_stack_4->SetBinError(18,0.8220554);
   houtFV_stack_4->SetBinError(19,0.7099851);
   houtFV_stack_4->SetBinError(20,0.7825448);
   houtFV_stack_4->SetBinError(21,1.203736);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2844251);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5636016);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.9993486);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.050643);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.7210146);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.672524);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7391171);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.092521);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.112962);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3350131);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.8072964);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.417305);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05843496);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3564329);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7382879);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2198197);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08084179);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09857196);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.450626);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1821348);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2612537);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4035045);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7561784);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2369536);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4849357);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2342798);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3826313);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3183063);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1063983);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3767177);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1846417);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02651673);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1763257);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3940087);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.08411714);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05003825);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.05147541);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5052218);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2638766);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2151552);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.104615);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1407345);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.07187683);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03762904);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2077895);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1108913);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5220448);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09832435);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06389048);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05186854);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.05177419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04617793);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02660775);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1375683);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06885465);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3124694);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.5224929);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.572867);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.27842);
   hNCpi0inFVres_stack_7->SetBinContent(4,25.64472);
   hNCpi0inFVres_stack_7->SetBinContent(5,32.66541);
   hNCpi0inFVres_stack_7->SetBinContent(6,27.74808);
   hNCpi0inFVres_stack_7->SetBinContent(7,21.46867);
   hNCpi0inFVres_stack_7->SetBinContent(8,17.32938);
   hNCpi0inFVres_stack_7->SetBinContent(9,15.9922);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.84371);
   hNCpi0inFVres_stack_7->SetBinContent(11,10.88088);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.720946);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.681422);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.754913);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.510463);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.730712);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.499506);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.677496);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.820564);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.036926);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.84556);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3077631);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4848411);
   hNCpi0inFVres_stack_7->SetBinError(3,1.06417);
   hNCpi0inFVres_stack_7->SetBinError(4,1.581715);
   hNCpi0inFVres_stack_7->SetBinError(5,1.925735);
   hNCpi0inFVres_stack_7->SetBinError(6,1.637966);
   hNCpi0inFVres_stack_7->SetBinError(7,1.309952);
   hNCpi0inFVres_stack_7->SetBinError(8,1.175128);
   hNCpi0inFVres_stack_7->SetBinError(9,1.309007);
   hNCpi0inFVres_stack_7->SetBinError(10,1.074061);
   hNCpi0inFVres_stack_7->SetBinError(11,1.038317);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6947118);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6490822);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6512759);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5318926);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4732913);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5843242);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8105435);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4237229);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3732994);
   hNCpi0inFVres_stack_7->SetBinError(21,1.300537);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.06010951);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.339897);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.787975);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.893141);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.879313);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.442622);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.342244);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.008572);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.591885);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.651297);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.0223);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.940429);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.217798);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.382273);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.645609);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.947237);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.594554);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.353639);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.782143);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4818367);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.583807);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.03052419);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3636694);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4540689);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.999121);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7059673);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8148916);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8061014);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5876636);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9078565);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5056065);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.530032);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7142267);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5653156);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6296112);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5303601);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.609834);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5670622);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5546216);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5783554);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2142484);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.50882);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(2,4.302989);
   hCCpi0inFV_stack_10->SetBinContent(3,15.87769);
   hCCpi0inFV_stack_10->SetBinContent(4,29.67776);
   hCCpi0inFV_stack_10->SetBinContent(5,36.06689);
   hCCpi0inFV_stack_10->SetBinContent(6,32.42986);
   hCCpi0inFV_stack_10->SetBinContent(7,32.79448);
   hCCpi0inFV_stack_10->SetBinContent(8,27.11456);
   hCCpi0inFV_stack_10->SetBinContent(9,27.84648);
   hCCpi0inFV_stack_10->SetBinContent(10,23.27841);
   hCCpi0inFV_stack_10->SetBinContent(11,16.02821);
   hCCpi0inFV_stack_10->SetBinContent(12,15.20312);
   hCCpi0inFV_stack_10->SetBinContent(13,7.927312);
   hCCpi0inFV_stack_10->SetBinContent(14,8.887527);
   hCCpi0inFV_stack_10->SetBinContent(15,5.075243);
   hCCpi0inFV_stack_10->SetBinContent(16,7.046894);
   hCCpi0inFV_stack_10->SetBinContent(17,4.693038);
   hCCpi0inFV_stack_10->SetBinContent(18,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(19,2.199135);
   hCCpi0inFV_stack_10->SetBinContent(20,2.782519);
   hCCpi0inFV_stack_10->SetBinContent(21,17.27463);
   hCCpi0inFV_stack_10->SetBinError(1,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(2,1.019817);
   hCCpi0inFV_stack_10->SetBinError(3,2.00425);
   hCCpi0inFV_stack_10->SetBinError(4,2.681745);
   hCCpi0inFV_stack_10->SetBinError(5,3.066964);
   hCCpi0inFV_stack_10->SetBinError(6,2.87596);
   hCCpi0inFV_stack_10->SetBinError(7,2.953598);
   hCCpi0inFV_stack_10->SetBinError(8,2.643202);
   hCCpi0inFV_stack_10->SetBinError(9,2.659102);
   hCCpi0inFV_stack_10->SetBinError(10,2.426726);
   hCCpi0inFV_stack_10->SetBinError(11,1.977962);
   hCCpi0inFV_stack_10->SetBinError(12,1.918009);
   hCCpi0inFV_stack_10->SetBinError(13,1.35988);
   hCCpi0inFV_stack_10->SetBinError(14,1.475873);
   hCCpi0inFV_stack_10->SetBinError(15,1.177914);
   hCCpi0inFV_stack_10->SetBinError(16,1.405492);
   hCCpi0inFV_stack_10->SetBinError(17,1.056454);
   hCCpi0inFV_stack_10->SetBinError(18,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(19,0.7607114);
   hCCpi0inFV_stack_10->SetBinError(20,0.8319397);
   hCCpi0inFV_stack_10->SetBinError(21,2.129158);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(2,1.663932);
   hNCinFV_stack_11->SetBinContent(3,3.08986);
   hNCinFV_stack_11->SetBinContent(4,6.274539);
   hNCinFV_stack_11->SetBinContent(5,5.056974);
   hNCinFV_stack_11->SetBinContent(6,7.141059);
   hNCinFV_stack_11->SetBinContent(7,7.459188);
   hNCinFV_stack_11->SetBinContent(8,4.580908);
   hNCinFV_stack_11->SetBinContent(9,5.837961);
   hNCinFV_stack_11->SetBinContent(10,3.743585);
   hNCinFV_stack_11->SetBinContent(11,2.887727);
   hNCinFV_stack_11->SetBinContent(12,3.51585);
   hNCinFV_stack_11->SetBinContent(13,3.198885);
   hNCinFV_stack_11->SetBinContent(14,3.03712);
   hNCinFV_stack_11->SetBinContent(15,2.563813);
   hNCinFV_stack_11->SetBinContent(16,1.338034);
   hNCinFV_stack_11->SetBinContent(17,0.9276437);
   hNCinFV_stack_11->SetBinContent(18,1.690031);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.9021621);
   hNCinFV_stack_11->SetBinContent(21,5.107312);
   hNCinFV_stack_11->SetBinError(2,0.6518637);
   hNCinFV_stack_11->SetBinError(3,0.8598392);
   hNCinFV_stack_11->SetBinError(4,1.256569);
   hNCinFV_stack_11->SetBinError(5,1.02085);
   hNCinFV_stack_11->SetBinError(6,1.402261);
   hNCinFV_stack_11->SetBinError(7,1.470265);
   hNCinFV_stack_11->SetBinError(8,1.033484);
   hNCinFV_stack_11->SetBinError(9,1.304511);
   hNCinFV_stack_11->SetBinError(10,1.019246);
   hNCinFV_stack_11->SetBinError(11,0.9571335);
   hNCinFV_stack_11->SetBinError(12,1.217769);
   hNCinFV_stack_11->SetBinError(13,0.9746332);
   hNCinFV_stack_11->SetBinError(14,0.9056622);
   hNCinFV_stack_11->SetBinError(15,0.8484892);
   hNCinFV_stack_11->SetBinError(16,0.6798591);
   hNCinFV_stack_11->SetBinError(17,0.4174282);
   hNCinFV_stack_11->SetBinError(18,0.8636893);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.7323606);
   hNCinFV_stack_11->SetBinError(21,1.391678);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,1.08013);
   hnumuCCinFV_stack_12->SetBinContent(2,7.476982);
   hnumuCCinFV_stack_12->SetBinContent(3,16.98222);
   hnumuCCinFV_stack_12->SetBinContent(4,24.80409);
   hnumuCCinFV_stack_12->SetBinContent(5,25.37759);
   hnumuCCinFV_stack_12->SetBinContent(6,34.23633);
   hnumuCCinFV_stack_12->SetBinContent(7,19.16388);
   hnumuCCinFV_stack_12->SetBinContent(8,16.80989);
   hnumuCCinFV_stack_12->SetBinContent(9,14.61478);
   hnumuCCinFV_stack_12->SetBinContent(10,11.5529);
   hnumuCCinFV_stack_12->SetBinContent(11,8.191527);
   hnumuCCinFV_stack_12->SetBinContent(12,7.497584);
   hnumuCCinFV_stack_12->SetBinContent(13,4.855623);
   hnumuCCinFV_stack_12->SetBinContent(14,5.307621);
   hnumuCCinFV_stack_12->SetBinContent(15,2.467192);
   hnumuCCinFV_stack_12->SetBinContent(16,2.261147);
   hnumuCCinFV_stack_12->SetBinContent(17,1.408629);
   hnumuCCinFV_stack_12->SetBinContent(18,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(19,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(20,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(21,9.090757);
   hnumuCCinFV_stack_12->SetBinError(1,0.5633509);
   hnumuCCinFV_stack_12->SetBinError(2,1.770475);
   hnumuCCinFV_stack_12->SetBinError(3,2.768628);
   hnumuCCinFV_stack_12->SetBinError(4,2.830792);
   hnumuCCinFV_stack_12->SetBinError(5,2.669356);
   hnumuCCinFV_stack_12->SetBinError(6,3.859607);
   hnumuCCinFV_stack_12->SetBinError(7,2.960095);
   hnumuCCinFV_stack_12->SetBinError(8,2.311442);
   hnumuCCinFV_stack_12->SetBinError(9,2.16606);
   hnumuCCinFV_stack_12->SetBinError(10,1.772378);
   hnumuCCinFV_stack_12->SetBinError(11,1.428097);
   hnumuCCinFV_stack_12->SetBinError(12,1.518296);
   hnumuCCinFV_stack_12->SetBinError(13,1.014551);
   hnumuCCinFV_stack_12->SetBinError(14,1.188676);
   hnumuCCinFV_stack_12->SetBinError(15,0.7955082);
   hnumuCCinFV_stack_12->SetBinError(16,0.7779001);
   hnumuCCinFV_stack_12->SetBinError(17,0.6047528);
   hnumuCCinFV_stack_12->SetBinError(18,0.340721);
   hnumuCCinFV_stack_12->SetBinError(19,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(20,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(21,1.559674);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(9,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(14,0.6436388);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,7.872206);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.1529246);
   hnueCCinFV_stack_13->SetBinError(9,0.438694);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.2781975);
   hnueCCinFV_stack_13->SetBinError(14,0.374163);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,2.391882);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__8->SetBinContent(1,7.623146);
   hmcerror__8->SetBinContent(2,50.34646);
   hmcerror__8->SetBinContent(3,123.8839);
   hmcerror__8->SetBinContent(4,180.7392);
   hmcerror__8->SetBinContent(5,202.659);
   hmcerror__8->SetBinContent(6,197.6295);
   hmcerror__8->SetBinContent(7,157.9841);
   hmcerror__8->SetBinContent(8,119.2332);
   hmcerror__8->SetBinContent(9,112.499);
   hmcerror__8->SetBinContent(10,81.26817);
   hmcerror__8->SetBinContent(11,70.33136);
   hmcerror__8->SetBinContent(12,50.99319);
   hmcerror__8->SetBinContent(13,35.92659);
   hmcerror__8->SetBinContent(14,33.71081);
   hmcerror__8->SetBinContent(15,23.73261);
   hmcerror__8->SetBinContent(16,23.43977);
   hmcerror__8->SetBinContent(17,15.48626);
   hmcerror__8->SetBinContent(18,12.12997);
   hmcerror__8->SetBinContent(19,9.698196);
   hmcerror__8->SetBinContent(20,8.263609);
   hmcerror__8->SetBinContent(21,76.5754);
   hmcerror__8->SetBinError(1,8.832685);
   hmcerror__8->SetBinError(2,24.15972);
   hmcerror__8->SetBinError(3,38.68154);
   hmcerror__8->SetBinError(4,46.46858);
   hmcerror__8->SetBinError(5,49.17498);
   hmcerror__8->SetBinError(6,52.72077);
   hmcerror__8->SetBinError(7,40.50517);
   hmcerror__8->SetBinError(8,32.09584);
   hmcerror__8->SetBinError(9,28.57978);
   hmcerror__8->SetBinError(10,24.94054);
   hmcerror__8->SetBinError(11,21.63366);
   hmcerror__8->SetBinError(12,17.68324);
   hmcerror__8->SetBinError(13,16.68986);
   hmcerror__8->SetBinError(14,14.2265);
   hmcerror__8->SetBinError(15,14.98296);
   hmcerror__8->SetBinError(16,13.32937);
   hmcerror__8->SetBinError(17,8.694158);
   hmcerror__8->SetBinError(18,12.67676);
   hmcerror__8->SetBinError(19,6.606967);
   hmcerror__8->SetBinError(20,5.465148);
   hmcerror__8->SetBinError(21,25.81043);
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
   
   Double_t _fx3009[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3009[20] = {
   8,
   48,
   138,
   195,
   214,
   187,
   124,
   123,
   89,
   78,
   55,
   31,
   31,
   31,
   26,
   13,
   10,
   7,
   3,
   10};
   Double_t _felx3009[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3009[20] = {
   3.0307,
   7.0604,
   11.74734,
   13.96424,
   14.62874,
   13.67479,
   11.13553,
   11.09054,
   9.5566,
   8.9562,
   7.546,
   5.7094,
   5.7094,
   5.7094,
   5.2453,
   3.77763,
   3.34883,
   2.85954,
   2.143368,
   3.34883};
   Double_t _fehx3009[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3009[20] = {
   2.7896,
   6.8561,
   11.74734,
   13.96424,
   14.62874,
   13.67479,
   11.13553,
   11.09054,
   9.3552,
   8.7542,
   7.3425,
   5.5017,
   5.5017,
   5.5017,
   5.0358,
   3.5552,
   3.1179,
   2.61053,
   1.72422,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,660);
   Graph_Graph3009->SetMinimum(0.7709688);
   Graph_Graph3009->SetMaximum(251.4059);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1421.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 53.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 279.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 303.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  210.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  57.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 301.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 65.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 205.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
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
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3010[20] = {
   1.158667,
   0.4798694,
   0.3122402,
   0.257103,
   0.2426489,
   0.2667657,
   0.2563876,
   0.2691855,
   0.2540448,
   0.3068918,
   0.3075962,
   0.3467765,
   0.4645545,
   0.422016,
   0.6313236,
   0.5686647,
   0.5614111,
   1.045078,
   0.6812573,
   0.6613512};
   Double_t _fehx3010[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3010[20] = {
   1.158667,
   0.4798694,
   0.3122402,
   0.257103,
   0.2426489,
   0.2667657,
   0.2563876,
   0.2691855,
   0.2540448,
   0.3068918,
   0.3075962,
   0.3467765,
   0.4645545,
   0.422016,
   0.6313236,
   0.5686647,
   0.5614111,
   1.045078,
   0.6812573,
   0.6613512};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,660);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3011[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
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
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3011[20] = {
   0.4016057,
   0.1821377,
   0.1929544,
   0.2139683,
   0.2055513,
   0.2009646,
   0.2035965,
   0.2173995,
   0.1928552,
   0.2058352,
   0.213721,
   0.2186691,
   0.2660492,
   0.2318147,
   0.2431387,
   0.2463338,
   0.245866,
   0.3016589,
   0.2764299,
   0.3281586};
   Double_t _fehx3011[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3011[20] = {
   0.4016057,
   0.1821377,
   0.1929544,
   0.2139683,
   0.2055513,
   0.2009646,
   0.2035965,
   0.2173995,
   0.1928552,
   0.2058352,
   0.213721,
   0.2186691,
   0.2660492,
   0.2318147,
   0.2431387,
   0.2463338,
   0.245866,
   0.3016589,
   0.2764299,
   0.3281586};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,660);
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
   
   Double_t _fx3012[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3012[20] = {
   1.049435,
   0.9533938,
   1.113946,
   1.078903,
   1.055961,
   0.9462149,
   0.7848889,
   1.031592,
   0.7911181,
   0.9597854,
   0.7820125,
   0.6079243,
   0.8628706,
   0.9195864,
   1.095539,
   0.5546129,
   0.6457337,
   0.5770831,
   0.3093359,
   1.210125};
   Double_t _felx3012[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3012[20] = {
   0.3975655,
   0.1402363,
   0.09482537,
   0.07726182,
   0.07218403,
   0.06919409,
   0.0704851,
   0.09301553,
   0.08494831,
   0.1102055,
   0.1072921,
   0.111964,
   0.1589185,
   0.1693641,
   0.2210165,
   0.1611633,
   0.2162452,
   0.2357417,
   0.2210069,
   0.4052503};
   Double_t _fehx3012[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3012[20] = {
   0.3659382,
   0.1361784,
   0.09482537,
   0.07726182,
   0.07218403,
   0.06919409,
   0.0704851,
   0.09301553,
   0.08315807,
   0.1077199,
   0.1043987,
   0.1078909,
   0.1531373,
   0.1632029,
   0.212189,
   0.1516738,
   0.2013333,
   0.2152133,
   0.1777877,
   0.3773049};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,660);
   Graph_Graph3012->SetMinimum(0.0794961);
   Graph_Graph3012->SetMaximum(1.73734);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",20,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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

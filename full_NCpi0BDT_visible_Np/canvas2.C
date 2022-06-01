#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 18:53:06 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-230.7692,-20.08983,1692.308,1692.832);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hmc__4->SetBinContent(1,234.4863);
   hmc__4->SetBinContent(2,1004.491);
   hmc__4->SetBinContent(3,794.5463);
   hmc__4->SetBinContent(4,540.6301);
   hmc__4->SetBinContent(5,315.5774);
   hmc__4->SetBinContent(6,200.2332);
   hmc__4->SetBinContent(7,119.2755);
   hmc__4->SetBinContent(8,68.09501);
   hmc__4->SetBinContent(9,53.94464);
   hmc__4->SetBinContent(10,25.46566);
   hmc__4->SetBinContent(11,16.11555);
   hmc__4->SetBinContent(12,11.74269);
   hmc__4->SetBinContent(13,11.8899);
   hmc__4->SetBinContent(14,8.533903);
   hmc__4->SetBinContent(15,5.700793);
   hmc__4->SetBinContent(16,2.871881);
   hmc__4->SetBinContent(17,1.452584);
   hmc__4->SetBinContent(18,3.150976);
   hmc__4->SetBinContent(19,2.105617);
   hmc__4->SetBinContent(20,1.618836);
   hmc__4->SetBinContent(21,21.66903);
   hmc__4->SetBinError(1,50.81691);
   hmc__4->SetBinError(2,233.5153);
   hmc__4->SetBinError(3,189.3311);
   hmc__4->SetBinError(4,139.8651);
   hmc__4->SetBinError(5,83.61818);
   hmc__4->SetBinError(6,49.83764);
   hmc__4->SetBinError(7,35.92603);
   hmc__4->SetBinError(8,19.40659);
   hmc__4->SetBinError(9,16.43903);
   hmc__4->SetBinError(10,10.04033);
   hmc__4->SetBinError(11,5.588068);
   hmc__4->SetBinError(12,4.696423);
   hmc__4->SetBinError(13,4.062678);
   hmc__4->SetBinError(14,4.611189);
   hmc__4->SetBinError(15,3.69374);
   hmc__4->SetBinError(16,3.713568);
   hmc__4->SetBinError(17,1.619661);
   hmc__4->SetBinError(18,2.036052);
   hmc__4->SetBinError(19,2.33134);
   hmc__4->SetBinError(20,2.552948);
   hmc__4->SetBinError(21,11.8969);
   hmc__4->SetMinimum(-20.08983);
   hmc__4->SetMaximum(1607.186);
   hmc__4->SetEntries(3396.741);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1500);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(1054.716);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,20.01946);
   hbadmatch_stack_1->SetBinContent(2,26.52814);
   hbadmatch_stack_1->SetBinContent(3,14.38509);
   hbadmatch_stack_1->SetBinContent(4,9.741953);
   hbadmatch_stack_1->SetBinContent(5,2.148484);
   hbadmatch_stack_1->SetBinContent(6,1.752451);
   hbadmatch_stack_1->SetBinContent(7,2.000729);
   hbadmatch_stack_1->SetBinContent(8,1.463836);
   hbadmatch_stack_1->SetBinContent(9,1.072095);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.9593782);
   hbadmatch_stack_1->SetBinContent(13,0.7232856);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.3917402);
   hbadmatch_stack_1->SetBinError(1,2.465152);
   hbadmatch_stack_1->SetBinError(2,2.780917);
   hbadmatch_stack_1->SetBinError(3,2.677572);
   hbadmatch_stack_1->SetBinError(4,1.641459);
   hbadmatch_stack_1->SetBinError(5,0.6932523);
   hbadmatch_stack_1->SetBinError(6,0.7345848);
   hbadmatch_stack_1->SetBinError(7,0.7343859);
   hbadmatch_stack_1->SetBinError(8,0.620407);
   hbadmatch_stack_1->SetBinError(9,0.5551335);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.4837994);
   hbadmatch_stack_1->SetBinError(13,0.5123403);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.2770047);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,23.83754);
   hext_stack_2->SetBinContent(2,84.52644);
   hext_stack_2->SetBinContent(3,49.60993);
   hext_stack_2->SetBinContent(4,30.55773);
   hext_stack_2->SetBinContent(5,29.12326);
   hext_stack_2->SetBinContent(6,16.2782);
   hext_stack_2->SetBinContent(7,10.34645);
   hext_stack_2->SetBinContent(8,6.813981);
   hext_stack_2->SetBinContent(9,9.161362);
   hext_stack_2->SetBinContent(10,1.932023);
   hext_stack_2->SetBinContent(11,1.055394);
   hext_stack_2->SetBinContent(12,1.461993);
   hext_stack_2->SetBinContent(13,3.532468);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(18,0.973192);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(21,6.139236);
   hext_stack_2->SetBinError(1,3.379472);
   hext_stack_2->SetBinError(2,6.471269);
   hext_stack_2->SetBinError(3,4.712615);
   hext_stack_2->SetBinError(4,3.756085);
   hext_stack_2->SetBinError(5,3.860109);
   hext_stack_2->SetBinError(6,2.978477);
   hext_stack_2->SetBinError(7,2.20112);
   hext_stack_2->SetBinError(8,1.637484);
   hext_stack_2->SetBinError(9,2.341183);
   hext_stack_2->SetBinError(10,1.016762);
   hext_stack_2->SetBinError(11,0.6130171);
   hext_stack_2->SetBinError(12,0.7356036);
   hext_stack_2->SetBinError(13,1.47091);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(18,0.5618727);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(21,1.714458);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,2.186197);
   hdirt_stack_3->SetBinContent(2,5.772635);
   hdirt_stack_3->SetBinContent(3,3.839784);
   hdirt_stack_3->SetBinContent(4,2.150684);
   hdirt_stack_3->SetBinContent(5,1.752534);
   hdirt_stack_3->SetBinContent(10,0.2761429);
   hdirt_stack_3->SetBinError(1,0.7082717);
   hdirt_stack_3->SetBinError(2,1.420139);
   hdirt_stack_3->SetBinError(3,1.06846);
   hdirt_stack_3->SetBinError(4,0.7406901);
   hdirt_stack_3->SetBinError(5,0.7485436);
   hdirt_stack_3->SetBinError(10,0.1952625);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,20.08938);
   houtFV_stack_4->SetBinContent(2,82.49657);
   houtFV_stack_4->SetBinContent(3,49.06318);
   houtFV_stack_4->SetBinContent(4,26.97951);
   houtFV_stack_4->SetBinContent(5,16.14557);
   houtFV_stack_4->SetBinContent(6,8.90039);
   houtFV_stack_4->SetBinContent(7,4.068379);
   houtFV_stack_4->SetBinContent(8,3.454989);
   houtFV_stack_4->SetBinContent(9,2.782519);
   houtFV_stack_4->SetBinContent(10,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.7302274);
   houtFV_stack_4->SetBinContent(14,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.3401776);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1950248);
   houtFV_stack_4->SetBinError(1,2.27357);
   houtFV_stack_4->SetBinError(2,4.599151);
   houtFV_stack_4->SetBinError(3,3.48226);
   houtFV_stack_4->SetBinError(4,2.57988);
   houtFV_stack_4->SetBinError(5,1.994855);
   houtFV_stack_4->SetBinError(6,1.503143);
   houtFV_stack_4->SetBinError(7,0.9536667);
   houtFV_stack_4->SetBinError(8,1.013887);
   houtFV_stack_4->SetBinError(9,0.8319397);
   houtFV_stack_4->SetBinError(10,0.1950249);
   houtFV_stack_4->SetBinError(11,0.4379386);
   houtFV_stack_4->SetBinError(14,0.3401776);
   houtFV_stack_4->SetBinError(15,0.3401776);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.1950249);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.8064439);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.212158);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5716177);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.157358);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2766672);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3167831);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1506776);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3883553);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,143.1648);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,608.5433);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,437.0577);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,260.5504);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,128.8196);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,77.23087);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,43.39748);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,21.99457);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,16.00637);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,8.406239);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,5.870986);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,2.985316);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,2.536084);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,1.981244);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,1.771494);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,1.492326);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,0.5438859);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,0.2926179);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,0.626922);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,0.432286);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,2.775398);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,3.888958);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,8.050894);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,6.81889);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,5.395589);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.661395);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.953784);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.214304);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,1.46567);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,1.357924);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,0.9630639);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,0.8427233);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,0.610202);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,0.4863904);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,0.5150857);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,0.4831797);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.4392262);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.2338466);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.122146);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.2655413);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.2270916);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.5547405);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(1,13.25769);
   hCCpi0inFV_stack_7->SetBinContent(2,102.0892);
   hCCpi0inFV_stack_7->SetBinContent(3,117.3092);
   hCCpi0inFV_stack_7->SetBinContent(4,105.2258);
   hCCpi0inFV_stack_7->SetBinContent(5,67.39841);
   hCCpi0inFV_stack_7->SetBinContent(6,55.18321);
   hCCpi0inFV_stack_7->SetBinContent(7,33.83784);
   hCCpi0inFV_stack_7->SetBinContent(8,22.05124);
   hCCpi0inFV_stack_7->SetBinContent(9,15.31571);
   hCCpi0inFV_stack_7->SetBinContent(10,8.81828);
   hCCpi0inFV_stack_7->SetBinContent(11,4.121909);
   hCCpi0inFV_stack_7->SetBinContent(12,4.641476);
   hCCpi0inFV_stack_7->SetBinContent(13,3.812448);
   hCCpi0inFV_stack_7->SetBinContent(14,3.361439);
   hCCpi0inFV_stack_7->SetBinContent(15,1.463836);
   hCCpi0inFV_stack_7->SetBinContent(16,0.5901461);
   hCCpi0inFV_stack_7->SetBinContent(17,0.5884556);
   hCCpi0inFV_stack_7->SetBinContent(18,0.9286332);
   hCCpi0inFV_stack_7->SetBinContent(19,0.6803553);
   hCCpi0inFV_stack_7->SetBinContent(20,0.3917402);
   hCCpi0inFV_stack_7->SetBinContent(21,5.908596);
   hCCpi0inFV_stack_7->SetBinError(1,1.854262);
   hCCpi0inFV_stack_7->SetBinError(2,5.023211);
   hCCpi0inFV_stack_7->SetBinError(3,5.42689);
   hCCpi0inFV_stack_7->SetBinError(4,5.201871);
   hCCpi0inFV_stack_7->SetBinError(5,4.098334);
   hCCpi0inFV_stack_7->SetBinError(6,3.739443);
   hCCpi0inFV_stack_7->SetBinError(7,2.908627);
   hCCpi0inFV_stack_7->SetBinError(8,2.340574);
   hCCpi0inFV_stack_7->SetBinError(9,1.977598);
   hCCpi0inFV_stack_7->SetBinError(10,1.507232);
   hCCpi0inFV_stack_7->SetBinError(11,1.04328);
   hCCpi0inFV_stack_7->SetBinError(12,1.074749);
   hCCpi0inFV_stack_7->SetBinError(13,1.000401);
   hCCpi0inFV_stack_7->SetBinError(14,1.001102);
   hCCpi0inFV_stack_7->SetBinError(15,0.620407);
   hCCpi0inFV_stack_7->SetBinError(16,0.340721);
   hCCpi0inFV_stack_7->SetBinError(17,0.3397478);
   hCCpi0inFV_stack_7->SetBinError(18,0.48078);
   hCCpi0inFV_stack_7->SetBinError(19,0.4810838);
   hCCpi0inFV_stack_7->SetBinError(20,0.2770047);
   hCCpi0inFV_stack_7->SetBinError(21,1.225272);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(1,6.837229);
   hNCinFV_stack_8->SetBinContent(2,42.86674);
   hNCinFV_stack_8->SetBinContent(3,37.47198);
   hNCinFV_stack_8->SetBinContent(4,29.97675);
   hNCinFV_stack_8->SetBinContent(5,18.95318);
   hNCinFV_stack_8->SetBinContent(6,7.520966);
   hNCinFV_stack_8->SetBinContent(7,5.512244);
   hNCinFV_stack_8->SetBinContent(8,2.394159);
   hNCinFV_stack_8->SetBinContent(9,2.199135);
   hNCinFV_stack_8->SetBinContent(10,1.323754);
   hNCinFV_stack_8->SetBinContent(11,1.072095);
   hNCinFV_stack_8->SetBinContent(12,0.1967154);
   hNCinFV_stack_8->SetBinContent(14,0.3900497);
   hNCinFV_stack_8->SetBinContent(15,0.3401776);
   hNCinFV_stack_8->SetBinContent(16,0.1967154);
   hNCinFV_stack_8->SetBinContent(18,0.1950248);
   hNCinFV_stack_8->SetBinContent(21,0.1967154);
   hNCinFV_stack_8->SetBinError(1,1.316223);
   hNCinFV_stack_8->SetBinError(2,3.242517);
   hNCinFV_stack_8->SetBinError(3,3.058823);
   hNCinFV_stack_8->SetBinError(4,2.78188);
   hNCinFV_stack_8->SetBinError(5,2.212173);
   hNCinFV_stack_8->SetBinError(6,1.401859);
   hNCinFV_stack_8->SetBinError(7,1.210683);
   hNCinFV_stack_8->SetBinError(8,0.785313);
   hNCinFV_stack_8->SetBinError(9,0.7607114);
   hNCinFV_stack_8->SetBinError(10,0.5560625);
   hNCinFV_stack_8->SetBinError(11,0.5551335);
   hNCinFV_stack_8->SetBinError(12,0.1967154);
   hNCinFV_stack_8->SetBinError(14,0.2758068);
   hNCinFV_stack_8->SetBinError(15,0.3401776);
   hNCinFV_stack_8->SetBinError(16,0.1967154);
   hNCinFV_stack_8->SetBinError(18,0.1950249);
   hNCinFV_stack_8->SetBinError(21,0.1967154);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(1,4.28763);
   hnumuCCinFV_stack_9->SetBinContent(2,48.89543);
   hnumuCCinFV_stack_9->SetBinContent(3,83.9101);
   hnumuCCinFV_stack_9->SetBinContent(4,72.46145);
   hnumuCCinFV_stack_9->SetBinContent(5,49.11003);
   hnumuCCinFV_stack_9->SetBinContent(6,30.99081);
   hnumuCCinFV_stack_9->SetBinContent(7,18.68785);
   hnumuCCinFV_stack_9->SetBinContent(8,8.063562);
   hnumuCCinFV_stack_9->SetBinContent(9,6.594385);
   hnumuCCinFV_stack_9->SetBinContent(10,4.093831);
   hnumuCCinFV_stack_9->SetBinContent(11,2.624395);
   hnumuCCinFV_stack_9->SetBinContent(12,1.121968);
   hnumuCCinFV_stack_9->SetBinContent(13,0.7699049);
   hnumuCCinFV_stack_9->SetBinContent(14,1.49102);
   hnumuCCinFV_stack_9->SetBinContent(15,0.7139339);
   hnumuCCinFV_stack_9->SetBinContent(17,0.1950248);
   hnumuCCinFV_stack_9->SetBinContent(18,0.7336084);
   hnumuCCinFV_stack_9->SetBinContent(20,0.1967154);
   hnumuCCinFV_stack_9->SetBinContent(21,0.6803553);
   hnumuCCinFV_stack_9->SetBinError(1,1.051799);
   hnumuCCinFV_stack_9->SetBinError(2,4.583161);
   hnumuCCinFV_stack_9->SetBinError(3,5.137951);
   hnumuCCinFV_stack_9->SetBinError(4,5.103587);
   hnumuCCinFV_stack_9->SetBinError(5,3.874796);
   hnumuCCinFV_stack_9->SetBinError(6,3.519223);
   hnumuCCinFV_stack_9->SetBinError(7,3.267964);
   hnumuCCinFV_stack_9->SetBinError(8,1.535832);
   hnumuCCinFV_stack_9->SetBinError(9,1.37577);
   hnumuCCinFV_stack_9->SetBinError(10,1.016701);
   hnumuCCinFV_stack_9->SetBinError(11,0.8186204);
   hnumuCCinFV_stack_9->SetBinError(12,0.5181909);
   hnumuCCinFV_stack_9->SetBinError(13,0.5480751);
   hnumuCCinFV_stack_9->SetBinError(14,0.57439);
   hnumuCCinFV_stack_9->SetBinError(15,0.5053855);
   hnumuCCinFV_stack_9->SetBinError(17,0.1950249);
   hnumuCCinFV_stack_9->SetBinError(18,0.4394482);
   hnumuCCinFV_stack_9->SetBinError(20,0.1967154);
   hnumuCCinFV_stack_9->SetBinError(21,0.4810838);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(2,1.560795);
   hnueCCinFV_stack_10->SetBinContent(3,1.327652);
   hnueCCinFV_stack_10->SetBinContent(4,1.828539);
   hnueCCinFV_stack_10->SetBinContent(5,1.79214);
   hnueCCinFV_stack_10->SetBinContent(6,1.944007);
   hnueCCinFV_stack_10->SetBinContent(7,1.215558);
   hnueCCinFV_stack_10->SetBinContent(8,1.802869);
   hnueCCinFV_stack_10->SetBinContent(9,0.785171);
   hnueCCinFV_stack_10->SetBinContent(10,0.3924652);
   hnueCCinFV_stack_10->SetBinContent(11,0.4159254);
   hnueCCinFV_stack_10->SetBinContent(12,0.3479495);
   hnueCCinFV_stack_10->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(14,0.3679062);
   hnueCCinFV_stack_10->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(20,0.4030693);
   hnueCCinFV_stack_10->SetBinContent(21,5.326169);
   hnueCCinFV_stack_10->SetBinError(2,0.6539029);
   hnueCCinFV_stack_10->SetBinError(3,0.6109692);
   hnueCCinFV_stack_10->SetBinError(4,0.7062194);
   hnueCCinFV_stack_10->SetBinError(5,0.8237073);
   hnueCCinFV_stack_10->SetBinError(6,0.7551749);
   hnueCCinFV_stack_10->SetBinError(7,0.6206425);
   hnueCCinFV_stack_10->SetBinError(8,1.586911);
   hnueCCinFV_stack_10->SetBinError(9,0.3925882);
   hnueCCinFV_stack_10->SetBinError(10,0.2775201);
   hnueCCinFV_stack_10->SetBinError(11,0.2945335);
   hnueCCinFV_stack_10->SetBinError(12,0.2478319);
   hnueCCinFV_stack_10->SetBinError(13,0.1950249);
   hnueCCinFV_stack_10->SetBinError(14,0.2607743);
   hnueCCinFV_stack_10->SetBinError(15,0.3401776);
   hnueCCinFV_stack_10->SetBinError(16,0.3401776);
   hnueCCinFV_stack_10->SetBinError(20,0.2851617);
   hnueCCinFV_stack_10->SetBinError(21,1.588842);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);
   hmcerror__5->SetBinContent(1,234.4863);
   hmcerror__5->SetBinContent(2,1004.491);
   hmcerror__5->SetBinContent(3,794.5463);
   hmcerror__5->SetBinContent(4,540.6301);
   hmcerror__5->SetBinContent(5,315.5774);
   hmcerror__5->SetBinContent(6,200.2332);
   hmcerror__5->SetBinContent(7,119.2755);
   hmcerror__5->SetBinContent(8,68.09501);
   hmcerror__5->SetBinContent(9,53.94464);
   hmcerror__5->SetBinContent(10,25.46566);
   hmcerror__5->SetBinContent(11,16.11555);
   hmcerror__5->SetBinContent(12,11.74269);
   hmcerror__5->SetBinContent(13,11.8899);
   hmcerror__5->SetBinContent(14,8.533903);
   hmcerror__5->SetBinContent(15,5.700793);
   hmcerror__5->SetBinContent(16,2.871881);
   hmcerror__5->SetBinContent(17,1.452584);
   hmcerror__5->SetBinContent(18,3.150976);
   hmcerror__5->SetBinContent(19,2.105617);
   hmcerror__5->SetBinContent(20,1.618836);
   hmcerror__5->SetBinContent(21,21.66903);
   hmcerror__5->SetBinError(1,50.81691);
   hmcerror__5->SetBinError(2,233.5153);
   hmcerror__5->SetBinError(3,189.3311);
   hmcerror__5->SetBinError(4,139.8651);
   hmcerror__5->SetBinError(5,83.61818);
   hmcerror__5->SetBinError(6,49.83764);
   hmcerror__5->SetBinError(7,35.92603);
   hmcerror__5->SetBinError(8,19.40659);
   hmcerror__5->SetBinError(9,16.43903);
   hmcerror__5->SetBinError(10,10.04033);
   hmcerror__5->SetBinError(11,5.588068);
   hmcerror__5->SetBinError(12,4.696423);
   hmcerror__5->SetBinError(13,4.062678);
   hmcerror__5->SetBinError(14,4.611189);
   hmcerror__5->SetBinError(15,3.69374);
   hmcerror__5->SetBinError(16,3.713568);
   hmcerror__5->SetBinError(17,1.619661);
   hmcerror__5->SetBinError(18,2.036052);
   hmcerror__5->SetBinError(19,2.33134);
   hmcerror__5->SetBinError(20,2.552948);
   hmcerror__5->SetBinError(21,11.8969);
   hmcerror__5->SetEntries(3396.741);

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
   
   Double_t _fx3005[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3005[20] = {
   214,
   751,
   608,
   386,
   255,
   145,
   86,
   42,
   33,
   25,
   24,
   12,
   4,
   8,
   2,
   5,
   4,
   3,
   1,
   4};
   Double_t _felx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3005[20] = {
   14.62874,
   27.40438,
   24.65766,
   19.64688,
   15.96872,
   12.04159,
   9.3967,
   6.6155,
   5.8847,
   5.1474,
   5.0476,
   3.64022,
   2.29683,
   3.0307,
   2,
   2.48995,
   2.29683,
   2.143368,
   1,
   2.29683};
   Double_t _fehx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3005[20] = {
   14.62874,
   27.40438,
   24.65766,
   19.64688,
   15.96872,
   12.04159,
   9.1951,
   6.4104,
   5.6776,
   4.9374,
   4.837,
   3.4155,
   1.98186,
   2.7896,
   1.51917,
   2.21064,
   1.98186,
   1.72422,
   1.35971,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(856.2448);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=18.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2612.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.2","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 270.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.2","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1763.7","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 561.1","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.4","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 334.9","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 15.1","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3006[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3006[20] = {
   0.2167159,
   0.2324712,
   0.2382884,
   0.2587075,
   0.2649689,
   0.248898,
   0.3012022,
   0.2849928,
   0.3047388,
   0.3942693,
   0.3467502,
   0.3999442,
   0.3416915,
   0.5403376,
   0.6479344,
   1.293079,
   1.11502,
   0.6461654,
   1.107201,
   1.577027};
   Double_t _fehx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3006[20] = {
   0.2167159,
   0.2324712,
   0.2382884,
   0.2587075,
   0.2649689,
   0.248898,
   0.3012022,
   0.2849928,
   0.3047388,
   0.3942693,
   0.3467502,
   0.3999442,
   0.3416915,
   0.5403376,
   0.6479344,
   1.293079,
   1.11502,
   0.6461654,
   1.107201,
   1.577027};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3007[20] = {
   0.2116064,
   0.2292128,
   0.2271562,
   0.220801,
   0.2105736,
   0.2103703,
   0.2101516,
   0.2207611,
   0.1978239,
   0.2147994,
   0.2461501,
   0.2517288,
   0.2189005,
   0.2612349,
   0.3396516,
   0.4293311,
   0.5727184,
   0.3725344,
   0.4781287,
   0.4890326};
   Double_t _fehx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3007[20] = {
   0.2116064,
   0.2292128,
   0.2271562,
   0.220801,
   0.2105736,
   0.2103703,
   0.2101516,
   0.2207611,
   0.1978239,
   0.2147994,
   0.2461501,
   0.2517288,
   0.2189005,
   0.2612349,
   0.3396516,
   0.4293311,
   0.5727184,
   0.3725344,
   0.4781287,
   0.4890326};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3008[20] = {
   0.9126332,
   0.747642,
   0.7652166,
   0.7139817,
   0.8080428,
   0.7241556,
   0.7210201,
   0.6167853,
   0.6117382,
   0.9817141,
   1.489245,
   1.021912,
   0.33642,
   0.9374374,
   0.3508284,
   1.741019,
   2.753713,
   0.9520859,
   0.4749203,
   2.470911};
   Double_t _felx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3008[20] = {
   0.06238632,
   0.02728184,
   0.03103363,
   0.03634071,
   0.0506016,
   0.06013785,
   0.0787815,
   0.09715103,
   0.1090878,
   0.202131,
   0.3132131,
   0.3099987,
   0.1931749,
   0.3551364,
   0.3508284,
   0.8670103,
   1.581202,
   0.6802235,
   0.4749203,
   1.418816};
   Double_t _fehx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3008[20] = {
   0.06238632,
   0.02728184,
   0.03103363,
   0.03634071,
   0.0506016,
   0.06013785,
   0.0770913,
   0.09413906,
   0.1052486,
   0.1938846,
   0.3001449,
   0.2908617,
   0.1666843,
   0.3268844,
   0.266484,
   0.7697535,
   1.364368,
   0.5472019,
   0.6457538,
   1.22425};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(4.529889);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_visible_energy_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

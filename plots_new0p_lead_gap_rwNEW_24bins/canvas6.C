#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 15:31:57 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-32.13752,101.5385,3553.734);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__16->SetBinContent(1,1606.876);
   hmc__16->SetBinContent(2,244.8306);
   hmc__16->SetBinContent(3,231.4736);
   hmc__16->SetBinContent(4,209.633);
   hmc__16->SetBinContent(5,196.2993);
   hmc__16->SetBinContent(6,170.6256);
   hmc__16->SetBinContent(7,152.7219);
   hmc__16->SetBinContent(8,121.6923);
   hmc__16->SetBinContent(9,102.6691);
   hmc__16->SetBinContent(10,79.316);
   hmc__16->SetBinContent(11,85.50725);
   hmc__16->SetBinContent(12,64.88933);
   hmc__16->SetBinContent(13,57.70413);
   hmc__16->SetBinContent(14,47.18876);
   hmc__16->SetBinContent(15,42.79279);
   hmc__16->SetBinContent(16,29.70231);
   hmc__16->SetBinContent(17,24.08857);
   hmc__16->SetBinContent(18,25.37651);
   hmc__16->SetBinContent(19,20.0117);
   hmc__16->SetBinContent(20,18.75564);
   hmc__16->SetBinContent(21,16.22667);
   hmc__16->SetBinContent(22,12.21936);
   hmc__16->SetBinContent(23,10.28218);
   hmc__16->SetBinContent(24,5.546363);
   hmc__16->SetBinContent(25,106.5762);
   hmc__16->SetBinError(1,373.3774);
   hmc__16->SetBinError(2,70.10757);
   hmc__16->SetBinError(3,66.33152);
   hmc__16->SetBinError(4,56.82566);
   hmc__16->SetBinError(5,52.30901);
   hmc__16->SetBinError(6,49.70423);
   hmc__16->SetBinError(7,38.64765);
   hmc__16->SetBinError(8,33.60494);
   hmc__16->SetBinError(9,29.6523);
   hmc__16->SetBinError(10,29.27983);
   hmc__16->SetBinError(11,28.54269);
   hmc__16->SetBinError(12,25.66729);
   hmc__16->SetBinError(13,19.51581);
   hmc__16->SetBinError(14,16.94608);
   hmc__16->SetBinError(15,18.67793);
   hmc__16->SetBinError(16,13.19668);
   hmc__16->SetBinError(17,13.58405);
   hmc__16->SetBinError(18,13.41969);
   hmc__16->SetBinError(19,9.755006);
   hmc__16->SetBinError(20,10.15316);
   hmc__16->SetBinError(21,9.929784);
   hmc__16->SetBinError(22,8.059877);
   hmc__16->SetBinError(23,6.833525);
   hmc__16->SetBinError(24,4.24391);
   hmc__16->SetBinError(25,38.87869);
   hmc__16->SetMinimum(-32.13752);
   hmc__16->SetMaximum(3374.44);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,90);
   hs6_stack_6->SetMinimum(-1.033322e-08);
   hs6_stack_6->SetMaximum(1687.22);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,31.30123);
   hbadmatch_stack_1->SetBinContent(2,2.744154);
   hbadmatch_stack_1->SetBinContent(3,3.830595);
   hbadmatch_stack_1->SetBinContent(4,3.62661);
   hbadmatch_stack_1->SetBinContent(5,1.756117);
   hbadmatch_stack_1->SetBinContent(6,3.573192);
   hbadmatch_stack_1->SetBinContent(7,2.686275);
   hbadmatch_stack_1->SetBinContent(8,1.760832);
   hbadmatch_stack_1->SetBinContent(9,2.869823);
   hbadmatch_stack_1->SetBinContent(10,2.289344);
   hbadmatch_stack_1->SetBinContent(11,1.111143);
   hbadmatch_stack_1->SetBinContent(12,4.042548);
   hbadmatch_stack_1->SetBinContent(13,1.320042);
   hbadmatch_stack_1->SetBinContent(14,1.345836);
   hbadmatch_stack_1->SetBinContent(15,1.963773);
   hbadmatch_stack_1->SetBinContent(16,0.8226469);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,1.905448);
   hbadmatch_stack_1->SetBinContent(19,0.5981015);
   hbadmatch_stack_1->SetBinContent(20,0.8508227);
   hbadmatch_stack_1->SetBinContent(21,1.159307);
   hbadmatch_stack_1->SetBinContent(22,1.519634);
   hbadmatch_stack_1->SetBinContent(23,0.4294702);
   hbadmatch_stack_1->SetBinContent(25,9.339333);
   hbadmatch_stack_1->SetBinError(1,3.03391);
   hbadmatch_stack_1->SetBinError(2,0.7741766);
   hbadmatch_stack_1->SetBinError(3,1.82293);
   hbadmatch_stack_1->SetBinError(4,0.9672815);
   hbadmatch_stack_1->SetBinError(5,0.6355007);
   hbadmatch_stack_1->SetBinError(6,0.9541404);
   hbadmatch_stack_1->SetBinError(7,0.7972409);
   hbadmatch_stack_1->SetBinError(8,0.6968474);
   hbadmatch_stack_1->SetBinError(9,0.9313958);
   hbadmatch_stack_1->SetBinError(10,0.8330862);
   hbadmatch_stack_1->SetBinError(11,0.7708905);
   hbadmatch_stack_1->SetBinError(12,2.080285);
   hbadmatch_stack_1->SetBinError(13,0.607989);
   hbadmatch_stack_1->SetBinError(14,0.5609857);
   hbadmatch_stack_1->SetBinError(15,0.6210031);
   hbadmatch_stack_1->SetBinError(16,0.5122618);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.6496038);
   hbadmatch_stack_1->SetBinError(19,0.4477779);
   hbadmatch_stack_1->SetBinError(20,0.5353515);
   hbadmatch_stack_1->SetBinError(21,0.5332538);
   hbadmatch_stack_1->SetBinError(22,0.6531922);
   hbadmatch_stack_1->SetBinError(23,0.3047487);
   hbadmatch_stack_1->SetBinError(25,2.258549);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,141.2761);
   hext_stack_2->SetBinContent(2,14.67618);
   hext_stack_2->SetBinContent(3,13.38136);
   hext_stack_2->SetBinContent(4,14.42239);
   hext_stack_2->SetBinContent(5,12.73256);
   hext_stack_2->SetBinContent(6,9.260756);
   hext_stack_2->SetBinContent(7,11.24903);
   hext_stack_2->SetBinContent(8,9.324187);
   hext_stack_2->SetBinContent(9,7.366213);
   hext_stack_2->SetBinContent(10,2.192989);
   hext_stack_2->SetBinContent(11,6.393022);
   hext_stack_2->SetBinContent(12,5.483261);
   hext_stack_2->SetBinContent(13,6.630808);
   hext_stack_2->SetBinContent(14,4.378797);
   hext_stack_2->SetBinContent(15,3.330584);
   hext_stack_2->SetBinContent(16,1.37261);
   hext_stack_2->SetBinContent(17,1.697008);
   hext_stack_2->SetBinContent(18,2.014225);
   hext_stack_2->SetBinContent(19,1.37261);
   hext_stack_2->SetBinContent(20,1.544194);
   hext_stack_2->SetBinContent(22,0.973192);
   hext_stack_2->SetBinContent(23,0.6487947);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,11.27057);
   hext_stack_2->SetBinError(1,7.793794);
   hext_stack_2->SetBinError(2,2.437149);
   hext_stack_2->SetBinError(3,2.276497);
   hext_stack_2->SetBinError(4,2.44144);
   hext_stack_2->SetBinError(5,2.229792);
   hext_stack_2->SetBinError(6,1.863354);
   hext_stack_2->SetBinError(7,2.243761);
   hext_stack_2->SetBinError(8,1.94922);
   hext_stack_2->SetBinError(9,1.79837);
   hext_stack_2->SetBinError(10,0.9009267);
   hext_stack_2->SetBinError(11,1.708342);
   hext_stack_2->SetBinError(12,1.711754);
   hext_stack_2->SetBinError(13,1.681801);
   hext_stack_2->SetBinError(14,1.350755);
   hext_stack_2->SetBinError(15,1.116937);
   hext_stack_2->SetBinError(16,0.8259691);
   hext_stack_2->SetBinError(17,0.8873887);
   hext_stack_2->SetBinError(18,1.045894);
   hext_stack_2->SetBinError(19,0.8259691);
   hext_stack_2->SetBinError(20,0.7753719);
   hext_stack_2->SetBinError(22,0.5618727);
   hext_stack_2->SetBinError(23,0.4587671);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,2.10496);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,20.94931);
   hdirt_stack_3->SetBinContent(2,2.002779);
   hdirt_stack_3->SetBinContent(3,1.635679);
   hdirt_stack_3->SetBinContent(4,2.239483);
   hdirt_stack_3->SetBinContent(5,2.568927);
   hdirt_stack_3->SetBinContent(6,0.949185);
   hdirt_stack_3->SetBinContent(7,1.652088);
   hdirt_stack_3->SetBinContent(8,1.5438);
   hdirt_stack_3->SetBinContent(9,0.5562857);
   hdirt_stack_3->SetBinContent(10,1.257509);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.9157718);
   hdirt_stack_3->SetBinContent(13,0.2524148);
   hdirt_stack_3->SetBinContent(14,0.7436324);
   hdirt_stack_3->SetBinContent(15,0.3569671);
   hdirt_stack_3->SetBinContent(16,0.1567191);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.2556058);
   hdirt_stack_3->SetBinContent(20,0.4336264);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(25,2.517124);
   hdirt_stack_3->SetBinError(1,2.691327);
   hdirt_stack_3->SetBinError(2,0.6354953);
   hdirt_stack_3->SetBinError(3,0.5617153);
   hdirt_stack_3->SetBinError(4,0.8255496);
   hdirt_stack_3->SetBinError(5,0.7803353);
   hdirt_stack_3->SetBinError(6,0.4452871);
   hdirt_stack_3->SetBinError(7,0.6966035);
   hdirt_stack_3->SetBinError(8,0.6528017);
   hdirt_stack_3->SetBinError(9,0.4404167);
   hdirt_stack_3->SetBinError(10,0.6355609);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.4989164);
   hdirt_stack_3->SetBinError(13,0.2524148);
   hdirt_stack_3->SetBinError(14,0.4652839);
   hdirt_stack_3->SetBinError(15,0.258803);
   hdirt_stack_3->SetBinError(16,0.1567191);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.2556058);
   hdirt_stack_3->SetBinError(20,0.4336264);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(25,0.8886654);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,144.5785);
   houtFV_stack_4->SetBinContent(2,13.13901);
   houtFV_stack_4->SetBinContent(3,15.19831);
   houtFV_stack_4->SetBinContent(4,11.94322);
   houtFV_stack_4->SetBinContent(5,16.75404);
   houtFV_stack_4->SetBinContent(6,17.98658);
   houtFV_stack_4->SetBinContent(7,15.88878);
   houtFV_stack_4->SetBinContent(8,13.181);
   houtFV_stack_4->SetBinContent(9,9.889395);
   houtFV_stack_4->SetBinContent(10,8.738916);
   houtFV_stack_4->SetBinContent(11,11.28368);
   houtFV_stack_4->SetBinContent(12,6.250464);
   houtFV_stack_4->SetBinContent(13,5.971826);
   houtFV_stack_4->SetBinContent(14,6.336724);
   houtFV_stack_4->SetBinContent(15,6.35149);
   houtFV_stack_4->SetBinContent(16,3.987614);
   houtFV_stack_4->SetBinContent(17,2.979234);
   houtFV_stack_4->SetBinContent(18,3.905275);
   houtFV_stack_4->SetBinContent(19,2.500666);
   houtFV_stack_4->SetBinContent(20,3.236822);
   houtFV_stack_4->SetBinContent(21,2.585803);
   houtFV_stack_4->SetBinContent(22,2.078988);
   houtFV_stack_4->SetBinContent(23,0.9303237);
   houtFV_stack_4->SetBinContent(24,0.7319179);
   houtFV_stack_4->SetBinContent(25,14.7549);
   houtFV_stack_4->SetBinError(1,5.987732);
   houtFV_stack_4->SetBinError(2,1.781396);
   houtFV_stack_4->SetBinError(3,1.952975);
   houtFV_stack_4->SetBinError(4,1.63083);
   houtFV_stack_4->SetBinError(5,2.077265);
   houtFV_stack_4->SetBinError(6,2.123889);
   houtFV_stack_4->SetBinError(7,1.969848);
   houtFV_stack_4->SetBinError(8,1.845594);
   houtFV_stack_4->SetBinError(9,1.494743);
   houtFV_stack_4->SetBinError(10,1.487965);
   houtFV_stack_4->SetBinError(11,1.688044);
   houtFV_stack_4->SetBinError(12,1.271879);
   houtFV_stack_4->SetBinError(13,1.21125);
   houtFV_stack_4->SetBinError(14,1.262223);
   houtFV_stack_4->SetBinError(15,1.289132);
   houtFV_stack_4->SetBinError(16,1.064786);
   houtFV_stack_4->SetBinError(17,0.8548804);
   houtFV_stack_4->SetBinError(18,1.011012);
   houtFV_stack_4->SetBinError(19,0.7348895);
   houtFV_stack_4->SetBinError(20,0.8917509);
   houtFV_stack_4->SetBinError(21,0.8083481);
   houtFV_stack_4->SetBinError(22,0.7737514);
   houtFV_stack_4->SetBinError(23,0.4814682);
   houtFV_stack_4->SetBinError(24,0.438694);
   houtFV_stack_4->SetBinError(25,2.011954);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,43.99616);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.759714);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.120829);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.2972);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.33631);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.654252);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.708556);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.770494);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.956584);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.297186);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.492158);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6976678);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.658894);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.4600178);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9476081);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6961718);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.897544);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.209675);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7925014);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8019393);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7420712);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7000592);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6360197);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6326962);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4259548);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5935503);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2751387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4002008);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2285151);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4222841);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1399647);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3449191);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2155126);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5128138);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.58857);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8087721);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8502901);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.66132);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3187231);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3309054);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,663.6703);
   hNCpi0inFVres_stack_7->SetBinContent(2,109.163);
   hNCpi0inFVres_stack_7->SetBinContent(3,106.011);
   hNCpi0inFVres_stack_7->SetBinContent(4,94.62596);
   hNCpi0inFVres_stack_7->SetBinContent(5,85.68092);
   hNCpi0inFVres_stack_7->SetBinContent(6,70.40161);
   hNCpi0inFVres_stack_7->SetBinContent(7,63.38873);
   hNCpi0inFVres_stack_7->SetBinContent(8,50.54687);
   hNCpi0inFVres_stack_7->SetBinContent(9,43.49726);
   hNCpi0inFVres_stack_7->SetBinContent(10,32.98839);
   hNCpi0inFVres_stack_7->SetBinContent(11,34.24756);
   hNCpi0inFVres_stack_7->SetBinContent(12,24.45711);
   hNCpi0inFVres_stack_7->SetBinContent(13,21.33744);
   hNCpi0inFVres_stack_7->SetBinContent(14,16.3586);
   hNCpi0inFVres_stack_7->SetBinContent(15,16.67614);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.20016);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.200648);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.987154);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.776403);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.805472);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.06055);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.586082);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.85072);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.589308);
   hNCpi0inFVres_stack_7->SetBinContent(25,30.80555);
   hNCpi0inFVres_stack_7->SetBinError(1,8.400669);
   hNCpi0inFVres_stack_7->SetBinError(2,3.446246);
   hNCpi0inFVres_stack_7->SetBinError(3,3.410371);
   hNCpi0inFVres_stack_7->SetBinError(4,3.208167);
   hNCpi0inFVres_stack_7->SetBinError(5,3.02888);
   hNCpi0inFVres_stack_7->SetBinError(6,2.718258);
   hNCpi0inFVres_stack_7->SetBinError(7,2.598246);
   hNCpi0inFVres_stack_7->SetBinError(8,2.316099);
   hNCpi0inFVres_stack_7->SetBinError(9,2.139878);
   hNCpi0inFVres_stack_7->SetBinError(10,1.845762);
   hNCpi0inFVres_stack_7->SetBinError(11,1.931055);
   hNCpi0inFVres_stack_7->SetBinError(12,1.62677);
   hNCpi0inFVres_stack_7->SetBinError(13,1.507969);
   hNCpi0inFVres_stack_7->SetBinError(14,1.321635);
   hNCpi0inFVres_stack_7->SetBinError(15,1.376734);
   hNCpi0inFVres_stack_7->SetBinError(16,1.169899);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9959781);
   hNCpi0inFVres_stack_7->SetBinError(18,0.879817);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8307841);
   hNCpi0inFVres_stack_7->SetBinError(20,0.880775);
   hNCpi0inFVres_stack_7->SetBinError(21,0.755027);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7239295);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7033875);
   hNCpi0inFVres_stack_7->SetBinError(24,0.369963);
   hNCpi0inFVres_stack_7->SetBinError(25,1.847729);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,129.3548);
   hNCpi0inFVdis_stack_8->SetBinContent(2,20.60323);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.10753);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.17385);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.49445);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.63418);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.97074);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.1397);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.187527);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.503308);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.674846);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.613478);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.375084);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.182528);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.787352);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.107294);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8365039);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.380221);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.593884);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.823054);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.128626);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.711454);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.6412039);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.119174);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.6335);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.451662);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.578277);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.422616);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.323841);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.165204);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.240725);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.057514);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.968806);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9277622);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7354857);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6531276);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.603306);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7018176);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5256807);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5429813);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2638255);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.302538);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5849638);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3085891);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3616285);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3035023);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2532885);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7418967);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.362868);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2070706);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,195.7489);
   hCCpi0inFV_stack_10->SetBinContent(2,37.90398);
   hCCpi0inFV_stack_10->SetBinContent(3,31.6941);
   hCCpi0inFV_stack_10->SetBinContent(4,29.93381);
   hCCpi0inFV_stack_10->SetBinContent(5,30.15101);
   hCCpi0inFV_stack_10->SetBinContent(6,28.66037);
   hCCpi0inFV_stack_10->SetBinContent(7,21.66641);
   hCCpi0inFV_stack_10->SetBinContent(8,21.24665);
   hCCpi0inFV_stack_10->SetBinContent(9,15.11101);
   hCCpi0inFV_stack_10->SetBinContent(10,13.33563);
   hCCpi0inFV_stack_10->SetBinContent(11,11.92157);
   hCCpi0inFV_stack_10->SetBinContent(12,6.741949);
   hCCpi0inFV_stack_10->SetBinContent(13,9.873564);
   hCCpi0inFV_stack_10->SetBinContent(14,7.075972);
   hCCpi0inFV_stack_10->SetBinContent(15,4.937946);
   hCCpi0inFV_stack_10->SetBinContent(16,4.851107);
   hCCpi0inFV_stack_10->SetBinContent(17,4.448141);
   hCCpi0inFV_stack_10->SetBinContent(18,3.620943);
   hCCpi0inFV_stack_10->SetBinContent(19,2.207572);
   hCCpi0inFV_stack_10->SetBinContent(20,2.68879);
   hCCpi0inFV_stack_10->SetBinContent(21,1.517089);
   hCCpi0inFV_stack_10->SetBinContent(22,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(23,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(24,1.332012);
   hCCpi0inFV_stack_10->SetBinContent(25,14.23358);
   hCCpi0inFV_stack_10->SetBinError(1,7.002717);
   hCCpi0inFV_stack_10->SetBinError(2,3.106251);
   hCCpi0inFV_stack_10->SetBinError(3,2.825994);
   hCCpi0inFV_stack_10->SetBinError(4,2.764757);
   hCCpi0inFV_stack_10->SetBinError(5,2.711784);
   hCCpi0inFV_stack_10->SetBinError(6,2.679916);
   hCCpi0inFV_stack_10->SetBinError(7,2.329513);
   hCCpi0inFV_stack_10->SetBinError(8,2.236222);
   hCCpi0inFV_stack_10->SetBinError(9,1.887384);
   hCCpi0inFV_stack_10->SetBinError(10,1.831455);
   hCCpi0inFV_stack_10->SetBinError(11,1.728144);
   hCCpi0inFV_stack_10->SetBinError(12,1.270868);
   hCCpi0inFV_stack_10->SetBinError(13,1.577365);
   hCCpi0inFV_stack_10->SetBinError(14,1.388093);
   hCCpi0inFV_stack_10->SetBinError(15,1.055689);
   hCCpi0inFV_stack_10->SetBinError(16,1.000226);
   hCCpi0inFV_stack_10->SetBinError(17,1.057219);
   hCCpi0inFV_stack_10->SetBinError(18,0.8988449);
   hCCpi0inFV_stack_10->SetBinError(19,0.8141165);
   hCCpi0inFV_stack_10->SetBinError(20,0.8553468);
   hCCpi0inFV_stack_10->SetBinError(21,0.5887087);
   hCCpi0inFV_stack_10->SetBinError(22,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(23,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(24,0.6127937);
   hCCpi0inFV_stack_10->SetBinError(25,1.956419);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,121.6376);
   hNCinFV_stack_11->SetBinContent(2,19.21535);
   hNCinFV_stack_11->SetBinContent(3,13.40045);
   hNCinFV_stack_11->SetBinContent(4,14.01971);
   hNCinFV_stack_11->SetBinContent(5,11.67204);
   hNCinFV_stack_11->SetBinContent(6,10.80511);
   hNCinFV_stack_11->SetBinContent(7,9.771662);
   hNCinFV_stack_11->SetBinContent(8,5.22824);
   hNCinFV_stack_11->SetBinContent(9,6.83892);
   hNCinFV_stack_11->SetBinContent(10,4.593294);
   hNCinFV_stack_11->SetBinContent(11,8.10773);
   hNCinFV_stack_11->SetBinContent(12,6.340673);
   hNCinFV_stack_11->SetBinContent(13,4.143229);
   hNCinFV_stack_11->SetBinContent(14,2.692309);
   hNCinFV_stack_11->SetBinContent(15,2.055672);
   hNCinFV_stack_11->SetBinContent(16,2.002419);
   hNCinFV_stack_11->SetBinContent(17,1.518779);
   hNCinFV_stack_11->SetBinContent(18,2.305641);
   hNCinFV_stack_11->SetBinContent(19,2.197444);
   hNCinFV_stack_11->SetBinContent(20,1.320373);
   hNCinFV_stack_11->SetBinContent(21,1.463836);
   hNCinFV_stack_11->SetBinContent(22,0.3934307);
   hNCinFV_stack_11->SetBinContent(23,0.9303237);
   hNCinFV_stack_11->SetBinContent(24,0.5352025);
   hNCinFV_stack_11->SetBinContent(25,8.996027);
   hNCinFV_stack_11->SetBinError(1,5.489757);
   hNCinFV_stack_11->SetBinError(2,2.288329);
   hNCinFV_stack_11->SetBinError(3,1.765646);
   hNCinFV_stack_11->SetBinError(4,1.892773);
   hNCinFV_stack_11->SetBinError(5,1.710234);
   hNCinFV_stack_11->SetBinError(6,1.630562);
   hNCinFV_stack_11->SetBinError(7,1.582688);
   hNCinFV_stack_11->SetBinError(8,1.126877);
   hNCinFV_stack_11->SetBinError(9,1.316474);
   hNCinFV_stack_11->SetBinError(10,1.093343);
   hNCinFV_stack_11->SetBinError(11,1.442212);
   hNCinFV_stack_11->SetBinError(12,1.316445);
   hNCinFV_stack_11->SetBinError(13,1.074712);
   hNCinFV_stack_11->SetBinError(14,0.7594556);
   hNCinFV_stack_11->SetBinError(15,0.7082781);
   hNCinFV_stack_11->SetBinError(16,0.7348366);
   hNCinFV_stack_11->SetBinError(17,0.5892709);
   hNCinFV_stack_11->SetBinError(18,0.7085393);
   hNCinFV_stack_11->SetBinError(19,0.760276);
   hNCinFV_stack_11->SetBinError(20,0.5548703);
   hNCinFV_stack_11->SetBinError(21,0.620407);
   hNCinFV_stack_11->SetBinError(22,0.2781975);
   hNCinFV_stack_11->SetBinError(23,0.4814682);
   hNCinFV_stack_11->SetBinError(24,0.3921167);
   hNCinFV_stack_11->SetBinError(25,1.468374);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,89.44913);
   hnumuCCinFV_stack_12->SetBinContent(2,18.13214);
   hnumuCCinFV_stack_12->SetBinContent(3,15.39624);
   hnumuCCinFV_stack_12->SetBinContent(4,12.10718);
   hnumuCCinFV_stack_12->SetBinContent(5,11.99512);
   hnumuCCinFV_stack_12->SetBinContent(6,9.025772);
   hnumuCCinFV_stack_12->SetBinContent(7,8.527222);
   hnumuCCinFV_stack_12->SetBinContent(8,5.700295);
   hnumuCCinFV_stack_12->SetBinContent(9,4.782598);
   hnumuCCinFV_stack_12->SetBinContent(10,3.342628);
   hnumuCCinFV_stack_12->SetBinContent(11,4.505069);
   hnumuCCinFV_stack_12->SetBinContent(12,4.393896);
   hnumuCCinFV_stack_12->SetBinContent(13,2.917456);
   hnumuCCinFV_stack_12->SetBinContent(14,2.86896);
   hnumuCCinFV_stack_12->SetBinContent(15,3.329469);
   hnumuCCinFV_stack_12->SetBinContent(16,1.352451);
   hnumuCCinFV_stack_12->SetBinContent(17,3.666405);
   hnumuCCinFV_stack_12->SetBinContent(18,2.708212);
   hnumuCCinFV_stack_12->SetBinContent(19,0.9798098);
   hnumuCCinFV_stack_12->SetBinContent(20,0.42473);
   hnumuCCinFV_stack_12->SetBinContent(21,2.335561);
   hnumuCCinFV_stack_12->SetBinContent(22,1.002038);
   hnumuCCinFV_stack_12->SetBinContent(23,1.802702);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(25,6.707046);
   hnumuCCinFV_stack_12->SetBinError(1,5.354842);
   hnumuCCinFV_stack_12->SetBinError(2,2.618842);
   hnumuCCinFV_stack_12->SetBinError(3,2.025976);
   hnumuCCinFV_stack_12->SetBinError(4,2.280913);
   hnumuCCinFV_stack_12->SetBinError(5,2.190533);
   hnumuCCinFV_stack_12->SetBinError(6,1.637354);
   hnumuCCinFV_stack_12->SetBinError(7,1.526572);
   hnumuCCinFV_stack_12->SetBinError(8,1.224437);
   hnumuCCinFV_stack_12->SetBinError(9,1.103298);
   hnumuCCinFV_stack_12->SetBinError(10,0.9548585);
   hnumuCCinFV_stack_12->SetBinError(11,1.033547);
   hnumuCCinFV_stack_12->SetBinError(12,1.048683);
   hnumuCCinFV_stack_12->SetBinError(13,0.8667179);
   hnumuCCinFV_stack_12->SetBinError(14,0.8113314);
   hnumuCCinFV_stack_12->SetBinError(15,1.635004);
   hnumuCCinFV_stack_12->SetBinError(16,0.5574795);
   hnumuCCinFV_stack_12->SetBinError(17,1.103264);
   hnumuCCinFV_stack_12->SetBinError(18,1.080748);
   hnumuCCinFV_stack_12->SetBinError(19,0.5182535);
   hnumuCCinFV_stack_12->SetBinError(20,0.4247287);
   hnumuCCinFV_stack_12->SetBinError(21,0.7988731);
   hnumuCCinFV_stack_12->SetBinError(22,0.5917788);
   hnumuCCinFV_stack_12->SetBinError(23,0.9729301);
   hnumuCCinFV_stack_12->SetBinError(24,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(25,1.326237);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,19.96282);
   hnueCCinFV_stack_13->SetBinContent(2,0.654338);
   hnueCCinFV_stack_13->SetBinContent(3,0.8744354);
   hnueCCinFV_stack_13->SetBinContent(4,1.517861);
   hnueCCinFV_stack_13->SetBinContent(5,1.238217);
   hnueCCinFV_stack_13->SetBinContent(6,1.74061);
   hnueCCinFV_stack_13->SetBinContent(7,0.6540641);
   hnueCCinFV_stack_13->SetBinContent(8,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(9,0.4182166);
   hnueCCinFV_stack_13->SetBinContent(10,1.372419);
   hnueCCinFV_stack_13->SetBinContent(12,0.6454452);
   hnueCCinFV_stack_13->SetBinContent(14,0.7174736);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.8237921);
   hnueCCinFV_stack_13->SetBinError(1,3.096479);
   hnueCCinFV_stack_13->SetBinError(2,0.3788402);
   hnueCCinFV_stack_13->SetBinError(3,0.5347158);
   hnueCCinFV_stack_13->SetBinError(4,0.7137061);
   hnueCCinFV_stack_13->SetBinError(5,0.6329025);
   hnueCCinFV_stack_13->SetBinError(6,1.189702);
   hnueCCinFV_stack_13->SetBinError(7,0.3812133);
   hnueCCinFV_stack_13->SetBinError(8,0.4575996);
   hnueCCinFV_stack_13->SetBinError(9,0.293294);
   hnueCCinFV_stack_13->SetBinError(10,0.6626564);
   hnueCCinFV_stack_13->SetBinError(12,0.3756299);
   hnueCCinFV_stack_13->SetBinError(14,0.5566696);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.5035461);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__17->SetBinContent(1,1606.876);
   hmcerror__17->SetBinContent(2,244.8306);
   hmcerror__17->SetBinContent(3,231.4736);
   hmcerror__17->SetBinContent(4,209.633);
   hmcerror__17->SetBinContent(5,196.2993);
   hmcerror__17->SetBinContent(6,170.6256);
   hmcerror__17->SetBinContent(7,152.7219);
   hmcerror__17->SetBinContent(8,121.6923);
   hmcerror__17->SetBinContent(9,102.6691);
   hmcerror__17->SetBinContent(10,79.316);
   hmcerror__17->SetBinContent(11,85.50725);
   hmcerror__17->SetBinContent(12,64.88933);
   hmcerror__17->SetBinContent(13,57.70413);
   hmcerror__17->SetBinContent(14,47.18876);
   hmcerror__17->SetBinContent(15,42.79279);
   hmcerror__17->SetBinContent(16,29.70231);
   hmcerror__17->SetBinContent(17,24.08857);
   hmcerror__17->SetBinContent(18,25.37651);
   hmcerror__17->SetBinContent(19,20.0117);
   hmcerror__17->SetBinContent(20,18.75564);
   hmcerror__17->SetBinContent(21,16.22667);
   hmcerror__17->SetBinContent(22,12.21936);
   hmcerror__17->SetBinContent(23,10.28218);
   hmcerror__17->SetBinContent(24,5.546363);
   hmcerror__17->SetBinContent(25,106.5762);
   hmcerror__17->SetBinError(1,373.3774);
   hmcerror__17->SetBinError(2,70.10757);
   hmcerror__17->SetBinError(3,66.33152);
   hmcerror__17->SetBinError(4,56.82566);
   hmcerror__17->SetBinError(5,52.30901);
   hmcerror__17->SetBinError(6,49.70423);
   hmcerror__17->SetBinError(7,38.64765);
   hmcerror__17->SetBinError(8,33.60494);
   hmcerror__17->SetBinError(9,29.6523);
   hmcerror__17->SetBinError(10,29.27983);
   hmcerror__17->SetBinError(11,28.54269);
   hmcerror__17->SetBinError(12,25.66729);
   hmcerror__17->SetBinError(13,19.51581);
   hmcerror__17->SetBinError(14,16.94608);
   hmcerror__17->SetBinError(15,18.67793);
   hmcerror__17->SetBinError(16,13.19668);
   hmcerror__17->SetBinError(17,13.58405);
   hmcerror__17->SetBinError(18,13.41969);
   hmcerror__17->SetBinError(19,9.755006);
   hmcerror__17->SetBinError(20,10.15316);
   hmcerror__17->SetBinError(21,9.929784);
   hmcerror__17->SetBinError(22,8.059877);
   hmcerror__17->SetBinError(23,6.833525);
   hmcerror__17->SetBinError(24,4.24391);
   hmcerror__17->SetBinError(25,38.87869);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3021[24] = {
   1554,
   214,
   225,
   222,
   157,
   191,
   135,
   112,
   101,
   92,
   74,
   54,
   43,
   46,
   34,
   44,
   20,
   29,
   21,
   21,
   18,
   9,
   3,
   7};
   Double_t _felx3021[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3021[24] = {
   39.42081,
   14.62874,
   15,
   14.89966,
   12.52996,
   13.82027,
   11.61895,
   10.58301,
   10.04988,
   9.7138,
   8.7275,
   7.4785,
   6.6917,
   6.9153,
   5.9703,
   6.7671,
   4.6266,
   5.5285,
   4.7354,
   4.7354,
   4.4008,
   3.19354,
   2.143368,
   2.85954};
   Double_t _fehx3021[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3021[24] = {
   39.42081,
   14.62874,
   15,
   14.89966,
   12.52996,
   13.82027,
   11.61895,
   10.58301,
   10.04988,
   9.513,
   8.5253,
   7.275,
   6.4868,
   6.7108,
   5.7635,
   6.5623,
   4.4133,
   5.3201,
   4.5229,
   4.5229,
   4.1858,
   2.9582,
   1.72422,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,99);
   Graph_Graph3021->SetMinimum(0.7709688);
   Graph_Graph3021->SetMaximum(1752.677);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3426.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 73.9","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 272.1","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 39.6","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 326.4","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  88.5","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1489.1","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  291.4","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 487.8","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 253.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 211.3","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 30.6","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3022[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3022[24] = {
   0.2323622,
   0.2863514,
   0.286562,
   0.2710721,
   0.2664759,
   0.2913057,
   0.253059,
   0.2761469,
   0.2888141,
   0.3691542,
   0.3338043,
   0.3955549,
   0.3382048,
   0.3591127,
   0.4364737,
   0.4442981,
   0.5639209,
   0.5288232,
   0.4874651,
   0.5413393,
   0.6119423,
   0.6595989,
   0.6645988,
   0.7651699};
   Double_t _fehx3022[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3022[24] = {
   0.2323622,
   0.2863514,
   0.286562,
   0.2710721,
   0.2664759,
   0.2913057,
   0.253059,
   0.2761469,
   0.2888141,
   0.3691542,
   0.3338043,
   0.3955549,
   0.3382048,
   0.3591127,
   0.4364737,
   0.4442981,
   0.5639209,
   0.5288232,
   0.4874651,
   0.5413393,
   0.6119423,
   0.6595989,
   0.6645988,
   0.7651699};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,99);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3023[24] = {
   0.2207173,
   0.2327966,
   0.2313856,
   0.2320843,
   0.2308593,
   0.2278305,
   0.2137584,
   0.2305037,
   0.2306882,
   0.2309585,
   0.2289695,
   0.2141483,
   0.2234566,
   0.2115866,
   0.2497351,
   0.2640098,
   0.2393512,
   0.2396803,
   0.2416478,
   0.2508181,
   0.2854596,
   0.2490495,
   0.2826698,
   0.3347024};
   Double_t _fehx3023[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3023[24] = {
   0.2207173,
   0.2327966,
   0.2313856,
   0.2320843,
   0.2308593,
   0.2278305,
   0.2137584,
   0.2305037,
   0.2306882,
   0.2309585,
   0.2289695,
   0.2141483,
   0.2234566,
   0.2115866,
   0.2497351,
   0.2640098,
   0.2393512,
   0.2396803,
   0.2416478,
   0.2508181,
   0.2854596,
   0.2490495,
   0.2826698,
   0.3347024};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,99);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3024[24] = {
   0.9670938,
   0.8740739,
   0.9720332,
   1.058993,
   0.7997993,
   1.11941,
   0.8839598,
   0.9203543,
   0.9837426,
   1.159917,
   0.8654237,
   0.8321861,
   0.7451806,
   0.9748085,
   0.7945263,
   1.481366,
   0.8302694,
   1.142789,
   1.049386,
   1.119663,
   1.109285,
   0.736536,
   0.2917669,
   1.262088};
   Double_t _felx3024[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3024[24] = {
   0.02453257,
   0.05975046,
   0.06480221,
   0.07107499,
   0.06383093,
   0.08099764,
   0.07607915,
   0.08696531,
   0.09788605,
   0.1224696,
   0.1020674,
   0.1152501,
   0.1159657,
   0.1465455,
   0.1395165,
   0.2278308,
   0.1920662,
   0.217859,
   0.2366316,
   0.2524787,
   0.2712079,
   0.2613508,
   0.2084546,
   0.5155703};
   Double_t _fehx3024[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3024[24] = {
   0.02453257,
   0.05975046,
   0.06480221,
   0.07107499,
   0.06383093,
   0.08099764,
   0.07607915,
   0.08696531,
   0.09788605,
   0.119938,
   0.09970266,
   0.112114,
   0.1124148,
   0.1422118,
   0.1346839,
   0.2209357,
   0.1832114,
   0.2096466,
   0.2260128,
   0.2411488,
   0.2579581,
   0.2420912,
   0.1676901,
   0.4706742};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,99);
   Graph_Graph3024->SetMinimum(0.07498107);
   Graph_Graph3024->SetMaximum(1.897708);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,90,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

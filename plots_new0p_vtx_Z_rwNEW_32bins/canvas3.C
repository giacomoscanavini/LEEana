#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Mar 13 20:05:48 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
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
   pad1->Range(-169.2308,-1.86,1241.026,205.6768);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__7->SetBinContent(0,0.5884556);
   hmc__7->SetBinContent(1,67.07841);
   hmc__7->SetBinContent(2,57.23027);
   hmc__7->SetBinContent(3,54.7643);
   hmc__7->SetBinContent(4,59.20523);
   hmc__7->SetBinContent(5,49.0467);
   hmc__7->SetBinContent(6,52.31762);
   hmc__7->SetBinContent(7,56.5132);
   hmc__7->SetBinContent(8,68.69116);
   hmc__7->SetBinContent(9,58.15269);
   hmc__7->SetBinContent(10,45.65639);
   hmc__7->SetBinContent(11,52.45806);
   hmc__7->SetBinContent(12,45.71762);
   hmc__7->SetBinContent(13,46.97975);
   hmc__7->SetBinContent(14,49.25128);
   hmc__7->SetBinContent(15,51.10664);
   hmc__7->SetBinContent(16,50.84184);
   hmc__7->SetBinContent(17,42.09489);
   hmc__7->SetBinContent(18,40.02089);
   hmc__7->SetBinContent(19,46.06902);
   hmc__7->SetBinContent(20,51.71601);
   hmc__7->SetBinContent(21,81.64173);
   hmc__7->SetBinContent(22,58.44741);
   hmc__7->SetBinContent(23,47.72877);
   hmc__7->SetBinContent(24,47.35249);
   hmc__7->SetBinContent(25,47.09539);
   hmc__7->SetBinContent(26,45.39541);
   hmc__7->SetBinContent(27,49.42454);
   hmc__7->SetBinContent(28,50.51145);
   hmc__7->SetBinContent(29,75.98965);
   hmc__7->SetBinContent(30,83.3717);
   hmc__7->SetBinContent(31,2.334332);
   hmc__7->SetBinError(0,0.3397478);
   hmc__7->SetBinError(1,24.22642);
   hmc__7->SetBinError(2,18.38829);
   hmc__7->SetBinError(3,29.73736);
   hmc__7->SetBinError(4,17.87102);
   hmc__7->SetBinError(5,17.79396);
   hmc__7->SetBinError(6,15.48161);
   hmc__7->SetBinError(7,22.69237);
   hmc__7->SetBinError(8,23.81092);
   hmc__7->SetBinError(9,18.13353);
   hmc__7->SetBinError(10,16.16488);
   hmc__7->SetBinError(11,19.83553);
   hmc__7->SetBinError(12,14.40867);
   hmc__7->SetBinError(13,18.78198);
   hmc__7->SetBinError(14,17.32613);
   hmc__7->SetBinError(15,17.88046);
   hmc__7->SetBinError(16,18.30295);
   hmc__7->SetBinError(17,16.59221);
   hmc__7->SetBinError(18,22.87023);
   hmc__7->SetBinError(19,17.65669);
   hmc__7->SetBinError(20,17.5872);
   hmc__7->SetBinError(21,22.62456);
   hmc__7->SetBinError(22,24.48399);
   hmc__7->SetBinError(23,18.73641);
   hmc__7->SetBinError(24,19.58025);
   hmc__7->SetBinError(25,17.69146);
   hmc__7->SetBinError(26,17.97268);
   hmc__7->SetBinError(27,16.25581);
   hmc__7->SetBinError(28,15.92285);
   hmc__7->SetBinError(29,22.75537);
   hmc__7->SetBinError(30,25.0117);
   hmc__7->SetBinError(31,5.14174);
   hmc__7->SetBinError(32,0.3895343);
   hmc__7->SetBinError(33,0.3895343);
   hmc__7->SetMinimum(-1.86);
   hmc__7->SetMaximum(195.3);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",32,0,1100);
   hs3_stack_3->SetMinimum(-4.228303e-08);
   hs3_stack_3->SetMaximum(87.54028);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.123658);
   hbadmatch_stack_1->SetBinContent(2,2.730956);
   hbadmatch_stack_1->SetBinContent(3,2.511999);
   hbadmatch_stack_1->SetBinContent(4,2.9175);
   hbadmatch_stack_1->SetBinContent(5,1.39219);
   hbadmatch_stack_1->SetBinContent(6,1.642462);
   hbadmatch_stack_1->SetBinContent(7,2.069491);
   hbadmatch_stack_1->SetBinContent(8,3.205716);
   hbadmatch_stack_1->SetBinContent(9,2.326337);
   hbadmatch_stack_1->SetBinContent(10,1.308916);
   hbadmatch_stack_1->SetBinContent(11,1.595791);
   hbadmatch_stack_1->SetBinContent(12,1.519881);
   hbadmatch_stack_1->SetBinContent(13,1.610679);
   hbadmatch_stack_1->SetBinContent(14,3.0146);
   hbadmatch_stack_1->SetBinContent(15,2.00141);
   hbadmatch_stack_1->SetBinContent(16,1.664688);
   hbadmatch_stack_1->SetBinContent(17,1.127039);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,1.370613);
   hbadmatch_stack_1->SetBinContent(20,1.788795);
   hbadmatch_stack_1->SetBinContent(21,2.414546);
   hbadmatch_stack_1->SetBinContent(22,2.450815);
   hbadmatch_stack_1->SetBinContent(23,0.5901461);
   hbadmatch_stack_1->SetBinContent(24,1.971303);
   hbadmatch_stack_1->SetBinContent(25,1.978362);
   hbadmatch_stack_1->SetBinContent(26,1.358312);
   hbadmatch_stack_1->SetBinContent(27,1.933863);
   hbadmatch_stack_1->SetBinContent(28,0.779369);
   hbadmatch_stack_1->SetBinContent(29,2.047829);
   hbadmatch_stack_1->SetBinContent(30,2.887778);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.5188295);
   hbadmatch_stack_1->SetBinError(2,0.8550514);
   hbadmatch_stack_1->SetBinError(3,0.8774981);
   hbadmatch_stack_1->SetBinError(4,0.9092066);
   hbadmatch_stack_1->SetBinError(5,0.5818685);
   hbadmatch_stack_1->SetBinError(6,0.6476759);
   hbadmatch_stack_1->SetBinError(7,0.7554102);
   hbadmatch_stack_1->SetBinError(8,1.307886);
   hbadmatch_stack_1->SetBinError(9,0.8176962);
   hbadmatch_stack_1->SetBinError(10,0.5405611);
   hbadmatch_stack_1->SetBinError(11,0.6170877);
   hbadmatch_stack_1->SetBinError(12,0.6391116);
   hbadmatch_stack_1->SetBinError(13,0.6806271);
   hbadmatch_stack_1->SetBinError(14,0.9285705);
   hbadmatch_stack_1->SetBinError(15,0.761689);
   hbadmatch_stack_1->SetBinError(16,0.6981541);
   hbadmatch_stack_1->SetBinError(17,0.5201044);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.5746049);
   hbadmatch_stack_1->SetBinError(20,0.7521058);
   hbadmatch_stack_1->SetBinError(21,0.9185383);
   hbadmatch_stack_1->SetBinError(22,0.8004338);
   hbadmatch_stack_1->SetBinError(23,0.340721);
   hbadmatch_stack_1->SetBinError(24,0.7664929);
   hbadmatch_stack_1->SetBinError(25,0.7960968);
   hbadmatch_stack_1->SetBinError(26,0.569314);
   hbadmatch_stack_1->SetBinError(27,0.7037332);
   hbadmatch_stack_1->SetBinError(28,0.4619229);
   hbadmatch_stack_1->SetBinError(29,0.7482731);
   hbadmatch_stack_1->SetBinError(30,0.9852888);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,6.884593);
   hext_stack_2->SetBinContent(2,9.86483);
   hext_stack_2->SetBinContent(3,9.648584);
   hext_stack_2->SetBinContent(4,11.17401);
   hext_stack_2->SetBinContent(5,6.553016);
   hext_stack_2->SetBinContent(6,9.133833);
   hext_stack_2->SetBinContent(7,10.29461);
   hext_stack_2->SetBinContent(8,13.43484);
   hext_stack_2->SetBinContent(9,10.79777);
   hext_stack_2->SetBinContent(10,5.993603);
   hext_stack_2->SetBinContent(11,7.932806);
   hext_stack_2->SetBinContent(12,7.939987);
   hext_stack_2->SetBinContent(13,7.690611);
   hext_stack_2->SetBinContent(14,7.347444);
   hext_stack_2->SetBinContent(15,3.885587);
   hext_stack_2->SetBinContent(16,8.022189);
   hext_stack_2->SetBinContent(17,3.323403);
   hext_stack_2->SetBinContent(18,4.054399);
   hext_stack_2->SetBinContent(19,6.578966);
   hext_stack_2->SetBinContent(20,9.324187);
   hext_stack_2->SetBinContent(21,22.03521);
   hext_stack_2->SetBinContent(22,6.724599);
   hext_stack_2->SetBinContent(23,4.538791);
   hext_stack_2->SetBinContent(24,8.332225);
   hext_stack_2->SetBinContent(25,6.400202);
   hext_stack_2->SetBinContent(26,3.069618);
   hext_stack_2->SetBinContent(27,7.384983);
   hext_stack_2->SetBinContent(28,5.344809);
   hext_stack_2->SetBinContent(29,5.598593);
   hext_stack_2->SetBinContent(30,7.284012);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinError(1,1.675566);
   hext_stack_2->SetBinError(2,2.101979);
   hext_stack_2->SetBinError(3,1.976029);
   hext_stack_2->SetBinError(4,2.184759);
   hext_stack_2->SetBinError(5,1.703963);
   hext_stack_2->SetBinError(6,2.036605);
   hext_stack_2->SetBinError(7,2.109853);
   hext_stack_2->SetBinError(8,2.459133);
   hext_stack_2->SetBinError(9,2.067484);
   hext_stack_2->SetBinError(10,1.59747);
   hext_stack_2->SetBinError(11,1.839704);
   hext_stack_2->SetBinError(12,1.784183);
   hext_stack_2->SetBinError(13,1.827394);
   hext_stack_2->SetBinError(14,1.871207);
   hext_stack_2->SetBinError(15,1.209961);
   hext_stack_2->SetBinError(16,1.800944);
   hext_stack_2->SetBinError(17,1.20364);
   hext_stack_2->SetBinError(18,1.311223);
   hext_stack_2->SetBinError(19,1.560451);
   hext_stack_2->SetBinError(20,1.94922);
   hext_stack_2->SetBinError(21,3.061867);
   hext_stack_2->SetBinError(22,1.680019);
   hext_stack_2->SetBinError(23,1.345212);
   hext_stack_2->SetBinError(24,1.936759);
   hext_stack_2->SetBinError(25,1.648403);
   hext_stack_2->SetBinError(26,1.212305);
   hext_stack_2->SetBinError(27,1.722456);
   hext_stack_2->SetBinError(28,1.530177);
   hext_stack_2->SetBinError(29,1.523321);
   hext_stack_2->SetBinError(30,1.781585);
   hext_stack_2->SetBinError(31,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,3.18617);
   hdirt_stack_3->SetBinContent(2,1.097687);
   hdirt_stack_3->SetBinContent(3,1.939264);
   hdirt_stack_3->SetBinContent(4,0.6345888);
   hdirt_stack_3->SetBinContent(5,1.539088);
   hdirt_stack_3->SetBinContent(6,1.333462);
   hdirt_stack_3->SetBinContent(7,0.7563787);
   hdirt_stack_3->SetBinContent(8,1.896463);
   hdirt_stack_3->SetBinContent(9,1.094478);
   hdirt_stack_3->SetBinContent(10,0.5852764);
   hdirt_stack_3->SetBinContent(11,0.8750882);
   hdirt_stack_3->SetBinContent(12,1.124462);
   hdirt_stack_3->SetBinContent(13,0.63311);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,1.165545);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.6763744);
   hdirt_stack_3->SetBinContent(19,0.2256247);
   hdirt_stack_3->SetBinContent(21,1.493902);
   hdirt_stack_3->SetBinContent(22,0.2761429);
   hdirt_stack_3->SetBinContent(23,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.6951543);
   hdirt_stack_3->SetBinContent(27,0.2188956);
   hdirt_stack_3->SetBinContent(28,0.691244);
   hdirt_stack_3->SetBinContent(29,0.4762587);
   hdirt_stack_3->SetBinContent(30,0.2188956);
   hdirt_stack_3->SetBinError(1,0.9224794);
   hdirt_stack_3->SetBinError(2,0.546338);
   hdirt_stack_3->SetBinError(3,1.047812);
   hdirt_stack_3->SetBinError(4,0.398124);
   hdirt_stack_3->SetBinError(5,0.7185778);
   hdirt_stack_3->SetBinError(6,0.5839897);
   hdirt_stack_3->SetBinError(7,0.4758281);
   hdirt_stack_3->SetBinError(8,0.7617468);
   hdirt_stack_3->SetBinError(9,0.4894654);
   hdirt_stack_3->SetBinError(10,0.4188361);
   hdirt_stack_3->SetBinError(11,0.540832);
   hdirt_stack_3->SetBinError(12,0.5926468);
   hdirt_stack_3->SetBinError(13,0.3242013);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.6016336);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.4782689);
   hdirt_stack_3->SetBinError(19,0.218999);
   hdirt_stack_3->SetBinError(21,0.631155);
   hdirt_stack_3->SetBinError(22,0.1952625);
   hdirt_stack_3->SetBinError(23,0.2188956);
   hdirt_stack_3->SetBinError(26,0.4258516);
   hdirt_stack_3->SetBinError(27,0.2188956);
   hdirt_stack_3->SetBinError(28,0.5027721);
   hdirt_stack_3->SetBinError(29,0.3652866);
   hdirt_stack_3->SetBinError(30,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.3917402);
   houtFV_stack_4->SetBinContent(1,25.76678);
   houtFV_stack_4->SetBinContent(2,12.41613);
   houtFV_stack_4->SetBinContent(3,10.14414);
   houtFV_stack_4->SetBinContent(4,11.41219);
   houtFV_stack_4->SetBinContent(5,9.523274);
   houtFV_stack_4->SetBinContent(6,11.46496);
   houtFV_stack_4->SetBinContent(7,10.74494);
   houtFV_stack_4->SetBinContent(8,14.43975);
   houtFV_stack_4->SetBinContent(9,8.893305);
   houtFV_stack_4->SetBinContent(10,7.75996);
   houtFV_stack_4->SetBinContent(11,11.46936);
   houtFV_stack_4->SetBinContent(12,9.331432);
   houtFV_stack_4->SetBinContent(13,9.958235);
   houtFV_stack_4->SetBinContent(14,8.571465);
   houtFV_stack_4->SetBinContent(15,12.77066);
   houtFV_stack_4->SetBinContent(16,9.687515);
   houtFV_stack_4->SetBinContent(17,9.427856);
   houtFV_stack_4->SetBinContent(18,7.755302);
   houtFV_stack_4->SetBinContent(19,12.00551);
   houtFV_stack_4->SetBinContent(20,10.38104);
   houtFV_stack_4->SetBinContent(21,16.3376);
   houtFV_stack_4->SetBinContent(22,9.756783);
   houtFV_stack_4->SetBinContent(23,10.90514);
   houtFV_stack_4->SetBinContent(24,10.85721);
   houtFV_stack_4->SetBinContent(25,10.27306);
   houtFV_stack_4->SetBinContent(26,7.691974);
   houtFV_stack_4->SetBinContent(27,10.34826);
   houtFV_stack_4->SetBinContent(28,7.352468);
   houtFV_stack_4->SetBinContent(29,7.727216);
   houtFV_stack_4->SetBinContent(30,8.906225);
   houtFV_stack_4->SetBinContent(31,0.536893);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,2.63326);
   houtFV_stack_4->SetBinError(2,1.776079);
   houtFV_stack_4->SetBinError(3,1.566418);
   houtFV_stack_4->SetBinError(4,1.92248);
   houtFV_stack_4->SetBinError(5,1.538712);
   houtFV_stack_4->SetBinError(6,1.74125);
   houtFV_stack_4->SetBinError(7,1.611361);
   houtFV_stack_4->SetBinError(8,1.98297);
   houtFV_stack_4->SetBinError(9,1.448238);
   houtFV_stack_4->SetBinError(10,1.450062);
   houtFV_stack_4->SetBinError(11,1.657225);
   houtFV_stack_4->SetBinError(12,1.501581);
   houtFV_stack_4->SetBinError(13,1.59362);
   houtFV_stack_4->SetBinError(14,1.500882);
   houtFV_stack_4->SetBinError(15,1.7627);
   houtFV_stack_4->SetBinError(16,1.619717);
   houtFV_stack_4->SetBinError(17,1.520696);
   houtFV_stack_4->SetBinError(18,1.372133);
   houtFV_stack_4->SetBinError(19,1.792143);
   houtFV_stack_4->SetBinError(20,1.669642);
   houtFV_stack_4->SetBinError(21,2.06129);
   houtFV_stack_4->SetBinError(22,1.556402);
   houtFV_stack_4->SetBinError(23,2.001273);
   houtFV_stack_4->SetBinError(24,1.63822);
   houtFV_stack_4->SetBinError(25,1.539249);
   houtFV_stack_4->SetBinError(26,1.486003);
   houtFV_stack_4->SetBinError(27,1.573927);
   houtFV_stack_4->SetBinError(28,1.395808);
   houtFV_stack_4->SetBinError(29,1.345084);
   houtFV_stack_4->SetBinError(30,1.501882);
   houtFV_stack_4->SetBinError(31,0.3929602);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6143043);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7116223);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9484402);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.268958);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.198876);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.4314539);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.5719541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.7385219);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.599022);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.072658);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3397083);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3533731);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3718002);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3923435);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3984141);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1797343);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2970212);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2713408);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2640716);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3105792);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.336735);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.596802);
   hNCpi0inFVres_stack_7->SetBinContent(2,8.324362);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.646376);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.470832);
   hNCpi0inFVres_stack_7->SetBinContent(5,9.897059);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.268225);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.924384);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.702016);
   hNCpi0inFVres_stack_7->SetBinContent(9,9.18927);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.075006);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.882698);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.673948);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.055404);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.82193);
   hNCpi0inFVres_stack_7->SetBinContent(15,9.494506);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.207601);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.306007);
   hNCpi0inFVres_stack_7->SetBinContent(18,8.743861);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.636175);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.483384);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.783299);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.701184);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.121012);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.802967);
   hNCpi0inFVres_stack_7->SetBinContent(25,9.287252);
   hNCpi0inFVres_stack_7->SetBinContent(26,9.064548);
   hNCpi0inFVres_stack_7->SetBinContent(27,9.703592);
   hNCpi0inFVres_stack_7->SetBinContent(28,10.08041);
   hNCpi0inFVres_stack_7->SetBinContent(29,19.05147);
   hNCpi0inFVres_stack_7->SetBinContent(30,20.01966);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1394999);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9161879);
   hNCpi0inFVres_stack_7->SetBinError(2,0.922995);
   hNCpi0inFVres_stack_7->SetBinError(3,0.934554);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8091071);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9849415);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8859148);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9867515);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9933366);
   hNCpi0inFVres_stack_7->SetBinError(9,1.010237);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9627604);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9659222);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9763095);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8354557);
   hNCpi0inFVres_stack_7->SetBinError(14,1.112051);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9952934);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8369289);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8667431);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9568808);
   hNCpi0inFVres_stack_7->SetBinError(19,1.063631);
   hNCpi0inFVres_stack_7->SetBinError(20,1.020427);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9872768);
   hNCpi0inFVres_stack_7->SetBinError(22,0.983591);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9757777);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7572567);
   hNCpi0inFVres_stack_7->SetBinError(25,1.008244);
   hNCpi0inFVres_stack_7->SetBinError(26,0.9818747);
   hNCpi0inFVres_stack_7->SetBinError(27,1.017817);
   hNCpi0inFVres_stack_7->SetBinError(28,1.003472);
   hNCpi0inFVres_stack_7->SetBinError(29,1.461815);
   hNCpi0inFVres_stack_7->SetBinError(30,1.454653);
   hNCpi0inFVres_stack_7->SetBinError(31,0.06238626);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.106462);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.07773);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.924276);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.262988);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.379726);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.574194);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.04983);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.57569);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.314548);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.826294);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.394672);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.552198);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.901616);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.844648);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.520722);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.105462);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.18833);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.83087);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.477876);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.021762);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.593548);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.690034);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.369348);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.342448);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.007976);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.622112);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.32883);
   hNCpi0inFVdis_stack_8->SetBinContent(28,2.80413);
   hNCpi0inFVdis_stack_8->SetBinContent(29,4.965224);
   hNCpi0inFVdis_stack_8->SetBinContent(30,4.711964);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5249404);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5054877);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4230513);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6380565);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3711885);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3520846);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5047172);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3601903);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5185371);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4277784);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3434108);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.549099);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6082856);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5326072);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3839875);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4727974);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4545398);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6231407);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.408066);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4703213);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5259893);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.516594);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4673461);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5192871);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4258024);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5137611);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.5123705);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.5725221);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.7211913);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.7216858);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,10.02735);
   hCCpi0inFV_stack_10->SetBinContent(2,10.63005);
   hCCpi0inFV_stack_10->SetBinContent(3,10.62151);
   hCCpi0inFV_stack_10->SetBinContent(4,11.01432);
   hCCpi0inFV_stack_10->SetBinContent(5,10.88805);
   hCCpi0inFV_stack_10->SetBinContent(6,9.125179);
   hCCpi0inFV_stack_10->SetBinContent(7,8.43215);
   hCCpi0inFV_stack_10->SetBinContent(8,11.44006);
   hCCpi0inFV_stack_10->SetBinContent(9,10.63316);
   hCCpi0inFV_stack_10->SetBinContent(10,12.59032);
   hCCpi0inFV_stack_10->SetBinContent(11,10.09278);
   hCCpi0inFV_stack_10->SetBinContent(12,8.015831);
   hCCpi0inFV_stack_10->SetBinContent(13,9.032006);
   hCCpi0inFV_stack_10->SetBinContent(14,9.017072);
   hCCpi0inFV_stack_10->SetBinContent(15,11.58255);
   hCCpi0inFV_stack_10->SetBinContent(16,9.566494);
   hCCpi0inFV_stack_10->SetBinContent(17,8.937079);
   hCCpi0inFV_stack_10->SetBinContent(18,8.685475);
   hCCpi0inFV_stack_10->SetBinContent(19,8.670103);
   hCCpi0inFV_stack_10->SetBinContent(20,9.086236);
   hCCpi0inFV_stack_10->SetBinContent(21,11.53302);
   hCCpi0inFV_stack_10->SetBinContent(22,13.2849);
   hCCpi0inFV_stack_10->SetBinContent(23,9.7107);
   hCCpi0inFV_stack_10->SetBinContent(24,6.538695);
   hCCpi0inFV_stack_10->SetBinContent(25,9.136356);
   hCCpi0inFV_stack_10->SetBinContent(26,10.28889);
   hCCpi0inFV_stack_10->SetBinContent(27,9.541047);
   hCCpi0inFV_stack_10->SetBinContent(28,13.00425);
   hCCpi0inFV_stack_10->SetBinContent(29,17.48455);
   hCCpi0inFV_stack_10->SetBinContent(30,20.48573);
   hCCpi0inFV_stack_10->SetBinError(1,1.602461);
   hCCpi0inFV_stack_10->SetBinError(2,1.648161);
   hCCpi0inFV_stack_10->SetBinError(3,1.680753);
   hCCpi0inFV_stack_10->SetBinError(4,1.615776);
   hCCpi0inFV_stack_10->SetBinError(5,1.666778);
   hCCpi0inFV_stack_10->SetBinError(6,1.513594);
   hCCpi0inFV_stack_10->SetBinError(7,1.45365);
   hCCpi0inFV_stack_10->SetBinError(8,1.653235);
   hCCpi0inFV_stack_10->SetBinError(9,1.621937);
   hCCpi0inFV_stack_10->SetBinError(10,1.80948);
   hCCpi0inFV_stack_10->SetBinError(11,1.636321);
   hCCpi0inFV_stack_10->SetBinError(12,1.401414);
   hCCpi0inFV_stack_10->SetBinError(13,1.473625);
   hCCpi0inFV_stack_10->SetBinError(14,1.525911);
   hCCpi0inFV_stack_10->SetBinError(15,1.712539);
   hCCpi0inFV_stack_10->SetBinError(16,1.569361);
   hCCpi0inFV_stack_10->SetBinError(17,1.528387);
   hCCpi0inFV_stack_10->SetBinError(18,1.548331);
   hCCpi0inFV_stack_10->SetBinError(19,1.498326);
   hCCpi0inFV_stack_10->SetBinError(20,1.50714);
   hCCpi0inFV_stack_10->SetBinError(21,1.75698);
   hCCpi0inFV_stack_10->SetBinError(22,1.841898);
   hCCpi0inFV_stack_10->SetBinError(23,1.549778);
   hCCpi0inFV_stack_10->SetBinError(24,1.278608);
   hCCpi0inFV_stack_10->SetBinError(25,1.463721);
   hCCpi0inFV_stack_10->SetBinError(26,1.645647);
   hCCpi0inFV_stack_10->SetBinError(27,1.611685);
   hCCpi0inFV_stack_10->SetBinError(28,1.799282);
   hCCpi0inFV_stack_10->SetBinError(29,2.057079);
   hCCpi0inFV_stack_10->SetBinError(30,2.322104);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,1.858957);
   hNCinFV_stack_11->SetBinContent(2,2.39585);
   hNCinFV_stack_11->SetBinContent(3,2.681084);
   hNCinFV_stack_11->SetBinContent(4,1.713804);
   hNCinFV_stack_11->SetBinContent(5,1.713804);
   hNCinFV_stack_11->SetBinContent(6,1.65886);
   hNCinFV_stack_11->SetBinContent(7,2.344287);
   hNCinFV_stack_11->SetBinContent(8,1.370245);
   hNCinFV_stack_11->SetBinContent(9,1.65763);
   hNCinFV_stack_11->SetBinContent(10,1.072095);
   hNCinFV_stack_11->SetBinContent(11,2.877799);
   hNCinFV_stack_11->SetBinContent(12,0.7834804);
   hNCinFV_stack_11->SetBinContent(13,1.708733);
   hNCinFV_stack_11->SetBinContent(14,1.855576);
   hNCinFV_stack_11->SetBinContent(15,1.518779);
   hNCinFV_stack_11->SetBinContent(16,2.590875);
   hNCinFV_stack_11->SetBinContent(17,1.758605);
   hNCinFV_stack_11->SetBinContent(18,1.857266);
   hNCinFV_stack_11->SetBinContent(19,1.121968);
   hNCinFV_stack_11->SetBinContent(20,1.320373);
   hNCinFV_stack_11->SetBinContent(21,3.716223);
   hNCinFV_stack_11->SetBinContent(22,3.803051);
   hNCinFV_stack_11->SetBinContent(23,1.663932);
   hNCinFV_stack_11->SetBinContent(24,3.804742);
   hNCinFV_stack_11->SetBinContent(25,3.127768);
   hNCinFV_stack_11->SetBinContent(26,3.420846);
   hNCinFV_stack_11->SetBinContent(27,1.660551);
   hNCinFV_stack_11->SetBinContent(28,2.929362);
   hNCinFV_stack_11->SetBinContent(29,5.271958);
   hNCinFV_stack_11->SetBinContent(30,7.862833);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.6804124);
   hNCinFV_stack_11->SetBinError(2,0.7857345);
   hNCinFV_stack_11->SetBinError(3,0.8779318);
   hNCinFV_stack_11->SetBinError(4,0.6207051);
   hNCinFV_stack_11->SetBinError(5,0.6207051);
   hNCinFV_stack_11->SetBinError(6,0.650338);
   hNCinFV_stack_11->SetBinError(7,0.8101654);
   hNCinFV_stack_11->SetBinError(8,0.5179089);
   hNCinFV_stack_11->SetBinError(9,0.6822445);
   hNCinFV_stack_11->SetBinError(10,0.5551335);
   hNCinFV_stack_11->SetBinError(11,0.8997006);
   hNCinFV_stack_11->SetBinError(12,0.3917439);
   hNCinFV_stack_11->SetBinError(13,0.6191027);
   hNCinFV_stack_11->SetBinError(14,0.6794384);
   hNCinFV_stack_11->SetBinError(15,0.5892709);
   hNCinFV_stack_11->SetBinError(16,0.8095761);
   hNCinFV_stack_11->SetBinError(17,0.5862054);
   hNCinFV_stack_11->SetBinError(18,0.6799255);
   hNCinFV_stack_11->SetBinError(19,0.5181909);
   hNCinFV_stack_11->SetBinError(20,0.5548703);
   hNCinFV_stack_11->SetBinError(21,0.9619042);
   hNCinFV_stack_11->SetBinError(22,1.019454);
   hNCinFV_stack_11->SetBinError(23,0.6518637);
   hNCinFV_stack_11->SetBinError(24,1.019779);
   hNCinFV_stack_11->SetBinError(25,0.8999062);
   hNCinFV_stack_11->SetBinError(26,0.8762995);
   hNCinFV_stack_11->SetBinError(27,0.650847);
   hNCinFV_stack_11->SetBinError(28,0.8777653);
   hNCinFV_stack_11->SetBinError(29,1.194227);
   hNCinFV_stack_11->SetBinError(30,1.442772);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,8.277203);
   hnumuCCinFV_stack_12->SetBinContent(2,7.022565);
   hnumuCCinFV_stack_12->SetBinContent(3,6.229461);
   hnumuCCinFV_stack_12->SetBinContent(4,10.29795);
   hnumuCCinFV_stack_12->SetBinContent(5,5.546801);
   hnumuCCinFV_stack_12->SetBinContent(6,7.823827);
   hnumuCCinFV_stack_12->SetBinContent(7,9.850571);
   hnumuCCinFV_stack_12->SetBinContent(8,11.86753);
   hnumuCCinFV_stack_12->SetBinContent(9,10.68803);
   hnumuCCinFV_stack_12->SetBinContent(10,4.551199);
   hnumuCCinFV_stack_12->SetBinContent(11,6.834692);
   hnumuCCinFV_stack_12->SetBinContent(12,5.553198);
   hnumuCCinFV_stack_12->SetBinContent(13,5.389316);
   hnumuCCinFV_stack_12->SetBinContent(14,4.614532);
   hnumuCCinFV_stack_12->SetBinContent(15,6.135522);
   hnumuCCinFV_stack_12->SetBinContent(16,6.297725);
   hnumuCCinFV_stack_12->SetBinContent(17,6.719109);
   hnumuCCinFV_stack_12->SetBinContent(18,4.321304);
   hnumuCCinFV_stack_12->SetBinContent(19,4.643588);
   hnumuCCinFV_stack_12->SetBinContent(20,7.625424);
   hnumuCCinFV_stack_12->SetBinContent(21,9.87541);
   hnumuCCinFV_stack_12->SetBinContent(22,8.904407);
   hnumuCCinFV_stack_12->SetBinContent(23,7.933486);
   hnumuCCinFV_stack_12->SetBinContent(24,5.223883);
   hnumuCCinFV_stack_12->SetBinContent(25,3.749358);
   hnumuCCinFV_stack_12->SetBinContent(26,6.248724);
   hnumuCCinFV_stack_12->SetBinContent(27,5.074771);
   hnumuCCinFV_stack_12->SetBinContent(28,6.671968);
   hnumuCCinFV_stack_12->SetBinContent(29,10.34772);
   hnumuCCinFV_stack_12->SetBinContent(30,9.449748);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,1.892397);
   hnumuCCinFV_stack_12->SetBinError(2,1.86156);
   hnumuCCinFV_stack_12->SetBinError(3,1.51475);
   hnumuCCinFV_stack_12->SetBinError(4,1.689174);
   hnumuCCinFV_stack_12->SetBinError(5,1.418244);
   hnumuCCinFV_stack_12->SetBinError(6,1.518638);
   hnumuCCinFV_stack_12->SetBinError(7,2.654657);
   hnumuCCinFV_stack_12->SetBinError(8,2.582648);
   hnumuCCinFV_stack_12->SetBinError(9,1.873619);
   hnumuCCinFV_stack_12->SetBinError(10,1.069251);
   hnumuCCinFV_stack_12->SetBinError(11,1.338985);
   hnumuCCinFV_stack_12->SetBinError(12,1.239476);
   hnumuCCinFV_stack_12->SetBinError(13,1.25427);
   hnumuCCinFV_stack_12->SetBinError(14,1.055568);
   hnumuCCinFV_stack_12->SetBinError(15,1.24569);
   hnumuCCinFV_stack_12->SetBinError(16,1.477567);
   hnumuCCinFV_stack_12->SetBinError(17,1.463396);
   hnumuCCinFV_stack_12->SetBinError(18,1.065323);
   hnumuCCinFV_stack_12->SetBinError(19,1.116463);
   hnumuCCinFV_stack_12->SetBinError(20,1.77625);
   hnumuCCinFV_stack_12->SetBinError(21,1.629721);
   hnumuCCinFV_stack_12->SetBinError(22,1.632068);
   hnumuCCinFV_stack_12->SetBinError(23,1.738331);
   hnumuCCinFV_stack_12->SetBinError(24,1.175134);
   hnumuCCinFV_stack_12->SetBinError(25,1.028353);
   hnumuCCinFV_stack_12->SetBinError(26,1.320142);
   hnumuCCinFV_stack_12->SetBinError(27,1.16205);
   hnumuCCinFV_stack_12->SetBinError(28,1.34533);
   hnumuCCinFV_stack_12->SetBinError(29,1.885614);
   hnumuCCinFV_stack_12->SetBinError(30,1.574479);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,1.157431);
   hnueCCinFV_stack_13->SetBinContent(17,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(19,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.56212);
   hnueCCinFV_stack_13->SetBinContent(22,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(23,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(24,1.186408);
   hnueCCinFV_stack_13->SetBinContent(25,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.5749257);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(29,1.569686);
   hnueCCinFV_stack_13->SetBinContent(30,0.4992645);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.5475369);
   hnueCCinFV_stack_13->SetBinError(14,0.320043);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,1.157431);
   hnueCCinFV_stack_13->SetBinError(17,0.4972556);
   hnueCCinFV_stack_13->SetBinError(19,0.1711909);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.4149909);
   hnueCCinFV_stack_13->SetBinError(22,0.4494399);
   hnueCCinFV_stack_13->SetBinError(23,0.2179626);
   hnueCCinFV_stack_13->SetBinError(24,0.8065664);
   hnueCCinFV_stack_13->SetBinError(25,0.3921167);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3359115);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(29,1.569686);
   hnueCCinFV_stack_13->SetBinError(30,0.3608779);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__8->SetBinContent(0,0.5884556);
   hmcerror__8->SetBinContent(1,67.07841);
   hmcerror__8->SetBinContent(2,57.23027);
   hmcerror__8->SetBinContent(3,54.7643);
   hmcerror__8->SetBinContent(4,59.20523);
   hmcerror__8->SetBinContent(5,49.0467);
   hmcerror__8->SetBinContent(6,52.31762);
   hmcerror__8->SetBinContent(7,56.5132);
   hmcerror__8->SetBinContent(8,68.69116);
   hmcerror__8->SetBinContent(9,58.15269);
   hmcerror__8->SetBinContent(10,45.65639);
   hmcerror__8->SetBinContent(11,52.45806);
   hmcerror__8->SetBinContent(12,45.71762);
   hmcerror__8->SetBinContent(13,46.97975);
   hmcerror__8->SetBinContent(14,49.25128);
   hmcerror__8->SetBinContent(15,51.10664);
   hmcerror__8->SetBinContent(16,50.84184);
   hmcerror__8->SetBinContent(17,42.09489);
   hmcerror__8->SetBinContent(18,40.02089);
   hmcerror__8->SetBinContent(19,46.06902);
   hmcerror__8->SetBinContent(20,51.71601);
   hmcerror__8->SetBinContent(21,81.64173);
   hmcerror__8->SetBinContent(22,58.44741);
   hmcerror__8->SetBinContent(23,47.72877);
   hmcerror__8->SetBinContent(24,47.35249);
   hmcerror__8->SetBinContent(25,47.09539);
   hmcerror__8->SetBinContent(26,45.39541);
   hmcerror__8->SetBinContent(27,49.42454);
   hmcerror__8->SetBinContent(28,50.51145);
   hmcerror__8->SetBinContent(29,75.98965);
   hmcerror__8->SetBinContent(30,83.3717);
   hmcerror__8->SetBinContent(31,2.334332);
   hmcerror__8->SetBinError(0,0.3397478);
   hmcerror__8->SetBinError(1,24.22642);
   hmcerror__8->SetBinError(2,18.38829);
   hmcerror__8->SetBinError(3,29.73736);
   hmcerror__8->SetBinError(4,17.87102);
   hmcerror__8->SetBinError(5,17.79396);
   hmcerror__8->SetBinError(6,15.48161);
   hmcerror__8->SetBinError(7,22.69237);
   hmcerror__8->SetBinError(8,23.81092);
   hmcerror__8->SetBinError(9,18.13353);
   hmcerror__8->SetBinError(10,16.16488);
   hmcerror__8->SetBinError(11,19.83553);
   hmcerror__8->SetBinError(12,14.40867);
   hmcerror__8->SetBinError(13,18.78198);
   hmcerror__8->SetBinError(14,17.32613);
   hmcerror__8->SetBinError(15,17.88046);
   hmcerror__8->SetBinError(16,18.30295);
   hmcerror__8->SetBinError(17,16.59221);
   hmcerror__8->SetBinError(18,22.87023);
   hmcerror__8->SetBinError(19,17.65669);
   hmcerror__8->SetBinError(20,17.5872);
   hmcerror__8->SetBinError(21,22.62456);
   hmcerror__8->SetBinError(22,24.48399);
   hmcerror__8->SetBinError(23,18.73641);
   hmcerror__8->SetBinError(24,19.58025);
   hmcerror__8->SetBinError(25,17.69146);
   hmcerror__8->SetBinError(26,17.97268);
   hmcerror__8->SetBinError(27,16.25581);
   hmcerror__8->SetBinError(28,15.92285);
   hmcerror__8->SetBinError(29,22.75537);
   hmcerror__8->SetBinError(30,25.0117);
   hmcerror__8->SetBinError(31,5.14174);
   hmcerror__8->SetBinError(32,0.3895343);
   hmcerror__8->SetBinError(33,0.3895343);
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
   
   Double_t _fx3009[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3009[32] = {
   49,
   65,
   49,
   51,
   47,
   44,
   58,
   60,
   45,
   45,
   47,
   38,
   38,
   58,
   49,
   50,
   36,
   30,
   41,
   43,
   93,
   48,
   42,
   40,
   47,
   46,
   49,
   51,
   59,
   51,
   0,
   0};
   Double_t _felx3009[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3009[32] = {
   7.1318,
   8.1893,
   7.1318,
   7.2725,
   6.9882,
   6.7671,
   7.7446,
   7.8743,
   6.8416,
   6.8416,
   6.9882,
   6.3013,
   6.3013,
   7.7446,
   7.1318,
   7.2025,
   6.1381,
   5.6197,
   6.5384,
   6.6917,
   9.7658,
   7.0604,
   6.6155,
   6.4604,
   6.9882,
   6.9153,
   7.1318,
   7.2725,
   7.8097,
   7.2725,
   0,
   0};
   Double_t _fehx3009[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3009[32] = {
   6.9277,
   7.9866,
   6.9277,
   7.0686,
   6.7839,
   6.5623,
   7.5415,
   7.6713,
   6.637,
   6.637,
   6.7839,
   6.0955,
   6.0955,
   7.5415,
   6.9277,
   6.9985,
   5.9318,
   5.4117,
   6.3331,
   6.4868,
   9.564,
   6.8561,
   6.4104,
   6.2549,
   6.7839,
   6.7108,
   6.9277,
   7.0686,
   7.6066,
   7.0686,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1210);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(112.8204);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.3/32","");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 324.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3010[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3010[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3010[32] = {
   0.3611656,
   0.3213035,
   0.5430064,
   0.3018486,
   0.3627963,
   0.2959158,
   0.4015411,
   0.3466373,
   0.3118261,
   0.3540552,
   0.3781217,
   0.3151666,
   0.3997887,
   0.3517906,
   0.3498657,
   0.3599978,
   0.394162,
   0.5714574,
   0.3832661,
   0.3400727,
   0.2771201,
   0.4189064,
   0.3925601,
   0.4134999,
   0.3756517,
   0.3959141,
   0.3289016,
   0.3152326,
   0.2994535,
   0.3000023,
   2.20266,
   0};
   Double_t _fehx3010[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3010[32] = {
   0.3611656,
   0.3213035,
   0.5430064,
   0.3018486,
   0.3627963,
   0.2959158,
   0.4015411,
   0.3466373,
   0.3118261,
   0.3540552,
   0.3781217,
   0.3151666,
   0.3997887,
   0.3517906,
   0.3498657,
   0.3599978,
   0.394162,
   0.5714574,
   0.3832661,
   0.3400727,
   0.2771201,
   0.4189064,
   0.3925601,
   0.4134999,
   0.3756517,
   0.3959141,
   0.3289016,
   0.3152326,
   0.2994535,
   0.3000023,
   2.20266,
   0};
   grae = new TGraphAsymmErrors(32,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1210);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3011[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3011[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3011[32] = {
   0.1871738,
   0.1846628,
   0.1742789,
   0.1698578,
   0.1874777,
   0.172138,
   0.1751659,
   0.1783689,
   0.1687248,
   0.1976812,
   0.1827434,
   0.181829,
   0.1808794,
   0.1911578,
   0.2031274,
   0.2140469,
   0.2084542,
   0.198966,
   0.1930392,
   0.1879297,
   0.1559721,
   0.1907468,
   0.2047685,
   0.1828135,
   0.1876485,
   0.2157583,
   0.1944693,
   0.2051495,
   0.1987005,
   0.1915172,
   0.4272703,
   0};
   Double_t _fehx3011[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3011[32] = {
   0.1871738,
   0.1846628,
   0.1742789,
   0.1698578,
   0.1874777,
   0.172138,
   0.1751659,
   0.1783689,
   0.1687248,
   0.1976812,
   0.1827434,
   0.181829,
   0.1808794,
   0.1911578,
   0.2031274,
   0.2140469,
   0.2084542,
   0.198966,
   0.1930392,
   0.1879297,
   0.1559721,
   0.1907468,
   0.2047685,
   0.1828135,
   0.1876485,
   0.2157583,
   0.1944693,
   0.2051495,
   0.1987005,
   0.1915172,
   0.4272703,
   0};
   grae = new TGraphAsymmErrors(32,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1210);
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
   
   Double_t _fx3012[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3012[32] = {
   0.7304883,
   1.135763,
   0.8947435,
   0.8614104,
   0.9582703,
   0.8410169,
   1.026309,
   0.8734748,
   0.7738248,
   0.9856232,
   0.8959539,
   0.8311894,
   0.8088591,
   1.177634,
   0.9587796,
   0.983442,
   0.8552106,
   0.7496086,
   0.8899691,
   0.831464,
   1.139123,
   0.821251,
   0.8799724,
   0.8447285,
   0.9979745,
   1.013318,
   0.9914104,
   1.009672,
   0.7764215,
   0.6117183,
   0,
   10};
   Double_t _felx3012[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3012[32] = {
   0.1063203,
   0.1430939,
   0.1302272,
   0.1228354,
   0.1424805,
   0.1293465,
   0.1370405,
   0.1146334,
   0.1176489,
   0.1498498,
   0.133215,
   0.1378309,
   0.134128,
   0.1572467,
   0.1395474,
   0.1416648,
   0.1458158,
   0.1404192,
   0.1419262,
   0.1293932,
   0.1196177,
   0.1207992,
   0.1386061,
   0.1364321,
   0.1483839,
   0.1523348,
   0.1442967,
   0.1439773,
   0.1027732,
   0.08722984,
   0,
   0};
   Double_t _fehx3012[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3012[32] = {
   0.1032776,
   0.139552,
   0.1265003,
   0.1193915,
   0.1383151,
   0.1254319,
   0.1334467,
   0.1116781,
   0.1141306,
   0.1453685,
   0.1293205,
   0.1333293,
   0.1297474,
   0.1531229,
   0.1355538,
   0.1376524,
   0.140915,
   0.1352219,
   0.1374698,
   0.1254312,
   0.117146,
   0.1173037,
   0.1343089,
   0.1320923,
   0.1440459,
   0.1478299,
   0.1401672,
   0.1399406,
   0.1001005,
   0.08478416,
   0.4917038,
   0};
   grae = new TGraphAsymmErrors(32,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1210);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(11);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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

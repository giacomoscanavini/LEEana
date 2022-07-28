#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 11:12:00 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-4,3.957692,337.0526);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__1->SetBinContent(1,161.9999);
   hmc__1->SetBinContent(2,168.3013);
   hmc__1->SetBinContent(3,177.6096);
   hmc__1->SetBinContent(4,156.7509);
   hmc__1->SetBinContent(5,151.2558);
   hmc__1->SetBinContent(6,158.0309);
   hmc__1->SetBinContent(7,153.7915);
   hmc__1->SetBinContent(8,138.0277);
   hmc__1->SetBinContent(9,155.3123);
   hmc__1->SetBinContent(10,142.1368);
   hmc__1->SetBinContent(11,161.4723);
   hmc__1->SetBinContent(12,150.7187);
   hmc__1->SetBinContent(13,142.7735);
   hmc__1->SetBinContent(14,160.8045);
   hmc__1->SetBinContent(15,167.187);
   hmc__1->SetBinContent(16,157.3879);
   hmc__1->SetBinContent(17,163.6286);
   hmc__1->SetBinContent(18,163.6183);
   hmc__1->SetBinContent(19,159.2829);
   hmc__1->SetBinContent(20,165.6481);
   hmc__1->SetBinContent(21,170.0063);
   hmc__1->SetBinContent(22,171.3983);
   hmc__1->SetBinContent(23,171.4195);
   hmc__1->SetBinContent(24,152.4387);
   hmc__1->SetBinError(1,34.10879);
   hmc__1->SetBinError(2,37.11449);
   hmc__1->SetBinError(3,37.48183);
   hmc__1->SetBinError(4,33.56782);
   hmc__1->SetBinError(5,32.43556);
   hmc__1->SetBinError(6,28.26622);
   hmc__1->SetBinError(7,30.16233);
   hmc__1->SetBinError(8,29.89887);
   hmc__1->SetBinError(9,34.4647);
   hmc__1->SetBinError(10,29.96328);
   hmc__1->SetBinError(11,33.81818);
   hmc__1->SetBinError(12,32.29611);
   hmc__1->SetBinError(13,30.56705);
   hmc__1->SetBinError(14,33.79647);
   hmc__1->SetBinError(15,33.35898);
   hmc__1->SetBinError(16,32.25772);
   hmc__1->SetBinError(17,32.88557);
   hmc__1->SetBinError(18,29.88685);
   hmc__1->SetBinError(19,32.19862);
   hmc__1->SetBinError(20,32.30013);
   hmc__1->SetBinError(21,34.85372);
   hmc__1->SetBinError(22,36.16053);
   hmc__1->SetBinError(23,34.48653);
   hmc__1->SetBinError(24,30.71271);
   hmc__1->SetBinError(25,0.4212968);
   hmc__1->SetMinimum(-4);
   hmc__1->SetMaximum(320);
   hmc__1->SetEntries(3775.136);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,-3.15,3.15);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(186.4901);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.321102);
   hbadmatch_stack_1->SetBinContent(2,5.144114);
   hbadmatch_stack_1->SetBinContent(3,5.275639);
   hbadmatch_stack_1->SetBinContent(4,3.559564);
   hbadmatch_stack_1->SetBinContent(5,5.315773);
   hbadmatch_stack_1->SetBinContent(6,6.683067);
   hbadmatch_stack_1->SetBinContent(7,3.693877);
   hbadmatch_stack_1->SetBinContent(8,2.098894);
   hbadmatch_stack_1->SetBinContent(9,4.215271);
   hbadmatch_stack_1->SetBinContent(10,2.241282);
   hbadmatch_stack_1->SetBinContent(11,5.280784);
   hbadmatch_stack_1->SetBinContent(12,3.491841);
   hbadmatch_stack_1->SetBinContent(13,2.74133);
   hbadmatch_stack_1->SetBinContent(14,6.645653);
   hbadmatch_stack_1->SetBinContent(15,4.056444);
   hbadmatch_stack_1->SetBinContent(16,5.267495);
   hbadmatch_stack_1->SetBinContent(17,4.301432);
   hbadmatch_stack_1->SetBinContent(18,4.868875);
   hbadmatch_stack_1->SetBinContent(19,2.788391);
   hbadmatch_stack_1->SetBinContent(20,2.83614);
   hbadmatch_stack_1->SetBinContent(21,4.299639);
   hbadmatch_stack_1->SetBinContent(22,4.668189);
   hbadmatch_stack_1->SetBinContent(23,2.540516);
   hbadmatch_stack_1->SetBinContent(24,3.618051);
   hbadmatch_stack_1->SetBinError(1,0.9204367);
   hbadmatch_stack_1->SetBinError(2,1.212837);
   hbadmatch_stack_1->SetBinError(3,1.37332);
   hbadmatch_stack_1->SetBinError(4,0.9507504);
   hbadmatch_stack_1->SetBinError(5,1.264917);
   hbadmatch_stack_1->SetBinError(6,1.453226);
   hbadmatch_stack_1->SetBinError(7,1.087148);
   hbadmatch_stack_1->SetBinError(8,0.7841743);
   hbadmatch_stack_1->SetBinError(9,1.037863);
   hbadmatch_stack_1->SetBinError(10,0.7727796);
   hbadmatch_stack_1->SetBinError(11,1.195988);
   hbadmatch_stack_1->SetBinError(12,1.303523);
   hbadmatch_stack_1->SetBinError(13,0.8549025);
   hbadmatch_stack_1->SetBinError(14,2.495374);
   hbadmatch_stack_1->SetBinError(15,0.9818943);
   hbadmatch_stack_1->SetBinError(16,1.220346);
   hbadmatch_stack_1->SetBinError(17,1.151444);
   hbadmatch_stack_1->SetBinError(18,1.206349);
   hbadmatch_stack_1->SetBinError(19,0.8779537);
   hbadmatch_stack_1->SetBinError(20,0.8460129);
   hbadmatch_stack_1->SetBinError(21,1.162772);
   hbadmatch_stack_1->SetBinError(22,1.168466);
   hbadmatch_stack_1->SetBinError(23,0.7467368);
   hbadmatch_stack_1->SetBinError(24,0.9964618);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,15.71721);
   hext_stack_2->SetBinContent(2,12.3116);
   hext_stack_2->SetBinContent(3,18.25771);
   hext_stack_2->SetBinContent(4,17.49201);
   hext_stack_2->SetBinContent(5,18.39182);
   hext_stack_2->SetBinContent(6,30.64434);
   hext_stack_2->SetBinContent(7,22.91625);
   hext_stack_2->SetBinContent(8,14.53054);
   hext_stack_2->SetBinContent(9,19.45874);
   hext_stack_2->SetBinContent(10,14.84776);
   hext_stack_2->SetBinContent(11,17.60892);
   hext_stack_2->SetBinContent(12,10.35363);
   hext_stack_2->SetBinContent(13,11.00242);
   hext_stack_2->SetBinContent(14,13.71017);
   hext_stack_2->SetBinContent(15,23.67754);
   hext_stack_2->SetBinContent(16,25.85894);
   hext_stack_2->SetBinContent(17,26.29149);
   hext_stack_2->SetBinContent(18,32.97137);
   hext_stack_2->SetBinContent(19,26.56241);
   hext_stack_2->SetBinContent(20,29.5989);
   hext_stack_2->SetBinContent(21,22.66523);
   hext_stack_2->SetBinContent(22,26.36646);
   hext_stack_2->SetBinContent(23,15.05682);
   hext_stack_2->SetBinContent(24,11.15247);
   hext_stack_2->SetBinError(1,2.591889);
   hext_stack_2->SetBinError(2,2.282335);
   hext_stack_2->SetBinError(3,2.972044);
   hext_stack_2->SetBinError(4,2.72586);
   hext_stack_2->SetBinError(5,2.820669);
   hext_stack_2->SetBinError(6,3.781982);
   hext_stack_2->SetBinError(7,3.188757);
   hext_stack_2->SetBinError(8,2.356319);
   hext_stack_2->SetBinError(9,3.097789);
   hext_stack_2->SetBinError(10,2.42047);
   hext_stack_2->SetBinError(11,2.936423);
   hext_stack_2->SetBinError(12,2.154931);
   hext_stack_2->SetBinError(13,2.203224);
   hext_stack_2->SetBinError(14,2.328689);
   hext_stack_2->SetBinError(15,3.381683);
   hext_stack_2->SetBinError(16,3.509063);
   hext_stack_2->SetBinError(17,3.465598);
   hext_stack_2->SetBinError(18,3.945706);
   hext_stack_2->SetBinError(19,3.354207);
   hext_stack_2->SetBinError(20,3.659245);
   hext_stack_2->SetBinError(21,3.138914);
   hext_stack_2->SetBinError(22,3.688098);
   hext_stack_2->SetBinError(23,2.563884);
   hext_stack_2->SetBinError(24,2.318788);
   hext_stack_2->SetEntries(1136);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.9994908);
   hdirt_stack_3->SetBinContent(2,3.024076);
   hdirt_stack_3->SetBinContent(3,3.207319);
   hdirt_stack_3->SetBinContent(4,0.9382161);
   hdirt_stack_3->SetBinContent(5,2.668408);
   hdirt_stack_3->SetBinContent(6,3.0908);
   hdirt_stack_3->SetBinContent(7,1.752704);
   hdirt_stack_3->SetBinContent(8,1.566981);
   hdirt_stack_3->SetBinContent(9,2.936162);
   hdirt_stack_3->SetBinContent(10,1.911643);
   hdirt_stack_3->SetBinContent(11,1.466336);
   hdirt_stack_3->SetBinContent(12,2.017684);
   hdirt_stack_3->SetBinContent(13,1.995573);
   hdirt_stack_3->SetBinContent(14,1.58478);
   hdirt_stack_3->SetBinContent(15,3.174949);
   hdirt_stack_3->SetBinContent(16,2.886536);
   hdirt_stack_3->SetBinContent(17,3.841365);
   hdirt_stack_3->SetBinContent(18,2.431161);
   hdirt_stack_3->SetBinContent(19,3.872634);
   hdirt_stack_3->SetBinContent(20,2.676512);
   hdirt_stack_3->SetBinContent(21,2.552673);
   hdirt_stack_3->SetBinContent(22,2.664178);
   hdirt_stack_3->SetBinContent(23,2.513348);
   hdirt_stack_3->SetBinContent(24,1.279536);
   hdirt_stack_3->SetBinError(1,0.4823016);
   hdirt_stack_3->SetBinError(2,0.9213898);
   hdirt_stack_3->SetBinError(3,0.970489);
   hdirt_stack_3->SetBinError(4,0.4903352);
   hdirt_stack_3->SetBinError(5,0.8653079);
   hdirt_stack_3->SetBinError(6,0.9111215);
   hdirt_stack_3->SetBinError(7,0.685346);
   hdirt_stack_3->SetBinError(8,0.6016265);
   hdirt_stack_3->SetBinError(9,0.9664561);
   hdirt_stack_3->SetBinError(10,1.167646);
   hdirt_stack_3->SetBinError(11,0.5527385);
   hdirt_stack_3->SetBinError(12,0.7281174);
   hdirt_stack_3->SetBinError(13,0.663494);
   hdirt_stack_3->SetBinError(14,0.7330241);
   hdirt_stack_3->SetBinError(15,0.9399);
   hdirt_stack_3->SetBinError(16,0.8769047);
   hdirt_stack_3->SetBinError(17,1.124177);
   hdirt_stack_3->SetBinError(18,0.8005657);
   hdirt_stack_3->SetBinError(19,1.286336);
   hdirt_stack_3->SetBinError(20,0.8619835);
   hdirt_stack_3->SetBinError(21,0.7856719);
   hdirt_stack_3->SetBinError(22,0.8151239);
   hdirt_stack_3->SetBinError(23,0.8983334);
   hdirt_stack_3->SetBinError(24,0.5449904);
   hdirt_stack_3->SetEntries(238);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,24.03025);
   houtFV_stack_4->SetBinContent(2,22.87896);
   houtFV_stack_4->SetBinContent(3,23.47812);
   houtFV_stack_4->SetBinContent(4,23.87743);
   houtFV_stack_4->SetBinContent(5,19.23956);
   houtFV_stack_4->SetBinContent(6,18.21444);
   houtFV_stack_4->SetBinContent(7,22.61867);
   houtFV_stack_4->SetBinContent(8,18.24635);
   houtFV_stack_4->SetBinContent(9,22.69307);
   houtFV_stack_4->SetBinContent(10,20.76919);
   houtFV_stack_4->SetBinContent(11,22.91483);
   houtFV_stack_4->SetBinContent(12,22.8183);
   houtFV_stack_4->SetBinContent(13,21.53235);
   houtFV_stack_4->SetBinContent(14,20.03131);
   houtFV_stack_4->SetBinContent(15,16.81391);
   houtFV_stack_4->SetBinContent(16,17.69852);
   houtFV_stack_4->SetBinContent(17,22.13943);
   houtFV_stack_4->SetBinContent(18,17.82413);
   houtFV_stack_4->SetBinContent(19,20.76096);
   houtFV_stack_4->SetBinContent(20,18.66763);
   houtFV_stack_4->SetBinContent(21,21.94958);
   houtFV_stack_4->SetBinContent(22,21.09497);
   houtFV_stack_4->SetBinContent(23,24.87436);
   houtFV_stack_4->SetBinContent(24,20.69758);
   houtFV_stack_4->SetBinError(1,2.512112);
   houtFV_stack_4->SetBinError(2,2.296242);
   houtFV_stack_4->SetBinError(3,2.458688);
   houtFV_stack_4->SetBinError(4,2.472503);
   houtFV_stack_4->SetBinError(5,2.184273);
   houtFV_stack_4->SetBinError(6,2.174653);
   houtFV_stack_4->SetBinError(7,2.405257);
   houtFV_stack_4->SetBinError(8,2.110281);
   houtFV_stack_4->SetBinError(9,2.54785);
   houtFV_stack_4->SetBinError(10,2.321258);
   houtFV_stack_4->SetBinError(11,2.424779);
   houtFV_stack_4->SetBinError(12,2.345302);
   houtFV_stack_4->SetBinError(13,2.251929);
   houtFV_stack_4->SetBinError(14,2.313012);
   houtFV_stack_4->SetBinError(15,2.033598);
   houtFV_stack_4->SetBinError(16,2.151333);
   houtFV_stack_4->SetBinError(17,2.341912);
   houtFV_stack_4->SetBinError(18,2.114793);
   houtFV_stack_4->SetBinError(19,2.614268);
   houtFV_stack_4->SetBinError(20,2.173724);
   houtFV_stack_4->SetBinError(21,2.3309);
   houtFV_stack_4->SetBinError(22,2.305679);
   houtFV_stack_4->SetBinError(23,2.486179);
   houtFV_stack_4->SetBinError(24,2.273199);
   houtFV_stack_4->SetEntries(2163);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.431884);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.240568);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.934084);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.838678);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.305498);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.629096);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.710388);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.914066);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.432132);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.002006);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.797497);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.364378);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.987219);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.598452);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.090858);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.276934);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.544891);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.251778);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.854128);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.936996);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.665037);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.736783);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.574792);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.694938);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6461888);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7279057);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6569409);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7327026);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5679144);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7333222);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6867283);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5407059);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7026949);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6591588);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7710103);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.723616);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5852954);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6347947);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7995906);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5790001);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6611728);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.684457);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7843978);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7735302);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5369732);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5675141);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7361916);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6270318);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,66.67277);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,67.83878);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,73.29079);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,64.80381);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,64.41039);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,56.91933);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,62.69123);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,58.70062);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,58.93686);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,63.04663);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,65.51761);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,64.1676);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,58.05527);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,67.55315);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,66.85576);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,65.70592);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,62.709);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,62.21642);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,64.25147);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,62.62613);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,71.93896);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,72.20885);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,72.28088);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,63.32726);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.585117);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.663049);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.825087);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.574733);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.576735);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.333731);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.622203);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.492886);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.437755);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.61209);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.665034);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.625293);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.360759);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.686815);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.659928);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.639278);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.614362);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.572919);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.631969);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.617598);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.826418);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.85502);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.781945);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.550037);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_7->SetBinContent(1,27.38845);
   hCCpi0inFV_stack_7->SetBinContent(2,28.66337);
   hCCpi0inFV_stack_7->SetBinContent(3,30.49285);
   hCCpi0inFV_stack_7->SetBinContent(4,29.59454);
   hCCpi0inFV_stack_7->SetBinContent(5,24.08445);
   hCCpi0inFV_stack_7->SetBinContent(6,23.10318);
   hCCpi0inFV_stack_7->SetBinContent(7,24.28793);
   hCCpi0inFV_stack_7->SetBinContent(8,24.89907);
   hCCpi0inFV_stack_7->SetBinContent(9,27.14188);
   hCCpi0inFV_stack_7->SetBinContent(10,22.14884);
   hCCpi0inFV_stack_7->SetBinContent(11,26.14707);
   hCCpi0inFV_stack_7->SetBinContent(12,23.07054);
   hCCpi0inFV_stack_7->SetBinContent(13,27.10951);
   hCCpi0inFV_stack_7->SetBinContent(14,26.04822);
   hCCpi0inFV_stack_7->SetBinContent(15,25.54021);
   hCCpi0inFV_stack_7->SetBinContent(16,23.95958);
   hCCpi0inFV_stack_7->SetBinContent(17,25.49057);
   hCCpi0inFV_stack_7->SetBinContent(18,22.92106);
   hCCpi0inFV_stack_7->SetBinContent(19,23.77629);
   hCCpi0inFV_stack_7->SetBinContent(20,31.10145);
   hCCpi0inFV_stack_7->SetBinContent(21,29.57437);
   hCCpi0inFV_stack_7->SetBinContent(22,24.92963);
   hCCpi0inFV_stack_7->SetBinContent(23,29.90473);
   hCCpi0inFV_stack_7->SetBinContent(24,25.61927);
   hCCpi0inFV_stack_7->SetBinError(1,2.647273);
   hCCpi0inFV_stack_7->SetBinError(2,2.612142);
   hCCpi0inFV_stack_7->SetBinError(3,2.784685);
   hCCpi0inFV_stack_7->SetBinError(4,2.732668);
   hCCpi0inFV_stack_7->SetBinError(5,2.458772);
   hCCpi0inFV_stack_7->SetBinError(6,2.361577);
   hCCpi0inFV_stack_7->SetBinError(7,2.467166);
   hCCpi0inFV_stack_7->SetBinError(8,2.493746);
   hCCpi0inFV_stack_7->SetBinError(9,2.635827);
   hCCpi0inFV_stack_7->SetBinError(10,2.424727);
   hCCpi0inFV_stack_7->SetBinError(11,2.504882);
   hCCpi0inFV_stack_7->SetBinError(12,2.414093);
   hCCpi0inFV_stack_7->SetBinError(13,2.541697);
   hCCpi0inFV_stack_7->SetBinError(14,2.535982);
   hCCpi0inFV_stack_7->SetBinError(15,2.480145);
   hCCpi0inFV_stack_7->SetBinError(16,2.44455);
   hCCpi0inFV_stack_7->SetBinError(17,2.58175);
   hCCpi0inFV_stack_7->SetBinError(18,2.412468);
   hCCpi0inFV_stack_7->SetBinError(19,2.466834);
   hCCpi0inFV_stack_7->SetBinError(20,2.888925);
   hCCpi0inFV_stack_7->SetBinError(21,2.752793);
   hCCpi0inFV_stack_7->SetBinError(22,2.482742);
   hCCpi0inFV_stack_7->SetBinError(23,2.777427);
   hCCpi0inFV_stack_7->SetBinError(24,2.504213);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_8->SetBinContent(1,7.186942);
   hNCinFV_stack_8->SetBinContent(2,8.251192);
   hNCinFV_stack_8->SetBinContent(3,6.303717);
   hNCinFV_stack_8->SetBinContent(4,6.011721);
   hNCinFV_stack_8->SetBinContent(5,7.717681);
   hNCinFV_stack_8->SetBinContent(6,6.450561);
   hNCinFV_stack_8->SetBinContent(7,5.676615);
   hNCinFV_stack_8->SetBinContent(8,3.912939);
   hNCinFV_stack_8->SetBinContent(9,7.090579);
   hNCinFV_stack_8->SetBinContent(10,4.788319);
   hNCinFV_stack_8->SetBinContent(11,5.71188);
   hNCinFV_stack_8->SetBinContent(12,7.462641);
   hNCinFV_stack_8->SetBinContent(13,4.986725);
   hNCinFV_stack_8->SetBinContent(14,7.960887);
   hNCinFV_stack_8->SetBinContent(15,7.075972);
   hNCinFV_stack_8->SetBinContent(16,5.381846);
   hNCinFV_stack_8->SetBinContent(17,5.557193);
   hNCinFV_stack_8->SetBinContent(18,6.632669);
   hNCinFV_stack_8->SetBinContent(19,4.838191);
   hNCinFV_stack_8->SetBinContent(20,4.437998);
   hNCinFV_stack_8->SetBinContent(21,5.665514);
   hNCinFV_stack_8->SetBinContent(22,4.891444);
   hNCinFV_stack_8->SetBinContent(23,4.446451);
   hNCinFV_stack_8->SetBinContent(24,6.697148);
   hNCinFV_stack_8->SetBinError(1,1.285888);
   hNCinFV_stack_8->SetBinError(2,1.468672);
   hNCinFV_stack_8->SetBinError(3,1.256721);
   hNCinFV_stack_8->SetBinError(4,1.193027);
   hNCinFV_stack_8->SetBinError(5,1.415594);
   hNCinFV_stack_8->SetBinError(6,1.287516);
   hNCinFV_stack_8->SetBinError(7,1.144369);
   hNCinFV_stack_8->SetBinError(8,0.981813);
   hNCinFV_stack_8->SetBinError(9,1.316866);
   hNCinFV_stack_8->SetBinError(10,1.1106);
   hNCinFV_stack_8->SetBinError(11,1.209378);
   hNCinFV_stack_8->SetBinError(12,1.414761);
   hNCinFV_stack_8->SetBinError(13,1.128181);
   hNCinFV_stack_8->SetBinError(14,1.414788);
   hNCinFV_stack_8->SetBinError(15,1.388093);
   hNCinFV_stack_8->SetBinError(16,1.16226);
   hNCinFV_stack_8->SetBinError(17,1.256807);
   hNCinFV_stack_8->SetBinError(18,1.374431);
   hNCinFV_stack_8->SetBinError(19,1.092603);
   hNCinFV_stack_8->SetBinError(20,1.055338);
   hNCinFV_stack_8->SetBinError(21,1.168645);
   hNCinFV_stack_8->SetBinError(22,1.074921);
   hNCinFV_stack_8->SetBinError(23,1.056906);
   hNCinFV_stack_8->SetBinError(24,1.287145);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_9->SetBinContent(1,12.03203);
   hnumuCCinFV_stack_9->SetBinContent(2,11.56133);
   hnumuCCinFV_stack_9->SetBinContent(3,11.0154);
   hnumuCCinFV_stack_9->SetBinContent(4,4.69464);
   hnumuCCinFV_stack_9->SetBinContent(5,5.533897);
   hnumuCCinFV_stack_9->SetBinContent(6,7.847485);
   hnumuCCinFV_stack_9->SetBinContent(7,5.405136);
   hnumuCCinFV_stack_9->SetBinContent(8,10.51428);
   hnumuCCinFV_stack_9->SetBinContent(9,6.705108);
   hnumuCCinFV_stack_9->SetBinContent(10,6.694872);
   hnumuCCinFV_stack_9->SetBinContent(11,10.82515);
   hnumuCCinFV_stack_9->SetBinContent(12,11.72237);
   hnumuCCinFV_stack_9->SetBinContent(13,9.680614);
   hnumuCCinFV_stack_9->SetBinContent(14,11.78752);
   hnumuCCinFV_stack_9->SetBinContent(15,12.55871);
   hnumuCCinFV_stack_9->SetBinContent(16,6.855966);
   hnumuCCinFV_stack_9->SetBinContent(17,7.25393);
   hnumuCCinFV_stack_9->SetBinContent(18,7.015156);
   hnumuCCinFV_stack_9->SetBinContent(19,7.381448);
   hnumuCCinFV_stack_9->SetBinContent(20,6.599603);
   hnumuCCinFV_stack_9->SetBinContent(21,6.453434);
   hnumuCCinFV_stack_9->SetBinContent(22,9.944292);
   hnumuCCinFV_stack_9->SetBinContent(23,14.08056);
   hnumuCCinFV_stack_9->SetBinContent(24,15.02082);
   hnumuCCinFV_stack_9->SetBinError(1,2.055067);
   hnumuCCinFV_stack_9->SetBinError(2,1.951152);
   hnumuCCinFV_stack_9->SetBinError(3,1.712591);
   hnumuCCinFV_stack_9->SetBinError(4,1.048408);
   hnumuCCinFV_stack_9->SetBinError(5,1.219924);
   hnumuCCinFV_stack_9->SetBinError(6,1.938948);
   hnumuCCinFV_stack_9->SetBinError(7,1.162718);
   hnumuCCinFV_stack_9->SetBinError(8,2.568739);
   hnumuCCinFV_stack_9->SetBinError(9,1.442675);
   hnumuCCinFV_stack_9->SetBinError(10,1.340347);
   hnumuCCinFV_stack_9->SetBinError(11,1.756611);
   hnumuCCinFV_stack_9->SetBinError(12,2.31822);
   hnumuCCinFV_stack_9->SetBinError(13,1.639576);
   hnumuCCinFV_stack_9->SetBinError(14,2.285098);
   hnumuCCinFV_stack_9->SetBinError(15,2.825093);
   hnumuCCinFV_stack_9->SetBinError(16,1.344372);
   hnumuCCinFV_stack_9->SetBinError(17,1.363154);
   hnumuCCinFV_stack_9->SetBinError(18,1.551579);
   hnumuCCinFV_stack_9->SetBinError(19,1.427391);
   hnumuCCinFV_stack_9->SetBinError(20,1.561307);
   hnumuCCinFV_stack_9->SetBinError(21,1.736365);
   hnumuCCinFV_stack_9->SetBinError(22,1.623313);
   hnumuCCinFV_stack_9->SetBinError(23,2.29094);
   hnumuCCinFV_stack_9->SetBinError(24,2.01094);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_10->SetBinContent(1,1.21975);
   hnueCCinFV_stack_10->SetBinContent(2,3.387337);
   hnueCCinFV_stack_10->SetBinContent(3,2.35399);
   hnueCCinFV_stack_10->SetBinContent(4,0.9403464);
   hnueCCinFV_stack_10->SetBinContent(5,0.5882818);
   hnueCCinFV_stack_10->SetBinContent(6,0.4485508);
   hnueCCinFV_stack_10->SetBinContent(7,1.03868);
   hnueCCinFV_stack_10->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_10->SetBinContent(9,1.702514);
   hnueCCinFV_stack_10->SetBinContent(10,1.686273);
   hnueCCinFV_stack_10->SetBinContent(11,1.20221);
   hnueCCinFV_stack_10->SetBinContent(12,1.249757);
   hnueCCinFV_stack_10->SetBinContent(13,1.682472);
   hnueCCinFV_stack_10->SetBinContent(14,1.88436);
   hnueCCinFV_stack_10->SetBinContent(15,1.34267);
   hnueCCinFV_stack_10->SetBinContent(16,0.4961241);
   hnueCCinFV_stack_10->SetBinContent(17,1.499247);
   hnueCCinFV_stack_10->SetBinContent(18,2.485668);
   hnueCCinFV_stack_10->SetBinContent(19,0.1969809);
   hnueCCinFV_stack_10->SetBinContent(20,2.166725);
   hnueCCinFV_stack_10->SetBinContent(21,1.241827);
   hnueCCinFV_stack_10->SetBinContent(22,0.89349);
   hnueCCinFV_stack_10->SetBinContent(23,1.147058);
   hnueCCinFV_stack_10->SetBinContent(24,1.331603);
   hnueCCinFV_stack_10->SetBinError(1,0.5542831);
   hnueCCinFV_stack_10->SetBinError(2,1.699132);
   hnueCCinFV_stack_10->SetBinError(3,0.8436993);
   hnueCCinFV_stack_10->SetBinError(4,0.5554396);
   hnueCCinFV_stack_10->SetBinError(5,0.4266349);
   hnueCCinFV_stack_10->SetBinError(6,0.3195591);
   hnueCCinFV_stack_10->SetBinError(7,0.6373443);
   hnueCCinFV_stack_10->SetBinError(8,0.372493);
   hnueCCinFV_stack_10->SetBinError(9,0.794498);
   hnueCCinFV_stack_10->SetBinError(10,0.9873555);
   hnueCCinFV_stack_10->SetBinError(11,0.4912892);
   hnueCCinFV_stack_10->SetBinError(12,0.512311);
   hnueCCinFV_stack_10->SetBinError(13,0.8288952);
   hnueCCinFV_stack_10->SetBinError(14,0.8196103);
   hnueCCinFV_stack_10->SetBinError(15,0.5558831);
   hnueCCinFV_stack_10->SetBinError(16,0.3533858);
   hnueCCinFV_stack_10->SetBinError(17,0.6249211);
   hnueCCinFV_stack_10->SetBinError(18,1.418513);
   hnueCCinFV_stack_10->SetBinError(19,0.1967155);
   hnueCCinFV_stack_10->SetBinError(20,1.230297);
   hnueCCinFV_stack_10->SetBinError(21,0.6190489);
   hnueCCinFV_stack_10->SetBinError(22,0.5311548);
   hnueCCinFV_stack_10->SetBinError(23,0.6969692);
   hnueCCinFV_stack_10->SetBinError(24,0.8171275);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__2->SetBinContent(1,161.9999);
   hmcerror__2->SetBinContent(2,168.3013);
   hmcerror__2->SetBinContent(3,177.6096);
   hmcerror__2->SetBinContent(4,156.7509);
   hmcerror__2->SetBinContent(5,151.2558);
   hmcerror__2->SetBinContent(6,158.0309);
   hmcerror__2->SetBinContent(7,153.7915);
   hmcerror__2->SetBinContent(8,138.0277);
   hmcerror__2->SetBinContent(9,155.3123);
   hmcerror__2->SetBinContent(10,142.1368);
   hmcerror__2->SetBinContent(11,161.4723);
   hmcerror__2->SetBinContent(12,150.7187);
   hmcerror__2->SetBinContent(13,142.7735);
   hmcerror__2->SetBinContent(14,160.8045);
   hmcerror__2->SetBinContent(15,167.187);
   hmcerror__2->SetBinContent(16,157.3879);
   hmcerror__2->SetBinContent(17,163.6286);
   hmcerror__2->SetBinContent(18,163.6183);
   hmcerror__2->SetBinContent(19,159.2829);
   hmcerror__2->SetBinContent(20,165.6481);
   hmcerror__2->SetBinContent(21,170.0063);
   hmcerror__2->SetBinContent(22,171.3983);
   hmcerror__2->SetBinContent(23,171.4195);
   hmcerror__2->SetBinContent(24,152.4387);
   hmcerror__2->SetBinError(1,34.10879);
   hmcerror__2->SetBinError(2,37.11449);
   hmcerror__2->SetBinError(3,37.48183);
   hmcerror__2->SetBinError(4,33.56782);
   hmcerror__2->SetBinError(5,32.43556);
   hmcerror__2->SetBinError(6,28.26622);
   hmcerror__2->SetBinError(7,30.16233);
   hmcerror__2->SetBinError(8,29.89887);
   hmcerror__2->SetBinError(9,34.4647);
   hmcerror__2->SetBinError(10,29.96328);
   hmcerror__2->SetBinError(11,33.81818);
   hmcerror__2->SetBinError(12,32.29611);
   hmcerror__2->SetBinError(13,30.56705);
   hmcerror__2->SetBinError(14,33.79647);
   hmcerror__2->SetBinError(15,33.35898);
   hmcerror__2->SetBinError(16,32.25772);
   hmcerror__2->SetBinError(17,32.88557);
   hmcerror__2->SetBinError(18,29.88685);
   hmcerror__2->SetBinError(19,32.19862);
   hmcerror__2->SetBinError(20,32.30013);
   hmcerror__2->SetBinError(21,34.85372);
   hmcerror__2->SetBinError(22,36.16053);
   hmcerror__2->SetBinError(23,34.48653);
   hmcerror__2->SetBinError(24,30.71271);
   hmcerror__2->SetBinError(25,0.4212968);
   hmcerror__2->SetEntries(3775.136);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3001[24] = {
   160,
   182,
   148,
   200,
   169,
   157,
   153,
   136,
   132,
   162,
   150,
   130,
   159,
   159,
   173,
   150,
   173,
   142,
   163,
   161,
   180,
   169,
   167,
   148};
   Double_t _felx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3001[24] = {
   12.64911,
   13.49074,
   12.16553,
   14.14214,
   13,
   12.52996,
   12.36932,
   11.6619,
   11.48913,
   12.72792,
   12.24745,
   11.40175,
   12.60952,
   12.60952,
   13.15295,
   12.24745,
   13.15295,
   11.91638,
   12.76715,
   12.68858,
   13.41641,
   13,
   12.92285,
   12.16553};
   Double_t _fehx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3001[24] = {
   12.64911,
   13.49074,
   12.16553,
   14.14214,
   13,
   12.52996,
   12.36932,
   11.6619,
   11.48913,
   12.72792,
   12.24745,
   11.40175,
   12.60952,
   12.60952,
   13.15295,
   12.24745,
   13.15295,
   11.91638,
   12.76715,
   12.68858,
   13.41641,
   13,
   12.92285,
   12.16553};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(109.0439);
   Graph_Graph3001->SetMaximum(223.6965);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 627.0","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 145.1","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3002[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3002[24] = {
   0.2105482,
   0.220524,
   0.2110349,
   0.2141475,
   0.2144418,
   0.1788652,
   0.1961249,
   0.216615,
   0.2219058,
   0.2108059,
   0.2094364,
   0.2142807,
   0.2140947,
   0.2101712,
   0.1995309,
   0.2049568,
   0.2009769,
   0.182662,
   0.2021474,
   0.1949925,
   0.2050144,
   0.2109737,
   0.2011821,
   0.2014758};
   Double_t _fehx3002[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3002[24] = {
   0.2105482,
   0.220524,
   0.2110349,
   0.2141475,
   0.2144418,
   0.1788652,
   0.1961249,
   0.216615,
   0.2219058,
   0.2108059,
   0.2094364,
   0.2142807,
   0.2140947,
   0.2101712,
   0.1995309,
   0.2049568,
   0.2009769,
   0.182662,
   0.2021474,
   0.1949925,
   0.2050144,
   0.2109737,
   0.2011821,
   0.2014758};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} #phi [degree]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3003[24] = {
   0.1886658,
   0.1952988,
   0.1929811,
   0.1913318,
   0.1900984,
   0.1678463,
   0.1773773,
   0.1984116,
   0.1886772,
   0.1912697,
   0.190882,
   0.1899062,
   0.192579,
   0.1910704,
   0.1847138,
   0.1828453,
   0.1807909,
   0.167767,
   0.1769716,
   0.1791036,
   0.1899337,
   0.1846914,
   0.1853264,
   0.1867318};
   Double_t _fehx3003[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3003[24] = {
   0.1886658,
   0.1952988,
   0.1929811,
   0.1913318,
   0.1900984,
   0.1678463,
   0.1773773,
   0.1984116,
   0.1886772,
   0.1912697,
   0.190882,
   0.1899062,
   0.192579,
   0.1910704,
   0.1847138,
   0.1828453,
   0.1807909,
   0.167767,
   0.1769716,
   0.1791036,
   0.1899337,
   0.1846914,
   0.1853264,
   0.1867318};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3004[24] = {
   0.987655,
   1.081394,
   0.8332882,
   1.275909,
   1.117313,
   0.9934769,
   0.9948536,
   0.9853096,
   0.8499004,
   1.139747,
   0.928952,
   0.8625338,
   1.113652,
   0.9887784,
   1.034769,
   0.9530594,
   1.057273,
   0.8678736,
   1.023336,
   0.9719399,
   1.058785,
   0.9860075,
   0.9742181,
   0.9708822};
   Double_t _felx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3004[24] = {
   0.07808098,
   0.08015823,
   0.06849587,
   0.09022042,
   0.08594714,
   0.07928809,
   0.08042915,
   0.0844896,
   0.07397433,
   0.08954698,
   0.07584861,
   0.07564922,
   0.08831835,
   0.07841523,
   0.07867205,
   0.07781698,
   0.08038295,
   0.07283033,
   0.0801539,
   0.0765996,
   0.07891714,
   0.07584673,
   0.07538726,
   0.07980603};
   Double_t _fehx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3004[24] = {
   0.07808098,
   0.08015823,
   0.06849587,
   0.09022042,
   0.08594714,
   0.07928809,
   0.08042915,
   0.0844896,
   0.07397433,
   0.08954698,
   0.07584861,
   0.07564922,
   0.08831835,
   0.07841523,
   0.07867205,
   0.07781698,
   0.08038295,
   0.07283033,
   0.0801539,
   0.0765996,
   0.07891714,
   0.07584673,
   0.07538726,
   0.07980603};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.7046586);
   Graph_Graph3004->SetMaximum(1.426264);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

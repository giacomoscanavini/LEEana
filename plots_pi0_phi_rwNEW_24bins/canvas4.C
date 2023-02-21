#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 21:59:21 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-4,3.957692,442.3158);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__10->SetBinContent(1,165.6595);
   hmc__10->SetBinContent(2,171.6757);
   hmc__10->SetBinContent(3,183.7603);
   hmc__10->SetBinContent(4,159.8804);
   hmc__10->SetBinContent(5,155.1653);
   hmc__10->SetBinContent(6,160.6183);
   hmc__10->SetBinContent(7,156.8257);
   hmc__10->SetBinContent(8,142.5257);
   hmc__10->SetBinContent(9,159.172);
   hmc__10->SetBinContent(10,144.9227);
   hmc__10->SetBinContent(11,165.1834);
   hmc__10->SetBinContent(12,155.1669);
   hmc__10->SetBinContent(13,146.4348);
   hmc__10->SetBinContent(14,163.6403);
   hmc__10->SetBinContent(15,171.0983);
   hmc__10->SetBinContent(16,160.5621);
   hmc__10->SetBinContent(17,166.6515);
   hmc__10->SetBinContent(18,167.3294);
   hmc__10->SetBinContent(19,162.9425);
   hmc__10->SetBinContent(20,168.5371);
   hmc__10->SetBinContent(21,173.6659);
   hmc__10->SetBinContent(22,175.9479);
   hmc__10->SetBinContent(23,177.4149);
   hmc__10->SetBinContent(24,155.3243);
   hmc__10->SetBinError(1,43.81607);
   hmc__10->SetBinError(2,44.63421);
   hmc__10->SetBinError(3,48.50206);
   hmc__10->SetBinError(4,39.76728);
   hmc__10->SetBinError(5,41.43911);
   hmc__10->SetBinError(6,37.74375);
   hmc__10->SetBinError(7,40.15894);
   hmc__10->SetBinError(8,38.32337);
   hmc__10->SetBinError(9,46.44883);
   hmc__10->SetBinError(10,37.43204);
   hmc__10->SetBinError(11,61.33411);
   hmc__10->SetBinError(12,41.74155);
   hmc__10->SetBinError(13,43.9422);
   hmc__10->SetBinError(14,40.4748);
   hmc__10->SetBinError(15,40.25233);
   hmc__10->SetBinError(16,43.50695);
   hmc__10->SetBinError(17,40.97486);
   hmc__10->SetBinError(18,39.32156);
   hmc__10->SetBinError(19,41.88409);
   hmc__10->SetBinError(20,40.06165);
   hmc__10->SetBinError(21,44.07465);
   hmc__10->SetBinError(22,48.36935);
   hmc__10->SetBinError(23,46.43677);
   hmc__10->SetBinError(24,46.79996);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-4);
   hmc__10->SetMaximum(420);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,-3.15,3.15);
   hs4_stack_4->SetMinimum(-3.646956e-09);
   hs4_stack_4->SetMaximum(192.9483);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
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
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
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

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
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

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
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

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
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

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.87819);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3320795);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06834073);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,55.68827);
   hNCpi0inFVres_stack_7->SetBinContent(2,55.14605);
   hNCpi0inFVres_stack_7->SetBinContent(3,61.24425);
   hNCpi0inFVres_stack_7->SetBinContent(4,53.78676);
   hNCpi0inFVres_stack_7->SetBinContent(5,54.84464);
   hNCpi0inFVres_stack_7->SetBinContent(6,48.90088);
   hNCpi0inFVres_stack_7->SetBinContent(7,52.24796);
   hNCpi0inFVres_stack_7->SetBinContent(8,47.90776);
   hNCpi0inFVres_stack_7->SetBinContent(9,48.77425);
   hNCpi0inFVres_stack_7->SetBinContent(10,51.09308);
   hNCpi0inFVres_stack_7->SetBinContent(11,54.20942);
   hNCpi0inFVres_stack_7->SetBinContent(12,53.54148);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.11603);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.26796);
   hNCpi0inFVres_stack_7->SetBinContent(15,56.13614);
   hNCpi0inFVres_stack_7->SetBinContent(16,54.20361);
   hNCpi0inFVres_stack_7->SetBinContent(17,50.72888);
   hNCpi0inFVres_stack_7->SetBinContent(18,51.7464);
   hNCpi0inFVres_stack_7->SetBinContent(19,55.13428);
   hNCpi0inFVres_stack_7->SetBinContent(20,51.11932);
   hNCpi0inFVres_stack_7->SetBinContent(21,59.61359);
   hNCpi0inFVres_stack_7->SetBinContent(22,59.71607);
   hNCpi0inFVres_stack_7->SetBinContent(23,60.19499);
   hNCpi0inFVres_stack_7->SetBinContent(24,52.38161);
   hNCpi0inFVres_stack_7->SetBinError(1,2.380939);
   hNCpi0inFVres_stack_7->SetBinError(2,2.377544);
   hNCpi0inFVres_stack_7->SetBinError(3,2.592635);
   hNCpi0inFVres_stack_7->SetBinError(4,2.358905);
   hNCpi0inFVres_stack_7->SetBinError(5,2.390293);
   hNCpi0inFVres_stack_7->SetBinError(6,2.166898);
   hNCpi0inFVres_stack_7->SetBinError(7,2.413735);
   hNCpi0inFVres_stack_7->SetBinError(8,2.250197);
   hNCpi0inFVres_stack_7->SetBinError(9,2.222416);
   hNCpi0inFVres_stack_7->SetBinError(10,2.333246);
   hNCpi0inFVres_stack_7->SetBinError(11,2.425677);
   hNCpi0inFVres_stack_7->SetBinError(12,2.39984);
   hNCpi0inFVres_stack_7->SetBinError(13,2.146778);
   hNCpi0inFVres_stack_7->SetBinError(14,2.423831);
   hNCpi0inFVres_stack_7->SetBinError(15,2.442055);
   hNCpi0inFVres_stack_7->SetBinError(16,2.413842);
   hNCpi0inFVres_stack_7->SetBinError(17,2.329838);
   hNCpi0inFVres_stack_7->SetBinError(18,2.347244);
   hNCpi0inFVres_stack_7->SetBinError(19,2.4507);
   hNCpi0inFVres_stack_7->SetBinError(20,2.356016);
   hNCpi0inFVres_stack_7->SetBinError(21,2.570939);
   hNCpi0inFVres_stack_7->SetBinError(22,2.601452);
   hNCpi0inFVres_stack_7->SetBinError(23,2.542484);
   hNCpi0inFVres_stack_7->SetBinError(24,2.325099);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.7613);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.967);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.76737);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.71015);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.896643);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.502467);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.13621);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.68126);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.96731);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.73035);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.42999);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.19384);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.423255);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.13207);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.03606);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.16818);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.7154);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.00983);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.558851);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.14394);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.07411);
   hNCpi0inFVdis_stack_8->SetBinContent(22,12.13074);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.79328);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.72244);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.003859);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.163338);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.104);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.027743);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9279713);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8348342);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.004247);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.071439);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9990337);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.171645);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.052718);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.039885);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9542668);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.15455);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.010076);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.056562);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.180085);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.028595);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9166476);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.121663);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.157216);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.166178);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.12253);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.044211);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,27.19342);
   hCCpi0inFV_stack_10->SetBinContent(2,26.26752);
   hCCpi0inFV_stack_10->SetBinContent(3,27.70526);
   hCCpi0inFV_stack_10->SetBinContent(4,27.05861);
   hCCpi0inFV_stack_10->SetBinContent(5,22.27705);
   hCCpi0inFV_stack_10->SetBinContent(6,22.31632);
   hCCpi0inFV_stack_10->SetBinContent(7,21.26497);
   hCCpi0inFV_stack_10->SetBinContent(8,22.23173);
   hCCpi0inFV_stack_10->SetBinContent(9,24.88949);
   hCCpi0inFV_stack_10->SetBinContent(10,20.88172);
   hCCpi0inFV_stack_10->SetBinContent(11,24.09309);
   hCCpi0inFV_stack_10->SetBinContent(12,21.80004);
   hCCpi0inFV_stack_10->SetBinContent(13,25.73589);
   hCCpi0inFV_stack_10->SetBinContent(14,23.45735);
   hCCpi0inFV_stack_10->SetBinContent(15,22.50435);
   hCCpi0inFV_stack_10->SetBinContent(16,21.32053);
   hCCpi0inFV_stack_10->SetBinContent(17,24.31366);
   hCCpi0inFV_stack_10->SetBinContent(18,21.2622);
   hCCpi0inFV_stack_10->SetBinContent(19,22.26258);
   hCCpi0inFV_stack_10->SetBinContent(20,29.15228);
   hCCpi0inFV_stack_10->SetBinContent(21,27.7171);
   hCCpi0inFV_stack_10->SetBinContent(22,23.21583);
   hCCpi0inFV_stack_10->SetBinContent(23,27.36711);
   hCCpi0inFV_stack_10->SetBinContent(24,22.83675);
   hCCpi0inFV_stack_10->SetBinError(1,2.640079);
   hCCpi0inFV_stack_10->SetBinError(2,2.491166);
   hCCpi0inFV_stack_10->SetBinError(3,2.657133);
   hCCpi0inFV_stack_10->SetBinError(4,2.602767);
   hCCpi0inFV_stack_10->SetBinError(5,2.354488);
   hCCpi0inFV_stack_10->SetBinError(6,2.328575);
   hCCpi0inFV_stack_10->SetBinError(7,2.280298);
   hCCpi0inFV_stack_10->SetBinError(8,2.364706);
   hCCpi0inFV_stack_10->SetBinError(9,2.531251);
   hCCpi0inFV_stack_10->SetBinError(10,2.352252);
   hCCpi0inFV_stack_10->SetBinError(11,2.402798);
   hCCpi0inFV_stack_10->SetBinError(12,2.341007);
   hCCpi0inFV_stack_10->SetBinError(13,2.488106);
   hCCpi0inFV_stack_10->SetBinError(14,2.403288);
   hCCpi0inFV_stack_10->SetBinError(15,2.336087);
   hCCpi0inFV_stack_10->SetBinError(16,2.315323);
   hCCpi0inFV_stack_10->SetBinError(17,2.536647);
   hCCpi0inFV_stack_10->SetBinError(18,2.323158);
   hCCpi0inFV_stack_10->SetBinError(19,2.395833);
   hCCpi0inFV_stack_10->SetBinError(20,2.787037);
   hCCpi0inFV_stack_10->SetBinError(21,2.667502);
   hCCpi0inFV_stack_10->SetBinError(22,2.4039);
   hCCpi0inFV_stack_10->SetBinError(23,2.649597);
   hCCpi0inFV_stack_10->SetBinError(24,2.361982);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,10.84653);
   hNCinFV_stack_11->SetBinContent(2,11.62555);
   hNCinFV_stack_11->SetBinContent(3,12.45444);
   hNCinFV_stack_11->SetBinContent(4,9.141179);
   hNCinFV_stack_11->SetBinContent(5,11.62724);
   hNCinFV_stack_11->SetBinContent(6,9.038054);
   hNCinFV_stack_11->SetBinContent(7,8.710793);
   hNCinFV_stack_11->SetBinContent(8,8.410952);
   hNCinFV_stack_11->SetBinContent(9,10.95026);
   hNCinFV_stack_11->SetBinContent(10,7.574219);
   hNCinFV_stack_11->SetBinContent(11,9.423033);
   hNCinFV_stack_11->SetBinContent(12,11.91078);
   hNCinFV_stack_11->SetBinContent(13,8.648005);
   hNCinFV_stack_11->SetBinContent(14,10.79666);
   hNCinFV_stack_11->SetBinContent(15,10.98722);
   hNCinFV_stack_11->SetBinContent(16,8.556105);
   hNCinFV_stack_11->SetBinContent(17,8.580145);
   hNCinFV_stack_11->SetBinContent(18,10.34382);
   hNCinFV_stack_11->SetBinContent(19,8.49778);
   hNCinFV_stack_11->SetBinContent(20,7.327023);
   hNCinFV_stack_11->SetBinContent(21,9.325103);
   hNCinFV_stack_11->SetBinContent(22,9.44102);
   hNCinFV_stack_11->SetBinContent(23,10.44187);
   hNCinFV_stack_11->SetBinContent(24,9.582792);
   hNCinFV_stack_11->SetBinError(1,1.617335);
   hNCinFV_stack_11->SetBinError(2,1.722172);
   hNCinFV_stack_11->SetBinError(3,1.810063);
   hNCinFV_stack_11->SetBinError(4,1.494593);
   hNCinFV_stack_11->SetBinError(5,1.722364);
   hNCinFV_stack_11->SetBinError(6,1.520456);
   hNCinFV_stack_11->SetBinError(7,1.415181);
   hNCinFV_stack_11->SetBinError(8,1.428992);
   hNCinFV_stack_11->SetBinError(9,1.654213);
   hNCinFV_stack_11->SetBinError(10,1.388121);
   hNCinFV_stack_11->SetBinError(11,1.544626);
   hNCinFV_stack_11->SetBinError(12,1.766143);
   hNCinFV_stack_11->SetBinError(13,1.495231);
   hNCinFV_stack_11->SetBinError(14,1.629547);
   hNCinFV_stack_11->SetBinError(15,1.700029);
   hNCinFV_stack_11->SetBinError(16,1.45592);
   hNCinFV_stack_11->SetBinError(17,1.570576);
   hNCinFV_stack_11->SetBinError(18,1.677001);
   hNCinFV_stack_11->SetBinError(19,1.468347);
   hNCinFV_stack_11->SetBinError(20,1.314994);
   hNCinFV_stack_11->SetBinError(21,1.525777);
   hNCinFV_stack_11->SetBinError(22,1.481393);
   hNCinFV_stack_11->SetBinError(23,1.652988);
   hNCinFV_stack_11->SetBinError(24,1.506947);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,12.22706);
   hnumuCCinFV_stack_12->SetBinContent(2,13.95718);
   hnumuCCinFV_stack_12->SetBinContent(3,13.803);
   hnumuCCinFV_stack_12->SetBinContent(4,7.230572);
   hnumuCCinFV_stack_12->SetBinContent(5,7.341291);
   hnumuCCinFV_stack_12->SetBinContent(6,8.634346);
   hnumuCCinFV_stack_12->SetBinContent(7,8.428087);
   hnumuCCinFV_stack_12->SetBinContent(8,13.18163);
   hnumuCCinFV_stack_12->SetBinContent(9,8.957496);
   hnumuCCinFV_stack_12->SetBinContent(10,7.961993);
   hnumuCCinFV_stack_12->SetBinContent(11,12.87914);
   hnumuCCinFV_stack_12->SetBinContent(12,12.99287);
   hnumuCCinFV_stack_12->SetBinContent(13,11.05424);
   hnumuCCinFV_stack_12->SetBinContent(14,14.3784);
   hnumuCCinFV_stack_12->SetBinContent(15,15.59458);
   hnumuCCinFV_stack_12->SetBinContent(16,9.495023);
   hnumuCCinFV_stack_12->SetBinContent(17,8.43084);
   hnumuCCinFV_stack_12->SetBinContent(18,8.674017);
   hnumuCCinFV_stack_12->SetBinContent(19,8.895155);
   hnumuCCinFV_stack_12->SetBinContent(20,8.548769);
   hnumuCCinFV_stack_12->SetBinContent(21,8.310701);
   hnumuCCinFV_stack_12->SetBinContent(22,11.6581);
   hnumuCCinFV_stack_12->SetBinContent(23,16.61818);
   hnumuCCinFV_stack_12->SetBinContent(24,17.80334);
   hnumuCCinFV_stack_12->SetBinError(1,2.0643);
   hnumuCCinFV_stack_12->SetBinError(2,2.103419);
   hnumuCCinFV_stack_12->SetBinError(3,1.904489);
   hnumuCCinFV_stack_12->SetBinError(4,1.338745);
   hnumuCCinFV_stack_12->SetBinError(5,1.410732);
   hnumuCCinFV_stack_12->SetBinError(6,1.978461);
   hnumuCCinFV_stack_12->SetBinError(7,1.496349);
   hnumuCCinFV_stack_12->SetBinError(8,2.688001);
   hnumuCCinFV_stack_12->SetBinError(9,1.619156);
   hnumuCCinFV_stack_12->SetBinError(10,1.463809);
   hnumuCCinFV_stack_12->SetBinError(11,1.893853);
   hnumuCCinFV_stack_12->SetBinError(12,2.392003);
   hnumuCCinFV_stack_12->SetBinError(13,1.719815);
   hnumuCCinFV_stack_12->SetBinError(14,2.42427);
   hnumuCCinFV_stack_12->SetBinError(15,2.94533);
   hnumuCCinFV_stack_12->SetBinError(16,1.556418);
   hnumuCCinFV_stack_12->SetBinError(17,1.445353);
   hnumuCCinFV_stack_12->SetBinError(18,1.682361);
   hnumuCCinFV_stack_12->SetBinError(19,1.543599);
   hnumuCCinFV_stack_12->SetBinError(20,1.736661);
   hnumuCCinFV_stack_12->SetBinError(21,1.864742);
   hnumuCCinFV_stack_12->SetBinError(22,1.737936);
   hnumuCCinFV_stack_12->SetBinError(23,2.437652);
   hnumuCCinFV_stack_12->SetBinError(24,2.176236);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.21975);
   hnueCCinFV_stack_13->SetBinContent(2,3.387337);
   hnueCCinFV_stack_13->SetBinContent(3,2.35399);
   hnueCCinFV_stack_13->SetBinContent(4,0.9403464);
   hnueCCinFV_stack_13->SetBinContent(5,0.5882818);
   hnueCCinFV_stack_13->SetBinContent(6,0.4485508);
   hnueCCinFV_stack_13->SetBinContent(7,1.03868);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_13->SetBinContent(9,1.702514);
   hnueCCinFV_stack_13->SetBinContent(10,1.686273);
   hnueCCinFV_stack_13->SetBinContent(11,1.20221);
   hnueCCinFV_stack_13->SetBinContent(12,1.249757);
   hnueCCinFV_stack_13->SetBinContent(13,1.682472);
   hnueCCinFV_stack_13->SetBinContent(14,1.88436);
   hnueCCinFV_stack_13->SetBinContent(15,1.34267);
   hnueCCinFV_stack_13->SetBinContent(16,0.4961241);
   hnueCCinFV_stack_13->SetBinContent(17,1.499247);
   hnueCCinFV_stack_13->SetBinContent(18,2.485668);
   hnueCCinFV_stack_13->SetBinContent(19,0.1969809);
   hnueCCinFV_stack_13->SetBinContent(20,2.166725);
   hnueCCinFV_stack_13->SetBinContent(21,1.241827);
   hnueCCinFV_stack_13->SetBinContent(22,0.89349);
   hnueCCinFV_stack_13->SetBinContent(23,1.147058);
   hnueCCinFV_stack_13->SetBinContent(24,1.331603);
   hnueCCinFV_stack_13->SetBinError(1,0.5542831);
   hnueCCinFV_stack_13->SetBinError(2,1.699132);
   hnueCCinFV_stack_13->SetBinError(3,0.8436993);
   hnueCCinFV_stack_13->SetBinError(4,0.5554396);
   hnueCCinFV_stack_13->SetBinError(5,0.4266349);
   hnueCCinFV_stack_13->SetBinError(6,0.3195591);
   hnueCCinFV_stack_13->SetBinError(7,0.6373443);
   hnueCCinFV_stack_13->SetBinError(8,0.372493);
   hnueCCinFV_stack_13->SetBinError(9,0.794498);
   hnueCCinFV_stack_13->SetBinError(10,0.9873555);
   hnueCCinFV_stack_13->SetBinError(11,0.4912892);
   hnueCCinFV_stack_13->SetBinError(12,0.512311);
   hnueCCinFV_stack_13->SetBinError(13,0.8288952);
   hnueCCinFV_stack_13->SetBinError(14,0.8196103);
   hnueCCinFV_stack_13->SetBinError(15,0.5558831);
   hnueCCinFV_stack_13->SetBinError(16,0.3533858);
   hnueCCinFV_stack_13->SetBinError(17,0.6249211);
   hnueCCinFV_stack_13->SetBinError(18,1.418513);
   hnueCCinFV_stack_13->SetBinError(19,0.1967155);
   hnueCCinFV_stack_13->SetBinError(20,1.230297);
   hnueCCinFV_stack_13->SetBinError(21,0.6190489);
   hnueCCinFV_stack_13->SetBinError(22,0.5311548);
   hnueCCinFV_stack_13->SetBinError(23,0.6969692);
   hnueCCinFV_stack_13->SetBinError(24,0.8171275);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__11->SetBinContent(1,165.6595);
   hmcerror__11->SetBinContent(2,171.6757);
   hmcerror__11->SetBinContent(3,183.7603);
   hmcerror__11->SetBinContent(4,159.8804);
   hmcerror__11->SetBinContent(5,155.1653);
   hmcerror__11->SetBinContent(6,160.6183);
   hmcerror__11->SetBinContent(7,156.8257);
   hmcerror__11->SetBinContent(8,142.5257);
   hmcerror__11->SetBinContent(9,159.172);
   hmcerror__11->SetBinContent(10,144.9227);
   hmcerror__11->SetBinContent(11,165.1834);
   hmcerror__11->SetBinContent(12,155.1669);
   hmcerror__11->SetBinContent(13,146.4348);
   hmcerror__11->SetBinContent(14,163.6403);
   hmcerror__11->SetBinContent(15,171.0983);
   hmcerror__11->SetBinContent(16,160.5621);
   hmcerror__11->SetBinContent(17,166.6515);
   hmcerror__11->SetBinContent(18,167.3294);
   hmcerror__11->SetBinContent(19,162.9425);
   hmcerror__11->SetBinContent(20,168.5371);
   hmcerror__11->SetBinContent(21,173.6659);
   hmcerror__11->SetBinContent(22,175.9479);
   hmcerror__11->SetBinContent(23,177.4149);
   hmcerror__11->SetBinContent(24,155.3243);
   hmcerror__11->SetBinError(1,43.81607);
   hmcerror__11->SetBinError(2,44.63421);
   hmcerror__11->SetBinError(3,48.50206);
   hmcerror__11->SetBinError(4,39.76728);
   hmcerror__11->SetBinError(5,41.43911);
   hmcerror__11->SetBinError(6,37.74375);
   hmcerror__11->SetBinError(7,40.15894);
   hmcerror__11->SetBinError(8,38.32337);
   hmcerror__11->SetBinError(9,46.44883);
   hmcerror__11->SetBinError(10,37.43204);
   hmcerror__11->SetBinError(11,61.33411);
   hmcerror__11->SetBinError(12,41.74155);
   hmcerror__11->SetBinError(13,43.9422);
   hmcerror__11->SetBinError(14,40.4748);
   hmcerror__11->SetBinError(15,40.25233);
   hmcerror__11->SetBinError(16,43.50695);
   hmcerror__11->SetBinError(17,40.97486);
   hmcerror__11->SetBinError(18,39.32156);
   hmcerror__11->SetBinError(19,41.88409);
   hmcerror__11->SetBinError(20,40.06165);
   hmcerror__11->SetBinError(21,44.07465);
   hmcerror__11->SetBinError(22,48.36935);
   hmcerror__11->SetBinError(23,46.43677);
   hmcerror__11->SetBinError(24,46.79996);
   hmcerror__11->SetBinError(25,0.3895343);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[24] = {
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
   Double_t _fy3013[24] = {
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
   Double_t _felx3013[24] = {
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
   Double_t _fely3013[24] = {
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
   Double_t _fehx3013[24] = {
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
   Double_t _fehy3013[24] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(109.0439);
   Graph_Graph3013->SetMaximum(223.6965);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/24","");
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

   ci = 1473;
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

   ci = 1474;
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

   ci = 1475;
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

   ci = 1476;
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

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   canvas4->cd();
  
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
   
   Double_t _fx3014[24] = {
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
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
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
   Double_t _fely3014[24] = {
   0.2644948,
   0.2599915,
   0.263942,
   0.2487314,
   0.2670643,
   0.2349903,
   0.2560738,
   0.2688875,
   0.2918153,
   0.2582897,
   0.3713091,
   0.2690107,
   0.3000804,
   0.2473401,
   0.2352586,
   0.2709664,
   0.2458715,
   0.2349948,
   0.2570483,
   0.2377022,
   0.2537899,
   0.2749073,
   0.261741,
   0.3013048};
   Double_t _fehx3014[24] = {
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
   Double_t _fehy3014[24] = {
   0.2644948,
   0.2599915,
   0.263942,
   0.2487314,
   0.2670643,
   0.2349903,
   0.2560738,
   0.2688875,
   0.2918153,
   0.2582897,
   0.3713091,
   0.2690107,
   0.3000804,
   0.2473401,
   0.2352586,
   0.2709664,
   0.2458715,
   0.2349948,
   0.2570483,
   0.2377022,
   0.2537899,
   0.2749073,
   0.261741,
   0.3013048};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-3.78,3.78);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[24] = {
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
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
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
   Double_t _fely3015[24] = {
   0.1983065,
   0.2028943,
   0.2021094,
   0.2026394,
   0.1983601,
   0.1742851,
   0.1883953,
   0.2111198,
   0.1984036,
   0.2013707,
   0.1999201,
   0.1999893,
   0.2009734,
   0.1995282,
   0.192128,
   0.1922618,
   0.1882118,
   0.1775262,
   0.1863943,
   0.1873011,
   0.1988117,
   0.1948225,
   0.1945392,
   0.1965767};
   Double_t _fehx3015[24] = {
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
   Double_t _fehy3015[24] = {
   0.1983065,
   0.2028943,
   0.2021094,
   0.2026394,
   0.1983601,
   0.1742851,
   0.1883953,
   0.2111198,
   0.1984036,
   0.2013707,
   0.1999201,
   0.1999893,
   0.2009734,
   0.1995282,
   0.192128,
   0.1922618,
   0.1882118,
   0.1775262,
   0.1863943,
   0.1873011,
   0.1988117,
   0.1948225,
   0.1945392,
   0.1965767};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-3.78,3.78);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[24] = {
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
   Double_t _fy3016[24] = {
   0.9658367,
   1.060139,
   0.805397,
   1.250935,
   1.089161,
   0.9774725,
   0.9756057,
   0.9542139,
   0.8292915,
   1.117837,
   0.9080813,
   0.8378077,
   1.085808,
   0.9716434,
   1.011115,
   0.9342178,
   1.038094,
   0.8486253,
   1.000353,
   0.9552792,
   1.036473,
   0.9605117,
   0.9412961,
   0.952845};
   Double_t _felx3016[24] = {
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
   Double_t _fely3016[24] = {
   0.0763561,
   0.0785827,
   0.06620322,
   0.08845446,
   0.08378161,
   0.0780108,
   0.07887305,
   0.08182317,
   0.07218056,
   0.08782559,
   0.07414453,
   0.0734806,
   0.08611015,
   0.07705634,
   0.07687364,
   0.07627856,
   0.07892485,
   0.07121506,
   0.0783537,
   0.07528655,
   0.07725415,
   0.07388552,
   0.07283968,
   0.07832337};
   Double_t _fehx3016[24] = {
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
   Double_t _fehy3016[24] = {
   0.0763561,
   0.0785827,
   0.06620322,
   0.08845446,
   0.08378161,
   0.0780108,
   0.07887305,
   0.08182317,
   0.07218056,
   0.08782559,
   0.07414453,
   0.0734806,
   0.08611015,
   0.07705634,
   0.07687364,
   0.07627856,
   0.07892485,
   0.07121506,
   0.0783537,
   0.07528655,
   0.07725415,
   0.07388552,
   0.07283968,
   0.07832337};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.6791742);
   Graph_Graph3016->SetMaximum(1.399409);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

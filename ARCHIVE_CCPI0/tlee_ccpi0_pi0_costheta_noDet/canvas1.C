#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Sep 28 20:33:11 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-1.307692,-24.19732,1.25641,2675.715);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__1->SetBinContent(1,150.7088);
   hmc__1->SetBinContent(2,154.2973);
   hmc__1->SetBinContent(3,152.4287);
   hmc__1->SetBinContent(4,161.4621);
   hmc__1->SetBinContent(5,172.1338);
   hmc__1->SetBinContent(6,191.0472);
   hmc__1->SetBinContent(7,204.9877);
   hmc__1->SetBinContent(8,223.1765);
   hmc__1->SetBinContent(9,252.5673);
   hmc__1->SetBinContent(10,260.0349);
   hmc__1->SetBinContent(11,288.6315);
   hmc__1->SetBinContent(12,306.0113);
   hmc__1->SetBinContent(13,325.9427);
   hmc__1->SetBinContent(14,367.6232);
   hmc__1->SetBinContent(15,439.8974);
   hmc__1->SetBinContent(16,498.8806);
   hmc__1->SetBinContent(17,583.9215);
   hmc__1->SetBinContent(18,675.7354);
   hmc__1->SetBinContent(19,908.1499);
   hmc__1->SetBinContent(20,1209.866);
   hmc__1->SetBinError(1,40.89163);
   hmc__1->SetBinError(2,41.2849);
   hmc__1->SetBinError(3,40.28036);
   hmc__1->SetBinError(4,40.0623);
   hmc__1->SetBinError(5,44.70313);
   hmc__1->SetBinError(6,45.65167);
   hmc__1->SetBinError(7,50.13019);
   hmc__1->SetBinError(8,55.3967);
   hmc__1->SetBinError(9,63.76762);
   hmc__1->SetBinError(10,67.24266);
   hmc__1->SetBinError(11,71.51008);
   hmc__1->SetBinError(12,76.21567);
   hmc__1->SetBinError(13,83.65645);
   hmc__1->SetBinError(14,92.76326);
   hmc__1->SetBinError(15,109.5355);
   hmc__1->SetBinError(16,124.6183);
   hmc__1->SetBinError(17,143.8851);
   hmc__1->SetBinError(18,149.074);
   hmc__1->SetBinError(19,198.026);
   hmc__1->SetBinError(20,240.7782);
   hmc__1->SetBinError(21,0.3895343);
   hmc__1->SetMinimum(-24.19732);
   hmc__1->SetMaximum(2540.719);
   hmc__1->SetEntries(7468.322);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,-1,1);
   hs1_stack_1->SetMinimum(-2.129585e-09);
   hs1_stack_1->SetMaximum(1270.359);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(2,0.5514106);
   hbadmatch_stack_1->SetBinContent(3,1.16386);
   hbadmatch_stack_1->SetBinContent(5,0.901512);
   hbadmatch_stack_1->SetBinContent(6,1.012068);
   hbadmatch_stack_1->SetBinContent(7,1.297798);
   hbadmatch_stack_1->SetBinContent(8,1.355049);
   hbadmatch_stack_1->SetBinContent(9,1.492485);
   hbadmatch_stack_1->SetBinContent(10,1.410846);
   hbadmatch_stack_1->SetBinContent(11,2.66048);
   hbadmatch_stack_1->SetBinContent(12,1.712114);
   hbadmatch_stack_1->SetBinContent(13,1.855576);
   hbadmatch_stack_1->SetBinContent(14,2.213052);
   hbadmatch_stack_1->SetBinContent(15,2.055672);
   hbadmatch_stack_1->SetBinContent(16,1.662242);
   hbadmatch_stack_1->SetBinContent(17,3.09059);
   hbadmatch_stack_1->SetBinContent(18,2.030262);
   hbadmatch_stack_1->SetBinContent(19,4.330025);
   hbadmatch_stack_1->SetBinContent(20,4.891828);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.400425);
   hbadmatch_stack_1->SetBinError(3,0.4853494);
   hbadmatch_stack_1->SetBinError(5,0.5294827);
   hbadmatch_stack_1->SetBinError(6,0.4980943);
   hbadmatch_stack_1->SetBinError(7,0.5992618);
   hbadmatch_stack_1->SetBinError(8,0.5906145);
   hbadmatch_stack_1->SetBinError(9,0.6958047);
   hbadmatch_stack_1->SetBinError(10,0.6938563);
   hbadmatch_stack_1->SetBinError(11,0.8859831);
   hbadmatch_stack_1->SetBinError(12,0.6201715);
   hbadmatch_stack_1->SetBinError(13,0.6794384);
   hbadmatch_stack_1->SetBinError(14,0.8152852);
   hbadmatch_stack_1->SetBinError(15,0.7082781);
   hbadmatch_stack_1->SetBinError(16,0.6513556);
   hbadmatch_stack_1->SetBinError(17,1.057116);
   hbadmatch_stack_1->SetBinError(18,0.6644378);
   hbadmatch_stack_1->SetBinError(19,1.066917);
   hbadmatch_stack_1->SetBinError(20,1.140373);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,1.78639);
   hext_stack_2->SetBinContent(2,5.967652);
   hext_stack_2->SetBinContent(3,1.621987);
   hext_stack_2->SetBinContent(4,5.807659);
   hext_stack_2->SetBinContent(5,5.311677);
   hext_stack_2->SetBinContent(6,11.51435);
   hext_stack_2->SetBinContent(7,5.039181);
   hext_stack_2->SetBinContent(8,9.272285);
   hext_stack_2->SetBinContent(9,10.24271);
   hext_stack_2->SetBinContent(10,5.422601);
   hext_stack_2->SetBinContent(11,13.46073);
   hext_stack_2->SetBinContent(12,15.5472);
   hext_stack_2->SetBinContent(13,3.901586);
   hext_stack_2->SetBinContent(14,6.160778);
   hext_stack_2->SetBinContent(15,10.67085);
   hext_stack_2->SetBinContent(16,5.979242);
   hext_stack_2->SetBinContent(17,3.248382);
   hext_stack_2->SetBinContent(18,6.945253);
   hext_stack_2->SetBinContent(19,6.891774);
   hext_stack_2->SetBinContent(20,9.671704);
   hext_stack_2->SetBinError(1,0.8039566);
   hext_stack_2->SetBinError(2,1.737927);
   hext_stack_2->SetBinError(3,0.7253745);
   hext_stack_2->SetBinError(4,1.742221);
   hext_stack_2->SetBinError(5,1.735259);
   hext_stack_2->SetBinError(6,2.505566);
   hext_stack_2->SetBinError(7,1.403185);
   hext_stack_2->SetBinError(8,2.176332);
   hext_stack_2->SetBinError(9,2.321302);
   hext_stack_2->SetBinError(10,1.505459);
   hext_stack_2->SetBinError(11,2.628548);
   hext_stack_2->SetBinError(12,2.932707);
   hext_stack_2->SetBinError(13,1.238163);
   hext_stack_2->SetBinError(14,1.52832);
   hext_stack_2->SetBinError(15,2.224896);
   hext_stack_2->SetBinError(16,1.718811);
   hext_stack_2->SetBinError(17,1.089706);
   hext_stack_2->SetBinError(18,1.863119);
   hext_stack_2->SetBinError(19,1.61441);
   hext_stack_2->SetBinError(20,2.25897);
   hext_stack_2->SetEntries(323);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(2,0.2544535);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.4927738);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.5687912);
   hdirt_stack_3->SetBinContent(8,0.4103287);
   hdirt_stack_3->SetBinContent(10,0.2761429);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.7801647);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.4853777);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.4046628);
   hdirt_stack_3->SetBinContent(20,0.9083427);
   hdirt_stack_3->SetBinError(2,0.2544535);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.3718435);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.4040027);
   hdirt_stack_3->SetBinError(8,0.2953469);
   hdirt_stack_3->SetBinError(10,0.1952625);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4753739);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.3448585);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.3002244);
   hdirt_stack_3->SetBinError(20,0.4814684);
   hdirt_stack_3->SetEntries(30);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,1.543711);
   houtFV_stack_4->SetBinContent(2,0.7868615);
   houtFV_stack_4->SetBinContent(3,1.844413);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,1.389138);
   houtFV_stack_4->SetBinContent(6,0.9517723);
   houtFV_stack_4->SetBinContent(7,1.424494);
   houtFV_stack_4->SetBinContent(8,1.93935);
   houtFV_stack_4->SetBinContent(9,2.632276);
   houtFV_stack_4->SetBinContent(10,1.804013);
   houtFV_stack_4->SetBinContent(11,1.520457);
   houtFV_stack_4->SetBinContent(12,2.736028);
   houtFV_stack_4->SetBinContent(13,2.15106);
   houtFV_stack_4->SetBinContent(14,4.319682);
   houtFV_stack_4->SetBinContent(15,4.208818);
   houtFV_stack_4->SetBinContent(16,3.512138);
   houtFV_stack_4->SetBinContent(17,5.22534);
   houtFV_stack_4->SetBinContent(18,6.486654);
   houtFV_stack_4->SetBinContent(19,7.934108);
   houtFV_stack_4->SetBinContent(20,11.39742);
   houtFV_stack_4->SetBinError(1,0.5773639);
   houtFV_stack_4->SetBinError(2,0.3934307);
   houtFV_stack_4->SetBinError(3,0.6342977);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.5253093);
   houtFV_stack_4->SetBinError(6,0.4968545);
   houtFV_stack_4->SetBinError(7,0.5997387);
   houtFV_stack_4->SetBinError(8,0.6603394);
   houtFV_stack_4->SetBinError(9,0.7895122);
   houtFV_stack_4->SetBinError(10,0.7075491);
   houtFV_stack_4->SetBinError(11,0.5553336);
   houtFV_stack_4->SetBinError(12,0.8562123);
   houtFV_stack_4->SetBinError(13,0.694736);
   houtFV_stack_4->SetBinError(14,1.091567);
   houtFV_stack_4->SetBinError(15,1.118636);
   houtFV_stack_4->SetBinError(16,1.384635);
   houtFV_stack_4->SetBinError(17,1.899992);
   houtFV_stack_4->SetBinError(18,1.298502);
   houtFV_stack_4->SetBinError(19,1.433361);
   houtFV_stack_4->SetBinError(20,1.756538);
   houtFV_stack_4->SetEntries(267);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.100176);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1815945);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07212181);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1073833);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1300583);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1389192);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1058996);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.122637);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.519077);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.115287);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.023285);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.952654);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.706392);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.281023);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.516085);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.210049);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.694414);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.441558);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.276657);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.787144);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.803059);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.921959);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.5254);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.303371);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.823064);
   hNCpi0inFVres_stack_7->SetBinContent(18,11.00081);
   hNCpi0inFVres_stack_7->SetBinContent(19,12.63805);
   hNCpi0inFVres_stack_7->SetBinContent(20,17.13721);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3407498);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4491736);
   hNCpi0inFVres_stack_7->SetBinError(3,0.387613);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5148269);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4369451);
   hNCpi0inFVres_stack_7->SetBinError(6,0.419432);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6501988);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7130697);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5306013);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6494561);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6999506);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7192666);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7866991);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5621204);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7206142);
   hNCpi0inFVres_stack_7->SetBinError(16,1.161985);
   hNCpi0inFVres_stack_7->SetBinError(17,1.052335);
   hNCpi0inFVres_stack_7->SetBinError(18,1.302633);
   hNCpi0inFVres_stack_7->SetBinError(19,1.296987);
   hNCpi0inFVres_stack_7->SetBinError(20,1.642011);
   hNCpi0inFVres_stack_7->SetEntries(2070);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.763294);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.553006);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.543653);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.475451);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.153187);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.060814);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.729089);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.150147);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.814133);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.983414);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.313084);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.347154);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.589739);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.275318);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.057909);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.294663);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.982306);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.41488);
   hNCpi0inFVdis_stack_8->SetBinContent(19,15.14009);
   hNCpi0inFVdis_stack_8->SetBinContent(20,23.19702);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5527647);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4661818);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3836952);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4431763);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2803587);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3133538);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3860812);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6035329);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.390907);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.516556);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5451975);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5685398);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7532714);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5560428);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8367328);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7306529);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9294036);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.294677);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.689504);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.851375);
   hNCpi0inFVdis_stack_8->SetEntries(1636);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,122.3735);
   hCCpi0inFV_stack_10->SetBinContent(2,126.0013);
   hCCpi0inFV_stack_10->SetBinContent(3,127.3002);
   hCCpi0inFV_stack_10->SetBinContent(4,132.8933);
   hCCpi0inFV_stack_10->SetBinContent(5,140.5069);
   hCCpi0inFV_stack_10->SetBinContent(6,142.7892);
   hCCpi0inFV_stack_10->SetBinContent(7,164.556);
   hCCpi0inFV_stack_10->SetBinContent(8,168.0392);
   hCCpi0inFV_stack_10->SetBinContent(9,195.2078);
   hCCpi0inFV_stack_10->SetBinContent(10,205.0754);
   hCCpi0inFV_stack_10->SetBinContent(11,210.6269);
   hCCpi0inFV_stack_10->SetBinContent(12,228.5857);
   hCCpi0inFV_stack_10->SetBinContent(13,256.1227);
   hCCpi0inFV_stack_10->SetBinContent(14,280.7449);
   hCCpi0inFV_stack_10->SetBinContent(15,336.5974);
   hCCpi0inFV_stack_10->SetBinContent(16,387.832);
   hCCpi0inFV_stack_10->SetBinContent(17,449.7773);
   hCCpi0inFV_stack_10->SetBinContent(18,499.8696);
   hCCpi0inFV_stack_10->SetBinContent(19,685.056);
   hCCpi0inFV_stack_10->SetBinContent(20,872.2692);
   hCCpi0inFV_stack_10->SetBinError(1,5.599199);
   hCCpi0inFV_stack_10->SetBinError(2,5.626215);
   hCCpi0inFV_stack_10->SetBinError(3,5.703656);
   hCCpi0inFV_stack_10->SetBinError(4,5.817489);
   hCCpi0inFV_stack_10->SetBinError(5,5.99395);
   hCCpi0inFV_stack_10->SetBinError(6,5.981983);
   hCCpi0inFV_stack_10->SetBinError(7,6.44018);
   hCCpi0inFV_stack_10->SetBinError(8,6.4989);
   hCCpi0inFV_stack_10->SetBinError(9,7.134994);
   hCCpi0inFV_stack_10->SetBinError(10,7.149841);
   hCCpi0inFV_stack_10->SetBinError(11,7.263897);
   hCCpi0inFV_stack_10->SetBinError(12,7.592026);
   hCCpi0inFV_stack_10->SetBinError(13,8.052119);
   hCCpi0inFV_stack_10->SetBinError(14,8.332771);
   hCCpi0inFV_stack_10->SetBinError(15,9.256468);
   hCCpi0inFV_stack_10->SetBinError(16,9.921681);
   hCCpi0inFV_stack_10->SetBinError(17,10.71117);
   hCCpi0inFV_stack_10->SetBinError(18,11.20906);
   hCCpi0inFV_stack_10->SetBinError(19,13.19854);
   hCCpi0inFV_stack_10->SetBinError(20,14.84649);
   hCCpi0inFV_stack_10->SetEntries(24435);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.322064);
   hNCinFV_stack_11->SetBinContent(2,1.660551);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,1.268811);
   hNCinFV_stack_11->SetBinContent(5,0.5884556);
   hNCinFV_stack_11->SetBinContent(6,0.7834804);
   hNCinFV_stack_11->SetBinContent(7,0.3900497);
   hNCinFV_stack_11->SetBinContent(8,1.123658);
   hNCinFV_stack_11->SetBinContent(9,1.125349);
   hNCinFV_stack_11->SetBinContent(10,0.7868615);
   hNCinFV_stack_11->SetBinContent(11,1.608988);
   hNCinFV_stack_11->SetBinContent(12,2.199135);
   hNCinFV_stack_11->SetBinContent(13,1.715495);
   hNCinFV_stack_11->SetBinContent(14,2.145881);
   hNCinFV_stack_11->SetBinContent(15,1.660551);
   hNCinFV_stack_11->SetBinContent(16,5.075243);
   hNCinFV_stack_11->SetBinContent(17,2.690619);
   hNCinFV_stack_11->SetBinContent(18,4.004838);
   hNCinFV_stack_11->SetBinContent(19,10.61178);
   hNCinFV_stack_11->SetBinContent(20,11.82903);
   hNCinFV_stack_11->SetBinError(1,0.5554667);
   hNCinFV_stack_11->SetBinError(2,0.650847);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.5889569);
   hNCinFV_stack_11->SetBinError(5,0.3397478);
   hNCinFV_stack_11->SetBinError(6,0.3917439);
   hNCinFV_stack_11->SetBinError(7,0.2758068);
   hNCinFV_stack_11->SetBinError(8,0.5188295);
   hNCinFV_stack_11->SetBinError(9,0.5194673);
   hNCinFV_stack_11->SetBinError(10,0.3934307);
   hNCinFV_stack_11->SetBinError(11,0.6801404);
   hNCinFV_stack_11->SetBinError(12,0.7607114);
   hNCinFV_stack_11->SetBinError(13,0.6212384);
   hNCinFV_stack_11->SetBinError(14,0.785499);
   hNCinFV_stack_11->SetBinError(15,0.650847);
   hNCinFV_stack_11->SetBinError(16,1.177914);
   hNCinFV_stack_11->SetBinError(17,0.7590195);
   hNCinFV_stack_11->SetBinError(18,1.039216);
   hNCinFV_stack_11->SetBinError(19,1.619062);
   hNCinFV_stack_11->SetBinError(20,1.734134);
   hNCinFV_stack_11->SetEntries(225);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,20.06058);
   hnumuCCinFV_stack_12->SetBinContent(2,15.27671);
   hnumuCCinFV_stack_12->SetBinContent(3,15.86571);
   hnumuCCinFV_stack_12->SetBinContent(4,17.03445);
   hnumuCCinFV_stack_12->SetBinContent(5,19.85166);
   hnumuCCinFV_stack_12->SetBinContent(6,29.74562);
   hnumuCCinFV_stack_12->SetBinContent(7,28.03497);
   hnumuCCinFV_stack_12->SetBinContent(8,35.67644);
   hnumuCCinFV_stack_12->SetBinContent(9,37.16143);
   hnumuCCinFV_stack_12->SetBinContent(10,39.63731);
   hnumuCCinFV_stack_12->SetBinContent(11,51.14908);
   hnumuCCinFV_stack_12->SetBinContent(12,48.94028);
   hnumuCCinFV_stack_12->SetBinContent(13,50.58459);
   hnumuCCinFV_stack_12->SetBinContent(14,63.35546);
   hnumuCCinFV_stack_12->SetBinContent(15,72.35651);
   hnumuCCinFV_stack_12->SetBinContent(16,80.61441);
   hnumuCCinFV_stack_12->SetBinContent(17,104.0992);
   hnumuCCinFV_stack_12->SetBinContent(18,131.4196);
   hnumuCCinFV_stack_12->SetBinContent(19,163.3484);
   hnumuCCinFV_stack_12->SetBinContent(20,250.1457);
   hnumuCCinFV_stack_12->SetBinError(1,4.502376);
   hnumuCCinFV_stack_12->SetBinError(2,1.898401);
   hnumuCCinFV_stack_12->SetBinError(3,2.041455);
   hnumuCCinFV_stack_12->SetBinError(4,2.067735);
   hnumuCCinFV_stack_12->SetBinError(5,2.573447);
   hnumuCCinFV_stack_12->SetBinError(6,3.668969);
   hnumuCCinFV_stack_12->SetBinError(7,2.712237);
   hnumuCCinFV_stack_12->SetBinError(8,4.115348);
   hnumuCCinFV_stack_12->SetBinError(9,3.424025);
   hnumuCCinFV_stack_12->SetBinError(10,3.497341);
   hnumuCCinFV_stack_12->SetBinError(11,3.875818);
   hnumuCCinFV_stack_12->SetBinError(12,4.012531);
   hnumuCCinFV_stack_12->SetBinError(13,4.251989);
   hnumuCCinFV_stack_12->SetBinError(14,4.29203);
   hnumuCCinFV_stack_12->SetBinError(15,4.624048);
   hnumuCCinFV_stack_12->SetBinError(16,4.794975);
   hnumuCCinFV_stack_12->SetBinError(17,5.738618);
   hnumuCCinFV_stack_12->SetBinError(18,6.21822);
   hnumuCCinFV_stack_12->SetBinError(19,6.689558);
   hnumuCCinFV_stack_12->SetBinError(20,8.592155);
   hnumuCCinFV_stack_12->SetEntries(5250);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.5065283);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,1.545346);
   hnueCCinFV_stack_13->SetBinContent(16,1.121968);
   hnueCCinFV_stack_13->SetBinContent(17,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(18,2.002419);
   hnueCCinFV_stack_13->SetBinContent(19,2.055672);
   hnueCCinFV_stack_13->SetBinContent(20,8.098195);
   hnueCCinFV_stack_13->SetBinError(3,0.3587818);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.3387718);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.5197486);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.6685841);
   hnueCCinFV_stack_13->SetBinError(16,0.5181909);
   hnueCCinFV_stack_13->SetBinError(17,0.2758068);
   hnueCCinFV_stack_13->SetBinError(18,0.7348366);
   hnueCCinFV_stack_13->SetBinError(19,0.7082781);
   hnueCCinFV_stack_13->SetBinError(20,1.508187);
   hnueCCinFV_stack_13->SetEntries(75);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__2->SetBinContent(1,150.7088);
   hmcerror__2->SetBinContent(2,154.2973);
   hmcerror__2->SetBinContent(3,152.4287);
   hmcerror__2->SetBinContent(4,161.4621);
   hmcerror__2->SetBinContent(5,172.1338);
   hmcerror__2->SetBinContent(6,191.0472);
   hmcerror__2->SetBinContent(7,204.9877);
   hmcerror__2->SetBinContent(8,223.1765);
   hmcerror__2->SetBinContent(9,252.5673);
   hmcerror__2->SetBinContent(10,260.0349);
   hmcerror__2->SetBinContent(11,288.6315);
   hmcerror__2->SetBinContent(12,306.0113);
   hmcerror__2->SetBinContent(13,325.9427);
   hmcerror__2->SetBinContent(14,367.6232);
   hmcerror__2->SetBinContent(15,439.8974);
   hmcerror__2->SetBinContent(16,498.8806);
   hmcerror__2->SetBinContent(17,583.9215);
   hmcerror__2->SetBinContent(18,675.7354);
   hmcerror__2->SetBinContent(19,908.1499);
   hmcerror__2->SetBinContent(20,1209.866);
   hmcerror__2->SetBinError(1,40.89163);
   hmcerror__2->SetBinError(2,41.2849);
   hmcerror__2->SetBinError(3,40.28036);
   hmcerror__2->SetBinError(4,40.0623);
   hmcerror__2->SetBinError(5,44.70313);
   hmcerror__2->SetBinError(6,45.65167);
   hmcerror__2->SetBinError(7,50.13019);
   hmcerror__2->SetBinError(8,55.3967);
   hmcerror__2->SetBinError(9,63.76762);
   hmcerror__2->SetBinError(10,67.24266);
   hmcerror__2->SetBinError(11,71.51008);
   hmcerror__2->SetBinError(12,76.21567);
   hmcerror__2->SetBinError(13,83.65645);
   hmcerror__2->SetBinError(14,92.76326);
   hmcerror__2->SetBinError(15,109.5355);
   hmcerror__2->SetBinError(16,124.6183);
   hmcerror__2->SetBinError(17,143.8851);
   hmcerror__2->SetBinError(18,149.074);
   hmcerror__2->SetBinError(19,198.026);
   hmcerror__2->SetBinError(20,240.7782);
   hmcerror__2->SetBinError(21,0.3895343);
   hmcerror__2->SetEntries(7468.322);

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
   
   Double_t _fx3001[20] = {
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
   Double_t _fy3001[20] = {
   142,
   123,
   140,
   132,
   161,
   164,
   167,
   183,
   197,
   227,
   262,
   248,
   327,
   351,
   391,
   468,
   555,
   702,
   906,
   1104};
   Double_t _felx3001[20] = {
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
   Double_t _fely3001[20] = {
   11.91638,
   11.09054,
   11.83216,
   11.48913,
   12.68858,
   12.80625,
   12.92285,
   13.52775,
   14.03567,
   15.06652,
   16.18641,
   15.74802,
   18.08314,
   18.73499,
   19.77372,
   21.63331,
   23.55844,
   26.49528,
   30.09983,
   33.2265};
   Double_t _fehx3001[20] = {
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
   Double_t _fehy3001[20] = {
   11.91638,
   11.09054,
   11.83216,
   11.48913,
   12.68858,
   12.80625,
   12.92285,
   13.52775,
   14.03567,
   15.06652,
   16.18641,
   15.74802,
   18.08314,
   18.73499,
   19.77372,
   21.63331,
   23.55844,
   26.49528,
   30.09983,
   33.2265};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(9.37776);
   Graph_Graph3001->SetMaximum(1239.758);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=18.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6950.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 36.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 144.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 64.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  94.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5732.2","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 52.9","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1274.4","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 18.7","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[20] = {
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
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
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
   Double_t _fely3002[20] = {
   0.2713287,
   0.2675673,
   0.264257,
   0.2481221,
   0.2596999,
   0.2389549,
   0.2445522,
   0.2482193,
   0.2524777,
   0.2585909,
   0.2477556,
   0.2490617,
   0.25666,
   0.2523324,
   0.2490024,
   0.2497958,
   0.2464118,
   0.2206099,
   0.2180543,
   0.1990122};
   Double_t _fehx3002[20] = {
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
   Double_t _fehy3002[20] = {
   0.2713287,
   0.2675673,
   0.264257,
   0.2481221,
   0.2596999,
   0.2389549,
   0.2445522,
   0.2482193,
   0.2524777,
   0.2585909,
   0.2477556,
   0.2490617,
   0.25666,
   0.2523324,
   0.2490024,
   0.2497958,
   0.2464118,
   0.2206099,
   0.2180543,
   0.1990122};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[20] = {
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
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
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
   Double_t _fely3003[20] = {
   0.2713287,
   0.2675673,
   0.264257,
   0.2481221,
   0.2596999,
   0.2389549,
   0.2445522,
   0.2482193,
   0.2524777,
   0.2585909,
   0.2477556,
   0.2490617,
   0.25666,
   0.2523324,
   0.2490024,
   0.2497958,
   0.2464118,
   0.2206099,
   0.2180543,
   0.1990122};
   Double_t _fehx3003[20] = {
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
   Double_t _fehy3003[20] = {
   0.2713287,
   0.2675673,
   0.264257,
   0.2481221,
   0.2596999,
   0.2389549,
   0.2445522,
   0.2482193,
   0.2524777,
   0.2585909,
   0.2477556,
   0.2490617,
   0.25666,
   0.2523324,
   0.2490024,
   0.2497958,
   0.2464118,
   0.2206099,
   0.2180543,
   0.1990122};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
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
   
   Double_t _fx3004[20] = {
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
   Double_t _fy3004[20] = {
   0.9422141,
   0.7971625,
   0.918462,
   0.8175296,
   0.9353189,
   0.8584264,
   0.8146832,
   0.8199789,
   0.7799901,
   0.8729598,
   0.9077317,
   0.8104277,
   1.003244,
   0.9547819,
   0.8888437,
   0.9381001,
   0.9504702,
   1.038868,
   0.9976327,
   0.9124976};
   Double_t _felx3004[20] = {
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
   Double_t _fely3004[20] = {
   0.07906885,
   0.07187772,
   0.0776242,
   0.07115681,
   0.07371346,
   0.06703184,
   0.06304208,
   0.06061459,
   0.05557199,
   0.05794038,
   0.05607985,
   0.05146221,
   0.05547951,
   0.05096249,
   0.04495076,
   0.04336369,
   0.04034521,
   0.03920955,
   0.03314413,
   0.02746295};
   Double_t _fehx3004[20] = {
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
   Double_t _fehy3004[20] = {
   0.07906885,
   0.07187772,
   0.0776242,
   0.07115681,
   0.07371346,
   0.06703184,
   0.06304208,
   0.06061459,
   0.05557199,
   0.05794038,
   0.05607985,
   0.05146221,
   0.05547951,
   0.05096249,
   0.04495076,
   0.04336369,
   0.04034521,
   0.03920955,
   0.03314413,
   0.02746295};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.6890521);
   Graph_Graph3004->SetMaximum(1.113444);
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
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

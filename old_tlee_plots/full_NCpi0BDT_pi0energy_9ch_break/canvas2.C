#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  8 12:45:27 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",86,109,1200,900);
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
   pad1->Range(-184.6154,-24.5219,1353.846,2711.606);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hmc__4->SetBinContent(1,47.54348);
   hmc__4->SetBinContent(2,298.0974);
   hmc__4->SetBinContent(3,952.9015);
   hmc__4->SetBinContent(4,1226.095);
   hmc__4->SetBinContent(5,956.8087);
   hmc__4->SetBinContent(6,653.1868);
   hmc__4->SetBinContent(7,486.3529);
   hmc__4->SetBinContent(8,331.1666);
   hmc__4->SetBinContent(9,206.6829);
   hmc__4->SetBinContent(10,143.7451);
   hmc__4->SetBinContent(11,96.44247);
   hmc__4->SetBinContent(12,60.09924);
   hmc__4->SetBinContent(13,43.40274);
   hmc__4->SetBinContent(14,28.16427);
   hmc__4->SetBinContent(15,21.25408);
   hmc__4->SetBinContent(16,14.93302);
   hmc__4->SetBinContent(17,7.012596);
   hmc__4->SetBinContent(18,8.619823);
   hmc__4->SetBinContent(19,5.563373);
   hmc__4->SetBinContent(20,4.07717);
   hmc__4->SetBinContent(21,29.33987);
   hmc__4->SetBinError(1,9.518249);
   hmc__4->SetBinError(2,55.11529);
   hmc__4->SetBinError(3,188.6356);
   hmc__4->SetBinError(4,259.3214);
   hmc__4->SetBinError(5,217.7293);
   hmc__4->SetBinError(6,152.8179);
   hmc__4->SetBinError(7,110.9948);
   hmc__4->SetBinError(8,78.11665);
   hmc__4->SetBinError(9,49.52941);
   hmc__4->SetBinError(10,34.06567);
   hmc__4->SetBinError(11,24.6494);
   hmc__4->SetBinError(12,15.87659);
   hmc__4->SetBinError(13,13.00831);
   hmc__4->SetBinError(14,8.091845);
   hmc__4->SetBinError(15,7.236529);
   hmc__4->SetBinError(16,7.824195);
   hmc__4->SetBinError(17,3.64432);
   hmc__4->SetBinError(18,3.785283);
   hmc__4->SetBinError(19,2.367326);
   hmc__4->SetBinError(20,2.08109);
   hmc__4->SetBinError(21,12.29524);
   hmc__4->SetMinimum(-24.5219);
   hmc__4->SetMaximum(2574.799);
   hmc__4->SetEntries(5560.658);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1200);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(1287.4);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,3.341226);
   hbadmatch_stack_1->SetBinContent(2,15.97674);
   hbadmatch_stack_1->SetBinContent(3,28.53984);
   hbadmatch_stack_1->SetBinContent(4,30.33599);
   hbadmatch_stack_1->SetBinContent(5,21.3154);
   hbadmatch_stack_1->SetBinContent(6,7.911068);
   hbadmatch_stack_1->SetBinContent(7,6.508487);
   hbadmatch_stack_1->SetBinContent(8,2.535931);
   hbadmatch_stack_1->SetBinContent(9,2.195754);
   hbadmatch_stack_1->SetBinContent(10,3.358622);
   hbadmatch_stack_1->SetBinContent(11,0.536893);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.3917402);
   hbadmatch_stack_1->SetBinError(1,0.9692143);
   hbadmatch_stack_1->SetBinError(2,2.259047);
   hbadmatch_stack_1->SetBinError(3,2.72034);
   hbadmatch_stack_1->SetBinError(4,3.463135);
   hbadmatch_stack_1->SetBinError(5,2.990005);
   hbadmatch_stack_1->SetBinError(6,1.477347);
   hbadmatch_stack_1->SetBinError(7,2.037373);
   hbadmatch_stack_1->SetBinError(8,0.8325131);
   hbadmatch_stack_1->SetBinError(9,0.7598403);
   hbadmatch_stack_1->SetBinError(10,0.928924);
   hbadmatch_stack_1->SetBinError(11,0.3929602);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.2770047);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,14.85652);
   hext_stack_2->SetBinContent(2,43.82381);
   hext_stack_2->SetBinContent(3,132.5431);
   hext_stack_2->SetBinContent(4,113.726);
   hext_stack_2->SetBinContent(5,70.91849);
   hext_stack_2->SetBinContent(6,32.36729);
   hext_stack_2->SetBinContent(7,24.47197);
   hext_stack_2->SetBinContent(8,15.43747);
   hext_stack_2->SetBinContent(9,11.0559);
   hext_stack_2->SetBinContent(10,3.57278);
   hext_stack_2->SetBinContent(11,2.192989);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,0.6487947);
   hext_stack_2->SetBinError(1,2.731177);
   hext_stack_2->SetBinError(2,4.309269);
   hext_stack_2->SetBinError(3,7.921811);
   hext_stack_2->SetBinError(4,7.319185);
   hext_stack_2->SetBinError(5,5.725273);
   hext_stack_2->SetBinError(6,3.82392);
   hext_stack_2->SetBinError(7,3.468963);
   hext_stack_2->SetBinError(8,2.684643);
   hext_stack_2->SetBinError(9,2.391462);
   hext_stack_2->SetBinError(10,1.136966);
   hext_stack_2->SetBinError(11,0.9009267);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,0.4587671);
   hext_stack_2->SetEntries(1085);

   ci = 1449;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,1.009953);
   hdirt_stack_3->SetBinContent(2,6.405193);
   hdirt_stack_3->SetBinContent(3,13.99425);
   hdirt_stack_3->SetBinContent(4,13.3802);
   hdirt_stack_3->SetBinContent(5,7.048057);
   hdirt_stack_3->SetBinContent(6,3.097345);
   hdirt_stack_3->SetBinContent(7,2.233793);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.4080678);
   hdirt_stack_3->SetBinContent(10,1.330832);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5258471);
   hdirt_stack_3->SetBinError(2,1.281914);
   hdirt_stack_3->SetBinError(3,1.915415);
   hdirt_stack_3->SetBinError(4,2.087565);
   hdirt_stack_3->SetBinError(5,1.370571);
   hdirt_stack_3->SetBinError(6,0.9302752);
   hdirt_stack_3->SetBinError(7,0.7923459);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.4080678);
   hdirt_stack_3->SetBinError(10,1.107563);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetEntries(206);

   ci = 1450;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,3.83955);
   houtFV_stack_4->SetBinContent(2,28.15092);
   houtFV_stack_4->SetBinContent(3,86.14686);
   houtFV_stack_4->SetBinContent(4,100.1475);
   houtFV_stack_4->SetBinContent(5,69.79865);
   houtFV_stack_4->SetBinContent(6,41.56239);
   houtFV_stack_4->SetBinContent(7,25.6797);
   houtFV_stack_4->SetBinContent(8,15.96231);
   houtFV_stack_4->SetBinContent(9,9.952081);
   houtFV_stack_4->SetBinContent(10,4.644856);
   houtFV_stack_4->SetBinContent(11,4.691348);
   houtFV_stack_4->SetBinContent(12,2.681084);
   houtFV_stack_4->SetBinContent(13,1.660551);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.785171);
   houtFV_stack_4->SetBinContent(16,0.3401776);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(1,1.027061);
   houtFV_stack_4->SetBinError(2,2.649459);
   houtFV_stack_4->SetBinError(3,4.668827);
   houtFV_stack_4->SetBinError(4,5.031078);
   houtFV_stack_4->SetBinError(5,4.163825);
   houtFV_stack_4->SetBinError(6,3.134982);
   houtFV_stack_4->SetBinError(7,2.512113);
   houtFV_stack_4->SetBinError(8,2.004128);
   houtFV_stack_4->SetBinError(9,1.653966);
   houtFV_stack_4->SetBinError(10,1.075365);
   houtFV_stack_4->SetBinError(11,1.056141);
   houtFV_stack_4->SetBinError(12,0.8779318);
   houtFV_stack_4->SetBinError(13,0.650847);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.3925882);
   houtFV_stack_4->SetBinError(16,0.3401776);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(1712);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.211326);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.267804);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.61018);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,14.83489);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,12.28502);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,12.21626);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,10.69555);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.377763);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.227446);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.305834);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.938726);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.395672);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.477876);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9195399);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.505608);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2847548);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7376434);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.049169);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.26005);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.1451);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.135372);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.134086);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9641079);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6902605);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6229323);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4531823);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4122573);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.408066);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2922873);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3667934);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.324422);
   hNCpi0inFVqe_stack_6->SetBinContent(3,5.718028);
   hNCpi0inFVqe_stack_6->SetBinContent(4,5.298528);
   hNCpi0inFVqe_stack_6->SetBinContent(5,4.853792);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.42598);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.57669);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.200204);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6134722);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.299954);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.7664108);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.7236603);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.7414595);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.489117);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4263357);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3629715);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3100573);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.028494);
   hNCpi0inFVres_stack_7->SetBinContent(2,100.7191);
   hNCpi0inFVres_stack_7->SetBinContent(3,394.8798);
   hNCpi0inFVres_stack_7->SetBinContent(4,575.0298);
   hNCpi0inFVres_stack_7->SetBinContent(5,445.9271);
   hNCpi0inFVres_stack_7->SetBinContent(6,317.2562);
   hNCpi0inFVres_stack_7->SetBinContent(7,230.2065);
   hNCpi0inFVres_stack_7->SetBinContent(8,152.5153);
   hNCpi0inFVres_stack_7->SetBinContent(9,92.74596);
   hNCpi0inFVres_stack_7->SetBinContent(10,56.02343);
   hNCpi0inFVres_stack_7->SetBinContent(11,33.49659);
   hNCpi0inFVres_stack_7->SetBinContent(12,21.93614);
   hNCpi0inFVres_stack_7->SetBinContent(13,13.57955);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.55197);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.910504);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.361802);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.536747);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.383966);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.57669);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.850954);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.80313);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7776275);
   hNCpi0inFVres_stack_7->SetBinError(2,3.278704);
   hNCpi0inFVres_stack_7->SetBinError(3,6.47282);
   hNCpi0inFVres_stack_7->SetBinError(4,7.847831);
   hNCpi0inFVres_stack_7->SetBinError(5,6.874156);
   hNCpi0inFVres_stack_7->SetBinError(6,5.892209);
   hNCpi0inFVres_stack_7->SetBinError(7,5.004784);
   hNCpi0inFVres_stack_7->SetBinError(8,4.035486);
   hNCpi0inFVres_stack_7->SetBinError(9,3.168245);
   hNCpi0inFVres_stack_7->SetBinError(10,2.456173);
   hNCpi0inFVres_stack_7->SetBinError(11,1.938477);
   hNCpi0inFVres_stack_7->SetBinError(12,1.556507);
   hNCpi0inFVres_stack_7->SetBinError(13,1.200386);
   hNCpi0inFVres_stack_7->SetBinError(14,1.015233);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7836111);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6498926);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4723165);
   hNCpi0inFVres_stack_7->SetBinError(18,0.526852);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4263357);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3098478);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5251252);
   hNCpi0inFVres_stack_7->SetEntries(45534);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.174712);
   hNCpi0inFVdis_stack_8->SetBinContent(2,17.94458);
   hNCpi0inFVdis_stack_8->SetBinContent(3,74.67976);
   hNCpi0inFVdis_stack_8->SetBinContent(4,91.38615);
   hNCpi0inFVdis_stack_8->SetBinContent(5,68.36324);
   hNCpi0inFVdis_stack_8->SetBinContent(6,49.93421);
   hNCpi0inFVdis_stack_8->SetBinContent(7,42.43839);
   hNCpi0inFVdis_stack_8->SetBinContent(8,36.05608);
   hNCpi0inFVdis_stack_8->SetBinContent(9,22.75719);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.63561);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.75509);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.61898);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.048756);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.50795);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.748162);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.592052);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.199372);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.045422);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.156526);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.116672);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.866905);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4466216);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.344071);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.736014);
   hNCpi0inFVdis_stack_8->SetBinError(4,3.103079);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.700661);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.2678);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.12662);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.988223);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.553671);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.339769);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.15292);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9853373);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6997808);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7965836);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5417249);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5204722);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3353836);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2866851);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3627032);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4027059);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6772156);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.7817042);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3484178);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.3206861);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.3465144);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1283607);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2201295);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1456;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,2.052403);
   hCCpi0inFV_stack_11->SetBinContent(2,25.043);
   hCCpi0inFV_stack_11->SetBinContent(3,95.93773);
   hCCpi0inFV_stack_11->SetBinContent(4,141.5164);
   hCCpi0inFV_stack_11->SetBinContent(5,143.0472);
   hCCpi0inFV_stack_11->SetBinContent(6,117.5066);
   hCCpi0inFV_stack_11->SetBinContent(7,92.39692);
   hCCpi0inFV_stack_11->SetBinContent(8,59.80608);
   hCCpi0inFV_stack_11->SetBinContent(9,42.39133);
   hCCpi0inFV_stack_11->SetBinContent(10,36.85368);
   hCCpi0inFV_stack_11->SetBinContent(11,23.37221);
   hCCpi0inFV_stack_11->SetBinContent(12,15.5187);
   hCCpi0inFV_stack_11->SetBinContent(13,13.23116);
   hCCpi0inFV_stack_11->SetBinContent(14,6.950497);
   hCCpi0inFV_stack_11->SetBinContent(15,5.875021);
   hCCpi0inFV_stack_11->SetBinContent(16,5.093231);
   hCCpi0inFV_stack_11->SetBinContent(17,0.9286332);
   hCCpi0inFV_stack_11->SetBinContent(18,2.587494);
   hCCpi0inFV_stack_11->SetBinContent(19,1.268811);
   hCCpi0inFV_stack_11->SetBinContent(20,0.9286332);
   hCCpi0inFV_stack_11->SetBinContent(21,6.393926);
   hCCpi0inFV_stack_11->SetBinError(1,0.7497656);
   hCCpi0inFV_stack_11->SetBinError(2,2.507824);
   hCCpi0inFV_stack_11->SetBinError(3,4.901248);
   hCCpi0inFV_stack_11->SetBinError(4,5.898857);
   hCCpi0inFV_stack_11->SetBinError(5,5.977156);
   hCCpi0inFV_stack_11->SetBinError(6,5.467242);
   hCCpi0inFV_stack_11->SetBinError(7,4.84474);
   hCCpi0inFV_stack_11->SetBinError(8,3.848238);
   hCCpi0inFV_stack_11->SetBinError(9,3.281633);
   hCCpi0inFV_stack_11->SetBinError(10,3.062339);
   hCCpi0inFV_stack_11->SetBinError(11,2.379586);
   hCCpi0inFV_stack_11->SetBinError(12,1.995636);
   hCCpi0inFV_stack_11->SetBinError(13,1.851254);
   hCCpi0inFV_stack_11->SetBinError(14,1.287803);
   hCCpi0inFV_stack_11->SetBinError(15,1.161438);
   hCCpi0inFV_stack_11->SetBinError(16,1.093681);
   hCCpi0inFV_stack_11->SetBinError(17,0.48078);
   hCCpi0inFV_stack_11->SetBinError(18,0.8087577);
   hCCpi0inFV_stack_11->SetBinError(19,0.5889569);
   hCCpi0inFV_stack_11->SetBinError(20,0.48078);
   hCCpi0inFV_stack_11->SetBinError(21,1.301806);
   hCCpi0inFV_stack_11->SetEntries(3599);

   ci = 1458;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,6.674088);
   hNCinFV_stack_12->SetBinContent(2,23.20569);
   hNCinFV_stack_12->SetBinContent(3,45.1736);
   hNCinFV_stack_12->SetBinContent(4,58.43712);
   hNCinFV_stack_12->SetBinContent(5,43.15356);
   hNCinFV_stack_12->SetBinContent(6,24.56483);
   hNCinFV_stack_12->SetBinContent(7,17.88386);
   hNCinFV_stack_12->SetBinContent(8,14.84521);
   hNCinFV_stack_12->SetBinContent(9,6.114846);
   hNCinFV_stack_12->SetBinContent(10,7.425685);
   hNCinFV_stack_12->SetBinContent(11,9.374851);
   hNCinFV_stack_12->SetBinContent(12,3.659589);
   hNCinFV_stack_12->SetBinContent(13,2.644128);
   hNCinFV_stack_12->SetBinContent(14,1.316992);
   hNCinFV_stack_12->SetBinContent(15,2.394159);
   hNCinFV_stack_12->SetBinContent(16,1.663932);
   hNCinFV_stack_12->SetBinContent(17,0.9269427);
   hNCinFV_stack_12->SetBinContent(18,0.536893);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.9286332);
   hNCinFV_stack_12->SetBinError(1,1.358712);
   hNCinFV_stack_12->SetBinError(2,2.403073);
   hNCinFV_stack_12->SetBinError(3,3.378343);
   hNCinFV_stack_12->SetBinError(4,3.820398);
   hNCinFV_stack_12->SetBinError(5,3.376728);
   hNCinFV_stack_12->SetBinError(6,2.469644);
   hNCinFV_stack_12->SetBinError(7,2.094811);
   hNCinFV_stack_12->SetBinError(8,1.972744);
   hNCinFV_stack_12->SetBinError(9,1.159886);
   hNCinFV_stack_12->SetBinError(10,1.359364);
   hNCinFV_stack_12->SetBinError(11,1.557621);
   hNCinFV_stack_12->SetBinError(12,0.9809496);
   hNCinFV_stack_12->SetBinError(13,0.7855485);
   hNCinFV_stack_12->SetBinError(14,0.5536755);
   hNCinFV_stack_12->SetBinError(15,0.785313);
   hNCinFV_stack_12->SetBinError(16,0.6518637);
   hNCinFV_stack_12->SetBinError(17,0.4800908);
   hNCinFV_stack_12->SetBinError(18,0.3929602);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.48078);
   hNCinFV_stack_12->SetEntries(1151);

   ci = 1459;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,6.259913);
   hnumuCCinFV_stack_13->SetBinContent(2,32.21038);
   hnumuCCinFV_stack_13->SetBinContent(3,67.02128);
   hnumuCCinFV_stack_13->SetBinContent(4,77.70371);
   hnumuCCinFV_stack_13->SetBinContent(5,63.46459);
   hnumuCCinFV_stack_13->SetBinContent(6,41.93948);
   hnumuCCinFV_stack_13->SetBinContent(7,29.90156);
   hnumuCCinFV_stack_13->SetBinContent(8,20.48544);
   hnumuCCinFV_stack_13->SetBinContent(9,8.829229);
   hnumuCCinFV_stack_13->SetBinContent(10,6.720061);
   hnumuCCinFV_stack_13->SetBinContent(11,6.536942);
   hnumuCCinFV_stack_13->SetBinContent(12,4.470162);
   hnumuCCinFV_stack_13->SetBinContent(13,3.736106);
   hnumuCCinFV_stack_13->SetBinContent(14,2.357491);
   hnumuCCinFV_stack_13->SetBinContent(15,1.351991);
   hnumuCCinFV_stack_13->SetBinContent(16,0.8750881);
   hnumuCCinFV_stack_13->SetBinContent(17,0.5884556);
   hnumuCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinContent(21,1.383806);
   hnumuCCinFV_stack_13->SetBinError(1,1.479681);
   hnumuCCinFV_stack_13->SetBinError(2,3.567803);
   hnumuCCinFV_stack_13->SetBinError(3,5.186761);
   hnumuCCinFV_stack_13->SetBinError(4,5.315455);
   hnumuCCinFV_stack_13->SetBinError(5,4.483736);
   hnumuCCinFV_stack_13->SetBinError(6,3.530443);
   hnumuCCinFV_stack_13->SetBinError(7,3.062861);
   hnumuCCinFV_stack_13->SetBinError(8,2.659528);
   hnumuCCinFV_stack_13->SetBinError(9,1.517227);
   hnumuCCinFV_stack_13->SetBinError(10,1.263843);
   hnumuCCinFV_stack_13->SetBinError(11,2.668746);
   hnumuCCinFV_stack_13->SetBinError(12,1.098026);
   hnumuCCinFV_stack_13->SetBinError(13,1.04273);
   hnumuCCinFV_stack_13->SetBinError(14,0.8631577);
   hnumuCCinFV_stack_13->SetBinError(15,0.5667568);
   hnumuCCinFV_stack_13->SetBinError(16,0.4353994);
   hnumuCCinFV_stack_13->SetBinError(17,0.3397478);
   hnumuCCinFV_stack_13->SetBinError(18,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinError(21,0.5802126);
   hnumuCCinFV_stack_13->SetEntries(1455);

   ci = 1460;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(2,1.88694);
   hnueCCinFV_stack_14->SetBinContent(3,2.217703);
   hnueCCinFV_stack_14->SetBinContent(4,8.174898);
   hnueCCinFV_stack_14->SetBinContent(5,3.999974);
   hnueCCinFV_stack_14->SetBinContent(6,2.015783);
   hnueCCinFV_stack_14->SetBinContent(7,0.838811);
   hnueCCinFV_stack_14->SetBinContent(8,1.461134);
   hnueCCinFV_stack_14->SetBinContent(9,2.394531);
   hnueCCinFV_stack_14->SetBinContent(10,1.672897);
   hnueCCinFV_stack_14->SetBinContent(11,0.8492388);
   hnueCCinFV_stack_14->SetBinContent(12,0.6623923);
   hnueCCinFV_stack_14->SetBinContent(13,1.278896);
   hnueCCinFV_stack_14->SetBinContent(14,0.6080654);
   hnueCCinFV_stack_14->SetBinContent(15,1.269536);
   hnueCCinFV_stack_14->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(17,0.41253);
   hnueCCinFV_stack_14->SetBinContent(18,0.8007563);
   hnueCCinFV_stack_14->SetBinContent(19,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(20,0.0002655144);
   hnueCCinFV_stack_14->SetBinContent(21,10.22061);
   hnueCCinFV_stack_14->SetBinError(1,0.1950249);
   hnueCCinFV_stack_14->SetBinError(2,0.7676693);
   hnueCCinFV_stack_14->SetBinError(3,0.8777731);
   hnueCCinFV_stack_14->SetBinError(4,2.000387);
   hnueCCinFV_stack_14->SetBinError(5,1.147273);
   hnueCCinFV_stack_14->SetBinError(6,0.7269149);
   hnueCCinFV_stack_14->SetBinError(7,0.4218116);
   hnueCCinFV_stack_14->SetBinError(8,0.6303576);
   hnueCCinFV_stack_14->SetBinError(9,1.234865);
   hnueCCinFV_stack_14->SetBinError(10,0.7427465);
   hnueCCinFV_stack_14->SetBinError(11,0.5074835);
   hnueCCinFV_stack_14->SetBinError(12,0.3872778);
   hnueCCinFV_stack_14->SetBinError(13,0.6762833);
   hnueCCinFV_stack_14->SetBinError(14,0.3515683);
   hnueCCinFV_stack_14->SetBinError(15,0.5891994);
   hnueCCinFV_stack_14->SetBinError(16,0.2781975);
   hnueCCinFV_stack_14->SetBinError(17,0.2921355);
   hnueCCinFV_stack_14->SetBinError(18,0.4932626);
   hnueCCinFV_stack_14->SetBinError(19,0.2770047);
   hnueCCinFV_stack_14->SetBinError(20,0.0002655145);
   hnueCCinFV_stack_14->SetBinError(21,2.29454);
   hnueCCinFV_stack_14->SetEntries(151);

   ci = 1461;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__5->SetBinContent(1,47.54348);
   hmcerror__5->SetBinContent(2,298.0974);
   hmcerror__5->SetBinContent(3,952.9015);
   hmcerror__5->SetBinContent(4,1226.095);
   hmcerror__5->SetBinContent(5,956.8087);
   hmcerror__5->SetBinContent(6,653.1868);
   hmcerror__5->SetBinContent(7,486.3529);
   hmcerror__5->SetBinContent(8,331.1666);
   hmcerror__5->SetBinContent(9,206.6829);
   hmcerror__5->SetBinContent(10,143.7451);
   hmcerror__5->SetBinContent(11,96.44247);
   hmcerror__5->SetBinContent(12,60.09924);
   hmcerror__5->SetBinContent(13,43.40274);
   hmcerror__5->SetBinContent(14,28.16427);
   hmcerror__5->SetBinContent(15,21.25408);
   hmcerror__5->SetBinContent(16,14.93302);
   hmcerror__5->SetBinContent(17,7.012596);
   hmcerror__5->SetBinContent(18,8.619823);
   hmcerror__5->SetBinContent(19,5.563373);
   hmcerror__5->SetBinContent(20,4.07717);
   hmcerror__5->SetBinContent(21,29.33987);
   hmcerror__5->SetBinError(1,9.518249);
   hmcerror__5->SetBinError(2,55.11529);
   hmcerror__5->SetBinError(3,188.6356);
   hmcerror__5->SetBinError(4,259.3214);
   hmcerror__5->SetBinError(5,217.7293);
   hmcerror__5->SetBinError(6,152.8179);
   hmcerror__5->SetBinError(7,110.9948);
   hmcerror__5->SetBinError(8,78.11665);
   hmcerror__5->SetBinError(9,49.52941);
   hmcerror__5->SetBinError(10,34.06567);
   hmcerror__5->SetBinError(11,24.6494);
   hmcerror__5->SetBinError(12,15.87659);
   hmcerror__5->SetBinError(13,13.00831);
   hmcerror__5->SetBinError(14,8.091845);
   hmcerror__5->SetBinError(15,7.236529);
   hmcerror__5->SetBinError(16,7.824195);
   hmcerror__5->SetBinError(17,3.64432);
   hmcerror__5->SetBinError(18,3.785283);
   hmcerror__5->SetBinError(19,2.367326);
   hmcerror__5->SetBinError(20,2.08109);
   hmcerror__5->SetBinError(21,12.29524);
   hmcerror__5->SetEntries(5560.658);

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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3005[20] = {
   41,
   273,
   924,
   1159,
   888,
   566,
   348,
   230,
   185,
   91,
   89,
   45,
   32,
   30,
   10,
   12,
   9,
   9,
   6,
   5};
   Double_t _felx3005[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3005[20] = {
   6.5384,
   16.52271,
   30.39737,
   34.04409,
   29.79933,
   23.79075,
   18.65476,
   15.16575,
   13.60147,
   9.6617,
   9.5566,
   6.8416,
   5.7977,
   5.6197,
   3.34883,
   3.64022,
   3.19354,
   3.19354,
   2.67925,
   2.48995};
   Double_t _fehx3005[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3005[20] = {
   6.3331,
   16.52271,
   30.39737,
   34.04409,
   29.79933,
   23.79075,
   18.65476,
   15.16575,
   13.60147,
   9.46,
   9.3552,
   6.637,
   5.5904,
   5.4117,
   3.1179,
   3.4155,
   2.9582,
   2.9582,
   2.41858,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(2.259045);
   Graph_Graph3005->SetMaximum(1312.097);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=21.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4952.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 123.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.1","F");

   ci = 1449;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1450;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.0","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.2","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2467.5","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  463.2","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 832.3","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 270.3","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 375.2","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 31.5","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3006[20] = {
   0.2002009,
   0.1848902,
   0.1979591,
   0.2115019,
   0.2275579,
   0.2339575,
   0.2282186,
   0.2358832,
   0.2396397,
   0.2369867,
   0.2555866,
   0.2641729,
   0.2997118,
   0.2873088,
   0.3404771,
   0.5239528,
   0.5196819,
   0.439137,
   0.4255199,
   0.5104252};
   Double_t _fehx3006[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3006[20] = {
   0.2002009,
   0.1848902,
   0.1979591,
   0.2115019,
   0.2275579,
   0.2339575,
   0.2282186,
   0.2358832,
   0.2396397,
   0.2369867,
   0.2555866,
   0.2641729,
   0.2997118,
   0.2873088,
   0.3404771,
   0.5239528,
   0.5196819,
   0.439137,
   0.4255199,
   0.5104252};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1320);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3007[20] = {
   0.1602829,
   0.1766656,
   0.1856769,
   0.2088562,
   0.226351,
   0.232631,
   0.2271351,
   0.2231653,
   0.2227419,
   0.2233173,
   0.226081,
   0.2393911,
   0.2337562,
   0.234611,
   0.2780848,
   0.2497219,
   0.2893947,
   0.3094839,
   0.3229277,
   0.3505368};
   Double_t _fehx3007[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3007[20] = {
   0.1602829,
   0.1766656,
   0.1856769,
   0.2088562,
   0.226351,
   0.232631,
   0.2271351,
   0.2231653,
   0.2227419,
   0.2233173,
   0.226081,
   0.2393911,
   0.2337562,
   0.234611,
   0.2780848,
   0.2497219,
   0.2893947,
   0.3094839,
   0.3229277,
   0.3505368};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1320);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3008[20] = {
   0.8623684,
   0.915808,
   0.96967,
   0.9452776,
   0.9280852,
   0.8665208,
   0.7155298,
   0.6945144,
   0.8950911,
   0.6330653,
   0.92283,
   0.7487616,
   0.7372806,
   1.065179,
   0.4704978,
   0.8035885,
   1.283405,
   1.044105,
   1.078482,
   1.226341};
   Double_t _felx3008[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3008[20] = {
   0.1375246,
   0.05542722,
   0.0318998,
   0.02776628,
   0.0311445,
   0.03642259,
   0.03835642,
   0.04579493,
   0.06580841,
   0.06721414,
   0.0990912,
   0.1138384,
   0.1335791,
   0.1995329,
   0.1575617,
   0.2437699,
   0.4554005,
   0.3704879,
   0.4815874,
   0.6107055};
   Double_t _fehx3008[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3008[20] = {
   0.1332065,
   0.05542722,
   0.0318998,
   0.02776628,
   0.0311445,
   0.03642259,
   0.03835642,
   0.04579493,
   0.06580841,
   0.06581096,
   0.09700291,
   0.110434,
   0.1288029,
   0.1921477,
   0.1466965,
   0.2287214,
   0.4218409,
   0.3431857,
   0.4347327,
   0.5421996};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.1673757);
   Graph_Graph3008->SetMaximum(1.914101);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_energy_all",20,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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

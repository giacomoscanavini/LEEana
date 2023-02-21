#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 12:48:28 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-6.26,3.553846,692.2242);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__16->SetBinContent(1,75.13431);
   hmc__16->SetBinContent(2,185.2016);
   hmc__16->SetBinContent(3,269.3365);
   hmc__16->SetBinContent(4,298.7389);
   hmc__16->SetBinContent(5,290.3198);
   hmc__16->SetBinContent(6,280.7687);
   hmc__16->SetBinContent(7,245.2674);
   hmc__16->SetBinContent(8,220.7154);
   hmc__16->SetBinContent(9,174.1315);
   hmc__16->SetBinContent(10,152.3601);
   hmc__16->SetBinContent(11,108.2349);
   hmc__16->SetBinContent(12,94.12026);
   hmc__16->SetBinContent(13,79.31637);
   hmc__16->SetBinContent(14,62.42886);
   hmc__16->SetBinContent(15,64.56044);
   hmc__16->SetBinContent(16,55.96643);
   hmc__16->SetBinContent(17,50.09275);
   hmc__16->SetBinContent(18,52.9304);
   hmc__16->SetBinContent(19,52.91428);
   hmc__16->SetBinContent(20,43.4457);
   hmc__16->SetBinContent(21,34.49552);
   hmc__16->SetBinContent(22,31.94993);
   hmc__16->SetBinContent(23,17.11821);
   hmc__16->SetBinContent(24,6.558743);
   hmc__16->SetBinError(1,31.80234);
   hmc__16->SetBinError(2,51.39937);
   hmc__16->SetBinError(3,72.79711);
   hmc__16->SetBinError(4,75.96286);
   hmc__16->SetBinError(5,71.10419);
   hmc__16->SetBinError(6,75.34946);
   hmc__16->SetBinError(7,62.99667);
   hmc__16->SetBinError(8,61.25427);
   hmc__16->SetBinError(9,47.2328);
   hmc__16->SetBinError(10,40.96676);
   hmc__16->SetBinError(11,30.99793);
   hmc__16->SetBinError(12,30.63686);
   hmc__16->SetBinError(13,30.35607);
   hmc__16->SetBinError(14,20.00358);
   hmc__16->SetBinError(15,20.90257);
   hmc__16->SetBinError(16,20.39037);
   hmc__16->SetBinError(17,16.89829);
   hmc__16->SetBinError(18,17.99316);
   hmc__16->SetBinError(19,18.76773);
   hmc__16->SetBinError(20,16.80636);
   hmc__16->SetBinError(21,15.15442);
   hmc__16->SetBinError(22,15.25985);
   hmc__16->SetBinError(23,9.857611);
   hmc__16->SetBinError(24,5.644261);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-6.26);
   hmc__16->SetMaximum(657.3);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,3.15);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(313.6759);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.114537);
   hbadmatch_stack_1->SetBinContent(2,3.85577);
   hbadmatch_stack_1->SetBinContent(3,4.292857);
   hbadmatch_stack_1->SetBinContent(4,4.43398);
   hbadmatch_stack_1->SetBinContent(5,5.805849);
   hbadmatch_stack_1->SetBinContent(6,5.292503);
   hbadmatch_stack_1->SetBinContent(7,4.875995);
   hbadmatch_stack_1->SetBinContent(8,5.337653);
   hbadmatch_stack_1->SetBinContent(9,3.758026);
   hbadmatch_stack_1->SetBinContent(10,3.153412);
   hbadmatch_stack_1->SetBinContent(11,3.734318);
   hbadmatch_stack_1->SetBinContent(12,1.712114);
   hbadmatch_stack_1->SetBinContent(13,2.796187);
   hbadmatch_stack_1->SetBinContent(14,1.990823);
   hbadmatch_stack_1->SetBinContent(15,2.497715);
   hbadmatch_stack_1->SetBinContent(16,2.453613);
   hbadmatch_stack_1->SetBinContent(17,0.9841816);
   hbadmatch_stack_1->SetBinContent(18,0.4372683);
   hbadmatch_stack_1->SetBinContent(19,1.610679);
   hbadmatch_stack_1->SetBinContent(20,0.5884556);
   hbadmatch_stack_1->SetBinContent(21,1.323754);
   hbadmatch_stack_1->SetBinContent(22,2.102989);
   hbadmatch_stack_1->SetBinContent(23,1.010191);
   hbadmatch_stack_1->SetBinError(1,1.029529);
   hbadmatch_stack_1->SetBinError(2,1.03967);
   hbadmatch_stack_1->SetBinError(3,1.092711);
   hbadmatch_stack_1->SetBinError(4,1.083157);
   hbadmatch_stack_1->SetBinError(5,1.240604);
   hbadmatch_stack_1->SetBinError(6,1.227683);
   hbadmatch_stack_1->SetBinError(7,1.217157);
   hbadmatch_stack_1->SetBinError(8,1.210398);
   hbadmatch_stack_1->SetBinError(9,0.9708895);
   hbadmatch_stack_1->SetBinError(10,0.9883006);
   hbadmatch_stack_1->SetBinError(11,1.036594);
   hbadmatch_stack_1->SetBinError(12,0.6201715);
   hbadmatch_stack_1->SetBinError(13,1.702677);
   hbadmatch_stack_1->SetBinError(14,0.7722017);
   hbadmatch_stack_1->SetBinError(15,0.7751685);
   hbadmatch_stack_1->SetBinError(16,0.8007567);
   hbadmatch_stack_1->SetBinError(17,0.5222129);
   hbadmatch_stack_1->SetBinError(18,0.3107453);
   hbadmatch_stack_1->SetBinError(19,0.6806271);
   hbadmatch_stack_1->SetBinError(20,0.3397478);
   hbadmatch_stack_1->SetBinError(21,0.5560625);
   hbadmatch_stack_1->SetBinError(22,1.694319);
   hbadmatch_stack_1->SetBinError(23,0.6159302);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.096426);
   hext_stack_2->SetBinContent(2,4.385977);
   hext_stack_2->SetBinContent(3,11.43497);
   hext_stack_2->SetBinContent(4,16.4785);
   hext_stack_2->SetBinContent(5,16.83162);
   hext_stack_2->SetBinContent(6,27.04126);
   hext_stack_2->SetBinContent(7,24.5873);
   hext_stack_2->SetBinContent(8,25.68301);
   hext_stack_2->SetBinContent(9,25.35855);
   hext_stack_2->SetBinContent(10,30.26086);
   hext_stack_2->SetBinContent(11,15.87002);
   hext_stack_2->SetBinContent(12,16.65727);
   hext_stack_2->SetBinContent(13,8.522578);
   hext_stack_2->SetBinContent(14,8.000648);
   hext_stack_2->SetBinContent(15,7.918446);
   hext_stack_2->SetBinContent(16,5.83638);
   hext_stack_2->SetBinContent(17,6.501173);
   hext_stack_2->SetBinContent(18,6.303639);
   hext_stack_2->SetBinContent(19,5.885451);
   hext_stack_2->SetBinContent(20,5.807659);
   hext_stack_2->SetBinContent(21,1.461993);
   hext_stack_2->SetBinContent(22,4.021268);
   hext_stack_2->SetBinContent(23,1.055394);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinError(1,1.074236);
   hext_stack_2->SetBinError(2,1.274103);
   hext_stack_2->SetBinError(3,2.133316);
   hext_stack_2->SetBinError(4,2.825862);
   hext_stack_2->SetBinError(5,2.699246);
   hext_stack_2->SetBinError(6,3.46607);
   hext_stack_2->SetBinError(7,3.379957);
   hext_stack_2->SetBinError(8,3.305906);
   hext_stack_2->SetBinError(9,3.486286);
   hext_stack_2->SetBinError(10,3.916161);
   hext_stack_2->SetBinError(11,2.627574);
   hext_stack_2->SetBinError(12,2.775477);
   hext_stack_2->SetBinError(13,1.84465);
   hext_stack_2->SetBinError(14,1.961378);
   hext_stack_2->SetBinError(15,1.946);
   hext_stack_2->SetBinError(16,1.493496);
   hext_stack_2->SetBinError(17,1.584311);
   hext_stack_2->SetBinError(18,1.749156);
   hext_stack_2->SetBinError(19,1.720553);
   hext_stack_2->SetBinError(20,1.742221);
   hext_stack_2->SetBinError(21,0.7356036);
   hext_stack_2->SetBinError(22,1.545635);
   hext_stack_2->SetBinError(23,0.6130171);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,1.373798);
   hdirt_stack_3->SetBinContent(3,1.747276);
   hdirt_stack_3->SetBinContent(4,3.489933);
   hdirt_stack_3->SetBinContent(5,1.830086);
   hdirt_stack_3->SetBinContent(6,3.995366);
   hdirt_stack_3->SetBinContent(7,5.385804);
   hdirt_stack_3->SetBinContent(8,1.893616);
   hdirt_stack_3->SetBinContent(9,3.252565);
   hdirt_stack_3->SetBinContent(10,2.399609);
   hdirt_stack_3->SetBinContent(11,1.503039);
   hdirt_stack_3->SetBinContent(12,1.547598);
   hdirt_stack_3->SetBinContent(13,0.7415437);
   hdirt_stack_3->SetBinContent(14,0.971023);
   hdirt_stack_3->SetBinContent(15,1.03744);
   hdirt_stack_3->SetBinContent(16,1.326437);
   hdirt_stack_3->SetBinContent(17,1.533331);
   hdirt_stack_3->SetBinContent(18,1.655958);
   hdirt_stack_3->SetBinContent(19,0.5132258);
   hdirt_stack_3->SetBinContent(20,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.2863297);
   hdirt_stack_3->SetBinContent(22,0.6287382);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(2,0.5770587);
   hdirt_stack_3->SetBinError(3,0.6554984);
   hdirt_stack_3->SetBinError(4,1.131537);
   hdirt_stack_3->SetBinError(5,0.6634607);
   hdirt_stack_3->SetBinError(6,1.035471);
   hdirt_stack_3->SetBinError(7,1.558885);
   hdirt_stack_3->SetBinError(8,0.6369915);
   hdirt_stack_3->SetBinError(9,0.8949389);
   hdirt_stack_3->SetBinError(10,0.7739902);
   hdirt_stack_3->SetBinError(11,0.7057435);
   hdirt_stack_3->SetBinError(12,0.6091969);
   hdirt_stack_3->SetBinError(13,0.5263716);
   hdirt_stack_3->SetBinError(14,0.5149439);
   hdirt_stack_3->SetBinError(15,0.4744174);
   hdirt_stack_3->SetBinError(16,0.6156553);
   hdirt_stack_3->SetBinError(17,0.6614295);
   hdirt_stack_3->SetBinError(18,0.7173906);
   hdirt_stack_3->SetBinError(19,0.3997556);
   hdirt_stack_3->SetBinError(20,0.2188956);
   hdirt_stack_3->SetBinError(21,0.2025938);
   hdirt_stack_3->SetBinError(22,0.3958337);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,4.106273);
   houtFV_stack_4->SetBinContent(2,10.19052);
   houtFV_stack_4->SetBinContent(3,20.31375);
   houtFV_stack_4->SetBinContent(4,26.66485);
   houtFV_stack_4->SetBinContent(5,24.37219);
   houtFV_stack_4->SetBinContent(6,33.3293);
   houtFV_stack_4->SetBinContent(7,28.21346);
   houtFV_stack_4->SetBinContent(8,26.66656);
   houtFV_stack_4->SetBinContent(9,19.47756);
   houtFV_stack_4->SetBinContent(10,17.90976);
   houtFV_stack_4->SetBinContent(11,13.86618);
   houtFV_stack_4->SetBinContent(12,12.06457);
   houtFV_stack_4->SetBinContent(13,8.741282);
   houtFV_stack_4->SetBinContent(14,6.825003);
   houtFV_stack_4->SetBinContent(15,8.142088);
   houtFV_stack_4->SetBinContent(16,7.384446);
   houtFV_stack_4->SetBinContent(17,7.362896);
   houtFV_stack_4->SetBinContent(18,5.131269);
   houtFV_stack_4->SetBinContent(19,6.858598);
   houtFV_stack_4->SetBinContent(20,5.863305);
   houtFV_stack_4->SetBinContent(21,5.34853);
   houtFV_stack_4->SetBinContent(22,2.050601);
   houtFV_stack_4->SetBinContent(23,0.5884556);
   houtFV_stack_4->SetBinContent(24,0.6803553);
   houtFV_stack_4->SetBinError(1,1.000664);
   houtFV_stack_4->SetBinError(2,1.613718);
   houtFV_stack_4->SetBinError(3,2.272693);
   houtFV_stack_4->SetBinError(4,2.600399);
   houtFV_stack_4->SetBinError(5,2.480345);
   houtFV_stack_4->SetBinError(6,2.913859);
   houtFV_stack_4->SetBinError(7,2.668042);
   houtFV_stack_4->SetBinError(8,2.585042);
   houtFV_stack_4->SetBinError(9,2.183574);
   houtFV_stack_4->SetBinError(10,2.093859);
   houtFV_stack_4->SetBinError(11,1.798309);
   houtFV_stack_4->SetBinError(12,1.81959);
   houtFV_stack_4->SetBinError(13,1.488348);
   houtFV_stack_4->SetBinError(14,1.26067);
   houtFV_stack_4->SetBinError(15,1.37676);
   houtFV_stack_4->SetBinError(16,1.324275);
   houtFV_stack_4->SetBinError(17,1.442516);
   houtFV_stack_4->SetBinError(18,1.073243);
   houtFV_stack_4->SetBinError(19,1.241944);
   houtFV_stack_4->SetBinError(20,1.185593);
   houtFV_stack_4->SetBinError(21,1.218558);
   houtFV_stack_4->SetBinError(22,0.7068742);
   houtFV_stack_4->SetBinError(23,0.3397478);
   houtFV_stack_4->SetBinError(24,0.4810838);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.598794);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,16.52235);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,19.14463);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,13.79528);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.60253);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.715868);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.974442);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.756876);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.491494);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.823054);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.877358);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6131358);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.604926);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8938245);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.324135);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.481409);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.223058);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9167538);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7714304);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7065619);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4174949);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4167175);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3085891);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3016796);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1749792);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4980546);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.422076);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9481038);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5581679);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.406154);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2696619);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2198343);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1994106);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,25.91971);
   hNCpi0inFVres_stack_7->SetBinContent(2,68.47401);
   hNCpi0inFVres_stack_7->SetBinContent(3,103.4523);
   hNCpi0inFVres_stack_7->SetBinContent(4,118.5016);
   hNCpi0inFVres_stack_7->SetBinContent(5,125.9448);
   hNCpi0inFVres_stack_7->SetBinContent(6,116.6992);
   hNCpi0inFVres_stack_7->SetBinContent(7,99.67264);
   hNCpi0inFVres_stack_7->SetBinContent(8,92.53889);
   hNCpi0inFVres_stack_7->SetBinContent(9,66.35873);
   hNCpi0inFVres_stack_7->SetBinContent(10,55.87047);
   hNCpi0inFVres_stack_7->SetBinContent(11,42.55727);
   hNCpi0inFVres_stack_7->SetBinContent(12,36.81005);
   hNCpi0inFVres_stack_7->SetBinContent(13,32.12711);
   hNCpi0inFVres_stack_7->SetBinContent(14,23.49237);
   hNCpi0inFVres_stack_7->SetBinContent(15,22.04206);
   hNCpi0inFVres_stack_7->SetBinContent(16,21.95538);
   hNCpi0inFVres_stack_7->SetBinContent(17,19.87656);
   hNCpi0inFVres_stack_7->SetBinContent(18,20.18142);
   hNCpi0inFVres_stack_7->SetBinContent(19,18.60191);
   hNCpi0inFVres_stack_7->SetBinContent(20,15.71291);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.72635);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.08465);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.551628);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.749162);
   hNCpi0inFVres_stack_7->SetBinError(1,1.706388);
   hNCpi0inFVres_stack_7->SetBinError(2,2.697669);
   hNCpi0inFVres_stack_7->SetBinError(3,3.326142);
   hNCpi0inFVres_stack_7->SetBinError(4,3.548006);
   hNCpi0inFVres_stack_7->SetBinError(5,3.708372);
   hNCpi0inFVres_stack_7->SetBinError(6,3.560736);
   hNCpi0inFVres_stack_7->SetBinError(7,3.235917);
   hNCpi0inFVres_stack_7->SetBinError(8,3.200158);
   hNCpi0inFVres_stack_7->SetBinError(9,2.605475);
   hNCpi0inFVres_stack_7->SetBinError(10,2.431047);
   hNCpi0inFVres_stack_7->SetBinError(11,2.038404);
   hNCpi0inFVres_stack_7->SetBinError(12,1.990114);
   hNCpi0inFVres_stack_7->SetBinError(13,1.912405);
   hNCpi0inFVres_stack_7->SetBinError(14,1.505299);
   hNCpi0inFVres_stack_7->SetBinError(15,1.426418);
   hNCpi0inFVres_stack_7->SetBinError(16,1.471501);
   hNCpi0inFVres_stack_7->SetBinError(17,1.443855);
   hNCpi0inFVres_stack_7->SetBinError(18,1.496895);
   hNCpi0inFVres_stack_7->SetBinError(19,1.44227);
   hNCpi0inFVres_stack_7->SetBinError(20,1.290443);
   hNCpi0inFVres_stack_7->SetBinError(21,1.07919);
   hNCpi0inFVres_stack_7->SetBinError(22,1.070863);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7967058);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5877848);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.77674);
   hNCpi0inFVdis_stack_8->SetBinContent(2,18.11232);
   hNCpi0inFVdis_stack_8->SetBinContent(3,27.3011);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.73519);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.63404);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.40403);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.13789);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.93767);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.71906);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.08788);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.997939);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.899214);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.360634);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.527201);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.217829);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.927516);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.606334);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.802634);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.794088);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.774398);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.292216);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.592716);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.422908);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8693216);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.369932);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.757291);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.626531);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.55133);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.469472);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.361049);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.116126);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.179261);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9508284);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8111085);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7949531);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5810132);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5683138);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.823058);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5164683);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5143288);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5674576);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6884264);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5056796);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6171783);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5073447);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.429217);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06834073);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,11.33355);
   hCCpi0inFV_stack_10->SetBinContent(2,27.33851);
   hCCpi0inFV_stack_10->SetBinContent(3,42.75703);
   hCCpi0inFV_stack_10->SetBinContent(4,46.86487);
   hCCpi0inFV_stack_10->SetBinContent(5,40.49874);
   hCCpi0inFV_stack_10->SetBinContent(6,31.67554);
   hCCpi0inFV_stack_10->SetBinContent(7,34.79951);
   hCCpi0inFV_stack_10->SetBinContent(8,28.51336);
   hCCpi0inFV_stack_10->SetBinContent(9,20.18503);
   hCCpi0inFV_stack_10->SetBinContent(10,17.64694);
   hCCpi0inFV_stack_10->SetBinContent(11,11.58521);
   hCCpi0inFV_stack_10->SetBinContent(12,7.379193);
   hCCpi0inFV_stack_10->SetBinContent(13,8.649086);
   hCCpi0inFV_stack_10->SetBinContent(14,8.600534);
   hCCpi0inFV_stack_10->SetBinContent(15,9.959925);
   hCCpi0inFV_stack_10->SetBinContent(16,8.090661);
   hCCpi0inFV_stack_10->SetBinContent(17,4.891444);
   hCCpi0inFV_stack_10->SetBinContent(18,6.795202);
   hCCpi0inFV_stack_10->SetBinContent(19,7.133688);
   hCCpi0inFV_stack_10->SetBinContent(20,4.701491);
   hCCpi0inFV_stack_10->SetBinContent(21,3.91632);
   hCCpi0inFV_stack_10->SetBinContent(22,3.987816);
   hCCpi0inFV_stack_10->SetBinContent(23,3.512746);
   hCCpi0inFV_stack_10->SetBinContent(24,1.320373);
   hCCpi0inFV_stack_10->SetBinError(1,1.676258);
   hCCpi0inFV_stack_10->SetBinError(2,2.555544);
   hCCpi0inFV_stack_10->SetBinError(3,3.232886);
   hCCpi0inFV_stack_10->SetBinError(4,3.491704);
   hCCpi0inFV_stack_10->SetBinError(5,3.179286);
   hCCpi0inFV_stack_10->SetBinError(6,2.811519);
   hCCpi0inFV_stack_10->SetBinError(7,2.954869);
   hCCpi0inFV_stack_10->SetBinError(8,2.72319);
   hCCpi0inFV_stack_10->SetBinError(9,2.255416);
   hCCpi0inFV_stack_10->SetBinError(10,2.062837);
   hCCpi0inFV_stack_10->SetBinError(11,1.676566);
   hCCpi0inFV_stack_10->SetBinError(12,1.374353);
   hCCpi0inFV_stack_10->SetBinError(13,1.427498);
   hCCpi0inFV_stack_10->SetBinError(14,1.556431);
   hCCpi0inFV_stack_10->SetBinError(15,1.593828);
   hCCpi0inFV_stack_10->SetBinError(16,1.420406);
   hCCpi0inFV_stack_10->SetBinError(17,1.074921);
   hCCpi0inFV_stack_10->SetBinError(18,1.255698);
   hCCpi0inFV_stack_10->SetBinError(19,1.300706);
   hCCpi0inFV_stack_10->SetBinError(20,1.05802);
   hCCpi0inFV_stack_10->SetBinError(21,0.9824872);
   hCCpi0inFV_stack_10->SetBinError(22,0.998384);
   hCCpi0inFV_stack_10->SetBinError(23,0.9401669);
   hCCpi0inFV_stack_10->SetBinError(24,0.5548703);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,6.443798);
   hNCinFV_stack_11->SetBinContent(2,17.18105);
   hNCinFV_stack_11->SetBinContent(3,19.50299);
   hNCinFV_stack_11->SetBinContent(4,24.42463);
   hNCinFV_stack_11->SetBinContent(5,23.48936);
   hNCinFV_stack_11->SetBinContent(6,18.40952);
   hNCinFV_stack_11->SetBinContent(7,10.66334);
   hNCinFV_stack_11->SetBinContent(8,11.72421);
   hNCinFV_stack_11->SetBinContent(9,10.16002);
   hNCinFV_stack_11->SetBinContent(10,6.555376);
   hNCinFV_stack_11->SetBinContent(11,5.906905);
   hNCinFV_stack_11->SetBinContent(12,5.961849);
   hNCinFV_stack_11->SetBinContent(13,7.714299);
   hNCinFV_stack_11->SetBinContent(14,3.376046);
   hNCinFV_stack_11->SetBinContent(15,3.56769);
   hNCinFV_stack_11->SetBinContent(16,2.295498);
   hNCinFV_stack_11->SetBinContent(17,2.734337);
   hNCinFV_stack_11->SetBinContent(18,4.788319);
   hNCinFV_stack_11->SetBinContent(19,3.377736);
   hNCinFV_stack_11->SetBinContent(20,3.467945);
   hNCinFV_stack_11->SetBinContent(21,2.340906);
   hNCinFV_stack_11->SetBinContent(22,1.515398);
   hNCinFV_stack_11->SetBinContent(23,1.963773);
   hNCinFV_stack_11->SetBinContent(24,0.3917402);
   hNCinFV_stack_11->SetBinError(1,1.286487);
   hNCinFV_stack_11->SetBinError(2,2.131848);
   hNCinFV_stack_11->SetBinError(3,2.203361);
   hNCinFV_stack_11->SetBinError(4,2.482193);
   hNCinFV_stack_11->SetBinError(5,2.406168);
   hNCinFV_stack_11->SetBinError(6,2.176383);
   hNCinFV_stack_11->SetBinError(7,1.606976);
   hNCinFV_stack_11->SetBinError(8,1.756285);
   hNCinFV_stack_11->SetBinError(9,1.606334);
   hNCinFV_stack_11->SetBinError(10,1.257132);
   hNCinFV_stack_11->SetBinError(11,1.225002);
   hNCinFV_stack_11->SetBinError(12,1.209531);
   hNCinFV_stack_11->SetBinError(13,1.415126);
   hNCinFV_stack_11->SetBinError(14,0.8997438);
   hNCinFV_stack_11->SetBinError(15,0.919918);
   hNCinFV_stack_11->SetBinError(16,0.7057297);
   hNCinFV_stack_11->SetBinError(17,0.8558255);
   hNCinFV_stack_11->SetBinError(18,1.1106);
   hNCinFV_stack_11->SetBinError(19,0.9001118);
   hNCinFV_stack_11->SetBinError(20,0.9620561);
   hNCinFV_stack_11->SetBinError(21,0.8093475);
   hNCinFV_stack_11->SetBinError(22,0.588146);
   hNCinFV_stack_11->SetBinError(23,0.6210031);
   hNCinFV_stack_11->SetBinError(24,0.2770047);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,6.105426);
   hnumuCCinFV_stack_12->SetBinContent(2,11.77405);
   hnumuCCinFV_stack_12->SetBinContent(3,15.54915);
   hnumuCCinFV_stack_12->SetBinContent(4,16.33791);
   hnumuCCinFV_stack_12->SetBinContent(5,16.43826);
   hnumuCCinFV_stack_12->SetBinContent(6,14.46871);
   hnumuCCinFV_stack_12->SetBinContent(7,12.93581);
   hnumuCCinFV_stack_12->SetBinContent(8,12.31075);
   hnumuCCinFV_stack_12->SetBinContent(9,9.728827);
   hnumuCCinFV_stack_12->SetBinContent(10,7.887581);
   hnumuCCinFV_stack_12->SetBinContent(11,5.517826);
   hnumuCCinFV_stack_12->SetBinContent(12,5.145031);
   hnumuCCinFV_stack_12->SetBinContent(13,6.168548);
   hnumuCCinFV_stack_12->SetBinContent(14,4.420934);
   hnumuCCinFV_stack_12->SetBinContent(15,3.199718);
   hnumuCCinFV_stack_12->SetBinContent(16,3.445398);
   hnumuCCinFV_stack_12->SetBinContent(17,3.142303);
   hnumuCCinFV_stack_12->SetBinContent(18,3.446843);
   hnumuCCinFV_stack_12->SetBinContent(19,3.184728);
   hnumuCCinFV_stack_12->SetBinContent(20,1.910344);
   hnumuCCinFV_stack_12->SetBinContent(21,3.425728);
   hnumuCCinFV_stack_12->SetBinContent(22,1.393784);
   hnumuCCinFV_stack_12->SetBinContent(23,0.8273783);
   hnumuCCinFV_stack_12->SetBinContent(24,0.252159);
   hnumuCCinFV_stack_12->SetBinError(1,1.247708);
   hnumuCCinFV_stack_12->SetBinError(2,1.760665);
   hnumuCCinFV_stack_12->SetBinError(3,2.011395);
   hnumuCCinFV_stack_12->SetBinError(4,2.055119);
   hnumuCCinFV_stack_12->SetBinError(5,2.387048);
   hnumuCCinFV_stack_12->SetBinError(6,1.944475);
   hnumuCCinFV_stack_12->SetBinError(7,2.209389);
   hnumuCCinFV_stack_12->SetBinError(8,2.331544);
   hnumuCCinFV_stack_12->SetBinError(9,1.669136);
   hnumuCCinFV_stack_12->SetBinError(10,1.88895);
   hnumuCCinFV_stack_12->SetBinError(11,1.282916);
   hnumuCCinFV_stack_12->SetBinError(12,1.30816);
   hnumuCCinFV_stack_12->SetBinError(13,1.558202);
   hnumuCCinFV_stack_12->SetBinError(14,1.732259);
   hnumuCCinFV_stack_12->SetBinError(15,0.9149388);
   hnumuCCinFV_stack_12->SetBinError(16,1.163659);
   hnumuCCinFV_stack_12->SetBinError(17,0.9007282);
   hnumuCCinFV_stack_12->SetBinError(18,1.294912);
   hnumuCCinFV_stack_12->SetBinError(19,0.9109008);
   hnumuCCinFV_stack_12->SetBinError(20,0.749037);
   hnumuCCinFV_stack_12->SetBinError(21,0.963865);
   hnumuCCinFV_stack_12->SetBinError(22,0.6682866);
   hnumuCCinFV_stack_12->SetBinError(23,0.415525);
   hnumuCCinFV_stack_12->SetBinError(24,0.2043794);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.611159);
   hnueCCinFV_stack_13->SetBinContent(2,5.183667);
   hnueCCinFV_stack_13->SetBinContent(3,3.505648);
   hnueCCinFV_stack_13->SetBinContent(4,0.5901564);
   hnueCCinFV_stack_13->SetBinContent(5,1.896349);
   hnueCCinFV_stack_13->SetBinContent(6,1.900778);
   hnueCCinFV_stack_13->SetBinContent(7,1.463006);
   hnueCCinFV_stack_13->SetBinContent(8,0.3900824);
   hnueCCinFV_stack_13->SetBinContent(9,2.37692);
   hnueCCinFV_stack_13->SetBinContent(10,1.375251);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,0.8343332);
   hnueCCinFV_stack_13->SetBinContent(15,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(19,1.075993);
   hnueCCinFV_stack_13->SetBinContent(20,1.439238);
   hnueCCinFV_stack_13->SetBinContent(21,0.536893);
   hnueCCinFV_stack_13->SetBinContent(22,0.7157782);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.081307);
   hnueCCinFV_stack_13->SetBinError(2,1.888313);
   hnueCCinFV_stack_13->SetBinError(3,1.070718);
   hnueCCinFV_stack_13->SetBinError(4,0.340721);
   hnueCCinFV_stack_13->SetBinError(5,0.6973809);
   hnueCCinFV_stack_13->SetBinError(6,0.8863533);
   hnueCCinFV_stack_13->SetBinError(7,0.7092278);
   hnueCCinFV_stack_13->SetBinError(8,0.2758068);
   hnueCCinFV_stack_13->SetBinError(9,1.367485);
   hnueCCinFV_stack_13->SetBinError(10,0.7117962);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.4958181);
   hnueCCinFV_stack_13->SetBinError(15,0.3387718);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(19,1.075993);
   hnueCCinFV_stack_13->SetBinError(20,0.6658477);
   hnueCCinFV_stack_13->SetBinError(21,0.3929602);
   hnueCCinFV_stack_13->SetBinError(22,0.5560744);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__17->SetBinContent(1,75.13431);
   hmcerror__17->SetBinContent(2,185.2016);
   hmcerror__17->SetBinContent(3,269.3365);
   hmcerror__17->SetBinContent(4,298.7389);
   hmcerror__17->SetBinContent(5,290.3198);
   hmcerror__17->SetBinContent(6,280.7687);
   hmcerror__17->SetBinContent(7,245.2674);
   hmcerror__17->SetBinContent(8,220.7154);
   hmcerror__17->SetBinContent(9,174.1315);
   hmcerror__17->SetBinContent(10,152.3601);
   hmcerror__17->SetBinContent(11,108.2349);
   hmcerror__17->SetBinContent(12,94.12026);
   hmcerror__17->SetBinContent(13,79.31637);
   hmcerror__17->SetBinContent(14,62.42886);
   hmcerror__17->SetBinContent(15,64.56044);
   hmcerror__17->SetBinContent(16,55.96643);
   hmcerror__17->SetBinContent(17,50.09275);
   hmcerror__17->SetBinContent(18,52.9304);
   hmcerror__17->SetBinContent(19,52.91428);
   hmcerror__17->SetBinContent(20,43.4457);
   hmcerror__17->SetBinContent(21,34.49552);
   hmcerror__17->SetBinContent(22,31.94993);
   hmcerror__17->SetBinContent(23,17.11821);
   hmcerror__17->SetBinContent(24,6.558743);
   hmcerror__17->SetBinError(1,31.80234);
   hmcerror__17->SetBinError(2,51.39937);
   hmcerror__17->SetBinError(3,72.79711);
   hmcerror__17->SetBinError(4,75.96286);
   hmcerror__17->SetBinError(5,71.10419);
   hmcerror__17->SetBinError(6,75.34946);
   hmcerror__17->SetBinError(7,62.99667);
   hmcerror__17->SetBinError(8,61.25427);
   hmcerror__17->SetBinError(9,47.2328);
   hmcerror__17->SetBinError(10,40.96676);
   hmcerror__17->SetBinError(11,30.99793);
   hmcerror__17->SetBinError(12,30.63686);
   hmcerror__17->SetBinError(13,30.35607);
   hmcerror__17->SetBinError(14,20.00358);
   hmcerror__17->SetBinError(15,20.90257);
   hmcerror__17->SetBinError(16,20.39037);
   hmcerror__17->SetBinError(17,16.89829);
   hmcerror__17->SetBinError(18,17.99316);
   hmcerror__17->SetBinError(19,18.76773);
   hmcerror__17->SetBinError(20,16.80636);
   hmcerror__17->SetBinError(21,15.15442);
   hmcerror__17->SetBinError(22,15.25985);
   hmcerror__17->SetBinError(23,9.857611);
   hmcerror__17->SetBinError(24,5.644261);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(2916.026);

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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3021[24] = {
   63,
   166,
   301,
   310,
   313,
   256,
   242,
   200,
   169,
   127,
   115,
   80,
   93,
   60,
   71,
   76,
   49,
   55,
   57,
   44,
   41,
   25,
   20,
   5};
   Double_t _felx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3021[24] = {
   8.0648,
   12.8841,
   17.34935,
   17.60682,
   17.69181,
   16,
   15.55635,
   14.14214,
   13,
   11.26943,
   10.72381,
   9.0683,
   9.7658,
   7.8743,
   8.5518,
   8.8425,
   7.1318,
   7.546,
   7.679,
   6.7671,
   6.5384,
   5.1474,
   4.6266,
   2.48995};
   Double_t _fehx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3021[24] = {
   7.862,
   12.8841,
   17.34935,
   17.60682,
   17.69181,
   16,
   15.55635,
   14.14214,
   13,
   11.26943,
   10.72381,
   8.8665,
   9.564,
   7.6713,
   8.3496,
   8.6406,
   6.9277,
   7.3425,
   7.4757,
   6.5623,
   6.3331,
   4.9374,
   4.4133,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,3.465);
   Graph_Graph3021->SetMinimum(2.259045);
   Graph_Graph3021->SetMaximum(363.51);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3022[24] = {
   0.4232732,
   0.277532,
   0.2702831,
   0.2542784,
   0.2449168,
   0.2683685,
   0.256849,
   0.2775261,
   0.2712479,
   0.2688811,
   0.286395,
   0.3255076,
   0.3827214,
   0.320422,
   0.3237674,
   0.3643322,
   0.3373401,
   0.3399399,
   0.3546818,
   0.3868359,
   0.4393156,
   0.4776176,
   0.5758551,
   0.8605706};
   Double_t _fehx3022[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3022[24] = {
   0.4232732,
   0.277532,
   0.2702831,
   0.2542784,
   0.2449168,
   0.2683685,
   0.256849,
   0.2775261,
   0.2712479,
   0.2688811,
   0.286395,
   0.3255076,
   0.3827214,
   0.320422,
   0.3237674,
   0.3643322,
   0.3373401,
   0.3399399,
   0.3546818,
   0.3868359,
   0.4393156,
   0.4776176,
   0.5758551,
   0.8605706};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,3.465);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3023[24] = {
   0.2584195,
   0.2406423,
   0.2274153,
   0.2081149,
   0.2152925,
   0.218435,
   0.2259523,
   0.2307922,
   0.2382012,
   0.2187647,
   0.2320406,
   0.2124663,
   0.2154561,
   0.2338458,
   0.2381818,
   0.2168488,
   0.2127338,
   0.2231539,
   0.2092177,
   0.2139104,
   0.2283927,
   0.2367835,
   0.2407557,
   0.2999648};
   Double_t _fehx3023[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3023[24] = {
   0.2584195,
   0.2406423,
   0.2274153,
   0.2081149,
   0.2152925,
   0.218435,
   0.2259523,
   0.2307922,
   0.2382012,
   0.2187647,
   0.2320406,
   0.2124663,
   0.2154561,
   0.2338458,
   0.2381818,
   0.2168488,
   0.2127338,
   0.2231539,
   0.2092177,
   0.2139104,
   0.2283927,
   0.2367835,
   0.2407557,
   0.2999648};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,3.465);
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3024[24] = {
   0.8384984,
   0.8963205,
   1.117561,
   1.037695,
   1.078121,
   0.9117826,
   0.9866784,
   0.9061444,
   0.970531,
   0.8335514,
   1.062504,
   0.8499764,
   1.17252,
   0.961094,
   1.099745,
   1.357957,
   0.9781855,
   1.0391,
   1.077214,
   1.012759,
   1.18856,
   0.7824744,
   1.168346,
   0.7623413};
   Double_t _felx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3024[24] = {
   0.1073384,
   0.06956796,
   0.06441516,
   0.05893714,
   0.06093903,
   0.05698641,
   0.06342609,
   0.06407408,
   0.07465623,
   0.07396573,
   0.09907902,
   0.09634801,
   0.1231246,
   0.1261324,
   0.1324619,
   0.1579965,
   0.1423719,
   0.1425646,
   0.1451215,
   0.15576,
   0.1895434,
   0.1611083,
   0.2702735,
   0.3796383};
   Double_t _fehx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3024[24] = {
   0.1046393,
   0.06956796,
   0.06441516,
   0.05893714,
   0.06093903,
   0.05698641,
   0.06342609,
   0.06407408,
   0.07465623,
   0.07396573,
   0.09907902,
   0.09420395,
   0.1205804,
   0.1228807,
   0.12933,
   0.154389,
   0.1382975,
   0.1387199,
   0.1412794,
   0.151046,
   0.1835919,
   0.1545356,
   0.2578131,
   0.3370524};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,3.465);
   Graph_Graph3024->SetMinimum(0.2697386);
   Graph_Graph3024->SetMaximum(1.62531);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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

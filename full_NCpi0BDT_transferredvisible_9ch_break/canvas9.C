#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sun Jun  5 00:24:19 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-1.62,1692.308,179.1379);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hmc__25->SetBinContent(2,0.02789998);
   hmc__25->SetBinContent(3,3.658307);
   hmc__25->SetBinContent(4,36.07081);
   hmc__25->SetBinContent(5,52.72184);
   hmc__25->SetBinContent(6,72.93282);
   hmc__25->SetBinContent(7,67.43176);
   hmc__25->SetBinContent(8,72.82745);
   hmc__25->SetBinContent(9,78.09026);
   hmc__25->SetBinContent(10,58.78031);
   hmc__25->SetBinContent(11,45.77902);
   hmc__25->SetBinContent(12,45.47557);
   hmc__25->SetBinContent(13,35.25741);
   hmc__25->SetBinContent(14,24.47948);
   hmc__25->SetBinContent(15,18.97227);
   hmc__25->SetBinContent(16,12.77526);
   hmc__25->SetBinContent(17,12.38661);
   hmc__25->SetBinContent(18,7.510364);
   hmc__25->SetBinContent(19,9.367658);
   hmc__25->SetBinContent(20,4.967432);
   hmc__25->SetBinContent(21,40.97341);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,0.2099011);
   hmc__25->SetBinError(3,3.061428);
   hmc__25->SetBinError(4,7.706573);
   hmc__25->SetBinError(5,13.24671);
   hmc__25->SetBinError(6,17.00455);
   hmc__25->SetBinError(7,16.66916);
   hmc__25->SetBinError(8,19.7107);
   hmc__25->SetBinError(9,21.76108);
   hmc__25->SetBinError(10,14.87122);
   hmc__25->SetBinError(11,14.49391);
   hmc__25->SetBinError(12,12.15939);
   hmc__25->SetBinError(13,12.01735);
   hmc__25->SetBinError(14,9.475851);
   hmc__25->SetBinError(15,9.659887);
   hmc__25->SetBinError(16,5.435375);
   hmc__25->SetBinError(17,5.850049);
   hmc__25->SetBinError(18,6.389373);
   hmc__25->SetBinError(19,6.489756);
   hmc__25->SetBinError(20,3.961276);
   hmc__25->SetBinError(21,13.20298);
   hmc__25->SetMinimum(-1.62);
   hmc__25->SetMaximum(170.1);
   hmc__25->SetEntries(684.3796);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,1500);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(81.99478);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(3,0.3917402);
   hbadmatch_stack_1->SetBinContent(4,0.1967154);
   hbadmatch_stack_1->SetBinContent(5,1.308337);
   hbadmatch_stack_1->SetBinContent(6,2.677953);
   hbadmatch_stack_1->SetBinContent(7,2.265703);
   hbadmatch_stack_1->SetBinContent(8,2.003762);
   hbadmatch_stack_1->SetBinContent(9,3.231381);
   hbadmatch_stack_1->SetBinContent(10,2.398429);
   hbadmatch_stack_1->SetBinContent(11,2.377371);
   hbadmatch_stack_1->SetBinContent(12,0.8351213);
   hbadmatch_stack_1->SetBinContent(13,1.318683);
   hbadmatch_stack_1->SetBinContent(14,0.9303237);
   hbadmatch_stack_1->SetBinContent(15,0.9252522);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.6360607);
   hbadmatch_stack_1->SetBinContent(18,0.5352025);
   hbadmatch_stack_1->SetBinContent(19,0.9042579);
   hbadmatch_stack_1->SetBinContent(21,0.5352025);
   hbadmatch_stack_1->SetBinError(3,0.2770047);
   hbadmatch_stack_1->SetBinError(4,0.1967154);
   hbadmatch_stack_1->SetBinError(5,0.6031994);
   hbadmatch_stack_1->SetBinError(6,0.8837127);
   hbadmatch_stack_1->SetBinError(7,0.779504);
   hbadmatch_stack_1->SetBinError(8,0.6810301);
   hbadmatch_stack_1->SetBinError(9,0.940988);
   hbadmatch_stack_1->SetBinError(10,0.8600065);
   hbadmatch_stack_1->SetBinError(11,0.7713162);
   hbadmatch_stack_1->SetBinError(12,0.419647);
   hbadmatch_stack_1->SetBinError(13,0.5542732);
   hbadmatch_stack_1->SetBinError(14,0.4814682);
   hbadmatch_stack_1->SetBinError(15,0.4794006);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.4822316);
   hbadmatch_stack_1->SetBinError(18,0.3921167);
   hbadmatch_stack_1->SetBinError(19,0.5306355);
   hbadmatch_stack_1->SetBinError(21,0.3921167);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1546;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hext_stack_2->SetBinContent(4,10.85119);
   hext_stack_2->SetBinContent(5,6.952434);
   hext_stack_2->SetBinContent(6,5.243836);
   hext_stack_2->SetBinContent(7,5.180405);
   hext_stack_2->SetBinContent(8,4.620993);
   hext_stack_2->SetBinContent(9,9.112292);
   hext_stack_2->SetBinContent(10,6.77367);
   hext_stack_2->SetBinContent(11,4.696014);
   hext_stack_2->SetBinContent(12,10.07112);
   hext_stack_2->SetBinContent(13,3.241202);
   hext_stack_2->SetBinContent(14,2.103607);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,2.185808);
   hext_stack_2->SetBinContent(17,2.352983);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,1.614806);
   hext_stack_2->SetBinContent(21,12.40975);
   hext_stack_2->SetBinError(4,2.54358);
   hext_stack_2->SetBinError(5,1.808318);
   hext_stack_2->SetBinError(6,1.596444);
   hext_stack_2->SetBinError(7,1.49039);
   hext_stack_2->SetBinError(8,1.367364);
   hext_stack_2->SetBinError(9,2.179763);
   hext_stack_2->SetBinError(10,1.884738);
   hext_stack_2->SetBinError(11,1.459786);
   hext_stack_2->SetBinError(12,2.33869);
   hext_stack_2->SetBinError(13,1.178414);
   hext_stack_2->SetBinError(14,0.9761052);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,1.006415);
   hext_stack_2->SetBinError(17,0.8925942);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.8528597);
   hext_stack_2->SetBinError(21,2.582362);
   hext_stack_2->SetEntries(193);

   ci = 1547;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hdirt_stack_3->SetBinContent(4,0.2623434);
   hdirt_stack_3->SetBinContent(5,0.8315581);
   hdirt_stack_3->SetBinContent(6,0.6001908);
   hdirt_stack_3->SetBinContent(7,0.6514999);
   hdirt_stack_3->SetBinContent(8,0.7414299);
   hdirt_stack_3->SetBinContent(9,0.4149213);
   hdirt_stack_3->SetBinContent(10,0.7430996);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinError(4,0.2623434);
   hdirt_stack_3->SetBinError(5,0.5225181);
   hdirt_stack_3->SetBinError(6,0.4278042);
   hdirt_stack_3->SetBinError(7,0.3324499);
   hdirt_stack_3->SetBinError(8,0.4500156);
   hdirt_stack_3->SetBinError(9,0.4149213);
   hdirt_stack_3->SetBinError(10,0.5275648);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetEntries(19);

   ci = 1548;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   houtFV_stack_4->SetBinContent(3,0.7319179);
   houtFV_stack_4->SetBinContent(4,7.772005);
   houtFV_stack_4->SetBinContent(5,9.576851);
   houtFV_stack_4->SetBinContent(6,11.76821);
   houtFV_stack_4->SetBinContent(7,13.90587);
   houtFV_stack_4->SetBinContent(8,13.08643);
   houtFV_stack_4->SetBinContent(9,14.13903);
   houtFV_stack_4->SetBinContent(10,12.73912);
   houtFV_stack_4->SetBinContent(11,7.537262);
   houtFV_stack_4->SetBinContent(12,6.568121);
   houtFV_stack_4->SetBinContent(13,5.611527);
   houtFV_stack_4->SetBinContent(14,4.342205);
   houtFV_stack_4->SetBinContent(15,4.681439);
   houtFV_stack_4->SetBinContent(16,1.962082);
   houtFV_stack_4->SetBinContent(17,1.070405);
   houtFV_stack_4->SetBinContent(18,2.486059);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.8770706);
   houtFV_stack_4->SetBinContent(21,2.245626);
   houtFV_stack_4->SetBinError(3,0.438694);
   houtFV_stack_4->SetBinError(4,1.440329);
   houtFV_stack_4->SetBinError(5,1.600893);
   houtFV_stack_4->SetBinError(6,1.63219);
   houtFV_stack_4->SetBinError(7,1.800879);
   houtFV_stack_4->SetBinError(8,1.814069);
   houtFV_stack_4->SetBinError(9,1.890129);
   houtFV_stack_4->SetBinError(10,1.81905);
   houtFV_stack_4->SetBinError(11,1.331617);
   houtFV_stack_4->SetBinError(12,1.291498);
   houtFV_stack_4->SetBinError(13,1.266449);
   houtFV_stack_4->SetBinError(14,1.163825);
   houtFV_stack_4->SetBinError(15,1.124245);
   houtFV_stack_4->SetBinError(16,0.6204697);
   houtFV_stack_4->SetBinError(17,0.5545368);
   houtFV_stack_4->SetBinError(18,0.8559962);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.5197486);
   houtFV_stack_4->SetBinError(21,0.7332843);
   houtFV_stack_4->SetEntries(520);

   ci = 1549;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.5440542);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2957079);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1550;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1551;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.102222);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.493594);
   hNCpi0inFVres_stack_7->SetBinContent(5,17.4017);
   hNCpi0inFVres_stack_7->SetBinContent(6,22.48018);
   hNCpi0inFVres_stack_7->SetBinContent(7,22.33519);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.1614);
   hNCpi0inFVres_stack_7->SetBinContent(9,18.29368);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.21253);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.825233);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.59705);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.350592);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.569056);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.38463);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.5852358);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.9346539);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.5996859);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.14474);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.362868);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.449976);
   hNCpi0inFVres_stack_7->SetBinError(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3684702);
   hNCpi0inFVres_stack_7->SetBinError(4,0.963266);
   hNCpi0inFVres_stack_7->SetBinError(5,1.343081);
   hNCpi0inFVres_stack_7->SetBinError(6,1.53806);
   hNCpi0inFVres_stack_7->SetBinError(7,1.514065);
   hNCpi0inFVres_stack_7->SetBinError(8,1.44965);
   hNCpi0inFVres_stack_7->SetBinError(9,1.448643);
   hNCpi0inFVres_stack_7->SetBinError(10,1.11694);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9449426);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8467163);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6955039);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6296129);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5138875);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1727406);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3135935);
   hNCpi0inFVres_stack_7->SetBinError(18,0.237152);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4423905);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2070706);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4071111);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1552;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.565648);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.041116);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.903856);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.755642);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.821988);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.831198);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.313548);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.776567);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.533012);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.008312);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6833858);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.96189);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4600178);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6980042);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.161262);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2608584);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5252489);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6114764);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6369877);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7218207);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6889916);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5561419);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4656776);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.626515);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4261073);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4968153);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2420254);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3355772);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1399647);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3431282);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4744409);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1553;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1554;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);

   ci = 1555;
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
   hs9->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(4,1.121968);
   hCCpi0inFV_stack_11->SetBinContent(5,1.763676);
   hCCpi0inFV_stack_11->SetBinContent(6,7.327744);
   hCCpi0inFV_stack_11->SetBinContent(7,11.23614);
   hCCpi0inFV_stack_11->SetBinContent(8,14.66032);
   hCCpi0inFV_stack_11->SetBinContent(9,16.66372);
   hCCpi0inFV_stack_11->SetBinContent(10,13.96214);
   hCCpi0inFV_stack_11->SetBinContent(11,12.9171);
   hCCpi0inFV_stack_11->SetBinContent(12,11.02074);
   hCCpi0inFV_stack_11->SetBinContent(13,13.41784);
   hCCpi0inFV_stack_11->SetBinContent(14,8.675522);
   hCCpi0inFV_stack_11->SetBinContent(15,7.392861);
   hCCpi0inFV_stack_11->SetBinContent(16,4.563414);
   hCCpi0inFV_stack_11->SetBinContent(17,4.343326);
   hCCpi0inFV_stack_11->SetBinContent(18,2.492568);
   hCCpi0inFV_stack_11->SetBinContent(19,3.751489);
   hCCpi0inFV_stack_11->SetBinContent(20,1.370245);
   hCCpi0inFV_stack_11->SetBinContent(21,15.59237);
   hCCpi0inFV_stack_11->SetBinError(4,0.5181909);
   hCCpi0inFV_stack_11->SetBinError(5,0.5878975);
   hCCpi0inFV_stack_11->SetBinError(6,1.368662);
   hCCpi0inFV_stack_11->SetBinError(7,1.677188);
   hCCpi0inFV_stack_11->SetBinError(8,1.940623);
   hCCpi0inFV_stack_11->SetBinError(9,2.083611);
   hCCpi0inFV_stack_11->SetBinError(10,1.829619);
   hCCpi0inFV_stack_11->SetBinError(11,1.801889);
   hCCpi0inFV_stack_11->SetBinError(12,1.663522);
   hCCpi0inFV_stack_11->SetBinError(13,1.863667);
   hCCpi0inFV_stack_11->SetBinError(14,1.519632);
   hCCpi0inFV_stack_11->SetBinError(15,1.333014);
   hCCpi0inFV_stack_11->SetBinError(16,1.052341);
   hCCpi0inFV_stack_11->SetBinError(17,1.093173);
   hCCpi0inFV_stack_11->SetBinError(18,0.7737484);
   hCCpi0inFV_stack_11->SetBinError(19,1.0384);
   hCCpi0inFV_stack_11->SetBinError(20,0.5179089);
   hCCpi0inFV_stack_11->SetBinError(21,2.043339);
   hCCpi0inFV_stack_11->SetEntries(647);

   ci = 1556;
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
   hs9->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(3,0.1967154);
   hNCinFV_stack_12->SetBinContent(4,0.3401776);
   hNCinFV_stack_12->SetBinContent(5,2.000729);
   hNCinFV_stack_12->SetBinContent(6,2.145881);
   hNCinFV_stack_12->SetBinContent(7,1.175221);
   hNCinFV_stack_12->SetBinContent(8,1.573723);
   hNCinFV_stack_12->SetBinContent(9,0.9785053);
   hNCinFV_stack_12->SetBinContent(10,1.070405);
   hNCinFV_stack_12->SetBinContent(11,0.7868615);
   hNCinFV_stack_12->SetBinContent(12,1.125349);
   hNCinFV_stack_12->SetBinContent(13,1.268811);
   hNCinFV_stack_12->SetBinContent(14,0.9223309);
   hNCinFV_stack_12->SetBinContent(15,0.7319179);
   hNCinFV_stack_12->SetBinContent(17,1.072095);
   hNCinFV_stack_12->SetBinContent(19,0.536893);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.3401776);
   hNCinFV_stack_12->SetBinError(3,0.1967154);
   hNCinFV_stack_12->SetBinError(4,0.3401776);
   hNCinFV_stack_12->SetBinError(5,0.7343859);
   hNCinFV_stack_12->SetBinError(6,0.785499);
   hNCinFV_stack_12->SetBinError(7,0.4797863);
   hNCinFV_stack_12->SetBinError(8,0.5563951);
   hNCinFV_stack_12->SetBinError(9,0.4376048);
   hNCinFV_stack_12->SetBinError(10,0.5545368);
   hNCinFV_stack_12->SetBinError(11,0.3934307);
   hNCinFV_stack_12->SetBinError(12,0.5194673);
   hNCinFV_stack_12->SetBinError(13,0.5889569);
   hNCinFV_stack_12->SetBinError(14,0.52123);
   hNCinFV_stack_12->SetBinError(15,0.438694);
   hNCinFV_stack_12->SetBinError(17,0.5551335);
   hNCinFV_stack_12->SetBinError(19,0.3929602);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.3401776);
   hNCinFV_stack_12->SetEntries(70);

   ci = 1557;
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
   hs9->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(3,0.9844429);
   hnumuCCinFV_stack_13->SetBinContent(4,6.168415);
   hnumuCCinFV_stack_13->SetBinContent(5,10.23721);
   hnumuCCinFV_stack_13->SetBinContent(6,17.24348);
   hnumuCCinFV_stack_13->SetBinContent(7,6.526765);
   hnumuCCinFV_stack_13->SetBinContent(8,12.00038);
   hnumuCCinFV_stack_13->SetBinContent(9,10.78625);
   hnumuCCinFV_stack_13->SetBinContent(10,6.421167);
   hnumuCCinFV_stack_13->SetBinContent(11,6.297722);
   hnumuCCinFV_stack_13->SetBinContent(12,6.453595);
   hnumuCCinFV_stack_13->SetBinContent(13,2.275729);
   hnumuCCinFV_stack_13->SetBinContent(14,1.734245);
   hnumuCCinFV_stack_13->SetBinContent(15,1.441787);
   hnumuCCinFV_stack_13->SetBinContent(16,1.693625);
   hnumuCCinFV_stack_13->SetBinContent(17,1.01975);
   hnumuCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnumuCCinFV_stack_13->SetBinContent(19,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(20,0.9788884);
   hnumuCCinFV_stack_13->SetBinContent(21,3.157965);
   hnumuCCinFV_stack_13->SetBinError(3,0.492305);
   hnumuCCinFV_stack_13->SetBinError(4,1.836957);
   hnumuCCinFV_stack_13->SetBinError(5,1.707825);
   hnumuCCinFV_stack_13->SetBinError(6,2.588947);
   hnumuCCinFV_stack_13->SetBinError(7,1.288793);
   hnumuCCinFV_stack_13->SetBinError(8,2.416117);
   hnumuCCinFV_stack_13->SetBinError(9,1.742916);
   hnumuCCinFV_stack_13->SetBinError(10,1.29012);
   hnumuCCinFV_stack_13->SetBinError(11,1.574514);
   hnumuCCinFV_stack_13->SetBinError(12,1.33036);
   hnumuCCinFV_stack_13->SetBinError(13,0.8549674);
   hnumuCCinFV_stack_13->SetBinError(14,0.7391994);
   hnumuCCinFV_stack_13->SetBinError(15,0.6605881);
   hnumuCCinFV_stack_13->SetBinError(16,0.6736968);
   hnumuCCinFV_stack_13->SetBinError(17,0.5346689);
   hnumuCCinFV_stack_13->SetBinError(18,0.1950249);
   hnumuCCinFV_stack_13->SetBinError(19,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(20,0.5034351);
   hnumuCCinFV_stack_13->SetBinError(21,0.9124032);
   hnumuCCinFV_stack_13->SetEntries(361);

   ci = 1558;
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
   hs9->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(9,0.536893);
   hnueCCinFV_stack_14->SetBinContent(10,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(13,1.919326);
   hnueCCinFV_stack_14->SetBinContent(16,0.5985879);
   hnueCCinFV_stack_14->SetBinContent(17,0.4694181);
   hnueCCinFV_stack_14->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(21,2.341565);
   hnueCCinFV_stack_14->SetBinError(9,0.3929602);
   hnueCCinFV_stack_14->SetBinError(10,0.2770047);
   hnueCCinFV_stack_14->SetBinError(13,1.589338);
   hnueCCinFV_stack_14->SetBinError(16,0.4334685);
   hnueCCinFV_stack_14->SetBinError(17,0.3326517);
   hnueCCinFV_stack_14->SetBinError(20,0.3401776);
   hnueCCinFV_stack_14->SetBinError(21,1.286902);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1559;
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
   hs9->Add(hnueCCinFV_stack_14,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hmcerror__26->SetBinContent(2,0.02789998);
   hmcerror__26->SetBinContent(3,3.658307);
   hmcerror__26->SetBinContent(4,36.07081);
   hmcerror__26->SetBinContent(5,52.72184);
   hmcerror__26->SetBinContent(6,72.93282);
   hmcerror__26->SetBinContent(7,67.43176);
   hmcerror__26->SetBinContent(8,72.82745);
   hmcerror__26->SetBinContent(9,78.09026);
   hmcerror__26->SetBinContent(10,58.78031);
   hmcerror__26->SetBinContent(11,45.77902);
   hmcerror__26->SetBinContent(12,45.47557);
   hmcerror__26->SetBinContent(13,35.25741);
   hmcerror__26->SetBinContent(14,24.47948);
   hmcerror__26->SetBinContent(15,18.97227);
   hmcerror__26->SetBinContent(16,12.77526);
   hmcerror__26->SetBinContent(17,12.38661);
   hmcerror__26->SetBinContent(18,7.510364);
   hmcerror__26->SetBinContent(19,9.367658);
   hmcerror__26->SetBinContent(20,4.967432);
   hmcerror__26->SetBinContent(21,40.97341);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,0.2099011);
   hmcerror__26->SetBinError(3,3.061428);
   hmcerror__26->SetBinError(4,7.706573);
   hmcerror__26->SetBinError(5,13.24671);
   hmcerror__26->SetBinError(6,17.00455);
   hmcerror__26->SetBinError(7,16.66916);
   hmcerror__26->SetBinError(8,19.7107);
   hmcerror__26->SetBinError(9,21.76108);
   hmcerror__26->SetBinError(10,14.87122);
   hmcerror__26->SetBinError(11,14.49391);
   hmcerror__26->SetBinError(12,12.15939);
   hmcerror__26->SetBinError(13,12.01735);
   hmcerror__26->SetBinError(14,9.475851);
   hmcerror__26->SetBinError(15,9.659887);
   hmcerror__26->SetBinError(16,5.435375);
   hmcerror__26->SetBinError(17,5.850049);
   hmcerror__26->SetBinError(18,6.389373);
   hmcerror__26->SetBinError(19,6.489756);
   hmcerror__26->SetBinError(20,3.961276);
   hmcerror__26->SetBinError(21,13.20298);
   hmcerror__26->SetEntries(684.3796);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[20] = {
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
   Double_t _fy3033[20] = {
   0,
   0,
   2,
   27,
   49,
   73,
   81,
   60,
   59,
   53,
   28,
   35,
   28,
   18,
   12,
   10,
   9,
   7,
   7,
   5};
   Double_t _felx3033[20] = {
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
   Double_t _fely3033[20] = {
   0,
   0,
   2,
   5.3414,
   7.1318,
   8.6693,
   9.1239,
   7.8743,
   7.8097,
   7.4105,
   5.4358,
   6.0548,
   5.4358,
   4.4008,
   3.64022,
   3.34883,
   3.19354,
   2.85954,
   2.85954,
   2.48995};
   Double_t _fehx3033[20] = {
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
   Double_t _fehy3033[20] = {
   1.1478,
   1.1478,
   1.51917,
   5.1322,
   6.9277,
   8.4672,
   8.9221,
   7.6713,
   7.6066,
   7.2068,
   5.2271,
   5.8483,
   5.2271,
   4.1858,
   3.4155,
   3.1179,
   2.9582,
   2.61053,
   2.61053,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1650);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(98.91431);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 563.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 76.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1548;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 119.1","F");

   ci = 1549;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.6","F");

   ci = 1550;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1551;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  149.9","F");

   ci = 1552;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.8","F");

   ci = 1553;
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

   ci = 1554;
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

   ci = 1555;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 136.7","F");

   ci = 1556;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 16.3","F");

   ci = 1557;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 93.0","F");

   ci = 1558;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 4.3","F");

   ci = 1559;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_transferred_visible_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[20] = {
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
   Double_t _fy3034[20] = {
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
   Double_t _felx3034[20] = {
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
   Double_t _fely3034[20] = {
   0,
   7.523342,
   0.8368428,
   0.2136512,
   0.2512566,
   0.2331536,
   0.2472004,
   0.2706493,
   0.2786658,
   0.2529966,
   0.3166061,
   0.267383,
   0.3408462,
   0.3870937,
   0.5091582,
   0.425461,
   0.4722882,
   0.8507409,
   0.6927832,
   0.7974494};
   Double_t _fehx3034[20] = {
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
   Double_t _fehy3034[20] = {
   0,
   7.523342,
   0.8368428,
   0.2136512,
   0.2512566,
   0.2331536,
   0.2472004,
   0.2706493,
   0.2786658,
   0.2529966,
   0.3166061,
   0.267383,
   0.3408462,
   0.3870937,
   0.5091582,
   0.425461,
   0.4722882,
   0.8507409,
   0.6927832,
   0.7974494};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1650);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Transferred Visible Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[20] = {
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
   Double_t _fy3035[20] = {
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
   Double_t _felx3035[20] = {
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
   Double_t _fely3035[20] = {
   0,
   7.523342,
   0.3413146,
   0.1848925,
   0.2135088,
   0.2100226,
   0.218715,
   0.208149,
   0.2045708,
   0.1933156,
   0.2265423,
   0.2016728,
   0.2205907,
   0.2182201,
   0.273973,
   0.2425294,
   0.2419216,
   0.2764649,
   0.2803096,
   0.3919689};
   Double_t _fehx3035[20] = {
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
   Double_t _fehy3035[20] = {
   0,
   7.523342,
   0.3413146,
   0.1848925,
   0.2135088,
   0.2100226,
   0.218715,
   0.208149,
   0.2045708,
   0.1933156,
   0.2265423,
   0.2016728,
   0.2205907,
   0.2182201,
   0.273973,
   0.2425294,
   0.2419216,
   0.2764649,
   0.2803096,
   0.3919689};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1650);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[20] = {
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
   Double_t _fy3036[20] = {
   10,
   0,
   0.546701,
   0.7485276,
   0.9294062,
   1.000921,
   1.201214,
   0.8238652,
   0.755536,
   0.9016625,
   0.6116339,
   0.769644,
   0.7941593,
   0.7353099,
   0.632502,
   0.782763,
   0.7265911,
   0.9320454,
   0.7472519,
   1.006556};
   Double_t _felx3036[20] = {
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
   Double_t _fely3036[20] = {
   0,
   0,
   0.546701,
   0.1480809,
   0.1352722,
   0.1188669,
   0.1353057,
   0.1081227,
   0.1000086,
   0.1260711,
   0.11874,
   0.133144,
   0.1541747,
   0.1797751,
   0.1918705,
   0.262134,
   0.257822,
   0.3807459,
   0.3052567,
   0.501255};
   Double_t _fehx3036[20] = {
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
   Double_t _fehy3036[20] = {
   0,
   41.13981,
   0.4152659,
   0.1422812,
   0.131401,
   0.1160959,
   0.132313,
   0.1053353,
   0.0974078,
   0.1226057,
   0.1141811,
   0.1286031,
   0.1482554,
   0.1709922,
   0.1800259,
   0.2440577,
   0.2388224,
   0.3475904,
   0.2786748,
   0.4450268};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1650);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(45.25379);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_transferred_visible_all",20,0,1500);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 15:55:17 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.2307692,-4.150568,6.641026,458.9654);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmc__22->SetBinContent(4,203.7721);
   hmc__22->SetBinContent(5,207.5284);
   hmc__22->SetBinContent(6,157.339);
   hmc__22->SetBinContent(7,115.8133);
   hmc__22->SetBinContent(8,80.03488);
   hmc__22->SetBinContent(9,69.58847);
   hmc__22->SetBinContent(10,45.26131);
   hmc__22->SetBinContent(11,32.01732);
   hmc__22->SetBinContent(12,20.85292);
   hmc__22->SetBinContent(13,15.49257);
   hmc__22->SetBinContent(14,8.264744);
   hmc__22->SetBinContent(15,3.715374);
   hmc__22->SetBinContent(16,2.62849);
   hmc__22->SetBinContent(17,1.284601);
   hmc__22->SetBinContent(18,0.279168);
   hmc__22->SetBinContent(19,0.125218);
   hmc__22->SetBinError(1,0.3895343);
   hmc__22->SetBinError(2,0.3895343);
   hmc__22->SetBinError(3,0.3895343);
   hmc__22->SetBinError(4,47.51634);
   hmc__22->SetBinError(5,54.32088);
   hmc__22->SetBinError(6,49.96535);
   hmc__22->SetBinError(7,40.0798);
   hmc__22->SetBinError(8,24.63078);
   hmc__22->SetBinError(9,22.50168);
   hmc__22->SetBinError(10,19.24214);
   hmc__22->SetBinError(11,15.48417);
   hmc__22->SetBinError(12,11.94245);
   hmc__22->SetBinError(13,8.676759);
   hmc__22->SetBinError(14,8.183356);
   hmc__22->SetBinError(15,3.556964);
   hmc__22->SetBinError(16,3.227852);
   hmc__22->SetBinError(17,2.103425);
   hmc__22->SetBinError(18,1.572955);
   hmc__22->SetBinError(19,2.250459);
   hmc__22->SetBinError(20,0.3895343);
   hmc__22->SetBinError(21,0.3895343);
   hmc__22->SetMinimum(-4.150568);
   hmc__22->SetMaximum(435.8096);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,1,6);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(217.9048);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,8.893473);
   hbadmatch_stack_1->SetBinContent(5,9.473019);
   hbadmatch_stack_1->SetBinContent(6,4.752629);
   hbadmatch_stack_1->SetBinContent(7,2.839153);
   hbadmatch_stack_1->SetBinContent(8,2.888099);
   hbadmatch_stack_1->SetBinContent(9,1.551647);
   hbadmatch_stack_1->SetBinContent(10,0.9303263);
   hbadmatch_stack_1->SetBinContent(11,0.8753801);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.1950248);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinError(4,1.671107);
   hbadmatch_stack_1->SetBinError(5,1.928882);
   hbadmatch_stack_1->SetBinError(6,1.096809);
   hbadmatch_stack_1->SetBinError(7,0.8093956);
   hbadmatch_stack_1->SetBinError(8,0.9457089);
   hbadmatch_stack_1->SetBinError(9,0.6012411);
   hbadmatch_stack_1->SetBinError(10,0.4814682);
   hbadmatch_stack_1->SetBinError(11,0.5191111);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.1950249);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,60.55328);
   hext_stack_2->SetBinContent(5,53.44803);
   hext_stack_2->SetBinContent(6,31.62748);
   hext_stack_2->SetBinContent(7,23.17558);
   hext_stack_2->SetBinContent(8,14.03897);
   hext_stack_2->SetBinContent(9,7.384983);
   hext_stack_2->SetBinContent(10,4.95257);
   hext_stack_2->SetBinContent(11,3.61467);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinError(4,5.310471);
   hext_stack_2->SetBinError(5,4.974417);
   hext_stack_2->SetBinError(6,3.752541);
   hext_stack_2->SetBinError(7,3.078082);
   hext_stack_2->SetBinError(8,2.379738);
   hext_stack_2->SetBinError(9,1.722456);
   hext_stack_2->SetBinError(10,1.331809);
   hext_stack_2->SetBinError(11,1.491196);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,3.757578);
   hdirt_stack_3->SetBinContent(5,6.799173);
   hdirt_stack_3->SetBinContent(6,4.064993);
   hdirt_stack_3->SetBinContent(7,1.371529);
   hdirt_stack_3->SetBinContent(8,2.22359);
   hdirt_stack_3->SetBinContent(9,0.7294204);
   hdirt_stack_3->SetBinContent(10,0.1608405);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinError(4,0.9724039);
   hdirt_stack_3->SetBinError(5,1.561955);
   hdirt_stack_3->SetBinError(6,1.069622);
   hdirt_stack_3->SetBinError(7,0.6403833);
   hdirt_stack_3->SetBinError(8,0.8231287);
   hdirt_stack_3->SetBinError(9,0.4071165);
   hdirt_stack_3->SetBinError(10,0.1608405);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,52.55624);
   houtFV_stack_4->SetBinContent(5,46.51891);
   houtFV_stack_4->SetBinContent(6,41.79505);
   houtFV_stack_4->SetBinContent(7,22.93986);
   houtFV_stack_4->SetBinContent(8,15.95035);
   houtFV_stack_4->SetBinContent(9,11.17758);
   houtFV_stack_4->SetBinContent(10,7.590687);
   houtFV_stack_4->SetBinContent(11,1.857273);
   houtFV_stack_4->SetBinContent(12,2.592565);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinError(4,3.737644);
   houtFV_stack_4->SetBinError(5,3.598134);
   houtFV_stack_4->SetBinError(6,3.350076);
   houtFV_stack_4->SetBinError(7,2.361536);
   houtFV_stack_4->SetBinError(8,2.022027);
   houtFV_stack_4->SetBinError(9,1.688209);
   houtFV_stack_4->SetBinError(10,1.390623);
   houtFV_stack_4->SetBinError(11,0.6799255);
   houtFV_stack_4->SetBinError(12,0.809985);
   houtFV_stack_4->SetBinError(13,0.1967154);
   houtFV_stack_4->SetBinError(14,0.3401776);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.11584);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.68513);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.241722);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.589644);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.8501219);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7112858);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.855362);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.15719);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.044758);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3780289);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3749265);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3737142);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4498782);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2770189);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2436282);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5182246);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3435999);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3093236);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.80125);
   hNCpi0inFVres_stack_7->SetBinContent(5,15.68434);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.77087);
   hNCpi0inFVres_stack_7->SetBinContent(7,15.2655);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.55919);
   hNCpi0inFVres_stack_7->SetBinContent(9,14.27622);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.17009);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.830643);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.058307);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.95859);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.48926);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.312716);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.772326);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.6420361);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2512681);
   hNCpi0inFVres_stack_7->SetBinError(4,1.200575);
   hNCpi0inFVres_stack_7->SetBinError(5,1.238317);
   hNCpi0inFVres_stack_7->SetBinError(6,1.288053);
   hNCpi0inFVres_stack_7->SetBinError(7,1.206746);
   hNCpi0inFVres_stack_7->SetBinError(8,1.044831);
   hNCpi0inFVres_stack_7->SetBinError(9,1.259226);
   hNCpi0inFVres_stack_7->SetBinError(10,1.109539);
   hNCpi0inFVres_stack_7->SetBinError(11,1.057115);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8486669);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8870131);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6843621);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4445103);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5027214);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2888274);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1994106);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.622855);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.201546);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.19697);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.201882);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.229511);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.16891);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.956416);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.55203);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.701076);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.575194);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6682718);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.542143);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7614009);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6118998);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.803274);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3860085);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6967154);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5652814);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5184118);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4156262);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.41951);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.213699);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,32.55278);
   hCCpi0inFV_stack_10->SetBinContent(5,39.00461);
   hCCpi0inFV_stack_10->SetBinContent(6,29.08409);
   hCCpi0inFV_stack_10->SetBinContent(7,23.74333);
   hCCpi0inFV_stack_10->SetBinContent(8,18.1802);
   hCCpi0inFV_stack_10->SetBinContent(9,16.08443);
   hCCpi0inFV_stack_10->SetBinContent(10,10.60332);
   hCCpi0inFV_stack_10->SetBinContent(11,7.498291);
   hCCpi0inFV_stack_10->SetBinContent(12,3.71226);
   hCCpi0inFV_stack_10->SetBinContent(13,4.34528);
   hCCpi0inFV_stack_10->SetBinContent(14,1.591017);
   hCCpi0inFV_stack_10->SetBinContent(15,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(17,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,2.873694);
   hCCpi0inFV_stack_10->SetBinError(5,3.177163);
   hCCpi0inFV_stack_10->SetBinError(6,2.669274);
   hCCpi0inFV_stack_10->SetBinError(7,2.472524);
   hCCpi0inFV_stack_10->SetBinError(8,2.164869);
   hCCpi0inFV_stack_10->SetBinError(9,2.057857);
   hCCpi0inFV_stack_10->SetBinError(10,1.618039);
   hCCpi0inFV_stack_10->SetBinError(11,1.379326);
   hCCpi0inFV_stack_10->SetBinError(12,0.9776735);
   hCCpi0inFV_stack_10->SetBinError(13,1.028812);
   hCCpi0inFV_stack_10->SetBinError(14,0.7182787);
   hCCpi0inFV_stack_10->SetBinError(15,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(17,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,4.838191);
   hNCinFV_stack_11->SetBinContent(5,5.766824);
   hNCinFV_stack_11->SetBinContent(6,5.908596);
   hNCinFV_stack_11->SetBinContent(7,5.663699);
   hNCinFV_stack_11->SetBinContent(8,2.784209);
   hNCinFV_stack_11->SetBinContent(9,4.396579);
   hNCinFV_stack_11->SetBinContent(10,1.857266);
   hNCinFV_stack_11->SetBinContent(11,2.144191);
   hNCinFV_stack_11->SetBinContent(12,1.318683);
   hNCinFV_stack_11->SetBinContent(13,0.7302274);
   hNCinFV_stack_11->SetBinContent(14,0.3401776);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.1950248);
   hNCinFV_stack_11->SetBinError(4,1.092603);
   hNCinFV_stack_11->SetBinError(5,1.193705);
   hNCinFV_stack_11->SetBinError(6,1.225272);
   hNCinFV_stack_11->SetBinError(7,1.225932);
   hNCinFV_stack_11->SetBinError(8,0.8323376);
   hNCinFV_stack_11->SetBinError(9,1.075501);
   hNCinFV_stack_11->SetBinError(10,0.6799255);
   hNCinFV_stack_11->SetBinError(11,0.7850774);
   hNCinFV_stack_11->SetBinError(12,0.5542732);
   hNCinFV_stack_11->SetBinError(13,0.4379386);
   hNCinFV_stack_11->SetBinError(14,0.3401776);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.1950249);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,21.21231);
   hnumuCCinFV_stack_12->SetBinContent(5,22.82835);
   hnumuCCinFV_stack_12->SetBinContent(6,17.29697);
   hnumuCCinFV_stack_12->SetBinContent(7,13.05662);
   hnumuCCinFV_stack_12->SetBinContent(8,7.705721);
   hnumuCCinFV_stack_12->SetBinContent(9,8.743948);
   hnumuCCinFV_stack_12->SetBinContent(10,3.048096);
   hnumuCCinFV_stack_12->SetBinContent(11,1.623506);
   hnumuCCinFV_stack_12->SetBinContent(12,1.597093);
   hnumuCCinFV_stack_12->SetBinContent(13,0.586);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(4,2.616619);
   hnumuCCinFV_stack_12->SetBinError(5,2.409722);
   hnumuCCinFV_stack_12->SetBinError(6,2.263187);
   hnumuCCinFV_stack_12->SetBinError(7,2.863235);
   hnumuCCinFV_stack_12->SetBinError(8,1.392409);
   hnumuCCinFV_stack_12->SetBinError(9,2.339046);
   hnumuCCinFV_stack_12->SetBinError(10,0.9593522);
   hnumuCCinFV_stack_12->SetBinError(11,0.6263965);
   hnumuCCinFV_stack_12->SetBinError(12,0.6797627);
   hnumuCCinFV_stack_12->SetBinError(13,0.4197016);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,0.6170259);
   hnueCCinFV_stack_13->SetBinContent(5,1.062636);
   hnueCCinFV_stack_13->SetBinContent(6,1.599655);
   hnueCCinFV_stack_13->SetBinContent(7,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(8,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.3570508);
   hnueCCinFV_stack_13->SetBinError(5,0.4774072);
   hnueCCinFV_stack_13->SetBinError(6,0.703031);
   hnueCCinFV_stack_13->SetBinError(7,0.7431478);
   hnueCCinFV_stack_13->SetBinError(8,0.4566905);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__23->SetBinContent(4,203.7721);
   hmcerror__23->SetBinContent(5,207.5284);
   hmcerror__23->SetBinContent(6,157.339);
   hmcerror__23->SetBinContent(7,115.8133);
   hmcerror__23->SetBinContent(8,80.03488);
   hmcerror__23->SetBinContent(9,69.58847);
   hmcerror__23->SetBinContent(10,45.26131);
   hmcerror__23->SetBinContent(11,32.01732);
   hmcerror__23->SetBinContent(12,20.85292);
   hmcerror__23->SetBinContent(13,15.49257);
   hmcerror__23->SetBinContent(14,8.264744);
   hmcerror__23->SetBinContent(15,3.715374);
   hmcerror__23->SetBinContent(16,2.62849);
   hmcerror__23->SetBinContent(17,1.284601);
   hmcerror__23->SetBinContent(18,0.279168);
   hmcerror__23->SetBinContent(19,0.125218);
   hmcerror__23->SetBinError(1,0.3895343);
   hmcerror__23->SetBinError(2,0.3895343);
   hmcerror__23->SetBinError(3,0.3895343);
   hmcerror__23->SetBinError(4,47.51634);
   hmcerror__23->SetBinError(5,54.32088);
   hmcerror__23->SetBinError(6,49.96535);
   hmcerror__23->SetBinError(7,40.0798);
   hmcerror__23->SetBinError(8,24.63078);
   hmcerror__23->SetBinError(9,22.50168);
   hmcerror__23->SetBinError(10,19.24214);
   hmcerror__23->SetBinError(11,15.48417);
   hmcerror__23->SetBinError(12,11.94245);
   hmcerror__23->SetBinError(13,8.676759);
   hmcerror__23->SetBinError(14,8.183356);
   hmcerror__23->SetBinError(15,3.556964);
   hmcerror__23->SetBinError(16,3.227852);
   hmcerror__23->SetBinError(17,2.103425);
   hmcerror__23->SetBinError(18,1.572955);
   hmcerror__23->SetBinError(19,2.250459);
   hmcerror__23->SetBinError(20,0.3895343);
   hmcerror__23->SetBinError(21,0.3895343);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3029[20] = {
   0,
   0,
   0,
   188,
   182,
   163,
   106,
   82,
   58,
   38,
   26,
   12,
   12,
   10,
   4,
   1,
   1,
   1,
   1,
   0};
   Double_t _felx3029[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3029[20] = {
   0,
   0,
   0,
   13.71131,
   13.49074,
   12.76715,
   10.29563,
   9.1791,
   7.7446,
   6.3013,
   5.2453,
   3.64022,
   3.64022,
   3.34883,
   2.29683,
   1,
   1,
   1,
   1,
   0};
   Double_t _fehx3029[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3029[20] = {
   1.1478,
   1.1478,
   1.1478,
   13.71131,
   13.49074,
   12.76715,
   10.29563,
   8.9774,
   7.5415,
   6.0955,
   5.0358,
   3.4155,
   3.4155,
   3.1179,
   1.98186,
   1.35971,
   1.35971,
   1.35971,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0.5,6.5);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(221.8824);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=1.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

   ci = 1529;
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

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   
   Double_t _fx3030[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3030[20] = {
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
   Double_t _felx3030[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3030[20] = {
   0,
   0,
   0,
   0.2331838,
   0.2617516,
   0.3175649,
   0.3460725,
   0.3077506,
   0.3233536,
   0.4251345,
   0.4836187,
   0.5726993,
   0.5600595,
   0.9901525,
   0.9573639,
   1.228025,
   1.637415,
   5.634437,
   17.97233,
   0};
   Double_t _fehx3030[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3030[20] = {
   0,
   0,
   0,
   0.2331838,
   0.2617516,
   0.3175649,
   0.3460725,
   0.3077506,
   0.3233536,
   0.4251345,
   0.4836187,
   0.5726993,
   0.5600595,
   0.9901525,
   0.9573639,
   1.228025,
   1.637415,
   5.634437,
   17.97233,
   0};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0.5,6.5);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3031[20] = {
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
   Double_t _felx3031[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3031[20] = {
   0,
   0,
   0,
   0.1344964,
   0.1533158,
   0.1724087,
   0.1692043,
   0.1738659,
   0.1910325,
   0.2084382,
   0.2278932,
   0.2527037,
   0.2473284,
   0.3211251,
   0.3831507,
   0.4554744,
   0.5302088,
   1.512779,
   2.617096,
   0};
   Double_t _fehx3031[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3031[20] = {
   0,
   0,
   0,
   0.1344964,
   0.1533158,
   0.1724087,
   0.1692043,
   0.1738659,
   0.1910325,
   0.2084382,
   0.2278932,
   0.2527037,
   0.2473284,
   0.3211251,
   0.3831507,
   0.4554744,
   0.5302088,
   1.512779,
   2.617096,
   0};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0.5,6.5);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3032[20] = {
   10,
   10,
   10,
   0.9225995,
   0.8769885,
   1.03598,
   0.9152661,
   1.024553,
   0.8334714,
   0.8395691,
   0.8120605,
   0.5754589,
   0.7745651,
   1.209959,
   1.076608,
   0.3804466,
   0.7784518,
   3.582072,
   7.986074,
   10};
   Double_t _felx3032[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3032[20] = {
   0,
   0,
   0,
   0.06728748,
   0.06500671,
   0.08114418,
   0.08889851,
   0.1146887,
   0.1112914,
   0.1392204,
   0.163827,
   0.1745664,
   0.2349656,
   0.4051947,
   0.6181963,
   0.3804466,
   0.7784518,
   3.582072,
   7.986074,
   0};
   Double_t _fehx3032[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3032[20] = {
   0,
   0,
   0,
   0.06728748,
   0.06500671,
   0.08114418,
   0.08889851,
   0.1121686,
   0.1083728,
   0.1346735,
   0.1572836,
   0.16379,
   0.2204606,
   0.3772531,
   0.5334215,
   0.517297,
   1.058469,
   4.870579,
   10.85874,
   0};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0.5,6.5);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(20.7293);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_nc_pio_score_all",20,1,6);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(1,1,6,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

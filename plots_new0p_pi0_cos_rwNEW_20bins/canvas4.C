#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 13:03:48 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
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
   pad1->Range(-1.307692,-23.06919,1.25641,2550.967);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__10->SetBinContent(1,104.1472);
   hmc__10->SetBinContent(2,82.86295);
   hmc__10->SetBinContent(3,78.15644);
   hmc__10->SetBinContent(4,76.544);
   hmc__10->SetBinContent(5,78.84262);
   hmc__10->SetBinContent(6,76.86563);
   hmc__10->SetBinContent(7,69.98917);
   hmc__10->SetBinContent(8,76.20363);
   hmc__10->SetBinContent(9,101.6825);
   hmc__10->SetBinContent(10,105.9403);
   hmc__10->SetBinContent(11,118.4466);
   hmc__10->SetBinContent(12,135.6789);
   hmc__10->SetBinContent(13,162.3771);
   hmc__10->SetBinContent(14,185.7916);
   hmc__10->SetBinContent(15,240.0228);
   hmc__10->SetBinContent(16,321.7766);
   hmc__10->SetBinContent(17,418.8808);
   hmc__10->SetBinContent(18,512.7858);
   hmc__10->SetBinContent(19,736.809);
   hmc__10->SetBinContent(20,1153.46);
   hmc__10->SetBinError(1,34.0507);
   hmc__10->SetBinError(2,25.87678);
   hmc__10->SetBinError(3,23.46854);
   hmc__10->SetBinError(4,26.8457);
   hmc__10->SetBinError(5,25.27625);
   hmc__10->SetBinError(6,23.50412);
   hmc__10->SetBinError(7,22.06221);
   hmc__10->SetBinError(8,23.16997);
   hmc__10->SetBinError(9,29.48036);
   hmc__10->SetBinError(10,31.79008);
   hmc__10->SetBinError(11,33.02234);
   hmc__10->SetBinError(12,39.47792);
   hmc__10->SetBinError(13,47.38339);
   hmc__10->SetBinError(14,51.79095);
   hmc__10->SetBinError(15,65.72097);
   hmc__10->SetBinError(16,83.14477);
   hmc__10->SetBinError(17,110.4696);
   hmc__10->SetBinError(18,129.5888);
   hmc__10->SetBinError(19,164.773);
   hmc__10->SetBinError(20,267.6358);
   hmc__10->SetBinError(21,0.3895343);
   hmc__10->SetMinimum(-23.06919);
   hmc__10->SetMaximum(2422.265);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,-1,1);
   hs4_stack_4->SetMinimum(-1.293891e-08);
   hs4_stack_4->SetMaximum(1211.133);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,4.720165);
   hbadmatch_stack_1->SetBinContent(2,3.116549);
   hbadmatch_stack_1->SetBinContent(3,3.248191);
   hbadmatch_stack_1->SetBinContent(4,1.792733);
   hbadmatch_stack_1->SetBinContent(5,2.346583);
   hbadmatch_stack_1->SetBinContent(6,3.259637);
   hbadmatch_stack_1->SetBinContent(7,0.785171);
   hbadmatch_stack_1->SetBinContent(8,2.264398);
   hbadmatch_stack_1->SetBinContent(9,4.10443);
   hbadmatch_stack_1->SetBinContent(10,2.254093);
   hbadmatch_stack_1->SetBinContent(11,7.133775);
   hbadmatch_stack_1->SetBinContent(12,8.024946);
   hbadmatch_stack_1->SetBinContent(13,4.143229);
   hbadmatch_stack_1->SetBinContent(14,4.940827);
   hbadmatch_stack_1->SetBinContent(15,4.042861);
   hbadmatch_stack_1->SetBinContent(16,8.683034);
   hbadmatch_stack_1->SetBinContent(17,10.22512);
   hbadmatch_stack_1->SetBinContent(18,12.39381);
   hbadmatch_stack_1->SetBinContent(19,11.6568);
   hbadmatch_stack_1->SetBinContent(20,23.28556);
   hbadmatch_stack_1->SetBinError(1,1.179218);
   hbadmatch_stack_1->SetBinError(2,1.797518);
   hbadmatch_stack_1->SetBinError(3,0.894605);
   hbadmatch_stack_1->SetBinError(4,0.598015);
   hbadmatch_stack_1->SetBinError(5,0.8580511);
   hbadmatch_stack_1->SetBinError(6,0.9711672);
   hbadmatch_stack_1->SetBinError(7,0.3925882);
   hbadmatch_stack_1->SetBinError(8,0.7307106);
   hbadmatch_stack_1->SetBinError(9,1.076868);
   hbadmatch_stack_1->SetBinError(10,0.8208757);
   hbadmatch_stack_1->SetBinError(11,2.054841);
   hbadmatch_stack_1->SetBinError(12,2.389571);
   hbadmatch_stack_1->SetBinError(13,1.074712);
   hbadmatch_stack_1->SetBinError(14,1.214035);
   hbadmatch_stack_1->SetBinError(15,1.062562);
   hbadmatch_stack_1->SetBinError(16,1.530019);
   hbadmatch_stack_1->SetBinError(17,1.754615);
   hbadmatch_stack_1->SetBinError(18,1.804014);
   hbadmatch_stack_1->SetBinError(19,1.759854);
   hbadmatch_stack_1->SetBinError(20,2.775879);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,9.97739);
   hext_stack_2->SetBinContent(2,7.366213);
   hext_stack_2->SetBinContent(3,7.2134);
   hext_stack_2->SetBinContent(4,10.51803);
   hext_stack_2->SetBinContent(5,9.237576);
   hext_stack_2->SetBinContent(6,12.70661);
   hext_stack_2->SetBinContent(7,9.07481);
   hext_stack_2->SetBinContent(8,10.03641);
   hext_stack_2->SetBinContent(9,19.52941);
   hext_stack_2->SetBinContent(10,19.3606);
   hext_stack_2->SetBinContent(11,20.01657);
   hext_stack_2->SetBinContent(12,20.94668);
   hext_stack_2->SetBinContent(13,23.74217);
   hext_stack_2->SetBinContent(14,25.99305);
   hext_stack_2->SetBinContent(15,31.57123);
   hext_stack_2->SetBinContent(16,35.97762);
   hext_stack_2->SetBinContent(17,39.941);
   hext_stack_2->SetBinContent(18,44.27236);
   hext_stack_2->SetBinContent(19,58.35713);
   hext_stack_2->SetBinContent(20,67.96703);
   hext_stack_2->SetBinError(1,2.035939);
   hext_stack_2->SetBinError(2,1.79837);
   hext_stack_2->SetBinError(3,1.745817);
   hext_stack_2->SetBinError(4,2.182638);
   hext_stack_2->SetBinError(5,1.898485);
   hext_stack_2->SetBinError(6,2.332478);
   hext_stack_2->SetBinError(7,1.988847);
   hext_stack_2->SetBinError(8,2.082617);
   hext_stack_2->SetBinError(9,2.896904);
   hext_stack_2->SetBinError(10,2.852499);
   hext_stack_2->SetBinError(11,2.854123);
   hext_stack_2->SetBinError(12,3.10949);
   hext_stack_2->SetBinError(13,3.102413);
   hext_stack_2->SetBinError(14,3.381812);
   hext_stack_2->SetBinError(15,3.681439);
   hext_stack_2->SetBinError(16,3.921798);
   hext_stack_2->SetBinError(17,4.095054);
   hext_stack_2->SetBinError(18,4.282018);
   hext_stack_2->SetBinError(19,4.87706);
   hext_stack_2->SetBinError(20,5.388203);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,1.898887);
   hdirt_stack_3->SetBinContent(2,0.9430165);
   hdirt_stack_3->SetBinContent(3,2.237354);
   hdirt_stack_3->SetBinContent(4,3.19507);
   hdirt_stack_3->SetBinContent(5,0.6688038);
   hdirt_stack_3->SetBinContent(6,1.430615);
   hdirt_stack_3->SetBinContent(7,0.9140499);
   hdirt_stack_3->SetBinContent(8,2.134555);
   hdirt_stack_3->SetBinContent(9,1.179927);
   hdirt_stack_3->SetBinContent(10,0.7414621);
   hdirt_stack_3->SetBinContent(11,1.651058);
   hdirt_stack_3->SetBinContent(12,3.598226);
   hdirt_stack_3->SetBinContent(13,3.068294);
   hdirt_stack_3->SetBinContent(14,2.990744);
   hdirt_stack_3->SetBinContent(15,2.57377);
   hdirt_stack_3->SetBinContent(16,4.419996);
   hdirt_stack_3->SetBinContent(17,6.553308);
   hdirt_stack_3->SetBinContent(18,7.391267);
   hdirt_stack_3->SetBinContent(19,5.50254);
   hdirt_stack_3->SetBinContent(20,10.39686);
   hdirt_stack_3->SetBinError(1,0.6057332);
   hdirt_stack_3->SetBinError(2,0.4298722);
   hdirt_stack_3->SetBinError(3,0.8338387);
   hdirt_stack_3->SetBinError(4,1.232008);
   hdirt_stack_3->SetBinError(5,0.4240956);
   hdirt_stack_3->SetBinError(6,0.6095214);
   hdirt_stack_3->SetBinError(7,0.4788161);
   hdirt_stack_3->SetBinError(8,0.786332);
   hdirt_stack_3->SetBinError(9,0.4862253);
   hdirt_stack_3->SetBinError(10,0.4294813);
   hdirt_stack_3->SetBinError(11,0.6984735);
   hdirt_stack_3->SetBinError(12,1.275594);
   hdirt_stack_3->SetBinError(13,0.9365159);
   hdirt_stack_3->SetBinError(14,0.8895737);
   hdirt_stack_3->SetBinError(15,0.8377261);
   hdirt_stack_3->SetBinError(16,0.9949535);
   hdirt_stack_3->SetBinError(17,1.614133);
   hdirt_stack_3->SetBinError(18,1.422136);
   hdirt_stack_3->SetBinError(19,1.311937);
   hdirt_stack_3->SetBinError(20,1.734842);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,15.82656);
   houtFV_stack_4->SetBinContent(2,15.0451);
   houtFV_stack_4->SetBinContent(3,13.04217);
   houtFV_stack_4->SetBinContent(4,12.73007);
   houtFV_stack_4->SetBinContent(5,13.87286);
   houtFV_stack_4->SetBinContent(6,12.40909);
   houtFV_stack_4->SetBinContent(7,11.87214);
   houtFV_stack_4->SetBinContent(8,10.37293);
   houtFV_stack_4->SetBinContent(9,12.89961);
   houtFV_stack_4->SetBinContent(10,14.72102);
   houtFV_stack_4->SetBinContent(11,16.86493);
   houtFV_stack_4->SetBinContent(12,19.28527);
   houtFV_stack_4->SetBinContent(13,18.45885);
   houtFV_stack_4->SetBinContent(14,24.8001);
   houtFV_stack_4->SetBinContent(15,34.20958);
   houtFV_stack_4->SetBinContent(16,41.14814);
   houtFV_stack_4->SetBinContent(17,56.09422);
   houtFV_stack_4->SetBinContent(18,64.74602);
   houtFV_stack_4->SetBinContent(19,83.63126);
   houtFV_stack_4->SetBinContent(20,95.22171);
   houtFV_stack_4->SetBinError(1,1.986462);
   houtFV_stack_4->SetBinError(2,1.947854);
   houtFV_stack_4->SetBinError(3,1.772507);
   houtFV_stack_4->SetBinError(4,1.740851);
   houtFV_stack_4->SetBinError(5,1.871962);
   houtFV_stack_4->SetBinError(6,2.08794);
   houtFV_stack_4->SetBinError(7,1.721894);
   houtFV_stack_4->SetBinError(8,1.596862);
   houtFV_stack_4->SetBinError(9,1.783954);
   houtFV_stack_4->SetBinError(10,1.935734);
   houtFV_stack_4->SetBinError(11,2.041537);
   houtFV_stack_4->SetBinError(12,2.235982);
   houtFV_stack_4->SetBinError(13,2.195288);
   houtFV_stack_4->SetBinError(14,2.470832);
   houtFV_stack_4->SetBinError(15,2.925541);
   houtFV_stack_4->SetBinError(16,3.268334);
   houtFV_stack_4->SetBinError(17,3.718516);
   houtFV_stack_4->SetBinError(18,4.168815);
   houtFV_stack_4->SetBinError(19,4.608082);
   houtFV_stack_4->SetBinError(20,4.915072);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.20802);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5573358);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5151539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8502901);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.119416);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.97153);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.12599);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,16.43715);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,66.53695);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6517864);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1704726);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1861173);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3309054);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5442341);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5765866);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8896419);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.32107);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.666566);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4450719);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.130122);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4463997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.260244);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.564984);
   hNCpi0inFVqe_stack_6->SetBinContent(20,3.431548);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.198595);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3695249);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5225872);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.5379397);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.5933314);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,30.69196);
   hNCpi0inFVres_stack_7->SetBinContent(2,23.24793);
   hNCpi0inFVres_stack_7->SetBinContent(3,24.42887);
   hNCpi0inFVres_stack_7->SetBinContent(4,24.62723);
   hNCpi0inFVres_stack_7->SetBinContent(5,25.92304);
   hNCpi0inFVres_stack_7->SetBinContent(6,24.31577);
   hNCpi0inFVres_stack_7->SetBinContent(7,23.85941);
   hNCpi0inFVres_stack_7->SetBinContent(8,25.93414);
   hNCpi0inFVres_stack_7->SetBinContent(9,31.03472);
   hNCpi0inFVres_stack_7->SetBinContent(10,35.61993);
   hNCpi0inFVres_stack_7->SetBinContent(11,38.87598);
   hNCpi0inFVres_stack_7->SetBinContent(12,45.50805);
   hNCpi0inFVres_stack_7->SetBinContent(13,57.12563);
   hNCpi0inFVres_stack_7->SetBinContent(14,69.88213);
   hNCpi0inFVres_stack_7->SetBinContent(15,87.99793);
   hNCpi0inFVres_stack_7->SetBinContent(16,119.6385);
   hNCpi0inFVres_stack_7->SetBinContent(17,155.9068);
   hNCpi0inFVres_stack_7->SetBinContent(18,196.4925);
   hNCpi0inFVres_stack_7->SetBinContent(19,274.709);
   hNCpi0inFVres_stack_7->SetBinContent(20,378.1382);
   hNCpi0inFVres_stack_7->SetBinError(1,1.857813);
   hNCpi0inFVres_stack_7->SetBinError(2,1.553399);
   hNCpi0inFVres_stack_7->SetBinError(3,1.606264);
   hNCpi0inFVres_stack_7->SetBinError(4,1.667094);
   hNCpi0inFVres_stack_7->SetBinError(5,1.728822);
   hNCpi0inFVres_stack_7->SetBinError(6,1.603496);
   hNCpi0inFVres_stack_7->SetBinError(7,1.596766);
   hNCpi0inFVres_stack_7->SetBinError(8,1.627607);
   hNCpi0inFVres_stack_7->SetBinError(9,1.794801);
   hNCpi0inFVres_stack_7->SetBinError(10,1.964211);
   hNCpi0inFVres_stack_7->SetBinError(11,2.033642);
   hNCpi0inFVres_stack_7->SetBinError(12,2.143512);
   hNCpi0inFVres_stack_7->SetBinError(13,2.424768);
   hNCpi0inFVres_stack_7->SetBinError(14,2.714724);
   hNCpi0inFVres_stack_7->SetBinError(15,3.01118);
   hNCpi0inFVres_stack_7->SetBinError(16,3.6026);
   hNCpi0inFVres_stack_7->SetBinError(17,4.078608);
   hNCpi0inFVres_stack_7->SetBinError(18,4.583658);
   hNCpi0inFVres_stack_7->SetBinError(19,5.462916);
   hNCpi0inFVres_stack_7->SetBinError(20,6.360257);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.039714);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.077408);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.890069);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.283918);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.40132);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.108533);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.991796);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.992628);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.657324);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.63616);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.174141);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.553699);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.606106);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.103897);
   hNCpi0inFVdis_stack_8->SetBinContent(15,14.6258);
   hNCpi0inFVdis_stack_8->SetBinContent(16,19.7835);
   hNCpi0inFVdis_stack_8->SetBinContent(17,30.33192);
   hNCpi0inFVdis_stack_8->SetBinContent(18,39.86893);
   hNCpi0inFVdis_stack_8->SetBinContent(19,57.68098);
   hNCpi0inFVdis_stack_8->SetBinContent(20,101.4895);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8293779);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.815456);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6048626);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7804178);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5711603);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5277741);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7401896);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7530916);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6778859);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8101491);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7298639);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7985758);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9968563);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9138833);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.241927);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.445392);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.840483);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.072051);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.439065);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.265848);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2013529);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,16.1041);
   hCCpi0inFV_stack_10->SetBinContent(2,13.09986);
   hCCpi0inFV_stack_10->SetBinContent(3,12.29084);
   hCCpi0inFV_stack_10->SetBinContent(4,8.295873);
   hCCpi0inFV_stack_10->SetBinContent(5,12.07963);
   hCCpi0inFV_stack_10->SetBinContent(6,9.091307);
   hCCpi0inFV_stack_10->SetBinContent(7,9.101814);
   hCCpi0inFV_stack_10->SetBinContent(8,9.74579);
   hCCpi0inFV_stack_10->SetBinContent(9,12.30191);
   hCCpi0inFV_stack_10->SetBinContent(10,14.95774);
   hCCpi0inFV_stack_10->SetBinContent(11,16.7615);
   hCCpi0inFV_stack_10->SetBinContent(12,15.93192);
   hCCpi0inFV_stack_10->SetBinContent(13,24.56025);
   hCCpi0inFV_stack_10->SetBinContent(14,21.01209);
   hCCpi0inFV_stack_10->SetBinContent(15,32.39845);
   hCCpi0inFV_stack_10->SetBinContent(16,43.04503);
   hCCpi0inFV_stack_10->SetBinContent(17,64.38203);
   hCCpi0inFV_stack_10->SetBinContent(18,74.82019);
   hCCpi0inFV_stack_10->SetBinContent(19,119.9089);
   hCCpi0inFV_stack_10->SetBinContent(20,198.0739);
   hCCpi0inFV_stack_10->SetBinError(1,1.989813);
   hCCpi0inFV_stack_10->SetBinError(2,1.810585);
   hCCpi0inFV_stack_10->SetBinError(3,1.712935);
   hCCpi0inFV_stack_10->SetBinError(4,1.406161);
   hCCpi0inFV_stack_10->SetBinError(5,1.694502);
   hCCpi0inFV_stack_10->SetBinError(6,1.507799);
   hCCpi0inFV_stack_10->SetBinError(7,1.4837);
   hCCpi0inFV_stack_10->SetBinError(8,1.581923);
   hCCpi0inFV_stack_10->SetBinError(9,1.690836);
   hCCpi0inFV_stack_10->SetBinError(10,1.918295);
   hCCpi0inFV_stack_10->SetBinError(11,1.995434);
   hCCpi0inFV_stack_10->SetBinError(12,2.001806);
   hCCpi0inFV_stack_10->SetBinError(13,2.536459);
   hCCpi0inFV_stack_10->SetBinError(14,2.263375);
   hCCpi0inFV_stack_10->SetBinError(15,2.907905);
   hCCpi0inFV_stack_10->SetBinError(16,3.257392);
   hCCpi0inFV_stack_10->SetBinError(17,4.06127);
   hCCpi0inFV_stack_10->SetBinError(18,4.32563);
   hCCpi0inFV_stack_10->SetBinError(19,5.539431);
   hCCpi0inFV_stack_10->SetBinError(20,7.054458);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,5.923203);
   hNCinFV_stack_11->SetBinContent(2,6.888792);
   hNCinFV_stack_11->SetBinContent(3,4.503085);
   hNCinFV_stack_11->SetBinContent(4,4.001457);
   hNCinFV_stack_11->SetBinContent(5,4.894825);
   hNCinFV_stack_11->SetBinContent(6,3.574452);
   hNCinFV_stack_11->SetBinContent(7,4.294996);
   hNCinFV_stack_11->SetBinContent(8,2.784209);
   hNCinFV_stack_11->SetBinContent(9,6.296955);
   hNCinFV_stack_11->SetBinContent(10,4.503085);
   hNCinFV_stack_11->SetBinContent(11,4.83481);
   hNCinFV_stack_11->SetBinContent(12,8.501161);
   hNCinFV_stack_11->SetBinContent(13,7.962578);
   hNCinFV_stack_11->SetBinContent(14,10.01656);
   hNCinFV_stack_11->SetBinContent(15,14.12621);
   hNCinFV_stack_11->SetBinContent(16,17.98759);
   hNCinFV_stack_11->SetBinContent(17,19.88797);
   hNCinFV_stack_11->SetBinContent(18,29.48357);
   hNCinFV_stack_11->SetBinContent(19,52.00792);
   hNCinFV_stack_11->SetBinContent(20,100.2592);
   hNCinFV_stack_11->SetBinError(1,1.143952);
   hNCinFV_stack_11->SetBinError(2,1.301327);
   hNCinFV_stack_11->SetBinError(3,1.039253);
   hNCinFV_stack_11->SetBinError(4,1.038578);
   hNCinFV_stack_11->SetBinError(5,1.075537);
   hNCinFV_stack_11->SetBinError(6,0.9213567);
   hNCinFV_stack_11->SetBinError(7,1.03918);
   hNCinFV_stack_11->SetBinError(8,0.8323376);
   hNCinFV_stack_11->SetBinError(9,1.255667);
   hNCinFV_stack_11->SetBinError(10,1.039253);
   hNCinFV_stack_11->SetBinError(11,1.091997);
   hNCinFV_stack_11->SetBinError(12,1.468798);
   hNCinFV_stack_11->SetBinError(13,1.415022);
   hNCinFV_stack_11->SetBinError(14,1.582177);
   hNCinFV_stack_11->SetBinError(15,1.872415);
   hNCinFV_stack_11->SetBinError(16,2.123413);
   hNCinFV_stack_11->SetBinError(17,2.220109);
   hNCinFV_stack_11->SetBinError(18,2.782224);
   hNCinFV_stack_11->SetBinError(19,3.570396);
   hNCinFV_stack_11->SetBinError(20,5.074052);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,8.279417);
   hnumuCCinFV_stack_12->SetBinContent(2,4.650732);
   hnumuCCinFV_stack_12->SetBinContent(3,5.704319);
   hnumuCCinFV_stack_12->SetBinContent(4,4.056684);
   hnumuCCinFV_stack_12->SetBinContent(5,5.036728);
   hnumuCCinFV_stack_12->SetBinContent(6,6.091355);
   hnumuCCinFV_stack_12->SetBinContent(7,4.551089);
   hnumuCCinFV_stack_12->SetBinContent(8,7.338877);
   hnumuCCinFV_stack_12->SetBinContent(9,8.200624);
   hnumuCCinFV_stack_12->SetBinContent(10,7.490983);
   hnumuCCinFV_stack_12->SetBinContent(11,6.254034);
   hnumuCCinFV_stack_12->SetBinContent(12,6.318214);
   hnumuCCinFV_stack_12->SetBinContent(13,12.96365);
   hnumuCCinFV_stack_12->SetBinContent(14,14.1453);
   hnumuCCinFV_stack_12->SetBinContent(15,14.91796);
   hnumuCCinFV_stack_12->SetBinContent(16,26.3884);
   hnumuCCinFV_stack_12->SetBinContent(17,30.3134);
   hnumuCCinFV_stack_12->SetBinContent(18,30.92909);
   hnumuCCinFV_stack_12->SetBinContent(19,51.11707);
   hnumuCCinFV_stack_12->SetBinContent(20,91.0043);
   hnumuCCinFV_stack_12->SetBinError(1,1.424814);
   hnumuCCinFV_stack_12->SetBinError(2,1.22045);
   hnumuCCinFV_stack_12->SetBinError(3,1.193291);
   hnumuCCinFV_stack_12->SetBinError(4,1.059668);
   hnumuCCinFV_stack_12->SetBinError(5,1.164964);
   hnumuCCinFV_stack_12->SetBinError(6,1.522978);
   hnumuCCinFV_stack_12->SetBinError(7,1.426467);
   hnumuCCinFV_stack_12->SetBinError(8,2.070914);
   hnumuCCinFV_stack_12->SetBinError(9,1.574728);
   hnumuCCinFV_stack_12->SetBinError(10,1.546708);
   hnumuCCinFV_stack_12->SetBinError(11,1.359432);
   hnumuCCinFV_stack_12->SetBinError(12,1.286697);
   hnumuCCinFV_stack_12->SetBinError(13,1.964245);
   hnumuCCinFV_stack_12->SetBinError(14,2.105305);
   hnumuCCinFV_stack_12->SetBinError(15,2.039594);
   hnumuCCinFV_stack_12->SetBinError(16,3.622437);
   hnumuCCinFV_stack_12->SetBinError(17,3.120132);
   hnumuCCinFV_stack_12->SetBinError(18,2.872797);
   hnumuCCinFV_stack_12->SetBinError(19,4.49309);
   hnumuCCinFV_stack_12->SetBinError(20,5.329179);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.254362);
   hnueCCinFV_stack_13->SetBinContent(2,1.199902);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(4,1.416171);
   hnueCCinFV_stack_13->SetBinContent(5,0.6427267);
   hnueCCinFV_stack_13->SetBinContent(6,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(9,1.031049);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,1.610865);
   hnueCCinFV_stack_13->SetBinContent(15,2.275721);
   hnueCCinFV_stack_13->SetBinContent(16,1.427288);
   hnueCCinFV_stack_13->SetBinContent(17,1.827081);
   hnueCCinFV_stack_13->SetBinContent(18,2.973934);
   hnueCCinFV_stack_13->SetBinContent(19,3.123549);
   hnueCCinFV_stack_13->SetBinContent(20,17.37588);
   hnueCCinFV_stack_13->SetBinError(1,0.6813947);
   hnueCCinFV_stack_13->SetBinError(2,0.4902584);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(4,1.128487);
   hnueCCinFV_stack_13->SetBinError(5,0.4552546);
   hnueCCinFV_stack_13->SetBinError(6,0.4316896);
   hnueCCinFV_stack_13->SetBinError(9,0.5334159);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.2451269);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.7453331);
   hnueCCinFV_stack_13->SetBinError(15,1.352316);
   hnueCCinFV_stack_13->SetBinError(16,0.6843119);
   hnueCCinFV_stack_13->SetBinError(17,0.738336);
   hnueCCinFV_stack_13->SetBinError(18,1.045959);
   hnueCCinFV_stack_13->SetBinError(19,0.8534427);
   hnueCCinFV_stack_13->SetBinError(20,2.981299);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__11->SetBinContent(1,104.1472);
   hmcerror__11->SetBinContent(2,82.86295);
   hmcerror__11->SetBinContent(3,78.15644);
   hmcerror__11->SetBinContent(4,76.544);
   hmcerror__11->SetBinContent(5,78.84262);
   hmcerror__11->SetBinContent(6,76.86563);
   hmcerror__11->SetBinContent(7,69.98917);
   hmcerror__11->SetBinContent(8,76.20363);
   hmcerror__11->SetBinContent(9,101.6825);
   hmcerror__11->SetBinContent(10,105.9403);
   hmcerror__11->SetBinContent(11,118.4466);
   hmcerror__11->SetBinContent(12,135.6789);
   hmcerror__11->SetBinContent(13,162.3771);
   hmcerror__11->SetBinContent(14,185.7916);
   hmcerror__11->SetBinContent(15,240.0228);
   hmcerror__11->SetBinContent(16,321.7766);
   hmcerror__11->SetBinContent(17,418.8808);
   hmcerror__11->SetBinContent(18,512.7858);
   hmcerror__11->SetBinContent(19,736.809);
   hmcerror__11->SetBinContent(20,1153.46);
   hmcerror__11->SetBinError(1,34.0507);
   hmcerror__11->SetBinError(2,25.87678);
   hmcerror__11->SetBinError(3,23.46854);
   hmcerror__11->SetBinError(4,26.8457);
   hmcerror__11->SetBinError(5,25.27625);
   hmcerror__11->SetBinError(6,23.50412);
   hmcerror__11->SetBinError(7,22.06221);
   hmcerror__11->SetBinError(8,23.16997);
   hmcerror__11->SetBinError(9,29.48036);
   hmcerror__11->SetBinError(10,31.79008);
   hmcerror__11->SetBinError(11,33.02234);
   hmcerror__11->SetBinError(12,39.47792);
   hmcerror__11->SetBinError(13,47.38339);
   hmcerror__11->SetBinError(14,51.79095);
   hmcerror__11->SetBinError(15,65.72097);
   hmcerror__11->SetBinError(16,83.14477);
   hmcerror__11->SetBinError(17,110.4696);
   hmcerror__11->SetBinError(18,129.5888);
   hmcerror__11->SetBinError(19,164.773);
   hmcerror__11->SetBinError(20,267.6358);
   hmcerror__11->SetBinError(21,0.3895343);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[20] = {
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
   Double_t _fy3013[20] = {
   109,
   77,
   77,
   65,
   72,
   82,
   91,
   101,
   89,
   99,
   101,
   113,
   153,
   196,
   202,
   297,
   353,
   501,
   729,
   1088};
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
   10.44031,
   8.8995,
   8.8995,
   8.1893,
   8.6108,
   9.1791,
   9.6617,
   10.04988,
   9.5566,
   10.0712,
   10.04988,
   10.63015,
   12.36932,
   14,
   14.21267,
   17.23369,
   18.78829,
   22.38303,
   27,
   32.98485};
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
   10.44031,
   8.6976,
   8.6976,
   7.9866,
   8.4085,
   8.9774,
   9.46,
   10.04988,
   9.3552,
   9.87,
   10.04988,
   10.63015,
   12.36932,
   14,
   14.21267,
   17.23369,
   18.78829,
   22.38303,
   27,
   32.98485};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(51.12963);
   Graph_Graph3013->SetMaximum(1227.402);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4595.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 587.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1694.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  342.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 728.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
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
   Double_t _fely3014[20] = {
   0.326948,
   0.3122841,
   0.3002765,
   0.3507225,
   0.3205912,
   0.3057819,
   0.3152232,
   0.3040533,
   0.2899255,
   0.3000755,
   0.2787951,
   0.2909658,
   0.2918107,
   0.2787583,
   0.2738114,
   0.2583929,
   0.2637255,
   0.2527152,
   0.2236306,
   0.2320287};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0.326948,
   0.3122841,
   0.3002765,
   0.3507225,
   0.3205912,
   0.3057819,
   0.3152232,
   0.3040533,
   0.2899255,
   0.3000755,
   0.2787951,
   0.2909658,
   0.2918107,
   0.2787583,
   0.2738114,
   0.2583929,
   0.2637255,
   0.2527152,
   0.2236306,
   0.2320287};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
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
   Double_t _fely3015[20] = {
   0.2131658,
   0.2050041,
   0.2055931,
   0.2178599,
   0.2071169,
   0.1968907,
   0.2124232,
   0.2034326,
   0.1917704,
   0.2042793,
   0.21284,
   0.2072284,
   0.2295265,
   0.2256175,
   0.2424007,
   0.2374925,
   0.2389568,
   0.2248096,
   0.2131576,
   0.2185141};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0.2131658,
   0.2050041,
   0.2055931,
   0.2178599,
   0.2071169,
   0.1968907,
   0.2124232,
   0.2034326,
   0.1917704,
   0.2042793,
   0.21284,
   0.2072284,
   0.2295265,
   0.2256175,
   0.2424007,
   0.2374925,
   0.2389568,
   0.2248096,
   0.2131576,
   0.2185141};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
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
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   1.046596,
   0.9292452,
   0.9852035,
   0.8491848,
   0.9132117,
   1.066797,
   1.300201,
   1.325396,
   0.8752733,
   0.9344888,
   0.8527048,
   0.8328488,
   0.942251,
   1.054945,
   0.8415868,
   0.9230008,
   0.8427218,
   0.9770161,
   0.9894016,
   0.9432492};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0.1002457,
   0.1074002,
   0.1138678,
   0.1069881,
   0.109215,
   0.1194175,
   0.1380457,
   0.1318819,
   0.09398468,
   0.09506489,
   0.08484729,
   0.07834782,
   0.07617648,
   0.07535325,
   0.05921384,
   0.05355794,
   0.04485356,
   0.04364986,
   0.03664451,
   0.02859644};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0.1002457,
   0.1049637,
   0.1112845,
   0.10434,
   0.1066492,
   0.1167934,
   0.1351638,
   0.1318819,
   0.09200401,
   0.09316571,
   0.08484729,
   0.07834782,
   0.07617648,
   0.07535325,
   0.05921384,
   0.05355794,
   0.04485356,
   0.04364986,
   0.03664451,
   0.02859644};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.6706885);
   Graph_Graph3016->SetMaximum(1.528786);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);

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

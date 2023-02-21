#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 16:15:25 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-246.1538,-8.004131,1805.128,885.0884);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__13->SetBinContent(3,5.665478);
   hmc__13->SetBinContent(4,86.90398);
   hmc__13->SetBinContent(5,218.0294);
   hmc__13->SetBinContent(6,324.2802);
   hmc__13->SetBinContent(7,400.2065);
   hmc__13->SetBinContent(8,388.5524);
   hmc__13->SetBinContent(9,361.7157);
   hmc__13->SetBinContent(10,348.879);
   hmc__13->SetBinContent(11,274.8543);
   hmc__13->SetBinContent(12,232.6396);
   hmc__13->SetBinContent(13,196.318);
   hmc__13->SetBinContent(14,146.2973);
   hmc__13->SetBinContent(15,116.5915);
   hmc__13->SetBinContent(16,93.48721);
   hmc__13->SetBinContent(17,67.23089);
   hmc__13->SetBinContent(18,55.39933);
   hmc__13->SetBinContent(19,46.31829);
   hmc__13->SetBinContent(20,36.32423);
   hmc__13->SetBinContent(21,32.02914);
   hmc__13->SetBinContent(22,24.34634);
   hmc__13->SetBinContent(23,16.76684);
   hmc__13->SetBinContent(24,15.51587);
   hmc__13->SetBinContent(25,75.35442);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,0.3895343);
   hmc__13->SetBinError(3,5.470202);
   hmc__13->SetBinError(4,26.23037);
   hmc__13->SetBinError(5,68.19896);
   hmc__13->SetBinError(6,113.7932);
   hmc__13->SetBinError(7,153.4499);
   hmc__13->SetBinError(8,155.1285);
   hmc__13->SetBinError(9,149.714);
   hmc__13->SetBinError(10,132.7309);
   hmc__13->SetBinError(11,104.3552);
   hmc__13->SetBinError(12,89.58735);
   hmc__13->SetBinError(13,84.64732);
   hmc__13->SetBinError(14,53.40612);
   hmc__13->SetBinError(15,41.90858);
   hmc__13->SetBinError(16,43.62345);
   hmc__13->SetBinError(17,27.12133);
   hmc__13->SetBinError(18,22.99015);
   hmc__13->SetBinError(19,21.7723);
   hmc__13->SetBinError(20,16.85009);
   hmc__13->SetBinError(21,17.37048);
   hmc__13->SetBinError(22,17.10516);
   hmc__13->SetBinError(23,13.11504);
   hmc__13->SetBinError(24,8.665532);
   hmc__13->SetBinError(25,25.52734);
   hmc__13->SetMinimum(-8.004131);
   hmc__13->SetMaximum(840.4337);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,1600);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(420.2169);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(3,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,2.289745);
   hbadmatch_stack_1->SetBinContent(5,4.304908);
   hbadmatch_stack_1->SetBinContent(6,8.55258);
   hbadmatch_stack_1->SetBinContent(7,10.45298);
   hbadmatch_stack_1->SetBinContent(8,5.128076);
   hbadmatch_stack_1->SetBinContent(9,7.434544);
   hbadmatch_stack_1->SetBinContent(10,9.682003);
   hbadmatch_stack_1->SetBinContent(11,5.233697);
   hbadmatch_stack_1->SetBinContent(12,6.021934);
   hbadmatch_stack_1->SetBinContent(13,3.638047);
   hbadmatch_stack_1->SetBinContent(14,4.642646);
   hbadmatch_stack_1->SetBinContent(15,2.590875);
   hbadmatch_stack_1->SetBinContent(16,2.779613);
   hbadmatch_stack_1->SetBinContent(17,1.660551);
   hbadmatch_stack_1->SetBinContent(18,0.5901461);
   hbadmatch_stack_1->SetBinContent(19,1.02611);
   hbadmatch_stack_1->SetBinContent(20,1.412273);
   hbadmatch_stack_1->SetBinContent(21,1.073786);
   hbadmatch_stack_1->SetBinContent(22,0.6156429);
   hbadmatch_stack_1->SetBinContent(23,0.4508822);
   hbadmatch_stack_1->SetBinContent(25,1.802323);
   hbadmatch_stack_1->SetBinError(3,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.9087307);
   hbadmatch_stack_1->SetBinError(5,1.157705);
   hbadmatch_stack_1->SetBinError(6,1.533447);
   hbadmatch_stack_1->SetBinError(7,2.645102);
   hbadmatch_stack_1->SetBinError(8,1.198178);
   hbadmatch_stack_1->SetBinError(9,1.336286);
   hbadmatch_stack_1->SetBinError(10,1.663601);
   hbadmatch_stack_1->SetBinError(11,1.206272);
   hbadmatch_stack_1->SetBinError(12,1.214043);
   hbadmatch_stack_1->SetBinError(13,1.010533);
   hbadmatch_stack_1->SetBinError(14,1.169188);
   hbadmatch_stack_1->SetBinError(15,0.8095761);
   hbadmatch_stack_1->SetBinError(16,0.8672643);
   hbadmatch_stack_1->SetBinError(17,0.650847);
   hbadmatch_stack_1->SetBinError(18,0.340721);
   hbadmatch_stack_1->SetBinError(19,0.5555328);
   hbadmatch_stack_1->SetBinError(20,0.6510715);
   hbadmatch_stack_1->SetBinError(21,0.5557297);
   hbadmatch_stack_1->SetBinError(22,0.3561798);
   hbadmatch_stack_1->SetBinError(23,0.3213996);
   hbadmatch_stack_1->SetBinError(25,0.7070809);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(3,0.4065989);
   hext_stack_2->SetBinContent(4,14.99056);
   hext_stack_2->SetBinContent(5,26.22523);
   hext_stack_2->SetBinContent(6,26.83213);
   hext_stack_2->SetBinContent(7,21.17011);
   hext_stack_2->SetBinContent(8,30.98745);
   hext_stack_2->SetBinContent(9,19.50346);
   hext_stack_2->SetBinContent(10,25.513);
   hext_stack_2->SetBinContent(11,16.95572);
   hext_stack_2->SetBinContent(12,19.11998);
   hext_stack_2->SetBinContent(13,14.95308);
   hext_stack_2->SetBinContent(14,14.22208);
   hext_stack_2->SetBinContent(15,7.295601);
   hext_stack_2->SetBinContent(16,3.654981);
   hext_stack_2->SetBinContent(17,5.083842);
   hext_stack_2->SetBinContent(18,3.565599);
   hext_stack_2->SetBinContent(19,3.083979);
   hext_stack_2->SetBinContent(20,1.379791);
   hext_stack_2->SetBinContent(21,3.483397);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,3.297453);
   hext_stack_2->SetBinContent(25,13.46514);
   hext_stack_2->SetBinError(3,0.4065989);
   hext_stack_2->SetBinError(4,2.812982);
   hext_stack_2->SetBinError(5,3.653729);
   hext_stack_2->SetBinError(6,3.553762);
   hext_stack_2->SetBinError(7,3.159328);
   hext_stack_2->SetBinError(8,3.933415);
   hext_stack_2->SetBinError(9,2.976665);
   hext_stack_2->SetBinError(10,3.579371);
   hext_stack_2->SetBinError(11,2.876976);
   hext_stack_2->SetBinError(12,3.145388);
   hext_stack_2->SetBinError(13,2.667774);
   hext_stack_2->SetBinError(14,2.616574);
   hext_stack_2->SetBinError(15,1.762942);
   hext_stack_2->SetBinError(16,1.163091);
   hext_stack_2->SetBinError(17,1.601118);
   hext_stack_2->SetBinError(18,1.22225);
   hext_stack_2->SetBinError(19,1.033093);
   hext_stack_2->SetBinError(20,0.6935586);
   hext_stack_2->SetBinError(21,1.197416);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,1.384641);
   hext_stack_2->SetBinError(25,2.654126);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(4,0.7817008);
   hdirt_stack_3->SetBinContent(5,2.768892);
   hdirt_stack_3->SetBinContent(6,1.896937);
   hdirt_stack_3->SetBinContent(7,3.529387);
   hdirt_stack_3->SetBinContent(8,2.140689);
   hdirt_stack_3->SetBinContent(9,1.798222);
   hdirt_stack_3->SetBinContent(10,0.9099599);
   hdirt_stack_3->SetBinContent(11,0.9619952);
   hdirt_stack_3->SetBinContent(12,0.4377912);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinError(4,0.4973709);
   hdirt_stack_3->SetBinError(5,0.8462354);
   hdirt_stack_3->SetBinError(6,0.697668);
   hdirt_stack_3->SetBinError(7,1.241562);
   hdirt_stack_3->SetBinError(8,0.7277262);
   hdirt_stack_3->SetBinError(9,0.6587758);
   hdirt_stack_3->SetBinError(10,0.5081362);
   hdirt_stack_3->SetBinError(11,0.5711742);
   hdirt_stack_3->SetBinError(12,0.3095651);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(21,0.3381872);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(3,0.1950248);
   houtFV_stack_4->SetBinContent(4,9.891335);
   houtFV_stack_4->SetBinContent(5,20.87673);
   houtFV_stack_4->SetBinContent(6,19.35152);
   houtFV_stack_4->SetBinContent(7,29.64149);
   houtFV_stack_4->SetBinContent(8,22.79958);
   houtFV_stack_4->SetBinContent(9,23.12026);
   houtFV_stack_4->SetBinContent(10,19.41932);
   houtFV_stack_4->SetBinContent(11,15.82993);
   houtFV_stack_4->SetBinContent(12,10.26744);
   houtFV_stack_4->SetBinContent(13,9.502555);
   houtFV_stack_4->SetBinContent(14,7.288984);
   houtFV_stack_4->SetBinContent(15,6.363253);
   houtFV_stack_4->SetBinContent(16,5.807161);
   houtFV_stack_4->SetBinContent(17,4.733002);
   houtFV_stack_4->SetBinContent(18,2.155416);
   houtFV_stack_4->SetBinContent(19,1.462145);
   houtFV_stack_4->SetBinContent(20,1.805704);
   houtFV_stack_4->SetBinContent(21,1.073786);
   houtFV_stack_4->SetBinContent(22,0.9286332);
   houtFV_stack_4->SetBinContent(23,0.8770706);
   houtFV_stack_4->SetBinContent(24,0.5867651);
   houtFV_stack_4->SetBinContent(25,2.390778);
   houtFV_stack_4->SetBinError(3,0.1950249);
   houtFV_stack_4->SetBinError(4,1.610844);
   houtFV_stack_4->SetBinError(5,2.351827);
   houtFV_stack_4->SetBinError(6,2.225387);
   houtFV_stack_4->SetBinError(7,2.659755);
   houtFV_stack_4->SetBinError(8,2.340636);
   houtFV_stack_4->SetBinError(9,2.395953);
   houtFV_stack_4->SetBinError(10,2.241421);
   houtFV_stack_4->SetBinError(11,2.006913);
   houtFV_stack_4->SetBinError(12,1.558433);
   houtFV_stack_4->SetBinError(13,1.562186);
   houtFV_stack_4->SetBinError(14,1.331727);
   houtFV_stack_4->SetBinError(15,1.352279);
   houtFV_stack_4->SetBinError(16,1.256954);
   houtFV_stack_4->SetBinError(17,1.106769);
   houtFV_stack_4->SetBinError(18,0.6498885);
   houtFV_stack_4->SetBinError(19,0.6198731);
   houtFV_stack_4->SetBinError(20,0.7080169);
   houtFV_stack_4->SetBinError(21,0.5557297);
   houtFV_stack_4->SetBinError(22,0.48078);
   houtFV_stack_4->SetBinError(23,0.5197486);
   houtFV_stack_4->SetBinError(24,0.3387718);
   houtFV_stack_4->SetBinError(25,0.7844693);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7521399);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.96189);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2841855);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3355772);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2996304);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.21299);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.151388);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.091339);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.426812);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.687289);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.729808);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.283072);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6980042);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3458579);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.6356119);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3436932);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5084305);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3644869);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4390783);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3388471);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3431282);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.219638);
   hNCpi0inFVres_stack_7->SetBinContent(4,38.91334);
   hNCpi0inFVres_stack_7->SetBinContent(5,113.5808);
   hNCpi0inFVres_stack_7->SetBinContent(6,179.5706);
   hNCpi0inFVres_stack_7->SetBinContent(7,210.103);
   hNCpi0inFVres_stack_7->SetBinContent(8,200.0677);
   hNCpi0inFVres_stack_7->SetBinContent(9,173.0821);
   hNCpi0inFVres_stack_7->SetBinContent(10,141.379);
   hNCpi0inFVres_stack_7->SetBinContent(11,108.2013);
   hNCpi0inFVres_stack_7->SetBinContent(12,80.98341);
   hNCpi0inFVres_stack_7->SetBinContent(13,62.55904);
   hNCpi0inFVres_stack_7->SetBinContent(14,39.72793);
   hNCpi0inFVres_stack_7->SetBinContent(15,28.98539);
   hNCpi0inFVres_stack_7->SetBinContent(16,23.4851);
   hNCpi0inFVres_stack_7->SetBinContent(17,15.24294);
   hNCpi0inFVres_stack_7->SetBinContent(18,12.30147);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.397104);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.609004);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.479138);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.179952);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.81218);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.978776);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.774332);
   hNCpi0inFVres_stack_7->SetBinError(3,0.572635);
   hNCpi0inFVres_stack_7->SetBinError(4,2.011786);
   hNCpi0inFVres_stack_7->SetBinError(5,3.423602);
   hNCpi0inFVres_stack_7->SetBinError(6,4.383041);
   hNCpi0inFVres_stack_7->SetBinError(7,4.74659);
   hNCpi0inFVres_stack_7->SetBinError(8,4.624349);
   hNCpi0inFVres_stack_7->SetBinError(9,4.339076);
   hNCpi0inFVres_stack_7->SetBinError(10,3.933828);
   hNCpi0inFVres_stack_7->SetBinError(11,3.444372);
   hNCpi0inFVres_stack_7->SetBinError(12,2.983588);
   hNCpi0inFVres_stack_7->SetBinError(13,2.620718);
   hNCpi0inFVres_stack_7->SetBinError(14,2.034503);
   hNCpi0inFVres_stack_7->SetBinError(15,1.750671);
   hNCpi0inFVres_stack_7->SetBinError(16,1.623717);
   hNCpi0inFVres_stack_7->SetBinError(17,1.334579);
   hNCpi0inFVres_stack_7->SetBinError(18,1.200711);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9810058);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8279684);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7556716);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6255303);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4712859);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4913117);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8289868);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.393517);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.78325);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.65594);
   hNCpi0inFVdis_stack_8->SetBinContent(7,28.36876);
   hNCpi0inFVdis_stack_8->SetBinContent(8,29.4459);
   hNCpi0inFVdis_stack_8->SetBinContent(9,29.30574);
   hNCpi0inFVdis_stack_8->SetBinContent(10,27.95491);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.99177);
   hNCpi0inFVdis_stack_8->SetBinContent(12,20.74672);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.11515);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.53288);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.48562);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.13738);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.90179);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.586577);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.918138);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.28972);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.165502);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.578602);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.995358);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.407794);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.238918);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7128222);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.297112);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.381789);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.71009);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.74304);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.745791);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.721282);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.546452);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.474716);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.414224);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.109276);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.037793);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.112576);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.856277);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6912469);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.631978);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5684281);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6040582);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5445316);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4756019);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.413906);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8761226);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.5304361);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.283386);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(4,2.339216);
   hCCpi0inFV_stack_10->SetBinContent(5,5.566728);
   hCCpi0inFV_stack_10->SetBinContent(6,13.04489);
   hCCpi0inFV_stack_10->SetBinContent(7,31.91093);
   hCCpi0inFV_stack_10->SetBinContent(8,38.92342);
   hCCpi0inFV_stack_10->SetBinContent(9,47.70438);
   hCCpi0inFV_stack_10->SetBinContent(10,57.94597);
   hCCpi0inFV_stack_10->SetBinContent(11,50.01438);
   hCCpi0inFV_stack_10->SetBinContent(12,49.66983);
   hCCpi0inFV_stack_10->SetBinContent(13,38.16139);
   hCCpi0inFV_stack_10->SetBinContent(14,33.13113);
   hCCpi0inFV_stack_10->SetBinContent(15,31.94622);
   hCCpi0inFV_stack_10->SetBinContent(16,25.9859);
   hCCpi0inFV_stack_10->SetBinContent(17,16.9485);
   hCCpi0inFV_stack_10->SetBinContent(18,12.68406);
   hCCpi0inFV_stack_10->SetBinContent(19,12.51408);
   hCCpi0inFV_stack_10->SetBinContent(20,10.93527);
   hCCpi0inFV_stack_10->SetBinContent(21,8.402499);
   hCCpi0inFV_stack_10->SetBinContent(22,4.159526);
   hCCpi0inFV_stack_10->SetBinContent(23,3.659589);
   hCCpi0inFV_stack_10->SetBinContent(24,4.075458);
   hCCpi0inFV_stack_10->SetBinContent(25,16.16897);
   hCCpi0inFV_stack_10->SetBinError(4,0.8089383);
   hCCpi0inFV_stack_10->SetBinError(5,1.176822);
   hCCpi0inFV_stack_10->SetBinError(6,1.770803);
   hCCpi0inFV_stack_10->SetBinError(7,2.880685);
   hCCpi0inFV_stack_10->SetBinError(8,3.063302);
   hCCpi0inFV_stack_10->SetBinError(9,3.474885);
   hCCpi0inFV_stack_10->SetBinError(10,3.822795);
   hCCpi0inFV_stack_10->SetBinError(11,3.571464);
   hCCpi0inFV_stack_10->SetBinError(12,3.498185);
   hCCpi0inFV_stack_10->SetBinError(13,3.118271);
   hCCpi0inFV_stack_10->SetBinError(14,2.858957);
   hCCpi0inFV_stack_10->SetBinError(15,2.897759);
   hCCpi0inFV_stack_10->SetBinError(16,2.600063);
   hCCpi0inFV_stack_10->SetBinError(17,2.068196);
   hCCpi0inFV_stack_10->SetBinError(18,1.730337);
   hCCpi0inFV_stack_10->SetBinError(19,1.789607);
   hCCpi0inFV_stack_10->SetBinError(20,1.717139);
   hCCpi0inFV_stack_10->SetBinError(21,1.427833);
   hCCpi0inFV_stack_10->SetBinError(22,0.9813267);
   hCCpi0inFV_stack_10->SetBinError(23,0.9809496);
   hCCpi0inFV_stack_10->SetBinError(24,1.043412);
   hCCpi0inFV_stack_10->SetBinError(25,2.049616);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(4,3.659589);
   hNCinFV_stack_11->SetBinContent(5,9.670227);
   hNCinFV_stack_11->SetBinContent(6,13.68291);
   hNCinFV_stack_11->SetBinContent(7,21.15617);
   hNCinFV_stack_11->SetBinContent(8,23.39456);
   hNCinFV_stack_11->SetBinContent(9,23.67543);
   hNCinFV_stack_11->SetBinContent(10,25.64972);
   hNCinFV_stack_11->SetBinContent(11,24.12986);
   hNCinFV_stack_11->SetBinContent(12,18.92407);
   hNCinFV_stack_11->SetBinContent(13,20.26341);
   hNCinFV_stack_11->SetBinContent(14,15.68364);
   hNCinFV_stack_11->SetBinContent(15,13.43617);
   hNCinFV_stack_11->SetBinContent(16,9.313145);
   hNCinFV_stack_11->SetBinContent(17,9.429794);
   hNCinFV_stack_11->SetBinContent(18,10.32823);
   hNCinFV_stack_11->SetBinContent(19,7.075972);
   hNCinFV_stack_11->SetBinContent(20,4.841572);
   hNCinFV_stack_11->SetBinContent(21,4.540041);
   hNCinFV_stack_11->SetBinContent(22,6.450561);
   hNCinFV_stack_11->SetBinContent(23,3.124387);
   hNCinFV_stack_11->SetBinContent(24,1.907138);
   hNCinFV_stack_11->SetBinContent(25,7.513121);
   hNCinFV_stack_11->SetBinError(4,0.9809496);
   hNCinFV_stack_11->SetBinError(5,1.60734);
   hNCinFV_stack_11->SetBinError(6,1.862309);
   hNCinFV_stack_11->SetBinError(7,2.253248);
   hNCinFV_stack_11->SetBinError(8,2.45128);
   hNCinFV_stack_11->SetBinError(9,2.371597);
   hNCinFV_stack_11->SetBinError(10,2.520283);
   hNCinFV_stack_11->SetBinError(11,2.490492);
   hNCinFV_stack_11->SetBinError(12,2.131834);
   hNCinFV_stack_11->SetBinError(13,2.279829);
   hNCinFV_stack_11->SetBinError(14,2.001879);
   hNCinFV_stack_11->SetBinError(15,1.820358);
   hNCinFV_stack_11->SetBinError(16,1.568821);
   hNCinFV_stack_11->SetBinError(17,1.545483);
   hNCinFV_stack_11->SetBinError(18,1.57119);
   hNCinFV_stack_11->SetBinError(19,1.388093);
   hNCinFV_stack_11->SetBinError(20,1.093209);
   hNCinFV_stack_11->SetBinError(21,1.110732);
   hNCinFV_stack_11->SetBinError(22,1.287516);
   hNCinFV_stack_11->SetBinError(23,0.89917);
   hNCinFV_stack_11->SetBinError(24,0.6501133);
   hNCinFV_stack_11->SetBinError(25,1.469872);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,0.810829);
   hnumuCCinFV_stack_12->SetBinContent(4,7.673687);
   hnumuCCinFV_stack_12->SetBinContent(5,18.20001);
   hnumuCCinFV_stack_12->SetBinContent(6,36.76215);
   hnumuCCinFV_stack_12->SetBinContent(7,40.86253);
   hnumuCCinFV_stack_12->SetBinContent(8,32.21765);
   hnumuCCinFV_stack_12->SetBinContent(9,32.54808);
   hnumuCCinFV_stack_12->SetBinContent(10,36.40505);
   hnumuCCinFV_stack_12->SetBinContent(11,28.37727);
   hnumuCCinFV_stack_12->SetBinContent(12,25.31977);
   hnumuCCinFV_stack_12->SetBinContent(13,27.63702);
   hnumuCCinFV_stack_12->SetBinContent(14,17.46136);
   hnumuCCinFV_stack_12->SetBinContent(15,14.10033);
   hnumuCCinFV_stack_12->SetBinContent(16,10.79082);
   hnumuCCinFV_stack_12->SetBinContent(17,6.868042);
   hnumuCCinFV_stack_12->SetBinContent(18,8.241096);
   hnumuCCinFV_stack_12->SetBinContent(19,8.343445);
   hnumuCCinFV_stack_12->SetBinContent(20,5.126806);
   hnumuCCinFV_stack_12->SetBinContent(21,5.132621);
   hnumuCCinFV_stack_12->SetBinContent(22,4.657657);
   hnumuCCinFV_stack_12->SetBinContent(23,3.907867);
   hnumuCCinFV_stack_12->SetBinContent(24,1.717185);
   hnumuCCinFV_stack_12->SetBinContent(25,13.54402);
   hnumuCCinFV_stack_12->SetBinError(3,0.4721419);
   hnumuCCinFV_stack_12->SetBinError(4,1.925132);
   hnumuCCinFV_stack_12->SetBinError(5,2.787814);
   hnumuCCinFV_stack_12->SetBinError(6,3.962889);
   hnumuCCinFV_stack_12->SetBinError(7,3.733703);
   hnumuCCinFV_stack_12->SetBinError(8,3.392359);
   hnumuCCinFV_stack_12->SetBinError(9,3.315638);
   hnumuCCinFV_stack_12->SetBinError(10,3.248163);
   hnumuCCinFV_stack_12->SetBinError(11,2.966651);
   hnumuCCinFV_stack_12->SetBinError(12,2.839049);
   hnumuCCinFV_stack_12->SetBinError(13,3.619482);
   hnumuCCinFV_stack_12->SetBinError(14,2.494802);
   hnumuCCinFV_stack_12->SetBinError(15,2.133723);
   hnumuCCinFV_stack_12->SetBinError(16,1.747869);
   hnumuCCinFV_stack_12->SetBinError(17,1.267921);
   hnumuCCinFV_stack_12->SetBinError(18,1.467949);
   hnumuCCinFV_stack_12->SetBinError(19,1.527969);
   hnumuCCinFV_stack_12->SetBinError(20,1.161246);
   hnumuCCinFV_stack_12->SetBinError(21,1.129345);
   hnumuCCinFV_stack_12->SetBinError(22,1.042721);
   hnumuCCinFV_stack_12->SetBinError(23,0.9808007);
   hnumuCCinFV_stack_12->SetBinError(24,0.6217711);
   hnumuCCinFV_stack_12->SetBinError(25,1.901046);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(4,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(5,0.4488907);
   hnueCCinFV_stack_13->SetBinContent(6,0.5938826);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(9,0.8950397);
   hnueCCinFV_stack_13->SetBinContent(10,1.328308);
   hnueCCinFV_stack_13->SetBinContent(11,1.429551);
   hnueCCinFV_stack_13->SetBinContent(12,0.5355703);
   hnueCCinFV_stack_13->SetBinContent(13,0.441907);
   hnueCCinFV_stack_13->SetBinContent(14,2.062788);
   hnueCCinFV_stack_13->SetBinContent(15,0.536893);
   hnueCCinFV_stack_13->SetBinContent(16,0.6428206);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.7936127);
   hnueCCinFV_stack_13->SetBinContent(19,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(20,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,6.829063);
   hnueCCinFV_stack_13->SetBinError(4,0.4139598);
   hnueCCinFV_stack_13->SetBinError(5,0.320129);
   hnueCCinFV_stack_13->SetBinError(6,0.4243666);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.4132436);
   hnueCCinFV_stack_13->SetBinError(9,0.450777);
   hnueCCinFV_stack_13->SetBinError(10,0.7394474);
   hnueCCinFV_stack_13->SetBinError(11,0.6577984);
   hnueCCinFV_stack_13->SetBinError(12,0.3921169);
   hnueCCinFV_stack_13->SetBinError(13,0.3143499);
   hnueCCinFV_stack_13->SetBinError(14,1.613388);
   hnueCCinFV_stack_13->SetBinError(15,0.3929602);
   hnueCCinFV_stack_13->SetBinError(16,0.3735155);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.4753206);
   hnueCCinFV_stack_13->SetBinError(19,0.3326517);
   hnueCCinFV_stack_13->SetBinError(20,0.4379386);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.2770047);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,1.692983);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__14->SetBinContent(3,5.665478);
   hmcerror__14->SetBinContent(4,86.90398);
   hmcerror__14->SetBinContent(5,218.0294);
   hmcerror__14->SetBinContent(6,324.2802);
   hmcerror__14->SetBinContent(7,400.2065);
   hmcerror__14->SetBinContent(8,388.5524);
   hmcerror__14->SetBinContent(9,361.7157);
   hmcerror__14->SetBinContent(10,348.879);
   hmcerror__14->SetBinContent(11,274.8543);
   hmcerror__14->SetBinContent(12,232.6396);
   hmcerror__14->SetBinContent(13,196.318);
   hmcerror__14->SetBinContent(14,146.2973);
   hmcerror__14->SetBinContent(15,116.5915);
   hmcerror__14->SetBinContent(16,93.48721);
   hmcerror__14->SetBinContent(17,67.23089);
   hmcerror__14->SetBinContent(18,55.39933);
   hmcerror__14->SetBinContent(19,46.31829);
   hmcerror__14->SetBinContent(20,36.32423);
   hmcerror__14->SetBinContent(21,32.02914);
   hmcerror__14->SetBinContent(22,24.34634);
   hmcerror__14->SetBinContent(23,16.76684);
   hmcerror__14->SetBinContent(24,15.51587);
   hmcerror__14->SetBinContent(25,75.35442);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,0.3895343);
   hmcerror__14->SetBinError(3,5.470202);
   hmcerror__14->SetBinError(4,26.23037);
   hmcerror__14->SetBinError(5,68.19896);
   hmcerror__14->SetBinError(6,113.7932);
   hmcerror__14->SetBinError(7,153.4499);
   hmcerror__14->SetBinError(8,155.1285);
   hmcerror__14->SetBinError(9,149.714);
   hmcerror__14->SetBinError(10,132.7309);
   hmcerror__14->SetBinError(11,104.3552);
   hmcerror__14->SetBinError(12,89.58735);
   hmcerror__14->SetBinError(13,84.64732);
   hmcerror__14->SetBinError(14,53.40612);
   hmcerror__14->SetBinError(15,41.90858);
   hmcerror__14->SetBinError(16,43.62345);
   hmcerror__14->SetBinError(17,27.12133);
   hmcerror__14->SetBinError(18,22.99015);
   hmcerror__14->SetBinError(19,21.7723);
   hmcerror__14->SetBinError(20,16.85009);
   hmcerror__14->SetBinError(21,17.37048);
   hmcerror__14->SetBinError(22,17.10516);
   hmcerror__14->SetBinError(23,13.11504);
   hmcerror__14->SetBinError(24,8.665532);
   hmcerror__14->SetBinError(25,25.52734);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3017[24] = {
   0,
   0,
   8,
   68,
   188,
   279,
   327,
   291,
   277,
   245,
   191,
   143,
   126,
   99,
   75,
   61,
   45,
   42,
   34,
   27,
   13,
   11,
   15,
   6};
   Double_t _felx3017[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3017[24] = {
   0,
   0,
   3.0307,
   8.3726,
   13.71131,
   16.70329,
   18.08314,
   17.05872,
   16.64332,
   15.65248,
   13.82027,
   11.95826,
   11.22497,
   10.0712,
   8.7852,
   7.9383,
   6.8416,
   6.6155,
   5.9703,
   5.3414,
   3.77763,
   3.4975,
   4.0385,
   2.67925};
   Double_t _fehx3017[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3017[24] = {
   1.1478,
   1.1478,
   2.7896,
   8.1701,
   13.71131,
   16.70329,
   18.08314,
   17.05872,
   16.64332,
   15.65248,
   13.82027,
   11.95826,
   11.22497,
   9.87,
   8.5831,
   7.7354,
   6.637,
   6.4104,
   5.7635,
   5.1322,
   3.5552,
   3.27,
   3.8197,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1760);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(379.5915);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2571.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 79.8","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 263.4","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 214.0","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.0","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1457.9","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  276.5","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 499.7","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 270.3","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 373.2","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.6","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   
   Double_t _fx3018[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3018[24] = {
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
   Double_t _felx3018[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3018[24] = {
   0,
   0,
   0.9655323,
   0.3018316,
   0.312797,
   0.3509101,
   0.3834267,
   0.3992473,
   0.4138998,
   0.3804498,
   0.3796745,
   0.3850906,
   0.4311745,
   0.3650519,
   0.3594481,
   0.4666248,
   0.4034058,
   0.4149896,
   0.4700582,
   0.4638801,
   0.5423335,
   0.7025763,
   0.7822008,
   0.5584947};
   Double_t _fehx3018[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3018[24] = {
   0,
   0,
   0.9655323,
   0.3018316,
   0.312797,
   0.3509101,
   0.3834267,
   0.3992473,
   0.4138998,
   0.3804498,
   0.3796745,
   0.3850906,
   0.4311745,
   0.3650519,
   0.3594481,
   0.4666248,
   0.4034058,
   0.4149896,
   0.4700582,
   0.4638801,
   0.5423335,
   0.7025763,
   0.7822008,
   0.5584947};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1760);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3019[24] = {
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
   Double_t _felx3019[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3019[24] = {
   0,
   0,
   0.3232593,
   0.2287151,
   0.2840377,
   0.3334704,
   0.3659062,
   0.3859428,
   0.3954735,
   0.3631247,
   0.3577246,
   0.3383535,
   0.326047,
   0.3061151,
   0.272483,
   0.2683896,
   0.2609545,
   0.2406406,
   0.2425298,
   0.2469897,
   0.2201652,
   0.2580294,
   0.2551203,
   0.2308081};
   Double_t _fehx3019[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3019[24] = {
   0,
   0,
   0.3232593,
   0.2287151,
   0.2840377,
   0.3334704,
   0.3659062,
   0.3859428,
   0.3954735,
   0.3631247,
   0.3577246,
   0.3383535,
   0.326047,
   0.3061151,
   0.272483,
   0.2683896,
   0.2609545,
   0.2406406,
   0.2425298,
   0.2469897,
   0.2201652,
   0.2580294,
   0.2551203,
   0.2308081};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1760);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3020[24] = {
   10,
   10,
   1.412061,
   0.7824728,
   0.8622688,
   0.860367,
   0.8170781,
   0.7489337,
   0.7657949,
   0.7022492,
   0.6949137,
   0.6146846,
   0.6418158,
   0.6767041,
   0.6432718,
   0.6524957,
   0.6693352,
   0.7581319,
   0.7340512,
   0.7433054,
   0.4058804,
   0.4518133,
   0.894623,
   0.3867008};
   Double_t _felx3020[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3020[24] = {
   0,
   0,
   0.5349416,
   0.09634311,
   0.06288742,
   0.05150883,
   0.04518452,
   0.04390327,
   0.04601215,
   0.04486506,
   0.05028219,
   0.05140251,
   0.0571775,
   0.06884063,
   0.07535028,
   0.08491322,
   0.1017627,
   0.1194148,
   0.1288972,
   0.1470478,
   0.1179435,
   0.1436561,
   0.2408623,
   0.172678};
   Double_t _fehx3020[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3020[24] = {
   0,
   0,
   0.4923856,
   0.09401295,
   0.06288742,
   0.05150883,
   0.04518452,
   0.04390327,
   0.04601215,
   0.04486506,
   0.05028219,
   0.05140251,
   0.0571775,
   0.06746535,
   0.07361688,
   0.08274287,
   0.0987195,
   0.1157126,
   0.1244325,
   0.1412886,
   0.1109989,
   0.1343118,
   0.2278128,
   0.1558778};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1760);
   Graph_Graph3020->SetMinimum(0.1926205);
   Graph_Graph3020->SetMaximum(10.9786);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",24,0,1600);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,1600,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

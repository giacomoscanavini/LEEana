#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 21:59:47 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-1.307692,-1.395894,1.25641,154.3565);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__10->SetBinContent(1,23.99345);
   hmc__10->SetBinContent(2,14.53657);
   hmc__10->SetBinContent(3,15.46582);
   hmc__10->SetBinContent(4,11.18213);
   hmc__10->SetBinContent(5,11.80766);
   hmc__10->SetBinContent(6,16.48651);
   hmc__10->SetBinContent(7,13.54158);
   hmc__10->SetBinContent(8,14.8566);
   hmc__10->SetBinContent(9,15.07085);
   hmc__10->SetBinContent(10,18.90816);
   hmc__10->SetBinContent(11,19.22586);
   hmc__10->SetBinContent(12,19.99339);
   hmc__10->SetBinContent(13,20.31866);
   hmc__10->SetBinContent(14,24.53084);
   hmc__10->SetBinContent(15,27.79798);
   hmc__10->SetBinContent(16,25.30283);
   hmc__10->SetBinContent(17,38.37176);
   hmc__10->SetBinContent(18,39.05132);
   hmc__10->SetBinContent(19,40.29878);
   hmc__10->SetBinContent(20,69.79469);
   hmc__10->SetBinError(1,12.63287);
   hmc__10->SetBinError(2,14.37529);
   hmc__10->SetBinError(3,9.120303);
   hmc__10->SetBinError(4,9.595777);
   hmc__10->SetBinError(5,8.438753);
   hmc__10->SetBinError(6,8.954323);
   hmc__10->SetBinError(7,10.62306);
   hmc__10->SetBinError(8,8.104757);
   hmc__10->SetBinError(9,9.959094);
   hmc__10->SetBinError(10,10.43473);
   hmc__10->SetBinError(11,9.242962);
   hmc__10->SetBinError(12,11.06446);
   hmc__10->SetBinError(13,9.74585);
   hmc__10->SetBinError(14,15.69039);
   hmc__10->SetBinError(15,13.68833);
   hmc__10->SetBinError(16,18.24422);
   hmc__10->SetBinError(17,17.63147);
   hmc__10->SetBinError(18,18.55884);
   hmc__10->SetBinError(19,19.356);
   hmc__10->SetBinError(20,33.29589);
   hmc__10->SetBinError(21,0.3895343);
   hmc__10->SetMinimum(-1.395894);
   hmc__10->SetMaximum(146.5688);
   hmc__10->SetEntries(469.1651);
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
   hs4_stack_4->SetMinimum(-1.244044e-08);
   hs4_stack_4->SetMaximum(73.28442);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.203729);
   hbadmatch_stack_1->SetBinContent(2,0.2239027);
   hbadmatch_stack_1->SetBinContent(3,0.8770706);
   hbadmatch_stack_1->SetBinContent(4,0.1950248);
   hbadmatch_stack_1->SetBinContent(5,0.7319179);
   hbadmatch_stack_1->SetBinContent(6,0.6803553);
   hbadmatch_stack_1->SetBinContent(7,1.363313);
   hbadmatch_stack_1->SetBinContent(8,0.4117681);
   hbadmatch_stack_1->SetBinContent(9,1.818368);
   hbadmatch_stack_1->SetBinContent(10,0.3934307);
   hbadmatch_stack_1->SetBinContent(11,1.019722);
   hbadmatch_stack_1->SetBinContent(12,1.208779);
   hbadmatch_stack_1->SetBinContent(13,0.5841618);
   hbadmatch_stack_1->SetBinContent(14,0.5884556);
   hbadmatch_stack_1->SetBinContent(15,0.9261654);
   hbadmatch_stack_1->SetBinContent(16,0.8753801);
   hbadmatch_stack_1->SetBinContent(17,0.9011435);
   hbadmatch_stack_1->SetBinContent(18,1.3944);
   hbadmatch_stack_1->SetBinContent(19,0.5352025);
   hbadmatch_stack_1->SetBinContent(20,1.344201);
   hbadmatch_stack_1->SetBinError(1,0.5514638);
   hbadmatch_stack_1->SetBinError(2,0.2239027);
   hbadmatch_stack_1->SetBinError(3,0.5197486);
   hbadmatch_stack_1->SetBinError(4,0.1950249);
   hbadmatch_stack_1->SetBinError(5,0.438694);
   hbadmatch_stack_1->SetBinError(6,0.4810838);
   hbadmatch_stack_1->SetBinError(7,0.5713784);
   hbadmatch_stack_1->SetBinError(8,0.2914526);
   hbadmatch_stack_1->SetBinError(9,0.784346);
   hbadmatch_stack_1->SetBinError(10,0.2781975);
   hbadmatch_stack_1->SetBinError(11,0.4573178);
   hbadmatch_stack_1->SetBinError(12,0.4941666);
   hbadmatch_stack_1->SetBinError(13,0.4186276);
   hbadmatch_stack_1->SetBinError(14,0.3397478);
   hbadmatch_stack_1->SetBinError(15,0.5537215);
   hbadmatch_stack_1->SetBinError(16,0.5191111);
   hbadmatch_stack_1->SetBinError(17,0.5798477);
   hbadmatch_stack_1->SetBinError(18,0.5828893);
   hbadmatch_stack_1->SetBinError(19,0.3921167);
   hbadmatch_stack_1->SetBinError(20,0.5636868);
   hbadmatch_stack_1->SetEntries(71);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,2.510206);
   hext_stack_2->SetBinContent(2,1.868591);
   hext_stack_2->SetBinContent(3,1.461993);
   hext_stack_2->SetBinContent(4,0.9660115);
   hext_stack_2->SetBinContent(5,0.4065989);
   hext_stack_2->SetBinContent(6,2.987417);
   hext_stack_2->SetBinContent(7,0.7309963);
   hext_stack_2->SetBinContent(8,2.021405);
   hext_stack_2->SetBinContent(9,0.6487947);
   hext_stack_2->SetBinContent(10,2.345802);
   hext_stack_2->SetBinContent(11,2.67738);
   hext_stack_2->SetBinContent(12,1.461993);
   hext_stack_2->SetBinContent(13,2.916804);
   hext_stack_2->SetBinContent(14,2.103607);
   hext_stack_2->SetBinContent(15,0.6416141);
   hext_stack_2->SetBinContent(16,2.103607);
   hext_stack_2->SetBinContent(17,3.965017);
   hext_stack_2->SetBinContent(18,2.021405);
   hext_stack_2->SetBinContent(19,2.6702);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinError(1,1.057404);
   hext_stack_2->SetBinError(2,0.840497);
   hext_stack_2->SetBinError(3,0.7356036);
   hext_stack_2->SetBinError(4,0.7189592);
   hext_stack_2->SetBinError(5,0.4065989);
   hext_stack_2->SetBinError(6,1.187264);
   hext_stack_2->SetBinError(7,0.5201503);
   hext_stack_2->SetBinError(8,0.9448239);
   hext_stack_2->SetBinError(9,0.4587671);
   hext_stack_2->SetBinError(10,0.9989624);
   hext_stack_2->SetBinError(11,0.9497147);
   hext_stack_2->SetBinError(12,0.7356036);
   hext_stack_2->SetBinError(13,1.132884);
   hext_stack_2->SetBinError(14,0.9761052);
   hext_stack_2->SetBinError(15,0.6416141);
   hext_stack_2->SetBinError(16,0.9761052);
   hext_stack_2->SetBinError(17,1.363971);
   hext_stack_2->SetBinError(18,0.9448239);
   hext_stack_2->SetBinError(19,1.050314);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetEntries(92);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(3,0.4049124);
   hdirt_stack_3->SetBinContent(5,0.4762587);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.529281);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.4149213);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinError(3,0.4049124);
   hdirt_stack_3->SetBinError(5,0.3652866);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(15,0.3726062);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(19,0.4149213);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetEntries(11);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,6.782286);
   houtFV_stack_4->SetBinContent(2,4.839881);
   houtFV_stack_4->SetBinContent(3,3.965169);
   houtFV_stack_4->SetBinContent(4,2.496243);
   houtFV_stack_4->SetBinContent(5,1.897493);
   houtFV_stack_4->SetBinContent(6,2.640747);
   houtFV_stack_4->SetBinContent(7,2.238143);
   houtFV_stack_4->SetBinContent(8,2.789281);
   houtFV_stack_4->SetBinContent(9,3.010641);
   houtFV_stack_4->SetBinContent(10,1.956854);
   houtFV_stack_4->SetBinContent(11,3.368248);
   houtFV_stack_4->SetBinContent(12,2.035965);
   houtFV_stack_4->SetBinContent(13,1.710423);
   houtFV_stack_4->SetBinContent(14,3.322793);
   houtFV_stack_4->SetBinContent(15,4.229218);
   houtFV_stack_4->SetBinContent(16,2.53255);
   houtFV_stack_4->SetBinContent(17,4.539135);
   houtFV_stack_4->SetBinContent(18,7.398093);
   houtFV_stack_4->SetBinContent(19,5.417821);
   houtFV_stack_4->SetBinContent(20,11.76919);
   houtFV_stack_4->SetBinError(1,1.330454);
   houtFV_stack_4->SetBinError(2,1.092906);
   houtFV_stack_4->SetBinError(3,0.9859473);
   houtFV_stack_4->SetBinError(4,0.7746974);
   houtFV_stack_4->SetBinError(5,0.6926351);
   houtFV_stack_4->SetBinError(6,0.784705);
   houtFV_stack_4->SetBinError(7,0.7718084);
   houtFV_stack_4->SetBinError(8,0.8335302);
   houtFV_stack_4->SetBinError(9,0.8195709);
   houtFV_stack_4->SetBinError(10,0.6665249);
   houtFV_stack_4->SetBinError(11,0.9809559);
   houtFV_stack_4->SetBinError(12,0.6476953);
   houtFV_stack_4->SetBinError(13,0.6196373);
   houtFV_stack_4->SetBinError(14,0.9207963);
   houtFV_stack_4->SetBinError(15,0.9962746);
   houtFV_stack_4->SetBinError(16,0.8317173);
   houtFV_stack_4->SetBinError(17,1.046737);
   houtFV_stack_4->SetBinError(18,1.334336);
   houtFV_stack_4->SetBinError(19,1.122381);
   houtFV_stack_4->SetBinError(20,1.821098);
   houtFV_stack_4->SetEntries(344);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.04832419);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.307068);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2032767);
   hNCpi0inFVqe_stack_6->SetEntries(26);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.970698);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.538412);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.79068);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.71943);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.811675);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.625024);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.068848);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.914234);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.233752);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.133296);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.916642);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.883772);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.08961);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.26649);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.83478);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.958918);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.276131);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.663906);
   hNCpi0inFVres_stack_7->SetBinContent(19,11.90687);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.50672);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5596301);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5114834);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5944787);
   hNCpi0inFVres_stack_7->SetBinError(4,0.522897);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3519001);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6562988);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5847417);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5701945);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5373962);
   hNCpi0inFVres_stack_7->SetBinError(10,0.809829);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6273935);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8354951);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7149125);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9205324);
   hNCpi0inFVres_stack_7->SetBinError(15,0.890516);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8412976);
   hNCpi0inFVres_stack_7->SetBinError(17,1.033063);
   hNCpi0inFVres_stack_7->SetBinError(18,1.048489);
   hNCpi0inFVres_stack_7->SetBinError(19,1.105762);
   hNCpi0inFVres_stack_7->SetBinError(20,1.145299);
   hNCpi0inFVres_stack_7->SetEntries(2042);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.255508);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5151539);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.7538042);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9627222);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9610579);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5852358);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.241058);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9625539);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9210359);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.590476);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.13353);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.635402);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.522466);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.592314);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4237414);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2144572);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1861173);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3453893);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3631504);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3055255);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1727406);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3913503);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3148322);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3020022);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4708042);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5070253);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5916896);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.478999);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7895492);
   hNCpi0inFVdis_stack_8->SetEntries(441);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(5);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,5.566728);
   hCCpi0inFV_stack_10->SetBinContent(2,2.977543);
   hCCpi0inFV_stack_10->SetBinContent(3,2.835772);
   hCCpi0inFV_stack_10->SetBinContent(4,1.174675);
   hCCpi0inFV_stack_10->SetBinContent(5,3.195443);
   hCCpi0inFV_stack_10->SetBinContent(6,3.002345);
   hCCpi0inFV_stack_10->SetBinContent(7,2.69176);
   hCCpi0inFV_stack_10->SetBinContent(8,4.059806);
   hCCpi0inFV_stack_10->SetBinContent(9,2.873116);
   hCCpi0inFV_stack_10->SetBinContent(10,2.758873);
   hCCpi0inFV_stack_10->SetBinContent(11,3.310373);
   hCCpi0inFV_stack_10->SetBinContent(12,3.037559);
   hCCpi0inFV_stack_10->SetBinContent(13,2.681417);
   hCCpi0inFV_stack_10->SetBinContent(14,5.036597);
   hCCpi0inFV_stack_10->SetBinContent(15,6.054395);
   hCCpi0inFV_stack_10->SetBinContent(16,4.179152);
   hCCpi0inFV_stack_10->SetBinContent(17,7.910199);
   hCCpi0inFV_stack_10->SetBinContent(18,7.488375);
   hCCpi0inFV_stack_10->SetBinContent(19,6.720137);
   hCCpi0inFV_stack_10->SetBinContent(20,15.65755);
   hCCpi0inFV_stack_10->SetBinError(1,1.176822);
   hCCpi0inFV_stack_10->SetBinError(2,0.854493);
   hCCpi0inFV_stack_10->SetBinError(3,0.808577);
   hCCpi0inFV_stack_10->SetBinError(4,0.539925);
   hCCpi0inFV_stack_10->SetBinError(5,0.8375249);
   hCCpi0inFV_stack_10->SetBinError(6,0.9081415);
   hCCpi0inFV_stack_10->SetBinError(7,0.798913);
   hCCpi0inFV_stack_10->SetBinError(8,1.059126);
   hCCpi0inFV_stack_10->SetBinError(9,0.8183134);
   hCCpi0inFV_stack_10->SetBinError(10,0.8619602);
   hCCpi0inFV_stack_10->SetBinError(11,0.8394205);
   hCCpi0inFV_stack_10->SetBinError(12,0.8333549);
   hCCpi0inFV_stack_10->SetBinError(13,0.7957884);
   hCCpi0inFV_stack_10->SetBinError(14,1.110469);
   hCCpi0inFV_stack_10->SetBinError(15,1.250609);
   hCCpi0inFV_stack_10->SetBinError(16,1.027372);
   hCCpi0inFV_stack_10->SetBinError(17,1.477517);
   hCCpi0inFV_stack_10->SetBinError(18,1.421804);
   hCCpi0inFV_stack_10->SetBinError(19,1.308593);
   hCCpi0inFV_stack_10->SetBinError(20,2.053251);
   hCCpi0inFV_stack_10->SetEntries(397);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.9835768);
   hNCinFV_stack_11->SetBinContent(2,0.5867651);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.5352025);
   hNCinFV_stack_11->SetBinContent(5,0.3934307);
   hNCinFV_stack_11->SetBinContent(6,0.7336084);
   hNCinFV_stack_11->SetBinContent(7,0.9303237);
   hNCinFV_stack_11->SetBinContent(9,1.072095);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.536893);
   hNCinFV_stack_11->SetBinContent(12,0.1950248);
   hNCinFV_stack_11->SetBinContent(13,0.536893);
   hNCinFV_stack_11->SetBinContent(14,0.3401776);
   hNCinFV_stack_11->SetBinContent(15,1.072095);
   hNCinFV_stack_11->SetBinContent(16,1.125349);
   hNCinFV_stack_11->SetBinContent(17,1.072095);
   hNCinFV_stack_11->SetBinContent(18,2.642437);
   hNCinFV_stack_11->SetBinContent(19,3.225821);
   hNCinFV_stack_11->SetBinContent(20,6.395617);
   hNCinFV_stack_11->SetBinError(1,0.4398689);
   hNCinFV_stack_11->SetBinError(2,0.3387718);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.3921167);
   hNCinFV_stack_11->SetBinError(5,0.2781975);
   hNCinFV_stack_11->SetBinError(6,0.4394482);
   hNCinFV_stack_11->SetBinError(7,0.4814682);
   hNCinFV_stack_11->SetBinError(9,0.5551335);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.3929602);
   hNCinFV_stack_11->SetBinError(12,0.1950249);
   hNCinFV_stack_11->SetBinError(13,0.3929602);
   hNCinFV_stack_11->SetBinError(14,0.3401776);
   hNCinFV_stack_11->SetBinError(15,0.5551335);
   hNCinFV_stack_11->SetBinError(16,0.5194673);
   hNCinFV_stack_11->SetBinError(17,0.5551335);
   hNCinFV_stack_11->SetBinError(18,0.7851269);
   hNCinFV_stack_11->SetBinError(19,0.854322);
   hNCinFV_stack_11->SetBinError(20,1.302061);
   hNCinFV_stack_11->SetEntries(97);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.299386);
   hnumuCCinFV_stack_12->SetBinContent(2,0.9712056);
   hnumuCCinFV_stack_12->SetBinContent(3,1.996787);
   hnumuCCinFV_stack_12->SetBinContent(4,2.118814);
   hnumuCCinFV_stack_12->SetBinContent(5,2.37886);
   hnumuCCinFV_stack_12->SetBinContent(6,2.217162);
   hnumuCCinFV_stack_12->SetBinContent(7,2.169778);
   hnumuCCinFV_stack_12->SetBinContent(8,2.088322);
   hnumuCCinFV_stack_12->SetBinContent(9,1.925994);
   hnumuCCinFV_stack_12->SetBinContent(10,4.994492);
   hnumuCCinFV_stack_12->SetBinContent(11,3.379744);
   hnumuCCinFV_stack_12->SetBinContent(12,5.585059);
   hnumuCCinFV_stack_12->SetBinContent(13,5.502495);
   hnumuCCinFV_stack_12->SetBinContent(14,4.854373);
   hnumuCCinFV_stack_12->SetBinContent(15,5.316496);
   hnumuCCinFV_stack_12->SetBinContent(16,5.771426);
   hnumuCCinFV_stack_12->SetBinContent(17,8.477192);
   hnumuCCinFV_stack_12->SetBinContent(18,5.613427);
   hnumuCCinFV_stack_12->SetBinContent(19,6.578722);
   hnumuCCinFV_stack_12->SetBinContent(20,12.40609);
   hnumuCCinFV_stack_12->SetBinError(1,0.7402284);
   hnumuCCinFV_stack_12->SetBinError(2,0.499711);
   hnumuCCinFV_stack_12->SetBinError(3,0.7860993);
   hnumuCCinFV_stack_12->SetBinError(4,0.7682538);
   hnumuCCinFV_stack_12->SetBinError(5,0.8289834);
   hnumuCCinFV_stack_12->SetBinError(6,0.7643967);
   hnumuCCinFV_stack_12->SetBinError(7,0.7823796);
   hnumuCCinFV_stack_12->SetBinError(8,0.8753515);
   hnumuCCinFV_stack_12->SetBinError(9,0.6914205);
   hnumuCCinFV_stack_12->SetBinError(10,1.567401);
   hnumuCCinFV_stack_12->SetBinError(11,0.978638);
   hnumuCCinFV_stack_12->SetBinError(12,1.284626);
   hnumuCCinFV_stack_12->SetBinError(13,1.416697);
   hnumuCCinFV_stack_12->SetBinError(14,1.284771);
   hnumuCCinFV_stack_12->SetBinError(15,1.243139);
   hnumuCCinFV_stack_12->SetBinError(16,1.43912);
   hnumuCCinFV_stack_12->SetBinError(17,1.499234);
   hnumuCCinFV_stack_12->SetBinError(18,1.192604);
   hnumuCCinFV_stack_12->SetBinError(19,1.230191);
   hnumuCCinFV_stack_12->SetBinError(20,2.526122);
   hnumuCCinFV_stack_12->SetEntries(332);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,3.131764);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.2171002);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,1.725944);
   hnueCCinFV_stack_13->SetEntries(12);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__11->SetBinContent(1,23.99345);
   hmcerror__11->SetBinContent(2,14.53657);
   hmcerror__11->SetBinContent(3,15.46582);
   hmcerror__11->SetBinContent(4,11.18213);
   hmcerror__11->SetBinContent(5,11.80766);
   hmcerror__11->SetBinContent(6,16.48651);
   hmcerror__11->SetBinContent(7,13.54158);
   hmcerror__11->SetBinContent(8,14.8566);
   hmcerror__11->SetBinContent(9,15.07085);
   hmcerror__11->SetBinContent(10,18.90816);
   hmcerror__11->SetBinContent(11,19.22586);
   hmcerror__11->SetBinContent(12,19.99339);
   hmcerror__11->SetBinContent(13,20.31866);
   hmcerror__11->SetBinContent(14,24.53084);
   hmcerror__11->SetBinContent(15,27.79798);
   hmcerror__11->SetBinContent(16,25.30283);
   hmcerror__11->SetBinContent(17,38.37176);
   hmcerror__11->SetBinContent(18,39.05132);
   hmcerror__11->SetBinContent(19,40.29878);
   hmcerror__11->SetBinContent(20,69.79469);
   hmcerror__11->SetBinError(1,12.63287);
   hmcerror__11->SetBinError(2,14.37529);
   hmcerror__11->SetBinError(3,9.120303);
   hmcerror__11->SetBinError(4,9.595777);
   hmcerror__11->SetBinError(5,8.438753);
   hmcerror__11->SetBinError(6,8.954323);
   hmcerror__11->SetBinError(7,10.62306);
   hmcerror__11->SetBinError(8,8.104757);
   hmcerror__11->SetBinError(9,9.959094);
   hmcerror__11->SetBinError(10,10.43473);
   hmcerror__11->SetBinError(11,9.242962);
   hmcerror__11->SetBinError(12,11.06446);
   hmcerror__11->SetBinError(13,9.74585);
   hmcerror__11->SetBinError(14,15.69039);
   hmcerror__11->SetBinError(15,13.68833);
   hmcerror__11->SetBinError(16,18.24422);
   hmcerror__11->SetBinError(17,17.63147);
   hmcerror__11->SetBinError(18,18.55884);
   hmcerror__11->SetBinError(19,19.356);
   hmcerror__11->SetBinError(20,33.29589);
   hmcerror__11->SetBinError(21,0.3895343);
   hmcerror__11->SetEntries(469.1651);

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
   27,
   12,
   14,
   14,
   12,
   9,
   10,
   10,
   13,
   15,
   22,
   18,
   20,
   20,
   14,
   29,
   22,
   34,
   31,
   51};
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
   5.3414,
   3.64022,
   3.9102,
   3.9102,
   3.64022,
   3.19354,
   3.34883,
   3.34883,
   3.77763,
   4.0385,
   4.8417,
   4.4008,
   4.6266,
   4.6266,
   3.9102,
   5.5285,
   4.8417,
   5.9703,
   5.7094,
   7.2725};
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
   5.1322,
   3.4155,
   3.6898,
   3.6898,
   3.4155,
   2.9582,
   3.1179,
   3.1179,
   3.5552,
   3.8197,
   4.6299,
   4.1858,
   4.4133,
   4.4133,
   3.6898,
   5.3201,
   4.6299,
   5.7635,
   5.5017,
   7.0686};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(0.580246);
   Graph_Graph3013->SetMaximum(63.29481);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 397.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 36.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  111.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 93.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all");
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
   0.5265134,
   0.9889054,
   0.5897069,
   0.858135,
   0.7146844,
   0.5431302,
   0.7844772,
   0.5455324,
   0.6608185,
   0.5518639,
   0.4807567,
   0.5534061,
   0.4796502,
   0.6396187,
   0.4924218,
   0.7210346,
   0.4594907,
   0.4752423,
   0.4803122,
   0.4770547};
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
   0.5265134,
   0.9889054,
   0.5897069,
   0.858135,
   0.7146844,
   0.5431302,
   0.7844772,
   0.5455324,
   0.6608185,
   0.5518639,
   0.4807567,
   0.5534061,
   0.4796502,
   0.6396187,
   0.4924218,
   0.7210346,
   0.4594907,
   0.4752423,
   0.4803122,
   0.4770547};
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
   0.2486956,
   0.2717196,
   0.2750278,
   0.3200214,
   0.3010336,
   0.2478725,
   0.3098502,
   0.270893,
   0.2925302,
   0.276364,
   0.2558296,
   0.2960155,
   0.2728503,
   0.3223882,
   0.3201005,
   0.3280458,
   0.2742435,
   0.2965702,
   0.2836898,
   0.2339271};
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
   0.2486956,
   0.2717196,
   0.2750278,
   0.3200214,
   0.3010336,
   0.2478725,
   0.3098502,
   0.270893,
   0.2925302,
   0.276364,
   0.2558296,
   0.2960155,
   0.2728503,
   0.3223882,
   0.3201005,
   0.3280458,
   0.2742435,
   0.2965702,
   0.2836898,
   0.2339271};
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
   1.125307,
   0.8255043,
   0.9052218,
   1.251998,
   1.016289,
   0.5459008,
   0.7384663,
   0.6731015,
   0.8625926,
   0.7933085,
   1.144292,
   0.9002978,
   0.9843168,
   0.8153001,
   0.5036337,
   1.146117,
   0.5733383,
   0.8706492,
   0.769254,
   0.7307147};
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
   0.2226191,
   0.2504181,
   0.2528285,
   0.3496829,
   0.308293,
   0.1937062,
   0.2472998,
   0.2254102,
   0.2506581,
   0.2135851,
   0.2518327,
   0.2201128,
   0.227702,
   0.1886034,
   0.1406649,
   0.2184933,
   0.1261787,
   0.1528834,
   0.1416767,
   0.1041985};
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
   0.2139001,
   0.2349591,
   0.2385777,
   0.3299729,
   0.2892613,
   0.1794315,
   0.2302464,
   0.2098663,
   0.2358992,
   0.2020134,
   0.2408163,
   0.2093592,
   0.2172043,
   0.1799082,
   0.1327363,
   0.2102571,
   0.120659,
   0.1475878,
   0.1365227,
   0.1012771};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.229217);
   Graph_Graph3016->SetMaximum(1.704948);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 13:03:48 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",138,161,1200,900);
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
   pad1->Range(-1.307692,-5.499193,1.25641,608.095);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__13->SetBinContent(1,112.1886);
   hmc__13->SetBinContent(2,92.27431);
   hmc__13->SetBinContent(3,82.15626);
   hmc__13->SetBinContent(4,76.94661);
   hmc__13->SetBinContent(5,78.84779);
   hmc__13->SetBinContent(6,86.4926);
   hmc__13->SetBinContent(7,78.67497);
   hmc__13->SetBinContent(8,86.5417);
   hmc__13->SetBinContent(9,90.15083);
   hmc__13->SetBinContent(10,102.727);
   hmc__13->SetBinContent(11,112.8309);
   hmc__13->SetBinContent(12,120.4078);
   hmc__13->SetBinContent(13,122.2164);
   hmc__13->SetBinContent(14,130.7276);
   hmc__13->SetBinContent(15,133.4142);
   hmc__13->SetBinContent(16,151.2266);
   hmc__13->SetBinContent(17,172.7038);
   hmc__13->SetBinContent(18,188.0975);
   hmc__13->SetBinContent(19,203.4572);
   hmc__13->SetBinContent(20,274.9597);
   hmc__13->SetBinError(1,38.04601);
   hmc__13->SetBinError(2,37.4015);
   hmc__13->SetBinError(3,31.89874);
   hmc__13->SetBinError(4,30.54368);
   hmc__13->SetBinError(5,29.88502);
   hmc__13->SetBinError(6,30.99364);
   hmc__13->SetBinError(7,32.09529);
   hmc__13->SetBinError(8,32.51079);
   hmc__13->SetBinError(9,34.81966);
   hmc__13->SetBinError(10,41.09003);
   hmc__13->SetBinError(11,41.22169);
   hmc__13->SetBinError(12,49.06544);
   hmc__13->SetBinError(13,46.22988);
   hmc__13->SetBinError(14,58.04841);
   hmc__13->SetBinError(15,56.4235);
   hmc__13->SetBinError(16,70.6486);
   hmc__13->SetBinError(17,69.37128);
   hmc__13->SetBinError(18,74.6824);
   hmc__13->SetBinError(19,78.27663);
   hmc__13->SetBinError(20,88.75967);
   hmc__13->SetBinError(21,0.3895343);
   hmc__13->SetMinimum(-5.499193);
   hmc__13->SetMaximum(577.4153);
   hmc__13->SetEntries(2462.59);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,-1,1);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(288.7076);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,3.647392);
   hbadmatch_stack_1->SetBinContent(2,1.545967);
   hbadmatch_stack_1->SetBinContent(3,1.950857);
   hbadmatch_stack_1->SetBinContent(4,1.803602);
   hbadmatch_stack_1->SetBinContent(5,1.857266);
   hbadmatch_stack_1->SetBinContent(6,2.535931);
   hbadmatch_stack_1->SetBinContent(7,1.779949);
   hbadmatch_stack_1->SetBinContent(8,3.160498);
   hbadmatch_stack_1->SetBinContent(9,2.984261);
   hbadmatch_stack_1->SetBinContent(10,2.568245);
   hbadmatch_stack_1->SetBinContent(11,2.894091);
   hbadmatch_stack_1->SetBinContent(12,4.236927);
   hbadmatch_stack_1->SetBinContent(13,3.632177);
   hbadmatch_stack_1->SetBinContent(14,2.836867);
   hbadmatch_stack_1->SetBinContent(15,2.456115);
   hbadmatch_stack_1->SetBinContent(16,2.984595);
   hbadmatch_stack_1->SetBinContent(17,3.353951);
   hbadmatch_stack_1->SetBinContent(18,4.315272);
   hbadmatch_stack_1->SetBinContent(19,3.022084);
   hbadmatch_stack_1->SetBinContent(20,4.545473);
   hbadmatch_stack_1->SetBinError(1,0.9709558);
   hbadmatch_stack_1->SetBinError(2,0.5988954);
   hbadmatch_stack_1->SetBinError(3,0.7609034);
   hbadmatch_stack_1->SetBinError(4,0.6023208);
   hbadmatch_stack_1->SetBinError(5,0.6799255);
   hbadmatch_stack_1->SetBinError(6,0.8325131);
   hbadmatch_stack_1->SetBinError(7,0.6359281);
   hbadmatch_stack_1->SetBinError(8,0.9956837);
   hbadmatch_stack_1->SetBinError(9,0.9565046);
   hbadmatch_stack_1->SetBinError(10,0.7680455);
   hbadmatch_stack_1->SetBinError(11,0.9076852);
   hbadmatch_stack_1->SetBinError(12,1.06806);
   hbadmatch_stack_1->SetBinError(13,1.380385);
   hbadmatch_stack_1->SetBinError(14,0.8432763);
   hbadmatch_stack_1->SetBinError(15,0.8599144);
   hbadmatch_stack_1->SetBinError(16,0.9401333);
   hbadmatch_stack_1->SetBinError(17,0.9877738);
   hbadmatch_stack_1->SetBinError(18,1.182152);
   hbadmatch_stack_1->SetBinError(19,0.8652712);
   hbadmatch_stack_1->SetBinError(20,1.082503);
   hbadmatch_stack_1->SetEntries(235);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,4.53161);
   hext_stack_2->SetBinContent(2,5.84797);
   hext_stack_2->SetBinContent(3,4.468179);
   hext_stack_2->SetBinContent(4,3.394015);
   hext_stack_2->SetBinContent(5,3.965017);
   hext_stack_2->SetBinContent(6,8.485039);
   hext_stack_2->SetBinContent(7,4.863188);
   hext_stack_2->SetBinContent(8,6.567377);
   hext_stack_2->SetBinContent(9,7.704972);
   hext_stack_2->SetBinContent(10,7.836244);
   hext_stack_2->SetBinContent(11,7.552158);
   hext_stack_2->SetBinContent(12,7.619999);
   hext_stack_2->SetBinContent(13,9.794217);
   hext_stack_2->SetBinContent(14,6.075805);
   hext_stack_2->SetBinContent(15,4.360027);
   hext_stack_2->SetBinContent(16,10.43583);
   hext_stack_2->SetBinContent(17,8.179411);
   hext_stack_2->SetBinContent(18,7.041816);
   hext_stack_2->SetBinContent(19,6.000783);
   hext_stack_2->SetBinContent(20,6.303639);
   hext_stack_2->SetBinError(1,1.418025);
   hext_stack_2->SetBinError(2,1.471207);
   hext_stack_2->SetBinError(3,1.297469);
   hext_stack_2->SetBinError(4,1.254957);
   hext_stack_2->SetBinError(5,1.363971);
   hext_stack_2->SetBinError(6,1.984261);
   hext_stack_2->SetBinError(7,1.383773);
   hext_stack_2->SetBinError(8,1.581482);
   hext_stack_2->SetBinError(9,1.713757);
   hext_stack_2->SetBinError(10,1.930499);
   hext_stack_2->SetBinError(11,1.658526);
   hext_stack_2->SetBinError(12,1.79254);
   hext_stack_2->SetBinError(13,2.07175);
   hext_stack_2->SetBinError(14,1.616168);
   hext_stack_2->SetBinError(15,1.446312);
   hext_stack_2->SetBinError(16,2.168829);
   hext_stack_2->SetBinError(17,1.888062);
   hext_stack_2->SetBinError(18,1.76887);
   hext_stack_2->SetBinError(19,1.533202);
   hext_stack_2->SetBinError(20,1.749156);
   hext_stack_2->SetEntries(327);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,0.7249213);
   hdirt_stack_3->SetBinContent(3,0.5429839);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.6143302);
   hdirt_stack_3->SetBinContent(6,0.8385887);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3569671);
   hdirt_stack_3->SetBinContent(12,1.333061);
   hdirt_stack_3->SetBinContent(13,0.1651799);
   hdirt_stack_3->SetBinContent(14,0.4247338);
   hdirt_stack_3->SetBinContent(15,0.529281);
   hdirt_stack_3->SetBinContent(16,0.4762587);
   hdirt_stack_3->SetBinContent(17,0.4794168);
   hdirt_stack_3->SetBinContent(18,0.8378969);
   hdirt_stack_3->SetBinContent(19,0.8527125);
   hdirt_stack_3->SetBinContent(20,0.6182608);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.4354434);
   hdirt_stack_3->SetBinError(3,0.4278058);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.39051);
   hdirt_stack_3->SetBinError(6,0.5064279);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(10,0.258803);
   hdirt_stack_3->SetBinError(12,0.6103171);
   hdirt_stack_3->SetBinError(13,0.1651799);
   hdirt_stack_3->SetBinError(14,0.4247338);
   hdirt_stack_3->SetBinError(15,0.3726062);
   hdirt_stack_3->SetBinError(16,0.3652866);
   hdirt_stack_3->SetBinError(17,0.3402743);
   hdirt_stack_3->SetBinError(18,0.4284346);
   hdirt_stack_3->SetBinError(19,0.5176777);
   hdirt_stack_3->SetBinError(20,0.3104735);
   hdirt_stack_3->SetEntries(44);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,12.46219);
   houtFV_stack_4->SetBinContent(2,6.555376);
   houtFV_stack_4->SetBinContent(3,5.480567);
   houtFV_stack_4->SetBinContent(4,5.519195);
   houtFV_stack_4->SetBinContent(5,4.339834);
   houtFV_stack_4->SetBinContent(6,5.098988);
   houtFV_stack_4->SetBinContent(7,3.556826);
   houtFV_stack_4->SetBinContent(8,5.079695);
   houtFV_stack_4->SetBinContent(9,5.297836);
   houtFV_stack_4->SetBinContent(10,4.064089);
   houtFV_stack_4->SetBinContent(11,5.118903);
   houtFV_stack_4->SetBinContent(12,4.464054);
   houtFV_stack_4->SetBinContent(13,4.299607);
   houtFV_stack_4->SetBinContent(14,7.132029);
   houtFV_stack_4->SetBinContent(15,6.2832);
   houtFV_stack_4->SetBinContent(16,5.660318);
   houtFV_stack_4->SetBinContent(17,8.447002);
   houtFV_stack_4->SetBinContent(18,11.16081);
   houtFV_stack_4->SetBinContent(19,9.134045);
   houtFV_stack_4->SetBinContent(20,15.82559);
   houtFV_stack_4->SetBinError(1,1.829258);
   houtFV_stack_4->SetBinError(2,1.257132);
   houtFV_stack_4->SetBinError(3,1.148045);
   houtFV_stack_4->SetBinError(4,1.21955);
   houtFV_stack_4->SetBinError(5,1.02769);
   houtFV_stack_4->SetBinError(6,1.122434);
   houtFV_stack_4->SetBinError(7,0.9502142);
   houtFV_stack_4->SetBinError(8,1.159607);
   houtFV_stack_4->SetBinError(9,1.113289);
   houtFV_stack_4->SetBinError(10,0.9523257);
   houtFV_stack_4->SetBinError(11,1.167705);
   houtFV_stack_4->SetBinError(12,0.9876796);
   houtFV_stack_4->SetBinError(13,1.019167);
   houtFV_stack_4->SetBinError(14,1.376137);
   houtFV_stack_4->SetBinError(15,1.222112);
   houtFV_stack_4->SetBinError(16,1.225392);
   houtFV_stack_4->SetBinError(17,1.434443);
   houtFV_stack_4->SetBinError(18,1.632402);
   houtFV_stack_4->SetBinError(19,1.478174);
   houtFV_stack_4->SetBinError(20,2.087434);
   houtFV_stack_4->SetEntries(584);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8358399);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2882649);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.087276);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5294358);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.199372);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.658894);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.492822);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.64594);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3944872);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.168174);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3353836);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4222841);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3829726);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3971091);
   hNCpi0inFVqe_stack_6->SetEntries(268);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.23494);
   hNCpi0inFVres_stack_7->SetBinContent(2,37.58908);
   hNCpi0inFVres_stack_7->SetBinContent(3,32.96865);
   hNCpi0inFVres_stack_7->SetBinContent(4,34.63766);
   hNCpi0inFVres_stack_7->SetBinContent(5,32.89156);
   hNCpi0inFVres_stack_7->SetBinContent(6,36.04095);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.94233);
   hNCpi0inFVres_stack_7->SetBinContent(8,35.9086);
   hNCpi0inFVres_stack_7->SetBinContent(9,39.07394);
   hNCpi0inFVres_stack_7->SetBinContent(10,46.67774);
   hNCpi0inFVres_stack_7->SetBinContent(11,49.86116);
   hNCpi0inFVres_stack_7->SetBinContent(12,54.88852);
   hNCpi0inFVres_stack_7->SetBinContent(13,53.17811);
   hNCpi0inFVres_stack_7->SetBinContent(14,61.42661);
   hNCpi0inFVres_stack_7->SetBinContent(15,61.56871);
   hNCpi0inFVres_stack_7->SetBinContent(16,70.84947);
   hNCpi0inFVres_stack_7->SetBinContent(17,75.12722);
   hNCpi0inFVres_stack_7->SetBinContent(18,84.18892);
   hNCpi0inFVres_stack_7->SetBinContent(19,87.984);
   hNCpi0inFVres_stack_7->SetBinContent(20,92.3811);
   hNCpi0inFVres_stack_7->SetBinError(1,1.989919);
   hNCpi0inFVres_stack_7->SetBinError(2,1.997516);
   hNCpi0inFVres_stack_7->SetBinError(3,1.926263);
   hNCpi0inFVres_stack_7->SetBinError(4,1.945797);
   hNCpi0inFVres_stack_7->SetBinError(5,1.830605);
   hNCpi0inFVres_stack_7->SetBinError(6,1.910776);
   hNCpi0inFVres_stack_7->SetBinError(7,1.886246);
   hNCpi0inFVres_stack_7->SetBinError(8,1.900138);
   hNCpi0inFVres_stack_7->SetBinError(9,2.021677);
   hNCpi0inFVres_stack_7->SetBinError(10,2.300164);
   hNCpi0inFVres_stack_7->SetBinError(11,2.329211);
   hNCpi0inFVres_stack_7->SetBinError(12,2.514869);
   hNCpi0inFVres_stack_7->SetBinError(13,2.370249);
   hNCpi0inFVres_stack_7->SetBinError(14,2.617462);
   hNCpi0inFVres_stack_7->SetBinError(15,2.478977);
   hNCpi0inFVres_stack_7->SetBinError(16,2.783711);
   hNCpi0inFVres_stack_7->SetBinError(17,2.878113);
   hNCpi0inFVres_stack_7->SetBinError(18,3.007775);
   hNCpi0inFVres_stack_7->SetBinError(19,3.070528);
   hNCpi0inFVres_stack_7->SetBinError(20,3.167866);
   hNCpi0inFVres_stack_7->SetEntries(19586);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.089376);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.478377);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.525968);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.802808);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.963807);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.895558);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.155451);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.138112);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.038298);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.345286);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.923954);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.040706);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.631766);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.0218);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.92596);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.39255);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.67071);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.35337);
   hNCpi0inFVdis_stack_8->SetBinContent(19,19.88198);
   hNCpi0inFVdis_stack_8->SetBinContent(20,30.81817);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9538596);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6713466);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8183543);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8277724);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7468632);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.796176);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6053985);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8904071);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8517954);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8505384);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7670874);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8910984);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9791624);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.203086);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.011392);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.098788);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.093551);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.303622);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.427896);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.835542);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2368179);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1155977);
   hNCpi0inFVmec_stack_9->SetEntries(25);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,17.56988);
   hCCpi0inFV_stack_10->SetBinContent(2,15.96211);
   hCCpi0inFV_stack_10->SetBinContent(3,13.00279);
   hCCpi0inFV_stack_10->SetBinContent(4,9.77727);
   hCCpi0inFV_stack_10->SetBinContent(5,11.41921);
   hCCpi0inFV_stack_10->SetBinContent(6,13.01214);
   hCCpi0inFV_stack_10->SetBinContent(7,12.21454);
   hCCpi0inFV_stack_10->SetBinContent(8,12.27066);
   hCCpi0inFV_stack_10->SetBinContent(9,9.324974);
   hCCpi0inFV_stack_10->SetBinContent(10,12.61237);
   hCCpi0inFV_stack_10->SetBinContent(11,16.05282);
   hCCpi0inFV_stack_10->SetBinContent(12,14.67367);
   hCCpi0inFV_stack_10->SetBinContent(13,15.04733);
   hCCpi0inFV_stack_10->SetBinContent(14,18.84498);
   hCCpi0inFV_stack_10->SetBinContent(15,17.73223);
   hCCpi0inFV_stack_10->SetBinContent(16,17.31471);
   hCCpi0inFV_stack_10->SetBinContent(17,28.13224);
   hCCpi0inFV_stack_10->SetBinContent(18,29.14994);
   hCCpi0inFV_stack_10->SetBinContent(19,31.62054);
   hCCpi0inFV_stack_10->SetBinContent(20,51.31964);
   hCCpi0inFV_stack_10->SetBinError(1,2.073869);
   hCCpi0inFV_stack_10->SetBinError(2,2.03918);
   hCCpi0inFV_stack_10->SetBinError(3,1.84321);
   hCCpi0inFV_stack_10->SetBinError(4,1.539561);
   hCCpi0inFV_stack_10->SetBinError(5,1.584334);
   hCCpi0inFV_stack_10->SetBinError(6,1.823556);
   hCCpi0inFV_stack_10->SetBinError(7,1.71605);
   hCCpi0inFV_stack_10->SetBinError(8,1.767412);
   hCCpi0inFV_stack_10->SetBinError(9,1.480065);
   hCCpi0inFV_stack_10->SetBinError(10,1.79508);
   hCCpi0inFV_stack_10->SetBinError(11,1.984197);
   hCCpi0inFV_stack_10->SetBinError(12,1.935322);
   hCCpi0inFV_stack_10->SetBinError(13,1.948055);
   hCCpi0inFV_stack_10->SetBinError(14,2.229283);
   hCCpi0inFV_stack_10->SetBinError(15,2.119267);
   hCCpi0inFV_stack_10->SetBinError(16,2.103942);
   hCCpi0inFV_stack_10->SetBinError(17,2.699239);
   hCCpi0inFV_stack_10->SetBinError(18,2.701996);
   hCCpi0inFV_stack_10->SetBinError(19,2.815217);
   hCCpi0inFV_stack_10->SetBinError(20,3.691063);
   hCCpi0inFV_stack_10->SetEntries(1562);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,12.35578);
   hNCinFV_stack_11->SetBinContent(2,7.480628);
   hNCinFV_stack_11->SetBinContent(3,7.677343);
   hNCinFV_stack_11->SetBinContent(4,5.375084);
   hNCinFV_stack_11->SetBinContent(5,7.862833);
   hNCinFV_stack_11->SetBinContent(6,5.233312);
   hNCinFV_stack_11->SetBinContent(7,6.351899);
   hNCinFV_stack_11->SetBinContent(8,2.642437);
   hNCinFV_stack_11->SetBinContent(9,6.379319);
   hNCinFV_stack_11->SetBinContent(10,6.445489);
   hNCinFV_stack_11->SetBinContent(11,5.125115);
   hNCinFV_stack_11->SetBinContent(12,5.915358);
   hNCinFV_stack_11->SetBinContent(13,6.508885);
   hNCinFV_stack_11->SetBinContent(14,5.178369);
   hNCinFV_stack_11->SetBinContent(15,9.611903);
   hNCinFV_stack_11->SetBinContent(16,11.24334);
   hNCinFV_stack_11->SetBinContent(17,13.27934);
   hNCinFV_stack_11->SetBinContent(18,15.88651);
   hNCinFV_stack_11->SetBinContent(19,25.15316);
   hNCinFV_stack_11->SetBinContent(20,33.65155);
   hNCinFV_stack_11->SetBinError(1,1.776982);
   hNCinFV_stack_11->SetBinError(2,1.345439);
   hNCinFV_stack_11->SetBinError(3,1.359744);
   hNCinFV_stack_11->SetBinError(4,1.16112);
   hNCinFV_stack_11->SetBinError(5,1.442772);
   hNCinFV_stack_11->SetBinError(6,1.127758);
   hNCinFV_stack_11->SetBinError(7,1.240579);
   hNCinFV_stack_11->SetBinError(8,0.7851269);
   hNCinFV_stack_11->SetBinError(9,1.373815);
   hNCinFV_stack_11->SetBinError(10,1.286744);
   hNCinFV_stack_11->SetBinError(11,1.160961);
   hNCinFV_stack_11->SetBinError(12,1.226353);
   hNCinFV_stack_11->SetBinError(13,1.273325);
   hNCinFV_stack_11->SetBinError(14,1.144335);
   hNCinFV_stack_11->SetBinError(15,1.618605);
   hNCinFV_stack_11->SetBinError(16,1.64149);
   hNCinFV_stack_11->SetBinError(17,1.840334);
   hNCinFV_stack_11->SetBinError(18,1.962202);
   hNCinFV_stack_11->SetBinError(19,2.520399);
   hNCinFV_stack_11->SetBinError(20,2.950776);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,13.37129);
   hnumuCCinFV_stack_12->SetBinContent(2,10.17432);
   hnumuCCinFV_stack_12->SetBinContent(3,8.720502);
   hnumuCCinFV_stack_12->SetBinContent(4,8.737566);
   hnumuCCinFV_stack_12->SetBinContent(5,9.236551);
   hnumuCCinFV_stack_12->SetBinContent(6,8.442308);
   hnumuCCinFV_stack_12->SetBinContent(7,8.627084);
   hnumuCCinFV_stack_12->SetBinContent(8,13.29985);
   hnumuCCinFV_stack_12->SetBinContent(9,11.62277);
   hnumuCCinFV_stack_12->SetBinContent(10,15.48559);
   hnumuCCinFV_stack_12->SetBinContent(11,20.13534);
   hnumuCCinFV_stack_12->SetBinContent(12,18.34346);
   hnumuCCinFV_stack_12->SetBinContent(13,20.48466);
   hnumuCCinFV_stack_12->SetBinContent(14,15.80431);
   hnumuCCinFV_stack_12->SetBinContent(15,19.51063);
   hnumuCCinFV_stack_12->SetBinContent(16,19.51711);
   hnumuCCinFV_stack_12->SetBinContent(17,22.24238);
   hnumuCCinFV_stack_12->SetBinContent(18,17.57119);
   hnumuCCinFV_stack_12->SetBinContent(19,17.27607);
   hnumuCCinFV_stack_12->SetBinContent(20,29.40608);
   hnumuCCinFV_stack_12->SetBinError(1,1.895831);
   hnumuCCinFV_stack_12->SetBinError(2,1.685577);
   hnumuCCinFV_stack_12->SetBinError(3,1.882842);
   hnumuCCinFV_stack_12->SetBinError(4,1.543313);
   hnumuCCinFV_stack_12->SetBinError(5,1.939314);
   hnumuCCinFV_stack_12->SetBinError(6,1.500251);
   hnumuCCinFV_stack_12->SetBinError(7,1.561144);
   hnumuCCinFV_stack_12->SetBinError(8,2.086029);
   hnumuCCinFV_stack_12->SetBinError(9,1.952718);
   hnumuCCinFV_stack_12->SetBinError(10,2.378796);
   hnumuCCinFV_stack_12->SetBinError(11,2.648579);
   hnumuCCinFV_stack_12->SetBinError(12,2.6445);
   hnumuCCinFV_stack_12->SetBinError(13,2.774827);
   hnumuCCinFV_stack_12->SetBinError(14,2.157196);
   hnumuCCinFV_stack_12->SetBinError(15,2.705155);
   hnumuCCinFV_stack_12->SetBinError(16,3.366437);
   hnumuCCinFV_stack_12->SetBinError(17,2.625024);
   hnumuCCinFV_stack_12->SetBinError(18,2.440243);
   hnumuCCinFV_stack_12->SetBinError(19,2.076093);
   hnumuCCinFV_stack_12->SetBinError(20,3.246873);
   hnumuCCinFV_stack_12->SetEntries(1201);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(2,0.441907);
   hnueCCinFV_stack_13->SetBinContent(3,0.497884);
   hnueCCinFV_stack_13->SetBinContent(4,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(5,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(6,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(7,0.8503433);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(14,0.591342);
   hnueCCinFV_stack_13->SetBinContent(15,0.5572778);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.536893);
   hnueCCinFV_stack_13->SetBinContent(18,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(20,7.371563);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(2,0.3143499);
   hnueCCinFV_stack_13->SetBinError(3,0.3520617);
   hnueCCinFV_stack_13->SetBinError(4,0.3160204);
   hnueCCinFV_stack_13->SetBinError(5,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(6,0.4132436);
   hnueCCinFV_stack_13->SetBinError(7,0.6473186);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.3174228);
   hnueCCinFV_stack_13->SetBinError(14,0.4228527);
   hnueCCinFV_stack_13->SetBinError(15,0.4035509);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.438694);
   hnueCCinFV_stack_13->SetBinError(20,2.032383);
   hnueCCinFV_stack_13->SetEntries(52);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__14->SetBinContent(1,112.1886);
   hmcerror__14->SetBinContent(2,92.27431);
   hmcerror__14->SetBinContent(3,82.15626);
   hmcerror__14->SetBinContent(4,76.94661);
   hmcerror__14->SetBinContent(5,78.84779);
   hmcerror__14->SetBinContent(6,86.4926);
   hmcerror__14->SetBinContent(7,78.67497);
   hmcerror__14->SetBinContent(8,86.5417);
   hmcerror__14->SetBinContent(9,90.15083);
   hmcerror__14->SetBinContent(10,102.727);
   hmcerror__14->SetBinContent(11,112.8309);
   hmcerror__14->SetBinContent(12,120.4078);
   hmcerror__14->SetBinContent(13,122.2164);
   hmcerror__14->SetBinContent(14,130.7276);
   hmcerror__14->SetBinContent(15,133.4142);
   hmcerror__14->SetBinContent(16,151.2266);
   hmcerror__14->SetBinContent(17,172.7038);
   hmcerror__14->SetBinContent(18,188.0975);
   hmcerror__14->SetBinContent(19,203.4572);
   hmcerror__14->SetBinContent(20,274.9597);
   hmcerror__14->SetBinError(1,38.04601);
   hmcerror__14->SetBinError(2,37.4015);
   hmcerror__14->SetBinError(3,31.89874);
   hmcerror__14->SetBinError(4,30.54368);
   hmcerror__14->SetBinError(5,29.88502);
   hmcerror__14->SetBinError(6,30.99364);
   hmcerror__14->SetBinError(7,32.09529);
   hmcerror__14->SetBinError(8,32.51079);
   hmcerror__14->SetBinError(9,34.81966);
   hmcerror__14->SetBinError(10,41.09003);
   hmcerror__14->SetBinError(11,41.22169);
   hmcerror__14->SetBinError(12,49.06544);
   hmcerror__14->SetBinError(13,46.22988);
   hmcerror__14->SetBinError(14,58.04841);
   hmcerror__14->SetBinError(15,56.4235);
   hmcerror__14->SetBinError(16,70.6486);
   hmcerror__14->SetBinError(17,69.37128);
   hmcerror__14->SetBinError(18,74.6824);
   hmcerror__14->SetBinError(19,78.27663);
   hmcerror__14->SetBinError(20,88.75967);
   hmcerror__14->SetBinError(21,0.3895343);
   hmcerror__14->SetEntries(2462.59);

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
   
   Double_t _fx3017[20] = {
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
   Double_t _fy3017[20] = {
   87,
   57,
   70,
   59,
   77,
   63,
   60,
   78,
   63,
   71,
   81,
   94,
   81,
   101,
   83,
   110,
   119,
   149,
   157,
   189};
   Double_t _felx3017[20] = {
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
   Double_t _fely3017[20] = {
   9.4503,
   7.679,
   8.4925,
   7.8097,
   8.8995,
   8.0648,
   7.8743,
   8.9562,
   8.0648,
   8.5518,
   9.1239,
   9.8173,
   9.1239,
   10.04988,
   9.234,
   10.48809,
   10.90871,
   12.20656,
   12.52996,
   13.74773};
   Double_t _fehx3017[20] = {
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
   Double_t _fehy3017[20] = {
   9.2488,
   7.4757,
   8.2902,
   7.6066,
   8.6976,
   7.862,
   7.6713,
   8.7542,
   7.862,
   8.3496,
   8.9221,
   9.616,
   8.9221,
   10.04988,
   9.0323,
   10.48809,
   10.90871,
   12.20656,
   12.52996,
   13.74773};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(33.97833);
   Graph_Graph3017->SetMaximum(218.0904);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[20] = {
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
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
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
   Double_t _fely3018[20] = {
   0.3391253,
   0.4053295,
   0.3882691,
   0.3969464,
   0.3790216,
   0.3583386,
   0.4079479,
   0.3756662,
   0.3862378,
   0.3999925,
   0.3653403,
   0.4074939,
   0.3782625,
   0.444041,
   0.4229198,
   0.4671705,
   0.4016779,
   0.3970409,
   0.3847327,
   0.3228098};
   Double_t _fehx3018[20] = {
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
   Double_t _fehy3018[20] = {
   0.3391253,
   0.4053295,
   0.3882691,
   0.3969464,
   0.3790216,
   0.3583386,
   0.4079479,
   0.3756662,
   0.3862378,
   0.3999925,
   0.3653403,
   0.4074939,
   0.3782625,
   0.444041,
   0.4229198,
   0.4671705,
   0.4016779,
   0.3970409,
   0.3847327,
   0.3228098};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-1.2,1.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3019[20] = {
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
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
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
   Double_t _fely3019[20] = {
   0.283927,
   0.2989584,
   0.3168423,
   0.3423448,
   0.3379558,
   0.2991945,
   0.3240608,
   0.3212437,
   0.3317198,
   0.3385328,
   0.3266198,
   0.3559196,
   0.349308,
   0.3841419,
   0.3989728,
   0.4057176,
   0.3712451,
   0.3696708,
   0.3482753,
   0.2940335};
   Double_t _fehx3019[20] = {
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
   Double_t _fehy3019[20] = {
   0.283927,
   0.2989584,
   0.3168423,
   0.3423448,
   0.3379558,
   0.2991945,
   0.3240608,
   0.3212437,
   0.3317198,
   0.3385328,
   0.3266198,
   0.3559196,
   0.349308,
   0.3841419,
   0.3989728,
   0.4057176,
   0.3712451,
   0.3696708,
   0.3482753,
   0.2940335};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-1.2,1.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3020[20] = {
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
   Double_t _fy3020[20] = {
   0.7754796,
   0.6177234,
   0.8520349,
   0.7667654,
   0.9765652,
   0.728386,
   0.7626313,
   0.9012996,
   0.6988288,
   0.6911523,
   0.7178882,
   0.7806803,
   0.6627588,
   0.7725989,
   0.6221228,
   0.7273854,
   0.6890411,
   0.7921424,
   0.7716611,
   0.6873736};
   Double_t _felx3020[20] = {
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
   Double_t _fely3020[20] = {
   0.0842358,
   0.08321926,
   0.1033701,
   0.1014951,
   0.1128694,
   0.09324266,
   0.1000865,
   0.10349,
   0.08945896,
   0.08324784,
   0.08086346,
   0.08153376,
   0.07465364,
   0.07687646,
   0.06921303,
   0.06935348,
   0.0631643,
   0.06489484,
   0.06158526,
   0.04999907};
   Double_t _fehx3020[20] = {
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
   Double_t _fehy3020[20] = {
   0.08243972,
   0.08101605,
   0.1009077,
   0.09885556,
   0.1103087,
   0.09089795,
   0.09750623,
   0.1011559,
   0.0872094,
   0.08127952,
   0.07907494,
   0.07986194,
   0.07300247,
   0.07687646,
   0.0677012,
   0.06935348,
   0.0631643,
   0.06489484,
   0.06158526,
   0.04999907};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.4792672);
   Graph_Graph3020->SetMaximum(1.142111);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}

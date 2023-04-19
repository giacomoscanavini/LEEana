#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 12:26:08 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
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
   pad1->Range(-4.119231,-0.7966312,3.957692,88.09064);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__25->SetBinContent(1,37.61639);
   hmc__25->SetBinContent(2,31.22994);
   hmc__25->SetBinContent(3,26.26965);
   hmc__25->SetBinContent(4,30.28729);
   hmc__25->SetBinContent(5,21.71982);
   hmc__25->SetBinContent(6,34.87465);
   hmc__25->SetBinContent(7,27.01191);
   hmc__25->SetBinContent(8,26.1916);
   hmc__25->SetBinContent(9,26.62243);
   hmc__25->SetBinContent(10,27.80788);
   hmc__25->SetBinContent(11,31.76235);
   hmc__25->SetBinContent(12,31.6133);
   hmc__25->SetBinContent(13,35.37996);
   hmc__25->SetBinContent(14,39.83156);
   hmc__25->SetBinContent(15,30.32788);
   hmc__25->SetBinContent(16,25.67305);
   hmc__25->SetBinContent(17,32.12539);
   hmc__25->SetBinContent(18,31.43945);
   hmc__25->SetBinContent(19,30.86462);
   hmc__25->SetBinContent(20,24.54598);
   hmc__25->SetBinContent(21,31.82678);
   hmc__25->SetBinContent(22,21.96166);
   hmc__25->SetBinContent(23,30.59568);
   hmc__25->SetBinContent(24,33.47844);
   hmc__25->SetBinError(1,14.06905);
   hmc__25->SetBinError(2,13.76775);
   hmc__25->SetBinError(3,12.08885);
   hmc__25->SetBinError(4,18.77263);
   hmc__25->SetBinError(5,11.69288);
   hmc__25->SetBinError(6,16.40075);
   hmc__25->SetBinError(7,11.58469);
   hmc__25->SetBinError(8,11.40148);
   hmc__25->SetBinError(9,12.66777);
   hmc__25->SetBinError(10,15.28462);
   hmc__25->SetBinError(11,19.6188);
   hmc__25->SetBinError(12,17.03595);
   hmc__25->SetBinError(13,15.24301);
   hmc__25->SetBinError(14,28.66944);
   hmc__25->SetBinError(15,20.02188);
   hmc__25->SetBinError(16,11.31909);
   hmc__25->SetBinError(17,13.85718);
   hmc__25->SetBinError(18,19.04538);
   hmc__25->SetBinError(19,14.43105);
   hmc__25->SetBinError(20,13.75712);
   hmc__25->SetBinError(21,16.11146);
   hmc__25->SetBinError(22,10.38346);
   hmc__25->SetBinError(23,13.77505);
   hmc__25->SetBinError(24,15.39005);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.7966312);
   hmc__25->SetMaximum(83.64628);
   hmc__25->SetEntries(704.9513);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,-3.15,3.15);
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(41.82314);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.352678);
   hbadmatch_stack_1->SetBinContent(2,1.14803);
   hbadmatch_stack_1->SetBinContent(3,0.7336084);
   hbadmatch_stack_1->SetBinContent(4,1.774588);
   hbadmatch_stack_1->SetBinContent(5,0.7834804);
   hbadmatch_stack_1->SetBinContent(6,1.000995);
   hbadmatch_stack_1->SetBinContent(7,0.8682163);
   hbadmatch_stack_1->SetBinContent(8,0.8821194);
   hbadmatch_stack_1->SetBinContent(9,1.662242);
   hbadmatch_stack_1->SetBinContent(11,0.3917402);
   hbadmatch_stack_1->SetBinContent(12,0.9571198);
   hbadmatch_stack_1->SetBinContent(13,0.8495809);
   hbadmatch_stack_1->SetBinContent(14,0.5816216);
   hbadmatch_stack_1->SetBinContent(15,0.5901461);
   hbadmatch_stack_1->SetBinContent(16,1.538292);
   hbadmatch_stack_1->SetBinContent(17,1.545124);
   hbadmatch_stack_1->SetBinContent(18,0.7336084);
   hbadmatch_stack_1->SetBinContent(19,0.9681591);
   hbadmatch_stack_1->SetBinContent(20,2.070329);
   hbadmatch_stack_1->SetBinContent(21,1.121968);
   hbadmatch_stack_1->SetBinContent(22,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,0.7302274);
   hbadmatch_stack_1->SetBinContent(24,0.9909084);
   hbadmatch_stack_1->SetBinError(1,0.6404646);
   hbadmatch_stack_1->SetBinError(2,0.5284735);
   hbadmatch_stack_1->SetBinError(3,0.4394482);
   hbadmatch_stack_1->SetBinError(4,0.7408201);
   hbadmatch_stack_1->SetBinError(5,0.3917439);
   hbadmatch_stack_1->SetBinError(6,0.5220568);
   hbadmatch_stack_1->SetBinError(7,0.4404328);
   hbadmatch_stack_1->SetBinError(8,0.4437157);
   hbadmatch_stack_1->SetBinError(9,0.6513556);
   hbadmatch_stack_1->SetBinError(11,0.2770047);
   hbadmatch_stack_1->SetBinError(12,0.493121);
   hbadmatch_stack_1->SetBinError(13,0.6125459);
   hbadmatch_stack_1->SetBinError(14,0.4171523);
   hbadmatch_stack_1->SetBinError(15,0.340721);
   hbadmatch_stack_1->SetBinError(16,0.6458883);
   hbadmatch_stack_1->SetBinError(17,0.5986599);
   hbadmatch_stack_1->SetBinError(18,0.4394482);
   hbadmatch_stack_1->SetBinError(19,0.4981252);
   hbadmatch_stack_1->SetBinError(20,0.7773625);
   hbadmatch_stack_1->SetBinError(21,0.5181909);
   hbadmatch_stack_1->SetBinError(22,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.4379386);
   hbadmatch_stack_1->SetBinError(24,0.5834134);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.74772);
   hext_stack_2->SetBinContent(2,0.973192);
   hext_stack_2->SetBinContent(3,2.110787);
   hext_stack_2->SetBinContent(4,2.599588);
   hext_stack_2->SetBinContent(5,2.103607);
   hext_stack_2->SetBinContent(6,8.99696);
   hext_stack_2->SetBinContent(7,6.945253);
   hext_stack_2->SetBinContent(8,2.663019);
   hext_stack_2->SetBinContent(9,2.192989);
   hext_stack_2->SetBinContent(10,0.8131978);
   hext_stack_2->SetBinContent(11,2.510206);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,2.338622);
   hext_stack_2->SetBinContent(14,2.021405);
   hext_stack_2->SetBinContent(15,2.834603);
   hext_stack_2->SetBinContent(16,3.076798);
   hext_stack_2->SetBinContent(17,6.449273);
   hext_stack_2->SetBinContent(18,5.166044);
   hext_stack_2->SetBinContent(19,10.38116);
   hext_stack_2->SetBinContent(20,3.006186);
   hext_stack_2->SetBinContent(21,5.490441);
   hext_stack_2->SetBinContent(22,2.352983);
   hext_stack_2->SetBinContent(23,1.939204);
   hext_stack_2->SetBinContent(24,4.345666);
   hext_stack_2->SetBinError(1,2.005173);
   hext_stack_2->SetBinError(2,0.5618727);
   hext_stack_2->SetBinError(3,0.8669371);
   hext_stack_2->SetBinError(4,0.9884288);
   hext_stack_2->SetBinError(5,0.9761052);
   hext_stack_2->SetBinError(6,2.315375);
   hext_stack_2->SetBinError(7,1.863119);
   hext_stack_2->SetBinError(8,1.142086);
   hext_stack_2->SetBinError(9,0.9009267);
   hext_stack_2->SetBinError(10,0.5750177);
   hext_stack_2->SetBinError(11,1.057404);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,1.095047);
   hext_stack_2->SetBinError(14,0.9448239);
   hext_stack_2->SetBinError(15,1.106046);
   hext_stack_2->SetBinError(16,1.126269);
   hext_stack_2->SetBinError(17,1.856611);
   hext_stack_2->SetBinError(18,1.619774);
   hext_stack_2->SetBinError(19,2.444812);
   hext_stack_2->SetBinError(20,1.068791);
   hext_stack_2->SetBinError(21,1.651938);
   hext_stack_2->SetBinError(22,0.8925942);
   hext_stack_2->SetBinError(23,0.912471);
   hext_stack_2->SetBinError(24,1.579311);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(2,0.4026575);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.5251632);
   hdirt_stack_3->SetBinContent(7,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.4049124);
   hdirt_stack_3->SetBinContent(17,0.4289006);
   hdirt_stack_3->SetBinContent(18,0.3405387);
   hdirt_stack_3->SetBinContent(19,0.2761429);
   hdirt_stack_3->SetBinContent(23,0.6001908);
   hdirt_stack_3->SetBinContent(24,0.5713827);
   hdirt_stack_3->SetBinError(2,0.2984452);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(6,0.3713466);
   hdirt_stack_3->SetBinError(7,0.258803);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(15,0.4049124);
   hdirt_stack_3->SetBinError(17,0.4289006);
   hdirt_stack_3->SetBinError(18,0.3381954);
   hdirt_stack_3->SetBinError(19,0.1952625);
   hdirt_stack_3->SetBinError(23,0.4278042);
   hdirt_stack_3->SetBinError(24,0.4434409);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,5.174987);
   houtFV_stack_4->SetBinContent(2,4.694729);
   houtFV_stack_4->SetBinContent(3,5.515165);
   houtFV_stack_4->SetBinContent(4,6.082956);
   houtFV_stack_4->SetBinContent(5,3.424227);
   houtFV_stack_4->SetBinContent(6,6.613413);
   houtFV_stack_4->SetBinContent(7,3.57107);
   houtFV_stack_4->SetBinContent(8,4.104583);
   houtFV_stack_4->SetBinContent(9,5.024466);
   houtFV_stack_4->SetBinContent(10,4.481343);
   houtFV_stack_4->SetBinContent(11,4.181394);
   houtFV_stack_4->SetBinContent(12,6.978684);
   houtFV_stack_4->SetBinContent(13,4.746291);
   houtFV_stack_4->SetBinContent(14,6.722611);
   houtFV_stack_4->SetBinContent(15,7.060166);
   houtFV_stack_4->SetBinContent(16,3.609494);
   houtFV_stack_4->SetBinContent(17,4.931781);
   houtFV_stack_4->SetBinContent(18,6.393926);
   houtFV_stack_4->SetBinContent(19,3.766095);
   houtFV_stack_4->SetBinContent(20,3.898222);
   houtFV_stack_4->SetBinContent(21,6.419021);
   houtFV_stack_4->SetBinContent(22,2.963649);
   houtFV_stack_4->SetBinContent(23,4.977118);
   houtFV_stack_4->SetBinContent(24,5.960864);
   houtFV_stack_4->SetBinError(1,1.143756);
   houtFV_stack_4->SetBinError(2,1.056768);
   houtFV_stack_4->SetBinError(3,1.193272);
   houtFV_stack_4->SetBinError(4,1.215496);
   houtFV_stack_4->SetBinError(5,0.8770549);
   houtFV_stack_4->SetBinError(6,1.274062);
   houtFV_stack_4->SetBinError(7,0.9206376);
   houtFV_stack_4->SetBinError(8,1.000333);
   houtFV_stack_4->SetBinError(9,1.13537);
   houtFV_stack_4->SetBinError(10,1.106303);
   houtFV_stack_4->SetBinError(11,1.003278);
   houtFV_stack_4->SetBinError(12,1.316332);
   houtFV_stack_4->SetBinError(13,1.038156);
   houtFV_stack_4->SetBinError(14,1.327074);
   houtFV_stack_4->SetBinError(15,1.362084);
   houtFV_stack_4->SetBinError(16,0.929474);
   houtFV_stack_4->SetBinError(17,1.144752);
   houtFV_stack_4->SetBinError(18,1.301806);
   houtFV_stack_4->SetBinError(19,0.9410676);
   houtFV_stack_4->SetBinError(20,1.009488);
   houtFV_stack_4->SetBinError(21,1.394614);
   houtFV_stack_4->SetBinError(22,0.8860143);
   houtFV_stack_4->SetBinError(23,1.132617);
   houtFV_stack_4->SetBinError(24,1.242611);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06238626);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.594474);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.97204);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.497235);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.337573);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.328507);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.909672);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.770172);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.493331);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.815346);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.554204);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.331668);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.903286);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.874058);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.434059);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.829796);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.832372);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.498572);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.15065);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.105228);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.076655);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.006485);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.688632);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.610499);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.697608);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7846456);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8724499);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8060144);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9458354);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8197403);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7712199);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7686925);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7585412);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7725648);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8579044);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8463333);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8596416);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8747518);
   hNCpi0inFVres_stack_7->SetBinError(14,0.940643);
   hNCpi0inFVres_stack_7->SetBinError(15,0.789467);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8511862);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8759007);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8393295);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7888508);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7003368);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7113187);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7621244);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8314476);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9023117);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.645444);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.897376);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.255172);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.24089);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.022099);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8373359);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.130122);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.33904);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.49299);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.993862);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.45488);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.631826);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.08694);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.757044);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.422076);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.408458);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.57353);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9889579);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.24089);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.645276);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.079394);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.50744);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.50644);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.784944);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4516052);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4798115);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3376966);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3469814);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5354624);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2981109);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3695249);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3861776);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4235881);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.469493);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5404063);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4436346);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3001705);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4550394);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.406154);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3972726);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.370751);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3067967);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3469814);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4137491);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.542264);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4536834);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.392178);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4558939);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,10.28327);
   hCCpi0inFV_stack_10->SetBinContent(2,6.002925);
   hCCpi0inFV_stack_10->SetBinContent(3,3.496083);
   hCCpi0inFV_stack_10->SetBinContent(4,6.817006);
   hCCpi0inFV_stack_10->SetBinContent(5,4.282723);
   hCCpi0inFV_stack_10->SetBinContent(6,3.66128);
   hCCpi0inFV_stack_10->SetBinContent(7,4.279513);
   hCCpi0inFV_stack_10->SetBinContent(8,5.753422);
   hCCpi0inFV_stack_10->SetBinContent(9,4.208063);
   hCCpi0inFV_stack_10->SetBinContent(10,5.240659);
   hCCpi0inFV_stack_10->SetBinContent(11,4.499704);
   hCCpi0inFV_stack_10->SetBinContent(12,5.923203);
   hCCpi0inFV_stack_10->SetBinContent(13,10.67283);
   hCCpi0inFV_stack_10->SetBinContent(14,6.752745);
   hCCpi0inFV_stack_10->SetBinContent(15,5.328593);
   hCCpi0inFV_stack_10->SetBinContent(16,3.893937);
   hCCpi0inFV_stack_10->SetBinContent(17,5.632441);
   hCCpi0inFV_stack_10->SetBinContent(18,4.78894);
   hCCpi0inFV_stack_10->SetBinContent(19,4.685557);
   hCCpi0inFV_stack_10->SetBinContent(20,4.696419);
   hCCpi0inFV_stack_10->SetBinContent(21,5.239409);
   hCCpi0inFV_stack_10->SetBinContent(22,4.132729);
   hCCpi0inFV_stack_10->SetBinContent(23,5.687366);
   hCCpi0inFV_stack_10->SetBinContent(24,6.149029);
   hCCpi0inFV_stack_10->SetBinError(1,1.643739);
   hCCpi0inFV_stack_10->SetBinError(2,1.242123);
   hCCpi0inFV_stack_10->SetBinError(3,0.9061508);
   hCCpi0inFV_stack_10->SetBinError(4,1.283396);
   hCCpi0inFV_stack_10->SetBinError(5,1.045085);
   hCCpi0inFV_stack_10->SetBinError(6,0.9812871);
   hCCpi0inFV_stack_10->SetBinError(7,1.073717);
   hCCpi0inFV_stack_10->SetBinError(8,1.216826);
   hCCpi0inFV_stack_10->SetBinError(9,0.9922821);
   hCCpi0inFV_stack_10->SetBinError(10,1.130883);
   hCCpi0inFV_stack_10->SetBinError(11,1.038616);
   hCCpi0inFV_stack_10->SetBinError(12,1.143952);
   hCCpi0inFV_stack_10->SetBinError(13,1.611829);
   hCCpi0inFV_stack_10->SetBinError(14,1.327005);
   hCCpi0inFV_stack_10->SetBinError(15,1.178633);
   hCCpi0inFV_stack_10->SetBinError(16,1.008491);
   hCCpi0inFV_stack_10->SetBinError(17,1.278651);
   hCCpi0inFV_stack_10->SetBinError(18,1.109146);
   hCCpi0inFV_stack_10->SetBinError(19,1.082699);
   hCCpi0inFV_stack_10->SetBinError(20,1.057081);
   hCCpi0inFV_stack_10->SetBinError(21,1.163643);
   hCCpi0inFV_stack_10->SetBinError(22,1.006297);
   hCCpi0inFV_stack_10->SetBinError(23,1.199453);
   hCCpi0inFV_stack_10->SetBinError(24,1.302427);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.9801958);
   hNCinFV_stack_11->SetBinContent(2,2.195754);
   hNCinFV_stack_11->SetBinContent(3,1.852655);
   hNCinFV_stack_11->SetBinContent(4,0.7319179);
   hNCinFV_stack_11->SetBinContent(5,1.123658);
   hNCinFV_stack_11->SetBinContent(6,2.390778);
   hNCinFV_stack_11->SetBinContent(7,0.9835768);
   hNCinFV_stack_11->SetBinContent(8,1.377008);
   hNCinFV_stack_11->SetBinContent(9,1.125349);
   hNCinFV_stack_11->SetBinContent(10,1.756914);
   hNCinFV_stack_11->SetBinContent(11,2.537621);
   hNCinFV_stack_11->SetBinContent(12,1.320373);
   hNCinFV_stack_11->SetBinContent(13,1.807394);
   hNCinFV_stack_11->SetBinContent(14,2.249007);
   hNCinFV_stack_11->SetBinContent(15,2.197444);
   hNCinFV_stack_11->SetBinContent(16,0.7336084);
   hNCinFV_stack_11->SetBinContent(17,0.9835768);
   hNCinFV_stack_11->SetBinContent(18,1.26712);
   hNCinFV_stack_11->SetBinContent(19,1.073786);
   hNCinFV_stack_11->SetBinContent(20,1.072095);
   hNCinFV_stack_11->SetBinContent(21,2.144191);
   hNCinFV_stack_11->SetBinContent(22,2.145881);
   hNCinFV_stack_11->SetBinContent(23,2.39585);
   hNCinFV_stack_11->SetBinContent(24,0.7319179);
   hNCinFV_stack_11->SetBinError(1,0.4383608);
   hNCinFV_stack_11->SetBinError(2,0.7598403);
   hNCinFV_stack_11->SetBinError(3,0.7095719);
   hNCinFV_stack_11->SetBinError(4,0.438694);
   hNCinFV_stack_11->SetBinError(5,0.5188295);
   hNCinFV_stack_11->SetBinError(6,0.7844693);
   hNCinFV_stack_11->SetBinError(7,0.4398689);
   hNCinFV_stack_11->SetBinError(8,0.5204599);
   hNCinFV_stack_11->SetBinError(9,0.5194673);
   hNCinFV_stack_11->SetBinError(10,0.5856402);
   hNCinFV_stack_11->SetBinError(11,0.8329108);
   hNCinFV_stack_11->SetBinError(12,0.5548703);
   hNCinFV_stack_11->SetBinError(13,0.7084844);
   hNCinFV_stack_11->SetBinError(14,0.7341869);
   hNCinFV_stack_11->SetBinError(15,0.760276);
   hNCinFV_stack_11->SetBinError(16,0.4394482);
   hNCinFV_stack_11->SetBinError(17,0.4398689);
   hNCinFV_stack_11->SetBinError(18,0.5883944);
   hNCinFV_stack_11->SetBinError(19,0.5557297);
   hNCinFV_stack_11->SetBinError(20,0.5551335);
   hNCinFV_stack_11->SetBinError(21,0.7850774);
   hNCinFV_stack_11->SetBinError(22,0.785499);
   hNCinFV_stack_11->SetBinError(23,0.7857345);
   hNCinFV_stack_11->SetBinError(24,0.438694);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,5.753924);
   hnumuCCinFV_stack_12->SetBinContent(2,6.52203);
   hnumuCCinFV_stack_12->SetBinContent(3,4.489854);
   hnumuCCinFV_stack_12->SetBinContent(4,3.424043);
   hnumuCCinFV_stack_12->SetBinContent(5,1.651515);
   hnumuCCinFV_stack_12->SetBinContent(6,2.757703);
   hnumuCCinFV_stack_12->SetBinContent(7,3.051216);
   hnumuCCinFV_stack_12->SetBinContent(8,4.090821);
   hnumuCCinFV_stack_12->SetBinContent(9,3.978039);
   hnumuCCinFV_stack_12->SetBinContent(10,6.233539);
   hnumuCCinFV_stack_12->SetBinContent(11,8.771435);
   hnumuCCinFV_stack_12->SetBinContent(12,7.060207);
   hnumuCCinFV_stack_12->SetBinContent(13,6.767617);
   hnumuCCinFV_stack_12->SetBinContent(14,12.00706);
   hnumuCCinFV_stack_12->SetBinContent(15,4.57644);
   hnumuCCinFV_stack_12->SetBinContent(16,4.300927);
   hnumuCCinFV_stack_12->SetBinContent(17,3.789844);
   hnumuCCinFV_stack_12->SetBinContent(18,5.58176);
   hnumuCCinFV_stack_12->SetBinContent(19,3.367605);
   hnumuCCinFV_stack_12->SetBinContent(20,2.581167);
   hnumuCCinFV_stack_12->SetBinContent(21,3.297972);
   hnumuCCinFV_stack_12->SetBinContent(22,2.515829);
   hnumuCCinFV_stack_12->SetBinContent(23,4.669422);
   hnumuCCinFV_stack_12->SetBinContent(24,5.078713);
   hnumuCCinFV_stack_12->SetBinError(1,1.234436);
   hnumuCCinFV_stack_12->SetBinError(2,1.401058);
   hnumuCCinFV_stack_12->SetBinError(3,1.098162);
   hnumuCCinFV_stack_12->SetBinError(4,1.121176);
   hnumuCCinFV_stack_12->SetBinError(5,0.6933237);
   hnumuCCinFV_stack_12->SetBinError(6,0.8402434);
   hnumuCCinFV_stack_12->SetBinError(7,0.9155407);
   hnumuCCinFV_stack_12->SetBinError(8,1.026306);
   hnumuCCinFV_stack_12->SetBinError(9,1.284404);
   hnumuCCinFV_stack_12->SetBinError(10,1.713504);
   hnumuCCinFV_stack_12->SetBinError(11,2.001341);
   hnumuCCinFV_stack_12->SetBinError(12,1.434152);
   hnumuCCinFV_stack_12->SetBinError(13,1.342984);
   hnumuCCinFV_stack_12->SetBinError(14,2.233059);
   hnumuCCinFV_stack_12->SetBinError(15,1.118054);
   hnumuCCinFV_stack_12->SetBinError(16,1.054878);
   hnumuCCinFV_stack_12->SetBinError(17,1.009783);
   hnumuCCinFV_stack_12->SetBinError(18,1.55974);
   hnumuCCinFV_stack_12->SetBinError(19,0.8540848);
   hnumuCCinFV_stack_12->SetBinError(20,0.8827521);
   hnumuCCinFV_stack_12->SetBinError(21,1.127484);
   hnumuCCinFV_stack_12->SetBinError(22,0.8176044);
   hnumuCCinFV_stack_12->SetBinError(23,1.145806);
   hnumuCCinFV_stack_12->SetBinError(24,1.28554);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,1.957977);
   hnueCCinFV_stack_13->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(13,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(14,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(22,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(23,1.354146);
   hnueCCinFV_stack_13->SetBinError(2,0.3654046);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,1.593848);
   hnueCCinFV_stack_13->SetBinError(9,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4041031);
   hnueCCinFV_stack_13->SetBinError(13,0.1529246);
   hnueCCinFV_stack_13->SetBinError(14,0.2502081);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.2945335);
   hnueCCinFV_stack_13->SetBinError(22,0.2331833);
   hnueCCinFV_stack_13->SetBinError(23,1.174028);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__26->SetBinContent(1,37.61639);
   hmcerror__26->SetBinContent(2,31.22994);
   hmcerror__26->SetBinContent(3,26.26965);
   hmcerror__26->SetBinContent(4,30.28729);
   hmcerror__26->SetBinContent(5,21.71982);
   hmcerror__26->SetBinContent(6,34.87465);
   hmcerror__26->SetBinContent(7,27.01191);
   hmcerror__26->SetBinContent(8,26.1916);
   hmcerror__26->SetBinContent(9,26.62243);
   hmcerror__26->SetBinContent(10,27.80788);
   hmcerror__26->SetBinContent(11,31.76235);
   hmcerror__26->SetBinContent(12,31.6133);
   hmcerror__26->SetBinContent(13,35.37996);
   hmcerror__26->SetBinContent(14,39.83156);
   hmcerror__26->SetBinContent(15,30.32788);
   hmcerror__26->SetBinContent(16,25.67305);
   hmcerror__26->SetBinContent(17,32.12539);
   hmcerror__26->SetBinContent(18,31.43945);
   hmcerror__26->SetBinContent(19,30.86462);
   hmcerror__26->SetBinContent(20,24.54598);
   hmcerror__26->SetBinContent(21,31.82678);
   hmcerror__26->SetBinContent(22,21.96166);
   hmcerror__26->SetBinContent(23,30.59568);
   hmcerror__26->SetBinContent(24,33.47844);
   hmcerror__26->SetBinError(1,14.06905);
   hmcerror__26->SetBinError(2,13.76775);
   hmcerror__26->SetBinError(3,12.08885);
   hmcerror__26->SetBinError(4,18.77263);
   hmcerror__26->SetBinError(5,11.69288);
   hmcerror__26->SetBinError(6,16.40075);
   hmcerror__26->SetBinError(7,11.58469);
   hmcerror__26->SetBinError(8,11.40148);
   hmcerror__26->SetBinError(9,12.66777);
   hmcerror__26->SetBinError(10,15.28462);
   hmcerror__26->SetBinError(11,19.6188);
   hmcerror__26->SetBinError(12,17.03595);
   hmcerror__26->SetBinError(13,15.24301);
   hmcerror__26->SetBinError(14,28.66944);
   hmcerror__26->SetBinError(15,20.02188);
   hmcerror__26->SetBinError(16,11.31909);
   hmcerror__26->SetBinError(17,13.85718);
   hmcerror__26->SetBinError(18,19.04538);
   hmcerror__26->SetBinError(19,14.43105);
   hmcerror__26->SetBinError(20,13.75712);
   hmcerror__26->SetBinError(21,16.11146);
   hmcerror__26->SetBinError(22,10.38346);
   hmcerror__26->SetBinError(23,13.77505);
   hmcerror__26->SetBinError(24,15.39005);
   hmcerror__26->SetBinError(25,0.3895343);
   hmcerror__26->SetEntries(704.9513);

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
   
   Double_t _fx3033[24] = {
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
   Double_t _fy3033[24] = {
   35,
   30,
   19,
   14,
   25,
   23,
   30,
   22,
   26,
   29,
   26,
   28,
   39,
   18,
   30,
   20,
   23,
   25,
   20,
   20,
   20,
   10,
   29,
   24};
   Double_t _felx3033[24] = {
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
   Double_t _fely3033[24] = {
   6.0548,
   5.6197,
   4.5151,
   3.9102,
   5.1474,
   4.9457,
   5.6197,
   4.8417,
   5.2453,
   5.5285,
   5.2453,
   5.4358,
   6.3813,
   4.4008,
   5.6197,
   4.6266,
   4.9457,
   5.1474,
   4.6266,
   4.6266,
   4.6266,
   3.34883,
   5.5285,
   5.0476};
   Double_t _fehx3033[24] = {
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
   Double_t _fehy3033[24] = {
   5.8483,
   5.4117,
   4.3011,
   3.6898,
   4.9374,
   4.7346,
   5.4117,
   4.6299,
   5.0358,
   5.3201,
   5.0358,
   5.2271,
   6.1757,
   4.1858,
   5.4117,
   4.4133,
   4.7346,
   4.9374,
   4.4133,
   4.4133,
   4.4133,
   3.1179,
   5.3201,
   4.837};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(2.798717);
   Graph_Graph3033->SetMaximum(49.02815);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[24] = {
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
   Double_t _fy3034[24] = {
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
   Double_t _felx3034[24] = {
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
   Double_t _fely3034[24] = {
   0.3740138,
   0.4408509,
   0.4601832,
   0.6198187,
   0.5383506,
   0.4702771,
   0.4288737,
   0.4353107,
   0.4758308,
   0.5496506,
   0.6176746,
   0.5388854,
   0.4308374,
   0.7197668,
   0.6601806,
   0.440894,
   0.4313466,
   0.6057799,
   0.4675596,
   0.5604634,
   0.5062232,
   0.4727996,
   0.4502286,
   0.4597004};
   Double_t _fehx3034[24] = {
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
   Double_t _fehy3034[24] = {
   0.3740138,
   0.4408509,
   0.4601832,
   0.6198187,
   0.5383506,
   0.4702771,
   0.4288737,
   0.4353107,
   0.4758308,
   0.5496506,
   0.6176746,
   0.5388854,
   0.4308374,
   0.7197668,
   0.6601806,
   0.440894,
   0.4313466,
   0.6057799,
   0.4675596,
   0.5604634,
   0.5062232,
   0.4727996,
   0.4502286,
   0.4597004};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-3.78,3.78);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3035[24] = {
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
   Double_t _fy3035[24] = {
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
   Double_t _felx3035[24] = {
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
   Double_t _fely3035[24] = {
   0.2248728,
   0.2545473,
   0.3022855,
   0.2579722,
   0.3127089,
   0.2051886,
   0.2203304,
   0.2704534,
   0.2637913,
   0.2655405,
   0.2493903,
   0.2695601,
   0.2542639,
   0.2350133,
   0.2536447,
   0.2609304,
   0.247563,
   0.2577861,
   0.208582,
   0.2466773,
   0.2429428,
   0.2848826,
   0.2724923,
   0.2403445};
   Double_t _fehx3035[24] = {
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
   Double_t _fehy3035[24] = {
   0.2248728,
   0.2545473,
   0.3022855,
   0.2579722,
   0.3127089,
   0.2051886,
   0.2203304,
   0.2704534,
   0.2637913,
   0.2655405,
   0.2493903,
   0.2695601,
   0.2542639,
   0.2350133,
   0.2536447,
   0.2609304,
   0.247563,
   0.2577861,
   0.208582,
   0.2466773,
   0.2429428,
   0.2848826,
   0.2724923,
   0.2403445};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-3.78,3.78);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3036[24] = {
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
   Double_t _fy3036[24] = {
   0.9304454,
   0.9606167,
   0.7232682,
   0.4622402,
   1.151023,
   0.6595049,
   1.110621,
   0.8399639,
   0.9766201,
   1.04287,
   0.8185793,
   0.8857032,
   1.102319,
   0.4519029,
   0.9891889,
   0.7790269,
   0.7159447,
   0.7951794,
   0.6479911,
   0.8147975,
   0.6284015,
   0.455339,
   0.9478462,
   0.7168794};
   Double_t _felx3036[24] = {
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
   Double_t _fely3036[24] = {
   0.1609617,
   0.1799459,
   0.1718752,
   0.1291037,
   0.236991,
   0.1418136,
   0.2080453,
   0.184857,
   0.1970256,
   0.1988105,
   0.1651421,
   0.1719466,
   0.1803648,
   0.1104852,
   0.1852982,
   0.1802123,
   0.1539499,
   0.1637243,
   0.1498998,
   0.1884871,
   0.1453681,
   0.1524853,
   0.1806954,
   0.1507717};
   Double_t _fehx3036[24] = {
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
   Double_t _fehy3036[24] = {
   0.1554721,
   0.1732857,
   0.1637289,
   0.1218267,
   0.2273224,
   0.1357605,
   0.200345,
   0.1767704,
   0.1891563,
   0.1913162,
   0.1585462,
   0.165345,
   0.1745536,
   0.1050875,
   0.1784398,
   0.171904,
   0.1473788,
   0.1570447,
   0.142989,
   0.1797973,
   0.1386662,
   0.1419702,
   0.173884,
   0.1444811};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.1953046);
   Graph_Graph3036->SetMaximum(1.485894);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}

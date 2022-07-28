#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Jun  2 20:27:10 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-184.6154,-12.18594,1353.846,1347.508);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmc__4->SetBinContent(1,31.93503);
   hmc__4->SetBinContent(2,178.9702);
   hmc__4->SetBinContent(3,492.2597);
   hmc__4->SetBinContent(4,609.2969);
   hmc__4->SetBinContent(5,451.2874);
   hmc__4->SetBinContent(6,293.294);
   hmc__4->SetBinContent(7,224.2168);
   hmc__4->SetBinContent(8,152.7385);
   hmc__4->SetBinContent(9,97.68664);
   hmc__4->SetBinContent(10,61.18669);
   hmc__4->SetBinContent(11,42.58339);
   hmc__4->SetBinContent(12,28.09302);
   hmc__4->SetBinContent(13,20.14871);
   hmc__4->SetBinContent(14,14.06456);
   hmc__4->SetBinContent(15,11.12385);
   hmc__4->SetBinContent(16,7.723914);
   hmc__4->SetBinContent(17,4.65522);
   hmc__4->SetBinContent(18,3.512641);
   hmc__4->SetBinContent(19,2.340221);
   hmc__4->SetBinContent(20,2.382684);
   hmc__4->SetBinContent(21,13.61112);
   hmc__4->SetBinError(1,7.979018);
   hmc__4->SetBinError(2,35.25274);
   hmc__4->SetBinError(3,101.1278);
   hmc__4->SetBinError(4,143.7967);
   hmc__4->SetBinError(5,119.5693);
   hmc__4->SetBinError(6,81.71468);
   hmc__4->SetBinError(7,61.08048);
   hmc__4->SetBinError(8,45.3042);
   hmc__4->SetBinError(9,29.05478);
   hmc__4->SetBinError(10,17.94637);
   hmc__4->SetBinError(11,14.52115);
   hmc__4->SetBinError(12,8.402405);
   hmc__4->SetBinError(13,8.180447);
   hmc__4->SetBinError(14,5.934546);
   hmc__4->SetBinError(15,4.912615);
   hmc__4->SetBinError(16,4.501414);
   hmc__4->SetBinError(17,2.897175);
   hmc__4->SetBinError(18,2.563628);
   hmc__4->SetBinError(19,1.988628);
   hmc__4->SetBinError(20,1.737408);
   hmc__4->SetBinError(21,10.20656);
   hmc__4->SetMinimum(-12.18594);
   hmc__4->SetMaximum(1279.523);
   hmc__4->SetEntries(2712.362);
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
   hs2_stack_2->SetMaximum(639.7617);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.556055);
   hbadmatch_stack_1->SetBinContent(2,6.427486);
   hbadmatch_stack_1->SetBinContent(3,14.58524);
   hbadmatch_stack_1->SetBinContent(4,9.840738);
   hbadmatch_stack_1->SetBinContent(5,11.60009);
   hbadmatch_stack_1->SetBinContent(6,4.534996);
   hbadmatch_stack_1->SetBinContent(7,2.950153);
   hbadmatch_stack_1->SetBinContent(8,1.555735);
   hbadmatch_stack_1->SetBinContent(9,1.072095);
   hbadmatch_stack_1->SetBinContent(10,0.9303237);
   hbadmatch_stack_1->SetBinContent(11,0.536893);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.8861438);
   hbadmatch_stack_1->SetBinError(2,1.440373);
   hbadmatch_stack_1->SetBinError(3,1.912748);
   hbadmatch_stack_1->SetBinError(4,1.943399);
   hbadmatch_stack_1->SetBinError(5,2.515394);
   hbadmatch_stack_1->SetBinError(6,1.109837);
   hbadmatch_stack_1->SetBinError(7,0.928692);
   hbadmatch_stack_1->SetBinError(8,0.7077556);
   hbadmatch_stack_1->SetBinError(9,0.5551335);
   hbadmatch_stack_1->SetBinError(10,0.4814682);
   hbadmatch_stack_1->SetBinError(11,0.3929602);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetEntries(226);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,0.6447001);
   hext_stack_2->SetBinContent(2,1.897838);
   hext_stack_2->SetBinContent(3,2.798509);
   hext_stack_2->SetBinContent(4,3.585883);
   hext_stack_2->SetBinContent(5,1.47774);
   hext_stack_2->SetBinContent(6,0.3569671);
   hext_stack_2->SetBinContent(7,0.4762587);
   hext_stack_2->SetBinContent(11,0.2188956);
   hext_stack_2->SetBinError(1,0.3782924);
   hext_stack_2->SetBinError(2,0.678984);
   hext_stack_2->SetBinError(3,0.8558754);
   hext_stack_2->SetBinError(4,1.225645);
   hext_stack_2->SetBinError(5,0.6272311);
   hext_stack_2->SetBinError(6,0.258803);
   hext_stack_2->SetBinError(7,0.3652866);
   hext_stack_2->SetBinError(11,0.2188956);
   hext_stack_2->SetEntries(50);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,7.67625);
   hdirt_stack_3->SetBinContent(2,20.07283);
   hdirt_stack_3->SetBinContent(3,43.29187);
   hdirt_stack_3->SetBinContent(4,40.37947);
   hdirt_stack_3->SetBinContent(5,31.10001);
   hdirt_stack_3->SetBinContent(6,12.78604);
   hdirt_stack_3->SetBinContent(7,11.86469);
   hdirt_stack_3->SetBinContent(8,6.094575);
   hdirt_stack_3->SetBinContent(9,10.12737);
   hdirt_stack_3->SetBinContent(10,2.517386);
   hdirt_stack_3->SetBinContent(11,0.3243973);
   hdirt_stack_3->SetBinContent(12,1.137595);
   hdirt_stack_3->SetBinContent(20,0.3243973);
   hdirt_stack_3->SetBinContent(21,0.7309963);
   hdirt_stack_3->SetBinError(1,1.934366);
   hdirt_stack_3->SetBinError(2,2.945265);
   hdirt_stack_3->SetBinError(3,4.569683);
   hdirt_stack_3->SetBinError(4,4.442263);
   hdirt_stack_3->SetBinError(5,3.898523);
   hdirt_stack_3->SetBinError(6,2.415961);
   hdirt_stack_3->SetBinError(7,2.431998);
   hdirt_stack_3->SetBinError(8,1.531247);
   hdirt_stack_3->SetBinError(9,2.44909);
   hdirt_stack_3->SetBinError(10,0.9575503);
   hdirt_stack_3->SetBinError(11,0.3243973);
   hdirt_stack_3->SetBinError(12,0.6602113);
   hdirt_stack_3->SetBinError(20,0.3243973);
   hdirt_stack_3->SetBinError(21,0.5201503);
   hdirt_stack_3->SetEntries(428);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,1.754141);
   houtFV_stack_4->SetBinContent(2,10.75094);
   houtFV_stack_4->SetBinContent(3,16.23432);
   houtFV_stack_4->SetBinContent(4,20.35743);
   houtFV_stack_4->SetBinContent(5,16.22716);
   houtFV_stack_4->SetBinContent(6,10.37094);
   houtFV_stack_4->SetBinContent(7,8.995985);
   houtFV_stack_4->SetBinContent(8,2.742016);
   houtFV_stack_4->SetBinContent(9,2.642437);
   houtFV_stack_4->SetBinContent(10,1.763676);
   houtFV_stack_4->SetBinContent(11,1.713804);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(13,0.5884556);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinError(1,0.7350354);
   houtFV_stack_4->SetBinError(2,1.67908);
   houtFV_stack_4->SetBinError(3,2.027125);
   houtFV_stack_4->SetBinError(4,2.332419);
   houtFV_stack_4->SetBinError(5,1.972095);
   houtFV_stack_4->SetBinError(6,1.558326);
   houtFV_stack_4->SetBinError(7,1.49662);
   houtFV_stack_4->SetBinError(8,0.7620708);
   houtFV_stack_4->SetBinError(9,0.7851269);
   houtFV_stack_4->SetBinError(10,0.5878975);
   houtFV_stack_4->SetBinError(11,0.6207051);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(13,0.3397478);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetEntries(411);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6818899);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.155694);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2297887);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3350931);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1155977);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.129122);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.714124);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.346184);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.137434);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.45064);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2907294);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.7163178);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5578302);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5756293);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3901881);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(314);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.461519);
   hNCpi0inFVres_stack_7->SetBinContent(2,65.27181);
   hNCpi0inFVres_stack_7->SetBinContent(3,230.1412);
   hNCpi0inFVres_stack_7->SetBinContent(4,316.8508);
   hNCpi0inFVres_stack_7->SetBinContent(5,227.4297);
   hNCpi0inFVres_stack_7->SetBinContent(6,154.237);
   hNCpi0inFVres_stack_7->SetBinContent(7,114.7336);
   hNCpi0inFVres_stack_7->SetBinContent(8,76.91697);
   hNCpi0inFVres_stack_7->SetBinContent(9,46.03137);
   hNCpi0inFVres_stack_7->SetBinContent(10,25.51431);
   hNCpi0inFVres_stack_7->SetBinContent(11,16.52684);
   hNCpi0inFVres_stack_7->SetBinContent(12,12.27224);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.631999);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.490092);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.042028);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.883926);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.630994);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.311308);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6275859);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.5996859);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.813508);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5964928);
   hNCpi0inFVres_stack_7->SetBinError(2,2.64338);
   hNCpi0inFVres_stack_7->SetBinError(3,4.895777);
   hNCpi0inFVres_stack_7->SetBinError(4,5.862955);
   hNCpi0inFVres_stack_7->SetBinError(5,4.939683);
   hNCpi0inFVres_stack_7->SetBinError(6,4.147464);
   hNCpi0inFVres_stack_7->SetBinError(7,3.552748);
   hNCpi0inFVres_stack_7->SetBinError(8,2.89);
   hNCpi0inFVres_stack_7->SetBinError(9,2.221197);
   hNCpi0inFVres_stack_7->SetBinError(10,1.632303);
   hNCpi0inFVres_stack_7->SetBinError(11,1.392795);
   hNCpi0inFVres_stack_7->SetBinError(12,1.211575);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7483386);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6982963);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6607804);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5058087);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4213615);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4255744);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2387875);
   hNCpi0inFVres_stack_7->SetBinError(20,0.237152);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4417295);
   hNCpi0inFVres_stack_7->SetEntries(24019);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.435358);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.08738);
   hNCpi0inFVdis_stack_8->SetBinContent(3,44.34188);
   hNCpi0inFVdis_stack_8->SetBinContent(4,51.89271);
   hNCpi0inFVdis_stack_8->SetBinContent(5,33.61465);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.07124);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.14803);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.15384);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.40292);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.516094);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.118846);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.458616);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.329494);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.99827);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.39484);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.268958);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6825538);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.64054);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8655723);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.482612);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3264641);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.065945);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.073021);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.34056);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.868379);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.607637);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.473285);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.424485);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.061463);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9212014);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7933607);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5775417);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4990299);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.626877);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.388188);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3923435);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1982678);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2786535);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3939116);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5099592);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.7259042);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2368179);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.3442606);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1155977);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(24);

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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);

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
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,1.320485);
   hCCpi0inFV_stack_11->SetBinContent(2,15.70679);
   hCCpi0inFV_stack_11->SetBinContent(3,58.47828);
   hCCpi0inFV_stack_11->SetBinContent(4,82.82548);
   hCCpi0inFV_stack_11->SetBinContent(5,69.33149);
   hCCpi0inFV_stack_11->SetBinContent(6,46.74599);
   hCCpi0inFV_stack_11->SetBinContent(7,39.53456);
   hCCpi0inFV_stack_11->SetBinContent(8,27.68889);
   hCCpi0inFV_stack_11->SetBinContent(9,20.66318);
   hCCpi0inFV_stack_11->SetBinContent(10,14.48472);
   hCCpi0inFV_stack_11->SetBinContent(11,10.16171);
   hCCpi0inFV_stack_11->SetBinContent(12,6.875767);
   hCCpi0inFV_stack_11->SetBinContent(13,6.553686);
   hCCpi0inFV_stack_11->SetBinContent(14,3.967882);
   hCCpi0inFV_stack_11->SetBinContent(15,2.642437);
   hCCpi0inFV_stack_11->SetBinContent(16,2.39585);
   hCCpi0inFV_stack_11->SetBinContent(17,0.5884556);
   hCCpi0inFV_stack_11->SetBinContent(18,0.785171);
   hCCpi0inFV_stack_11->SetBinContent(19,0.8770706);
   hCCpi0inFV_stack_11->SetBinContent(21,3.074514);
   hCCpi0inFV_stack_11->SetBinError(1,0.6080263);
   hCCpi0inFV_stack_11->SetBinError(2,2.00433);
   hCCpi0inFV_stack_11->SetBinError(3,3.832175);
   hCCpi0inFV_stack_11->SetBinError(4,4.544182);
   hCCpi0inFV_stack_11->SetBinError(5,4.173712);
   hCCpi0inFV_stack_11->SetBinError(6,3.42659);
   hCCpi0inFV_stack_11->SetBinError(7,3.181304);
   hCCpi0inFV_stack_11->SetBinError(8,2.606298);
   hCCpi0inFV_stack_11->SetBinError(9,2.293759);
   hCCpi0inFV_stack_11->SetBinError(10,1.928289);
   hCCpi0inFV_stack_11->SetBinError(11,1.60654);
   hCCpi0inFV_stack_11->SetBinError(12,1.322435);
   hCCpi0inFV_stack_11->SetBinError(13,1.256869);
   hCCpi0inFV_stack_11->SetBinError(14,0.9624406);
   hCCpi0inFV_stack_11->SetBinError(15,0.7851269);
   hCCpi0inFV_stack_11->SetBinError(16,0.7857345);
   hCCpi0inFV_stack_11->SetBinError(17,0.3397478);
   hCCpi0inFV_stack_11->SetBinError(18,0.3925882);
   hCCpi0inFV_stack_11->SetBinError(19,0.5197486);
   hCCpi0inFV_stack_11->SetBinError(21,0.920955);
   hCCpi0inFV_stack_11->SetEntries(1778);

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
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,5.943861);
   hNCinFV_stack_12->SetBinContent(2,18.90777);
   hNCinFV_stack_12->SetBinContent(3,27.91793);
   hNCinFV_stack_12->SetBinContent(4,27.16512);
   hNCinFV_stack_12->SetBinContent(5,17.78242);
   hNCinFV_stack_12->SetBinContent(6,11.42545);
   hNCinFV_stack_12->SetBinContent(7,6.990226);
   hNCinFV_stack_12->SetBinContent(8,6.248774);
   hNCinFV_stack_12->SetBinContent(9,2.493903);
   hNCinFV_stack_12->SetBinContent(10,4.393198);
   hNCinFV_stack_12->SetBinContent(11,4.102892);
   hNCinFV_stack_12->SetBinContent(12,1.662242);
   hNCinFV_stack_12->SetBinContent(13,1.660551);
   hNCinFV_stack_12->SetBinContent(14,0.5352025);
   hNCinFV_stack_12->SetBinContent(15,1.465526);
   hNCinFV_stack_12->SetBinContent(16,1.270501);
   hNCinFV_stack_12->SetBinContent(17,0.5352025);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.1967154);
   hNCinFV_stack_12->SetBinError(1,1.286199);
   hNCinFV_stack_12->SetBinError(2,2.176401);
   hNCinFV_stack_12->SetBinError(3,2.663976);
   hNCinFV_stack_12->SetBinError(4,2.588);
   hNCinFV_stack_12->SetBinError(5,2.113498);
   hNCinFV_stack_12->SetBinError(6,1.710513);
   hNCinFV_stack_12->SetBinError(7,1.270753);
   hNCinFV_stack_12->SetBinError(8,1.271618);
   hNCinFV_stack_12->SetBinError(9,0.733085);
   hNCinFV_stack_12->SetBinError(10,1.074885);
   hNCinFV_stack_12->SetBinError(11,1.000002);
   hNCinFV_stack_12->SetBinError(12,0.6513556);
   hNCinFV_stack_12->SetBinError(13,0.650847);
   hNCinFV_stack_12->SetBinError(14,0.3921167);
   hNCinFV_stack_12->SetBinError(15,0.6209405);
   hNCinFV_stack_12->SetBinError(16,0.5895188);
   hNCinFV_stack_12->SetBinError(17,0.3921167);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.1967154);
   hNCinFV_stack_12->SetEntries(601);

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
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,5.919736);
   hnumuCCinFV_stack_13->SetBinContent(2,25.60458);
   hnumuCCinFV_stack_13->SetBinContent(3,47.56406);
   hnumuCCinFV_stack_13->SetBinContent(4,49.75355);
   hnumuCCinFV_stack_13->SetBinContent(5,37.05167);
   hnumuCCinFV_stack_13->SetBinContent(6,25.25478);
   hnumuCCinFV_stack_13->SetBinContent(7,16.66864);
   hnumuCCinFV_stack_13->SetBinContent(8,11.59343);
   hnumuCCinFV_stack_13->SetBinContent(9,3.313316);
   hnumuCCinFV_stack_13->SetBinContent(10,3.760346);
   hnumuCCinFV_stack_13->SetBinContent(11,3.711707);
   hnumuCCinFV_stack_13->SetBinContent(12,1.954199);
   hnumuCCinFV_stack_13->SetBinContent(13,2.623015);
   hnumuCCinFV_stack_13->SetBinContent(14,1.820598);
   hnumuCCinFV_stack_13->SetBinContent(15,0.9602511);
   hnumuCCinFV_stack_13->SetBinContent(16,0.6800632);
   hnumuCCinFV_stack_13->SetBinContent(17,0.5884556);
   hnumuCCinFV_stack_13->SetBinContent(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinContent(21,0.3934307);
   hnumuCCinFV_stack_13->SetBinError(1,1.440047);
   hnumuCCinFV_stack_13->SetBinError(2,3.096363);
   hnumuCCinFV_stack_13->SetBinError(3,4.209235);
   hnumuCCinFV_stack_13->SetBinError(4,4.196265);
   hnumuCCinFV_stack_13->SetBinError(5,3.372273);
   hnumuCCinFV_stack_13->SetBinError(6,2.714518);
   hnumuCCinFV_stack_13->SetBinError(7,2.376733);
   hnumuCCinFV_stack_13->SetBinError(8,2.154782);
   hnumuCCinFV_stack_13->SetBinError(9,1.015273);
   hnumuCCinFV_stack_13->SetBinError(10,0.9756125);
   hnumuCCinFV_stack_13->SetBinError(11,2.513576);
   hnumuCCinFV_stack_13->SetBinError(12,0.7717532);
   hnumuCCinFV_stack_13->SetBinError(13,0.8176701);
   hnumuCCinFV_stack_13->SetBinError(14,0.7685204);
   hnumuCCinFV_stack_13->SetBinError(15,0.4944508);
   hnumuCCinFV_stack_13->SetBinError(16,0.3892788);
   hnumuCCinFV_stack_13->SetBinError(17,0.3397478);
   hnumuCCinFV_stack_13->SetBinError(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinError(21,0.2781975);
   hnumuCCinFV_stack_13->SetEntries(929);

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
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(2,0.69586);
   hnueCCinFV_stack_14->SetBinContent(3,0.784569);
   hnueCCinFV_stack_14->SetBinContent(4,2.714239);
   hnueCCinFV_stack_14->SetBinContent(5,1.323559);
   hnueCCinFV_stack_14->SetBinContent(6,0.6421849);
   hnueCCinFV_stack_14->SetBinContent(7,0.4453802);
   hnueCCinFV_stack_14->SetBinContent(8,0.4465571);
   hnueCCinFV_stack_14->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(15,0.3941557);
   hnueCCinFV_stack_14->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(21,4.487498);
   hnueCCinFV_stack_14->SetBinError(1,0.1950249);
   hnueCCinFV_stack_14->SetBinError(2,0.4043603);
   hnueCCinFV_stack_14->SetBinError(3,0.4645009);
   hnueCCinFV_stack_14->SetBinError(4,1.01504);
   hnueCCinFV_stack_14->SetBinError(5,0.6689346);
   hnueCCinFV_stack_14->SetBinError(6,0.3734356);
   hnueCCinFV_stack_14->SetBinError(7,0.3170665);
   hnueCCinFV_stack_14->SetBinError(8,0.3179912);
   hnueCCinFV_stack_14->SetBinError(9,0.3401776);
   hnueCCinFV_stack_14->SetBinError(10,0.1950249);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.3401776);
   hnueCCinFV_stack_14->SetBinError(15,0.2787107);
   hnueCCinFV_stack_14->SetBinError(16,0.1967154);
   hnueCCinFV_stack_14->SetBinError(17,0.1950249);
   hnueCCinFV_stack_14->SetBinError(19,0.1950249);
   hnueCCinFV_stack_14->SetBinError(21,1.100034);
   hnueCCinFV_stack_14->SetEntries(54);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__5->SetBinContent(1,31.93503);
   hmcerror__5->SetBinContent(2,178.9702);
   hmcerror__5->SetBinContent(3,492.2597);
   hmcerror__5->SetBinContent(4,609.2969);
   hmcerror__5->SetBinContent(5,451.2874);
   hmcerror__5->SetBinContent(6,293.294);
   hmcerror__5->SetBinContent(7,224.2168);
   hmcerror__5->SetBinContent(8,152.7385);
   hmcerror__5->SetBinContent(9,97.68664);
   hmcerror__5->SetBinContent(10,61.18669);
   hmcerror__5->SetBinContent(11,42.58339);
   hmcerror__5->SetBinContent(12,28.09302);
   hmcerror__5->SetBinContent(13,20.14871);
   hmcerror__5->SetBinContent(14,14.06456);
   hmcerror__5->SetBinContent(15,11.12385);
   hmcerror__5->SetBinContent(16,7.723914);
   hmcerror__5->SetBinContent(17,4.65522);
   hmcerror__5->SetBinContent(18,3.512641);
   hmcerror__5->SetBinContent(19,2.340221);
   hmcerror__5->SetBinContent(20,2.382684);
   hmcerror__5->SetBinContent(21,13.61112);
   hmcerror__5->SetBinError(1,7.979018);
   hmcerror__5->SetBinError(2,35.25274);
   hmcerror__5->SetBinError(3,101.1278);
   hmcerror__5->SetBinError(4,143.7967);
   hmcerror__5->SetBinError(5,119.5693);
   hmcerror__5->SetBinError(6,81.71468);
   hmcerror__5->SetBinError(7,61.08048);
   hmcerror__5->SetBinError(8,45.3042);
   hmcerror__5->SetBinError(9,29.05478);
   hmcerror__5->SetBinError(10,17.94637);
   hmcerror__5->SetBinError(11,14.52115);
   hmcerror__5->SetBinError(12,8.402405);
   hmcerror__5->SetBinError(13,8.180447);
   hmcerror__5->SetBinError(14,5.934546);
   hmcerror__5->SetBinError(15,4.912615);
   hmcerror__5->SetBinError(16,4.501414);
   hmcerror__5->SetBinError(17,2.897175);
   hmcerror__5->SetBinError(18,2.563628);
   hmcerror__5->SetBinError(19,1.988628);
   hmcerror__5->SetBinError(20,1.737408);
   hmcerror__5->SetBinError(21,10.20656);
   hmcerror__5->SetEntries(2712.362);

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
   26,
   120,
   354,
   466,
   352,
   218,
   161,
   86,
   77,
   60,
   27,
   23,
   16,
   11,
   7,
   1,
   4,
   5,
   4,
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
   5.2453,
   10.95445,
   18.81489,
   21.58703,
   18.76166,
   14.76482,
   12.68858,
   9.3967,
   8.8995,
   7.8743,
   5.3414,
   4.9457,
   4.1628,
   3.4975,
   2.85954,
   1,
   2.29683,
   2.48995,
   2.29683,
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
   5.0358,
   10.95445,
   18.81489,
   21.58703,
   18.76166,
   14.76482,
   12.68858,
   9.1951,
   8.6976,
   7.6713,
   5.1322,
   4.7346,
   3.9454,
   3.27,
   2.61053,
   1.35971,
   1.98186,
   2.21064,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(536.3457);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2023.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 11.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 187.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1310.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  244.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 411.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 140.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 239.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 9.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_energy_all");
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
   0.2498516,
   0.1969754,
   0.2054358,
   0.2360043,
   0.2649514,
   0.2786101,
   0.272417,
   0.2966128,
   0.2974284,
   0.2933051,
   0.3410051,
   0.2990923,
   0.4060035,
   0.4219503,
   0.4416289,
   0.5827893,
   0.6223496,
   0.7298291,
   0.8497607,
   0.7291811};
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
   0.2498516,
   0.1969754,
   0.2054358,
   0.2360043,
   0.2649514,
   0.2786101,
   0.272417,
   0.2966128,
   0.2974284,
   0.2933051,
   0.3410051,
   0.2990923,
   0.4060035,
   0.4219503,
   0.4416289,
   0.5827893,
   0.6223496,
   0.7298291,
   0.8497607,
   0.7291811};
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
   0.1811447,
   0.1901123,
   0.2029615,
   0.2257805,
   0.2511467,
   0.2634674,
   0.2577653,
   0.2526517,
   0.2340065,
   0.2388302,
   0.2538801,
   0.2479324,
   0.2582725,
   0.25436,
   0.3142221,
   0.2969524,
   0.3260975,
   0.3761554,
   0.4365403,
   0.4327601};
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
   0.1811447,
   0.1901123,
   0.2029615,
   0.2257805,
   0.2511467,
   0.2634674,
   0.2577653,
   0.2526517,
   0.2340065,
   0.2388302,
   0.2538801,
   0.2479324,
   0.2582725,
   0.25436,
   0.3142221,
   0.2969524,
   0.3260975,
   0.3761554,
   0.4365403,
   0.4327601};
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
   0.814153,
   0.6705025,
   0.7191326,
   0.764816,
   0.7799907,
   0.7432814,
   0.718055,
   0.5630539,
   0.7882347,
   0.9806055,
   0.63405,
   0.8187087,
   0.7940956,
   0.7821076,
   0.6292783,
   0.129468,
   0.8592505,
   1.42343,
   1.70924,
   2.098474};
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
   0.1642491,
   0.06120823,
   0.03822146,
   0.03542942,
   0.04157364,
   0.05034137,
   0.05659066,
   0.06152149,
   0.09110253,
   0.128693,
   0.1254339,
   0.1760473,
   0.2066038,
   0.2486747,
   0.2570638,
   0.129468,
   0.4933881,
   0.708854,
   0.9814584,
   1.045019};
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
   0.1576889,
   0.06120823,
   0.03822146,
   0.03542942,
   0.04157364,
   0.05034137,
   0.05659066,
   0.06020159,
   0.08903572,
   0.1253753,
   0.1205212,
   0.168533,
   0.195814,
   0.2324993,
   0.2346786,
   0.176039,
   0.4257285,
   0.6293384,
   0.8468686,
   0.9277941};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(3.328895);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_12_pi0_energy_all",20,0,1200);

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

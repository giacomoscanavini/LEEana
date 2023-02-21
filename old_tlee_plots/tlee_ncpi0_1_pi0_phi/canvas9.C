#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 17:07:17 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",86,109,1200,900);
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
   pad1->Range(-4.119231,-0.7,3.957692,77.40526);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__25->SetBinContent(1,34.42729);
   hmc__25->SetBinContent(2,28.69693);
   hmc__25->SetBinContent(3,27.24403);
   hmc__25->SetBinContent(4,22.64618);
   hmc__25->SetBinContent(5,20.59983);
   hmc__25->SetBinContent(6,25.86656);
   hmc__25->SetBinContent(7,29.59473);
   hmc__25->SetBinContent(8,25.36957);
   hmc__25->SetBinContent(9,22.03098);
   hmc__25->SetBinContent(10,25.38466);
   hmc__25->SetBinContent(11,23.91287);
   hmc__25->SetBinContent(12,25.01384);
   hmc__25->SetBinContent(13,27.20029);
   hmc__25->SetBinContent(14,31.07576);
   hmc__25->SetBinContent(15,34.37005);
   hmc__25->SetBinContent(16,27.36092);
   hmc__25->SetBinContent(17,25.87926);
   hmc__25->SetBinContent(18,25.68692);
   hmc__25->SetBinContent(19,28.19011);
   hmc__25->SetBinContent(20,21.86721);
   hmc__25->SetBinContent(21,23.60345);
   hmc__25->SetBinContent(22,26.55165);
   hmc__25->SetBinContent(23,26.20856);
   hmc__25->SetBinContent(24,26.87141);
   hmc__25->SetBinContent(25,24.93608);
   hmc__25->SetBinError(1,12.4227);
   hmc__25->SetBinError(2,14.96044);
   hmc__25->SetBinError(3,14.75078);
   hmc__25->SetBinError(4,22.18807);
   hmc__25->SetBinError(5,10.68125);
   hmc__25->SetBinError(6,11.26918);
   hmc__25->SetBinError(7,13.61514);
   hmc__25->SetBinError(8,13.88404);
   hmc__25->SetBinError(9,13.11588);
   hmc__25->SetBinError(10,14.36997);
   hmc__25->SetBinError(11,11.81359);
   hmc__25->SetBinError(12,12.25421);
   hmc__25->SetBinError(13,12.87786);
   hmc__25->SetBinError(14,15.64138);
   hmc__25->SetBinError(15,17.19372);
   hmc__25->SetBinError(16,17.28332);
   hmc__25->SetBinError(17,13.47192);
   hmc__25->SetBinError(18,17.67827);
   hmc__25->SetBinError(19,13.75227);
   hmc__25->SetBinError(20,10.43572);
   hmc__25->SetBinError(21,14.49069);
   hmc__25->SetBinError(22,14.00083);
   hmc__25->SetBinError(23,13.84081);
   hmc__25->SetBinError(24,13.8508);
   hmc__25->SetBinError(25,12.18825);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-0.7);
   hmc__25->SetMaximum(73.5);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-3.15,3.15);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(36.14866);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.6518159);
   hbadmatch_stack_1->SetBinContent(2,0.8950606);
   hbadmatch_stack_1->SetBinContent(3,0.8770706);
   hbadmatch_stack_1->SetBinContent(4,0.7279414);
   hbadmatch_stack_1->SetBinContent(5,0.6949782);
   hbadmatch_stack_1->SetBinContent(6,1.127828);
   hbadmatch_stack_1->SetBinContent(7,1.216733);
   hbadmatch_stack_1->SetBinContent(9,1.004257);
   hbadmatch_stack_1->SetBinContent(10,0.9026678);
   hbadmatch_stack_1->SetBinContent(11,0.5243964);
   hbadmatch_stack_1->SetBinContent(12,0.327681);
   hbadmatch_stack_1->SetBinContent(13,1.102273);
   hbadmatch_stack_1->SetBinContent(14,0.5094033);
   hbadmatch_stack_1->SetBinContent(15,1.016498);
   hbadmatch_stack_1->SetBinContent(16,1.032815);
   hbadmatch_stack_1->SetBinContent(17,0.5352025);
   hbadmatch_stack_1->SetBinContent(18,1.704783);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.2345507);
   hbadmatch_stack_1->SetBinContent(21,2.034473);
   hbadmatch_stack_1->SetBinContent(22,0.7810127);
   hbadmatch_stack_1->SetBinContent(23,1.631516);
   hbadmatch_stack_1->SetBinContent(24,0.1617181);
   hbadmatch_stack_1->SetBinContent(25,0.8130114);
   hbadmatch_stack_1->SetBinError(1,0.3325132);
   hbadmatch_stack_1->SetBinError(2,0.4372818);
   hbadmatch_stack_1->SetBinError(3,0.5197486);
   hbadmatch_stack_1->SetBinError(4,0.4836806);
   hbadmatch_stack_1->SetBinError(5,0.3666041);
   hbadmatch_stack_1->SetBinError(6,0.5370284);
   hbadmatch_stack_1->SetBinError(7,0.508839);
   hbadmatch_stack_1->SetBinError(9,0.4285354);
   hbadmatch_stack_1->SetBinError(10,0.4799374);
   hbadmatch_stack_1->SetBinError(11,0.3071307);
   hbadmatch_stack_1->SetBinError(12,0.2358651);
   hbadmatch_stack_1->SetBinError(13,0.5664402);
   hbadmatch_stack_1->SetBinError(14,0.5094033);
   hbadmatch_stack_1->SetBinError(15,0.4385046);
   hbadmatch_stack_1->SetBinError(16,0.5252562);
   hbadmatch_stack_1->SetBinError(17,0.3921167);
   hbadmatch_stack_1->SetBinError(18,0.6104605);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.2345507);
   hbadmatch_stack_1->SetBinError(21,0.8314255);
   hbadmatch_stack_1->SetBinError(22,0.4784573);
   hbadmatch_stack_1->SetBinError(23,0.691411);
   hbadmatch_stack_1->SetBinError(24,0.1146003);
   hbadmatch_stack_1->SetBinError(25,0.4990384);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.74772);
   hext_stack_2->SetBinContent(2,3.539649);
   hext_stack_2->SetBinContent(3,1.78639);
   hext_stack_2->SetBinContent(4,1.78639);
   hext_stack_2->SetBinContent(5,2.752401);
   hext_stack_2->SetBinContent(6,7.325902);
   hext_stack_2->SetBinContent(7,6.456453);
   hext_stack_2->SetBinContent(8,6.035493);
   hext_stack_2->SetBinContent(9,2.27519);
   hext_stack_2->SetBinContent(10,1.544194);
   hext_stack_2->SetBinContent(11,1.137595);
   hext_stack_2->SetBinContent(12,1.461993);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(14,1.614806);
   hext_stack_2->SetBinContent(15,2.021405);
   hext_stack_2->SetBinContent(16,6.042674);
   hext_stack_2->SetBinContent(17,2.517386);
   hext_stack_2->SetBinContent(18,2.834603);
   hext_stack_2->SetBinContent(19,9.47858);
   hext_stack_2->SetBinContent(20,5.572643);
   hext_stack_2->SetBinContent(21,3.006186);
   hext_stack_2->SetBinContent(22,4.670063);
   hext_stack_2->SetBinContent(23,2.759582);
   hext_stack_2->SetBinContent(24,2.6702);
   hext_stack_2->SetBinContent(25,1.461993);
   hext_stack_2->SetBinError(1,2.005173);
   hext_stack_2->SetBinError(2,1.400848);
   hext_stack_2->SetBinError(3,0.8039566);
   hext_stack_2->SetBinError(4,0.8039566);
   hext_stack_2->SetBinError(5,1.07854);
   hext_stack_2->SetBinError(6,2.026085);
   hext_stack_2->SetBinError(7,1.801611);
   hext_stack_2->SetBinError(8,1.866248);
   hext_stack_2->SetBinError(9,0.9336798);
   hext_stack_2->SetBinError(10,0.7753719);
   hext_stack_2->SetBinError(11,0.6602113);
   hext_stack_2->SetBinError(12,0.7356036);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(14,0.8528597);
   hext_stack_2->SetBinError(15,0.9448239);
   hext_stack_2->SetBinError(16,1.811541);
   hext_stack_2->SetBinError(17,0.9575503);
   hext_stack_2->SetBinError(18,1.106046);
   hext_stack_2->SetBinError(19,2.405737);
   hext_stack_2->SetBinError(20,1.670027);
   hext_stack_2->SetBinError(21,1.068791);
   hext_stack_2->SetBinError(22,1.612283);
   hext_stack_2->SetBinError(23,0.98084);
   hext_stack_2->SetBinError(24,1.050314);
   hext_stack_2->SetBinError(25,0.7356036);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(2,0.2645861);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.6632347);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.4049124);
   hdirt_stack_3->SetBinContent(18,0.4312521);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinContent(20,0.4326043);
   hdirt_stack_3->SetBinContent(23,0.4149213);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinContent(25,0.400075);
   hdirt_stack_3->SetBinError(2,0.2645861);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(6,0.3961844);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(16,0.4049124);
   hdirt_stack_3->SetBinError(18,0.428907);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetBinError(20,0.2502152);
   hdirt_stack_3->SetBinError(23,0.4149213);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetBinError(25,0.296158);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,6.913874);
   houtFV_stack_4->SetBinContent(2,5.01253);
   houtFV_stack_4->SetBinContent(3,4.782835);
   houtFV_stack_4->SetBinContent(4,5.570703);
   houtFV_stack_4->SetBinContent(5,3.81738);
   houtFV_stack_4->SetBinContent(6,3.260653);
   houtFV_stack_4->SetBinContent(7,4.923155);
   houtFV_stack_4->SetBinContent(8,4.92005);
   houtFV_stack_4->SetBinContent(9,4.035371);
   houtFV_stack_4->SetBinContent(10,3.895712);
   houtFV_stack_4->SetBinContent(11,4.24059);
   houtFV_stack_4->SetBinContent(12,4.111738);
   houtFV_stack_4->SetBinContent(13,4.885982);
   houtFV_stack_4->SetBinContent(14,4.841473);
   houtFV_stack_4->SetBinContent(15,6.735407);
   houtFV_stack_4->SetBinContent(16,5.727559);
   houtFV_stack_4->SetBinContent(17,3.921105);
   houtFV_stack_4->SetBinContent(18,5.102008);
   houtFV_stack_4->SetBinContent(19,3.848128);
   houtFV_stack_4->SetBinContent(20,4.129941);
   houtFV_stack_4->SetBinContent(21,4.878096);
   houtFV_stack_4->SetBinContent(22,5.060357);
   houtFV_stack_4->SetBinContent(23,4.265872);
   houtFV_stack_4->SetBinContent(24,3.138433);
   houtFV_stack_4->SetBinContent(25,4.228317);
   houtFV_stack_4->SetBinError(1,1.531153);
   houtFV_stack_4->SetBinError(2,1.074568);
   houtFV_stack_4->SetBinError(3,1.102898);
   houtFV_stack_4->SetBinError(4,1.147089);
   houtFV_stack_4->SetBinError(5,0.9370049);
   houtFV_stack_4->SetBinError(6,0.8131984);
   houtFV_stack_4->SetBinError(7,1.080868);
   houtFV_stack_4->SetBinError(8,1.084741);
   houtFV_stack_4->SetBinError(9,1.009526);
   houtFV_stack_4->SetBinError(10,0.9500139);
   houtFV_stack_4->SetBinError(11,1.113227);
   houtFV_stack_4->SetBinError(12,1.099692);
   houtFV_stack_4->SetBinError(13,1.12593);
   houtFV_stack_4->SetBinError(14,1.104596);
   houtFV_stack_4->SetBinError(15,1.247805);
   houtFV_stack_4->SetBinError(16,1.186839);
   houtFV_stack_4->SetBinError(17,0.989098);
   houtFV_stack_4->SetBinError(18,1.416129);
   houtFV_stack_4->SetBinError(19,0.9589711);
   houtFV_stack_4->SetBinError(20,1.056507);
   houtFV_stack_4->SetBinError(21,1.113122);
   houtFV_stack_4->SetBinError(22,1.264245);
   houtFV_stack_4->SetBinError(23,1.017707);
   houtFV_stack_4->SetBinError(24,0.842732);
   houtFV_stack_4->SetBinError(25,1.074414);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1523284);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1324158);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.06839793);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1049119);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1081756);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04917817);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.141261);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05831136);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05546193);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1528873);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1465724);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1087866);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.06588023);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.07104018);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.030472);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03202375);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.111874);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1295646);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06193747);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04231222);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.0356033);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.428722);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.016784);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.177467);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.107671);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.430434);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.282488);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.790526);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.735106);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.453964);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.191408);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.964583);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.443462);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.498975);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.138505);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.736858);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.208467);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.660787);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.446212);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.494725);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.241466);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.502568);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.325177);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.315269);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.332338);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.606407);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5358831);
   hNCpi0inFVres_stack_7->SetBinError(2,0.840382);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9521909);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5979713);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4834334);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5887879);
   hNCpi0inFVres_stack_7->SetBinError(7,0.691122);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6155042);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4979426);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5494512);
   hNCpi0inFVres_stack_7->SetBinError(11,0.687955);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5876269);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6461186);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6598189);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5337323);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5977212);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6503047);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4952685);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4691115);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4976799);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5199556);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6221431);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5787998);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4882577);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6267166);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.549569);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.518297);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.537649);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.670041);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.833225);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.620938);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8783872);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.9887458);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.9585261);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.742986);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.123974);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.521738);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8578953);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.738201);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8670236);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.216017);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.28879);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6934876);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.917224);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.598254);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.927695);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.9802895);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.649613);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.576221);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.626289);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.402053);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5188826);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4901659);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6514979);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5286289);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5065831);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2669276);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2793436);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4099239);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2317131);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4435193);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4213214);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2570392);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6623877);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2757055);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2986098);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5990872);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1668817);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2300747);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6341889);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6865021);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2938839);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.507321);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.427605);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7147133);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02619662);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,7.045845);
   hCCpi0inFV_stack_10->SetBinContent(2,4.396546);
   hCCpi0inFV_stack_10->SetBinContent(3,5.744615);
   hCCpi0inFV_stack_10->SetBinContent(4,4.675863);
   hCCpi0inFV_stack_10->SetBinContent(5,3.584713);
   hCCpi0inFV_stack_10->SetBinContent(6,3.981783);
   hCCpi0inFV_stack_10->SetBinContent(7,4.783247);
   hCCpi0inFV_stack_10->SetBinContent(8,5.229931);
   hCCpi0inFV_stack_10->SetBinContent(9,4.542936);
   hCCpi0inFV_stack_10->SetBinContent(10,4.640895);
   hCCpi0inFV_stack_10->SetBinContent(11,4.455436);
   hCCpi0inFV_stack_10->SetBinContent(12,4.649952);
   hCCpi0inFV_stack_10->SetBinContent(13,7.151716);
   hCCpi0inFV_stack_10->SetBinContent(14,8.675901);
   hCCpi0inFV_stack_10->SetBinContent(15,7.108658);
   hCCpi0inFV_stack_10->SetBinContent(16,3.603029);
   hCCpi0inFV_stack_10->SetBinContent(17,5.58364);
   hCCpi0inFV_stack_10->SetBinContent(18,6.072363);
   hCCpi0inFV_stack_10->SetBinContent(19,4.727947);
   hCCpi0inFV_stack_10->SetBinContent(20,2.802026);
   hCCpi0inFV_stack_10->SetBinContent(21,3.490339);
   hCCpi0inFV_stack_10->SetBinContent(22,5.715261);
   hCCpi0inFV_stack_10->SetBinContent(23,4.516356);
   hCCpi0inFV_stack_10->SetBinContent(24,8.565165);
   hCCpi0inFV_stack_10->SetBinContent(25,6.36368);
   hCCpi0inFV_stack_10->SetBinError(1,1.355912);
   hCCpi0inFV_stack_10->SetBinError(2,1.001924);
   hCCpi0inFV_stack_10->SetBinError(3,1.215043);
   hCCpi0inFV_stack_10->SetBinError(4,1.081466);
   hCCpi0inFV_stack_10->SetBinError(5,0.9563567);
   hCCpi0inFV_stack_10->SetBinError(6,0.958279);
   hCCpi0inFV_stack_10->SetBinError(7,1.109705);
   hCCpi0inFV_stack_10->SetBinError(8,1.12717);
   hCCpi0inFV_stack_10->SetBinError(9,1.047595);
   hCCpi0inFV_stack_10->SetBinError(10,1.00891);
   hCCpi0inFV_stack_10->SetBinError(11,0.99191);
   hCCpi0inFV_stack_10->SetBinError(12,1.112582);
   hCCpi0inFV_stack_10->SetBinError(13,1.326595);
   hCCpi0inFV_stack_10->SetBinError(14,1.528383);
   hCCpi0inFV_stack_10->SetBinError(15,1.372468);
   hCCpi0inFV_stack_10->SetBinError(16,0.9281172);
   hCCpi0inFV_stack_10->SetBinError(17,1.214273);
   hCCpi0inFV_stack_10->SetBinError(18,1.292813);
   hCCpi0inFV_stack_10->SetBinError(19,1.063349);
   hCCpi0inFV_stack_10->SetBinError(20,0.8335877);
   hCCpi0inFV_stack_10->SetBinError(21,0.903203);
   hCCpi0inFV_stack_10->SetBinError(22,1.209926);
   hCCpi0inFV_stack_10->SetBinError(23,1.07098);
   hCCpi0inFV_stack_10->SetBinError(24,1.499382);
   hCCpi0inFV_stack_10->SetBinError(25,1.351607);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.5808221);
   hNCinFV_stack_11->SetBinContent(2,1.403598);
   hNCinFV_stack_11->SetBinContent(3,1.511275);
   hNCinFV_stack_11->SetBinContent(4,1.340427);
   hNCinFV_stack_11->SetBinContent(5,1.152033);
   hNCinFV_stack_11->SetBinContent(6,1.350374);
   hNCinFV_stack_11->SetBinContent(7,2.113186);
   hNCinFV_stack_11->SetBinContent(8,1.247499);
   hNCinFV_stack_11->SetBinContent(9,0.6878483);
   hNCinFV_stack_11->SetBinContent(10,1.51079);
   hNCinFV_stack_11->SetBinContent(11,1.275339);
   hNCinFV_stack_11->SetBinContent(12,1.196224);
   hNCinFV_stack_11->SetBinContent(13,1.769446);
   hNCinFV_stack_11->SetBinContent(14,1.642836);
   hNCinFV_stack_11->SetBinContent(15,3.036941);
   hNCinFV_stack_11->SetBinContent(16,0.5991278);
   hNCinFV_stack_11->SetBinContent(17,1.521869);
   hNCinFV_stack_11->SetBinContent(18,1.30083);
   hNCinFV_stack_11->SetBinContent(19,1.147673);
   hNCinFV_stack_11->SetBinContent(20,1.823118);
   hNCinFV_stack_11->SetBinContent(21,1.018605);
   hNCinFV_stack_11->SetBinContent(22,1.624119);
   hNCinFV_stack_11->SetBinContent(23,1.962567);
   hNCinFV_stack_11->SetBinContent(24,1.705527);
   hNCinFV_stack_11->SetBinContent(25,1.260591);
   hNCinFV_stack_11->SetBinError(1,0.2759985);
   hNCinFV_stack_11->SetBinError(2,0.5568388);
   hNCinFV_stack_11->SetBinError(3,0.6129982);
   hNCinFV_stack_11->SetBinError(4,0.6294574);
   hNCinFV_stack_11->SetBinError(5,0.4453143);
   hNCinFV_stack_11->SetBinError(6,0.63516);
   hNCinFV_stack_11->SetBinError(7,0.9347245);
   hNCinFV_stack_11->SetBinError(8,0.5336356);
   hNCinFV_stack_11->SetBinError(9,0.3151929);
   hNCinFV_stack_11->SetBinError(10,0.53923);
   hNCinFV_stack_11->SetBinError(11,0.5443541);
   hNCinFV_stack_11->SetBinError(12,0.5615185);
   hNCinFV_stack_11->SetBinError(13,0.8946426);
   hNCinFV_stack_11->SetBinError(14,0.6497992);
   hNCinFV_stack_11->SetBinError(15,1.021445);
   hNCinFV_stack_11->SetBinError(16,0.3863272);
   hNCinFV_stack_11->SetBinError(17,0.6410216);
   hNCinFV_stack_11->SetBinError(18,0.4714071);
   hNCinFV_stack_11->SetBinError(19,0.5395983);
   hNCinFV_stack_11->SetBinError(20,1.071661);
   hNCinFV_stack_11->SetBinError(21,0.540236);
   hNCinFV_stack_11->SetBinError(22,0.6117021);
   hNCinFV_stack_11->SetBinError(23,0.852477);
   hNCinFV_stack_11->SetBinError(24,0.7509918);
   hNCinFV_stack_11->SetBinError(25,0.5387279);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,6.431799);
   hnumuCCinFV_stack_12->SetBinContent(2,5.948309);
   hnumuCCinFV_stack_12->SetBinContent(3,4.771264);
   hnumuCCinFV_stack_12->SetBinContent(4,2.395313);
   hnumuCCinFV_stack_12->SetBinContent(5,1.728622);
   hnumuCCinFV_stack_12->SetBinContent(6,2.652275);
   hnumuCCinFV_stack_12->SetBinContent(7,4.280711);
   hnumuCCinFV_stack_12->SetBinContent(8,2.679767);
   hnumuCCinFV_stack_12->SetBinContent(9,4.579826);
   hnumuCCinFV_stack_12->SetBinContent(10,7.015985);
   hnumuCCinFV_stack_12->SetBinContent(11,6.044381);
   hnumuCCinFV_stack_12->SetBinContent(12,7.301056);
   hnumuCCinFV_stack_12->SetBinContent(13,5.495498);
   hnumuCCinFV_stack_12->SetBinContent(14,7.511499);
   hnumuCCinFV_stack_12->SetBinContent(15,9.834565);
   hnumuCCinFV_stack_12->SetBinContent(16,4.194161);
   hnumuCCinFV_stack_12->SetBinContent(17,4.837792);
   hnumuCCinFV_stack_12->SetBinContent(18,4.041543);
   hnumuCCinFV_stack_12->SetBinContent(19,3.505734);
   hnumuCCinFV_stack_12->SetBinContent(20,1.966725);
   hnumuCCinFV_stack_12->SetBinContent(21,3.264622);
   hnumuCCinFV_stack_12->SetBinContent(22,3.243398);
   hnumuCCinFV_stack_12->SetBinContent(23,3.302256);
   hnumuCCinFV_stack_12->SetBinContent(24,5.115866);
   hnumuCCinFV_stack_12->SetBinContent(25,4.175719);
   hnumuCCinFV_stack_12->SetBinError(1,1.339199);
   hnumuCCinFV_stack_12->SetBinError(2,1.373511);
   hnumuCCinFV_stack_12->SetBinError(3,1.097532);
   hnumuCCinFV_stack_12->SetBinError(4,0.9781184);
   hnumuCCinFV_stack_12->SetBinError(5,0.6829283);
   hnumuCCinFV_stack_12->SetBinError(6,0.8408962);
   hnumuCCinFV_stack_12->SetBinError(7,1.322159);
   hnumuCCinFV_stack_12->SetBinError(8,0.7953843);
   hnumuCCinFV_stack_12->SetBinError(9,1.494898);
   hnumuCCinFV_stack_12->SetBinError(10,1.846839);
   hnumuCCinFV_stack_12->SetBinError(11,1.321276);
   hnumuCCinFV_stack_12->SetBinError(12,1.502948);
   hnumuCCinFV_stack_12->SetBinError(13,1.175157);
   hnumuCCinFV_stack_12->SetBinError(14,1.460284);
   hnumuCCinFV_stack_12->SetBinError(15,1.770259);
   hnumuCCinFV_stack_12->SetBinError(16,0.978501);
   hnumuCCinFV_stack_12->SetBinError(17,1.70102);
   hnumuCCinFV_stack_12->SetBinError(18,1.393399);
   hnumuCCinFV_stack_12->SetBinError(19,1.002113);
   hnumuCCinFV_stack_12->SetBinError(20,0.6694729);
   hnumuCCinFV_stack_12->SetBinError(21,1.121156);
   hnumuCCinFV_stack_12->SetBinError(22,0.8499128);
   hnumuCCinFV_stack_12->SetBinError(23,0.940447);
   hnumuCCinFV_stack_12->SetBinError(24,1.202918);
   hnumuCCinFV_stack_12->SetBinError(25,1.202768);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.5604295);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,1.569686);
   hnueCCinFV_stack_13->SetBinContent(6,0.3882911);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(14,0.4031327);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(23,1.390614);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.4141923);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,1.569686);
   hnueCCinFV_stack_13->SetBinError(6,0.2764757);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.4041031);
   hnueCCinFV_stack_13->SetBinError(14,0.2932406);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.2945335);
   hnueCCinFV_stack_13->SetBinError(23,1.180686);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__26->SetBinContent(1,34.42729);
   hmcerror__26->SetBinContent(2,28.69693);
   hmcerror__26->SetBinContent(3,27.24403);
   hmcerror__26->SetBinContent(4,22.64618);
   hmcerror__26->SetBinContent(5,20.59983);
   hmcerror__26->SetBinContent(6,25.86656);
   hmcerror__26->SetBinContent(7,29.59473);
   hmcerror__26->SetBinContent(8,25.36957);
   hmcerror__26->SetBinContent(9,22.03098);
   hmcerror__26->SetBinContent(10,25.38466);
   hmcerror__26->SetBinContent(11,23.91287);
   hmcerror__26->SetBinContent(12,25.01384);
   hmcerror__26->SetBinContent(13,27.20029);
   hmcerror__26->SetBinContent(14,31.07576);
   hmcerror__26->SetBinContent(15,34.37005);
   hmcerror__26->SetBinContent(16,27.36092);
   hmcerror__26->SetBinContent(17,25.87926);
   hmcerror__26->SetBinContent(18,25.68692);
   hmcerror__26->SetBinContent(19,28.19011);
   hmcerror__26->SetBinContent(20,21.86721);
   hmcerror__26->SetBinContent(21,23.60345);
   hmcerror__26->SetBinContent(22,26.55165);
   hmcerror__26->SetBinContent(23,26.20856);
   hmcerror__26->SetBinContent(24,26.87141);
   hmcerror__26->SetBinContent(25,24.93608);
   hmcerror__26->SetBinError(1,12.4227);
   hmcerror__26->SetBinError(2,14.96044);
   hmcerror__26->SetBinError(3,14.75078);
   hmcerror__26->SetBinError(4,22.18807);
   hmcerror__26->SetBinError(5,10.68125);
   hmcerror__26->SetBinError(6,11.26918);
   hmcerror__26->SetBinError(7,13.61514);
   hmcerror__26->SetBinError(8,13.88404);
   hmcerror__26->SetBinError(9,13.11588);
   hmcerror__26->SetBinError(10,14.36997);
   hmcerror__26->SetBinError(11,11.81359);
   hmcerror__26->SetBinError(12,12.25421);
   hmcerror__26->SetBinError(13,12.87786);
   hmcerror__26->SetBinError(14,15.64138);
   hmcerror__26->SetBinError(15,17.19372);
   hmcerror__26->SetBinError(16,17.28332);
   hmcerror__26->SetBinError(17,13.47192);
   hmcerror__26->SetBinError(18,17.67827);
   hmcerror__26->SetBinError(19,13.75227);
   hmcerror__26->SetBinError(20,10.43572);
   hmcerror__26->SetBinError(21,14.49069);
   hmcerror__26->SetBinError(22,14.00083);
   hmcerror__26->SetBinError(23,13.84081);
   hmcerror__26->SetBinError(24,13.8508);
   hmcerror__26->SetBinError(25,12.18825);
   hmcerror__26->SetBinError(26,0.3895343);
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
   
   Double_t _fx3033[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3033[25] = {
   32,
   30,
   14,
   27,
   22,
   26,
   21,
   18,
   21,
   25,
   35,
   17,
   32,
   30,
   24,
   27,
   21,
   19,
   28,
   17,
   17,
   14,
   14,
   28,
   26};
   Double_t _felx3033[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3033[25] = {
   5.7977,
   5.6197,
   3.9102,
   5.3414,
   4.8417,
   5.2453,
   4.7354,
   4.4008,
   4.7354,
   5.1474,
   6.0548,
   4.2835,
   5.7977,
   5.6197,
   5.0476,
   5.3414,
   4.7354,
   4.5151,
   5.4358,
   4.2835,
   4.2835,
   3.9102,
   3.9102,
   5.4358,
   5.2453};
   Double_t _fehx3033[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3033[25] = {
   5.5904,
   5.4117,
   3.6898,
   5.1322,
   4.6299,
   5.0358,
   4.5229,
   4.1858,
   4.5229,
   4.9374,
   5.8483,
   4.0673,
   5.5904,
   5.4117,
   4.837,
   5.1322,
   4.5229,
   4.3011,
   5.2271,
   4.0673,
   4.0673,
   3.6898,
   3.6898,
   5.2271,
   5.0358};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(7.01395);
   Graph_Graph3033->SetMaximum(43.92415);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.1/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_phi_all");
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
   
   Double_t _fx3034[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3034[25] = {
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
   1,
   1};
   Double_t _felx3034[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3034[25] = {
   0.3608388,
   0.5213253,
   0.5414316,
   0.9797708,
   0.5185115,
   0.4356659,
   0.460053,
   0.5472715,
   0.595338,
   0.5660889,
   0.4940265,
   0.4898971,
   0.4734456,
   0.5033306,
   0.500253,
   0.6316792,
   0.520568,
   0.6882208,
   0.48784,
   0.4772315,
   0.6139225,
   0.5273053,
   0.5281027,
   0.5154476,
   0.4887798};
   Double_t _fehx3034[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3034[25] = {
   0.3608388,
   0.5213253,
   0.5414316,
   0.9797708,
   0.5185115,
   0.4356659,
   0.460053,
   0.5472715,
   0.595338,
   0.5660889,
   0.4940265,
   0.4898971,
   0.4734456,
   0.5033306,
   0.500253,
   0.6316792,
   0.520568,
   0.6882208,
   0.48784,
   0.4772315,
   0.6139225,
   0.5273053,
   0.5281027,
   0.5154476,
   0.4887798};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
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
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3035[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3035[25] = {
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
   1,
   1};
   Double_t _felx3035[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3035[25] = {
   0.242024,
   0.2542164,
   0.2940681,
   0.2985166,
   0.2959809,
   0.243294,
   0.2359333,
   0.258248,
   0.2809405,
   0.2730216,
   0.2974545,
   0.29205,
   0.2854467,
   0.2252109,
   0.2525005,
   0.262844,
   0.2753095,
   0.2605097,
   0.2469108,
   0.2654811,
   0.2436239,
   0.2471717,
   0.301315,
   0.2823779,
   0.2807946};
   Double_t _fehx3035[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3035[25] = {
   0.242024,
   0.2542164,
   0.2940681,
   0.2985166,
   0.2959809,
   0.243294,
   0.2359333,
   0.258248,
   0.2809405,
   0.2730216,
   0.2974545,
   0.29205,
   0.2854467,
   0.2252109,
   0.2525005,
   0.262844,
   0.2753095,
   0.2605097,
   0.2469108,
   0.2654811,
   0.2436239,
   0.2471717,
   0.301315,
   0.2823779,
   0.2807946};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
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
   
   Double_t _fx3036[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3036[25] = {
   0.9294951,
   1.045408,
   0.5138741,
   1.192254,
   1.06797,
   1.005159,
   0.7095858,
   0.7095115,
   0.953203,
   0.9848467,
   1.463647,
   0.6796237,
   1.176458,
   0.9653827,
   0.6982824,
   0.9868091,
   0.8114605,
   0.7396761,
   0.993256,
   0.7774198,
   0.7202336,
   0.5272742,
   0.5341765,
   1.042,
   1.042666};
   Double_t _felx3036[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3036[25] = {
   0.1684042,
   0.1958293,
   0.143525,
   0.2358632,
   0.235036,
   0.2027831,
   0.1600082,
   0.1734677,
   0.2149427,
   0.202776,
   0.2532026,
   0.1712452,
   0.2131484,
   0.1808387,
   0.1468604,
   0.1952201,
   0.1829805,
   0.1757743,
   0.1928265,
   0.1958869,
   0.1814777,
   0.1472677,
   0.1491955,
   0.2022893,
   0.2103498};
   Double_t _fehx3036[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3036[25] = {
   0.1623828,
   0.1885811,
   0.1354352,
   0.2266254,
   0.2247543,
   0.1946838,
   0.1528279,
   0.164993,
   0.2052972,
   0.1945033,
   0.2445671,
   0.162602,
   0.2055272,
   0.1741454,
   0.140733,
   0.1875741,
   0.1747693,
   0.1674432,
   0.1854232,
   0.186,
   0.172318,
   0.1389669,
   0.140786,
   0.1945227,
   0.2019483};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.2365625);
   Graph_Graph3036->SetMaximum(1.842001);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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

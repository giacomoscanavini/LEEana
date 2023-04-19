#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Mar 13 23:40:10 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-187.88,293.3333,20775.57);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__1->SetBinContent(0,679.501);
   hmc__1->SetBinContent(1,7037.644);
   hmc__1->SetBinContent(2,8010.727);
   hmc__1->SetBinContent(3,8275.209);
   hmc__1->SetBinContent(4,8368.274);
   hmc__1->SetBinContent(5,8456.639);
   hmc__1->SetBinContent(6,8580.741);
   hmc__1->SetBinContent(7,8636.507);
   hmc__1->SetBinContent(8,8716.86);
   hmc__1->SetBinContent(9,8737.285);
   hmc__1->SetBinContent(10,8883.297);
   hmc__1->SetBinContent(11,8844.619);
   hmc__1->SetBinContent(12,8967.179);
   hmc__1->SetBinContent(13,8874.228);
   hmc__1->SetBinContent(14,8785.17);
   hmc__1->SetBinContent(15,8923.653);
   hmc__1->SetBinContent(16,8911.676);
   hmc__1->SetBinContent(17,8905.095);
   hmc__1->SetBinContent(18,8804.58);
   hmc__1->SetBinContent(19,8918.348);
   hmc__1->SetBinContent(20,8785.407);
   hmc__1->SetBinContent(21,8731.526);
   hmc__1->SetBinContent(22,8720.047);
   hmc__1->SetBinContent(23,8712.529);
   hmc__1->SetBinContent(24,8322.527);
   hmc__1->SetBinContent(25,7841.202);
   hmc__1->SetBinContent(26,4206.841);
   hmc__1->SetBinContent(27,115.7969);
   hmc__1->SetBinError(0,16.04142);
   hmc__1->SetBinError(1,928.1792);
   hmc__1->SetBinError(2,1080.503);
   hmc__1->SetBinError(3,1130.182);
   hmc__1->SetBinError(4,1143.32);
   hmc__1->SetBinError(5,1131.092);
   hmc__1->SetBinError(6,1151.716);
   hmc__1->SetBinError(7,1164.9);
   hmc__1->SetBinError(8,1180.604);
   hmc__1->SetBinError(9,1168.07);
   hmc__1->SetBinError(10,1189.899);
   hmc__1->SetBinError(11,1174.199);
   hmc__1->SetBinError(12,1174.6);
   hmc__1->SetBinError(13,1148.67);
   hmc__1->SetBinError(14,1157.879);
   hmc__1->SetBinError(15,1188.931);
   hmc__1->SetBinError(16,1145.798);
   hmc__1->SetBinError(17,1141.262);
   hmc__1->SetBinError(18,1147.409);
   hmc__1->SetBinError(19,1201.466);
   hmc__1->SetBinError(20,1125.3);
   hmc__1->SetBinError(21,1167.64);
   hmc__1->SetBinError(22,1163.826);
   hmc__1->SetBinError(23,1185.639);
   hmc__1->SetBinError(24,1162.205);
   hmc__1->SetBinError(25,1197.258);
   hmc__1->SetBinError(26,717.2304);
   hmc__1->SetBinError(27,38.93545);
   hmc__1->SetMinimum(-187.88);
   hmc__1->SetMaximum(19727.4);
   hmc__1->SetEntries(195630.6);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,0,260);
   hs1_stack_1->SetMinimum(-3.571482e-09);
   hs1_stack_1->SetMaximum(9415.538);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,84.66603);
   hbadmatch_stack_1->SetBinContent(1,146.3283);
   hbadmatch_stack_1->SetBinContent(2,117.5164);
   hbadmatch_stack_1->SetBinContent(3,142.297);
   hbadmatch_stack_1->SetBinContent(4,138.7014);
   hbadmatch_stack_1->SetBinContent(5,154.2519);
   hbadmatch_stack_1->SetBinContent(6,178.5824);
   hbadmatch_stack_1->SetBinContent(7,189.9458);
   hbadmatch_stack_1->SetBinContent(8,221.0322);
   hbadmatch_stack_1->SetBinContent(9,231.8951);
   hbadmatch_stack_1->SetBinContent(10,246.9961);
   hbadmatch_stack_1->SetBinContent(11,254.4567);
   hbadmatch_stack_1->SetBinContent(12,280.6026);
   hbadmatch_stack_1->SetBinContent(13,281.9619);
   hbadmatch_stack_1->SetBinContent(14,294.4106);
   hbadmatch_stack_1->SetBinContent(15,292.1883);
   hbadmatch_stack_1->SetBinContent(16,317.202);
   hbadmatch_stack_1->SetBinContent(17,302.4082);
   hbadmatch_stack_1->SetBinContent(18,309.24);
   hbadmatch_stack_1->SetBinContent(19,318.9242);
   hbadmatch_stack_1->SetBinContent(20,317.3712);
   hbadmatch_stack_1->SetBinContent(21,276.987);
   hbadmatch_stack_1->SetBinContent(22,278.42);
   hbadmatch_stack_1->SetBinContent(23,263.4947);
   hbadmatch_stack_1->SetBinContent(24,256.3328);
   hbadmatch_stack_1->SetBinContent(25,234.5248);
   hbadmatch_stack_1->SetBinContent(26,176.5624);
   hbadmatch_stack_1->SetBinContent(27,10.81798);
   hbadmatch_stack_1->SetBinError(0,5.557435);
   hbadmatch_stack_1->SetBinError(1,8.367558);
   hbadmatch_stack_1->SetBinError(2,7.219081);
   hbadmatch_stack_1->SetBinError(3,7.228064);
   hbadmatch_stack_1->SetBinError(4,7.268507);
   hbadmatch_stack_1->SetBinError(5,8.379034);
   hbadmatch_stack_1->SetBinError(6,8.419448);
   hbadmatch_stack_1->SetBinError(7,8.375978);
   hbadmatch_stack_1->SetBinError(8,10.43326);
   hbadmatch_stack_1->SetBinError(9,9.535596);
   hbadmatch_stack_1->SetBinError(10,9.496469);
   hbadmatch_stack_1->SetBinError(11,10.93937);
   hbadmatch_stack_1->SetBinError(12,11.18617);
   hbadmatch_stack_1->SetBinError(13,9.903481);
   hbadmatch_stack_1->SetBinError(14,10.8872);
   hbadmatch_stack_1->SetBinError(15,10.77496);
   hbadmatch_stack_1->SetBinError(16,14.04837);
   hbadmatch_stack_1->SetBinError(17,10.53969);
   hbadmatch_stack_1->SetBinError(18,11.14017);
   hbadmatch_stack_1->SetBinError(19,12.52705);
   hbadmatch_stack_1->SetBinError(20,11.65587);
   hbadmatch_stack_1->SetBinError(21,10.47868);
   hbadmatch_stack_1->SetBinError(22,10.09035);
   hbadmatch_stack_1->SetBinError(23,10.94296);
   hbadmatch_stack_1->SetBinError(24,10.30438);
   hbadmatch_stack_1->SetBinError(25,9.850785);
   hbadmatch_stack_1->SetBinError(26,9.144115);
   hbadmatch_stack_1->SetBinError(27,1.838676);
   hbadmatch_stack_1->SetEntries(23972);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,268.9777);
   hext_stack_2->SetBinContent(1,1101.478);
   hext_stack_2->SetBinContent(2,891.5836);
   hext_stack_2->SetBinContent(3,883.1481);
   hext_stack_2->SetBinContent(4,889.5605);
   hext_stack_2->SetBinContent(5,921.2245);
   hext_stack_2->SetBinContent(6,934.6005);
   hext_stack_2->SetBinContent(7,961.4546);
   hext_stack_2->SetBinContent(8,947.6337);
   hext_stack_2->SetBinContent(9,962.8952);
   hext_stack_2->SetBinContent(10,1011.375);
   hext_stack_2->SetBinContent(11,1050.185);
   hext_stack_2->SetBinContent(12,1076.865);
   hext_stack_2->SetBinContent(13,1065.596);
   hext_stack_2->SetBinContent(14,1065.934);
   hext_stack_2->SetBinContent(15,1097.286);
   hext_stack_2->SetBinContent(16,1130.934);
   hext_stack_2->SetBinContent(17,1149.162);
   hext_stack_2->SetBinContent(18,1097.54);
   hext_stack_2->SetBinContent(19,1064.972);
   hext_stack_2->SetBinContent(20,1115.117);
   hext_stack_2->SetBinContent(21,1068.125);
   hext_stack_2->SetBinContent(22,1054.866);
   hext_stack_2->SetBinContent(23,1072.414);
   hext_stack_2->SetBinContent(24,1024.101);
   hext_stack_2->SetBinContent(25,935.7175);
   hext_stack_2->SetBinContent(26,745.2744);
   hext_stack_2->SetBinContent(27,43.30629);
   hext_stack_2->SetBinError(0,10.14643);
   hext_stack_2->SetBinError(1,21.88239);
   hext_stack_2->SetBinError(2,19.57452);
   hext_stack_2->SetBinError(3,19.5252);
   hext_stack_2->SetBinError(4,19.53965);
   hext_stack_2->SetBinError(5,19.87013);
   hext_stack_2->SetBinError(6,19.93266);
   hext_stack_2->SetBinError(7,20.29646);
   hext_stack_2->SetBinError(8,20.0486);
   hext_stack_2->SetBinError(9,20.22621);
   hext_stack_2->SetBinError(10,20.78465);
   hext_stack_2->SetBinError(11,21.07591);
   hext_stack_2->SetBinError(12,21.36787);
   hext_stack_2->SetBinError(13,21.25844);
   hext_stack_2->SetBinError(14,21.1752);
   hext_stack_2->SetBinError(15,21.58139);
   hext_stack_2->SetBinError(16,21.85402);
   hext_stack_2->SetBinError(17,22.19364);
   hext_stack_2->SetBinError(18,21.42742);
   hext_stack_2->SetBinError(19,21.1988);
   hext_stack_2->SetBinError(20,21.80594);
   hext_stack_2->SetBinError(21,21.44943);
   hext_stack_2->SetBinError(22,21.27923);
   hext_stack_2->SetBinError(23,21.55701);
   hext_stack_2->SetBinError(24,20.96982);
   hext_stack_2->SetBinError(25,20.02271);
   hext_stack_2->SetBinError(26,17.88088);
   hext_stack_2->SetBinError(27,4.375979);
   hext_stack_2->SetEntries(66604);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,31.66004);
   hdirt_stack_3->SetBinContent(1,528.1176);
   hdirt_stack_3->SetBinContent(2,221.0823);
   hdirt_stack_3->SetBinContent(3,210.9232);
   hdirt_stack_3->SetBinContent(4,211.1187);
   hdirt_stack_3->SetBinContent(5,207.4557);
   hdirt_stack_3->SetBinContent(6,211.3145);
   hdirt_stack_3->SetBinContent(7,212.6686);
   hdirt_stack_3->SetBinContent(8,245.1028);
   hdirt_stack_3->SetBinContent(9,227.0951);
   hdirt_stack_3->SetBinContent(10,244.75);
   hdirt_stack_3->SetBinContent(11,247.0946);
   hdirt_stack_3->SetBinContent(12,258.1884);
   hdirt_stack_3->SetBinContent(13,255.7275);
   hdirt_stack_3->SetBinContent(14,260.3679);
   hdirt_stack_3->SetBinContent(15,274.3169);
   hdirt_stack_3->SetBinContent(16,271.4119);
   hdirt_stack_3->SetBinContent(17,263.803);
   hdirt_stack_3->SetBinContent(18,286.449);
   hdirt_stack_3->SetBinContent(19,266.6218);
   hdirt_stack_3->SetBinContent(20,283.6344);
   hdirt_stack_3->SetBinContent(21,303.3653);
   hdirt_stack_3->SetBinContent(22,265.1915);
   hdirt_stack_3->SetBinContent(23,297.9088);
   hdirt_stack_3->SetBinContent(24,259.4872);
   hdirt_stack_3->SetBinContent(25,278.9398);
   hdirt_stack_3->SetBinContent(26,423.2306);
   hdirt_stack_3->SetBinContent(27,11.78087);
   hdirt_stack_3->SetBinError(0,3.44687);
   hdirt_stack_3->SetBinError(1,14.47628);
   hdirt_stack_3->SetBinError(2,9.423887);
   hdirt_stack_3->SetBinError(3,9.333982);
   hdirt_stack_3->SetBinError(4,9.309717);
   hdirt_stack_3->SetBinError(5,8.950314);
   hdirt_stack_3->SetBinError(6,8.452736);
   hdirt_stack_3->SetBinError(7,9.179877);
   hdirt_stack_3->SetBinError(8,10.25009);
   hdirt_stack_3->SetBinError(9,9.1629);
   hdirt_stack_3->SetBinError(10,10.264);
   hdirt_stack_3->SetBinError(11,10.50449);
   hdirt_stack_3->SetBinError(12,9.910845);
   hdirt_stack_3->SetBinError(13,9.70843);
   hdirt_stack_3->SetBinError(14,10.20158);
   hdirt_stack_3->SetBinError(15,10.8294);
   hdirt_stack_3->SetBinError(16,11.07781);
   hdirt_stack_3->SetBinError(17,9.664006);
   hdirt_stack_3->SetBinError(18,11.45764);
   hdirt_stack_3->SetBinError(19,10.46146);
   hdirt_stack_3->SetBinError(20,10.65414);
   hdirt_stack_3->SetBinError(21,10.82476);
   hdirt_stack_3->SetBinError(22,9.824372);
   hdirt_stack_3->SetBinError(23,10.42236);
   hdirt_stack_3->SetBinError(24,9.742617);
   hdirt_stack_3->SetBinError(25,11.08139);
   hdirt_stack_3->SetBinError(26,14.49422);
   hdirt_stack_3->SetBinError(27,2.177941);
   hdirt_stack_3->SetEntries(28480);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,63.44261);
   houtFV_stack_4->SetBinContent(1,1910.332);
   houtFV_stack_4->SetBinContent(2,446.2946);
   houtFV_stack_4->SetBinContent(3,415.0042);
   houtFV_stack_4->SetBinContent(4,358.7382);
   houtFV_stack_4->SetBinContent(5,387.8868);
   houtFV_stack_4->SetBinContent(6,399.5646);
   houtFV_stack_4->SetBinContent(7,389.97);
   houtFV_stack_4->SetBinContent(8,366.9459);
   houtFV_stack_4->SetBinContent(9,371.2871);
   houtFV_stack_4->SetBinContent(10,360.0823);
   houtFV_stack_4->SetBinContent(11,372.029);
   houtFV_stack_4->SetBinContent(12,364.1311);
   houtFV_stack_4->SetBinContent(13,355.4397);
   houtFV_stack_4->SetBinContent(14,372.0294);
   houtFV_stack_4->SetBinContent(15,358.4705);
   houtFV_stack_4->SetBinContent(16,363.2385);
   houtFV_stack_4->SetBinContent(17,360.5891);
   houtFV_stack_4->SetBinContent(18,375.814);
   houtFV_stack_4->SetBinContent(19,354.0451);
   houtFV_stack_4->SetBinContent(20,364.0131);
   houtFV_stack_4->SetBinContent(21,341.5533);
   houtFV_stack_4->SetBinContent(22,372.7754);
   houtFV_stack_4->SetBinContent(23,389.8968);
   houtFV_stack_4->SetBinContent(24,421.765);
   houtFV_stack_4->SetBinContent(25,514.4143);
   houtFV_stack_4->SetBinContent(26,1052.374);
   houtFV_stack_4->SetBinContent(27,27.51376);
   houtFV_stack_4->SetBinError(0,4.226075);
   houtFV_stack_4->SetBinError(1,27.18222);
   houtFV_stack_4->SetBinError(2,12.19347);
   houtFV_stack_4->SetBinError(3,11.71637);
   houtFV_stack_4->SetBinError(4,10.2235);
   houtFV_stack_4->SetBinError(5,11.69363);
   houtFV_stack_4->SetBinError(6,11.67926);
   houtFV_stack_4->SetBinError(7,12.11307);
   houtFV_stack_4->SetBinError(8,10.981);
   houtFV_stack_4->SetBinError(9,11.08477);
   houtFV_stack_4->SetBinError(10,11.58248);
   houtFV_stack_4->SetBinError(11,10.59627);
   houtFV_stack_4->SetBinError(12,11.18092);
   houtFV_stack_4->SetBinError(13,11.50999);
   houtFV_stack_4->SetBinError(14,11.07288);
   houtFV_stack_4->SetBinError(15,11.33283);
   houtFV_stack_4->SetBinError(16,11.95948);
   houtFV_stack_4->SetBinError(17,11.43353);
   houtFV_stack_4->SetBinError(18,12.5453);
   houtFV_stack_4->SetBinError(19,10.85992);
   houtFV_stack_4->SetBinError(20,11.25182);
   houtFV_stack_4->SetBinError(21,10.54189);
   houtFV_stack_4->SetBinError(22,11.21978);
   houtFV_stack_4->SetBinError(23,11.25565);
   houtFV_stack_4->SetBinError(24,11.03467);
   houtFV_stack_4->SetBinError(25,13.18085);
   houtFV_stack_4->SetBinError(26,19.75747);
   houtFV_stack_4->SetBinError(27,2.626068);
   houtFV_stack_4->SetEntries(48988);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.8228858);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.191738);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.726012);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.961998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.663972);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.999108);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.637984);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.456213);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.623286);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.498405);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.675181);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.814525);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.233013);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,7.739631);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.374098);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.692535);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,7.39154);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,8.897316);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,8.704176);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,7.430394);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,7.957669);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,8.521662);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,7.360312);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,6.457213);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,9.00742);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,6.400254);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,1.883926);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2499367);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5719549);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9556263);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9525325);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.817204);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8617895);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8841925);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7716823);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8241205);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8569966);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7787535);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.011369);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7676368);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9593525);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8870859);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8093874);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.9082236);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9960755);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9894434);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8615257);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8821725);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9805196);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.8643072);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8046854);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.9947394);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8400632);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.5058087);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(3360);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4184998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.685794);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.716358);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.21723);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.993694);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.190826);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.244962);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.372012);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.565816);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.176376);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.700244);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.395336);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.704484);
   hNCpi0inFVqe_stack_6->SetBinContent(14,2.00648);
   hNCpi0inFVqe_stack_6->SetBinContent(15,2.496398);
   hNCpi0inFVqe_stack_6->SetBinContent(16,2.579266);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.924444);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.328662);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.826958);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.007312);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.896376);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.984316);
   hNCpi0inFVqe_stack_6->SetBinContent(23,2.413362);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.715526);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.56224);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.432286);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1080562);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3564789);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4673469);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.509323);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.433203);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5142032);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4768956);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5558506);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5555585);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4878557);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3917639);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3231691);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.5415451);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.418968);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.5476796);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.5319981);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.4601427);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4793377);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4117058);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4413619);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.4221303);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.5659695);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.5330337);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.4462588);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3941578);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.2270916);
   hNCpi0inFVqe_stack_6->SetEntries(986);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,21.19448);
   hNCpi0inFVres_stack_7->SetBinContent(1,90.6923);
   hNCpi0inFVres_stack_7->SetBinContent(2,176.9895);
   hNCpi0inFVres_stack_7->SetBinContent(3,198.4435);
   hNCpi0inFVres_stack_7->SetBinContent(4,203.3328);
   hNCpi0inFVres_stack_7->SetBinContent(5,216.2436);
   hNCpi0inFVres_stack_7->SetBinContent(6,217.9186);
   hNCpi0inFVres_stack_7->SetBinContent(7,210.7928);
   hNCpi0inFVres_stack_7->SetBinContent(8,234.4286);
   hNCpi0inFVres_stack_7->SetBinContent(9,225.4054);
   hNCpi0inFVres_stack_7->SetBinContent(10,215.843);
   hNCpi0inFVres_stack_7->SetBinContent(11,228.8392);
   hNCpi0inFVres_stack_7->SetBinContent(12,227.6771);
   hNCpi0inFVres_stack_7->SetBinContent(13,217.8349);
   hNCpi0inFVres_stack_7->SetBinContent(14,228.3659);
   hNCpi0inFVres_stack_7->SetBinContent(15,225.1245);
   hNCpi0inFVres_stack_7->SetBinContent(16,232.0504);
   hNCpi0inFVres_stack_7->SetBinContent(17,233.7913);
   hNCpi0inFVres_stack_7->SetBinContent(18,221.403);
   hNCpi0inFVres_stack_7->SetBinContent(19,224.2694);
   hNCpi0inFVres_stack_7->SetBinContent(20,220.2768);
   hNCpi0inFVres_stack_7->SetBinContent(21,235.4818);
   hNCpi0inFVres_stack_7->SetBinContent(22,228.7299);
   hNCpi0inFVres_stack_7->SetBinContent(23,218.2573);
   hNCpi0inFVres_stack_7->SetBinContent(24,210.9719);
   hNCpi0inFVres_stack_7->SetBinContent(25,181.3055);
   hNCpi0inFVres_stack_7->SetBinContent(26,66.42717);
   hNCpi0inFVres_stack_7->SetBinContent(27,2.231176);
   hNCpi0inFVres_stack_7->SetBinError(0,1.150756);
   hNCpi0inFVres_stack_7->SetBinError(1,3.099628);
   hNCpi0inFVres_stack_7->SetBinError(2,4.30438);
   hNCpi0inFVres_stack_7->SetBinError(3,4.584587);
   hNCpi0inFVres_stack_7->SetBinError(4,4.62065);
   hNCpi0inFVres_stack_7->SetBinError(5,4.804267);
   hNCpi0inFVres_stack_7->SetBinError(6,4.814531);
   hNCpi0inFVres_stack_7->SetBinError(7,4.728793);
   hNCpi0inFVres_stack_7->SetBinError(8,5.030027);
   hNCpi0inFVres_stack_7->SetBinError(9,4.913538);
   hNCpi0inFVres_stack_7->SetBinError(10,4.817841);
   hNCpi0inFVres_stack_7->SetBinError(11,4.968693);
   hNCpi0inFVres_stack_7->SetBinError(12,4.916106);
   hNCpi0inFVres_stack_7->SetBinError(13,4.760904);
   hNCpi0inFVres_stack_7->SetBinError(14,4.987106);
   hNCpi0inFVres_stack_7->SetBinError(15,4.92794);
   hNCpi0inFVres_stack_7->SetBinError(16,5.018141);
   hNCpi0inFVres_stack_7->SetBinError(17,5.007699);
   hNCpi0inFVres_stack_7->SetBinError(18,4.835001);
   hNCpi0inFVres_stack_7->SetBinError(19,4.910906);
   hNCpi0inFVres_stack_7->SetBinError(20,4.804388);
   hNCpi0inFVres_stack_7->SetBinError(21,5.083319);
   hNCpi0inFVres_stack_7->SetBinError(22,4.989863);
   hNCpi0inFVres_stack_7->SetBinError(23,4.833673);
   hNCpi0inFVres_stack_7->SetBinError(24,4.7406);
   hNCpi0inFVres_stack_7->SetBinError(25,4.46688);
   hNCpi0inFVres_stack_7->SetBinError(26,2.652212);
   hNCpi0inFVres_stack_7->SetBinError(27,0.433053);
   hNCpi0inFVres_stack_7->SetEntries(100358);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,4.659475);
   hNCpi0inFVdis_stack_8->SetBinContent(1,30.19623);
   hNCpi0inFVdis_stack_8->SetBinContent(2,53.11552);
   hNCpi0inFVdis_stack_8->SetBinContent(3,54.65316);
   hNCpi0inFVdis_stack_8->SetBinContent(4,60.51685);
   hNCpi0inFVdis_stack_8->SetBinContent(5,56.04599);
   hNCpi0inFVdis_stack_8->SetBinContent(6,59.08664);
   hNCpi0inFVdis_stack_8->SetBinContent(7,55.17445);
   hNCpi0inFVdis_stack_8->SetBinContent(8,59.25021);
   hNCpi0inFVdis_stack_8->SetBinContent(9,58.5477);
   hNCpi0inFVdis_stack_8->SetBinContent(10,58.43845);
   hNCpi0inFVdis_stack_8->SetBinContent(11,60.06678);
   hNCpi0inFVdis_stack_8->SetBinContent(12,59.2839);
   hNCpi0inFVdis_stack_8->SetBinContent(13,61.62233);
   hNCpi0inFVdis_stack_8->SetBinContent(14,61.53701);
   hNCpi0inFVdis_stack_8->SetBinContent(15,58.79798);
   hNCpi0inFVdis_stack_8->SetBinContent(16,60.83453);
   hNCpi0inFVdis_stack_8->SetBinContent(17,55.64626);
   hNCpi0inFVdis_stack_8->SetBinContent(18,60.3898);
   hNCpi0inFVdis_stack_8->SetBinContent(19,60.04712);
   hNCpi0inFVdis_stack_8->SetBinContent(20,58.96423);
   hNCpi0inFVdis_stack_8->SetBinContent(21,63.03898);
   hNCpi0inFVdis_stack_8->SetBinContent(22,59.77036);
   hNCpi0inFVdis_stack_8->SetBinContent(23,62.51305);
   hNCpi0inFVdis_stack_8->SetBinContent(24,56.42879);
   hNCpi0inFVdis_stack_8->SetBinContent(25,50.55566);
   hNCpi0inFVdis_stack_8->SetBinContent(26,19.35454);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.3763178);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.5543299);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.826667);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.437376);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.409524);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.568553);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.389125);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.548473);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.367962);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.514765);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.428977);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.49217);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.538194);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.468409);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.566563);
   hNCpi0inFVdis_stack_8->SetBinError(14,2.558773);
   hNCpi0inFVdis_stack_8->SetBinError(15,2.485302);
   hNCpi0inFVdis_stack_8->SetBinError(16,2.518992);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.388976);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.552631);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.580652);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.498228);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.600267);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.544461);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.64338);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.417963);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.299698);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.454185);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1313578);
   hNCpi0inFVdis_stack_8->SetEntries(27026);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(66);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,20.55304);
   hCCpi0inFV_stack_10->SetBinContent(1,293.4385);
   hCCpi0inFV_stack_10->SetBinContent(2,549.9592);
   hCCpi0inFV_stack_10->SetBinContent(3,582.156);
   hCCpi0inFV_stack_10->SetBinContent(4,598.2918);
   hCCpi0inFV_stack_10->SetBinContent(5,573.9709);
   hCCpi0inFV_stack_10->SetBinContent(6,585.3039);
   hCCpi0inFV_stack_10->SetBinContent(7,587.3696);
   hCCpi0inFV_stack_10->SetBinContent(8,609.0305);
   hCCpi0inFV_stack_10->SetBinContent(9,596.1185);
   hCCpi0inFV_stack_10->SetBinContent(10,622.6565);
   hCCpi0inFV_stack_10->SetBinContent(11,592.4963);
   hCCpi0inFV_stack_10->SetBinContent(12,604.0824);
   hCCpi0inFV_stack_10->SetBinContent(13,601.455);
   hCCpi0inFV_stack_10->SetBinContent(14,596.9697);
   hCCpi0inFV_stack_10->SetBinContent(15,600.1551);
   hCCpi0inFV_stack_10->SetBinContent(16,601.641);
   hCCpi0inFV_stack_10->SetBinContent(17,607.382);
   hCCpi0inFV_stack_10->SetBinContent(18,614.6414);
   hCCpi0inFV_stack_10->SetBinContent(19,577.4456);
   hCCpi0inFV_stack_10->SetBinContent(20,600.5702);
   hCCpi0inFV_stack_10->SetBinContent(21,587.6708);
   hCCpi0inFV_stack_10->SetBinContent(22,589.5228);
   hCCpi0inFV_stack_10->SetBinContent(23,592.8256);
   hCCpi0inFV_stack_10->SetBinContent(24,582.4161);
   hCCpi0inFV_stack_10->SetBinContent(25,536.8638);
   hCCpi0inFV_stack_10->SetBinContent(26,190.7393);
   hCCpi0inFV_stack_10->SetBinContent(27,2.539312);
   hCCpi0inFV_stack_10->SetBinError(0,2.357783);
   hCCpi0inFV_stack_10->SetBinError(1,8.54924);
   hCCpi0inFV_stack_10->SetBinError(2,11.71754);
   hCCpi0inFV_stack_10->SetBinError(3,12.1476);
   hCCpi0inFV_stack_10->SetBinError(4,12.30756);
   hCCpi0inFV_stack_10->SetBinError(5,12.03479);
   hCCpi0inFV_stack_10->SetBinError(6,12.05813);
   hCCpi0inFV_stack_10->SetBinError(7,12.17858);
   hCCpi0inFV_stack_10->SetBinError(8,12.38738);
   hCCpi0inFV_stack_10->SetBinError(9,12.24066);
   hCCpi0inFV_stack_10->SetBinError(10,12.52914);
   hCCpi0inFV_stack_10->SetBinError(11,12.2456);
   hCCpi0inFV_stack_10->SetBinError(12,12.33409);
   hCCpi0inFV_stack_10->SetBinError(13,12.34349);
   hCCpi0inFV_stack_10->SetBinError(14,12.46239);
   hCCpi0inFV_stack_10->SetBinError(15,12.33287);
   hCCpi0inFV_stack_10->SetBinError(16,12.28985);
   hCCpi0inFV_stack_10->SetBinError(17,12.3916);
   hCCpi0inFV_stack_10->SetBinError(18,12.49231);
   hCCpi0inFV_stack_10->SetBinError(19,12.01138);
   hCCpi0inFV_stack_10->SetBinError(20,12.29958);
   hCCpi0inFV_stack_10->SetBinError(21,12.14678);
   hCCpi0inFV_stack_10->SetBinError(22,12.26763);
   hCCpi0inFV_stack_10->SetBinError(23,12.19844);
   hCCpi0inFV_stack_10->SetBinError(24,12.1136);
   hCCpi0inFV_stack_10->SetBinError(25,11.65095);
   hCCpi0inFV_stack_10->SetBinError(26,6.921157);
   hCCpi0inFV_stack_10->SetBinError(27,0.8333082);
   hCCpi0inFV_stack_10->SetEntries(62846);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,24.41491);
   hNCinFV_stack_11->SetBinContent(1,264.505);
   hNCinFV_stack_11->SetBinContent(2,538.4048);
   hNCinFV_stack_11->SetBinContent(3,560.0857);
   hNCinFV_stack_11->SetBinContent(4,561.9995);
   hNCinFV_stack_11->SetBinContent(5,561.3672);
   hNCinFV_stack_11->SetBinContent(6,572.3897);
   hNCinFV_stack_11->SetBinContent(7,570.941);
   hNCinFV_stack_11->SetBinContent(8,583.5925);
   hNCinFV_stack_11->SetBinContent(9,587.6055);
   hNCinFV_stack_11->SetBinContent(10,575.1099);
   hNCinFV_stack_11->SetBinContent(11,598.8853);
   hNCinFV_stack_11->SetBinContent(12,577.5991);
   hNCinFV_stack_11->SetBinContent(13,601.5863);
   hNCinFV_stack_11->SetBinContent(14,561.1514);
   hNCinFV_stack_11->SetBinContent(15,569.4036);
   hNCinFV_stack_11->SetBinContent(16,558.6307);
   hNCinFV_stack_11->SetBinContent(17,584.1337);
   hNCinFV_stack_11->SetBinContent(18,580.6144);
   hNCinFV_stack_11->SetBinContent(19,585.7313);
   hNCinFV_stack_11->SetBinContent(20,567.7986);
   hNCinFV_stack_11->SetBinContent(21,556.8212);
   hNCinFV_stack_11->SetBinContent(22,538.0339);
   hNCinFV_stack_11->SetBinContent(23,563.7028);
   hNCinFV_stack_11->SetBinContent(24,542.3468);
   hNCinFV_stack_11->SetBinContent(25,440.9247);
   hNCinFV_stack_11->SetBinContent(26,138.3888);
   hNCinFV_stack_11->SetBinContent(27,2.784209);
   hNCinFV_stack_11->SetBinError(0,2.503913);
   hNCinFV_stack_11->SetBinError(1,8.166193);
   hNCinFV_stack_11->SetBinError(2,11.64616);
   hNCinFV_stack_11->SetBinError(3,11.80401);
   hNCinFV_stack_11->SetBinError(4,11.86638);
   hNCinFV_stack_11->SetBinError(5,11.89446);
   hNCinFV_stack_11->SetBinError(6,11.98258);
   hNCinFV_stack_11->SetBinError(7,11.98878);
   hNCinFV_stack_11->SetBinError(8,12.08039);
   hNCinFV_stack_11->SetBinError(9,12.21368);
   hNCinFV_stack_11->SetBinError(10,12.03765);
   hNCinFV_stack_11->SetBinError(11,12.32848);
   hNCinFV_stack_11->SetBinError(12,12.01539);
   hNCinFV_stack_11->SetBinError(13,12.31196);
   hNCinFV_stack_11->SetBinError(14,11.97595);
   hNCinFV_stack_11->SetBinError(15,12.00029);
   hNCinFV_stack_11->SetBinError(16,11.80482);
   hNCinFV_stack_11->SetBinError(17,12.15334);
   hNCinFV_stack_11->SetBinError(18,12.07118);
   hNCinFV_stack_11->SetBinError(19,12.17705);
   hNCinFV_stack_11->SetBinError(20,11.9217);
   hNCinFV_stack_11->SetBinError(21,11.87886);
   hNCinFV_stack_11->SetBinError(22,11.55097);
   hNCinFV_stack_11->SetBinError(23,11.84578);
   hNCinFV_stack_11->SetBinError(24,11.6318);
   hNCinFV_stack_11->SetBinError(25,10.50544);
   hNCinFV_stack_11->SetBinError(26,5.835518);
   hNCinFV_stack_11->SetBinError(27,0.8323376);
   hNCinFV_stack_11->SetEntries(59719);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(0,158.1851);
   hnumuCCinFV_stack_12->SetBinContent(1,2643.512);
   hnumuCCinFV_stack_12->SetBinContent(2,4968.187);
   hnumuCCinFV_stack_12->SetBinContent(3,5175.474);
   hnumuCCinFV_stack_12->SetBinContent(4,5290.019);
   hnumuCCinFV_stack_12->SetBinContent(5,5331.521);
   hnumuCCinFV_stack_12->SetBinContent(6,5365.273);
   hnumuCCinFV_stack_12->SetBinContent(7,5408.426);
   hnumuCCinFV_stack_12->SetBinContent(8,5393.199);
   hnumuCCinFV_stack_12->SetBinContent(9,5424.026);
   hnumuCCinFV_stack_12->SetBinContent(10,5494.171);
   hnumuCCinFV_stack_12->SetBinContent(11,5386.118);
   hnumuCCinFV_stack_12->SetBinContent(12,5472.49);
   hnumuCCinFV_stack_12->SetBinContent(13,5375.561);
   hnumuCCinFV_stack_12->SetBinContent(14,5302.024);
   hnumuCCinFV_stack_12->SetBinContent(15,5392.021);
   hnumuCCinFV_stack_12->SetBinContent(16,5327.235);
   hnumuCCinFV_stack_12->SetBinContent(17,5293.401);
   hnumuCCinFV_stack_12->SetBinContent(18,5209.949);
   hnumuCCinFV_stack_12->SetBinContent(19,5410.727);
   hnumuCCinFV_stack_12->SetBinContent(20,5206.208);
   hnumuCCinFV_stack_12->SetBinContent(21,5251.825);
   hnumuCCinFV_stack_12->SetBinContent(22,5282.083);
   hnumuCCinFV_stack_12->SetBinContent(23,5198.005);
   hnumuCCinFV_stack_12->SetBinContent(24,4922.792);
   hnumuCCinFV_stack_12->SetBinContent(25,4612.933);
   hnumuCCinFV_stack_12->SetBinContent(26,1376.765);
   hnumuCCinFV_stack_12->SetBinContent(27,14.39116);
   hnumuCCinFV_stack_12->SetBinError(0,8.940768);
   hnumuCCinFV_stack_12->SetBinError(1,36.63825);
   hnumuCCinFV_stack_12->SetBinError(2,49.2238);
   hnumuCCinFV_stack_12->SetBinError(3,51.40038);
   hnumuCCinFV_stack_12->SetBinError(4,51.80383);
   hnumuCCinFV_stack_12->SetBinError(5,51.75626);
   hnumuCCinFV_stack_12->SetBinError(6,51.96517);
   hnumuCCinFV_stack_12->SetBinError(7,51.98667);
   hnumuCCinFV_stack_12->SetBinError(8,52.50204);
   hnumuCCinFV_stack_12->SetBinError(9,51.48606);
   hnumuCCinFV_stack_12->SetBinError(10,52.37858);
   hnumuCCinFV_stack_12->SetBinError(11,51.3003);
   hnumuCCinFV_stack_12->SetBinError(12,51.80289);
   hnumuCCinFV_stack_12->SetBinError(13,51.88155);
   hnumuCCinFV_stack_12->SetBinError(14,51.57106);
   hnumuCCinFV_stack_12->SetBinError(15,52.27494);
   hnumuCCinFV_stack_12->SetBinError(16,50.43883);
   hnumuCCinFV_stack_12->SetBinError(17,50.2644);
   hnumuCCinFV_stack_12->SetBinError(18,51.44461);
   hnumuCCinFV_stack_12->SetBinError(19,51.59631);
   hnumuCCinFV_stack_12->SetBinError(20,49.6964);
   hnumuCCinFV_stack_12->SetBinError(21,50.80734);
   hnumuCCinFV_stack_12->SetBinError(22,51.22809);
   hnumuCCinFV_stack_12->SetBinError(23,50.38433);
   hnumuCCinFV_stack_12->SetBinError(24,49.37511);
   hnumuCCinFV_stack_12->SetBinError(25,48.66791);
   hnumuCCinFV_stack_12->SetBinError(26,26.48519);
   hnumuCCinFV_stack_12->SetBinError(27,2.305959);
   hnumuCCinFV_stack_12->SetEntries(466222);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(0,0.7573288);
   hnueCCinFV_stack_13->SetBinContent(1,25.23803);
   hnueCCinFV_stack_13->SetBinContent(2,38.07145);
   hnueCCinFV_stack_13->SetBinContent(3,43.26277);
   hnueCCinFV_stack_13->SetBinContent(4,46.9894);
   hnueCCinFV_stack_13->SetBinContent(5,37.59418);
   hnueCCinFV_stack_13->SetBinContent(6,46.85008);
   hnueCCinFV_stack_13->SetBinContent(7,41.00749);
   hnueCCinFV_stack_13->SetBinContent(8,47.59287);
   hnueCCinFV_stack_13->SetBinContent(9,43.28941);
   hnueCCinFV_stack_13->SetBinContent(10,45.84309);
   hnueCCinFV_stack_13->SetBinContent(11,43.68226);
   hnueCCinFV_stack_13->SetBinContent(12,38.57487);
   hnueCCinFV_stack_13->SetBinContent(13,46.91579);
   hnueCCinFV_stack_13->SetBinContent(14,32.94331);
   hnueCCinFV_stack_13->SetBinContent(15,46.61702);
   hnueCCinFV_stack_13->SetBinContent(16,38.52868);
   hnueCCinFV_stack_13->SetBinContent(17,43.73327);
   hnueCCinFV_stack_13->SetBinContent(18,37.36652);
   hnueCCinFV_stack_13->SetBinContent(19,46.15429);
   hnueCCinFV_stack_13->SetBinContent(20,41.37662);
   hnueCCinFV_stack_13->SetBinContent(21,36.21251);
   hnueCCinFV_stack_13->SetBinContent(22,40.22689);
   hnueCCinFV_stack_13->SetBinContent(23,44.36267);
   hnueCCinFV_stack_13->SetBinContent(24,34.91175);
   hnueCCinFV_stack_13->SetBinContent(25,46.80957);
   hnueCCinFV_stack_13->SetBinContent(26,15.2132);
   hnueCCinFV_stack_13->SetBinError(0,0.5354406);
   hnueCCinFV_stack_13->SetBinError(1,3.969683);
   hnueCCinFV_stack_13->SetBinError(2,4.644649);
   hnueCCinFV_stack_13->SetBinError(3,4.092917);
   hnueCCinFV_stack_13->SetBinError(4,4.35221);
   hnueCCinFV_stack_13->SetBinError(5,3.505134);
   hnueCCinFV_stack_13->SetBinError(6,5.691642);
   hnueCCinFV_stack_13->SetBinError(7,4.097607);
   hnueCCinFV_stack_13->SetBinError(8,4.766347);
   hnueCCinFV_stack_13->SetBinError(9,3.757511);
   hnueCCinFV_stack_13->SetBinError(10,4.802576);
   hnueCCinFV_stack_13->SetBinError(11,3.738742);
   hnueCCinFV_stack_13->SetBinError(12,3.884897);
   hnueCCinFV_stack_13->SetBinError(13,4.371499);
   hnueCCinFV_stack_13->SetBinError(14,2.990147);
   hnueCCinFV_stack_13->SetBinError(15,5.050825);
   hnueCCinFV_stack_13->SetBinError(16,3.557147);
   hnueCCinFV_stack_13->SetBinError(17,5.433335);
   hnueCCinFV_stack_13->SetBinError(18,3.618008);
   hnueCCinFV_stack_13->SetBinError(19,4.474064);
   hnueCCinFV_stack_13->SetBinError(20,3.704255);
   hnueCCinFV_stack_13->SetBinError(21,3.302276);
   hnueCCinFV_stack_13->SetBinError(22,5.082433);
   hnueCCinFV_stack_13->SetBinError(23,4.795476);
   hnueCCinFV_stack_13->SetBinError(24,3.385203);
   hnueCCinFV_stack_13->SetBinError(25,5.486061);
   hnueCCinFV_stack_13->SetBinError(26,3.126131);
   hnueCCinFV_stack_13->SetEntries(3908);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__2->SetBinContent(0,679.501);
   hmcerror__2->SetBinContent(1,7037.644);
   hmcerror__2->SetBinContent(2,8010.727);
   hmcerror__2->SetBinContent(3,8275.209);
   hmcerror__2->SetBinContent(4,8368.274);
   hmcerror__2->SetBinContent(5,8456.639);
   hmcerror__2->SetBinContent(6,8580.741);
   hmcerror__2->SetBinContent(7,8636.507);
   hmcerror__2->SetBinContent(8,8716.86);
   hmcerror__2->SetBinContent(9,8737.285);
   hmcerror__2->SetBinContent(10,8883.297);
   hmcerror__2->SetBinContent(11,8844.619);
   hmcerror__2->SetBinContent(12,8967.179);
   hmcerror__2->SetBinContent(13,8874.228);
   hmcerror__2->SetBinContent(14,8785.17);
   hmcerror__2->SetBinContent(15,8923.653);
   hmcerror__2->SetBinContent(16,8911.676);
   hmcerror__2->SetBinContent(17,8905.095);
   hmcerror__2->SetBinContent(18,8804.58);
   hmcerror__2->SetBinContent(19,8918.348);
   hmcerror__2->SetBinContent(20,8785.407);
   hmcerror__2->SetBinContent(21,8731.526);
   hmcerror__2->SetBinContent(22,8720.047);
   hmcerror__2->SetBinContent(23,8712.529);
   hmcerror__2->SetBinContent(24,8322.527);
   hmcerror__2->SetBinContent(25,7841.202);
   hmcerror__2->SetBinContent(26,4206.841);
   hmcerror__2->SetBinContent(27,115.7969);
   hmcerror__2->SetBinError(0,16.04142);
   hmcerror__2->SetBinError(1,928.1792);
   hmcerror__2->SetBinError(2,1080.503);
   hmcerror__2->SetBinError(3,1130.182);
   hmcerror__2->SetBinError(4,1143.32);
   hmcerror__2->SetBinError(5,1131.092);
   hmcerror__2->SetBinError(6,1151.716);
   hmcerror__2->SetBinError(7,1164.9);
   hmcerror__2->SetBinError(8,1180.604);
   hmcerror__2->SetBinError(9,1168.07);
   hmcerror__2->SetBinError(10,1189.899);
   hmcerror__2->SetBinError(11,1174.199);
   hmcerror__2->SetBinError(12,1174.6);
   hmcerror__2->SetBinError(13,1148.67);
   hmcerror__2->SetBinError(14,1157.879);
   hmcerror__2->SetBinError(15,1188.931);
   hmcerror__2->SetBinError(16,1145.798);
   hmcerror__2->SetBinError(17,1141.262);
   hmcerror__2->SetBinError(18,1147.409);
   hmcerror__2->SetBinError(19,1201.466);
   hmcerror__2->SetBinError(20,1125.3);
   hmcerror__2->SetBinError(21,1167.64);
   hmcerror__2->SetBinError(22,1163.826);
   hmcerror__2->SetBinError(23,1185.639);
   hmcerror__2->SetBinError(24,1162.205);
   hmcerror__2->SetBinError(25,1197.258);
   hmcerror__2->SetBinError(26,717.2304);
   hmcerror__2->SetBinError(27,38.93545);
   hmcerror__2->SetEntries(195630.6);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3001[26] = {
   6974,
   8093,
   8413,
   8599,
   8623,
   8769,
   8752,
   8974,
   9158,
   8975,
   9394,
   9092,
   9265,
   9329,
   9219,
   9359,
   9316,
   9334,
   9037,
   9205,
   8989,
   8946,
   8801,
   8251,
   7475,
   3866};
   Double_t _felx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3001[26] = {
   83.51048,
   89.9611,
   91.72241,
   92.73079,
   92.86011,
   93.64294,
   93.55212,
   94.7312,
   95.69744,
   94.73648,
   96.92265,
   95.35198,
   96.25487,
   96.58675,
   96.01562,
   96.74192,
   96.51943,
   96.61263,
   95.06314,
   95.94269,
   94.81034,
   94.5833,
   93.81365,
   90.83502,
   86.45808,
   62.17717};
   Double_t _fehx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3001[26] = {
   83.51048,
   89.9611,
   91.72241,
   92.73079,
   92.86011,
   93.64294,
   93.55212,
   94.7312,
   95.69744,
   94.73648,
   96.92265,
   95.35198,
   96.25487,
   96.58675,
   96.01562,
   96.74192,
   96.51943,
   96.61263,
   95.06314,
   95.94269,
   94.81034,
   94.5833,
   93.81365,
   90.83502,
   86.45808,
   62.17717};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,286);
   Graph_Graph3001->SetMinimum(3235.113);
   Graph_Graph3001->SetMaximum(10059.63);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=23.0/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 224208.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6222.6","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 26319.0","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7015.4","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 12138.7","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  182.3","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  51.6","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  5390.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  1453.9","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  3.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 14675.2","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 13941.8","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 130513.9","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1049.4","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("generic_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3002[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3002[26] = {
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
   1,
   1};
   Double_t _felx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3002[26] = {
   0.1318878,
   0.134882,
   0.1365744,
   0.1366256,
   0.133752,
   0.134221,
   0.1348809,
   0.1354391,
   0.133688,
   0.1339479,
   0.1327586,
   0.1309888,
   0.1294389,
   0.1317993,
   0.1332336,
   0.1285726,
   0.1281583,
   0.1303196,
   0.1347184,
   0.1280874,
   0.1337269,
   0.1334656,
   0.1360843,
   0.1396456,
   0.1526881,
   0.1704915};
   Double_t _fehx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3002[26] = {
   0.1318878,
   0.134882,
   0.1365744,
   0.1366256,
   0.133752,
   0.134221,
   0.1348809,
   0.1354391,
   0.133688,
   0.1339479,
   0.1327586,
   0.1309888,
   0.1294389,
   0.1317993,
   0.1332336,
   0.1285726,
   0.1281583,
   0.1303196,
   0.1347184,
   0.1280874,
   0.1337269,
   0.1334656,
   0.1360843,
   0.1396456,
   0.1526881,
   0.1704915};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,286);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3003[26] = {
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
   1,
   1};
   Double_t _felx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3003[26] = {
   0.1264612,
   0.1317209,
   0.1342366,
   0.132401,
   0.1324689,
   0.132143,
   0.1331419,
   0.1342895,
   0.132792,
   0.1325519,
   0.1299092,
   0.1303295,
   0.1282261,
   0.1308457,
   0.1318838,
   0.127683,
   0.1269716,
   0.1288649,
   0.1325491,
   0.1262618,
   0.1305955,
   0.1303741,
   0.1302774,
   0.1286555,
   0.1337964,
   0.1274513};
   Double_t _fehx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3003[26] = {
   0.1264612,
   0.1317209,
   0.1342366,
   0.132401,
   0.1324689,
   0.132143,
   0.1331419,
   0.1342895,
   0.132792,
   0.1325519,
   0.1299092,
   0.1303295,
   0.1282261,
   0.1308457,
   0.1318838,
   0.127683,
   0.1269716,
   0.1288649,
   0.1325491,
   0.1262618,
   0.1305955,
   0.1303741,
   0.1302774,
   0.1286555,
   0.1337964,
   0.1274513};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,286);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3004[26] = {
   0.9909567,
   1.01027,
   1.016651,
   1.027571,
   1.019672,
   1.02194,
   1.013373,
   1.029499,
   1.048152,
   1.010323,
   1.062115,
   1.01392,
   1.044035,
   1.061903,
   1.033097,
   1.050195,
   1.046143,
   1.06013,
   1.013304,
   1.04776,
   1.029488,
   1.025912,
   1.010154,
   0.9914056,
   0.9532977,
   0.9189794};
   Double_t _felx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3004[26] = {
   0.01186626,
   0.01123008,
   0.011084,
   0.01108123,
   0.01098074,
   0.01091315,
   0.01083217,
   0.01086758,
   0.01095277,
   0.01066456,
   0.01095837,
   0.01063344,
   0.01084656,
   0.01099429,
   0.01075968,
   0.01085564,
   0.01083868,
   0.010973,
   0.01065928,
   0.01092069,
   0.01085839,
   0.01084665,
   0.01076767,
   0.01091435,
   0.01102613,
   0.01478001};
   Double_t _fehx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3004[26] = {
   0.01186626,
   0.01123008,
   0.011084,
   0.01108123,
   0.01098074,
   0.01091315,
   0.01083217,
   0.01086758,
   0.01095277,
   0.01066456,
   0.01095837,
   0.01063344,
   0.01084656,
   0.01099429,
   0.01075968,
   0.01085564,
   0.01083868,
   0.010973,
   0.01065928,
   0.01092069,
   0.01085839,
   0.01084665,
   0.01076767,
   0.01091435,
   0.01102613,
   0.01478001};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,286);
   Graph_Graph3004->SetMinimum(0.887312);
   Graph_Graph3004->SetMaximum(1.08996);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,260,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

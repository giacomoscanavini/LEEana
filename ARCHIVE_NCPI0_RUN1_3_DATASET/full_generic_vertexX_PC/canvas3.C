#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Jun  1 16:02:13 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-187.88,293.3333,19786.73);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__7->SetBinContent(0,713.5081);
   hmc__7->SetBinContent(1,7271.042);
   hmc__7->SetBinContent(2,8186.199);
   hmc__7->SetBinContent(3,8463.771);
   hmc__7->SetBinContent(4,8559.418);
   hmc__7->SetBinContent(5,8641.916);
   hmc__7->SetBinContent(6,8779.129);
   hmc__7->SetBinContent(7,8830.33);
   hmc__7->SetBinContent(8,8902.386);
   hmc__7->SetBinContent(9,8912.863);
   hmc__7->SetBinContent(10,9114.152);
   hmc__7->SetBinContent(11,9051.23);
   hmc__7->SetBinContent(12,9153.812);
   hmc__7->SetBinContent(13,9106.008);
   hmc__7->SetBinContent(14,8982.759);
   hmc__7->SetBinContent(15,9148.788);
   hmc__7->SetBinContent(16,9140.649);
   hmc__7->SetBinContent(17,9156.303);
   hmc__7->SetBinContent(18,8987.897);
   hmc__7->SetBinContent(19,9136.781);
   hmc__7->SetBinContent(20,9018.477);
   hmc__7->SetBinContent(21,9002.753);
   hmc__7->SetBinContent(22,8943.738);
   hmc__7->SetBinContent(23,8953.267);
   hmc__7->SetBinContent(24,8532.91);
   hmc__7->SetBinContent(25,8050.216);
   hmc__7->SetBinContent(26,4388.447);
   hmc__7->SetBinContent(27,132.761);
   hmc__7->SetBinError(0,16.70809);
   hmc__7->SetBinError(1,938.3407);
   hmc__7->SetBinError(2,1085.169);
   hmc__7->SetBinError(3,1130.922);
   hmc__7->SetBinError(4,1129.272);
   hmc__7->SetBinError(5,1129.876);
   hmc__7->SetBinError(6,1152.515);
   hmc__7->SetBinError(7,1157.313);
   hmc__7->SetBinError(8,1178.769);
   hmc__7->SetBinError(9,1164.65);
   hmc__7->SetBinError(10,1184.607);
   hmc__7->SetBinError(11,1158.073);
   hmc__7->SetBinError(12,1170.943);
   hmc__7->SetBinError(13,1141.764);
   hmc__7->SetBinError(14,1152.878);
   hmc__7->SetBinError(15,1181.235);
   hmc__7->SetBinError(16,1141.316);
   hmc__7->SetBinError(17,1136.039);
   hmc__7->SetBinError(18,1145.499);
   hmc__7->SetBinError(19,1196.234);
   hmc__7->SetBinError(20,1123.25);
   hmc__7->SetBinError(21,1166.084);
   hmc__7->SetBinError(22,1161.348);
   hmc__7->SetBinError(23,1183.423);
   hmc__7->SetBinError(24,1158.025);
   hmc__7->SetBinError(25,1180.787);
   hmc__7->SetBinError(26,714.2401);
   hmc__7->SetBinError(27,34.20352);
   hmc__7->SetMinimum(-187.88);
   hmc__7->SetMaximum(18788);
   hmc__7->SetEntries(201139.1);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",26,0,260);
   hs3_stack_3->SetMinimum(0);
   hs3_stack_3->SetMaximum(9614.119);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
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
   ci = 1454;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,302.8895);
   hext_stack_2->SetBinContent(1,1349.08);
   hext_stack_2->SetBinContent(2,1091.446);
   hext_stack_2->SetBinContent(3,1091.239);
   hext_stack_2->SetBinContent(4,1106.328);
   hext_stack_2->SetBinContent(5,1130.976);
   hext_stack_2->SetBinContent(6,1153.949);
   hext_stack_2->SetBinContent(7,1177.912);
   hext_stack_2->SetBinContent(8,1157.769);
   hext_stack_2->SetBinContent(9,1162.958);
   hext_stack_2->SetBinContent(10,1264.166);
   hext_stack_2->SetBinContent(11,1283.646);
   hext_stack_2->SetBinContent(12,1288.208);
   hext_stack_2->SetBinContent(13,1320.609);
   hext_stack_2->SetBinContent(14,1284.843);
   hext_stack_2->SetBinContent(15,1343.519);
   hext_stack_2->SetBinContent(16,1385.991);
   hext_stack_2->SetBinContent(17,1424.077);
   hext_stack_2->SetBinContent(18,1301.534);
   hext_stack_2->SetBinContent(19,1302.584);
   hext_stack_2->SetBinContent(20,1371.679);
   hext_stack_2->SetBinContent(21,1361.341);
   hext_stack_2->SetBinContent(22,1297.622);
   hext_stack_2->SetBinContent(23,1336.516);
   hext_stack_2->SetBinContent(24,1255.398);
   hext_stack_2->SetBinContent(25,1165.049);
   hext_stack_2->SetBinContent(26,936.1797);
   hext_stack_2->SetBinContent(27,60.46547);
   hext_stack_2->SetBinError(0,11.17025);
   hext_stack_2->SetBinError(1,25.29309);
   hext_stack_2->SetBinError(2,22.63827);
   hext_stack_2->SetBinError(3,22.71977);
   hext_stack_2->SetBinError(4,22.85045);
   hext_stack_2->SetBinError(5,23.0558);
   hext_stack_2->SetBinError(6,23.21423);
   hext_stack_2->SetBinError(7,23.49008);
   hext_stack_2->SetBinError(8,23.18753);
   hext_stack_2->SetBinError(9,23.18498);
   hext_stack_2->SetBinError(10,24.40071);
   hext_stack_2->SetBinError(11,24.4235);
   hext_stack_2->SetBinError(12,24.34878);
   hext_stack_2->SetBinError(13,24.80566);
   hext_stack_2->SetBinError(14,24.29986);
   hext_stack_2->SetBinError(15,25.01278);
   hext_stack_2->SetBinError(16,25.32968);
   hext_stack_2->SetBinError(17,25.88404);
   hext_stack_2->SetBinError(18,24.34685);
   hext_stack_2->SetBinError(19,24.55767);
   hext_stack_2->SetBinError(20,25.31729);
   hext_stack_2->SetBinError(21,25.47685);
   hext_stack_2->SetBinError(22,24.69257);
   hext_stack_2->SetBinError(23,25.20171);
   hext_stack_2->SetBinError(24,24.27137);
   hext_stack_2->SetBinError(25,23.45018);
   hext_stack_2->SetBinError(26,21.04337);
   hext_stack_2->SetBinError(27,5.490361);
   hext_stack_2->SetEntries(75986);

   ci = 1455;
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
   hs3->Add(hext_stack_2,"");
   
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

   ci = 1456;
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
   hs3->Add(hdirt_stack_3,"");
   
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

   ci = 1457;
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
   hs3->Add(houtFV_stack_4,"");
   
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

   ci = 1458;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,26.70508);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,121.5025);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,232.0979);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,254.8967);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,266.1921);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,274.367);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,279.5168);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,268.2681);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,296.1067);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,286.5747);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,276.6389);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,290.8575);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,288.4121);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,282.2454);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,291.9652);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,286.5999);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,295.4642);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,291.5854);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,284.261);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,286.2966);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,281.36);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,300.445);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,291.5683);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,283.4629);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,269.3674);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,233.9674);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,86.40947);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,2.607493);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.326757);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,3.60476);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,4.963556);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,5.20048);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,5.312018);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,5.383205);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.476065);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,5.310152);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,5.651172);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,5.509355);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,5.44723);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,5.596747);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,5.510639);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,5.435904);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,5.621);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,5.547348);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,5.640042);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,5.570904);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,5.48879);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,5.563928);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,5.433341);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,5.725425);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,5.629891);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,5.538639);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,5.344038);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,5.048211);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,3.039516);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.4525371);
   hNCpi0inFVnoncoh_stack_6->SetEntries(128446);

   ci = 1459;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_7->SetBinContent(0,22.54267);
   hCCpi0inFV_stack_7->SetBinContent(1,328.7551);
   hCCpi0inFV_stack_7->SetBinContent(2,607.5947);
   hCCpi0inFV_stack_7->SetBinContent(3,647.9971);
   hCCpi0inFV_stack_7->SetBinContent(4,670.0748);
   hCCpi0inFV_stack_7->SetBinContent(5,638.8375);
   hCCpi0inFV_stack_7->SetBinContent(6,653.316);
   hCCpi0inFV_stack_7->SetBinContent(7,651.7987);
   hCCpi0inFV_stack_7->SetBinContent(8,672.7626);
   hCCpi0inFV_stack_7->SetBinContent(9,660.6674);
   hCCpi0inFV_stack_7->SetBinContent(10,688.1298);
   hCCpi0inFV_stack_7->SetBinContent(11,656.7629);
   hCCpi0inFV_stack_7->SetBinContent(12,664.2289);
   hCCpi0inFV_stack_7->SetBinContent(13,663.0467);
   hCCpi0inFV_stack_7->SetBinContent(14,654.0159);
   hCCpi0inFV_stack_7->SetBinContent(15,661.1657);
   hCCpi0inFV_stack_7->SetBinContent(16,670.4387);
   hCCpi0inFV_stack_7->SetBinContent(17,668.605);
   hCCpi0inFV_stack_7->SetBinContent(18,675.6134);
   hCCpi0inFV_stack_7->SetBinContent(19,635.2299);
   hCCpi0inFV_stack_7->SetBinContent(20,663.2455);
   hCCpi0inFV_stack_7->SetBinContent(21,647.3522);
   hCCpi0inFV_stack_7->SetBinContent(22,650.6892);
   hCCpi0inFV_stack_7->SetBinContent(23,650.6732);
   hCCpi0inFV_stack_7->SetBinContent(24,640.7327);
   hCCpi0inFV_stack_7->SetBinContent(25,584.2096);
   hCCpi0inFV_stack_7->SetBinContent(26,211.9527);
   hCCpi0inFV_stack_7->SetBinContent(27,2.87949);
   hCCpi0inFV_stack_7->SetBinError(0,2.453031);
   hCCpi0inFV_stack_7->SetBinError(1,9.056685);
   hCCpi0inFV_stack_7->SetBinError(2,12.32053);
   hCCpi0inFV_stack_7->SetBinError(3,12.80077);
   hCCpi0inFV_stack_7->SetBinError(4,13.02169);
   hCCpi0inFV_stack_7->SetBinError(5,12.69416);
   hCCpi0inFV_stack_7->SetBinError(6,12.74598);
   hCCpi0inFV_stack_7->SetBinError(7,12.82382);
   hCCpi0inFV_stack_7->SetBinError(8,13.03893);
   hCCpi0inFV_stack_7->SetBinError(9,12.87766);
   hCCpi0inFV_stack_7->SetBinError(10,13.17366);
   hCCpi0inFV_stack_7->SetBinError(11,12.90257);
   hCCpi0inFV_stack_7->SetBinError(12,12.93473);
   hCCpi0inFV_stack_7->SetBinError(13,12.95827);
   hCCpi0inFV_stack_7->SetBinError(14,13.01125);
   hCCpi0inFV_stack_7->SetBinError(15,12.95147);
   hCCpi0inFV_stack_7->SetBinError(16,12.98711);
   hCCpi0inFV_stack_7->SetBinError(17,12.99387);
   hCCpi0inFV_stack_7->SetBinError(18,13.09749);
   hCCpi0inFV_stack_7->SetBinError(19,12.57979);
   hCCpi0inFV_stack_7->SetBinError(20,12.91548);
   hCCpi0inFV_stack_7->SetBinError(21,12.74896);
   hCCpi0inFV_stack_7->SetBinError(22,12.87713);
   hCCpi0inFV_stack_7->SetBinError(23,12.78592);
   hCCpi0inFV_stack_7->SetBinError(24,12.72017);
   hCCpi0inFV_stack_7->SetBinError(25,12.12401);
   hCCpi0inFV_stack_7->SetBinError(26,7.289799);
   hCCpi0inFV_stack_7->SetBinError(27,0.9000686);
   hCCpi0inFV_stack_7->SetEntries(69445);

   ci = 1460;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_8->SetBinContent(0,23.82646);
   hNCinFV_stack_8->SetBinContent(1,250.3015);
   hNCinFV_stack_8->SetBinContent(2,513.8188);
   hNCinFV_stack_8->SetBinContent(3,540.5559);
   hNCinFV_stack_8->SetBinContent(4,536.3767);
   hNCinFV_stack_8->SetBinContent(5,536.8928);
   hNCinFV_stack_8->SetBinContent(6,551.1376);
   hNCinFV_stack_8->SetBinContent(7,548.3069);
   hNCinFV_stack_8->SetBinContent(8,558.9841);
   hNCinFV_stack_8->SetBinContent(9,563.1225);
   hNCinFV_stack_8->SetBinContent(10,553.173);
   hNCinFV_stack_8->SetBinContent(11,572.0358);
   hNCinFV_stack_8->SetBinContent(12,552.8903);
   hNCinFV_stack_8->SetBinContent(13,578.3531);
   hNCinFV_stack_8->SetBinContent(14,539.832);
   hNCinFV_stack_8->SetBinContent(15,548.2076);
   hNCinFV_stack_8->SetBinContent(16,532.5473);
   hNCinFV_stack_8->SetBinContent(17,560.4281);
   hNCinFV_stack_8->SetBinContent(18,559.9379);
   hNCinFV_stack_8->SetBinContent(19,566.5522);
   hNCinFV_stack_8->SetBinContent(20,544.306);
   hNCinFV_stack_8->SetBinContent(21,534.8311);
   hNCinFV_stack_8->SetBinContent(22,518.968);
   hNCinFV_stack_8->SetBinContent(23,540.3373);
   hNCinFV_stack_8->SetBinContent(24,521.4332);
   hNCinFV_stack_8->SetBinContent(25,420.3121);
   hNCinFV_stack_8->SetBinContent(26,129.0896);
   hNCinFV_stack_8->SetBinContent(27,2.589184);
   hNCinFV_stack_8->SetBinError(0,2.480756);
   hNCinFV_stack_8->SetBinError(1,7.929192);
   hNCinFV_stack_8->SetBinError(2,11.38359);
   hNCinFV_stack_8->SetBinError(3,11.59009);
   hNCinFV_stack_8->SetBinError(4,11.57042);
   hNCinFV_stack_8->SetBinError(5,11.63428);
   hNCinFV_stack_8->SetBinError(6,11.75538);
   hNCinFV_stack_8->SetBinError(7,11.7501);
   hNCinFV_stack_8->SetBinError(8,11.81281);
   hNCinFV_stack_8->SetBinError(9,11.96031);
   hNCinFV_stack_8->SetBinError(10,11.81005);
   hNCinFV_stack_8->SetBinError(11,12.03594);
   hNCinFV_stack_8->SetBinError(12,11.74125);
   hNCinFV_stack_8->SetBinError(13,12.06074);
   hNCinFV_stack_8->SetBinError(14,11.7669);
   hNCinFV_stack_8->SetBinError(15,11.76342);
   hNCinFV_stack_8->SetBinError(16,11.52257);
   hNCinFV_stack_8->SetBinError(17,11.91336);
   hNCinFV_stack_8->SetBinError(18,11.85871);
   hNCinFV_stack_8->SetBinError(19,11.98889);
   hNCinFV_stack_8->SetBinError(20,11.67039);
   hNCinFV_stack_8->SetBinError(21,11.6498);
   hNCinFV_stack_8->SetBinError(22,11.34917);
   hNCinFV_stack_8->SetBinError(23,11.60443);
   hNCinFV_stack_8->SetBinError(24,11.40266);
   hNCinFV_stack_8->SetBinError(25,10.24623);
   hNCinFV_stack_8->SetBinError(26,5.651116);
   hNCinFV_stack_8->SetBinError(27,0.809167);
   hNCinFV_stack_8->SetEntries(57294);

   ci = 1461;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_9->SetBinContent(0,156.1955);
   hnumuCCinFV_stack_9->SetBinContent(1,2608.195);
   hnumuCCinFV_stack_9->SetBinContent(2,4910.552);
   hnumuCCinFV_stack_9->SetBinContent(3,5109.634);
   hnumuCCinFV_stack_9->SetBinContent(4,5218.235);
   hnumuCCinFV_stack_9->SetBinContent(5,5266.655);
   hnumuCCinFV_stack_9->SetBinContent(6,5297.261);
   hnumuCCinFV_stack_9->SetBinContent(7,5343.997);
   hnumuCCinFV_stack_9->SetBinContent(8,5329.466);
   hnumuCCinFV_stack_9->SetBinContent(9,5359.476);
   hnumuCCinFV_stack_9->SetBinContent(10,5428.698);
   hnumuCCinFV_stack_9->SetBinContent(11,5321.851);
   hnumuCCinFV_stack_9->SetBinContent(12,5412.344);
   hnumuCCinFV_stack_9->SetBinContent(13,5313.969);
   hnumuCCinFV_stack_9->SetBinContent(14,5244.978);
   hnumuCCinFV_stack_9->SetBinContent(15,5331.011);
   hnumuCCinFV_stack_9->SetBinContent(16,5258.436);
   hnumuCCinFV_stack_9->SetBinContent(17,5232.177);
   hnumuCCinFV_stack_9->SetBinContent(18,5148.978);
   hnumuCCinFV_stack_9->SetBinContent(19,5352.942);
   hnumuCCinFV_stack_9->SetBinContent(20,5143.533);
   hnumuCCinFV_stack_9->SetBinContent(21,5192.144);
   hnumuCCinFV_stack_9->SetBinContent(22,5220.917);
   hnumuCCinFV_stack_9->SetBinContent(23,5140.158);
   hnumuCCinFV_stack_9->SetBinContent(24,4864.475);
   hnumuCCinFV_stack_9->SetBinContent(25,4565.589);
   hnumuCCinFV_stack_9->SetBinContent(26,1355.552);
   hnumuCCinFV_stack_9->SetBinContent(27,14.05098);
   hnumuCCinFV_stack_9->SetBinError(0,8.915106);
   hnumuCCinFV_stack_9->SetBinError(1,36.51613);
   hnumuCCinFV_stack_9->SetBinError(2,49.07634);
   hnumuCCinFV_stack_9->SetBinError(3,51.24162);
   hnumuCCinFV_stack_9->SetBinError(4,51.62895);
   hnumuCCinFV_stack_9->SetBinError(5,51.59849);
   hnumuCCinFV_stack_9->SetBinError(6,51.80075);
   hnumuCCinFV_stack_9->SetBinError(7,51.83128);
   hnumuCCinFV_stack_9->SetBinError(8,52.34403);
   hnumuCCinFV_stack_9->SetBinError(9,51.33044);
   hnumuCCinFV_stack_9->SetBinError(10,52.2202);
   hnumuCCinFV_stack_9->SetBinError(11,51.13902);
   hnumuCCinFV_stack_9->SetBinError(12,51.65619);
   hnumuCCinFV_stack_9->SetBinError(13,51.73142);
   hnumuCCinFV_stack_9->SetBinError(14,51.43532);
   hnumuCCinFV_stack_9->SetBinError(15,52.12513);
   hnumuCCinFV_stack_9->SetBinError(16,50.26382);
   hnumuCCinFV_stack_9->SetBinError(17,50.11209);
   hnumuCCinFV_stack_9->SetBinError(18,51.29387);
   hnumuCCinFV_stack_9->SetBinError(19,51.46068);
   hnumuCCinFV_stack_9->SetBinError(20,49.53991);
   hnumuCCinFV_stack_9->SetBinError(21,50.65959);
   hnumuCCinFV_stack_9->SetBinError(22,51.07829);
   hnumuCCinFV_stack_9->SetBinError(23,50.23846);
   hnumuCCinFV_stack_9->SetBinError(24,49.22234);
   hnumuCCinFV_stack_9->SetBinError(25,48.55222);
   hnumuCCinFV_stack_9->SetBinError(26,26.3861);
   hnumuCCinFV_stack_9->SetBinError(27,2.280729);
   hnumuCCinFV_stack_9->SetEntries(459623);

   ci = 1462;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_10->SetBinContent(0,0.7573288);
   hnueCCinFV_stack_10->SetBinContent(1,25.23803);
   hnueCCinFV_stack_10->SetBinContent(2,38.07145);
   hnueCCinFV_stack_10->SetBinContent(3,43.26277);
   hnueCCinFV_stack_10->SetBinContent(4,46.9894);
   hnueCCinFV_stack_10->SetBinContent(5,37.59418);
   hnueCCinFV_stack_10->SetBinContent(6,46.85008);
   hnueCCinFV_stack_10->SetBinContent(7,41.00749);
   hnueCCinFV_stack_10->SetBinContent(8,47.59287);
   hnueCCinFV_stack_10->SetBinContent(9,43.28941);
   hnueCCinFV_stack_10->SetBinContent(10,45.84309);
   hnueCCinFV_stack_10->SetBinContent(11,43.68226);
   hnueCCinFV_stack_10->SetBinContent(12,38.57487);
   hnueCCinFV_stack_10->SetBinContent(13,46.91579);
   hnueCCinFV_stack_10->SetBinContent(14,32.94331);
   hnueCCinFV_stack_10->SetBinContent(15,46.61702);
   hnueCCinFV_stack_10->SetBinContent(16,38.52868);
   hnueCCinFV_stack_10->SetBinContent(17,43.73327);
   hnueCCinFV_stack_10->SetBinContent(18,37.36652);
   hnueCCinFV_stack_10->SetBinContent(19,46.15429);
   hnueCCinFV_stack_10->SetBinContent(20,41.37662);
   hnueCCinFV_stack_10->SetBinContent(21,36.21251);
   hnueCCinFV_stack_10->SetBinContent(22,40.22689);
   hnueCCinFV_stack_10->SetBinContent(23,44.36267);
   hnueCCinFV_stack_10->SetBinContent(24,34.91175);
   hnueCCinFV_stack_10->SetBinContent(25,46.80957);
   hnueCCinFV_stack_10->SetBinContent(26,15.2132);
   hnueCCinFV_stack_10->SetBinError(0,0.5354406);
   hnueCCinFV_stack_10->SetBinError(1,3.969683);
   hnueCCinFV_stack_10->SetBinError(2,4.644649);
   hnueCCinFV_stack_10->SetBinError(3,4.092917);
   hnueCCinFV_stack_10->SetBinError(4,4.35221);
   hnueCCinFV_stack_10->SetBinError(5,3.505134);
   hnueCCinFV_stack_10->SetBinError(6,5.691642);
   hnueCCinFV_stack_10->SetBinError(7,4.097607);
   hnueCCinFV_stack_10->SetBinError(8,4.766347);
   hnueCCinFV_stack_10->SetBinError(9,3.757511);
   hnueCCinFV_stack_10->SetBinError(10,4.802576);
   hnueCCinFV_stack_10->SetBinError(11,3.738742);
   hnueCCinFV_stack_10->SetBinError(12,3.884897);
   hnueCCinFV_stack_10->SetBinError(13,4.371499);
   hnueCCinFV_stack_10->SetBinError(14,2.990147);
   hnueCCinFV_stack_10->SetBinError(15,5.050825);
   hnueCCinFV_stack_10->SetBinError(16,3.557147);
   hnueCCinFV_stack_10->SetBinError(17,5.433335);
   hnueCCinFV_stack_10->SetBinError(18,3.618008);
   hnueCCinFV_stack_10->SetBinError(19,4.474064);
   hnueCCinFV_stack_10->SetBinError(20,3.704255);
   hnueCCinFV_stack_10->SetBinError(21,3.302276);
   hnueCCinFV_stack_10->SetBinError(22,5.082433);
   hnueCCinFV_stack_10->SetBinError(23,4.795476);
   hnueCCinFV_stack_10->SetBinError(24,3.385203);
   hnueCCinFV_stack_10->SetBinError(25,5.486061);
   hnueCCinFV_stack_10->SetBinError(26,3.126131);
   hnueCCinFV_stack_10->SetEntries(3908);

   ci = 1463;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_10,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__8->SetBinContent(0,713.5081);
   hmcerror__8->SetBinContent(1,7271.042);
   hmcerror__8->SetBinContent(2,8186.199);
   hmcerror__8->SetBinContent(3,8463.771);
   hmcerror__8->SetBinContent(4,8559.418);
   hmcerror__8->SetBinContent(5,8641.916);
   hmcerror__8->SetBinContent(6,8779.129);
   hmcerror__8->SetBinContent(7,8830.33);
   hmcerror__8->SetBinContent(8,8902.386);
   hmcerror__8->SetBinContent(9,8912.863);
   hmcerror__8->SetBinContent(10,9114.152);
   hmcerror__8->SetBinContent(11,9051.23);
   hmcerror__8->SetBinContent(12,9153.812);
   hmcerror__8->SetBinContent(13,9106.008);
   hmcerror__8->SetBinContent(14,8982.759);
   hmcerror__8->SetBinContent(15,9148.788);
   hmcerror__8->SetBinContent(16,9140.649);
   hmcerror__8->SetBinContent(17,9156.303);
   hmcerror__8->SetBinContent(18,8987.897);
   hmcerror__8->SetBinContent(19,9136.781);
   hmcerror__8->SetBinContent(20,9018.477);
   hmcerror__8->SetBinContent(21,9002.753);
   hmcerror__8->SetBinContent(22,8943.738);
   hmcerror__8->SetBinContent(23,8953.267);
   hmcerror__8->SetBinContent(24,8532.91);
   hmcerror__8->SetBinContent(25,8050.216);
   hmcerror__8->SetBinContent(26,4388.447);
   hmcerror__8->SetBinContent(27,132.761);
   hmcerror__8->SetBinError(0,16.70809);
   hmcerror__8->SetBinError(1,938.3407);
   hmcerror__8->SetBinError(2,1085.169);
   hmcerror__8->SetBinError(3,1130.922);
   hmcerror__8->SetBinError(4,1129.272);
   hmcerror__8->SetBinError(5,1129.876);
   hmcerror__8->SetBinError(6,1152.515);
   hmcerror__8->SetBinError(7,1157.313);
   hmcerror__8->SetBinError(8,1178.769);
   hmcerror__8->SetBinError(9,1164.65);
   hmcerror__8->SetBinError(10,1184.607);
   hmcerror__8->SetBinError(11,1158.073);
   hmcerror__8->SetBinError(12,1170.943);
   hmcerror__8->SetBinError(13,1141.764);
   hmcerror__8->SetBinError(14,1152.878);
   hmcerror__8->SetBinError(15,1181.235);
   hmcerror__8->SetBinError(16,1141.316);
   hmcerror__8->SetBinError(17,1136.039);
   hmcerror__8->SetBinError(18,1145.499);
   hmcerror__8->SetBinError(19,1196.234);
   hmcerror__8->SetBinError(20,1123.25);
   hmcerror__8->SetBinError(21,1166.084);
   hmcerror__8->SetBinError(22,1161.348);
   hmcerror__8->SetBinError(23,1183.423);
   hmcerror__8->SetBinError(24,1158.025);
   hmcerror__8->SetBinError(25,1180.787);
   hmcerror__8->SetBinError(26,714.2401);
   hmcerror__8->SetBinError(27,34.20352);
   hmcerror__8->SetEntries(201139.1);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[26] = {
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
   Double_t _fy3009[26] = {
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
   Double_t _felx3009[26] = {
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
   Double_t _fely3009[26] = {
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
   Double_t _fehx3009[26] = {
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
   Double_t _fehy3009[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,286);
   Graph_Graph3009->SetMinimum(3235.113);
   Graph_Graph3009->SetMaximum(10059.63);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=25.3/26","");
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

   ci = 1454;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 32344.6","F");

   ci = 1455;
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

   ci = 1456;
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

   ci = 1457;
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

   ci = 1458;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  6900.4","F");

   ci = 1459;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 16217.9","F");

   ci = 1460;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 13372.7","F");

   ci = 1461;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 128971.2","F");

   ci = 1462;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 1049.4","F");

   ci = 1463;
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
   canvas3->cd();
  
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
   
   Double_t _fx3010[26] = {
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
   Double_t _fy3010[26] = {
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
   Double_t _felx3010[26] = {
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
   Double_t _fely3010[26] = {
   0.1290517,
   0.1325608,
   0.1336192,
   0.1319333,
   0.1307436,
   0.131279,
   0.1310611,
   0.1324104,
   0.1306707,
   0.1299744,
   0.1279464,
   0.1279186,
   0.1253858,
   0.1283434,
   0.1291138,
   0.1248616,
   0.1240718,
   0.1274491,
   0.1309251,
   0.1245498,
   0.1295252,
   0.1298504,
   0.1321778,
   0.1357128,
   0.1466776,
   0.1627546};
   Double_t _fehx3010[26] = {
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
   Double_t _fehy3010[26] = {
   0.1290517,
   0.1325608,
   0.1336192,
   0.1319333,
   0.1307436,
   0.131279,
   0.1310611,
   0.1324104,
   0.1306707,
   0.1299744,
   0.1279464,
   0.1279186,
   0.1253858,
   0.1283434,
   0.1291138,
   0.1248616,
   0.1240718,
   0.1274491,
   0.1309251,
   0.1245498,
   0.1295252,
   0.1298504,
   0.1321778,
   0.1357128,
   0.1466776,
   0.1627546};
   grae = new TGraphAsymmErrors(26,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,286);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[26] = {
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
   Double_t _fy3011[26] = {
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
   Double_t _felx3011[26] = {
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
   Double_t _fely3011[26] = {
   0.1238575,
   0.1285399,
   0.1309217,
   0.1290132,
   0.1291694,
   0.128755,
   0.1297931,
   0.1310332,
   0.1297259,
   0.1288363,
   0.1264939,
   0.1272584,
   0.1245928,
   0.127612,
   0.1283254,
   0.1241053,
   0.1231697,
   0.1259742,
   0.1291257,
   0.1227249,
   0.1264378,
   0.1268546,
   0.1265376,
   0.1252731,
   0.1301819,
   0.1249802};
   Double_t _fehx3011[26] = {
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
   Double_t _fehy3011[26] = {
   0.1238575,
   0.1285399,
   0.1309217,
   0.1290132,
   0.1291694,
   0.128755,
   0.1297931,
   0.1310332,
   0.1297259,
   0.1288363,
   0.1264939,
   0.1272584,
   0.1245928,
   0.127612,
   0.1283254,
   0.1241053,
   0.1231697,
   0.1259742,
   0.1291257,
   0.1227249,
   0.1264378,
   0.1268546,
   0.1265376,
   0.1252731,
   0.1301819,
   0.1249802};
   grae = new TGraphAsymmErrors(26,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,286);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[26] = {
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
   Double_t _fy3012[26] = {
   0.9591473,
   0.9886151,
   0.9940014,
   1.004624,
   0.9978111,
   0.9988463,
   0.9911294,
   1.008044,
   1.027504,
   0.9847323,
   1.03787,
   0.9932473,
   1.01746,
   1.038545,
   1.007674,
   1.023888,
   1.017441,
   1.038508,
   0.9890792,
   1.020682,
   0.9984724,
   1.000253,
   0.9829932,
   0.966962,
   0.9285465,
   0.8809494};
   Double_t _felx3012[26] = {
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
   Double_t _fely3012[26] = {
   0.01148535,
   0.01098936,
   0.01083706,
   0.01083377,
   0.01074532,
   0.01066654,
   0.01059441,
   0.0106411,
   0.010737,
   0.01039444,
   0.01070823,
   0.01041664,
   0.01057048,
   0.01075246,
   0.0104949,
   0.0105837,
   0.01054131,
   0.01074919,
   0.01040444,
   0.01063846,
   0.01053126,
   0.01057536,
   0.01047815,
   0.01064526,
   0.01073985,
   0.01416837};
   Double_t _fehx3012[26] = {
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
   Double_t _fehy3012[26] = {
   0.01148535,
   0.01098936,
   0.01083706,
   0.01083377,
   0.01074532,
   0.01066654,
   0.01059441,
   0.0106411,
   0.010737,
   0.01039444,
   0.01070823,
   0.01041664,
   0.01057048,
   0.01075246,
   0.0104949,
   0.0105837,
   0.01054131,
   0.01074919,
   0.01040444,
   0.01063846,
   0.01053126,
   0.01057536,
   0.01047815,
   0.01064526,
   0.01073985,
   0.01416837};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,286);
   Graph_Graph3012->SetMinimum(0.8485294);
   Graph_Graph3012->SetMaximum(1.067549);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","generic_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

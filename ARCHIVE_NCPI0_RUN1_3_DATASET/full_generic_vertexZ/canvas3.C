#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Jun  1 18:01:19 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",216,172,1200,900);
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
   pad1->Range(-169.2308,-212.5968,1241.026,22389.8);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__7->SetBinContent(0,583.0254);
   hmc__7->SetBinContent(1,10629.84);
   hmc__7->SetBinContent(2,7807.479);
   hmc__7->SetBinContent(3,7532.036);
   hmc__7->SetBinContent(4,7591.145);
   hmc__7->SetBinContent(5,7729.269);
   hmc__7->SetBinContent(6,7679.244);
   hmc__7->SetBinContent(7,7396.716);
   hmc__7->SetBinContent(8,7767.321);
   hmc__7->SetBinContent(9,7565.361);
   hmc__7->SetBinContent(10,7596.761);
   hmc__7->SetBinContent(11,7360.243);
   hmc__7->SetBinContent(12,7290.831);
   hmc__7->SetBinContent(13,7392.33);
   hmc__7->SetBinContent(14,7317.966);
   hmc__7->SetBinContent(15,7402.412);
   hmc__7->SetBinContent(16,7525.165);
   hmc__7->SetBinContent(17,7286.29);
   hmc__7->SetBinContent(18,7323.365);
   hmc__7->SetBinContent(19,7451.066);
   hmc__7->SetBinContent(20,7246.996);
   hmc__7->SetBinContent(21,8630.671);
   hmc__7->SetBinContent(22,7481.42);
   hmc__7->SetBinContent(23,7176.377);
   hmc__7->SetBinContent(24,7023.634);
   hmc__7->SetBinContent(25,7231.61);
   hmc__7->SetBinContent(26,7163.415);
   hmc__7->SetBinContent(27,6997.277);
   hmc__7->SetBinContent(28,6951.08);
   hmc__7->SetBinContent(29,7036.976);
   hmc__7->SetBinContent(30,5875.744);
   hmc__7->SetBinContent(31,218.4695);
   hmc__7->SetBinError(0,14.9178);
   hmc__7->SetBinError(1,1421.014);
   hmc__7->SetBinError(2,993.7416);
   hmc__7->SetBinError(3,972.7402);
   hmc__7->SetBinError(4,966.1122);
   hmc__7->SetBinError(5,1020.088);
   hmc__7->SetBinError(6,992.9078);
   hmc__7->SetBinError(7,953.7119);
   hmc__7->SetBinError(8,969.2326);
   hmc__7->SetBinError(9,973.0271);
   hmc__7->SetBinError(10,997.4373);
   hmc__7->SetBinError(11,945.9238);
   hmc__7->SetBinError(12,936.8237);
   hmc__7->SetBinError(13,958.5756);
   hmc__7->SetBinError(14,953.5446);
   hmc__7->SetBinError(15,945.8117);
   hmc__7->SetBinError(16,982.9034);
   hmc__7->SetBinError(17,933.7651);
   hmc__7->SetBinError(18,961.8832);
   hmc__7->SetBinError(19,964.888);
   hmc__7->SetBinError(20,927.6293);
   hmc__7->SetBinError(21,994.4932);
   hmc__7->SetBinError(22,941.4274);
   hmc__7->SetBinError(23,922.9213);
   hmc__7->SetBinError(24,916.6418);
   hmc__7->SetBinError(25,969.0921);
   hmc__7->SetBinError(26,930.9563);
   hmc__7->SetBinError(27,933.175);
   hmc__7->SetBinError(28,930.0278);
   hmc__7->SetBinError(29,946.5847);
   hmc__7->SetBinError(30,775.6331);
   hmc__7->SetBinError(31,43.2574);
   hmc__7->SetBinError(32,0.4212968);
   hmc__7->SetBinError(33,0.4212968);
   hmc__7->SetMinimum(-212.5968);
   hmc__7->SetMaximum(21259.68);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",32,0,1100);
   hs3_stack_3->SetMinimum(0);
   hs3_stack_3->SetMaximum(11161.33);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(0,75.25246);
   hbadmatch_stack_1->SetBinContent(1,522.1997);
   hbadmatch_stack_1->SetBinContent(2,255.7026);
   hbadmatch_stack_1->SetBinContent(3,221.3186);
   hbadmatch_stack_1->SetBinContent(4,214.3566);
   hbadmatch_stack_1->SetBinContent(5,204.1208);
   hbadmatch_stack_1->SetBinContent(6,200.7702);
   hbadmatch_stack_1->SetBinContent(7,199.9618);
   hbadmatch_stack_1->SetBinContent(8,182.5054);
   hbadmatch_stack_1->SetBinContent(9,174.3656);
   hbadmatch_stack_1->SetBinContent(10,163.2546);
   hbadmatch_stack_1->SetBinContent(11,163.1348);
   hbadmatch_stack_1->SetBinContent(12,164.367);
   hbadmatch_stack_1->SetBinContent(13,150.688);
   hbadmatch_stack_1->SetBinContent(14,160.1302);
   hbadmatch_stack_1->SetBinContent(15,142.6016);
   hbadmatch_stack_1->SetBinContent(16,139.8719);
   hbadmatch_stack_1->SetBinContent(17,142.8663);
   hbadmatch_stack_1->SetBinContent(18,163.3859);
   hbadmatch_stack_1->SetBinContent(19,170.7066);
   hbadmatch_stack_1->SetBinContent(20,172.8129);
   hbadmatch_stack_1->SetBinContent(21,340.6824);
   hbadmatch_stack_1->SetBinContent(22,184.2205);
   hbadmatch_stack_1->SetBinContent(23,144.0318);
   hbadmatch_stack_1->SetBinContent(24,168.2794);
   hbadmatch_stack_1->SetBinContent(25,170.1954);
   hbadmatch_stack_1->SetBinContent(26,206.4481);
   hbadmatch_stack_1->SetBinContent(27,189.9467);
   hbadmatch_stack_1->SetBinContent(28,212.9696);
   hbadmatch_stack_1->SetBinContent(29,303.4164);
   hbadmatch_stack_1->SetBinContent(30,395.3265);
   hbadmatch_stack_1->SetBinContent(31,18.22723);
   hbadmatch_stack_1->SetBinError(0,5.310703);
   hbadmatch_stack_1->SetBinError(1,15.76818);
   hbadmatch_stack_1->SetBinError(2,10.5196);
   hbadmatch_stack_1->SetBinError(3,8.922348);
   hbadmatch_stack_1->SetBinError(4,9.515028);
   hbadmatch_stack_1->SetBinError(5,8.538147);
   hbadmatch_stack_1->SetBinError(6,10.50425);
   hbadmatch_stack_1->SetBinError(7,9.13197);
   hbadmatch_stack_1->SetBinError(8,7.596758);
   hbadmatch_stack_1->SetBinError(9,8.76478);
   hbadmatch_stack_1->SetBinError(10,7.377613);
   hbadmatch_stack_1->SetBinError(11,8.318351);
   hbadmatch_stack_1->SetBinError(12,8.262966);
   hbadmatch_stack_1->SetBinError(13,7.035205);
   hbadmatch_stack_1->SetBinError(14,7.947369);
   hbadmatch_stack_1->SetBinError(15,6.861758);
   hbadmatch_stack_1->SetBinError(16,7.777257);
   hbadmatch_stack_1->SetBinError(17,7.31272);
   hbadmatch_stack_1->SetBinError(18,8.303072);
   hbadmatch_stack_1->SetBinError(19,12.11047);
   hbadmatch_stack_1->SetBinError(20,7.956398);
   hbadmatch_stack_1->SetBinError(21,12.14815);
   hbadmatch_stack_1->SetBinError(22,9.014239);
   hbadmatch_stack_1->SetBinError(23,7.261055);
   hbadmatch_stack_1->SetBinError(24,7.703825);
   hbadmatch_stack_1->SetBinError(25,9.284709);
   hbadmatch_stack_1->SetBinError(26,9.527478);
   hbadmatch_stack_1->SetBinError(27,8.5614);
   hbadmatch_stack_1->SetBinError(28,9.184833);
   hbadmatch_stack_1->SetBinError(29,10.09525);
   hbadmatch_stack_1->SetBinError(30,14.04617);
   hbadmatch_stack_1->SetBinError(31,2.378677);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(0,212.7417);
   hext_stack_2->SetBinContent(1,1927.594);
   hext_stack_2->SetBinContent(2,1213.205);
   hext_stack_2->SetBinContent(3,1172.85);
   hext_stack_2->SetBinContent(4,1230.693);
   hext_stack_2->SetBinContent(5,1217.161);
   hext_stack_2->SetBinContent(6,1147.289);
   hext_stack_2->SetBinContent(7,1095.971);
   hext_stack_2->SetBinContent(8,1333.025);
   hext_stack_2->SetBinContent(9,1090.723);
   hext_stack_2->SetBinContent(10,1032.758);
   hext_stack_2->SetBinContent(11,1009.371);
   hext_stack_2->SetBinContent(12,897.1665);
   hext_stack_2->SetBinContent(13,970.285);
   hext_stack_2->SetBinContent(14,983.1562);
   hext_stack_2->SetBinContent(15,1050.213);
   hext_stack_2->SetBinContent(16,1079.766);
   hext_stack_2->SetBinContent(17,973.2875);
   hext_stack_2->SetBinContent(18,946.3974);
   hext_stack_2->SetBinContent(19,972.8709);
   hext_stack_2->SetBinContent(20,996.7701);
   hext_stack_2->SetBinContent(21,2107.635);
   hext_stack_2->SetBinContent(22,1273.108);
   hext_stack_2->SetBinContent(23,945.7572);
   hext_stack_2->SetBinContent(24,923.4166);
   hext_stack_2->SetBinContent(25,814.5996);
   hext_stack_2->SetBinContent(26,881.3604);
   hext_stack_2->SetBinContent(27,761.5139);
   hext_stack_2->SetBinContent(28,732.0722);
   hext_stack_2->SetBinContent(29,821.5928);
   hext_stack_2->SetBinContent(30,833.8199);
   hext_stack_2->SetBinContent(31,59.80187);
   hext_stack_2->SetBinError(0,9.200478);
   hext_stack_2->SetBinError(1,30.09598);
   hext_stack_2->SetBinError(2,23.8866);
   hext_stack_2->SetBinError(3,23.3646);
   hext_stack_2->SetBinError(4,23.8454);
   hext_stack_2->SetBinError(5,23.65443);
   hext_stack_2->SetBinError(6,23.1007);
   hext_stack_2->SetBinError(7,22.46406);
   hext_stack_2->SetBinError(8,25.20365);
   hext_stack_2->SetBinError(9,22.492);
   hext_stack_2->SetBinError(10,22.03144);
   hext_stack_2->SetBinError(11,21.8055);
   hext_stack_2->SetBinError(12,20.09818);
   hext_stack_2->SetBinError(13,21.27474);
   hext_stack_2->SetBinError(14,21.31159);
   hext_stack_2->SetBinError(15,21.95451);
   hext_stack_2->SetBinError(16,22.4849);
   hext_stack_2->SetBinError(17,21.26594);
   hext_stack_2->SetBinError(18,20.94304);
   hext_stack_2->SetBinError(19,21.30594);
   hext_stack_2->SetBinError(20,21.59977);
   hext_stack_2->SetBinError(21,32.00857);
   hext_stack_2->SetBinError(22,24.63284);
   hext_stack_2->SetBinError(23,21.10267);
   hext_stack_2->SetBinError(24,20.71046);
   hext_stack_2->SetBinError(25,19.45212);
   hext_stack_2->SetBinError(26,20.34522);
   hext_stack_2->SetBinError(27,18.8632);
   hext_stack_2->SetBinError(28,18.54945);
   hext_stack_2->SetBinError(29,19.61438);
   hext_stack_2->SetBinError(30,19.70082);
   hext_stack_2->SetBinError(31,5.265584);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(0,29.70954);
   hdirt_stack_3->SetBinContent(1,2067.042);
   hdirt_stack_3->SetBinContent(2,485.2774);
   hdirt_stack_3->SetBinContent(3,323.1946);
   hdirt_stack_3->SetBinContent(4,283.5042);
   hdirt_stack_3->SetBinContent(5,241.6977);
   hdirt_stack_3->SetBinContent(6,215.9682);
   hdirt_stack_3->SetBinContent(7,202.759);
   hdirt_stack_3->SetBinContent(8,183.1295);
   hdirt_stack_3->SetBinContent(9,162.264);
   hdirt_stack_3->SetBinContent(10,157.2256);
   hdirt_stack_3->SetBinContent(11,135.7964);
   hdirt_stack_3->SetBinContent(12,147.2183);
   hdirt_stack_3->SetBinContent(13,136.5959);
   hdirt_stack_3->SetBinContent(14,135.2693);
   hdirt_stack_3->SetBinContent(15,140.2649);
   hdirt_stack_3->SetBinContent(16,129.144);
   hdirt_stack_3->SetBinContent(17,126.321);
   hdirt_stack_3->SetBinContent(18,128.1884);
   hdirt_stack_3->SetBinContent(19,140.9823);
   hdirt_stack_3->SetBinContent(20,147.8519);
   hdirt_stack_3->SetBinContent(21,254.9941);
   hdirt_stack_3->SetBinContent(22,156.8865);
   hdirt_stack_3->SetBinContent(23,114.7988);
   hdirt_stack_3->SetBinContent(24,112.2769);
   hdirt_stack_3->SetBinContent(25,98.3563);
   hdirt_stack_3->SetBinContent(26,116.8187);
   hdirt_stack_3->SetBinContent(27,97.84592);
   hdirt_stack_3->SetBinContent(28,113.7673);
   hdirt_stack_3->SetBinContent(29,137.5143);
   hdirt_stack_3->SetBinContent(30,130.3008);
   hdirt_stack_3->SetBinContent(31,5.843284);
   hdirt_stack_3->SetBinError(0,3.138857);
   hdirt_stack_3->SetBinError(1,29.72113);
   hdirt_stack_3->SetBinError(2,13.93576);
   hdirt_stack_3->SetBinError(3,10.65946);
   hdirt_stack_3->SetBinError(4,11.29941);
   hdirt_stack_3->SetBinError(5,9.302058);
   hdirt_stack_3->SetBinError(6,8.859897);
   hdirt_stack_3->SetBinError(7,9.931644);
   hdirt_stack_3->SetBinError(8,8.288663);
   hdirt_stack_3->SetBinError(9,7.74459);
   hdirt_stack_3->SetBinError(10,7.763938);
   hdirt_stack_3->SetBinError(11,7.393775);
   hdirt_stack_3->SetBinError(12,7.815795);
   hdirt_stack_3->SetBinError(13,8.222795);
   hdirt_stack_3->SetBinError(14,7.068734);
   hdirt_stack_3->SetBinError(15,7.555546);
   hdirt_stack_3->SetBinError(16,6.384523);
   hdirt_stack_3->SetBinError(17,7.39482);
   hdirt_stack_3->SetBinError(18,6.777726);
   hdirt_stack_3->SetBinError(19,9.028442);
   hdirt_stack_3->SetBinError(20,7.528709);
   hdirt_stack_3->SetBinError(21,9.80636);
   hdirt_stack_3->SetBinError(22,7.827999);
   hdirt_stack_3->SetBinError(23,6.153725);
   hdirt_stack_3->SetBinError(24,6.902356);
   hdirt_stack_3->SetBinError(25,5.293362);
   hdirt_stack_3->SetBinError(26,6.679989);
   hdirt_stack_3->SetBinError(27,5.822381);
   hdirt_stack_3->SetBinError(28,6.716391);
   hdirt_stack_3->SetBinError(29,7.250423);
   hdirt_stack_3->SetBinError(30,7.974237);
   hdirt_stack_3->SetBinError(31,1.23749);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,48.65607);
   houtFV_stack_4->SetBinContent(1,1751.05);
   houtFV_stack_4->SetBinContent(2,455.9854);
   houtFV_stack_4->SetBinContent(3,397.6221);
   houtFV_stack_4->SetBinContent(4,395.5941);
   houtFV_stack_4->SetBinContent(5,407.8517);
   houtFV_stack_4->SetBinContent(6,378.5305);
   houtFV_stack_4->SetBinContent(7,384.4852);
   houtFV_stack_4->SetBinContent(8,386.829);
   houtFV_stack_4->SetBinContent(9,359.644);
   houtFV_stack_4->SetBinContent(10,371.692);
   houtFV_stack_4->SetBinContent(11,357.9747);
   houtFV_stack_4->SetBinContent(12,366.9158);
   houtFV_stack_4->SetBinContent(13,340.3643);
   houtFV_stack_4->SetBinContent(14,344.3304);
   houtFV_stack_4->SetBinContent(15,400.3065);
   houtFV_stack_4->SetBinContent(16,385.7831);
   houtFV_stack_4->SetBinContent(17,346.4917);
   houtFV_stack_4->SetBinContent(18,344.5567);
   houtFV_stack_4->SetBinContent(19,381.4965);
   houtFV_stack_4->SetBinContent(20,379.7116);
   houtFV_stack_4->SetBinContent(21,469.2354);
   houtFV_stack_4->SetBinContent(22,387.3353);
   houtFV_stack_4->SetBinContent(23,332.3001);
   houtFV_stack_4->SetBinContent(24,319.6187);
   houtFV_stack_4->SetBinContent(25,324.2257);
   houtFV_stack_4->SetBinContent(26,312.0399);
   houtFV_stack_4->SetBinContent(27,294.8104);
   houtFV_stack_4->SetBinContent(28,273.9291);
   houtFV_stack_4->SetBinContent(29,257.9896);
   houtFV_stack_4->SetBinContent(30,251.1066);
   houtFV_stack_4->SetBinContent(31,21.17734);
   houtFV_stack_4->SetBinError(0,3.714927);
   houtFV_stack_4->SetBinError(1,25.3723);
   houtFV_stack_4->SetBinError(2,13.19147);
   houtFV_stack_4->SetBinError(3,11.88727);
   houtFV_stack_4->SetBinError(4,11.34992);
   houtFV_stack_4->SetBinError(5,13.0093);
   houtFV_stack_4->SetBinError(6,11.9975);
   houtFV_stack_4->SetBinError(7,11.44023);
   houtFV_stack_4->SetBinError(8,11.08906);
   houtFV_stack_4->SetBinError(9,11.08353);
   houtFV_stack_4->SetBinError(10,11.59018);
   houtFV_stack_4->SetBinError(11,10.93624);
   houtFV_stack_4->SetBinError(12,11.4276);
   houtFV_stack_4->SetBinError(13,10.78911);
   houtFV_stack_4->SetBinError(14,10.99944);
   houtFV_stack_4->SetBinError(15,12.92601);
   houtFV_stack_4->SetBinError(16,12.83262);
   houtFV_stack_4->SetBinError(17,10.31028);
   houtFV_stack_4->SetBinError(18,10.71058);
   houtFV_stack_4->SetBinError(19,11.73941);
   houtFV_stack_4->SetBinError(20,12.1386);
   houtFV_stack_4->SetBinError(21,12.19911);
   houtFV_stack_4->SetBinError(22,12.11526);
   houtFV_stack_4->SetBinError(23,9.789637);
   houtFV_stack_4->SetBinError(24,10.95318);
   houtFV_stack_4->SetBinError(25,10.30622);
   houtFV_stack_4->SetBinError(26,10.13752);
   houtFV_stack_4->SetBinError(27,9.13131);
   houtFV_stack_4->SetBinError(28,8.859008);
   houtFV_stack_4->SetBinError(29,8.481802);
   houtFV_stack_4->SetBinError(30,9.287523);
   houtFV_stack_4->SetBinError(31,2.4007);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.8228858);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.41577);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.147578);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.047428);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.893477);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.781968);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.37185);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.286822);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.133872);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.829964);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.371185);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.604764);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,7.068526);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.316554);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.23543);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.651354);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.549131);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.689632);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.258842);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.41296);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.89855);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.894244);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,7.08264);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.030818);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.759377);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,8.773435);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,7.373266);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,7.568734);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,6.373018);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,5.672517);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,3.861674);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2499367);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5938231);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8058944);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7188036);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6974129);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8793844);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7788781);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7945447);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8081043);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8099488);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7874921);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7387418);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.866818);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8386721);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8957095);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8442226);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7595667);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7955242);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7661995);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8062967);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8033948);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9680693);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.8439534);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7056884);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7500271);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.048551);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.8761594);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.8976987);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.8315257);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.7182615);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.6413517);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,26.24573);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,177.6991);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,213.8303);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,229.086);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,209.0178);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,246.7315);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,237.7769);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,247.8082);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,234.5664);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,239.1069);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,236.6678);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,227.0913);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,228.968);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,232.6096);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,246.2266);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,234.2876);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,234.9975);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,239.8606);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,232.2865);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,231.1408);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,229.609);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,249.2049);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,222.4642);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,229.2562);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,226.8176);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,227.146);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,238.984);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,229.3249);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,239.9905);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,242.5022);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,183.653);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(31,4.784206);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.314231);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,4.336793);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,4.797809);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,5.049922);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.705812);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,5.142716);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.009195);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,5.177867);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,5.026441);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,5.056992);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,4.981974);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,4.873493);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,4.920991);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,4.93962);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,5.155434);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,5.028925);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,4.990871);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,5.108159);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,4.974968);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,4.917738);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,4.969391);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,5.120278);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,4.937583);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,4.933331);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,4.947413);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,4.80511);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,5.035661);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,4.921622);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,5.085721);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,5.155271);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,4.513428);
   hNCpi0inFVnoncoh_stack_6->SetBinError(31,0.7129592);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_7->SetBinContent(0,21.71716);
   hCCpi0inFV_stack_7->SetBinContent(1,404.8219);
   hCCpi0inFV_stack_7->SetBinContent(2,532.0088);
   hCCpi0inFV_stack_7->SetBinContent(3,522.8826);
   hCCpi0inFV_stack_7->SetBinContent(4,560.3201);
   hCCpi0inFV_stack_7->SetBinContent(5,552.1588);
   hCCpi0inFV_stack_7->SetBinContent(6,546.5292);
   hCCpi0inFV_stack_7->SetBinContent(7,546.9005);
   hCCpi0inFV_stack_7->SetBinContent(8,541.5384);
   hCCpi0inFV_stack_7->SetBinContent(9,542.6946);
   hCCpi0inFV_stack_7->SetBinContent(10,573.3013);
   hCCpi0inFV_stack_7->SetBinContent(11,563.5382);
   hCCpi0inFV_stack_7->SetBinContent(12,554.3853);
   hCCpi0inFV_stack_7->SetBinContent(13,541.6472);
   hCCpi0inFV_stack_7->SetBinContent(14,557.5009);
   hCCpi0inFV_stack_7->SetBinContent(15,550.7197);
   hCCpi0inFV_stack_7->SetBinContent(16,581.0839);
   hCCpi0inFV_stack_7->SetBinContent(17,561.9684);
   hCCpi0inFV_stack_7->SetBinContent(18,539.7815);
   hCCpi0inFV_stack_7->SetBinContent(19,557.6333);
   hCCpi0inFV_stack_7->SetBinContent(20,541.6835);
   hCCpi0inFV_stack_7->SetBinContent(21,539.334);
   hCCpi0inFV_stack_7->SetBinContent(22,547.2642);
   hCCpi0inFV_stack_7->SetBinContent(23,544.3734);
   hCCpi0inFV_stack_7->SetBinContent(24,537.1891);
   hCCpi0inFV_stack_7->SetBinContent(25,567.9849);
   hCCpi0inFV_stack_7->SetBinContent(26,556.6209);
   hCCpi0inFV_stack_7->SetBinContent(27,548.2955);
   hCCpi0inFV_stack_7->SetBinContent(28,536.3419);
   hCCpi0inFV_stack_7->SetBinContent(29,532.4858);
   hCCpi0inFV_stack_7->SetBinContent(30,425.2823);
   hCCpi0inFV_stack_7->SetBinContent(31,13.33073);
   hCCpi0inFV_stack_7->SetBinError(0,2.389191);
   hCCpi0inFV_stack_7->SetBinError(1,10.0932);
   hCCpi0inFV_stack_7->SetBinError(2,11.58468);
   hCCpi0inFV_stack_7->SetBinError(3,11.50012);
   hCCpi0inFV_stack_7->SetBinError(4,11.87851);
   hCCpi0inFV_stack_7->SetBinError(5,11.76173);
   hCCpi0inFV_stack_7->SetBinError(6,11.71217);
   hCCpi0inFV_stack_7->SetBinError(7,11.68248);
   hCCpi0inFV_stack_7->SetBinError(8,11.7145);
   hCCpi0inFV_stack_7->SetBinError(9,11.72278);
   hCCpi0inFV_stack_7->SetBinError(10,11.99968);
   hCCpi0inFV_stack_7->SetBinError(11,11.95518);
   hCCpi0inFV_stack_7->SetBinError(12,11.79662);
   hCCpi0inFV_stack_7->SetBinError(13,11.69494);
   hCCpi0inFV_stack_7->SetBinError(14,11.8357);
   hCCpi0inFV_stack_7->SetBinError(15,11.75997);
   hCCpi0inFV_stack_7->SetBinError(16,12.09919);
   hCCpi0inFV_stack_7->SetBinError(17,11.9212);
   hCCpi0inFV_stack_7->SetBinError(18,11.66514);
   hCCpi0inFV_stack_7->SetBinError(19,11.85221);
   hCCpi0inFV_stack_7->SetBinError(20,11.59655);
   hCCpi0inFV_stack_7->SetBinError(21,11.7491);
   hCCpi0inFV_stack_7->SetBinError(22,11.7632);
   hCCpi0inFV_stack_7->SetBinError(23,11.70701);
   hCCpi0inFV_stack_7->SetBinError(24,11.61123);
   hCCpi0inFV_stack_7->SetBinError(25,12.00323);
   hCCpi0inFV_stack_7->SetBinError(26,11.93692);
   hCCpi0inFV_stack_7->SetBinError(27,11.8245);
   hCCpi0inFV_stack_7->SetBinError(28,11.72322);
   hCCpi0inFV_stack_7->SetBinError(29,11.51248);
   hCCpi0inFV_stack_7->SetBinError(30,10.36947);
   hCCpi0inFV_stack_7->SetBinError(31,1.846398);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_8->SetBinContent(0,22.3206);
   hNCinFV_stack_8->SetBinContent(1,336.6617);
   hNCinFV_stack_8->SetBinContent(2,408.1566);
   hNCinFV_stack_8->SetBinContent(3,400.7713);
   hNCinFV_stack_8->SetBinContent(4,432.0126);
   hNCinFV_stack_8->SetBinContent(5,430.7034);
   hNCinFV_stack_8->SetBinContent(6,458.2302);
   hNCinFV_stack_8->SetBinContent(7,454.528);
   hNCinFV_stack_8->SetBinContent(8,453.3002);
   hNCinFV_stack_8->SetBinContent(9,466.9913);
   hNCinFV_stack_8->SetBinContent(10,461.4328);
   hNCinFV_stack_8->SetBinContent(11,468.4639);
   hNCinFV_stack_8->SetBinContent(12,456.5087);
   hNCinFV_stack_8->SetBinContent(13,451.9227);
   hNCinFV_stack_8->SetBinContent(14,429.5732);
   hNCinFV_stack_8->SetBinContent(15,459.2116);
   hNCinFV_stack_8->SetBinContent(16,457.4316);
   hNCinFV_stack_8->SetBinContent(17,453.1086);
   hNCinFV_stack_8->SetBinContent(18,486.4089);
   hNCinFV_stack_8->SetBinContent(19,479.6741);
   hNCinFV_stack_8->SetBinContent(20,439.8826);
   hNCinFV_stack_8->SetBinContent(21,485.3231);
   hNCinFV_stack_8->SetBinContent(22,452.9948);
   hNCinFV_stack_8->SetBinContent(23,445.9779);
   hNCinFV_stack_8->SetBinContent(24,440.6443);
   hNCinFV_stack_8->SetBinContent(25,464.1794);
   hNCinFV_stack_8->SetBinContent(26,440.0811);
   hNCinFV_stack_8->SetBinContent(27,450.5988);
   hNCinFV_stack_8->SetBinContent(28,480.9314);
   hNCinFV_stack_8->SetBinContent(29,462.0941);
   hNCinFV_stack_8->SetBinContent(30,361.7921);
   hNCinFV_stack_8->SetBinContent(31,7.235731);
   hNCinFV_stack_8->SetBinError(0,2.3693);
   hNCinFV_stack_8->SetBinError(1,9.22821);
   hNCinFV_stack_8->SetBinError(2,10.15643);
   hNCinFV_stack_8->SetBinError(3,10.1782);
   hNCinFV_stack_8->SetBinError(4,10.45617);
   hNCinFV_stack_8->SetBinError(5,10.41693);
   hNCinFV_stack_8->SetBinError(6,10.71999);
   hNCinFV_stack_8->SetBinError(7,10.66764);
   hNCinFV_stack_8->SetBinError(8,10.67829);
   hNCinFV_stack_8->SetBinError(9,10.80393);
   hNCinFV_stack_8->SetBinError(10,10.74228);
   hNCinFV_stack_8->SetBinError(11,10.85372);
   hNCinFV_stack_8->SetBinError(12,10.70857);
   hNCinFV_stack_8->SetBinError(13,10.63231);
   hNCinFV_stack_8->SetBinError(14,10.34843);
   hNCinFV_stack_8->SetBinError(15,10.70692);
   hNCinFV_stack_8->SetBinError(16,10.59899);
   hNCinFV_stack_8->SetBinError(17,10.57563);
   hNCinFV_stack_8->SetBinError(18,11.12862);
   hNCinFV_stack_8->SetBinError(19,11.08035);
   hNCinFV_stack_8->SetBinError(20,10.47593);
   hNCinFV_stack_8->SetBinError(21,11.02293);
   hNCinFV_stack_8->SetBinError(22,10.75692);
   hNCinFV_stack_8->SetBinError(23,10.52658);
   hNCinFV_stack_8->SetBinError(24,10.53776);
   hNCinFV_stack_8->SetBinError(25,10.85637);
   hNCinFV_stack_8->SetBinError(26,10.46858);
   hNCinFV_stack_8->SetBinError(27,10.61923);
   hNCinFV_stack_8->SetBinError(28,10.95583);
   hNCinFV_stack_8->SetBinError(29,10.84109);
   hNCinFV_stack_8->SetBinError(30,9.532276);
   hNCinFV_stack_8->SetBinError(31,1.34604);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_9->SetBinContent(0,144.126);
   hnumuCCinFV_stack_9->SetBinContent(1,3413.422);
   hnumuCCinFV_stack_9->SetBinContent(2,4205.016);
   hnumuCCinFV_stack_9->SetBinContent(3,4232.474);
   hnumuCCinFV_stack_9->SetBinContent(4,4221.627);
   hnumuCCinFV_stack_9->SetBinContent(5,4388.29);
   hnumuCCinFV_stack_9->SetBinContent(6,4458.369);
   hnumuCCinFV_stack_9->SetBinContent(7,4218.416);
   hnumuCCinFV_stack_9->SetBinContent(8,4409.521);
   hnumuCCinFV_stack_9->SetBinContent(9,4484.653);
   hnumuCCinFV_stack_9->SetBinContent(10,4551.788);
   hnumuCCinFV_stack_9->SetBinContent(11,4394.29);
   hnumuCCinFV_stack_9->SetBinContent(12,4434.434);
   hnumuCCinFV_stack_9->SetBinContent(13,4527.22);
   hnumuCCinFV_stack_9->SetBinContent(14,4416.639);
   hnumuCCinFV_stack_9->SetBinContent(15,4387.9);
   hnumuCCinFV_stack_9->SetBinContent(16,4482.363);
   hnumuCCinFV_stack_9->SetBinContent(17,4396.494);
   hnumuCCinFV_stack_9->SetBinContent(18,4434.404);
   hnumuCCinFV_stack_9->SetBinContent(19,4471.426);
   hnumuCCinFV_stack_9->SetBinContent(20,4295.275);
   hnumuCCinFV_stack_9->SetBinContent(21,4141.865);
   hnumuCCinFV_stack_9->SetBinContent(22,4213.835);
   hnumuCCinFV_stack_9->SetBinContent(23,4376.888);
   hnumuCCinFV_stack_9->SetBinContent(24,4257.32);
   hnumuCCinFV_stack_9->SetBinContent(25,4518.537);
   hnumuCCinFV_stack_9->SetBinContent(26,4370.869);
   hnumuCCinFV_stack_9->SetBinContent(27,4384.333);
   hnumuCCinFV_stack_9->SetBinContent(28,4314.847);
   hnumuCCinFV_stack_9->SetBinContent(29,4234.256);
   hnumuCCinFV_stack_9->SetBinContent(30,3272.971);
   hnumuCCinFV_stack_9->SetBinContent(31,87.62147);
   hnumuCCinFV_stack_9->SetBinError(0,8.508923);
   hnumuCCinFV_stack_9->SetBinError(1,42.44549);
   hnumuCCinFV_stack_9->SetBinError(2,45.21162);
   hnumuCCinFV_stack_9->SetBinError(3,46.52146);
   hnumuCCinFV_stack_9->SetBinError(4,46.20319);
   hnumuCCinFV_stack_9->SetBinError(5,47.85021);
   hnumuCCinFV_stack_9->SetBinError(6,47.82357);
   hnumuCCinFV_stack_9->SetBinError(7,45.38033);
   hnumuCCinFV_stack_9->SetBinError(8,46.76309);
   hnumuCCinFV_stack_9->SetBinError(9,47.54091);
   hnumuCCinFV_stack_9->SetBinError(10,48.01301);
   hnumuCCinFV_stack_9->SetBinError(11,46.24383);
   hnumuCCinFV_stack_9->SetBinError(12,46.5108);
   hnumuCCinFV_stack_9->SetBinError(13,47.5118);
   hnumuCCinFV_stack_9->SetBinError(14,46.51413);
   hnumuCCinFV_stack_9->SetBinError(15,46.37826);
   hnumuCCinFV_stack_9->SetBinError(16,47.48532);
   hnumuCCinFV_stack_9->SetBinError(17,46.36933);
   hnumuCCinFV_stack_9->SetBinError(18,46.8188);
   hnumuCCinFV_stack_9->SetBinError(19,46.3116);
   hnumuCCinFV_stack_9->SetBinError(20,47.25458);
   hnumuCCinFV_stack_9->SetBinError(21,44.7811);
   hnumuCCinFV_stack_9->SetBinError(22,45.50185);
   hnumuCCinFV_stack_9->SetBinError(23,46.3398);
   hnumuCCinFV_stack_9->SetBinError(24,46.17266);
   hnumuCCinFV_stack_9->SetBinError(25,47.94387);
   hnumuCCinFV_stack_9->SetBinError(26,46.50794);
   hnumuCCinFV_stack_9->SetBinError(27,47.4911);
   hnumuCCinFV_stack_9->SetBinError(28,46.52268);
   hnumuCCinFV_stack_9->SetBinError(29,46.91603);
   hnumuCCinFV_stack_9->SetBinError(30,39.836);
   hnumuCCinFV_stack_9->SetBinError(31,6.532047);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_10->SetBinContent(0,1.433319);
   hnueCCinFV_stack_10->SetBinContent(1,25.93032);
   hnueCCinFV_stack_10->SetBinContent(2,33.14961);
   hnueCCinFV_stack_10->SetBinContent(3,26.7893);
   hnueCCinFV_stack_10->SetBinContent(4,39.12586);
   hnueCCinFV_stack_10->SetBinContent(5,33.77142);
   hnueCCinFV_stack_10->SetBinContent(6,29.40873);
   hnueCCinFV_stack_10->SetBinContent(7,39.59943);
   hnueCCinFV_stack_10->SetBinContent(8,36.77256);
   hnueCCinFV_stack_10->SetBinContent(9,39.08875);
   hnueCCinFV_stack_10->SetBinContent(10,42.27085);
   hnueCCinFV_stack_10->SetBinContent(11,34.97806);
   hnueCCinFV_stack_10->SetBinContent(12,33.80016);
   hnueCCinFV_stack_10->SetBinContent(13,34.6815);
   hnueCCinFV_stack_10->SetBinContent(14,37.90546);
   hnueCCinFV_stack_10->SetBinContent(15,30.25639);
   hnueCCinFV_stack_10->SetBinContent(16,29.17483);
   hnueCCinFV_stack_10->SetBinContent(17,40.20162);
   hnueCCinFV_stack_10->SetBinContent(18,42.69745);
   hnueCCinFV_stack_10->SetBinContent(19,39.72222);
   hnueCCinFV_stack_10->SetBinContent(20,37.50089);
   hnueCCinFV_stack_10->SetBinContent(21,34.50278);
   hnueCCinFV_stack_10->SetBinContent(22,36.2297);
   hnueCCinFV_stack_10->SetBinContent(23,37.96335);
   hnueCCinFV_stack_10->SetBinContent(24,32.31192);
   hnueCCinFV_stack_10->SetBinContent(25,37.61228);
   hnueCCinFV_stack_10->SetBinContent(26,32.81923);
   hnueCCinFV_stack_10->SetBinContent(27,33.03922);
   hnueCCinFV_stack_10->SetBinContent(28,39.85841);
   hnueCCinFV_stack_10->SetBinContent(29,39.45255);
   hnueCCinFV_stack_10->SetBinContent(30,17.62951);
   hnueCCinFV_stack_10->SetBinContent(31,0.4476171);
   hnueCCinFV_stack_10->SetBinError(0,0.722508);
   hnueCCinFV_stack_10->SetBinError(1,2.81716);
   hnueCCinFV_stack_10->SetBinError(2,4.351877);
   hnueCCinFV_stack_10->SetBinError(3,2.752459);
   hnueCCinFV_stack_10->SetBinError(4,4.719756);
   hnueCCinFV_stack_10->SetBinError(5,4.169463);
   hnueCCinFV_stack_10->SetBinError(6,2.747912);
   hnueCCinFV_stack_10->SetBinError(7,4.166737);
   hnueCCinFV_stack_10->SetBinError(8,3.453739);
   hnueCCinFV_stack_10->SetBinError(9,4.245738);
   hnueCCinFV_stack_10->SetBinError(10,5.239725);
   hnueCCinFV_stack_10->SetBinError(11,3.797705);
   hnueCCinFV_stack_10->SetBinError(12,3.52922);
   hnueCCinFV_stack_10->SetBinError(13,3.307924);
   hnueCCinFV_stack_10->SetBinError(14,3.958738);
   hnueCCinFV_stack_10->SetBinError(15,3.465471);
   hnueCCinFV_stack_10->SetBinError(16,3.578857);
   hnueCCinFV_stack_10->SetBinError(17,3.951934);
   hnueCCinFV_stack_10->SetBinError(18,5.123693);
   hnueCCinFV_stack_10->SetBinError(19,4.010451);
   hnueCCinFV_stack_10->SetBinError(20,3.76685);
   hnueCCinFV_stack_10->SetBinError(21,3.589396);
   hnueCCinFV_stack_10->SetBinError(22,3.881059);
   hnueCCinFV_stack_10->SetBinError(23,5.32447);
   hnueCCinFV_stack_10->SetBinError(24,3.981126);
   hnueCCinFV_stack_10->SetBinError(25,3.658855);
   hnueCCinFV_stack_10->SetBinError(26,3.447435);
   hnueCCinFV_stack_10->SetBinError(27,3.457583);
   hnueCCinFV_stack_10->SetBinError(28,5.861664);
   hnueCCinFV_stack_10->SetBinError(29,4.592908);
   hnueCCinFV_stack_10->SetBinError(30,2.246179);
   hnueCCinFV_stack_10->SetBinError(31,0.3188238);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__8->SetBinContent(0,583.0254);
   hmcerror__8->SetBinContent(1,10629.84);
   hmcerror__8->SetBinContent(2,7807.479);
   hmcerror__8->SetBinContent(3,7532.036);
   hmcerror__8->SetBinContent(4,7591.145);
   hmcerror__8->SetBinContent(5,7729.269);
   hmcerror__8->SetBinContent(6,7679.244);
   hmcerror__8->SetBinContent(7,7396.716);
   hmcerror__8->SetBinContent(8,7767.321);
   hmcerror__8->SetBinContent(9,7565.361);
   hmcerror__8->SetBinContent(10,7596.761);
   hmcerror__8->SetBinContent(11,7360.243);
   hmcerror__8->SetBinContent(12,7290.831);
   hmcerror__8->SetBinContent(13,7392.33);
   hmcerror__8->SetBinContent(14,7317.966);
   hmcerror__8->SetBinContent(15,7402.412);
   hmcerror__8->SetBinContent(16,7525.165);
   hmcerror__8->SetBinContent(17,7286.29);
   hmcerror__8->SetBinContent(18,7323.365);
   hmcerror__8->SetBinContent(19,7451.066);
   hmcerror__8->SetBinContent(20,7246.996);
   hmcerror__8->SetBinContent(21,8630.671);
   hmcerror__8->SetBinContent(22,7481.42);
   hmcerror__8->SetBinContent(23,7176.377);
   hmcerror__8->SetBinContent(24,7023.634);
   hmcerror__8->SetBinContent(25,7231.61);
   hmcerror__8->SetBinContent(26,7163.415);
   hmcerror__8->SetBinContent(27,6997.277);
   hmcerror__8->SetBinContent(28,6951.08);
   hmcerror__8->SetBinContent(29,7036.976);
   hmcerror__8->SetBinContent(30,5875.744);
   hmcerror__8->SetBinContent(31,218.4695);
   hmcerror__8->SetBinError(0,14.9178);
   hmcerror__8->SetBinError(1,1421.014);
   hmcerror__8->SetBinError(2,993.7416);
   hmcerror__8->SetBinError(3,972.7402);
   hmcerror__8->SetBinError(4,966.1122);
   hmcerror__8->SetBinError(5,1020.088);
   hmcerror__8->SetBinError(6,992.9078);
   hmcerror__8->SetBinError(7,953.7119);
   hmcerror__8->SetBinError(8,969.2326);
   hmcerror__8->SetBinError(9,973.0271);
   hmcerror__8->SetBinError(10,997.4373);
   hmcerror__8->SetBinError(11,945.9238);
   hmcerror__8->SetBinError(12,936.8237);
   hmcerror__8->SetBinError(13,958.5756);
   hmcerror__8->SetBinError(14,953.5446);
   hmcerror__8->SetBinError(15,945.8117);
   hmcerror__8->SetBinError(16,982.9034);
   hmcerror__8->SetBinError(17,933.7651);
   hmcerror__8->SetBinError(18,961.8832);
   hmcerror__8->SetBinError(19,964.888);
   hmcerror__8->SetBinError(20,927.6293);
   hmcerror__8->SetBinError(21,994.4932);
   hmcerror__8->SetBinError(22,941.4274);
   hmcerror__8->SetBinError(23,922.9213);
   hmcerror__8->SetBinError(24,916.6418);
   hmcerror__8->SetBinError(25,969.0921);
   hmcerror__8->SetBinError(26,930.9563);
   hmcerror__8->SetBinError(27,933.175);
   hmcerror__8->SetBinError(28,930.0278);
   hmcerror__8->SetBinError(29,946.5847);
   hmcerror__8->SetBinError(30,775.6331);
   hmcerror__8->SetBinError(31,43.2574);
   hmcerror__8->SetBinError(32,0.4212968);
   hmcerror__8->SetBinError(33,0.4212968);
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
   
   Double_t _fx3009[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3009[32] = {
   9294,
   7839,
   7384,
   7704,
   7874,
   7843,
   7651,
   7752,
   7568,
   7485,
   7465,
   7483,
   7402,
   7556,
   7685,
   7520,
   7365,
   7537,
   7442,
   7286,
   8314,
   7609,
   7222,
   7040,
   7137,
   7164,
   7207,
   6838,
   6962,
   5653,
   185,
   1};
   Double_t _felx3009[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3009[32] = {
   96.40539,
   88.53813,
   85.9302,
   87.77243,
   88.73556,
   88.56071,
   87.46999,
   88.04544,
   86.99425,
   86.51589,
   86.40023,
   86.50434,
   86.03488,
   86.92526,
   87.66413,
   86.71793,
   85.81958,
   86.8159,
   86.26703,
   85.35807,
   91.18114,
   87.22958,
   84.98235,
   83.90471,
   84.48077,
   84.64042,
   84.89405,
   82.6922,
   83.4386,
   75.18643,
   13.60147,
   1};
   Double_t _fehx3009[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3009[32] = {
   96.40539,
   88.53813,
   85.9302,
   87.77243,
   88.73556,
   88.56071,
   87.46999,
   88.04544,
   86.99425,
   86.51589,
   86.40023,
   86.50434,
   86.03488,
   86.92526,
   87.66413,
   86.71793,
   85.81958,
   86.8159,
   86.26703,
   85.35807,
   91.18114,
   87.22958,
   84.98235,
   83.90471,
   84.48077,
   84.64042,
   84.89405,
   82.6922,
   83.4386,
   75.18643,
   13.60147,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1210);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(10329.45);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=35.2/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 224467.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6242.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 32495.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7029.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 12181.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  182.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  6903.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 16221.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 13376.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 128997.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 1048.7","F");

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
   TText *pt_LaTex = pt->AddText("generic_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3010[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3010[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3010[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3010[32] = {
   0.1336817,
   0.1272807,
   0.129147,
   0.1272683,
   0.1319773,
   0.1292976,
   0.1289372,
   0.1247834,
   0.1286161,
   0.1312977,
   0.128518,
   0.1284934,
   0.1296716,
   0.1303019,
   0.1277707,
   0.1306155,
   0.1281537,
   0.1313444,
   0.1294966,
   0.1280019,
   0.1152278,
   0.1258354,
   0.1286055,
   0.1305082,
   0.1340078,
   0.1299598,
   0.1333626,
   0.1337962,
   0.1345158,
   0.132006,
   0.198002,
   0};
   Double_t _fehx3010[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3010[32] = {
   0.1336817,
   0.1272807,
   0.129147,
   0.1272683,
   0.1319773,
   0.1292976,
   0.1289372,
   0.1247834,
   0.1286161,
   0.1312977,
   0.128518,
   0.1284934,
   0.1296716,
   0.1303019,
   0.1277707,
   0.1306155,
   0.1281537,
   0.1313444,
   0.1294966,
   0.1280019,
   0.1152278,
   0.1258354,
   0.1286055,
   0.1305082,
   0.1340078,
   0.1299598,
   0.1333626,
   0.1337962,
   0.1345158,
   0.132006,
   0.198002,
   0};
   grae = new TGraphAsymmErrors(32,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1210);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3011[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3011[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3011[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3011[32] = {
   0.1326775,
   0.1251827,
   0.1252126,
   0.1245821,
   0.1303806,
   0.1274355,
   0.1273142,
   0.1233496,
   0.1270476,
   0.1298264,
   0.1276652,
   0.1274726,
   0.1281374,
   0.1292064,
   0.1259332,
   0.1297712,
   0.1273536,
   0.1303379,
   0.1276538,
   0.1275923,
   0.1127249,
   0.1245802,
   0.1277725,
   0.1295345,
   0.1328758,
   0.1293002,
   0.1329167,
   0.1319412,
   0.1325127,
   0.1272652,
   0.119998,
   0};
   Double_t _fehx3011[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3011[32] = {
   0.1326775,
   0.1251827,
   0.1252126,
   0.1245821,
   0.1303806,
   0.1274355,
   0.1273142,
   0.1233496,
   0.1270476,
   0.1298264,
   0.1276652,
   0.1274726,
   0.1281374,
   0.1292064,
   0.1259332,
   0.1297712,
   0.1273536,
   0.1303379,
   0.1276538,
   0.1275923,
   0.1127249,
   0.1245802,
   0.1277725,
   0.1295345,
   0.1328758,
   0.1293002,
   0.1329167,
   0.1319412,
   0.1325127,
   0.1272652,
   0.119998,
   0};
   grae = new TGraphAsymmErrors(32,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1210);
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
   
   Double_t _fx3012[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3012[32] = {
   0.8743313,
   1.004037,
   0.9803458,
   1.014867,
   1.018725,
   1.021325,
   1.034378,
   0.9980275,
   1.000349,
   0.9852883,
   1.014233,
   1.026358,
   1.001308,
   1.032527,
   1.038175,
   0.9993137,
   1.010803,
   1.029172,
   0.9987833,
   1.005382,
   0.9633087,
   1.017053,
   1.006357,
   1.00233,
   0.9869172,
   1.000082,
   1.029972,
   0.983732,
   0.9893454,
   0.962091,
   0.8468003,
   10};
   Double_t _felx3012[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3012[32] = {
   0.009069319,
   0.01134017,
   0.01140863,
   0.01156248,
   0.01148046,
   0.01153248,
   0.01182552,
   0.01133537,
   0.01149902,
   0.01138852,
   0.01173877,
   0.01186481,
   0.0116384,
   0.01187833,
   0.01184264,
   0.01152373,
   0.01177823,
   0.01185465,
   0.01157781,
   0.01177841,
   0.01056478,
   0.01165949,
   0.01184196,
   0.01194605,
   0.01168215,
   0.01181565,
   0.01213244,
   0.01189631,
   0.01185717,
   0.01279607,
   0.06225799,
   0};
   Double_t _fehx3012[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3012[32] = {
   0.009069319,
   0.01134017,
   0.01140863,
   0.01156248,
   0.01148046,
   0.01153248,
   0.01182552,
   0.01133537,
   0.01149902,
   0.01138852,
   0.01173877,
   0.01186481,
   0.0116384,
   0.01187833,
   0.01184264,
   0.01152373,
   0.01177823,
   0.01185465,
   0.01157781,
   0.01177841,
   0.01056478,
   0.01165949,
   0.01184196,
   0.01194605,
   0.01168215,
   0.01181565,
   0.01213244,
   0.01189631,
   0.01185717,
   0.01279607,
   0.06225799,
   0};
   grae = new TGraphAsymmErrors(32,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1210);
   Graph_Graph3012->SetMinimum(0.706088);
   Graph_Graph3012->SetMaximum(10.92155);
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
   
   TH1F *hist__9 = new TH1F("hist__9","generic_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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

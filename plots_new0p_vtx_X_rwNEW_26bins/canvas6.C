#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Mar 13 17:56:39 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-3.5,293.3333,387.0263);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__16->SetBinContent(0,8.032227);
   hmc__16->SetBinContent(1,56.17463);
   hmc__16->SetBinContent(2,101.8012);
   hmc__16->SetBinContent(3,129.1207);
   hmc__16->SetBinContent(4,139.2336);
   hmc__16->SetBinContent(5,148.3236);
   hmc__16->SetBinContent(6,148.3065);
   hmc__16->SetBinContent(7,145.4949);
   hmc__16->SetBinContent(8,158.343);
   hmc__16->SetBinContent(9,160.1849);
   hmc__16->SetBinContent(10,153.1354);
   hmc__16->SetBinContent(11,156.8009);
   hmc__16->SetBinContent(12,154.8104);
   hmc__16->SetBinContent(13,150.3642);
   hmc__16->SetBinContent(14,161.655);
   hmc__16->SetBinContent(15,160.0844);
   hmc__16->SetBinContent(16,157.0403);
   hmc__16->SetBinContent(17,172.3017);
   hmc__16->SetBinContent(18,157.6627);
   hmc__16->SetBinContent(19,159.8427);
   hmc__16->SetBinContent(20,163.7853);
   hmc__16->SetBinContent(21,162.4774);
   hmc__16->SetBinContent(22,154.5446);
   hmc__16->SetBinContent(23,140.6727);
   hmc__16->SetBinContent(24,134.3875);
   hmc__16->SetBinContent(25,104.8984);
   hmc__16->SetBinContent(26,37.5723);
   hmc__16->SetBinContent(27,5.953972);
   hmc__16->SetBinError(0,1.349946);
   hmc__16->SetBinError(1,18.87026);
   hmc__16->SetBinError(2,27.85311);
   hmc__16->SetBinError(3,43.33549);
   hmc__16->SetBinError(4,37.467);
   hmc__16->SetBinError(5,43.75359);
   hmc__16->SetBinError(6,37.18019);
   hmc__16->SetBinError(7,37.17451);
   hmc__16->SetBinError(8,40.61609);
   hmc__16->SetBinError(9,44.8476);
   hmc__16->SetBinError(10,38.64836);
   hmc__16->SetBinError(11,39.53573);
   hmc__16->SetBinError(12,37.58772);
   hmc__16->SetBinError(13,35.83577);
   hmc__16->SetBinError(14,47.49206);
   hmc__16->SetBinError(15,38.09027);
   hmc__16->SetBinError(16,38.96367);
   hmc__16->SetBinError(17,39.70599);
   hmc__16->SetBinError(18,45.72852);
   hmc__16->SetBinError(19,40.29464);
   hmc__16->SetBinError(20,42.55073);
   hmc__16->SetBinError(21,39.69038);
   hmc__16->SetBinError(22,35.90341);
   hmc__16->SetBinError(23,36.02);
   hmc__16->SetBinError(24,34.95003);
   hmc__16->SetBinError(25,28.36666);
   hmc__16->SetBinError(26,16.06366);
   hmc__16->SetBinError(27,6.172782);
   hmc__16->SetMinimum(-3.5);
   hmc__16->SetMaximum(367.5);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",26,0,260);
   hs6_stack_6->SetMinimum(-3.571482e-09);
   hs6_stack_6->SetMaximum(180.9168);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,2.409722);
   hbadmatch_stack_1->SetBinContent(2,1.712114);
   hbadmatch_stack_1->SetBinContent(3,1.463836);
   hbadmatch_stack_1->SetBinContent(4,1.608988);
   hbadmatch_stack_1->SetBinContent(5,3.595921);
   hbadmatch_stack_1->SetBinContent(6,2.999762);
   hbadmatch_stack_1->SetBinContent(7,2.247316);
   hbadmatch_stack_1->SetBinContent(8,2.480996);
   hbadmatch_stack_1->SetBinContent(9,1.80576);
   hbadmatch_stack_1->SetBinContent(10,4.845107);
   hbadmatch_stack_1->SetBinContent(11,3.407673);
   hbadmatch_stack_1->SetBinContent(12,3.598327);
   hbadmatch_stack_1->SetBinContent(13,2.056401);
   hbadmatch_stack_1->SetBinContent(14,4.400668);
   hbadmatch_stack_1->SetBinContent(15,2.269311);
   hbadmatch_stack_1->SetBinContent(16,4.765211);
   hbadmatch_stack_1->SetBinContent(17,4.113917);
   hbadmatch_stack_1->SetBinContent(18,4.916955);
   hbadmatch_stack_1->SetBinContent(19,4.59097);
   hbadmatch_stack_1->SetBinContent(20,4.804735);
   hbadmatch_stack_1->SetBinContent(21,3.795002);
   hbadmatch_stack_1->SetBinContent(22,3.253607);
   hbadmatch_stack_1->SetBinContent(23,3.304276);
   hbadmatch_stack_1->SetBinContent(24,3.486512);
   hbadmatch_stack_1->SetBinContent(25,4.181275);
   hbadmatch_stack_1->SetBinContent(26,0.9286332);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.722588);
   hbadmatch_stack_1->SetBinError(2,0.6201715);
   hbadmatch_stack_1->SetBinError(3,0.620407);
   hbadmatch_stack_1->SetBinError(4,0.6801404);
   hbadmatch_stack_1->SetBinError(5,2.038997);
   hbadmatch_stack_1->SetBinError(6,0.9069741);
   hbadmatch_stack_1->SetBinError(7,0.7337357);
   hbadmatch_stack_1->SetBinError(8,0.769967);
   hbadmatch_stack_1->SetBinError(9,0.7075512);
   hbadmatch_stack_1->SetBinError(10,1.857152);
   hbadmatch_stack_1->SetBinError(11,0.9775004);
   hbadmatch_stack_1->SetBinError(12,0.9931293);
   hbadmatch_stack_1->SetBinError(13,0.7617733);
   hbadmatch_stack_1->SetBinError(14,1.209863);
   hbadmatch_stack_1->SetBinError(15,0.6867366);
   hbadmatch_stack_1->SetBinError(16,1.148011);
   hbadmatch_stack_1->SetBinError(17,1.004674);
   hbadmatch_stack_1->SetBinError(18,1.150224);
   hbadmatch_stack_1->SetBinError(19,1.230138);
   hbadmatch_stack_1->SetBinError(20,1.208742);
   hbadmatch_stack_1->SetBinError(21,1.061244);
   hbadmatch_stack_1->SetBinError(22,0.8961317);
   hbadmatch_stack_1->SetBinError(23,0.9683631);
   hbadmatch_stack_1->SetBinError(24,1.212083);
   hbadmatch_stack_1->SetBinError(25,1.121083);
   hbadmatch_stack_1->SetBinError(26,0.48078);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(1,3.654981);
   hext_stack_2->SetBinContent(2,7.62277);
   hext_stack_2->SetBinContent(3,6.075805);
   hext_stack_2->SetBinContent(4,10.79336);
   hext_stack_2->SetBinContent(5,10.21518);
   hext_stack_2->SetBinContent(6,11.65563);
   hext_stack_2->SetBinContent(7,10.45737);
   hext_stack_2->SetBinContent(8,9.227624);
   hext_stack_2->SetBinContent(9,7.876555);
   hext_stack_2->SetBinContent(10,11.10781);
   hext_stack_2->SetBinContent(11,10.34645);
   hext_stack_2->SetBinContent(12,12.72538);
   hext_stack_2->SetBinContent(13,9.629814);
   hext_stack_2->SetBinContent(14,11.50282);
   hext_stack_2->SetBinContent(15,14.16142);
   hext_stack_2->SetBinContent(16,12.72979);
   hext_stack_2->SetBinContent(17,14.35178);
   hext_stack_2->SetBinContent(18,12.90856);
   hext_stack_2->SetBinContent(19,10.1258);
   hext_stack_2->SetBinContent(20,13.81549);
   hext_stack_2->SetBinContent(21,15.96658);
   hext_stack_2->SetBinContent(22,17.17202);
   hext_stack_2->SetBinContent(23,13.33387);
   hext_stack_2->SetBinContent(24,13.03983);
   hext_stack_2->SetBinContent(25,9.902369);
   hext_stack_2->SetBinContent(26,2.592407);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(1,1.163091);
   hext_stack_2->SetBinError(2,1.696135);
   hext_stack_2->SetBinError(3,1.616168);
   hext_stack_2->SetBinError(4,2.034544);
   hext_stack_2->SetBinError(5,2.01372);
   hext_stack_2->SetBinError(6,2.280304);
   hext_stack_2->SetBinError(7,2.024898);
   hext_stack_2->SetBinError(8,2.035134);
   hext_stack_2->SetBinError(9,1.689953);
   hext_stack_2->SetBinError(10,2.186807);
   hext_stack_2->SetBinError(11,2.20112);
   hext_stack_2->SetBinError(12,2.274461);
   hext_stack_2->SetBinError(13,2.04254);
   hext_stack_2->SetBinError(14,2.239091);
   hext_stack_2->SetBinError(15,2.486517);
   hext_stack_2->SetBinError(16,2.303974);
   hext_stack_2->SetBinError(17,2.415463);
   hext_stack_2->SetBinError(18,2.24189);
   hext_stack_2->SetBinError(19,2.048458);
   hext_stack_2->SetBinError(20,2.58479);
   hext_stack_2->SetBinError(21,2.561607);
   hext_stack_2->SetBinError(22,2.731337);
   hext_stack_2->SetBinError(23,2.500905);
   hext_stack_2->SetBinError(24,2.411624);
   hext_stack_2->SetBinError(25,1.970725);
   hext_stack_2->SetBinError(26,1.085446);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.7222204);
   hdirt_stack_3->SetBinContent(2,2.020432);
   hdirt_stack_3->SetBinContent(3,3.112471);
   hdirt_stack_3->SetBinContent(4,2.360547);
   hdirt_stack_3->SetBinContent(5,2.46281);
   hdirt_stack_3->SetBinContent(6,0.5758626);
   hdirt_stack_3->SetBinContent(7,0.8457623);
   hdirt_stack_3->SetBinContent(8,1.340898);
   hdirt_stack_3->SetBinContent(9,2.101358);
   hdirt_stack_3->SetBinContent(10,0.9508715);
   hdirt_stack_3->SetBinContent(11,1.6355);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.8588142);
   hdirt_stack_3->SetBinContent(14,1.390309);
   hdirt_stack_3->SetBinContent(15,1.07113);
   hdirt_stack_3->SetBinContent(16,1.309318);
   hdirt_stack_3->SetBinContent(17,1.153562);
   hdirt_stack_3->SetBinContent(18,1.749843);
   hdirt_stack_3->SetBinContent(19,1.855411);
   hdirt_stack_3->SetBinContent(20,1.781033);
   hdirt_stack_3->SetBinContent(21,3.256508);
   hdirt_stack_3->SetBinContent(22,2.624463);
   hdirt_stack_3->SetBinContent(23,2.577161);
   hdirt_stack_3->SetBinContent(24,1.13249);
   hdirt_stack_3->SetBinContent(25,2.002158);
   hdirt_stack_3->SetBinContent(26,0.5149939);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4476483);
   hdirt_stack_3->SetBinError(2,0.7110602);
   hdirt_stack_3->SetBinError(3,0.9107358);
   hdirt_stack_3->SetBinError(4,0.714432);
   hdirt_stack_3->SetBinError(5,1.155257);
   hdirt_stack_3->SetBinError(6,0.3389606);
   hdirt_stack_3->SetBinError(7,0.4516994);
   hdirt_stack_3->SetBinError(8,0.5902479);
   hdirt_stack_3->SetBinError(9,0.7269593);
   hdirt_stack_3->SetBinError(10,0.5633431);
   hdirt_stack_3->SetBinError(11,1.151203);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.4562172);
   hdirt_stack_3->SetBinError(14,0.6022451);
   hdirt_stack_3->SetBinError(15,0.5555408);
   hdirt_stack_3->SetBinError(16,0.5433406);
   hdirt_stack_3->SetBinError(17,0.501719);
   hdirt_stack_3->SetBinError(18,0.6850036);
   hdirt_stack_3->SetBinError(19,0.7555321);
   hdirt_stack_3->SetBinError(20,0.6443707);
   hdirt_stack_3->SetBinError(21,1.132282);
   hdirt_stack_3->SetBinError(22,0.8887432);
   hdirt_stack_3->SetBinError(23,0.8456003);
   hdirt_stack_3->SetBinError(24,0.4723788);
   hdirt_stack_3->SetBinError(25,0.7516831);
   hdirt_stack_3->SetBinError(26,0.303235);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,5.861924);
   houtFV_stack_4->SetBinContent(1,25.99958);
   houtFV_stack_4->SetBinContent(2,19.15601);
   houtFV_stack_4->SetBinContent(3,17.959);
   houtFV_stack_4->SetBinContent(4,14.64035);
   houtFV_stack_4->SetBinContent(5,12.48346);
   houtFV_stack_4->SetBinContent(6,12.64946);
   houtFV_stack_4->SetBinContent(7,11.95081);
   houtFV_stack_4->SetBinContent(8,11.63257);
   houtFV_stack_4->SetBinContent(9,9.140497);
   houtFV_stack_4->SetBinContent(10,8.354253);
   houtFV_stack_4->SetBinContent(11,9.003323);
   houtFV_stack_4->SetBinContent(12,9.087442);
   houtFV_stack_4->SetBinContent(13,7.864705);
   houtFV_stack_4->SetBinContent(14,8.319053);
   houtFV_stack_4->SetBinContent(15,11.24995);
   houtFV_stack_4->SetBinContent(16,5.139722);
   houtFV_stack_4->SetBinContent(17,11.62555);
   houtFV_stack_4->SetBinContent(18,9.803547);
   houtFV_stack_4->SetBinContent(19,9.515355);
   houtFV_stack_4->SetBinContent(20,11.69119);
   houtFV_stack_4->SetBinContent(21,8.759417);
   houtFV_stack_4->SetBinContent(22,13.61971);
   houtFV_stack_4->SetBinContent(23,18.6754);
   houtFV_stack_4->SetBinContent(24,18.76444);
   houtFV_stack_4->SetBinContent(25,21.60935);
   houtFV_stack_4->SetBinContent(26,13.7882);
   houtFV_stack_4->SetBinContent(27,2.839153);
   houtFV_stack_4->SetBinError(0,1.185377);
   houtFV_stack_4->SetBinError(1,2.516677);
   houtFV_stack_4->SetBinError(2,2.222844);
   houtFV_stack_4->SetBinError(3,2.170553);
   houtFV_stack_4->SetBinError(4,1.876412);
   houtFV_stack_4->SetBinError(5,1.736638);
   houtFV_stack_4->SetBinError(6,1.820539);
   houtFV_stack_4->SetBinError(7,1.691162);
   houtFV_stack_4->SetBinError(8,1.745897);
   houtFV_stack_4->SetBinError(9,1.535325);
   houtFV_stack_4->SetBinError(10,1.393322);
   houtFV_stack_4->SetBinError(11,1.490481);
   houtFV_stack_4->SetBinError(12,1.536579);
   houtFV_stack_4->SetBinError(13,1.394677);
   houtFV_stack_4->SetBinError(14,1.387806);
   houtFV_stack_4->SetBinError(15,1.684281);
   houtFV_stack_4->SetBinError(16,1.074785);
   houtFV_stack_4->SetBinError(17,1.722172);
   houtFV_stack_4->SetBinError(18,1.629905);
   houtFV_stack_4->SetBinError(19,1.4923);
   houtFV_stack_4->SetBinError(20,1.772887);
   houtFV_stack_4->SetBinError(21,1.470114);
   houtFV_stack_4->SetBinError(22,1.853995);
   houtFV_stack_4->SetBinError(23,2.242874);
   houtFV_stack_4->SetBinError(24,2.126664);
   houtFV_stack_4->SetBinError(25,2.290913);
   houtFV_stack_4->SetBinError(26,1.803897);
   houtFV_stack_4->SetBinError(27,0.8093956);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.7097899);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.914234);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.317788);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.012048);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.815747);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.683064);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.137097);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.33207);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.26706);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.830534);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.862506);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.973274);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.132633);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.32186);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.819324);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.016456);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.057806);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.092274);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.56972);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.558014);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.505206);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.777637);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.85893);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.91997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.506608);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.4188362);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2314762);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5701945);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5972);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5369739);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4804862);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6841249);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5155882);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5918536);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7170421);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5681431);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6561998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6437746);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8181172);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6809413);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6197999);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6788903);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6603386);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7756658);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.618805);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7003832);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7074792);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5860708);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5266055);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6860666);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4319288);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.277838);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.9474399);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7521399);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.8790222);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2936159);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2841855);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3599208);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04832419);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,1.143908);
   hNCpi0inFVres_stack_7->SetBinContent(1,11.54683);
   hNCpi0inFVres_stack_7->SetBinContent(2,36.15129);
   hNCpi0inFVres_stack_7->SetBinContent(3,51.84673);
   hNCpi0inFVres_stack_7->SetBinContent(4,57.11452);
   hNCpi0inFVres_stack_7->SetBinContent(5,66.7477);
   hNCpi0inFVres_stack_7->SetBinContent(6,65.86387);
   hNCpi0inFVres_stack_7->SetBinContent(7,66.68665);
   hNCpi0inFVres_stack_7->SetBinContent(8,70.44146);
   hNCpi0inFVres_stack_7->SetBinContent(9,75.08737);
   hNCpi0inFVres_stack_7->SetBinContent(10,64.35343);
   hNCpi0inFVres_stack_7->SetBinContent(11,72.28804);
   hNCpi0inFVres_stack_7->SetBinContent(12,69.06638);
   hNCpi0inFVres_stack_7->SetBinContent(13,68.55854);
   hNCpi0inFVres_stack_7->SetBinContent(14,72.50958);
   hNCpi0inFVres_stack_7->SetBinContent(15,69.2137);
   hNCpi0inFVres_stack_7->SetBinContent(16,72.51191);
   hNCpi0inFVres_stack_7->SetBinContent(17,69.94806);
   hNCpi0inFVres_stack_7->SetBinContent(18,66.83455);
   hNCpi0inFVres_stack_7->SetBinContent(19,68.74771);
   hNCpi0inFVres_stack_7->SetBinContent(20,62.92987);
   hNCpi0inFVres_stack_7->SetBinContent(21,65.52191);
   hNCpi0inFVres_stack_7->SetBinContent(22,62.6645);
   hNCpi0inFVres_stack_7->SetBinContent(23,51.84755);
   hNCpi0inFVres_stack_7->SetBinContent(24,45.13689);
   hNCpi0inFVres_stack_7->SetBinContent(25,27.53807);
   hNCpi0inFVres_stack_7->SetBinContent(26,6.775413);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.8365039);
   hNCpi0inFVres_stack_7->SetBinError(0,0.4200514);
   hNCpi0inFVres_stack_7->SetBinError(1,1.141555);
   hNCpi0inFVres_stack_7->SetBinError(2,1.965524);
   hNCpi0inFVres_stack_7->SetBinError(3,2.382247);
   hNCpi0inFVres_stack_7->SetBinError(4,2.464689);
   hNCpi0inFVres_stack_7->SetBinError(5,2.682248);
   hNCpi0inFVres_stack_7->SetBinError(6,2.657001);
   hNCpi0inFVres_stack_7->SetBinError(7,2.660685);
   hNCpi0inFVres_stack_7->SetBinError(8,2.71262);
   hNCpi0inFVres_stack_7->SetBinError(9,2.919867);
   hNCpi0inFVres_stack_7->SetBinError(10,2.615775);
   hNCpi0inFVres_stack_7->SetBinError(11,2.801267);
   hNCpi0inFVres_stack_7->SetBinError(12,2.642262);
   hNCpi0inFVres_stack_7->SetBinError(13,2.674788);
   hNCpi0inFVres_stack_7->SetBinError(14,2.821227);
   hNCpi0inFVres_stack_7->SetBinError(15,2.700241);
   hNCpi0inFVres_stack_7->SetBinError(16,2.830027);
   hNCpi0inFVres_stack_7->SetBinError(17,2.722705);
   hNCpi0inFVres_stack_7->SetBinError(18,2.663938);
   hNCpi0inFVres_stack_7->SetBinError(19,2.733263);
   hNCpi0inFVres_stack_7->SetBinError(20,2.610761);
   hNCpi0inFVres_stack_7->SetBinError(21,2.63485);
   hNCpi0inFVres_stack_7->SetBinError(22,2.638172);
   hNCpi0inFVres_stack_7->SetBinError(23,2.355809);
   hNCpi0inFVres_stack_7->SetBinError(24,2.173878);
   hNCpi0inFVres_stack_7->SetBinError(25,1.686754);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8847064);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2638255);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2927861);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.676584);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.30568);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.48877);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.34307);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.03201);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.44862);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.79626);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.7731);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.47085);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.34206);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.72071);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.50315);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.94607);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.97181);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.97032);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.12823);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.31466);
   hNCpi0inFVdis_stack_8->SetBinContent(18,14.26643);
   hNCpi0inFVdis_stack_8->SetBinContent(19,13.49585);
   hNCpi0inFVdis_stack_8->SetBinContent(20,13.84577);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.36508);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.1396);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.59989);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.270802);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.61855);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.143404);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2183542);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.540826);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9111828);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9192623);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.221917);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.090641);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.306108);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.061646);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.168068);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.208331);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.138652);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.217929);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.076301);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.217317);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.220802);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.218435);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.075939);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.180689);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.268593);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.199413);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.267032);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.26167);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9922247);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.081982);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9413314);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7652673);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2795826);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1155977);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(1,4.691348);
   hCCpi0inFV_stack_10->SetBinContent(2,12.0091);
   hCCpi0inFV_stack_10->SetBinContent(3,17.01077);
   hCCpi0inFV_stack_10->SetBinContent(4,17.57679);
   hCCpi0inFV_stack_10->SetBinContent(5,18.5294);
   hCCpi0inFV_stack_10->SetBinContent(6,16.3786);
   hCCpi0inFV_stack_10->SetBinContent(7,20.55371);
   hCCpi0inFV_stack_10->SetBinContent(8,23.02355);
   hCCpi0inFV_stack_10->SetBinContent(9,24.41014);
   hCCpi0inFV_stack_10->SetBinContent(10,22.57074);
   hCCpi0inFV_stack_10->SetBinContent(11,18.71953);
   hCCpi0inFV_stack_10->SetBinContent(12,21.55967);
   hCCpi0inFV_stack_10->SetBinContent(13,18.92745);
   hCCpi0inFV_stack_10->SetBinContent(14,23.69328);
   hCCpi0inFV_stack_10->SetBinContent(15,22.65419);
   hCCpi0inFV_stack_10->SetBinContent(16,19.42172);
   hCCpi0inFV_stack_10->SetBinContent(17,25.33007);
   hCCpi0inFV_stack_10->SetBinContent(18,21.49019);
   hCCpi0inFV_stack_10->SetBinContent(19,21.63584);
   hCCpi0inFV_stack_10->SetBinContent(20,24.13622);
   hCCpi0inFV_stack_10->SetBinContent(21,24.38056);
   hCCpi0inFV_stack_10->SetBinContent(22,22.76587);
   hCCpi0inFV_stack_10->SetBinContent(23,15.34227);
   hCCpi0inFV_stack_10->SetBinContent(24,22.24517);
   hCCpi0inFV_stack_10->SetBinContent(25,16.82423);
   hCCpi0inFV_stack_10->SetBinContent(26,5.1248);
   hCCpi0inFV_stack_10->SetBinContent(27,0.536893);
   hCCpi0inFV_stack_10->SetBinError(0,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(1,1.056141);
   hCCpi0inFV_stack_10->SetBinError(2,1.668618);
   hCCpi0inFV_stack_10->SetBinError(3,2.077991);
   hCCpi0inFV_stack_10->SetBinError(4,2.091048);
   hCCpi0inFV_stack_10->SetBinError(5,2.128021);
   hCCpi0inFV_stack_10->SetBinError(6,2.01154);
   hCCpi0inFV_stack_10->SetBinError(7,2.313653);
   hCCpi0inFV_stack_10->SetBinError(8,2.409149);
   hCCpi0inFV_stack_10->SetBinError(9,2.527346);
   hCCpi0inFV_stack_10->SetBinError(10,2.387532);
   hCCpi0inFV_stack_10->SetBinError(11,2.191122);
   hCCpi0inFV_stack_10->SetBinError(12,2.370201);
   hCCpi0inFV_stack_10->SetBinError(13,2.132145);
   hCCpi0inFV_stack_10->SetBinError(14,2.39886);
   hCCpi0inFV_stack_10->SetBinError(15,2.411018);
   hCCpi0inFV_stack_10->SetBinError(16,2.192012);
   hCCpi0inFV_stack_10->SetBinError(17,2.455699);
   hCCpi0inFV_stack_10->SetBinError(18,2.321384);
   hCCpi0inFV_stack_10->SetBinError(19,2.291927);
   hCCpi0inFV_stack_10->SetBinError(20,2.50769);
   hCCpi0inFV_stack_10->SetBinError(21,2.447236);
   hCCpi0inFV_stack_10->SetBinError(22,2.385868);
   hCCpi0inFV_stack_10->SetBinError(23,1.885411);
   hCCpi0inFV_stack_10->SetBinError(24,2.322051);
   hCCpi0inFV_stack_10->SetBinError(25,2.123895);
   hCCpi0inFV_stack_10->SetBinError(26,1.128165);
   hCCpi0inFV_stack_10->SetBinError(27,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(1,2.925981);
   hNCinFV_stack_11->SetBinContent(2,7.772624);
   hNCinFV_stack_11->SetBinContent(3,8.79593);
   hNCinFV_stack_11->SetBinContent(4,10.19529);
   hNCinFV_stack_11->SetBinContent(5,11.46422);
   hNCinFV_stack_11->SetBinContent(6,10.64197);
   hNCinFV_stack_11->SetBinContent(7,11.14529);
   hNCinFV_stack_11->SetBinContent(8,12.93409);
   hNCinFV_stack_11->SetBinContent(9,11.47762);
   hNCinFV_stack_11->SetBinContent(10,11.96065);
   hNCinFV_stack_11->SetBinContent(11,14.30832);
   hNCinFV_stack_11->SetBinContent(12,10.75693);
   hNCinFV_stack_11->SetBinContent(13,10.07996);
   hNCinFV_stack_11->SetBinContent(14,9.442711);
   hNCinFV_stack_11->SetBinContent(15,10.44864);
   hNCinFV_stack_11->SetBinContent(16,12.32051);
   hNCinFV_stack_11->SetBinContent(17,11.14529);
   hNCinFV_stack_11->SetBinContent(18,10.06981);
   hNCinFV_stack_11->SetBinContent(19,13.05243);
   hNCinFV_stack_11->SetBinContent(20,13.50249);
   hNCinFV_stack_11->SetBinContent(21,9.956544);
   hNCinFV_stack_11->SetBinContent(22,8.257955);
   hNCinFV_stack_11->SetBinContent(23,10.84484);
   hNCinFV_stack_11->SetBinContent(24,9.937575);
   hNCinFV_stack_11->SetBinContent(25,6.943735);
   hNCinFV_stack_11->SetBinContent(26,1.072095);
   hNCinFV_stack_11->SetBinContent(27,0.5352025);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.8770106);
   hNCinFV_stack_11->SetBinError(2,1.402227);
   hNCinFV_stack_11->SetBinError(3,1.454682);
   hNCinFV_stack_11->SetBinError(4,1.653277);
   hNCinFV_stack_11->SetBinError(5,1.715329);
   hNCinFV_stack_11->SetBinError(6,1.66505);
   hNCinFV_stack_11->SetBinError(7,1.665669);
   hNCinFV_stack_11->SetBinError(8,1.808071);
   hNCinFV_stack_11->SetBinError(9,1.756557);
   hNCinFV_stack_11->SetBinError(10,1.754881);
   hNCinFV_stack_11->SetBinError(11,1.93321);
   hNCinFV_stack_11->SetBinError(12,1.642878);
   hNCinFV_stack_11->SetBinError(13,1.571283);
   hNCinFV_stack_11->SetBinError(14,1.481617);
   hNCinFV_stack_11->SetBinError(15,1.653789);
   hNCinFV_stack_11->SetBinError(16,1.733393);
   hNCinFV_stack_11->SetBinError(17,1.665669);
   hNCinFV_stack_11->SetBinError(18,1.570018);
   hNCinFV_stack_11->SetBinError(19,1.788044);
   hNCinFV_stack_11->SetBinError(20,1.799304);
   hNCinFV_stack_11->SetBinError(21,1.593412);
   hNCinFV_stack_11->SetBinError(22,1.469574);
   hNCinFV_stack_11->SetBinError(23,1.61713);
   hNCinFV_stack_11->SetBinError(24,1.481196);
   hNCinFV_stack_11->SetBinError(25,1.286774);
   hNCinFV_stack_11->SetBinError(26,0.5551335);
   hNCinFV_stack_11->SetBinError(27,0.3921167);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,0.7817899);
   hnumuCCinFV_stack_12->SetBinContent(2,4.561646);
   hnumuCCinFV_stack_12->SetBinContent(3,10.20733);
   hnumuCCinFV_stack_12->SetBinContent(4,6.179279);
   hnumuCCinFV_stack_12->SetBinContent(5,7.984082);
   hnumuCCinFV_stack_12->SetBinContent(6,6.852136);
   hnumuCCinFV_stack_12->SetBinContent(7,5.59319);
   hnumuCCinFV_stack_12->SetBinContent(8,8.014495);
   hnumuCCinFV_stack_12->SetBinContent(9,6.080166);
   hnumuCCinFV_stack_12->SetBinContent(10,10.8109);
   hnumuCCinFV_stack_12->SetBinContent(11,8.331982);
   hnumuCCinFV_stack_12->SetBinContent(12,10.46642);
   hnumuCCinFV_stack_12->SetBinContent(13,9.322493);
   hnumuCCinFV_stack_12->SetBinContent(14,10.87082);
   hnumuCCinFV_stack_12->SetBinContent(15,8.972637);
   hnumuCCinFV_stack_12->SetBinContent(16,11.28965);
   hnumuCCinFV_stack_12->SetBinContent(17,14.10249);
   hnumuCCinFV_stack_12->SetBinContent(18,9.163364);
   hnumuCCinFV_stack_12->SetBinContent(19,11.37617);
   hnumuCCinFV_stack_12->SetBinContent(20,9.822023);
   hnumuCCinFV_stack_12->SetBinContent(21,10.0772);
   hnumuCCinFV_stack_12->SetBinContent(22,7.979963);
   hnumuCCinFV_stack_12->SetBinContent(23,9.322189);
   hnumuCCinFV_stack_12->SetBinContent(24,6.580829);
   hnumuCCinFV_stack_12->SetBinContent(25,8.279279);
   hnumuCCinFV_stack_12->SetBinContent(26,5.018057);
   hnumuCCinFV_stack_12->SetBinError(1,0.3908977);
   hnumuCCinFV_stack_12->SetBinError(2,1.086456);
   hnumuCCinFV_stack_12->SetBinError(3,2.142809);
   hnumuCCinFV_stack_12->SetBinError(4,1.362301);
   hnumuCCinFV_stack_12->SetBinError(5,1.456102);
   hnumuCCinFV_stack_12->SetBinError(6,1.337303);
   hnumuCCinFV_stack_12->SetBinError(7,1.317556);
   hnumuCCinFV_stack_12->SetBinError(8,1.651385);
   hnumuCCinFV_stack_12->SetBinError(9,1.205834);
   hnumuCCinFV_stack_12->SetBinError(10,1.715805);
   hnumuCCinFV_stack_12->SetBinError(11,1.488201);
   hnumuCCinFV_stack_12->SetBinError(12,2.178707);
   hnumuCCinFV_stack_12->SetBinError(13,1.624193);
   hnumuCCinFV_stack_12->SetBinError(14,1.825592);
   hnumuCCinFV_stack_12->SetBinError(15,1.544106);
   hnumuCCinFV_stack_12->SetBinError(16,1.816674);
   hnumuCCinFV_stack_12->SetBinError(17,2.337703);
   hnumuCCinFV_stack_12->SetBinError(18,1.765597);
   hnumuCCinFV_stack_12->SetBinError(19,1.88743);
   hnumuCCinFV_stack_12->SetBinError(20,1.766349);
   hnumuCCinFV_stack_12->SetBinError(21,1.668974);
   hnumuCCinFV_stack_12->SetBinError(22,1.576096);
   hnumuCCinFV_stack_12->SetBinError(23,1.637364);
   hnumuCCinFV_stack_12->SetBinError(24,1.310199);
   hnumuCCinFV_stack_12->SetBinError(25,1.89714);
   hnumuCCinFV_stack_12->SetBinError(26,1.945448);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(4,1.795259);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,1.082886);
   hnueCCinFV_stack_13->SetBinContent(7,0.7888809);
   hnueCCinFV_stack_13->SetBinContent(8,2.59821);
   hnueCCinFV_stack_13->SetBinContent(9,2.672333);
   hnueCCinFV_stack_13->SetBinContent(10,1.088653);
   hnueCCinFV_stack_13->SetBinContent(11,0.995903);
   hnueCCinFV_stack_13->SetBinContent(12,1.186188);
   hnueCCinFV_stack_13->SetBinContent(13,3.039896);
   hnueCCinFV_stack_13->SetBinContent(14,1.03682);
   hnueCCinFV_stack_13->SetBinContent(15,1.486495);
   hnueCCinFV_stack_13->SetBinContent(16,0.6556042);
   hnueCCinFV_stack_13->SetBinContent(17,2.767768);
   hnueCCinFV_stack_13->SetBinContent(18,0.976422);
   hnueCCinFV_stack_13->SetBinContent(19,1.263342);
   hnueCCinFV_stack_13->SetBinContent(20,2.354626);
   hnueCCinFV_stack_13->SetBinContent(21,1.489135);
   hnueCCinFV_stack_13->SetBinContent(22,0.6762);
   hnueCCinFV_stack_13->SetBinContent(23,1.059405);
   hnueCCinFV_stack_13->SetBinContent(24,0.6640827);
   hnueCCinFV_stack_13->SetBinContent(25,0.409061);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.3921167);
   hnueCCinFV_stack_13->SetBinError(4,1.329192);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.5746241);
   hnueCCinFV_stack_13->SetBinError(7,0.4244012);
   hnueCCinFV_stack_13->SetBinError(8,1.013496);
   hnueCCinFV_stack_13->SetBinError(9,1.067853);
   hnueCCinFV_stack_13->SetBinError(10,0.5547245);
   hnueCCinFV_stack_13->SetBinError(11,0.4455632);
   hnueCCinFV_stack_13->SetBinError(12,0.5554887);
   hnueCCinFV_stack_13->SetBinError(13,1.371918);
   hnueCCinFV_stack_13->SetBinError(14,0.4647793);
   hnueCCinFV_stack_13->SetBinError(15,0.6326716);
   hnueCCinFV_stack_13->SetBinError(16,0.3825648);
   hnueCCinFV_stack_13->SetBinError(17,1.606591);
   hnueCCinFV_stack_13->SetBinError(18,0.6141242);
   hnueCCinFV_stack_13->SetBinError(19,0.8918548);
   hnueCCinFV_stack_13->SetBinError(20,0.8546649);
   hnueCCinFV_stack_13->SetBinError(21,0.6288186);
   hnueCCinFV_stack_13->SetBinError(22,0.3920446);
   hnueCCinFV_stack_13->SetBinError(23,0.5589817);
   hnueCCinFV_stack_13->SetBinError(24,0.3881319);
   hnueCCinFV_stack_13->SetBinError(25,0.409061);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__17->SetBinContent(0,8.032227);
   hmcerror__17->SetBinContent(1,56.17463);
   hmcerror__17->SetBinContent(2,101.8012);
   hmcerror__17->SetBinContent(3,129.1207);
   hmcerror__17->SetBinContent(4,139.2336);
   hmcerror__17->SetBinContent(5,148.3236);
   hmcerror__17->SetBinContent(6,148.3065);
   hmcerror__17->SetBinContent(7,145.4949);
   hmcerror__17->SetBinContent(8,158.343);
   hmcerror__17->SetBinContent(9,160.1849);
   hmcerror__17->SetBinContent(10,153.1354);
   hmcerror__17->SetBinContent(11,156.8009);
   hmcerror__17->SetBinContent(12,154.8104);
   hmcerror__17->SetBinContent(13,150.3642);
   hmcerror__17->SetBinContent(14,161.655);
   hmcerror__17->SetBinContent(15,160.0844);
   hmcerror__17->SetBinContent(16,157.0403);
   hmcerror__17->SetBinContent(17,172.3017);
   hmcerror__17->SetBinContent(18,157.6627);
   hmcerror__17->SetBinContent(19,159.8427);
   hmcerror__17->SetBinContent(20,163.7853);
   hmcerror__17->SetBinContent(21,162.4774);
   hmcerror__17->SetBinContent(22,154.5446);
   hmcerror__17->SetBinContent(23,140.6727);
   hmcerror__17->SetBinContent(24,134.3875);
   hmcerror__17->SetBinContent(25,104.8984);
   hmcerror__17->SetBinContent(26,37.5723);
   hmcerror__17->SetBinContent(27,5.953972);
   hmcerror__17->SetBinError(0,1.349946);
   hmcerror__17->SetBinError(1,18.87026);
   hmcerror__17->SetBinError(2,27.85311);
   hmcerror__17->SetBinError(3,43.33549);
   hmcerror__17->SetBinError(4,37.467);
   hmcerror__17->SetBinError(5,43.75359);
   hmcerror__17->SetBinError(6,37.18019);
   hmcerror__17->SetBinError(7,37.17451);
   hmcerror__17->SetBinError(8,40.61609);
   hmcerror__17->SetBinError(9,44.8476);
   hmcerror__17->SetBinError(10,38.64836);
   hmcerror__17->SetBinError(11,39.53573);
   hmcerror__17->SetBinError(12,37.58772);
   hmcerror__17->SetBinError(13,35.83577);
   hmcerror__17->SetBinError(14,47.49206);
   hmcerror__17->SetBinError(15,38.09027);
   hmcerror__17->SetBinError(16,38.96367);
   hmcerror__17->SetBinError(17,39.70599);
   hmcerror__17->SetBinError(18,45.72852);
   hmcerror__17->SetBinError(19,40.29464);
   hmcerror__17->SetBinError(20,42.55073);
   hmcerror__17->SetBinError(21,39.69038);
   hmcerror__17->SetBinError(22,35.90341);
   hmcerror__17->SetBinError(23,36.02);
   hmcerror__17->SetBinError(24,34.95003);
   hmcerror__17->SetBinError(25,28.36666);
   hmcerror__17->SetBinError(26,16.06366);
   hmcerror__17->SetBinError(27,6.172782);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[26] = {
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
   Double_t _fy3021[26] = {
   53,
   92,
   122,
   121,
   125,
   133,
   133,
   144,
   170,
   159,
   163,
   165,
   175,
   156,
   152,
   164,
   153,
   148,
   125,
   150,
   156,
   163,
   162,
   101,
   92,
   35};
   Double_t _felx3021[26] = {
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
   Double_t _fely3021[26] = {
   7.4105,
   9.7138,
   11.04536,
   11,
   11.18034,
   11.53256,
   11.53256,
   12,
   13.0384,
   12.60952,
   12.76715,
   12.84523,
   13.22876,
   12.49,
   12.32883,
   12.80625,
   12.36932,
   12.16553,
   11.18034,
   12.24745,
   12.49,
   12.76715,
   12.72792,
   10.04988,
   9.7138,
   6.0548};
   Double_t _fehx3021[26] = {
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
   Double_t _fehy3021[26] = {
   7.2068,
   9.513,
   11.04536,
   11,
   11.18034,
   11.53256,
   11.53256,
   12,
   13.0384,
   12.60952,
   12.76715,
   12.84523,
   13.22876,
   12.49,
   12.32883,
   12.80625,
   12.36932,
   12.16553,
   11.18034,
   12.24745,
   12.49,
   12.76715,
   12.72792,
   10.04988,
   9.513,
   5.8483};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,286);
   Graph_Graph3021->SetMinimum(13.01684);
   Graph_Graph3021->SetMaximum(204.1571);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.9/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3512.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.0","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.0","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 41.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 332.5","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1517.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.0","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 501.0","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 261.5","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[26] = {
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
   Double_t _fy3022[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[26] = {
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
   Double_t _fely3022[26] = {
   0.3359214,
   0.273603,
   0.33562,
   0.2690945,
   0.2949873,
   0.2506983,
   0.2555038,
   0.2565071,
   0.279974,
   0.2523804,
   0.2521396,
   0.2427984,
   0.2383265,
   0.2937865,
   0.2379387,
   0.2481126,
   0.2304445,
   0.2900402,
   0.2520893,
   0.2597957,
   0.2442825,
   0.2323174,
   0.2560554,
   0.260069,
   0.2704204,
   0.42754};
   Double_t _fehx3022[26] = {
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
   Double_t _fehy3022[26] = {
   0.3359214,
   0.273603,
   0.33562,
   0.2690945,
   0.2949873,
   0.2506983,
   0.2555038,
   0.2565071,
   0.279974,
   0.2523804,
   0.2521396,
   0.2427984,
   0.2383265,
   0.2937865,
   0.2379387,
   0.2481126,
   0.2304445,
   0.2900402,
   0.2520893,
   0.2597957,
   0.2442825,
   0.2323174,
   0.2560554,
   0.260069,
   0.2704204,
   0.42754};
   grae = new TGraphAsymmErrors(26,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,286);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[26] = {
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
   Double_t _fy3023[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[26] = {
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
   Double_t _fely3023[26] = {
   0.2106446,
   0.1998113,
   0.2114334,
   0.2021109,
   0.2100799,
   0.210413,
   0.2125956,
   0.2081033,
   0.213253,
   0.196842,
   0.2213524,
   0.2113955,
   0.2013781,
   0.2110604,
   0.2012576,
   0.2046765,
   0.1923218,
   0.20757,
   0.2066462,
   0.2071781,
   0.2046771,
   0.1909371,
   0.1956175,
   0.2010968,
   0.1860163,
   0.2266761};
   Double_t _fehx3023[26] = {
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
   Double_t _fehy3023[26] = {
   0.2106446,
   0.1998113,
   0.2114334,
   0.2021109,
   0.2100799,
   0.210413,
   0.2125956,
   0.2081033,
   0.213253,
   0.196842,
   0.2213524,
   0.2113955,
   0.2013781,
   0.2110604,
   0.2012576,
   0.2046765,
   0.1923218,
   0.20757,
   0.2066462,
   0.2071781,
   0.2046771,
   0.1909371,
   0.1956175,
   0.2010968,
   0.1860163,
   0.2266761};
   grae = new TGraphAsymmErrors(26,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,286);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[26] = {
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
   Double_t _fy3024[26] = {
   0.9434864,
   0.9037221,
   0.9448524,
   0.8690429,
   0.8427517,
   0.8967914,
   0.9141211,
   0.9094184,
   1.061274,
   1.038297,
   1.039535,
   1.06582,
   1.163841,
   0.9650179,
   0.9494993,
   1.044318,
   0.8879772,
   0.9387128,
   0.7820187,
   0.9158329,
   0.9601338,
   1.054711,
   1.15161,
   0.7515579,
   0.8770392,
   0.9315372};
   Double_t _felx3024[26] = {
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
   Double_t _fely3024[26] = {
   0.131919,
   0.09541931,
   0.08554292,
   0.0790039,
   0.075378,
   0.07776168,
   0.07926435,
   0.07578487,
   0.08139598,
   0.08234232,
   0.08142263,
   0.08297397,
   0.08797809,
   0.07726327,
   0.07701456,
   0.08154754,
   0.0717887,
   0.07716172,
   0.06994588,
   0.07477744,
   0.07687223,
   0.08261137,
   0.09047899,
   0.07478281,
   0.092602,
   0.1611506};
   Double_t _fehx3024[26] = {
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
   Double_t _fehy3024[26] = {
   0.1282928,
   0.09344683,
   0.08554292,
   0.0790039,
   0.075378,
   0.07776168,
   0.07926435,
   0.07578487,
   0.08139598,
   0.08234232,
   0.08142263,
   0.08297397,
   0.08797809,
   0.07726327,
   0.07701456,
   0.08154754,
   0.0717887,
   0.07716172,
   0.06994588,
   0.07477744,
   0.07687223,
   0.08261137,
   0.09047899,
   0.07478281,
   0.09068776,
   0.1556545};
   grae = new TGraphAsymmErrors(26,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,286);
   Graph_Graph3024->SetMinimum(0.6192707);
   Graph_Graph3024->SetMaximum(1.309323);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

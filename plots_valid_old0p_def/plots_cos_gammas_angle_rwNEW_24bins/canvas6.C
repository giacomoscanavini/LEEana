#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 18:43:50 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
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
   pad1->Range(-1.307692,-5.52,1.25641,610.3958);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__16->SetBinContent(1,256.3633);
   hmc__16->SetBinContent(2,110.3848);
   hmc__16->SetBinContent(3,80.85258);
   hmc__16->SetBinContent(4,61.25237);
   hmc__16->SetBinContent(5,59.23152);
   hmc__16->SetBinContent(6,65.40096);
   hmc__16->SetBinContent(7,64.16395);
   hmc__16->SetBinContent(8,60.96003);
   hmc__16->SetBinContent(9,59.87096);
   hmc__16->SetBinContent(10,66.52246);
   hmc__16->SetBinContent(11,73.11476);
   hmc__16->SetBinContent(12,79.74743);
   hmc__16->SetBinContent(13,88.67848);
   hmc__16->SetBinContent(14,103.0752);
   hmc__16->SetBinContent(15,112.1505);
   hmc__16->SetBinContent(16,110.4255);
   hmc__16->SetBinContent(17,117.9997);
   hmc__16->SetBinContent(18,141.6826);
   hmc__16->SetBinContent(19,153.5891);
   hmc__16->SetBinContent(20,173.5923);
   hmc__16->SetBinContent(21,210.1124);
   hmc__16->SetBinContent(22,238.3777);
   hmc__16->SetBinContent(23,247.2381);
   hmc__16->SetBinContent(24,211.2087);
   hmc__16->SetBinContent(25,0.1115999);
   hmc__16->SetBinError(1,59.16284);
   hmc__16->SetBinError(2,29.38127);
   hmc__16->SetBinError(3,28.86155);
   hmc__16->SetBinError(4,21.43966);
   hmc__16->SetBinError(5,22.49023);
   hmc__16->SetBinError(6,22.65671);
   hmc__16->SetBinError(7,22.71904);
   hmc__16->SetBinError(8,25.43485);
   hmc__16->SetBinError(9,20.69857);
   hmc__16->SetBinError(10,20.52459);
   hmc__16->SetBinError(11,21.05067);
   hmc__16->SetBinError(12,24.84955);
   hmc__16->SetBinError(13,28.87697);
   hmc__16->SetBinError(14,31.52743);
   hmc__16->SetBinError(15,36.11505);
   hmc__16->SetBinError(16,32.25878);
   hmc__16->SetBinError(17,38.82626);
   hmc__16->SetBinError(18,43.97023);
   hmc__16->SetBinError(19,43.45747);
   hmc__16->SetBinError(20,47.45982);
   hmc__16->SetBinError(21,60.28148);
   hmc__16->SetBinError(22,62.95887);
   hmc__16->SetBinError(23,65.96197);
   hmc__16->SetBinError(24,58.9835);
   hmc__16->SetBinError(25,0.475754);
   hmc__16->SetMinimum(-5.52);
   hmc__16->SetMaximum(579.6);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,-1,1);
   hs6_stack_6->SetMinimum(-2.766408e-08);
   hs6_stack_6->SetMaximum(269.1814);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,5.09207);
   hbadmatch_stack_1->SetBinContent(2,3.111997);
   hbadmatch_stack_1->SetBinContent(3,1.541862);
   hbadmatch_stack_1->SetBinContent(4,1.812094);
   hbadmatch_stack_1->SetBinContent(5,3.110805);
   hbadmatch_stack_1->SetBinContent(6,1.434532);
   hbadmatch_stack_1->SetBinContent(7,1.752567);
   hbadmatch_stack_1->SetBinContent(8,2.31059);
   hbadmatch_stack_1->SetBinContent(9,0.5352025);
   hbadmatch_stack_1->SetBinContent(10,1.270501);
   hbadmatch_stack_1->SetBinContent(11,1.014181);
   hbadmatch_stack_1->SetBinContent(12,1.65717);
   hbadmatch_stack_1->SetBinContent(13,0.5997915);
   hbadmatch_stack_1->SetBinContent(14,3.27123);
   hbadmatch_stack_1->SetBinContent(15,2.684783);
   hbadmatch_stack_1->SetBinContent(16,1.760693);
   hbadmatch_stack_1->SetBinContent(17,1.953751);
   hbadmatch_stack_1->SetBinContent(18,2.987752);
   hbadmatch_stack_1->SetBinContent(19,3.081417);
   hbadmatch_stack_1->SetBinContent(20,3.359315);
   hbadmatch_stack_1->SetBinContent(21,4.964378);
   hbadmatch_stack_1->SetBinContent(22,4.500908);
   hbadmatch_stack_1->SetBinContent(23,6.111235);
   hbadmatch_stack_1->SetBinContent(24,6.244045);
   hbadmatch_stack_1->SetBinError(1,1.39699);
   hbadmatch_stack_1->SetBinError(2,0.9704541);
   hbadmatch_stack_1->SetBinError(3,0.6493773);
   hbadmatch_stack_1->SetBinError(4,0.7640361);
   hbadmatch_stack_1->SetBinError(5,1.727624);
   hbadmatch_stack_1->SetBinError(6,0.6693501);
   hbadmatch_stack_1->SetBinError(7,0.6838526);
   hbadmatch_stack_1->SetBinError(8,0.8735021);
   hbadmatch_stack_1->SetBinError(9,0.3921167);
   hbadmatch_stack_1->SetBinError(10,0.5895188);
   hbadmatch_stack_1->SetBinError(11,0.4547599);
   hbadmatch_stack_1->SetBinError(12,0.6498287);
   hbadmatch_stack_1->SetBinError(13,0.4485168);
   hbadmatch_stack_1->SetBinError(14,0.9417298);
   hbadmatch_stack_1->SetBinError(15,0.7967918);
   hbadmatch_stack_1->SetBinError(16,0.6369947);
   hbadmatch_stack_1->SetBinError(17,0.6654694);
   hbadmatch_stack_1->SetBinError(18,0.8956589);
   hbadmatch_stack_1->SetBinError(19,0.9231509);
   hbadmatch_stack_1->SetBinError(20,0.9417798);
   hbadmatch_stack_1->SetBinError(21,1.896464);
   hbadmatch_stack_1->SetBinError(22,1.001665);
   hbadmatch_stack_1->SetBinError(23,1.297821);
   hbadmatch_stack_1->SetBinError(24,1.42636);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,27.62379);
   hext_stack_2->SetBinContent(2,13.50545);
   hext_stack_2->SetBinContent(3,10.81648);
   hext_stack_2->SetBinContent(4,4.214394);
   hext_stack_2->SetBinContent(5,5.930171);
   hext_stack_2->SetBinContent(6,10.92463);
   hext_stack_2->SetBinContent(7,8.947888);
   hext_stack_2->SetBinContent(8,7.26965);
   hext_stack_2->SetBinContent(9,5.034772);
   hext_stack_2->SetBinContent(10,7.206219);
   hext_stack_2->SetBinContent(11,9.309826);
   hext_stack_2->SetBinContent(12,5.262607);
   hext_stack_2->SetBinContent(13,6.172367);
   hext_stack_2->SetBinContent(14,13.49827);
   hext_stack_2->SetBinContent(15,7.544977);
   hext_stack_2->SetBinContent(16,6.985565);
   hext_stack_2->SetBinContent(17,6.33677);
   hext_stack_2->SetBinContent(18,6.649578);
   hext_stack_2->SetBinContent(19,12.05064);
   hext_stack_2->SetBinContent(20,8.522578);
   hext_stack_2->SetBinContent(21,12.14002);
   hext_stack_2->SetBinContent(22,24.19507);
   hext_stack_2->SetBinContent(23,28.59698);
   hext_stack_2->SetBinContent(24,29.58611);
   hext_stack_2->SetBinError(1,3.682863);
   hext_stack_2->SetBinError(2,2.484653);
   hext_stack_2->SetBinError(3,2.310329);
   hext_stack_2->SetBinError(4,1.305512);
   hext_stack_2->SetBinError(5,1.491489);
   hext_stack_2->SetBinError(6,2.220187);
   hext_stack_2->SetBinError(7,2.152019);
   hext_stack_2->SetBinError(8,1.89115);
   hext_stack_2->SetBinError(9,1.354181);
   hext_stack_2->SetBinError(10,1.80252);
   hext_stack_2->SetBinError(11,2.049844);
   hext_stack_2->SetBinError(12,1.510415);
   hext_stack_2->SetBinError(13,1.506547);
   hext_stack_2->SetBinError(14,2.524817);
   hext_stack_2->SetBinError(15,1.718112);
   hext_stack_2->SetBinError(16,1.612554);
   hext_stack_2->SetBinError(17,1.545918);
   hext_stack_2->SetBinError(18,1.600367);
   hext_stack_2->SetBinError(19,2.330491);
   hext_stack_2->SetBinError(20,1.84465);
   hext_stack_2->SetBinError(21,2.300016);
   hext_stack_2->SetBinError(22,3.294903);
   hext_stack_2->SetBinError(23,3.725477);
   hext_stack_2->SetBinError(24,3.948966);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,6.466185);
   hdirt_stack_3->SetBinContent(2,0.4906667);
   hdirt_stack_3->SetBinContent(3,1.541993);
   hdirt_stack_3->SetBinContent(4,1.517581);
   hdirt_stack_3->SetBinContent(5,2.227035);
   hdirt_stack_3->SetBinContent(6,0.2761429);
   hdirt_stack_3->SetBinContent(7,0.7803342);
   hdirt_stack_3->SetBinContent(8,1.190094);
   hdirt_stack_3->SetBinContent(9,0.9894844);
   hdirt_stack_3->SetBinContent(10,0.3797117);
   hdirt_stack_3->SetBinContent(11,0.7759784);
   hdirt_stack_3->SetBinContent(12,0.4142144);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.271017);
   hdirt_stack_3->SetBinContent(15,0.5884);
   hdirt_stack_3->SetBinContent(16,0.9793975);
   hdirt_stack_3->SetBinContent(17,0.9140499);
   hdirt_stack_3->SetBinContent(18,0.3904862);
   hdirt_stack_3->SetBinContent(19,1.081932);
   hdirt_stack_3->SetBinContent(20,1.345127);
   hdirt_stack_3->SetBinContent(21,2.363783);
   hdirt_stack_3->SetBinContent(22,2.970484);
   hdirt_stack_3->SetBinContent(23,4.703906);
   hdirt_stack_3->SetBinContent(24,3.930972);
   hdirt_stack_3->SetBinError(1,1.32697);
   hdirt_stack_3->SetBinError(2,0.3709725);
   hdirt_stack_3->SetBinError(3,0.6667082);
   hdirt_stack_3->SetBinError(4,0.5937721);
   hdirt_stack_3->SetBinError(5,0.8926713);
   hdirt_stack_3->SetBinError(6,0.1952625);
   hdirt_stack_3->SetBinError(7,0.4243294);
   hdirt_stack_3->SetBinError(8,0.5616695);
   hdirt_stack_3->SetBinError(9,0.5415153);
   hdirt_stack_3->SetBinError(10,0.2716194);
   hdirt_stack_3->SetBinError(11,0.458477);
   hdirt_stack_3->SetBinError(12,0.2391468);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.5442829);
   hdirt_stack_3->SetBinError(15,0.3442576);
   hdirt_stack_3->SetBinError(16,0.5268689);
   hdirt_stack_3->SetBinError(17,0.4788161);
   hdirt_stack_3->SetBinError(18,0.2877099);
   hdirt_stack_3->SetBinError(19,0.5085756);
   hdirt_stack_3->SetBinError(20,0.5398121);
   hdirt_stack_3->SetBinError(21,0.7669527);
   hdirt_stack_3->SetBinError(22,0.9069175);
   hdirt_stack_3->SetBinError(23,1.522815);
   hdirt_stack_3->SetBinError(24,1.142519);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,43.99409);
   houtFV_stack_4->SetBinContent(2,19.73116);
   houtFV_stack_4->SetBinContent(3,12.41579);
   houtFV_stack_4->SetBinContent(4,9.534611);
   houtFV_stack_4->SetBinContent(5,8.250107);
   houtFV_stack_4->SetBinContent(6,5.376461);
   houtFV_stack_4->SetBinContent(7,6.947116);
   houtFV_stack_4->SetBinContent(8,6.833848);
   houtFV_stack_4->SetBinContent(9,4.869113);
   houtFV_stack_4->SetBinContent(10,4.693038);
   houtFV_stack_4->SetBinContent(11,4.589913);
   houtFV_stack_4->SetBinContent(12,5.729868);
   houtFV_stack_4->SetBinContent(13,8.201321);
   houtFV_stack_4->SetBinContent(14,8.634048);
   houtFV_stack_4->SetBinContent(15,8.634075);
   houtFV_stack_4->SetBinContent(16,11.20356);
   houtFV_stack_4->SetBinContent(17,10.3311);
   houtFV_stack_4->SetBinContent(18,11.07292);
   houtFV_stack_4->SetBinContent(19,12.03907);
   houtFV_stack_4->SetBinContent(20,12.30159);
   houtFV_stack_4->SetBinContent(21,16.99768);
   houtFV_stack_4->SetBinContent(22,18.54576);
   houtFV_stack_4->SetBinContent(23,23.56103);
   houtFV_stack_4->SetBinContent(24,27.66451);
   houtFV_stack_4->SetBinError(1,3.313328);
   houtFV_stack_4->SetBinError(2,2.197961);
   houtFV_stack_4->SetBinError(3,1.766915);
   houtFV_stack_4->SetBinError(4,1.520264);
   houtFV_stack_4->SetBinError(5,1.515484);
   houtFV_stack_4->SetBinError(6,1.100749);
   houtFV_stack_4->SetBinError(7,1.287289);
   houtFV_stack_4->SetBinError(8,1.315719);
   houtFV_stack_4->SetBinError(9,1.03408);
   houtFV_stack_4->SetBinError(10,1.056454);
   houtFV_stack_4->SetBinError(11,1.092737);
   houtFV_stack_4->SetBinError(12,1.127499);
   houtFV_stack_4->SetBinError(13,1.48211);
   houtFV_stack_4->SetBinError(14,1.497068);
   houtFV_stack_4->SetBinError(15,1.419847);
   houtFV_stack_4->SetBinError(16,1.632033);
   houtFV_stack_4->SetBinError(17,1.52752);
   houtFV_stack_4->SetBinError(18,1.678278);
   houtFV_stack_4->SetBinError(19,1.802902);
   houtFV_stack_4->SetBinError(20,1.748653);
   houtFV_stack_4->SetBinError(21,2.091465);
   houtFV_stack_4->SetBinError(22,2.164974);
   houtFV_stack_4->SetBinError(23,2.441672);
   houtFV_stack_4->SetBinError(24,2.692726);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,5.228614);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.649684);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.478708);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.490662);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.004904);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.535508);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.05904);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.619208);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.827462);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.295194);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.799226);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.687626);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.260076);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.041116);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.29993);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.443165);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.878364);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.587569);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.009982);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,9.242742);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,9.803406);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,10.4584);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,7.473576);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7491619);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.586293);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4310268);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3929214);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3553864);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4892504);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2988711);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4916312);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5174731);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3408511);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4488676);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4453858);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4902432);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6114764);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.457952);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5051015);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6880958);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6207407);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7847279);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9985469);
   hNCpi0inFVcoh_stack_5->SetBinError(22,1.050344);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.098759);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8880726);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3477539);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.975508);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1731161);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3460456);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.07891307);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,86.7989);
   hNCpi0inFVres_stack_7->SetBinContent(2,40.58951);
   hNCpi0inFVres_stack_7->SetBinContent(3,28.18111);
   hNCpi0inFVres_stack_7->SetBinContent(4,23.1609);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.02398);
   hNCpi0inFVres_stack_7->SetBinContent(6,23.04699);
   hNCpi0inFVres_stack_7->SetBinContent(7,22.42538);
   hNCpi0inFVres_stack_7->SetBinContent(8,24.08213);
   hNCpi0inFVres_stack_7->SetBinContent(9,23.77738);
   hNCpi0inFVres_stack_7->SetBinContent(10,26.40978);
   hNCpi0inFVres_stack_7->SetBinContent(11,29.81956);
   hNCpi0inFVres_stack_7->SetBinContent(12,35.4212);
   hNCpi0inFVres_stack_7->SetBinContent(13,40.76651);
   hNCpi0inFVres_stack_7->SetBinContent(14,42.43247);
   hNCpi0inFVres_stack_7->SetBinContent(15,48.44774);
   hNCpi0inFVres_stack_7->SetBinContent(16,48.07605);
   hNCpi0inFVres_stack_7->SetBinContent(17,54.78137);
   hNCpi0inFVres_stack_7->SetBinContent(18,65.22664);
   hNCpi0inFVres_stack_7->SetBinContent(19,67.70193);
   hNCpi0inFVres_stack_7->SetBinContent(20,81.29114);
   hNCpi0inFVres_stack_7->SetBinContent(21,86.35301);
   hNCpi0inFVres_stack_7->SetBinContent(22,88.62132);
   hNCpi0inFVres_stack_7->SetBinContent(23,86.59262);
   hNCpi0inFVres_stack_7->SetBinContent(24,63.78981);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(1,3.027337);
   hNCpi0inFVres_stack_7->SetBinError(2,2.05689);
   hNCpi0inFVres_stack_7->SetBinError(3,1.726437);
   hNCpi0inFVres_stack_7->SetBinError(4,1.527628);
   hNCpi0inFVres_stack_7->SetBinError(5,1.449337);
   hNCpi0inFVres_stack_7->SetBinError(6,1.565255);
   hNCpi0inFVres_stack_7->SetBinError(7,1.55438);
   hNCpi0inFVres_stack_7->SetBinError(8,1.657308);
   hNCpi0inFVres_stack_7->SetBinError(9,1.608061);
   hNCpi0inFVres_stack_7->SetBinError(10,1.667297);
   hNCpi0inFVres_stack_7->SetBinError(11,1.721884);
   hNCpi0inFVres_stack_7->SetBinError(12,1.994364);
   hNCpi0inFVres_stack_7->SetBinError(13,2.110821);
   hNCpi0inFVres_stack_7->SetBinError(14,2.114253);
   hNCpi0inFVres_stack_7->SetBinError(15,2.349137);
   hNCpi0inFVres_stack_7->SetBinError(16,2.276978);
   hNCpi0inFVres_stack_7->SetBinError(17,2.414043);
   hNCpi0inFVres_stack_7->SetBinError(18,2.642251);
   hNCpi0inFVres_stack_7->SetBinError(19,2.624774);
   hNCpi0inFVres_stack_7->SetBinError(20,2.975238);
   hNCpi0inFVres_stack_7->SetBinError(21,3.041479);
   hNCpi0inFVres_stack_7->SetBinError(22,3.036388);
   hNCpi0inFVres_stack_7->SetBinError(23,2.968023);
   hNCpi0inFVres_stack_7->SetBinError(24,2.66294);
   hNCpi0inFVres_stack_7->SetBinError(25,0.04832419);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,17.68319);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.979586);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.285078);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.96032);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.847392);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.851464);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.653915);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.821068);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.28051);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.187264);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.929193);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.698945);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.807632);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.254177);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.670203);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.656673);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.954285);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.83322);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.50689);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.67445);
   hNCpi0inFVdis_stack_8->SetBinContent(21,17.96103);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.58902);
   hNCpi0inFVdis_stack_8->SetBinContent(23,21.72838);
   hNCpi0inFVdis_stack_8->SetBinContent(24,14.41505);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.367278);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7464723);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7411529);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6275487);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6462888);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7243773);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5822399);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6827485);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6989464);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7655642);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8833121);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9652509);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.876382);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6264614);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8758632);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.973648);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.038512);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.103971);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.159512);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.112371);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.391754);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.399446);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.533097);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.207686);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,35.14366);
   hCCpi0inFV_stack_10->SetBinContent(2,10.40999);
   hCCpi0inFV_stack_10->SetBinContent(3,7.14045);
   hCCpi0inFV_stack_10->SetBinContent(4,6.392406);
   hCCpi0inFV_stack_10->SetBinContent(5,6.83571);
   hCCpi0inFV_stack_10->SetBinContent(6,9.739779);
   hCCpi0inFV_stack_10->SetBinContent(7,8.232341);
   hCCpi0inFV_stack_10->SetBinContent(8,6.26338);
   hCCpi0inFV_stack_10->SetBinContent(9,9.83276);
   hCCpi0inFV_stack_10->SetBinContent(10,8.45467);
   hCCpi0inFV_stack_10->SetBinContent(11,8.562851);
   hCCpi0inFV_stack_10->SetBinContent(12,9.529538);
   hCCpi0inFV_stack_10->SetBinContent(13,12.30575);
   hCCpi0inFV_stack_10->SetBinContent(14,12.84157);
   hCCpi0inFV_stack_10->SetBinContent(15,18.13044);
   hCCpi0inFV_stack_10->SetBinContent(16,15.82541);
   hCCpi0inFV_stack_10->SetBinContent(17,17.26525);
   hCCpi0inFV_stack_10->SetBinContent(18,22.76061);
   hCCpi0inFV_stack_10->SetBinContent(19,19.20761);
   hCCpi0inFV_stack_10->SetBinContent(20,26.41768);
   hCCpi0inFV_stack_10->SetBinContent(21,31.25827);
   hCCpi0inFV_stack_10->SetBinContent(22,32.50812);
   hCCpi0inFV_stack_10->SetBinContent(23,34.98085);
   hCCpi0inFV_stack_10->SetBinContent(24,22.09766);
   hCCpi0inFV_stack_10->SetBinError(1,2.97482);
   hCCpi0inFV_stack_10->SetBinError(2,1.606449);
   hCCpi0inFV_stack_10->SetBinError(3,1.301724);
   hCCpi0inFV_stack_10->SetBinError(4,1.247535);
   hCCpi0inFV_stack_10->SetBinError(5,1.339138);
   hCCpi0inFV_stack_10->SetBinError(6,1.605493);
   hCCpi0inFV_stack_10->SetBinError(7,1.439551);
   hCCpi0inFV_stack_10->SetBinError(8,1.19346);
   hCCpi0inFV_stack_10->SetBinError(9,1.507069);
   hCCpi0inFV_stack_10->SetBinError(10,1.482681);
   hCCpi0inFV_stack_10->SetBinError(11,1.4843);
   hCCpi0inFV_stack_10->SetBinError(12,1.51961);
   hCCpi0inFV_stack_10->SetBinError(13,1.74921);
   hCCpi0inFV_stack_10->SetBinError(14,1.847401);
   hCCpi0inFV_stack_10->SetBinError(15,2.094584);
   hCCpi0inFV_stack_10->SetBinError(16,2.020861);
   hCCpi0inFV_stack_10->SetBinError(17,2.06573);
   hCCpi0inFV_stack_10->SetBinError(18,2.4077);
   hCCpi0inFV_stack_10->SetBinError(19,2.167358);
   hCCpi0inFV_stack_10->SetBinError(20,2.599711);
   hCCpi0inFV_stack_10->SetBinError(21,2.820107);
   hCCpi0inFV_stack_10->SetBinError(22,2.82086);
   hCCpi0inFV_stack_10->SetBinError(23,2.93627);
   hCCpi0inFV_stack_10->SetBinError(24,2.318302);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,13.94241);
   hNCinFV_stack_11->SetBinContent(2,5.958468);
   hNCinFV_stack_11->SetBinContent(3,6.595713);
   hNCinFV_stack_11->SetBinContent(4,4.593294);
   hNCinFV_stack_11->SetBinContent(5,3.322793);
   hNCinFV_stack_11->SetBinContent(6,4.639785);
   hNCinFV_stack_11->SetBinContent(7,3.574452);
   hNCinFV_stack_11->SetBinContent(8,3.424227);
   hNCinFV_stack_11->SetBinContent(9,4.21447);
   hNCinFV_stack_11->SetBinContent(10,5.96354);
   hNCinFV_stack_11->SetBinContent(11,5.557193);
   hNCinFV_stack_11->SetBinContent(12,5.235003);
   hNCinFV_stack_11->SetBinContent(13,6.200592);
   hNCinFV_stack_11->SetBinContent(14,6.74871);
   hNCinFV_stack_11->SetBinContent(15,7.841589);
   hNCinFV_stack_11->SetBinContent(16,7.288984);
   hNCinFV_stack_11->SetBinContent(17,10.94519);
   hNCinFV_stack_11->SetBinContent(18,8.40419);
   hNCinFV_stack_11->SetBinContent(19,11.62893);
   hNCinFV_stack_11->SetBinContent(20,8.746058);
   hNCinFV_stack_11->SetBinContent(21,13.96645);
   hNCinFV_stack_11->SetBinContent(22,17.97576);
   hNCinFV_stack_11->SetBinContent(23,15.91393);
   hNCinFV_stack_11->SetBinContent(24,15.27499);
   hNCinFV_stack_11->SetBinError(1,1.809395);
   hNCinFV_stack_11->SetBinError(2,1.208984);
   hNCinFV_stack_11->SetBinError(3,1.317339);
   hNCinFV_stack_11->SetBinError(4,1.093343);
   hNCinFV_stack_11->SetBinError(5,0.9207963);
   hNCinFV_stack_11->SetBinError(6,1.074441);
   hNCinFV_stack_11->SetBinError(7,0.9213567);
   hNCinFV_stack_11->SetBinError(8,0.8770549);
   hNCinFV_stack_11->SetBinError(9,0.9619446);
   hNCinFV_stack_11->SetBinError(10,1.209805);
   hNCinFV_stack_11->SetBinError(11,1.256807);
   hNCinFV_stack_11->SetBinError(12,1.128051);
   hNCinFV_stack_11->SetBinError(13,1.287372);
   hNCinFV_stack_11->SetBinError(14,1.271909);
   hNCinFV_stack_11->SetBinError(15,1.460743);
   hNCinFV_stack_11->SetBinError(16,1.331727);
   hNCinFV_stack_11->SetBinError(17,1.653612);
   hNCinFV_stack_11->SetBinError(18,1.428065);
   hNCinFV_stack_11->SetBinError(19,1.722556);
   hNCinFV_stack_11->SetBinError(20,1.468248);
   hNCinFV_stack_11->SetBinError(21,1.902871);
   hNCinFV_stack_11->SetBinError(22,2.122321);
   hNCinFV_stack_11->SetBinError(23,2.049041);
   hNCinFV_stack_11->SetBinError(24,1.98095);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,9.796509);
   hnumuCCinFV_stack_12->SetBinContent(2,5.978916);
   hnumuCCinFV_stack_12->SetBinContent(3,4.968558);
   hnumuCCinFV_stack_12->SetBinContent(4,3.702989);
   hnumuCCinFV_stack_12->SetBinContent(5,3.698137);
   hnumuCCinFV_stack_12->SetBinContent(6,2.711012);
   hnumuCCinFV_stack_12->SetBinContent(7,5.073238);
   hnumuCCinFV_stack_12->SetBinContent(8,3.217919);
   hnumuCCinFV_stack_12->SetBinContent(9,4.522758);
   hnumuCCinFV_stack_12->SetBinContent(10,4.608737);
   hnumuCCinFV_stack_12->SetBinContent(11,5.065571);
   hnumuCCinFV_stack_12->SetBinContent(12,6.018815);
   hnumuCCinFV_stack_12->SetBinContent(13,5.383042);
   hnumuCCinFV_stack_12->SetBinContent(14,6.640462);
   hnumuCCinFV_stack_12->SetBinContent(15,7.219398);
   hnumuCCinFV_stack_12->SetBinContent(16,6.847129);
   hnumuCCinFV_stack_12->SetBinContent(17,2.794307);
   hnumuCCinFV_stack_12->SetBinContent(18,7.948409);
   hnumuCCinFV_stack_12->SetBinContent(19,9.087681);
   hnumuCCinFV_stack_12->SetBinContent(20,10.64985);
   hnumuCCinFV_stack_12->SetBinContent(21,12.79209);
   hnumuCCinFV_stack_12->SetBinContent(22,16.80651);
   hnumuCCinFV_stack_12->SetBinContent(23,11.11676);
   hnumuCCinFV_stack_12->SetBinContent(24,12.36839);
   hnumuCCinFV_stack_12->SetBinError(1,1.607992);
   hnumuCCinFV_stack_12->SetBinError(2,1.210135);
   hnumuCCinFV_stack_12->SetBinError(3,1.199565);
   hnumuCCinFV_stack_12->SetBinError(4,1.021365);
   hnumuCCinFV_stack_12->SetBinError(5,1.009899);
   hnumuCCinFV_stack_12->SetBinError(6,0.8792027);
   hnumuCCinFV_stack_12->SetBinError(7,1.183055);
   hnumuCCinFV_stack_12->SetBinError(8,1.024124);
   hnumuCCinFV_stack_12->SetBinError(9,1.067455);
   hnumuCCinFV_stack_12->SetBinError(10,1.092362);
   hnumuCCinFV_stack_12->SetBinError(11,1.185473);
   hnumuCCinFV_stack_12->SetBinError(12,1.319307);
   hnumuCCinFV_stack_12->SetBinError(13,1.437912);
   hnumuCCinFV_stack_12->SetBinError(14,1.298545);
   hnumuCCinFV_stack_12->SetBinError(15,1.812108);
   hnumuCCinFV_stack_12->SetBinError(16,1.586733);
   hnumuCCinFV_stack_12->SetBinError(17,0.8358979);
   hnumuCCinFV_stack_12->SetBinError(18,2.032539);
   hnumuCCinFV_stack_12->SetBinError(19,2.097362);
   hnumuCCinFV_stack_12->SetBinError(20,1.804369);
   hnumuCCinFV_stack_12->SetBinError(21,1.876597);
   hnumuCCinFV_stack_12->SetBinError(22,2.742355);
   hnumuCCinFV_stack_12->SetBinError(23,1.73072);
   hnumuCCinFV_stack_12->SetBinError(24,1.786907);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,4.022908);
   hnueCCinFV_stack_13->SetBinContent(2,1.812027);
   hnueCCinFV_stack_13->SetBinContent(3,0.691541);
   hnueCCinFV_stack_13->SetBinContent(4,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(5,0.7013245);
   hnueCCinFV_stack_13->SetBinContent(6,0.5017868);
   hnueCCinFV_stack_13->SetBinContent(7,1.41044);
   hnueCCinFV_stack_13->SetBinContent(10,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(12,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(15,1.034085e-05);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,1.549665);
   hnueCCinFV_stack_13->SetBinContent(21,1.877624);
   hnueCCinFV_stack_13->SetBinContent(22,1.662528);
   hnueCCinFV_stack_13->SetBinContent(23,3.194874);
   hnueCCinFV_stack_13->SetBinContent(24,8.112475);
   hnueCCinFV_stack_13->SetBinError(1,1.390228);
   hnueCCinFV_stack_13->SetBinError(2,0.8514542);
   hnueCCinFV_stack_13->SetBinError(3,0.4081814);
   hnueCCinFV_stack_13->SetBinError(4,0.4394482);
   hnueCCinFV_stack_13->SetBinError(5,0.4961329);
   hnueCCinFV_stack_13->SetBinError(6,0.5017869);
   hnueCCinFV_stack_13->SetBinError(7,0.6615698);
   hnueCCinFV_stack_13->SetBinError(10,0.3963213);
   hnueCCinFV_stack_13->SetBinError(12,0.4156841);
   hnueCCinFV_stack_13->SetBinError(15,1.034085e-05);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.669487);
   hnueCCinFV_stack_13->SetBinError(21,1.351527);
   hnueCCinFV_stack_13->SetBinError(22,0.6513556);
   hnueCCinFV_stack_13->SetBinError(23,0.9601565);
   hnueCCinFV_stack_13->SetBinError(24,2.238966);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__17->SetBinContent(1,256.3633);
   hmcerror__17->SetBinContent(2,110.3848);
   hmcerror__17->SetBinContent(3,80.85258);
   hmcerror__17->SetBinContent(4,61.25237);
   hmcerror__17->SetBinContent(5,59.23152);
   hmcerror__17->SetBinContent(6,65.40096);
   hmcerror__17->SetBinContent(7,64.16395);
   hmcerror__17->SetBinContent(8,60.96003);
   hmcerror__17->SetBinContent(9,59.87096);
   hmcerror__17->SetBinContent(10,66.52246);
   hmcerror__17->SetBinContent(11,73.11476);
   hmcerror__17->SetBinContent(12,79.74743);
   hmcerror__17->SetBinContent(13,88.67848);
   hmcerror__17->SetBinContent(14,103.0752);
   hmcerror__17->SetBinContent(15,112.1505);
   hmcerror__17->SetBinContent(16,110.4255);
   hmcerror__17->SetBinContent(17,117.9997);
   hmcerror__17->SetBinContent(18,141.6826);
   hmcerror__17->SetBinContent(19,153.5891);
   hmcerror__17->SetBinContent(20,173.5923);
   hmcerror__17->SetBinContent(21,210.1124);
   hmcerror__17->SetBinContent(22,238.3777);
   hmcerror__17->SetBinContent(23,247.2381);
   hmcerror__17->SetBinContent(24,211.2087);
   hmcerror__17->SetBinContent(25,0.1115999);
   hmcerror__17->SetBinError(1,59.16284);
   hmcerror__17->SetBinError(2,29.38127);
   hmcerror__17->SetBinError(3,28.86155);
   hmcerror__17->SetBinError(4,21.43966);
   hmcerror__17->SetBinError(5,22.49023);
   hmcerror__17->SetBinError(6,22.65671);
   hmcerror__17->SetBinError(7,22.71904);
   hmcerror__17->SetBinError(8,25.43485);
   hmcerror__17->SetBinError(9,20.69857);
   hmcerror__17->SetBinError(10,20.52459);
   hmcerror__17->SetBinError(11,21.05067);
   hmcerror__17->SetBinError(12,24.84955);
   hmcerror__17->SetBinError(13,28.87697);
   hmcerror__17->SetBinError(14,31.52743);
   hmcerror__17->SetBinError(15,36.11505);
   hmcerror__17->SetBinError(16,32.25878);
   hmcerror__17->SetBinError(17,38.82626);
   hmcerror__17->SetBinError(18,43.97023);
   hmcerror__17->SetBinError(19,43.45747);
   hmcerror__17->SetBinError(20,47.45982);
   hmcerror__17->SetBinError(21,60.28148);
   hmcerror__17->SetBinError(22,62.95887);
   hmcerror__17->SetBinError(23,65.96197);
   hmcerror__17->SetBinError(24,58.9835);
   hmcerror__17->SetBinError(25,0.475754);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3021[24] = {
   276,
   125,
   84,
   74,
   66,
   69,
   62,
   61,
   70,
   65,
   87,
   80,
   95,
   94,
   119,
   114,
   121,
   157,
   150,
   150,
   189,
   201,
   219,
   210};
   Double_t _felx3021[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3021[24] = {
   16.61325,
   11.18034,
   9.2886,
   8.7275,
   8.2509,
   8.4327,
   8.0018,
   7.9383,
   8.4925,
   8.1893,
   9.4503,
   9.0683,
   9.8686,
   9.8173,
   10.90871,
   10.67708,
   11,
   12.52996,
   12.24745,
   12.24745,
   13.74773,
   14.17745,
   14.79865,
   14.49138};
   Double_t _fehx3021[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3021[24] = {
   16.61325,
   11.18034,
   9.0869,
   8.5253,
   8.0483,
   8.2304,
   7.7989,
   7.7354,
   8.2902,
   7.9866,
   9.2488,
   8.8665,
   9.667,
   9.616,
   10.90871,
   10.67708,
   11,
   12.52996,
   12.24745,
   12.24745,
   13.74773,
   14.17745,
   14.79865,
   14.49138};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(29.10655);
   Graph_Graph3021->SetMaximum(316.5684);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3022[24] = {
   0.2307774,
   0.2661712,
   0.3569651,
   0.3500217,
   0.3797004,
   0.3464278,
   0.354078,
   0.4172381,
   0.3457198,
   0.3085362,
   0.2879127,
   0.3116031,
   0.3256367,
   0.3058682,
   0.3220231,
   0.2921316,
   0.329037,
   0.3103432,
   0.2829464,
   0.2733981,
   0.2869011,
   0.2641139,
   0.2667953,
   0.2792664};
   Double_t _fehx3022[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3022[24] = {
   0.2307774,
   0.2661712,
   0.3569651,
   0.3500217,
   0.3797004,
   0.3464278,
   0.354078,
   0.4172381,
   0.3457198,
   0.3085362,
   0.2879127,
   0.3116031,
   0.3256367,
   0.3058682,
   0.3220231,
   0.2921316,
   0.329037,
   0.3103432,
   0.2829464,
   0.2733981,
   0.2869011,
   0.2641139,
   0.2667953,
   0.2792664};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Angle between photons [cosine]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3023[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3023[24] = {
   0.1939893,
   0.2032771,
   0.1973952,
   0.2100542,
   0.2094708,
   0.1963186,
   0.2051338,
   0.2227872,
   0.2238732,
   0.2180674,
   0.2245045,
   0.2166218,
   0.2134892,
   0.2085015,
   0.2158698,
   0.2249407,
   0.2318631,
   0.2278802,
   0.2318046,
   0.2324388,
   0.2345618,
   0.2289167,
   0.2164581,
   0.189145};
   Double_t _fehx3023[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3023[24] = {
   0.1939893,
   0.2032771,
   0.1973952,
   0.2100542,
   0.2094708,
   0.1963186,
   0.2051338,
   0.2227872,
   0.2238732,
   0.2180674,
   0.2245045,
   0.2166218,
   0.2134892,
   0.2085015,
   0.2158698,
   0.2249407,
   0.2318631,
   0.2278802,
   0.2318046,
   0.2324388,
   0.2345618,
   0.2289167,
   0.2164581,
   0.189145};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3024[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3024[24] = {
   1.076597,
   1.132402,
   1.038928,
   1.208117,
   1.114272,
   1.05503,
   0.9662747,
   1.000656,
   1.169181,
   0.9771136,
   1.18991,
   1.003167,
   1.071286,
   0.9119552,
   1.061074,
   1.03237,
   1.025427,
   1.108111,
   0.9766321,
   0.8640934,
   0.8995185,
   0.8431996,
   0.8857856,
   0.9942772};
   Double_t _felx3024[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3024[24] = {
   0.06480354,
   0.1012851,
   0.1148832,
   0.1424843,
   0.1392991,
   0.1289385,
   0.1247087,
   0.1302214,
   0.1418467,
   0.1231058,
   0.129253,
   0.1137128,
   0.1112852,
   0.09524402,
   0.09726853,
   0.09669034,
   0.09322061,
   0.08843686,
   0.07974168,
   0.07055293,
   0.06543034,
   0.05947471,
   0.05985585,
   0.06861164};
   Double_t _fehx3024[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3024[24] = {
   0.06480354,
   0.1012851,
   0.1123885,
   0.1391832,
   0.1358787,
   0.1258453,
   0.1215464,
   0.126893,
   0.1384678,
   0.1200587,
   0.126497,
   0.1111823,
   0.1090118,
   0.09329108,
   0.09726853,
   0.09669034,
   0.09322061,
   0.08843686,
   0.07974168,
   0.07055293,
   0.06543034,
   0.05947471,
   0.05985585,
   0.06861164};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.7273674);
   Graph_Graph3024->SetMaximum(1.403657);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,-1,1);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

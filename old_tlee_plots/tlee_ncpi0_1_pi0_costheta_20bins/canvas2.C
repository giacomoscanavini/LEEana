#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Jan  9 21:29:48 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",138,161,1200,900);
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
   pad1->Range(-1.307692,-20.2991,1.25641,2244.653);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__4->SetBinContent(1,148.3575);
   hmc__4->SetBinContent(2,121.2317);
   hmc__4->SetBinContent(3,108.9183);
   hmc__4->SetBinContent(4,104.2721);
   hmc__4->SetBinContent(5,110.4938);
   hmc__4->SetBinContent(6,114.272);
   hmc__4->SetBinContent(7,97.34641);
   hmc__4->SetBinContent(8,118.1186);
   hmc__4->SetBinContent(9,133.517);
   hmc__4->SetBinContent(10,142.598);
   hmc__4->SetBinContent(11,155.894);
   hmc__4->SetBinContent(12,186.1564);
   hmc__4->SetBinContent(13,202.782);
   hmc__4->SetBinContent(14,231.4227);
   hmc__4->SetBinContent(15,269.6293);
   hmc__4->SetBinContent(16,350.1186);
   hmc__4->SetBinContent(17,423.1406);
   hmc__4->SetBinContent(18,486.5088);
   hmc__4->SetBinContent(19,665.2188);
   hmc__4->SetBinContent(20,1014.955);
   hmc__4->SetBinError(1,42.99757);
   hmc__4->SetBinError(2,39.97776);
   hmc__4->SetBinError(3,37.57233);
   hmc__4->SetBinError(4,36.15568);
   hmc__4->SetBinError(5,36.78623);
   hmc__4->SetBinError(6,37.50549);
   hmc__4->SetBinError(7,33.96555);
   hmc__4->SetBinError(8,40.62864);
   hmc__4->SetBinError(9,45.14403);
   hmc__4->SetBinError(10,47.87882);
   hmc__4->SetBinError(11,53.91319);
   hmc__4->SetBinError(12,58.41866);
   hmc__4->SetBinError(13,63.88821);
   hmc__4->SetBinError(14,73.89322);
   hmc__4->SetBinError(15,84.28236);
   hmc__4->SetBinError(16,109.6214);
   hmc__4->SetBinError(17,132.8474);
   hmc__4->SetBinError(18,141.1303);
   hmc__4->SetBinError(19,174.6082);
   hmc__4->SetBinError(20,246.7131);
   hmc__4->SetBinError(21,0.3895343);
   hmc__4->SetMinimum(-20.2991);
   hmc__4->SetMaximum(2131.406);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,-1,1);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(1065.703);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,4.940907);
   hbadmatch_stack_1->SetBinContent(2,3.897577);
   hbadmatch_stack_1->SetBinContent(3,2.529197);
   hbadmatch_stack_1->SetBinContent(4,2.350322);
   hbadmatch_stack_1->SetBinContent(5,2.346383);
   hbadmatch_stack_1->SetBinContent(6,4.636854);
   hbadmatch_stack_1->SetBinContent(7,1.151333);
   hbadmatch_stack_1->SetBinContent(8,4.400742);
   hbadmatch_stack_1->SetBinContent(9,2.777472);
   hbadmatch_stack_1->SetBinContent(10,3.332767);
   hbadmatch_stack_1->SetBinContent(11,6.845205);
   hbadmatch_stack_1->SetBinContent(12,8.570663);
   hbadmatch_stack_1->SetBinContent(13,5.361138);
   hbadmatch_stack_1->SetBinContent(14,6.236863);
   hbadmatch_stack_1->SetBinContent(15,3.611906);
   hbadmatch_stack_1->SetBinContent(16,8.266445);
   hbadmatch_stack_1->SetBinContent(17,8.876352);
   hbadmatch_stack_1->SetBinContent(18,11.23128);
   hbadmatch_stack_1->SetBinContent(19,9.448577);
   hbadmatch_stack_1->SetBinContent(20,18.61894);
   hbadmatch_stack_1->SetBinError(1,1.176822);
   hbadmatch_stack_1->SetBinError(2,1.830852);
   hbadmatch_stack_1->SetBinError(3,0.7477289);
   hbadmatch_stack_1->SetBinError(4,0.6916933);
   hbadmatch_stack_1->SetBinError(5,0.8309163);
   hbadmatch_stack_1->SetBinError(6,1.129974);
   hbadmatch_stack_1->SetBinError(7,0.4851287);
   hbadmatch_stack_1->SetBinError(8,1.140048);
   hbadmatch_stack_1->SetBinError(9,0.8801757);
   hbadmatch_stack_1->SetBinError(10,0.8901832);
   hbadmatch_stack_1->SetBinError(11,2.071272);
   hbadmatch_stack_1->SetBinError(12,2.377991);
   hbadmatch_stack_1->SetBinError(13,1.522958);
   hbadmatch_stack_1->SetBinError(14,1.45571);
   hbadmatch_stack_1->SetBinError(15,0.9952661);
   hbadmatch_stack_1->SetBinError(16,1.505984);
   hbadmatch_stack_1->SetBinError(17,1.62435);
   hbadmatch_stack_1->SetBinError(18,1.829786);
   hbadmatch_stack_1->SetBinError(19,1.539278);
   hbadmatch_stack_1->SetBinError(20,2.433443);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,12.40975);
   hext_stack_2->SetBinContent(2,10.20082);
   hext_stack_2->SetBinContent(3,7.384983);
   hext_stack_2->SetBinContent(4,9.697655);
   hext_stack_2->SetBinContent(5,9.857649);
   hext_stack_2->SetBinContent(6,18.64554);
   hext_stack_2->SetBinContent(7,7.302782);
   hext_stack_2->SetBinContent(8,14.54207);
   hext_stack_2->SetBinContent(9,23.22187);
   hext_stack_2->SetBinContent(10,20.34696);
   hext_stack_2->SetBinContent(11,16.92542);
   hext_stack_2->SetBinContent(12,26.47902);
   hext_stack_2->SetBinContent(13,24.19784);
   hext_stack_2->SetBinContent(14,28.44417);
   hext_stack_2->SetBinContent(15,38.01049);
   hext_stack_2->SetBinContent(16,36.17232);
   hext_stack_2->SetBinContent(17,33.55674);
   hext_stack_2->SetBinContent(18,28.47295);
   hext_stack_2->SetBinContent(19,48.93355);
   hext_stack_2->SetBinContent(20,51.95013);
   hext_stack_2->SetBinError(1,2.582362);
   hext_stack_2->SetBinError(2,2.111272);
   hext_stack_2->SetBinError(3,1.722456);
   hext_stack_2->SetBinError(4,2.15278);
   hext_stack_2->SetBinError(5,2.149306);
   hext_stack_2->SetBinError(6,3.043953);
   hext_stack_2->SetBinError(7,1.704924);
   hext_stack_2->SetBinError(8,2.610856);
   hext_stack_2->SetBinError(9,3.246642);
   hext_stack_2->SetBinError(10,3.191901);
   hext_stack_2->SetBinError(11,2.698136);
   hext_stack_2->SetBinError(12,3.650863);
   hext_stack_2->SetBinError(13,3.243464);
   hext_stack_2->SetBinError(14,3.700395);
   hext_stack_2->SetBinError(15,4.343724);
   hext_stack_2->SetBinError(16,4.061739);
   hext_stack_2->SetBinError(17,3.930864);
   hext_stack_2->SetBinError(18,3.399662);
   hext_stack_2->SetBinError(19,4.689915);
   hext_stack_2->SetBinError(20,5.020928);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,1.451415);
   hdirt_stack_3->SetBinContent(2,1.092075);
   hdirt_stack_3->SetBinContent(3,1.766963);
   hdirt_stack_3->SetBinContent(4,1.314436);
   hdirt_stack_3->SetBinContent(5,0.6413963);
   hdirt_stack_3->SetBinContent(6,2.131133);
   hdirt_stack_3->SetBinContent(7,1.052121);
   hdirt_stack_3->SetBinContent(8,1.330383);
   hdirt_stack_3->SetBinContent(9,0.742136);
   hdirt_stack_3->SetBinContent(10,0.4377912);
   hdirt_stack_3->SetBinContent(11,1.093975);
   hdirt_stack_3->SetBinContent(12,4.338284);
   hdirt_stack_3->SetBinContent(13,2.676391);
   hdirt_stack_3->SetBinContent(14,2.780889);
   hdirt_stack_3->SetBinContent(15,2.26692);
   hdirt_stack_3->SetBinContent(16,3.308984);
   hdirt_stack_3->SetBinContent(17,5.250106);
   hdirt_stack_3->SetBinContent(18,5.12096);
   hdirt_stack_3->SetBinContent(19,3.739344);
   hdirt_stack_3->SetBinContent(20,6.728958);
   hdirt_stack_3->SetBinError(1,0.4988546);
   hdirt_stack_3->SetBinError(2,0.509418);
   hdirt_stack_3->SetBinError(3,0.7174075);
   hdirt_stack_3->SetBinError(4,0.6241584);
   hdirt_stack_3->SetBinError(5,0.4141708);
   hdirt_stack_3->SetBinError(6,0.7803344);
   hdirt_stack_3->SetBinError(7,0.4983258);
   hdirt_stack_3->SetBinError(8,0.6284736);
   hdirt_stack_3->SetBinError(9,0.374946);
   hdirt_stack_3->SetBinError(10,0.3095651);
   hdirt_stack_3->SetBinError(11,0.5705956);
   hdirt_stack_3->SetBinError(12,1.349195);
   hdirt_stack_3->SetBinError(13,0.8614293);
   hdirt_stack_3->SetBinError(14,0.9017967);
   hdirt_stack_3->SetBinError(15,0.810195);
   hdirt_stack_3->SetBinError(16,0.8719268);
   hdirt_stack_3->SetBinError(17,1.484791);
   hdirt_stack_3->SetBinError(18,1.177728);
   hdirt_stack_3->SetBinError(19,1.091487);
   hdirt_stack_3->SetBinError(20,1.343423);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,11.38306);
   houtFV_stack_4->SetBinContent(2,6.853936);
   houtFV_stack_4->SetBinContent(3,7.803798);
   houtFV_stack_4->SetBinContent(4,9.150577);
   houtFV_stack_4->SetBinContent(5,9.412209);
   houtFV_stack_4->SetBinContent(6,7.395333);
   houtFV_stack_4->SetBinContent(7,6.81505);
   houtFV_stack_4->SetBinContent(8,8.557736);
   houtFV_stack_4->SetBinContent(9,8.480886);
   houtFV_stack_4->SetBinContent(10,10.54196);
   houtFV_stack_4->SetBinContent(11,11.07411);
   houtFV_stack_4->SetBinContent(12,13.45845);
   houtFV_stack_4->SetBinContent(13,13.91702);
   houtFV_stack_4->SetBinContent(14,19.6612);
   houtFV_stack_4->SetBinContent(15,22.10943);
   houtFV_stack_4->SetBinContent(16,30.94806);
   houtFV_stack_4->SetBinContent(17,38.35772);
   houtFV_stack_4->SetBinContent(18,40.10166);
   houtFV_stack_4->SetBinContent(19,46.11561);
   houtFV_stack_4->SetBinContent(20,48.98676);
   houtFV_stack_4->SetBinError(1,1.770395);
   houtFV_stack_4->SetBinError(2,1.268258);
   houtFV_stack_4->SetBinError(3,1.392296);
   houtFV_stack_4->SetBinError(4,1.576575);
   houtFV_stack_4->SetBinError(5,1.555516);
   houtFV_stack_4->SetBinError(6,1.305721);
   houtFV_stack_4->SetBinError(7,1.257251);
   houtFV_stack_4->SetBinError(8,1.474146);
   houtFV_stack_4->SetBinError(9,1.358155);
   houtFV_stack_4->SetBinError(10,1.585683);
   houtFV_stack_4->SetBinError(11,1.701182);
   houtFV_stack_4->SetBinError(12,1.832837);
   houtFV_stack_4->SetBinError(13,1.872824);
   houtFV_stack_4->SetBinError(14,2.23255);
   houtFV_stack_4->SetBinError(15,2.317597);
   houtFV_stack_4->SetBinError(16,2.835462);
   houtFV_stack_4->SetBinError(17,3.045991);
   houtFV_stack_4->SetBinError(18,3.177144);
   houtFV_stack_4->SetBinError(19,3.361261);
   houtFV_stack_4->SetBinError(20,3.477269);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.687916);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6171175);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7157845);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4961244);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5805777);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.477931);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.221373);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5270647);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3852539);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3634356);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2491205);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.005359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.7927009);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.408164);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.362031);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.414495);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,15.46126);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,60.67639);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.837676);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.20997);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2121246);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1829821);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2379201);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2967592);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.09170671);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2261944);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2201053);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2511433);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.09750722);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4161124);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3389999);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.600739);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7076925);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.005477);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.39847);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.92949);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7982897);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5983617);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2929241);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1501919);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4157971);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2530937);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2789553);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2944414);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5025284);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2610048);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4107263);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6131324);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3130464);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2386506);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7590101);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.036792);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.119831);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.801382);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.733148);
   hNCpi0inFVqe_stack_6->SetBinContent(20,3.129516);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3017837);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2086728);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.134529);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05758167);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1521572);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1364914);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1369245);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1234173);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2222773);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1240522);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1627891);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2095301);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1467651);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.0913559);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2324404);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2668229);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2392664);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5361163);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.5582767);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.503235);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,48.17356);
   hNCpi0inFVres_stack_7->SetBinContent(2,40.36602);
   hNCpi0inFVres_stack_7->SetBinContent(3,40.06907);
   hNCpi0inFVres_stack_7->SetBinContent(4,39.46456);
   hNCpi0inFVres_stack_7->SetBinContent(5,40.6293);
   hNCpi0inFVres_stack_7->SetBinContent(6,39.63857);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.8682);
   hNCpi0inFVres_stack_7->SetBinContent(8,41.4053);
   hNCpi0inFVres_stack_7->SetBinContent(9,46.11551);
   hNCpi0inFVres_stack_7->SetBinContent(10,55.36591);
   hNCpi0inFVres_stack_7->SetBinContent(11,58.04634);
   hNCpi0inFVres_stack_7->SetBinContent(12,69.02747);
   hNCpi0inFVres_stack_7->SetBinContent(13,78.46883);
   hNCpi0inFVres_stack_7->SetBinContent(14,92.26054);
   hNCpi0inFVres_stack_7->SetBinContent(15,105.0996);
   hNCpi0inFVres_stack_7->SetBinContent(16,138.9339);
   hNCpi0inFVres_stack_7->SetBinContent(17,168.8483);
   hNCpi0inFVres_stack_7->SetBinContent(18,203.3526);
   hNCpi0inFVres_stack_7->SetBinContent(19,262.0768);
   hNCpi0inFVres_stack_7->SetBinContent(20,345.7308);
   hNCpi0inFVres_stack_7->SetBinError(1,2.289221);
   hNCpi0inFVres_stack_7->SetBinError(2,2.007014);
   hNCpi0inFVres_stack_7->SetBinError(3,2.050644);
   hNCpi0inFVres_stack_7->SetBinError(4,1.973124);
   hNCpi0inFVres_stack_7->SetBinError(5,2.073538);
   hNCpi0inFVres_stack_7->SetBinError(6,1.955433);
   hNCpi0inFVres_stack_7->SetBinError(7,1.930758);
   hNCpi0inFVres_stack_7->SetBinError(8,1.946672);
   hNCpi0inFVres_stack_7->SetBinError(9,2.07682);
   hNCpi0inFVres_stack_7->SetBinError(10,2.416728);
   hNCpi0inFVres_stack_7->SetBinError(11,2.348029);
   hNCpi0inFVres_stack_7->SetBinError(12,2.630392);
   hNCpi0inFVres_stack_7->SetBinError(13,2.925084);
   hNCpi0inFVres_stack_7->SetBinError(14,3.071317);
   hNCpi0inFVres_stack_7->SetBinError(15,3.291197);
   hNCpi0inFVres_stack_7->SetBinError(16,3.895941);
   hNCpi0inFVres_stack_7->SetBinError(17,4.285879);
   hNCpi0inFVres_stack_7->SetBinError(18,4.675446);
   hNCpi0inFVres_stack_7->SetBinError(19,5.333167);
   hNCpi0inFVres_stack_7->SetBinError(20,6.382181);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.14375);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.166655);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.743983);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.569305);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.348116);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.096631);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.139054);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.879808);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.619796);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.72392);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.871437);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.91577);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.74986);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.46032);
   hNCpi0inFVdis_stack_8->SetBinContent(15,17.27439);
   hNCpi0inFVdis_stack_8->SetBinContent(16,24.00313);
   hNCpi0inFVdis_stack_8->SetBinContent(17,30.16565);
   hNCpi0inFVdis_stack_8->SetBinContent(18,41.80183);
   hNCpi0inFVdis_stack_8->SetBinContent(19,61.08733);
   hNCpi0inFVdis_stack_8->SetBinContent(20,106.6188);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.059034);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.072024);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8781996);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.04);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7344328);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6947489);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9396502);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9606192);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9239967);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8083373);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8164305);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.177681);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.002634);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.295648);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.248179);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.814008);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.809512);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.198729);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.748954);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.7088);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.164166);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.165733);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2053722);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2999468);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1302849);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1339912);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1213703);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1541907);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,21.33137);
   hCCpi0inFV_stack_10->SetBinContent(2,22.64069);
   hCCpi0inFV_stack_10->SetBinContent(3,18.33924);
   hCCpi0inFV_stack_10->SetBinContent(4,14.40456);
   hCCpi0inFV_stack_10->SetBinContent(5,17.91138);
   hCCpi0inFV_stack_10->SetBinContent(6,17.04881);
   hCCpi0inFV_stack_10->SetBinContent(7,15.57403);
   hCCpi0inFV_stack_10->SetBinContent(8,16.5365);
   hCCpi0inFV_stack_10->SetBinContent(9,15.01243);
   hCCpi0inFV_stack_10->SetBinContent(10,19.19477);
   hCCpi0inFV_stack_10->SetBinContent(11,25.14939);
   hCCpi0inFV_stack_10->SetBinContent(12,22.63456);
   hCCpi0inFV_stack_10->SetBinContent(13,29.75214);
   hCCpi0inFV_stack_10->SetBinContent(14,30.17255);
   hCCpi0inFV_stack_10->SetBinContent(15,34.22813);
   hCCpi0inFV_stack_10->SetBinContent(16,45.00768);
   hCCpi0inFV_stack_10->SetBinContent(17,69.01441);
   hCCpi0inFV_stack_10->SetBinContent(18,72.17683);
   hCCpi0inFV_stack_10->SetBinContent(19,105.6617);
   hCCpi0inFV_stack_10->SetBinContent(20,164.1301);
   hCCpi0inFV_stack_10->SetBinError(1,2.290497);
   hCCpi0inFV_stack_10->SetBinError(2,2.422384);
   hCCpi0inFV_stack_10->SetBinError(3,2.142728);
   hCCpi0inFV_stack_10->SetBinError(4,1.875794);
   hCCpi0inFV_stack_10->SetBinError(5,2.00056);
   hCCpi0inFV_stack_10->SetBinError(6,2.067308);
   hCCpi0inFV_stack_10->SetBinError(7,1.935681);
   hCCpi0inFV_stack_10->SetBinError(8,2.052914);
   hCCpi0inFV_stack_10->SetBinError(9,1.855807);
   hCCpi0inFV_stack_10->SetBinError(10,2.180176);
   hCCpi0inFV_stack_10->SetBinError(11,2.492615);
   hCCpi0inFV_stack_10->SetBinError(12,2.397311);
   hCCpi0inFV_stack_10->SetBinError(13,2.783599);
   hCCpi0inFV_stack_10->SetBinError(14,2.799686);
   hCCpi0inFV_stack_10->SetBinError(15,2.926403);
   hCCpi0inFV_stack_10->SetBinError(16,3.366425);
   hCCpi0inFV_stack_10->SetBinError(17,4.224151);
   hCCpi0inFV_stack_10->SetBinError(18,4.211634);
   hCCpi0inFV_stack_10->SetBinError(19,5.16712);
   hCCpi0inFV_stack_10->SetBinError(20,6.427561);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,16.57877);
   hNCinFV_stack_11->SetBinContent(2,12.53679);
   hNCinFV_stack_11->SetBinContent(3,11.15873);
   hNCinFV_stack_11->SetBinContent(4,7.784202);
   hNCinFV_stack_11->SetBinContent(5,12.34954);
   hNCinFV_stack_11->SetBinContent(6,7.198491);
   hNCinFV_stack_11->SetBinContent(7,8.214117);
   hNCinFV_stack_11->SetBinContent(8,4.57688);
   hNCinFV_stack_11->SetBinContent(9,10.77137);
   hNCinFV_stack_11->SetBinContent(10,9.384295);
   hNCinFV_stack_11->SetBinContent(11,8.703396);
   hNCinFV_stack_11->SetBinContent(12,11.87903);
   hNCinFV_stack_11->SetBinContent(13,11.53559);
   hNCinFV_stack_11->SetBinContent(14,13.36849);
   hNCinFV_stack_11->SetBinContent(15,19.52483);
   hNCinFV_stack_11->SetBinContent(16,27.24564);
   hNCinFV_stack_11->SetBinContent(17,29.23252);
   hNCinFV_stack_11->SetBinContent(18,38.78919);
   hNCinFV_stack_11->SetBinContent(19,65.76782);
   hNCinFV_stack_11->SetBinContent(20,118.4297);
   hNCinFV_stack_11->SetBinError(1,2.094152);
   hNCinFV_stack_11->SetBinError(2,1.826498);
   hNCinFV_stack_11->SetBinError(3,1.696943);
   hNCinFV_stack_11->SetBinError(4,1.41579);
   hNCinFV_stack_11->SetBinError(5,1.978082);
   hNCinFV_stack_11->SetBinError(6,1.281206);
   hNCinFV_stack_11->SetBinError(7,1.410238);
   hNCinFV_stack_11->SetBinError(8,1.120989);
   hNCinFV_stack_11->SetBinError(9,1.751996);
   hNCinFV_stack_11->SetBinError(10,1.530823);
   hNCinFV_stack_11->SetBinError(11,1.648877);
   hNCinFV_stack_11->SetBinError(12,1.704319);
   hNCinFV_stack_11->SetBinError(13,1.68296);
   hNCinFV_stack_11->SetBinError(14,2.006945);
   hNCinFV_stack_11->SetBinError(15,2.37294);
   hNCinFV_stack_11->SetBinError(16,2.830389);
   hNCinFV_stack_11->SetBinError(17,2.965653);
   hNCinFV_stack_11->SetBinError(18,3.333416);
   hNCinFV_stack_11->SetBinError(19,4.410159);
   hNCinFV_stack_11->SetBinError(20,6.276736);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,16.19359);
   hnumuCCinFV_stack_12->SetBinContent(2,12.19172);
   hnumuCCinFV_stack_12->SetBinContent(3,10.07642);
   hnumuCCinFV_stack_12->SetBinContent(4,9.209627);
   hnumuCCinFV_stack_12->SetBinContent(5,9.64272);
   hnumuCCinFV_stack_12->SetBinContent(6,9.743149);
   hnumuCCinFV_stack_12->SetBinContent(7,9.847681);
   hnumuCCinFV_stack_12->SetBinContent(8,17.04884);
   hnumuCCinFV_stack_12->SetBinContent(9,15.66163);
   hnumuCCinFV_stack_12->SetBinContent(10,15.45018);
   hnumuCCinFV_stack_12->SetBinContent(11,20.35361);
   hnumuCCinFV_stack_12->SetBinContent(12,17.23673);
   hnumuCCinFV_stack_12->SetBinContent(13,24.14325);
   hnumuCCinFV_stack_12->SetBinContent(14,19.42731);
   hnumuCCinFV_stack_12->SetBinContent(15,23.64866);
   hnumuCCinFV_stack_12->SetBinContent(16,30.99941);
   hnumuCCinFV_stack_12->SetBinContent(17,33.15581);
   hnumuCCinFV_stack_12->SetBinContent(18,31.55261);
   hnumuCCinFV_stack_12->SetBinContent(19,40.8648);
   hnumuCCinFV_stack_12->SetBinContent(20,72.95605);
   hnumuCCinFV_stack_12->SetBinError(1,2.065773);
   hnumuCCinFV_stack_12->SetBinError(2,1.892101);
   hnumuCCinFV_stack_12->SetBinError(3,1.960597);
   hnumuCCinFV_stack_12->SetBinError(4,1.564294);
   hnumuCCinFV_stack_12->SetBinError(5,1.956762);
   hnumuCCinFV_stack_12->SetBinError(6,1.776072);
   hnumuCCinFV_stack_12->SetBinError(7,1.89417);
   hnumuCCinFV_stack_12->SetBinError(8,2.736173);
   hnumuCCinFV_stack_12->SetBinError(9,2.290802);
   hnumuCCinFV_stack_12->SetBinError(10,2.192633);
   hnumuCCinFV_stack_12->SetBinError(11,2.658258);
   hnumuCCinFV_stack_12->SetBinError(12,2.560966);
   hnumuCCinFV_stack_12->SetBinError(13,2.906916);
   hnumuCCinFV_stack_12->SetBinError(14,2.402029);
   hnumuCCinFV_stack_12->SetBinError(15,2.875482);
   hnumuCCinFV_stack_12->SetBinError(16,4.407504);
   hnumuCCinFV_stack_12->SetBinError(17,3.367904);
   hnumuCCinFV_stack_12->SetBinError(18,3.148238);
   hnumuCCinFV_stack_12->SetBinError(19,3.470669);
   hnumuCCinFV_stack_12->SetBinError(20,4.324279);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.254362);
   hnueCCinFV_stack_13->SetBinContent(2,1.051663);
   hnueCCinFV_stack_13->SetBinContent(3,1.037208);
   hnueCCinFV_stack_13->SetBinContent(4,1.664836);
   hnueCCinFV_stack_13->SetBinContent(5,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(6,1.006494);
   hnueCCinFV_stack_13->SetBinContent(7,0.8503433);
   hnueCCinFV_stack_13->SetBinContent(9,1.226073);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.6905964);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,2.202207);
   hnueCCinFV_stack_13->SetBinContent(15,2.266258);
   hnueCCinFV_stack_13->SetBinContent(16,1.622312);
   hnueCCinFV_stack_13->SetBinContent(17,2.167258);
   hnueCCinFV_stack_13->SetBinContent(18,3.655979);
   hnueCCinFV_stack_13->SetBinContent(19,3.123549);
   hnueCCinFV_stack_13->SetBinContent(20,16.69891);
   hnueCCinFV_stack_13->SetBinError(1,0.6813947);
   hnueCCinFV_stack_13->SetBinError(2,0.4723117);
   hnueCCinFV_stack_13->SetBinError(3,0.5203938);
   hnueCCinFV_stack_13->SetBinError(4,1.155559);
   hnueCCinFV_stack_13->SetBinError(5,0.3401778);
   hnueCCinFV_stack_13->SetBinError(6,0.5976004);
   hnueCCinFV_stack_13->SetBinError(7,0.6473186);
   hnueCCinFV_stack_13->SetBinError(9,0.56795);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.4010541);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.8569281);
   hnueCCinFV_stack_13->SetBinError(15,1.372005);
   hnueCCinFV_stack_13->SetBinError(16,0.7115599);
   hnueCCinFV_stack_13->SetBinError(17,0.8129335);
   hnueCCinFV_stack_13->SetBinError(18,1.151579);
   hnueCCinFV_stack_13->SetBinError(19,0.8534427);
   hnueCCinFV_stack_13->SetBinError(20,2.695805);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__5->SetBinContent(1,148.3575);
   hmcerror__5->SetBinContent(2,121.2317);
   hmcerror__5->SetBinContent(3,108.9183);
   hmcerror__5->SetBinContent(4,104.2721);
   hmcerror__5->SetBinContent(5,110.4938);
   hmcerror__5->SetBinContent(6,114.272);
   hmcerror__5->SetBinContent(7,97.34641);
   hmcerror__5->SetBinContent(8,118.1186);
   hmcerror__5->SetBinContent(9,133.517);
   hmcerror__5->SetBinContent(10,142.598);
   hmcerror__5->SetBinContent(11,155.894);
   hmcerror__5->SetBinContent(12,186.1564);
   hmcerror__5->SetBinContent(13,202.782);
   hmcerror__5->SetBinContent(14,231.4227);
   hmcerror__5->SetBinContent(15,269.6293);
   hmcerror__5->SetBinContent(16,350.1186);
   hmcerror__5->SetBinContent(17,423.1406);
   hmcerror__5->SetBinContent(18,486.5088);
   hmcerror__5->SetBinContent(19,665.2188);
   hmcerror__5->SetBinContent(20,1014.955);
   hmcerror__5->SetBinError(1,42.99757);
   hmcerror__5->SetBinError(2,39.97776);
   hmcerror__5->SetBinError(3,37.57233);
   hmcerror__5->SetBinError(4,36.15568);
   hmcerror__5->SetBinError(5,36.78623);
   hmcerror__5->SetBinError(6,37.50549);
   hmcerror__5->SetBinError(7,33.96555);
   hmcerror__5->SetBinError(8,40.62864);
   hmcerror__5->SetBinError(9,45.14403);
   hmcerror__5->SetBinError(10,47.87882);
   hmcerror__5->SetBinError(11,53.91319);
   hmcerror__5->SetBinError(12,58.41866);
   hmcerror__5->SetBinError(13,63.88821);
   hmcerror__5->SetBinError(14,73.89322);
   hmcerror__5->SetBinError(15,84.28236);
   hmcerror__5->SetBinError(16,109.6214);
   hmcerror__5->SetBinError(17,132.8474);
   hmcerror__5->SetBinError(18,141.1303);
   hmcerror__5->SetBinError(19,174.6082);
   hmcerror__5->SetBinError(20,246.7131);
   hmcerror__5->SetBinError(21,0.3895343);
   hmcerror__5->SetEntries(5727.925);

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
   Double_t _fy3005[20] = {
   131,
   107,
   118,
   94,
   121,
   113,
   119,
   148,
   120,
   125,
   138,
   167,
   188,
   235,
   230,
   321,
   380,
   505,
   673,
   941};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
   11.44552,
   10.34408,
   10.86278,
   9.8173,
   11,
   10.63015,
   10.90871,
   12.16553,
   10.95445,
   11.18034,
   11.74734,
   12.92285,
   13.71131,
   15.32971,
   15.16575,
   17.91647,
   19.49359,
   22.47221,
   25.94224,
   30.67572};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
   11.44552,
   10.34408,
   10.86278,
   9.616,
   11,
   10.63015,
   10.90871,
   12.16553,
   10.95445,
   11.18034,
   11.74734,
   12.92285,
   13.71131,
   15.32971,
   15.16575,
   17.91647,
   19.49359,
   22.47221,
   25.94224,
   30.67572};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(75.76443);
   Graph_Graph3005->SetMaximum(1060.425);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.1/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.1","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.9","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  406.4","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 445.0","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fely3006[20] = {
   0.2898241,
   0.3297632,
   0.3449589,
   0.3467436,
   0.3329256,
   0.3282124,
   0.3489142,
   0.3439649,
   0.3381146,
   0.3357607,
   0.3458325,
   0.313815,
   0.3150586,
   0.3192998,
   0.3125861,
   0.3130978,
   0.3139556,
   0.2900878,
   0.2624824,
   0.2430779};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   0.2898241,
   0.3297632,
   0.3449589,
   0.3467436,
   0.3329256,
   0.3282124,
   0.3489142,
   0.3439649,
   0.3381146,
   0.3357607,
   0.3458325,
   0.313815,
   0.3150586,
   0.3192998,
   0.3125861,
   0.3130978,
   0.3139556,
   0.2900878,
   0.2624824,
   0.2430779};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-1.2,1.2);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   Double_t _fely3007[20] = {
   0.2676252,
   0.2848076,
   0.2871882,
   0.3129763,
   0.2990775,
   0.2987879,
   0.3151738,
   0.2965139,
   0.2958301,
   0.3099501,
   0.3093305,
   0.2905639,
   0.2968933,
   0.3000408,
   0.2975417,
   0.297915,
   0.2851042,
   0.2721336,
   0.2461547,
   0.2259268};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.2676252,
   0.2848076,
   0.2871882,
   0.3129763,
   0.2990775,
   0.2987879,
   0.3151738,
   0.2965139,
   0.2958301,
   0.3099501,
   0.3093305,
   0.2905639,
   0.2968933,
   0.3000408,
   0.2975417,
   0.297915,
   0.2851042,
   0.2721336,
   0.2461547,
   0.2259268};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-1.2,1.2);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3008[20] = {
   0.8830025,
   0.8826072,
   1.083381,
   0.9014877,
   1.095084,
   0.9888684,
   1.222438,
   1.252978,
   0.8987623,
   0.87659,
   0.8852171,
   0.8970951,
   0.9271041,
   1.015458,
   0.853023,
   0.9168321,
   0.8980466,
   1.038008,
   1.011697,
   0.9271346};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   0.07714829,
   0.08532486,
   0.0997333,
   0.0941508,
   0.09955307,
   0.09302491,
   0.1120608,
   0.1029942,
   0.0820454,
   0.07840459,
   0.07535468,
   0.0694193,
   0.06761601,
   0.06624117,
   0.05624667,
   0.05117258,
   0.04606882,
   0.04619075,
   0.03899806,
   0.03022373};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   0.07714829,
   0.08532486,
   0.0997333,
   0.09222028,
   0.09955307,
   0.09302491,
   0.1120608,
   0.1029942,
   0.0820454,
   0.07840459,
   0.07535468,
   0.0694193,
   0.06761601,
   0.06624117,
   0.05624667,
   0.05117258,
   0.04606882,
   0.04619075,
   0.03899806,
   0.03022373};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.7408567);
   Graph_Graph3008->SetMaximum(1.411892);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

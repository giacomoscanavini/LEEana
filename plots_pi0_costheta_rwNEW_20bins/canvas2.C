#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 17 19:54:22 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-1.307692,-21.52378,1.25641,2380.077);
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
   hmc__4->SetBinContent(1,165.6852);
   hmc__4->SetBinContent(2,139.5209);
   hmc__4->SetBinContent(3,124.8632);
   hmc__4->SetBinContent(4,122.2727);
   hmc__4->SetBinContent(5,127.2366);
   hmc__4->SetBinContent(6,133.1414);
   hmc__4->SetBinContent(7,115.1046);
   hmc__4->SetBinContent(8,136.9497);
   hmc__4->SetBinContent(9,154.8484);
   hmc__4->SetBinContent(10,166.0924);
   hmc__4->SetBinContent(11,181.1978);
   hmc__4->SetBinContent(12,212.7606);
   hmc__4->SetBinContent(13,231.1546);
   hmc__4->SetBinContent(14,262.356);
   hmc__4->SetBinContent(15,303.338);
   hmc__4->SetBinContent(16,390.9716);
   hmc__4->SetBinContent(17,468.9297);
   hmc__4->SetBinContent(18,539.9793);
   hmc__4->SetBinContent(19,736.1638);
   hmc__4->SetBinContent(20,1076.189);
   hmc__4->SetBinError(1,45.59442);
   hmc__4->SetBinError(2,43.21388);
   hmc__4->SetBinError(3,39.86595);
   hmc__4->SetBinError(4,39.12856);
   hmc__4->SetBinError(5,38.60422);
   hmc__4->SetBinError(6,37.47544);
   hmc__4->SetBinError(7,36.02657);
   hmc__4->SetBinError(8,40.42636);
   hmc__4->SetBinError(9,46.85378);
   hmc__4->SetBinError(10,48.44411);
   hmc__4->SetBinError(11,53.51836);
   hmc__4->SetBinError(12,61.86382);
   hmc__4->SetBinError(13,67.98261);
   hmc__4->SetBinError(14,76.63112);
   hmc__4->SetBinError(15,89.21574);
   hmc__4->SetBinError(16,117.3376);
   hmc__4->SetBinError(17,144.1126);
   hmc__4->SetBinError(18,153.0187);
   hmc__4->SetBinError(19,187.5889);
   hmc__4->SetBinError(20,271.183);
   hmc__4->SetBinError(21,0.3895343);
   hmc__4->SetMinimum(-21.52378);
   hmc__4->SetMaximum(2259.997);
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
   hs2_stack_2->SetMaximum(1129.999);
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
   hbadmatch_stack_1->SetBinContent(1,5.288253);
   hbadmatch_stack_1->SetBinContent(2,4.194447);
   hbadmatch_stack_1->SetBinContent(3,2.712988);
   hbadmatch_stack_1->SetBinContent(4,2.393748);
   hbadmatch_stack_1->SetBinContent(5,2.738323);
   hbadmatch_stack_1->SetBinContent(6,4.578317);
   hbadmatch_stack_1->SetBinContent(7,1.201807);
   hbadmatch_stack_1->SetBinContent(8,4.594244);
   hbadmatch_stack_1->SetBinContent(9,2.807871);
   hbadmatch_stack_1->SetBinContent(10,3.761593);
   hbadmatch_stack_1->SetBinContent(11,6.927141);
   hbadmatch_stack_1->SetBinContent(12,8.455468);
   hbadmatch_stack_1->SetBinContent(13,5.922433);
   hbadmatch_stack_1->SetBinContent(14,6.080895);
   hbadmatch_stack_1->SetBinContent(15,3.852472);
   hbadmatch_stack_1->SetBinContent(16,8.770983);
   hbadmatch_stack_1->SetBinContent(17,9.548467);
   hbadmatch_stack_1->SetBinContent(18,11.32899);
   hbadmatch_stack_1->SetBinContent(19,10.14392);
   hbadmatch_stack_1->SetBinContent(20,18.77238);
   hbadmatch_stack_1->SetBinError(1,1.223968);
   hbadmatch_stack_1->SetBinError(2,1.865475);
   hbadmatch_stack_1->SetBinError(3,0.8040912);
   hbadmatch_stack_1->SetBinError(4,0.6920124);
   hbadmatch_stack_1->SetBinError(5,0.9016559);
   hbadmatch_stack_1->SetBinError(6,1.118206);
   hbadmatch_stack_1->SetBinError(7,0.4817227);
   hbadmatch_stack_1->SetBinError(8,1.162894);
   hbadmatch_stack_1->SetBinError(9,0.8432158);
   hbadmatch_stack_1->SetBinError(10,0.9764431);
   hbadmatch_stack_1->SetBinError(11,2.04883);
   hbadmatch_stack_1->SetBinError(12,2.359302);
   hbadmatch_stack_1->SetBinError(13,1.59322);
   hbadmatch_stack_1->SetBinError(14,1.321295);
   hbadmatch_stack_1->SetBinError(15,1.012847);
   hbadmatch_stack_1->SetBinError(16,1.569121);
   hbadmatch_stack_1->SetBinError(17,1.705184);
   hbadmatch_stack_1->SetBinError(18,1.814863);
   hbadmatch_stack_1->SetBinError(19,1.6168);
   hbadmatch_stack_1->SetBinError(20,2.36166);
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
   houtFV_stack_4->SetBinContent(1,11.97855);
   houtFV_stack_4->SetBinContent(2,7.967649);
   houtFV_stack_4->SetBinContent(3,8.489211);
   houtFV_stack_4->SetBinContent(4,9.424843);
   houtFV_stack_4->SetBinContent(5,10.3001);
   houtFV_stack_4->SetBinContent(6,7.836887);
   houtFV_stack_4->SetBinContent(7,6.995298);
   houtFV_stack_4->SetBinContent(8,8.85878);
   houtFV_stack_4->SetBinContent(9,9.543818);
   houtFV_stack_4->SetBinContent(10,11.30524);
   houtFV_stack_4->SetBinContent(11,11.58364);
   houtFV_stack_4->SetBinContent(12,13.9841);
   houtFV_stack_4->SetBinContent(13,15.43759);
   houtFV_stack_4->SetBinContent(14,20.59858);
   houtFV_stack_4->SetBinContent(15,23.06238);
   houtFV_stack_4->SetBinContent(16,33.20531);
   houtFV_stack_4->SetBinContent(17,40.76707);
   houtFV_stack_4->SetBinContent(18,42.81426);
   houtFV_stack_4->SetBinContent(19,50.88251);
   houtFV_stack_4->SetBinContent(20,52.18758);
   houtFV_stack_4->SetBinError(1,1.775793);
   houtFV_stack_4->SetBinError(2,1.415724);
   houtFV_stack_4->SetBinError(3,1.449616);
   houtFV_stack_4->SetBinError(4,1.564564);
   houtFV_stack_4->SetBinError(5,1.629726);
   houtFV_stack_4->SetBinError(6,1.362531);
   houtFV_stack_4->SetBinError(7,1.271534);
   houtFV_stack_4->SetBinError(8,1.495262);
   houtFV_stack_4->SetBinError(9,1.50021);
   houtFV_stack_4->SetBinError(10,1.649403);
   houtFV_stack_4->SetBinError(11,1.713526);
   houtFV_stack_4->SetBinError(12,1.867081);
   houtFV_stack_4->SetBinError(13,1.983129);
   houtFV_stack_4->SetBinError(14,2.277921);
   houtFV_stack_4->SetBinError(15,2.37108);
   houtFV_stack_4->SetBinError(16,2.945021);
   houtFV_stack_4->SetBinError(17,3.125398);
   houtFV_stack_4->SetBinError(18,3.310889);
   houtFV_stack_4->SetBinError(19,3.582009);
   houtFV_stack_4->SetBinError(20,3.596892);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.957584);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6267538);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5151539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8223901);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.314052);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.818412);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.567654);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,14.24848);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,56.56781);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6358672);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1943021);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1861173);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3297271);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5613665);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5669431);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8428385);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.213714);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.457889);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.087276);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5852358);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.8916399);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.19954);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.813676);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.492654);
   hNCpi0inFVqe_stack_6->SetBinContent(18,3.779638);
   hNCpi0inFVqe_stack_6->SetBinContent(19,3.472402);
   hNCpi0inFVqe_stack_6->SetBinContent(20,4.351751);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3944872);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1727406);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2909527);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.381105);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4773719);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3375042);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.6689762);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.6111046);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.6511385);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,62.55554);
   hNCpi0inFVres_stack_7->SetBinContent(2,55.73146);
   hNCpi0inFVres_stack_7->SetBinContent(3,53.17065);
   hNCpi0inFVres_stack_7->SetBinContent(4,54.5237);
   hNCpi0inFVres_stack_7->SetBinContent(5,54.22969);
   hNCpi0inFVres_stack_7->SetBinContent(6,55.05853);
   hNCpi0inFVres_stack_7->SetBinContent(7,54.57163);
   hNCpi0inFVres_stack_7->SetBinContent(8,57.00406);
   hNCpi0inFVres_stack_7->SetBinContent(9,63.89208);
   hNCpi0inFVres_stack_7->SetBinContent(10,74.0276);
   hNCpi0inFVres_stack_7->SetBinContent(11,80.44301);
   hNCpi0inFVres_stack_7->SetBinContent(12,90.74812);
   hNCpi0inFVres_stack_7->SetBinContent(13,99.63792);
   hNCpi0inFVres_stack_7->SetBinContent(14,117.9909);
   hNCpi0inFVres_stack_7->SetBinContent(15,132.3898);
   hNCpi0inFVres_stack_7->SetBinContent(16,173.4787);
   hNCpi0inFVres_stack_7->SetBinContent(17,206.3791);
   hNCpi0inFVres_stack_7->SetBinContent(18,248.8758);
   hNCpi0inFVres_stack_7->SetBinContent(19,323.584);
   hNCpi0inFVres_stack_7->SetBinContent(20,411.9299);
   hNCpi0inFVres_stack_7->SetBinError(1,2.599681);
   hNCpi0inFVres_stack_7->SetBinError(2,2.420711);
   hNCpi0inFVres_stack_7->SetBinError(3,2.410669);
   hNCpi0inFVres_stack_7->SetBinError(4,2.46388);
   hNCpi0inFVres_stack_7->SetBinError(5,2.429125);
   hNCpi0inFVres_stack_7->SetBinError(6,2.370563);
   hNCpi0inFVres_stack_7->SetBinError(7,2.353841);
   hNCpi0inFVres_stack_7->SetBinError(8,2.392232);
   hNCpi0inFVres_stack_7->SetBinError(9,2.58943);
   hNCpi0inFVres_stack_7->SetBinError(10,2.854508);
   hNCpi0inFVres_stack_7->SetBinError(11,2.955474);
   hNCpi0inFVres_stack_7->SetBinError(12,3.146158);
   hNCpi0inFVres_stack_7->SetBinError(13,3.229245);
   hNCpi0inFVres_stack_7->SetBinError(14,3.575262);
   hNCpi0inFVres_stack_7->SetBinError(15,3.667892);
   hNCpi0inFVres_stack_7->SetBinError(16,4.359598);
   hNCpi0inFVres_stack_7->SetBinError(17,4.712638);
   hNCpi0inFVres_stack_7->SetBinError(18,5.157428);
   hNCpi0inFVres_stack_7->SetBinError(19,5.941201);
   hNCpi0inFVres_stack_7->SetBinError(20,6.663566);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.246);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.3707);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.705584);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.69255);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.193487);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.264738);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.324362);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.09877);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.60785);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.39097);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.118515);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.71655);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.95139);
   hNCpi0inFVdis_stack_8->SetBinContent(14,19.43758);
   hNCpi0inFVdis_stack_8->SetBinContent(15,21.72056);
   hNCpi0inFVdis_stack_8->SetBinContent(16,27.24329);
   hNCpi0inFVdis_stack_8->SetBinContent(17,35.89649);
   hNCpi0inFVdis_stack_8->SetBinContent(18,47.44182);
   hNCpi0inFVdis_stack_8->SetBinContent(19,66.88353);
   hNCpi0inFVdis_stack_8->SetBinContent(20,110.7211);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.166679);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9984165);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9977345);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.063051);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8599803);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9052899);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.922995);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.119);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.037167);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.076151);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9456973);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.177718);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.310396);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.459617);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.501999);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.684618);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.97439);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.247457);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.628923);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.422503);
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
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.432286);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2270916);
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
   hNCinFV_stack_11->SetBinContent(1,16.90366);
   hNCinFV_stack_11->SetBinContent(2,12.46228);
   hNCinFV_stack_11->SetBinContent(3,11.10664);
   hNCinFV_stack_11->SetBinContent(4,8.111112);
   hNCinFV_stack_11->SetBinContent(5,12.1692);
   hNCinFV_stack_11->SetBinContent(6,8.074156);
   hNCinFV_stack_11->SetBinContent(7,8.742677);
   hNCinFV_stack_11->SetBinContent(8,4.889754);
   hNCinFV_stack_11->SetBinContent(9,11.21244);
   hNCinFV_stack_11->SetBinContent(10,10.21497);
   hNCinFV_stack_11->SetBinContent(11,8.639552);
   hNCinFV_stack_11->SetBinContent(12,13.29286);
   hNCinFV_stack_11->SetBinContent(13,12.27064);
   hNCinFV_stack_11->SetBinContent(14,13.7294);
   hNCinFV_stack_11->SetBinContent(15,19.98156);
   hNCinFV_stack_11->SetBinContent(16,26.78352);
   hNCinFV_stack_11->SetBinContent(17,28.82736);
   hNCinFV_stack_11->SetBinContent(18,38.13604);
   hNCinFV_stack_11->SetBinContent(19,64.3189);
   hNCinFV_stack_11->SetBinContent(20,108.7621);
   hNCinFV_stack_11->SetBinError(1,2.048432);
   hNCinFV_stack_11->SetBinError(2,1.755281);
   hNCinFV_stack_11->SetBinError(3,1.618677);
   hNCinFV_stack_11->SetBinError(4,1.442671);
   hNCinFV_stack_11->SetBinError(5,1.767185);
   hNCinFV_stack_11->SetBinError(6,1.388388);
   hNCinFV_stack_11->SetBinError(7,1.467797);
   hNCinFV_stack_11->SetBinError(8,1.074613);
   hNCinFV_stack_11->SetBinError(9,1.754754);
   hNCinFV_stack_11->SetBinError(10,1.594567);
   hNCinFV_stack_11->SetBinError(11,1.494124);
   hNCinFV_stack_11->SetBinError(12,1.841772);
   hNCinFV_stack_11->SetBinError(13,1.744793);
   hNCinFV_stack_11->SetBinError(14,1.851275);
   hNCinFV_stack_11->SetBinError(15,2.246232);
   hNCinFV_stack_11->SetBinError(16,2.573904);
   hNCinFV_stack_11->SetBinError(17,2.668709);
   hNCinFV_stack_11->SetBinError(18,3.127274);
   hNCinFV_stack_11->SetBinError(19,3.993373);
   hNCinFV_stack_11->SetBinError(20,5.282427);
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
   hmcerror__5->SetBinContent(1,165.6852);
   hmcerror__5->SetBinContent(2,139.5209);
   hmcerror__5->SetBinContent(3,124.8632);
   hmcerror__5->SetBinContent(4,122.2727);
   hmcerror__5->SetBinContent(5,127.2366);
   hmcerror__5->SetBinContent(6,133.1414);
   hmcerror__5->SetBinContent(7,115.1046);
   hmcerror__5->SetBinContent(8,136.9497);
   hmcerror__5->SetBinContent(9,154.8484);
   hmcerror__5->SetBinContent(10,166.0924);
   hmcerror__5->SetBinContent(11,181.1978);
   hmcerror__5->SetBinContent(12,212.7606);
   hmcerror__5->SetBinContent(13,231.1546);
   hmcerror__5->SetBinContent(14,262.356);
   hmcerror__5->SetBinContent(15,303.338);
   hmcerror__5->SetBinContent(16,390.9716);
   hmcerror__5->SetBinContent(17,468.9297);
   hmcerror__5->SetBinContent(18,539.9793);
   hmcerror__5->SetBinContent(19,736.1638);
   hmcerror__5->SetBinContent(20,1076.189);
   hmcerror__5->SetBinError(1,45.59442);
   hmcerror__5->SetBinError(2,43.21388);
   hmcerror__5->SetBinError(3,39.86595);
   hmcerror__5->SetBinError(4,39.12856);
   hmcerror__5->SetBinError(5,38.60422);
   hmcerror__5->SetBinError(6,37.47544);
   hmcerror__5->SetBinError(7,36.02657);
   hmcerror__5->SetBinError(8,40.42636);
   hmcerror__5->SetBinError(9,46.85378);
   hmcerror__5->SetBinError(10,48.44411);
   hmcerror__5->SetBinError(11,53.51836);
   hmcerror__5->SetBinError(12,61.86382);
   hmcerror__5->SetBinError(13,67.98261);
   hmcerror__5->SetBinError(14,76.63112);
   hmcerror__5->SetBinError(15,89.21574);
   hmcerror__5->SetBinError(16,117.3376);
   hmcerror__5->SetBinError(17,144.1126);
   hmcerror__5->SetBinError(18,153.0187);
   hmcerror__5->SetBinError(19,187.5889);
   hmcerror__5->SetBinError(20,271.183);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.6/20","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

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
   0.2751869,
   0.3097305,
   0.319277,
   0.3200105,
   0.3034049,
   0.281471,
   0.3129899,
   0.2951914,
   0.3025784,
   0.2916697,
   0.2953588,
   0.2907673,
   0.2941001,
   0.2920883,
   0.2941133,
   0.3001181,
   0.3073225,
   0.2833789,
   0.2548196,
   0.2519845};
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
   0.2751869,
   0.3097305,
   0.319277,
   0.3200105,
   0.3034049,
   0.281471,
   0.3129899,
   0.2951914,
   0.3025784,
   0.2916697,
   0.2953588,
   0.2907673,
   0.2941001,
   0.2920883,
   0.2941133,
   0.3001181,
   0.3073225,
   0.2833789,
   0.2548196,
   0.2519845};
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
   0.2513595,
   0.255802,
   0.2601841,
   0.2723178,
   0.2582123,
   0.2468268,
   0.2651374,
   0.2455505,
   0.2511391,
   0.2590909,
   0.2645276,
   0.2557466,
   0.2710102,
   0.2719117,
   0.2776619,
   0.2844181,
   0.2794288,
   0.2665918,
   0.2422314,
   0.2386148};
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
   0.2513595,
   0.255802,
   0.2601841,
   0.2723178,
   0.2582123,
   0.2468268,
   0.2651374,
   0.2455505,
   0.2511391,
   0.2590909,
   0.2645276,
   0.2557466,
   0.2710102,
   0.2719117,
   0.2776619,
   0.2844181,
   0.2794288,
   0.2665918,
   0.2422314,
   0.2386148};
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
   0.7906558,
   0.7669103,
   0.9450342,
   0.7687731,
   0.9509839,
   0.8487218,
   1.033842,
   1.080689,
   0.7749514,
   0.7525932,
   0.7615987,
   0.7849199,
   0.8133083,
   0.8957295,
   0.75823,
   0.8210316,
   0.8103561,
   0.935221,
   0.9141988,
   0.8743817};
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
   0.06907992,
   0.07414002,
   0.08699745,
   0.08029018,
   0.08645308,
   0.07984103,
   0.09477217,
   0.08883209,
   0.07074306,
   0.06731399,
   0.06483159,
   0.06073892,
   0.05931661,
   0.05843095,
   0.0499962,
   0.04582551,
   0.04157039,
   0.04161679,
   0.03523977,
   0.02850403};
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
   0.06907992,
   0.07414002,
   0.08699745,
   0.07864386,
   0.08645308,
   0.07984103,
   0.09477217,
   0.08883209,
   0.07074306,
   0.06731399,
   0.06483159,
   0.06073892,
   0.05931661,
   0.05843095,
   0.0499962,
   0.04582551,
   0.04157039,
   0.04161679,
   0.03523977,
   0.02850403};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.6368551);
   Graph_Graph3008->SetMaximum(1.217945);
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

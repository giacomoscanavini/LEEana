#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar  9 21:59:46 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-4.1033,1.25641,453.7386);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__4->SetBinContent(1,88.1952);
   hmc__4->SetBinContent(2,77.73773);
   hmc__4->SetBinContent(3,66.69042);
   hmc__4->SetBinContent(4,65.76447);
   hmc__4->SetBinContent(5,67.04012);
   hmc__4->SetBinContent(6,70.00608);
   hmc__4->SetBinContent(7,65.13339);
   hmc__4->SetBinContent(8,71.68509);
   hmc__4->SetBinContent(9,75.07999);
   hmc__4->SetBinContent(10,83.81883);
   hmc__4->SetBinContent(11,93.60507);
   hmc__4->SetBinContent(12,100.4144);
   hmc__4->SetBinContent(13,101.8977);
   hmc__4->SetBinContent(14,106.1968);
   hmc__4->SetBinContent(15,105.6162);
   hmc__4->SetBinContent(16,125.9237);
   hmc__4->SetBinContent(17,134.332);
   hmc__4->SetBinContent(18,149.0462);
   hmc__4->SetBinContent(19,163.1584);
   hmc__4->SetBinContent(20,205.165);
   hmc__4->SetBinError(1,32.51645);
   hmc__4->SetBinError(2,30.40023);
   hmc__4->SetBinError(3,28.04785);
   hmc__4->SetBinError(4,26.59057);
   hmc__4->SetBinError(5,26.31462);
   hmc__4->SetBinError(6,27.58158);
   hmc__4->SetBinError(7,26.52524);
   hmc__4->SetBinError(8,29.05904);
   hmc__4->SetBinError(9,30.01498);
   hmc__4->SetBinError(10,36.61852);
   hmc__4->SetBinError(11,36.34796);
   hmc__4->SetBinError(12,42.08013);
   hmc__4->SetBinError(13,41.12124);
   hmc__4->SetBinError(14,47.61516);
   hmc__4->SetBinError(15,47.45176);
   hmc__4->SetBinError(16,59.92858);
   hmc__4->SetBinError(17,58.63274);
   hmc__4->SetBinError(18,62.45562);
   hmc__4->SetBinError(19,66.38193);
   hmc__4->SetBinError(20,75.02594);
   hmc__4->SetBinError(21,0.3895343);
   hmc__4->SetMinimum(-4.1033);
   hmc__4->SetMaximum(430.8465);
   hmc__4->SetEntries(1993.425);
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
   hs2_stack_2->SetMinimum(-1.310782e-08);
   hs2_stack_2->SetMaximum(215.4232);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.443662);
   hbadmatch_stack_1->SetBinContent(2,1.322064);
   hbadmatch_stack_1->SetBinContent(3,1.073786);
   hbadmatch_stack_1->SetBinContent(4,1.608577);
   hbadmatch_stack_1->SetBinContent(5,1.125349);
   hbadmatch_stack_1->SetBinContent(6,1.855576);
   hbadmatch_stack_1->SetBinContent(7,0.416636);
   hbadmatch_stack_1->SetBinContent(8,2.74873);
   hbadmatch_stack_1->SetBinContent(9,1.165893);
   hbadmatch_stack_1->SetBinContent(10,2.174814);
   hbadmatch_stack_1->SetBinContent(11,1.87437);
   hbadmatch_stack_1->SetBinContent(12,3.028148);
   hbadmatch_stack_1->SetBinContent(13,3.048015);
   hbadmatch_stack_1->SetBinContent(14,2.248412);
   hbadmatch_stack_1->SetBinContent(15,1.529949);
   hbadmatch_stack_1->SetBinContent(16,2.109215);
   hbadmatch_stack_1->SetBinContent(17,2.452807);
   hbadmatch_stack_1->SetBinContent(18,2.920872);
   hbadmatch_stack_1->SetBinContent(19,2.486881);
   hbadmatch_stack_1->SetBinContent(20,3.201271);
   hbadmatch_stack_1->SetBinError(1,0.7991514);
   hbadmatch_stack_1->SetBinError(2,0.5554667);
   hbadmatch_stack_1->SetBinError(3,0.5557297);
   hbadmatch_stack_1->SetBinError(4,0.5698733);
   hbadmatch_stack_1->SetBinError(5,0.5194673);
   hbadmatch_stack_1->SetBinError(6,0.6794384);
   hbadmatch_stack_1->SetBinError(7,0.2791617);
   hbadmatch_stack_1->SetBinError(8,0.9520722);
   hbadmatch_stack_1->SetBinError(9,0.5474508);
   hbadmatch_stack_1->SetBinError(10,0.7158911);
   hbadmatch_stack_1->SetBinError(11,0.7840618);
   hbadmatch_stack_1->SetBinError(12,0.9468637);
   hbadmatch_stack_1->SetBinError(13,1.315375);
   hbadmatch_stack_1->SetBinError(14,0.7718071);
   hbadmatch_stack_1->SetBinError(15,0.6579097);
   hbadmatch_stack_1->SetBinError(16,0.7838203);
   hbadmatch_stack_1->SetBinError(17,0.799671);
   hbadmatch_stack_1->SetBinError(18,1.028457);
   hbadmatch_stack_1->SetBinError(19,0.7713227);
   hbadmatch_stack_1->SetBinError(20,0.9241586);
   hbadmatch_stack_1->SetEntries(164);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,2.021405);
   hext_stack_2->SetBinContent(2,3.979379);
   hext_stack_2->SetBinContent(3,3.006186);
   hext_stack_2->SetBinContent(4,2.428004);
   hext_stack_2->SetBinContent(5,3.558419);
   hext_stack_2->SetBinContent(6,5.497622);
   hext_stack_2->SetBinContent(7,4.132192);
   hext_stack_2->SetBinContent(8,4.545971);
   hext_stack_2->SetBinContent(9,7.056177);
   hext_stack_2->SetBinContent(10,5.490441);
   hext_stack_2->SetBinContent(11,4.874778);
   hext_stack_2->SetBinContent(12,6.158006);
   hext_stack_2->SetBinContent(13,6.877413);
   hext_stack_2->SetBinContent(14,3.972198);
   hext_stack_2->SetBinContent(15,3.718413);
   hext_stack_2->SetBinContent(16,8.332225);
   hext_stack_2->SetBinContent(17,4.214394);
   hext_stack_2->SetBinContent(18,5.020411);
   hext_stack_2->SetBinContent(19,3.330584);
   hext_stack_2->SetBinContent(20,5.89704);
   hext_stack_2->SetBinError(1,0.9448239);
   hext_stack_2->SetBinError(2,1.207483);
   hext_stack_2->SetBinError(3,1.068791);
   hext_stack_2->SetBinError(4,1.028599);
   hext_stack_2->SetBinError(5,1.301958);
   hext_stack_2->SetBinError(6,1.589874);
   hext_stack_2->SetBinError(7,1.282292);
   hext_stack_2->SetBinError(8,1.268224);
   hext_stack_2->SetBinError(9,1.651211);
   hext_stack_2->SetBinError(10,1.651938);
   hext_stack_2->SetBinError(11,1.359687);
   hext_stack_2->SetBinError(12,1.634652);
   hext_stack_2->SetBinError(13,1.734567);
   hext_stack_2->SetBinError(14,1.288106);
   hext_stack_2->SetBinError(15,1.296206);
   hext_stack_2->SetBinError(16,1.936759);
   hext_stack_2->SetBinError(17,1.305512);
   hext_stack_2->SetBinError(18,1.495396);
   hext_stack_2->SetBinError(19,1.116937);
   hext_stack_2->SetBinError(20,1.701242);
   hext_stack_2->SetEntries(235);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,0.7249213);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.8385887);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(12,1.333061);
   hdirt_stack_3->SetBinContent(13,0.1651799);
   hdirt_stack_3->SetBinContent(14,0.4247338);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.4794168);
   hdirt_stack_3->SetBinContent(18,0.6998254);
   hdirt_stack_3->SetBinContent(19,0.4377912);
   hdirt_stack_3->SetBinContent(20,0.4801894);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.4354434);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.5064279);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(12,0.6103171);
   hdirt_stack_3->SetBinError(13,0.1651799);
   hdirt_stack_3->SetBinError(14,0.4247338);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.3402743);
   hdirt_stack_3->SetBinError(18,0.4055767);
   hdirt_stack_3->SetBinError(19,0.3095651);
   hdirt_stack_3->SetBinError(20,0.2780828);
   hdirt_stack_3->SetEntries(33);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,5.679905);
   houtFV_stack_4->SetBinContent(2,1.715495);
   houtFV_stack_4->SetBinContent(3,1.515398);
   houtFV_stack_4->SetBinContent(4,3.022952);
   houtFV_stack_4->SetBinContent(5,2.442341);
   houtFV_stack_4->SetBinContent(6,2.458241);
   houtFV_stack_4->SetBinContent(7,1.318683);
   houtFV_stack_4->SetBinContent(8,2.290414);
   houtFV_stack_4->SetBinContent(9,2.287195);
   houtFV_stack_4->SetBinContent(10,2.107235);
   houtFV_stack_4->SetBinContent(11,1.750655);
   houtFV_stack_4->SetBinContent(12,2.428088);
   houtFV_stack_4->SetBinContent(13,2.589184);
   houtFV_stack_4->SetBinContent(14,3.809236);
   houtFV_stack_4->SetBinContent(15,2.053982);
   houtFV_stack_4->SetBinContent(16,3.127768);
   houtFV_stack_4->SetBinContent(17,3.907867);
   houtFV_stack_4->SetBinContent(18,3.762714);
   houtFV_stack_4->SetBinContent(19,3.716223);
   houtFV_stack_4->SetBinContent(20,4.056401);
   houtFV_stack_4->SetBinError(1,1.255419);
   houtFV_stack_4->SetBinError(2,0.6212384);
   houtFV_stack_4->SetBinError(3,0.588146);
   houtFV_stack_4->SetBinError(4,0.941885);
   houtFV_stack_4->SetBinError(5,0.759212);
   houtFV_stack_4->SetBinError(6,0.8025556);
   houtFV_stack_4->SetBinError(7,0.5542732);
   houtFV_stack_4->SetBinError(8,0.8061733);
   houtFV_stack_4->SetBinError(9,0.753469);
   houtFV_stack_4->SetBinError(10,0.6801976);
   houtFV_stack_4->SetBinError(11,0.633452);
   houtFV_stack_4->SetBinError(12,0.7456553);
   houtFV_stack_4->SetBinError(13,0.809167);
   houtFV_stack_4->SetBinError(14,1.022686);
   houtFV_stack_4->SetBinError(15,0.7078105);
   houtFV_stack_4->SetBinError(16,0.8999062);
   houtFV_stack_4->SetBinError(17,0.9808007);
   houtFV_stack_4->SetBinError(18,0.9403637);
   houtFV_stack_4->SetBinError(19,0.9619042);
   houtFV_stack_4->SetBinError(20,1.020285);
   houtFV_stack_4->SetEntries(240);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.7521399);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2841855);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.059376);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.102054);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.603094);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.381222);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.338872);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3934993);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3209538);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4204368);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3788857);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3411366);
   hNCpi0inFVqe_stack_6->SetEntries(242);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,35.26424);
   hNCpi0inFVres_stack_7->SetBinContent(2,35.05067);
   hNCpi0inFVres_stack_7->SetBinContent(3,30.17797);
   hNCpi0inFVres_stack_7->SetBinContent(4,31.91823);
   hNCpi0inFVres_stack_7->SetBinContent(5,31.07989);
   hNCpi0inFVres_stack_7->SetBinContent(6,32.41593);
   hNCpi0inFVres_stack_7->SetBinContent(7,32.87348);
   hNCpi0inFVres_stack_7->SetBinContent(8,32.99436);
   hNCpi0inFVres_stack_7->SetBinContent(9,35.84019);
   hNCpi0inFVres_stack_7->SetBinContent(10,41.54445);
   hNCpi0inFVres_stack_7->SetBinContent(11,45.94452);
   hNCpi0inFVres_stack_7->SetBinContent(12,49.00475);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.0885);
   hNCpi0inFVres_stack_7->SetBinContent(14,54.16011);
   hNCpi0inFVres_stack_7->SetBinContent(15,53.73393);
   hNCpi0inFVres_stack_7->SetBinContent(16,63.89056);
   hNCpi0inFVres_stack_7->SetBinContent(17,65.85109);
   hNCpi0inFVres_stack_7->SetBinContent(18,74.52502);
   hNCpi0inFVres_stack_7->SetBinContent(19,76.07713);
   hNCpi0inFVres_stack_7->SetBinContent(20,79.87438);
   hNCpi0inFVres_stack_7->SetBinError(1,1.909605);
   hNCpi0inFVres_stack_7->SetBinError(2,1.930921);
   hNCpi0inFVres_stack_7->SetBinError(3,1.832235);
   hNCpi0inFVres_stack_7->SetBinError(4,1.874221);
   hNCpi0inFVres_stack_7->SetBinError(5,1.796463);
   hNCpi0inFVres_stack_7->SetBinError(6,1.79453);
   hNCpi0inFVres_stack_7->SetBinError(7,1.793321);
   hNCpi0inFVres_stack_7->SetBinError(8,1.812568);
   hNCpi0inFVres_stack_7->SetBinError(9,1.948944);
   hNCpi0inFVres_stack_7->SetBinError(10,2.152889);
   hNCpi0inFVres_stack_7->SetBinError(11,2.243123);
   hNCpi0inFVres_stack_7->SetBinError(12,2.372028);
   hNCpi0inFVres_stack_7->SetBinError(13,2.259863);
   hNCpi0inFVres_stack_7->SetBinError(14,2.45025);
   hNCpi0inFVres_stack_7->SetBinError(15,2.313506);
   hNCpi0inFVres_stack_7->SetBinError(16,2.653539);
   hNCpi0inFVres_stack_7->SetBinError(17,2.68632);
   hNCpi0inFVres_stack_7->SetBinError(18,2.81911);
   hNCpi0inFVres_stack_7->SetBinError(19,2.864512);
   hNCpi0inFVres_stack_7->SetBinError(20,2.953586);
   hNCpi0inFVres_stack_7->SetEntries(17544);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.833868);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.003909);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.010814);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.049004);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.447822);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.295704);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.807034);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.594226);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.578111);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.382564);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.962895);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.45547);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.390708);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.05925);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.004923);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.80207);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.537184);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.71797);
   hNCpi0inFVdis_stack_8->SetBinContent(19,17.35951);
   hNCpi0inFVdis_stack_8->SetBinContent(20,25.22586);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8545709);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6361717);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7969091);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7522721);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7098583);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7381709);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5916341);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.859151);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8204915);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7691147);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7036172);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.874195);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8975544);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.161162);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9652502);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9928135);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9689058);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.161608);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.345156);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.657053);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.181018);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1086555);
   hNCpi0inFVmec_stack_9->SetEntries(20);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,12.00315);
   hCCpi0inFV_stack_10->SetBinContent(2,12.98457);
   hCCpi0inFV_stack_10->SetBinContent(3,10.16702);
   hCCpi0inFV_stack_10->SetBinContent(4,8.602596);
   hCCpi0inFV_stack_10->SetBinContent(5,8.223772);
   hCCpi0inFV_stack_10->SetBinContent(6,10.0098);
   hCCpi0inFV_stack_10->SetBinContent(7,9.522777);
   hCCpi0inFV_stack_10->SetBinContent(8,8.210855);
   hCCpi0inFV_stack_10->SetBinContent(9,6.451857);
   hCCpi0inFV_stack_10->SetBinContent(10,9.853499);
   hCCpi0inFV_stack_10->SetBinContent(11,12.74244);
   hCCpi0inFV_stack_10->SetBinContent(12,11.63611);
   hCCpi0inFV_stack_10->SetBinContent(13,12.36592);
   hCCpi0inFV_stack_10->SetBinContent(14,13.80839);
   hCCpi0inFV_stack_10->SetBinContent(15,11.67783);
   hCCpi0inFV_stack_10->SetBinContent(16,13.13556);
   hCCpi0inFV_stack_10->SetBinContent(17,20.22205);
   hCCpi0inFV_stack_10->SetBinContent(18,21.66157);
   hCCpi0inFV_stack_10->SetBinContent(19,24.9004);
   hCCpi0inFV_stack_10->SetBinContent(20,35.66209);
   hCCpi0inFV_stack_10->SetBinError(1,1.707637);
   hCCpi0inFV_stack_10->SetBinError(2,1.851512);
   hCCpi0inFV_stack_10->SetBinError(3,1.65639);
   hCCpi0inFV_stack_10->SetBinError(4,1.441779);
   hCCpi0inFV_stack_10->SetBinError(5,1.344867);
   hCCpi0inFV_stack_10->SetBinError(6,1.58134);
   hCCpi0inFV_stack_10->SetBinError(7,1.518738);
   hCCpi0inFV_stack_10->SetBinError(8,1.414919);
   hCCpi0inFV_stack_10->SetBinError(9,1.23327);
   hCCpi0inFV_stack_10->SetBinError(10,1.574591);
   hCCpi0inFV_stack_10->SetBinError(11,1.79789);
   hCCpi0inFV_stack_10->SetBinError(12,1.746709);
   hCCpi0inFV_stack_10->SetBinError(13,1.7781);
   hCCpi0inFV_stack_10->SetBinError(14,1.933019);
   hCCpi0inFV_stack_10->SetBinError(15,1.710926);
   hCCpi0inFV_stack_10->SetBinError(16,1.83605);
   hCCpi0inFV_stack_10->SetBinError(17,2.258946);
   hCCpi0inFV_stack_10->SetBinError(18,2.297663);
   hCCpi0inFV_stack_10->SetBinError(19,2.492595);
   hCCpi0inFV_stack_10->SetBinError(20,3.067263);
   hCCpi0inFV_stack_10->SetEntries(1165);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,11.3722);
   hNCinFV_stack_11->SetBinContent(2,6.893863);
   hNCinFV_stack_11->SetBinContent(3,7.337166);
   hNCinFV_stack_11->SetBinContent(4,4.839881);
   hNCinFV_stack_11->SetBinContent(5,7.469403);
   hNCinFV_stack_11->SetBinContent(6,4.499704);
   hNCinFV_stack_11->SetBinContent(7,5.421575);
   hNCinFV_stack_11->SetBinContent(8,2.642437);
   hNCinFV_stack_11->SetBinContent(9,5.307224);
   hNCinFV_stack_11->SetBinContent(10,6.248774);
   hNCinFV_stack_11->SetBinContent(11,4.588223);
   hNCinFV_stack_11->SetBinContent(12,5.720333);
   hNCinFV_stack_11->SetBinContent(13,5.971992);
   hNCinFV_stack_11->SetBinContent(14,4.838191);
   hNCinFV_stack_11->SetBinContent(15,8.539807);
   hNCinFV_stack_11->SetBinContent(16,10.11799);
   hNCinFV_stack_11->SetBinContent(17,12.20724);
   hNCinFV_stack_11->SetBinContent(18,13.24407);
   hNCinFV_stack_11->SetBinContent(19,21.92734);
   hNCinFV_stack_11->SetBinContent(20,27.25594);
   hNCinFV_stack_11->SetBinError(1,1.72168);
   hNCinFV_stack_11->SetBinError(2,1.30209);
   hNCinFV_stack_11->SetBinError(3,1.316504);
   hNCinFV_stack_11->SetBinError(4,1.092906);
   hNCinFV_stack_11->SetBinError(5,1.415697);
   hNCinFV_stack_11->SetBinError(6,1.038616);
   hNCinFV_stack_11->SetBinError(7,1.143339);
   hNCinFV_stack_11->SetBinError(8,0.7851269);
   hNCinFV_stack_11->SetBinError(9,1.25666);
   hNCinFV_stack_11->SetBinError(10,1.271618);
   hNCinFV_stack_11->SetBinError(11,1.092434);
   hNCinFV_stack_11->SetBinError(12,1.210746);
   hNCinFV_stack_11->SetBinError(13,1.211173);
   hNCinFV_stack_11->SetBinError(14,1.092603);
   hNCinFV_stack_11->SetBinError(15,1.52043);
   hNCinFV_stack_11->SetBinError(16,1.557127);
   hNCinFV_stack_11->SetBinError(17,1.75461);
   hNCinFV_stack_11->SetBinError(18,1.79828);
   hNCinFV_stack_11->SetBinError(19,2.371191);
   hNCinFV_stack_11->SetBinError(20,2.647965);
   hNCinFV_stack_11->SetEntries(747);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,11.07191);
   hnumuCCinFV_stack_12->SetBinContent(2,9.203115);
   hnumuCCinFV_stack_12->SetBinContent(3,6.723714);
   hnumuCCinFV_stack_12->SetBinContent(4,6.618752);
   hnumuCCinFV_stack_12->SetBinContent(5,6.857692);
   hnumuCCinFV_stack_12->SetBinContent(6,6.225146);
   hnumuCCinFV_stack_12->SetBinContent(7,6.457305);
   hnumuCCinFV_stack_12->SetBinContent(8,11.21152);
   hnumuCCinFV_stack_12->SetBinContent(9,9.696779);
   hnumuCCinFV_stack_12->SetBinContent(10,10.4911);
   hnumuCCinFV_stack_12->SetBinContent(11,16.75559);
   hnumuCCinFV_stack_12->SetBinContent(12,12.7584);
   hnumuCCinFV_stack_12->SetBinContent(13,14.98216);
   hnumuCCinFV_stack_12->SetBinContent(14,10.94993);
   hnumuCCinFV_stack_12->SetBinContent(15,14.19414);
   hnumuCCinFV_stack_12->SetBinContent(16,13.74568);
   hnumuCCinFV_stack_12->SetBinContent(17,13.76519);
   hnumuCCinFV_stack_12->SetBinContent(18,11.95776);
   hnumuCCinFV_stack_12->SetBinContent(19,10.69735);
   hnumuCCinFV_stack_12->SetBinContent(20,16.99998);
   hnumuCCinFV_stack_12->SetBinError(1,1.745347);
   hnumuCCinFV_stack_12->SetBinError(2,1.6098);
   hnumuCCinFV_stack_12->SetBinError(3,1.710889);
   hnumuCCinFV_stack_12->SetBinError(4,1.338507);
   hnumuCCinFV_stack_12->SetBinError(5,1.753205);
   hnumuCCinFV_stack_12->SetBinError(6,1.290911);
   hnumuCCinFV_stack_12->SetBinError(7,1.350945);
   hnumuCCinFV_stack_12->SetBinError(8,1.893483);
   hnumuCCinFV_stack_12->SetBinError(9,1.82621);
   hnumuCCinFV_stack_12->SetBinError(10,1.789392);
   hnumuCCinFV_stack_12->SetBinError(11,2.461145);
   hnumuCCinFV_stack_12->SetBinError(12,2.311518);
   hnumuCCinFV_stack_12->SetBinError(13,2.385925);
   hnumuCCinFV_stack_12->SetBinError(14,1.732876);
   hnumuCCinFV_stack_12->SetBinError(15,2.402597);
   hnumuCCinFV_stack_12->SetBinError(16,3.043326);
   hnumuCCinFV_stack_12->SetBinError(17,2.154774);
   hnumuCCinFV_stack_12->SetBinError(18,2.128963);
   hnumuCCinFV_stack_12->SetBinError(19,1.672361);
   hnumuCCinFV_stack_12->SetBinError(20,2.039827);
   hnumuCCinFV_stack_12->SetEntries(869);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(2,0.441907);
   hnueCCinFV_stack_13->SetBinContent(3,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(4,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(5,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(6,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(7,0.8503433);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(14,0.591342);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.536893);
   hnueCCinFV_stack_13->SetBinContent(18,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,4.239799);
   hnueCCinFV_stack_13->SetBinError(2,0.3143499);
   hnueCCinFV_stack_13->SetBinError(3,0.2476759);
   hnueCCinFV_stack_13->SetBinError(4,0.2486649);
   hnueCCinFV_stack_13->SetBinError(5,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(6,0.4132436);
   hnueCCinFV_stack_13->SetBinError(7,0.6473186);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.3174228);
   hnueCCinFV_stack_13->SetBinError(14,0.4228527);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,1.073173);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__5->SetBinContent(1,88.1952);
   hmcerror__5->SetBinContent(2,77.73773);
   hmcerror__5->SetBinContent(3,66.69042);
   hmcerror__5->SetBinContent(4,65.76447);
   hmcerror__5->SetBinContent(5,67.04012);
   hmcerror__5->SetBinContent(6,70.00608);
   hmcerror__5->SetBinContent(7,65.13339);
   hmcerror__5->SetBinContent(8,71.68509);
   hmcerror__5->SetBinContent(9,75.07999);
   hmcerror__5->SetBinContent(10,83.81883);
   hmcerror__5->SetBinContent(11,93.60507);
   hmcerror__5->SetBinContent(12,100.4144);
   hmcerror__5->SetBinContent(13,101.8977);
   hmcerror__5->SetBinContent(14,106.1968);
   hmcerror__5->SetBinContent(15,105.6162);
   hmcerror__5->SetBinContent(16,125.9237);
   hmcerror__5->SetBinContent(17,134.332);
   hmcerror__5->SetBinContent(18,149.0462);
   hmcerror__5->SetBinContent(19,163.1584);
   hmcerror__5->SetBinContent(20,205.165);
   hmcerror__5->SetBinError(1,32.51645);
   hmcerror__5->SetBinError(2,30.40023);
   hmcerror__5->SetBinError(3,28.04785);
   hmcerror__5->SetBinError(4,26.59057);
   hmcerror__5->SetBinError(5,26.31462);
   hmcerror__5->SetBinError(6,27.58158);
   hmcerror__5->SetBinError(7,26.52524);
   hmcerror__5->SetBinError(8,29.05904);
   hmcerror__5->SetBinError(9,30.01498);
   hmcerror__5->SetBinError(10,36.61852);
   hmcerror__5->SetBinError(11,36.34796);
   hmcerror__5->SetBinError(12,42.08013);
   hmcerror__5->SetBinError(13,41.12124);
   hmcerror__5->SetBinError(14,47.61516);
   hmcerror__5->SetBinError(15,47.45176);
   hmcerror__5->SetBinError(16,59.92858);
   hmcerror__5->SetBinError(17,58.63274);
   hmcerror__5->SetBinError(18,62.45562);
   hmcerror__5->SetBinError(19,66.38193);
   hmcerror__5->SetBinError(20,75.02594);
   hmcerror__5->SetBinError(21,0.3895343);
   hmcerror__5->SetEntries(1993.425);

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
   60,
   45,
   56,
   45,
   65,
   54,
   50,
   68,
   50,
   56,
   59,
   76,
   61,
   81,
   69,
   81,
   97,
   115,
   126,
   138};
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
   7.8743,
   6.8416,
   7.6127,
   6.8416,
   8.1893,
   7.4785,
   7.2025,
   8.3726,
   7.2025,
   7.6127,
   7.8097,
   8.8425,
   7.9383,
   9.1239,
   8.4327,
   9.1239,
   9.9704,
   10.72381,
   11.22497,
   11.74734};
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
   7.6713,
   6.637,
   7.4094,
   6.637,
   7.9866,
   7.275,
   6.9985,
   8.1701,
   6.9985,
   7.4094,
   7.6066,
   8.6406,
   7.7354,
   8.9221,
   8.2304,
   8.9221,
   9.769,
   10.72381,
   11.22497,
   11.74734};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(26.99951);
   Graph_Graph3005->SetMaximum(160.9062);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 94.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  950.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 176.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all");
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
   0.3686873,
   0.3910615,
   0.4205679,
   0.4043303,
   0.3925205,
   0.3939883,
   0.4072449,
   0.4053708,
   0.3997734,
   0.436877,
   0.3883119,
   0.4190647,
   0.403554,
   0.4483674,
   0.4492848,
   0.4759117,
   0.4364765,
   0.4190354,
   0.4068558,
   0.3656859};
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
   0.3686873,
   0.3910615,
   0.4205679,
   0.4043303,
   0.3925205,
   0.3939883,
   0.4072449,
   0.4053708,
   0.3997734,
   0.436877,
   0.3883119,
   0.4190647,
   0.403554,
   0.4483674,
   0.4492848,
   0.4759117,
   0.4364765,
   0.4190354,
   0.4068558,
   0.3656859};
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
   0.3027818,
   0.3167609,
   0.3370077,
   0.3560722,
   0.3539605,
   0.3238072,
   0.3380691,
   0.348063,
   0.3498075,
   0.3606843,
   0.3495465,
   0.3727592,
   0.3706162,
   0.4049287,
   0.42435,
   0.4272624,
   0.4025373,
   0.3930054,
   0.3681605,
   0.3204938};
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
   0.3027818,
   0.3167609,
   0.3370077,
   0.3560722,
   0.3539605,
   0.3238072,
   0.3380691,
   0.348063,
   0.3498075,
   0.3606843,
   0.3495465,
   0.3727592,
   0.3706162,
   0.4049287,
   0.42435,
   0.4272624,
   0.4025373,
   0.3930054,
   0.3681605,
   0.3204938};
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
   0.6803091,
   0.5788695,
   0.8397008,
   0.68426,
   0.9695686,
   0.7713616,
   0.7676554,
   0.9485934,
   0.6659564,
   0.6681076,
   0.6303077,
   0.7568635,
   0.5986394,
   0.7627351,
   0.6533088,
   0.6432465,
   0.7220917,
   0.771573,
   0.7722557,
   0.6726294};
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
   0.08928264,
   0.08800874,
   0.1141498,
   0.1040319,
   0.1221552,
   0.1068264,
   0.1105808,
   0.116797,
   0.09593102,
   0.09082326,
   0.08343244,
   0.08806007,
   0.07790457,
   0.08591505,
   0.07984286,
   0.07245576,
   0.07422209,
   0.07194955,
   0.06879801,
   0.05725801};
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
   0.08698093,
   0.08537682,
   0.1111014,
   0.1009208,
   0.1191316,
   0.1039195,
   0.1074487,
   0.1139721,
   0.09321392,
   0.0883978,
   0.08126269,
   0.08604941,
   0.07591336,
   0.0840148,
   0.07792743,
   0.0708532,
   0.07272282,
   0.07194955,
   0.06879801,
   0.05725801};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.4310768);
   Graph_Graph3008->SetMaximum(1.148484);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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

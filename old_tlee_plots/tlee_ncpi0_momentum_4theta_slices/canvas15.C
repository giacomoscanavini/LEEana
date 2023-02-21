#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas15()
{
//=========Macro generated from canvas: canvas15/channel15
//=========  (Tue Dec  6 22:18:06 2022) by ROOT version 6.26/00
   TCanvas *canvas15 = new TCanvas("canvas15", "channel15",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas15->SetHighLightColor(2);
   canvas15->Range(0,0,1,1);
   canvas15->SetFillColor(0);
   canvas15->SetBorderMode(0);
   canvas15->SetBorderSize(2);
   canvas15->SetLeftMargin(0.12);
   canvas15->SetRightMargin(0.12);
   canvas15->SetTopMargin(0.05);
   canvas15->SetBottomMargin(0.12);
   canvas15->SetFrameLineWidth(2);
   canvas15->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-0.713223,1353.846,78.86745);
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
   
   TH1F *hmc__43 = new TH1F("hmc__43","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__43->SetBinContent(1,12.54195);
   hmc__43->SetBinContent(2,35.66115);
   hmc__43->SetBinContent(3,27.44143);
   hmc__43->SetBinContent(4,24.48652);
   hmc__43->SetBinContent(5,17.58247);
   hmc__43->SetBinContent(6,10.32538);
   hmc__43->SetBinContent(7,5.908856);
   hmc__43->SetBinContent(8,3.902708);
   hmc__43->SetBinContent(9,3.710014);
   hmc__43->SetBinContent(10,2.797445);
   hmc__43->SetBinContent(11,1.202855);
   hmc__43->SetBinContent(12,1.609609);
   hmc__43->SetBinContent(13,4.976926);
   hmc__43->SetBinError(1,8.184784);
   hmc__43->SetBinError(2,14.42807);
   hmc__43->SetBinError(3,13.73086);
   hmc__43->SetBinError(4,15.68292);
   hmc__43->SetBinError(5,10.00813);
   hmc__43->SetBinError(6,6.982934);
   hmc__43->SetBinError(7,8.349918);
   hmc__43->SetBinError(8,10.74325);
   hmc__43->SetBinError(9,4.859308);
   hmc__43->SetBinError(10,8.694482);
   hmc__43->SetBinError(11,2.644442);
   hmc__43->SetBinError(12,4.899276);
   hmc__43->SetBinError(13,6.951353);
   hmc__43->SetMinimum(-0.713223);
   hmc__43->SetMaximum(74.88842);
   hmc__43->SetEntries(166.9267);
   hmc__43->SetLineWidth(5);
   hmc__43->GetXaxis()->SetLabelFont(42);
   hmc__43->GetXaxis()->SetTitleOffset(1);
   hmc__43->GetXaxis()->SetTitleFont(42);
   hmc__43->GetYaxis()->SetTitle("Event counts");
   hmc__43->GetYaxis()->SetLabelFont(132);
   hmc__43->GetYaxis()->SetLabelSize(0.04);
   hmc__43->GetYaxis()->SetTitleSize(0.05);
   hmc__43->GetYaxis()->SetTitleOffset(0.73);
   hmc__43->GetYaxis()->SetTitleFont(132);
   hmc__43->GetZaxis()->SetLabelFont(42);
   hmc__43->GetZaxis()->SetTitleOffset(1);
   hmc__43->GetZaxis()->SetTitleFont(42);
   hmc__43->Draw("hist");
   
   THStack *hs15 = new THStack();
   hs15->SetName("hs15");
   hs15->SetTitle("");
   
   TH1F *hs15_stack_15 = new TH1F("hs15_stack_15","",12,0,1200);
   hs15_stack_15->SetMinimum(-1.150846e-08);
   hs15_stack_15->SetMaximum(37.44421);
   hs15_stack_15->SetDirectory(0);
   hs15_stack_15->SetStats(0);
   hs15_stack_15->SetLineWidth(2);
   hs15_stack_15->SetMarkerStyle(20);
   hs15_stack_15->GetXaxis()->SetNdivisions(509);
   hs15_stack_15->GetXaxis()->SetLabelFont(132);
   hs15_stack_15->GetXaxis()->SetLabelOffset(0.01);
   hs15_stack_15->GetXaxis()->SetLabelSize(0.08);
   hs15_stack_15->GetXaxis()->SetTitleSize(0.08);
   hs15_stack_15->GetXaxis()->SetTitleOffset(0.95);
   hs15_stack_15->GetXaxis()->SetTitleFont(132);
   hs15_stack_15->GetYaxis()->SetNdivisions(509);
   hs15_stack_15->GetYaxis()->SetLabelFont(132);
   hs15_stack_15->GetYaxis()->SetLabelOffset(0.01);
   hs15_stack_15->GetYaxis()->SetLabelSize(0.08);
   hs15_stack_15->GetYaxis()->SetTitleSize(0.08);
   hs15_stack_15->GetYaxis()->SetTitleOffset(0.95);
   hs15_stack_15->GetYaxis()->SetTitleFont(132);
   hs15_stack_15->GetZaxis()->SetLabelFont(132);
   hs15_stack_15->GetZaxis()->SetLabelSize(0.08);
   hs15_stack_15->GetZaxis()->SetTitleSize(0.08);
   hs15_stack_15->GetZaxis()->SetTitleOffset(1.2);
   hs15_stack_15->GetZaxis()->SetTitleFont(132);
   hs15->SetHistogram(hs15_stack_15);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.5765933);
   hbadmatch_stack_1->SetBinContent(2,0.2029472);
   hbadmatch_stack_1->SetBinContent(3,0.9825376);
   hbadmatch_stack_1->SetBinContent(4,0.5817984);
   hbadmatch_stack_1->SetBinContent(5,0.501862);
   hbadmatch_stack_1->SetBinContent(6,0.6303588);
   hbadmatch_stack_1->SetBinContent(7,0.08619046);
   hbadmatch_stack_1->SetBinContent(8,0.231042);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(10,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.4142622);
   hbadmatch_stack_1->SetBinError(2,0.1481221);
   hbadmatch_stack_1->SetBinError(3,0.4734155);
   hbadmatch_stack_1->SetBinError(4,0.3467103);
   hbadmatch_stack_1->SetBinError(5,0.3635708);
   hbadmatch_stack_1->SetBinError(6,0.5235666);
   hbadmatch_stack_1->SetBinError(7,0.08619046);
   hbadmatch_stack_1->SetBinError(8,0.231042);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(10,0.1950249);
   hbadmatch_stack_1->SetEntries(21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1616;
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
   hs15->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,3.208071);
   hext_stack_2->SetBinContent(2,9.589502);
   hext_stack_2->SetBinContent(3,1.78639);
   hext_stack_2->SetBinContent(4,1.379791);
   hext_stack_2->SetBinContent(5,1.137595);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,0.6416141);
   hext_stack_2->SetBinContent(9,0.4065989);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinError(1,1.434693);
   hext_stack_2->SetBinError(2,2.24563);
   hext_stack_2->SetBinError(3,0.8039566);
   hext_stack_2->SetBinError(4,0.6935586);
   hext_stack_2->SetBinError(5,0.6602113);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,0.6416141);
   hext_stack_2->SetBinError(9,0.4065989);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetEntries(43);

   ci = 1617;
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
   hs15->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.2628198);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.6338169);
   hdirt_stack_3->SetBinError(1,0.2628198);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.4691215);
   hdirt_stack_3->SetEntries(4);

   ci = 1618;
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
   hs15->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,1.125349);
   houtFV_stack_4->SetBinContent(2,4.41896);
   houtFV_stack_4->SetBinContent(3,4.477633);
   houtFV_stack_4->SetBinContent(4,4.225246);
   houtFV_stack_4->SetBinContent(5,2.180514);
   houtFV_stack_4->SetBinContent(6,1.978398);
   houtFV_stack_4->SetBinContent(7,0.3917402);
   houtFV_stack_4->SetBinContent(8,1.073998);
   houtFV_stack_4->SetBinContent(9,0.3900497);
   houtFV_stack_4->SetBinContent(10,0.7817899);
   houtFV_stack_4->SetBinContent(11,0.5352025);
   houtFV_stack_4->SetBinContent(12,0.4411535);
   houtFV_stack_4->SetBinContent(13,1.243591);
   houtFV_stack_4->SetBinError(1,0.5194673);
   houtFV_stack_4->SetBinError(2,1.029384);
   houtFV_stack_4->SetBinError(3,1.098448);
   houtFV_stack_4->SetBinError(4,1.147779);
   houtFV_stack_4->SetBinError(5,0.7081036);
   houtFV_stack_4->SetBinError(6,0.6544568);
   houtFV_stack_4->SetBinError(7,0.2770047);
   houtFV_stack_4->SetBinError(8,0.5043913);
   houtFV_stack_4->SetBinError(9,0.2758068);
   houtFV_stack_4->SetBinError(10,0.3908977);
   houtFV_stack_4->SetBinError(11,0.3921167);
   houtFV_stack_4->SetBinError(12,0.2813775);
   houtFV_stack_4->SetBinError(13,0.5327548);
   houtFV_stack_4->SetEntries(107);

   ci = 1619;
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
   hs15->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.04049794);
   hNCpi0inFVcoh_stack_5->SetEntries(2);

   ci = 1620;
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
   hs15->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0598385);
   hNCpi0inFVqe_stack_6->SetEntries(6);

   ci = 1621;
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
   hs15->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.8674516);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.307382);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.911516);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.767773);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.131592);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.450945);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.876092);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.2953209);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.6975712);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.2965662);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.09388816);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1380323);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.51559);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2771325);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6961566);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7005712);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7261171);
   hNCpi0inFVres_stack_7->SetBinError(5,0.555896);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4282549);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4127359);
   hNCpi0inFVres_stack_7->SetBinError(8,0.114293);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3906446);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1177196);
   hNCpi0inFVres_stack_7->SetBinError(11,0.05276924);
   hNCpi0inFVres_stack_7->SetBinError(12,0.06534441);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6416686);
   hNCpi0inFVres_stack_7->SetEntries(731);

   ci = 1622;
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
   hs15->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.3345782);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.086002);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.168681);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.753889);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.8784761);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8216031);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6101304);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.3236555);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.05352665);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.06425367);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1837142);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1691327);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2789228);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.161921);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4162006);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.316574);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4137138);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4329216);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.308729);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3037214);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2205255);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.04013397);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.04582575);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1697601);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1691327);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1251872);
   hNCpi0inFVdis_stack_8->SetEntries(143);

   ci = 1623;
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
   hs15->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = 1624;
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
   hs15->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,2.742537);
   hCCpi0inFV_stack_10->SetBinContent(2,6.216216);
   hCCpi0inFV_stack_10->SetBinContent(3,7.337603);
   hCCpi0inFV_stack_10->SetBinContent(4,5.985204);
   hCCpi0inFV_stack_10->SetBinContent(5,4.446451);
   hCCpi0inFV_stack_10->SetBinContent(6,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(7,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(8,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(9,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(10,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(11,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(12,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(13,0.536893);
   hCCpi0inFV_stack_10->SetBinError(1,0.7739875);
   hCCpi0inFV_stack_10->SetBinError(2,1.299986);
   hCCpi0inFV_stack_10->SetBinError(3,1.362816);
   hCCpi0inFV_stack_10->SetBinError(4,1.355254);
   hCCpi0inFV_stack_10->SetBinError(5,1.056906);
   hCCpi0inFV_stack_10->SetBinError(6,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(7,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(8,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(9,0.438694);
   hCCpi0inFV_stack_10->SetBinError(10,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(11,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(12,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(13,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(130);

   ci = 1625;
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
   hs15->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,1.303212);
   hNCinFV_stack_11->SetBinContent(2,2.418446);
   hNCinFV_stack_11->SetBinContent(3,0.7172321);
   hNCinFV_stack_11->SetBinContent(4,1.100475);
   hNCinFV_stack_11->SetBinContent(5,1.1941);
   hNCinFV_stack_11->SetBinContent(6,0.7842016);
   hNCinFV_stack_11->SetBinContent(7,0.4011914);
   hNCinFV_stack_11->SetBinContent(8,0.3171751);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.6139546);
   hNCinFV_stack_11->SetBinError(2,0.9211041);
   hNCinFV_stack_11->SetBinError(3,0.3638694);
   hNCinFV_stack_11->SetBinError(4,0.4284973);
   hNCinFV_stack_11->SetBinError(5,0.568165);
   hNCinFV_stack_11->SetBinError(6,0.4298812);
   hNCinFV_stack_11->SetBinError(7,0.2837382);
   hNCinFV_stack_11->SetBinError(8,0.2301203);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetEntries(39);

   ci = 1626;
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
   hs15->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,2.094941);
   hnumuCCinFV_stack_12->SetBinContent(2,7.265398);
   hnumuCCinFV_stack_12->SetBinContent(3,4.247719);
   hnumuCCinFV_stack_12->SetBinContent(4,3.497324);
   hnumuCCinFV_stack_12->SetBinContent(5,3.011541);
   hnumuCCinFV_stack_12->SetBinContent(6,1.3977);
   hnumuCCinFV_stack_12->SetBinContent(7,1.365005);
   hnumuCCinFV_stack_12->SetBinContent(8,0.9279073);
   hnumuCCinFV_stack_12->SetBinContent(9,0.8951471);
   hnumuCCinFV_stack_12->SetBinContent(10,0.8564963);
   hnumuCCinFV_stack_12->SetBinContent(11,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(12,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(13,1.077532);
   hnumuCCinFV_stack_12->SetBinError(1,0.7171077);
   hnumuCCinFV_stack_12->SetBinError(2,1.393005);
   hnumuCCinFV_stack_12->SetBinError(3,1.096692);
   hnumuCCinFV_stack_12->SetBinError(4,0.9517718);
   hnumuCCinFV_stack_12->SetBinError(5,0.9116536);
   hnumuCCinFV_stack_12->SetBinError(6,0.6297325);
   hnumuCCinFV_stack_12->SetBinError(7,0.5628114);
   hnumuCCinFV_stack_12->SetBinError(8,0.5543555);
   hnumuCCinFV_stack_12->SetBinError(9,0.4487462);
   hnumuCCinFV_stack_12->SetBinError(10,0.5256302);
   hnumuCCinFV_stack_12->SetBinError(11,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(12,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(13,0.4848103);
   hnumuCCinFV_stack_12->SetEntries(115);

   ci = 1627;
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
   hs15->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetEntries(1);

   ci = 1628;
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
   hs15->Add(hnueCCinFV_stack_13,"");
   hs15->Draw("hist same");
   
   TH1F *hmcerror__44 = new TH1F("hmcerror__44","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__44->SetBinContent(1,12.54195);
   hmcerror__44->SetBinContent(2,35.66115);
   hmcerror__44->SetBinContent(3,27.44143);
   hmcerror__44->SetBinContent(4,24.48652);
   hmcerror__44->SetBinContent(5,17.58247);
   hmcerror__44->SetBinContent(6,10.32538);
   hmcerror__44->SetBinContent(7,5.908856);
   hmcerror__44->SetBinContent(8,3.902708);
   hmcerror__44->SetBinContent(9,3.710014);
   hmcerror__44->SetBinContent(10,2.797445);
   hmcerror__44->SetBinContent(11,1.202855);
   hmcerror__44->SetBinContent(12,1.609609);
   hmcerror__44->SetBinContent(13,4.976926);
   hmcerror__44->SetBinError(1,8.184784);
   hmcerror__44->SetBinError(2,14.42807);
   hmcerror__44->SetBinError(3,13.73086);
   hmcerror__44->SetBinError(4,15.68292);
   hmcerror__44->SetBinError(5,10.00813);
   hmcerror__44->SetBinError(6,6.982934);
   hmcerror__44->SetBinError(7,8.349918);
   hmcerror__44->SetBinError(8,10.74325);
   hmcerror__44->SetBinError(9,4.859308);
   hmcerror__44->SetBinError(10,8.694482);
   hmcerror__44->SetBinError(11,2.644442);
   hmcerror__44->SetBinError(12,4.899276);
   hmcerror__44->SetBinError(13,6.951353);
   hmcerror__44->SetEntries(166.9267);

   ci = TColor::GetColor("#999999");
   hmcerror__44->SetFillColor(ci);
   hmcerror__44->SetFillStyle(3002);
   hmcerror__44->SetLineColor(12);
   hmcerror__44->SetLineWidth(0);
   hmcerror__44->SetMarkerColor(0);
   hmcerror__44->SetMarkerSize(0);
   hmcerror__44->GetXaxis()->SetLabelFont(42);
   hmcerror__44->GetXaxis()->SetTitleOffset(1);
   hmcerror__44->GetXaxis()->SetTitleFont(42);
   hmcerror__44->GetYaxis()->SetLabelFont(42);
   hmcerror__44->GetYaxis()->SetTitleFont(42);
   hmcerror__44->GetZaxis()->SetLabelFont(42);
   hmcerror__44->GetZaxis()->SetTitleOffset(1);
   hmcerror__44->GetZaxis()->SetTitleFont(42);
   hmcerror__44->Draw("same E2");
   
   Double_t _fx3057[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3057[12] = {
   4,
   28,
   31,
   23,
   7,
   5,
   5,
   1,
   3,
   2,
   3,
   1};
   Double_t _felx3057[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3057[12] = {
   2.29683,
   5.4358,
   5.7094,
   4.9457,
   2.85954,
   2.48995,
   2.48995,
   1,
   2.143368,
   2,
   2.143368,
   1};
   Double_t _fehx3057[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3057[12] = {
   1.98186,
   5.2271,
   5.5017,
   4.7346,
   2.61053,
   2.21064,
   2.21064,
   1.35971,
   1.72422,
   1.51917,
   1.72422,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3057,_fy3057,_felx3057,_fehx3057,_fely3057,_fehy3057);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3057 = new TH1F("Graph_Graph3057","",100,0,1320);
   Graph_Graph3057->SetMinimum(0);
   Graph_Graph3057->SetMaximum(40.15187);
   Graph_Graph3057->SetDirectory(0);
   Graph_Graph3057->SetStats(0);
   Graph_Graph3057->SetLineWidth(2);
   Graph_Graph3057->SetMarkerStyle(20);
   Graph_Graph3057->GetXaxis()->SetNdivisions(509);
   Graph_Graph3057->GetXaxis()->SetLabelFont(132);
   Graph_Graph3057->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3057->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3057->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3057->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3057->GetXaxis()->SetTitleFont(132);
   Graph_Graph3057->GetYaxis()->SetNdivisions(509);
   Graph_Graph3057->GetYaxis()->SetLabelFont(132);
   Graph_Graph3057->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3057->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3057->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3057->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3057->GetYaxis()->SetTitleFont(132);
   Graph_Graph3057->GetZaxis()->SetLabelFont(132);
   Graph_Graph3057->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3057->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3057->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3057->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3057);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.77#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 113.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.2","F");

   ci = 1616;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 19.3","F");

   ci = 1617;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.0","F");

   ci = 1618;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 22.0","F");

   ci = 1619;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1620;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

   ci = 1621;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  26.8","F");

   ci = 1622;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  7.4","F");

   ci = 1623;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1624;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 31.2","F");

   ci = 1625;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 8.6","F");

   ci = 1626;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 26.1","F");

   ci = 1627;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 0.2","F");

   ci = 1628;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas15->cd();
  
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
   
   Double_t _fx3058[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3058[12] = {
   1,
   1,
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
   Double_t _felx3058[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3058[12] = {
   0.6525924,
   0.4045878,
   0.5003698,
   0.6404714,
   0.5692106,
   0.6762882,
   1.413119,
   2.752768,
   1.309782,
   3.108008,
   2.198472,
   3.043768};
   Double_t _fehx3058[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3058[12] = {
   0.6525924,
   0.4045878,
   0.5003698,
   0.6404714,
   0.5692106,
   0.6762882,
   1.413119,
   2.752768,
   1.309782,
   3.108008,
   2.198472,
   3.043768};
   grae = new TGraphAsymmErrors(12,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,0,1320);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(2);
   Graph_Graph3058->SetDirectory(0);
   Graph_Graph3058->SetStats(0);
   Graph_Graph3058->SetLineWidth(2);
   Graph_Graph3058->SetMarkerStyle(20);
   Graph_Graph3058->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3058->GetXaxis()->SetRange(1,91);
   Graph_Graph3058->GetXaxis()->SetNdivisions(509);
   Graph_Graph3058->GetXaxis()->SetLabelFont(132);
   Graph_Graph3058->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3058->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3058->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3058->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3058->GetXaxis()->SetTitleFont(132);
   Graph_Graph3058->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3058->GetYaxis()->SetNdivisions(210);
   Graph_Graph3058->GetYaxis()->SetLabelFont(132);
   Graph_Graph3058->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3058->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3058->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3058->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3058->GetYaxis()->SetTitleFont(132);
   Graph_Graph3058->GetZaxis()->SetLabelFont(132);
   Graph_Graph3058->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3058->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3058->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3058->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3058);
   
   grae->Draw("a2");
   
   Double_t _fx3059[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3059[12] = {
   1,
   1,
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
   Double_t _felx3059[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3059[12] = {
   0.2712206,
   0.2572293,
   0.3562271,
   0.3618989,
   0.3000921,
   0.3724286,
   0.3266996,
   0.3733463,
   0.4017129,
   0.4458555,
   0.6575944,
   0.5642489};
   Double_t _fehx3059[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3059[12] = {
   0.2712206,
   0.2572293,
   0.3562271,
   0.3618989,
   0.3000921,
   0.3724286,
   0.3266996,
   0.3733463,
   0.4017129,
   0.4458555,
   0.6575944,
   0.5642489};
   grae = new TGraphAsymmErrors(12,_fx3059,_fy3059,_felx3059,_fehx3059,_fely3059,_fehy3059);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3059 = new TH1F("Graph_Graph3059","",100,0,1320);
   Graph_Graph3059->SetMinimum(0);
   Graph_Graph3059->SetMaximum(2);
   Graph_Graph3059->SetDirectory(0);
   Graph_Graph3059->SetStats(0);
   Graph_Graph3059->SetLineWidth(2);
   Graph_Graph3059->SetMarkerStyle(20);
   Graph_Graph3059->GetXaxis()->SetRange(1,91);
   Graph_Graph3059->GetXaxis()->SetNdivisions(509);
   Graph_Graph3059->GetXaxis()->SetLabelFont(132);
   Graph_Graph3059->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3059->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3059->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3059->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3059->GetXaxis()->SetTitleFont(132);
   Graph_Graph3059->GetYaxis()->SetNdivisions(509);
   Graph_Graph3059->GetYaxis()->SetLabelFont(132);
   Graph_Graph3059->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3059->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3059->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3059->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3059->GetYaxis()->SetTitleFont(132);
   Graph_Graph3059->GetZaxis()->SetLabelFont(132);
   Graph_Graph3059->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3059->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3059->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3059->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3059);
   
   grae->Draw("2 ");
   
   Double_t _fx3060[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3060[12] = {
   0.3189296,
   0.7851681,
   1.129679,
   0.9392921,
   0.3981239,
   0.4842436,
   0.8461875,
   0.2562324,
   0.8086223,
   0.714938,
   2.494067,
   0.621269};
   Double_t _felx3060[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3060[12] = {
   0.1831318,
   0.1524292,
   0.2080577,
   0.2019764,
   0.1626359,
   0.2411485,
   0.4213929,
   0.2562324,
   0.5777251,
   0.714938,
   1.781901,
   0.621269};
   Double_t _fehx3060[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3060[12] = {
   0.1580184,
   0.1465769,
   0.2004888,
   0.1933553,
   0.1484735,
   0.2140977,
   0.3741232,
   0.3484017,
   0.4647476,
   0.5430562,
   1.43344,
   0.8447457};
   grae = new TGraphAsymmErrors(12,_fx3060,_fy3060,_felx3060,_fehx3060,_fely3060,_fehy3060);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3060 = new TH1F("Graph_Graph3060","",100,0,1320);
   Graph_Graph3060->SetMinimum(0);
   Graph_Graph3060->SetMaximum(4.320258);
   Graph_Graph3060->SetDirectory(0);
   Graph_Graph3060->SetStats(0);
   Graph_Graph3060->SetLineWidth(2);
   Graph_Graph3060->SetMarkerStyle(20);
   Graph_Graph3060->GetXaxis()->SetNdivisions(509);
   Graph_Graph3060->GetXaxis()->SetLabelFont(132);
   Graph_Graph3060->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3060->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3060->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3060->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3060->GetXaxis()->SetTitleFont(132);
   Graph_Graph3060->GetYaxis()->SetNdivisions(509);
   Graph_Graph3060->GetYaxis()->SetLabelFont(132);
   Graph_Graph3060->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3060->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3060->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3060->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3060->GetYaxis()->SetTitleFont(132);
   Graph_Graph3060->GetZaxis()->SetLabelFont(132);
   Graph_Graph3060->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3060->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3060->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3060->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3060);
   
   grae->Draw("p ");
   
   TH1F *hist__45 = new TH1F("hist__45","NCpi0BDT_theta2_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__45->SetLineColor(ci);
   hist__45->GetXaxis()->SetLabelFont(42);
   hist__45->GetXaxis()->SetTitleOffset(1);
   hist__45->GetXaxis()->SetTitleFont(42);
   hist__45->GetYaxis()->SetNdivisions(405);
   hist__45->GetYaxis()->SetLabelFont(42);
   hist__45->GetYaxis()->SetTitleFont(42);
   hist__45->GetZaxis()->SetLabelFont(42);
   hist__45->GetZaxis()->SetTitleOffset(1);
   hist__45->GetZaxis()->SetTitleFont(42);
   hist__45->Draw("axis same");
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
   canvas15->cd();
   canvas15->Modified();
   canvas15->cd();
   canvas15->SetSelected(canvas15);
}

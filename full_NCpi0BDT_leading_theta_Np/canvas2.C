#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu May 26 13:37:50 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-27.69231,-5.226431,203.0769,550.4257);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hmc__4->SetBinContent(1,51.43242);
   hmc__4->SetBinContent(2,131.566);
   hmc__4->SetBinContent(3,190.8426);
   hmc__4->SetBinContent(4,232.9245);
   hmc__4->SetBinContent(5,247.8755);
   hmc__4->SetBinContent(6,232.5236);
   hmc__4->SetBinContent(7,261.3215);
   hmc__4->SetBinContent(8,228.0125);
   hmc__4->SetBinContent(9,214.2469);
   hmc__4->SetBinContent(10,190.9073);
   hmc__4->SetBinContent(11,195.2125);
   hmc__4->SetBinContent(12,185.9995);
   hmc__4->SetBinContent(13,149.4191);
   hmc__4->SetBinContent(14,132.2395);
   hmc__4->SetBinContent(15,121.1107);
   hmc__4->SetBinContent(16,129.8469);
   hmc__4->SetBinContent(17,102.4553);
   hmc__4->SetBinContent(18,92.43468);
   hmc__4->SetBinContent(19,89.0025);
   hmc__4->SetBinContent(20,84.19452);
   hmc__4->SetBinContent(21,68.75594);
   hmc__4->SetBinContent(22,58.46668);
   hmc__4->SetBinContent(23,36.69315);
   hmc__4->SetBinContent(24,16.11345);
   hmc__4->SetBinError(1,13.491);
   hmc__4->SetBinError(2,31.87873);
   hmc__4->SetBinError(3,44.11793);
   hmc__4->SetBinError(4,56.54335);
   hmc__4->SetBinError(5,56.14871);
   hmc__4->SetBinError(6,61.86128);
   hmc__4->SetBinError(7,70.34149);
   hmc__4->SetBinError(8,66.45527);
   hmc__4->SetBinError(9,56.68712);
   hmc__4->SetBinError(10,49.15073);
   hmc__4->SetBinError(11,48.91946);
   hmc__4->SetBinError(12,43.44163);
   hmc__4->SetBinError(13,35.11558);
   hmc__4->SetBinError(14,29.14589);
   hmc__4->SetBinError(15,29.18181);
   hmc__4->SetBinError(16,26.27154);
   hmc__4->SetBinError(17,24.86205);
   hmc__4->SetBinError(18,22.45687);
   hmc__4->SetBinError(19,20.30792);
   hmc__4->SetBinError(20,20.52272);
   hmc__4->SetBinError(21,18.62175);
   hmc__4->SetBinError(22,18.29371);
   hmc__4->SetBinError(23,10.62948);
   hmc__4->SetBinError(24,5.063965);
   hmc__4->SetBinError(25,0.4212968);
   hmc__4->SetMinimum(-5.226431);
   hmc__4->SetMaximum(522.6431);
   hmc__4->SetEntries(3396.741);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,180);
   hs2_stack_2->SetMinimum(-2.083393e-08);
   hs2_stack_2->SetMaximum(274.3876);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.3934307);
   hbadmatch_stack_1->SetBinContent(2,0.9269427);
   hbadmatch_stack_1->SetBinContent(3,4.020559);
   hbadmatch_stack_1->SetBinContent(4,4.086666);
   hbadmatch_stack_1->SetBinContent(5,3.167734);
   hbadmatch_stack_1->SetBinContent(6,5.142456);
   hbadmatch_stack_1->SetBinContent(7,5.949908);
   hbadmatch_stack_1->SetBinContent(8,4.779894);
   hbadmatch_stack_1->SetBinContent(9,3.005333);
   hbadmatch_stack_1->SetBinContent(10,4.927561);
   hbadmatch_stack_1->SetBinContent(11,8.387618);
   hbadmatch_stack_1->SetBinContent(12,8.106403);
   hbadmatch_stack_1->SetBinContent(13,2.419563);
   hbadmatch_stack_1->SetBinContent(14,5.120872);
   hbadmatch_stack_1->SetBinContent(15,3.843753);
   hbadmatch_stack_1->SetBinContent(16,2.755828);
   hbadmatch_stack_1->SetBinContent(17,2.721529);
   hbadmatch_stack_1->SetBinContent(18,1.465526);
   hbadmatch_stack_1->SetBinContent(19,2.247963);
   hbadmatch_stack_1->SetBinContent(20,2.880401);
   hbadmatch_stack_1->SetBinContent(21,2.02849);
   hbadmatch_stack_1->SetBinContent(22,1.463466);
   hbadmatch_stack_1->SetBinContent(23,1.322064);
   hbadmatch_stack_1->SetBinContent(24,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.2781975);
   hbadmatch_stack_1->SetBinError(2,0.4800908);
   hbadmatch_stack_1->SetBinError(3,1.011215);
   hbadmatch_stack_1->SetBinError(4,1.002094);
   hbadmatch_stack_1->SetBinError(5,0.984179);
   hbadmatch_stack_1->SetBinError(6,1.161651);
   hbadmatch_stack_1->SetBinError(7,1.331454);
   hbadmatch_stack_1->SetBinError(8,1.114301);
   hbadmatch_stack_1->SetBinError(9,0.9905121);
   hbadmatch_stack_1->SetBinError(10,1.144362);
   hbadmatch_stack_1->SetBinError(11,2.404008);
   hbadmatch_stack_1->SetBinError(12,1.785847);
   hbadmatch_stack_1->SetBinError(13,0.7931673);
   hbadmatch_stack_1->SetBinError(14,1.209025);
   hbadmatch_stack_1->SetBinError(15,1.003006);
   hbadmatch_stack_1->SetBinError(16,0.8557526);
   hbadmatch_stack_1->SetBinError(17,0.8617076);
   hbadmatch_stack_1->SetBinError(18,0.6209405);
   hbadmatch_stack_1->SetBinError(19,0.7740156);
   hbadmatch_stack_1->SetBinError(20,0.820397);
   hbadmatch_stack_1->SetBinError(21,0.7615453);
   hbadmatch_stack_1->SetBinError(22,0.6681936);
   hbadmatch_stack_1->SetBinError(23,0.5554667);
   hbadmatch_stack_1->SetBinError(24,0.2946723);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hext_stack_2->SetBinContent(1,2.27519);
   hext_stack_2->SetBinContent(2,4.460999);
   hext_stack_2->SetBinContent(3,5.326038);
   hext_stack_2->SetBinContent(4,15.0281);
   hext_stack_2->SetBinContent(5,28.22509);
   hext_stack_2->SetBinContent(6,7.448415);
   hext_stack_2->SetBinContent(7,27.22595);
   hext_stack_2->SetBinContent(8,12.23658);
   hext_stack_2->SetBinContent(9,19.60437);
   hext_stack_2->SetBinContent(10,16.28657);
   hext_stack_2->SetBinContent(11,18.88497);
   hext_stack_2->SetBinContent(12,18.34987);
   hext_stack_2->SetBinContent(13,14.50617);
   hext_stack_2->SetBinContent(14,11.75219);
   hext_stack_2->SetBinContent(15,9.733557);
   hext_stack_2->SetBinContent(16,21.783);
   hext_stack_2->SetBinContent(17,12.96198);
   hext_stack_2->SetBinContent(18,7.434054);
   hext_stack_2->SetBinContent(19,4.710375);
   hext_stack_2->SetBinContent(20,7.030227);
   hext_stack_2->SetBinContent(21,4.677244);
   hext_stack_2->SetBinContent(22,4.435048);
   hext_stack_2->SetBinContent(23,1.379791);
   hext_stack_2->SetBinContent(24,1.137595);
   hext_stack_2->SetBinError(1,0.9336798);
   hext_stack_2->SetBinError(2,1.372818);
   hext_stack_2->SetBinError(3,1.615154);
   hext_stack_2->SetBinError(4,2.716304);
   hext_stack_2->SetBinError(5,3.853055);
   hext_stack_2->SetBinError(6,1.814999);
   hext_stack_2->SetBinError(7,3.87283);
   hext_stack_2->SetBinError(8,2.224356);
   hext_stack_2->SetBinError(9,3.159708);
   hext_stack_2->SetBinError(10,2.555767);
   hext_stack_2->SetBinError(11,3.105981);
   hext_stack_2->SetBinError(12,2.890607);
   hext_stack_2->SetBinError(13,2.796887);
   hext_stack_2->SetBinError(14,2.203967);
   hext_stack_2->SetBinError(15,1.90485);
   hext_stack_2->SetBinError(16,3.346315);
   hext_stack_2->SetBinError(17,2.687262);
   hext_stack_2->SetBinError(18,1.922661);
   hext_stack_2->SetBinError(19,1.314751);
   hext_stack_2->SetBinError(20,1.78745);
   hext_stack_2->SetBinError(21,1.54863);
   hext_stack_2->SetBinError(22,1.533985);
   hext_stack_2->SetBinError(23,0.6935586);
   hext_stack_2->SetBinError(24,0.6602113);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.375357);
   hdirt_stack_3->SetBinContent(2,0.4762587);
   hdirt_stack_3->SetBinContent(3,1.068617);
   hdirt_stack_3->SetBinContent(4,0.4377912);
   hdirt_stack_3->SetBinContent(5,1.503647);
   hdirt_stack_3->SetBinContent(6,1.504074);
   hdirt_stack_3->SetBinContent(7,0.89118);
   hdirt_stack_3->SetBinContent(8,0.5135057);
   hdirt_stack_3->SetBinContent(9,1.044879);
   hdirt_stack_3->SetBinContent(10,0.5033671);
   hdirt_stack_3->SetBinContent(11,1.114166);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.425347);
   hdirt_stack_3->SetBinContent(15,0.9525174);
   hdirt_stack_3->SetBinContent(16,0.9389439);
   hdirt_stack_3->SetBinContent(17,0.5570828);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.5429839);
   hdirt_stack_3->SetBinContent(20,0.2214509);
   hdirt_stack_3->SetBinContent(21,0.6357902);
   hdirt_stack_3->SetBinContent(23,0.2761429);
   hdirt_stack_3->SetBinError(1,0.2690641);
   hdirt_stack_3->SetBinError(2,0.3652866);
   hdirt_stack_3->SetBinError(3,0.5393795);
   hdirt_stack_3->SetBinError(4,0.3095651);
   hdirt_stack_3->SetBinError(5,0.6468912);
   hdirt_stack_3->SetBinError(6,0.578223);
   hdirt_stack_3->SetBinError(7,0.5528056);
   hdirt_stack_3->SetBinError(8,0.3809293);
   hdirt_stack_3->SetBinError(9,0.4806018);
   hdirt_stack_3->SetBinError(10,0.3763708);
   hdirt_stack_3->SetBinError(11,0.569712);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.9754574);
   hdirt_stack_3->SetBinError(15,0.5165933);
   hdirt_stack_3->SetBinError(16,0.5171189);
   hdirt_stack_3->SetBinError(17,0.4028472);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.4278058);
   hdirt_stack_3->SetBinError(20,0.2189105);
   hdirt_stack_3->SetBinError(21,0.3722125);
   hdirt_stack_3->SetBinError(23,0.1952625);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,3.246011);
   houtFV_stack_4->SetBinContent(2,7.338856);
   houtFV_stack_4->SetBinContent(3,14.34085);
   houtFV_stack_4->SetBinContent(4,15.57102);
   houtFV_stack_4->SetBinContent(5,20.44777);
   houtFV_stack_4->SetBinContent(6,13.89932);
   houtFV_stack_4->SetBinContent(7,15.66738);
   houtFV_stack_4->SetBinContent(8,12.75163);
   houtFV_stack_4->SetBinContent(9,9.230231);
   houtFV_stack_4->SetBinContent(10,10.5259);
   houtFV_stack_4->SetBinContent(11,7.936044);
   houtFV_stack_4->SetBinContent(12,8.098782);
   houtFV_stack_4->SetBinContent(13,8.144054);
   houtFV_stack_4->SetBinContent(14,7.203053);
   houtFV_stack_4->SetBinContent(15,7.974508);
   houtFV_stack_4->SetBinContent(16,6.998905);
   houtFV_stack_4->SetBinContent(17,6.014493);
   houtFV_stack_4->SetBinContent(18,5.427587);
   houtFV_stack_4->SetBinContent(19,7.334997);
   houtFV_stack_4->SetBinContent(20,6.307098);
   houtFV_stack_4->SetBinContent(21,5.727708);
   houtFV_stack_4->SetBinContent(22,7.630565);
   houtFV_stack_4->SetBinContent(23,6.79706);
   houtFV_stack_4->SetBinContent(24,1.75406);
   houtFV_stack_4->SetBinError(1,1.049845);
   houtFV_stack_4->SetBinError(2,1.316755);
   houtFV_stack_4->SetBinError(3,1.959154);
   houtFV_stack_4->SetBinError(4,2.040202);
   houtFV_stack_4->SetBinError(5,2.244397);
   houtFV_stack_4->SetBinError(6,1.804514);
   houtFV_stack_4->SetBinError(7,1.946152);
   houtFV_stack_4->SetBinError(8,1.76629);
   houtFV_stack_4->SetBinError(9,1.439954);
   houtFV_stack_4->SetBinError(10,1.68538);
   houtFV_stack_4->SetBinError(11,1.432425);
   houtFV_stack_4->SetBinError(12,1.392231);
   houtFV_stack_4->SetBinError(13,1.500777);
   houtFV_stack_4->SetBinError(14,1.363721);
   houtFV_stack_4->SetBinError(15,1.37338);
   houtFV_stack_4->SetBinError(16,1.325519);
   houtFV_stack_4->SetBinError(17,1.219275);
   houtFV_stack_4->SetBinError(18,1.171021);
   houtFV_stack_4->SetBinError(19,1.351901);
   houtFV_stack_4->SetBinError(20,1.257248);
   houtFV_stack_4->SetBinError(21,1.188135);
   houtFV_stack_4->SetBinError(22,1.403237);
   houtFV_stack_4->SetBinError(23,1.356075);
   houtFV_stack_4->SetBinError(24,0.6347245);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.645444);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7655898);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.030308);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5432221);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4516052);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2348149);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2632096);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2611072);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,26.21999);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,64.91228);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,96.72419);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,131.6814);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,132.2902);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,132.1637);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,137.748);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,125.8865);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,109.9748);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,98.50813);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,96.93479);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,88.13118);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,76.02832);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,65.01256);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,64.98915);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,60.19015);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,51.81898);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,47.7384);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,43.0371);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,39.86761);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,33.42584);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,23.38478);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,14.91792);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,4.893982);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.769981);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.649838);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.171222);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.792698);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.789944);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.773047);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.932602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.661095);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.409267);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.195695);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.22441);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.150753);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.844425);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.583799);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.614783);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.468265);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.358506);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.215275);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.179184);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.113034);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.936825);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.571913);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,1.266315);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.7646316);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
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
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hCCpi0inFV_stack_7->SetBinContent(1,11.6008);
   hCCpi0inFV_stack_7->SetBinContent(2,30.12206);
   hCCpi0inFV_stack_7->SetBinContent(3,44.59161);
   hCCpi0inFV_stack_7->SetBinContent(4,36.06431);
   hCCpi0inFV_stack_7->SetBinContent(5,34.4679);
   hCCpi0inFV_stack_7->SetBinContent(6,45.10032);
   hCCpi0inFV_stack_7->SetBinContent(7,42.29947);
   hCCpi0inFV_stack_7->SetBinContent(8,36.42752);
   hCCpi0inFV_stack_7->SetBinContent(9,34.37073);
   hCCpi0inFV_stack_7->SetBinContent(10,28.88062);
   hCCpi0inFV_stack_7->SetBinContent(11,29.64063);
   hCCpi0inFV_stack_7->SetBinContent(12,26.41019);
   hCCpi0inFV_stack_7->SetBinContent(13,20.62596);
   hCCpi0inFV_stack_7->SetBinContent(14,16.34983);
   hCCpi0inFV_stack_7->SetBinContent(15,18.52742);
   hCCpi0inFV_stack_7->SetBinContent(16,18.35735);
   hCCpi0inFV_stack_7->SetBinContent(17,14.68132);
   hCCpi0inFV_stack_7->SetBinContent(18,16.17331);
   hCCpi0inFV_stack_7->SetBinContent(19,15.41327);
   hCCpi0inFV_stack_7->SetBinContent(20,16.05474);
   hCCpi0inFV_stack_7->SetBinContent(21,9.821535);
   hCCpi0inFV_stack_7->SetBinContent(22,11.56943);
   hCCpi0inFV_stack_7->SetBinContent(23,6.337735);
   hCCpi0inFV_stack_7->SetBinContent(24,3.087543);
   hCCpi0inFV_stack_7->SetBinError(1,1.793193);
   hCCpi0inFV_stack_7->SetBinError(2,2.747156);
   hCCpi0inFV_stack_7->SetBinError(3,3.410772);
   hCCpi0inFV_stack_7->SetBinError(4,3.00188);
   hCCpi0inFV_stack_7->SetBinError(5,2.874537);
   hCCpi0inFV_stack_7->SetBinError(6,3.445881);
   hCCpi0inFV_stack_7->SetBinError(7,3.266399);
   hCCpi0inFV_stack_7->SetBinError(8,3.085884);
   hCCpi0inFV_stack_7->SetBinError(9,3.020014);
   hCCpi0inFV_stack_7->SetBinError(10,2.658916);
   hCCpi0inFV_stack_7->SetBinError(11,2.722373);
   hCCpi0inFV_stack_7->SetBinError(12,2.537332);
   hCCpi0inFV_stack_7->SetBinError(13,2.259942);
   hCCpi0inFV_stack_7->SetBinError(14,1.954502);
   hCCpi0inFV_stack_7->SetBinError(15,2.161734);
   hCCpi0inFV_stack_7->SetBinError(16,2.139394);
   hCCpi0inFV_stack_7->SetBinError(17,1.863579);
   hCCpi0inFV_stack_7->SetBinError(18,1.966269);
   hCCpi0inFV_stack_7->SetBinError(19,2.005361);
   hCCpi0inFV_stack_7->SetBinError(20,1.984415);
   hCCpi0inFV_stack_7->SetBinError(21,1.570111);
   hCCpi0inFV_stack_7->SetBinError(22,1.692661);
   hCCpi0inFV_stack_7->SetBinError(23,1.298862);
   hCCpi0inFV_stack_7->SetBinError(24,0.8465483);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
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
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hNCinFV_stack_8->SetBinContent(1,1.178602);
   hNCinFV_stack_8->SetBinContent(2,7.712609);
   hNCinFV_stack_8->SetBinContent(3,10.82408);
   hNCinFV_stack_8->SetBinContent(4,13.47943);
   hNCinFV_stack_8->SetBinContent(5,11.53196);
   hNCinFV_stack_8->SetBinContent(6,10.87733);
   hNCinFV_stack_8->SetBinContent(7,10.17801);
   hNCinFV_stack_8->SetBinContent(8,9.191051);
   hNCinFV_stack_8->SetBinContent(9,9.526157);
   hNCinFV_stack_8->SetBinContent(10,5.960158);
   hNCinFV_stack_8->SetBinContent(11,6.845682);
   hNCinFV_stack_8->SetBinContent(12,5.268578);
   hNCinFV_stack_8->SetBinContent(13,6.826004);
   hNCinFV_stack_8->SetBinContent(14,3.52458);
   hNCinFV_stack_8->SetBinContent(15,5.229931);
   hNCinFV_stack_8->SetBinContent(16,5.375084);
   hNCinFV_stack_8->SetBinContent(17,4.886373);
   hNCinFV_stack_8->SetBinContent(18,5.520237);
   hNCinFV_stack_8->SetBinContent(19,6.160255);
   hNCinFV_stack_8->SetBinContent(20,2.7859);
   hNCinFV_stack_8->SetBinContent(21,5.138491);
   hNCinFV_stack_8->SetBinContent(22,4.494632);
   hNCinFV_stack_8->SetBinContent(23,2.980925);
   hNCinFV_stack_8->SetBinContent(24,2.147572);
   hNCinFV_stack_8->SetBinError(1,0.4811646);
   hNCinFV_stack_8->SetBinError(2,1.414892);
   hNCinFV_stack_8->SetBinError(3,1.733134);
   hNCinFV_stack_8->SetBinError(4,1.851175);
   hNCinFV_stack_8->SetBinError(5,1.687957);
   hNCinFV_stack_8->SetBinError(6,1.722042);
   hNCinFV_stack_8->SetBinError(7,1.545628);
   hNCinFV_stack_8->SetBinError(8,1.481268);
   hNCinFV_stack_8->SetBinError(9,1.519174);
   hNCinFV_stack_8->SetBinError(10,1.209257);
   hNCinFV_stack_8->SetBinError(11,1.31748);
   hNCinFV_stack_8->SetBinError(12,1.193672);
   hNCinFV_stack_8->SetBinError(13,1.38796);
   hNCinFV_stack_8->SetBinError(14,0.9426291);
   hNCinFV_stack_8->SetBinError(15,1.12717);
   hNCinFV_stack_8->SetBinError(16,1.16112);
   hNCinFV_stack_8->SetBinError(17,1.073996);
   hNCinFV_stack_8->SetBinError(18,1.194104);
   hNCinFV_stack_8->SetBinError(19,1.225694);
   hNCinFV_stack_8->SetBinError(20,0.8327353);
   hNCinFV_stack_8->SetBinError(21,1.094386);
   hNCinFV_stack_8->SetBinError(22,1.037659);
   hNCinFV_stack_8->SetBinError(23,0.8552677);
   hNCinFV_stack_8->SetBinError(24,0.7859205);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
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
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hnumuCCinFV_stack_9->SetBinContent(1,2.624843);
   hnumuCCinFV_stack_9->SetBinContent(2,8.000624);
   hnumuCCinFV_stack_9->SetBinContent(3,11.86237);
   hnumuCCinFV_stack_9->SetBinContent(4,14.16278);
   hnumuCCinFV_stack_9->SetBinContent(5,15.58638);
   hnumuCCinFV_stack_9->SetBinContent(6,15.40359);
   hnumuCCinFV_stack_9->SetBinContent(7,20.03708);
   hnumuCCinFV_stack_9->SetBinContent(8,25.42881);
   hnumuCCinFV_stack_9->SetBinContent(9,27.49043);
   hnumuCCinFV_stack_9->SetBinContent(10,24.01342);
   hnumuCCinFV_stack_9->SetBinContent(11,24.60912);
   hnumuCCinFV_stack_9->SetBinContent(12,31.04953);
   hnumuCCinFV_stack_9->SetBinContent(13,20.08698);
   hnumuCCinFV_stack_9->SetBinContent(14,21.22847);
   hnumuCCinFV_stack_9->SetBinContent(15,9.576353);
   hnumuCCinFV_stack_9->SetBinContent(16,12.8588);
   hnumuCCinFV_stack_9->SetBinContent(17,8.578871);
   hnumuCCinFV_stack_9->SetBinContent(18,7.760188);
   hnumuCCinFV_stack_9->SetBinContent(19,9.307875);
   hnumuCCinFV_stack_9->SetBinContent(20,8.481657);
   hnumuCCinFV_stack_9->SetBinContent(21,7.10413);
   hnumuCCinFV_stack_9->SetBinContent(22,5.039519);
   hnumuCCinFV_stack_9->SetBinContent(23,2.653604);
   hnumuCCinFV_stack_9->SetBinContent(24,2.676591);
   hnumuCCinFV_stack_9->SetBinError(1,0.8613261);
   hnumuCCinFV_stack_9->SetBinError(2,1.53669);
   hnumuCCinFV_stack_9->SetBinError(3,1.800155);
   hnumuCCinFV_stack_9->SetBinError(4,2.495819);
   hnumuCCinFV_stack_9->SetBinError(5,2.592578);
   hnumuCCinFV_stack_9->SetBinError(6,2.215975);
   hnumuCCinFV_stack_9->SetBinError(7,2.752493);
   hnumuCCinFV_stack_9->SetBinError(8,3.706421);
   hnumuCCinFV_stack_9->SetBinError(9,3.114293);
   hnumuCCinFV_stack_9->SetBinError(10,2.747537);
   hnumuCCinFV_stack_9->SetBinError(11,2.798964);
   hnumuCCinFV_stack_9->SetBinError(12,3.531684);
   hnumuCCinFV_stack_9->SetBinError(13,2.471613);
   hnumuCCinFV_stack_9->SetBinError(14,2.846878);
   hnumuCCinFV_stack_9->SetBinError(15,1.615734);
   hnumuCCinFV_stack_9->SetBinError(16,1.918409);
   hnumuCCinFV_stack_9->SetBinError(17,1.838661);
   hnumuCCinFV_stack_9->SetBinError(18,1.805222);
   hnumuCCinFV_stack_9->SetBinError(19,1.699165);
   hnumuCCinFV_stack_9->SetBinError(20,1.531404);
   hnumuCCinFV_stack_9->SetBinError(21,1.396185);
   hnumuCCinFV_stack_9->SetBinError(22,1.206719);
   hnumuCCinFV_stack_9->SetBinError(23,0.8354831);
   hnumuCCinFV_stack_9->SetBinError(24,0.8323611);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
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
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hnueCCinFV_stack_10->SetBinContent(1,3.113986);
   hnueCCinFV_stack_10->SetBinContent(2,5.96996);
   hnueCCinFV_stack_10->SetBinContent(3,1.318696);
   hnueCCinFV_stack_10->SetBinContent(4,1.382717);
   hnueCCinFV_stack_10->SetBinContent(5,0.3900497);
   hnueCCinFV_stack_10->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_10->SetBinContent(7,1.129085);
   hnueCCinFV_stack_10->SetBinContent(8,0.2538659);
   hnueCCinFV_stack_10->SetBinContent(10,1.301544);
   hnueCCinFV_stack_10->SetBinContent(11,0.8594293);
   hnueCCinFV_stack_10->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_10->SetBinContent(14,0.5946997);
   hnueCCinFV_stack_10->SetBinContent(15,0.2556436);
   hnueCCinFV_stack_10->SetBinContent(16,0.5888425);
   hnueCCinFV_stack_10->SetBinContent(17,0.2346262);
   hnueCCinFV_stack_10->SetBinContent(18,0.2505759);
   hnueCCinFV_stack_10->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_10->SetBinContent(20,0.4402164);
   hnueCCinFV_stack_10->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_10->SetBinError(1,0.9012873);
   hnueCCinFV_stack_10->SetBinError(2,2.181419);
   hnueCCinFV_stack_10->SetBinError(3,0.6188854);
   hnueCCinFV_stack_10->SetBinError(4,0.5781342);
   hnueCCinFV_stack_10->SetBinError(5,0.2758068);
   hnueCCinFV_stack_10->SetBinError(6,0.48078);
   hnueCCinFV_stack_10->SetBinError(7,0.5777911);
   hnueCCinFV_stack_10->SetBinError(8,0.2538659);
   hnueCCinFV_stack_10->SetBinError(10,0.6041884);
   hnueCCinFV_stack_10->SetBinError(11,0.5216512);
   hnueCCinFV_stack_10->SetBinError(13,0.3921167);
   hnueCCinFV_stack_10->SetBinError(14,0.5946997);
   hnueCCinFV_stack_10->SetBinError(15,0.2556436);
   hnueCCinFV_stack_10->SetBinError(16,0.4213728);
   hnueCCinFV_stack_10->SetBinError(17,0.2346262);
   hnueCCinFV_stack_10->SetBinError(18,0.2502083);
   hnueCCinFV_stack_10->SetBinError(19,0.2476759);
   hnueCCinFV_stack_10->SetBinError(20,0.3132948);
   hnueCCinFV_stack_10->SetBinError(21,0.1967154);
   hnueCCinFV_stack_10->SetBinError(22,0.2781975);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
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
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);
   hmcerror__5->SetBinContent(1,51.43242);
   hmcerror__5->SetBinContent(2,131.566);
   hmcerror__5->SetBinContent(3,190.8426);
   hmcerror__5->SetBinContent(4,232.9245);
   hmcerror__5->SetBinContent(5,247.8755);
   hmcerror__5->SetBinContent(6,232.5236);
   hmcerror__5->SetBinContent(7,261.3215);
   hmcerror__5->SetBinContent(8,228.0125);
   hmcerror__5->SetBinContent(9,214.2469);
   hmcerror__5->SetBinContent(10,190.9073);
   hmcerror__5->SetBinContent(11,195.2125);
   hmcerror__5->SetBinContent(12,185.9995);
   hmcerror__5->SetBinContent(13,149.4191);
   hmcerror__5->SetBinContent(14,132.2395);
   hmcerror__5->SetBinContent(15,121.1107);
   hmcerror__5->SetBinContent(16,129.8469);
   hmcerror__5->SetBinContent(17,102.4553);
   hmcerror__5->SetBinContent(18,92.43468);
   hmcerror__5->SetBinContent(19,89.0025);
   hmcerror__5->SetBinContent(20,84.19452);
   hmcerror__5->SetBinContent(21,68.75594);
   hmcerror__5->SetBinContent(22,58.46668);
   hmcerror__5->SetBinContent(23,36.69315);
   hmcerror__5->SetBinContent(24,16.11345);
   hmcerror__5->SetBinError(1,13.491);
   hmcerror__5->SetBinError(2,31.87873);
   hmcerror__5->SetBinError(3,44.11793);
   hmcerror__5->SetBinError(4,56.54335);
   hmcerror__5->SetBinError(5,56.14871);
   hmcerror__5->SetBinError(6,61.86128);
   hmcerror__5->SetBinError(7,70.34149);
   hmcerror__5->SetBinError(8,66.45527);
   hmcerror__5->SetBinError(9,56.68712);
   hmcerror__5->SetBinError(10,49.15073);
   hmcerror__5->SetBinError(11,48.91946);
   hmcerror__5->SetBinError(12,43.44163);
   hmcerror__5->SetBinError(13,35.11558);
   hmcerror__5->SetBinError(14,29.14589);
   hmcerror__5->SetBinError(15,29.18181);
   hmcerror__5->SetBinError(16,26.27154);
   hmcerror__5->SetBinError(17,24.86205);
   hmcerror__5->SetBinError(18,22.45687);
   hmcerror__5->SetBinError(19,20.30792);
   hmcerror__5->SetBinError(20,20.52272);
   hmcerror__5->SetBinError(21,18.62175);
   hmcerror__5->SetBinError(22,18.29371);
   hmcerror__5->SetBinError(23,10.62948);
   hmcerror__5->SetBinError(24,5.063965);
   hmcerror__5->SetBinError(25,0.4212968);
   hmcerror__5->SetEntries(3396.741);

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
   
   Double_t _fx3005[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3005[24] = {
   35,
   99,
   147,
   184,
   185,
   176,
   191,
   166,
   175,
   136,
   162,
   125,
   124,
   96,
   100,
   82,
   85,
   74,
   71,
   68,
   54,
   46,
   30,
   10};
   Double_t _felx3005[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3005[24] = {
   6.0548,
   10.0712,
   12.12436,
   13.56466,
   13.60147,
   13.2665,
   13.82027,
   12.8841,
   13.22876,
   11.6619,
   12.72792,
   11.18034,
   11.13553,
   9.9196,
   10.1212,
   9.1791,
   9.3428,
   8.7275,
   8.5518,
   8.3726,
   7.4785,
   6.9153,
   5.6197,
   3.34883};
   Double_t _fehx3005[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3005[24] = {
   5.8483,
   9.87,
   12.12436,
   13.56466,
   13.60147,
   13.2665,
   13.82027,
   12.8841,
   13.22876,
   11.6619,
   12.72792,
   11.18034,
   11.13553,
   9.718,
   9.92,
   8.9774,
   9.1411,
   8.5253,
   8.3496,
   8.1701,
   7.275,
   6.7108,
   5.4117,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,198);
   Graph_Graph3005->SetMinimum(5.986053);
   Graph_Graph3005->SetMaximum(224.6372);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1766.5","F");

   ci = 1449;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 567.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-27.72,-0.5333333,203.28,2.133333);
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
   
   Double_t _fx3006[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3006[24] = {
   0.2623053,
   0.2423022,
   0.2311744,
   0.2427539,
   0.2265198,
   0.266043,
   0.269176,
   0.2914545,
   0.2645878,
   0.2574587,
   0.250596,
   0.2335577,
   0.235014,
   0.2204023,
   0.2409514,
   0.202327,
   0.2426625,
   0.2429485,
   0.2281724,
   0.2437537,
   0.2708385,
   0.3128913,
   0.2896858,
   0.3142693};
   Double_t _fehx3006[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3006[24] = {
   0.2623053,
   0.2423022,
   0.2311744,
   0.2427539,
   0.2265198,
   0.266043,
   0.269176,
   0.2914545,
   0.2645878,
   0.2574587,
   0.250596,
   0.2335577,
   0.235014,
   0.2204023,
   0.2409514,
   0.202327,
   0.2426625,
   0.2429485,
   0.2281724,
   0.2437537,
   0.2708385,
   0.3128913,
   0.2896858,
   0.3142693};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,198);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [degree]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3007[24] = {
   0.2225933,
   0.2153907,
   0.2139724,
   0.2162549,
   0.2172849,
   0.2557867,
   0.2514135,
   0.2722565,
   0.2547171,
   0.2462696,
   0.2291282,
   0.2259089,
   0.2127508,
   0.2100471,
   0.2068183,
   0.1924162,
   0.20702,
   0.2193114,
   0.2160948,
   0.2073762,
   0.2202004,
   0.2208971,
   0.2323952,
   0.2464353};
   Double_t _fehx3007[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3007[24] = {
   0.2225933,
   0.2153907,
   0.2139724,
   0.2162549,
   0.2172849,
   0.2557867,
   0.2514135,
   0.2722565,
   0.2547171,
   0.2462696,
   0.2291282,
   0.2259089,
   0.2127508,
   0.2100471,
   0.2068183,
   0.1924162,
   0.20702,
   0.2193114,
   0.2160948,
   0.2073762,
   0.2202004,
   0.2208971,
   0.2323952,
   0.2464353};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,198);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3008[24] = {
   0.6805046,
   0.7524739,
   0.7702683,
   0.7899554,
   0.7463425,
   0.7569124,
   0.7309003,
   0.7280301,
   0.8168147,
   0.7123877,
   0.829865,
   0.6720447,
   0.8298808,
   0.7259555,
   0.8256906,
   0.6315129,
   0.8296304,
   0.8005654,
   0.7977304,
   0.8076535,
   0.7853867,
   0.7867729,
   0.8175914,
   0.6205994};
   Double_t _felx3008[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3008[24] = {
   0.1177234,
   0.07654864,
   0.06353066,
   0.05823629,
   0.05487219,
   0.05705442,
   0.05288609,
   0.0565061,
   0.06174539,
   0.06108674,
   0.06520036,
   0.06010951,
   0.07452549,
   0.07501238,
   0.0835698,
   0.07069171,
   0.09118907,
   0.09441803,
   0.09608494,
   0.09944353,
   0.1087688,
   0.1182776,
   0.1531539,
   0.2078282};
   Double_t _fehx3008[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3008[24] = {
   0.1137084,
   0.07501937,
   0.06353066,
   0.05823629,
   0.05487219,
   0.05705442,
   0.05288609,
   0.0565061,
   0.06174539,
   0.06108674,
   0.06520036,
   0.06010951,
   0.07452549,
   0.07348788,
   0.08190851,
   0.06913834,
   0.08922041,
   0.09223054,
   0.09381309,
   0.09703838,
   0.105809,
   0.1147799,
   0.1474853,
   0.1934967};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,198);
   Graph_Graph3008->SetMinimum(0.3575406);
   Graph_Graph3008->SetMaximum(1.020307);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,180);

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
   TLine *line = new TLine(0,1,180,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

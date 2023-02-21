#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Jun  8 17:52:18 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
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
   pad1->Range(-342.3077,-9,1260.256,995.2105);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__7->SetBinContent(0,928.3332);
   hmc__7->SetBinContent(1,9.483461);
   hmc__7->SetBinContent(2,16.58249);
   hmc__7->SetBinContent(3,52.81399);
   hmc__7->SetBinContent(4,361.6827);
   hmc__7->SetBinContent(5,318.3007);
   hmc__7->SetBinContent(6,349.9689);
   hmc__7->SetBinContent(7,430.3782);
   hmc__7->SetBinContent(8,412.7585);
   hmc__7->SetBinContent(9,395.3501);
   hmc__7->SetBinContent(10,366.038);
   hmc__7->SetBinContent(11,327.4837);
   hmc__7->SetBinContent(12,285.577);
   hmc__7->SetBinContent(13,235.5257);
   hmc__7->SetBinContent(14,206.2076);
   hmc__7->SetBinContent(15,174.547);
   hmc__7->SetBinContent(16,130.1738);
   hmc__7->SetBinContent(17,113.5088);
   hmc__7->SetBinContent(18,94.11887);
   hmc__7->SetBinContent(19,85.16707);
   hmc__7->SetBinContent(20,65.46386);
   hmc__7->SetBinContent(21,57.92749);
   hmc__7->SetBinContent(22,50.57458);
   hmc__7->SetBinContent(23,42.41805);
   hmc__7->SetBinContent(24,29.09369);
   hmc__7->SetBinContent(25,28.18933);
   hmc__7->SetBinContent(26,167.5509);
   hmc__7->SetBinError(0,16.56257);
   hmc__7->SetBinError(1,12.56817);
   hmc__7->SetBinError(2,10.55295);
   hmc__7->SetBinError(3,26.33146);
   hmc__7->SetBinError(4,101.5606);
   hmc__7->SetBinError(5,87.72649);
   hmc__7->SetBinError(6,95.33938);
   hmc__7->SetBinError(7,125.0297);
   hmc__7->SetBinError(8,112.1182);
   hmc__7->SetBinError(9,114.0781);
   hmc__7->SetBinError(10,102.4147);
   hmc__7->SetBinError(11,91.97966);
   hmc__7->SetBinError(12,84.39309);
   hmc__7->SetBinError(13,87.28682);
   hmc__7->SetBinError(14,61.71801);
   hmc__7->SetBinError(15,54.47287);
   hmc__7->SetBinError(16,45.33352);
   hmc__7->SetBinError(17,37.00384);
   hmc__7->SetBinError(18,33.99069);
   hmc__7->SetBinError(19,43.10042);
   hmc__7->SetBinError(20,29.85321);
   hmc__7->SetBinError(21,28.20772);
   hmc__7->SetBinError(22,22.07555);
   hmc__7->SetBinError(23,19.07648);
   hmc__7->SetBinError(24,16.90339);
   hmc__7->SetBinError(25,17.38232);
   hmc__7->SetBinError(26,50.11763);
   hmc__7->SetMinimum(-9);
   hmc__7->SetMaximum(945);
   hmc__7->SetEntries(5661.753);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,-150,1100);
   hs3_stack_3->SetMinimum(-1.348765e-08);
   hs3_stack_3->SetMaximum(451.8971);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,11.90249);
   hbadmatch_stack_1->SetBinContent(1,0.2136185);
   hbadmatch_stack_1->SetBinContent(3,0.4287933);
   hbadmatch_stack_1->SetBinContent(4,0.7563593);
   hbadmatch_stack_1->SetBinContent(5,1.3387);
   hbadmatch_stack_1->SetBinContent(6,1.144888);
   hbadmatch_stack_1->SetBinContent(7,1.498228);
   hbadmatch_stack_1->SetBinContent(8,0.7652553);
   hbadmatch_stack_1->SetBinContent(9,0.8017549);
   hbadmatch_stack_1->SetBinContent(10,1.600649);
   hbadmatch_stack_1->SetBinContent(11,1.270501);
   hbadmatch_stack_1->SetBinContent(12,1.347332);
   hbadmatch_stack_1->SetBinContent(13,1.123658);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,0.5884556);
   hbadmatch_stack_1->SetBinContent(16,1.949166);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(19,0.7319179);
   hbadmatch_stack_1->SetBinContent(20,0.5658798);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.5352025);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(25,0.4011598);
   hbadmatch_stack_1->SetBinContent(26,0.5901461);
   hbadmatch_stack_1->SetBinError(0,1.831884);
   hbadmatch_stack_1->SetBinError(1,0.2136185);
   hbadmatch_stack_1->SetBinError(3,0.3044378);
   hbadmatch_stack_1->SetBinError(4,0.4501842);
   hbadmatch_stack_1->SetBinError(5,0.6313342);
   hbadmatch_stack_1->SetBinError(6,0.527177);
   hbadmatch_stack_1->SetBinError(7,0.6320619);
   hbadmatch_stack_1->SetBinError(8,0.4544965);
   hbadmatch_stack_1->SetBinError(9,0.4948168);
   hbadmatch_stack_1->SetBinError(10,0.5668468);
   hbadmatch_stack_1->SetBinError(11,0.5895188);
   hbadmatch_stack_1->SetBinError(12,0.6375406);
   hbadmatch_stack_1->SetBinError(13,0.5188295);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.3397478);
   hbadmatch_stack_1->SetBinError(16,0.7604681);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(19,0.438694);
   hbadmatch_stack_1->SetBinError(20,0.4082429);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.3921167);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(25,0.4011598);
   hbadmatch_stack_1->SetBinError(26,0.340721);
   hbadmatch_stack_1->SetEntries(129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1462;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,62.09029);
   hext_stack_2->SetBinContent(2,1.290409);
   hext_stack_2->SetBinContent(3,1.544194);
   hext_stack_2->SetBinContent(4,6.24298);
   hext_stack_2->SetBinContent(5,10.30173);
   hext_stack_2->SetBinContent(6,4.054399);
   hext_stack_2->SetBinContent(7,8.242843);
   hext_stack_2->SetBinContent(8,6.870233);
   hext_stack_2->SetBinContent(9,9.347307);
   hext_stack_2->SetBinContent(10,10.55992);
   hext_stack_2->SetBinContent(11,7.511847);
   hext_stack_2->SetBinContent(12,7.276832);
   hext_stack_2->SetBinContent(13,4.296596);
   hext_stack_2->SetBinContent(14,7.65748);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,2.021405);
   hext_stack_2->SetBinContent(17,1.950793);
   hext_stack_2->SetBinContent(18,1.37261);
   hext_stack_2->SetBinContent(19,4.263464);
   hext_stack_2->SetBinContent(20,2.27519);
   hext_stack_2->SetBinContent(21,3.297453);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,2.510206);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,1.37261);
   hext_stack_2->SetBinContent(26,15.12901);
   hext_stack_2->SetBinError(0,5.38549);
   hext_stack_2->SetBinError(2,0.788756);
   hext_stack_2->SetBinError(3,0.7753719);
   hext_stack_2->SetBinError(4,1.547854);
   hext_stack_2->SetBinError(5,2.362349);
   hext_stack_2->SetBinError(6,1.311223);
   hext_stack_2->SetBinError(7,1.972853);
   hext_stack_2->SetBinError(8,1.791626);
   hext_stack_2->SetBinError(9,2.235556);
   hext_stack_2->SetBinError(10,2.386395);
   hext_stack_2->SetBinError(11,1.903048);
   hext_stack_2->SetBinError(12,1.837184);
   hext_stack_2->SetBinError(13,1.328326);
   hext_stack_2->SetBinError(14,2.002261);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,0.9448239);
   hext_stack_2->SetBinError(17,0.8755137);
   hext_stack_2->SetBinError(18,0.8259691);
   hext_stack_2->SetBinError(19,1.560171);
   hext_stack_2->SetBinError(20,0.9336798);
   hext_stack_2->SetBinError(21,1.384641);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,1.057404);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.8259691);
   hext_stack_2->SetBinError(26,2.915738);
   hext_stack_2->SetEntries(414);

   ci = 1463;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,4.158011);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.3981555);
   hdirt_stack_3->SetBinContent(5,0.3381872);
   hdirt_stack_3->SetBinContent(6,0.3734822);
   hdirt_stack_3->SetBinContent(7,1.052121);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,2.407774e-08);
   hdirt_stack_3->SetBinContent(10,0.6009047);
   hdirt_stack_3->SetBinContent(12,0.4042594);
   hdirt_stack_3->SetBinContent(13,0.7159333);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.165896);
   hdirt_stack_3->SetBinContent(19,1.167841e-06);
   hdirt_stack_3->SetBinContent(20,0.2665913);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(0,1.130458);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(4,0.28293);
   hdirt_stack_3->SetBinError(5,0.3381872);
   hdirt_stack_3->SetBinError(6,0.2679781);
   hdirt_stack_3->SetBinError(7,0.4983258);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,2.407774e-08);
   hdirt_stack_3->SetBinError(10,0.4402797);
   hdirt_stack_3->SetBinError(12,0.2998663);
   hdirt_stack_3->SetBinError(13,0.4324742);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(18,0.165896);
   hdirt_stack_3->SetBinError(19,1.167841e-06);
   hdirt_stack_3->SetBinError(20,0.2665913);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(42);

   ci = 1464;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,25.61763);
   houtFV_stack_4->SetBinContent(1,0.1967154);
   houtFV_stack_4->SetBinContent(2,0.4236581);
   houtFV_stack_4->SetBinContent(3,1.752451);
   houtFV_stack_4->SetBinContent(4,6.292988);
   houtFV_stack_4->SetBinContent(5,7.196497);
   houtFV_stack_4->SetBinContent(6,5.761143);
   houtFV_stack_4->SetBinContent(7,4.595769);
   houtFV_stack_4->SetBinContent(8,3.648943);
   houtFV_stack_4->SetBinContent(9,4.454813);
   houtFV_stack_4->SetBinContent(10,5.161091);
   houtFV_stack_4->SetBinContent(11,2.679393);
   houtFV_stack_4->SetBinContent(12,2.247316);
   houtFV_stack_4->SetBinContent(13,1.877025);
   houtFV_stack_4->SetBinContent(14,1.5941);
   houtFV_stack_4->SetBinContent(15,1.336999);
   houtFV_stack_4->SetBinContent(16,0.7834804);
   houtFV_stack_4->SetBinContent(17,0.8558886);
   houtFV_stack_4->SetBinContent(18,1.467217);
   houtFV_stack_4->SetBinContent(19,1.018006);
   houtFV_stack_4->SetBinContent(20,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.5352025);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.9801958);
   houtFV_stack_4->SetBinError(0,2.670127);
   houtFV_stack_4->SetBinError(1,0.1967154);
   houtFV_stack_4->SetBinError(2,0.300333);
   houtFV_stack_4->SetBinError(3,0.7345848);
   houtFV_stack_4->SetBinError(4,1.260248);
   houtFV_stack_4->SetBinError(5,2.06625);
   houtFV_stack_4->SetBinError(6,1.230215);
   houtFV_stack_4->SetBinError(7,1.100394);
   houtFV_stack_4->SetBinError(8,0.9055611);
   houtFV_stack_4->SetBinError(9,1.095002);
   houtFV_stack_4->SetBinError(10,1.147098);
   houtFV_stack_4->SetBinError(11,0.8775546);
   houtFV_stack_4->SetBinError(12,0.7337357);
   houtFV_stack_4->SetBinError(13,0.6904269);
   houtFV_stack_4->SetBinError(14,0.5642168);
   houtFV_stack_4->SetBinError(15,0.6302349);
   houtFV_stack_4->SetBinError(16,0.3917439);
   houtFV_stack_4->SetBinError(17,0.432376);
   houtFV_stack_4->SetBinError(18,0.6214735);
   houtFV_stack_4->SetBinError(19,0.4563062);
   houtFV_stack_4->SetBinError(20,0.2781975);
   houtFV_stack_4->SetBinError(21,0.3921167);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.4383608);
   houtFV_stack_4->SetEntries(337);

   ci = 1465;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(7);

   ci = 1466;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3909362);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2764336);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,29.72923);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.194636);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.4736358);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.922056);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.439261);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.220302);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.43662);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.779718);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.24737);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.654084);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.501134);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.564816);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.49623);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.051326);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.563072);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.26879);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.9212041);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.046422);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.408626);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.515986);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.404386);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2504359);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.5294358);
   hNCpi0inFVres_stack_7->SetBinError(0,1.78187);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1376284);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1634799);
   hNCpi0inFVres_stack_7->SetBinError(4,0.973981);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4252683);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5607299);
   hNCpi0inFVres_stack_7->SetBinError(7,0.714913);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7007071);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5439948);
   hNCpi0inFVres_stack_7->SetBinError(10,0.609723);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6272906);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5065769);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5169081);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5104047);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4178834);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3481013);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3520856);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3663515);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4365597);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2321763);
   hNCpi0inFVres_stack_7->SetBinError(21,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2253713);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1431726);
   hNCpi0inFVres_stack_7->SetBinError(24,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(26,0.168174);
   hNCpi0inFVres_stack_7->SetEntries(1501);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,17.72355);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.617886);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.77523);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.231512);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.081802);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.42598);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.902448);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.55203);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.133194);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.036212);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.241386);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.882094);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.243634);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.881598);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.339872);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.878854);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.352658);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.948272);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.795154);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.7386901);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.453355);
   hNCpi0inFVdis_stack_8->SetBinError(0,1.3918);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7740328);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5243835);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5030435);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6021222);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.489117);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6239211);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5184118);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4376721);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4975981);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2722948);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4295942);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5043955);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4804194);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4103648);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3111014);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3953083);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3247714);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3073253);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3261668);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5092872);
   hNCpi0inFVdis_stack_8->SetEntries(1094);

   ci = 1469;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1470;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1471;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,470.5269);
   hCCpi0inFV_stack_11->SetBinContent(1,3.5965);
   hCCpi0inFV_stack_11->SetBinContent(2,6.638824);
   hCCpi0inFV_stack_11->SetBinContent(3,26.57174);
   hCCpi0inFV_stack_11->SetBinContent(4,252.7592);
   hCCpi0inFV_stack_11->SetBinContent(5,228.0947);
   hCCpi0inFV_stack_11->SetBinContent(6,275.3778);
   hCCpi0inFV_stack_11->SetBinContent(7,333.9338);
   hCCpi0inFV_stack_11->SetBinContent(8,321.4298);
   hCCpi0inFV_stack_11->SetBinContent(9,306.6777);
   hCCpi0inFV_stack_11->SetBinContent(10,279.9566);
   hCCpi0inFV_stack_11->SetBinContent(11,250.9453);
   hCCpi0inFV_stack_11->SetBinContent(12,214.4402);
   hCCpi0inFV_stack_11->SetBinContent(13,177.5269);
   hCCpi0inFV_stack_11->SetBinContent(14,153.613);
   hCCpi0inFV_stack_11->SetBinContent(15,128.7485);
   hCCpi0inFV_stack_11->SetBinContent(16,98.92868);
   hCCpi0inFV_stack_11->SetBinContent(17,86.30695);
   hCCpi0inFV_stack_11->SetBinContent(18,71.7681);
   hCCpi0inFV_stack_11->SetBinContent(19,60.10437);
   hCCpi0inFV_stack_11->SetBinContent(20,47.27577);
   hCCpi0inFV_stack_11->SetBinContent(21,42.32992);
   hCCpi0inFV_stack_11->SetBinContent(22,35.98725);
   hCCpi0inFV_stack_11->SetBinContent(23,28.29065);
   hCCpi0inFV_stack_11->SetBinContent(24,22.07169);
   hCCpi0inFV_stack_11->SetBinContent(25,18.72353);
   hCCpi0inFV_stack_11->SetBinContent(26,113.4471);
   hCCpi0inFV_stack_11->SetBinError(0,10.9044);
   hCCpi0inFV_stack_11->SetBinError(1,0.9724317);
   hCCpi0inFV_stack_11->SetBinError(2,1.301185);
   hCCpi0inFV_stack_11->SetBinError(3,2.577144);
   hCCpi0inFV_stack_11->SetBinError(4,8.041147);
   hCCpi0inFV_stack_11->SetBinError(5,7.523529);
   hCCpi0inFV_stack_11->SetBinError(6,8.452474);
   hCCpi0inFV_stack_11->SetBinError(7,9.183504);
   hCCpi0inFV_stack_11->SetBinError(8,9.005547);
   hCCpi0inFV_stack_11->SetBinError(9,8.787626);
   hCCpi0inFV_stack_11->SetBinError(10,8.486723);
   hCCpi0inFV_stack_11->SetBinError(11,7.897474);
   hCCpi0inFV_stack_11->SetBinError(12,7.306977);
   hCCpi0inFV_stack_11->SetBinError(13,6.659113);
   hCCpi0inFV_stack_11->SetBinError(14,6.315929);
   hCCpi0inFV_stack_11->SetBinError(15,5.68359);
   hCCpi0inFV_stack_11->SetBinError(16,4.951566);
   hCCpi0inFV_stack_11->SetBinError(17,4.691002);
   hCCpi0inFV_stack_11->SetBinError(18,4.292972);
   hCCpi0inFV_stack_11->SetBinError(19,3.910248);
   hCCpi0inFV_stack_11->SetBinError(20,3.486159);
   hCCpi0inFV_stack_11->SetBinError(21,3.265986);
   hCCpi0inFV_stack_11->SetBinError(22,3.084765);
   hCCpi0inFV_stack_11->SetBinError(23,2.725218);
   hCCpi0inFV_stack_11->SetBinError(24,2.334725);
   hCCpi0inFV_stack_11->SetBinError(25,2.260885);
   hCCpi0inFV_stack_11->SetBinError(26,5.400385);
   hCCpi0inFV_stack_11->SetEntries(17282);

   ci = 1472;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,17.44563);
   hNCinFV_stack_12->SetBinContent(4,2.057363);
   hNCinFV_stack_12->SetBinContent(5,0.7336084);
   hNCinFV_stack_12->SetBinContent(6,0.9303237);
   hNCinFV_stack_12->SetBinContent(7,1.368555);
   hNCinFV_stack_12->SetBinContent(8,1.857266);
   hNCinFV_stack_12->SetBinContent(9,1.465526);
   hNCinFV_stack_12->SetBinContent(10,2.394159);
   hNCinFV_stack_12->SetBinContent(11,2.055672);
   hNCinFV_stack_12->SetBinContent(12,2.684465);
   hNCinFV_stack_12->SetBinContent(13,2.108925);
   hNCinFV_stack_12->SetBinContent(14,1.322064);
   hNCinFV_stack_12->SetBinContent(15,0.8770706);
   hNCinFV_stack_12->SetBinContent(16,0.3917402);
   hNCinFV_stack_12->SetBinContent(18,0.7319179);
   hNCinFV_stack_12->SetBinContent(19,1.070405);
   hNCinFV_stack_12->SetBinContent(20,0.536893);
   hNCinFV_stack_12->SetBinContent(21,0.3401776);
   hNCinFV_stack_12->SetBinContent(22,0.1967154);
   hNCinFV_stack_12->SetBinContent(25,0.3934307);
   hNCinFV_stack_12->SetBinContent(26,0.9801958);
   hNCinFV_stack_12->SetBinError(0,2.08626);
   hNCinFV_stack_12->SetBinError(4,0.7087455);
   hNCinFV_stack_12->SetBinError(5,0.4394482);
   hNCinFV_stack_12->SetBinError(6,0.4814682);
   hNCinFV_stack_12->SetBinError(7,0.5172691);
   hNCinFV_stack_12->SetBinError(8,0.6799255);
   hNCinFV_stack_12->SetBinError(9,0.6209405);
   hNCinFV_stack_12->SetBinError(10,0.785313);
   hNCinFV_stack_12->SetBinError(11,0.7082781);
   hNCinFV_stack_12->SetBinError(12,0.8786858);
   hNCinFV_stack_12->SetBinError(13,0.6806842);
   hNCinFV_stack_12->SetBinError(14,0.5554667);
   hNCinFV_stack_12->SetBinError(15,0.5197486);
   hNCinFV_stack_12->SetBinError(16,0.2770047);
   hNCinFV_stack_12->SetBinError(18,0.438694);
   hNCinFV_stack_12->SetBinError(19,0.5545368);
   hNCinFV_stack_12->SetBinError(20,0.3929602);
   hNCinFV_stack_12->SetBinError(21,0.3401776);
   hNCinFV_stack_12->SetBinError(22,0.1967154);
   hNCinFV_stack_12->SetBinError(25,0.2781975);
   hNCinFV_stack_12->SetBinError(26,0.4383608);
   hNCinFV_stack_12->SetEntries(180);

   ci = 1473;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,283.7212);
   hnumuCCinFV_stack_13->SetBinContent(1,5.476628);
   hnumuCCinFV_stack_13->SetBinContent(2,7.782448);
   hnumuCCinFV_stack_13->SetBinContent(3,21.51416);
   hnumuCCinFV_stack_13->SetBinContent(4,77.36034);
   hnumuCCinFV_stack_13->SetBinContent(5,64.32417);
   hnumuCCinFV_stack_13->SetBinContent(6,56.48153);
   hnumuCCinFV_stack_13->SetBinContent(7,70.7562);
   hnumuCCinFV_stack_13->SetBinContent(8,70.60478);
   hnumuCCinFV_stack_13->SetBinContent(9,65.71956);
   hnumuCCinFV_stack_13->SetBinContent(10,59.02171);
   hnumuCCinFV_stack_13->SetBinContent(11,57.162);
   hnumuCCinFV_stack_13->SetBinContent(12,52.35102);
   hnumuCCinFV_stack_13->SetBinContent(13,43.01543);
   hnumuCCinFV_stack_13->SetBinContent(14,37.21585);
   hnumuCCinFV_stack_13->SetBinContent(15,35.9198);
   hnumuCCinFV_stack_13->SetBinContent(16,22.1592);
   hnumuCCinFV_stack_13->SetBinContent(17,21.5439);
   hnumuCCinFV_stack_13->SetBinContent(18,16.10109);
   hnumuCCinFV_stack_13->SetBinContent(19,14.68073);
   hnumuCCinFV_stack_13->SetBinContent(20,12.68584);
   hnumuCCinFV_stack_13->SetBinContent(21,10.26991);
   hnumuCCinFV_stack_13->SetBinContent(22,11.60154);
   hnumuCCinFV_stack_13->SetBinContent(23,9.842894);
   hnumuCCinFV_stack_13->SetBinContent(24,6.279385);
   hnumuCCinFV_stack_13->SetBinContent(25,6.093853);
   hnumuCCinFV_stack_13->SetBinContent(26,31.87523);
   hnumuCCinFV_stack_13->SetBinError(0,10.19166);
   hnumuCCinFV_stack_13->SetBinError(1,2.260827);
   hnumuCCinFV_stack_13->SetBinError(2,1.678637);
   hnumuCCinFV_stack_13->SetBinError(3,2.406312);
   hnumuCCinFV_stack_13->SetBinError(4,4.6878);
   hnumuCCinFV_stack_13->SetBinError(5,4.451971);
   hnumuCCinFV_stack_13->SetBinError(6,4.364416);
   hnumuCCinFV_stack_13->SetBinError(7,4.9692);
   hnumuCCinFV_stack_13->SetBinError(8,4.906213);
   hnumuCCinFV_stack_13->SetBinError(9,4.369666);
   hnumuCCinFV_stack_13->SetBinError(10,4.078847);
   hnumuCCinFV_stack_13->SetBinError(11,4.299632);
   hnumuCCinFV_stack_13->SetBinError(12,3.798126);
   hnumuCCinFV_stack_13->SetBinError(13,5.220735);
   hnumuCCinFV_stack_13->SetBinError(14,3.312883);
   hnumuCCinFV_stack_13->SetBinError(15,3.531718);
   hnumuCCinFV_stack_13->SetBinError(16,2.329429);
   hnumuCCinFV_stack_13->SetBinError(17,2.315535);
   hnumuCCinFV_stack_13->SetBinError(18,2.249909);
   hnumuCCinFV_stack_13->SetBinError(19,1.975962);
   hnumuCCinFV_stack_13->SetBinError(20,1.821333);
   hnumuCCinFV_stack_13->SetBinError(21,1.582712);
   hnumuCCinFV_stack_13->SetBinError(22,1.701967);
   hnumuCCinFV_stack_13->SetBinError(23,1.911216);
   hnumuCCinFV_stack_13->SetBinError(24,1.257609);
   hnumuCCinFV_stack_13->SetBinError(25,1.207843);
   hnumuCCinFV_stack_13->SetBinError(26,2.818376);
   hnumuCCinFV_stack_13->SetEntries(4752);

   ci = 1474;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,4.958151);
   hnueCCinFV_stack_14->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(4,0.8565336);
   hnueCCinFV_stack_14->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(7,1.412273);
   hnueCCinFV_stack_14->SetBinContent(8,0.2384502);
   hnueCCinFV_stack_14->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_14->SetBinContent(10,0.536893);
   hnueCCinFV_stack_14->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,1.123658);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,1.020533);
   hnueCCinFV_stack_14->SetBinContent(16,0.7618654);
   hnueCCinFV_stack_14->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(19,0.536893);
   hnueCCinFV_stack_14->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(26,1.322064);
   hnueCCinFV_stack_14->SetBinError(0,1.12207);
   hnueCCinFV_stack_14->SetBinError(2,0.1967154);
   hnueCCinFV_stack_14->SetBinError(4,0.4327752);
   hnueCCinFV_stack_14->SetBinError(5,0.3921167);
   hnueCCinFV_stack_14->SetBinError(6,0.2781975);
   hnueCCinFV_stack_14->SetBinError(7,0.6510715);
   hnueCCinFV_stack_14->SetBinError(8,0.2384502);
   hnueCCinFV_stack_14->SetBinError(9,0.4394482);
   hnueCCinFV_stack_14->SetBinError(10,0.3929602);
   hnueCCinFV_stack_14->SetBinError(11,0.1967154);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.5188295);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.5892049);
   hnueCCinFV_stack_14->SetBinError(16,0.5417947);
   hnueCCinFV_stack_14->SetBinError(17,0.2781975);
   hnueCCinFV_stack_14->SetBinError(18,0.1950249);
   hnueCCinFV_stack_14->SetBinError(19,0.3929602);
   hnueCCinFV_stack_14->SetBinError(21,0.3401776);
   hnueCCinFV_stack_14->SetBinError(23,0.1967154);
   hnueCCinFV_stack_14->SetBinError(25,0.3401776);
   hnueCCinFV_stack_14->SetBinError(26,0.5554667);
   hnueCCinFV_stack_14->SetEntries(68);

   ci = 1475;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_14,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__8->SetBinContent(0,928.3332);
   hmcerror__8->SetBinContent(1,9.483461);
   hmcerror__8->SetBinContent(2,16.58249);
   hmcerror__8->SetBinContent(3,52.81399);
   hmcerror__8->SetBinContent(4,361.6827);
   hmcerror__8->SetBinContent(5,318.3007);
   hmcerror__8->SetBinContent(6,349.9689);
   hmcerror__8->SetBinContent(7,430.3782);
   hmcerror__8->SetBinContent(8,412.7585);
   hmcerror__8->SetBinContent(9,395.3501);
   hmcerror__8->SetBinContent(10,366.038);
   hmcerror__8->SetBinContent(11,327.4837);
   hmcerror__8->SetBinContent(12,285.577);
   hmcerror__8->SetBinContent(13,235.5257);
   hmcerror__8->SetBinContent(14,206.2076);
   hmcerror__8->SetBinContent(15,174.547);
   hmcerror__8->SetBinContent(16,130.1738);
   hmcerror__8->SetBinContent(17,113.5088);
   hmcerror__8->SetBinContent(18,94.11887);
   hmcerror__8->SetBinContent(19,85.16707);
   hmcerror__8->SetBinContent(20,65.46386);
   hmcerror__8->SetBinContent(21,57.92749);
   hmcerror__8->SetBinContent(22,50.57458);
   hmcerror__8->SetBinContent(23,42.41805);
   hmcerror__8->SetBinContent(24,29.09369);
   hmcerror__8->SetBinContent(25,28.18933);
   hmcerror__8->SetBinContent(26,167.5509);
   hmcerror__8->SetBinError(0,16.56257);
   hmcerror__8->SetBinError(1,12.56817);
   hmcerror__8->SetBinError(2,10.55295);
   hmcerror__8->SetBinError(3,26.33146);
   hmcerror__8->SetBinError(4,101.5606);
   hmcerror__8->SetBinError(5,87.72649);
   hmcerror__8->SetBinError(6,95.33938);
   hmcerror__8->SetBinError(7,125.0297);
   hmcerror__8->SetBinError(8,112.1182);
   hmcerror__8->SetBinError(9,114.0781);
   hmcerror__8->SetBinError(10,102.4147);
   hmcerror__8->SetBinError(11,91.97966);
   hmcerror__8->SetBinError(12,84.39309);
   hmcerror__8->SetBinError(13,87.28682);
   hmcerror__8->SetBinError(14,61.71801);
   hmcerror__8->SetBinError(15,54.47287);
   hmcerror__8->SetBinError(16,45.33352);
   hmcerror__8->SetBinError(17,37.00384);
   hmcerror__8->SetBinError(18,33.99069);
   hmcerror__8->SetBinError(19,43.10042);
   hmcerror__8->SetBinError(20,29.85321);
   hmcerror__8->SetBinError(21,28.20772);
   hmcerror__8->SetBinError(22,22.07555);
   hmcerror__8->SetBinError(23,19.07648);
   hmcerror__8->SetBinError(24,16.90339);
   hmcerror__8->SetBinError(25,17.38232);
   hmcerror__8->SetBinError(26,50.11763);
   hmcerror__8->SetEntries(5661.753);

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
   
   Double_t _fx3009[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3009[25] = {
   6,
   21,
   74,
   450,
   307,
   356,
   426,
   388,
   382,
   343,
   267,
   249,
   200,
   162,
   150,
   109,
   102,
   67,
   74,
   59,
   39,
   39,
   26,
   20,
   19};
   Double_t _felx3009[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3009[25] = {
   2.67925,
   4.7354,
   8.7275,
   21.2132,
   17.52142,
   18.86796,
   20.63977,
   19.69772,
   19.54482,
   18.52026,
   16.34013,
   15.77973,
   14.14214,
   12.72792,
   12.24745,
   10.44031,
   10.0995,
   8.3119,
   8.7275,
   7.8097,
   6.3813,
   6.3813,
   5.2453,
   4.6266,
   4.5151};
   Double_t _fehx3009[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3009[25] = {
   2.41858,
   4.5229,
   8.5253,
   21.2132,
   17.52142,
   18.86796,
   20.63977,
   19.69772,
   19.54482,
   18.52026,
   16.34013,
   15.77973,
   14.14214,
   12.72792,
   12.24745,
   10.44031,
   10.0995,
   8.1094,
   8.5253,
   7.6066,
   6.1757,
   6.1757,
   5.0358,
   4.4133,
   4.3011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-275,1225);
   Graph_Graph3009->SetMinimum(2.988675);
   Graph_Graph3009->SetMaximum(518.0024);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4335.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.1","F");

   ci = 1462;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 107.0","F");

   ci = 1463;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.2","F");

   ci = 1464;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 54.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.6","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  49.8","F");

   ci = 1468;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  40.6","F");

   ci = 1469;
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

   ci = 1470;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1471;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 3472.1","F");

   ci = 1472;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 23.5","F");

   ci = 1473;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 856.0","F");

   ci = 1474;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 10.4","F");

   ci = 1475;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   
   Double_t _fx3010[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3010[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3010[25] = {
   1.325273,
   0.636391,
   0.4985698,
   0.2808002,
   0.2756088,
   0.2724225,
   0.2905112,
   0.2716314,
   0.2885497,
   0.2797924,
   0.2808679,
   0.2955178,
   0.3706042,
   0.2993004,
   0.3120814,
   0.3482537,
   0.3259999,
   0.3611464,
   0.5060691,
   0.4560258,
   0.4869487,
   0.4364949,
   0.4497256,
   0.5809984,
   0.6166276};
   Double_t _fehx3010[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3010[25] = {
   1.325273,
   0.636391,
   0.4985698,
   0.2808002,
   0.2756088,
   0.2724225,
   0.2905112,
   0.2716314,
   0.2885497,
   0.2797924,
   0.2808679,
   0.2955178,
   0.3706042,
   0.2993004,
   0.3120814,
   0.3482537,
   0.3259999,
   0.3611464,
   0.5060691,
   0.4560258,
   0.4869487,
   0.4364949,
   0.4497256,
   0.5809984,
   0.6166276};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-275,1225);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3011[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3011[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3011[25] = {
   0.4328751,
   0.2682423,
   0.2121586,
   0.2190433,
   0.2359457,
   0.2397021,
   0.2439403,
   0.235855,
   0.2524934,
   0.23864,
   0.2402854,
   0.2587212,
   0.2283668,
   0.243341,
   0.2401282,
   0.2461675,
   0.2547989,
   0.2466357,
   0.2390298,
   0.2574829,
   0.2632611,
   0.2589488,
   0.257965,
   0.2444738,
   0.2306231};
   Double_t _fehx3011[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3011[25] = {
   0.4328751,
   0.2682423,
   0.2121586,
   0.2190433,
   0.2359457,
   0.2397021,
   0.2439403,
   0.235855,
   0.2524934,
   0.23864,
   0.2402854,
   0.2587212,
   0.2283668,
   0.243341,
   0.2401282,
   0.2461675,
   0.2547989,
   0.2466357,
   0.2390298,
   0.2574829,
   0.2632611,
   0.2589488,
   0.257965,
   0.2444738,
   0.2306231};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-275,1225);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3012[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3012[25] = {
   0.6326804,
   1.266396,
   1.401144,
   1.244184,
   0.9644968,
   1.017233,
   0.989827,
   0.940017,
   0.9662323,
   0.9370611,
   0.8153078,
   0.8719189,
   0.8491642,
   0.785616,
   0.8593675,
   0.8373419,
   0.8986091,
   0.7118658,
   0.8688804,
   0.9012606,
   0.6732555,
   0.7711384,
   0.6129466,
   0.6874342,
   0.6740138};
   Double_t _felx3012[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3012[25] = {
   0.2825182,
   0.2855663,
   0.1652498,
   0.05865142,
   0.05504674,
   0.05391326,
   0.04795728,
   0.04772213,
   0.04943674,
   0.05059654,
   0.04989603,
   0.05525561,
   0.06004498,
   0.06172382,
   0.07016706,
   0.08020281,
   0.08897556,
   0.08831279,
   0.1024751,
   0.1192979,
   0.1101601,
   0.126176,
   0.1236573,
   0.1590242,
   0.1601705};
   Double_t _fehx3012[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3012[25] = {
   0.2550314,
   0.2727515,
   0.1614213,
   0.05865142,
   0.05504674,
   0.05391326,
   0.04795728,
   0.04772213,
   0.04943674,
   0.05059654,
   0.04989603,
   0.05525561,
   0.06004498,
   0.06172382,
   0.07016706,
   0.08020281,
   0.08897556,
   0.08616126,
   0.1001009,
   0.1161954,
   0.1066109,
   0.1221108,
   0.1187183,
   0.1516927,
   0.152579};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-275,1225);
   Graph_Graph3012->SetMinimum(0.2289219);
   Graph_Graph3012->SetMaximum(1.683806);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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

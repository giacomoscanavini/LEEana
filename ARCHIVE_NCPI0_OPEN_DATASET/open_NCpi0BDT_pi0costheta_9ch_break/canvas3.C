#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Jun  6 14:11:35 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
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
   pad1->Range(-1.307692,-0.5200051,1.25641,57.50162);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__7->SetBinContent(1,4.069938);
   hmc__7->SetBinContent(2,2.898565);
   hmc__7->SetBinContent(3,2.444389);
   hmc__7->SetBinContent(4,2.616863);
   hmc__7->SetBinContent(5,2.371587);
   hmc__7->SetBinContent(6,2.21227);
   hmc__7->SetBinContent(7,2.722077);
   hmc__7->SetBinContent(8,2.268116);
   hmc__7->SetBinContent(9,2.367127);
   hmc__7->SetBinContent(10,2.069572);
   hmc__7->SetBinContent(11,2.917202);
   hmc__7->SetBinContent(12,3.243382);
   hmc__7->SetBinContent(13,3.682295);
   hmc__7->SetBinContent(14,3.15974);
   hmc__7->SetBinContent(15,3.235655);
   hmc__7->SetBinContent(16,3.174273);
   hmc__7->SetBinContent(17,5.023549);
   hmc__7->SetBinContent(18,4.452621);
   hmc__7->SetBinContent(19,5.236787);
   hmc__7->SetBinContent(20,6.265155);
   hmc__7->SetBinContent(21,8.496563);
   hmc__7->SetBinContent(22,9.035463);
   hmc__7->SetBinContent(23,12.38189);
   hmc__7->SetBinContent(24,16.47012);
   hmc__7->SetBinContent(25,26.00026);
   hmc__7->SetBinError(1,2.414124);
   hmc__7->SetBinError(2,2.140378);
   hmc__7->SetBinError(3,1.484248);
   hmc__7->SetBinError(4,1.935896);
   hmc__7->SetBinError(5,1.951635);
   hmc__7->SetBinError(6,1.451738);
   hmc__7->SetBinError(7,1.293748);
   hmc__7->SetBinError(8,1.363423);
   hmc__7->SetBinError(9,1.849228);
   hmc__7->SetBinError(10,1.296421);
   hmc__7->SetBinError(11,1.653705);
   hmc__7->SetBinError(12,1.759664);
   hmc__7->SetBinError(13,1.777363);
   hmc__7->SetBinError(14,2.378936);
   hmc__7->SetBinError(15,1.405384);
   hmc__7->SetBinError(16,1.68496);
   hmc__7->SetBinError(17,2.075029);
   hmc__7->SetBinError(18,1.7554);
   hmc__7->SetBinError(19,2.30563);
   hmc__7->SetBinError(20,3.96604);
   hmc__7->SetBinError(21,3.993963);
   hmc__7->SetBinError(22,2.637106);
   hmc__7->SetBinError(23,4.517868);
   hmc__7->SetBinError(24,4.536646);
   hmc__7->SetBinError(25,6.486722);
   hmc__7->SetBinError(26,0.1094984);
   hmc__7->SetMinimum(-0.5200051);
   hmc__7->SetMaximum(54.60054);
   hmc__7->SetEntries(136.1863);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,-1,1);
   hs3_stack_3->SetMinimum(-2.770604e-09);
   hs3_stack_3->SetMaximum(27.30027);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.03825059);
   hbadmatch_stack_1->SetBinContent(2,0.08585804);
   hbadmatch_stack_1->SetBinContent(3,0.1093809);
   hbadmatch_stack_1->SetBinContent(4,0.149413);
   hbadmatch_stack_1->SetBinContent(6,0.02550039);
   hbadmatch_stack_1->SetBinContent(7,0.08745668);
   hbadmatch_stack_1->SetBinContent(8,0.01275104);
   hbadmatch_stack_1->SetBinContent(9,0.07470649);
   hbadmatch_stack_1->SetBinContent(10,0.1388983);
   hbadmatch_stack_1->SetBinContent(11,0.1945239);
   hbadmatch_stack_1->SetBinContent(12,0.1165412);
   hbadmatch_stack_1->SetBinContent(13,0.1388757);
   hbadmatch_stack_1->SetBinContent(14,0.05100079);
   hbadmatch_stack_1->SetBinContent(15,0.220956);
   hbadmatch_stack_1->SetBinContent(16,0.08745668);
   hbadmatch_stack_1->SetBinContent(17,0.1002069);
   hbadmatch_stack_1->SetBinContent(18,0.06195629);
   hbadmatch_stack_1->SetBinContent(19,0.3167694);
   hbadmatch_stack_1->SetBinContent(20,0.305031);
   hbadmatch_stack_1->SetBinContent(21,0.1940063);
   hbadmatch_stack_1->SetBinContent(22,0.29976);
   hbadmatch_stack_1->SetBinContent(23,0.4250572);
   hbadmatch_stack_1->SetBinContent(24,0.4482389);
   hbadmatch_stack_1->SetBinContent(25,0.6557889);
   hbadmatch_stack_1->SetBinError(1,0.02208399);
   hbadmatch_stack_1->SetBinError(2,0.07421135);
   hbadmatch_stack_1->SetBinError(3,0.07447969);
   hbadmatch_stack_1->SetBinError(4,0.08945557);
   hbadmatch_stack_1->SetBinError(6,0.0180315);
   hbadmatch_stack_1->SetBinError(7,0.06452687);
   hbadmatch_stack_1->SetBinError(8,0.0127502);
   hbadmatch_stack_1->SetBinError(9,0.06325464);
   hbadmatch_stack_1->SetBinError(10,0.09822896);
   hbadmatch_stack_1->SetBinError(11,0.0932133);
   hbadmatch_stack_1->SetBinError(12,0.0865492);
   hbadmatch_stack_1->SetBinError(13,0.09876831);
   hbadmatch_stack_1->SetBinError(14,0.02550039);
   hbadmatch_stack_1->SetBinError(15,0.1145457);
   hbadmatch_stack_1->SetBinError(16,0.06452687);
   hbadmatch_stack_1->SetBinError(17,0.0657745);
   hbadmatch_stack_1->SetBinError(18,0.06195629);
   hbadmatch_stack_1->SetBinError(19,0.1277059);
   hbadmatch_stack_1->SetBinError(20,0.1350079);
   hbadmatch_stack_1->SetBinError(21,0.09323076);
   hbadmatch_stack_1->SetBinError(22,0.1328842);
   hbadmatch_stack_1->SetBinError(23,0.1540982);
   hbadmatch_stack_1->SetBinError(24,0.1549416);
   hbadmatch_stack_1->SetBinError(25,0.3591878);
   hbadmatch_stack_1->SetEntries(120);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.2726682);
   hext_stack_2->SetBinContent(2,0.2603984);
   hext_stack_2->SetBinContent(3,0.4349078);
   hext_stack_2->SetBinContent(4,0.2358586);
   hext_stack_2->SetBinContent(5,0.6707665);
   hext_stack_2->SetBinContent(6,0.2726682);
   hext_stack_2->SetBinContent(7,0.9188949);
   hext_stack_2->SetBinContent(8,0.4594475);
   hext_stack_2->SetBinContent(9,0.5085269);
   hext_stack_2->SetBinContent(10,0.4717173);
   hext_stack_2->SetBinContent(11,0.3094778);
   hext_stack_2->SetBinContent(12,1.142484);
   hext_stack_2->SetBinContent(13,0.7443856);
   hext_stack_2->SetBinContent(14,0.4199064);
   hext_stack_2->SetBinContent(15,0.8698155);
   hext_stack_2->SetBinContent(16,0.496257);
   hext_stack_2->SetBinContent(17,0.9311647);
   hext_stack_2->SetBinContent(18,0.8943552);
   hext_stack_2->SetBinContent(19,0.08588897);
   hext_stack_2->SetBinContent(20,1.167023);
   hext_stack_2->SetBinContent(21,1.179293);
   hext_stack_2->SetBinContent(22,1.589661);
   hext_stack_2->SetBinContent(23,1.68782);
   hext_stack_2->SetBinContent(24,0.6680349);
   hext_stack_2->SetBinContent(25,2.171807);
   hext_stack_2->SetBinError(1,0.2013053);
   hext_stack_2->SetBinError(2,0.2009311);
   hext_stack_2->SetBinError(3,0.282299);
   hext_stack_2->SetBinError(4,0.2001804);
   hext_stack_2->SetBinError(5,0.3460707);
   hext_stack_2->SetBinError(6,0.2013053);
   hext_stack_2->SetBinError(7,0.3999846);
   hext_stack_2->SetBinError(8,0.2828318);
   hext_stack_2->SetBinError(9,0.2838944);
   hext_stack_2->SetBinError(10,0.2830978);
   hext_stack_2->SetBinError(11,0.202424);
   hext_stack_2->SetBinError(12,0.4471122);
   hext_stack_2->SetBinError(13,0.3473733);
   hext_stack_2->SetBinError(14,0.2057436);
   hext_stack_2->SetBinError(15,0.3992311);
   hext_stack_2->SetBinError(16,0.2836291);
   hext_stack_2->SetBinError(17,0.4001727);
   hext_stack_2->SetBinError(18,0.399608);
   hext_stack_2->SetBinError(19,0.03246298);
   hext_stack_2->SetBinError(20,0.4474488);
   hext_stack_2->SetBinError(21,0.447617);
   hext_stack_2->SetBinError(22,0.5289165);
   hext_stack_2->SetBinError(23,0.5300538);
   hext_stack_2->SetBinError(24,0.2873207);
   hext_stack_2->SetBinError(25,0.6010424);
   hext_stack_2->SetEntries(350);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.09789576);
   hdirt_stack_3->SetBinContent(2,0.01643923);
   hdirt_stack_3->SetBinContent(3,0.05242869);
   hdirt_stack_3->SetBinContent(4,0.008219617);
   hdirt_stack_3->SetBinContent(5,0.1232693);
   hdirt_stack_3->SetBinContent(6,0.09719376);
   hdirt_stack_3->SetBinContent(7,0.04420907);
   hdirt_stack_3->SetBinContent(10,0.01749792);
   hdirt_stack_3->SetBinContent(11,0.01643923);
   hdirt_stack_3->SetBinContent(12,0.05399331);
   hdirt_stack_3->SetBinContent(13,0.01805796);
   hdirt_stack_3->SetBinContent(15,0.009568449);
   hdirt_stack_3->SetBinContent(16,0.008219617);
   hdirt_stack_3->SetBinContent(17,0.04420907);
   hdirt_stack_3->SetBinContent(18,0.06054677);
   hdirt_stack_3->SetBinContent(19,0.1070365);
   hdirt_stack_3->SetBinContent(20,0.2014951);
   hdirt_stack_3->SetBinContent(21,0.06064831);
   hdirt_stack_3->SetBinContent(22,0.1240896);
   hdirt_stack_3->SetBinContent(23,0.1600288);
   hdirt_stack_3->SetBinContent(24,0.2087855);
   hdirt_stack_3->SetBinContent(25,0.2881094);
   hdirt_stack_3->SetBinError(1,0.06307161);
   hdirt_stack_3->SetBinError(2,0.01162429);
   hdirt_stack_3->SetBinError(3,0.0449667);
   hdirt_stack_3->SetBinError(4,0.008219618);
   hdirt_stack_3->SetBinError(5,0.07157855);
   hdirt_stack_3->SetBinError(6,0.06900593);
   hdirt_stack_3->SetBinError(7,0.04420907);
   hdirt_stack_3->SetBinError(10,0.01239552);
   hdirt_stack_3->SetBinError(11,0.01162429);
   hdirt_stack_3->SetBinError(12,0.04527884);
   hdirt_stack_3->SetBinError(13,0.0128201);
   hdirt_stack_3->SetBinError(15,0.009568449);
   hdirt_stack_3->SetBinError(16,0.008219618);
   hdirt_stack_3->SetBinError(17,0.04420907);
   hdirt_stack_3->SetBinError(18,0.05164393);
   hdirt_stack_3->SetBinError(19,0.06889121);
   hdirt_stack_3->SetBinError(20,0.08955699);
   hdirt_stack_3->SetBinError(21,0.04571177);
   hdirt_stack_3->SetBinError(22,0.06503134);
   hdirt_stack_3->SetBinError(23,0.07912345);
   hdirt_stack_3->SetBinError(24,0.09337135);
   hdirt_stack_3->SetBinError(25,0.1096013);
   hdirt_stack_3->SetEntries(71);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,1.426803);
   houtFV_stack_4->SetBinContent(2,0.8090212);
   houtFV_stack_4->SetBinContent(3,0.8103341);
   houtFV_stack_4->SetBinContent(4,0.6578135);
   houtFV_stack_4->SetBinContent(5,0.3922944);
   houtFV_stack_4->SetBinContent(6,0.5101952);
   houtFV_stack_4->SetBinContent(7,0.710062);
   houtFV_stack_4->SetBinContent(8,0.6485471);
   houtFV_stack_4->SetBinContent(9,0.5976519);
   houtFV_stack_4->SetBinContent(10,0.3115761);
   houtFV_stack_4->SetBinContent(11,0.6129256);
   houtFV_stack_4->SetBinContent(12,0.4862243);
   houtFV_stack_4->SetBinContent(13,0.8491134);
   houtFV_stack_4->SetBinContent(14,0.561196);
   houtFV_stack_4->SetBinContent(15,0.5342037);
   houtFV_stack_4->SetBinContent(16,0.5484458);
   houtFV_stack_4->SetBinContent(17,0.8946831);
   houtFV_stack_4->SetBinContent(18,0.7500044);
   houtFV_stack_4->SetBinContent(19,0.8504314);
   houtFV_stack_4->SetBinContent(20,1.28429);
   houtFV_stack_4->SetBinContent(21,1.750929);
   houtFV_stack_4->SetBinContent(22,1.901147);
   houtFV_stack_4->SetBinContent(23,2.630089);
   houtFV_stack_4->SetBinContent(24,3.626818);
   houtFV_stack_4->SetBinContent(25,3.724568);
   houtFV_stack_4->SetBinError(1,0.2774721);
   houtFV_stack_4->SetBinError(2,0.2094041);
   houtFV_stack_4->SetBinError(3,0.2127129);
   houtFV_stack_4->SetBinError(4,0.1971637);
   houtFV_stack_4->SetBinError(5,0.1496541);
   houtFV_stack_4->SetBinError(6,0.1668696);
   houtFV_stack_4->SetBinError(7,0.1988898);
   houtFV_stack_4->SetBinError(8,0.1854932);
   houtFV_stack_4->SetBinError(9,0.1789111);
   houtFV_stack_4->SetBinError(10,0.1271502);
   houtFV_stack_4->SetBinError(11,0.1900118);
   houtFV_stack_4->SetBinError(12,0.1613535);
   houtFV_stack_4->SetBinError(13,0.2178749);
   houtFV_stack_4->SetBinError(14,0.1688068);
   houtFV_stack_4->SetBinError(15,0.1771915);
   houtFV_stack_4->SetBinError(16,0.1683246);
   houtFV_stack_4->SetBinError(17,0.2259193);
   houtFV_stack_4->SetBinError(18,0.195921);
   houtFV_stack_4->SetBinError(19,0.2107803);
   houtFV_stack_4->SetBinError(20,0.2670275);
   houtFV_stack_4->SetBinError(21,0.3188894);
   houtFV_stack_4->SetBinError(22,0.3122485);
   houtFV_stack_4->SetBinError(23,0.3809002);
   houtFV_stack_4->SetBinError(24,0.4545562);
   houtFV_stack_4->SetBinError(25,0.4371689);
   houtFV_stack_4->SetEntries(730);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1366628);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3862826);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.08854226);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1420152);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02550039);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0180315);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.0127502);
   hNCpi0inFVqe_stack_6->SetEntries(8);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.845477);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.3115761);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.4354887);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.6341078);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.5849017);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.4099883);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.3990328);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.1876636);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.5229454);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.497445);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.6578135);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.3880773);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.9566394);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.9311391);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.4482389);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.8217714);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.9347284);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.7998604);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.618042);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.084141);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.423013);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.754705);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.538226);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.081562);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.819466);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2176316);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1271502);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1544161);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1884745);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1784562);
   hNCpi0inFVres_stack_7->SetBinError(6,0.1533597);
   hNCpi0inFVres_stack_7->SetBinError(7,0.1425864);
   hNCpi0inFVres_stack_7->SetBinError(8,0.0921412);
   hNCpi0inFVres_stack_7->SetBinError(9,0.167356);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1663818);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1971637);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1309296);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2342608);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2335658);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1549416);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2097919);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2202306);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1940001);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2961421);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2377053);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2645191);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3090953);
   hNCpi0inFVres_stack_7->SetBinError(23,0.372914);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4719786);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5065188);
   hNCpi0inFVres_stack_7->SetEntries(744);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3607822);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1366628);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.07470649);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1621632);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1876636);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1002069);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.08745668);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.149413);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1621632);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2113693);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1621632);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2368697);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.3480321);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.646858);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.4354887);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.6723584);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.616248);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.900803);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1408658);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.0180315);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.08854226);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.06325464);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.0127502);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.09035965);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.0921412);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.0657745);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06452687);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.08945557);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.09035965);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.0180315);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1088158);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.09035965);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1102997);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1402876);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1889053);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1544161);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1897639);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3012074);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3948193);
   hNCpi0inFVdis_stack_8->SetEntries(235);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);

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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,1.041235);
   hCCpi0inFV_stack_11->SetBinContent(2,0.6933302);
   hCCpi0inFV_stack_11->SetBinContent(3,0.4250074);
   hCCpi0inFV_stack_11->SetBinContent(4,0.4482389);
   hCCpi0inFV_stack_11->SetBinContent(5,0.2733256);
   hCCpi0inFV_stack_11->SetBinContent(6,0.5684487);
   hCCpi0inFV_stack_11->SetBinContent(7,0.3990328);
   hCCpi0inFV_stack_11->SetBinContent(8,0.5017936);
   hCCpi0inFV_stack_11->SetBinContent(9,0.3846854);
   hCCpi0inFV_stack_11->SetBinContent(10,0.4292854);
   hCCpi0inFV_stack_11->SetBinContent(11,0.4960214);
   hCCpi0inFV_stack_11->SetBinContent(12,0.6322055);
   hCCpi0inFV_stack_11->SetBinContent(13,0.4482389);
   hCCpi0inFV_stack_11->SetBinContent(14,0.6231523);
   hCCpi0inFV_stack_11->SetBinContent(15,0.3115761);
   hCCpi0inFV_stack_11->SetBinContent(16,0.8217714);
   hCCpi0inFV_stack_11->SetBinContent(17,1.093302);
   hCCpi0inFV_stack_11->SetBinContent(18,0.8194085);
   hCCpi0inFV_stack_11->SetBinContent(19,1.111203);
   hCCpi0inFV_stack_11->SetBinContent(20,1.221678);
   hCCpi0inFV_stack_11->SetBinContent(21,1.908254);
   hCCpi0inFV_stack_11->SetBinContent(22,1.896995);
   hCCpi0inFV_stack_11->SetBinContent(23,2.372643);
   hCCpi0inFV_stack_11->SetBinContent(24,3.604373);
   hCCpi0inFV_stack_11->SetBinContent(25,7.388318);
   hCCpi0inFV_stack_11->SetBinError(1,0.2385834);
   hCCpi0inFV_stack_11->SetBinError(2,0.2013458);
   hCCpi0inFV_stack_11->SetBinError(3,0.1540934);
   hCCpi0inFV_stack_11->SetBinError(4,0.1549416);
   hCCpi0inFV_stack_11->SetBinError(5,0.1252177);
   hCCpi0inFV_stack_11->SetBinError(6,0.1852);
   hCCpi0inFV_stack_11->SetBinError(7,0.1425864);
   hCCpi0inFV_stack_11->SetBinError(8,0.1765888);
   hCCpi0inFV_stack_11->SetBinError(9,0.1466701);
   hCCpi0inFV_stack_11->SetBinError(10,0.1506198);
   hCCpi0inFV_stack_11->SetBinError(11,0.1704469);
   hCCpi0inFV_stack_11->SetBinError(12,0.1831341);
   hCCpi0inFV_stack_11->SetBinError(13,0.1549416);
   hCCpi0inFV_stack_11->SetBinError(14,0.1798175);
   hCCpi0inFV_stack_11->SetBinError(15,0.1271502);
   hCCpi0inFV_stack_11->SetBinError(16,0.2097919);
   hCCpi0inFV_stack_11->SetBinError(17,0.2504353);
   hCCpi0inFV_stack_11->SetBinError(18,0.2127089);
   hCCpi0inFV_stack_11->SetBinError(19,0.2415241);
   hCCpi0inFV_stack_11->SetBinError(20,0.2597007);
   hCCpi0inFV_stack_11->SetBinError(21,0.317146);
   hCCpi0inFV_stack_11->SetBinError(22,0.3217053);
   hCCpi0inFV_stack_11->SetBinError(23,0.3445198);
   hCCpi0inFV_stack_11->SetBinError(24,0.4418032);
   hCCpi0inFV_stack_11->SetBinError(25,0.6278652);
   hCCpi0inFV_stack_11->SetEntries(802);

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
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.06195629);
   hNCinFV_stack_12->SetBinContent(2,0.1239126);
   hNCinFV_stack_12->SetBinContent(3,0.06195629);
   hNCinFV_stack_12->SetBinContent(4,0.0127502);
   hNCinFV_stack_12->SetBinContent(5,0.06195629);
   hNCinFV_stack_12->SetBinContent(6,0.06195629);
   hNCinFV_stack_12->SetBinContent(7,0.0127502);
   hNCinFV_stack_12->SetBinContent(8,0.07470649);
   hNCinFV_stack_12->SetBinContent(9,0.07646625);
   hNCinFV_stack_12->SetBinContent(10,0.0127502);
   hNCinFV_stack_12->SetBinContent(12,0.0127502);
   hNCinFV_stack_12->SetBinContent(13,0.0127502);
   hNCinFV_stack_12->SetBinContent(14,0.0127502);
   hNCinFV_stack_12->SetBinContent(15,0.06195629);
   hNCinFV_stack_12->SetBinContent(17,0.02550039);
   hNCinFV_stack_12->SetBinContent(18,0.02550039);
   hNCinFV_stack_12->SetBinContent(19,0.06195629);
   hNCinFV_stack_12->SetBinContent(20,0.0127502);
   hNCinFV_stack_12->SetBinContent(21,0.07470649);
   hNCinFV_stack_12->SetBinContent(22,0.08745668);
   hNCinFV_stack_12->SetBinContent(23,0.4227385);
   hNCinFV_stack_12->SetBinContent(24,0.5101952);
   hNCinFV_stack_12->SetBinContent(25,0.6231523);
   hNCinFV_stack_12->SetBinError(1,0.06195629);
   hNCinFV_stack_12->SetBinError(2,0.08761943);
   hNCinFV_stack_12->SetBinError(3,0.06195629);
   hNCinFV_stack_12->SetBinError(4,0.0127502);
   hNCinFV_stack_12->SetBinError(5,0.06195629);
   hNCinFV_stack_12->SetBinError(6,0.06195629);
   hNCinFV_stack_12->SetBinError(7,0.0127502);
   hNCinFV_stack_12->SetBinError(8,0.06325464);
   hNCinFV_stack_12->SetBinError(9,0.06327911);
   hNCinFV_stack_12->SetBinError(10,0.0127502);
   hNCinFV_stack_12->SetBinError(12,0.0127502);
   hNCinFV_stack_12->SetBinError(13,0.0127502);
   hNCinFV_stack_12->SetBinError(14,0.0127502);
   hNCinFV_stack_12->SetBinError(15,0.06195629);
   hNCinFV_stack_12->SetBinError(17,0.0180315);
   hNCinFV_stack_12->SetBinError(18,0.0180315);
   hNCinFV_stack_12->SetBinError(19,0.06195629);
   hNCinFV_stack_12->SetBinError(20,0.0127502);
   hNCinFV_stack_12->SetBinError(21,0.06325464);
   hNCinFV_stack_12->SetBinError(22,0.06452687);
   hNCinFV_stack_12->SetBinError(23,0.1538888);
   hNCinFV_stack_12->SetBinError(24,0.1668696);
   hNCinFV_stack_12->SetBinError(25,0.1798175);
   hNCinFV_stack_12->SetEntries(70);

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
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.2856514);
   hnumuCCinFV_stack_13->SetBinContent(2,0.1752908);
   hnumuCCinFV_stack_13->SetBinContent(3,0.0893852);
   hnumuCCinFV_stack_13->SetBinContent(4,0.254312);
   hnumuCCinFV_stack_13->SetBinContent(5,0.2031173);
   hnumuCCinFV_stack_13->SetBinContent(6,0.1916127);
   hnumuCCinFV_stack_13->SetBinContent(7,0.137888);
   hnumuCCinFV_stack_13->SetBinContent(8,0.3085006);
   hnumuCCinFV_stack_13->SetBinContent(9,0.1893948);
   hnumuCCinFV_stack_13->SetBinContent(10,0.02823818);
   hnumuCCinFV_stack_13->SetBinContent(11,0.3803807);
   hnumuCCinFV_stack_13->SetBinContent(12,0.2489436);
   hnumuCCinFV_stack_13->SetBinContent(13,0.4267775);
   hnumuCCinFV_stack_13->SetBinContent(14,0.4111821);
   hnumuCCinFV_stack_13->SetBinContent(15,0.6171762);
   hnumuCCinFV_stack_13->SetBinContent(16,0.3648509);
   hnumuCCinFV_stack_13->SetBinContent(17,0.788385);
   hnumuCCinFV_stack_13->SetBinContent(18,0.7063318);
   hnumuCCinFV_stack_13->SetBinContent(19,0.8230889);
   hnumuCCinFV_stack_13->SetBinContent(20,0.6407143);
   hnumuCCinFV_stack_13->SetBinContent(21,1.1969);
   hnumuCCinFV_stack_13->SetBinContent(22,0.8842041);
   hnumuCCinFV_stack_13->SetBinContent(23,1.287054);
   hnumuCCinFV_stack_13->SetBinContent(24,1.556454);
   hnumuCCinFV_stack_13->SetBinContent(25,2.702746);
   hnumuCCinFV_stack_13->SetBinError(1,0.1317525);
   hnumuCCinFV_stack_13->SetBinError(2,0.1025997);
   hnumuCCinFV_stack_13->SetBinError(3,0.06493546);
   hnumuCCinFV_stack_13->SetBinError(4,0.1255844);
   hnumuCCinFV_stack_13->SetBinError(5,0.1081329);
   hnumuCCinFV_stack_13->SetBinError(6,0.1033226);
   hnumuCCinFV_stack_13->SetBinError(7,0.08292021);
   hnumuCCinFV_stack_13->SetBinError(8,0.1367279);
   hnumuCCinFV_stack_13->SetBinError(9,0.1079139);
   hnumuCCinFV_stack_13->SetBinError(10,0.02006104);
   hnumuCCinFV_stack_13->SetBinError(11,0.1655304);
   hnumuCCinFV_stack_13->SetBinError(12,0.1175705);
   hnumuCCinFV_stack_13->SetBinError(13,0.1607852);
   hnumuCCinFV_stack_13->SetBinError(14,0.163451);
   hnumuCCinFV_stack_13->SetBinError(15,0.2037068);
   hnumuCCinFV_stack_13->SetBinError(16,0.1452545);
   hnumuCCinFV_stack_13->SetBinError(17,0.3832336);
   hnumuCCinFV_stack_13->SetBinError(18,0.2040792);
   hnumuCCinFV_stack_13->SetBinError(19,0.214468);
   hnumuCCinFV_stack_13->SetBinError(20,0.191249);
   hnumuCCinFV_stack_13->SetBinError(21,0.2733515);
   hnumuCCinFV_stack_13->SetBinError(22,0.2202862);
   hnumuCCinFV_stack_13->SetBinError(23,0.2866686);
   hnumuCCinFV_stack_13->SetBinError(24,0.3021405);
   hnumuCCinFV_stack_13->SetBinError(25,0.6355406);
   hnumuCCinFV_stack_13->SetEntries(342);

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
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(4,0.07948712);
   hnueCCinFV_stack_14->SetBinContent(5,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.04858173);
   hnueCCinFV_stack_14->SetBinContent(23,0.1239126);
   hnueCCinFV_stack_14->SetBinContent(24,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(25,0.3264684);
   hnueCCinFV_stack_14->SetBinError(4,0.07948712);
   hnueCCinFV_stack_14->SetBinError(5,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.04858173);
   hnueCCinFV_stack_14->SetBinError(23,0.08761943);
   hnueCCinFV_stack_14->SetBinError(24,0.0127502);
   hnueCCinFV_stack_14->SetBinError(25,0.1356114);
   hnueCCinFV_stack_14->SetEntries(15);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__8->SetBinContent(1,4.069938);
   hmcerror__8->SetBinContent(2,2.898565);
   hmcerror__8->SetBinContent(3,2.444389);
   hmcerror__8->SetBinContent(4,2.616863);
   hmcerror__8->SetBinContent(5,2.371587);
   hmcerror__8->SetBinContent(6,2.21227);
   hmcerror__8->SetBinContent(7,2.722077);
   hmcerror__8->SetBinContent(8,2.268116);
   hmcerror__8->SetBinContent(9,2.367127);
   hmcerror__8->SetBinContent(10,2.069572);
   hmcerror__8->SetBinContent(11,2.917202);
   hmcerror__8->SetBinContent(12,3.243382);
   hmcerror__8->SetBinContent(13,3.682295);
   hmcerror__8->SetBinContent(14,3.15974);
   hmcerror__8->SetBinContent(15,3.235655);
   hmcerror__8->SetBinContent(16,3.174273);
   hmcerror__8->SetBinContent(17,5.023549);
   hmcerror__8->SetBinContent(18,4.452621);
   hmcerror__8->SetBinContent(19,5.236787);
   hmcerror__8->SetBinContent(20,6.265155);
   hmcerror__8->SetBinContent(21,8.496563);
   hmcerror__8->SetBinContent(22,9.035463);
   hmcerror__8->SetBinContent(23,12.38189);
   hmcerror__8->SetBinContent(24,16.47012);
   hmcerror__8->SetBinContent(25,26.00026);
   hmcerror__8->SetBinError(1,2.414124);
   hmcerror__8->SetBinError(2,2.140378);
   hmcerror__8->SetBinError(3,1.484248);
   hmcerror__8->SetBinError(4,1.935896);
   hmcerror__8->SetBinError(5,1.951635);
   hmcerror__8->SetBinError(6,1.451738);
   hmcerror__8->SetBinError(7,1.293748);
   hmcerror__8->SetBinError(8,1.363423);
   hmcerror__8->SetBinError(9,1.849228);
   hmcerror__8->SetBinError(10,1.296421);
   hmcerror__8->SetBinError(11,1.653705);
   hmcerror__8->SetBinError(12,1.759664);
   hmcerror__8->SetBinError(13,1.777363);
   hmcerror__8->SetBinError(14,2.378936);
   hmcerror__8->SetBinError(15,1.405384);
   hmcerror__8->SetBinError(16,1.68496);
   hmcerror__8->SetBinError(17,2.075029);
   hmcerror__8->SetBinError(18,1.7554);
   hmcerror__8->SetBinError(19,2.30563);
   hmcerror__8->SetBinError(20,3.96604);
   hmcerror__8->SetBinError(21,3.993963);
   hmcerror__8->SetBinError(22,2.637106);
   hmcerror__8->SetBinError(23,4.517868);
   hmcerror__8->SetBinError(24,4.536646);
   hmcerror__8->SetBinError(25,6.486722);
   hmcerror__8->SetBinError(26,0.1094984);
   hmcerror__8->SetEntries(136.1863);

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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3009[25] = {
   5,
   5,
   5,
   3,
   0,
   3,
   0,
   1,
   2,
   2,
   2,
   4,
   1,
   2,
   1,
   1,
   2,
   3,
   4,
   5,
   10,
   7,
   7,
   20,
   24};
   Double_t _felx3009[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3009[25] = {
   2.48995,
   2.48995,
   2.48995,
   2.143368,
   0,
   2.143368,
   0,
   1,
   2,
   2,
   2,
   2.29683,
   1,
   2,
   1,
   1,
   2,
   2.143368,
   2.29683,
   2.48995,
   3.34883,
   2.85954,
   2.85954,
   4.6266,
   5.0476};
   Double_t _fehx3009[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3009[25] = {
   2.21064,
   2.21064,
   2.21064,
   1.72422,
   1.1478,
   1.72422,
   1.1478,
   1.35971,
   1.51917,
   1.51917,
   1.51917,
   1.98186,
   1.35971,
   1.51917,
   1.35971,
   1.35971,
   1.51917,
   1.72422,
   1.98186,
   2.21064,
   3.1179,
   2.61053,
   2.61053,
   4.4133,
   4.837};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(31.7207);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.17","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 5.33e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 119.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 18.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 27.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  28.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  8.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 29.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 2.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 14.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 0.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_8_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3010[25] = {
   0.5931599,
   0.7384269,
   0.6072062,
   0.7397773,
   0.8229235,
   0.656221,
   0.4752797,
   0.6011256,
   0.7812118,
   0.6264199,
   0.5668806,
   0.5425397,
   0.4826781,
   0.7528896,
   0.4343431,
   0.5308175,
   0.4130603,
   0.3942396,
   0.4402756,
   0.6330314,
   0.4700681,
   0.2918618,
   0.3648773,
   0.275447,
   0.2494868};
   Double_t _fehx3010[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3010[25] = {
   0.5931599,
   0.7384269,
   0.6072062,
   0.7397773,
   0.8229235,
   0.656221,
   0.4752797,
   0.6011256,
   0.7812118,
   0.6264199,
   0.5668806,
   0.5425397,
   0.4826781,
   0.7528896,
   0.4343431,
   0.5308175,
   0.4130603,
   0.3942396,
   0.4402756,
   0.6330314,
   0.4700681,
   0.2918618,
   0.3648773,
   0.275447,
   0.2494868};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3011[25] = {
   0.2488592,
   0.2301734,
   0.242648,
   0.2442637,
   0.2673707,
   0.2628849,
   0.2500451,
   0.2846184,
   0.283638,
   0.2575825,
   0.2511444,
   0.2182607,
   0.2278488,
   0.2529975,
   0.2227886,
   0.2617053,
   0.2244091,
   0.2265474,
   0.2658583,
   0.2302757,
   0.2102742,
   0.1877138,
   0.2118191,
   0.1931341,
   0.1874686};
   Double_t _fehx3011[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3011[25] = {
   0.2488592,
   0.2301734,
   0.242648,
   0.2442637,
   0.2673707,
   0.2628849,
   0.2500451,
   0.2846184,
   0.283638,
   0.2575825,
   0.2511444,
   0.2182607,
   0.2278488,
   0.2529975,
   0.2227886,
   0.2617053,
   0.2244091,
   0.2265474,
   0.2658583,
   0.2302757,
   0.2102742,
   0.1877138,
   0.2118191,
   0.1931341,
   0.1874686};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3012[25] = {
   1.22852,
   1.724991,
   2.045501,
   1.146411,
   0,
   1.356073,
   0,
   0.4408946,
   0.8449059,
   0.9663835,
   0.6855885,
   1.23328,
   0.2715697,
   0.6329635,
   0.3090565,
   0.3150328,
   0.3981249,
   0.6737604,
   0.7638272,
   0.7980649,
   1.176946,
   0.7747251,
   0.565342,
   1.21432,
   0.9230678};
   Double_t _felx3012[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3012[25] = {
   0.6117907,
   0.8590285,
   1.018639,
   0.8190599,
   0,
   0.9688546,
   0,
   0.4408946,
   0.8449059,
   0.9663835,
   0.6855885,
   0.7081589,
   0.2715697,
   0.6329635,
   0.3090565,
   0.3150328,
   0.3981249,
   0.4813722,
   0.4385953,
   0.3974283,
   0.3941394,
   0.3164796,
   0.2309454,
   0.2809086,
   0.1941366};
   Double_t _fehx3012[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3012[25] = {
   0.5431631,
   0.762667,
   0.9043731,
   0.658888,
   0.4839797,
   0.7793895,
   0.4216634,
   0.5994887,
   0.6417779,
   0.7340504,
   0.5207627,
   0.6110473,
   0.3692561,
   0.4807896,
   0.4202272,
   0.4283532,
   0.3024097,
   0.3872371,
   0.3784496,
   0.3528468,
   0.3669601,
   0.2889204,
   0.2108346,
   0.2679579,
   0.1860366};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(3.244861);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_8_pi0_costheta_all",25,-1,1);

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

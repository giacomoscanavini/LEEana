#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Mar 11 22:37:05 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
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
   pad1->Range(-230.7692,-8.897665,1692.308,983.8944);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__7->SetBinContent(2,3.643107);
   hmc__7->SetBinContent(3,94.52988);
   hmc__7->SetBinContent(4,302.7219);
   hmc__7->SetBinContent(5,444.8832);
   hmc__7->SetBinContent(6,402.6389);
   hmc__7->SetBinContent(7,364.2533);
   hmc__7->SetBinContent(8,250.0519);
   hmc__7->SetBinContent(9,193.5442);
   hmc__7->SetBinContent(10,129.9942);
   hmc__7->SetBinContent(11,88.02336);
   hmc__7->SetBinContent(12,58.63269);
   hmc__7->SetBinContent(13,44.05373);
   hmc__7->SetBinContent(14,35.29024);
   hmc__7->SetBinContent(15,23.73462);
   hmc__7->SetBinContent(16,61.04701);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,7.955222);
   hmc__7->SetBinError(3,27.24421);
   hmc__7->SetBinError(4,74.29867);
   hmc__7->SetBinError(5,111.9748);
   hmc__7->SetBinError(6,102.6317);
   hmc__7->SetBinError(7,97.49785);
   hmc__7->SetBinError(8,72.59097);
   hmc__7->SetBinError(9,78.52323);
   hmc__7->SetBinError(10,47.00911);
   hmc__7->SetBinError(11,29.43926);
   hmc__7->SetBinError(12,22.40011);
   hmc__7->SetBinError(13,19.02589);
   hmc__7->SetBinError(14,16.58708);
   hmc__7->SetBinError(15,14.87597);
   hmc__7->SetBinError(16,25.26116);
   hmc__7->SetMinimum(-8.897665);
   hmc__7->SetMaximum(934.2548);
   hmc__7->SetEntries(2462.59);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",15,0,1500);
   hs3_stack_3->SetMinimum(-3.646956e-09);
   hs3_stack_3->SetMaximum(467.1274);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,2.013531);
   hbadmatch_stack_1->SetBinContent(4,7.122398);
   hbadmatch_stack_1->SetBinContent(5,9.612206);
   hbadmatch_stack_1->SetBinContent(6,6.554336);
   hbadmatch_stack_1->SetBinContent(7,8.586226);
   hbadmatch_stack_1->SetBinContent(8,6.254969);
   hbadmatch_stack_1->SetBinContent(9,4.176183);
   hbadmatch_stack_1->SetBinContent(10,4.032918);
   hbadmatch_stack_1->SetBinContent(11,2.342597);
   hbadmatch_stack_1->SetBinContent(12,1.91052);
   hbadmatch_stack_1->SetBinContent(13,1.758028);
   hbadmatch_stack_1->SetBinContent(14,1.413964);
   hbadmatch_stack_1->SetBinContent(15,0.6747849);
   hbadmatch_stack_1->SetBinContent(16,1.462145);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.6985132);
   hbadmatch_stack_1->SetBinError(4,1.447582);
   hbadmatch_stack_1->SetBinError(5,1.898981);
   hbadmatch_stack_1->SetBinError(6,1.285105);
   hbadmatch_stack_1->SetBinError(7,1.577647);
   hbadmatch_stack_1->SetBinError(8,1.236313);
   hbadmatch_stack_1->SetBinError(9,1.08453);
   hbadmatch_stack_1->SetBinError(10,1.086744);
   hbadmatch_stack_1->SetBinError(11,0.8097566);
   hbadmatch_stack_1->SetBinError(12,0.6511312);
   hbadmatch_stack_1->SetBinError(13,0.7078624);
   hbadmatch_stack_1->SetBinError(14,0.6515799);
   hbadmatch_stack_1->SetBinError(15,0.3917016);
   hbadmatch_stack_1->SetBinError(16,0.6198731);
   hbadmatch_stack_1->SetEntries(235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(3,5.765768);
   hext_stack_2->SetBinContent(4,17.08541);
   hext_stack_2->SetBinContent(5,19.81904);
   hext_stack_2->SetBinContent(6,19.02902);
   hext_stack_2->SetBinContent(7,16.8548);
   hext_stack_2->SetBinContent(8,12.68507);
   hext_stack_2->SetBinContent(9,11.74501);
   hext_stack_2->SetBinContent(10,7.295601);
   hext_stack_2->SetBinContent(11,2.599588);
   hext_stack_2->SetBinContent(12,5.833609);
   hext_stack_2->SetBinContent(13,2.028585);
   hext_stack_2->SetBinContent(14,3.490578);
   hext_stack_2->SetBinContent(15,0.6487947);
   hext_stack_2->SetBinContent(16,6.146417);
   hext_stack_2->SetBinError(3,1.450642);
   hext_stack_2->SetBinError(4,2.695365);
   hext_stack_2->SetBinError(5,2.948817);
   hext_stack_2->SetBinError(6,2.869271);
   hext_stack_2->SetBinError(7,2.674653);
   hext_stack_2->SetBinError(8,2.458466);
   hext_stack_2->SetBinError(9,2.249149);
   hext_stack_2->SetBinError(10,1.762942);
   hext_stack_2->SetBinError(11,0.9884288);
   hext_stack_2->SetBinError(12,1.60214);
   hext_stack_2->SetBinError(13,0.8315593);
   hext_stack_2->SetBinError(14,1.110227);
   hext_stack_2->SetBinError(15,0.4587671);
   hext_stack_2->SetBinError(16,1.65474);
   hext_stack_2->SetEntries(327);

   ci = 1461;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(3,0.8472698);
   hdirt_stack_3->SetBinContent(4,2.21755);
   hdirt_stack_3->SetBinContent(5,2.229232);
   hdirt_stack_3->SetBinContent(6,1.680081);
   hdirt_stack_3->SetBinContent(7,1.110076);
   hdirt_stack_3->SetBinContent(8,0.8427036);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.4762587);
   hdirt_stack_3->SetBinError(3,0.5242943);
   hdirt_stack_3->SetBinError(4,0.7218224);
   hdirt_stack_3->SetBinError(5,0.7526921);
   hdirt_stack_3->SetBinError(6,0.6211627);
   hdirt_stack_3->SetBinError(7,0.5945665);
   hdirt_stack_3->SetBinError(8,0.5096907);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(14,0.3652866);
   hdirt_stack_3->SetEntries(44);

   ci = 1462;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(3,8.36761);
   houtFV_stack_4->SetBinContent(4,19.14703);
   houtFV_stack_4->SetBinContent(5,24.00781);
   houtFV_stack_4->SetBinContent(6,23.92117);
   houtFV_stack_4->SetBinContent(7,21.71995);
   houtFV_stack_4->SetBinContent(8,9.153158);
   houtFV_stack_4->SetBinContent(9,8.480331);
   houtFV_stack_4->SetBinContent(10,6.61214);
   houtFV_stack_4->SetBinContent(11,4.446451);
   houtFV_stack_4->SetBinContent(12,3.122323);
   houtFV_stack_4->SetBinContent(13,1.65886);
   houtFV_stack_4->SetBinContent(14,1.217248);
   houtFV_stack_4->SetBinContent(15,0.9303237);
   houtFV_stack_4->SetBinContent(16,2.195754);
   houtFV_stack_4->SetBinError(3,1.455967);
   houtFV_stack_4->SetBinError(4,2.263978);
   houtFV_stack_4->SetBinError(5,2.420629);
   houtFV_stack_4->SetBinError(6,2.397053);
   houtFV_stack_4->SetBinError(7,2.380014);
   houtFV_stack_4->SetBinError(8,1.449934);
   houtFV_stack_4->SetBinError(9,1.446582);
   houtFV_stack_4->SetBinError(10,1.32905);
   houtFV_stack_4->SetBinError(11,1.056906);
   houtFV_stack_4->SetBinError(12,0.8727454);
   houtFV_stack_4->SetBinError(13,0.650338);
   houtFV_stack_4->SetBinError(14,0.6211758);
   houtFV_stack_4->SetBinError(15,0.4814682);
   houtFV_stack_4->SetBinError(16,0.7598403);
   houtFV_stack_4->SetEntries(584);

   ci = 1463;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

   ci = 1464;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.314548);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.578761);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.511008);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.56224);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.22644);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5185371);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.42982);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4632334);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3941578);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.306585);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(268);

   ci = 1465;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.300266);
   hNCpi0inFVres_stack_7->SetBinContent(3,53.03476);
   hNCpi0inFVres_stack_7->SetBinContent(4,169.8396);
   hNCpi0inFVres_stack_7->SetBinContent(5,240.0551);
   hNCpi0inFVres_stack_7->SetBinContent(6,197.3818);
   hNCpi0inFVres_stack_7->SetBinContent(7,148.0168);
   hNCpi0inFVres_stack_7->SetBinContent(8,97.85982);
   hNCpi0inFVres_stack_7->SetBinContent(9,61.33526);
   hNCpi0inFVres_stack_7->SetBinContent(10,34.73248);
   hNCpi0inFVres_stack_7->SetBinContent(11,22.97161);
   hNCpi0inFVres_stack_7->SetBinContent(12,12.24716);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.936754);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.021528);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.761284);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.92515);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5246312);
   hNCpi0inFVres_stack_7->SetBinError(3,2.269314);
   hNCpi0inFVres_stack_7->SetBinError(4,4.223625);
   hNCpi0inFVres_stack_7->SetBinError(5,5.092636);
   hNCpi0inFVres_stack_7->SetBinError(6,4.58746);
   hNCpi0inFVres_stack_7->SetBinError(7,4.022509);
   hNCpi0inFVres_stack_7->SetBinError(8,3.248323);
   hNCpi0inFVres_stack_7->SetBinError(9,2.592335);
   hNCpi0inFVres_stack_7->SetBinError(10,1.895592);
   hNCpi0inFVres_stack_7->SetBinError(11,1.624916);
   hNCpi0inFVres_stack_7->SetBinError(12,1.202466);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9233466);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7873693);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5889423);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8408802);
   hNCpi0inFVres_stack_7->SetEntries(19586);

   ci = 1466;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.329836);
   hNCpi0inFVdis_stack_8->SetBinContent(4,20.20183);
   hNCpi0inFVdis_stack_8->SetBinContent(5,32.17529);
   hNCpi0inFVdis_stack_8->SetBinContent(6,31.31388);
   hNCpi0inFVdis_stack_8->SetBinContent(7,27.14631);
   hNCpi0inFVdis_stack_8->SetBinContent(8,23.25757);
   hNCpi0inFVdis_stack_8->SetBinContent(9,18.57534);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.05608);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.408734);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.594955);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.439093);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.37542);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.262988);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.301024);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8031119);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.438081);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.822276);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.80606);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.701172);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.581499);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.432613);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.076783);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.992618);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5414246);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3848301);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6553594);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6380565);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7625502);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

   ci = 1467;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.5583361);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2368179);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2847561);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1155977);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(25);

   ci = 1468;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(3,2.925981);
   hCCpi0inFV_stack_10->SetBinContent(4,10.26315);
   hCCpi0inFV_stack_10->SetBinContent(5,40.52777);
   hCCpi0inFV_stack_10->SetBinContent(6,52.35297);
   hCCpi0inFV_stack_10->SetBinContent(7,63.7775);
   hCCpi0inFV_stack_10->SetBinContent(8,47.40195);
   hCCpi0inFV_stack_10->SetBinContent(9,36.8571);
   hCCpi0inFV_stack_10->SetBinContent(10,33.04);
   hCCpi0inFV_stack_10->SetBinContent(11,25.78917);
   hCCpi0inFV_stack_10->SetBinContent(12,13.22095);
   hCCpi0inFV_stack_10->SetBinContent(13,12.79931);
   hCCpi0inFV_stack_10->SetBinContent(14,8.002307);
   hCCpi0inFV_stack_10->SetBinContent(15,3.815968);
   hCCpi0inFV_stack_10->SetBinContent(16,16.27993);
   hCCpi0inFV_stack_10->SetBinError(3,0.8770106);
   hCCpi0inFV_stack_10->SetBinError(4,1.581875);
   hCCpi0inFV_stack_10->SetBinError(5,3.234014);
   hCCpi0inFV_stack_10->SetBinError(6,3.637795);
   hCCpi0inFV_stack_10->SetBinError(7,4.034122);
   hCCpi0inFV_stack_10->SetBinError(8,3.413952);
   hCCpi0inFV_stack_10->SetBinError(9,3.027053);
   hCCpi0inFV_stack_10->SetBinError(10,2.907935);
   hCCpi0inFV_stack_10->SetBinError(11,2.61893);
   hCCpi0inFV_stack_10->SetBinError(12,1.774397);
   hCCpi0inFV_stack_10->SetBinError(13,1.83196);
   hCCpi0inFV_stack_10->SetBinError(14,1.399523);
   hCCpi0inFV_stack_10->SetBinError(15,0.9197592);
   hCCpi0inFV_stack_10->SetBinError(16,2.089178);
   hCCpi0inFV_stack_10->SetEntries(1562);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(3,2.589184);
   hNCinFV_stack_11->SetBinContent(4,14.8486);
   hNCinFV_stack_11->SetBinContent(5,25.9265);
   hNCinFV_stack_11->SetBinContent(6,24.446);
   hNCinFV_stack_11->SetBinContent(7,29.84005);
   hNCinFV_stack_11->SetBinContent(8,20.19119);
   hNCinFV_stack_11->SetBinContent(9,20.32681);
   hNCinFV_stack_11->SetBinContent(10,14.55937);
   hNCinFV_stack_11->SetBinContent(11,10.53208);
   hNCinFV_stack_11->SetBinContent(12,9.291404);
   hNCinFV_stack_11->SetBinContent(13,7.467712);
   hNCinFV_stack_11->SetBinContent(14,4.933472);
   hNCinFV_stack_11->SetBinContent(15,5.468674);
   hNCinFV_stack_11->SetBinContent(16,8.936619);
   hNCinFV_stack_11->SetBinError(3,0.809167);
   hNCinFV_stack_11->SetBinError(4,1.97308);
   hNCinFV_stack_11->SetBinError(5,2.549882);
   hNCinFV_stack_11->SetBinError(6,2.443617);
   hNCinFV_stack_11->SetBinError(7,2.76848);
   hNCinFV_stack_11->SetBinError(8,2.211544);
   hNCinFV_stack_11->SetBinError(9,2.272282);
   hNCinFV_stack_11->SetBinError(10,1.881411);
   hNCinFV_stack_11->SetBinError(11,1.687519);
   hNCinFV_stack_11->SetBinError(12,1.521013);
   hNCinFV_stack_11->SetBinError(13,1.415463);
   hNCinFV_stack_11->SetBinError(14,1.145041);
   hNCinFV_stack_11->SetBinError(15,1.21032);
   hNCinFV_stack_11->SetBinError(16,1.5461);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,0.4904716);
   hnumuCCinFV_stack_12->SetBinContent(3,11.9023);
   hnumuCCinFV_stack_12->SetBinContent(4,38.55992);
   hnumuCCinFV_stack_12->SetBinContent(5,47.3406);
   hnumuCCinFV_stack_12->SetBinContent(6,42.16371);
   hnumuCCinFV_stack_12->SetBinContent(7,43.8391);
   hnumuCCinFV_stack_12->SetBinContent(8,29.80695);
   hnumuCCinFV_stack_12->SetBinContent(9,30.61565);
   hnumuCCinFV_stack_12->SetBinContent(10,15.56318);
   hnumuCCinFV_stack_12->SetBinContent(11,9.818967);
   hnumuCCinFV_stack_12->SetBinContent(12,8.437132);
   hnumuCCinFV_stack_12->SetBinContent(13,7.468064);
   hnumuCCinFV_stack_12->SetBinContent(14,6.289063);
   hnumuCCinFV_stack_12->SetBinContent(15,5.441137);
   hnumuCCinFV_stack_12->SetBinContent(16,10.27279);
   hnumuCCinFV_stack_12->SetBinError(2,0.3468273);
   hnumuCCinFV_stack_12->SetBinError(3,2.244794);
   hnumuCCinFV_stack_12->SetBinError(4,4.179301);
   hnumuCCinFV_stack_12->SetBinError(5,4.121687);
   hnumuCCinFV_stack_12->SetBinError(6,3.656782);
   hnumuCCinFV_stack_12->SetBinError(7,3.634283);
   hnumuCCinFV_stack_12->SetBinError(8,3.107975);
   hnumuCCinFV_stack_12->SetBinError(9,3.748119);
   hnumuCCinFV_stack_12->SetBinError(10,2.220143);
   hnumuCCinFV_stack_12->SetBinError(11,1.628904);
   hnumuCCinFV_stack_12->SetBinError(12,1.480899);
   hnumuCCinFV_stack_12->SetBinError(13,1.437085);
   hnumuCCinFV_stack_12->SetBinError(14,1.278227);
   hnumuCCinFV_stack_12->SetBinError(15,1.113881);
   hnumuCCinFV_stack_12->SetBinError(16,1.651399);
   hnumuCCinFV_stack_12->SetEntries(1201);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(6,0.8950397);
   hnueCCinFV_stack_13->SetBinContent(7,1.438197);
   hnueCCinFV_stack_13->SetBinContent(8,1.121624);
   hnueCCinFV_stack_13->SetBinContent(9,0.441907);
   hnueCCinFV_stack_13->SetBinContent(10,2.446756);
   hnueCCinFV_stack_13->SetBinContent(11,0.6411301);
   hnueCCinFV_stack_13->SetBinContent(12,0.7936127);
   hnueCCinFV_stack_13->SetBinContent(13,0.4694181);
   hnueCCinFV_stack_13->SetBinContent(14,1.070405);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,4.275915);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.2346262);
   hnueCCinFV_stack_13->SetBinError(6,0.450777);
   hnueCCinFV_stack_13->SetBinError(7,0.7720658);
   hnueCCinFV_stack_13->SetBinError(8,0.5865463);
   hnueCCinFV_stack_13->SetBinError(9,0.3143499);
   hnueCCinFV_stack_13->SetBinError(10,1.653497);
   hnueCCinFV_stack_13->SetBinError(11,0.372628);
   hnueCCinFV_stack_13->SetBinError(12,0.4753206);
   hnueCCinFV_stack_13->SetBinError(13,0.3326517);
   hnueCCinFV_stack_13->SetBinError(14,0.5545368);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,1.082694);
   hnueCCinFV_stack_13->SetEntries(52);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__8->SetBinContent(2,3.643107);
   hmcerror__8->SetBinContent(3,94.52988);
   hmcerror__8->SetBinContent(4,302.7219);
   hmcerror__8->SetBinContent(5,444.8832);
   hmcerror__8->SetBinContent(6,402.6389);
   hmcerror__8->SetBinContent(7,364.2533);
   hmcerror__8->SetBinContent(8,250.0519);
   hmcerror__8->SetBinContent(9,193.5442);
   hmcerror__8->SetBinContent(10,129.9942);
   hmcerror__8->SetBinContent(11,88.02336);
   hmcerror__8->SetBinContent(12,58.63269);
   hmcerror__8->SetBinContent(13,44.05373);
   hmcerror__8->SetBinContent(14,35.29024);
   hmcerror__8->SetBinContent(15,23.73462);
   hmcerror__8->SetBinContent(16,61.04701);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,7.955222);
   hmcerror__8->SetBinError(3,27.24421);
   hmcerror__8->SetBinError(4,74.29867);
   hmcerror__8->SetBinError(5,111.9748);
   hmcerror__8->SetBinError(6,102.6317);
   hmcerror__8->SetBinError(7,97.49785);
   hmcerror__8->SetBinError(8,72.59097);
   hmcerror__8->SetBinError(9,78.52323);
   hmcerror__8->SetBinError(10,47.00911);
   hmcerror__8->SetBinError(11,29.43926);
   hmcerror__8->SetBinError(12,22.40011);
   hmcerror__8->SetBinError(13,19.02589);
   hmcerror__8->SetBinError(14,16.58708);
   hmcerror__8->SetBinError(15,14.87597);
   hmcerror__8->SetBinError(16,25.26116);
   hmcerror__8->SetEntries(2462.59);

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
   
   Double_t _fx3009[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3009[15] = {
   0,
   5,
   83,
   262,
   335,
   332,
   254,
   159,
   127,
   85,
   54,
   44,
   31,
   18,
   14};
   Double_t _felx3009[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3009[15] = {
   0,
   2.48995,
   9.234,
   16.18641,
   18.30301,
   18.22087,
   15.93738,
   12.60952,
   11.26943,
   9.3428,
   7.4785,
   6.7671,
   5.7094,
   4.4008,
   3.9102};
   Double_t _fehx3009[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3009[15] = {
   1.1478,
   2.21064,
   9.0323,
   16.18641,
   18.30301,
   18.22087,
   15.93738,
   12.60952,
   11.26943,
   9.1411,
   7.275,
   6.5623,
   5.5017,
   4.1858,
   3.6898};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(388.6333);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.1/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1803.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.6","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 124.9","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 132.8","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1055.5","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  191.8","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 350.8","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 190.4","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 297.7","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.4","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3010[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3010[15] = {
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
   Double_t _felx3010[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3010[15] = {
   0,
   2.183637,
   0.2882073,
   0.2454354,
   0.2516947,
   0.2548977,
   0.267665,
   0.2903036,
   0.4057121,
   0.3616247,
   0.3344482,
   0.3820413,
   0.4318792,
   0.4700188,
   0.6267624};
   Double_t _fehx3010[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3010[15] = {
   0,
   2.183637,
   0.2882073,
   0.2454354,
   0.2516947,
   0.2548977,
   0.267665,
   0.2903036,
   0.4057121,
   0.3616247,
   0.3344482,
   0.3820413,
   0.4318792,
   0.4700188,
   0.6267624};
   grae = new TGraphAsymmErrors(15,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1650);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3011[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3011[15] = {
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
   Double_t _felx3011[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3011[15] = {
   0,
   0.3641142,
   0.2259939,
   0.2203346,
   0.2305281,
   0.2323399,
   0.2438229,
   0.2474046,
   0.2329103,
   0.232557,
   0.2501516,
   0.2171535,
   0.2395295,
   0.2207626,
   0.2515368};
   Double_t _fehx3011[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3011[15] = {
   0,
   0.3641142,
   0.2259939,
   0.2203346,
   0.2305281,
   0.2323399,
   0.2438229,
   0.2474046,
   0.2329103,
   0.232557,
   0.2501516,
   0.2171535,
   0.2395295,
   0.2207626,
   0.2515368};
   grae = new TGraphAsymmErrors(15,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1650);
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
   
   Double_t _fx3012[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3012[15] = {
   10,
   1.372455,
   0.8780293,
   0.8654808,
   0.7530066,
   0.8245602,
   0.697317,
   0.635868,
   0.6561808,
   0.6538754,
   0.6134735,
   0.7504346,
   0.7036862,
   0.510056,
   0.5898555};
   Double_t _felx3012[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3012[15] = {
   0,
   0.6834688,
   0.0976834,
   0.05346958,
   0.04114114,
   0.04525362,
   0.04375356,
   0.05042761,
   0.05822663,
   0.07187091,
   0.0849604,
   0.1154151,
   0.1296008,
   0.124703,
   0.1647467};
   Double_t _fehx3012[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3012[15] = {
   0,
   0.6068007,
   0.09554969,
   0.05346958,
   0.04114114,
   0.04525362,
   0.04375356,
   0.05042761,
   0.05822663,
   0.0703193,
   0.08264851,
   0.1119222,
   0.1248861,
   0.1186107,
   0.1554606};
   grae = new TGraphAsymmErrors(15,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.3468177);
   Graph_Graph3012->SetMaximum(10.96146);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_Np_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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

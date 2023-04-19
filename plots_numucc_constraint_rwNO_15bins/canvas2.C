#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Mar 11 22:37:05 2023) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-20.52,1692.308,2269.08);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__4->SetBinContent(1,0.02789998);
   hmc__4->SetBinContent(2,153.65);
   hmc__4->SetBinContent(3,864.8989);
   hmc__4->SetBinContent(4,941.3717);
   hmc__4->SetBinContent(5,822.1304);
   hmc__4->SetBinContent(6,611.0901);
   hmc__4->SetBinContent(7,451.652);
   hmc__4->SetBinContent(8,307.5025);
   hmc__4->SetBinContent(9,207.0736);
   hmc__4->SetBinContent(10,143.2584);
   hmc__4->SetBinContent(11,101.3145);
   hmc__4->SetBinContent(12,59.31042);
   hmc__4->SetBinContent(13,46.75243);
   hmc__4->SetBinContent(14,29.46082);
   hmc__4->SetBinContent(15,27.45071);
   hmc__4->SetBinContent(16,70.31872);
   hmc__4->SetBinError(1,0.2100727);
   hmc__4->SetBinError(2,37.35199);
   hmc__4->SetBinError(3,205.195);
   hmc__4->SetBinError(4,206.784);
   hmc__4->SetBinError(5,177.1946);
   hmc__4->SetBinError(6,137.7498);
   hmc__4->SetBinError(7,103.7595);
   hmc__4->SetBinError(8,80.7093);
   hmc__4->SetBinError(9,51.77284);
   hmc__4->SetBinError(10,40.67057);
   hmc__4->SetBinError(11,35.87405);
   hmc__4->SetBinError(12,28.58);
   hmc__4->SetBinError(13,25.19175);
   hmc__4->SetBinError(14,17.87594);
   hmc__4->SetBinError(15,16.34552);
   hmc__4->SetBinError(16,24.6747);
   hmc__4->SetMinimum(-20.52);
   hmc__4->SetMaximum(2154.6);
   hmc__4->SetEntries(4778.995);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",15,0,1500);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(988.4402);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,6.939945);
   hbadmatch_stack_1->SetBinContent(3,29.13773);
   hbadmatch_stack_1->SetBinContent(4,19.66589);
   hbadmatch_stack_1->SetBinContent(5,20.91604);
   hbadmatch_stack_1->SetBinContent(6,13.9613);
   hbadmatch_stack_1->SetBinContent(7,10.5249);
   hbadmatch_stack_1->SetBinContent(8,6.367046);
   hbadmatch_stack_1->SetBinContent(9,5.899716);
   hbadmatch_stack_1->SetBinContent(10,3.219985);
   hbadmatch_stack_1->SetBinContent(11,2.386183);
   hbadmatch_stack_1->SetBinContent(12,0.3934307);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,0.3401776);
   hbadmatch_stack_1->SetBinContent(15,0.3917402);
   hbadmatch_stack_1->SetBinContent(16,1.886101);
   hbadmatch_stack_1->SetBinError(2,1.36166);
   hbadmatch_stack_1->SetBinError(3,3.500014);
   hbadmatch_stack_1->SetBinError(4,2.351423);
   hbadmatch_stack_1->SetBinError(5,2.991519);
   hbadmatch_stack_1->SetBinError(6,1.929888);
   hbadmatch_stack_1->SetBinError(7,1.728443);
   hbadmatch_stack_1->SetBinError(8,1.97319);
   hbadmatch_stack_1->SetBinError(9,1.294318);
   hbadmatch_stack_1->SetBinError(10,0.88805);
   hbadmatch_stack_1->SetBinError(11,0.8214338);
   hbadmatch_stack_1->SetBinError(12,0.2781975);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.3401776);
   hbadmatch_stack_1->SetBinError(15,0.2770047);
   hbadmatch_stack_1->SetBinError(16,0.6886837);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(2,33.46741);
   hext_stack_2->SetBinContent(3,127.4214);
   hext_stack_2->SetBinContent(4,114.2012);
   hext_stack_2->SetBinContent(5,70.55781);
   hext_stack_2->SetBinContent(6,38.32065);
   hext_stack_2->SetBinContent(7,29.41578);
   hext_stack_2->SetBinContent(8,21.95024);
   hext_stack_2->SetBinContent(9,12.62882);
   hext_stack_2->SetBinContent(10,9.406388);
   hext_stack_2->SetBinContent(11,6.407382);
   hext_stack_2->SetBinContent(12,3.654981);
   hext_stack_2->SetBinContent(13,4.856008);
   hext_stack_2->SetBinContent(14,2.510206);
   hext_stack_2->SetBinContent(15,2.192989);
   hext_stack_2->SetBinContent(16,6.813981);
   hext_stack_2->SetBinError(2,3.776558);
   hext_stack_2->SetBinError(3,7.356984);
   hext_stack_2->SetBinError(4,6.936862);
   hext_stack_2->SetBinError(5,5.453392);
   hext_stack_2->SetBinError(6,4.088367);
   hext_stack_2->SetBinError(7,3.493818);
   hext_stack_2->SetBinError(8,3.106649);
   hext_stack_2->SetBinError(9,2.348507);
   hext_stack_2->SetBinError(10,1.964573);
   hext_stack_2->SetBinError(11,1.5862);
   hext_stack_2->SetBinError(12,1.163091);
   hext_stack_2->SetBinError(13,1.454658);
   hext_stack_2->SetBinError(14,1.057404);
   hext_stack_2->SetBinError(15,0.9009267);
   hext_stack_2->SetBinError(16,1.637484);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(2,6.626352);
   hdirt_stack_3->SetBinContent(3,22.18661);
   hdirt_stack_3->SetBinContent(4,12.79329);
   hdirt_stack_3->SetBinContent(5,9.738043);
   hdirt_stack_3->SetBinContent(6,5.257087);
   hdirt_stack_3->SetBinContent(7,2.519688);
   hdirt_stack_3->SetBinContent(8,2.884836);
   hdirt_stack_3->SetBinContent(9,0.5624726);
   hdirt_stack_3->SetBinContent(11,0.9214264);
   hdirt_stack_3->SetBinError(2,1.35709);
   hdirt_stack_3->SetBinError(3,2.417547);
   hdirt_stack_3->SetBinError(4,1.908984);
   hdirt_stack_3->SetBinError(5,1.79198);
   hdirt_stack_3->SetBinError(6,1.410009);
   hdirt_stack_3->SetBinError(7,0.8494569);
   hdirt_stack_3->SetBinError(8,1.327453);
   hdirt_stack_3->SetBinError(9,0.2813747);
   hdirt_stack_3->SetBinError(11,0.5708722);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(2,33.0016);
   houtFV_stack_4->SetBinContent(3,153.0712);
   houtFV_stack_4->SetBinContent(4,134.067);
   houtFV_stack_4->SetBinContent(5,94.53754);
   houtFV_stack_4->SetBinContent(6,61.06487);
   houtFV_stack_4->SetBinContent(7,40.35913);
   houtFV_stack_4->SetBinContent(8,23.75584);
   houtFV_stack_4->SetBinContent(9,17.13803);
   houtFV_stack_4->SetBinContent(10,9.976294);
   houtFV_stack_4->SetBinContent(11,7.938095);
   houtFV_stack_4->SetBinContent(12,3.585077);
   houtFV_stack_4->SetBinContent(13,2.60273);
   houtFV_stack_4->SetBinContent(14,2.537621);
   houtFV_stack_4->SetBinContent(15,1.709455);
   houtFV_stack_4->SetBinContent(16,1.907138);
   houtFV_stack_4->SetBinError(2,2.787893);
   houtFV_stack_4->SetBinError(3,6.207903);
   houtFV_stack_4->SetBinError(4,5.987642);
   houtFV_stack_4->SetBinError(5,4.895887);
   houtFV_stack_4->SetBinError(6,3.903477);
   houtFV_stack_4->SetBinError(7,3.199284);
   houtFV_stack_4->SetBinError(8,2.420864);
   houtFV_stack_4->SetBinError(9,2.123814);
   houtFV_stack_4->SetBinError(10,1.675632);
   houtFV_stack_4->SetBinError(11,1.486853);
   houtFV_stack_4->SetBinError(12,0.9237062);
   houtFV_stack_4->SetBinError(13,0.861967);
   houtFV_stack_4->SetBinError(14,0.8329108);
   houtFV_stack_4->SetBinError(15,0.6672584);
   houtFV_stack_4->SetBinError(16,0.6501133);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.839248);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,16.00653);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,22.65405);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,22.68729);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,15.82585);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,9.512283);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.608092);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.751906);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.048661);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.547126);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4736358);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5852358);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5996859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.728976);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4512456);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.316126);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.506505);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.611204);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.336375);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.045981);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7891795);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6924664);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4122565);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3774273);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1634799);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1727406);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.237152);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4165616);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.427476);
   hNCpi0inFVqe_stack_6->SetBinContent(4,4.071424);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.589139);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.464258);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.144404);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8639081);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4949837);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6657197);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3226665);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3992271);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3608206);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3415171);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,44.60413);
   hNCpi0inFVres_stack_7->SetBinContent(3,335.3734);
   hNCpi0inFVres_stack_7->SetBinContent(4,413.4141);
   hNCpi0inFVres_stack_7->SetBinContent(5,325.8915);
   hNCpi0inFVres_stack_7->SetBinContent(6,228.9181);
   hNCpi0inFVres_stack_7->SetBinContent(7,143.0854);
   hNCpi0inFVres_stack_7->SetBinContent(8,81.3194);
   hNCpi0inFVres_stack_7->SetBinContent(9,50.34062);
   hNCpi0inFVres_stack_7->SetBinContent(10,26.0572);
   hNCpi0inFVres_stack_7->SetBinContent(11,15.9464);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.60297);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.986319);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.458616);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.454048);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.505543);
   hNCpi0inFVres_stack_7->SetBinError(2,2.149511);
   hNCpi0inFVres_stack_7->SetBinError(3,5.95741);
   hNCpi0inFVres_stack_7->SetBinError(4,6.678752);
   hNCpi0inFVres_stack_7->SetBinError(5,5.864153);
   hNCpi0inFVres_stack_7->SetBinError(6,4.957524);
   hNCpi0inFVres_stack_7->SetBinError(7,3.895275);
   hNCpi0inFVres_stack_7->SetBinError(8,2.99932);
   hNCpi0inFVres_stack_7->SetBinError(9,2.363644);
   hNCpi0inFVres_stack_7->SetBinError(10,1.633118);
   hNCpi0inFVres_stack_7->SetBinError(11,1.26552);
   hNCpi0inFVres_stack_7->SetBinError(12,1.170565);
   hNCpi0inFVres_stack_7->SetBinError(13,0.882897);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5775417);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5222765);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7523593);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.829969);
   hNCpi0inFVdis_stack_8->SetBinContent(3,47.76698);
   hNCpi0inFVdis_stack_8->SetBinContent(4,54.11492);
   hNCpi0inFVdis_stack_8->SetBinContent(5,56.27053);
   hNCpi0inFVdis_stack_8->SetBinContent(6,47.31991);
   hNCpi0inFVdis_stack_8->SetBinContent(7,38.76654);
   hNCpi0inFVdis_stack_8->SetBinContent(8,27.73371);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.81058);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.97263);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.05335);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.316217);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.226375);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.457456);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.17488);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.455381);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9932055);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.244829);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.389289);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.414889);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.212638);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.030977);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.707661);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.420038);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.01718);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.081652);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7986571);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7249149);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6271353);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4819022);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7590964);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3485861);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2218905);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,3.319412);
   hCCpi0inFV_stack_10->SetBinContent(3,35.57026);
   hCCpi0inFV_stack_10->SetBinContent(4,73.53933);
   hCCpi0inFV_stack_10->SetBinContent(5,118.5098);
   hCCpi0inFV_stack_10->SetBinContent(6,117.5402);
   hCCpi0inFV_stack_10->SetBinContent(7,105.1446);
   hCCpi0inFV_stack_10->SetBinContent(8,79.431);
   hCCpi0inFV_stack_10->SetBinContent(9,56.42844);
   hCCpi0inFV_stack_10->SetBinContent(10,44.37405);
   hCCpi0inFV_stack_10->SetBinContent(11,27.70707);
   hCCpi0inFV_stack_10->SetBinContent(12,17.55042);
   hCCpi0inFV_stack_10->SetBinContent(13,14.46287);
   hCCpi0inFV_stack_10->SetBinContent(14,8.735323);
   hCCpi0inFV_stack_10->SetBinContent(15,7.197085);
   hCCpi0inFV_stack_10->SetBinContent(16,18.45324);
   hCCpi0inFV_stack_10->SetBinError(2,0.9200768);
   hCCpi0inFV_stack_10->SetBinError(3,2.943974);
   hCCpi0inFV_stack_10->SetBinError(4,4.279498);
   hCCpi0inFV_stack_10->SetBinError(5,5.39436);
   hCCpi0inFV_stack_10->SetBinError(6,5.405462);
   hCCpi0inFV_stack_10->SetBinError(7,5.117674);
   hCCpi0inFV_stack_10->SetBinError(8,4.528514);
   hCCpi0inFV_stack_10->SetBinError(9,3.820443);
   hCCpi0inFV_stack_10->SetBinError(10,3.414898);
   hCCpi0inFV_stack_10->SetBinError(11,2.664697);
   hCCpi0inFV_stack_10->SetBinError(12,2.049505);
   hCCpi0inFV_stack_10->SetBinError(13,1.943323);
   hCCpi0inFV_stack_10->SetBinError(14,1.440468);
   hCCpi0inFV_stack_10->SetBinError(15,1.287433);
   hCCpi0inFV_stack_10->SetBinError(16,2.212006);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(2,7.143832);
   hNCinFV_stack_11->SetBinContent(3,37.68043);
   hNCinFV_stack_11->SetBinContent(4,39.50023);
   hNCinFV_stack_11->SetBinContent(5,46.85975);
   hNCinFV_stack_11->SetBinContent(6,41.56438);
   hNCinFV_stack_11->SetBinContent(7,32.65685);
   hNCinFV_stack_11->SetBinContent(8,29.12781);
   hNCinFV_stack_11->SetBinContent(9,23.09749);
   hNCinFV_stack_11->SetBinContent(10,16.88613);
   hNCinFV_stack_11->SetBinContent(11,11.47363);
   hNCinFV_stack_11->SetBinContent(12,8.127409);
   hNCinFV_stack_11->SetBinContent(13,4.646547);
   hNCinFV_stack_11->SetBinContent(14,3.230893);
   hNCinFV_stack_11->SetBinContent(15,4.881909);
   hNCinFV_stack_11->SetBinContent(16,5.855343);
   hNCinFV_stack_11->SetBinError(2,1.302233);
   hNCinFV_stack_11->SetBinError(3,3.183404);
   hNCinFV_stack_11->SetBinError(4,3.083784);
   hNCinFV_stack_11->SetBinError(5,3.404299);
   hNCinFV_stack_11->SetBinError(6,3.257481);
   hNCinFV_stack_11->SetBinError(7,2.823696);
   hNCinFV_stack_11->SetBinError(8,2.698398);
   hNCinFV_stack_11->SetBinError(9,2.418833);
   hNCinFV_stack_11->SetBinError(10,2.104898);
   hNCinFV_stack_11->SetBinError(11,1.698688);
   hNCinFV_stack_11->SetBinError(12,1.374516);
   hNCinFV_stack_11->SetBinError(13,1.075673);
   hNCinFV_stack_11->SetBinError(14,0.855484);
   hNCinFV_stack_11->SetBinError(15,1.161942);
   hNCinFV_stack_11->SetBinError(16,1.240814);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,5.627525);
   hnumuCCinFV_stack_12->SetBinContent(3,53.63582);
   hnumuCCinFV_stack_12->SetBinContent(4,48.32506);
   hnumuCCinFV_stack_12->SetBinContent(5,51.74521);
   hnumuCCinFV_stack_12->SetBinContent(6,35.94053);
   hnumuCCinFV_stack_12->SetBinContent(7,35.29167);
   hnumuCCinFV_stack_12->SetBinContent(8,26.59093);
   hnumuCCinFV_stack_12->SetBinContent(9,18.62559);
   hnumuCCinFV_stack_12->SetBinContent(10,18.22303);
   hnumuCCinFV_stack_12->SetBinContent(11,14.26473);
   hnumuCCinFV_stack_12->SetBinContent(12,7.353509);
   hnumuCCinFV_stack_12->SetBinContent(13,7.799579);
   hnumuCCinFV_stack_12->SetBinContent(14,4.758688);
   hnumuCCinFV_stack_12->SetBinContent(15,3.856305);
   hnumuCCinFV_stack_12->SetBinContent(16,13.71407);
   hnumuCCinFV_stack_12->SetBinError(2,1.310407);
   hnumuCCinFV_stack_12->SetBinError(3,4.807971);
   hnumuCCinFV_stack_12->SetBinError(4,4.163836);
   hnumuCCinFV_stack_12->SetBinError(5,4.634815);
   hnumuCCinFV_stack_12->SetBinError(6,3.200844);
   hnumuCCinFV_stack_12->SetBinError(7,3.091688);
   hnumuCCinFV_stack_12->SetBinError(8,2.647718);
   hnumuCCinFV_stack_12->SetBinError(9,2.303666);
   hnumuCCinFV_stack_12->SetBinError(10,2.542555);
   hnumuCCinFV_stack_12->SetBinError(11,1.947857);
   hnumuCCinFV_stack_12->SetBinError(12,1.716792);
   hnumuCCinFV_stack_12->SetBinError(13,1.406296);
   hnumuCCinFV_stack_12->SetBinError(14,1.099033);
   hnumuCCinFV_stack_12->SetBinError(15,1.000479);
   hnumuCCinFV_stack_12->SetBinError(16,1.850508);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.7481789);
   hnueCCinFV_stack_13->SetBinContent(3,4.537317);
   hnueCCinFV_stack_13->SetBinContent(4,4.676525);
   hnueCCinFV_stack_13->SetBinContent(5,2.660467);
   hnueCCinFV_stack_13->SetBinContent(6,3.885045);
   hnueCCinFV_stack_13->SetBinContent(7,3.230784);
   hnueCCinFV_stack_13->SetBinContent(8,2.175315);
   hnueCCinFV_stack_13->SetBinContent(9,0.4270637);
   hnueCCinFV_stack_13->SetBinContent(10,2.230107);
   hnueCCinFV_stack_13->SetBinContent(11,2.38994);
   hnueCCinFV_stack_13->SetBinContent(12,0.1969809);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,1.964717);
   hnueCCinFV_stack_13->SetBinContent(16,8.99895);
   hnueCCinFV_stack_13->SetBinError(2,0.545424);
   hnueCCinFV_stack_13->SetBinError(3,1.650801);
   hnueCCinFV_stack_13->SetBinError(4,1.222985);
   hnueCCinFV_stack_13->SetBinError(5,0.8256716);
   hnueCCinFV_stack_13->SetBinError(6,1.043564);
   hnueCCinFV_stack_13->SetBinError(7,0.986497);
   hnueCCinFV_stack_13->SetBinError(8,1.266406);
   hnueCCinFV_stack_13->SetBinError(9,0.3029147);
   hnueCCinFV_stack_13->SetBinError(10,0.8499068);
   hnueCCinFV_stack_13->SetBinError(11,0.7881252);
   hnueCCinFV_stack_13->SetBinError(12,0.1967155);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.9321934);
   hnueCCinFV_stack_13->SetBinError(16,2.440017);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__5->SetBinContent(1,0.02789998);
   hmcerror__5->SetBinContent(2,153.65);
   hmcerror__5->SetBinContent(3,864.8989);
   hmcerror__5->SetBinContent(4,941.3717);
   hmcerror__5->SetBinContent(5,822.1304);
   hmcerror__5->SetBinContent(6,611.0901);
   hmcerror__5->SetBinContent(7,451.652);
   hmcerror__5->SetBinContent(8,307.5025);
   hmcerror__5->SetBinContent(9,207.0736);
   hmcerror__5->SetBinContent(10,143.2584);
   hmcerror__5->SetBinContent(11,101.3145);
   hmcerror__5->SetBinContent(12,59.31042);
   hmcerror__5->SetBinContent(13,46.75243);
   hmcerror__5->SetBinContent(14,29.46082);
   hmcerror__5->SetBinContent(15,27.45071);
   hmcerror__5->SetBinContent(16,70.31872);
   hmcerror__5->SetBinError(1,0.2100727);
   hmcerror__5->SetBinError(2,37.35199);
   hmcerror__5->SetBinError(3,205.195);
   hmcerror__5->SetBinError(4,206.784);
   hmcerror__5->SetBinError(5,177.1946);
   hmcerror__5->SetBinError(6,137.7498);
   hmcerror__5->SetBinError(7,103.7595);
   hmcerror__5->SetBinError(8,80.7093);
   hmcerror__5->SetBinError(9,51.77284);
   hmcerror__5->SetBinError(10,40.67057);
   hmcerror__5->SetBinError(11,35.87405);
   hmcerror__5->SetBinError(12,28.58);
   hmcerror__5->SetBinError(13,25.19175);
   hmcerror__5->SetBinError(14,17.87594);
   hmcerror__5->SetBinError(15,16.34552);
   hmcerror__5->SetBinError(16,24.6747);
   hmcerror__5->SetEntries(4778.995);

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
   
   Double_t _fx3005[15] = {
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
   Double_t _fy3005[15] = {
   0,
   200,
   1026,
   998,
   718,
   494,
   393,
   250,
   161,
   102,
   70,
   54,
   39,
   28,
   18};
   Double_t _felx3005[15] = {
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
   Double_t _fely3005[15] = {
   0,
   14.14214,
   32.03123,
   31.59114,
   26.79552,
   22.22611,
   19.82423,
   15.81139,
   12.68858,
   10.0995,
   8.4925,
   7.4785,
   6.3813,
   5.4358,
   4.4008};
   Double_t _fehx3005[15] = {
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
   Double_t _fehy3005[15] = {
   1.1478,
   14.14214,
   32.03123,
   31.59114,
   26.79552,
   22.22611,
   19.82423,
   15.81139,
   12.68858,
   10.0995,
   8.2902,
   7.275,
   6.1757,
   5.2271,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(1163.834);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.3/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4551.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 120.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 585.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  103.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1689.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  335.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 709.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 306.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 332.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[15] = {
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
   Double_t _fy3006[15] = {
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
   Double_t _felx3006[15] = {
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
   Double_t _fely3006[15] = {
   7.529492,
   0.2430979,
   0.2372474,
   0.2196625,
   0.215531,
   0.2254165,
   0.2297333,
   0.2624671,
   0.2500214,
   0.2838966,
   0.3540861,
   0.4818714,
   0.538833,
   0.6067698,
   0.5954497};
   Double_t _fehx3006[15] = {
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
   Double_t _fehy3006[15] = {
   7.529492,
   0.2430979,
   0.2372474,
   0.2196625,
   0.215531,
   0.2254165,
   0.2297333,
   0.2624671,
   0.2500214,
   0.2838966,
   0.3540861,
   0.4818714,
   0.538833,
   0.6067698,
   0.5954497};
   grae = new TGraphAsymmErrors(15,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3007[15] = {
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
   Double_t _fy3007[15] = {
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
   Double_t _felx3007[15] = {
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
   Double_t _fely3007[15] = {
   7.529492,
   0.1580839,
   0.1863779,
   0.20016,
   0.1996798,
   0.206381,
   0.2024307,
   0.1997115,
   0.2073898,
   0.2010392,
   0.2062095,
   0.2193891,
   0.2195887,
   0.21964,
   0.2461461};
   Double_t _fehx3007[15] = {
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
   Double_t _fehy3007[15] = {
   7.529492,
   0.1580839,
   0.1863779,
   0.20016,
   0.1996798,
   0.206381,
   0.2024307,
   0.1997115,
   0.2073898,
   0.2010392,
   0.2062095,
   0.2193891,
   0.2195887,
   0.21964,
   0.2461461};
   grae = new TGraphAsymmErrors(15,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[15] = {
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
   Double_t _fy3008[15] = {
   0,
   1.30166,
   1.186266,
   1.060155,
   0.8733407,
   0.8083914,
   0.8701389,
   0.8130015,
   0.7775013,
   0.7120002,
   0.6909179,
   0.9104639,
   0.8341812,
   0.9504147,
   0.6557206};
   Double_t _felx3008[15] = {
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
   Double_t _fely3008[15] = {
   0,
   0.09204125,
   0.03703466,
   0.03355862,
   0.03259279,
   0.03637125,
   0.0438927,
   0.05141873,
   0.06127569,
   0.07049853,
   0.08382315,
   0.1260908,
   0.1364913,
   0.1845094,
   0.1603164};
   Double_t _fehx3008[15] = {
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
   Double_t _fehy3008[15] = {
   41.13981,
   0.09204125,
   0.03703466,
   0.03355862,
   0.03259279,
   0.03637125,
   0.0438927,
   0.05141873,
   0.06127569,
   0.07049853,
   0.08182639,
   0.1226597,
   0.1320937,
   0.1774255,
   0.1524842};
   grae = new TGraphAsymmErrors(15,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(45.25379);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_0p_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

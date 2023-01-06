#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Sep 28 20:33:11 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-8.276398,1.25641,915.1953);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__4->SetBinContent(1,57.33951);
   hmc__4->SetBinContent(2,64.82259);
   hmc__4->SetBinContent(3,58.53238);
   hmc__4->SetBinContent(4,62.44228);
   hmc__4->SetBinContent(5,61.01004);
   hmc__4->SetBinContent(6,69.06429);
   hmc__4->SetBinContent(7,75.29824);
   hmc__4->SetBinContent(8,87.35971);
   hmc__4->SetBinContent(9,96.54425);
   hmc__4->SetBinContent(10,93.81268);
   hmc__4->SetBinContent(11,106.3941);
   hmc__4->SetBinContent(12,110.9018);
   hmc__4->SetBinContent(13,122.8819);
   hmc__4->SetBinContent(14,133.3261);
   hmc__4->SetBinContent(15,157.7504);
   hmc__4->SetBinContent(16,172.2016);
   hmc__4->SetBinContent(17,211.8573);
   hmc__4->SetBinContent(18,247.6996);
   hmc__4->SetBinContent(19,313.421);
   hmc__4->SetBinContent(20,413.8199);
   hmc__4->SetBinError(1,16.63474);
   hmc__4->SetBinError(2,17.87168);
   hmc__4->SetBinError(3,14.78574);
   hmc__4->SetBinError(4,14.93641);
   hmc__4->SetBinError(5,16.80503);
   hmc__4->SetBinError(6,17.15948);
   hmc__4->SetBinError(7,19.63543);
   hmc__4->SetBinError(8,21.82105);
   hmc__4->SetBinError(9,25.81048);
   hmc__4->SetBinError(10,27.51582);
   hmc__4->SetBinError(11,28.96583);
   hmc__4->SetBinError(12,30.95221);
   hmc__4->SetBinError(13,33.57231);
   hmc__4->SetBinError(14,33.97318);
   hmc__4->SetBinError(15,39.51703);
   hmc__4->SetBinError(16,44.80156);
   hmc__4->SetBinError(17,53.04095);
   hmc__4->SetBinError(18,54.15749);
   hmc__4->SetBinError(19,66.07722);
   hmc__4->SetBinError(20,82.23633);
   hmc__4->SetBinError(21,0.3895343);
   hmc__4->SetMinimum(-8.276398);
   hmc__4->SetMaximum(869.0218);
   hmc__4->SetEntries(2705.441);
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
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(434.5109);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(2,0.5514106);
   hbadmatch_stack_1->SetBinContent(3,0.6271055);
   hbadmatch_stack_1->SetBinContent(5,0.6803553);
   hbadmatch_stack_1->SetBinContent(6,0.9622263);
   hbadmatch_stack_1->SetBinContent(8,0.6417511);
   hbadmatch_stack_1->SetBinContent(9,0.7336084);
   hbadmatch_stack_1->SetBinContent(10,0.6176332);
   hbadmatch_stack_1->SetBinContent(11,0.9317297);
   hbadmatch_stack_1->SetBinContent(12,0.9801958);
   hbadmatch_stack_1->SetBinContent(13,0.9286332);
   hbadmatch_stack_1->SetBinContent(14,1.274999);
   hbadmatch_stack_1->SetBinContent(15,0.9303237);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,1.368982);
   hbadmatch_stack_1->SetBinContent(18,0.6397322);
   hbadmatch_stack_1->SetBinContent(19,1.268811);
   hbadmatch_stack_1->SetBinContent(20,2.197444);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.400425);
   hbadmatch_stack_1->SetBinError(3,0.363315);
   hbadmatch_stack_1->SetBinError(5,0.4810838);
   hbadmatch_stack_1->SetBinError(6,0.4955943);
   hbadmatch_stack_1->SetBinError(8,0.3729033);
   hbadmatch_stack_1->SetBinError(9,0.4394482);
   hbadmatch_stack_1->SetBinError(10,0.5111936);
   hbadmatch_stack_1->SetBinError(11,0.5570582);
   hbadmatch_stack_1->SetBinError(12,0.4383608);
   hbadmatch_stack_1->SetBinError(13,0.48078);
   hbadmatch_stack_1->SetBinError(14,0.5910525);
   hbadmatch_stack_1->SetBinError(15,0.4814682);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.5736242);
   hbadmatch_stack_1->SetBinError(18,0.4061867);
   hbadmatch_stack_1->SetBinError(19,0.5889569);
   hbadmatch_stack_1->SetBinError(20,0.760276);
   hbadmatch_stack_1->SetEntries(67);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,0.7309963);
   hext_stack_2->SetBinContent(2,1.614806);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,3.297453);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,0.7309963);
   hext_stack_2->SetBinContent(7,1.544194);
   hext_stack_2->SetBinContent(8,1.379791);
   hext_stack_2->SetBinContent(9,2.566457);
   hext_stack_2->SetBinContent(10,0.6416141);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(12,1.861411);
   hext_stack_2->SetBinContent(13,0.7309963);
   hext_stack_2->SetBinContent(14,1.290409);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(18,1.78639);
   hext_stack_2->SetBinContent(19,0.6487947);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinError(1,0.5201503);
   hext_stack_2->SetBinError(2,0.8528597);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,1.384641);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.5201503);
   hext_stack_2->SetBinError(7,0.7753719);
   hext_stack_2->SetBinError(8,0.6935586);
   hext_stack_2->SetBinError(9,1.283228);
   hext_stack_2->SetBinError(10,0.6416141);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(12,0.9526997);
   hext_stack_2->SetBinError(13,0.5201503);
   hext_stack_2->SetBinError(14,0.788756);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(18,0.8039566);
   hext_stack_2->SetBinError(19,0.4587671);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetEntries(52);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(2,0.2544535);
   hdirt_stack_3->SetBinContent(6,0.2574102);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2544535);
   hdirt_stack_3->SetBinError(6,0.2574102);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetEntries(3);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(2,0.1967154);
   houtFV_stack_4->SetBinContent(7,0.3008363);
   houtFV_stack_4->SetBinContent(9,0.2439067);
   houtFV_stack_4->SetBinContent(10,0.5352025);
   houtFV_stack_4->SetBinContent(11,0.4672679);
   houtFV_stack_4->SetBinContent(12,0.536893);
   houtFV_stack_4->SetBinContent(14,0.8367495);
   houtFV_stack_4->SetBinContent(15,0.4502768);
   houtFV_stack_4->SetBinContent(16,0.1950248);
   houtFV_stack_4->SetBinContent(17,0.5867651);
   houtFV_stack_4->SetBinContent(18,1.120182);
   houtFV_stack_4->SetBinContent(19,0.5901461);
   houtFV_stack_4->SetBinContent(20,1.268811);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(2,0.1967154);
   houtFV_stack_4->SetBinError(7,0.3008363);
   houtFV_stack_4->SetBinError(9,0.2439067);
   houtFV_stack_4->SetBinError(10,0.3921167);
   houtFV_stack_4->SetBinError(11,0.2871168);
   houtFV_stack_4->SetBinError(12,0.3929602);
   houtFV_stack_4->SetBinError(14,0.4210208);
   houtFV_stack_4->SetBinError(15,0.3212293);
   houtFV_stack_4->SetBinError(16,0.1950249);
   houtFV_stack_4->SetBinError(17,0.3387718);
   houtFV_stack_4->SetBinError(18,0.5739375);
   houtFV_stack_4->SetBinError(19,0.340721);
   houtFV_stack_4->SetBinError(20,0.5889569);
   houtFV_stack_4->SetEntries(33);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1408796);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1028825);
   hNCpi0inFVcoh_stack_5->SetEntries(6);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1300583);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1058996);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.9912261);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.129687);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.331905);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.8929647);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.9492364);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.830144);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.657257);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.799486);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.178406);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.437081);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.145371);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.739745);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.024233);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.807424);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.299896);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.05457);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.623259);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.617066);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.700788);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.595499);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2908824);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3436064);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3335761);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2225564);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3772723);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3798913);
   hNCpi0inFVres_stack_7->SetBinError(7,0.543962);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4904528);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2519101);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4802556);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5130048);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6667451);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6181367);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3190807);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5956132);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6636088);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5925091);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8732489);
   hNCpi0inFVres_stack_7->SetBinError(19,1.032333);
   hNCpi0inFVres_stack_7->SetBinError(20,1.211865);
   hNCpi0inFVres_stack_7->SetEntries(1121);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.7588628);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.332783);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.747332);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.037897);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6040536);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.2996707);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.870436);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.017582);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.903084);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.54093);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7103166);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.542394);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.133142);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.805777);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.261438);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.917371);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.867341);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.784848);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.213186);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.37903);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2801491);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4453066);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2626932);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4161726);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1868086);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1146863);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2528474);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2999347);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2599783);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4951196);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2618204);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5098215);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5321864);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3995176);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5342712);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4678709);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6105262);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.022026);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.140787);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.364339);
   hNCpi0inFVdis_stack_8->SetEntries(863);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,48.2627);
   hCCpi0inFV_stack_10->SetBinContent(2,54.62087);
   hCCpi0inFV_stack_10->SetBinContent(3,48.06695);
   hCCpi0inFV_stack_10->SetBinContent(4,49.33865);
   hCCpi0inFV_stack_10->SetBinContent(5,51.25132);
   hCCpi0inFV_stack_10->SetBinContent(6,55.78088);
   hCCpi0inFV_stack_10->SetBinContent(7,61.38498);
   hCCpi0inFV_stack_10->SetBinContent(8,66.76994);
   hCCpi0inFV_stack_10->SetBinContent(9,78.07938);
   hCCpi0inFV_stack_10->SetBinContent(10,75.0407);
   hCCpi0inFV_stack_10->SetBinContent(11,82.70851);
   hCCpi0inFV_stack_10->SetBinContent(12,86.9948);
   hCCpi0inFV_stack_10->SetBinContent(13,99.80134);
   hCCpi0inFV_stack_10->SetBinContent(14,104.0582);
   hCCpi0inFV_stack_10->SetBinContent(15,124.5948);
   hCCpi0inFV_stack_10->SetBinContent(16,140.4955);
   hCCpi0inFV_stack_10->SetBinContent(17,171.0665);
   hCCpi0inFV_stack_10->SetBinContent(18,189.2668);
   hCCpi0inFV_stack_10->SetBinContent(19,244.9201);
   hCCpi0inFV_stack_10->SetBinContent(20,312.3164);
   hCCpi0inFV_stack_10->SetBinError(1,3.502716);
   hCCpi0inFV_stack_10->SetBinError(2,3.727435);
   hCCpi0inFV_stack_10->SetBinError(3,3.501501);
   hCCpi0inFV_stack_10->SetBinError(4,3.566053);
   hCCpi0inFV_stack_10->SetBinError(5,3.578256);
   hCCpi0inFV_stack_10->SetBinError(6,3.685679);
   hCCpi0inFV_stack_10->SetBinError(7,3.913178);
   hCCpi0inFV_stack_10->SetBinError(8,4.06665);
   hCCpi0inFV_stack_10->SetBinError(9,4.425637);
   hCCpi0inFV_stack_10->SetBinError(10,4.330607);
   hCCpi0inFV_stack_10->SetBinError(11,4.516679);
   hCCpi0inFV_stack_10->SetBinError(12,4.694645);
   hCCpi0inFV_stack_10->SetBinError(13,5.016698);
   hCCpi0inFV_stack_10->SetBinError(14,5.06527);
   hCCpi0inFV_stack_10->SetBinError(15,5.65078);
   hCCpi0inFV_stack_10->SetBinError(16,5.919616);
   hCCpi0inFV_stack_10->SetBinError(17,6.632354);
   hCCpi0inFV_stack_10->SetBinError(18,6.941263);
   hCCpi0inFV_stack_10->SetBinError(19,7.914884);
   hCCpi0inFV_stack_10->SetBinError(20,8.870273);
   hCCpi0inFV_stack_10->SetEntries(9150);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,0.9286332);
   hNCinFV_stack_11->SetBinContent(3,0.3401776);
   hNCinFV_stack_11->SetBinContent(4,0.7336084);
   hNCinFV_stack_11->SetBinContent(5,0.5884556);
   hNCinFV_stack_11->SetBinContent(6,0.1967154);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.7319179);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,1.268811);
   hNCinFV_stack_11->SetBinContent(12,1.073786);
   hNCinFV_stack_11->SetBinContent(13,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,1.072095);
   hNCinFV_stack_11->SetBinContent(15,0.7302274);
   hNCinFV_stack_11->SetBinContent(16,2.199135);
   hNCinFV_stack_11->SetBinContent(17,1.56527);
   hNCinFV_stack_11->SetBinContent(18,2.000729);
   hNCinFV_stack_11->SetBinContent(19,7.237422);
   hNCinFV_stack_11->SetBinContent(20,5.570109);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,0.48078);
   hNCinFV_stack_11->SetBinError(3,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.4394482);
   hNCinFV_stack_11->SetBinError(5,0.3397478);
   hNCinFV_stack_11->SetBinError(6,0.1967154);
   hNCinFV_stack_11->SetBinError(7,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.438694);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.5889569);
   hNCinFV_stack_11->SetBinError(12,0.5557297);
   hNCinFV_stack_11->SetBinError(13,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.5551335);
   hNCinFV_stack_11->SetBinError(15,0.4379386);
   hNCinFV_stack_11->SetBinError(16,0.7607114);
   hNCinFV_stack_11->SetBinError(17,0.5534115);
   hNCinFV_stack_11->SetBinError(18,0.7343859);
   hNCinFV_stack_11->SetBinError(19,1.346286);
   hNCinFV_stack_11->SetBinError(20,1.177384);
   hNCinFV_stack_11->SetEntries(119);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,5.521927);
   hnumuCCinFV_stack_12->SetBinContent(2,4.063174);
   hnumuCCinFV_stack_12->SetBinContent(3,6.770113);
   hnumuCCinFV_stack_12->SetBinContent(4,6.944983);
   hnumuCCinFV_stack_12->SetBinContent(5,6.612227);
   hnumuCCinFV_stack_12->SetBinContent(6,8.666069);
   hnumuCCinFV_stack_12->SetBinContent(7,9.345519);
   hnumuCCinFV_stack_12->SetBinContent(8,15.01923);
   hnumuCCinFV_stack_12->SetBinContent(9,12.30251);
   hnumuCCinFV_stack_12->SetBinContent(10,13.46803);
   hnumuCCinFV_stack_12->SetBinContent(11,17.1731);
   hnumuCCinFV_stack_12->SetBinContent(12,15.17254);
   hnumuCCinFV_stack_12->SetBinContent(13,15.53167);
   hnumuCCinFV_stack_12->SetBinContent(14,20.6711);
   hnumuCCinFV_stack_12->SetBinContent(15,25.07682);
   hnumuCCinFV_stack_12->SetBinContent(16,22.02132);
   hnumuCCinFV_stack_12->SetBinContent(17,29.72039);
   hnumuCCinFV_stack_12->SetBinContent(18,39.31189);
   hnumuCCinFV_stack_12->SetBinContent(19,42.94975);
   hnumuCCinFV_stack_12->SetBinContent(20,67.02174);
   hnumuCCinFV_stack_12->SetBinError(1,1.194382);
   hnumuCCinFV_stack_12->SetBinError(2,0.9769474);
   hnumuCCinFV_stack_12->SetBinError(3,1.40984);
   hnumuCCinFV_stack_12->SetBinError(4,1.31394);
   hnumuCCinFV_stack_12->SetBinError(5,1.359969);
   hnumuCCinFV_stack_12->SetBinError(6,1.556414);
   hnumuCCinFV_stack_12->SetBinError(7,1.570845);
   hnumuCCinFV_stack_12->SetBinError(8,2.959731);
   hnumuCCinFV_stack_12->SetBinError(9,1.850712);
   hnumuCCinFV_stack_12->SetBinError(10,2.208821);
   hnumuCCinFV_stack_12->SetBinError(11,2.354066);
   hnumuCCinFV_stack_12->SetBinError(12,2.123473);
   hnumuCCinFV_stack_12->SetBinError(13,1.964468);
   hnumuCCinFV_stack_12->SetBinError(14,2.334352);
   hnumuCCinFV_stack_12->SetBinError(15,2.646928);
   hnumuCCinFV_stack_12->SetBinError(16,2.391279);
   hnumuCCinFV_stack_12->SetBinError(17,3.14594);
   hnumuCCinFV_stack_12->SetBinError(18,3.415961);
   hnumuCCinFV_stack_12->SetBinError(19,3.336649);
   hnumuCCinFV_stack_12->SetBinError(20,4.640375);
   hnumuCCinFV_stack_12->SetEntries(1596);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,1.121968);
   hnueCCinFV_stack_13->SetBinContent(18,1.125349);
   hnueCCinFV_stack_13->SetBinContent(19,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(20,2.192373);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.5181909);
   hnueCCinFV_stack_13->SetBinError(18,0.5194673);
   hnueCCinFV_stack_13->SetBinError(19,0.5197486);
   hnueCCinFV_stack_13->SetBinError(20,0.7589683);
   hnueCCinFV_stack_13->SetEntries(28);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__5->SetBinContent(1,57.33951);
   hmcerror__5->SetBinContent(2,64.82259);
   hmcerror__5->SetBinContent(3,58.53238);
   hmcerror__5->SetBinContent(4,62.44228);
   hmcerror__5->SetBinContent(5,61.01004);
   hmcerror__5->SetBinContent(6,69.06429);
   hmcerror__5->SetBinContent(7,75.29824);
   hmcerror__5->SetBinContent(8,87.35971);
   hmcerror__5->SetBinContent(9,96.54425);
   hmcerror__5->SetBinContent(10,93.81268);
   hmcerror__5->SetBinContent(11,106.3941);
   hmcerror__5->SetBinContent(12,110.9018);
   hmcerror__5->SetBinContent(13,122.8819);
   hmcerror__5->SetBinContent(14,133.3261);
   hmcerror__5->SetBinContent(15,157.7504);
   hmcerror__5->SetBinContent(16,172.2016);
   hmcerror__5->SetBinContent(17,211.8573);
   hmcerror__5->SetBinContent(18,247.6996);
   hmcerror__5->SetBinContent(19,313.421);
   hmcerror__5->SetBinContent(20,413.8199);
   hmcerror__5->SetBinError(1,16.63474);
   hmcerror__5->SetBinError(2,17.87168);
   hmcerror__5->SetBinError(3,14.78574);
   hmcerror__5->SetBinError(4,14.93641);
   hmcerror__5->SetBinError(5,16.80503);
   hmcerror__5->SetBinError(6,17.15948);
   hmcerror__5->SetBinError(7,19.63543);
   hmcerror__5->SetBinError(8,21.82105);
   hmcerror__5->SetBinError(9,25.81048);
   hmcerror__5->SetBinError(10,27.51582);
   hmcerror__5->SetBinError(11,28.96583);
   hmcerror__5->SetBinError(12,30.95221);
   hmcerror__5->SetBinError(13,33.57231);
   hmcerror__5->SetBinError(14,33.97318);
   hmcerror__5->SetBinError(15,39.51703);
   hmcerror__5->SetBinError(16,44.80156);
   hmcerror__5->SetBinError(17,53.04095);
   hmcerror__5->SetBinError(18,54.15749);
   hmcerror__5->SetBinError(19,66.07722);
   hmcerror__5->SetBinError(20,82.23633);
   hmcerror__5->SetBinError(21,0.3895343);
   hmcerror__5->SetEntries(2705.441);

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
   52,
   51,
   46,
   50,
   71,
   60,
   68,
   79,
   70,
   82,
   95,
   103,
   130,
   123,
   125,
   145,
   198,
   239,
   329,
   382};
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
   7.3419,
   7.2725,
   6.9153,
   7.2025,
   8.5518,
   7.8743,
   8.3726,
   9.0124,
   8.4925,
   9.1791,
   9.8686,
   10.14889,
   11.40175,
   11.09054,
   11.18034,
   12.04159,
   14.07125,
   15.45962,
   18.13836,
   19.54482};
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
   7.1381,
   7.0686,
   6.7108,
   6.9985,
   8.3496,
   7.6713,
   8.1701,
   8.8105,
   8.2902,
   8.9774,
   9.667,
   10.14889,
   11.40175,
   11.09054,
   11.18034,
   12.04159,
   14.07125,
   15.45962,
   18.13836,
   19.54482};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(2.838688);
   Graph_Graph3005->SetMaximum(437.7908);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2498.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 22.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  49.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2144.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 28.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 383.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_pi0_costheta_all");
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
   0.2901096,
   0.2757014,
   0.2526079,
   0.2392034,
   0.275447,
   0.2484566,
   0.2607688,
   0.2497839,
   0.2673435,
   0.293306,
   0.2722504,
   0.2790957,
   0.2732079,
   0.2548127,
   0.2505036,
   0.2601693,
   0.2503617,
   0.2186418,
   0.2108258,
   0.1987249};
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
   0.2901096,
   0.2757014,
   0.2526079,
   0.2392034,
   0.275447,
   0.2484566,
   0.2607688,
   0.2497839,
   0.2673435,
   0.293306,
   0.2722504,
   0.2790957,
   0.2732079,
   0.2548127,
   0.2505036,
   0.2601693,
   0.2503617,
   0.2186418,
   0.2108258,
   0.1987249};
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
   0.2901096,
   0.2757014,
   0.2526079,
   0.2392034,
   0.275447,
   0.2484566,
   0.2607688,
   0.2497839,
   0.2673435,
   0.293306,
   0.2722504,
   0.2790957,
   0.2732079,
   0.2548127,
   0.2505036,
   0.2601693,
   0.2503617,
   0.2186418,
   0.2108258,
   0.1987249};
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
   0.2901096,
   0.2757014,
   0.2526079,
   0.2392034,
   0.275447,
   0.2484566,
   0.2607688,
   0.2497839,
   0.2673435,
   0.293306,
   0.2722504,
   0.2790957,
   0.2732079,
   0.2548127,
   0.2505036,
   0.2601693,
   0.2503617,
   0.2186418,
   0.2108258,
   0.1987249};
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
   0.9068791,
   0.7867627,
   0.7858898,
   0.8007396,
   1.163743,
   0.8687558,
   0.9030755,
   0.904307,
   0.7250561,
   0.8740822,
   0.8929067,
   0.9287499,
   1.057926,
   0.9225501,
   0.7923913,
   0.8420365,
   0.9345915,
   0.9648784,
   1.049706,
   0.9231069};
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
   0.1280426,
   0.1121908,
   0.1181449,
   0.1153465,
   0.1401704,
   0.1140141,
   0.1111925,
   0.1031643,
   0.08796484,
   0.09784498,
   0.09275515,
   0.09151244,
   0.09278626,
   0.08318354,
   0.07087363,
   0.06992732,
   0.06641852,
   0.06241279,
   0.05787219,
   0.04723026};
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
   0.1244883,
   0.1090453,
   0.1146511,
   0.1120795,
   0.1368562,
   0.1110748,
   0.1085032,
   0.1008531,
   0.08586943,
   0.09569495,
   0.0908603,
   0.09151244,
   0.09278626,
   0.08318354,
   0.07087363,
   0.06992732,
   0.06641852,
   0.06241279,
   0.05787219,
   0.04723026};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.5707405);
   Graph_Graph3008->SetMaximum(1.36695);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

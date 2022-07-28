#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sun Jun  5 00:41:48 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-153.8462,-21.72264,1128.205,2402.066);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__16->SetBinContent(0,77.15007);
   hmc__16->SetBinContent(1,1086.132);
   hmc__16->SetBinContent(2,521.2362);
   hmc__16->SetBinContent(3,360.4596);
   hmc__16->SetBinContent(4,262.6688);
   hmc__16->SetBinContent(5,186.3804);
   hmc__16->SetBinContent(6,126.2734);
   hmc__16->SetBinContent(7,86.04928);
   hmc__16->SetBinContent(8,54.53815);
   hmc__16->SetBinContent(9,32.17545);
   hmc__16->SetBinContent(10,23.34491);
   hmc__16->SetBinContent(11,16.99674);
   hmc__16->SetBinContent(12,10.67999);
   hmc__16->SetBinContent(13,5.596068);
   hmc__16->SetBinContent(14,6.733479);
   hmc__16->SetBinContent(15,4.762892);
   hmc__16->SetBinContent(16,17.20017);
   hmc__16->SetBinError(0,4.89504);
   hmc__16->SetBinError(1,239.2959);
   hmc__16->SetBinError(2,110.2735);
   hmc__16->SetBinError(3,77.72217);
   hmc__16->SetBinError(4,60.09611);
   hmc__16->SetBinError(5,41.31089);
   hmc__16->SetBinError(6,27.62114);
   hmc__16->SetBinError(7,22.37056);
   hmc__16->SetBinError(8,14.60964);
   hmc__16->SetBinError(9,9.732313);
   hmc__16->SetBinError(10,11.1247);
   hmc__16->SetBinError(11,7.067701);
   hmc__16->SetBinError(12,4.053951);
   hmc__16->SetBinError(13,3.810627);
   hmc__16->SetBinError(14,5.610093);
   hmc__16->SetBinError(15,3.937365);
   hmc__16->SetBinError(16,8.02545);
   hmc__16->SetMinimum(-21.72264);
   hmc__16->SetMaximum(2280.877);
   hmc__16->SetEntries(2848.296);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",15,0,1000);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(1140.438);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(0,1.150919);
   hbadmatch_stack_1->SetBinContent(1,19.85664);
   hbadmatch_stack_1->SetBinContent(2,11.04168);
   hbadmatch_stack_1->SetBinContent(3,7.722667);
   hbadmatch_stack_1->SetBinContent(4,6.311423);
   hbadmatch_stack_1->SetBinContent(5,6.277028);
   hbadmatch_stack_1->SetBinContent(6,5.270317);
   hbadmatch_stack_1->SetBinContent(7,4.911408);
   hbadmatch_stack_1->SetBinContent(8,0.8770706);
   hbadmatch_stack_1->SetBinContent(10,0.3934307);
   hbadmatch_stack_1->SetBinContent(11,0.9841816);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(13,0.4357758);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinError(0,0.5975644);
   hbadmatch_stack_1->SetBinError(1,2.792226);
   hbadmatch_stack_1->SetBinError(2,1.748697);
   hbadmatch_stack_1->SetBinError(3,1.617878);
   hbadmatch_stack_1->SetBinError(4,1.314794);
   hbadmatch_stack_1->SetBinError(5,1.192566);
   hbadmatch_stack_1->SetBinError(6,1.924068);
   hbadmatch_stack_1->SetBinError(7,1.2224);
   hbadmatch_stack_1->SetBinError(8,0.5197486);
   hbadmatch_stack_1->SetBinError(10,0.2781975);
   hbadmatch_stack_1->SetBinError(11,0.5222129);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(13,0.3095914);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1504;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,30.7712);
   hext_stack_2->SetBinContent(1,98.40105);
   hext_stack_2->SetBinContent(2,48.63951);
   hext_stack_2->SetBinContent(3,38.92749);
   hext_stack_2->SetBinContent(4,20.31502);
   hext_stack_2->SetBinContent(5,9.573563);
   hext_stack_2->SetBinContent(6,11.74942);
   hext_stack_2->SetBinContent(7,3.979379);
   hext_stack_2->SetBinContent(8,1.137595);
   hext_stack_2->SetBinContent(9,4.028449);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,2.103607);
   hext_stack_2->SetBinContent(12,2.973055);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(14,0.6416141);
   hext_stack_2->SetBinContent(15,1.137595);
   hext_stack_2->SetBinContent(16,2.973055);
   hext_stack_2->SetBinError(0,3.867574);
   hext_stack_2->SetBinError(1,6.788953);
   hext_stack_2->SetBinError(2,4.642921);
   hext_stack_2->SetBinError(3,4.162289);
   hext_stack_2->SetBinError(4,2.952919);
   hext_stack_2->SetBinError(5,1.908769);
   hext_stack_2->SetBinError(6,2.27899);
   hext_stack_2->SetBinError(7,1.207483);
   hext_stack_2->SetBinError(8,0.6602113);
   hext_stack_2->SetBinError(9,1.479117);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.9761052);
   hext_stack_2->SetBinError(12,1.346105);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(14,0.6416141);
   hext_stack_2->SetBinError(15,0.6602113);
   hext_stack_2->SetBinError(16,1.346105);
   hext_stack_2->SetEntries(657);

   ci = 1505;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(0,0.7139341);
   hdirt_stack_3->SetBinContent(1,15.8546);
   hdirt_stack_3->SetBinContent(2,7.56368);
   hdirt_stack_3->SetBinContent(3,4.906472);
   hdirt_stack_3->SetBinContent(4,3.060063);
   hdirt_stack_3->SetBinContent(5,2.237497);
   hdirt_stack_3->SetBinContent(6,1.218133);
   hdirt_stack_3->SetBinContent(7,1.235189);
   hdirt_stack_3->SetBinContent(9,0.1482583);
   hdirt_stack_3->SetBinContent(10,0.7319759);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinError(0,0.3660028);
   hdirt_stack_3->SetBinError(1,2.146495);
   hdirt_stack_3->SetBinError(2,1.411567);
   hdirt_stack_3->SetBinError(3,1.454144);
   hdirt_stack_3->SetBinError(4,0.8930637);
   hdirt_stack_3->SetBinError(5,0.8050121);
   hdirt_stack_3->SetBinError(6,0.5848556);
   hdirt_stack_3->SetBinError(7,0.5926571);
   hdirt_stack_3->SetBinError(9,0.1482583);
   hdirt_stack_3->SetBinError(10,0.5190762);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetEntries(156);

   ci = 1506;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,4.301298);
   houtFV_stack_4->SetBinContent(1,120.2194);
   houtFV_stack_4->SetBinContent(2,69.68161);
   houtFV_stack_4->SetBinContent(3,38.40974);
   houtFV_stack_4->SetBinContent(4,24.48303);
   houtFV_stack_4->SetBinContent(5,14.57717);
   houtFV_stack_4->SetBinContent(6,12.34428);
   houtFV_stack_4->SetBinContent(7,5.270268);
   houtFV_stack_4->SetBinContent(8,4.526012);
   houtFV_stack_4->SetBinContent(9,2.675291);
   houtFV_stack_4->SetBinContent(10,2.447412);
   houtFV_stack_4->SetBinContent(11,1.895913);
   houtFV_stack_4->SetBinContent(12,0.1950248);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,0.1950248);
   houtFV_stack_4->SetBinContent(16,0.3401776);
   houtFV_stack_4->SetBinError(0,1.019492);
   houtFV_stack_4->SetBinError(1,5.457907);
   houtFV_stack_4->SetBinError(2,4.184386);
   houtFV_stack_4->SetBinError(3,3.115672);
   houtFV_stack_4->SetBinError(4,2.459593);
   houtFV_stack_4->SetBinError(5,1.899757);
   houtFV_stack_4->SetBinError(6,1.771427);
   houtFV_stack_4->SetBinError(7,1.19395);
   houtFV_stack_4->SetBinError(8,1.084439);
   houtFV_stack_4->SetBinError(9,0.8327192);
   houtFV_stack_4->SetBinError(10,0.7605193);
   houtFV_stack_4->SetBinError(11,0.7852635);
   houtFV_stack_4->SetBinError(12,0.1950249);
   houtFV_stack_4->SetBinError(13,0.1967154);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetBinError(15,0.1950249);
   houtFV_stack_4->SetBinError(16,0.3401776);
   houtFV_stack_4->SetEntries(1301);

   ci = 1507;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,1.561408);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,54.37003);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,12.69986);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,6.734054);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.5224);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.99519);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.993862);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.8228858);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.3689095);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.463399);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.151033);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8142616);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8129866);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4398162);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.469493);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2499367);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1508;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.557598);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.477708);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7943219);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4593539);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6177035);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3657307);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2741946);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1818869);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1509;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,18.36326);
   hNCpi0inFVres_stack_7->SetBinContent(1,521.3413);
   hNCpi0inFVres_stack_7->SetBinContent(2,227.7415);
   hNCpi0inFVres_stack_7->SetBinContent(3,146.2952);
   hNCpi0inFVres_stack_7->SetBinContent(4,95.5535);
   hNCpi0inFVres_stack_7->SetBinContent(5,60.43315);
   hNCpi0inFVres_stack_7->SetBinContent(6,32.36378);
   hNCpi0inFVres_stack_7->SetBinContent(7,21.82337);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.75211);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.889163);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.210092);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.250371);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.93723);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.17164);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.04559);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.5573358);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.172472);
   hNCpi0inFVres_stack_7->SetBinError(0,1.412618);
   hNCpi0inFVres_stack_7->SetBinError(1,7.423401);
   hNCpi0inFVres_stack_7->SetBinError(2,4.911797);
   hNCpi0inFVres_stack_7->SetBinError(3,3.940146);
   hNCpi0inFVres_stack_7->SetBinError(4,3.259562);
   hNCpi0inFVres_stack_7->SetBinError(5,2.568099);
   hNCpi0inFVres_stack_7->SetBinError(6,1.793554);
   hNCpi0inFVres_stack_7->SetBinError(7,1.528011);
   hNCpi0inFVres_stack_7->SetBinError(8,1.262519);
   hNCpi0inFVres_stack_7->SetBinError(9,0.795972);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6540707);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6723136);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4467669);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3800824);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3390387);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1704726);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4046342);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1510;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,2.158766);
   hNCpi0inFVdis_stack_8->SetBinContent(1,89.39146);
   hNCpi0inFVdis_stack_8->SetBinContent(2,38.41428);
   hNCpi0inFVdis_stack_8->SetBinContent(3,26.85767);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.91005);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.73019);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.131301);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.180958);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.352088);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.137602);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.590308);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2789998);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.087108);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.4090178);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.111024);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.946412);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.672755);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.439591);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.347205);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9392618);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8796325);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6996421);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6034136);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4346236);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.0882275);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3505157);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1511;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1512;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1513;
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
   hs6->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,5.536533);
   hCCpi0inFV_stack_11->SetBinContent(1,60.6426);
   hCCpi0inFV_stack_11->SetBinContent(2,59.08604);
   hCCpi0inFV_stack_11->SetBinContent(3,58.82281);
   hCCpi0inFV_stack_11->SetBinContent(4,58.8949);
   hCCpi0inFV_stack_11->SetBinContent(5,47.54785);
   hCCpi0inFV_stack_11->SetBinContent(6,36.6755);
   hCCpi0inFV_stack_11->SetBinContent(7,28.11582);
   hCCpi0inFV_stack_11->SetBinContent(8,21.80792);
   hCCpi0inFV_stack_11->SetBinContent(9,9.679763);
   hCCpi0inFV_stack_11->SetBinContent(10,10.0899);
   hCCpi0inFV_stack_11->SetBinContent(11,6.798583);
   hCCpi0inFV_stack_11->SetBinContent(12,2.982615);
   hCCpi0inFV_stack_11->SetBinContent(13,2.192713);
   hCCpi0inFV_stack_11->SetBinContent(14,4.047948);
   hCCpi0inFV_stack_11->SetBinContent(15,2.44065);
   hCCpi0inFV_stack_11->SetBinContent(16,8.635089);
   hCCpi0inFV_stack_11->SetBinError(0,1.110802);
   hCCpi0inFV_stack_11->SetBinError(1,3.811155);
   hCCpi0inFV_stack_11->SetBinError(2,3.838781);
   hCCpi0inFV_stack_11->SetBinError(3,3.794422);
   hCCpi0inFV_stack_11->SetBinError(4,3.885716);
   hCCpi0inFV_stack_11->SetBinError(5,3.488048);
   hCCpi0inFV_stack_11->SetBinError(6,2.963901);
   hCCpi0inFV_stack_11->SetBinError(7,2.702153);
   hCCpi0inFV_stack_11->SetBinError(8,2.427453);
   hCCpi0inFV_stack_11->SetBinError(9,1.545603);
   hCCpi0inFV_stack_11->SetBinError(10,1.592452);
   hCCpi0inFV_stack_11->SetBinError(11,1.256225);
   hCCpi0inFV_stack_11->SetBinError(12,0.8556548);
   hCCpi0inFV_stack_11->SetBinError(13,0.7070018);
   hCCpi0inFV_stack_11->SetBinError(14,1.018661);
   hCCpi0inFV_stack_11->SetBinError(15,0.7587757);
   hCCpi0inFV_stack_11->SetBinError(16,1.55854);
   hCCpi0inFV_stack_11->SetEntries(1821);

   ci = 1514;
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
   hs6->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,3.909558);
   hNCinFV_stack_12->SetBinContent(1,50.85228);
   hNCinFV_stack_12->SetBinContent(2,19.94122);
   hNCinFV_stack_12->SetBinContent(3,13.03613);
   hNCinFV_stack_12->SetBinContent(4,11.96585);
   hNCinFV_stack_12->SetBinContent(5,11.14022);
   hNCinFV_stack_12->SetBinContent(6,6.303717);
   hNCinFV_stack_12->SetBinContent(7,4.828656);
   hNCinFV_stack_12->SetBinContent(8,2.539312);
   hNCinFV_stack_12->SetBinContent(9,2.194063);
   hNCinFV_stack_12->SetBinContent(10,1.463836);
   hNCinFV_stack_12->SetBinContent(11,0.1967154);
   hNCinFV_stack_12->SetBinContent(12,0.1950248);
   hNCinFV_stack_12->SetBinContent(13,0.3917402);
   hNCinFV_stack_12->SetBinContent(14,0.3401776);
   hNCinFV_stack_12->SetBinContent(16,0.9286332);
   hNCinFV_stack_12->SetBinError(0,0.9811382);
   hNCinFV_stack_12->SetBinError(1,3.614025);
   hNCinFV_stack_12->SetBinError(2,2.21146);
   hNCinFV_stack_12->SetBinError(3,1.840953);
   hNCinFV_stack_12->SetBinError(4,1.715738);
   hNCinFV_stack_12->SetBinError(5,1.665073);
   hNCinFV_stack_12->SetBinError(6,1.256721);
   hNCinFV_stack_12->SetBinError(7,1.178319);
   hNCinFV_stack_12->SetBinError(8,0.8333082);
   hNCinFV_stack_12->SetBinError(9,0.7594044);
   hNCinFV_stack_12->SetBinError(10,0.620407);
   hNCinFV_stack_12->SetBinError(11,0.1967154);
   hNCinFV_stack_12->SetBinError(12,0.1950249);
   hNCinFV_stack_12->SetBinError(13,0.2770047);
   hNCinFV_stack_12->SetBinError(14,0.3401776);
   hNCinFV_stack_12->SetBinError(16,0.48078);
   hNCinFV_stack_12->SetEntries(550);

   ci = 1515;
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
   hs6->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,8.259315);
   hnumuCCinFV_stack_13->SetBinContent(1,41.08546);
   hnumuCCinFV_stack_13->SetBinContent(2,20.63138);
   hnumuCCinFV_stack_13->SetBinContent(3,14.73636);
   hnumuCCinFV_stack_13->SetBinContent(4,14.48325);
   hnumuCCinFV_stack_13->SetBinContent(5,12.84683);
   hnumuCCinFV_stack_13->SetBinContent(6,7.965436);
   hnumuCCinFV_stack_13->SetBinContent(7,6.825482);
   hnumuCCinFV_stack_13->SetBinContent(8,3.660261);
   hnumuCCinFV_stack_13->SetBinContent(9,2.869872);
   hnumuCCinFV_stack_13->SetBinContent(10,0.5909988);
   hnumuCCinFV_stack_13->SetBinContent(11,0.736823);
   hnumuCCinFV_stack_13->SetBinContent(12,1.485078);
   hnumuCCinFV_stack_13->SetBinContent(16,0.9801958);
   hnumuCCinFV_stack_13->SetBinError(0,1.690986);
   hnumuCCinFV_stack_13->SetBinError(1,3.909552);
   hnumuCCinFV_stack_13->SetBinError(2,2.719983);
   hnumuCCinFV_stack_13->SetBinError(3,2.303779);
   hnumuCCinFV_stack_13->SetBinError(4,2.104193);
   hnumuCCinFV_stack_13->SetBinError(5,2.249374);
   hnumuCCinFV_stack_13->SetBinError(6,1.410301);
   hnumuCCinFV_stack_13->SetBinError(7,1.337366);
   hnumuCCinFV_stack_13->SetBinError(8,1.012023);
   hnumuCCinFV_stack_13->SetBinError(9,0.9350549);
   hnumuCCinFV_stack_13->SetBinError(10,0.4406318);
   hnumuCCinFV_stack_13->SetBinError(11,0.4394599);
   hnumuCCinFV_stack_13->SetBinError(12,0.9575981);
   hnumuCCinFV_stack_13->SetBinError(16,0.4383608);
   hnumuCCinFV_stack_13->SetEntries(526);

   ci = 1516;
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
   hs6->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(0,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(1,10.25238);
   hnueCCinFV_stack_14->SetBinContent(2,4.192458);
   hnueCCinFV_stack_14->SetBinContent(3,3.160892);
   hnueCCinFV_stack_14->SetBinContent(4,1.485983);
   hnueCCinFV_stack_14->SetBinContent(5,3.53447);
   hnueCCinFV_stack_14->SetBinContent(6,0.9505513);
   hnueCCinFV_stack_14->SetBinContent(7,0.9442491);
   hnueCCinFV_stack_14->SetBinContent(8,1.034834);
   hnueCCinFV_stack_14->SetBinContent(9,0.2180157);
   hnueCCinFV_stack_14->SetBinContent(10,0.8989917);
   hnueCCinFV_stack_14->SetBinContent(13,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_14->SetBinError(0,0.3401776);
   hnueCCinFV_stack_14->SetBinError(1,2.118679);
   hnueCCinFV_stack_14->SetBinError(2,1.168265);
   hnueCCinFV_stack_14->SetBinError(3,0.9451215);
   hnueCCinFV_stack_14->SetBinError(4,0.565842);
   hnueCCinFV_stack_14->SetBinError(5,1.897983);
   hnueCCinFV_stack_14->SetBinError(6,0.4902375);
   hnueCCinFV_stack_14->SetBinError(7,0.601091);
   hnueCCinFV_stack_14->SetBinError(8,0.8621563);
   hnueCCinFV_stack_14->SetBinError(9,0.2180157);
   hnueCCinFV_stack_14->SetBinError(10,0.7304821);
   hnueCCinFV_stack_14->SetBinError(13,0.4531728);
   hnueCCinFV_stack_14->SetBinError(16,0.3401776);
   hnueCCinFV_stack_14->SetEntries(97);

   ci = 1517;
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
   hs6->Add(hnueCCinFV_stack_14,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__17->SetBinContent(0,77.15007);
   hmcerror__17->SetBinContent(1,1086.132);
   hmcerror__17->SetBinContent(2,521.2362);
   hmcerror__17->SetBinContent(3,360.4596);
   hmcerror__17->SetBinContent(4,262.6688);
   hmcerror__17->SetBinContent(5,186.3804);
   hmcerror__17->SetBinContent(6,126.2734);
   hmcerror__17->SetBinContent(7,86.04928);
   hmcerror__17->SetBinContent(8,54.53815);
   hmcerror__17->SetBinContent(9,32.17545);
   hmcerror__17->SetBinContent(10,23.34491);
   hmcerror__17->SetBinContent(11,16.99674);
   hmcerror__17->SetBinContent(12,10.67999);
   hmcerror__17->SetBinContent(13,5.596068);
   hmcerror__17->SetBinContent(14,6.733479);
   hmcerror__17->SetBinContent(15,4.762892);
   hmcerror__17->SetBinContent(16,17.20017);
   hmcerror__17->SetBinError(0,4.89504);
   hmcerror__17->SetBinError(1,239.2959);
   hmcerror__17->SetBinError(2,110.2735);
   hmcerror__17->SetBinError(3,77.72217);
   hmcerror__17->SetBinError(4,60.09611);
   hmcerror__17->SetBinError(5,41.31089);
   hmcerror__17->SetBinError(6,27.62114);
   hmcerror__17->SetBinError(7,22.37056);
   hmcerror__17->SetBinError(8,14.60964);
   hmcerror__17->SetBinError(9,9.732313);
   hmcerror__17->SetBinError(10,11.1247);
   hmcerror__17->SetBinError(11,7.067701);
   hmcerror__17->SetBinError(12,4.053951);
   hmcerror__17->SetBinError(13,3.810627);
   hmcerror__17->SetBinError(14,5.610093);
   hmcerror__17->SetBinError(15,3.937365);
   hmcerror__17->SetBinError(16,8.02545);
   hmcerror__17->SetEntries(2848.296);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3021[15] = {
   984,
   507,
   319,
   229,
   148,
   101,
   60,
   49,
   36,
   18,
   16,
   10,
   6,
   2,
   4};
   Double_t _felx3021[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3021[15] = {
   31.36877,
   22.51666,
   17.86057,
   15.13275,
   12.16553,
   10.04988,
   7.8743,
   7.1318,
   6.1381,
   4.4008,
   4.1628,
   3.34883,
   2.67925,
   2,
   2.29683};
   Double_t _fehx3021[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3021[15] = {
   31.36877,
   22.51666,
   17.86057,
   15.13275,
   12.16553,
   10.04988,
   7.6713,
   6.9277,
   5.9318,
   4.1858,
   3.9454,
   3.1179,
   2.41858,
   1.51917,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1100);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(1116.906);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2489.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.4","F");

   ci = 1504;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 244.6","F");

   ci = 1505;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.1","F");

   ci = 1506;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 297.5","F");

   ci = 1507;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  85.5","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.6","F");

   ci = 1509;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1138.4","F");

   ci = 1510;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  218.0","F");

   ci = 1511;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1512;
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

   ci = 1513;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 409.8","F");

   ci = 1514;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 125.4","F");

   ci = 1515;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 127.9","F");

   ci = 1516;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 27.3","F");

   ci = 1517;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3022[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3022[15] = {
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
   Double_t _felx3022[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3022[15] = {
   0.2203193,
   0.2115614,
   0.2156196,
   0.2287904,
   0.2216482,
   0.2187408,
   0.2599738,
   0.2678793,
   0.3024764,
   0.4765363,
   0.415827,
   0.3795838,
   0.6809472,
   0.8331641,
   0.8266751};
   Double_t _fehx3022[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3022[15] = {
   0.2203193,
   0.2115614,
   0.2156196,
   0.2287904,
   0.2216482,
   0.2187408,
   0.2599738,
   0.2678793,
   0.3024764,
   0.4765363,
   0.415827,
   0.3795838,
   0.6809472,
   0.8331641,
   0.8266751};
   grae = new TGraphAsymmErrors(15,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1100);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3023[15] = {
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
   Double_t _felx3023[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3023[15] = {
   0.1994185,
   0.197413,
   0.1939685,
   0.2035262,
   0.20345,
   0.1931919,
   0.2110392,
   0.2098113,
   0.1961551,
   0.2414899,
   0.2279707,
   0.2581239,
   0.2945484,
   0.3320031,
   0.3369904};
   Double_t _fehx3023[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3023[15] = {
   0.1994185,
   0.197413,
   0.1939685,
   0.2035262,
   0.20345,
   0.1931919,
   0.2110392,
   0.2098113,
   0.1961551,
   0.2414899,
   0.2279707,
   0.2581239,
   0.2945484,
   0.3320031,
   0.3369904};
   grae = new TGraphAsymmErrors(15,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1100);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[15] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3024[15] = {
   0.9059674,
   0.9726876,
   0.8849812,
   0.8718203,
   0.7940749,
   0.7998519,
   0.6972749,
   0.8984536,
   1.118866,
   0.771046,
   0.9413572,
   0.9363305,
   1.072181,
   0.2970233,
   0.8398258};
   Double_t _felx3024[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3024[15] = {
   0.02888118,
   0.04319857,
   0.04954944,
   0.0576115,
   0.06527256,
   0.07958824,
   0.09150919,
   0.1307672,
   0.1907697,
   0.1885122,
   0.2449176,
   0.3135612,
   0.4787737,
   0.2970233,
   0.4822343};
   Double_t _fehx3024[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3024[15] = {
   0.02888118,
   0.04319857,
   0.04954944,
   0.0576115,
   0.06527256,
   0.07958824,
   0.08915008,
   0.1270248,
   0.184358,
   0.1793025,
   0.2321269,
   0.2919385,
   0.4321928,
   0.2256144,
   0.4161043};
   grae = new TGraphAsymmErrors(15,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1100);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.654812);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,1000,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

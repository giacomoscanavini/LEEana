#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Mar 13 17:56:37 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",138,161,1200,900);
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
   pad1->Range(-40,-2.035568,293.3333,225.091);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__7->SetBinContent(0,4.545519);
   hmc__7->SetBinContent(1,84.1675);
   hmc__7->SetBinContent(2,82.12436);
   hmc__7->SetBinContent(3,75.7634);
   hmc__7->SetBinContent(4,56.60652);
   hmc__7->SetBinContent(5,52.00154);
   hmc__7->SetBinContent(6,49.11271);
   hmc__7->SetBinContent(7,41.82336);
   hmc__7->SetBinContent(8,46.6302);
   hmc__7->SetBinContent(9,42.48187);
   hmc__7->SetBinContent(10,50.12535);
   hmc__7->SetBinContent(11,44.57386);
   hmc__7->SetBinContent(12,51.29427);
   hmc__7->SetBinContent(13,51.14243);
   hmc__7->SetBinContent(14,47.77893);
   hmc__7->SetBinContent(15,46.31408);
   hmc__7->SetBinContent(16,52.80807);
   hmc__7->SetBinContent(17,55.80871);
   hmc__7->SetBinContent(18,64.08675);
   hmc__7->SetBinContent(19,52.21668);
   hmc__7->SetBinContent(20,60.01783);
   hmc__7->SetBinContent(21,69.47592);
   hmc__7->SetBinContent(22,78.31556);
   hmc__7->SetBinContent(23,99.78709);
   hmc__7->SetBinContent(24,101.7784);
   hmc__7->SetBinContent(25,98.92117);
   hmc__7->SetBinContent(26,70.82404);
   hmc__7->SetBinContent(27,4.267219);
   hmc__7->SetBinError(0,1.144797);
   hmc__7->SetBinError(1,25.77977);
   hmc__7->SetBinError(2,31.56574);
   hmc__7->SetBinError(3,21.49097);
   hmc__7->SetBinError(4,19.82686);
   hmc__7->SetBinError(5,23.17873);
   hmc__7->SetBinError(6,15.21525);
   hmc__7->SetBinError(7,16.60972);
   hmc__7->SetBinError(8,17.29721);
   hmc__7->SetBinError(9,14.97729);
   hmc__7->SetBinError(10,19.16973);
   hmc__7->SetBinError(11,12.50581);
   hmc__7->SetBinError(12,18.42541);
   hmc__7->SetBinError(13,15.77839);
   hmc__7->SetBinError(14,15.95469);
   hmc__7->SetBinError(15,17.04627);
   hmc__7->SetBinError(16,15.31682);
   hmc__7->SetBinError(17,23.85865);
   hmc__7->SetBinError(18,20.15328);
   hmc__7->SetBinError(19,21.93525);
   hmc__7->SetBinError(20,18.88449);
   hmc__7->SetBinError(21,25.28552);
   hmc__7->SetBinError(22,21.36199);
   hmc__7->SetBinError(23,36.17323);
   hmc__7->SetBinError(24,27.92556);
   hmc__7->SetBinError(25,25.91747);
   hmc__7->SetBinError(26,25.62115);
   hmc__7->SetBinError(27,5.107675);
   hmc__7->SetMinimum(-2.035568);
   hmc__7->SetMaximum(213.7346);
   hmc__7->SetEntries(1602.903);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",26,0,260);
   hs3_stack_3->SetMinimum(-4.228303e-08);
   hs3_stack_3->SetMaximum(106.8673);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,2.042759);
   hbadmatch_stack_1->SetBinContent(2,1.072095);
   hbadmatch_stack_1->SetBinContent(3,1.158425);
   hbadmatch_stack_1->SetBinContent(4,1.759382);
   hbadmatch_stack_1->SetBinContent(5,0.5867651);
   hbadmatch_stack_1->SetBinContent(6,1.247158);
   hbadmatch_stack_1->SetBinContent(7,0.7834804);
   hbadmatch_stack_1->SetBinContent(8,1.889399);
   hbadmatch_stack_1->SetBinContent(9,1.52047);
   hbadmatch_stack_1->SetBinContent(10,1.268811);
   hbadmatch_stack_1->SetBinContent(11,1.973538);
   hbadmatch_stack_1->SetBinContent(12,2.804276);
   hbadmatch_stack_1->SetBinContent(13,2.287653);
   hbadmatch_stack_1->SetBinContent(14,2.642301);
   hbadmatch_stack_1->SetBinContent(15,1.827998);
   hbadmatch_stack_1->SetBinContent(16,2.602088);
   hbadmatch_stack_1->SetBinContent(17,1.620581);
   hbadmatch_stack_1->SetBinContent(18,2.74308);
   hbadmatch_stack_1->SetBinContent(19,2.928514);
   hbadmatch_stack_1->SetBinContent(20,2.417922);
   hbadmatch_stack_1->SetBinContent(21,2.066702);
   hbadmatch_stack_1->SetBinContent(22,3.202011);
   hbadmatch_stack_1->SetBinContent(23,5.584603);
   hbadmatch_stack_1->SetBinContent(24,1.81941);
   hbadmatch_stack_1->SetBinContent(25,2.480586);
   hbadmatch_stack_1->SetBinContent(26,3.931975);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.8157877);
   hbadmatch_stack_1->SetBinError(2,0.5551335);
   hbadmatch_stack_1->SetBinError(3,0.5329835);
   hbadmatch_stack_1->SetBinError(4,0.6367448);
   hbadmatch_stack_1->SetBinError(5,0.3387718);
   hbadmatch_stack_1->SetBinError(6,0.5108615);
   hbadmatch_stack_1->SetBinError(7,0.3917439);
   hbadmatch_stack_1->SetBinError(8,0.6898293);
   hbadmatch_stack_1->SetBinError(9,0.5898325);
   hbadmatch_stack_1->SetBinError(10,0.5889569);
   hbadmatch_stack_1->SetBinError(11,0.7670801);
   hbadmatch_stack_1->SetBinError(12,1.088028);
   hbadmatch_stack_1->SetBinError(13,0.8326886);
   hbadmatch_stack_1->SetBinError(14,0.8324939);
   hbadmatch_stack_1->SetBinError(15,0.714589);
   hbadmatch_stack_1->SetBinError(16,0.8848407);
   hbadmatch_stack_1->SetBinError(17,0.5749267);
   hbadmatch_stack_1->SetBinError(18,0.8693258);
   hbadmatch_stack_1->SetBinError(19,1.268806);
   hbadmatch_stack_1->SetBinError(20,0.7916541);
   hbadmatch_stack_1->SetBinError(21,0.7532435);
   hbadmatch_stack_1->SetBinError(22,0.9188599);
   hbadmatch_stack_1->SetBinError(23,1.303707);
   hbadmatch_stack_1->SetBinError(24,0.6572013);
   hbadmatch_stack_1->SetBinError(25,0.8111082);
   hbadmatch_stack_1->SetBinError(26,1.105529);
   hbadmatch_stack_1->SetEntries(221);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,1.055394);
   hext_stack_2->SetBinContent(1,7.366213);
   hext_stack_2->SetBinContent(2,8.910407);
   hext_stack_2->SetBinContent(3,11.50282);
   hext_stack_2->SetBinContent(4,8.346586);
   hext_stack_2->SetBinContent(5,7.944396);
   hext_stack_2->SetBinContent(6,8.10439);
   hext_stack_2->SetBinContent(7,4.613812);
   hext_stack_2->SetBinContent(8,5.262607);
   hext_stack_2->SetBinContent(9,5.091023);
   hext_stack_2->SetBinContent(10,9.380438);
   hext_stack_2->SetBinContent(11,9.387619);
   hext_stack_2->SetBinContent(12,8.261613);
   hext_stack_2->SetBinContent(13,9.491362);
   hext_stack_2->SetBinContent(14,7.855014);
   hext_stack_2->SetBinContent(15,7.366213);
   hext_stack_2->SetBinContent(16,8.365356);
   hext_stack_2->SetBinContent(17,9.961391);
   hext_stack_2->SetBinContent(18,12.89697);
   hext_stack_2->SetBinContent(19,4.374388);
   hext_stack_2->SetBinContent(20,8.090029);
   hext_stack_2->SetBinContent(21,8.992609);
   hext_stack_2->SetBinContent(22,10.68521);
   hext_stack_2->SetBinContent(23,14.0202);
   hext_stack_2->SetBinContent(24,15.3884);
   hext_stack_2->SetBinContent(25,15.87002);
   hext_stack_2->SetBinContent(26,8.09721);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinError(0,0.6130171);
   hext_stack_2->SetBinError(1,1.79837);
   hext_stack_2->SetBinError(2,1.958401);
   hext_stack_2->SetBinError(3,2.239091);
   hext_stack_2->SetBinError(4,1.829927);
   hext_stack_2->SetBinError(5,1.821657);
   hext_stack_2->SetBinError(6,1.81755);
   hext_stack_2->SetBinError(7,1.439057);
   hext_stack_2->SetBinError(8,1.510415);
   hext_stack_2->SetBinError(9,1.537002);
   hext_stack_2->SetBinError(10,2.080391);
   hext_stack_2->SetBinError(11,2.031459);
   hext_stack_2->SetBinError(12,1.903909);
   hext_stack_2->SetBinError(13,1.892963);
   hext_stack_2->SetBinError(14,1.859985);
   hext_stack_2->SetBinError(15,1.79837);
   hext_stack_2->SetBinError(16,1.755378);
   hext_stack_2->SetBinError(17,2.018911);
   hext_stack_2->SetBinError(18,2.256579);
   hext_stack_2->SetBinError(19,1.299776);
   hext_stack_2->SetBinError(20,1.925069);
   hext_stack_2->SetBinError(21,1.973683);
   hext_stack_2->SetBinError(22,2.132548);
   hext_stack_2->SetBinError(23,2.435248);
   hext_stack_2->SetBinError(24,2.5451);
   hext_stack_2->SetBinError(25,2.627574);
   hext_stack_2->SetBinError(26,1.872082);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetEntries(595);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(1,0.4192812);
   hdirt_stack_3->SetBinContent(2,1.758908);
   hdirt_stack_3->SetBinContent(3,0.5638119);
   hdirt_stack_3->SetBinContent(4,0.6910642);
   hdirt_stack_3->SetBinContent(5,0.2989119);
   hdirt_stack_3->SetBinContent(6,0.5522859);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(8,0.911503);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.4759863);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.7987095);
   hdirt_stack_3->SetBinContent(18,1.200645);
   hdirt_stack_3->SetBinContent(19,0.2761429);
   hdirt_stack_3->SetBinContent(20,0.5852764);
   hdirt_stack_3->SetBinContent(21,2.804367);
   hdirt_stack_3->SetBinContent(22,1.063489);
   hdirt_stack_3->SetBinContent(23,1.310283);
   hdirt_stack_3->SetBinContent(24,3.260886);
   hdirt_stack_3->SetBinContent(25,1.794119);
   hdirt_stack_3->SetBinContent(26,2.300917);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(1,0.3058667);
   hdirt_stack_3->SetBinError(2,0.7430146);
   hdirt_stack_3->SetBinError(3,0.4029034);
   hdirt_stack_3->SetBinError(4,0.4585707);
   hdirt_stack_3->SetBinError(5,0.211975);
   hdirt_stack_3->SetBinError(6,0.2761429);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(8,0.4568119);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.2832671);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.258803);
   hdirt_stack_3->SetBinError(17,0.4179311);
   hdirt_stack_3->SetBinError(18,0.6300436);
   hdirt_stack_3->SetBinError(19,0.1952625);
   hdirt_stack_3->SetBinError(20,0.4188361);
   hdirt_stack_3->SetBinError(21,1.18903);
   hdirt_stack_3->SetBinError(22,0.5851995);
   hdirt_stack_3->SetBinError(23,0.5133126);
   hdirt_stack_3->SetBinError(24,0.9664057);
   hdirt_stack_3->SetBinError(25,0.7546447);
   hdirt_stack_3->SetBinError(26,0.849087);
   hdirt_stack_3->SetEntries(101);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,2.877799);
   houtFV_stack_4->SetBinContent(1,47.13363);
   houtFV_stack_4->SetBinContent(2,15.41666);
   houtFV_stack_4->SetBinContent(3,14.41006);
   houtFV_stack_4->SetBinContent(4,10.47319);
   houtFV_stack_4->SetBinContent(5,8.01414);
   houtFV_stack_4->SetBinContent(6,7.03702);
   houtFV_stack_4->SetBinContent(7,8.533854);
   houtFV_stack_4->SetBinContent(8,9.011204);
   houtFV_stack_4->SetBinContent(9,7.139564);
   houtFV_stack_4->SetBinContent(10,8.439993);
   houtFV_stack_4->SetBinContent(11,4.296227);
   houtFV_stack_4->SetBinContent(12,9.528025);
   houtFV_stack_4->SetBinContent(13,9.400467);
   houtFV_stack_4->SetBinContent(14,7.78751);
   houtFV_stack_4->SetBinContent(15,6.197574);
   houtFV_stack_4->SetBinContent(16,9.008633);
   houtFV_stack_4->SetBinContent(17,10.27828);
   houtFV_stack_4->SetBinContent(18,10.20074);
   houtFV_stack_4->SetBinContent(19,8.276551);
   houtFV_stack_4->SetBinContent(20,11.91143);
   houtFV_stack_4->SetBinContent(21,9.886413);
   houtFV_stack_4->SetBinContent(22,11.37084);
   houtFV_stack_4->SetBinContent(23,13.74814);
   houtFV_stack_4->SetBinContent(24,16.04881);
   houtFV_stack_4->SetBinContent(25,15.57703);
   houtFV_stack_4->SetBinContent(26,29.75746);
   houtFV_stack_4->SetBinContent(27,3.247144);
   houtFV_stack_4->SetBinError(0,0.8997006);
   houtFV_stack_4->SetBinError(1,3.518625);
   houtFV_stack_4->SetBinError(2,1.987256);
   houtFV_stack_4->SetBinError(3,1.928672);
   houtFV_stack_4->SetBinError(4,1.679002);
   houtFV_stack_4->SetBinError(5,1.401178);
   houtFV_stack_4->SetBinError(6,1.303827);
   houtFV_stack_4->SetBinError(7,1.544034);
   houtFV_stack_4->SetBinError(8,1.655894);
   houtFV_stack_4->SetBinError(9,1.417539);
   houtFV_stack_4->SetBinError(10,1.464654);
   houtFV_stack_4->SetBinError(11,1.018517);
   houtFV_stack_4->SetBinError(12,1.498243);
   houtFV_stack_4->SetBinError(13,1.536412);
   houtFV_stack_4->SetBinError(14,1.404575);
   houtFV_stack_4->SetBinError(15,1.232401);
   houtFV_stack_4->SetBinError(16,1.521418);
   houtFV_stack_4->SetBinError(17,1.622866);
   houtFV_stack_4->SetBinError(18,1.661068);
   houtFV_stack_4->SetBinError(19,1.353145);
   houtFV_stack_4->SetBinError(20,1.82502);
   houtFV_stack_4->SetBinError(21,1.588602);
   houtFV_stack_4->SetBinError(22,1.722048);
   houtFV_stack_4->SetBinError(23,2.14397);
   houtFV_stack_4->SetBinError(24,1.947703);
   houtFV_stack_4->SetBinError(25,1.975227);
   houtFV_stack_4->SetBinError(26,2.727805);
   houtFV_stack_4->SetBinError(27,0.9471097);
   houtFV_stack_4->SetEntries(1382);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.24189);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.739354);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7944901);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8358399);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.03214);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3068998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9889579);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6124718);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5287719);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8232222);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.198708);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.547462);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4152364);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3047819);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3285446);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2882649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3749275);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.09253378);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3067967);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2100249);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2043899);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3577516);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3549294);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4560364);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.445904);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2422936);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.06238626);
   hNCpi0inFVqe_stack_6->SetEntries(55);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.088207);
   hNCpi0inFVres_stack_7->SetBinContent(2,17.63586);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.28037);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.3252);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.89067);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.787124);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.08174);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.25355);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.242662);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.898957);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.127733);
   hNCpi0inFVres_stack_7->SetBinContent(12,9.453156);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.050602);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.721268);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.215921);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.656169);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.241662);
   hNCpi0inFVres_stack_7->SetBinContent(18,8.462693);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.24931);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.552465);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.01606);
   hNCpi0inFVres_stack_7->SetBinContent(22,13.63718);
   hNCpi0inFVres_stack_7->SetBinContent(23,17.7684);
   hNCpi0inFVres_stack_7->SetBinContent(24,17.84492);
   hNCpi0inFVres_stack_7->SetBinContent(25,19.21421);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.37493);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9083304);
   hNCpi0inFVres_stack_7->SetBinError(2,1.367918);
   hNCpi0inFVres_stack_7->SetBinError(3,1.261593);
   hNCpi0inFVres_stack_7->SetBinError(4,1.096187);
   hNCpi0inFVres_stack_7->SetBinError(5,1.05561);
   hNCpi0inFVres_stack_7->SetBinError(6,1.00276);
   hNCpi0inFVres_stack_7->SetBinError(7,1.060424);
   hNCpi0inFVres_stack_7->SetBinError(8,1.140929);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9765422);
   hNCpi0inFVres_stack_7->SetBinError(10,0.780957);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9345888);
   hNCpi0inFVres_stack_7->SetBinError(12,1.007697);
   hNCpi0inFVres_stack_7->SetBinError(13,1.017818);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8216767);
   hNCpi0inFVres_stack_7->SetBinError(15,0.945046);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9217991);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9495312);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8780818);
   hNCpi0inFVres_stack_7->SetBinError(19,1.077928);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9921927);
   hNCpi0inFVres_stack_7->SetBinError(21,1.075789);
   hNCpi0inFVres_stack_7->SetBinError(22,1.230356);
   hNCpi0inFVres_stack_7->SetBinError(23,1.422001);
   hNCpi0inFVres_stack_7->SetBinError(24,1.27573);
   hNCpi0inFVres_stack_7->SetBinError(25,1.4462);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8978795);
   hNCpi0inFVres_stack_7->SetBinError(27,0.04832419);
   hNCpi0inFVres_stack_7->SetEntries(5331);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.45388);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.02957);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.877452);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.055566);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.870556);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.300762);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.393008);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.25858);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.854194);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.454216);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.812844);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.356898);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.733384);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.85353);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.60783);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.617208);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.938894);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.077394);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.453048);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.386294);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.638474);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.612902);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.252442);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.82606);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.796992);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.85353);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4899121);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6080714);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6408965);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6326967);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5700237);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.478525);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2817776);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4843191);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4286872);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5527492);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4567469);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5441148);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5882811);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4441458);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5199112);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3710135);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4879888);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4358899);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4698379);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5501025);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6364784);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6552603);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6745285);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7627206);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7044006);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4441458);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(1,8.646314);
   hCCpi0inFV_stack_10->SetBinContent(2,18.77056);
   hCCpi0inFV_stack_10->SetBinContent(3,16.26871);
   hCCpi0inFV_stack_10->SetBinContent(4,11.21568);
   hCCpi0inFV_stack_10->SetBinContent(5,11.32492);
   hCCpi0inFV_stack_10->SetBinContent(6,12.70271);
   hCCpi0inFV_stack_10->SetBinContent(7,8.360844);
   hCCpi0inFV_stack_10->SetBinContent(8,8.650679);
   hCCpi0inFV_stack_10->SetBinContent(9,11.96994);
   hCCpi0inFV_stack_10->SetBinContent(10,12.06381);
   hCCpi0inFV_stack_10->SetBinContent(11,7.817425);
   hCCpi0inFV_stack_10->SetBinContent(12,9.510138);
   hCCpi0inFV_stack_10->SetBinContent(13,7.929003);
   hCCpi0inFV_stack_10->SetBinContent(14,11.58719);
   hCCpi0inFV_stack_10->SetBinContent(15,9.973764);
   hCCpi0inFV_stack_10->SetBinContent(16,11.39019);
   hCCpi0inFV_stack_10->SetBinContent(17,10.50373);
   hCCpi0inFV_stack_10->SetBinContent(18,14.86051);
   hCCpi0inFV_stack_10->SetBinContent(19,10.01894);
   hCCpi0inFV_stack_10->SetBinContent(20,12.59455);
   hCCpi0inFV_stack_10->SetBinContent(21,12.72225);
   hCCpi0inFV_stack_10->SetBinContent(22,13.5898);
   hCCpi0inFV_stack_10->SetBinContent(23,17.19444);
   hCCpi0inFV_stack_10->SetBinContent(24,22.83126);
   hCCpi0inFV_stack_10->SetBinContent(25,17.83101);
   hCCpi0inFV_stack_10->SetBinContent(26,8.570814);
   hCCpi0inFV_stack_10->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,1.49501);
   hCCpi0inFV_stack_10->SetBinError(2,2.177624);
   hCCpi0inFV_stack_10->SetBinError(3,2.030178);
   hCCpi0inFV_stack_10->SetBinError(4,1.69999);
   hCCpi0inFV_stack_10->SetBinError(5,1.693227);
   hCCpi0inFV_stack_10->SetBinError(6,1.809982);
   hCCpi0inFV_stack_10->SetBinError(7,1.344235);
   hCCpi0inFV_stack_10->SetBinError(8,1.536096);
   hCCpi0inFV_stack_10->SetBinError(9,1.712645);
   hCCpi0inFV_stack_10->SetBinError(10,1.750164);
   hCCpi0inFV_stack_10->SetBinError(11,1.3873);
   hCCpi0inFV_stack_10->SetBinError(12,1.589129);
   hCCpi0inFV_stack_10->SetBinError(13,1.360123);
   hCCpi0inFV_stack_10->SetBinError(14,1.75718);
   hCCpi0inFV_stack_10->SetBinError(15,1.640611);
   hCCpi0inFV_stack_10->SetBinError(16,1.665184);
   hCCpi0inFV_stack_10->SetBinError(17,1.686181);
   hCCpi0inFV_stack_10->SetBinError(18,1.954893);
   hCCpi0inFV_stack_10->SetBinError(19,1.627156);
   hCCpi0inFV_stack_10->SetBinError(20,1.781498);
   hCCpi0inFV_stack_10->SetBinError(21,1.799814);
   hCCpi0inFV_stack_10->SetBinError(22,1.826585);
   hCCpi0inFV_stack_10->SetBinError(23,2.082888);
   hCCpi0inFV_stack_10->SetBinError(24,2.399226);
   hCCpi0inFV_stack_10->SetBinError(25,2.118019);
   hCCpi0inFV_stack_10->SetBinError(26,1.524752);
   hCCpi0inFV_stack_10->SetEntries(1354);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,1.855576);
   hNCinFV_stack_11->SetBinContent(2,5.375084);
   hNCinFV_stack_11->SetBinContent(3,5.174987);
   hNCinFV_stack_11->SetBinContent(4,3.127768);
   hNCinFV_stack_11->SetBinContent(5,2.247316);
   hNCinFV_stack_11->SetBinContent(6,1.662242);
   hNCinFV_stack_11->SetBinContent(7,0.8770706);
   hNCinFV_stack_11->SetBinContent(8,1.715495);
   hNCinFV_stack_11->SetBinContent(9,2.784209);
   hNCinFV_stack_11->SetBinContent(10,1.807394);
   hNCinFV_stack_11->SetBinContent(11,2.982615);
   hNCinFV_stack_11->SetBinContent(12,2.340906);
   hNCinFV_stack_11->SetBinContent(13,2.679393);
   hNCinFV_stack_11->SetBinContent(14,1.570342);
   hNCinFV_stack_11->SetBinContent(15,1.073786);
   hNCinFV_stack_11->SetBinContent(16,2.053982);
   hNCinFV_stack_11->SetBinContent(17,2.444031);
   hNCinFV_stack_11->SetBinContent(18,3.406699);
   hNCinFV_stack_11->SetBinContent(19,0.7302274);
   hNCinFV_stack_11->SetBinContent(20,2.050601);
   hNCinFV_stack_11->SetBinContent(21,3.769477);
   hNCinFV_stack_11->SetBinContent(22,3.17933);
   hNCinFV_stack_11->SetBinContent(23,4.588223);
   hNCinFV_stack_11->SetBinContent(24,4.589913);
   hNCinFV_stack_11->SetBinContent(25,7.0709);
   hNCinFV_stack_11->SetBinContent(26,2.30395);
   hNCinFV_stack_11->SetBinError(1,0.6794384);
   hNCinFV_stack_11->SetBinError(2,1.16112);
   hNCinFV_stack_11->SetBinError(3,1.143756);
   hNCinFV_stack_11->SetBinError(4,0.8999062);
   hNCinFV_stack_11->SetBinError(5,0.7337357);
   hNCinFV_stack_11->SetBinError(6,0.6513556);
   hNCinFV_stack_11->SetBinError(7,0.5197486);
   hNCinFV_stack_11->SetBinError(8,0.6212384);
   hNCinFV_stack_11->SetBinError(9,0.8323376);
   hNCinFV_stack_11->SetBinError(10,0.7084844);
   hNCinFV_stack_11->SetBinError(11,0.8556548);
   hNCinFV_stack_11->SetBinError(12,0.8093475);
   hNCinFV_stack_11->SetBinError(13,0.8775546);
   hNCinFV_stack_11->SetBinError(14,0.5552036);
   hNCinFV_stack_11->SetBinError(15,0.5557297);
   hNCinFV_stack_11->SetBinError(16,0.7078105);
   hNCinFV_stack_11->SetBinError(17,0.759648);
   hNCinFV_stack_11->SetBinError(18,1.001872);
   hNCinFV_stack_11->SetBinError(19,0.4379386);
   hNCinFV_stack_11->SetBinError(20,0.7068742);
   hNCinFV_stack_11->SetBinError(21,0.9417711);
   hNCinFV_stack_11->SetBinError(22,0.8779761);
   hNCinFV_stack_11->SetBinError(23,1.092434);
   hNCinFV_stack_11->SetBinError(24,1.092737);
   hNCinFV_stack_11->SetBinError(25,1.387378);
   hNCinFV_stack_11->SetBinError(26,0.7080718);
   hNCinFV_stack_11->SetEntries(310);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,5.715068);
   hnumuCCinFV_stack_12->SetBinContent(2,8.262755);
   hnumuCCinFV_stack_12->SetBinContent(3,4.561122);
   hnumuCCinFV_stack_12->SetBinContent(4,4.776915);
   hnumuCCinFV_stack_12->SetBinContent(5,6.441883);
   hnumuCCinFV_stack_12->SetBinContent(6,4.147947);
   hnumuCCinFV_stack_12->SetBinContent(7,5.839872);
   hnumuCCinFV_stack_12->SetBinContent(8,5.122336);
   hnumuCCinFV_stack_12->SetBinContent(9,3.123563);
   hnumuCCinFV_stack_12->SetBinContent(10,5.437924);
   hnumuCCinFV_stack_12->SetBinContent(11,6.740748);
   hnumuCCinFV_stack_12->SetBinContent(12,5.860223);
   hnumuCCinFV_stack_12->SetBinContent(13,7.041726);
   hnumuCCinFV_stack_12->SetBinContent(14,6.851802);
   hnumuCCinFV_stack_12->SetBinContent(15,8.00237);
   hnumuCCinFV_stack_12->SetBinContent(16,8.421267);
   hnumuCCinFV_stack_12->SetBinContent(17,8.361408);
   hnumuCCinFV_stack_12->SetBinContent(18,7.272975);
   hnumuCCinFV_stack_12->SetBinContent(19,11.31979);
   hnumuCCinFV_stack_12->SetBinContent(20,10.02487);
   hnumuCCinFV_stack_12->SetBinContent(21,13.57491);
   hnumuCCinFV_stack_12->SetBinContent(22,16.71055);
   hnumuCCinFV_stack_12->SetBinContent(23,18.47991);
   hnumuCCinFV_stack_12->SetBinContent(24,13.85841);
   hnumuCCinFV_stack_12->SetBinContent(25,11.64651);
   hnumuCCinFV_stack_12->SetBinContent(26,6.493748);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,1.267781);
   hnumuCCinFV_stack_12->SetBinError(2,1.438731);
   hnumuCCinFV_stack_12->SetBinError(3,1.125003);
   hnumuCCinFV_stack_12->SetBinError(4,1.094793);
   hnumuCCinFV_stack_12->SetBinError(5,1.34187);
   hnumuCCinFV_stack_12->SetBinError(6,1.040482);
   hnumuCCinFV_stack_12->SetBinError(7,1.537556);
   hnumuCCinFV_stack_12->SetBinError(8,1.170659);
   hnumuCCinFV_stack_12->SetBinError(9,0.8825114);
   hnumuCCinFV_stack_12->SetBinError(10,1.212166);
   hnumuCCinFV_stack_12->SetBinError(11,1.439555);
   hnumuCCinFV_stack_12->SetBinError(12,1.431555);
   hnumuCCinFV_stack_12->SetBinError(13,1.516802);
   hnumuCCinFV_stack_12->SetBinError(14,1.353759);
   hnumuCCinFV_stack_12->SetBinError(15,1.576177);
   hnumuCCinFV_stack_12->SetBinError(16,1.955514);
   hnumuCCinFV_stack_12->SetBinError(17,1.428344);
   hnumuCCinFV_stack_12->SetBinError(18,1.4335);
   hnumuCCinFV_stack_12->SetBinError(19,1.763222);
   hnumuCCinFV_stack_12->SetBinError(20,2.038241);
   hnumuCCinFV_stack_12->SetBinError(21,2.012119);
   hnumuCCinFV_stack_12->SetBinError(22,2.974531);
   hnumuCCinFV_stack_12->SetBinError(23,3.094181);
   hnumuCCinFV_stack_12->SetBinError(24,2.357762);
   hnumuCCinFV_stack_12->SetBinError(25,1.831686);
   hnumuCCinFV_stack_12->SetBinError(26,1.326854);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(833);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(3,0.6679537);
   hnueCCinFV_stack_13->SetBinContent(4,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.901122);
   hnueCCinFV_stack_13->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(8,0.4432483);
   hnueCCinFV_stack_13->SetBinContent(9,0.4228751);
   hnueCCinFV_stack_13->SetBinContent(10,1.157431);
   hnueCCinFV_stack_13->SetBinContent(11,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.6278813);
   hnueCCinFV_stack_13->SetBinContent(18,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.5959703);
   hnueCCinFV_stack_13->SetBinContent(23,1.961426);
   hnueCCinFV_stack_13->SetBinContent(25,0.9528184);
   hnueCCinFV_stack_13->SetBinError(3,0.4744012);
   hnueCCinFV_stack_13->SetBinError(4,0.3172361);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.5694605);
   hnueCCinFV_stack_13->SetBinError(7,0.2781975);
   hnueCCinFV_stack_13->SetBinError(8,0.3134667);
   hnueCCinFV_stack_13->SetBinError(9,0.2997418);
   hnueCCinFV_stack_13->SetBinError(10,1.157431);
   hnueCCinFV_stack_13->SetBinError(11,0.2331833);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.7431478);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.4877217);
   hnueCCinFV_stack_13->SetBinError(18,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,0.4494399);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.3503734);
   hnueCCinFV_stack_13->SetBinError(23,1.59394);
   hnueCCinFV_stack_13->SetBinError(25,0.4910883);
   hnueCCinFV_stack_13->SetEntries(36);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__8->SetBinContent(0,4.545519);
   hmcerror__8->SetBinContent(1,84.1675);
   hmcerror__8->SetBinContent(2,82.12436);
   hmcerror__8->SetBinContent(3,75.7634);
   hmcerror__8->SetBinContent(4,56.60652);
   hmcerror__8->SetBinContent(5,52.00154);
   hmcerror__8->SetBinContent(6,49.11271);
   hmcerror__8->SetBinContent(7,41.82336);
   hmcerror__8->SetBinContent(8,46.6302);
   hmcerror__8->SetBinContent(9,42.48187);
   hmcerror__8->SetBinContent(10,50.12535);
   hmcerror__8->SetBinContent(11,44.57386);
   hmcerror__8->SetBinContent(12,51.29427);
   hmcerror__8->SetBinContent(13,51.14243);
   hmcerror__8->SetBinContent(14,47.77893);
   hmcerror__8->SetBinContent(15,46.31408);
   hmcerror__8->SetBinContent(16,52.80807);
   hmcerror__8->SetBinContent(17,55.80871);
   hmcerror__8->SetBinContent(18,64.08675);
   hmcerror__8->SetBinContent(19,52.21668);
   hmcerror__8->SetBinContent(20,60.01783);
   hmcerror__8->SetBinContent(21,69.47592);
   hmcerror__8->SetBinContent(22,78.31556);
   hmcerror__8->SetBinContent(23,99.78709);
   hmcerror__8->SetBinContent(24,101.7784);
   hmcerror__8->SetBinContent(25,98.92117);
   hmcerror__8->SetBinContent(26,70.82404);
   hmcerror__8->SetBinContent(27,4.267219);
   hmcerror__8->SetBinError(0,1.144797);
   hmcerror__8->SetBinError(1,25.77977);
   hmcerror__8->SetBinError(2,31.56574);
   hmcerror__8->SetBinError(3,21.49097);
   hmcerror__8->SetBinError(4,19.82686);
   hmcerror__8->SetBinError(5,23.17873);
   hmcerror__8->SetBinError(6,15.21525);
   hmcerror__8->SetBinError(7,16.60972);
   hmcerror__8->SetBinError(8,17.29721);
   hmcerror__8->SetBinError(9,14.97729);
   hmcerror__8->SetBinError(10,19.16973);
   hmcerror__8->SetBinError(11,12.50581);
   hmcerror__8->SetBinError(12,18.42541);
   hmcerror__8->SetBinError(13,15.77839);
   hmcerror__8->SetBinError(14,15.95469);
   hmcerror__8->SetBinError(15,17.04627);
   hmcerror__8->SetBinError(16,15.31682);
   hmcerror__8->SetBinError(17,23.85865);
   hmcerror__8->SetBinError(18,20.15328);
   hmcerror__8->SetBinError(19,21.93525);
   hmcerror__8->SetBinError(20,18.88449);
   hmcerror__8->SetBinError(21,25.28552);
   hmcerror__8->SetBinError(22,21.36199);
   hmcerror__8->SetBinError(23,36.17323);
   hmcerror__8->SetBinError(24,27.92556);
   hmcerror__8->SetBinError(25,25.91747);
   hmcerror__8->SetBinError(26,25.62115);
   hmcerror__8->SetBinError(27,5.107675);
   hmcerror__8->SetEntries(1602.903);

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
   
   Double_t _fx3009[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3009[26] = {
   78,
   77,
   65,
   55,
   47,
   40,
   51,
   46,
   43,
   38,
   43,
   47,
   49,
   43,
   42,
   45,
   47,
   46,
   53,
   58,
   72,
   66,
   74,
   84,
   94,
   60};
   Double_t _felx3009[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3009[26] = {
   8.9562,
   8.8995,
   8.1893,
   7.546,
   6.9882,
   6.4604,
   7.2725,
   6.9153,
   6.6917,
   6.3013,
   6.6917,
   6.9882,
   7.1318,
   6.6917,
   6.6155,
   6.8416,
   6.9882,
   6.9153,
   7.4105,
   7.7446,
   8.6108,
   8.2509,
   8.7275,
   9.2886,
   9.8173,
   7.8743};
   Double_t _fehx3009[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3009[26] = {
   8.7542,
   8.6976,
   7.9866,
   7.3425,
   6.7839,
   6.2549,
   7.0686,
   6.7108,
   6.4868,
   6.0955,
   6.4868,
   6.7839,
   6.9277,
   6.4868,
   6.4104,
   6.637,
   6.7839,
   6.7108,
   7.2068,
   7.5415,
   8.4085,
   8.0483,
   8.5253,
   9.0869,
   9.616,
   7.6713};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,286);
   Graph_Graph3009->SetMinimum(24.50697);
   Graph_Graph3009->SetMaximum(110.8077);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1463.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 235.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 318.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 318.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3010[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3010[26] = {
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
   1,
   1};
   Double_t _felx3010[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3010[26] = {
   0.3062913,
   0.3843651,
   0.283659,
   0.3502575,
   0.4457317,
   0.3098027,
   0.3971397,
   0.3709444,
   0.3525573,
   0.3824358,
   0.2805638,
   0.3592099,
   0.3085187,
   0.3339272,
   0.3680581,
   0.290047,
   0.4275076,
   0.3144688,
   0.4200812,
   0.314648,
   0.3639466,
   0.2727682,
   0.3625041,
   0.2743761,
   0.2620013,
   0.3617579};
   Double_t _fehx3010[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3010[26] = {
   0.3062913,
   0.3843651,
   0.283659,
   0.3502575,
   0.4457317,
   0.3098027,
   0.3971397,
   0.3709444,
   0.3525573,
   0.3824358,
   0.2805638,
   0.3592099,
   0.3085187,
   0.3339272,
   0.3680581,
   0.290047,
   0.4275076,
   0.3144688,
   0.4200812,
   0.314648,
   0.3639466,
   0.2727682,
   0.3625041,
   0.2743761,
   0.2620013,
   0.3617579};
   grae = new TGraphAsymmErrors(26,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,286);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3011[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3011[26] = {
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
   1,
   1};
   Double_t _felx3011[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3011[26] = {
   0.1878581,
   0.1917707,
   0.2048011,
   0.1918336,
   0.2050111,
   0.1908189,
   0.2061844,
   0.2043749,
   0.1903825,
   0.2003269,
   0.1788345,
   0.167665,
   0.1802489,
   0.1847618,
   0.1888473,
   0.1769566,
   0.1777261,
   0.1704376,
   0.2078095,
   0.1881321,
   0.1747349,
   0.1709876,
   0.1796768,
   0.1806977,
   0.1714857,
   0.190876};
   Double_t _fehx3011[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3011[26] = {
   0.1878581,
   0.1917707,
   0.2048011,
   0.1918336,
   0.2050111,
   0.1908189,
   0.2061844,
   0.2043749,
   0.1903825,
   0.2003269,
   0.1788345,
   0.167665,
   0.1802489,
   0.1847618,
   0.1888473,
   0.1769566,
   0.1777261,
   0.1704376,
   0.2078095,
   0.1881321,
   0.1747349,
   0.1709876,
   0.1796768,
   0.1806977,
   0.1714857,
   0.190876};
   grae = new TGraphAsymmErrors(26,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,286);
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
   
   Double_t _fx3012[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3012[26] = {
   0.9267235,
   0.9376024,
   0.8579341,
   0.9716195,
   0.9038194,
   0.8144532,
   1.219414,
   0.9864851,
   1.012197,
   0.7580994,
   0.9646909,
   0.9162818,
   0.9581086,
   0.8999783,
   0.9068517,
   0.8521425,
   0.8421625,
   0.7177771,
   1.015001,
   0.9663794,
   1.03633,
   0.8427444,
   0.7415789,
   0.8253224,
   0.9502516,
   0.84717};
   Double_t _felx3012[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3012[26] = {
   0.1064092,
   0.1083661,
   0.1080905,
   0.1333062,
   0.1343845,
   0.1315423,
   0.1738861,
   0.1483009,
   0.157519,
   0.1257108,
   0.1501261,
   0.1362375,
   0.1394498,
   0.1400555,
   0.1428399,
   0.129556,
   0.125217,
   0.1079053,
   0.1419182,
   0.1290383,
   0.1239393,
   0.1053545,
   0.08746121,
   0.09126298,
   0.09924368,
   0.1111812};
   Double_t _fehx3012[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3012[26] = {
   0.1040093,
   0.1059077,
   0.105415,
   0.1297112,
   0.1304558,
   0.1273581,
   0.1690108,
   0.1439153,
   0.1526957,
   0.1216051,
   0.1455292,
   0.1322545,
   0.135459,
   0.135767,
   0.1384115,
   0.1256815,
   0.1215563,
   0.1047143,
   0.1380172,
   0.1256543,
   0.1210275,
   0.1027676,
   0.0854349,
   0.08928122,
   0.09720872,
   0.1083149};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,286);
   Graph_Graph3012->SetMinimum(0.5320165);
   Graph_Graph3012->SetMaximum(1.46628);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

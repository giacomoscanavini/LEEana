#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Jun  5 00:41:47 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-153.8462,-26.82429,1128.205,2966.202);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__10->SetBinContent(0,112.7302);
   hmc__10->SetBinContent(1,1341.214);
   hmc__10->SetBinContent(2,673.3325);
   hmc__10->SetBinContent(3,478.6003);
   hmc__10->SetBinContent(4,362.7532);
   hmc__10->SetBinContent(5,264.8349);
   hmc__10->SetBinContent(6,183.3184);
   hmc__10->SetBinContent(7,124.9555);
   hmc__10->SetBinContent(8,83.02348);
   hmc__10->SetBinContent(9,47.9101);
   hmc__10->SetBinContent(10,37.68557);
   hmc__10->SetBinContent(11,31.69153);
   hmc__10->SetBinContent(12,16.43953);
   hmc__10->SetBinContent(13,9.527452);
   hmc__10->SetBinContent(14,10.83387);
   hmc__10->SetBinContent(15,9.835186);
   hmc__10->SetBinContent(16,32.31501);
   hmc__10->SetBinError(0,6.122831);
   hmc__10->SetBinError(1,281.5821);
   hmc__10->SetBinError(2,133.18);
   hmc__10->SetBinError(3,98.47968);
   hmc__10->SetBinError(4,80.3872);
   hmc__10->SetBinError(5,56.26277);
   hmc__10->SetBinError(6,37.97846);
   hmc__10->SetBinError(7,29.87912);
   hmc__10->SetBinError(8,19.88491);
   hmc__10->SetBinError(9,14.67937);
   hmc__10->SetBinError(10,15.96101);
   hmc__10->SetBinError(11,13.69876);
   hmc__10->SetBinError(12,6.305866);
   hmc__10->SetBinError(13,5.364302);
   hmc__10->SetBinError(14,11.15491);
   hmc__10->SetBinError(15,7.062222);
   hmc__10->SetBinError(16,11.46849);
   hmc__10->SetMinimum(-26.82429);
   hmc__10->SetMaximum(2816.55);
   hmc__10->SetEntries(3775.136);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",15,0,1000);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(1408.275);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(0,2.365465);
   hbadmatch_stack_1->SetBinContent(1,25.64981);
   hbadmatch_stack_1->SetBinContent(2,14.82128);
   hbadmatch_stack_1->SetBinContent(3,11.50605);
   hbadmatch_stack_1->SetBinContent(4,12.31002);
   hbadmatch_stack_1->SetBinContent(5,9.348162);
   hbadmatch_stack_1->SetBinContent(6,8.413423);
   hbadmatch_stack_1->SetBinContent(7,6.025669);
   hbadmatch_stack_1->SetBinContent(8,1.608988);
   hbadmatch_stack_1->SetBinContent(9,1.489511);
   hbadmatch_stack_1->SetBinContent(10,0.7868615);
   hbadmatch_stack_1->SetBinContent(11,2.10953);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(13,0.4357758);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,1.545923);
   hbadmatch_stack_1->SetBinError(0,0.8845709);
   hbadmatch_stack_1->SetBinError(1,3.078545);
   hbadmatch_stack_1->SetBinError(2,2.036805);
   hbadmatch_stack_1->SetBinError(3,1.96294);
   hbadmatch_stack_1->SetBinError(4,2.06698);
   hbadmatch_stack_1->SetBinError(5,1.506336);
   hbadmatch_stack_1->SetBinError(6,2.139933);
   hbadmatch_stack_1->SetBinError(7,1.349319);
   hbadmatch_stack_1->SetBinError(8,0.6801404);
   hbadmatch_stack_1->SetBinError(9,0.6289506);
   hbadmatch_stack_1->SetBinError(10,0.3934307);
   hbadmatch_stack_1->SetBinError(11,0.7365817);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(13,0.3095914);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.5988025);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1476;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,50.71433);
   hext_stack_2->SetBinContent(1,149.0895);
   hext_stack_2->SetBinContent(2,83.57603);
   hext_stack_2->SetBinContent(3,61.69647);
   hext_stack_2->SetBinContent(4,38.49772);
   hext_stack_2->SetBinContent(5,19.38214);
   hext_stack_2->SetBinContent(6,25.92243);
   hext_stack_2->SetBinContent(7,10.63337);
   hext_stack_2->SetBinContent(8,8.247252);
   hext_stack_2->SetBinContent(9,5.654845);
   hext_stack_2->SetBinContent(10,3.166181);
   hext_stack_2->SetBinContent(11,4.93821);
   hext_stack_2->SetBinContent(12,4.028449);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,1.048213);
   hext_stack_2->SetBinContent(15,1.950793);
   hext_stack_2->SetBinContent(16,8.250023);
   hext_stack_2->SetBinError(0,4.964344);
   hext_stack_2->SetBinError(1,8.358987);
   hext_stack_2->SetBinError(2,6.122861);
   hext_stack_2->SetBinError(3,5.160806);
   hext_stack_2->SetBinError(4,4.158303);
   hext_stack_2->SetBinError(5,2.744658);
   hext_stack_2->SetBinError(6,3.363106);
   hext_stack_2->SetBinError(7,2.038213);
   hext_stack_2->SetBinError(8,2.006806);
   hext_stack_2->SetBinError(9,1.687921);
   hext_stack_2->SetBinError(10,1.061777);
   hext_stack_2->SetBinError(11,1.475167);
   hext_stack_2->SetBinError(12,1.479117);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.7595995);
   hext_stack_2->SetBinError(15,0.8755137);
   hext_stack_2->SetBinError(16,1.921184);
   hext_stack_2->SetEntries(1136);

   ci = 1477;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(0,1.112764);
   hdirt_stack_3->SetBinContent(1,21.3507);
   hdirt_stack_3->SetBinContent(2,12.45166);
   hdirt_stack_3->SetBinContent(3,8.537446);
   hdirt_stack_3->SetBinContent(4,4.17735);
   hdirt_stack_3->SetBinContent(5,3.338416);
   hdirt_stack_3->SetBinContent(6,1.713172);
   hdirt_stack_3->SetBinContent(7,1.792272);
   hdirt_stack_3->SetBinContent(8,1.033342);
   hdirt_stack_3->SetBinContent(9,0.2863297);
   hdirt_stack_3->SetBinContent(10,0.7319759);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.3895662);
   hdirt_stack_3->SetBinError(0,0.541316);
   hdirt_stack_3->SetBinError(1,2.478844);
   hdirt_stack_3->SetBinError(2,1.8053);
   hdirt_stack_3->SetBinError(3,1.938469);
   hdirt_stack_3->SetBinError(4,1.044182);
   hdirt_stack_3->SetBinError(5,0.928484);
   hdirt_stack_3->SetBinError(6,0.6542926);
   hdirt_stack_3->SetBinError(7,0.7166089);
   hdirt_stack_3->SetBinError(8,0.5438016);
   hdirt_stack_3->SetBinError(9,0.2025938);
   hdirt_stack_3->SetBinError(10,0.5190762);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(14,0.3895662);
   hdirt_stack_3->SetEntries(238);

   ci = 1478;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,7.235731);
   houtFV_stack_4->SetBinContent(1,178.435);
   houtFV_stack_4->SetBinContent(2,107.0216);
   houtFV_stack_4->SetBinContent(3,68.58409);
   houtFV_stack_4->SetBinContent(4,48.08925);
   houtFV_stack_4->SetBinContent(5,32.29082);
   houtFV_stack_4->SetBinContent(6,23.63581);
   houtFV_stack_4->SetBinContent(7,12.28032);
   houtFV_stack_4->SetBinContent(8,10.30753);
   houtFV_stack_4->SetBinContent(9,4.2342);
   houtFV_stack_4->SetBinContent(10,4.949636);
   houtFV_stack_4->SetBinContent(11,4.040104);
   houtFV_stack_4->SetBinContent(12,0.9801958);
   houtFV_stack_4->SetBinContent(13,0.8004072);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,1.072095);
   houtFV_stack_4->SetBinContent(16,1.513708);
   houtFV_stack_4->SetBinError(0,1.34604);
   houtFV_stack_4->SetBinError(1,6.681114);
   houtFV_stack_4->SetBinError(2,5.149267);
   houtFV_stack_4->SetBinError(3,4.353203);
   houtFV_stack_4->SetBinError(4,3.574832);
   houtFV_stack_4->SetBinError(5,2.895374);
   houtFV_stack_4->SetBinError(6,2.41921);
   houtFV_stack_4->SetBinError(7,1.819839);
   houtFV_stack_4->SetBinError(8,1.631352);
   houtFV_stack_4->SetBinError(9,1.02862);
   houtFV_stack_4->SetBinError(10,1.086123);
   houtFV_stack_4->SetBinError(11,1.110399);
   houtFV_stack_4->SetBinError(12,0.4383608);
   houtFV_stack_4->SetBinError(13,0.4929743);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetBinError(15,0.5551335);
   houtFV_stack_4->SetBinError(16,0.5875827);
   houtFV_stack_4->SetEntries(2163);

   ci = 1479;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,2.188994);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,62.37171);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,14.81894);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,8.351598);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.6619);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.399576);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.20278);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.8507857);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.823054);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.439447);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.629121);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.247217);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9306937);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8153768);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4941968);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4827092);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2514891);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3085891);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.003334);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.505608);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8780218);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.682722);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6383611);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3667934);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2784203);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2684567);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,21.59784);
   hNCpi0inFVres_stack_7->SetBinContent(1,578.7705);
   hNCpi0inFVres_stack_7->SetBinContent(2,249.0856);
   hNCpi0inFVres_stack_7->SetBinContent(3,162.5359);
   hNCpi0inFVres_stack_7->SetBinContent(4,108.8701);
   hNCpi0inFVres_stack_7->SetBinContent(5,68.93902);
   hNCpi0inFVres_stack_7->SetBinContent(6,37.52148);
   hNCpi0inFVres_stack_7->SetBinContent(7,24.86248);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.00986);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.03124);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.228614);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.556606);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.99303);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.422076);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.10139);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.6689357);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.548958);
   hNCpi0inFVres_stack_7->SetBinError(0,1.517745);
   hNCpi0inFVres_stack_7->SetBinError(1,7.814244);
   hNCpi0inFVres_stack_7->SetBinError(2,5.131446);
   hNCpi0inFVres_stack_7->SetBinError(3,4.144846);
   hNCpi0inFVres_stack_7->SetBinError(4,3.460967);
   hNCpi0inFVres_stack_7->SetBinError(5,2.72261);
   hNCpi0inFVres_stack_7->SetBinError(6,1.940003);
   hNCpi0inFVres_stack_7->SetBinError(7,1.613899);
   hNCpi0inFVres_stack_7->SetBinError(8,1.345085);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8594901);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7491619);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6885208);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4485059);
   hNCpi0inFVres_stack_7->SetBinError(13,0.406154);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3413269);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1793726);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4623231);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1482;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,2.953088);
   hNCpi0inFVdis_stack_8->SetBinContent(1,102.033);
   hNCpi0inFVdis_stack_8->SetBinContent(2,44.77468);
   hNCpi0inFVdis_stack_8->SetBinContent(3,31.3192);
   hNCpi0inFVdis_stack_8->SetBinContent(4,22.65721);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.83532);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.83238);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.309416);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.603188);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.849056);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.036876);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4184998);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8232222);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.142908);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.4924208);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.30817);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.127169);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.816161);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.521139);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.404628);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.027111);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.933686);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.704631);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6754418);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4838504);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1080562);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3577516);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3527294);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1483;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1484;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1485;
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
   hs4->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,8.175591);
   hCCpi0inFV_stack_11->SetBinContent(1,87.18195);
   hCCpi0inFV_stack_11->SetBinContent(2,83.91012);
   hCCpi0inFV_stack_11->SetBinContent(3,82.20455);
   hCCpi0inFV_stack_11->SetBinContent(4,86.06587);
   hCCpi0inFV_stack_11->SetBinContent(5,73.45035);
   hCCpi0inFV_stack_11->SetBinContent(6,51.36722);
   hCCpi0inFV_stack_11->SetBinContent(7,41.99207);
   hCCpi0inFV_stack_11->SetBinContent(8,30.48877);
   hCCpi0inFV_stack_11->SetBinContent(9,17.66677);
   hCCpi0inFV_stack_11->SetBinContent(10,16.54046);
   hCCpi0inFV_stack_11->SetBinContent(11,12.93178);
   hCCpi0inFV_stack_11->SetBinContent(12,5.770205);
   hCCpi0inFV_stack_11->SetBinContent(13,4.269179);
   hCCpi0inFV_stack_11->SetBinContent(14,6.638824);
   hCCpi0inFV_stack_11->SetBinContent(15,4.246354);
   hCCpi0inFV_stack_11->SetBinContent(16,14.097);
   hCCpi0inFV_stack_11->SetBinError(0,1.359772);
   hCCpi0inFV_stack_11->SetBinError(1,4.608985);
   hCCpi0inFV_stack_11->SetBinError(2,4.585432);
   hCCpi0inFV_stack_11->SetBinError(3,4.508209);
   hCCpi0inFV_stack_11->SetBinError(4,4.682686);
   hCCpi0inFV_stack_11->SetBinError(5,4.326723);
   hCCpi0inFV_stack_11->SetBinError(6,3.553264);
   hCCpi0inFV_stack_11->SetBinError(7,3.28743);
   hCCpi0inFV_stack_11->SetBinError(8,2.853462);
   hCCpi0inFV_stack_11->SetBinError(9,2.118056);
   hCCpi0inFV_stack_11->SetBinError(10,2.047828);
   hCCpi0inFV_stack_11->SetBinError(11,1.769136);
   hCCpi0inFV_stack_11->SetBinError(12,1.194259);
   hCCpi0inFV_stack_11->SetBinError(13,1.005217);
   hCCpi0inFV_stack_11->SetBinError(14,1.301185);
   hCCpi0inFV_stack_11->SetBinError(15,1.0378);
   hCCpi0inFV_stack_11->SetBinError(16,1.972631);
   hCCpi0inFV_stack_11->SetEntries(2680);

   ci = 1486;
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
   hs4->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(0,4.498013);
   hNCinFV_stack_12->SetBinContent(1,56.12255);
   hNCinFV_stack_12->SetBinContent(2,22.9754);
   hNCinFV_stack_12->SetBinContent(3,14.16148);
   hNCinFV_stack_12->SetBinContent(4,13.23466);
   hNCinFV_stack_12->SetBinContent(5,12.85402);
   hNCinFV_stack_12->SetBinContent(6,6.643895);
   hNCinFV_stack_12->SetBinContent(7,5.808851);
   hNCinFV_stack_12->SetBinContent(8,2.539312);
   hNCinFV_stack_12->SetBinContent(9,2.390778);
   hNCinFV_stack_12->SetBinContent(10,1.463836);
   hNCinFV_stack_12->SetBinContent(11,0.5884556);
   hNCinFV_stack_12->SetBinContent(12,0.1950248);
   hNCinFV_stack_12->SetBinContent(13,0.3917402);
   hNCinFV_stack_12->SetBinContent(14,0.3401776);
   hNCinFV_stack_12->SetBinContent(16,0.9286332);
   hNCinFV_stack_12->SetBinError(0,1.038297);
   hNCinFV_stack_12->SetBinError(1,3.806139);
   hNCinFV_stack_12->SetBinError(2,2.362988);
   hNCinFV_stack_12->SetBinError(3,1.912839);
   hNCinFV_stack_12->SetBinError(4,1.814008);
   hNCinFV_stack_12->SetBinError(5,1.777004);
   hNCinFV_stack_12->SetBinError(6,1.301948);
   hNCinFV_stack_12->SetBinError(7,1.257217);
   hNCinFV_stack_12->SetBinError(8,0.8333082);
   hNCinFV_stack_12->SetBinError(9,0.7844693);
   hNCinFV_stack_12->SetBinError(10,0.620407);
   hNCinFV_stack_12->SetBinError(11,0.3397478);
   hNCinFV_stack_12->SetBinError(12,0.1950249);
   hNCinFV_stack_12->SetBinError(13,0.2770047);
   hNCinFV_stack_12->SetBinError(14,0.3401776);
   hNCinFV_stack_12->SetBinError(16,0.48078);
   hNCinFV_stack_12->SetEntries(615);

   ci = 1487;
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
   hs4->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,11.43659);
   hnumuCCinFV_stack_13->SetBinContent(1,64.31638);
   hnumuCCinFV_stack_13->SetBinContent(2,31.53725);
   hnumuCCinFV_stack_13->SetBinContent(3,25.21532);
   hnumuCCinFV_stack_13->SetBinContent(4,20.79628);
   hnumuCCinFV_stack_13->SetBinContent(5,20.50563);
   hnumuCCinFV_stack_13->SetBinContent(6,13.78034);
   hnumuCCinFV_stack_13->SetBinContent(7,11.11977);
   hnumuCCinFV_stack_13->SetBinContent(8,6.103983);
   hnumuCCinFV_stack_13->SetBinContent(9,3.726486);
   hnumuCCinFV_stack_13->SetBinContent(10,1.407499);
   hnumuCCinFV_stack_13->SetBinContent(11,2.09191);
   hnumuCCinFV_stack_13->SetBinContent(12,2.504862);
   hnumuCCinFV_stack_13->SetBinContent(13,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(14,0.4329366);
   hnumuCCinFV_stack_13->SetBinContent(15,0.8770706);
   hnumuCCinFV_stack_13->SetBinContent(16,2.794565);
   hnumuCCinFV_stack_13->SetBinError(0,2.042552);
   hnumuCCinFV_stack_13->SetBinError(1,4.986644);
   hnumuCCinFV_stack_13->SetBinError(2,3.28241);
   hnumuCCinFV_stack_13->SetBinError(3,3.540653);
   hnumuCCinFV_stack_13->SetBinError(4,2.463074);
   hnumuCCinFV_stack_13->SetBinError(5,2.649354);
   hnumuCCinFV_stack_13->SetBinError(6,1.885723);
   hnumuCCinFV_stack_13->SetBinError(7,1.696003);
   hnumuCCinFV_stack_13->SetBinError(8,1.269319);
   hnumuCCinFV_stack_13->SetBinError(9,1.02918);
   hnumuCCinFV_stack_13->SetBinError(10,0.601323);
   hnumuCCinFV_stack_13->SetBinError(11,0.7701432);
   hnumuCCinFV_stack_13->SetBinError(12,1.103842);
   hnumuCCinFV_stack_13->SetBinError(13,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(14,0.3074043);
   hnumuCCinFV_stack_13->SetBinError(15,0.5197486);
   hnumuCCinFV_stack_13->SetBinError(16,1.322781);
   hnumuCCinFV_stack_13->SetEntries(846);

   ci = 1488;
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
   hs4->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(0,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(1,11.55512);
   hnueCCinFV_stack_14->SetBinContent(2,6.729114);
   hnueCCinFV_stack_14->SetBinContent(3,3.554322);
   hnueCCinFV_stack_14->SetBinContent(4,1.485983);
   hnueCCinFV_stack_14->SetBinContent(5,3.7808);
   hnueCCinFV_stack_14->SetBinContent(6,0.9505513);
   hnueCCinFV_stack_14->SetBinContent(7,1.140965);
   hnueCCinFV_stack_14->SetBinContent(8,1.034834);
   hnueCCinFV_stack_14->SetBinContent(9,0.2180157);
   hnueCCinFV_stack_14->SetBinContent(10,0.8989917);
   hnueCCinFV_stack_14->SetBinContent(13,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_14->SetBinError(0,0.3401776);
   hnueCCinFV_stack_14->SetBinError(1,2.212262);
   hnueCCinFV_stack_14->SetBinError(2,1.559474);
   hnueCCinFV_stack_14->SetBinError(3,0.985215);
   hnueCCinFV_stack_14->SetBinError(4,0.565842);
   hnueCCinFV_stack_14->SetBinError(5,1.913901);
   hnueCCinFV_stack_14->SetBinError(6,0.4902375);
   hnueCCinFV_stack_14->SetBinError(7,0.6324613);
   hnueCCinFV_stack_14->SetBinError(8,0.8621563);
   hnueCCinFV_stack_14->SetBinError(9,0.2180157);
   hnueCCinFV_stack_14->SetBinError(10,0.7304821);
   hnueCCinFV_stack_14->SetBinError(13,0.4531728);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(16,0.3401776);
   hnueCCinFV_stack_14->SetEntries(115);

   ci = 1489;
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
   hs4->Add(hnueCCinFV_stack_14,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__11->SetBinContent(0,112.7302);
   hmcerror__11->SetBinContent(1,1341.214);
   hmcerror__11->SetBinContent(2,673.3325);
   hmcerror__11->SetBinContent(3,478.6003);
   hmcerror__11->SetBinContent(4,362.7532);
   hmcerror__11->SetBinContent(5,264.8349);
   hmcerror__11->SetBinContent(6,183.3184);
   hmcerror__11->SetBinContent(7,124.9555);
   hmcerror__11->SetBinContent(8,83.02348);
   hmcerror__11->SetBinContent(9,47.9101);
   hmcerror__11->SetBinContent(10,37.68557);
   hmcerror__11->SetBinContent(11,31.69153);
   hmcerror__11->SetBinContent(12,16.43953);
   hmcerror__11->SetBinContent(13,9.527452);
   hmcerror__11->SetBinContent(14,10.83387);
   hmcerror__11->SetBinContent(15,9.835186);
   hmcerror__11->SetBinContent(16,32.31501);
   hmcerror__11->SetBinError(0,6.122831);
   hmcerror__11->SetBinError(1,281.5821);
   hmcerror__11->SetBinError(2,133.18);
   hmcerror__11->SetBinError(3,98.47968);
   hmcerror__11->SetBinError(4,80.3872);
   hmcerror__11->SetBinError(5,56.26277);
   hmcerror__11->SetBinError(6,37.97846);
   hmcerror__11->SetBinError(7,29.87912);
   hmcerror__11->SetBinError(8,19.88491);
   hmcerror__11->SetBinError(9,14.67937);
   hmcerror__11->SetBinError(10,15.96101);
   hmcerror__11->SetBinError(11,13.69876);
   hmcerror__11->SetBinError(12,6.305866);
   hmcerror__11->SetBinError(13,5.364302);
   hmcerror__11->SetBinError(14,11.15491);
   hmcerror__11->SetBinError(15,7.062222);
   hmcerror__11->SetBinError(16,11.46849);
   hmcerror__11->SetEntries(3775.136);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[15] = {
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
   Double_t _fy3013[15] = {
   1200,
   626,
   430,
   311,
   208,
   157,
   99,
   75,
   54,
   25,
   24,
   19,
   12,
   5,
   8};
   Double_t _felx3013[15] = {
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
   Double_t _fely3013[15] = {
   34.64102,
   25.01999,
   20.73644,
   17.63519,
   14.42221,
   12.52996,
   10.0712,
   8.7852,
   7.4785,
   5.1474,
   5.0476,
   4.5151,
   3.64022,
   2.48995,
   3.0307};
   Double_t _fehx3013[15] = {
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
   Double_t _fehy3013[15] = {
   34.64102,
   25.01999,
   20.73644,
   17.63519,
   14.42221,
   12.52996,
   9.87,
   8.5831,
   7.275,
   4.9374,
   4.837,
   4.3011,
   3.4155,
   2.21064,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1100);
   Graph_Graph3013->SetMinimum(2.259045);
   Graph_Graph3013->SetMaximum(1357.854);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.17","h");
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
   entry=leg->AddEntry("","BNB Data, 3253.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 95.0","F");

   ci = 1476;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 418.5","F");

   ci = 1477;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 55.9","F");

   ci = 1478;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 497.1","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.5","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.7","F");

   ci = 1481;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1268.6","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  251.6","F");

   ci = 1483;
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

   ci = 1484;
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

   ci = 1485;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 604.7","F");

   ci = 1486;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 139.7","F");

   ci = 1487;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 205.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 32.1","F");

   ci = 1489;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[15] = {
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
   Double_t _fy3014[15] = {
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
   Double_t _felx3014[15] = {
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
   Double_t _fely3014[15] = {
   0.2099456,
   0.1977923,
   0.205766,
   0.221603,
   0.2124447,
   0.2071721,
   0.2391181,
   0.2395094,
   0.306394,
   0.423531,
   0.432253,
   0.3835795,
   0.5630364,
   1.029632,
   0.7180568};
   Double_t _fehx3014[15] = {
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
   Double_t _fehy3014[15] = {
   0.2099456,
   0.1977923,
   0.205766,
   0.221603,
   0.2124447,
   0.2071721,
   0.2391181,
   0.2395094,
   0.306394,
   0.423531,
   0.432253,
   0.3835795,
   0.5630364,
   1.029632,
   0.7180568};
   grae = new TGraphAsymmErrors(15,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1100);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[15] = {
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
   Double_t _fy3015[15] = {
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
   Double_t _felx3015[15] = {
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
   Double_t _fely3015[15] = {
   0.1904806,
   0.1858932,
   0.1850022,
   0.1928601,
   0.1918001,
   0.1801847,
   0.1949516,
   0.1925456,
   0.1823126,
   0.2117819,
   0.2026485,
   0.2260773,
   0.2647948,
   0.2859499,
   0.2898332};
   Double_t _fehx3015[15] = {
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
   Double_t _fehy3015[15] = {
   0.1904806,
   0.1858932,
   0.1850022,
   0.1928601,
   0.1918001,
   0.1801847,
   0.1949516,
   0.1925456,
   0.1823126,
   0.2117819,
   0.2026485,
   0.2260773,
   0.2647948,
   0.2859499,
   0.2898332};
   grae = new TGraphAsymmErrors(15,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1100);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[15] = {
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
   Double_t _fy3016[15] = {
   0.8947115,
   0.9297041,
   0.8984533,
   0.8573323,
   0.7853951,
   0.8564332,
   0.7922823,
   0.903359,
   1.127111,
   0.6633839,
   0.7573002,
   1.155751,
   1.259518,
   0.4615156,
   0.8134061};
   Double_t _felx3016[15] = {
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
   Double_t _fely3016[15] = {
   0.0258281,
   0.03715845,
   0.04332727,
   0.04861485,
   0.05445735,
   0.06835081,
   0.08059831,
   0.1058159,
   0.1560945,
   0.1365881,
   0.1592728,
   0.274649,
   0.382077,
   0.2298301,
   0.3081487};
   Double_t _fehx3016[15] = {
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
   Double_t _fehy3016[15] = {
   0.0258281,
   0.03715845,
   0.04332727,
   0.04861485,
   0.05445735,
   0.06835081,
   0.07898814,
   0.1033816,
   0.1518469,
   0.1310157,
   0.1526275,
   0.2616316,
   0.3584904,
   0.204049,
   0.2836347};
   grae = new TGraphAsymmErrors(15,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1100);
   Graph_Graph3016->SetMinimum(0.09305309);
   Graph_Graph3016->SetMaximum(1.756641);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Oct 21 23:07:14 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
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
   pad1->Range(-40,-1.970701,293.3333,217.9181);
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
   hmc__7->SetBinContent(0,4.546377);
   hmc__7->SetBinContent(1,79.81056);
   hmc__7->SetBinContent(2,76.41872);
   hmc__7->SetBinContent(3,71.88081);
   hmc__7->SetBinContent(4,55.66412);
   hmc__7->SetBinContent(5,48.50188);
   hmc__7->SetBinContent(6,48.28433);
   hmc__7->SetBinContent(7,40.75069);
   hmc__7->SetBinContent(8,44.71371);
   hmc__7->SetBinContent(9,43.87184);
   hmc__7->SetBinContent(10,51.06879);
   hmc__7->SetBinContent(11,43.60755);
   hmc__7->SetBinContent(12,48.95454);
   hmc__7->SetBinContent(13,48.8223);
   hmc__7->SetBinContent(14,48.86599);
   hmc__7->SetBinContent(15,48.39312);
   hmc__7->SetBinContent(16,49.94073);
   hmc__7->SetBinContent(17,53.11688);
   hmc__7->SetBinContent(18,63.95892);
   hmc__7->SetBinContent(19,50.103);
   hmc__7->SetBinContent(20,56.35302);
   hmc__7->SetBinContent(21,70.20866);
   hmc__7->SetBinContent(22,77.20913);
   hmc__7->SetBinContent(23,97.24947);
   hmc__7->SetBinContent(24,98.28302);
   hmc__7->SetBinContent(25,98.53506);
   hmc__7->SetBinContent(26,70.8605);
   hmc__7->SetBinContent(27,4.179713);
   hmc__7->SetBinError(0,1.144944);
   hmc__7->SetBinError(1,25.62561);
   hmc__7->SetBinError(2,29.45308);
   hmc__7->SetBinError(3,21.32081);
   hmc__7->SetBinError(4,19.82167);
   hmc__7->SetBinError(5,21.30112);
   hmc__7->SetBinError(6,14.95858);
   hmc__7->SetBinError(7,15.94959);
   hmc__7->SetBinError(8,15.9294);
   hmc__7->SetBinError(9,15.01179);
   hmc__7->SetBinError(10,18.47704);
   hmc__7->SetBinError(11,12.44088);
   hmc__7->SetBinError(12,19.88381);
   hmc__7->SetBinError(13,15.22761);
   hmc__7->SetBinError(14,15.85821);
   hmc__7->SetBinError(15,16.97459);
   hmc__7->SetBinError(16,14.59613);
   hmc__7->SetBinError(17,24.32783);
   hmc__7->SetBinError(18,20.24504);
   hmc__7->SetBinError(19,20.17428);
   hmc__7->SetBinError(20,18.43997);
   hmc__7->SetBinError(21,24.9535);
   hmc__7->SetBinError(22,21.47023);
   hmc__7->SetBinError(23,36.81795);
   hmc__7->SetBinError(24,27.67164);
   hmc__7->SetBinError(25,25.90307);
   hmc__7->SetBinError(26,24.69677);
   hmc__7->SetBinError(27,4.655664);
   hmc__7->SetMinimum(-1.970701);
   hmc__7->SetMaximum(206.9236);
   hmc__7->SetEntries(1653.165);
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
   hs3_stack_3->SetMaximum(103.4618);
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
   hbadmatch_stack_1->SetBinContent(1,1.83971);
   hbadmatch_stack_1->SetBinContent(2,1.072095);
   hbadmatch_stack_1->SetBinContent(3,1.073072);
   hbadmatch_stack_1->SetBinContent(4,1.613771);
   hbadmatch_stack_1->SetBinContent(5,0.397972);
   hbadmatch_stack_1->SetBinContent(6,1.178967);
   hbadmatch_stack_1->SetBinContent(7,0.6927344);
   hbadmatch_stack_1->SetBinContent(8,1.763991);
   hbadmatch_stack_1->SetBinContent(9,1.380601);
   hbadmatch_stack_1->SetBinContent(10,1.342915);
   hbadmatch_stack_1->SetBinContent(11,2.004045);
   hbadmatch_stack_1->SetBinContent(12,2.869845);
   hbadmatch_stack_1->SetBinContent(13,1.775211);
   hbadmatch_stack_1->SetBinContent(14,2.445501);
   hbadmatch_stack_1->SetBinContent(15,1.752665);
   hbadmatch_stack_1->SetBinContent(16,2.671822);
   hbadmatch_stack_1->SetBinContent(17,1.457861);
   hbadmatch_stack_1->SetBinContent(18,2.569577);
   hbadmatch_stack_1->SetBinContent(19,2.86792);
   hbadmatch_stack_1->SetBinContent(20,2.228543);
   hbadmatch_stack_1->SetBinContent(21,2.309851);
   hbadmatch_stack_1->SetBinContent(22,3.019317);
   hbadmatch_stack_1->SetBinContent(23,5.369725);
   hbadmatch_stack_1->SetBinContent(24,1.920428);
   hbadmatch_stack_1->SetBinContent(25,2.227464);
   hbadmatch_stack_1->SetBinContent(26,3.986846);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.7570713);
   hbadmatch_stack_1->SetBinError(2,0.5551335);
   hbadmatch_stack_1->SetBinError(3,0.5080005);
   hbadmatch_stack_1->SetBinError(4,0.6081537);
   hbadmatch_stack_1->SetBinError(5,0.2448976);
   hbadmatch_stack_1->SetBinError(6,0.4886726);
   hbadmatch_stack_1->SetBinError(7,0.3553908);
   hbadmatch_stack_1->SetBinError(8,0.6373695);
   hbadmatch_stack_1->SetBinError(9,0.5501586);
   hbadmatch_stack_1->SetBinError(10,0.7038234);
   hbadmatch_stack_1->SetBinError(11,0.7693684);
   hbadmatch_stack_1->SetBinError(12,1.101672);
   hbadmatch_stack_1->SetBinError(13,0.6726712);
   hbadmatch_stack_1->SetBinError(14,0.8512093);
   hbadmatch_stack_1->SetBinError(15,0.7122284);
   hbadmatch_stack_1->SetBinError(16,0.9176722);
   hbadmatch_stack_1->SetBinError(17,0.5807503);
   hbadmatch_stack_1->SetBinError(18,0.8428442);
   hbadmatch_stack_1->SetBinError(19,1.267057);
   hbadmatch_stack_1->SetBinError(20,0.7560061);
   hbadmatch_stack_1->SetBinError(21,0.8958097);
   hbadmatch_stack_1->SetBinError(22,0.8938999);
   hbadmatch_stack_1->SetBinError(23,1.310211);
   hbadmatch_stack_1->SetBinError(24,0.6941623);
   hbadmatch_stack_1->SetBinError(25,0.7415833);
   hbadmatch_stack_1->SetBinError(26,1.136114);
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
   hext_stack_2->SetBinContent(1,9.291056);
   hext_stack_2->SetBinContent(2,8.910407);
   hext_stack_2->SetBinContent(3,13.75205);
   hext_stack_2->SetBinContent(4,10.27143);
   hext_stack_2->SetBinContent(5,7.944396);
   hext_stack_2->SetBinContent(6,10.02923);
   hext_stack_2->SetBinContent(7,6.538654);
   hext_stack_2->SetBinContent(8,7.187449);
   hext_stack_2->SetBinContent(9,8.534109);
   hext_stack_2->SetBinContent(10,11.30528);
   hext_stack_2->SetBinContent(11,11.31246);
   hext_stack_2->SetBinContent(12,7.855014);
   hext_stack_2->SetBinContent(13,11.4162);
   hext_stack_2->SetBinContent(14,11.7047);
   hext_stack_2->SetBinContent(15,11.2159);
   hext_stack_2->SetBinContent(16,8.365356);
   hext_stack_2->SetBinContent(17,9.554792);
   hext_stack_2->SetBinContent(18,14.82181);
   hext_stack_2->SetBinContent(19,4.374388);
   hext_stack_2->SetBinContent(20,8.090029);
   hext_stack_2->SetBinContent(21,10.91745);
   hext_stack_2->SetBinContent(22,13.72169);
   hext_stack_2->SetBinContent(23,17.86989);
   hext_stack_2->SetBinContent(24,17.31324);
   hext_stack_2->SetBinContent(25,21.64455);
   hext_stack_2->SetBinContent(26,11.94689);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinError(0,0.6130171);
   hext_stack_2->SetBinError(1,2.114034);
   hext_stack_2->SetBinError(2,1.958401);
   hext_stack_2->SetBinError(3,2.520668);
   hext_stack_2->SetBinError(4,2.140944);
   hext_stack_2->SetBinError(5,1.821657);
   hext_stack_2->SetBinError(6,2.130374);
   hext_stack_2->SetBinError(7,1.818211);
   hext_stack_2->SetBinError(8,1.875196);
   hext_stack_2->SetBinError(9,2.160339);
   hext_stack_2->SetBinError(10,2.358608);
   hext_stack_2->SetBinError(11,2.315563);
   hext_stack_2->SetBinError(12,1.859985);
   hext_stack_2->SetBinError(13,2.195067);
   hext_stack_2->SetBinError(14,2.435068);
   hext_stack_2->SetBinError(15,2.388335);
   hext_stack_2->SetBinError(16,1.755378);
   hext_stack_2->SetBinError(17,1.977544);
   hext_stack_2->SetBinError(18,2.515384);
   hext_stack_2->SetBinError(19,1.299776);
   hext_stack_2->SetBinError(20,1.925069);
   hext_stack_2->SetBinError(21,2.265045);
   hext_stack_2->SetBinError(22,2.585948);
   hext_stack_2->SetBinError(23,2.898352);
   hext_stack_2->SetBinError(24,2.777146);
   hext_stack_2->SetBinError(25,3.257171);
   hext_stack_2->SetBinError(26,2.44432);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetEntries(672);

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
   houtFV_stack_4->SetBinContent(0,2.878657);
   houtFV_stack_4->SetBinContent(1,44.2034);
   houtFV_stack_4->SetBinContent(2,14.31985);
   houtFV_stack_4->SetBinContent(3,13.57328);
   houtFV_stack_4->SetBinContent(4,10.16416);
   houtFV_stack_4->SetBinContent(5,7.52575);
   houtFV_stack_4->SetBinContent(6,6.133923);
   houtFV_stack_4->SetBinContent(7,8.036591);
   houtFV_stack_4->SetBinContent(8,8.398233);
   houtFV_stack_4->SetBinContent(9,7.04095);
   houtFV_stack_4->SetBinContent(10,8.156516);
   houtFV_stack_4->SetBinContent(11,4.065097);
   houtFV_stack_4->SetBinContent(12,9.486073);
   houtFV_stack_4->SetBinContent(13,8.945608);
   houtFV_stack_4->SetBinContent(14,7.100248);
   houtFV_stack_4->SetBinContent(15,5.763325);
   houtFV_stack_4->SetBinContent(16,8.971167);
   houtFV_stack_4->SetBinContent(17,10.18553);
   houtFV_stack_4->SetBinContent(18,10.18934);
   houtFV_stack_4->SetBinContent(19,7.806646);
   houtFV_stack_4->SetBinContent(20,11.3246);
   houtFV_stack_4->SetBinContent(21,9.560186);
   houtFV_stack_4->SetBinContent(22,11.03938);
   houtFV_stack_4->SetBinContent(23,12.68116);
   houtFV_stack_4->SetBinContent(24,15.15312);
   houtFV_stack_4->SetBinContent(25,14.67812);
   houtFV_stack_4->SetBinContent(26,28.1501);
   houtFV_stack_4->SetBinContent(27,3.156399);
   houtFV_stack_4->SetBinError(0,0.899887);
   houtFV_stack_4->SetBinError(1,3.356236);
   houtFV_stack_4->SetBinError(2,1.995728);
   houtFV_stack_4->SetBinError(3,1.861786);
   houtFV_stack_4->SetBinError(4,1.709892);
   houtFV_stack_4->SetBinError(5,1.336448);
   houtFV_stack_4->SetBinError(6,1.149399);
   houtFV_stack_4->SetBinError(7,1.4817);
   houtFV_stack_4->SetBinError(8,1.59991);
   houtFV_stack_4->SetBinError(9,1.402471);
   houtFV_stack_4->SetBinError(10,1.46276);
   houtFV_stack_4->SetBinError(11,0.9879304);
   houtFV_stack_4->SetBinError(12,1.572083);
   houtFV_stack_4->SetBinError(13,1.478892);
   houtFV_stack_4->SetBinError(14,1.292009);
   houtFV_stack_4->SetBinError(15,1.170935);
   houtFV_stack_4->SetBinError(16,1.565054);
   houtFV_stack_4->SetBinError(17,1.631353);
   houtFV_stack_4->SetBinError(18,1.727882);
   houtFV_stack_4->SetBinError(19,1.346062);
   houtFV_stack_4->SetBinError(20,1.9);
   houtFV_stack_4->SetBinError(21,1.560152);
   houtFV_stack_4->SetBinError(22,1.688834);
   houtFV_stack_4->SetBinError(23,2.055151);
   houtFV_stack_4->SetBinError(24,1.88913);
   houtFV_stack_4->SetBinError(25,1.907428);
   houtFV_stack_4->SetBinError(26,2.614921);
   houtFV_stack_4->SetBinError(27,0.9326608);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5371119);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.8502793);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.093227);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3930815);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7921013);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1681247);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2668617);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1288862);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.132526);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8196945);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.102928);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.393796);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2570913);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.4485428);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1375007);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.0913662);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.23919);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3816147);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.063833);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3921308);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6150728);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7055838);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8501337);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.280392);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.471448);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1582462);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2728253);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3963171);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3424743);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1708578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3545855);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.07891445);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1029286);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06517092);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.06670532);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3806618);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4037861);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3001128);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.120079);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2308686);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06356324);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04892851);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5060236);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1212294);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3216013);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2242263);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2194919);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3439127);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3652527);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3719625);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4491851);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.07199616);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02802274);
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
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.0830282);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5274197);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.369555);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.04775501);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05911);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02142406);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1137553);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1183689);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.09584867);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05378138);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1114455);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04564396);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3042486);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.190238);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02830213);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03756552);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0151491);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06127116);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06720735);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05158992);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03105946);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05258554);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,5.724512);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.46342);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.83606);
   hNCpi0inFVres_stack_7->SetBinContent(4,10.24795);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.453521);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.657162);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.590191);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.696106);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.883996);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.593181);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.928918);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.110323);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.308652);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.543533);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.788546);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.63271);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.829062);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.510299);
   hNCpi0inFVres_stack_7->SetBinContent(19,8.361523);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.175194);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.701217);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.08162);
   hNCpi0inFVres_stack_7->SetBinContent(23,13.39161);
   hNCpi0inFVres_stack_7->SetBinContent(24,13.77364);
   hNCpi0inFVres_stack_7->SetBinContent(25,15.1737);
   hNCpi0inFVres_stack_7->SetBinContent(26,5.681855);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.08681688);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6980001);
   hNCpi0inFVres_stack_7->SetBinError(2,1.161121);
   hNCpi0inFVres_stack_7->SetBinError(3,1.029396);
   hNCpi0inFVres_stack_7->SetBinError(4,1.041502);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8966621);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8600565);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8783901);
   hNCpi0inFVres_stack_7->SetBinError(8,1.082365);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9414723);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6597139);
   hNCpi0inFVres_stack_7->SetBinError(11,0.724177);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7785127);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7469107);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5871031);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9335328);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8026226);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6697114);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7163747);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9724897);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7535313);
   hNCpi0inFVres_stack_7->SetBinError(21,1.091192);
   hNCpi0inFVres_stack_7->SetBinError(22,1.176931);
   hNCpi0inFVres_stack_7->SetBinError(23,1.17389);
   hNCpi0inFVres_stack_7->SetBinError(24,1.095708);
   hNCpi0inFVres_stack_7->SetBinError(25,1.32549);
   hNCpi0inFVres_stack_7->SetBinError(26,0.7176003);
   hNCpi0inFVres_stack_7->SetBinError(27,0.05251429);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.935046);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.660988);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.262112);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.757055);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.705001);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.342229);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.437367);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.666706);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.611871);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.105217);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.27867);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.679564);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.936217);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.763223);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.745512);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.250158);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.473172);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.963757);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.516299);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.03565);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.766593);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.268347);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.73856);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.716244);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.656364);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.676756);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3607908);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8009651);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5552159);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6164765);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5966526);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6382122);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3559395);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3847947);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3941581);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8728446);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3009831);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8328594);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4413354);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.452503);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6506924);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.273476);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7633784);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4942628);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5946512);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5519696);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8180122);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6569471);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7807472);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9227939);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8379488);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4180442);
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
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
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
   hNCinFV_stack_11->SetBinContent(1,1.499062);
   hNCinFV_stack_11->SetBinContent(2,5.266432);
   hNCinFV_stack_11->SetBinContent(3,5.18345);
   hNCinFV_stack_11->SetBinContent(4,3.069479);
   hNCinFV_stack_11->SetBinContent(5,1.89329);
   hNCinFV_stack_11->SetBinContent(6,2.101062);
   hNCinFV_stack_11->SetBinContent(7,0.8805662);
   hNCinFV_stack_11->SetBinContent(8,1.74458);
   hNCinFV_stack_11->SetBinContent(9,2.585587);
   hNCinFV_stack_11->SetBinContent(10,1.689524);
   hNCinFV_stack_11->SetBinContent(11,2.768557);
   hNCinFV_stack_11->SetBinContent(12,2.35198);
   hNCinFV_stack_11->SetBinContent(13,3.036892);
   hNCinFV_stack_11->SetBinContent(14,1.969306);
   hNCinFV_stack_11->SetBinContent(15,1.132323);
   hNCinFV_stack_11->SetBinContent(16,1.565121);
   hNCinFV_stack_11->SetBinContent(17,2.085541);
   hNCinFV_stack_11->SetBinContent(18,3.639552);
   hNCinFV_stack_11->SetBinContent(19,0.8967084);
   hNCinFV_stack_11->SetBinContent(20,1.902175);
   hNCinFV_stack_11->SetBinContent(21,3.933323);
   hNCinFV_stack_11->SetBinContent(22,2.310452);
   hNCinFV_stack_11->SetBinContent(23,4.358897);
   hNCinFV_stack_11->SetBinContent(24,4.105922);
   hNCinFV_stack_11->SetBinContent(25,6.347509);
   hNCinFV_stack_11->SetBinContent(26,1.894321);
   hNCinFV_stack_11->SetBinError(1,0.5590289);
   hNCinFV_stack_11->SetBinError(2,1.284758);
   hNCinFV_stack_11->SetBinError(3,1.251538);
   hNCinFV_stack_11->SetBinError(4,0.9204983);
   hNCinFV_stack_11->SetBinError(5,0.6407701);
   hNCinFV_stack_11->SetBinError(6,0.921839);
   hNCinFV_stack_11->SetBinError(7,0.6204611);
   hNCinFV_stack_11->SetBinError(8,0.6801933);
   hNCinFV_stack_11->SetBinError(9,0.9302871);
   hNCinFV_stack_11->SetBinError(10,0.6822461);
   hNCinFV_stack_11->SetBinError(11,0.8007176);
   hNCinFV_stack_11->SetBinError(12,0.8200461);
   hNCinFV_stack_11->SetBinError(13,0.9887715);
   hNCinFV_stack_11->SetBinError(14,0.7388592);
   hNCinFV_stack_11->SetBinError(15,0.5790441);
   hNCinFV_stack_11->SetBinError(16,0.5720795);
   hNCinFV_stack_11->SetBinError(17,0.6706189);
   hNCinFV_stack_11->SetBinError(18,1.168602);
   hNCinFV_stack_11->SetBinError(19,0.6197174);
   hNCinFV_stack_11->SetBinError(20,0.7289979);
   hNCinFV_stack_11->SetBinError(21,1.246686);
   hNCinFV_stack_11->SetBinError(22,0.6739114);
   hNCinFV_stack_11->SetBinError(23,1.16739);
   hNCinFV_stack_11->SetBinError(24,1.022246);
   hNCinFV_stack_11->SetBinError(25,1.305334);
   hNCinFV_stack_11->SetBinError(26,0.5817216);
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
   hmcerror__8->SetBinContent(0,4.546377);
   hmcerror__8->SetBinContent(1,79.81056);
   hmcerror__8->SetBinContent(2,76.41872);
   hmcerror__8->SetBinContent(3,71.88081);
   hmcerror__8->SetBinContent(4,55.66412);
   hmcerror__8->SetBinContent(5,48.50188);
   hmcerror__8->SetBinContent(6,48.28433);
   hmcerror__8->SetBinContent(7,40.75069);
   hmcerror__8->SetBinContent(8,44.71371);
   hmcerror__8->SetBinContent(9,43.87184);
   hmcerror__8->SetBinContent(10,51.06879);
   hmcerror__8->SetBinContent(11,43.60755);
   hmcerror__8->SetBinContent(12,48.95454);
   hmcerror__8->SetBinContent(13,48.8223);
   hmcerror__8->SetBinContent(14,48.86599);
   hmcerror__8->SetBinContent(15,48.39312);
   hmcerror__8->SetBinContent(16,49.94073);
   hmcerror__8->SetBinContent(17,53.11688);
   hmcerror__8->SetBinContent(18,63.95892);
   hmcerror__8->SetBinContent(19,50.103);
   hmcerror__8->SetBinContent(20,56.35302);
   hmcerror__8->SetBinContent(21,70.20866);
   hmcerror__8->SetBinContent(22,77.20913);
   hmcerror__8->SetBinContent(23,97.24947);
   hmcerror__8->SetBinContent(24,98.28302);
   hmcerror__8->SetBinContent(25,98.53506);
   hmcerror__8->SetBinContent(26,70.8605);
   hmcerror__8->SetBinContent(27,4.179713);
   hmcerror__8->SetBinError(0,1.144944);
   hmcerror__8->SetBinError(1,25.62561);
   hmcerror__8->SetBinError(2,29.45308);
   hmcerror__8->SetBinError(3,21.32081);
   hmcerror__8->SetBinError(4,19.82167);
   hmcerror__8->SetBinError(5,21.30112);
   hmcerror__8->SetBinError(6,14.95858);
   hmcerror__8->SetBinError(7,15.94959);
   hmcerror__8->SetBinError(8,15.9294);
   hmcerror__8->SetBinError(9,15.01179);
   hmcerror__8->SetBinError(10,18.47704);
   hmcerror__8->SetBinError(11,12.44088);
   hmcerror__8->SetBinError(12,19.88381);
   hmcerror__8->SetBinError(13,15.22761);
   hmcerror__8->SetBinError(14,15.85821);
   hmcerror__8->SetBinError(15,16.97459);
   hmcerror__8->SetBinError(16,14.59613);
   hmcerror__8->SetBinError(17,24.32783);
   hmcerror__8->SetBinError(18,20.24504);
   hmcerror__8->SetBinError(19,20.17428);
   hmcerror__8->SetBinError(20,18.43997);
   hmcerror__8->SetBinError(21,24.9535);
   hmcerror__8->SetBinError(22,21.47023);
   hmcerror__8->SetBinError(23,36.81795);
   hmcerror__8->SetBinError(24,27.67164);
   hmcerror__8->SetBinError(25,25.90307);
   hmcerror__8->SetBinError(26,24.69677);
   hmcerror__8->SetBinError(27,4.655664);
   hmcerror__8->SetEntries(1653.165);

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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.6/26","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 53.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 285.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  220.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 70.2","F");

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
   0.3210804,
   0.3854171,
   0.2966135,
   0.3560942,
   0.4391813,
   0.309802,
   0.3913944,
   0.3562532,
   0.3421737,
   0.3618069,
   0.2852918,
   0.4061688,
   0.3118985,
   0.3245245,
   0.3507644,
   0.292269,
   0.4580056,
   0.316532,
   0.4026561,
   0.3272223,
   0.3554192,
   0.2780789,
   0.3785929,
   0.2815506,
   0.2628818,
   0.3485266};
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
   0.3210804,
   0.3854171,
   0.2966135,
   0.3560942,
   0.4391813,
   0.309802,
   0.3913944,
   0.3562532,
   0.3421737,
   0.3618069,
   0.2852918,
   0.4061688,
   0.3118985,
   0.3245245,
   0.3507644,
   0.292269,
   0.4580056,
   0.316532,
   0.4026561,
   0.3272223,
   0.3554192,
   0.2780789,
   0.3785929,
   0.2815506,
   0.2628818,
   0.3485266};
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
   0.2085883,
   0.2383759,
   0.2342627,
   0.2068935,
   0.2352065,
   0.2087931,
   0.2401335,
   0.2278993,
   0.200995,
   0.2091748,
   0.1930586,
   0.1776995,
   0.2065304,
   0.2011318,
   0.1958349,
   0.1905442,
   0.1906785,
   0.1746967,
   0.2168942,
   0.2134081,
   0.1786373,
   0.1900945,
   0.2036422,
   0.1950259,
   0.1940442,
   0.2003093};
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
   0.2085883,
   0.2383759,
   0.2342627,
   0.2068935,
   0.2352065,
   0.2087931,
   0.2401335,
   0.2278993,
   0.200995,
   0.2091748,
   0.1930586,
   0.1776995,
   0.2065304,
   0.2011318,
   0.1958349,
   0.1905442,
   0.1906785,
   0.1746967,
   0.2168942,
   0.2134081,
   0.1786373,
   0.1900945,
   0.2036422,
   0.1950259,
   0.1940442,
   0.2003093};
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
   0.9773143,
   1.007607,
   0.9042748,
   0.9880692,
   0.9690345,
   0.8284261,
   1.251513,
   1.028767,
   0.9801275,
   0.7440944,
   0.9860678,
   0.9600743,
   1.00364,
   0.8799576,
   0.8678919,
   0.901068,
   0.8848412,
   0.7192117,
   1.057821,
   1.029226,
   1.025515,
   0.8548212,
   0.7609296,
   0.8546746,
   0.9539752,
   0.846734};
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
   0.1122182,
   0.1164571,
   0.1139289,
   0.1355631,
   0.144081,
   0.1337991,
   0.1784633,
   0.1546572,
   0.1525284,
   0.1233885,
   0.1534528,
   0.1427488,
   0.1460767,
   0.1369398,
   0.1367033,
   0.1369944,
   0.1315627,
   0.108121,
   0.1479053,
   0.1374301,
   0.1226458,
   0.1068643,
   0.08974342,
   0.0945087,
   0.09963256,
   0.111124};
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
   0.1096872,
   0.113815,
   0.1111089,
   0.1319072,
   0.1398688,
   0.1295431,
   0.1734597,
   0.1500837,
   0.1478579,
   0.1193586,
   0.1487541,
   0.1385755,
   0.1418962,
   0.1327467,
   0.1324651,
   0.1328975,
   0.1277165,
   0.1049236,
   0.1438397,
   0.133826,
   0.1197644,
   0.1042403,
   0.08766423,
   0.09245646,
   0.09758963,
   0.1082592};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,286);
   Graph_Graph3012->SetMinimum(0.5297026);
   Graph_Graph3012->SetMaximum(1.50636);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}

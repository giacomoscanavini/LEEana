#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Jun  1 00:24:18 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-169.2308,-88.52454,1241.026,9323.032);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__4->SetBinContent(0,549.381);
   hmc__4->SetBinContent(1,3782.947);
   hmc__4->SetBinContent(2,3745.943);
   hmc__4->SetBinContent(3,3570.529);
   hmc__4->SetBinContent(4,3454.339);
   hmc__4->SetBinContent(5,3939.485);
   hmc__4->SetBinContent(6,4087.894);
   hmc__4->SetBinContent(7,3922.596);
   hmc__4->SetBinContent(8,4013.401);
   hmc__4->SetBinContent(9,4140.048);
   hmc__4->SetBinContent(10,4426.227);
   hmc__4->SetBinContent(11,4341.186);
   hmc__4->SetBinContent(12,4185.457);
   hmc__4->SetBinContent(13,4331.771);
   hmc__4->SetBinContent(14,4226.357);
   hmc__4->SetBinContent(15,4097.872);
   hmc__4->SetBinContent(16,4413.251);
   hmc__4->SetBinContent(17,4358.363);
   hmc__4->SetBinContent(18,4353.129);
   hmc__4->SetBinContent(19,4382.951);
   hmc__4->SetBinContent(20,3984.22);
   hmc__4->SetBinContent(21,3607.894);
   hmc__4->SetBinContent(22,3769.224);
   hmc__4->SetBinContent(23,4101.671);
   hmc__4->SetBinContent(24,3856.103);
   hmc__4->SetBinContent(25,4248.287);
   hmc__4->SetBinContent(26,4012.998);
   hmc__4->SetBinContent(27,4133.042);
   hmc__4->SetBinContent(28,4012.066);
   hmc__4->SetBinContent(29,3828.178);
   hmc__4->SetBinContent(30,2719.3);
   hmc__4->SetBinContent(31,56.08014);
   hmc__4->SetBinError(0,14.61892);
   hmc__4->SetBinError(1,638.326);
   hmc__4->SetBinError(2,644.8973);
   hmc__4->SetBinError(3,649.7027);
   hmc__4->SetBinError(4,649.8446);
   hmc__4->SetBinError(5,673.2764);
   hmc__4->SetBinError(6,697.6291);
   hmc__4->SetBinError(7,663.8245);
   hmc__4->SetBinError(8,639.3376);
   hmc__4->SetBinError(9,682.8248);
   hmc__4->SetBinError(10,713.1029);
   hmc__4->SetBinError(11,678.2864);
   hmc__4->SetBinError(12,685.7934);
   hmc__4->SetBinError(13,683.8083);
   hmc__4->SetBinError(14,672.9266);
   hmc__4->SetBinError(15,671.0197);
   hmc__4->SetBinError(16,720.6214);
   hmc__4->SetBinError(17,701.4461);
   hmc__4->SetBinError(18,704.2661);
   hmc__4->SetBinError(19,698.7262);
   hmc__4->SetBinError(20,648.0994);
   hmc__4->SetBinError(21,567.2872);
   hmc__4->SetBinError(22,629.9089);
   hmc__4->SetBinError(23,708.7853);
   hmc__4->SetBinError(24,643.2908);
   hmc__4->SetBinError(25,712.9487);
   hmc__4->SetBinError(26,662.7746);
   hmc__4->SetBinError(27,695.0807);
   hmc__4->SetBinError(28,677.2675);
   hmc__4->SetBinError(29,704.1276);
   hmc__4->SetBinError(30,479.89);
   hmc__4->SetBinError(31,28.30331);
   hmc__4->SetBinError(32,0.4212968);
   hmc__4->SetBinError(33,0.4212968);
   hmc__4->SetMinimum(-88.52454);
   hmc__4->SetMaximum(8852.454);
   hmc__4->SetEntries(104733.2);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",32,0,1100);
   hs2_stack_2->SetMinimum(0);
   hs2_stack_2->SetMaximum(4647.538);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(0,72.93156);
   hbadmatch_stack_1->SetBinContent(1,83.09727);
   hbadmatch_stack_1->SetBinContent(2,56.65701);
   hbadmatch_stack_1->SetBinContent(3,51.30818);
   hbadmatch_stack_1->SetBinContent(4,54.87614);
   hbadmatch_stack_1->SetBinContent(5,55.92195);
   hbadmatch_stack_1->SetBinContent(6,48.44955);
   hbadmatch_stack_1->SetBinContent(7,50.2384);
   hbadmatch_stack_1->SetBinContent(8,48.12054);
   hbadmatch_stack_1->SetBinContent(9,40.86341);
   hbadmatch_stack_1->SetBinContent(10,38.80544);
   hbadmatch_stack_1->SetBinContent(11,44.23013);
   hbadmatch_stack_1->SetBinContent(12,38.27982);
   hbadmatch_stack_1->SetBinContent(13,36.53891);
   hbadmatch_stack_1->SetBinContent(14,39.97364);
   hbadmatch_stack_1->SetBinContent(15,34.53717);
   hbadmatch_stack_1->SetBinContent(16,32.91046);
   hbadmatch_stack_1->SetBinContent(17,36.57366);
   hbadmatch_stack_1->SetBinContent(18,36.05966);
   hbadmatch_stack_1->SetBinContent(19,45.91187);
   hbadmatch_stack_1->SetBinContent(20,43.56151);
   hbadmatch_stack_1->SetBinContent(21,72.23779);
   hbadmatch_stack_1->SetBinContent(22,47.18386);
   hbadmatch_stack_1->SetBinContent(23,36.36732);
   hbadmatch_stack_1->SetBinContent(24,37.09388);
   hbadmatch_stack_1->SetBinContent(25,36.95938);
   hbadmatch_stack_1->SetBinContent(26,46.87223);
   hbadmatch_stack_1->SetBinContent(27,39.63038);
   hbadmatch_stack_1->SetBinContent(28,39.36639);
   hbadmatch_stack_1->SetBinContent(29,36.43982);
   hbadmatch_stack_1->SetBinContent(30,48.73355);
   hbadmatch_stack_1->SetBinContent(31,4.124544);
   hbadmatch_stack_1->SetBinError(0,5.248885);
   hbadmatch_stack_1->SetBinError(1,7.986947);
   hbadmatch_stack_1->SetBinError(2,6.578623);
   hbadmatch_stack_1->SetBinError(3,4.470454);
   hbadmatch_stack_1->SetBinError(4,4.305246);
   hbadmatch_stack_1->SetBinError(5,4.764402);
   hbadmatch_stack_1->SetBinError(6,4.476869);
   hbadmatch_stack_1->SetBinError(7,4.79728);
   hbadmatch_stack_1->SetBinError(8,3.622838);
   hbadmatch_stack_1->SetBinError(9,3.352814);
   hbadmatch_stack_1->SetBinError(10,3.327601);
   hbadmatch_stack_1->SetBinError(11,3.535797);
   hbadmatch_stack_1->SetBinError(12,3.7017);
   hbadmatch_stack_1->SetBinError(13,3.164233);
   hbadmatch_stack_1->SetBinError(14,4.172522);
   hbadmatch_stack_1->SetBinError(15,3.12696);
   hbadmatch_stack_1->SetBinError(16,3.092492);
   hbadmatch_stack_1->SetBinError(17,4.256622);
   hbadmatch_stack_1->SetBinError(18,3.319189);
   hbadmatch_stack_1->SetBinError(19,4.727287);
   hbadmatch_stack_1->SetBinError(20,4.189334);
   hbadmatch_stack_1->SetBinError(21,4.977985);
   hbadmatch_stack_1->SetBinError(22,5.231524);
   hbadmatch_stack_1->SetBinError(23,4.013188);
   hbadmatch_stack_1->SetBinError(24,3.440052);
   hbadmatch_stack_1->SetBinError(25,3.872275);
   hbadmatch_stack_1->SetBinError(26,4.057275);
   hbadmatch_stack_1->SetBinError(27,4.290661);
   hbadmatch_stack_1->SetBinError(28,4.863618);
   hbadmatch_stack_1->SetBinError(29,3.639859);
   hbadmatch_stack_1->SetBinError(30,4.903395);
   hbadmatch_stack_1->SetBinError(31,1.087199);
   hbadmatch_stack_1->SetEntries(5481);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(0,208.1913);
   hext_stack_2->SetBinContent(1,177.6629);
   hext_stack_2->SetBinContent(2,222.9869);
   hext_stack_2->SetBinContent(3,200.9226);
   hext_stack_2->SetBinContent(4,186.4795);
   hext_stack_2->SetBinContent(5,259.5726);
   hext_stack_2->SetBinContent(6,235.4379);
   hext_stack_2->SetBinContent(7,235.0097);
   hext_stack_2->SetBinContent(8,264.4677);
   hext_stack_2->SetBinContent(9,234.5312);
   hext_stack_2->SetBinContent(10,227.3434);
   hext_stack_2->SetBinContent(11,247.7834);
   hext_stack_2->SetBinContent(12,197.0378);
   hext_stack_2->SetBinContent(13,235.4023);
   hext_stack_2->SetBinContent(14,209.2468);
   hext_stack_2->SetBinContent(15,211.9694);
   hext_stack_2->SetBinContent(16,235.052);
   hext_stack_2->SetBinContent(17,220.7505);
   hext_stack_2->SetBinContent(18,218.1058);
   hext_stack_2->SetBinContent(19,200.024);
   hext_stack_2->SetBinContent(20,197.9579);
   hext_stack_2->SetBinContent(21,329.9487);
   hext_stack_2->SetBinContent(22,199.1718);
   hext_stack_2->SetBinContent(23,204.133);
   hext_stack_2->SetBinContent(24,201.8092);
   hext_stack_2->SetBinContent(25,197.6207);
   hext_stack_2->SetBinContent(26,201.7889);
   hext_stack_2->SetBinContent(27,176.785);
   hext_stack_2->SetBinContent(28,176.7243);
   hext_stack_2->SetBinContent(29,141.5931);
   hext_stack_2->SetBinContent(30,125.2978);
   hext_stack_2->SetBinContent(31,8.526928);
   hext_stack_2->SetBinError(0,9.105234);
   hext_stack_2->SetBinError(1,8.941139);
   hext_stack_2->SetBinError(2,10.50674);
   hext_stack_2->SetBinError(3,9.826034);
   hext_stack_2->SetBinError(4,9.225817);
   hext_stack_2->SetBinError(5,11.08663);
   hext_stack_2->SetBinError(6,10.30145);
   hext_stack_2->SetBinError(7,10.38694);
   hext_stack_2->SetBinError(8,11.23818);
   hext_stack_2->SetBinError(9,10.53877);
   hext_stack_2->SetBinError(10,10.24401);
   hext_stack_2->SetBinError(11,10.88758);
   hext_stack_2->SetBinError(12,9.434443);
   hext_stack_2->SetBinError(13,10.60171);
   hext_stack_2->SetBinError(14,9.761349);
   hext_stack_2->SetBinError(15,9.835108);
   hext_stack_2->SetBinError(16,10.556);
   hext_stack_2->SetBinError(17,10.27213);
   hext_stack_2->SetBinError(18,10.00025);
   hext_stack_2->SetBinError(19,9.620629);
   hext_stack_2->SetBinError(20,9.612469);
   hext_stack_2->SetBinError(21,12.48729);
   hext_stack_2->SetBinError(22,9.467214);
   hext_stack_2->SetBinError(23,9.780764);
   hext_stack_2->SetBinError(24,9.764273);
   hext_stack_2->SetBinError(25,9.721039);
   hext_stack_2->SetBinError(26,9.685373);
   hext_stack_2->SetBinError(27,9.169785);
   hext_stack_2->SetBinError(28,9.133524);
   hext_stack_2->SetBinError(29,8.064794);
   hext_stack_2->SetBinError(30,7.631429);
   hext_stack_2->SetBinError(31,2.206415);
   hext_stack_2->SetEntries(15374);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(0,25.63216);
   hdirt_stack_3->SetBinContent(1,190.0482);
   hdirt_stack_3->SetBinContent(2,78.22153);
   hdirt_stack_3->SetBinContent(3,47.53452);
   hdirt_stack_3->SetBinContent(4,46.14967);
   hdirt_stack_3->SetBinContent(5,45.23498);
   hdirt_stack_3->SetBinContent(6,41.87352);
   hdirt_stack_3->SetBinContent(7,33.69993);
   hdirt_stack_3->SetBinContent(8,28.27231);
   hdirt_stack_3->SetBinContent(9,22.85458);
   hdirt_stack_3->SetBinContent(10,30.70054);
   hdirt_stack_3->SetBinContent(11,24.18293);
   hdirt_stack_3->SetBinContent(12,19.66054);
   hdirt_stack_3->SetBinContent(13,17.40467);
   hdirt_stack_3->SetBinContent(14,20.9768);
   hdirt_stack_3->SetBinContent(15,22.1717);
   hdirt_stack_3->SetBinContent(16,19.78443);
   hdirt_stack_3->SetBinContent(17,20.44827);
   hdirt_stack_3->SetBinContent(18,22.22334);
   hdirt_stack_3->SetBinContent(19,27.98436);
   hdirt_stack_3->SetBinContent(20,23.58071);
   hdirt_stack_3->SetBinContent(21,37.10042);
   hdirt_stack_3->SetBinContent(22,33.30789);
   hdirt_stack_3->SetBinContent(23,13.6705);
   hdirt_stack_3->SetBinContent(24,13.64183);
   hdirt_stack_3->SetBinContent(25,16.29037);
   hdirt_stack_3->SetBinContent(26,20.16875);
   hdirt_stack_3->SetBinContent(27,17.96992);
   hdirt_stack_3->SetBinContent(28,18.2089);
   hdirt_stack_3->SetBinContent(29,20.24354);
   hdirt_stack_3->SetBinContent(30,8.475772);
   hdirt_stack_3->SetBinContent(31,0.9055424);
   hdirt_stack_3->SetBinError(0,2.951537);
   hdirt_stack_3->SetBinError(1,9.040349);
   hdirt_stack_3->SetBinError(2,5.282493);
   hdirt_stack_3->SetBinError(3,3.535661);
   hdirt_stack_3->SetBinError(4,4.247271);
   hdirt_stack_3->SetBinError(5,3.568686);
   hdirt_stack_3->SetBinError(6,4.179822);
   hdirt_stack_3->SetBinError(7,3.659599);
   hdirt_stack_3->SetBinError(8,3.454783);
   hdirt_stack_3->SetBinError(9,2.497556);
   hdirt_stack_3->SetBinError(10,4.110289);
   hdirt_stack_3->SetBinError(11,3.855897);
   hdirt_stack_3->SetBinError(12,2.316742);
   hdirt_stack_3->SetBinError(13,2.118602);
   hdirt_stack_3->SetBinError(14,2.93081);
   hdirt_stack_3->SetBinError(15,2.497419);
   hdirt_stack_3->SetBinError(16,2.415807);
   hdirt_stack_3->SetBinError(17,2.688185);
   hdirt_stack_3->SetBinError(18,3.203795);
   hdirt_stack_3->SetBinError(19,4.756426);
   hdirt_stack_3->SetBinError(20,2.988378);
   hdirt_stack_3->SetBinError(21,3.327971);
   hdirt_stack_3->SetBinError(22,3.946432);
   hdirt_stack_3->SetBinError(23,1.856351);
   hdirt_stack_3->SetBinError(24,2.409176);
   hdirt_stack_3->SetBinError(25,2.096736);
   hdirt_stack_3->SetBinError(26,3.300364);
   hdirt_stack_3->SetBinError(27,2.172088);
   hdirt_stack_3->SetBinError(28,2.608732);
   hdirt_stack_3->SetBinError(29,2.642135);
   hdirt_stack_3->SetBinError(30,1.572648);
   hdirt_stack_3->SetBinError(31,0.5260433);
   hdirt_stack_3->SetEntries(4150);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,31.93411);
   houtFV_stack_4->SetBinContent(1,693.8628);
   houtFV_stack_4->SetBinContent(2,164.1069);
   houtFV_stack_4->SetBinContent(3,131.2559);
   houtFV_stack_4->SetBinContent(4,125.0841);
   houtFV_stack_4->SetBinContent(5,125.1764);
   houtFV_stack_4->SetBinContent(6,129.0165);
   houtFV_stack_4->SetBinContent(7,137.8656);
   houtFV_stack_4->SetBinContent(8,142.2295);
   houtFV_stack_4->SetBinContent(9,124.4635);
   houtFV_stack_4->SetBinContent(10,130.6741);
   houtFV_stack_4->SetBinContent(11,132.0152);
   houtFV_stack_4->SetBinContent(12,147.3389);
   houtFV_stack_4->SetBinContent(13,128.1177);
   houtFV_stack_4->SetBinContent(14,127.2621);
   houtFV_stack_4->SetBinContent(15,159.0769);
   houtFV_stack_4->SetBinContent(16,134.75);
   houtFV_stack_4->SetBinContent(17,132.7235);
   houtFV_stack_4->SetBinContent(18,133.0266);
   houtFV_stack_4->SetBinContent(19,154.9078);
   houtFV_stack_4->SetBinContent(20,131.9965);
   houtFV_stack_4->SetBinContent(21,164.0685);
   houtFV_stack_4->SetBinContent(22,134.8845);
   houtFV_stack_4->SetBinContent(23,136.1561);
   houtFV_stack_4->SetBinContent(24,112.6439);
   houtFV_stack_4->SetBinContent(25,122.5027);
   houtFV_stack_4->SetBinContent(26,109.6001);
   houtFV_stack_4->SetBinContent(27,112.9275);
   houtFV_stack_4->SetBinContent(28,104.789);
   houtFV_stack_4->SetBinContent(29,88.88738);
   houtFV_stack_4->SetBinContent(30,63.42241);
   houtFV_stack_4->SetBinContent(31,5.817077);
   houtFV_stack_4->SetBinError(0,3.128838);
   houtFV_stack_4->SetBinError(1,15.46568);
   houtFV_stack_4->SetBinError(2,7.427619);
   houtFV_stack_4->SetBinError(3,6.395024);
   houtFV_stack_4->SetBinError(4,6.177857);
   houtFV_stack_4->SetBinError(5,6.14466);
   houtFV_stack_4->SetBinError(6,6.694962);
   houtFV_stack_4->SetBinError(7,6.830589);
   houtFV_stack_4->SetBinError(8,6.641692);
   houtFV_stack_4->SetBinError(9,6.178646);
   houtFV_stack_4->SetBinError(10,7.412204);
   houtFV_stack_4->SetBinError(11,6.605424);
   houtFV_stack_4->SetBinError(12,7.761753);
   houtFV_stack_4->SetBinError(13,6.507061);
   houtFV_stack_4->SetBinError(14,6.49271);
   houtFV_stack_4->SetBinError(15,8.663199);
   houtFV_stack_4->SetBinError(16,7.764933);
   houtFV_stack_4->SetBinError(17,6.68229);
   houtFV_stack_4->SetBinError(18,6.641807);
   houtFV_stack_4->SetBinError(19,7.341891);
   houtFV_stack_4->SetBinError(20,6.503811);
   houtFV_stack_4->SetBinError(21,7.55806);
   houtFV_stack_4->SetBinError(22,6.566308);
   houtFV_stack_4->SetBinError(23,6.411311);
   houtFV_stack_4->SetBinError(24,6.65927);
   houtFV_stack_4->SetBinError(25,6.205153);
   houtFV_stack_4->SetBinError(26,5.481486);
   houtFV_stack_4->SetBinError(27,5.595429);
   houtFV_stack_4->SetBinError(28,5.585366);
   houtFV_stack_4->SetBinError(29,5.184126);
   houtFV_stack_4->SetBinError(30,4.599063);
   houtFV_stack_4->SetBinError(31,1.272225);
   houtFV_stack_4->SetEntries(18079);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.7670858);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6412039);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7664219);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.9620582);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5988538);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.87819);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2468026);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.17535);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2532885);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2727714);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3812754);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1922885);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3320795);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.2070706);
   hNCpi0inFVcoh_stack_5->SetEntries(244);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,24.32028);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,82.20602);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,97.77065);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,106.2602);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,99.14239);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,118.9305);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,115.8914);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,124.4241);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,116.154);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,123.8723);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,128.7558);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,122.4883);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,119.1408);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,125.1301);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,128.5978);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,119.1732);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,126.9289);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,125.362);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,121.1328);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,120.0023);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,116.3478);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,108.1071);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,108.9657);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,118.5333);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,109.9691);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,115.9675);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,120.3775);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,111.9231);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,119.3311);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,112.1942);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,76.55644);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(31,1.953008);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.20973);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.956834);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,3.271396);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.462811);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.283232);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.59428);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.474318);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.666153);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.570496);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.648422);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.720078);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.530722);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.562721);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,3.644307);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,3.738538);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,3.574636);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,3.66609);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,3.71214);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,3.563367);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,3.544356);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,3.570451);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,3.385993);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,3.430322);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,3.583573);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.44457);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,3.47695);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,3.597104);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,3.391242);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,3.627802);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,3.539843);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,2.936549);
   hNCpi0inFVnoncoh_stack_6->SetBinError(31,0.4461132);
   hNCpi0inFVnoncoh_stack_6->SetEntries(63901);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_7->SetBinContent(0,20.59181);
   hCCpi0inFV_stack_7->SetBinContent(1,231.668);
   hCCpi0inFV_stack_7->SetBinContent(2,292.4613);
   hCCpi0inFV_stack_7->SetBinContent(3,271.2124);
   hCCpi0inFV_stack_7->SetBinContent(4,285.562);
   hCCpi0inFV_stack_7->SetBinContent(5,317.1413);
   hCCpi0inFV_stack_7->SetBinContent(6,321.2209);
   hCCpi0inFV_stack_7->SetBinContent(7,308.2816);
   hCCpi0inFV_stack_7->SetBinContent(8,320.9916);
   hCCpi0inFV_stack_7->SetBinContent(9,327.3803);
   hCCpi0inFV_stack_7->SetBinContent(10,381.2544);
   hCCpi0inFV_stack_7->SetBinContent(11,374.1498);
   hCCpi0inFV_stack_7->SetBinContent(12,345.0314);
   hCCpi0inFV_stack_7->SetBinContent(13,338.3595);
   hCCpi0inFV_stack_7->SetBinContent(14,365.4967);
   hCCpi0inFV_stack_7->SetBinContent(15,335.8601);
   hCCpi0inFV_stack_7->SetBinContent(16,389.3952);
   hCCpi0inFV_stack_7->SetBinContent(17,359.9839);
   hCCpi0inFV_stack_7->SetBinContent(18,345.0588);
   hCCpi0inFV_stack_7->SetBinContent(19,360.8987);
   hCCpi0inFV_stack_7->SetBinContent(20,323.2339);
   hCCpi0inFV_stack_7->SetBinContent(21,278.6225);
   hCCpi0inFV_stack_7->SetBinContent(22,308.8854);
   hCCpi0inFV_stack_7->SetBinContent(23,333.5761);
   hCCpi0inFV_stack_7->SetBinContent(24,308.5097);
   hCCpi0inFV_stack_7->SetBinContent(25,367.1518);
   hCCpi0inFV_stack_7->SetBinContent(26,323.7278);
   hCCpi0inFV_stack_7->SetBinContent(27,338.9312);
   hCCpi0inFV_stack_7->SetBinContent(28,317.7947);
   hCCpi0inFV_stack_7->SetBinContent(29,305.4253);
   hCCpi0inFV_stack_7->SetBinContent(30,219.2816);
   hCCpi0inFV_stack_7->SetBinContent(31,3.376046);
   hCCpi0inFV_stack_7->SetBinError(0,2.332035);
   hCCpi0inFV_stack_7->SetBinError(1,7.609233);
   hCCpi0inFV_stack_7->SetBinError(2,8.578317);
   hCCpi0inFV_stack_7->SetBinError(3,8.293285);
   hCCpi0inFV_stack_7->SetBinError(4,8.514242);
   hCCpi0inFV_stack_7->SetBinError(5,8.948233);
   hCCpi0inFV_stack_7->SetBinError(6,8.999406);
   hCCpi0inFV_stack_7->SetBinError(7,8.724927);
   hCCpi0inFV_stack_7->SetBinError(8,9.001011);
   hCCpi0inFV_stack_7->SetBinError(9,9.085475);
   hCCpi0inFV_stack_7->SetBinError(10,9.830107);
   hCCpi0inFV_stack_7->SetBinError(11,9.763471);
   hCCpi0inFV_stack_7->SetBinError(12,9.311267);
   hCCpi0inFV_stack_7->SetBinError(13,9.268442);
   hCCpi0inFV_stack_7->SetBinError(14,9.592334);
   hCCpi0inFV_stack_7->SetBinError(15,9.198492);
   hCCpi0inFV_stack_7->SetBinError(16,9.942403);
   hCCpi0inFV_stack_7->SetBinError(17,9.513929);
   hCCpi0inFV_stack_7->SetBinError(18,9.341302);
   hCCpi0inFV_stack_7->SetBinError(19,9.530854);
   hCCpi0inFV_stack_7->SetBinError(20,8.968667);
   hCCpi0inFV_stack_7->SetBinError(21,8.480044);
   hCCpi0inFV_stack_7->SetBinError(22,8.883504);
   hCCpi0inFV_stack_7->SetBinError(23,9.159364);
   hCCpi0inFV_stack_7->SetBinError(24,8.821019);
   hCCpi0inFV_stack_7->SetBinError(25,9.719157);
   hCCpi0inFV_stack_7->SetBinError(26,9.115272);
   hCCpi0inFV_stack_7->SetBinError(27,9.373068);
   hCCpi0inFV_stack_7->SetBinError(28,8.874629);
   hCCpi0inFV_stack_7->SetBinError(29,8.757316);
   hCCpi0inFV_stack_7->SetBinError(30,7.425222);
   hCCpi0inFV_stack_7->SetBinError(31,0.8997438);
   hCCpi0inFV_stack_7->SetEntries(41502);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_8->SetBinContent(0,21.14369);
   hNCinFV_stack_8->SetBinContent(1,226.3295);
   hNCinFV_stack_8->SetBinContent(2,295.1765);
   hNCinFV_stack_8->SetBinContent(3,287.1555);
   hNCinFV_stack_8->SetBinContent(4,305.2907);
   hNCinFV_stack_8->SetBinContent(5,312.3428);
   hNCinFV_stack_8->SetBinContent(6,338.3437);
   hNCinFV_stack_8->SetBinContent(7,336.3891);
   hNCinFV_stack_8->SetBinContent(8,339.1288);
   hNCinFV_stack_8->SetBinContent(9,352.4017);
   hNCinFV_stack_8->SetBinContent(10,358.8657);
   hNCinFV_stack_8->SetBinContent(11,368.1266);
   hNCinFV_stack_8->SetBinContent(12,349.6521);
   hNCinFV_stack_8->SetBinContent(13,358.3011);
   hNCinFV_stack_8->SetBinContent(14,333.0123);
   hNCinFV_stack_8->SetBinContent(15,351.8585);
   hNCinFV_stack_8->SetBinContent(16,360.4519);
   hNCinFV_stack_8->SetBinContent(17,359.4361);
   hNCinFV_stack_8->SetBinContent(18,377.0596);
   hNCinFV_stack_8->SetBinContent(19,371.606);
   hNCinFV_stack_8->SetBinContent(20,322.7382);
   hNCinFV_stack_8->SetBinContent(21,310.3981);
   hNCinFV_stack_8->SetBinContent(22,329.4525);
   hNCinFV_stack_8->SetBinContent(23,343.4485);
   hNCinFV_stack_8->SetBinContent(24,334.4744);
   hNCinFV_stack_8->SetBinContent(25,353.9053);
   hNCinFV_stack_8->SetBinContent(26,329.9191);
   hNCinFV_stack_8->SetBinContent(27,340.8506);
   hNCinFV_stack_8->SetBinContent(28,361.6299);
   hNCinFV_stack_8->SetBinContent(29,330.3763);
   hNCinFV_stack_8->SetBinContent(30,229.3831);
   hNCinFV_stack_8->SetBinContent(31,3.126077);
   hNCinFV_stack_8->SetBinError(0,2.32007);
   hNCinFV_stack_8->SetBinError(1,7.546586);
   hNCinFV_stack_8->SetBinError(2,8.663598);
   hNCinFV_stack_8->SetBinError(3,8.645849);
   hNCinFV_stack_8->SetBinError(4,8.81268);
   hNCinFV_stack_8->SetBinError(5,8.906438);
   hNCinFV_stack_8->SetBinError(6,9.189537);
   hNCinFV_stack_8->SetBinError(7,9.176176);
   hNCinFV_stack_8->SetBinError(8,9.260322);
   hNCinFV_stack_8->SetBinError(9,9.410836);
   hNCinFV_stack_8->SetBinError(10,9.470024);
   hNCinFV_stack_8->SetBinError(11,9.637468);
   hNCinFV_stack_8->SetBinError(12,9.369522);
   hNCinFV_stack_8->SetBinError(13,9.475893);
   hNCinFV_stack_8->SetBinError(14,9.073194);
   hNCinFV_stack_8->SetBinError(15,9.36767);
   hNCinFV_stack_8->SetBinError(16,9.420904);
   hNCinFV_stack_8->SetBinError(17,9.392973);
   hNCinFV_stack_8->SetBinError(18,9.809444);
   hNCinFV_stack_8->SetBinError(19,9.745209);
   hNCinFV_stack_8->SetBinError(20,8.974743);
   hNCinFV_stack_8->SetBinError(21,8.827946);
   hNCinFV_stack_8->SetBinError(22,9.158682);
   hNCinFV_stack_8->SetBinError(23,9.265295);
   hNCinFV_stack_8->SetBinError(24,9.208125);
   hNCinFV_stack_8->SetBinError(25,9.496856);
   hNCinFV_stack_8->SetBinError(26,9.066434);
   hNCinFV_stack_8->SetBinError(27,9.233903);
   hNCinFV_stack_8->SetBinError(28,9.508246);
   hNCinFV_stack_8->SetBinError(29,9.175404);
   hNCinFV_stack_8->SetBinError(30,7.610258);
   hNCinFV_stack_8->SetBinError(31,0.8995382);
   hNCinFV_stack_8->SetEntries(42689);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_9->SetBinContent(0,142.8358);
   hnumuCCinFV_stack_9->SetBinContent(1,2085.43);
   hnumuCCinFV_stack_9->SetBinContent(2,2522.084);
   hnumuCCinFV_stack_9->SetBinContent(3,2461.148);
   hnumuCCinFV_stack_9->SetBinContent(4,2330.516);
   hnumuCCinFV_stack_9->SetBinContent(5,2686.236);
   hnumuCCinFV_stack_9->SetBinContent(6,2838.79);
   hnumuCCinFV_stack_9->SetBinContent(7,2673.404);
   hnumuCCinFV_stack_9->SetBinContent(8,2730.93);
   hnumuCCinFV_stack_9->SetBinContent(9,2891.087);
   hnumuCCinFV_stack_9->SetBinContent(10,3099.854);
   hnumuCCinFV_stack_9->SetBinContent(11,3009.173);
   hnumuCCinFV_stack_9->SetBinContent(12,2949.52);
   hnumuCCinFV_stack_9->SetBinContent(13,3072.729);
   hnumuCCinFV_stack_9->SetBinContent(14,2980.257);
   hnumuCCinFV_stack_9->SetBinContent(15,2848.491);
   hnumuCCinFV_stack_9->SetBinContent(16,3094.729);
   hnumuCCinFV_stack_9->SetBinContent(17,3075.659);
   hnumuCCinFV_stack_9->SetBinContent(18,3073.41);
   hnumuCCinFV_stack_9->SetBinContent(19,3079.613);
   hnumuCCinFV_stack_9->SetBinContent(20,2804.096);
   hnumuCCinFV_stack_9->SetBinContent(21,2293.651);
   hnumuCCinFV_stack_9->SetBinContent(22,2589.839);
   hnumuCCinFV_stack_9->SetBinContent(23,2891.363);
   hnumuCCinFV_stack_9->SetBinContent(24,2722.709);
   hnumuCCinFV_stack_9->SetBinContent(25,3017.957);
   hnumuCCinFV_stack_9->SetBinContent(26,2842.05);
   hnumuCCinFV_stack_9->SetBinContent(27,2971.598);
   hnumuCCinFV_stack_9->SetBinContent(28,2849.408);
   hnumuCCinFV_stack_9->SetBinContent(29,2769.082);
   hnumuCCinFV_stack_9->SetBinContent(30,1939.378);
   hnumuCCinFV_stack_9->SetBinContent(31,28.0542);
   hnumuCCinFV_stack_9->SetBinError(0,8.487942);
   hnumuCCinFV_stack_9->SetBinError(1,34.10365);
   hnumuCCinFV_stack_9->SetBinError(2,36.49944);
   hnumuCCinFV_stack_9->SetBinError(3,36.79832);
   hnumuCCinFV_stack_9->SetBinError(4,35.07999);
   hnumuCCinFV_stack_9->SetBinError(5,37.77961);
   hnumuCCinFV_stack_9->SetBinError(6,39.551);
   hnumuCCinFV_stack_9->SetBinError(7,37.5381);
   hnumuCCinFV_stack_9->SetBinError(8,37.58871);
   hnumuCCinFV_stack_9->SetBinError(9,38.63579);
   hnumuCCinFV_stack_9->SetBinError(10,40.49584);
   hnumuCCinFV_stack_9->SetBinError(11,38.85699);
   hnumuCCinFV_stack_9->SetBinError(12,39.64007);
   hnumuCCinFV_stack_9->SetBinError(13,39.81623);
   hnumuCCinFV_stack_9->SetBinError(14,39.16726);
   hnumuCCinFV_stack_9->SetBinError(15,38.23755);
   hnumuCCinFV_stack_9->SetBinError(16,40.49986);
   hnumuCCinFV_stack_9->SetBinError(17,39.99838);
   hnumuCCinFV_stack_9->SetBinError(18,39.78474);
   hnumuCCinFV_stack_9->SetBinError(19,39.54865);
   hnumuCCinFV_stack_9->SetBinError(20,38.70644);
   hnumuCCinFV_stack_9->SetBinError(21,33.82029);
   hnumuCCinFV_stack_9->SetBinError(22,36.49002);
   hnumuCCinFV_stack_9->SetBinError(23,38.49746);
   hnumuCCinFV_stack_9->SetBinError(24,38.28337);
   hnumuCCinFV_stack_9->SetBinError(25,39.96939);
   hnumuCCinFV_stack_9->SetBinError(26,38.79523);
   hnumuCCinFV_stack_9->SetBinError(27,40.48433);
   hnumuCCinFV_stack_9->SetBinError(28,38.98742);
   hnumuCCinFV_stack_9->SetBinError(29,39.66232);
   hnumuCCinFV_stack_9->SetBinError(30,31.77635);
   hnumuCCinFV_stack_9->SetBinError(31,3.660983);
   hnumuCCinFV_stack_9->SetEntries(290947);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_10->SetBinContent(0,1.033169);
   hnueCCinFV_stack_10->SetBinContent(1,12.50231);
   hnueCCinFV_stack_10->SetBinContent(2,16.22668);
   hnueCCinFV_stack_10->SetBinContent(3,13.25795);
   hnueCCinFV_stack_10->SetBinContent(4,20.86238);
   hnueCCinFV_stack_10->SetBinContent(5,18.28675);
   hnueCCinFV_stack_10->SetBinContent(6,18.10431);
   hnueCCinFV_stack_10->SetBinContent(7,22.53166);
   hnueCCinFV_stack_10->SetBinContent(8,22.14445);
   hnueCCinFV_stack_10->SetBinContent(9,22.27353);
   hnueCCinFV_stack_10->SetBinContent(10,29.37476);
   hnueCCinFV_stack_10->SetBinContent(11,18.9247);
   hnueCCinFV_stack_10->SetBinContent(12,19.33669);
   hnueCCinFV_stack_10->SetBinContent(13,19.50744);
   hnueCCinFV_stack_10->SetBinContent(14,21.22636);
   hnueCCinFV_stack_10->SetBinContent(15,14.42704);
   hnueCCinFV_stack_10->SetBinContent(16,18.92978);
   hnueCCinFV_stack_10->SetBinContent(17,27.34313);
   hnueCCinFV_stack_10->SetBinContent(18,26.7321);
   hnueCCinFV_stack_10->SetBinContent(19,21.82193);
   hnueCCinFV_stack_10->SetBinContent(20,20.24745);
   hnueCCinFV_stack_10->SetBinContent(21,13.24387);
   hnueCCinFV_stack_10->SetBinContent(22,16.65499);
   hnueCCinFV_stack_10->SetBinContent(23,23.76765);
   hnueCCinFV_stack_10->SetBinContent(24,15.14033);
   hnueCCinFV_stack_10->SetBinContent(25,19.27617);
   hnueCCinFV_stack_10->SetBinContent(26,18.03315);
   hnueCCinFV_stack_10->SetBinContent(27,22.14816);
   hnueCCinFV_stack_10->SetBinContent(28,24.53431);
   hnueCCinFV_stack_10->SetBinContent(29,23.47686);
   hnueCCinFV_stack_10->SetBinContent(30,8.409288);
   hnueCCinFV_stack_10->SetBinContent(31,0.1967154);
   hnueCCinFV_stack_10->SetBinError(0,0.6039967);
   hnueCCinFV_stack_10->SetBinError(1,1.737015);
   hnueCCinFV_stack_10->SetBinError(2,2.729715);
   hnueCCinFV_stack_10->SetBinError(3,1.830142);
   hnueCCinFV_stack_10->SetBinError(4,4.076418);
   hnueCCinFV_stack_10->SetBinError(5,3.186526);
   hnueCCinFV_stack_10->SetBinError(6,2.188001);
   hnueCCinFV_stack_10->SetBinError(7,3.421909);
   hnueCCinFV_stack_10->SetBinError(8,2.784077);
   hnueCCinFV_stack_10->SetBinError(9,3.419882);
   hnueCCinFV_stack_10->SetBinError(10,4.707319);
   hnueCCinFV_stack_10->SetBinError(11,2.350188);
   hnueCCinFV_stack_10->SetBinError(12,2.751986);
   hnueCCinFV_stack_10->SetBinError(13,2.379592);
   hnueCCinFV_stack_10->SetBinError(14,3.129687);
   hnueCCinFV_stack_10->SetBinError(15,2.705332);
   hnueCCinFV_stack_10->SetBinError(16,3.162831);
   hnueCCinFV_stack_10->SetBinError(17,3.466191);
   hnueCCinFV_stack_10->SetBinError(18,4.164659);
   hnueCCinFV_stack_10->SetBinError(19,3.229083);
   hnueCCinFV_stack_10->SetBinError(20,2.82575);
   hnueCCinFV_stack_10->SetBinError(21,1.952872);
   hnueCCinFV_stack_10->SetBinError(22,2.40823);
   hnueCCinFV_stack_10->SetBinError(23,4.889394);
   hnueCCinFV_stack_10->SetBinError(24,2.199229);
   hnueCCinFV_stack_10->SetBinError(25,2.521561);
   hnueCCinFV_stack_10->SetBinError(26,2.441996);
   hnueCCinFV_stack_10->SetBinError(27,2.941573);
   hnueCCinFV_stack_10->SetBinError(28,5.065769);
   hnueCCinFV_stack_10->SetBinError(29,3.696555);
   hnueCCinFV_stack_10->SetBinError(30,1.521421);
   hnueCCinFV_stack_10->SetBinError(31,0.1967154);
   hnueCCinFV_stack_10->SetEntries(2156);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__5->SetBinContent(0,549.381);
   hmcerror__5->SetBinContent(1,3782.947);
   hmcerror__5->SetBinContent(2,3745.943);
   hmcerror__5->SetBinContent(3,3570.529);
   hmcerror__5->SetBinContent(4,3454.339);
   hmcerror__5->SetBinContent(5,3939.485);
   hmcerror__5->SetBinContent(6,4087.894);
   hmcerror__5->SetBinContent(7,3922.596);
   hmcerror__5->SetBinContent(8,4013.401);
   hmcerror__5->SetBinContent(9,4140.048);
   hmcerror__5->SetBinContent(10,4426.227);
   hmcerror__5->SetBinContent(11,4341.186);
   hmcerror__5->SetBinContent(12,4185.457);
   hmcerror__5->SetBinContent(13,4331.771);
   hmcerror__5->SetBinContent(14,4226.357);
   hmcerror__5->SetBinContent(15,4097.872);
   hmcerror__5->SetBinContent(16,4413.251);
   hmcerror__5->SetBinContent(17,4358.363);
   hmcerror__5->SetBinContent(18,4353.129);
   hmcerror__5->SetBinContent(19,4382.951);
   hmcerror__5->SetBinContent(20,3984.22);
   hmcerror__5->SetBinContent(21,3607.894);
   hmcerror__5->SetBinContent(22,3769.224);
   hmcerror__5->SetBinContent(23,4101.671);
   hmcerror__5->SetBinContent(24,3856.103);
   hmcerror__5->SetBinContent(25,4248.287);
   hmcerror__5->SetBinContent(26,4012.998);
   hmcerror__5->SetBinContent(27,4133.042);
   hmcerror__5->SetBinContent(28,4012.066);
   hmcerror__5->SetBinContent(29,3828.178);
   hmcerror__5->SetBinContent(30,2719.3);
   hmcerror__5->SetBinContent(31,56.08014);
   hmcerror__5->SetBinError(0,14.61892);
   hmcerror__5->SetBinError(1,638.326);
   hmcerror__5->SetBinError(2,644.8973);
   hmcerror__5->SetBinError(3,649.7027);
   hmcerror__5->SetBinError(4,649.8446);
   hmcerror__5->SetBinError(5,673.2764);
   hmcerror__5->SetBinError(6,697.6291);
   hmcerror__5->SetBinError(7,663.8245);
   hmcerror__5->SetBinError(8,639.3376);
   hmcerror__5->SetBinError(9,682.8248);
   hmcerror__5->SetBinError(10,713.1029);
   hmcerror__5->SetBinError(11,678.2864);
   hmcerror__5->SetBinError(12,685.7934);
   hmcerror__5->SetBinError(13,683.8083);
   hmcerror__5->SetBinError(14,672.9266);
   hmcerror__5->SetBinError(15,671.0197);
   hmcerror__5->SetBinError(16,720.6214);
   hmcerror__5->SetBinError(17,701.4461);
   hmcerror__5->SetBinError(18,704.2661);
   hmcerror__5->SetBinError(19,698.7262);
   hmcerror__5->SetBinError(20,648.0994);
   hmcerror__5->SetBinError(21,567.2872);
   hmcerror__5->SetBinError(22,629.9089);
   hmcerror__5->SetBinError(23,708.7853);
   hmcerror__5->SetBinError(24,643.2908);
   hmcerror__5->SetBinError(25,712.9487);
   hmcerror__5->SetBinError(26,662.7746);
   hmcerror__5->SetBinError(27,695.0807);
   hmcerror__5->SetBinError(28,677.2675);
   hmcerror__5->SetBinError(29,704.1276);
   hmcerror__5->SetBinError(30,479.89);
   hmcerror__5->SetBinError(31,28.30331);
   hmcerror__5->SetBinError(32,0.4212968);
   hmcerror__5->SetBinError(33,0.4212968);
   hmcerror__5->SetEntries(104733.2);

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
   
   Double_t _fx3005[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3005[32] = {
   3530,
   3755,
   3527,
   3509,
   3977,
   4041,
   3891,
   3863,
   4019,
   4192,
   4191,
   4212,
   4114,
   4067,
   3913,
   4130,
   4044,
   4166,
   4019,
   3765,
   3392,
   3777,
   3979,
   3758,
   4096,
   3938,
   4141,
   3876,
   3927,
   2927,
   46,
   0};
   Double_t _felx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3005[32] = {
   59.4138,
   61.27805,
   59.38855,
   59.23681,
   63.06346,
   63.56886,
   62.37788,
   62.15304,
   63.39558,
   64.74566,
   64.73793,
   64.89992,
   64.14047,
   63.77304,
   62.55398,
   64.26508,
   63.59245,
   64.54456,
   63.39558,
   61.3596,
   58.24088,
   61.4573,
   63.07932,
   61.30253,
   64,
   62.75349,
   64.3506,
   62.25753,
   62.66578,
   54.10176,
   6.9153,
   0};
   Double_t _fehx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3005[32] = {
   59.4138,
   61.27805,
   59.38855,
   59.23681,
   63.06346,
   63.56886,
   62.37788,
   62.15304,
   63.39558,
   64.74566,
   64.73793,
   64.89992,
   64.14047,
   63.77304,
   62.55398,
   64.26508,
   63.59245,
   64.54456,
   63.39558,
   61.3596,
   58.24088,
   61.4573,
   63.07932,
   61.30253,
   64,
   62.75349,
   64.3506,
   62.25753,
   62.66578,
   54.10176,
   6.7108,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1210);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(4704.59);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=27.1/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 116782.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 1361.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 6381.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 983.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4440.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3441.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9699.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 9970.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 83222.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 588.9","F");

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
   TText *pt_LaTex = pt->AddText("generic_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3006[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3006[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3006[32] = {
   0.1687378,
   0.1721589,
   0.1819626,
   0.1881242,
   0.1709047,
   0.1706573,
   0.1692309,
   0.1593007,
   0.1649316,
   0.1611085,
   0.1562445,
   0.1638515,
   0.1578589,
   0.1592214,
   0.1637483,
   0.1632858,
   0.1609426,
   0.1617839,
   0.1594191,
   0.1626665,
   0.157235,
   0.167119,
   0.172804,
   0.1668241,
   0.1678203,
   0.165157,
   0.1681765,
   0.1688077,
   0.1839328,
   0.1764756,
   0.504694,
   0};
   Double_t _fehx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3006[32] = {
   0.1687378,
   0.1721589,
   0.1819626,
   0.1881242,
   0.1709047,
   0.1706573,
   0.1692309,
   0.1593007,
   0.1649316,
   0.1611085,
   0.1562445,
   0.1638515,
   0.1578589,
   0.1592214,
   0.1637483,
   0.1632858,
   0.1609426,
   0.1617839,
   0.1594191,
   0.1626665,
   0.157235,
   0.167119,
   0.172804,
   0.1668241,
   0.1678203,
   0.165157,
   0.1681765,
   0.1688077,
   0.1839328,
   0.1764756,
   0.504694,
   0};
   grae = new TGraphAsymmErrors(32,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1210);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3007[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3007[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3007[32] = {
   0.1498822,
   0.1495746,
   0.1505073,
   0.1497838,
   0.1495658,
   0.1495483,
   0.1490492,
   0.1447041,
   0.1457593,
   0.1496633,
   0.144287,
   0.1482535,
   0.1481798,
   0.1483629,
   0.1463226,
   0.1503707,
   0.1479737,
   0.1492428,
   0.1455072,
   0.1463595,
   0.1415605,
   0.1500221,
   0.1477469,
   0.1502127,
   0.148758,
   0.1499941,
   0.1511442,
   0.1473837,
   0.1542634,
   0.1477995,
   0.2645575,
   0};
   Double_t _fehx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3007[32] = {
   0.1498822,
   0.1495746,
   0.1505073,
   0.1497838,
   0.1495658,
   0.1495483,
   0.1490492,
   0.1447041,
   0.1457593,
   0.1496633,
   0.144287,
   0.1482535,
   0.1481798,
   0.1483629,
   0.1463226,
   0.1503707,
   0.1479737,
   0.1492428,
   0.1455072,
   0.1463595,
   0.1415605,
   0.1500221,
   0.1477469,
   0.1502127,
   0.148758,
   0.1499941,
   0.1511442,
   0.1473837,
   0.1542634,
   0.1477995,
   0.2645575,
   0};
   grae = new TGraphAsymmErrors(32,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1210);
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
   
   Double_t _fx3008[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3008[32] = {
   0.933135,
   1.002418,
   0.9878089,
   1.015824,
   1.009523,
   0.9885286,
   0.991945,
   0.9625253,
   0.9707617,
   0.947082,
   0.9654045,
   1.006342,
   0.9497271,
   0.9622945,
   0.954886,
   0.935818,
   0.9278713,
   0.9570127,
   0.9169622,
   0.9449778,
   0.9401606,
   1.002063,
   0.9700925,
   0.9745591,
   0.9641534,
   0.9813113,
   1.001925,
   0.9660858,
   1.025814,
   1.07638,
   0.8202547,
   10};
   Double_t _felx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3008[32] = {
   0.01570569,
   0.01635851,
   0.01663299,
   0.01714852,
   0.01600805,
   0.01555052,
   0.01590219,
   0.01548638,
   0.01531277,
   0.01462773,
   0.0149125,
   0.01550605,
   0.01480699,
   0.01508936,
   0.01526499,
   0.01456184,
   0.0145909,
   0.01482716,
   0.01446413,
   0.01540065,
   0.01614262,
   0.01630503,
   0.01537893,
   0.01589753,
   0.0150649,
   0.01563756,
   0.01556979,
   0.01551757,
   0.01636961,
   0.01989547,
   0.123311,
   0};
   Double_t _fehx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3008[32] = {
   0.01570569,
   0.01635851,
   0.01663299,
   0.01714852,
   0.01600805,
   0.01555052,
   0.01590219,
   0.01548638,
   0.01531277,
   0.01462773,
   0.0149125,
   0.01550605,
   0.01480699,
   0.01508936,
   0.01526499,
   0.01456184,
   0.0145909,
   0.01482716,
   0.01446413,
   0.01540065,
   0.01614262,
   0.01630503,
   0.01537893,
   0.01589753,
   0.0150649,
   0.01563756,
   0.01556979,
   0.01551757,
   0.01636961,
   0.01989547,
   0.1196645,
   0};
   grae = new TGraphAsymmErrors(32,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1210);
   Graph_Graph3008->SetMinimum(0.6272493);
   Graph_Graph3008->SetMaximum(10.93031);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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

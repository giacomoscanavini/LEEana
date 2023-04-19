#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 16:16:04 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
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
   pad1->Range(-0.4846154,-7.64,3.553846,844.8232);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__16->SetBinContent(1,96.11279);
   hmc__16->SetBinContent(2,238.643);
   hmc__16->SetBinContent(3,345.3087);
   hmc__16->SetBinContent(4,374.6885);
   hmc__16->SetBinContent(5,375.873);
   hmc__16->SetBinContent(6,350.0163);
   hmc__16->SetBinContent(7,309.7505);
   hmc__16->SetBinContent(8,270.6484);
   hmc__16->SetBinContent(9,208.089);
   hmc__16->SetBinContent(10,179.0652);
   hmc__16->SetBinContent(11,142.2259);
   hmc__16->SetBinContent(12,113.3966);
   hmc__16->SetBinContent(13,99.18536);
   hmc__16->SetBinContent(14,79.77052);
   hmc__16->SetBinContent(15,78.6064);
   hmc__16->SetBinContent(16,71.2896);
   hmc__16->SetBinContent(17,61.92517);
   hmc__16->SetBinContent(18,62.62548);
   hmc__16->SetBinContent(19,61.50742);
   hmc__16->SetBinContent(20,54.53836);
   hmc__16->SetBinContent(21,42.60504);
   hmc__16->SetBinContent(22,36.97665);
   hmc__16->SetBinContent(23,21.03963);
   hmc__16->SetBinContent(24,9.11775);
   hmc__16->SetBinError(1,34.99161);
   hmc__16->SetBinError(2,65.45902);
   hmc__16->SetBinError(3,91.22496);
   hmc__16->SetBinError(4,91.55549);
   hmc__16->SetBinError(5,93.75105);
   hmc__16->SetBinError(6,93.74617);
   hmc__16->SetBinError(7,80.5948);
   hmc__16->SetBinError(8,74.84016);
   hmc__16->SetBinError(9,57.43917);
   hmc__16->SetBinError(10,47.68841);
   hmc__16->SetBinError(11,40.75921);
   hmc__16->SetBinError(12,39.51986);
   hmc__16->SetBinError(13,37.13412);
   hmc__16->SetBinError(14,24.07367);
   hmc__16->SetBinError(15,24.83259);
   hmc__16->SetBinError(16,24.00195);
   hmc__16->SetBinError(17,19.09017);
   hmc__16->SetBinError(18,20.30818);
   hmc__16->SetBinError(19,20.74218);
   hmc__16->SetBinError(20,22.80854);
   hmc__16->SetBinError(21,18.41196);
   hmc__16->SetBinError(22,14.67759);
   hmc__16->SetBinError(23,10.93735);
   hmc__16->SetBinError(24,6.614559);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-7.64);
   hmc__16->SetMaximum(802.2);
   hmc__16->SetEntries(3645.257);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,3.15);
   hs6_stack_6->SetMinimum(-4.695896e-09);
   hs6_stack_6->SetMaximum(394.6666);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.311253);
   hbadmatch_stack_1->SetBinContent(2,4.052485);
   hbadmatch_stack_1->SetBinContent(3,4.883003);
   hbadmatch_stack_1->SetBinContent(4,5.652588);
   hbadmatch_stack_1->SetBinContent(5,6.000874);
   hbadmatch_stack_1->SetBinContent(6,6.614567);
   hbadmatch_stack_1->SetBinContent(7,6.827444);
   hbadmatch_stack_1->SetBinContent(8,5.731084);
   hbadmatch_stack_1->SetBinContent(9,4.151456);
   hbadmatch_stack_1->SetBinContent(10,4.94322);
   hbadmatch_stack_1->SetBinContent(11,6.789462);
   hbadmatch_stack_1->SetBinContent(12,3.517817);
   hbadmatch_stack_1->SetBinContent(13,3.233204);
   hbadmatch_stack_1->SetBinContent(14,2.384254);
   hbadmatch_stack_1->SetBinContent(15,3.600577);
   hbadmatch_stack_1->SetBinContent(16,2.648637);
   hbadmatch_stack_1->SetBinContent(17,1.755266);
   hbadmatch_stack_1->SetBinContent(18,0.4372683);
   hbadmatch_stack_1->SetBinContent(19,1.829036);
   hbadmatch_stack_1->SetBinContent(20,0.5884556);
   hbadmatch_stack_1->SetBinContent(21,2.174577);
   hbadmatch_stack_1->SetBinContent(22,2.102989);
   hbadmatch_stack_1->SetBinContent(23,1.010191);
   hbadmatch_stack_1->SetBinError(1,1.048154);
   hbadmatch_stack_1->SetBinError(2,1.058117);
   hbadmatch_stack_1->SetBinError(3,1.1446);
   hbadmatch_stack_1->SetBinError(4,1.192513);
   hbadmatch_stack_1->SetBinError(5,1.255839);
   hbadmatch_stack_1->SetBinError(6,1.347497);
   hbadmatch_stack_1->SetBinError(7,1.435425);
   hbadmatch_stack_1->SetBinError(8,1.241957);
   hbadmatch_stack_1->SetBinError(9,1.00996);
   hbadmatch_stack_1->SetBinError(10,1.342308);
   hbadmatch_stack_1->SetBinError(11,2.266711);
   hbadmatch_stack_1->SetBinError(12,0.9412229);
   hbadmatch_stack_1->SetBinError(13,1.730766);
   hbadmatch_stack_1->SetBinError(14,0.8207858);
   hbadmatch_stack_1->SetBinError(15,0.9602117);
   hbadmatch_stack_1->SetBinError(16,0.8241638);
   hbadmatch_stack_1->SetBinError(17,0.7576989);
   hbadmatch_stack_1->SetBinError(18,0.3107453);
   hbadmatch_stack_1->SetBinError(19,0.7147958);
   hbadmatch_stack_1->SetBinError(20,0.3397478);
   hbadmatch_stack_1->SetBinError(21,0.7718852);
   hbadmatch_stack_1->SetBinError(22,1.694319);
   hbadmatch_stack_1->SetBinError(23,0.6159302);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,3.558419);
   hext_stack_2->SetBinContent(2,5.930171);
   hext_stack_2->SetBinContent(3,12.49037);
   hext_stack_2->SetBinContent(4,16.03442);
   hext_stack_2->SetBinContent(5,24.69382);
   hext_stack_2->SetBinContent(6,26.19776);
   hext_stack_2->SetBinContent(7,27.11628);
   hext_stack_2->SetBinContent(8,26.43555);
   hext_stack_2->SetBinContent(9,23.14244);
   hext_stack_2->SetBinContent(10,25.81705);
   hext_stack_2->SetBinContent(11,16.77978);
   hext_stack_2->SetBinContent(12,15.4706);
   hext_stack_2->SetBinContent(13,11.2678);
   hext_stack_2->SetBinContent(14,8.433196);
   hext_stack_2->SetBinContent(15,6.318);
   hext_stack_2->SetBinContent(16,7.298373);
   hext_stack_2->SetBinContent(17,7.142787);
   hext_stack_2->SetBinContent(18,5.191995);
   hext_stack_2->SetBinContent(19,4.285006);
   hext_stack_2->SetBinContent(20,4.53161);
   hext_stack_2->SetBinContent(21,1.461993);
   hext_stack_2->SetBinContent(22,2.096426);
   hext_stack_2->SetBinContent(23,1.055394);
   hext_stack_2->SetBinContent(24,0.6487947);
   hext_stack_2->SetBinError(1,1.301958);
   hext_stack_2->SetBinError(2,1.491489);
   hext_stack_2->SetBinError(3,2.219646);
   hext_stack_2->SetBinError(4,2.650344);
   hext_stack_2->SetBinError(5,3.247194);
   hext_stack_2->SetBinError(6,3.268936);
   hext_stack_2->SetBinError(7,3.50356);
   hext_stack_2->SetBinError(8,3.255145);
   hext_stack_2->SetBinError(9,3.185007);
   hext_stack_2->SetBinError(10,3.373804);
   hext_stack_2->SetBinError(11,2.625353);
   hext_stack_2->SetBinError(12,2.556877);
   hext_stack_2->SetBinError(13,2.183388);
   hext_stack_2->SetBinError(14,1.88251);
   hext_stack_2->SetBinError(15,1.630074);
   hext_stack_2->SetBinError(16,1.664825);
   hext_stack_2->SetBinError(17,1.709301);
   hext_stack_2->SetBinError(18,1.468055);
   hext_stack_2->SetBinError(19,1.35297);
   hext_stack_2->SetBinError(20,1.418025);
   hext_stack_2->SetBinError(21,0.7356036);
   hext_stack_2->SetBinError(22,1.074236);
   hext_stack_2->SetBinError(23,0.6130171);
   hext_stack_2->SetBinError(24,0.4587671);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,1.373798);
   hdirt_stack_3->SetBinContent(3,1.885347);
   hdirt_stack_3->SetBinContent(4,3.927725);
   hdirt_stack_3->SetBinContent(5,1.830086);
   hdirt_stack_3->SetBinContent(6,4.757204);
   hdirt_stack_3->SetBinContent(7,5.723991);
   hdirt_stack_3->SetBinContent(8,1.893616);
   hdirt_stack_3->SetBinContent(9,3.630091);
   hdirt_stack_3->SetBinContent(10,2.399609);
   hdirt_stack_3->SetBinContent(11,2.060122);
   hdirt_stack_3->SetBinContent(12,1.547598);
   hdirt_stack_3->SetBinContent(13,0.7415437);
   hdirt_stack_3->SetBinContent(14,1.901332);
   hdirt_stack_3->SetBinContent(15,1.375627);
   hdirt_stack_3->SetBinContent(16,1.464508);
   hdirt_stack_3->SetBinContent(17,1.533331);
   hdirt_stack_3->SetBinContent(18,1.655958);
   hdirt_stack_3->SetBinContent(19,0.6512973);
   hdirt_stack_3->SetBinContent(20,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.2863297);
   hdirt_stack_3->SetBinContent(22,0.6287382);
   hdirt_stack_3->SetBinContent(23,0.2761429);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(2,0.5770587);
   hdirt_stack_3->SetBinError(3,0.669882);
   hdirt_stack_3->SetBinError(4,1.173119);
   hdirt_stack_3->SetBinError(5,0.6634607);
   hdirt_stack_3->SetBinError(6,1.105297);
   hdirt_stack_3->SetBinError(7,1.595147);
   hdirt_stack_3->SetBinError(8,0.6369915);
   hdirt_stack_3->SetBinError(9,0.9348768);
   hdirt_stack_3->SetBinError(10,0.7739902);
   hdirt_stack_3->SetBinError(11,0.8126252);
   hdirt_stack_3->SetBinError(12,0.6091969);
   hdirt_stack_3->SetBinError(13,0.5263716);
   hdirt_stack_3->SetBinError(14,1.063316);
   hdirt_stack_3->SetBinError(15,0.5826169);
   hdirt_stack_3->SetBinError(16,0.6309478);
   hdirt_stack_3->SetBinError(17,0.6614295);
   hdirt_stack_3->SetBinError(18,0.7173906);
   hdirt_stack_3->SetBinError(19,0.4229282);
   hdirt_stack_3->SetBinError(20,0.2188956);
   hdirt_stack_3->SetBinError(21,0.2025938);
   hdirt_stack_3->SetBinError(22,0.3958337);
   hdirt_stack_3->SetBinError(23,0.1952625);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,4.106273);
   houtFV_stack_4->SetBinContent(2,12.04778);
   houtFV_stack_4->SetBinContent(3,22.02924);
   houtFV_stack_4->SetBinContent(4,30.98937);
   houtFV_stack_4->SetBinContent(5,29.72631);
   houtFV_stack_4->SetBinContent(6,36.60855);
   houtFV_stack_4->SetBinContent(7,32.02702);
   houtFV_stack_4->SetBinContent(8,29.99401);
   houtFV_stack_4->SetBinContent(9,21.67475);
   houtFV_stack_4->SetBinContent(10,21.06443);
   houtFV_stack_4->SetBinContent(11,16.06362);
   houtFV_stack_4->SetBinContent(12,13.96833);
   houtFV_stack_4->SetBinContent(13,8.936306);
   houtFV_stack_4->SetBinContent(14,7.898789);
   houtFV_stack_4->SetBinContent(15,8.533829);
   houtFV_stack_4->SetBinContent(16,7.579471);
   houtFV_stack_4->SetBinContent(17,7.949661);
   houtFV_stack_4->SetBinContent(18,5.327985);
   houtFV_stack_4->SetBinContent(19,7.785541);
   houtFV_stack_4->SetBinContent(20,6.738685);
   houtFV_stack_4->SetBinContent(21,5.545245);
   houtFV_stack_4->SetBinContent(22,2.585803);
   houtFV_stack_4->SetBinContent(23,1.125349);
   houtFV_stack_4->SetBinContent(24,0.8770706);
   houtFV_stack_4->SetBinError(1,1.000664);
   houtFV_stack_4->SetBinError(2,1.751109);
   houtFV_stack_4->SetBinError(3,2.356071);
   houtFV_stack_4->SetBinError(4,2.794868);
   houtFV_stack_4->SetBinError(5,2.726799);
   houtFV_stack_4->SetBinError(6,3.042967);
   houtFV_stack_4->SetBinError(7,2.843732);
   houtFV_stack_4->SetBinError(8,2.719326);
   houtFV_stack_4->SetBinError(9,2.28219);
   houtFV_stack_4->SetBinError(10,2.317496);
   houtFV_stack_4->SetBinError(11,1.952418);
   houtFV_stack_4->SetBinError(12,1.931898);
   houtFV_stack_4->SetBinError(13,1.501071);
   houtFV_stack_4->SetBinError(14,1.377725);
   houtFV_stack_4->SetBinError(15,1.40435);
   houtFV_stack_4->SetBinError(16,1.338559);
   houtFV_stack_4->SetBinError(17,1.481762);
   houtFV_stack_4->SetBinError(18,1.091122);
   houtFV_stack_4->SetBinError(19,1.331507);
   houtFV_stack_4->SetBinError(20,1.29426);
   houtFV_stack_4->SetBinError(21,1.234334);
   houtFV_stack_4->SetBinError(22,0.8083481);
   houtFV_stack_4->SetBinError(23,0.5194673);
   houtFV_stack_4->SetBinError(24,0.5197486);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.794093);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,17.34457);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,19.50667);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,14.49145);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.811447);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.771667);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.16991);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.077562);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.491494);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.07349);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.9052579);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6131358);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.604926);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8968673);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.352515);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.489357);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.241901);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9235919);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7724387);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7331013);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4719735);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4167175);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3401847);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.302967);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1749792);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4980546);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6976678);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.686794);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.505608);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.450808);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.074322);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2285151);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4232048);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3667934);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4301228);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3674124);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1994106);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,34.81986);
   hNCpi0inFVres_stack_7->SetBinContent(2,92.06671);
   hNCpi0inFVres_stack_7->SetBinContent(3,137.512);
   hNCpi0inFVres_stack_7->SetBinContent(4,157.1419);
   hNCpi0inFVres_stack_7->SetBinContent(5,168.4481);
   hNCpi0inFVres_stack_7->SetBinContent(6,154.4826);
   hNCpi0inFVres_stack_7->SetBinContent(7,133.2625);
   hNCpi0inFVres_stack_7->SetBinContent(8,119.451);
   hNCpi0inFVres_stack_7->SetBinContent(9,85.78086);
   hNCpi0inFVres_stack_7->SetBinContent(10,68.86726);
   hNCpi0inFVres_stack_7->SetBinContent(11,55.95996);
   hNCpi0inFVres_stack_7->SetBinContent(12,46.27832);
   hNCpi0inFVres_stack_7->SetBinContent(13,40.8293);
   hNCpi0inFVres_stack_7->SetBinContent(14,29.57195);
   hNCpi0inFVres_stack_7->SetBinContent(15,29.06757);
   hNCpi0inFVres_stack_7->SetBinContent(16,29.13501);
   hNCpi0inFVres_stack_7->SetBinContent(17,25.25996);
   hNCpi0inFVres_stack_7->SetBinContent(18,25.78686);
   hNCpi0inFVres_stack_7->SetBinContent(19,23.85876);
   hNCpi0inFVres_stack_7->SetBinContent(20,23.17637);
   hNCpi0inFVres_stack_7->SetBinContent(21,14.77942);
   hNCpi0inFVres_stack_7->SetBinContent(22,13.59599);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.655763);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.124816);
   hNCpi0inFVres_stack_7->SetBinError(1,2.006799);
   hNCpi0inFVres_stack_7->SetBinError(2,3.139015);
   hNCpi0inFVres_stack_7->SetBinError(3,3.820144);
   hNCpi0inFVres_stack_7->SetBinError(4,4.098227);
   hNCpi0inFVres_stack_7->SetBinError(5,4.316544);
   hNCpi0inFVres_stack_7->SetBinError(6,4.112346);
   hNCpi0inFVres_stack_7->SetBinError(7,3.745694);
   hNCpi0inFVres_stack_7->SetBinError(8,3.614922);
   hNCpi0inFVres_stack_7->SetBinError(9,2.948903);
   hNCpi0inFVres_stack_7->SetBinError(10,2.689674);
   hNCpi0inFVres_stack_7->SetBinError(11,2.383389);
   hNCpi0inFVres_stack_7->SetBinError(12,2.233589);
   hNCpi0inFVres_stack_7->SetBinError(13,2.162584);
   hNCpi0inFVres_stack_7->SetBinError(14,1.709729);
   hNCpi0inFVres_stack_7->SetBinError(15,1.665039);
   hNCpi0inFVres_stack_7->SetBinError(16,1.722223);
   hNCpi0inFVres_stack_7->SetBinError(17,1.641804);
   hNCpi0inFVres_stack_7->SetBinError(18,1.70806);
   hNCpi0inFVres_stack_7->SetBinError(19,1.645504);
   hNCpi0inFVres_stack_7->SetBinError(20,1.643512);
   hNCpi0inFVres_stack_7->SetBinError(21,1.227663);
   hNCpi0inFVres_stack_7->SetBinError(22,1.194509);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9408842);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6133829);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.759392);
   hNCpi0inFVdis_stack_8->SetBinContent(2,24.02515);
   hNCpi0inFVdis_stack_8->SetBinContent(3,34.91384);
   hNCpi0inFVdis_stack_8->SetBinContent(4,35.27254);
   hNCpi0inFVdis_stack_8->SetBinContent(5,31.90277);
   hNCpi0inFVdis_stack_8->SetBinContent(6,28.78212);
   hNCpi0inFVdis_stack_8->SetBinContent(7,24.34384);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.02221);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.80227);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.49858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.74985);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.698608);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.075328);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.252106);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.724437);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.194641);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.734792);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.555438);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.063879);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.456952);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.450406);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.26182);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.798562);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.018582);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.586128);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.953233);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.901878);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.813766);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.734889);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.613919);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.264032);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.330294);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.047684);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.066493);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9306941);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7193449);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.624076);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9295089);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5910851);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6021216);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6239205);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8044443);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5431593);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7422904);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5677429);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4636538);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06834073);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,14.78966);
   hCCpi0inFV_stack_10->SetBinContent(2,36.65935);
   hCCpi0inFV_stack_10->SetBinContent(3,55.85919);
   hCCpi0inFV_stack_10->SetBinContent(4,56.83109);
   hCCpi0inFV_stack_10->SetBinContent(5,47.72854);
   hCCpi0inFV_stack_10->SetBinContent(6,42.81539);
   hCCpi0inFV_stack_10->SetBinContent(7,42.38326);
   hCCpi0inFV_stack_10->SetBinContent(8,34.77228);
   hCCpi0inFV_stack_10->SetBinContent(9,24.46126);
   hCCpi0inFV_stack_10->SetBinContent(10,24.77634);
   hCCpi0inFV_stack_10->SetBinContent(11,17.15025);
   hCCpi0inFV_stack_10->SetBinContent(12,10.55852);
   hCCpi0inFV_stack_10->SetBinContent(13,12.11157);
   hCCpi0inFV_stack_10->SetBinContent(14,11.9732);
   hCCpi0inFV_stack_10->SetBinContent(15,12.31375);
   hCCpi0inFV_stack_10->SetBinContent(16,9.460907);
   hCCpi0inFV_stack_10->SetBinContent(17,6.942045);
   hCCpi0inFV_stack_10->SetBinContent(18,9.132607);
   hCCpi0inFV_stack_10->SetBinContent(19,8.599226);
   hCCpi0inFV_stack_10->SetBinContent(20,7.092269);
   hCCpi0inFV_stack_10->SetBinContent(21,4.79339);
   hCCpi0inFV_stack_10->SetBinContent(22,4.379556);
   hCCpi0inFV_stack_10->SetBinContent(23,4.049639);
   hCCpi0inFV_stack_10->SetBinContent(24,2.445722);
   hCCpi0inFV_stack_10->SetBinError(1,1.947237);
   hCCpi0inFV_stack_10->SetBinError(2,2.986469);
   hCCpi0inFV_stack_10->SetBinError(3,3.710145);
   hCCpi0inFV_stack_10->SetBinError(4,3.8486);
   hCCpi0inFV_stack_10->SetBinError(5,3.432149);
   hCCpi0inFV_stack_10->SetBinError(6,3.289969);
   hCCpi0inFV_stack_10->SetBinError(7,3.23473);
   hCCpi0inFV_stack_10->SetBinError(8,3.006119);
   hCCpi0inFV_stack_10->SetBinError(9,2.519752);
   hCCpi0inFV_stack_10->SetBinError(10,2.450815);
   hCCpi0inFV_stack_10->SetBinError(11,2.048199);
   hCCpi0inFV_stack_10->SetBinError(12,1.630855);
   hCCpi0inFV_stack_10->SetBinError(13,1.680287);
   hCCpi0inFV_stack_10->SetBinError(14,1.797412);
   hCCpi0inFV_stack_10->SetBinError(15,1.732628);
   hCCpi0inFV_stack_10->SetBinError(16,1.511881);
   hCCpi0inFV_stack_10->SetBinError(17,1.286517);
   hCCpi0inFV_stack_10->SetBinError(18,1.446522);
   hCCpi0inFV_stack_10->SetBinError(19,1.44132);
   hCCpi0inFV_stack_10->SetBinError(20,1.317118);
   hCCpi0inFV_stack_10->SetBinError(21,1.111494);
   hCCpi0inFV_stack_10->SetBinError(22,1.0361);
   hCCpi0inFV_stack_10->SetBinError(23,1.018986);
   hCCpi0inFV_stack_10->SetBinError(24,0.7600838);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,8.692805);
   hNCinFV_stack_11->SetBinContent(2,23.62992);
   hNCinFV_stack_11->SetBinContent(3,30.09678);
   hNCinFV_stack_11->SetBinContent(4,32.00053);
   hNCinFV_stack_11->SetBinContent(5,30.82821);
   hNCinFV_stack_11->SetBinContent(6,23.2348);
   hNCinFV_stack_11->SetBinContent(7,13.89254);
   hNCinFV_stack_11->SetBinContent(8,14.80995);
   hNCinFV_stack_11->SetBinContent(9,12.4589);
   hNCinFV_stack_11->SetBinContent(10,8.605977);
   hNCinFV_stack_11->SetBinContent(11,7.762482);
   hNCinFV_stack_11->SetBinContent(12,7.6224);
   hNCinFV_stack_11->SetBinContent(13,8.251192);
   hNCinFV_stack_11->SetBinContent(14,4.503085);
   hNCinFV_stack_11->SetBinContent(15,5.284875);
   hNCinFV_stack_11->SetBinContent(16,3.810896);
   hNCinFV_stack_11->SetBinContent(17,3.664661);
   hNCinFV_stack_11->SetBinContent(18,5.378465);
   hNCinFV_stack_11->SetBinContent(19,3.767786);
   hNCinFV_stack_11->SetBinContent(20,3.861376);
   hNCinFV_stack_11->SetBinContent(21,4.05471);
   hNCinFV_stack_11->SetBinContent(22,3.080668);
   hNCinFV_stack_11->SetBinContent(23,1.963773);
   hNCinFV_stack_11->SetBinContent(24,0.9286332);
   hNCinFV_stack_11->SetBinError(1,1.481242);
   hNCinFV_stack_11->SetBinError(2,2.490343);
   hNCinFV_stack_11->SetBinError(3,2.769026);
   hNCinFV_stack_11->SetBinError(4,2.844086);
   hNCinFV_stack_11->SetBinError(5,2.742898);
   hNCinFV_stack_11->SetBinError(6,2.474622);
   hNCinFV_stack_11->SetBinError(7,1.820319);
   hNCinFV_stack_11->SetBinError(8,1.933573);
   hNCinFV_stack_11->SetBinError(9,1.754904);
   hNCinFV_stack_11->SetBinError(10,1.442239);
   hNCinFV_stack_11->SetBinError(11,1.400809);
   hNCinFV_stack_11->SetBinError(12,1.373524);
   hNCinFV_stack_11->SetBinError(13,1.468672);
   hNCinFV_stack_11->SetBinError(14,1.039253);
   hNCinFV_stack_11->SetBinError(15,1.110337);
   hNCinFV_stack_11->SetBinError(16,0.9186785);
   hNCinFV_stack_11->SetBinError(17,0.9819618);
   hNCinFV_stack_11->SetBinError(18,1.16169);
   hNCinFV_stack_11->SetBinError(19,0.9414194);
   hNCinFV_stack_11->SetBinError(20,1.001472);
   hNCinFV_stack_11->SetBinError(21,1.01996);
   hNCinFV_stack_11->SetBinError(22,0.8075766);
   hNCinFV_stack_11->SetBinError(23,0.6210031);
   hNCinFV_stack_11->SetBinError(24,0.48078);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,7.234545);
   hnumuCCinFV_stack_12->SetBinContent(2,14.64686);
   hnumuCCinFV_stack_12->SetBinContent(3,21.67648);
   hnumuCCinFV_stack_12->SetBinContent(4,19.67652);
   hnumuCCinFV_stack_12->SetBinContent(5,22.24995);
   hnumuCCinFV_stack_12->SetBinContent(6,17.34423);
   hnumuCCinFV_stack_12->SetBinContent(7,16.8366);
   hnumuCCinFV_stack_12->SetBinContent(8,16.71493);
   hnumuCCinFV_stack_12->SetBinContent(9,12.63046);
   hnumuCCinFV_stack_12->SetBinContent(10,9.351417);
   hnumuCCinFV_stack_12->SetBinContent(11,7.716554);
   hnumuCCinFV_stack_12->SetBinContent(12,5.735259);
   hnumuCCinFV_stack_12->SetBinContent(13,7.895433);
   hnumuCCinFV_stack_12->SetBinContent(14,7.432878);
   hnumuCCinFV_stack_12->SetBinContent(15,4.382309);
   hnumuCCinFV_stack_12->SetBinContent(16,4.82671);
   hnumuCCinFV_stack_12->SetBinContent(17,3.482481);
   hnumuCCinFV_stack_12->SetBinContent(18,4.520629);
   hnumuCCinFV_stack_12->SetBinContent(19,3.601118);
   hnumuCCinFV_stack_12->SetBinContent(20,2.445546);
   hnumuCCinFV_stack_12->SetBinContent(21,3.657682);
   hnumuCCinFV_stack_12->SetBinContent(22,2.672687);
   hnumuCCinFV_stack_12->SetBinContent(23,1.057142);
   hnumuCCinFV_stack_12->SetBinContent(24,0.252159);
   hnumuCCinFV_stack_12->SetBinError(1,1.374933);
   hnumuCCinFV_stack_12->SetBinError(2,1.941474);
   hnumuCCinFV_stack_12->SetBinError(3,2.368225);
   hnumuCCinFV_stack_12->SetBinError(4,2.222844);
   hnumuCCinFV_stack_12->SetBinError(5,2.941728);
   hnumuCCinFV_stack_12->SetBinError(6,2.130984);
   hnumuCCinFV_stack_12->SetBinError(7,2.465913);
   hnumuCCinFV_stack_12->SetBinError(8,2.795068);
   hnumuCCinFV_stack_12->SetBinError(9,1.901897);
   hnumuCCinFV_stack_12->SetBinError(10,1.988224);
   hnumuCCinFV_stack_12->SetBinError(11,1.484513);
   hnumuCCinFV_stack_12->SetBinError(12,1.351804);
   hnumuCCinFV_stack_12->SetBinError(13,1.700281);
   hnumuCCinFV_stack_12->SetBinError(14,2.032402);
   hnumuCCinFV_stack_12->SetBinError(15,1.064311);
   hnumuCCinFV_stack_12->SetBinError(16,1.299458);
   hnumuCCinFV_stack_12->SetBinError(17,0.9628251);
   hnumuCCinFV_stack_12->SetBinError(18,1.409125);
   hnumuCCinFV_stack_12->SetBinError(19,1.001559);
   hnumuCCinFV_stack_12->SetBinError(20,0.8454655);
   hnumuCCinFV_stack_12->SetBinError(21,0.9913819);
   hnumuCCinFV_stack_12->SetBinError(22,0.9276445);
   hnumuCCinFV_stack_12->SetBinError(23,0.4748185);
   hnumuCCinFV_stack_12->SetBinError(24,0.2043794);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,3.01859);
   hnueCCinFV_stack_13->SetBinContent(2,6.000763);
   hnueCCinFV_stack_13->SetBinContent(3,3.702363);
   hnueCCinFV_stack_13->SetBinContent(4,0.9835871);
   hnueCCinFV_stack_13->SetBinContent(5,2.091373);
   hnueCCinFV_stack_13->SetBinContent(6,1.900778);
   hnueCCinFV_stack_13->SetBinContent(7,1.911736);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439483);
   hnueCCinFV_stack_13->SetBinContent(9,2.37692);
   hnueCCinFV_stack_13->SetBinContent(10,1.375251);
   hnueCCinFV_stack_13->SetBinContent(11,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,0.8343332);
   hnueCCinFV_stack_13->SetBinContent(15,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(19,1.075993);
   hnueCCinFV_stack_13->SetBinContent(20,1.439238);
   hnueCCinFV_stack_13->SetBinContent(21,0.536893);
   hnueCCinFV_stack_13->SetBinContent(22,0.7157782);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.119073);
   hnueCCinFV_stack_13->SetBinError(2,1.951317);
   hnueCCinFV_stack_13->SetBinError(3,1.088638);
   hnueCCinFV_stack_13->SetBinError(4,0.4398689);
   hnueCCinFV_stack_13->SetBinError(5,0.7241373);
   hnueCCinFV_stack_13->SetBinError(6,0.8863533);
   hnueCCinFV_stack_13->SetBinError(7,0.7780778);
   hnueCCinFV_stack_13->SetBinError(8,0.3748563);
   hnueCCinFV_stack_13->SetBinError(9,1.367485);
   hnueCCinFV_stack_13->SetBinError(10,0.7117962);
   hnueCCinFV_stack_13->SetBinError(11,0.4139598);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.4958181);
   hnueCCinFV_stack_13->SetBinError(15,0.3387718);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(19,1.075993);
   hnueCCinFV_stack_13->SetBinError(20,0.6658477);
   hnueCCinFV_stack_13->SetBinError(21,0.3929602);
   hnueCCinFV_stack_13->SetBinError(22,0.5560744);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__17->SetBinContent(1,96.11279);
   hmcerror__17->SetBinContent(2,238.643);
   hmcerror__17->SetBinContent(3,345.3087);
   hmcerror__17->SetBinContent(4,374.6885);
   hmcerror__17->SetBinContent(5,375.873);
   hmcerror__17->SetBinContent(6,350.0163);
   hmcerror__17->SetBinContent(7,309.7505);
   hmcerror__17->SetBinContent(8,270.6484);
   hmcerror__17->SetBinContent(9,208.089);
   hmcerror__17->SetBinContent(10,179.0652);
   hmcerror__17->SetBinContent(11,142.2259);
   hmcerror__17->SetBinContent(12,113.3966);
   hmcerror__17->SetBinContent(13,99.18536);
   hmcerror__17->SetBinContent(14,79.77052);
   hmcerror__17->SetBinContent(15,78.6064);
   hmcerror__17->SetBinContent(16,71.2896);
   hmcerror__17->SetBinContent(17,61.92517);
   hmcerror__17->SetBinContent(18,62.62548);
   hmcerror__17->SetBinContent(19,61.50742);
   hmcerror__17->SetBinContent(20,54.53836);
   hmcerror__17->SetBinContent(21,42.60504);
   hmcerror__17->SetBinContent(22,36.97665);
   hmcerror__17->SetBinContent(23,21.03963);
   hmcerror__17->SetBinContent(24,9.11775);
   hmcerror__17->SetBinError(1,34.99161);
   hmcerror__17->SetBinError(2,65.45902);
   hmcerror__17->SetBinError(3,91.22496);
   hmcerror__17->SetBinError(4,91.55549);
   hmcerror__17->SetBinError(5,93.75105);
   hmcerror__17->SetBinError(6,93.74617);
   hmcerror__17->SetBinError(7,80.5948);
   hmcerror__17->SetBinError(8,74.84016);
   hmcerror__17->SetBinError(9,57.43917);
   hmcerror__17->SetBinError(10,47.68841);
   hmcerror__17->SetBinError(11,40.75921);
   hmcerror__17->SetBinError(12,39.51986);
   hmcerror__17->SetBinError(13,37.13412);
   hmcerror__17->SetBinError(14,24.07367);
   hmcerror__17->SetBinError(15,24.83259);
   hmcerror__17->SetBinError(16,24.00195);
   hmcerror__17->SetBinError(17,19.09017);
   hmcerror__17->SetBinError(18,20.30818);
   hmcerror__17->SetBinError(19,20.74218);
   hmcerror__17->SetBinError(20,22.80854);
   hmcerror__17->SetBinError(21,18.41196);
   hmcerror__17->SetBinError(22,14.67759);
   hmcerror__17->SetBinError(23,10.93735);
   hmcerror__17->SetBinError(24,6.614559);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(3645.257);

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
   
   Double_t _fx3021[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3021[24] = {
   78,
   202,
   353,
   364,
   382,
   310,
   290,
   238,
   204,
   154,
   135,
   101,
   113,
   73,
   83,
   92,
   60,
   67,
   63,
   54,
   47,
   30,
   21,
   8};
   Double_t _felx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3021[24] = {
   8.9562,
   14.21267,
   18.78829,
   19.07878,
   19.54482,
   17.60682,
   17.02939,
   15.42725,
   14.28286,
   12.40967,
   11.61895,
   10.04988,
   10.63015,
   8.6693,
   9.234,
   9.7138,
   7.8743,
   8.3119,
   8.0648,
   7.4785,
   6.9882,
   5.6197,
   4.7354,
   3.0307};
   Double_t _fehx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3021[24] = {
   8.7542,
   14.21267,
   18.78829,
   19.07878,
   19.54482,
   17.60682,
   17.02939,
   15.42725,
   14.28286,
   12.40967,
   11.61895,
   10.04988,
   10.63015,
   8.4672,
   9.0323,
   9.513,
   7.6713,
   8.1094,
   7.862,
   7.275,
   6.7839,
   5.4117,
   4.5229,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,3.465);
   Graph_Graph3021->SetMinimum(4.47237);
   Graph_Graph3021->SetMaximum(441.2024);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3522.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.5","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 502.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3022[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3022[24] = {
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
   Double_t _felx3022[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3022[24] = {
   0.3640682,
   0.2742969,
   0.2641838,
   0.2443509,
   0.2494222,
   0.2678337,
   0.2601926,
   0.2765217,
   0.2760318,
   0.2663187,
   0.2865808,
   0.34851,
   0.3743911,
   0.3017865,
   0.3159106,
   0.3366823,
   0.308278,
   0.3242798,
   0.3372305,
   0.418211,
   0.4321545,
   0.3969421,
   0.5198454,
   0.7254596};
   Double_t _fehx3022[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3022[24] = {
   0.3640682,
   0.2742969,
   0.2641838,
   0.2443509,
   0.2494222,
   0.2678337,
   0.2601926,
   0.2765217,
   0.2760318,
   0.2663187,
   0.2865808,
   0.34851,
   0.3743911,
   0.3017865,
   0.3159106,
   0.3366823,
   0.308278,
   0.3242798,
   0.3372305,
   0.418211,
   0.4321545,
   0.3969421,
   0.5198454,
   0.7254596};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,3.465);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3023[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3023[24] = {
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
   Double_t _felx3023[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3023[24] = {
   0.2584711,
   0.2469404,
   0.2318459,
   0.2224306,
   0.2254727,
   0.2351412,
   0.2416835,
   0.2450421,
   0.2494883,
   0.2332302,
   0.2386361,
   0.2251642,
   0.2174099,
   0.2321035,
   0.2460435,
   0.2215479,
   0.2146632,
   0.2349629,
   0.2207682,
   0.225802,
   0.2391514,
   0.2550668,
   0.2433108,
   0.2780003};
   Double_t _fehx3023[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3023[24] = {
   0.2584711,
   0.2469404,
   0.2318459,
   0.2224306,
   0.2254727,
   0.2351412,
   0.2416835,
   0.2450421,
   0.2494883,
   0.2332302,
   0.2386361,
   0.2251642,
   0.2174099,
   0.2321035,
   0.2460435,
   0.2215479,
   0.2146632,
   0.2349629,
   0.2207682,
   0.225802,
   0.2391514,
   0.2550668,
   0.2433108,
   0.2780003};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,3.465);
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
   
   Double_t _fx3024[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3024[24] = {
   0.8115465,
   0.8464527,
   1.022274,
   0.9714735,
   1.016301,
   0.8856731,
   0.9362373,
   0.8793697,
   0.9803498,
   0.8600218,
   0.9491942,
   0.8906791,
   1.139281,
   0.915125,
   1.055894,
   1.290511,
   0.9689114,
   1.069852,
   1.024267,
   0.9901288,
   1.103156,
   0.8113228,
   0.9981166,
   0.8774094};
   Double_t _felx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3024[24] = {
   0.09318427,
   0.05955621,
   0.05441013,
   0.05091905,
   0.05199847,
   0.05030285,
   0.05497775,
   0.05700107,
   0.06863822,
   0.06930253,
   0.08169363,
   0.08862588,
   0.1071745,
   0.108678,
   0.1174714,
   0.1362583,
   0.1271583,
   0.1327239,
   0.1311191,
   0.1371237,
   0.1640228,
   0.1519797,
   0.2250705,
   0.3323956};
   Double_t _fehx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3024[24] = {
   0.09108257,
   0.05955621,
   0.05441013,
   0.05091905,
   0.05199847,
   0.05030285,
   0.05497775,
   0.05700107,
   0.06863822,
   0.06930253,
   0.08169363,
   0.08862588,
   0.1071745,
   0.1061445,
   0.1149054,
   0.1334416,
   0.1238802,
   0.1294904,
   0.127822,
   0.1333923,
   0.1592276,
   0.1463545,
   0.2149706,
   0.3059527};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,3.465);
   Graph_Graph3024->SetMinimum(0.45712);
   Graph_Graph3024->SetMaximum(1.511846);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}

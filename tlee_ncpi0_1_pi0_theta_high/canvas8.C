#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 22:48:02 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-2,3.553846,221.1579);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__22->SetBinContent(1,24.60653);
   hmc__22->SetBinContent(2,61.74948);
   hmc__22->SetBinContent(3,87.65005);
   hmc__22->SetBinContent(4,91.09643);
   hmc__22->SetBinContent(5,87.96275);
   hmc__22->SetBinContent(6,80.02529);
   hmc__22->SetBinContent(7,62.18501);
   hmc__22->SetBinContent(8,63.25479);
   hmc__22->SetBinContent(9,44.1673);
   hmc__22->SetBinContent(10,40.25328);
   hmc__22->SetBinContent(11,38.2138);
   hmc__22->SetBinContent(12,28.59202);
   hmc__22->SetBinContent(13,28.64477);
   hmc__22->SetBinContent(14,20.98219);
   hmc__22->SetBinContent(15,21.75327);
   hmc__22->SetBinContent(16,25.40039);
   hmc__22->SetBinContent(17,23.83181);
   hmc__22->SetBinContent(18,19.04408);
   hmc__22->SetBinContent(19,18.39093);
   hmc__22->SetBinContent(20,12.64651);
   hmc__22->SetBinContent(21,16.26234);
   hmc__22->SetBinContent(22,11.94016);
   hmc__22->SetBinContent(23,13.4454);
   hmc__22->SetBinContent(24,9.322165);
   hmc__22->SetBinContent(25,2.143551);
   hmc__22->SetBinError(1,14.47794);
   hmc__22->SetBinError(2,23.87264);
   hmc__22->SetBinError(3,23.96011);
   hmc__22->SetBinError(4,33.95661);
   hmc__22->SetBinError(5,27.59479);
   hmc__22->SetBinError(6,22.19516);
   hmc__22->SetBinError(7,21.82026);
   hmc__22->SetBinError(8,24.40745);
   hmc__22->SetBinError(9,13.58006);
   hmc__22->SetBinError(10,14.23925);
   hmc__22->SetBinError(11,14.28546);
   hmc__22->SetBinError(12,9.604407);
   hmc__22->SetBinError(13,12.7685);
   hmc__22->SetBinError(14,10.41495);
   hmc__22->SetBinError(15,11.46218);
   hmc__22->SetBinError(16,10.19086);
   hmc__22->SetBinError(17,16.37273);
   hmc__22->SetBinError(18,12.94602);
   hmc__22->SetBinError(19,9.225771);
   hmc__22->SetBinError(20,10.76742);
   hmc__22->SetBinError(21,13.96081);
   hmc__22->SetBinError(22,8.337834);
   hmc__22->SetBinError(23,10.04919);
   hmc__22->SetBinError(24,10.67191);
   hmc__22->SetBinError(25,3.577158);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-2);
   hmc__22->SetMaximum(210);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,3.15);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(95.65124);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.9303237);
   hbadmatch_stack_1->SetBinContent(2,1.571821);
   hbadmatch_stack_1->SetBinContent(3,2.49918);
   hbadmatch_stack_1->SetBinContent(4,3.432282);
   hbadmatch_stack_1->SetBinContent(5,1.56965);
   hbadmatch_stack_1->SetBinContent(6,1.182156);
   hbadmatch_stack_1->SetBinContent(7,1.326978);
   hbadmatch_stack_1->SetBinContent(8,2.297188);
   hbadmatch_stack_1->SetBinContent(9,3.058724);
   hbadmatch_stack_1->SetBinContent(10,1.125349);
   hbadmatch_stack_1->SetBinContent(11,2.778028);
   hbadmatch_stack_1->SetBinContent(12,0.6022739);
   hbadmatch_stack_1->SetBinContent(13,1.022584);
   hbadmatch_stack_1->SetBinContent(14,1.312732);
   hbadmatch_stack_1->SetBinContent(15,0.8519648);
   hbadmatch_stack_1->SetBinContent(16,1.601824);
   hbadmatch_stack_1->SetBinContent(17,1.205611);
   hbadmatch_stack_1->SetBinContent(18,0.9082963);
   hbadmatch_stack_1->SetBinContent(19,1.005595);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.7455626);
   hbadmatch_stack_1->SetBinContent(23,0.8690801);
   hbadmatch_stack_1->SetBinContent(24,0.890664);
   hbadmatch_stack_1->SetBinError(1,0.4814682);
   hbadmatch_stack_1->SetBinError(2,0.720245);
   hbadmatch_stack_1->SetBinError(3,1.260336);
   hbadmatch_stack_1->SetBinError(4,0.9767539);
   hbadmatch_stack_1->SetBinError(5,0.5878625);
   hbadmatch_stack_1->SetBinError(6,0.4826469);
   hbadmatch_stack_1->SetBinError(7,0.5945183);
   hbadmatch_stack_1->SetBinError(8,0.8479462);
   hbadmatch_stack_1->SetBinError(9,1.066422);
   hbadmatch_stack_1->SetBinError(10,0.5194673);
   hbadmatch_stack_1->SetBinError(11,1.015178);
   hbadmatch_stack_1->SetBinError(12,0.429436);
   hbadmatch_stack_1->SetBinError(13,0.625537);
   hbadmatch_stack_1->SetBinError(14,0.6687624);
   hbadmatch_stack_1->SetBinError(15,0.4274238);
   hbadmatch_stack_1->SetBinError(16,0.749462);
   hbadmatch_stack_1->SetBinError(17,0.668118);
   hbadmatch_stack_1->SetBinError(18,0.5852183);
   hbadmatch_stack_1->SetBinError(19,0.5354036);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.3807765);
   hbadmatch_stack_1->SetBinError(23,0.4365724);
   hbadmatch_stack_1->SetBinError(24,0.5287112);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,1.697008);
   hext_stack_2->SetBinContent(2,6.082985);
   hext_stack_2->SetBinContent(3,15.01651);
   hext_stack_2->SetBinContent(4,11.92655);
   hext_stack_2->SetBinContent(5,14.80027);
   hext_stack_2->SetBinContent(6,18.04147);
   hext_stack_2->SetBinContent(7,12.70384);
   hext_stack_2->SetBinContent(8,10.19364);
   hext_stack_2->SetBinContent(9,9.648584);
   hext_stack_2->SetBinContent(10,11.92818);
   hext_stack_2->SetBinContent(11,12.14002);
   hext_stack_2->SetBinContent(12,11.14806);
   hext_stack_2->SetBinContent(13,7.782764);
   hext_stack_2->SetBinContent(14,8.884457);
   hext_stack_2->SetBinContent(15,7.951576);
   hext_stack_2->SetBinContent(16,10.6449);
   hext_stack_2->SetBinContent(17,8.534109);
   hext_stack_2->SetBinContent(18,4.45659);
   hext_stack_2->SetBinContent(19,5.718277);
   hext_stack_2->SetBinContent(20,1.78639);
   hext_stack_2->SetBinContent(21,3.412785);
   hext_stack_2->SetBinContent(22,1.055394);
   hext_stack_2->SetBinContent(23,1.37261);
   hext_stack_2->SetBinContent(24,1.78639);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinError(1,0.8873887);
   hext_stack_2->SetBinError(2,1.552674);
   hext_stack_2->SetBinError(3,2.72844);
   hext_stack_2->SetBinError(4,2.10716);
   hext_stack_2->SetBinError(5,2.632634);
   hext_stack_2->SetBinError(6,2.88434);
   hext_stack_2->SetBinError(7,2.403493);
   hext_stack_2->SetBinError(8,2.158396);
   hext_stack_2->SetBinError(9,1.976029);
   hext_stack_2->SetBinError(10,2.216206);
   hext_stack_2->SetBinError(11,2.300016);
   hext_stack_2->SetBinError(12,2.289466);
   hext_stack_2->SetBinError(13,1.691724);
   hext_stack_2->SetBinError(14,2.074564);
   hext_stack_2->SetBinError(15,1.765568);
   hext_stack_2->SetBinError(16,2.327798);
   hext_stack_2->SetBinError(17,2.160339);
   hext_stack_2->SetBinError(18,1.322689);
   hext_stack_2->SetBinError(19,1.782259);
   hext_stack_2->SetBinError(20,0.8039566);
   hext_stack_2->SetBinError(21,1.14352);
   hext_stack_2->SetBinError(22,0.6130171);
   hext_stack_2->SetBinError(23,0.8259691);
   hext_stack_2->SetBinError(24,0.8039566);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.4532775);
   hdirt_stack_3->SetBinContent(2,0.4762587);
   hdirt_stack_3->SetBinContent(3,1.865221);
   hdirt_stack_3->SetBinContent(4,1.216818);
   hdirt_stack_3->SetBinContent(5,2.084163);
   hdirt_stack_3->SetBinContent(6,1.612432);
   hdirt_stack_3->SetBinContent(7,0.5570828);
   hdirt_stack_3->SetBinContent(8,1.144712);
   hdirt_stack_3->SetBinContent(9,1.965545);
   hdirt_stack_3->SetBinContent(10,0.7524016);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.195944);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,1.058988);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(19,1.788751);
   hdirt_stack_3->SetBinContent(20,0.5570828);
   hdirt_stack_3->SetBinContent(21,0.5276377);
   hdirt_stack_3->SetBinContent(22,0.2228245);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.6951543);
   hdirt_stack_3->SetBinError(1,0.3572343);
   hdirt_stack_3->SetBinError(2,0.3652866);
   hdirt_stack_3->SetBinError(3,0.7609291);
   hdirt_stack_3->SetBinError(4,0.5736278);
   hdirt_stack_3->SetBinError(5,0.7245748);
   hdirt_stack_3->SetBinError(6,0.6595856);
   hdirt_stack_3->SetBinError(7,0.4028472);
   hdirt_stack_3->SetBinError(8,0.570499);
   hdirt_stack_3->SetBinError(9,0.7376715);
   hdirt_stack_3->SetBinError(10,0.4142002);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.6109736);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.536908);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(19,1.034473);
   hdirt_stack_3->SetBinError(20,0.4028472);
   hdirt_stack_3->SetBinError(21,0.4133105);
   hdirt_stack_3->SetBinError(22,0.2189309);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(24,0.4258516);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.545798);
   houtFV_stack_4->SetBinContent(2,10.57206);
   houtFV_stack_4->SetBinContent(3,16.019);
   houtFV_stack_4->SetBinContent(4,15.15554);
   houtFV_stack_4->SetBinContent(5,15.72754);
   houtFV_stack_4->SetBinContent(6,16.55408);
   houtFV_stack_4->SetBinContent(7,13.33563);
   houtFV_stack_4->SetBinContent(8,15.51571);
   houtFV_stack_4->SetBinContent(9,7.265661);
   houtFV_stack_4->SetBinContent(10,8.747522);
   houtFV_stack_4->SetBinContent(11,5.953211);
   houtFV_stack_4->SetBinContent(12,3.938557);
   houtFV_stack_4->SetBinContent(13,7.991734);
   houtFV_stack_4->SetBinContent(14,3.999921);
   houtFV_stack_4->SetBinContent(15,4.979608);
   houtFV_stack_4->SetBinContent(16,5.227878);
   houtFV_stack_4->SetBinContent(17,5.433114);
   houtFV_stack_4->SetBinContent(18,6.397914);
   houtFV_stack_4->SetBinContent(19,5.267652);
   houtFV_stack_4->SetBinContent(20,4.283154);
   houtFV_stack_4->SetBinContent(21,5.567373);
   houtFV_stack_4->SetBinContent(22,4.182507);
   houtFV_stack_4->SetBinContent(23,4.547489);
   houtFV_stack_4->SetBinContent(24,1.510749);
   houtFV_stack_4->SetBinContent(25,0.7207553);
   houtFV_stack_4->SetBinError(1,0.9412553);
   houtFV_stack_4->SetBinError(2,1.648831);
   houtFV_stack_4->SetBinError(3,1.962403);
   houtFV_stack_4->SetBinError(4,1.98875);
   houtFV_stack_4->SetBinError(5,1.86155);
   houtFV_stack_4->SetBinError(6,2.121551);
   houtFV_stack_4->SetBinError(7,1.804991);
   houtFV_stack_4->SetBinError(8,2.221072);
   houtFV_stack_4->SetBinError(9,1.280247);
   houtFV_stack_4->SetBinError(10,1.549191);
   houtFV_stack_4->SetBinError(11,1.245718);
   houtFV_stack_4->SetBinError(12,0.9607881);
   houtFV_stack_4->SetBinError(13,1.437326);
   houtFV_stack_4->SetBinError(14,0.9526061);
   houtFV_stack_4->SetBinError(15,1.141441);
   houtFV_stack_4->SetBinError(16,1.656243);
   houtFV_stack_4->SetBinError(17,1.166488);
   houtFV_stack_4->SetBinError(18,1.292005);
   houtFV_stack_4->SetBinError(19,1.098367);
   houtFV_stack_4->SetBinError(20,0.9677729);
   houtFV_stack_4->SetBinError(21,1.129039);
   houtFV_stack_4->SetBinError(22,1.146408);
   houtFV_stack_4->SetBinError(23,1.079075);
   houtFV_stack_4->SetBinError(24,0.6133123);
   houtFV_stack_4->SetBinError(25,0.3648966);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.798352);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.126106);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.568771);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.399289);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.438117);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7325984);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6230889);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1994521);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1963282);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2203893);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1007786);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.07136732);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.438905);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7048591);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5805147);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.509477);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.60087);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3175293);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2739062);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1352015);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1963282);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1563048);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1007786);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05092153);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1968969);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4223969);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1229801);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.07324273);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02894049);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.0280365);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1351536);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2937662);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06381504);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04513147);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02114295);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02036872);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.956567);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.837756);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.96061);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.69424);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.88803);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.74832);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.037482);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.775771);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.260294);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.381996);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.2901);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.766454);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.722411);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.237521);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.750242);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.790832);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.475121);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.679645);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.7932832);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.9420046);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.6415402);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.677743);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.031458);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.267964);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.08756366);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5484383);
   hNCpi0inFVres_stack_7->SetBinError(2,0.97993);
   hNCpi0inFVres_stack_7->SetBinError(3,1.11388);
   hNCpi0inFVres_stack_7->SetBinError(4,1.135772);
   hNCpi0inFVres_stack_7->SetBinError(5,1.202099);
   hNCpi0inFVres_stack_7->SetBinError(6,1.037976);
   hNCpi0inFVres_stack_7->SetBinError(7,1.02274);
   hNCpi0inFVres_stack_7->SetBinError(8,1.073834);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7848191);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5695499);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7928662);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7068693);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4976785);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4881004);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6738172);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4666817);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6167375);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4092127);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2331635);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2598307);
   hNCpi0inFVres_stack_7->SetBinError(21,0.191551);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4256765);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2620817);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4741094);
   hNCpi0inFVres_stack_7->SetBinError(25,0.0554655);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.03106);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.678097);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.284775);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.800806);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.002204);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.046336);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.273276);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.693014);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.669278);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6890205);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.654884);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2766391);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4554841);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6155859);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1280081);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.365249);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1909909);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.408139);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4694105);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.03111113);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5527477);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2465042);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.1007963);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.4041853);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5953205);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7256904);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7351501);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.019046);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6167831);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3628154);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7341852);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5122355);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4281597);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2677487);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2465802);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.09498345);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.301722);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2156321);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.05878429);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1436761);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1108806);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3323352);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1774383);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.02236849);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2165997);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1467529);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.05614229);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3710477);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,6.971291);
   hCCpi0inFV_stack_10->SetBinContent(2,17.13651);
   hCCpi0inFV_stack_10->SetBinContent(3,19.84853);
   hCCpi0inFV_stack_10->SetBinContent(4,21.06955);
   hCCpi0inFV_stack_10->SetBinContent(5,20.5373);
   hCCpi0inFV_stack_10->SetBinContent(6,15.37704);
   hCCpi0inFV_stack_10->SetBinContent(7,13.89391);
   hCCpi0inFV_stack_10->SetBinContent(8,13.5436);
   hCCpi0inFV_stack_10->SetBinContent(9,9.153486);
   hCCpi0inFV_stack_10->SetBinContent(10,6.423881);
   hCCpi0inFV_stack_10->SetBinContent(11,5.363244);
   hCCpi0inFV_stack_10->SetBinContent(12,3.954707);
   hCCpi0inFV_stack_10->SetBinContent(13,3.836843);
   hCCpi0inFV_stack_10->SetBinContent(14,2.199135);
   hCCpi0inFV_stack_10->SetBinContent(15,3.072824);
   hCCpi0inFV_stack_10->SetBinContent(16,3.549543);
   hCCpi0inFV_stack_10->SetBinContent(17,2.837462);
   hCCpi0inFV_stack_10->SetBinContent(18,2.931052);
   hCCpi0inFV_stack_10->SetBinContent(19,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(20,2.940023);
   hCCpi0inFV_stack_10->SetBinContent(21,2.534696);
   hCCpi0inFV_stack_10->SetBinContent(22,1.270501);
   hCCpi0inFV_stack_10->SetBinContent(23,3.598241);
   hCCpi0inFV_stack_10->SetBinContent(24,2.30226);
   hCCpi0inFV_stack_10->SetBinContent(25,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(1,1.291274);
   hCCpi0inFV_stack_10->SetBinError(2,2.109307);
   hCCpi0inFV_stack_10->SetBinError(3,2.293234);
   hCCpi0inFV_stack_10->SetBinError(4,2.317235);
   hCCpi0inFV_stack_10->SetBinError(5,2.270162);
   hCCpi0inFV_stack_10->SetBinError(6,2.011007);
   hCCpi0inFV_stack_10->SetBinError(7,1.896814);
   hCCpi0inFV_stack_10->SetBinError(8,1.86329);
   hCCpi0inFV_stack_10->SetBinError(9,1.516574);
   hCCpi0inFV_stack_10->SetBinError(10,1.30999);
   hCCpi0inFV_stack_10->SetBinError(11,1.097782);
   hCCpi0inFV_stack_10->SetBinError(12,0.9911009);
   hCCpi0inFV_stack_10->SetBinError(13,0.9571268);
   hCCpi0inFV_stack_10->SetBinError(14,0.7607114);
   hCCpi0inFV_stack_10->SetBinError(15,0.9205954);
   hCCpi0inFV_stack_10->SetBinError(16,0.9484209);
   hCCpi0inFV_stack_10->SetBinError(17,0.8089864);
   hCCpi0inFV_stack_10->SetBinError(18,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(19,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(20,0.924647);
   hCCpi0inFV_stack_10->SetBinError(21,0.7852708);
   hCCpi0inFV_stack_10->SetBinError(22,0.5895188);
   hCCpi0inFV_stack_10->SetBinError(23,0.9267273);
   hCCpi0inFV_stack_10->SetBinError(24,0.707604);
   hCCpi0inFV_stack_10->SetBinError(25,0.3397478);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.270807);
   hNCinFV_stack_11->SetBinContent(2,4.82955);
   hNCinFV_stack_11->SetBinContent(3,3.273986);
   hNCinFV_stack_11->SetBinContent(4,5.121954);
   hNCinFV_stack_11->SetBinContent(5,4.578963);
   hNCinFV_stack_11->SetBinContent(6,4.012257);
   hNCinFV_stack_11->SetBinContent(7,0.9097276);
   hNCinFV_stack_11->SetBinContent(8,2.263433);
   hNCinFV_stack_11->SetBinContent(9,1.549535);
   hNCinFV_stack_11->SetBinContent(10,0.8594189);
   hNCinFV_stack_11->SetBinContent(11,0.858748);
   hNCinFV_stack_11->SetBinContent(12,0.4328644);
   hNCinFV_stack_11->SetBinContent(13,0.4829199);
   hNCinFV_stack_11->SetBinContent(14,0.3401776);
   hNCinFV_stack_11->SetBinContent(15,0.1211005);
   hNCinFV_stack_11->SetBinContent(17,0.3171751);
   hNCinFV_stack_11->SetBinContent(18,0.1855688);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.5216074);
   hNCinFV_stack_11->SetBinContent(21,1.338126);
   hNCinFV_stack_11->SetBinContent(22,0.7692889);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.5161877);
   hNCinFV_stack_11->SetBinError(2,1.326925);
   hNCinFV_stack_11->SetBinError(3,0.9135581);
   hNCinFV_stack_11->SetBinError(4,1.153116);
   hNCinFV_stack_11->SetBinError(5,1.18196);
   hNCinFV_stack_11->SetBinError(6,1.099591);
   hNCinFV_stack_11->SetBinError(7,0.4186387);
   hNCinFV_stack_11->SetBinError(8,0.8286113);
   hNCinFV_stack_11->SetBinError(9,0.7676103);
   hNCinFV_stack_11->SetBinError(10,0.4125471);
   hNCinFV_stack_11->SetBinError(11,0.4596459);
   hNCinFV_stack_11->SetBinError(12,0.2584726);
   hNCinFV_stack_11->SetBinError(13,0.2922365);
   hNCinFV_stack_11->SetBinError(14,0.3401776);
   hNCinFV_stack_11->SetBinError(15,0.1211005);
   hNCinFV_stack_11->SetBinError(17,0.2301203);
   hNCinFV_stack_11->SetBinError(18,0.1421907);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.3059364);
   hNCinFV_stack_11->SetBinError(21,0.5706197);
   hNCinFV_stack_11->SetBinError(22,0.6064766);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.530046);
   hnumuCCinFV_stack_12->SetBinContent(2,5.597659);
   hnumuCCinFV_stack_12->SetBinContent(3,10.55011);
   hnumuCCinFV_stack_12->SetBinContent(4,12.69076);
   hnumuCCinFV_stack_12->SetBinContent(5,7.717405);
   hnumuCCinFV_stack_12->SetBinContent(6,9.595633);
   hnumuCCinFV_stack_12->SetBinContent(7,6.450747);
   hnumuCCinFV_stack_12->SetBinContent(8,6.205903);
   hnumuCCinFV_stack_12->SetBinContent(9,4.568175);
   hnumuCCinFV_stack_12->SetBinContent(10,5.149177);
   hnumuCCinFV_stack_12->SetBinContent(11,5.135067);
   hnumuCCinFV_stack_12->SetBinContent(12,3.444436);
   hnumuCCinFV_stack_12->SetBinContent(13,4.13113);
   hnumuCCinFV_stack_12->SetBinContent(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(15,1.679047);
   hnumuCCinFV_stack_12->SetBinContent(16,1.161184);
   hnumuCCinFV_stack_12->SetBinContent(17,2.70016);
   hnumuCCinFV_stack_12->SetBinContent(18,1.605381);
   hnumuCCinFV_stack_12->SetBinContent(19,1.023908);
   hnumuCCinFV_stack_12->SetBinContent(20,1.381354);
   hnumuCCinFV_stack_12->SetBinContent(21,1.36391);
   hnumuCCinFV_stack_12->SetBinContent(22,1.352727);
   hnumuCCinFV_stack_12->SetBinContent(23,1.271268);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(1,1.35076);
   hnumuCCinFV_stack_12->SetBinError(2,1.210602);
   hnumuCCinFV_stack_12->SetBinError(3,2.643043);
   hnumuCCinFV_stack_12->SetBinError(4,2.565511);
   hnumuCCinFV_stack_12->SetBinError(5,1.44211);
   hnumuCCinFV_stack_12->SetBinError(6,1.652112);
   hnumuCCinFV_stack_12->SetBinError(7,1.311403);
   hnumuCCinFV_stack_12->SetBinError(8,1.291636);
   hnumuCCinFV_stack_12->SetBinError(9,1.045951);
   hnumuCCinFV_stack_12->SetBinError(10,1.273475);
   hnumuCCinFV_stack_12->SetBinError(11,1.268746);
   hnumuCCinFV_stack_12->SetBinError(12,0.9827364);
   hnumuCCinFV_stack_12->SetBinError(13,1.119379);
   hnumuCCinFV_stack_12->SetBinError(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(15,0.645858);
   hnumuCCinFV_stack_12->SetBinError(16,0.5340686);
   hnumuCCinFV_stack_12->SetBinError(17,0.9093858);
   hnumuCCinFV_stack_12->SetBinError(18,0.6686876);
   hnumuCCinFV_stack_12->SetBinError(19,0.537114);
   hnumuCCinFV_stack_12->SetBinError(20,0.5776067);
   hnumuCCinFV_stack_12->SetBinError(21,0.6235505);
   hnumuCCinFV_stack_12->SetBinError(22,0.5670512);
   hnumuCCinFV_stack_12->SetBinError(23,0.5907432);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.3401776);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.422001);
   hnueCCinFV_stack_13->SetBinContent(2,1.840676);
   hnueCCinFV_stack_13->SetBinContent(3,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(18,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.2990829);
   hnueCCinFV_stack_13->SetBinError(2,0.9477277);
   hnueCCinFV_stack_13->SetBinError(3,0.5475369);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(18,0.3025491);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__23->SetBinContent(1,24.60653);
   hmcerror__23->SetBinContent(2,61.74948);
   hmcerror__23->SetBinContent(3,87.65005);
   hmcerror__23->SetBinContent(4,91.09643);
   hmcerror__23->SetBinContent(5,87.96275);
   hmcerror__23->SetBinContent(6,80.02529);
   hmcerror__23->SetBinContent(7,62.18501);
   hmcerror__23->SetBinContent(8,63.25479);
   hmcerror__23->SetBinContent(9,44.1673);
   hmcerror__23->SetBinContent(10,40.25328);
   hmcerror__23->SetBinContent(11,38.2138);
   hmcerror__23->SetBinContent(12,28.59202);
   hmcerror__23->SetBinContent(13,28.64477);
   hmcerror__23->SetBinContent(14,20.98219);
   hmcerror__23->SetBinContent(15,21.75327);
   hmcerror__23->SetBinContent(16,25.40039);
   hmcerror__23->SetBinContent(17,23.83181);
   hmcerror__23->SetBinContent(18,19.04408);
   hmcerror__23->SetBinContent(19,18.39093);
   hmcerror__23->SetBinContent(20,12.64651);
   hmcerror__23->SetBinContent(21,16.26234);
   hmcerror__23->SetBinContent(22,11.94016);
   hmcerror__23->SetBinContent(23,13.4454);
   hmcerror__23->SetBinContent(24,9.322165);
   hmcerror__23->SetBinContent(25,2.143551);
   hmcerror__23->SetBinError(1,14.47794);
   hmcerror__23->SetBinError(2,23.87264);
   hmcerror__23->SetBinError(3,23.96011);
   hmcerror__23->SetBinError(4,33.95661);
   hmcerror__23->SetBinError(5,27.59479);
   hmcerror__23->SetBinError(6,22.19516);
   hmcerror__23->SetBinError(7,21.82026);
   hmcerror__23->SetBinError(8,24.40745);
   hmcerror__23->SetBinError(9,13.58006);
   hmcerror__23->SetBinError(10,14.23925);
   hmcerror__23->SetBinError(11,14.28546);
   hmcerror__23->SetBinError(12,9.604407);
   hmcerror__23->SetBinError(13,12.7685);
   hmcerror__23->SetBinError(14,10.41495);
   hmcerror__23->SetBinError(15,11.46218);
   hmcerror__23->SetBinError(16,10.19086);
   hmcerror__23->SetBinError(17,16.37273);
   hmcerror__23->SetBinError(18,12.94602);
   hmcerror__23->SetBinError(19,9.225771);
   hmcerror__23->SetBinError(20,10.76742);
   hmcerror__23->SetBinError(21,13.96081);
   hmcerror__23->SetBinError(22,8.337834);
   hmcerror__23->SetBinError(23,10.04919);
   hmcerror__23->SetBinError(24,10.67191);
   hmcerror__23->SetBinError(25,3.577158);
   hmcerror__23->SetBinError(26,0.3895343);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3029[25] = {
   28,
   55,
   77,
   85,
   100,
   89,
   57,
   56,
   43,
   34,
   27,
   23,
   24,
   23,
   20,
   24,
   11,
   15,
   21,
   16,
   18,
   18,
   11,
   7,
   3};
   Double_t _felx3029[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3029[25] = {
   5.4358,
   7.546,
   8.8995,
   9.3428,
   10.1212,
   9.5566,
   7.679,
   7.6127,
   6.6917,
   5.9703,
   5.3414,
   4.9457,
   5.0476,
   4.9457,
   4.6266,
   5.0476,
   3.4975,
   4.0385,
   4.7354,
   4.1628,
   4.4008,
   4.4008,
   3.4975,
   2.85954,
   2.143368};
   Double_t _fehx3029[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3029[25] = {
   5.2271,
   7.3425,
   8.6976,
   9.1411,
   9.92,
   9.3552,
   7.4757,
   7.4094,
   6.4868,
   5.7635,
   5.1322,
   4.7346,
   4.837,
   4.7346,
   4.4133,
   4.837,
   3.27,
   3.8197,
   4.5229,
   3.9454,
   4.1858,
   4.1858,
   3.27,
   2.61053,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,3.465);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(120.8263);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.4","F");

   ci = 1528;
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

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3030[25] = {
   0.588378,
   0.3866047,
   0.273361,
   0.3727546,
   0.3137099,
   0.2773518,
   0.3508927,
   0.3858593,
   0.3074687,
   0.3537413,
   0.3738299,
   0.3359121,
   0.4457533,
   0.4963712,
   0.5269174,
   0.4012087,
   0.6870114,
   0.6797924,
   0.5016478,
   0.8514145,
   0.8584751,
   0.6983019,
   0.7474072,
   1.144788,
   1.6688};
   Double_t _fehx3030[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3030[25] = {
   0.588378,
   0.3866047,
   0.273361,
   0.3727546,
   0.3137099,
   0.2773518,
   0.3508927,
   0.3858593,
   0.3074687,
   0.3537413,
   0.3738299,
   0.3359121,
   0.4457533,
   0.4963712,
   0.5269174,
   0.4012087,
   0.6870114,
   0.6797924,
   0.5016478,
   0.8514145,
   0.8584751,
   0.6983019,
   0.7474072,
   1.144788,
   1.6688};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,3.465);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3031[25] = {
   0.2372439,
   0.1918724,
   0.1815683,
   0.1841839,
   0.1859839,
   0.1883024,
   0.1964836,
   0.2056525,
   0.1933625,
   0.208895,
   0.1749478,
   0.1904869,
   0.211585,
   0.2189866,
   0.1985847,
   0.19474,
   0.1871559,
   0.224408,
   0.2282653,
   0.2415798,
   0.2173786,
   0.2835435,
   0.2294444,
   0.2561977,
   0.5387492};
   Double_t _fehx3031[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3031[25] = {
   0.2372439,
   0.1918724,
   0.1815683,
   0.1841839,
   0.1859839,
   0.1883024,
   0.1964836,
   0.2056525,
   0.1933625,
   0.208895,
   0.1749478,
   0.1904869,
   0.211585,
   0.2189866,
   0.1985847,
   0.19474,
   0.1871559,
   0.224408,
   0.2282653,
   0.2415798,
   0.2173786,
   0.2835435,
   0.2294444,
   0.2561977,
   0.5387492};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,3.465);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3032[25] = {
   1.137909,
   0.8906957,
   0.8784935,
   0.9330772,
   1.136845,
   1.112148,
   0.9166197,
   0.8853084,
   0.9735708,
   0.8446517,
   0.706551,
   0.8044201,
   0.8378494,
   1.096168,
   0.9194022,
   0.9448672,
   0.4615679,
   0.7876466,
   1.141867,
   1.265171,
   1.106852,
   1.507518,
   0.8181234,
   0.7508986,
   1.399547};
   Double_t _felx3032[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3032[25] = {
   0.2209088,
   0.1222035,
   0.1015344,
   0.1025595,
   0.1150623,
   0.1194197,
   0.1234864,
   0.1203498,
   0.151508,
   0.1483183,
   0.1397767,
   0.1729748,
   0.1762137,
   0.2357094,
   0.2126853,
   0.1987213,
   0.1467576,
   0.2120607,
   0.2574856,
   0.3291659,
   0.270613,
   0.3685714,
   0.2601261,
   0.3067464,
   0.9999146};
   Double_t _fehx3032[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3032[25] = {
   0.2124273,
   0.1189079,
   0.09923097,
   0.1003453,
   0.112775,
   0.116903,
   0.1202171,
   0.1171358,
   0.1468688,
   0.1431809,
   0.1343023,
   0.1655916,
   0.1688616,
   0.2256485,
   0.2028799,
   0.1904301,
   0.1372115,
   0.2005716,
   0.245931,
   0.3119754,
   0.2573923,
   0.3505649,
   0.2432058,
   0.2800347,
   0.8043755};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,3.465);
   Graph_Graph3032->SetMinimum(0.1258991);
   Graph_Graph3032->SetMaximum(2.392833);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

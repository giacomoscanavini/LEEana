#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Mar 13 17:56:39 2023) by ROOT version 6.26/00
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
   pad1->Range(-40,-1.450914,293.3333,160.4406);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__22->SetBinContent(0,4.221122);
   hmc__22->SetBinContent(1,59.74961);
   hmc__22->SetBinContent(2,61.27813);
   hmc__22->SetBinContent(3,57.49785);
   hmc__22->SetBinContent(4,41.71534);
   hmc__22->SetBinContent(5,38.82526);
   hmc__22->SetBinContent(6,37.00871);
   hmc__22->SetBinContent(7,30.22604);
   hmc__22->SetBinContent(8,33.04145);
   hmc__22->SetBinContent(9,31.57023);
   hmc__22->SetBinContent(10,35.15039);
   hmc__22->SetBinContent(11,31.37711);
   hmc__22->SetBinContent(12,35.57092);
   hmc__22->SetBinContent(13,35.42019);
   hmc__22->SetBinContent(14,33.33954);
   hmc__22->SetBinContent(15,31.73904);
   hmc__22->SetBinContent(16,37.33974);
   hmc__22->SetBinContent(17,38.47513);
   hmc__22->SetBinContent(18,46.59129);
   hmc__22->SetBinContent(19,32.65958);
   hmc__22->SetBinContent(20,42.1062);
   hmc__22->SetBinContent(21,47.99966);
   hmc__22->SetBinContent(22,53.25127);
   hmc__22->SetBinContent(23,63.78647);
   hmc__22->SetBinContent(24,72.54572);
   hmc__22->SetBinContent(25,72.02287);
   hmc__22->SetBinContent(26,46.21909);
   hmc__22->SetBinContent(27,3.529879);
   hmc__22->SetBinError(0,1.097874);
   hmc__22->SetBinError(1,19.81373);
   hmc__22->SetBinError(2,22.26122);
   hmc__22->SetBinError(3,18.39466);
   hmc__22->SetBinError(4,15.64181);
   hmc__22->SetBinError(5,20.47961);
   hmc__22->SetBinError(6,16.4376);
   hmc__22->SetBinError(7,15.87923);
   hmc__22->SetBinError(8,14.20803);
   hmc__22->SetBinError(9,13.12124);
   hmc__22->SetBinError(10,17.2324);
   hmc__22->SetBinError(11,10.56237);
   hmc__22->SetBinError(12,15.28561);
   hmc__22->SetBinError(13,11.66626);
   hmc__22->SetBinError(14,15.46876);
   hmc__22->SetBinError(15,11.84806);
   hmc__22->SetBinError(16,12.93357);
   hmc__22->SetBinError(17,16.38677);
   hmc__22->SetBinError(18,16.68319);
   hmc__22->SetBinError(19,17.24671);
   hmc__22->SetBinError(20,15.12954);
   hmc__22->SetBinError(21,15.87249);
   hmc__22->SetBinError(22,16.53721);
   hmc__22->SetBinError(23,30.87817);
   hmc__22->SetBinError(24,22.76942);
   hmc__22->SetBinError(25,21.95786);
   hmc__22->SetBinError(26,23.89796);
   hmc__22->SetBinError(27,4.115106);
   hmc__22->SetMinimum(-1.450914);
   hmc__22->SetMaximum(152.346);
   hmc__22->SetEntries(1133.738);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",26,0,260);
   hs8_stack_8->SetMinimum(-4.228303e-08);
   hs8_stack_8->SetMaximum(76.173);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,1.309151);
   hbadmatch_stack_1->SetBinContent(2,0.5352025);
   hbadmatch_stack_1->SetBinContent(3,0.7683758);
   hbadmatch_stack_1->SetBinContent(4,1.320373);
   hbadmatch_stack_1->SetBinContent(5,0.5867651);
   hbadmatch_stack_1->SetBinContent(6,0.8315901);
   hbadmatch_stack_1->SetBinContent(7,0.7834804);
   hbadmatch_stack_1->SetBinContent(8,1.209044);
   hbadmatch_stack_1->SetBinContent(9,1.323754);
   hbadmatch_stack_1->SetBinContent(10,0.6803553);
   hbadmatch_stack_1->SetBinContent(11,0.7336084);
   hbadmatch_stack_1->SetBinContent(12,1.847433);
   hbadmatch_stack_1->SetBinContent(13,1.412273);
   hbadmatch_stack_1->SetBinContent(14,1.85882);
   hbadmatch_stack_1->SetBinContent(15,1.096081);
   hbadmatch_stack_1->SetBinContent(16,1.801592);
   hbadmatch_stack_1->SetBinContent(17,1.032126);
   hbadmatch_stack_1->SetBinContent(18,1.919128);
   hbadmatch_stack_1->SetBinContent(19,2.340058);
   hbadmatch_stack_1->SetBinContent(20,2.221207);
   hbadmatch_stack_1->SetBinContent(21,1.305059);
   hbadmatch_stack_1->SetBinContent(22,2.152112);
   hbadmatch_stack_1->SetBinContent(23,3.221361);
   hbadmatch_stack_1->SetBinContent(24,1.407642);
   hbadmatch_stack_1->SetBinContent(25,2.28387);
   hbadmatch_stack_1->SetBinContent(26,3.005032);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6873098);
   hbadmatch_stack_1->SetBinError(2,0.3921167);
   hbadmatch_stack_1->SetBinError(3,0.4560724);
   hbadmatch_stack_1->SetBinError(4,0.5548703);
   hbadmatch_stack_1->SetBinError(5,0.3387718);
   hbadmatch_stack_1->SetBinError(6,0.4175955);
   hbadmatch_stack_1->SetBinError(7,0.3917439);
   hbadmatch_stack_1->SetBinError(8,0.4943914);
   hbadmatch_stack_1->SetBinError(9,0.5560625);
   hbadmatch_stack_1->SetBinError(10,0.4810838);
   hbadmatch_stack_1->SetBinError(11,0.4394482);
   hbadmatch_stack_1->SetBinError(12,0.9070579);
   hbadmatch_stack_1->SetBinError(13,0.6510715);
   hbadmatch_stack_1->SetBinError(14,0.734563);
   hbadmatch_stack_1->SetBinError(15,0.5640789);
   hbadmatch_stack_1->SetBinError(16,0.7491311);
   hbadmatch_stack_1->SetBinError(17,0.4638019);
   hbadmatch_stack_1->SetBinError(18,0.7128911);
   hbadmatch_stack_1->SetBinError(19,1.222473);
   hbadmatch_stack_1->SetBinError(20,0.7668242);
   hbadmatch_stack_1->SetBinError(21,0.6020344);
   hbadmatch_stack_1->SetBinError(22,0.7889757);
   hbadmatch_stack_1->SetBinError(23,0.9625521);
   hbadmatch_stack_1->SetBinError(24,0.5890407);
   hbadmatch_stack_1->SetBinError(25,0.7868924);
   hbadmatch_stack_1->SetBinError(26,0.9958452);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.7309963);
   hext_stack_2->SetBinContent(1,7.366213);
   hext_stack_2->SetBinContent(2,7.131198);
   hext_stack_2->SetBinContent(3,11.09622);
   hext_stack_2->SetBinContent(4,6.884593);
   hext_stack_2->SetBinContent(5,7.619999);
   hext_stack_2->SetBinContent(6,7.373394);
   hext_stack_2->SetBinContent(7,3.972198);
   hext_stack_2->SetBinContent(8,4.613812);
   hext_stack_2->SetBinContent(9,3.718413);
   hext_stack_2->SetBinContent(10,7.925626);
   hext_stack_2->SetBinContent(11,8.98102);
   hext_stack_2->SetBinContent(12,6.564605);
   hext_stack_2->SetBinContent(13,8.029369);
   hext_stack_2->SetBinContent(14,6.165187);
   hext_stack_2->SetBinContent(15,6.635217);
   hext_stack_2->SetBinContent(16,7.067767);
   hext_stack_2->SetBinContent(17,9.148194);
   hext_stack_2->SetBinContent(18,10.46896);
   hext_stack_2->SetBinContent(19,3.318994);
   hext_stack_2->SetBinContent(20,7.041816);
   hext_stack_2->SetBinContent(21,7.855014);
   hext_stack_2->SetBinContent(22,9.141014);
   hext_stack_2->SetBinContent(23,10.06677);
   hext_stack_2->SetBinContent(24,12.3116);
   hext_stack_2->SetBinContent(25,13.51704);
   hext_stack_2->SetBinContent(26,5.020411);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinError(0,0.5201503);
   hext_stack_2->SetBinError(1,1.79837);
   hext_stack_2->SetBinError(2,1.728522);
   hext_stack_2->SetBinError(3,2.201864);
   hext_stack_2->SetBinError(4,1.675566);
   hext_stack_2->SetBinError(5,1.79254);
   hext_stack_2->SetBinError(6,1.741532);
   hext_stack_2->SetBinError(7,1.288106);
   hext_stack_2->SetBinError(8,1.439057);
   hext_stack_2->SetBinError(9,1.296206);
   hext_stack_2->SetBinError(10,1.893598);
   hext_stack_2->SetBinError(11,1.990353);
   hext_stack_2->SetBinError(12,1.684461);
   hext_stack_2->SetBinError(13,1.74419);
   hext_stack_2->SetBinError(14,1.571905);
   hext_stack_2->SetBinError(15,1.721504);
   hext_stack_2->SetBinError(16,1.631079);
   hext_stack_2->SetBinError(17,1.935293);
   hext_stack_2->SetBinError(18,2.008515);
   hext_stack_2->SetBinError(19,1.146136);
   hext_stack_2->SetBinError(20,1.76887);
   hext_stack_2->SetBinError(21,1.859985);
   hext_stack_2->SetBinError(22,1.986595);
   hext_stack_2->SetBinError(23,2.000983);
   hext_stack_2->SetBinError(24,2.282335);
   hext_stack_2->SetBinError(25,2.47132);
   hext_stack_2->SetBinError(26,1.495396);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetEntries(503);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(1,0.4192812);
   hdirt_stack_3->SetBinContent(2,1.758908);
   hdirt_stack_3->SetBinContent(3,0.5638119);
   hdirt_stack_3->SetBinContent(4,0.2761429);
   hdirt_stack_3->SetBinContent(5,0.2989119);
   hdirt_stack_3->SetBinContent(6,0.5522859);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(8,0.911503);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.4759863);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.660638);
   hdirt_stack_3->SetBinContent(18,1.200645);
   hdirt_stack_3->SetBinContent(20,0.5852764);
   hdirt_stack_3->SetBinContent(21,2.46618);
   hdirt_stack_3->SetBinContent(22,0.9254179);
   hdirt_stack_3->SetBinContent(23,1.04794);
   hdirt_stack_3->SetBinContent(24,2.855974);
   hdirt_stack_3->SetBinContent(25,1.791767);
   hdirt_stack_3->SetBinContent(26,2.036331);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(1,0.3058667);
   hdirt_stack_3->SetBinError(2,0.7430146);
   hdirt_stack_3->SetBinError(3,0.4029034);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.211975);
   hdirt_stack_3->SetBinError(6,0.2761429);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(8,0.4568119);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.2832671);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.258803);
   hdirt_stack_3->SetBinError(17,0.394465);
   hdirt_stack_3->SetBinError(18,0.6300436);
   hdirt_stack_3->SetBinError(20,0.4188361);
   hdirt_stack_3->SetBinError(21,1.139922);
   hdirt_stack_3->SetBinError(22,0.568678);
   hdirt_stack_3->SetBinError(23,0.4412094);
   hdirt_stack_3->SetBinError(24,0.8774884);
   hdirt_stack_3->SetBinError(25,0.754641);
   hdirt_stack_3->SetBinError(26,0.8068104);
   hdirt_stack_3->SetEntries(90);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,2.877799);
   houtFV_stack_4->SetBinContent(1,32.45054);
   houtFV_stack_4->SetBinContent(2,13.75611);
   houtFV_stack_4->SetBinContent(3,11.22735);
   houtFV_stack_4->SetBinContent(4,8.222492);
   houtFV_stack_4->SetBinContent(5,5.22824);
   houtFV_stack_4->SetBinContent(6,4.109654);
   houtFV_stack_4->SetBinContent(7,6.28893);
   houtFV_stack_4->SetBinContent(8,6.568863);
   houtFV_stack_4->SetBinContent(9,6.262493);
   houtFV_stack_4->SetBinContent(10,5.354061);
   houtFV_stack_4->SetBinContent(11,2.883953);
   houtFV_stack_4->SetBinContent(12,6.834024);
   houtFV_stack_4->SetBinContent(13,6.613919);
   houtFV_stack_4->SetBinContent(14,6.635442);
   houtFV_stack_4->SetBinContent(15,4.146974);
   houtFV_stack_4->SetBinContent(16,7.114783);
   houtFV_stack_4->SetBinContent(17,6.828347);
   houtFV_stack_4->SetBinContent(18,8.540185);
   houtFV_stack_4->SetBinContent(19,6.222048);
   houtFV_stack_4->SetBinContent(20,9.960569);
   houtFV_stack_4->SetBinContent(21,7.705747);
   houtFV_stack_4->SetBinContent(22,9.42411);
   houtFV_stack_4->SetBinContent(23,11.50082);
   houtFV_stack_4->SetBinContent(24,13.85137);
   houtFV_stack_4->SetBinContent(25,13.38689);
   houtFV_stack_4->SetBinContent(26,19.26793);
   houtFV_stack_4->SetBinContent(27,2.804565);
   houtFV_stack_4->SetBinError(0,0.8997006);
   houtFV_stack_4->SetBinError(1,2.964417);
   houtFV_stack_4->SetBinError(2,1.877654);
   houtFV_stack_4->SetBinError(3,1.71686);
   houtFV_stack_4->SetBinError(4,1.509754);
   houtFV_stack_4->SetBinError(5,1.126877);
   houtFV_stack_4->SetBinError(6,1.001326);
   houtFV_stack_4->SetBinError(7,1.317462);
   houtFV_stack_4->SetBinError(8,1.471592);
   houtFV_stack_4->SetBinError(9,1.318817);
   houtFV_stack_4->SetBinError(10,1.160803);
   houtFV_stack_4->SetBinError(11,0.7832516);
   houtFV_stack_4->SetBinError(12,1.291239);
   houtFV_stack_4->SetBinError(13,1.266899);
   houtFV_stack_4->SetBinError(14,1.300676);
   houtFV_stack_4->SetBinError(15,1.009526);
   houtFV_stack_4->SetBinError(16,1.320945);
   houtFV_stack_4->SetBinError(17,1.33777);
   houtFV_stack_4->SetBinError(18,1.528248);
   houtFV_stack_4->SetBinError(19,1.153259);
   houtFV_stack_4->SetBinError(20,1.658832);
   houtFV_stack_4->SetBinError(21,1.434019);
   houtFV_stack_4->SetBinError(22,1.589274);
   houtFV_stack_4->SetBinError(23,2.014507);
   houtFV_stack_4->SetBinError(24,1.79319);
   houtFV_stack_4->SetBinError(25,1.837065);
   houtFV_stack_4->SetBinError(26,2.205622);
   houtFV_stack_4->SetBinError(27,0.8373411);
   houtFV_stack_4->SetEntries(1038);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.418668);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.5845718);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5008719);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8232222);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.198708);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.547462);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2107962);
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
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2081635);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2024767);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3577516);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3549294);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4560364);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3901041);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5025361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2390593);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2820092);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetEntries(29);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.477801);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.34804);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.923295);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.602034);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.14865);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.217404);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.59489);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.2767);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.550468);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.639713);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.89115);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.814682);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.4935);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.072752);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.537178);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.798904);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.741192);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.199377);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.800568);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.813682);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.620542);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.668876);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.19567);
   hNCpi0inFVres_stack_7->SetBinContent(24,10.90046);
   hNCpi0inFVres_stack_7->SetBinContent(25,12.0477);
   hNCpi0inFVres_stack_7->SetBinContent(26,4.613814);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6734216);
   hNCpi0inFVres_stack_7->SetBinError(2,1.089896);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9655857);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9416418);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7748702);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7890557);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8512625);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8567318);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8333574);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6235556);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6792239);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7812484);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7798357);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6451335);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7799605);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7816219);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7032947);
   hNCpi0inFVres_stack_7->SetBinError(18,0.665524);
   hNCpi0inFVres_stack_7->SetBinError(19,0.805894);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7472108);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7383467);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8911351);
   hNCpi0inFVres_stack_7->SetBinError(23,1.073616);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9726805);
   hNCpi0inFVres_stack_7->SetBinError(25,1.159372);
   hNCpi0inFVres_stack_7->SetBinError(26,0.7014937);
   hNCpi0inFVres_stack_7->SetBinError(27,0.03945654);
   hNCpi0inFVres_stack_7->SetEntries(3289);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.742426);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.649348);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.468994);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.939726);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.68613);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.646108);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.058872);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.366108);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.267958);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.701244);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9338218);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.770662);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.840912);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.491494);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.827126);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9202038);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.22744);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.519226);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.811012);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.61904);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.272198);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.134194);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.37018);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.222134);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.509511);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.7943219);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.384578);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5274672);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5029144);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5073453);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4388565);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.436411);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.237834);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3614489);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3192308);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4533256);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2812022);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4628136);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4920925);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4167175);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4497339);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2682147);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3821249);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3763946);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3705758);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4571021);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4916305);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4935402);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4875229);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6210551);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4569592);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2741946);
   hNCpi0inFVdis_stack_8->SetEntries(856);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(1,6.445489);
   hCCpi0inFV_stack_10->SetBinContent(2,13.14264);
   hCCpi0inFV_stack_10->SetBinContent(3,13.76974);
   hCCpi0inFV_stack_10->SetBinContent(4,9.10897);
   hCCpi0inFV_stack_10->SetBinContent(5,9.269249);
   hCCpi0inFV_stack_10->SetBinContent(6,11.18732);
   hCCpi0inFV_stack_10->SetBinContent(7,7.185623);
   hCCpi0inFV_stack_10->SetBinContent(8,7.08912);
   hCCpi0inFV_stack_10->SetBinContent(9,9.825781);
   hCCpi0inFV_stack_10->SetBinContent(10,7.7642);
   hCCpi0inFV_stack_10->SetBinContent(11,5.816696);
   hCCpi0inFV_stack_10->SetBinContent(12,6.8423);
   hCCpi0inFV_stack_10->SetBinContent(13,6.605248);
   hCCpi0inFV_stack_10->SetBinContent(14,7.225589);
   hCCpi0inFV_stack_10->SetBinContent(15,7.028054);
   hCCpi0inFV_stack_10->SetBinContent(16,7.820806);
   hCCpi0inFV_stack_10->SetBinContent(17,7.629312);
   hCCpi0inFV_stack_10->SetBinContent(18,9.624819);
   hCCpi0inFV_stack_10->SetBinContent(19,5.755672);
   hCCpi0inFV_stack_10->SetBinContent(20,8.364384);
   hCCpi0inFV_stack_10->SetBinContent(21,8.583958);
   hCCpi0inFV_stack_10->SetBinContent(22,8.217168);
   hCCpi0inFV_stack_10->SetBinContent(23,10.29913);
   hCCpi0inFV_stack_10->SetBinContent(24,15.16592);
   hCCpi0inFV_stack_10->SetBinContent(25,11.52701);
   hCCpi0inFV_stack_10->SetBinContent(26,4.393198);
   hCCpi0inFV_stack_10->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,1.286744);
   hCCpi0inFV_stack_10->SetBinError(2,1.820015);
   hCCpi0inFV_stack_10->SetBinError(3,1.892676);
   hCCpi0inFV_stack_10->SetBinError(4,1.538114);
   hCCpi0inFV_stack_10->SetBinError(5,1.537973);
   hCCpi0inFV_stack_10->SetBinError(6,1.711759);
   hCCpi0inFV_stack_10->SetBinError(7,1.255696);
   hCCpi0inFV_stack_10->SetBinError(8,1.411928);
   hCCpi0inFV_stack_10->SetBinError(9,1.571513);
   hCCpi0inFV_stack_10->SetBinError(10,1.422804);
   hCCpi0inFV_stack_10->SetBinError(11,1.176979);
   hCCpi0inFV_stack_10->SetBinError(12,1.316977);
   hCCpi0inFV_stack_10->SetBinError(13,1.241261);
   hCCpi0inFV_stack_10->SetBinError(14,1.344563);
   hCCpi0inFV_stack_10->SetBinError(15,1.352731);
   hCCpi0inFV_stack_10->SetBinError(16,1.387778);
   hCCpi0inFV_stack_10->SetBinError(17,1.426559);
   hCCpi0inFV_stack_10->SetBinError(18,1.557739);
   hCCpi0inFV_stack_10->SetBinError(19,1.216988);
   hCCpi0inFV_stack_10->SetBinError(20,1.447725);
   hCCpi0inFV_stack_10->SetBinError(21,1.491357);
   hCCpi0inFV_stack_10->SetBinError(22,1.437482);
   hCCpi0inFV_stack_10->SetBinError(23,1.586751);
   hCCpi0inFV_stack_10->SetBinError(24,1.981581);
   hCCpi0inFV_stack_10->SetBinError(25,1.705277);
   hCCpi0inFV_stack_10->SetBinError(26,1.074885);
   hCCpi0inFV_stack_10->SetEntries(957);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,1.515398);
   hNCinFV_stack_11->SetBinContent(2,4.248045);
   hNCinFV_stack_11->SetBinContent(3,2.834081);
   hNCinFV_stack_11->SetBinContent(4,2.199135);
   hNCinFV_stack_11->SetBinContent(5,1.65886);
   hNCinFV_stack_11->SetBinContent(6,0.8770706);
   hNCinFV_stack_11->SetBinContent(7,0.3401776);
   hNCinFV_stack_11->SetBinContent(8,1.322064);
   hNCinFV_stack_11->SetBinContent(9,1.608988);
   hNCinFV_stack_11->SetBinContent(10,1.467217);
   hNCinFV_stack_11->SetBinContent(11,2.394159);
   hNCinFV_stack_11->SetBinContent(12,1.608988);
   hNCinFV_stack_11->SetBinContent(13,1.605607);
   hNCinFV_stack_11->SetBinContent(14,1.373626);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,1.125349);
   hNCinFV_stack_11->SetBinContent(17,1.857266);
   hNCinFV_stack_11->SetBinContent(18,2.139579);
   hNCinFV_stack_11->SetBinContent(19,0.5352025);
   hNCinFV_stack_11->SetBinContent(20,1.316992);
   hNCinFV_stack_11->SetBinContent(21,2.590875);
   hNCinFV_stack_11->SetBinContent(22,2.053982);
   hNCinFV_stack_11->SetBinContent(23,2.050601);
   hNCinFV_stack_11->SetBinContent(24,3.712842);
   hNCinFV_stack_11->SetBinContent(25,5.270268);
   hNCinFV_stack_11->SetBinContent(26,2.30395);
   hNCinFV_stack_11->SetBinError(1,0.588146);
   hNCinFV_stack_11->SetBinError(2,1.038119);
   hNCinFV_stack_11->SetBinError(3,0.8081673);
   hNCinFV_stack_11->SetBinError(4,0.7607114);
   hNCinFV_stack_11->SetBinError(5,0.650338);
   hNCinFV_stack_11->SetBinError(6,0.5197486);
   hNCinFV_stack_11->SetBinError(7,0.3401776);
   hNCinFV_stack_11->SetBinError(8,0.5554667);
   hNCinFV_stack_11->SetBinError(9,0.6801404);
   hNCinFV_stack_11->SetBinError(10,0.6214735);
   hNCinFV_stack_11->SetBinError(11,0.785313);
   hNCinFV_stack_11->SetBinError(12,0.6801404);
   hNCinFV_stack_11->SetBinError(13,0.679166);
   hNCinFV_stack_11->SetBinError(14,0.519186);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.5194673);
   hNCinFV_stack_11->SetBinError(17,0.6799255);
   hNCinFV_stack_11->SetBinError(18,0.8108884);
   hNCinFV_stack_11->SetBinError(19,0.3921167);
   hNCinFV_stack_11->SetBinError(20,0.5536755);
   hNCinFV_stack_11->SetBinError(21,0.8095761);
   hNCinFV_stack_11->SetBinError(22,0.7078105);
   hNCinFV_stack_11->SetBinError(23,0.7068742);
   hNCinFV_stack_11->SetBinError(24,0.9612155);
   hNCinFV_stack_11->SetBinError(25,1.19395);
   hNCinFV_stack_11->SetBinError(26,0.7080718);
   hNCinFV_stack_11->SetEntries(213);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,3.604649);
   hnumuCCinFV_stack_12->SetBinContent(2,5.871976);
   hnumuCCinFV_stack_12->SetBinContent(3,3.245757);
   hnumuCCinFV_stack_12->SetBinContent(4,2.799838);
   hnumuCCinFV_stack_12->SetBinContent(5,5.002282);
   hnumuCCinFV_stack_12->SetBinContent(6,2.887832);
   hnumuCCinFV_stack_12->SetBinContent(7,2.66218);
   hnumuCCinFV_stack_12->SetBinContent(8,3.129384);
   hnumuCCinFV_stack_12->SetBinContent(9,1.31193);
   hnumuCCinFV_stack_12->SetBinContent(10,3.244165);
   hnumuCCinFV_stack_12->SetBinContent(11,3.540777);
   hnumuCCinFV_stack_12->SetBinContent(12,3.164998);
   hnumuCCinFV_stack_12->SetBinContent(13,3.484389);
   hnumuCCinFV_stack_12->SetBinContent(14,3.690359);
   hnumuCCinFV_stack_12->SetBinContent(15,3.882904);
   hnumuCCinFV_stack_12->SetBinContent(16,4.997158);
   hnumuCCinFV_stack_12->SetBinContent(17,3.690597);
   hnumuCCinFV_stack_12->SetBinContent(18,5.475754);
   hnumuCCinFV_stack_12->SetBinContent(19,5.69035);
   hnumuCCinFV_stack_12->SetBinContent(20,4.77885);
   hnumuCCinFV_stack_12->SetBinContent(21,8.818799);
   hnumuCCinFV_stack_12->SetBinContent(22,10.38176);
   hnumuCCinFV_stack_12->SetBinContent(23,12.15497);
   hnumuCCinFV_stack_12->SetBinContent(24,7.919058);
   hnumuCCinFV_stack_12->SetBinContent(25,7.636319);
   hnumuCCinFV_stack_12->SetBinContent(26,4.644613);
   hnumuCCinFV_stack_12->SetBinError(1,0.9999634);
   hnumuCCinFV_stack_12->SetBinError(2,1.206049);
   hnumuCCinFV_stack_12->SetBinError(3,0.938373);
   hnumuCCinFV_stack_12->SetBinError(4,0.8505587);
   hnumuCCinFV_stack_12->SetBinError(5,1.200367);
   hnumuCCinFV_stack_12->SetBinError(6,0.8679539);
   hnumuCCinFV_stack_12->SetBinError(7,0.8794789);
   hnumuCCinFV_stack_12->SetBinError(8,0.857844);
   hnumuCCinFV_stack_12->SetBinError(9,0.5386283);
   hnumuCCinFV_stack_12->SetBinError(10,0.9117064);
   hnumuCCinFV_stack_12->SetBinError(11,0.9054122);
   hnumuCCinFV_stack_12->SetBinError(12,0.9258813);
   hnumuCCinFV_stack_12->SetBinError(13,1.134934);
   hnumuCCinFV_stack_12->SetBinError(14,0.9480153);
   hnumuCCinFV_stack_12->SetBinError(15,1.053224);
   hnumuCCinFV_stack_12->SetBinError(16,1.168246);
   hnumuCCinFV_stack_12->SetBinError(17,0.9416588);
   hnumuCCinFV_stack_12->SetBinError(18,1.251148);
   hnumuCCinFV_stack_12->SetBinError(19,1.268437);
   hnumuCCinFV_stack_12->SetBinError(20,1.653446);
   hnumuCCinFV_stack_12->SetBinError(21,1.564123);
   hnumuCCinFV_stack_12->SetBinError(22,2.538464);
   hnumuCCinFV_stack_12->SetBinError(23,2.774334);
   hnumuCCinFV_stack_12->SetBinError(24,1.75948);
   hnumuCCinFV_stack_12->SetBinError(25,1.478036);
   hnumuCCinFV_stack_12->SetBinError(26,1.106515);
   hnumuCCinFV_stack_12->SetEntries(501);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(3,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.6840218);
   hnueCCinFV_stack_13->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(8,0.4432483);
   hnueCCinFV_stack_13->SetBinContent(9,0.4228751);
   hnueCCinFV_stack_13->SetBinContent(10,1.157431);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.6278813);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.5959703);
   hnueCCinFV_stack_13->SetBinContent(25,0.3934307);
   hnueCCinFV_stack_13->SetBinError(3,0.3025491);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.526453);
   hnueCCinFV_stack_13->SetBinError(7,0.2781975);
   hnueCCinFV_stack_13->SetBinError(8,0.3134667);
   hnueCCinFV_stack_13->SetBinError(9,0.2997418);
   hnueCCinFV_stack_13->SetBinError(10,1.157431);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.7431478);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.4877217);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.3503734);
   hnueCCinFV_stack_13->SetBinError(25,0.2781975);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__23->SetBinContent(0,4.221122);
   hmcerror__23->SetBinContent(1,59.74961);
   hmcerror__23->SetBinContent(2,61.27813);
   hmcerror__23->SetBinContent(3,57.49785);
   hmcerror__23->SetBinContent(4,41.71534);
   hmcerror__23->SetBinContent(5,38.82526);
   hmcerror__23->SetBinContent(6,37.00871);
   hmcerror__23->SetBinContent(7,30.22604);
   hmcerror__23->SetBinContent(8,33.04145);
   hmcerror__23->SetBinContent(9,31.57023);
   hmcerror__23->SetBinContent(10,35.15039);
   hmcerror__23->SetBinContent(11,31.37711);
   hmcerror__23->SetBinContent(12,35.57092);
   hmcerror__23->SetBinContent(13,35.42019);
   hmcerror__23->SetBinContent(14,33.33954);
   hmcerror__23->SetBinContent(15,31.73904);
   hmcerror__23->SetBinContent(16,37.33974);
   hmcerror__23->SetBinContent(17,38.47513);
   hmcerror__23->SetBinContent(18,46.59129);
   hmcerror__23->SetBinContent(19,32.65958);
   hmcerror__23->SetBinContent(20,42.1062);
   hmcerror__23->SetBinContent(21,47.99966);
   hmcerror__23->SetBinContent(22,53.25127);
   hmcerror__23->SetBinContent(23,63.78647);
   hmcerror__23->SetBinContent(24,72.54572);
   hmcerror__23->SetBinContent(25,72.02287);
   hmcerror__23->SetBinContent(26,46.21909);
   hmcerror__23->SetBinContent(27,3.529879);
   hmcerror__23->SetBinError(0,1.097874);
   hmcerror__23->SetBinError(1,19.81373);
   hmcerror__23->SetBinError(2,22.26122);
   hmcerror__23->SetBinError(3,18.39466);
   hmcerror__23->SetBinError(4,15.64181);
   hmcerror__23->SetBinError(5,20.47961);
   hmcerror__23->SetBinError(6,16.4376);
   hmcerror__23->SetBinError(7,15.87923);
   hmcerror__23->SetBinError(8,14.20803);
   hmcerror__23->SetBinError(9,13.12124);
   hmcerror__23->SetBinError(10,17.2324);
   hmcerror__23->SetBinError(11,10.56237);
   hmcerror__23->SetBinError(12,15.28561);
   hmcerror__23->SetBinError(13,11.66626);
   hmcerror__23->SetBinError(14,15.46876);
   hmcerror__23->SetBinError(15,11.84806);
   hmcerror__23->SetBinError(16,12.93357);
   hmcerror__23->SetBinError(17,16.38677);
   hmcerror__23->SetBinError(18,16.68319);
   hmcerror__23->SetBinError(19,17.24671);
   hmcerror__23->SetBinError(20,15.12954);
   hmcerror__23->SetBinError(21,15.87249);
   hmcerror__23->SetBinError(22,16.53721);
   hmcerror__23->SetBinError(23,30.87817);
   hmcerror__23->SetBinError(24,22.76942);
   hmcerror__23->SetBinError(25,21.95786);
   hmcerror__23->SetBinError(26,23.89796);
   hmcerror__23->SetBinError(27,4.115106);
   hmcerror__23->SetEntries(1133.738);

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
   
   Double_t _fx3029[26] = {
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
   Double_t _fy3029[26] = {
   54,
   67,
   45,
   42,
   39,
   29,
   39,
   36,
   29,
   30,
   31,
   37,
   33,
   36,
   28,
   33,
   31,
   30,
   40,
   41,
   50,
   45,
   55,
   64,
   64,
   40};
   Double_t _felx3029[26] = {
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
   Double_t _fely3029[26] = {
   7.4785,
   8.3119,
   6.8416,
   6.6155,
   6.3813,
   5.5285,
   6.3813,
   6.1381,
   5.5285,
   5.6197,
   5.7094,
   6.2203,
   5.8847,
   6.1381,
   5.4358,
   5.8847,
   5.7094,
   5.6197,
   6.4604,
   6.5384,
   7.2025,
   6.8416,
   7.546,
   8.1273,
   8.1273,
   6.4604};
   Double_t _fehx3029[26] = {
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
   Double_t _fehy3029[26] = {
   7.275,
   8.1094,
   6.637,
   6.4104,
   6.1757,
   5.3201,
   6.1757,
   5.9318,
   5.3201,
   5.4117,
   5.5017,
   6.0141,
   5.6776,
   5.9318,
   5.2271,
   5.6776,
   5.5017,
   5.4117,
   6.2549,
   6.3331,
   6.9985,
   6.637,
   7.3425,
   7.9246,
   7.9246,
   6.2549};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,286);
   Graph_Graph3029->SetMinimum(17.30968);
   Graph_Graph3029->SetMaximum(80.36392);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1068.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 240.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[26] = {
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
   Double_t _fy3030[26] = {
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
   Double_t _felx3030[26] = {
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
   Double_t _fely3030[26] = {
   0.3316126,
   0.3632816,
   0.3199191,
   0.3749654,
   0.5274816,
   0.4441548,
   0.5253493,
   0.4300062,
   0.4156207,
   0.4902478,
   0.3366267,
   0.429722,
   0.3293675,
   0.4639763,
   0.3732962,
   0.3463753,
   0.4259055,
   0.3580754,
   0.5280751,
   0.3593186,
   0.3306792,
   0.3105505,
   0.4840866,
   0.3138631,
   0.3048735,
   0.5170581};
   Double_t _fehx3030[26] = {
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
   Double_t _fehy3030[26] = {
   0.3316126,
   0.3632816,
   0.3199191,
   0.3749654,
   0.5274816,
   0.4441548,
   0.5253493,
   0.4300062,
   0.4156207,
   0.4902478,
   0.3366267,
   0.429722,
   0.3293675,
   0.4639763,
   0.3732962,
   0.3463753,
   0.4259055,
   0.3580754,
   0.5280751,
   0.3593186,
   0.3306792,
   0.3105505,
   0.4840866,
   0.3138631,
   0.3048735,
   0.5170581};
   grae = new TGraphAsymmErrors(26,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,286);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3031[26] = {
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
   Double_t _fy3031[26] = {
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
   Double_t _felx3031[26] = {
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
   Double_t _fely3031[26] = {
   0.1872741,
   0.1867888,
   0.196976,
   0.1927019,
   0.1973469,
   0.1866537,
   0.1998579,
   0.2129478,
   0.200419,
   0.2192111,
   0.1811058,
   0.1685852,
   0.18209,
   0.1835498,
   0.1937654,
   0.180441,
   0.1779716,
   0.1712047,
   0.2237086,
   0.1938336,
   0.1680669,
   0.1786135,
   0.1854474,
   0.1756995,
   0.1739973,
   0.1850701};
   Double_t _fehx3031[26] = {
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
   Double_t _fehy3031[26] = {
   0.1872741,
   0.1867888,
   0.196976,
   0.1927019,
   0.1973469,
   0.1866537,
   0.1998579,
   0.2129478,
   0.200419,
   0.2192111,
   0.1811058,
   0.1685852,
   0.18209,
   0.1835498,
   0.1937654,
   0.180441,
   0.1779716,
   0.1712047,
   0.2237086,
   0.1938336,
   0.1680669,
   0.1786135,
   0.1854474,
   0.1756995,
   0.1739973,
   0.1850701};
   grae = new TGraphAsymmErrors(26,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,286);
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
   
   Double_t _fx3032[26] = {
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
   Double_t _fy3032[26] = {
   0.9037715,
   1.093375,
   0.7826379,
   1.006824,
   1.004501,
   0.7835993,
   1.290278,
   1.089541,
   0.9185868,
   0.8534756,
   0.9879813,
   1.040175,
   0.9316722,
   1.079799,
   0.8821942,
   0.8837768,
   0.8057152,
   0.6438972,
   1.224756,
   0.9737283,
   1.041674,
   0.8450502,
   0.8622518,
   0.8822023,
   0.8886066,
   0.8654432};
   Double_t _felx3032[26] = {
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
   Double_t _fely3032[26] = {
   0.125164,
   0.1356422,
   0.1189888,
   0.1585867,
   0.1643595,
   0.1493837,
   0.2111193,
   0.1857697,
   0.1751175,
   0.1598759,
   0.1819607,
   0.1748704,
   0.1661397,
   0.1841087,
   0.1712654,
   0.1575988,
   0.148392,
   0.120617,
   0.1978103,
   0.1552835,
   0.1500532,
   0.1284777,
   0.118301,
   0.11203,
   0.1128433,
   0.1397777};
   Double_t _fehx3032[26] = {
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
   Double_t _fehy3032[26] = {
   0.1217581,
   0.1323376,
   0.1154304,
   0.1536701,
   0.159064,
   0.1437526,
   0.2043172,
   0.179526,
   0.1685163,
   0.1539585,
   0.1753412,
   0.1690735,
   0.1602928,
   0.1779209,
   0.1646899,
   0.1520525,
   0.1429937,
   0.1161526,
   0.1915181,
   0.1504078,
   0.1458031,
   0.1246355,
   0.1151106,
   0.1092359,
   0.1100289,
   0.1353315};
   grae = new TGraphAsymmErrors(26,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,286);
   Graph_Graph3032->SetMinimum(0.4261487);
   Graph_Graph3032->SetMaximum(1.591727);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

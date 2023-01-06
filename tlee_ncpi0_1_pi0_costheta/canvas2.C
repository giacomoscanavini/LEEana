#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 10:30:52 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-16.84622,1.25641,1862.837);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__4->SetBinContent(1,122.2846);
   hmc__4->SetBinContent(2,96.98451);
   hmc__4->SetBinContent(3,94.59377);
   hmc__4->SetBinContent(4,84.23602);
   hmc__4->SetBinContent(5,84.68073);
   hmc__4->SetBinContent(6,87.15428);
   hmc__4->SetBinContent(7,92.59886);
   hmc__4->SetBinContent(8,84.87003);
   hmc__4->SetBinContent(9,81.85828);
   hmc__4->SetBinContent(10,93.74947);
   hmc__4->SetBinContent(11,107.3663);
   hmc__4->SetBinContent(12,104.3972);
   hmc__4->SetBinContent(13,118.3698);
   hmc__4->SetBinContent(14,138.4257);
   hmc__4->SetBinContent(15,149.6063);
   hmc__4->SetBinContent(16,158.7212);
   hmc__4->SetBinContent(17,176.9732);
   hmc__4->SetBinContent(18,197.6964);
   hmc__4->SetBinContent(19,235.0625);
   hmc__4->SetBinContent(20,285.4995);
   hmc__4->SetBinContent(21,335.2699);
   hmc__4->SetBinContent(22,362.6068);
   hmc__4->SetBinContent(23,452.2034);
   hmc__4->SetBinContent(24,597.4314);
   hmc__4->SetBinContent(25,842.311);
   hmc__4->SetBinError(1,36.01065);
   hmc__4->SetBinError(2,31.45627);
   hmc__4->SetBinError(3,32.83484);
   hmc__4->SetBinError(4,29.90348);
   hmc__4->SetBinError(5,30.04788);
   hmc__4->SetBinError(6,30.2424);
   hmc__4->SetBinError(7,30.12472);
   hmc__4->SetBinError(8,28.83359);
   hmc__4->SetBinError(9,29.91261);
   hmc__4->SetBinError(10,35.22632);
   hmc__4->SetBinError(11,36.25722);
   hmc__4->SetBinError(12,38.26183);
   hmc__4->SetBinError(13,40.16204);
   hmc__4->SetBinError(14,43.85779);
   hmc__4->SetBinError(15,48.00658);
   hmc__4->SetBinError(16,52.97682);
   hmc__4->SetBinError(17,55.157);
   hmc__4->SetBinError(18,64.04038);
   hmc__4->SetBinError(19,72.83648);
   hmc__4->SetBinError(20,89.64797);
   hmc__4->SetBinError(21,110.2993);
   hmc__4->SetBinError(22,111.726);
   hmc__4->SetBinError(23,122.2173);
   hmc__4->SetBinError(24,149.5214);
   hmc__4->SetBinError(25,209.5378);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-16.84622);
   hmc__4->SetMaximum(1768.853);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-1,1);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(884.4265);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,4.012274);
   hbadmatch_stack_1->SetBinContent(2,2.169787);
   hbadmatch_stack_1->SetBinContent(3,3.20624);
   hbadmatch_stack_1->SetBinContent(4,2.411045);
   hbadmatch_stack_1->SetBinContent(5,1.918656);
   hbadmatch_stack_1->SetBinContent(6,1.896534);
   hbadmatch_stack_1->SetBinContent(7,3.579519);
   hbadmatch_stack_1->SetBinContent(8,2.135459);
   hbadmatch_stack_1->SetBinContent(9,2.324162);
   hbadmatch_stack_1->SetBinContent(10,2.599637);
   hbadmatch_stack_1->SetBinContent(11,1.819804);
   hbadmatch_stack_1->SetBinContent(12,3.591479);
   hbadmatch_stack_1->SetBinContent(13,1.431605);
   hbadmatch_stack_1->SetBinContent(14,7.576396);
   hbadmatch_stack_1->SetBinContent(15,7.106824);
   hbadmatch_stack_1->SetBinContent(16,4.055169);
   hbadmatch_stack_1->SetBinContent(17,4.662474);
   hbadmatch_stack_1->SetBinContent(18,3.546089);
   hbadmatch_stack_1->SetBinContent(19,3.678094);
   hbadmatch_stack_1->SetBinContent(20,7.534528);
   hbadmatch_stack_1->SetBinContent(21,5.667246);
   hbadmatch_stack_1->SetBinContent(22,9.807676);
   hbadmatch_stack_1->SetBinContent(23,8.138637);
   hbadmatch_stack_1->SetBinContent(24,9.538116);
   hbadmatch_stack_1->SetBinContent(25,15.02348);
   hbadmatch_stack_1->SetBinError(1,1.074133);
   hbadmatch_stack_1->SetBinError(2,0.7636201);
   hbadmatch_stack_1->SetBinError(3,1.762301);
   hbadmatch_stack_1->SetBinError(4,0.7398287);
   hbadmatch_stack_1->SetBinError(5,0.6201138);
   hbadmatch_stack_1->SetBinError(6,0.7501155);
   hbadmatch_stack_1->SetBinError(7,1.000519);
   hbadmatch_stack_1->SetBinError(8,0.7373379);
   hbadmatch_stack_1->SetBinError(9,0.7810228);
   hbadmatch_stack_1->SetBinError(10,0.8859713);
   hbadmatch_stack_1->SetBinError(11,0.6657631);
   hbadmatch_stack_1->SetBinError(12,0.9921602);
   hbadmatch_stack_1->SetBinError(13,0.611646);
   hbadmatch_stack_1->SetBinError(14,2.107243);
   hbadmatch_stack_1->SetBinError(15,2.295635);
   hbadmatch_stack_1->SetBinError(16,1.384116);
   hbadmatch_stack_1->SetBinError(17,1.221886);
   hbadmatch_stack_1->SetBinError(18,1.072775);
   hbadmatch_stack_1->SetBinError(19,1.030471);
   hbadmatch_stack_1->SetBinError(20,1.440672);
   hbadmatch_stack_1->SetBinError(21,1.309387);
   hbadmatch_stack_1->SetBinError(22,1.694626);
   hbadmatch_stack_1->SetBinError(23,1.46996);
   hbadmatch_stack_1->SetBinError(24,1.622109);
   hbadmatch_stack_1->SetBinError(25,2.213455);
   hbadmatch_stack_1->SetEntries(480);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,11.59655);
   hext_stack_2->SetBinContent(2,8.57883);
   hext_stack_2->SetBinContent(3,6.73178);
   hext_stack_2->SetBinContent(4,5.979242);
   hext_stack_2->SetBinContent(5,6.806801);
   hext_stack_2->SetBinContent(6,8.802256);
   hext_stack_2->SetBinContent(7,12.92009);
   hext_stack_2->SetBinContent(8,11.40184);
   hext_stack_2->SetBinContent(9,4.956979);
   hext_stack_2->SetBinContent(10,12.26688);
   hext_stack_2->SetBinContent(11,20.94668);
   hext_stack_2->SetBinContent(12,8.440376);
   hext_stack_2->SetBinContent(13,18.80277);
   hext_stack_2->SetBinContent(14,15.63501);
   hext_stack_2->SetBinContent(15,23.14843);
   hext_stack_2->SetBinContent(16,19.09245);
   hext_stack_2->SetBinContent(17,21.8189);
   hext_stack_2->SetBinContent(18,22.80369);
   hext_stack_2->SetBinContent(19,35.12846);
   hext_stack_2->SetBinContent(20,27.98132);
   hext_stack_2->SetBinContent(21,30.15554);
   hext_stack_2->SetBinContent(22,19.93878);
   hext_stack_2->SetBinContent(23,32.86328);
   hext_stack_2->SetBinContent(24,42.09803);
   hext_stack_2->SetBinContent(25,37.85774);
   hext_stack_2->SetBinError(1,2.517529);
   hext_stack_2->SetBinError(2,1.982751);
   hext_stack_2->SetBinError(3,1.619032);
   hext_stack_2->SetBinError(4,1.718811);
   hext_stack_2->SetBinError(5,1.697809);
   hext_stack_2->SetBinError(6,2.060031);
   hext_stack_2->SetBinError(7,2.508068);
   hext_stack_2->SetBinError(8,2.284889);
   hext_stack_2->SetBinError(9,1.381607);
   hext_stack_2->SetBinError(10,2.438199);
   hext_stack_2->SetBinError(11,3.10949);
   hext_stack_2->SetBinError(12,1.82829);
   hext_stack_2->SetBinError(13,3.096293);
   hext_stack_2->SetBinError(14,2.580271);
   hext_stack_2->SetBinError(15,3.475809);
   hext_stack_2->SetBinError(16,2.925763);
   hext_stack_2->SetBinError(17,3.192463);
   hext_stack_2->SetBinError(18,3.231322);
   hext_stack_2->SetBinError(19,4.169685);
   hext_stack_2->SetBinError(20,3.605416);
   hext_stack_2->SetBinError(21,3.752063);
   hext_stack_2->SetBinError(22,2.867237);
   hext_stack_2->SetBinError(23,3.827084);
   hext_stack_2->SetBinError(24,4.462909);
   hext_stack_2->SetBinError(25,4.165485);
   hext_stack_2->SetEntries(1085);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,1.022793);
   hdirt_stack_3->SetBinContent(2,1.133963);
   hdirt_stack_3->SetBinContent(3,0.5248055);
   hdirt_stack_3->SetBinContent(4,1.766963);
   hdirt_stack_3->SetBinContent(5,1.176364);
   hdirt_stack_3->SetBinContent(6,0.2761429);
   hdirt_stack_3->SetBinContent(7,1.902336);
   hdirt_stack_3->SetBinContent(8,1.20838);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,1.330383);
   hdirt_stack_3->SetBinContent(11,0.5872014);
   hdirt_stack_3->SetBinContent(12,0.3738302);
   hdirt_stack_3->SetBinContent(13,0.8509132);
   hdirt_stack_3->SetBinContent(14,1.175891);
   hdirt_stack_3->SetBinContent(15,3.62435);
   hdirt_stack_3->SetBinContent(16,2.338204);
   hdirt_stack_3->SetBinContent(17,1.273736);
   hdirt_stack_3->SetBinContent(18,2.202308);
   hdirt_stack_3->SetBinContent(19,3.100146);
   hdirt_stack_3->SetBinContent(20,2.118791);
   hdirt_stack_3->SetBinContent(21,4.528926);
   hdirt_stack_3->SetBinContent(22,5.18136);
   hdirt_stack_3->SetBinContent(23,2.13688);
   hdirt_stack_3->SetBinContent(24,4.371415);
   hdirt_stack_3->SetBinContent(25,4.620786);
   hdirt_stack_3->SetBinError(1,0.4329879);
   hdirt_stack_3->SetBinError(2,0.4956247);
   hdirt_stack_3->SetBinError(3,0.3070897);
   hdirt_stack_3->SetBinError(4,0.7174075);
   hdirt_stack_3->SetBinError(5,0.6086953);
   hdirt_stack_3->SetBinError(6,0.1952625);
   hdirt_stack_3->SetBinError(7,0.7440939);
   hdirt_stack_3->SetBinError(8,0.584084);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.6284736);
   hdirt_stack_3->SetBinError(11,0.3414378);
   hdirt_stack_3->SetBinError(12,0.2681791);
   hdirt_stack_3->SetBinError(13,0.5162367);
   hdirt_stack_3->SetBinError(14,0.4908689);
   hdirt_stack_3->SetBinError(15,1.298602);
   hdirt_stack_3->SetBinError(16,0.7922688);
   hdirt_stack_3->SetBinError(17,0.591637);
   hdirt_stack_3->SetBinError(18,0.8028403);
   hdirt_stack_3->SetBinError(19,0.9256508);
   hdirt_stack_3->SetBinError(20,0.7020427);
   hdirt_stack_3->SetBinError(21,1.437853);
   hdirt_stack_3->SetBinError(22,1.187735);
   hdirt_stack_3->SetBinError(23,0.653823);
   hdirt_stack_3->SetBinError(24,1.202465);
   hdirt_stack_3->SetBinError(25,1.111861);
   hdirt_stack_3->SetEntries(206);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,9.149498);
   houtFV_stack_4->SetBinContent(2,5.475445);
   houtFV_stack_4->SetBinContent(3,6.616241);
   houtFV_stack_4->SetBinContent(4,7.297379);
   houtFV_stack_4->SetBinContent(5,6.65281);
   houtFV_stack_4->SetBinContent(6,7.092197);
   houtFV_stack_4->SetBinContent(7,7.270345);
   houtFV_stack_4->SetBinContent(8,4.357497);
   houtFV_stack_4->SetBinContent(9,7.994478);
   houtFV_stack_4->SetBinContent(10,5.465812);
   houtFV_stack_4->SetBinContent(11,6.398542);
   houtFV_stack_4->SetBinContent(12,8.333972);
   houtFV_stack_4->SetBinContent(13,8.334821);
   houtFV_stack_4->SetBinContent(14,9.727158);
   houtFV_stack_4->SetBinContent(15,10.76092);
   houtFV_stack_4->SetBinContent(16,11.62643);
   houtFV_stack_4->SetBinContent(17,13.15983);
   houtFV_stack_4->SetBinContent(18,17.44016);
   houtFV_stack_4->SetBinContent(19,18.3622);
   houtFV_stack_4->SetBinContent(20,26.04709);
   houtFV_stack_4->SetBinContent(21,30.31669);
   houtFV_stack_4->SetBinContent(22,30.25525);
   houtFV_stack_4->SetBinContent(23,35.30478);
   houtFV_stack_4->SetBinContent(24,37.63514);
   houtFV_stack_4->SetBinContent(25,40.0499);
   houtFV_stack_4->SetBinError(1,1.584422);
   houtFV_stack_4->SetBinError(2,1.103962);
   houtFV_stack_4->SetBinError(3,1.340845);
   houtFV_stack_4->SetBinError(4,1.35941);
   houtFV_stack_4->SetBinError(5,1.338607);
   houtFV_stack_4->SetBinError(6,1.33415);
   houtFV_stack_4->SetBinError(7,1.324997);
   houtFV_stack_4->SetBinError(8,1.014198);
   houtFV_stack_4->SetBinError(9,1.41211);
   houtFV_stack_4->SetBinError(10,1.148953);
   houtFV_stack_4->SetBinError(11,1.155511);
   houtFV_stack_4->SetBinError(12,1.424549);
   houtFV_stack_4->SetBinError(13,1.430765);
   houtFV_stack_4->SetBinError(14,1.584455);
   houtFV_stack_4->SetBinError(15,1.640169);
   houtFV_stack_4->SetBinError(16,1.705345);
   houtFV_stack_4->SetBinError(17,1.84024);
   houtFV_stack_4->SetBinError(18,2.054357);
   houtFV_stack_4->SetBinError(19,2.127896);
   houtFV_stack_4->SetBinError(20,2.61913);
   houtFV_stack_4->SetBinError(21,2.661394);
   houtFV_stack_4->SetBinError(22,2.834979);
   houtFV_stack_4->SetBinError(23,2.935849);
   houtFV_stack_4->SetBinError(24,3.013748);
   houtFV_stack_4->SetBinError(25,3.152741);
   houtFV_stack_4->SetEntries(1712);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.274358);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.76129);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5860632);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4067726);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4884582);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1565652);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5372179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4611463);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1769878);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4750292);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2487242);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3731599);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.06912473);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2086226);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.8421998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5763593);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5980548);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.18961);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.643946);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.525011);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,8.381262);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,18.58427);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,53.77969);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6141138);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5863602);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2215946);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1441729);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1828214);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1072945);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2222097);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2949348);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.0889609);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2201277);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2047515);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2313363);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04959411);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.08869934);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3946496);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2069873);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3223671);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5885959);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6603118);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5493251);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.078851);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.627951);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.738162);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6415826);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5383568);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3913746);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1424855);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1259679);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3973781);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2425722);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1865496);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1652912);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2504964);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1580224);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5331876);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1274914);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7746183);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1940722);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2871629);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08078681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3378538);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.7955759);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8461196);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6740119);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.20508);
   hNCpi0inFVqe_stack_6->SetBinContent(23,2.704211);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.53579);
   hNCpi0inFVqe_stack_6->SetBinContent(25,2.664783);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.287141);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.173722);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1940818);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0525649);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05451039);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1510383);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.136096);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1271066);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06089272);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1206778);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05120417);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2453658);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06037754);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2495275);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.08039634);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1453824);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03546597);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1500526);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2320673);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2373689);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1775278);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4741968);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.5749775);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2980506);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.4835032);
   hNCpi0inFVqe_stack_6->SetEntries(471);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.64935);
   hNCpi0inFVres_stack_7->SetBinContent(2,33.77382);
   hNCpi0inFVres_stack_7->SetBinContent(3,31.46428);
   hNCpi0inFVres_stack_7->SetBinContent(4,31.29554);
   hNCpi0inFVres_stack_7->SetBinContent(5,32.8903);
   hNCpi0inFVres_stack_7->SetBinContent(6,32.24035);
   hNCpi0inFVres_stack_7->SetBinContent(7,31.47448);
   hNCpi0inFVres_stack_7->SetBinContent(8,30.70562);
   hNCpi0inFVres_stack_7->SetBinContent(9,32.58498);
   hNCpi0inFVres_stack_7->SetBinContent(10,33.53598);
   hNCpi0inFVres_stack_7->SetBinContent(11,35.53181);
   hNCpi0inFVres_stack_7->SetBinContent(12,43.29509);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.73415);
   hNCpi0inFVres_stack_7->SetBinContent(14,51.69091);
   hNCpi0inFVres_stack_7->SetBinContent(15,55.30334);
   hNCpi0inFVres_stack_7->SetBinContent(16,61.03963);
   hNCpi0inFVres_stack_7->SetBinContent(17,70.91248);
   hNCpi0inFVres_stack_7->SetBinContent(18,77.36026);
   hNCpi0inFVres_stack_7->SetBinContent(19,91.87403);
   hNCpi0inFVres_stack_7->SetBinContent(20,113.5766);
   hNCpi0inFVres_stack_7->SetBinContent(21,136.7503);
   hNCpi0inFVres_stack_7->SetBinContent(22,149.448);
   hNCpi0inFVres_stack_7->SetBinContent(23,181.9326);
   hNCpi0inFVres_stack_7->SetBinContent(24,229.2813);
   hNCpi0inFVres_stack_7->SetBinContent(25,282.5954);
   hNCpi0inFVres_stack_7->SetBinError(1,2.072963);
   hNCpi0inFVres_stack_7->SetBinError(2,1.856417);
   hNCpi0inFVres_stack_7->SetBinError(3,1.775013);
   hNCpi0inFVres_stack_7->SetBinError(4,1.754942);
   hNCpi0inFVres_stack_7->SetBinError(5,1.842022);
   hNCpi0inFVres_stack_7->SetBinError(6,1.851049);
   hNCpi0inFVres_stack_7->SetBinError(7,1.788241);
   hNCpi0inFVres_stack_7->SetBinError(8,1.656522);
   hNCpi0inFVres_stack_7->SetBinError(9,1.82648);
   hNCpi0inFVres_stack_7->SetBinError(10,1.713579);
   hNCpi0inFVres_stack_7->SetBinError(11,1.791734);
   hNCpi0inFVres_stack_7->SetBinError(12,2.130946);
   hNCpi0inFVres_stack_7->SetBinError(13,2.051698);
   hNCpi0inFVres_stack_7->SetBinError(14,2.26541);
   hNCpi0inFVres_stack_7->SetBinError(15,2.343752);
   hNCpi0inFVres_stack_7->SetBinError(16,2.532648);
   hNCpi0inFVres_stack_7->SetBinError(17,2.795625);
   hNCpi0inFVres_stack_7->SetBinError(18,2.775369);
   hNCpi0inFVres_stack_7->SetBinError(19,3.151951);
   hNCpi0inFVres_stack_7->SetBinError(20,3.483122);
   hNCpi0inFVres_stack_7->SetBinError(21,3.883761);
   hNCpi0inFVres_stack_7->SetBinError(22,3.93912);
   hNCpi0inFVres_stack_7->SetBinError(23,4.489085);
   hNCpi0inFVres_stack_7->SetBinError(24,5.014075);
   hNCpi0inFVres_stack_7->SetBinError(25,5.788813);
   hNCpi0inFVres_stack_7->SetEntries(45533);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.663554);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.047781);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.335443);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.537475);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.039444);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.474372);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.488751);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.280663);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.218762);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.001061);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.187617);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.122691);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.667775);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.960918);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.191917);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.58823);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.39353);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.13649);
   hNCpi0inFVdis_stack_8->SetBinContent(19,17.46716);
   hNCpi0inFVdis_stack_8->SetBinContent(20,18.90229);
   hNCpi0inFVdis_stack_8->SetBinContent(21,21.77082);
   hNCpi0inFVdis_stack_8->SetBinContent(22,30.47368);
   hNCpi0inFVdis_stack_8->SetBinContent(23,40.40368);
   hNCpi0inFVdis_stack_8->SetBinContent(24,57.22633);
   hNCpi0inFVdis_stack_8->SetBinContent(25,89.79917);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9988152);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9518122);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8409626);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7346702);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9864505);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6898426);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5745827);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.759392);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.843024);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8569746);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8625239);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7115462);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7990987);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9416234);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8861216);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9005667);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.046423);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.068889);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.364348);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.619434);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.505309);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.891806);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.061105);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.753511);
   hNCpi0inFVdis_stack_8->SetBinError(25,3.427219);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.171235);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1692332);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.2999468);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1304766);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.118645);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1541907);
   hNCpi0inFVmec_stack_9->SetEntries(34);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,18.35505);
   hCCpi0inFV_stack_10->SetBinContent(2,14.40853);
   hCCpi0inFV_stack_10->SetBinContent(3,19.23554);
   hCCpi0inFV_stack_10->SetBinContent(4,12.56287);
   hCCpi0inFV_stack_10->SetBinContent(5,12.15387);
   hCCpi0inFV_stack_10->SetBinContent(6,13.36011);
   hCCpi0inFV_stack_10->SetBinContent(7,15.44151);
   hCCpi0inFV_stack_10->SetBinContent(8,12.20474);
   hCCpi0inFV_stack_10->SetBinContent(9,12.85064);
   hCCpi0inFV_stack_10->SetBinContent(10,13.21371);
   hCCpi0inFV_stack_10->SetBinContent(11,12.76342);
   hCCpi0inFV_stack_10->SetBinContent(12,14.036);
   hCCpi0inFV_stack_10->SetBinContent(13,16.82873);
   hCCpi0inFV_stack_10->SetBinContent(14,21.60896);
   hCCpi0inFV_stack_10->SetBinContent(15,16.75404);
   hCCpi0inFV_stack_10->SetBinContent(16,22.26644);
   hCCpi0inFV_stack_10->SetBinContent(17,25.44594);
   hCCpi0inFV_stack_10->SetBinContent(18,26.27513);
   hCCpi0inFV_stack_10->SetBinContent(19,28.31953);
   hCCpi0inFV_stack_10->SetBinContent(20,36.85345);
   hCCpi0inFV_stack_10->SetBinContent(21,52.35904);
   hCCpi0inFV_stack_10->SetBinContent(22,56.3309);
   hCCpi0inFV_stack_10->SetBinContent(23,68.42325);
   hCCpi0inFV_stack_10->SetBinContent(24,97.80253);
   hCCpi0inFV_stack_10->SetBinContent(25,136.0673);
   hCCpi0inFV_stack_10->SetBinError(1,2.110701);
   hCCpi0inFV_stack_10->SetBinError(2,1.928683);
   hCCpi0inFV_stack_10->SetBinError(3,2.170118);
   hCCpi0inFV_stack_10->SetBinError(4,1.833305);
   hCCpi0inFV_stack_10->SetBinError(5,1.725952);
   hCCpi0inFV_stack_10->SetBinError(6,1.721193);
   hCCpi0inFV_stack_10->SetBinError(7,1.952391);
   hCCpi0inFV_stack_10->SetBinError(8,1.714634);
   hCCpi0inFV_stack_10->SetBinError(9,1.776631);
   hCCpi0inFV_stack_10->SetBinError(10,1.834827);
   hCCpi0inFV_stack_10->SetBinError(11,1.704402);
   hCCpi0inFV_stack_10->SetBinError(12,1.841355);
   hCCpi0inFV_stack_10->SetBinError(13,2.036875);
   hCCpi0inFV_stack_10->SetBinError(14,2.323349);
   hCCpi0inFV_stack_10->SetBinError(15,2.077265);
   hCCpi0inFV_stack_10->SetBinError(16,2.436438);
   hCCpi0inFV_stack_10->SetBinError(17,2.56316);
   hCCpi0inFV_stack_10->SetBinError(18,2.573117);
   hCCpi0inFV_stack_10->SetBinError(19,2.657544);
   hCCpi0inFV_stack_10->SetBinError(20,3.048577);
   hCCpi0inFV_stack_10->SetBinError(21,3.694196);
   hCCpi0inFV_stack_10->SetBinError(22,3.749476);
   hCCpi0inFV_stack_10->SetBinError(23,4.13962);
   hCCpi0inFV_stack_10->SetBinError(24,4.970125);
   hCCpi0inFV_stack_10->SetBinError(25,5.835215);
   hCCpi0inFV_stack_10->SetEntries(3326);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,13.97721);
   hNCinFV_stack_11->SetBinContent(2,10.12181);
   hNCinFV_stack_11->SetBinContent(3,10.00603);
   hNCinFV_stack_11->SetBinContent(4,7.62144);
   hNCinFV_stack_11->SetBinContent(5,6.331991);
   hNCinFV_stack_11->SetBinContent(6,8.713196);
   hNCinFV_stack_11->SetBinContent(7,7.599042);
   hNCinFV_stack_11->SetBinContent(8,5.736763);
   hNCinFV_stack_11->SetBinContent(9,7.43719);
   hNCinFV_stack_11->SetBinContent(10,2.852837);
   hNCinFV_stack_11->SetBinContent(11,7.957276);
   hNCinFV_stack_11->SetBinContent(12,6.915591);
   hNCinFV_stack_11->SetBinContent(13,8.188857);
   hNCinFV_stack_11->SetBinContent(14,8.44683);
   hNCinFV_stack_11->SetBinContent(15,9.229531);
   hNCinFV_stack_11->SetBinContent(16,9.18948);
   hNCinFV_stack_11->SetBinContent(17,9.717958);
   hNCinFV_stack_11->SetBinContent(18,12.97463);
   hNCinFV_stack_11->SetBinContent(19,17.21777);
   hNCinFV_stack_11->SetBinContent(20,22.57471);
   hNCinFV_stack_11->SetBinContent(21,22.60985);
   hNCinFV_stack_11->SetBinContent(22,26.44526);
   hNCinFV_stack_11->SetBinContent(23,40.1428);
   hNCinFV_stack_11->SetBinContent(24,61.22961);
   hNCinFV_stack_11->SetBinContent(25,101.7917);
   hNCinFV_stack_11->SetBinError(1,1.951492);
   hNCinFV_stack_11->SetBinError(2,1.614558);
   hNCinFV_stack_11->SetBinError(3,1.635417);
   hNCinFV_stack_11->SetBinError(4,1.374266);
   hNCinFV_stack_11->SetBinError(5,1.275669);
   hNCinFV_stack_11->SetBinError(6,1.497721);
   hNCinFV_stack_11->SetBinError(7,1.586427);
   hNCinFV_stack_11->SetBinError(8,1.15864);
   hNCinFV_stack_11->SetBinError(9,1.472722);
   hNCinFV_stack_11->SetBinError(10,0.7269195);
   hNCinFV_stack_11->SetBinError(11,1.486387);
   hNCinFV_stack_11->SetBinError(12,1.341163);
   hNCinFV_stack_11->SetBinError(13,1.566876);
   hNCinFV_stack_11->SetBinError(14,1.563642);
   hNCinFV_stack_11->SetBinError(15,1.458858);
   hNCinFV_stack_11->SetBinError(16,1.524662);
   hNCinFV_stack_11->SetBinError(17,1.677139);
   hNCinFV_stack_11->SetBinError(18,1.887792);
   hNCinFV_stack_11->SetBinError(19,2.309978);
   hNCinFV_stack_11->SetBinError(20,2.542633);
   hNCinFV_stack_11->SetBinError(21,2.673592);
   hNCinFV_stack_11->SetBinError(22,2.676915);
   hNCinFV_stack_11->SetBinError(23,3.461625);
   hNCinFV_stack_11->SetBinError(24,4.303737);
   hNCinFV_stack_11->SetBinError(25,5.82535);
   hNCinFV_stack_11->SetEntries(1870);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,12.87401);
   hnumuCCinFV_stack_12->SetBinContent(2,11.16844);
   hnumuCCinFV_stack_12->SetBinContent(3,8.246227);
   hnumuCCinFV_stack_12->SetBinContent(4,7.951432);
   hnumuCCinFV_stack_12->SetBinContent(5,7.431243);
   hnumuCCinFV_stack_12->SetBinContent(6,8.404633);
   hnumuCCinFV_stack_12->SetBinContent(7,6.118271);
   hnumuCCinFV_stack_12->SetBinContent(8,10.93572);
   hnumuCCinFV_stack_12->SetBinContent(9,6.084949);
   hnumuCCinFV_stack_12->SetBinContent(10,14.73883);
   hnumuCCinFV_stack_12->SetBinContent(11,12.54114);
   hnumuCCinFV_stack_12->SetBinContent(12,12.18685);
   hnumuCCinFV_stack_12->SetBinContent(13,15.08086);
   hnumuCCinFV_stack_12->SetBinContent(14,14.49961);
   hnumuCCinFV_stack_12->SetBinContent(15,14.3937);
   hnumuCCinFV_stack_12->SetBinContent(16,18.57817);
   hnumuCCinFV_stack_12->SetBinContent(17,16.98874);
   hnumuCCinFV_stack_12->SetBinContent(18,19.25659);
   hnumuCCinFV_stack_12->SetBinContent(19,17.90077);
   hnumuCCinFV_stack_12->SetBinContent(20,25.49436);
   hnumuCCinFV_stack_12->SetBinContent(21,25.8619);
   hnumuCCinFV_stack_12->SetBinContent(22,27.02532);
   hnumuCCinFV_stack_12->SetBinContent(23,28.57989);
   hnumuCCinFV_stack_12->SetBinContent(24,35.60666);
   hnumuCCinFV_stack_12->SetBinContent(25,61.45552);
   hnumuCCinFV_stack_12->SetBinError(1,1.830719);
   hnumuCCinFV_stack_12->SetBinError(2,1.824279);
   hnumuCCinFV_stack_12->SetBinError(3,1.523);
   hnumuCCinFV_stack_12->SetBinError(4,1.785541);
   hnumuCCinFV_stack_12->SetBinError(5,1.396857);
   hnumuCCinFV_stack_12->SetBinError(6,1.86796);
   hnumuCCinFV_stack_12->SetBinError(7,1.463515);
   hnumuCCinFV_stack_12->SetBinError(8,1.998024);
   hnumuCCinFV_stack_12->SetBinError(9,1.263786);
   hnumuCCinFV_stack_12->SetBinError(10,2.614856);
   hnumuCCinFV_stack_12->SetBinError(11,2.01379);
   hnumuCCinFV_stack_12->SetBinError(12,2.057102);
   hnumuCCinFV_stack_12->SetBinError(13,2.340613);
   hnumuCCinFV_stack_12->SetBinError(14,1.999394);
   hnumuCCinFV_stack_12->SetBinError(15,2.432536);
   hnumuCCinFV_stack_12->SetBinError(16,2.599191);
   hnumuCCinFV_stack_12->SetBinError(17,2.284458);
   hnumuCCinFV_stack_12->SetBinError(18,2.693467);
   hnumuCCinFV_stack_12->SetBinError(19,2.15587);
   hnumuCCinFV_stack_12->SetBinError(20,4.247035);
   hnumuCCinFV_stack_12->SetBinError(21,3.059277);
   hnumuCCinFV_stack_12->SetBinError(22,2.973536);
   hnumuCCinFV_stack_12->SetBinError(23,2.989634);
   hnumuCCinFV_stack_12->SetBinError(24,3.013365);
   hnumuCCinFV_stack_12->SetBinError(25,3.972372);
   hnumuCCinFV_stack_12->SetEntries(1728);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.057646);
   hnueCCinFV_stack_13->SetBinContent(2,0.8064713);
   hnueCCinFV_stack_13->SetBinContent(3,1.231439);
   hnueCCinFV_stack_13->SetBinContent(4,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(5,1.664836);
   hnueCCinFV_stack_13->SetBinContent(6,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(7,1.006494);
   hnueCCinFV_stack_13->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(11,1.226073);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.6905964);
   hnueCCinFV_stack_13->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(17,0.5054118);
   hnueCCinFV_stack_13->SetBinContent(18,3.768029);
   hnueCCinFV_stack_13->SetBinContent(19,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(20,1.230572);
   hnueCCinFV_stack_13->SetBinContent(21,1.913392);
   hnueCCinFV_stack_13->SetBinContent(22,1.917778);
   hnueCCinFV_stack_13->SetBinContent(23,3.155974);
   hnueCCinFV_stack_13->SetBinContent(24,2.353073);
   hnueCCinFV_stack_13->SetBinContent(25,16.30548);
   hnueCCinFV_stack_13->SetBinError(1,0.6523817);
   hnueCCinFV_stack_13->SetBinError(2,0.4036823);
   hnueCCinFV_stack_13->SetBinError(3,0.5552317);
   hnueCCinFV_stack_13->SetBinError(4,0.2476759);
   hnueCCinFV_stack_13->SetBinError(5,1.155559);
   hnueCCinFV_stack_13->SetBinError(6,0.3401778);
   hnueCCinFV_stack_13->SetBinError(7,0.5976004);
   hnueCCinFV_stack_13->SetBinError(8,0.2556436);
   hnueCCinFV_stack_13->SetBinError(9,0.5946997);
   hnueCCinFV_stack_13->SetBinError(11,0.56795);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.4010541);
   hnueCCinFV_stack_13->SetBinError(16,0.2998007);
   hnueCCinFV_stack_13->SetBinError(17,0.3573868);
   hnueCCinFV_stack_13->SetBinError(18,1.565555);
   hnueCCinFV_stack_13->SetBinError(19,0.3387718);
   hnueCCinFV_stack_13->SetBinError(20,0.655428);
   hnueCCinFV_stack_13->SetBinError(21,0.7722778);
   hnueCCinFV_stack_13->SetBinError(22,0.7466958);
   hnueCCinFV_stack_13->SetBinError(23,1.056339);
   hnueCCinFV_stack_13->SetBinError(24,0.7231417);
   hnueCCinFV_stack_13->SetBinError(25,2.681412);
   hnueCCinFV_stack_13->SetEntries(151);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__5->SetBinContent(1,122.2846);
   hmcerror__5->SetBinContent(2,96.98451);
   hmcerror__5->SetBinContent(3,94.59377);
   hmcerror__5->SetBinContent(4,84.23602);
   hmcerror__5->SetBinContent(5,84.68073);
   hmcerror__5->SetBinContent(6,87.15428);
   hmcerror__5->SetBinContent(7,92.59886);
   hmcerror__5->SetBinContent(8,84.87003);
   hmcerror__5->SetBinContent(9,81.85828);
   hmcerror__5->SetBinContent(10,93.74947);
   hmcerror__5->SetBinContent(11,107.3663);
   hmcerror__5->SetBinContent(12,104.3972);
   hmcerror__5->SetBinContent(13,118.3698);
   hmcerror__5->SetBinContent(14,138.4257);
   hmcerror__5->SetBinContent(15,149.6063);
   hmcerror__5->SetBinContent(16,158.7212);
   hmcerror__5->SetBinContent(17,176.9732);
   hmcerror__5->SetBinContent(18,197.6964);
   hmcerror__5->SetBinContent(19,235.0625);
   hmcerror__5->SetBinContent(20,285.4995);
   hmcerror__5->SetBinContent(21,335.2699);
   hmcerror__5->SetBinContent(22,362.6068);
   hmcerror__5->SetBinContent(23,452.2034);
   hmcerror__5->SetBinContent(24,597.4314);
   hmcerror__5->SetBinContent(25,842.311);
   hmcerror__5->SetBinError(1,36.01065);
   hmcerror__5->SetBinError(2,31.45627);
   hmcerror__5->SetBinError(3,32.83484);
   hmcerror__5->SetBinError(4,29.90348);
   hmcerror__5->SetBinError(5,30.04788);
   hmcerror__5->SetBinError(6,30.2424);
   hmcerror__5->SetBinError(7,30.12472);
   hmcerror__5->SetBinError(8,28.83359);
   hmcerror__5->SetBinError(9,29.91261);
   hmcerror__5->SetBinError(10,35.22632);
   hmcerror__5->SetBinError(11,36.25722);
   hmcerror__5->SetBinError(12,38.26183);
   hmcerror__5->SetBinError(13,40.16204);
   hmcerror__5->SetBinError(14,43.85779);
   hmcerror__5->SetBinError(15,48.00658);
   hmcerror__5->SetBinError(16,52.97682);
   hmcerror__5->SetBinError(17,55.157);
   hmcerror__5->SetBinError(18,64.04038);
   hmcerror__5->SetBinError(19,72.83648);
   hmcerror__5->SetBinError(20,89.64797);
   hmcerror__5->SetBinError(21,110.2993);
   hmcerror__5->SetBinError(22,111.726);
   hmcerror__5->SetBinError(23,122.2173);
   hmcerror__5->SetBinError(24,149.5214);
   hmcerror__5->SetBinError(25,209.5378);
   hmcerror__5->SetBinError(26,0.3895343);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3005[25] = {
   104,
   92,
   86,
   94,
   74,
   97,
   90,
   98,
   96,
   120,
   103,
   90,
   107,
   113,
   137,
   138,
   180,
   196,
   193,
   267,
   304,
   369,
   451,
   584,
   791};
   Double_t _felx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3005[25] = {
   10.19804,
   9.7138,
   9.3967,
   9.8173,
   8.7275,
   9.9704,
   9.6093,
   10.0209,
   9.9196,
   10.95445,
   10.14889,
   9.6093,
   10.34408,
   10.63015,
   11.7047,
   11.74734,
   13.41641,
   14,
   13.89244,
   16.34013,
   17.4356,
   19.20937,
   21.23676,
   24.16609,
   28.12472};
   Double_t _fehx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3005[25] = {
   10.19804,
   9.513,
   9.1951,
   9.616,
   8.5253,
   9.769,
   9.4079,
   9.82,
   9.718,
   10.95445,
   10.14889,
   9.4079,
   10.34408,
   10.63015,
   11.7047,
   11.74734,
   13.41641,
   14,
   13.89244,
   16.34013,
   17.4356,
   19.20937,
   21.23676,
   24.16609,
   28.12472};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(58.74525);
   Graph_Graph3005->SetMaximum(894.5099);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  406.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 445.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_costheta_all");
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
   
   Double_t _fx3006[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3006[25] = {
   0.2944824,
   0.3243432,
   0.3471142,
   0.3549964,
   0.3548373,
   0.3469984,
   0.325325,
   0.3397382,
   0.3654195,
   0.3757495,
   0.3376964,
   0.3665024,
   0.339293,
   0.3168327,
   0.320886,
   0.3337728,
   0.3116686,
   0.3239329,
   0.3098601,
   0.3140039,
   0.3289865,
   0.3081189,
   0.2702707,
   0.2502738,
   0.2487654};
   Double_t _fehx3006[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3006[25] = {
   0.2944824,
   0.3243432,
   0.3471142,
   0.3549964,
   0.3548373,
   0.3469984,
   0.325325,
   0.3397382,
   0.3654195,
   0.3757495,
   0.3376964,
   0.3665024,
   0.339293,
   0.3168327,
   0.320886,
   0.3337728,
   0.3116686,
   0.3239329,
   0.3098601,
   0.3140039,
   0.3289865,
   0.3081189,
   0.2702707,
   0.2502738,
   0.2487654};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   
   Double_t _fx3007[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3007[25] = {
   0.2654496,
   0.2783898,
   0.2870181,
   0.2982609,
   0.3184513,
   0.3056839,
   0.2879343,
   0.2981362,
   0.3169047,
   0.3082482,
   0.2891039,
   0.3342741,
   0.3070007,
   0.2886315,
   0.2960895,
   0.3066647,
   0.2909641,
   0.3062295,
   0.2970445,
   0.2950667,
   0.2819381,
   0.2845642,
   0.2571548,
   0.2393488,
   0.2273364};
   Double_t _fehx3007[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3007[25] = {
   0.2654496,
   0.2783898,
   0.2870181,
   0.2982609,
   0.3184513,
   0.3056839,
   0.2879343,
   0.2981362,
   0.3169047,
   0.3082482,
   0.2891039,
   0.3342741,
   0.3070007,
   0.2886315,
   0.2960895,
   0.3066647,
   0.2909641,
   0.3062295,
   0.2970445,
   0.2950667,
   0.2819381,
   0.2845642,
   0.2571548,
   0.2393488,
   0.2273364};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3008[25] = {
   0.8504752,
   0.9486051,
   0.9091508,
   1.115912,
   0.8738706,
   1.112969,
   0.9719342,
   1.154707,
   1.172759,
   1.280007,
   0.9593325,
   0.8620918,
   0.9039469,
   0.8163223,
   0.9157366,
   0.8694492,
   1.017103,
   0.9914191,
   0.8210583,
   0.9352029,
   0.9067322,
   1.017631,
   0.9973388,
   0.9775181,
   0.9390831};
   Double_t _felx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3008[25] = {
   0.08339595,
   0.1001583,
   0.09933741,
   0.1165452,
   0.1030636,
   0.1143994,
   0.1037734,
   0.1180735,
   0.1211802,
   0.1168481,
   0.09452584,
   0.09204554,
   0.08738784,
   0.07679314,
   0.07823666,
   0.07401243,
   0.07581038,
   0.07081565,
   0.05910107,
   0.05723349,
   0.05200466,
   0.05297576,
   0.04696285,
   0.04044999,
   0.03338995};
   Double_t _fehx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3008[25] = {
   0.08339595,
   0.09808783,
   0.0972062,
   0.1141554,
   0.1006758,
   0.1120886,
   0.1015984,
   0.1157063,
   0.1187174,
   0.1168481,
   0.09452584,
   0.09011637,
   0.08738784,
   0.07679314,
   0.07823666,
   0.07401243,
   0.07581038,
   0.07081565,
   0.05910107,
   0.05723349,
   0.05200466,
   0.05297576,
   0.04696285,
   0.04044999,
   0.03338995};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.6737965);
   Graph_Graph3008->SetMaximum(1.462588);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_costheta_all",25,-1,1);

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

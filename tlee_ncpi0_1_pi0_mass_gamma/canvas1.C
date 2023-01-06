#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sun Oct 23 18:43:59 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-14.52,451.2821,1605.606);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__1->SetBinContent(1,176.5707);
   hmc__1->SetBinContent(2,230.0811);
   hmc__1->SetBinContent(3,265.6679);
   hmc__1->SetBinContent(4,264.6978);
   hmc__1->SetBinContent(5,278.4959);
   hmc__1->SetBinContent(6,326.4702);
   hmc__1->SetBinContent(7,345.0444);
   hmc__1->SetBinContent(8,363.76);
   hmc__1->SetBinContent(9,427.6916);
   hmc__1->SetBinContent(10,541.5541);
   hmc__1->SetBinContent(11,618.0659);
   hmc__1->SetBinContent(12,671.7783);
   hmc__1->SetBinContent(13,596.5211);
   hmc__1->SetBinContent(14,372.0392);
   hmc__1->SetBinContent(15,212.8165);
   hmc__1->SetBinContent(16,151.5488);
   hmc__1->SetBinContent(17,106.2406);
   hmc__1->SetBinContent(18,83.79962);
   hmc__1->SetBinContent(19,71.162);
   hmc__1->SetBinContent(20,69.57104);
   hmc__1->SetBinContent(21,61.9077);
   hmc__1->SetBinContent(22,47.07708);
   hmc__1->SetBinContent(23,46.14119);
   hmc__1->SetBinContent(24,42.33963);
   hmc__1->SetBinContent(25,33.13239);
   hmc__1->SetBinContent(26,32.66416);
   hmc__1->SetBinContent(27,30.53732);
   hmc__1->SetBinContent(28,26.74839);
   hmc__1->SetBinContent(29,25.91558);
   hmc__1->SetBinContent(30,26.69112);
   hmc__1->SetBinContent(31,19.02571);
   hmc__1->SetBinContent(32,20.77757);
   hmc__1->SetBinContent(33,13.4768);
   hmc__1->SetBinContent(34,15.65652);
   hmc__1->SetBinContent(35,163.4356);
   hmc__1->SetBinError(1,51.05024);
   hmc__1->SetBinError(2,57.59117);
   hmc__1->SetBinError(3,57.87794);
   hmc__1->SetBinError(4,62.16952);
   hmc__1->SetBinError(5,70.93844);
   hmc__1->SetBinError(6,75.43783);
   hmc__1->SetBinError(7,109.7184);
   hmc__1->SetBinError(8,97.51231);
   hmc__1->SetBinError(9,119.1008);
   hmc__1->SetBinError(10,166.4185);
   hmc__1->SetBinError(11,193.0697);
   hmc__1->SetBinError(12,205.2231);
   hmc__1->SetBinError(13,191.2811);
   hmc__1->SetBinError(14,128.4407);
   hmc__1->SetBinError(15,78.73231);
   hmc__1->SetBinError(16,41.69644);
   hmc__1->SetBinError(17,30.03886);
   hmc__1->SetBinError(18,29.12337);
   hmc__1->SetBinError(19,23.74549);
   hmc__1->SetBinError(20,32.06253);
   hmc__1->SetBinError(21,25.75952);
   hmc__1->SetBinError(22,18.34299);
   hmc__1->SetBinError(23,19.47646);
   hmc__1->SetBinError(24,16.81095);
   hmc__1->SetBinError(25,18.06066);
   hmc__1->SetBinError(26,21.56106);
   hmc__1->SetBinError(27,14.93447);
   hmc__1->SetBinError(28,13.9747);
   hmc__1->SetBinError(29,14.0395);
   hmc__1->SetBinError(30,13.83787);
   hmc__1->SetBinError(31,11.23536);
   hmc__1->SetBinError(32,12.26048);
   hmc__1->SetBinError(33,8.986856);
   hmc__1->SetBinError(34,13.73573);
   hmc__1->SetBinError(35,57.48298);
   hmc__1->SetMinimum(-14.52);
   hmc__1->SetMaximum(1524.6);
   hmc__1->SetEntries(7381.09);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",34,0,400);
   hs1_stack_1->SetMinimum(-1.429819e-08);
   hs1_stack_1->SetMaximum(705.3672);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,6.477334);
   hbadmatch_stack_1->SetBinContent(2,9.524734);
   hbadmatch_stack_1->SetBinContent(3,10.24743);
   hbadmatch_stack_1->SetBinContent(4,6.608402);
   hbadmatch_stack_1->SetBinContent(5,8.301284);
   hbadmatch_stack_1->SetBinContent(6,11.77106);
   hbadmatch_stack_1->SetBinContent(7,13.75881);
   hbadmatch_stack_1->SetBinContent(8,10.47194);
   hbadmatch_stack_1->SetBinContent(9,11.56116);
   hbadmatch_stack_1->SetBinContent(10,11.7667);
   hbadmatch_stack_1->SetBinContent(11,10.30236);
   hbadmatch_stack_1->SetBinContent(12,13.29317);
   hbadmatch_stack_1->SetBinContent(13,10.18902);
   hbadmatch_stack_1->SetBinContent(14,8.107775);
   hbadmatch_stack_1->SetBinContent(15,7.712595);
   hbadmatch_stack_1->SetBinContent(16,4.538811);
   hbadmatch_stack_1->SetBinContent(17,1.784246);
   hbadmatch_stack_1->SetBinContent(18,1.47015);
   hbadmatch_stack_1->SetBinContent(19,1.34688);
   hbadmatch_stack_1->SetBinContent(20,1.610792);
   hbadmatch_stack_1->SetBinContent(21,1.896293);
   hbadmatch_stack_1->SetBinContent(22,1.042453);
   hbadmatch_stack_1->SetBinContent(23,1.838087);
   hbadmatch_stack_1->SetBinContent(24,0.8623595);
   hbadmatch_stack_1->SetBinContent(25,1.288896);
   hbadmatch_stack_1->SetBinContent(26,0.9865863);
   hbadmatch_stack_1->SetBinContent(27,0.6107795);
   hbadmatch_stack_1->SetBinContent(28,0.6571898);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(33,0.5774622);
   hbadmatch_stack_1->SetBinContent(34,0.409235);
   hbadmatch_stack_1->SetBinContent(35,1.354911);
   hbadmatch_stack_1->SetBinError(1,1.45577);
   hbadmatch_stack_1->SetBinError(2,1.843482);
   hbadmatch_stack_1->SetBinError(3,1.642119);
   hbadmatch_stack_1->SetBinError(4,1.311514);
   hbadmatch_stack_1->SetBinError(5,1.535322);
   hbadmatch_stack_1->SetBinError(6,1.915772);
   hbadmatch_stack_1->SetBinError(7,1.925901);
   hbadmatch_stack_1->SetBinError(8,1.901691);
   hbadmatch_stack_1->SetBinError(9,1.77644);
   hbadmatch_stack_1->SetBinError(10,1.774088);
   hbadmatch_stack_1->SetBinError(11,1.661401);
   hbadmatch_stack_1->SetBinError(12,2.486387);
   hbadmatch_stack_1->SetBinError(13,1.996949);
   hbadmatch_stack_1->SetBinError(14,2.030923);
   hbadmatch_stack_1->SetBinError(15,2.343911);
   hbadmatch_stack_1->SetBinError(16,1.272472);
   hbadmatch_stack_1->SetBinError(17,0.662497);
   hbadmatch_stack_1->SetBinError(18,0.6209577);
   hbadmatch_stack_1->SetBinError(19,0.5648115);
   hbadmatch_stack_1->SetBinError(20,0.6432005);
   hbadmatch_stack_1->SetBinError(21,0.6874598);
   hbadmatch_stack_1->SetBinError(22,0.5191687);
   hbadmatch_stack_1->SetBinError(23,0.8593295);
   hbadmatch_stack_1->SetBinError(24,0.4579209);
   hbadmatch_stack_1->SetBinError(25,0.6966061);
   hbadmatch_stack_1->SetBinError(26,0.5240452);
   hbadmatch_stack_1->SetBinError(27,0.3697953);
   hbadmatch_stack_1->SetBinError(28,0.482642);
   hbadmatch_stack_1->SetBinError(29,0.4753932);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(33,0.3335031);
   hbadmatch_stack_1->SetBinError(34,0.311181);
   hbadmatch_stack_1->SetBinError(35,0.6933811);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,31.03494);
   hext_stack_2->SetBinContent(2,35.59691);
   hext_stack_2->SetBinContent(3,59.2645);
   hext_stack_2->SetBinContent(4,49.23363);
   hext_stack_2->SetBinContent(5,38.72838);
   hext_stack_2->SetBinContent(6,54.44875);
   hext_stack_2->SetBinContent(7,44.70044);
   hext_stack_2->SetBinContent(8,55.45942);
   hext_stack_2->SetBinContent(9,48.77519);
   hext_stack_2->SetBinContent(10,61.25391);
   hext_stack_2->SetBinContent(11,46.46246);
   hext_stack_2->SetBinContent(12,53.75642);
   hext_stack_2->SetBinContent(13,61.88715);
   hext_stack_2->SetBinContent(14,21.86362);
   hext_stack_2->SetBinContent(15,15.12744);
   hext_stack_2->SetBinContent(16,15.48937);
   hext_stack_2->SetBinContent(17,10.67526);
   hext_stack_2->SetBinContent(18,5.911401);
   hext_stack_2->SetBinContent(19,3.807795);
   hext_stack_2->SetBinContent(20,5.598593);
   hext_stack_2->SetBinContent(21,6.061444);
   hext_stack_2->SetBinContent(22,2.923985);
   hext_stack_2->SetBinContent(23,4.435048);
   hext_stack_2->SetBinContent(24,4.352847);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,2.916804);
   hext_stack_2->SetBinContent(27,1.290409);
   hext_stack_2->SetBinContent(28,0.6487947);
   hext_stack_2->SetBinContent(29,1.461993);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(32,0.7309963);
   hext_stack_2->SetBinContent(33,0.8131978);
   hext_stack_2->SetBinContent(35,7.605638);
   hext_stack_2->SetBinError(1,3.794689);
   hext_stack_2->SetBinError(2,4.009626);
   hext_stack_2->SetBinError(3,5.296264);
   hext_stack_2->SetBinError(4,4.800049);
   hext_stack_2->SetBinError(5,4.009027);
   hext_stack_2->SetBinError(6,5.1375);
   hext_stack_2->SetBinError(7,4.384953);
   hext_stack_2->SetBinError(8,5.244565);
   hext_stack_2->SetBinError(9,4.741487);
   hext_stack_2->SetBinError(10,5.36703);
   hext_stack_2->SetBinError(11,4.705794);
   hext_stack_2->SetBinError(12,4.978054);
   hext_stack_2->SetBinError(13,5.617479);
   hext_stack_2->SetBinError(14,3.07507);
   hext_stack_2->SetBinError(15,2.588372);
   hext_stack_2->SetBinError(16,2.504065);
   hext_stack_2->SetBinError(17,2.255058);
   hext_stack_2->SetBinError(18,1.57855);
   hext_stack_2->SetBinError(19,1.24058);
   hext_stack_2->SetBinError(20,1.523321);
   hext_stack_2->SetBinError(21,1.736203);
   hext_stack_2->SetBinError(22,1.040301);
   hext_stack_2->SetBinError(23,1.533985);
   hext_stack_2->SetBinError(24,1.514272);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,1.132884);
   hext_stack_2->SetBinError(27,0.788756);
   hext_stack_2->SetBinError(28,0.4587671);
   hext_stack_2->SetBinError(29,0.7356036);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(32,0.5201503);
   hext_stack_2->SetBinError(33,0.5750177);
   hext_stack_2->SetBinError(35,1.901474);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,2.873683);
   hdirt_stack_3->SetBinContent(2,4.123341);
   hdirt_stack_3->SetBinContent(3,3.260415);
   hdirt_stack_3->SetBinContent(4,4.710588);
   hdirt_stack_3->SetBinContent(5,5.024939);
   hdirt_stack_3->SetBinContent(6,5.310221);
   hdirt_stack_3->SetBinContent(7,5.776726);
   hdirt_stack_3->SetBinContent(8,5.648034);
   hdirt_stack_3->SetBinContent(9,4.543724);
   hdirt_stack_3->SetBinContent(10,5.231871);
   hdirt_stack_3->SetBinContent(11,6.861405);
   hdirt_stack_3->SetBinContent(12,3.944119);
   hdirt_stack_3->SetBinContent(13,5.30054);
   hdirt_stack_3->SetBinContent(14,1.509301);
   hdirt_stack_3->SetBinContent(15,2.685964);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.030795);
   hdirt_stack_3->SetBinContent(18,0.6085784);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,1.142423);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(25,0.4762587);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.8865253);
   hdirt_stack_3->SetBinError(2,1.191333);
   hdirt_stack_3->SetBinError(3,0.8958128);
   hdirt_stack_3->SetBinError(4,1.085916);
   hdirt_stack_3->SetBinError(5,1.115533);
   hdirt_stack_3->SetBinError(6,1.171977);
   hdirt_stack_3->SetBinError(7,1.2596);
   hdirt_stack_3->SetBinError(8,1.271366);
   hdirt_stack_3->SetBinError(9,1.402095);
   hdirt_stack_3->SetBinError(10,1.438858);
   hdirt_stack_3->SetBinError(11,1.429995);
   hdirt_stack_3->SetBinError(12,1.074573);
   hdirt_stack_3->SetBinError(13,1.379656);
   hdirt_stack_3->SetBinError(14,0.6311453);
   hdirt_stack_3->SetBinError(15,0.8942396);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.5245307);
   hdirt_stack_3->SetBinError(18,0.3609533);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.530726);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(25,0.3652866);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetBinError(28,0.2188956);
   hdirt_stack_3->SetBinError(29,0.3381872);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,24.69077);
   houtFV_stack_4->SetBinContent(2,30.93535);
   houtFV_stack_4->SetBinContent(3,39.72271);
   houtFV_stack_4->SetBinContent(4,34.10051);
   houtFV_stack_4->SetBinContent(5,32.57403);
   houtFV_stack_4->SetBinContent(6,39.96384);
   houtFV_stack_4->SetBinContent(7,44.79382);
   houtFV_stack_4->SetBinContent(8,39.50147);
   houtFV_stack_4->SetBinContent(9,44.32418);
   houtFV_stack_4->SetBinContent(10,50.45598);
   houtFV_stack_4->SetBinContent(11,47.44926);
   houtFV_stack_4->SetBinContent(12,54.05585);
   houtFV_stack_4->SetBinContent(13,50.44193);
   houtFV_stack_4->SetBinContent(14,35.98495);
   houtFV_stack_4->SetBinContent(15,18.89604);
   houtFV_stack_4->SetBinContent(16,12.53195);
   houtFV_stack_4->SetBinContent(17,9.398396);
   houtFV_stack_4->SetBinContent(18,8.410647);
   houtFV_stack_4->SetBinContent(19,8.141663);
   houtFV_stack_4->SetBinContent(20,6.298232);
   houtFV_stack_4->SetBinContent(21,4.780837);
   houtFV_stack_4->SetBinContent(22,5.57711);
   houtFV_stack_4->SetBinContent(23,4.154415);
   houtFV_stack_4->SetBinContent(24,2.664712);
   houtFV_stack_4->SetBinContent(25,3.152854);
   houtFV_stack_4->SetBinContent(26,2.827836);
   houtFV_stack_4->SetBinContent(27,3.896192);
   houtFV_stack_4->SetBinContent(28,1.754141);
   houtFV_stack_4->SetBinContent(29,2.290579);
   houtFV_stack_4->SetBinContent(30,1.908644);
   houtFV_stack_4->SetBinContent(31,1.195685);
   houtFV_stack_4->SetBinContent(32,1.348814);
   houtFV_stack_4->SetBinContent(33,0.3917402);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,11.00012);
   houtFV_stack_4->SetBinError(1,2.520169);
   houtFV_stack_4->SetBinError(2,2.772003);
   houtFV_stack_4->SetBinError(3,3.221098);
   houtFV_stack_4->SetBinError(4,3.092781);
   houtFV_stack_4->SetBinError(5,2.833859);
   houtFV_stack_4->SetBinError(6,3.111941);
   houtFV_stack_4->SetBinError(7,3.406044);
   houtFV_stack_4->SetBinError(8,3.25712);
   houtFV_stack_4->SetBinError(9,3.255013);
   houtFV_stack_4->SetBinError(10,3.519956);
   houtFV_stack_4->SetBinError(11,3.425588);
   houtFV_stack_4->SetBinError(12,3.703802);
   houtFV_stack_4->SetBinError(13,3.779354);
   houtFV_stack_4->SetBinError(14,3.071344);
   houtFV_stack_4->SetBinError(15,2.10164);
   houtFV_stack_4->SetBinError(16,1.709775);
   houtFV_stack_4->SetBinError(17,1.555409);
   houtFV_stack_4->SetBinError(18,1.525517);
   houtFV_stack_4->SetBinError(19,1.378718);
   houtFV_stack_4->SetBinError(20,1.263057);
   houtFV_stack_4->SetBinError(21,1.112766);
   houtFV_stack_4->SetBinError(22,1.131332);
   houtFV_stack_4->SetBinError(23,1.010106);
   houtFV_stack_4->SetBinError(24,0.7800686);
   houtFV_stack_4->SetBinError(25,0.8756801);
   houtFV_stack_4->SetBinError(26,0.8355768);
   houtFV_stack_4->SetBinError(27,0.9821698);
   houtFV_stack_4->SetBinError(28,0.7350354);
   houtFV_stack_4->SetBinError(29,0.7462165);
   houtFV_stack_4->SetBinError(30,0.6739324);
   houtFV_stack_4->SetBinError(31,0.4749595);
   houtFV_stack_4->SetBinError(32,0.5103836);
   houtFV_stack_4->SetBinError(33,0.2770047);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.728549);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.578636);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.271308);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.398999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.482194);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.277805);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.620585);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.123217);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.166359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.328817);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.798817);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,10.01992);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,13.80637);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,12.92042);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,9.414724);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.947897);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.33181);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.81855);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.944291);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.390408);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.533582);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.396032);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.8326606);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.900336);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.3055411);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4992333);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1429171);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.4267102);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.5559403);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5596033);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.09591387);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.3789449);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.07406837);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.2728371);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.5605762);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,2.435057);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4232037);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.680044);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5425876);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6617199);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5775248);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6639472);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6855006);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8098552);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.915494);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.054568);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.147283);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.451525);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.33862);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.117468);
   hNCpi0inFVcoh_stack_5->SetBinError(15,1.068844);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7520691);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.491604);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7764742);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4757794);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5042491);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4810732);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3435034);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.329254);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1334521);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2017138);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06950435);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1938284);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2865729);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2608273);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.05918372);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1486782);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.05571912);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1550073);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3452832);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.5936066);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2656778);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5979788);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2527919);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3815385);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4567311);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.147734);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9231988);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6315662);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.249215);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.195125);
   hNCpi0inFVqe_stack_6->SetBinContent(11,2.22783);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.885272);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.092667);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.698796);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8275581);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5206342);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1126438);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2059026);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2487517);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0696628);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1378969);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05883958);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.03499874);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1771987);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.0327757);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.1628412);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.09631228);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1938258);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09812505);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1660927);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1434135);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4111148);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2234616);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1697476);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2857064);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4826652);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4414481);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3074303);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.5063901);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3853159);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2764029);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2133352);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05611312);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1296159);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1363385);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04330004);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.08723333);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03442179);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02476932);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1320714);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02323348);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.12496);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,36.22576);
   hNCpi0inFVres_stack_7->SetBinContent(2,52.79524);
   hNCpi0inFVres_stack_7->SetBinContent(3,57.41259);
   hNCpi0inFVres_stack_7->SetBinContent(4,66.63024);
   hNCpi0inFVres_stack_7->SetBinContent(5,77.7464);
   hNCpi0inFVres_stack_7->SetBinContent(6,84.15971);
   hNCpi0inFVres_stack_7->SetBinContent(7,96.68262);
   hNCpi0inFVres_stack_7->SetBinContent(8,113.9052);
   hNCpi0inFVres_stack_7->SetBinContent(9,146.8803);
   hNCpi0inFVres_stack_7->SetBinContent(10,202.812);
   hNCpi0inFVres_stack_7->SetBinContent(11,260.8449);
   hNCpi0inFVres_stack_7->SetBinContent(12,281.6039);
   hNCpi0inFVres_stack_7->SetBinContent(13,235.1399);
   hNCpi0inFVres_stack_7->SetBinContent(14,143.5773);
   hNCpi0inFVres_stack_7->SetBinContent(15,72.714);
   hNCpi0inFVres_stack_7->SetBinContent(16,46.83874);
   hNCpi0inFVres_stack_7->SetBinContent(17,29.25682);
   hNCpi0inFVres_stack_7->SetBinContent(18,21.03401);
   hNCpi0inFVres_stack_7->SetBinContent(19,18.49521);
   hNCpi0inFVres_stack_7->SetBinContent(20,14.52218);
   hNCpi0inFVres_stack_7->SetBinContent(21,13.45445);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.95112);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.618103);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.292862);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.014584);
   hNCpi0inFVres_stack_7->SetBinContent(26,6.22451);
   hNCpi0inFVres_stack_7->SetBinContent(27,6.153336);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.813283);
   hNCpi0inFVres_stack_7->SetBinContent(29,4.03695);
   hNCpi0inFVres_stack_7->SetBinContent(30,4.771481);
   hNCpi0inFVres_stack_7->SetBinContent(31,4.585015);
   hNCpi0inFVres_stack_7->SetBinContent(32,3.753381);
   hNCpi0inFVres_stack_7->SetBinContent(33,3.707315);
   hNCpi0inFVres_stack_7->SetBinContent(34,3.038336);
   hNCpi0inFVres_stack_7->SetBinContent(35,22.47318);
   hNCpi0inFVres_stack_7->SetBinError(1,1.927791);
   hNCpi0inFVres_stack_7->SetBinError(2,2.489691);
   hNCpi0inFVres_stack_7->SetBinError(3,2.565815);
   hNCpi0inFVres_stack_7->SetBinError(4,2.7636);
   hNCpi0inFVres_stack_7->SetBinError(5,2.976633);
   hNCpi0inFVres_stack_7->SetBinError(6,2.999201);
   hNCpi0inFVres_stack_7->SetBinError(7,3.267611);
   hNCpi0inFVres_stack_7->SetBinError(8,3.477922);
   hNCpi0inFVres_stack_7->SetBinError(9,3.877607);
   hNCpi0inFVres_stack_7->SetBinError(10,4.519104);
   hNCpi0inFVres_stack_7->SetBinError(11,5.049766);
   hNCpi0inFVres_stack_7->SetBinError(12,5.35253);
   hNCpi0inFVres_stack_7->SetBinError(13,4.954565);
   hNCpi0inFVres_stack_7->SetBinError(14,4.011793);
   hNCpi0inFVres_stack_7->SetBinError(15,2.830994);
   hNCpi0inFVres_stack_7->SetBinError(16,2.402683);
   hNCpi0inFVres_stack_7->SetBinError(17,1.835598);
   hNCpi0inFVres_stack_7->SetBinError(18,1.370908);
   hNCpi0inFVres_stack_7->SetBinError(19,1.427468);
   hNCpi0inFVres_stack_7->SetBinError(20,1.240349);
   hNCpi0inFVres_stack_7->SetBinError(21,1.21194);
   hNCpi0inFVres_stack_7->SetBinError(22,1.058471);
   hNCpi0inFVres_stack_7->SetBinError(23,0.889905);
   hNCpi0inFVres_stack_7->SetBinError(24,1.003497);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7988874);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8812348);
   hNCpi0inFVres_stack_7->SetBinError(27,0.8167851);
   hNCpi0inFVres_stack_7->SetBinError(28,0.8879086);
   hNCpi0inFVres_stack_7->SetBinError(29,0.5447087);
   hNCpi0inFVres_stack_7->SetBinError(30,0.8248106);
   hNCpi0inFVres_stack_7->SetBinError(31,0.7783715);
   hNCpi0inFVres_stack_7->SetBinError(32,0.8281255);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7481014);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5909274);
   hNCpi0inFVres_stack_7->SetBinError(35,1.781804);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.833763);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.71529);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.2717);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.02856);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.65801);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.86474);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.51925);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.80656);
   hNCpi0inFVdis_stack_8->SetBinContent(9,30.19556);
   hNCpi0inFVdis_stack_8->SetBinContent(10,38.92197);
   hNCpi0inFVdis_stack_8->SetBinContent(11,51.98676);
   hNCpi0inFVdis_stack_8->SetBinContent(12,60.58643);
   hNCpi0inFVdis_stack_8->SetBinContent(13,46.93871);
   hNCpi0inFVdis_stack_8->SetBinContent(14,32.49903);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.14591);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.37728);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.09265);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.59695);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.585887);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.912478);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.823442);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.237956);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.437053);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.375633);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.976963);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.758427);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.039961);
   hNCpi0inFVdis_stack_8->SetBinContent(28,2.081489);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.918383);
   hNCpi0inFVdis_stack_8->SetBinContent(30,3.23077);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.274878);
   hNCpi0inFVdis_stack_8->SetBinContent(32,1.172544);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.8090736);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.549822);
   hNCpi0inFVdis_stack_8->SetBinContent(35,11.10442);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.015943);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.399713);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.198729);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.065889);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.317683);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.423692);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.741308);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.510799);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.973123);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.115541);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.444064);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.771482);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.212953);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.990093);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.254951);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.18802);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.085462);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7547315);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9759607);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8728951);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4413599);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6053921);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4665002);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5165349);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4193676);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3289109);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.4865995);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.6464518);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.4764763);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.7766104);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.4074488);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.3867062);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3938713);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.4277855);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.430601);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05546193);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.06797443);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.3774197);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2195167);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.06344445);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03202375);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03179657);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1870755);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1341477);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03235999);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,16.3423);
   hCCpi0inFV_stack_10->SetBinContent(2,23.72938);
   hCCpi0inFV_stack_10->SetBinContent(3,25.80004);
   hCCpi0inFV_stack_10->SetBinContent(4,29.98683);
   hCCpi0inFV_stack_10->SetBinContent(5,32.05487);
   hCCpi0inFV_stack_10->SetBinContent(6,42.63624);
   hCCpi0inFV_stack_10->SetBinContent(7,49.09562);
   hCCpi0inFV_stack_10->SetBinContent(8,52.67307);
   hCCpi0inFV_stack_10->SetBinContent(9,70.27673);
   hCCpi0inFV_stack_10->SetBinContent(10,90.52393);
   hCCpi0inFV_stack_10->SetBinContent(11,102.4006);
   hCCpi0inFV_stack_10->SetBinContent(12,117.9499);
   hCCpi0inFV_stack_10->SetBinContent(13,107.241);
   hCCpi0inFV_stack_10->SetBinContent(14,63.79578);
   hCCpi0inFV_stack_10->SetBinContent(15,39.40421);
   hCCpi0inFV_stack_10->SetBinContent(16,27.51326);
   hCCpi0inFV_stack_10->SetBinContent(17,20.87456);
   hCCpi0inFV_stack_10->SetBinContent(18,16.80388);
   hCCpi0inFV_stack_10->SetBinContent(19,14.69232);
   hCCpi0inFV_stack_10->SetBinContent(20,12.99241);
   hCCpi0inFV_stack_10->SetBinContent(21,12.83966);
   hCCpi0inFV_stack_10->SetBinContent(22,10.11015);
   hCCpi0inFV_stack_10->SetBinContent(23,9.165219);
   hCCpi0inFV_stack_10->SetBinContent(24,10.11796);
   hCCpi0inFV_stack_10->SetBinContent(25,9.0767);
   hCCpi0inFV_stack_10->SetBinContent(26,8.318025);
   hCCpi0inFV_stack_10->SetBinContent(27,7.18586);
   hCCpi0inFV_stack_10->SetBinContent(28,6.687223);
   hCCpi0inFV_stack_10->SetBinContent(29,6.245393);
   hCCpi0inFV_stack_10->SetBinContent(30,7.40862);
   hCCpi0inFV_stack_10->SetBinContent(31,3.594757);
   hCCpi0inFV_stack_10->SetBinContent(32,3.427608);
   hCCpi0inFV_stack_10->SetBinContent(33,2.194063);
   hCCpi0inFV_stack_10->SetBinContent(34,4.297917);
   hCCpi0inFV_stack_10->SetBinContent(35,37.56116);
   hCCpi0inFV_stack_10->SetBinError(1,2.075476);
   hCCpi0inFV_stack_10->SetBinError(2,2.478873);
   hCCpi0inFV_stack_10->SetBinError(3,2.591282);
   hCCpi0inFV_stack_10->SetBinError(4,2.710956);
   hCCpi0inFV_stack_10->SetBinError(5,2.802237);
   hCCpi0inFV_stack_10->SetBinError(6,3.243763);
   hCCpi0inFV_stack_10->SetBinError(7,3.526838);
   hCCpi0inFV_stack_10->SetBinError(8,3.692203);
   hCCpi0inFV_stack_10->SetBinError(9,4.172937);
   hCCpi0inFV_stack_10->SetBinError(10,4.773431);
   hCCpi0inFV_stack_10->SetBinError(11,5.110999);
   hCCpi0inFV_stack_10->SetBinError(12,5.425918);
   hCCpi0inFV_stack_10->SetBinError(13,5.198713);
   hCCpi0inFV_stack_10->SetBinError(14,3.983659);
   hCCpi0inFV_stack_10->SetBinError(15,3.175579);
   hCCpi0inFV_stack_10->SetBinError(16,2.584411);
   hCCpi0inFV_stack_10->SetBinError(17,2.27691);
   hCCpi0inFV_stack_10->SetBinError(18,2.030401);
   hCCpi0inFV_stack_10->SetBinError(19,1.953297);
   hCCpi0inFV_stack_10->SetBinError(20,1.797993);
   hCCpi0inFV_stack_10->SetBinError(21,1.736037);
   hCCpi0inFV_stack_10->SetBinError(22,1.618629);
   hCCpi0inFV_stack_10->SetBinError(23,1.606491);
   hCCpi0inFV_stack_10->SetBinError(24,1.595704);
   hCCpi0inFV_stack_10->SetBinError(25,1.57039);
   hCCpi0inFV_stack_10->SetBinError(26,1.431671);
   hCCpi0inFV_stack_10->SetBinError(27,1.360689);
   hCCpi0inFV_stack_10->SetBinError(28,1.308985);
   hCCpi0inFV_stack_10->SetBinError(29,1.271098);
   hCCpi0inFV_stack_10->SetBinError(30,1.389559);
   hCCpi0inFV_stack_10->SetBinError(31,0.9705399);
   hCCpi0inFV_stack_10->SetBinError(32,0.8778096);
   hCCpi0inFV_stack_10->SetBinError(33,0.7594044);
   hCCpi0inFV_stack_10->SetBinError(34,1.018842);
   hCCpi0inFV_stack_10->SetBinError(35,3.065137);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,16.47356);
   hNCinFV_stack_11->SetBinContent(2,16.73837);
   hNCinFV_stack_11->SetBinContent(3,15.07122);
   hNCinFV_stack_11->SetBinContent(4,21.67053);
   hNCinFV_stack_11->SetBinContent(5,27.73703);
   hNCinFV_stack_11->SetBinContent(6,21.77621);
   hNCinFV_stack_11->SetBinContent(7,24.53469);
   hNCinFV_stack_11->SetBinContent(8,19.59776);
   hNCinFV_stack_11->SetBinContent(9,24.93892);
   hNCinFV_stack_11->SetBinContent(10,25.58376);
   hNCinFV_stack_11->SetBinContent(11,34.63114);
   hNCinFV_stack_11->SetBinContent(12,30.25363);
   hNCinFV_stack_11->SetBinContent(13,30.53702);
   hNCinFV_stack_11->SetBinContent(14,20.41972);
   hNCinFV_stack_11->SetBinContent(15,14.27528);
   hNCinFV_stack_11->SetBinContent(16,13.57861);
   hNCinFV_stack_11->SetBinContent(17,11.38072);
   hNCinFV_stack_11->SetBinContent(18,9.787731);
   hNCinFV_stack_11->SetBinContent(19,9.97095);
   hNCinFV_stack_11->SetBinContent(20,9.951065);
   hNCinFV_stack_11->SetBinContent(21,11.41555);
   hNCinFV_stack_11->SetBinContent(22,4.723227);
   hNCinFV_stack_11->SetBinContent(23,6.32132);
   hNCinFV_stack_11->SetBinContent(24,6.756105);
   hNCinFV_stack_11->SetBinContent(25,4.365468);
   hNCinFV_stack_11->SetBinContent(26,4.23654);
   hNCinFV_stack_11->SetBinContent(27,5.126696);
   hNCinFV_stack_11->SetBinContent(28,4.816346);
   hNCinFV_stack_11->SetBinContent(29,4.734862);
   hNCinFV_stack_11->SetBinContent(30,4.743337);
   hNCinFV_stack_11->SetBinContent(31,4.394362);
   hNCinFV_stack_11->SetBinContent(32,6.05072);
   hNCinFV_stack_11->SetBinContent(33,2.768132);
   hNCinFV_stack_11->SetBinContent(34,4.350304);
   hNCinFV_stack_11->SetBinContent(35,41.53002);
   hNCinFV_stack_11->SetBinError(1,2.093925);
   hNCinFV_stack_11->SetBinError(2,2.109049);
   hNCinFV_stack_11->SetBinError(3,1.919641);
   hNCinFV_stack_11->SetBinError(4,2.367072);
   hNCinFV_stack_11->SetBinError(5,2.721197);
   hNCinFV_stack_11->SetBinError(6,2.58111);
   hNCinFV_stack_11->SetBinError(7,2.509889);
   hNCinFV_stack_11->SetBinError(8,2.219211);
   hNCinFV_stack_11->SetBinError(9,2.443158);
   hNCinFV_stack_11->SetBinError(10,2.554834);
   hNCinFV_stack_11->SetBinError(11,3.130365);
   hNCinFV_stack_11->SetBinError(12,2.878811);
   hNCinFV_stack_11->SetBinError(13,3.138345);
   hNCinFV_stack_11->SetBinError(14,2.356707);
   hNCinFV_stack_11->SetBinError(15,1.952168);
   hNCinFV_stack_11->SetBinError(16,2.281786);
   hNCinFV_stack_11->SetBinError(17,2.007973);
   hNCinFV_stack_11->SetBinError(18,1.80802);
   hNCinFV_stack_11->SetBinError(19,1.840356);
   hNCinFV_stack_11->SetBinError(20,1.829432);
   hNCinFV_stack_11->SetBinError(21,2.193011);
   hNCinFV_stack_11->SetBinError(22,1.385091);
   hNCinFV_stack_11->SetBinError(23,1.256665);
   hNCinFV_stack_11->SetBinError(24,1.418982);
   hNCinFV_stack_11->SetBinError(25,1.311133);
   hNCinFV_stack_11->SetBinError(26,1.12153);
   hNCinFV_stack_11->SetBinError(27,1.212933);
   hNCinFV_stack_11->SetBinError(28,1.398204);
   hNCinFV_stack_11->SetBinError(29,1.142395);
   hNCinFV_stack_11->SetBinError(30,1.136026);
   hNCinFV_stack_11->SetBinError(31,1.199323);
   hNCinFV_stack_11->SetBinError(32,1.604496);
   hNCinFV_stack_11->SetBinError(33,0.9621651);
   hNCinFV_stack_11->SetBinError(34,1.486743);
   hNCinFV_stack_11->SetBinError(35,3.644679);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,28.93737);
   hnumuCCinFV_stack_12->SetBinContent(2,33.94467);
   hnumuCCinFV_stack_12->SetBinContent(3,35.909);
   hnumuCCinFV_stack_12->SetBinContent(4,33.43286);
   hnumuCCinFV_stack_12->SetBinContent(5,35.32456);
   hnumuCCinFV_stack_12->SetBinContent(6,41.14712);
   hnumuCCinFV_stack_12->SetBinContent(7,37.93098);
   hnumuCCinFV_stack_12->SetBinContent(8,36.67855);
   hnumuCCinFV_stack_12->SetBinContent(9,35.11309);
   hnumuCCinFV_stack_12->SetBinContent(10,41.92281);
   hnumuCCinFV_stack_12->SetBinContent(11,40.6144);
   hnumuCCinFV_stack_12->SetBinContent(12,38.67904);
   hnumuCCinFV_stack_12->SetBinContent(13,31.46643);
   hnumuCCinFV_stack_12->SetBinContent(14,31.86554);
   hnumuCCinFV_stack_12->SetBinContent(15,18.45674);
   hnumuCCinFV_stack_12->SetBinContent(16,14.80286);
   hnumuCCinFV_stack_12->SetBinContent(17,10.80344);
   hnumuCCinFV_stack_12->SetBinContent(18,11.32529);
   hnumuCCinFV_stack_12->SetBinContent(19,7.066525);
   hnumuCCinFV_stack_12->SetBinContent(20,8.875105);
   hnumuCCinFV_stack_12->SetBinContent(21,6.083355);
   hnumuCCinFV_stack_12->SetBinContent(22,6.448174);
   hnumuCCinFV_stack_12->SetBinContent(23,6.092417);
   hnumuCCinFV_stack_12->SetBinContent(24,5.597029);
   hnumuCCinFV_stack_12->SetBinContent(25,4.3536);
   hnumuCCinFV_stack_12->SetBinContent(26,4.854149);
   hnumuCCinFV_stack_12->SetBinContent(27,3.168426);
   hnumuCCinFV_stack_12->SetBinContent(28,4.014942);
   hnumuCCinFV_stack_12->SetBinContent(29,3.376046);
   hnumuCCinFV_stack_12->SetBinContent(30,3.300561);
   hnumuCCinFV_stack_12->SetBinContent(31,2.556957);
   hnumuCCinFV_stack_12->SetBinContent(32,3.528168);
   hnumuCCinFV_stack_12->SetBinContent(33,1.699483);
   hnumuCCinFV_stack_12->SetBinContent(34,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(35,23.46125);
   hnumuCCinFV_stack_12->SetBinError(1,3.164135);
   hnumuCCinFV_stack_12->SetBinError(2,3.846772);
   hnumuCCinFV_stack_12->SetBinError(3,3.728863);
   hnumuCCinFV_stack_12->SetBinError(4,3.322337);
   hnumuCCinFV_stack_12->SetBinError(5,3.679483);
   hnumuCCinFV_stack_12->SetBinError(6,3.772003);
   hnumuCCinFV_stack_12->SetBinError(7,3.699993);
   hnumuCCinFV_stack_12->SetBinError(8,3.187534);
   hnumuCCinFV_stack_12->SetBinError(9,3.53433);
   hnumuCCinFV_stack_12->SetBinError(10,3.51546);
   hnumuCCinFV_stack_12->SetBinError(11,3.600686);
   hnumuCCinFV_stack_12->SetBinError(12,3.710046);
   hnumuCCinFV_stack_12->SetBinError(13,3.754821);
   hnumuCCinFV_stack_12->SetBinError(14,3.483514);
   hnumuCCinFV_stack_12->SetBinError(15,2.248189);
   hnumuCCinFV_stack_12->SetBinError(16,1.991111);
   hnumuCCinFV_stack_12->SetBinError(17,1.689215);
   hnumuCCinFV_stack_12->SetBinError(18,1.725094);
   hnumuCCinFV_stack_12->SetBinError(19,1.359557);
   hnumuCCinFV_stack_12->SetBinError(20,1.578186);
   hnumuCCinFV_stack_12->SetBinError(21,1.369721);
   hnumuCCinFV_stack_12->SetBinError(22,1.349597);
   hnumuCCinFV_stack_12->SetBinError(23,2.566603);
   hnumuCCinFV_stack_12->SetBinError(24,1.232088);
   hnumuCCinFV_stack_12->SetBinError(25,1.115093);
   hnumuCCinFV_stack_12->SetBinError(26,1.154466);
   hnumuCCinFV_stack_12->SetBinError(27,0.9096595);
   hnumuCCinFV_stack_12->SetBinError(28,0.9746122);
   hnumuCCinFV_stack_12->SetBinError(29,0.8997438);
   hnumuCCinFV_stack_12->SetBinError(30,0.9168915);
   hnumuCCinFV_stack_12->SetBinError(31,0.7521807);
   hnumuCCinFV_stack_12->SetBinError(32,0.9030904);
   hnumuCCinFV_stack_12->SetBinError(33,0.6636524);
   hnumuCCinFV_stack_12->SetBinError(34,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(35,2.388774);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,3.836905);
   hnueCCinFV_stack_13->SetBinContent(2,5.066339);
   hnueCCinFV_stack_13->SetBinContent(3,4.037627);
   hnueCCinFV_stack_13->SetBinContent(4,2.391441);
   hnueCCinFV_stack_13->SetBinContent(5,1.482865);
   hnueCCinFV_stack_13->SetBinContent(6,3.598485);
   hnueCCinFV_stack_13->SetBinContent(7,1.171105);
   hnueCCinFV_stack_13->SetBinContent(8,2.185591);
   hnueCCinFV_stack_13->SetBinContent(9,2.449232);
   hnueCCinFV_stack_13->SetBinContent(10,1.019172);
   hnueCCinFV_stack_13->SetBinContent(11,3.887493);
   hnueCCinFV_stack_13->SetBinContent(12,1.744804);
   hnueCCinFV_stack_13->SetBinContent(13,2.30286);
   hnueCCinFV_stack_13->SetBinContent(14,1.26712);
   hnueCCinFV_stack_13->SetBinContent(15,1.607187);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.9942417);
   hnueCCinFV_stack_13->SetBinContent(18,0.7007893);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,2.064511);
   hnueCCinFV_stack_13->SetBinContent(21,0.6183392);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,1.734149);
   hnueCCinFV_stack_13->SetBinContent(25,0.196839);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.5008826);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,4.746995);
   hnueCCinFV_stack_13->SetBinError(1,1.285037);
   hnueCCinFV_stack_13->SetBinError(2,1.812762);
   hnueCCinFV_stack_13->SetBinError(3,1.156459);
   hnueCCinFV_stack_13->SetBinError(4,0.9600136);
   hnueCCinFV_stack_13->SetBinError(5,0.5643895);
   hnueCCinFV_stack_13->SetBinError(6,1.514818);
   hnueCCinFV_stack_13->SetBinError(7,0.6177499);
   hnueCCinFV_stack_13->SetBinError(8,0.8226269);
   hnueCCinFV_stack_13->SetBinError(9,1.30231);
   hnueCCinFV_stack_13->SetBinError(10,0.5199676);
   hnueCCinFV_stack_13->SetBinError(11,1.132728);
   hnueCCinFV_stack_13->SetBinError(12,0.6985861);
   hnueCCinFV_stack_13->SetBinError(13,0.9990662);
   hnueCCinFV_stack_13->SetBinError(14,0.5883944);
   hnueCCinFV_stack_13->SetBinError(15,0.6947991);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.5109251);
   hnueCCinFV_stack_13->SetBinError(18,0.4071227);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,1.609916);
   hnueCCinFV_stack_13->SetBinError(21,0.4394254);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.7895654);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3622357);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,1.408109);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__2->SetBinContent(1,176.5707);
   hmcerror__2->SetBinContent(2,230.0811);
   hmcerror__2->SetBinContent(3,265.6679);
   hmcerror__2->SetBinContent(4,264.6978);
   hmcerror__2->SetBinContent(5,278.4959);
   hmcerror__2->SetBinContent(6,326.4702);
   hmcerror__2->SetBinContent(7,345.0444);
   hmcerror__2->SetBinContent(8,363.76);
   hmcerror__2->SetBinContent(9,427.6916);
   hmcerror__2->SetBinContent(10,541.5541);
   hmcerror__2->SetBinContent(11,618.0659);
   hmcerror__2->SetBinContent(12,671.7783);
   hmcerror__2->SetBinContent(13,596.5211);
   hmcerror__2->SetBinContent(14,372.0392);
   hmcerror__2->SetBinContent(15,212.8165);
   hmcerror__2->SetBinContent(16,151.5488);
   hmcerror__2->SetBinContent(17,106.2406);
   hmcerror__2->SetBinContent(18,83.79962);
   hmcerror__2->SetBinContent(19,71.162);
   hmcerror__2->SetBinContent(20,69.57104);
   hmcerror__2->SetBinContent(21,61.9077);
   hmcerror__2->SetBinContent(22,47.07708);
   hmcerror__2->SetBinContent(23,46.14119);
   hmcerror__2->SetBinContent(24,42.33963);
   hmcerror__2->SetBinContent(25,33.13239);
   hmcerror__2->SetBinContent(26,32.66416);
   hmcerror__2->SetBinContent(27,30.53732);
   hmcerror__2->SetBinContent(28,26.74839);
   hmcerror__2->SetBinContent(29,25.91558);
   hmcerror__2->SetBinContent(30,26.69112);
   hmcerror__2->SetBinContent(31,19.02571);
   hmcerror__2->SetBinContent(32,20.77757);
   hmcerror__2->SetBinContent(33,13.4768);
   hmcerror__2->SetBinContent(34,15.65652);
   hmcerror__2->SetBinContent(35,163.4356);
   hmcerror__2->SetBinError(1,51.05024);
   hmcerror__2->SetBinError(2,57.59117);
   hmcerror__2->SetBinError(3,57.87794);
   hmcerror__2->SetBinError(4,62.16952);
   hmcerror__2->SetBinError(5,70.93844);
   hmcerror__2->SetBinError(6,75.43783);
   hmcerror__2->SetBinError(7,109.7184);
   hmcerror__2->SetBinError(8,97.51231);
   hmcerror__2->SetBinError(9,119.1008);
   hmcerror__2->SetBinError(10,166.4185);
   hmcerror__2->SetBinError(11,193.0697);
   hmcerror__2->SetBinError(12,205.2231);
   hmcerror__2->SetBinError(13,191.2811);
   hmcerror__2->SetBinError(14,128.4407);
   hmcerror__2->SetBinError(15,78.73231);
   hmcerror__2->SetBinError(16,41.69644);
   hmcerror__2->SetBinError(17,30.03886);
   hmcerror__2->SetBinError(18,29.12337);
   hmcerror__2->SetBinError(19,23.74549);
   hmcerror__2->SetBinError(20,32.06253);
   hmcerror__2->SetBinError(21,25.75952);
   hmcerror__2->SetBinError(22,18.34299);
   hmcerror__2->SetBinError(23,19.47646);
   hmcerror__2->SetBinError(24,16.81095);
   hmcerror__2->SetBinError(25,18.06066);
   hmcerror__2->SetBinError(26,21.56106);
   hmcerror__2->SetBinError(27,14.93447);
   hmcerror__2->SetBinError(28,13.9747);
   hmcerror__2->SetBinError(29,14.0395);
   hmcerror__2->SetBinError(30,13.83787);
   hmcerror__2->SetBinError(31,11.23536);
   hmcerror__2->SetBinError(32,12.26048);
   hmcerror__2->SetBinError(33,8.986856);
   hmcerror__2->SetBinError(34,13.73573);
   hmcerror__2->SetBinError(35,57.48298);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3001[34] = {
   177,
   212,
   243,
   249,
   286,
   300,
   363,
   354,
   426,
   568,
   582,
   726,
   568,
   278,
   224,
   117,
   89,
   81,
   67,
   53,
   44,
   60,
   46,
   33,
   21,
   28,
   28,
   20,
   19,
   19,
   17,
   18,
   13,
   6};
   Double_t _felx3001[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3001[34] = {
   13.30413,
   14.56022,
   15.58846,
   15.77973,
   16.91153,
   17.32051,
   19.05256,
   18.81489,
   20.63977,
   23.83275,
   24.12468,
   26.94439,
   23.83275,
   16.67333,
   14.96663,
   10.81665,
   9.5566,
   9.1239,
   8.3119,
   7.4105,
   6.7671,
   7.8743,
   6.9153,
   5.8847,
   4.7354,
   5.4358,
   5.4358,
   4.6266,
   4.5151,
   4.5151,
   4.2835,
   4.4008,
   3.77763,
   2.67925};
   Double_t _fehx3001[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3001[34] = {
   13.30413,
   14.56022,
   15.58846,
   15.77973,
   16.91153,
   17.32051,
   19.05256,
   18.81489,
   20.63977,
   23.83275,
   24.12468,
   26.94439,
   23.83275,
   16.67333,
   14.96663,
   10.81665,
   9.3552,
   8.9221,
   8.1094,
   7.2068,
   6.5623,
   7.6713,
   6.7108,
   5.6776,
   4.5229,
   5.2271,
   5.2271,
   4.4133,
   4.3011,
   4.3011,
   4.0673,
   4.1858,
   3.5552,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,440);
   Graph_Graph3001->SetMinimum(2.988675);
   Graph_Graph3001->SetMaximum(827.9068);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.7/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6335.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 172.1","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 746.7","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 668.8","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  113.2","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2149.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  462.2","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1057.5","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 473.7","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 630.3","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 48.5","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3002[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3002[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3002[34] = {
   0.2891207,
   0.2503081,
   0.2178583,
   0.2348698,
   0.2547198,
   0.2310711,
   0.3179834,
   0.2680677,
   0.2784735,
   0.3072981,
   0.3123773,
   0.3054922,
   0.320661,
   0.3452343,
   0.3699539,
   0.2751353,
   0.2827438,
   0.3475359,
   0.3336822,
   0.4608603,
   0.4160956,
   0.3896375,
   0.4221057,
   0.3970499,
   0.545106,
   0.6600831,
   0.4890565,
   0.5224502,
   0.5417399,
   0.5184447,
   0.5905357,
   0.5900823,
   0.6668392,
   0.8773169};
   Double_t _fehx3002[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3002[34] = {
   0.2891207,
   0.2503081,
   0.2178583,
   0.2348698,
   0.2547198,
   0.2310711,
   0.3179834,
   0.2680677,
   0.2784735,
   0.3072981,
   0.3123773,
   0.3054922,
   0.320661,
   0.3452343,
   0.3699539,
   0.2751353,
   0.2827438,
   0.3475359,
   0.3336822,
   0.4608603,
   0.4160956,
   0.3896375,
   0.4221057,
   0.3970499,
   0.545106,
   0.6600831,
   0.4890565,
   0.5224502,
   0.5417399,
   0.5184447,
   0.5905357,
   0.5900823,
   0.6668392,
   0.8773169};
   grae = new TGraphAsymmErrors(34,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,440);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3003[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3003[34] = {
   0.1898693,
   0.1881911,
   0.1761896,
   0.1944226,
   0.2165918,
   0.2005916,
   0.2232868,
   0.2391624,
   0.2600571,
   0.2803562,
   0.3024931,
   0.2954628,
   0.2704587,
   0.2560073,
   0.2402865,
   0.2260103,
   0.2217025,
   0.254933,
   0.2280917,
   0.2147769,
   0.2198379,
   0.2228414,
   0.2392569,
   0.2465082,
   0.2515961,
   0.228582,
   0.2357885,
   0.2522357,
   0.2637148,
   0.2419001,
   0.2870788,
   0.2660531,
   0.3017346,
   0.2686028};
   Double_t _fehx3003[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3003[34] = {
   0.1898693,
   0.1881911,
   0.1761896,
   0.1944226,
   0.2165918,
   0.2005916,
   0.2232868,
   0.2391624,
   0.2600571,
   0.2803562,
   0.3024931,
   0.2954628,
   0.2704587,
   0.2560073,
   0.2402865,
   0.2260103,
   0.2217025,
   0.254933,
   0.2280917,
   0.2147769,
   0.2198379,
   0.2228414,
   0.2392569,
   0.2465082,
   0.2515961,
   0.228582,
   0.2357885,
   0.2522357,
   0.2637148,
   0.2419001,
   0.2870788,
   0.2660531,
   0.3017346,
   0.2686028};
   grae = new TGraphAsymmErrors(34,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,440);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3004[34] = {
   1.002431,
   0.921414,
   0.9146759,
   0.9406953,
   1.026945,
   0.9189201,
   1.052039,
   0.9731691,
   0.9960448,
   1.048833,
   0.9416471,
   1.080714,
   0.9521877,
   0.747233,
   1.05255,
   0.7720284,
   0.8377215,
   0.9665915,
   0.9415137,
   0.7618113,
   0.7107355,
   1.274506,
   0.9969401,
   0.7794116,
   0.6338209,
   0.8572086,
   0.9169108,
   0.7477084,
   0.7331496,
   0.7118472,
   0.8935275,
   0.8663188,
   0.964621,
   0.383227};
   Double_t _felx3004[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3004[34] = {
   0.07534735,
   0.06328298,
   0.05867649,
   0.05961414,
   0.06072453,
   0.05305387,
   0.0552177,
   0.05172335,
   0.04825853,
   0.04400807,
   0.03903253,
   0.04010905,
   0.03995291,
   0.04481606,
   0.07032644,
   0.07137405,
   0.08995246,
   0.1088776,
   0.1168025,
   0.106517,
   0.1093095,
   0.167264,
   0.1498726,
   0.138988,
   0.1429236,
   0.1664148,
   0.1780051,
   0.1729674,
   0.1742234,
   0.1691611,
   0.2251427,
   0.2118053,
   0.2803063,
   0.1711268};
   Double_t _fehx3004[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3004[34] = {
   0.07534735,
   0.06328298,
   0.05867649,
   0.05961414,
   0.06072453,
   0.05305387,
   0.0552177,
   0.05172335,
   0.04825853,
   0.04400807,
   0.03903253,
   0.04010905,
   0.03995291,
   0.04481606,
   0.07032644,
   0.07137405,
   0.08805676,
   0.1064695,
   0.1139569,
   0.1035891,
   0.1060013,
   0.1629519,
   0.1454406,
   0.1340966,
   0.1365099,
   0.1600255,
   0.1711709,
   0.1649931,
   0.1659658,
   0.1611435,
   0.2137791,
   0.2014576,
   0.2638016,
   0.1544775};
   grae = new TGraphAsymmErrors(34,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,440);
   Graph_Graph3004->SetMinimum(0.08956443);
   Graph_Graph3004->SetMaximum(1.559993);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

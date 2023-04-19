#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 17 20:27:22 2023) by ROOT version 6.26/00
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
   pad1->Range(-40,-5.463645,293.3333,604.1641);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__4->SetBinContent(0,8.032227);
   hmc__4->SetBinContent(1,82.66032);
   hmc__4->SetBinContent(2,142.8112);
   hmc__4->SetBinContent(3,184.0891);
   hmc__4->SetBinContent(4,207.5725);
   hmc__4->SetBinContent(5,222.4701);
   hmc__4->SetBinContent(6,232.678);
   hmc__4->SetBinContent(7,224.2908);
   hmc__4->SetBinContent(8,244.8282);
   hmc__4->SetBinContent(9,246.3336);
   hmc__4->SetBinContent(10,246.4596);
   hmc__4->SetBinContent(11,256.2979);
   hmc__4->SetBinContent(12,247.8704);
   hmc__4->SetBinContent(13,250.0994);
   hmc__4->SetBinContent(14,259.0246);
   hmc__4->SetBinContent(15,245.332);
   hmc__4->SetBinContent(16,250.5387);
   hmc__4->SetBinContent(17,271.8096);
   hmc__4->SetBinContent(18,254.3248);
   hmc__4->SetBinContent(19,260.7944);
   hmc__4->SetBinContent(20,273.1823);
   hmc__4->SetBinContent(21,265.5715);
   hmc__4->SetBinContent(22,247.0653);
   hmc__4->SetBinContent(23,234.3459);
   hmc__4->SetBinContent(24,206.417);
   hmc__4->SetBinContent(25,158.2426);
   hmc__4->SetBinContent(26,59.53427);
   hmc__4->SetBinContent(27,6.079189);
   hmc__4->SetBinError(0,1.349946);
   hmc__4->SetBinError(1,24.03313);
   hmc__4->SetBinError(2,38.6374);
   hmc__4->SetBinError(3,52.74873);
   hmc__4->SetBinError(4,53.29245);
   hmc__4->SetBinError(5,66.9255);
   hmc__4->SetBinError(6,63.99348);
   hmc__4->SetBinError(7,62.73436);
   hmc__4->SetBinError(8,70.85926);
   hmc__4->SetBinError(9,68.94406);
   hmc__4->SetBinError(10,65.14934);
   hmc__4->SetBinError(11,72.08594);
   hmc__4->SetBinError(12,69.68113);
   hmc__4->SetBinError(13,68.93045);
   hmc__4->SetBinError(14,73.20557);
   hmc__4->SetBinError(15,68.03305);
   hmc__4->SetBinError(16,69.2198);
   hmc__4->SetBinError(17,68.3612);
   hmc__4->SetBinError(18,74.55898);
   hmc__4->SetBinError(19,70.55148);
   hmc__4->SetBinError(20,69.39146);
   hmc__4->SetBinError(21,71.59035);
   hmc__4->SetBinError(22,63.06324);
   hmc__4->SetBinError(23,59.82224);
   hmc__4->SetBinError(24,52.30294);
   hmc__4->SetBinError(25,41.87995);
   hmc__4->SetBinError(26,22.63195);
   hmc__4->SetBinError(27,6.100054);
   hmc__4->SetMinimum(-5.463645);
   hmc__4->SetMaximum(573.6827);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,0,260);
   hs2_stack_2->SetMinimum(-3.571482e-09);
   hs2_stack_2->SetMaximum(286.8414);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,4.020401);
   hbadmatch_stack_1->SetBinContent(2,1.908829);
   hbadmatch_stack_1->SetBinContent(3,2.611985);
   hbadmatch_stack_1->SetBinContent(4,1.608988);
   hbadmatch_stack_1->SetBinContent(5,4.524554);
   hbadmatch_stack_1->SetBinContent(6,3.982891);
   hbadmatch_stack_1->SetBinContent(7,4.104583);
   hbadmatch_stack_1->SetBinContent(8,3.750892);
   hbadmatch_stack_1->SetBinContent(9,3.965688);
   hbadmatch_stack_1->SetBinContent(10,6.310633);
   hbadmatch_stack_1->SetBinContent(11,4.819946);
   hbadmatch_stack_1->SetBinContent(12,5.573705);
   hbadmatch_stack_1->SetBinContent(13,5.763766);
   hbadmatch_stack_1->SetBinContent(14,6.548461);
   hbadmatch_stack_1->SetBinContent(15,4.082827);
   hbadmatch_stack_1->SetBinContent(16,5.158642);
   hbadmatch_stack_1->SetBinContent(17,6.495368);
   hbadmatch_stack_1->SetBinContent(18,6.959102);
   hbadmatch_stack_1->SetBinContent(19,7.780516);
   hbadmatch_stack_1->SetBinContent(20,6.498997);
   hbadmatch_stack_1->SetBinContent(21,5.163404);
   hbadmatch_stack_1->SetBinContent(22,4.40183);
   hbadmatch_stack_1->SetBinContent(23,5.381951);
   hbadmatch_stack_1->SetBinContent(24,5.058458);
   hbadmatch_stack_1->SetBinContent(25,5.927343);
   hbadmatch_stack_1->SetBinContent(26,1.474259);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.852178);
   hbadmatch_stack_1->SetBinError(2,0.6506224);
   hbadmatch_stack_1->SetBinError(3,0.8149629);
   hbadmatch_stack_1->SetBinError(4,0.6801404);
   hbadmatch_stack_1->SetBinError(5,2.094912);
   hbadmatch_stack_1->SetBinError(6,1.007036);
   hbadmatch_stack_1->SetBinError(7,1.000333);
   hbadmatch_stack_1->SetBinError(8,0.9725075);
   hbadmatch_stack_1->SetBinError(9,1.155496);
   hbadmatch_stack_1->SetBinError(10,1.958208);
   hbadmatch_stack_1->SetBinError(11,1.174479);
   hbadmatch_stack_1->SetBinError(12,1.2361);
   hbadmatch_stack_1->SetBinError(13,1.289505);
   hbadmatch_stack_1->SetBinError(14,1.416394);
   hbadmatch_stack_1->SetBinError(15,1.02819);
   hbadmatch_stack_1->SetBinError(16,1.181238);
   hbadmatch_stack_1->SetBinError(17,1.301641);
   hbadmatch_stack_1->SetBinError(18,1.383313);
   hbadmatch_stack_1->SetBinError(19,1.831712);
   hbadmatch_stack_1->SetBinError(20,1.377983);
   hbadmatch_stack_1->SetBinError(21,1.20277);
   hbadmatch_stack_1->SetBinError(22,1.065466);
   hbadmatch_stack_1->SetBinError(23,1.203581);
   hbadmatch_stack_1->SetBinError(24,1.356582);
   hbadmatch_stack_1->SetBinError(25,1.286838);
   hbadmatch_stack_1->SetBinError(26,0.6237621);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(1,3.897177);
   hext_stack_2->SetBinContent(2,9.87201);
   hext_stack_2->SetBinContent(3,10.43583);
   hext_stack_2->SetBinContent(4,15.3884);
   hext_stack_2->SetBinContent(5,16.49287);
   hext_stack_2->SetBinContent(6,18.4293);
   hext_stack_2->SetBinContent(7,13.86575);
   hext_stack_2->SetBinContent(8,10.93181);
   hext_stack_2->SetBinContent(9,11.76655);
   hext_stack_2->SetBinContent(10,21.32456);
   hext_stack_2->SetBinContent(11,20.33537);
   hext_stack_2->SetBinContent(12,20.05847);
   hext_stack_2->SetBinContent(13,16.95572);
   hext_stack_2->SetBinContent(14,15.13185);
   hext_stack_2->SetBinContent(15,20.21128);
   hext_stack_2->SetBinContent(16,21.66332);
   hext_stack_2->SetBinContent(17,24.66951);
   hext_stack_2->SetBinContent(18,18.17116);
   hext_stack_2->SetBinContent(19,16.90665);
   hext_stack_2->SetBinContent(20,33.28299);
   hext_stack_2->SetBinContent(21,29.33516);
   hext_stack_2->SetBinContent(22,26.10555);
   hext_stack_2->SetBinContent(23,28.22068);
   hext_stack_2->SetBinContent(24,21.35769);
   hext_stack_2->SetBinContent(25,15.56439);
   hext_stack_2->SetBinContent(26,5.972061);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(1,1.182339);
   hext_stack_2->SetBinError(2,2.053562);
   hext_stack_2->SetBinError(3,2.168829);
   hext_stack_2->SetBinError(4,2.5451);
   hext_stack_2->SetBinError(5,2.753742);
   hext_stack_2->SetBinError(6,2.958382);
   hext_stack_2->SetBinError(7,2.296242);
   hext_stack_2->SetBinError(8,2.174403);
   hext_stack_2->SetBinError(9,2.110703);
   hext_stack_2->SetBinError(10,3.261756);
   hext_stack_2->SetBinError(11,3.202235);
   hext_stack_2->SetBinError(12,3.012804);
   hext_stack_2->SetBinError(13,2.876976);
   hext_stack_2->SetBinError(14,2.614343);
   hext_stack_2->SetBinError(15,3.043558);
   hext_stack_2->SetBinError(16,3.21588);
   hext_stack_2->SetBinError(17,3.388834);
   hext_stack_2->SetBinError(18,2.703225);
   hext_stack_2->SetBinError(19,2.74722);
   hext_stack_2->SetBinError(20,4.228249);
   hext_stack_2->SetBinError(21,3.734773);
   hext_stack_2->SetBinError(22,3.534656);
   hext_stack_2->SetBinError(23,3.83548);
   hext_stack_2->SetBinError(24,3.157431);
   hext_stack_2->SetBinError(25,2.555706);
   hext_stack_2->SetBinError(26,1.776376);
   hext_stack_2->SetBinError(27,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.941116);
   hdirt_stack_3->SetBinContent(2,2.239327);
   hdirt_stack_3->SetBinContent(3,3.892356);
   hdirt_stack_3->SetBinContent(4,2.535865);
   hdirt_stack_3->SetBinContent(5,3.119497);
   hdirt_stack_3->SetBinContent(6,0.5758626);
   hdirt_stack_3->SetBinContent(7,0.8457623);
   hdirt_stack_3->SetBinContent(8,1.559793);
   hdirt_stack_3->SetBinContent(9,2.586779);
   hdirt_stack_3->SetBinContent(10,1.169767);
   hdirt_stack_3->SetBinContent(11,1.896021);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,1.197001);
   hdirt_stack_3->SetBinContent(14,1.64192);
   hdirt_stack_3->SetBinContent(15,1.07113);
   hdirt_stack_3->SetBinContent(16,1.912393);
   hdirt_stack_3->SetBinContent(17,1.491749);
   hdirt_stack_3->SetBinContent(18,1.968738);
   hdirt_stack_3->SetBinContent(19,2.117445);
   hdirt_stack_3->SetBinContent(20,1.781033);
   hdirt_stack_3->SetBinContent(21,3.951662);
   hdirt_stack_3->SetBinContent(22,2.98143);
   hdirt_stack_3->SetBinContent(23,3.139966);
   hdirt_stack_3->SetBinContent(24,1.29767);
   hdirt_stack_3->SetBinContent(25,2.14023);
   hdirt_stack_3->SetBinContent(26,0.5149939);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4983014);
   hdirt_stack_3->SetBinError(2,0.7439905);
   hdirt_stack_3->SetBinError(3,1.031337);
   hdirt_stack_3->SetBinError(4,0.7356287);
   hdirt_stack_3->SetBinError(5,1.21588);
   hdirt_stack_3->SetBinError(6,0.3389606);
   hdirt_stack_3->SetBinError(7,0.4516994);
   hdirt_stack_3->SetBinError(8,0.6295299);
   hdirt_stack_3->SetBinError(9,0.8147261);
   hdirt_stack_3->SetBinError(10,0.6043763);
   hdirt_stack_3->SetBinError(11,1.180313);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.567895);
   hdirt_stack_3->SetBinError(14,0.6526925);
   hdirt_stack_3->SetBinError(15,0.5555408);
   hdirt_stack_3->SetBinError(16,0.6468139);
   hdirt_stack_3->SetBinError(17,0.6050558);
   hdirt_stack_3->SetBinError(18,0.7191281);
   hdirt_stack_3->SetBinError(19,0.7996816);
   hdirt_stack_3->SetBinError(20,0.6443707);
   hdirt_stack_3->SetBinError(21,1.209716);
   hdirt_stack_3->SetBinError(22,0.9256584);
   hdirt_stack_3->SetBinError(23,0.9562961);
   hdirt_stack_3->SetBinError(24,0.500426);
   hdirt_stack_3->SetBinError(25,0.7642586);
   hdirt_stack_3->SetBinError(26,0.303235);
   hdirt_stack_3->SetBinError(27,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,5.861924);
   houtFV_stack_4->SetBinContent(1,35.71754);
   houtFV_stack_4->SetBinContent(2,20.42483);
   houtFV_stack_4->SetBinContent(3,19.22089);
   houtFV_stack_4->SetBinContent(4,15.62393);
   houtFV_stack_4->SetBinContent(5,14.34072);
   houtFV_stack_4->SetBinContent(6,15.38745);
   houtFV_stack_4->SetBinContent(7,13.32304);
   houtFV_stack_4->SetBinContent(8,13.97179);
   houtFV_stack_4->SetBinContent(9,10.60602);
   houtFV_stack_4->SetBinContent(10,10.0148);
   houtFV_stack_4->SetBinContent(11,11.25571);
   houtFV_stack_4->SetBinContent(12,10.40782);
   houtFV_stack_4->SetBinContent(13,9.328541);
   houtFV_stack_4->SetBinContent(14,10.03286);
   houtFV_stack_4->SetBinContent(15,12.60717);
   houtFV_stack_4->SetBinContent(16,7.677343);
   houtFV_stack_4->SetBinContent(17,13.14088);
   houtFV_stack_4->SetBinContent(18,11.37239);
   houtFV_stack_4->SetBinContent(19,11.85618);
   houtFV_stack_4->SetBinContent(20,12.66801);
   houtFV_stack_4->SetBinContent(21,10.96455);
   houtFV_stack_4->SetBinContent(22,14.74167);
   houtFV_stack_4->SetBinContent(23,20.81298);
   houtFV_stack_4->SetBinContent(24,19.5513);
   houtFV_stack_4->SetBinContent(25,23.41337);
   houtFV_stack_4->SetBinContent(26,20.06055);
   houtFV_stack_4->SetBinContent(27,2.839153);
   houtFV_stack_4->SetBinError(0,1.185377);
   houtFV_stack_4->SetBinError(1,2.958249);
   houtFV_stack_4->SetBinError(2,2.299544);
   houtFV_stack_4->SetBinError(3,2.23157);
   houtFV_stack_4->SetBinError(4,1.92728);
   houtFV_stack_4->SetBinError(5,1.864996);
   houtFV_stack_4->SetBinError(6,2.004292);
   houtFV_stack_4->SetBinError(7,1.768875);
   houtFV_stack_4->SetBinError(8,1.924198);
   houtFV_stack_4->SetBinError(9,1.656137);
   houtFV_stack_4->SetBinError(10,1.537839);
   houtFV_stack_4->SetBinError(11,1.661893);
   houtFV_stack_4->SetBinError(12,1.633694);
   houtFV_stack_4->SetBinError(13,1.526444);
   houtFV_stack_4->SetBinError(14,1.520289);
   houtFV_stack_4->SetBinError(15,1.777828);
   houtFV_stack_4->SetBinError(16,1.359744);
   houtFV_stack_4->SetBinError(17,1.836667);
   houtFV_stack_4->SetBinError(18,1.767238);
   houtFV_stack_4->SetBinError(19,1.656684);
   houtFV_stack_4->SetBinError(20,1.825915);
   houtFV_stack_4->SetBinError(21,1.679902);
   houtFV_stack_4->SetBinError(22,1.925051);
   houtFV_stack_4->SetBinError(23,2.346512);
   houtFV_stack_4->SetBinError(24,2.16275);
   houtFV_stack_4->SetBinError(25,2.397688);
   houtFV_stack_4->SetBinError(26,2.243957);
   houtFV_stack_4->SetBinError(27,0.8093956);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.7097899);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.914234);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.317788);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.012048);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.843647);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.683064);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.332566);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.33207);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.392278);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.830534);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.862506);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.001174);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.188433);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.32186);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.819324);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.072256);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.280342);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.217492);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.62552);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.78055);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.505206);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.902855);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.85893);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.94787);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.534508);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.4188362);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2314762);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5701945);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5972);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5369739);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4812955);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6841249);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5513973);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5918536);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7241537);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5681431);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6561998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6443788);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8190681);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6809413);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6197999);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6800359);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6751052);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7822446);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6200617);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7143225);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7074792);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5947505);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.5266055);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6866337);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4328289);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.277838);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.08794);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7528039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8654041);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.143572);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.38139);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.645444);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.213822);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8492898);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7255678);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.686794);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.604758);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.08694);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.102222);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.18509);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.129122);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.493158);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.125218);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3769979);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2593621);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3498677);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3330545);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4198967);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4516052);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3726713);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2397359);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.230212);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4232048);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4640037);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3001705);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3684702);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3447308);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2907294);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.4606363);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1012383);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,1.143908);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.13648);
   hNCpi0inFVres_stack_7->SetBinContent(2,56.09306);
   hNCpi0inFVres_stack_7->SetBinContent(3,78.08394);
   hNCpi0inFVres_stack_7->SetBinContent(4,89.62296);
   hNCpi0inFVres_stack_7->SetBinContent(5,103.0185);
   hNCpi0inFVres_stack_7->SetBinContent(6,108.7513);
   hNCpi0inFVres_stack_7->SetBinContent(7,105.6706);
   hNCpi0inFVres_stack_7->SetBinContent(8,113.5742);
   hNCpi0inFVres_stack_7->SetBinContent(9,117.9684);
   hNCpi0inFVres_stack_7->SetBinContent(10,108.1599);
   hNCpi0inFVres_stack_7->SetBinContent(11,121.8589);
   hNCpi0inFVres_stack_7->SetBinContent(12,111.7814);
   hNCpi0inFVres_stack_7->SetBinContent(13,111.5896);
   hNCpi0inFVres_stack_7->SetBinContent(14,120.5644);
   hNCpi0inFVres_stack_7->SetBinContent(15,110.884);
   hNCpi0inFVres_stack_7->SetBinContent(16,116.8957);
   hNCpi0inFVres_stack_7->SetBinContent(17,116.4502);
   hNCpi0inFVres_stack_7->SetBinContent(18,108.9594);
   hNCpi0inFVres_stack_7->SetBinContent(19,112.3405);
   hNCpi0inFVres_stack_7->SetBinContent(20,104.1061);
   hNCpi0inFVres_stack_7->SetBinContent(21,110.2558);
   hNCpi0inFVres_stack_7->SetBinContent(22,105.6767);
   hNCpi0inFVres_stack_7->SetBinContent(23,85.91408);
   hNCpi0inFVres_stack_7->SetBinContent(24,74.33435);
   hNCpi0inFVres_stack_7->SetBinContent(25,47.07646);
   hNCpi0inFVres_stack_7->SetBinContent(26,11.3497);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.9617218);
   hNCpi0inFVres_stack_7->SetBinError(0,0.4200514);
   hNCpi0inFVres_stack_7->SetBinError(1,1.354982);
   hNCpi0inFVres_stack_7->SetBinError(2,2.442806);
   hNCpi0inFVres_stack_7->SetBinError(3,2.881311);
   hNCpi0inFVres_stack_7->SetBinError(4,3.073072);
   hNCpi0inFVres_stack_7->SetBinError(5,3.339222);
   hNCpi0inFVres_stack_7->SetBinError(6,3.418359);
   hNCpi0inFVres_stack_7->SetBinError(7,3.327983);
   hNCpi0inFVres_stack_7->SetBinError(8,3.480224);
   hNCpi0inFVres_stack_7->SetBinError(9,3.620409);
   hNCpi0inFVres_stack_7->SetBinError(10,3.363098);
   hNCpi0inFVres_stack_7->SetBinError(11,3.664283);
   hNCpi0inFVres_stack_7->SetBinError(12,3.36783);
   hNCpi0inFVres_stack_7->SetBinError(13,3.446772);
   hNCpi0inFVres_stack_7->SetBinError(14,3.646546);
   hNCpi0inFVres_stack_7->SetBinError(15,3.460611);
   hNCpi0inFVres_stack_7->SetBinError(16,3.57023);
   hNCpi0inFVres_stack_7->SetBinError(17,3.520622);
   hNCpi0inFVres_stack_7->SetBinError(18,3.39617);
   hNCpi0inFVres_stack_7->SetBinError(19,3.494295);
   hNCpi0inFVres_stack_7->SetBinError(20,3.329037);
   hNCpi0inFVres_stack_7->SetBinError(21,3.467563);
   hNCpi0inFVres_stack_7->SetBinError(22,3.412034);
   hNCpi0inFVres_stack_7->SetBinError(23,3.020344);
   hNCpi0inFVres_stack_7->SetBinError(24,2.77542);
   hNCpi0inFVres_stack_7->SetBinError(25,2.257192);
   hNCpi0inFVres_stack_7->SetBinError(26,1.107433);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2825829);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2927861);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.666702);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.41455);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.7236);
   hNCpi0inFVdis_stack_8->SetBinContent(4,20.11897);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.41398);
   hNCpi0inFVdis_stack_8->SetBinContent(6,22.4797);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.54984);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.39963);
   hNCpi0inFVdis_stack_8->SetBinContent(9,21.6528);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.45617);
   hNCpi0inFVdis_stack_8->SetBinContent(11,22.4204);
   hNCpi0inFVdis_stack_8->SetBinContent(12,19.4085);
   hNCpi0inFVdis_stack_8->SetBinContent(13,22.39599);
   hNCpi0inFVdis_stack_8->SetBinContent(14,21.22019);
   hNCpi0inFVdis_stack_8->SetBinContent(15,21.19113);
   hNCpi0inFVdis_stack_8->SetBinContent(16,20.95397);
   hNCpi0inFVdis_stack_8->SetBinContent(17,20.10535);
   hNCpi0inFVdis_stack_8->SetBinContent(18,22.00856);
   hNCpi0inFVdis_stack_8->SetBinContent(19,21.03801);
   hNCpi0inFVdis_stack_8->SetBinContent(20,22.33221);
   hNCpi0inFVdis_stack_8->SetBinContent(21,21.17188);
   hNCpi0inFVdis_stack_8->SetBinContent(22,18.83871);
   hNCpi0inFVdis_stack_8->SetBinContent(23,18.28106);
   hNCpi0inFVdis_stack_8->SetBinContent(24,14.48596);
   hNCpi0inFVdis_stack_8->SetBinContent(25,10.22075);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.547621);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2183542);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5717278);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.083659);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.108749);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.493163);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.30133);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.598878);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.405551);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.459905);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.463323);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.470663);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.563659);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.378547);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.552271);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.472669);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.492554);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.465892);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.441483);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.608565);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.488856);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.557361);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.529899);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.343298);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.413834);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.21366);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.083809);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3101608);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1155977);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(1,9.28126);
   hCCpi0inFV_stack_10->SetBinContent(2,17.18578);
   hCCpi0inFV_stack_10->SetBinContent(3,26.5045);
   hCCpi0inFV_stack_10->SetBinContent(4,27.43467);
   hCCpi0inFV_stack_10->SetBinContent(5,28.24611);
   hCCpi0inFV_stack_10->SetBinContent(6,26.75163);
   hCCpi0inFV_stack_10->SetBinContent(7,30.51979);
   hCCpi0inFV_stack_10->SetBinContent(8,36.11843);
   hCCpi0inFV_stack_10->SetBinContent(9,34.92073);
   hCCpi0inFV_stack_10->SetBinContent(10,33.01938);
   hCCpi0inFV_stack_10->SetBinContent(11,27.2819);
   hCCpi0inFV_stack_10->SetBinContent(12,32.70327);
   hCCpi0inFV_stack_10->SetBinContent(13,32.01514);
   hCCpi0inFV_stack_10->SetBinContent(14,35.85765);
   hCCpi0inFV_stack_10->SetBinContent(15,31.53357);
   hCCpi0inFV_stack_10->SetBinContent(16,30.3556);
   hCCpi0inFV_stack_10->SetBinContent(17,37.66957);
   hCCpi0inFV_stack_10->SetBinContent(18,36.91838);
   hCCpi0inFV_stack_10->SetBinContent(19,34.37626);
   hCCpi0inFV_stack_10->SetBinContent(20,40.0755);
   hCCpi0inFV_stack_10->SetBinContent(21,37.52786);
   hCCpi0inFV_stack_10->SetBinContent(22,34.58613);
   hCCpi0inFV_stack_10->SetBinContent(23,28.28481);
   hCCpi0inFV_stack_10->SetBinContent(24,32.84026);
   hCCpi0inFV_stack_10->SetBinContent(25,23.90804);
   hCCpi0inFV_stack_10->SetBinContent(26,8.931232);
   hCCpi0inFV_stack_10->SetBinContent(27,0.536893);
   hCCpi0inFV_stack_10->SetBinError(0,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(1,1.519706);
   hCCpi0inFV_stack_10->SetBinError(2,2.023147);
   hCCpi0inFV_stack_10->SetBinError(3,2.637676);
   hCCpi0inFV_stack_10->SetBinError(4,2.606297);
   hCCpi0inFV_stack_10->SetBinError(5,2.659142);
   hCCpi0inFV_stack_10->SetBinError(6,2.544267);
   hCCpi0inFV_stack_10->SetBinError(7,2.774401);
   hCCpi0inFV_stack_10->SetBinError(8,3.039393);
   hCCpi0inFV_stack_10->SetBinError(9,2.981482);
   hCCpi0inFV_stack_10->SetBinError(10,2.904363);
   hCCpi0inFV_stack_10->SetBinError(11,2.605102);
   hCCpi0inFV_stack_10->SetBinError(12,2.896834);
   hCCpi0inFV_stack_10->SetBinError(13,2.81001);
   hCCpi0inFV_stack_10->SetBinError(14,3.00602);
   hCCpi0inFV_stack_10->SetBinError(15,2.835809);
   hCCpi0inFV_stack_10->SetBinError(16,2.719731);
   hCCpi0inFV_stack_10->SetBinError(17,3.040032);
   hCCpi0inFV_stack_10->SetBinError(18,3.034931);
   hCCpi0inFV_stack_10->SetBinError(19,2.899629);
   hCCpi0inFV_stack_10->SetBinError(20,3.25347);
   hCCpi0inFV_stack_10->SetBinError(21,3.037653);
   hCCpi0inFV_stack_10->SetBinError(22,2.959316);
   hCCpi0inFV_stack_10->SetBinError(23,2.612892);
   hCCpi0inFV_stack_10->SetBinError(24,2.840402);
   hCCpi0inFV_stack_10->SetBinError(25,2.498483);
   hCCpi0inFV_stack_10->SetBinError(26,1.520976);
   hCCpi0inFV_stack_10->SetBinError(27,0.3929602);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(1,5.071862);
   hNCinFV_stack_11->SetBinContent(2,13.62797);
   hNCinFV_stack_11->SetBinContent(3,12.2588);
   hNCinFV_stack_11->SetBinContent(4,17.39406);
   hNCinFV_stack_11->SetBinContent(5,17.85984);
   hNCinFV_stack_11->SetBinContent(6,17.62604);
   hNCinFV_stack_11->SetBinContent(7,18.43089);
   hNCinFV_stack_11->SetBinContent(8,22.49889);
   hNCinFV_stack_11->SetBinContent(9,19.64199);
   hNCinFV_stack_11->SetBinContent(10,19.58474);
   hNCinFV_stack_11->SetBinContent(11,20.08022);
   hNCinFV_stack_11->SetBinContent(12,18.62145);
   hNCinFV_stack_11->SetBinContent(13,19.83025);
   hNCinFV_stack_11->SetBinContent(14,18.32547);
   hNCinFV_stack_11->SetBinContent(15,16.60551);
   hNCinFV_stack_11->SetBinContent(16,20.13455);
   hNCinFV_stack_11->SetBinContent(17,19.55793);
   hNCinFV_stack_11->SetBinContent(18,17.1587);
   hNCinFV_stack_11->SetBinContent(19,20.81998);
   hNCinFV_stack_11->SetBinContent(20,21.85174);
   hNCinFV_stack_11->SetBinContent(21,18.17247);
   hNCinFV_stack_11->SetBinContent(22,15.44043);
   hNCinFV_stack_11->SetBinContent(23,19.57629);
   hNCinFV_stack_11->SetBinContent(24,14.58412);
   hNCinFV_stack_11->SetBinContent(25,11.34031);
   hNCinFV_stack_11->SetBinContent(26,1.802323);
   hNCinFV_stack_11->SetBinContent(27,0.5352025);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.177351);
   hNCinFV_stack_11->SetBinError(2,1.872394);
   hNCinFV_stack_11->SetBinError(3,1.743464);
   hNCinFV_stack_11->SetBinError(4,2.095583);
   hNCinFV_stack_11->SetBinError(5,2.153536);
   hNCinFV_stack_11->SetBinError(6,2.140836);
   hNCinFV_stack_11->SetBinError(7,2.132282);
   hNCinFV_stack_11->SetBinError(8,2.394024);
   hNCinFV_stack_11->SetBinError(9,2.264611);
   hNCinFV_stack_11->SetBinError(10,2.228641);
   hNCinFV_stack_11->SetBinError(11,2.272492);
   hNCinFV_stack_11->SetBinError(12,2.186619);
   hNCinFV_stack_11->SetBinError(13,2.27241);
   hNCinFV_stack_11->SetBinError(14,2.103643);
   hNCinFV_stack_11->SetBinError(15,2.058159);
   hNCinFV_stack_11->SetBinError(16,2.219894);
   hNCinFV_stack_11->SetBinError(17,2.194797);
   hNCinFV_stack_11->SetBinError(18,2.049007);
   hNCinFV_stack_11->SetBinError(19,2.271862);
   hNCinFV_stack_11->SetBinError(20,2.305326);
   hNCinFV_stack_11->SetBinError(21,2.131418);
   hNCinFV_stack_11->SetBinError(22,2.002448);
   hNCinFV_stack_11->SetBinError(23,2.227898);
   hNCinFV_stack_11->SetBinError(24,1.830577);
   hNCinFV_stack_11->SetBinError(25,1.677048);
   hNCinFV_stack_11->SetBinError(26,0.7070809);
   hNCinFV_stack_11->SetBinError(27,0.3921167);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,1.710423);
   hnumuCCinFV_stack_12->SetBinContent(2,7.387915);
   hnumuCCinFV_stack_12->SetBinContent(3,13.42552);
   hnumuCCinFV_stack_12->SetBinContent(4,11.72473);
   hnumuCCinFV_stack_12->SetBinContent(5,12.93803);
   hnumuCCinFV_stack_12->SetBinContent(6,11.81478);
   hnumuCCinFV_stack_12->SetBinContent(7,12.30977);
   hnumuCCinFV_stack_12->SetBinContent(8,14.65527);
   hnumuCCinFV_stack_12->SetBinContent(9,13.87002);
   hnumuCCinFV_stack_12->SetBinContent(10,19.51416);
   hnumuCCinFV_stack_12->SetBinContent(11,20.0242);
   hnumuCCinFV_stack_12->SetBinContent(12,22.79498);
   hnumuCCinFV_stack_12->SetBinContent(13,20.49358);
   hnumuCCinFV_stack_12->SetBinContent(14,23.82727);
   hnumuCCinFV_stack_12->SetBinContent(15,19.38926);
   hnumuCCinFV_stack_12->SetBinContent(16,19.97236);
   hnumuCCinFV_stack_12->SetBinContent(17,23.70939);
   hnumuCCinFV_stack_12->SetBinContent(18,22.53397);
   hnumuCCinFV_stack_12->SetBinContent(19,27.10243);
   hnumuCCinFV_stack_12->SetBinContent(20,21.18908);
   hnumuCCinFV_stack_12->SetBinContent(21,22.07668);
   hnumuCCinFV_stack_12->SetBinContent(22,18.18873);
   hnumuCCinFV_stack_12->SetBinContent(23,18.36218);
   hnumuCCinFV_stack_12->SetBinContent(24,17.07047);
   hnumuCCinFV_stack_12->SetBinContent(25,16.17661);
   hnumuCCinFV_stack_12->SetBinContent(26,7.142012);
   hnumuCCinFV_stack_12->SetBinError(1,0.6196373);
   hnumuCCinFV_stack_12->SetBinError(2,1.341934);
   hnumuCCinFV_stack_12->SetBinError(3,2.320754);
   hnumuCCinFV_stack_12->SetBinError(4,1.8592);
   hnumuCCinFV_stack_12->SetBinError(5,2.098772);
   hnumuCCinFV_stack_12->SetBinError(6,1.787359);
   hnumuCCinFV_stack_12->SetBinError(7,1.862276);
   hnumuCCinFV_stack_12->SetBinError(8,2.244966);
   hnumuCCinFV_stack_12->SetBinError(9,2.228971);
   hnumuCCinFV_stack_12->SetBinError(10,2.422316);
   hnumuCCinFV_stack_12->SetBinError(11,2.433092);
   hnumuCCinFV_stack_12->SetBinError(12,2.942415);
   hnumuCCinFV_stack_12->SetBinError(13,2.529007);
   hnumuCCinFV_stack_12->SetBinError(14,2.999841);
   hnumuCCinFV_stack_12->SetBinError(15,2.320031);
   hnumuCCinFV_stack_12->SetBinError(16,2.471603);
   hnumuCCinFV_stack_12->SetBinError(17,2.888003);
   hnumuCCinFV_stack_12->SetBinError(18,2.623429);
   hnumuCCinFV_stack_12->SetBinError(19,3.348585);
   hnumuCCinFV_stack_12->SetBinError(20,2.650603);
   hnumuCCinFV_stack_12->SetBinError(21,2.448954);
   hnumuCCinFV_stack_12->SetBinError(22,2.298288);
   hnumuCCinFV_stack_12->SetBinError(23,2.297119);
   hnumuCCinFV_stack_12->SetBinError(24,2.182124);
   hnumuCCinFV_stack_12->SetBinError(25,3.346012);
   hnumuCCinFV_stack_12->SetBinError(26,2.09286);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,0.7908461);
   hnueCCinFV_stack_13->SetBinContent(4,1.991975);
   hnueCCinFV_stack_13->SetBinContent(5,0.835849);
   hnueCCinFV_stack_13->SetBinContent(6,1.330562);
   hnueCCinFV_stack_13->SetBinContent(7,1.194656);
   hnueCCinFV_stack_13->SetBinContent(8,2.59821);
   hnueCCinFV_stack_13->SetBinContent(9,3.261176);
   hnueCCinFV_stack_13->SetBinContent(10,1.70796);
   hnueCCinFV_stack_13->SetBinContent(11,1.390059);
   hnueCCinFV_stack_13->SetBinContent(12,1.381212);
   hnueCCinFV_stack_13->SetBinContent(13,3.626661);
   hnueCCinFV_stack_13->SetBinContent(14,1.03682);
   hnueCCinFV_stack_13->SetBinContent(15,2.27622);
   hnueCCinFV_stack_13->SetBinContent(16,0.6556042);
   hnueCCinFV_stack_13->SetBinContent(17,3.304661);
   hnueCCinFV_stack_13->SetBinContent(18,2.220434);
   hnueCCinFV_stack_13->SetBinContent(19,1.60352);
   hnueCCinFV_stack_13->SetBinContent(20,3.375159);
   hnueCCinFV_stack_13->SetBinContent(21,1.931042);
   hnueCCinFV_stack_13->SetBinContent(22,1.016378);
   hnueCCinFV_stack_13->SetBinContent(23,1.76857);
   hnueCCinFV_stack_13->SetBinContent(24,1.093734);
   hnueCCinFV_stack_13->SetBinContent(25,0.6057764);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.468091);
   hnueCCinFV_stack_13->SetBinError(4,1.343669);
   hnueCCinFV_stack_13->SetBinError(5,0.42006);
   hnueCCinFV_stack_13->SetBinError(6,0.6257285);
   hnueCCinFV_stack_13->SetBinError(7,0.5124127);
   hnueCCinFV_stack_13->SetBinError(8,1.013496);
   hnueCCinFV_stack_13->SetBinError(9,1.147983);
   hnueCCinFV_stack_13->SetBinError(10,0.711689);
   hnueCCinFV_stack_13->SetBinError(11,0.5255532);
   hnueCCinFV_stack_13->SetBinError(12,0.5887294);
   hnueCCinFV_stack_13->SetBinError(13,1.413126);
   hnueCCinFV_stack_13->SetBinError(14,0.4647793);
   hnueCCinFV_stack_13->SetBinError(15,0.8899302);
   hnueCCinFV_stack_13->SetBinError(16,0.3825648);
   hnueCCinFV_stack_13->SetBinError(17,1.65395);
   hnueCCinFV_stack_13->SetBinError(18,0.8439939);
   hnueCCinFV_stack_13->SetBinError(19,0.9545291);
   hnueCCinFV_stack_13->SetBinError(20,1.038082);
   hnueCCinFV_stack_13->SetBinError(21,0.703014);
   hnueCCinFV_stack_13->SetBinError(22,0.5190566);
   hnueCCinFV_stack_13->SetBinError(23,0.7525515);
   hnueCCinFV_stack_13->SetBinError(24,0.4936907);
   hnueCCinFV_stack_13->SetBinError(25,0.4539029);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__5->SetBinContent(0,8.032227);
   hmcerror__5->SetBinContent(1,82.66032);
   hmcerror__5->SetBinContent(2,142.8112);
   hmcerror__5->SetBinContent(3,184.0891);
   hmcerror__5->SetBinContent(4,207.5725);
   hmcerror__5->SetBinContent(5,222.4701);
   hmcerror__5->SetBinContent(6,232.678);
   hmcerror__5->SetBinContent(7,224.2908);
   hmcerror__5->SetBinContent(8,244.8282);
   hmcerror__5->SetBinContent(9,246.3336);
   hmcerror__5->SetBinContent(10,246.4596);
   hmcerror__5->SetBinContent(11,256.2979);
   hmcerror__5->SetBinContent(12,247.8704);
   hmcerror__5->SetBinContent(13,250.0994);
   hmcerror__5->SetBinContent(14,259.0246);
   hmcerror__5->SetBinContent(15,245.332);
   hmcerror__5->SetBinContent(16,250.5387);
   hmcerror__5->SetBinContent(17,271.8096);
   hmcerror__5->SetBinContent(18,254.3248);
   hmcerror__5->SetBinContent(19,260.7944);
   hmcerror__5->SetBinContent(20,273.1823);
   hmcerror__5->SetBinContent(21,265.5715);
   hmcerror__5->SetBinContent(22,247.0653);
   hmcerror__5->SetBinContent(23,234.3459);
   hmcerror__5->SetBinContent(24,206.417);
   hmcerror__5->SetBinContent(25,158.2426);
   hmcerror__5->SetBinContent(26,59.53427);
   hmcerror__5->SetBinContent(27,6.079189);
   hmcerror__5->SetBinError(0,1.349946);
   hmcerror__5->SetBinError(1,24.03313);
   hmcerror__5->SetBinError(2,38.6374);
   hmcerror__5->SetBinError(3,52.74873);
   hmcerror__5->SetBinError(4,53.29245);
   hmcerror__5->SetBinError(5,66.9255);
   hmcerror__5->SetBinError(6,63.99348);
   hmcerror__5->SetBinError(7,62.73436);
   hmcerror__5->SetBinError(8,70.85926);
   hmcerror__5->SetBinError(9,68.94406);
   hmcerror__5->SetBinError(10,65.14934);
   hmcerror__5->SetBinError(11,72.08594);
   hmcerror__5->SetBinError(12,69.68113);
   hmcerror__5->SetBinError(13,68.93045);
   hmcerror__5->SetBinError(14,73.20557);
   hmcerror__5->SetBinError(15,68.03305);
   hmcerror__5->SetBinError(16,69.2198);
   hmcerror__5->SetBinError(17,68.3612);
   hmcerror__5->SetBinError(18,74.55898);
   hmcerror__5->SetBinError(19,70.55148);
   hmcerror__5->SetBinError(20,69.39146);
   hmcerror__5->SetBinError(21,71.59035);
   hmcerror__5->SetBinError(22,63.06324);
   hmcerror__5->SetBinError(23,59.82224);
   hmcerror__5->SetBinError(24,52.30294);
   hmcerror__5->SetBinError(25,41.87995);
   hmcerror__5->SetBinError(26,22.63195);
   hmcerror__5->SetBinError(27,6.100054);
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
   
   Double_t _fx3005[26] = {
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
   Double_t _fy3005[26] = {
   72,
   109,
   164,
   172,
   173,
   186,
   193,
   200,
   240,
   234,
   241,
   223,
   243,
   219,
   223,
   232,
   223,
   223,
   201,
   211,
   227,
   229,
   210,
   141,
   127,
   48};
   Double_t _felx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3005[26] = {
   8.6108,
   10.44031,
   12.80625,
   13.11488,
   13.15295,
   13.63818,
   13.89244,
   14.14214,
   15.49193,
   15.29706,
   15.52417,
   14.93318,
   15.58846,
   14.79865,
   14.93318,
   15.23155,
   14.93318,
   14.93318,
   14.17745,
   14.52584,
   15.06652,
   15.13275,
   14.49138,
   11.87434,
   11.26943,
   7.0604};
   Double_t _fehx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3005[26] = {
   8.4085,
   10.44031,
   12.80625,
   13.11488,
   13.15295,
   13.63818,
   13.89244,
   14.14214,
   15.49193,
   15.29706,
   15.52417,
   14.93318,
   15.58846,
   14.79865,
   14.93318,
   15.23155,
   14.93318,
   14.93318,
   14.17745,
   14.52584,
   15.06652,
   15.13275,
   14.49138,
   11.87434,
   11.26943,
   6.8561};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,286);
   Graph_Graph3005->SetMinimum(19.17471);
   Graph_Graph3005->SetMaximum(280.3533);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4964.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 123.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 48.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 388.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2468.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  467.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 774.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 437.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[26] = {
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
   Double_t _fy3006[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3006[26] = {
   0.2907457,
   0.2705489,
   0.2865391,
   0.2567414,
   0.3008292,
   0.2750302,
   0.279701,
   0.2894244,
   0.2798809,
   0.2643409,
   0.2812584,
   0.2811193,
   0.2756122,
   0.2826202,
   0.2773102,
   0.2762839,
   0.251504,
   0.2931644,
   0.2705253,
   0.2540116,
   0.2695709,
   0.2552493,
   0.2552732,
   0.2533848,
   0.2646566,
   0.38015};
   Double_t _fehx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3006[26] = {
   0.2907457,
   0.2705489,
   0.2865391,
   0.2567414,
   0.3008292,
   0.2750302,
   0.279701,
   0.2894244,
   0.2798809,
   0.2643409,
   0.2812584,
   0.2811193,
   0.2756122,
   0.2826202,
   0.2773102,
   0.2762839,
   0.251504,
   0.2931644,
   0.2705253,
   0.2540116,
   0.2695709,
   0.2552493,
   0.2552732,
   0.2533848,
   0.2646566,
   0.38015};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,286);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3007[26] = {
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
   Double_t _fy3007[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3007[26] = {
   0.2233629,
   0.2282565,
   0.237125,
   0.2378321,
   0.2589976,
   0.2571099,
   0.2618038,
   0.2666855,
   0.2607818,
   0.2465532,
   0.2672203,
   0.2635234,
   0.2471472,
   0.2613862,
   0.2558725,
   0.2523288,
   0.2352349,
   0.2555154,
   0.2512314,
   0.234953,
   0.2403242,
   0.2370838,
   0.2265678,
   0.2205498,
   0.2135276,
   0.2286023};
   Double_t _fehx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3007[26] = {
   0.2233629,
   0.2282565,
   0.237125,
   0.2378321,
   0.2589976,
   0.2571099,
   0.2618038,
   0.2666855,
   0.2607818,
   0.2465532,
   0.2672203,
   0.2635234,
   0.2471472,
   0.2613862,
   0.2558725,
   0.2523288,
   0.2352349,
   0.2555154,
   0.2512314,
   0.234953,
   0.2403242,
   0.2370838,
   0.2265678,
   0.2205498,
   0.2135276,
   0.2286023};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,286);
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
   
   Double_t _fx3008[26] = {
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
   Double_t _fy3008[26] = {
   0.8710346,
   0.7632455,
   0.8908729,
   0.8286263,
   0.7776325,
   0.7993879,
   0.8604901,
   0.8168994,
   0.9742885,
   0.9494457,
   0.940312,
   0.8996638,
   0.9716137,
   0.8454797,
   0.9089725,
   0.9260048,
   0.8204271,
   0.8768314,
   0.770722,
   0.7723781,
   0.8547603,
   0.9268804,
   0.8961111,
   0.6830831,
   0.8025653,
   0.8062583};
   Double_t _felx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3008[26] = {
   0.1041709,
   0.07310566,
   0.06956549,
   0.06318216,
   0.0591223,
   0.05861397,
   0.06193943,
   0.05776351,
   0.06289005,
   0.06206721,
   0.06057082,
   0.06024595,
   0.06232905,
   0.05713222,
   0.0608693,
   0.06079519,
   0.05493987,
   0.05871697,
   0.05436254,
   0.0531727,
   0.05673243,
   0.06124998,
   0.06183754,
   0.05752598,
   0.07121615,
   0.1185939};
   Double_t _fehx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3008[26] = {
   0.1017235,
   0.07310566,
   0.06956549,
   0.06318216,
   0.0591223,
   0.05861397,
   0.06193943,
   0.05776351,
   0.06289005,
   0.06206721,
   0.06057082,
   0.06024595,
   0.06232905,
   0.05713222,
   0.0608693,
   0.06079519,
   0.05493987,
   0.05871697,
   0.05436254,
   0.0531727,
   0.05673243,
   0.06124998,
   0.06183754,
   0.05752598,
   0.07121615,
   0.1151622};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,286);
   Graph_Graph3008->SetMinimum(0.584395);
   Graph_Graph3008->SetMaximum(1.078341);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_reco_nuvtxX_all",26,0,260);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

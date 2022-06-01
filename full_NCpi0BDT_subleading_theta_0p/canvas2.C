#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue May 31 16:56:48 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-27.69231,-4.652248,203.0769,489.9552);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hmc__4->SetBinContent(1,34.45139);
   hmc__4->SetBinContent(2,98.49438);
   hmc__4->SetBinContent(3,144.6398);
   hmc__4->SetBinContent(4,199.1721);
   hmc__4->SetBinContent(5,210.8503);
   hmc__4->SetBinContent(6,221.3657);
   hmc__4->SetBinContent(7,223.2562);
   hmc__4->SetBinContent(8,232.6124);
   hmc__4->SetBinContent(9,216.1267);
   hmc__4->SetBinContent(10,197.8387);
   hmc__4->SetBinContent(11,210.8596);
   hmc__4->SetBinContent(12,190.9672);
   hmc__4->SetBinContent(13,175.1365);
   hmc__4->SetBinContent(14,153.0918);
   hmc__4->SetBinContent(15,161.1333);
   hmc__4->SetBinContent(16,131.9057);
   hmc__4->SetBinContent(17,119.4951);
   hmc__4->SetBinContent(18,112.5449);
   hmc__4->SetBinContent(19,101.1696);
   hmc__4->SetBinContent(20,103.9086);
   hmc__4->SetBinContent(21,80.02598);
   hmc__4->SetBinContent(22,67.21846);
   hmc__4->SetBinContent(23,40.83221);
   hmc__4->SetBinContent(24,16.50051);
   hmc__4->SetBinError(1,8.837405);
   hmc__4->SetBinError(2,23.35645);
   hmc__4->SetBinError(3,35.12928);
   hmc__4->SetBinError(4,45.68853);
   hmc__4->SetBinError(5,49.84666);
   hmc__4->SetBinError(6,55.0699);
   hmc__4->SetBinError(7,55.91499);
   hmc__4->SetBinError(8,59.08371);
   hmc__4->SetBinError(9,53.44565);
   hmc__4->SetBinError(10,50.78672);
   hmc__4->SetBinError(11,53.74161);
   hmc__4->SetBinError(12,46.28872);
   hmc__4->SetBinError(13,42.66066);
   hmc__4->SetBinError(14,34.36118);
   hmc__4->SetBinError(15,38.77536);
   hmc__4->SetBinError(16,30.1537);
   hmc__4->SetBinError(17,27.75479);
   hmc__4->SetBinError(18,26.89912);
   hmc__4->SetBinError(19,23.20212);
   hmc__4->SetBinError(20,23.38267);
   hmc__4->SetBinError(21,24.92772);
   hmc__4->SetBinError(22,15.43535);
   hmc__4->SetBinError(23,8.943907);
   hmc__4->SetBinError(24,5.266954);
   hmc__4->SetBinError(25,0.4212968);
   hmc__4->SetMinimum(-4.652248);
   hmc__4->SetMaximum(465.2248);
   hmc__4->SetEntries(3396.741);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,180);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(244.243);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(2,0.3917402);
   hbadmatch_stack_1->SetBinContent(3,2.345055);
   hbadmatch_stack_1->SetBinContent(4,4.237571);
   hbadmatch_stack_1->SetBinContent(5,2.559769);
   hbadmatch_stack_1->SetBinContent(6,5.111362);
   hbadmatch_stack_1->SetBinContent(7,4.499334);
   hbadmatch_stack_1->SetBinContent(8,6.560889);
   hbadmatch_stack_1->SetBinContent(9,5.399689);
   hbadmatch_stack_1->SetBinContent(10,6.432764);
   hbadmatch_stack_1->SetBinContent(11,7.299431);
   hbadmatch_stack_1->SetBinContent(12,4.629392);
   hbadmatch_stack_1->SetBinContent(13,4.206311);
   hbadmatch_stack_1->SetBinContent(14,3.092617);
   hbadmatch_stack_1->SetBinContent(15,5.822399);
   hbadmatch_stack_1->SetBinContent(16,3.138713);
   hbadmatch_stack_1->SetBinContent(17,2.296112);
   hbadmatch_stack_1->SetBinContent(18,2.470745);
   hbadmatch_stack_1->SetBinContent(19,2.815269);
   hbadmatch_stack_1->SetBinContent(20,2.292393);
   hbadmatch_stack_1->SetBinContent(21,3.114996);
   hbadmatch_stack_1->SetBinContent(22,1.322064);
   hbadmatch_stack_1->SetBinContent(23,1.004567);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.2770047);
   hbadmatch_stack_1->SetBinError(3,0.9562939);
   hbadmatch_stack_1->SetBinError(4,1.0649);
   hbadmatch_stack_1->SetBinError(5,0.7517819);
   hbadmatch_stack_1->SetBinError(6,1.184321);
   hbadmatch_stack_1->SetBinError(7,1.067849);
   hbadmatch_stack_1->SetBinError(8,1.336711);
   hbadmatch_stack_1->SetBinError(9,1.224944);
   hbadmatch_stack_1->SetBinError(10,1.647017);
   hbadmatch_stack_1->SetBinError(11,1.421669);
   hbadmatch_stack_1->SetBinError(12,1.101552);
   hbadmatch_stack_1->SetBinError(13,1.059972);
   hbadmatch_stack_1->SetBinError(14,1.004486);
   hbadmatch_stack_1->SetBinError(15,2.229606);
   hbadmatch_stack_1->SetBinError(16,0.9469239);
   hbadmatch_stack_1->SetBinError(17,0.8089717);
   hbadmatch_stack_1->SetBinError(18,0.7668342);
   hbadmatch_stack_1->SetBinError(19,0.8402141);
   hbadmatch_stack_1->SetBinError(20,0.7467897);
   hbadmatch_stack_1->SetBinError(21,0.9685162);
   hbadmatch_stack_1->SetBinError(22,0.5554667);
   hbadmatch_stack_1->SetBinError(23,0.4497336);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hext_stack_2->SetBinContent(1,4.110651);
   hext_stack_2->SetBinContent(2,10.14173);
   hext_stack_2->SetBinContent(3,10.98806);
   hext_stack_2->SetBinContent(4,14.11393);
   hext_stack_2->SetBinContent(5,12.47601);
   hext_stack_2->SetBinContent(6,12.79322);
   hext_stack_2->SetBinContent(7,18.07177);
   hext_stack_2->SetBinContent(8,17.94491);
   hext_stack_2->SetBinContent(9,17.43734);
   hext_stack_2->SetBinContent(10,11.02838);
   hext_stack_2->SetBinContent(11,12.46442);
   hext_stack_2->SetBinContent(12,16.15688);
   hext_stack_2->SetBinContent(13,15.50809);
   hext_stack_2->SetBinContent(14,15.4187);
   hext_stack_2->SetBinContent(15,15.40157);
   hext_stack_2->SetBinContent(16,11.09899);
   hext_stack_2->SetBinContent(17,9.138242);
   hext_stack_2->SetBinContent(18,9.843287);
   hext_stack_2->SetBinContent(19,6.564605);
   hext_stack_2->SetBinContent(20,8.813845);
   hext_stack_2->SetBinContent(21,8.388476);
   hext_stack_2->SetBinContent(22,9.015729);
   hext_stack_2->SetBinContent(23,6.594905);
   hext_stack_2->SetBinContent(24,3.379654);
   hext_stack_2->SetBinError(1,1.499292);
   hext_stack_2->SetBinError(2,2.36551);
   hext_stack_2->SetBinError(3,2.292727);
   hext_stack_2->SetBinError(4,2.693483);
   hext_stack_2->SetBinError(5,2.308512);
   hext_stack_2->SetBinError(6,2.373955);
   hext_stack_2->SetBinError(7,3.05229);
   hext_stack_2->SetBinError(8,2.943082);
   hext_stack_2->SetBinError(9,2.950187);
   hext_stack_2->SetBinError(10,2.09421);
   hext_stack_2->SetBinError(11,2.32278);
   hext_stack_2->SetBinError(12,2.746624);
   hext_stack_2->SetBinError(13,2.708039);
   hext_stack_2->SetBinError(14,2.733969);
   hext_stack_2->SetBinError(15,2.865888);
   hext_stack_2->SetBinError(16,2.124119);
   hext_stack_2->SetBinError(17,2.069513);
   hext_stack_2->SetBinError(18,2.240964);
   hext_stack_2->SetBinError(19,1.684461);
   hext_stack_2->SetBinError(20,2.04393);
   hext_stack_2->SetBinError(21,2.068721);
   hext_stack_2->SetBinError(22,2.256918);
   hext_stack_2->SetBinError(23,1.958178);
   hext_stack_2->SetBinError(24,1.406172);
   hext_stack_2->SetEntries(621);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hdirt_stack_3->SetBinContent(2,0.3569671);
   hdirt_stack_3->SetBinContent(4,0.5134285);
   hdirt_stack_3->SetBinContent(5,0.9907839);
   hdirt_stack_3->SetBinContent(6,1.122146);
   hdirt_stack_3->SetBinContent(7,1.098198);
   hdirt_stack_3->SetBinContent(8,1.966002);
   hdirt_stack_3->SetBinContent(9,1.038022);
   hdirt_stack_3->SetBinContent(10,0.5758626);
   hdirt_stack_3->SetBinContent(11,1.376509);
   hdirt_stack_3->SetBinContent(12,0.3775263);
   hdirt_stack_3->SetBinContent(14,1.060553);
   hdirt_stack_3->SetBinContent(15,0.402661);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.0365);
   hdirt_stack_3->SetBinContent(18,0.7577645);
   hdirt_stack_3->SetBinContent(19,0.9411583);
   hdirt_stack_3->SetBinContent(20,1.044521);
   hdirt_stack_3->SetBinContent(22,0.7670878);
   hdirt_stack_3->SetBinContent(23,0.2761429);
   hdirt_stack_3->SetBinError(2,0.258803);
   hdirt_stack_3->SetBinError(4,0.3024222);
   hdirt_stack_3->SetBinError(5,0.5357742);
   hdirt_stack_3->SetBinError(6,0.5200476);
   hdirt_stack_3->SetBinError(7,0.5036152);
   hdirt_stack_3->SetBinError(8,1.07759);
   hdirt_stack_3->SetBinError(9,0.5187105);
   hdirt_stack_3->SetBinError(10,0.3389606);
   hdirt_stack_3->SetBinError(11,0.6272127);
   hdirt_stack_3->SetBinError(12,0.2703313);
   hdirt_stack_3->SetBinError(14,0.5513393);
   hdirt_stack_3->SetBinError(15,0.2961962);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.5273258);
   hdirt_stack_3->SetBinError(18,0.4770929);
   hdirt_stack_3->SetBinError(19,0.4873249);
   hdirt_stack_3->SetBinError(20,0.5625407);
   hdirt_stack_3->SetBinError(22,0.5461925);
   hdirt_stack_3->SetBinError(23,0.1952625);
   hdirt_stack_3->SetEntries(69);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,2.250697);
   houtFV_stack_4->SetBinContent(2,5.908596);
   houtFV_stack_4->SetBinContent(3,8.397429);
   houtFV_stack_4->SetBinContent(4,14.59986);
   houtFV_stack_4->SetBinContent(5,17.53074);
   houtFV_stack_4->SetBinContent(6,15.08719);
   houtFV_stack_4->SetBinContent(7,11.39188);
   houtFV_stack_4->SetBinContent(8,14.48382);
   houtFV_stack_4->SetBinContent(9,11.59849);
   houtFV_stack_4->SetBinContent(10,10.49592);
   houtFV_stack_4->SetBinContent(11,12.37733);
   houtFV_stack_4->SetBinContent(12,8.182709);
   houtFV_stack_4->SetBinContent(13,10.66147);
   houtFV_stack_4->SetBinContent(14,6.15159);
   houtFV_stack_4->SetBinContent(15,9.335743);
   houtFV_stack_4->SetBinContent(16,8.138441);
   houtFV_stack_4->SetBinContent(17,6.198654);
   houtFV_stack_4->SetBinContent(18,9.686275);
   houtFV_stack_4->SetBinContent(19,7.087384);
   houtFV_stack_4->SetBinContent(20,9.849256);
   houtFV_stack_4->SetBinContent(21,4.768312);
   houtFV_stack_4->SetBinContent(22,4.304679);
   houtFV_stack_4->SetBinContent(23,5.843573);
   houtFV_stack_4->SetBinContent(24,2.037842);
   houtFV_stack_4->SetBinError(1,0.7346377);
   houtFV_stack_4->SetBinError(2,1.225272);
   houtFV_stack_4->SetBinError(3,1.427137);
   houtFV_stack_4->SetBinError(4,1.939288);
   houtFV_stack_4->SetBinError(5,2.135846);
   houtFV_stack_4->SetBinError(6,2.013538);
   houtFV_stack_4->SetBinError(7,1.665383);
   houtFV_stack_4->SetBinError(8,1.857345);
   houtFV_stack_4->SetBinError(9,1.696454);
   houtFV_stack_4->SetBinError(10,1.658956);
   houtFV_stack_4->SetBinError(11,1.791293);
   houtFV_stack_4->SetBinError(12,1.414538);
   houtFV_stack_4->SetBinError(13,1.652993);
   houtFV_stack_4->SetBinError(14,1.166397);
   houtFV_stack_4->SetBinError(15,1.517491);
   houtFV_stack_4->SetBinError(16,1.398431);
   houtFV_stack_4->SetBinError(17,1.248685);
   houtFV_stack_4->SetBinError(18,1.605207);
   houtFV_stack_4->SetBinError(19,1.294213);
   houtFV_stack_4->SetBinError(20,1.593178);
   houtFV_stack_4->SetBinError(21,1.042592);
   houtFV_stack_4->SetBinError(22,1.020141);
   houtFV_stack_4->SetBinError(23,1.298059);
   houtFV_stack_4->SetBinError(24,0.7450211);
   houtFV_stack_4->SetEntries(931);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6699361);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9323258);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2901718);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.270742);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,17.08368);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,49.78429);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,78.38969);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,97.33121);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,108.0171);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,118.8289);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,123.5042);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,120.7602);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,115.9042);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,107.455);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,105.7117);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,103.4291);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,89.58643);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,78.70303);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,79.11925);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,66.31872);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,60.35593);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,58.88304);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,52.14581);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,50.92186);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,38.85039);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,25.62291);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,13.37461);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,6.398787);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.410849);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.368497);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.92224);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.224602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.372537);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.585788);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.687568);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.640947);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.524967);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.367445);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.39329);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.355152);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,3.101354);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.826486);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.937917);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.605065);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.563131);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.566254);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.364165);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.356498);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.984401);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.584756);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,1.16077);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.8566243);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hCCpi0inFV_stack_7->SetBinContent(1,5.662467);
   hCCpi0inFV_stack_7->SetBinContent(2,15.50013);
   hCCpi0inFV_stack_7->SetBinContent(3,26.3567);
   hCCpi0inFV_stack_7->SetBinContent(4,34.39523);
   hCCpi0inFV_stack_7->SetBinContent(5,35.83459);
   hCCpi0inFV_stack_7->SetBinContent(6,41.39333);
   hCCpi0inFV_stack_7->SetBinContent(7,34.33063);
   hCCpi0inFV_stack_7->SetBinContent(8,41.40725);
   hCCpi0inFV_stack_7->SetBinContent(9,37.86265);
   hCCpi0inFV_stack_7->SetBinContent(10,32.47574);
   hCCpi0inFV_stack_7->SetBinContent(11,31.64347);
   hCCpi0inFV_stack_7->SetBinContent(12,24.56125);
   hCCpi0inFV_stack_7->SetBinContent(13,24.55129);
   hCCpi0inFV_stack_7->SetBinContent(14,26.34928);
   hCCpi0inFV_stack_7->SetBinContent(15,23.93737);
   hCCpi0inFV_stack_7->SetBinContent(16,20.99683);
   hCCpi0inFV_stack_7->SetBinContent(17,21.77249);
   hCCpi0inFV_stack_7->SetBinContent(18,20.35584);
   hCCpi0inFV_stack_7->SetBinContent(19,17.37425);
   hCCpi0inFV_stack_7->SetBinContent(20,14.67016);
   hCCpi0inFV_stack_7->SetBinContent(21,14.01308);
   hCCpi0inFV_stack_7->SetBinContent(22,13.2413);
   hCCpi0inFV_stack_7->SetBinContent(23,5.949376);
   hCCpi0inFV_stack_7->SetBinContent(24,2.340906);
   hCCpi0inFV_stack_7->SetBinError(1,1.168145);
   hCCpi0inFV_stack_7->SetBinError(2,1.942725);
   hCCpi0inFV_stack_7->SetBinError(3,2.548186);
   hCCpi0inFV_stack_7->SetBinError(4,2.968178);
   hCCpi0inFV_stack_7->SetBinError(5,3.06641);
   hCCpi0inFV_stack_7->SetBinError(6,3.184745);
   hCCpi0inFV_stack_7->SetBinError(7,2.968036);
   hCCpi0inFV_stack_7->SetBinError(8,3.238758);
   hCCpi0inFV_stack_7->SetBinError(9,3.104071);
   hCCpi0inFV_stack_7->SetBinError(10,2.914517);
   hCCpi0inFV_stack_7->SetBinError(11,2.84399);
   hCCpi0inFV_stack_7->SetBinError(12,2.471237);
   hCCpi0inFV_stack_7->SetBinError(13,2.440346);
   hCCpi0inFV_stack_7->SetBinError(14,2.59573);
   hCCpi0inFV_stack_7->SetBinError(15,2.439565);
   hCCpi0inFV_stack_7->SetBinError(16,2.268659);
   hCCpi0inFV_stack_7->SetBinError(17,2.312945);
   hCCpi0inFV_stack_7->SetBinError(18,2.288696);
   hCCpi0inFV_stack_7->SetBinError(19,2.11362);
   hCCpi0inFV_stack_7->SetBinError(20,1.840675);
   hCCpi0inFV_stack_7->SetBinError(21,1.855291);
   hCCpi0inFV_stack_7->SetBinError(22,1.852327);
   hCCpi0inFV_stack_7->SetBinError(23,1.269502);
   hCCpi0inFV_stack_7->SetBinError(24,0.8093475);
   hCCpi0inFV_stack_7->SetEntries(2425);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hNCinFV_stack_8->SetBinContent(1,0.7319179);
   hNCinFV_stack_8->SetBinContent(2,4.199863);
   hNCinFV_stack_8->SetBinContent(3,6.798583);
   hNCinFV_stack_8->SetBinContent(4,10.30517);
   hNCinFV_stack_8->SetBinContent(5,8.204094);
   hNCinFV_stack_8->SetBinContent(6,7.180788);
   hNCinFV_stack_8->SetBinContent(7,9.526617);
   hNCinFV_stack_8->SetBinContent(8,9.294785);
   hNCinFV_stack_8->SetBinContent(9,6.990226);
   hNCinFV_stack_8->SetBinContent(10,8.699567);
   hNCinFV_stack_8->SetBinContent(11,12.78785);
   hNCinFV_stack_8->SetBinContent(12,8.554414);
   hNCinFV_stack_8->SetBinContent(13,8.160983);
   hNCinFV_stack_8->SetBinContent(14,7.868988);
   hNCinFV_stack_8->SetBinContent(15,8.996027);
   hNCinFV_stack_8->SetBinContent(16,8.002914);
   hNCinFV_stack_8->SetBinContent(17,7.561302);
   hNCinFV_stack_8->SetBinContent(18,4.049639);
   hNCinFV_stack_8->SetBinContent(19,3.761024);
   hNCinFV_stack_8->SetBinContent(20,4.346706);
   hNCinFV_stack_8->SetBinContent(21,5.083088);
   hNCinFV_stack_8->SetBinContent(22,4.148301);
   hNCinFV_stack_8->SetBinContent(23,1.800632);
   hNCinFV_stack_8->SetBinContent(24,0.5901461);
   hNCinFV_stack_8->SetBinError(1,0.438694);
   hNCinFV_stack_8->SetBinError(2,1.057357);
   hNCinFV_stack_8->SetBinError(3,1.256225);
   hNCinFV_stack_8->SetBinError(4,1.630336);
   hNCinFV_stack_8->SetBinError(5,1.413983);
   hNCinFV_stack_8->SetBinError(6,1.359959);
   hNCinFV_stack_8->SetBinError(7,1.53332);
   hNCinFV_stack_8->SetBinError(8,1.521448);
   hNCinFV_stack_8->SetBinError(9,1.270753);
   hNCinFV_stack_8->SetBinError(10,1.482136);
   hNCinFV_stack_8->SetBinError(11,1.841032);
   hNCinFV_stack_8->SetBinError(12,1.455693);
   hNCinFV_stack_8->SetBinError(13,1.428862);
   hNCinFV_stack_8->SetBinError(14,1.373176);
   hNCinFV_stack_8->SetBinError(15,1.468374);
   hNCinFV_stack_8->SetBinError(16,1.468772);
   hNCinFV_stack_8->SetBinError(17,1.456094);
   hNCinFV_stack_8->SetBinError(18,1.018986);
   hNCinFV_stack_8->SetBinError(19,0.9400115);
   hNCinFV_stack_8->SetBinError(20,1.093779);
   hNCinFV_stack_8->SetBinError(21,1.091863);
   hNCinFV_stack_8->SetBinError(22,1.075636);
   hNCinFV_stack_8->SetBinError(23,0.7066125);
   hNCinFV_stack_8->SetBinError(24,0.340721);
   hNCinFV_stack_8->SetEntries(671);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hnumuCCinFV_stack_9->SetBinContent(1,2.357362);
   hnumuCCinFV_stack_9->SetBinContent(2,10.00291);
   hnumuCCinFV_stack_9->SetBinContent(3,9.570385);
   hnumuCCinFV_stack_9->SetBinContent(4,20.99158);
   hnumuCCinFV_stack_9->SetBinContent(5,22.12893);
   hnumuCCinFV_stack_9->SetBinContent(6,18.21298);
   hnumuCCinFV_stack_9->SetBinContent(7,19.54464);
   hnumuCCinFV_stack_9->SetBinContent(8,19.35146);
   hnumuCCinFV_stack_9->SetBinContent(9,19.29371);
   hnumuCCinFV_stack_9->SetBinContent(10,18.51123);
   hnumuCCinFV_stack_9->SetBinContent(11,26.97429);
   hnumuCCinFV_stack_9->SetBinContent(12,24.7244);
   hnumuCCinFV_stack_9->SetBinContent(13,22.04225);
   hnumuCCinFV_stack_9->SetBinContent(14,12.94886);
   hnumuCCinFV_stack_9->SetBinContent(15,17.67078);
   hnumuCCinFV_stack_9->SetBinContent(16,13.53903);
   hnumuCCinFV_stack_9->SetBinContent(17,8.971442);
   hnumuCCinFV_stack_9->SetBinContent(18,6.442511);
   hnumuCCinFV_stack_9->SetBinContent(19,9.697593);
   hnumuCCinFV_stack_9->SetBinContent(20,11.22349);
   hnumuCCinFV_stack_9->SetBinContent(21,5.751847);
   hnumuCCinFV_stack_9->SetBinContent(22,8.545557);
   hnumuCCinFV_stack_9->SetBinContent(23,5.596211);
   hnumuCCinFV_stack_9->SetBinContent(24,1.528564);
   hnumuCCinFV_stack_9->SetBinError(1,0.7664399);
   hnumuCCinFV_stack_9->SetBinError(2,1.731624);
   hnumuCCinFV_stack_9->SetBinError(3,1.863043);
   hnumuCCinFV_stack_9->SetBinError(4,2.980982);
   hnumuCCinFV_stack_9->SetBinError(5,3.02959);
   hnumuCCinFV_stack_9->SetBinError(6,3.484977);
   hnumuCCinFV_stack_9->SetBinError(7,2.302727);
   hnumuCCinFV_stack_9->SetBinError(8,2.382248);
   hnumuCCinFV_stack_9->SetBinError(9,2.545386);
   hnumuCCinFV_stack_9->SetBinError(10,2.367361);
   hnumuCCinFV_stack_9->SetBinError(11,3.223464);
   hnumuCCinFV_stack_9->SetBinError(12,2.765249);
   hnumuCCinFV_stack_9->SetBinError(13,2.886969);
   hnumuCCinFV_stack_9->SetBinError(14,2.059113);
   hnumuCCinFV_stack_9->SetBinError(15,2.53061);
   hnumuCCinFV_stack_9->SetBinError(16,2.033804);
   hnumuCCinFV_stack_9->SetBinError(17,1.801764);
   hnumuCCinFV_stack_9->SetBinError(18,1.373816);
   hnumuCCinFV_stack_9->SetBinError(19,1.651192);
   hnumuCCinFV_stack_9->SetBinError(20,1.887084);
   hnumuCCinFV_stack_9->SetBinError(21,1.298911);
   hnumuCCinFV_stack_9->SetBinError(22,1.854555);
   hnumuCCinFV_stack_9->SetBinError(23,1.333715);
   hnumuCCinFV_stack_9->SetBinError(24,0.6631494);
   hnumuCCinFV_stack_9->SetEntries(1290);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hnueCCinFV_stack_10->SetBinContent(1,1.802833);
   hnueCCinFV_stack_10->SetBinContent(2,1.747976);
   hnueCCinFV_stack_10->SetBinContent(3,1.123984);
   hnueCCinFV_stack_10->SetBinContent(4,1.751811);
   hnueCCinFV_stack_10->SetBinContent(5,2.383188);
   hnueCCinFV_stack_10->SetBinContent(6,1.119817);
   hnueCCinFV_stack_10->SetBinContent(7,0.9269427);
   hnueCCinFV_stack_10->SetBinContent(8,0.536893);
   hnueCCinFV_stack_10->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_10->SetBinContent(10,1.913882);
   hnueCCinFV_stack_10->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(12,0.2542337);
   hnueCCinFV_stack_10->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(14,1.27568);
   hnueCCinFV_stack_10->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(17,2.164385);
   hnueCCinFV_stack_10->SetBinContent(19,0.5878536);
   hnueCCinFV_stack_10->SetBinContent(20,0.6905718);
   hnueCCinFV_stack_10->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_10->SetBinError(1,0.7129175);
   hnueCCinFV_stack_10->SetBinError(2,0.6853088);
   hnueCCinFV_stack_10->SetBinError(3,0.6021119);
   hnueCCinFV_stack_10->SetBinError(4,0.742778);
   hnueCCinFV_stack_10->SetBinError(5,1.262462);
   hnueCCinFV_stack_10->SetBinError(6,0.5790761);
   hnueCCinFV_stack_10->SetBinError(7,0.4800908);
   hnueCCinFV_stack_10->SetBinError(8,0.3929602);
   hnueCCinFV_stack_10->SetBinError(9,0.2781975);
   hnueCCinFV_stack_10->SetBinError(10,0.7414176);
   hnueCCinFV_stack_10->SetBinError(11,0.1967154);
   hnueCCinFV_stack_10->SetBinError(12,0.2538662);
   hnueCCinFV_stack_10->SetBinError(13,0.2770047);
   hnueCCinFV_stack_10->SetBinError(14,0.5803126);
   hnueCCinFV_stack_10->SetBinError(15,0.2770047);
   hnueCCinFV_stack_10->SetBinError(16,0.3401776);
   hnueCCinFV_stack_10->SetBinError(17,1.678565);
   hnueCCinFV_stack_10->SetBinError(19,0.42079);
   hnueCCinFV_stack_10->SetBinError(20,0.4008118);
   hnueCCinFV_stack_10->SetBinError(22,0.1950249);
   hnueCCinFV_stack_10->SetBinError(23,0.1967154);
   hnueCCinFV_stack_10->SetEntries(72);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);
   hmcerror__5->SetBinContent(1,34.45139);
   hmcerror__5->SetBinContent(2,98.49438);
   hmcerror__5->SetBinContent(3,144.6398);
   hmcerror__5->SetBinContent(4,199.1721);
   hmcerror__5->SetBinContent(5,210.8503);
   hmcerror__5->SetBinContent(6,221.3657);
   hmcerror__5->SetBinContent(7,223.2562);
   hmcerror__5->SetBinContent(8,232.6124);
   hmcerror__5->SetBinContent(9,216.1267);
   hmcerror__5->SetBinContent(10,197.8387);
   hmcerror__5->SetBinContent(11,210.8596);
   hmcerror__5->SetBinContent(12,190.9672);
   hmcerror__5->SetBinContent(13,175.1365);
   hmcerror__5->SetBinContent(14,153.0918);
   hmcerror__5->SetBinContent(15,161.1333);
   hmcerror__5->SetBinContent(16,131.9057);
   hmcerror__5->SetBinContent(17,119.4951);
   hmcerror__5->SetBinContent(18,112.5449);
   hmcerror__5->SetBinContent(19,101.1696);
   hmcerror__5->SetBinContent(20,103.9086);
   hmcerror__5->SetBinContent(21,80.02598);
   hmcerror__5->SetBinContent(22,67.21846);
   hmcerror__5->SetBinContent(23,40.83221);
   hmcerror__5->SetBinContent(24,16.50051);
   hmcerror__5->SetBinError(1,8.837405);
   hmcerror__5->SetBinError(2,23.35645);
   hmcerror__5->SetBinError(3,35.12928);
   hmcerror__5->SetBinError(4,45.68853);
   hmcerror__5->SetBinError(5,49.84666);
   hmcerror__5->SetBinError(6,55.0699);
   hmcerror__5->SetBinError(7,55.91499);
   hmcerror__5->SetBinError(8,59.08371);
   hmcerror__5->SetBinError(9,53.44565);
   hmcerror__5->SetBinError(10,50.78672);
   hmcerror__5->SetBinError(11,53.74161);
   hmcerror__5->SetBinError(12,46.28872);
   hmcerror__5->SetBinError(13,42.66066);
   hmcerror__5->SetBinError(14,34.36118);
   hmcerror__5->SetBinError(15,38.77536);
   hmcerror__5->SetBinError(16,30.1537);
   hmcerror__5->SetBinError(17,27.75479);
   hmcerror__5->SetBinError(18,26.89912);
   hmcerror__5->SetBinError(19,23.20212);
   hmcerror__5->SetBinError(20,23.38267);
   hmcerror__5->SetBinError(21,24.92772);
   hmcerror__5->SetBinError(22,15.43535);
   hmcerror__5->SetBinError(23,8.943907);
   hmcerror__5->SetBinError(24,5.266954);
   hmcerror__5->SetBinError(25,0.4212968);
   hmcerror__5->SetEntries(3396.741);

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
   
   Double_t _fx3005[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3005[24] = {
   33,
   93,
   133,
   146,
   167,
   162,
   174,
   154,
   139,
   142,
   135,
   151,
   130,
   126,
   122,
   95,
   81,
   99,
   89,
   86,
   67,
   53,
   35,
   9};
   Double_t _felx3005[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3005[24] = {
   5.8847,
   9.7658,
   11.53256,
   12.08305,
   12.92285,
   12.72792,
   13.19091,
   12.40967,
   11.78983,
   11.91638,
   11.61895,
   12.28821,
   11.40175,
   11.22497,
   11.04536,
   9.8686,
   9.1239,
   10.0712,
   9.5566,
   9.3967,
   8.3119,
   7.4105,
   6.0548,
   3.19354};
   Double_t _fehx3005[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3005[24] = {
   5.6776,
   9.564,
   11.53256,
   12.08305,
   12.92285,
   12.72792,
   13.19091,
   12.40967,
   11.78983,
   11.91638,
   11.61895,
   12.28821,
   11.40175,
   11.22497,
   11.04536,
   9.667,
   8.9221,
   9.87,
   9.3552,
   9.1951,
   8.1094,
   7.2068,
   5.8483,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,198);
   Graph_Graph3005->SetMinimum(5.225814);
   Graph_Graph3005->SetMaximum(205.3294);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1766.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 567.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-27.72,-0.5333333,203.28,2.133333);
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
   
   Double_t _fx3006[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3006[24] = {
   0.2565181,
   0.2371349,
   0.2428742,
   0.2293922,
   0.2364078,
   0.2487734,
   0.2504521,
   0.2540007,
   0.2472885,
   0.2567077,
   0.2548692,
   0.242391,
   0.2435853,
   0.2244482,
   0.2406414,
   0.2286003,
   0.2322672,
   0.2390079,
   0.2293389,
   0.2250311,
   0.3114954,
   0.2296296,
   0.2190405,
   0.3191993};
   Double_t _fehx3006[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3006[24] = {
   0.2565181,
   0.2371349,
   0.2428742,
   0.2293922,
   0.2364078,
   0.2487734,
   0.2504521,
   0.2540007,
   0.2472885,
   0.2567077,
   0.2548692,
   0.242391,
   0.2435853,
   0.2244482,
   0.2406414,
   0.2286003,
   0.2322672,
   0.2390079,
   0.2293389,
   0.2250311,
   0.3114954,
   0.2296296,
   0.2190405,
   0.3191993};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,198);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [degree]");
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
   
   Double_t _fx3007[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3007[24] = {
   0.2016147,
   0.2118399,
   0.2176063,
   0.2135024,
   0.2211696,
   0.2283118,
   0.2332837,
   0.2265622,
   0.2296528,
   0.2386606,
   0.2343118,
   0.2291871,
   0.2276292,
   0.2108439,
   0.2179714,
   0.2175575,
   0.217574,
   0.2082087,
   0.2093317,
   0.2093168,
   0.213807,
   0.2085131,
   0.1967324,
   0.2324854};
   Double_t _fehx3007[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3007[24] = {
   0.2016147,
   0.2118399,
   0.2176063,
   0.2135024,
   0.2211696,
   0.2283118,
   0.2332837,
   0.2265622,
   0.2296528,
   0.2386606,
   0.2343118,
   0.2291871,
   0.2276292,
   0.2108439,
   0.2179714,
   0.2175575,
   0.217574,
   0.2082087,
   0.2093317,
   0.2093168,
   0.213807,
   0.2085131,
   0.1967324,
   0.2324854};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,198);
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
   
   Double_t _fx3008[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3008[24] = {
   0.9578714,
   0.9442163,
   0.9195254,
   0.7330343,
   0.7920312,
   0.7318206,
   0.7793736,
   0.6620455,
   0.6431413,
   0.7177563,
   0.6402365,
   0.7907119,
   0.7422783,
   0.8230354,
   0.7571369,
   0.7202112,
   0.6778523,
   0.8796489,
   0.8797111,
   0.8276504,
   0.8372281,
   0.7884739,
   0.8571665,
   0.5454375};
   Double_t _felx3008[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3008[24] = {
   0.1708117,
   0.09915084,
   0.07973296,
   0.06066635,
   0.06128921,
   0.05749726,
   0.05908416,
   0.05334915,
   0.05455053,
   0.06023277,
   0.05510278,
   0.06434722,
   0.06510211,
   0.07332182,
   0.06854795,
   0.07481554,
   0.07635379,
   0.08948606,
   0.0944612,
   0.09043235,
   0.103865,
   0.110245,
   0.1482849,
   0.1935418};
   Double_t _fehx3008[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3008[24] = {
   0.1648003,
   0.09710199,
   0.07973296,
   0.06066635,
   0.06128921,
   0.05749726,
   0.05908416,
   0.05334915,
   0.05455053,
   0.06023277,
   0.05510278,
   0.06434722,
   0.06510211,
   0.07332182,
   0.06854795,
   0.07328718,
   0.07466501,
   0.08769833,
   0.09247049,
   0.08849219,
   0.1013346,
   0.1072146,
   0.1432276,
   0.1792793};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,198);
   Graph_Graph3008->SetMinimum(0.2748181);
   Graph_Graph3008->SetMaximum(1.199749);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,180);

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
   TLine *line = new TLine(0,1,180,1);
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

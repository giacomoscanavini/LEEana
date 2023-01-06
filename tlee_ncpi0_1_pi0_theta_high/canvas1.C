#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 22:48:00 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",112,135,1200,900);
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
   pad1->Range(-0.4846154,-11.8,3.553846,1304.832);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__1->SetBinContent(1,140.663);
   hmc__1->SetBinContent(2,346.6417);
   hmc__1->SetBinContent(3,500.786);
   hmc__1->SetBinContent(4,569.2659);
   hmc__1->SetBinContent(5,581.4756);
   hmc__1->SetBinContent(6,531.0684);
   hmc__1->SetBinContent(7,518.1813);
   hmc__1->SetBinContent(8,471.1297);
   hmc__1->SetBinContent(9,397.7324);
   hmc__1->SetBinContent(10,346.5094);
   hmc__1->SetBinContent(11,317.3676);
   hmc__1->SetBinContent(12,271.1685);
   hmc__1->SetBinContent(13,248.1926);
   hmc__1->SetBinContent(14,194.2721);
   hmc__1->SetBinContent(15,185.5999);
   hmc__1->SetBinContent(16,185.688);
   hmc__1->SetBinContent(17,163.1577);
   hmc__1->SetBinContent(18,152.7453);
   hmc__1->SetBinContent(19,137.5732);
   hmc__1->SetBinContent(20,124.3354);
   hmc__1->SetBinContent(21,130.0343);
   hmc__1->SetBinContent(22,103.8919);
   hmc__1->SetBinContent(23,83.9542);
   hmc__1->SetBinContent(24,57.28606);
   hmc__1->SetBinContent(25,20.38408);
   hmc__1->SetBinError(1,40.28904);
   hmc__1->SetBinError(2,84.36846);
   hmc__1->SetBinError(3,114.9771);
   hmc__1->SetBinError(4,133.7111);
   hmc__1->SetBinError(5,138.6984);
   hmc__1->SetBinError(6,136.3041);
   hmc__1->SetBinError(7,138.5241);
   hmc__1->SetBinError(8,138.6163);
   hmc__1->SetBinError(9,117.816);
   hmc__1->SetBinError(10,99.13833);
   hmc__1->SetBinError(11,90.79953);
   hmc__1->SetBinError(12,79.03161);
   hmc__1->SetBinError(13,77.31634);
   hmc__1->SetBinError(14,56.94814);
   hmc__1->SetBinError(15,64.51146);
   hmc__1->SetBinError(16,54.25866);
   hmc__1->SetBinError(17,47.81784);
   hmc__1->SetBinError(18,46.04428);
   hmc__1->SetBinError(19,44.06726);
   hmc__1->SetBinError(20,38.79154);
   hmc__1->SetBinError(21,42.4133);
   hmc__1->SetBinError(22,32.75826);
   hmc__1->SetBinError(23,25.49797);
   hmc__1->SetBinError(24,22.21158);
   hmc__1->SetBinError(25,10.3446);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-11.8);
   hmc__1->SetMaximum(1239);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,3.15);
   hs1_stack_1->SetMinimum(-8.530416e-09);
   hs1_stack_1->SetMaximum(610.5494);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.691865);
   hbadmatch_stack_1->SetBinContent(2,5.596158);
   hbadmatch_stack_1->SetBinContent(3,10.67048);
   hbadmatch_stack_1->SetBinContent(4,11.30437);
   hbadmatch_stack_1->SetBinContent(5,8.91197);
   hbadmatch_stack_1->SetBinContent(6,12.37233);
   hbadmatch_stack_1->SetBinContent(7,9.614965);
   hbadmatch_stack_1->SetBinContent(8,12.25163);
   hbadmatch_stack_1->SetBinContent(9,9.271001);
   hbadmatch_stack_1->SetBinContent(10,6.861223);
   hbadmatch_stack_1->SetBinContent(11,14.48392);
   hbadmatch_stack_1->SetBinContent(12,10.66039);
   hbadmatch_stack_1->SetBinContent(13,7.426947);
   hbadmatch_stack_1->SetBinContent(14,5.438377);
   hbadmatch_stack_1->SetBinContent(15,8.278872);
   hbadmatch_stack_1->SetBinContent(16,6.588279);
   hbadmatch_stack_1->SetBinContent(17,5.099873);
   hbadmatch_stack_1->SetBinContent(18,4.088596);
   hbadmatch_stack_1->SetBinContent(19,3.720078);
   hbadmatch_stack_1->SetBinContent(20,3.563498);
   hbadmatch_stack_1->SetBinContent(21,2.291508);
   hbadmatch_stack_1->SetBinContent(22,5.715252);
   hbadmatch_stack_1->SetBinContent(23,2.218505);
   hbadmatch_stack_1->SetBinContent(24,2.923887);
   hbadmatch_stack_1->SetBinContent(25,0.4161119);
   hbadmatch_stack_1->SetBinError(1,1.25783);
   hbadmatch_stack_1->SetBinError(2,1.257632);
   hbadmatch_stack_1->SetBinError(3,2.018538);
   hbadmatch_stack_1->SetBinError(4,1.743278);
   hbadmatch_stack_1->SetBinError(5,1.513724);
   hbadmatch_stack_1->SetBinError(6,1.835078);
   hbadmatch_stack_1->SetBinError(7,1.68811);
   hbadmatch_stack_1->SetBinError(8,1.819317);
   hbadmatch_stack_1->SetBinError(9,1.661933);
   hbadmatch_stack_1->SetBinError(10,1.34409);
   hbadmatch_stack_1->SetBinError(11,2.828689);
   hbadmatch_stack_1->SetBinError(12,2.053295);
   hbadmatch_stack_1->SetBinError(13,2.025009);
   hbadmatch_stack_1->SetBinError(14,1.305842);
   hbadmatch_stack_1->SetBinError(15,1.491002);
   hbadmatch_stack_1->SetBinError(16,1.317363);
   hbadmatch_stack_1->SetBinError(17,1.204446);
   hbadmatch_stack_1->SetBinError(18,1.15843);
   hbadmatch_stack_1->SetBinError(19,1.023885);
   hbadmatch_stack_1->SetBinError(20,0.8945844);
   hbadmatch_stack_1->SetBinError(21,0.7736695);
   hbadmatch_stack_1->SetBinError(22,1.93924);
   hbadmatch_stack_1->SetBinError(23,0.750976);
   hbadmatch_stack_1->SetBinError(24,0.9169317);
   hbadmatch_stack_1->SetBinError(25,0.2946723);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,6.068624);
   hext_stack_2->SetBinContent(2,13.79237);
   hext_stack_2->SetBinContent(3,30.80433);
   hext_stack_2->SetBinContent(4,41.48954);
   hext_stack_2->SetBinContent(5,56.74271);
   hext_stack_2->SetBinContent(6,47.90574);
   hext_stack_2->SetBinContent(7,59.2126);
   hext_stack_2->SetBinContent(8,54.82504);
   hext_stack_2->SetBinContent(9,47.24095);
   hext_stack_2->SetBinContent(10,54.91279);
   hext_stack_2->SetBinContent(11,53.92965);
   hext_stack_2->SetBinContent(12,41.98269);
   hext_stack_2->SetBinContent(13,37.5836);
   hext_stack_2->SetBinContent(14,28.35038);
   hext_stack_2->SetBinContent(15,31.00905);
   hext_stack_2->SetBinContent(16,31.97941);
   hext_stack_2->SetBinContent(17,25.35855);
   hext_stack_2->SetBinContent(18,26.6506);
   hext_stack_2->SetBinContent(19,13.48391);
   hext_stack_2->SetBinContent(20,13.35541);
   hext_stack_2->SetBinContent(21,18.16833);
   hext_stack_2->SetBinContent(22,6.545835);
   hext_stack_2->SetBinContent(23,6.855872);
   hext_stack_2->SetBinContent(24,4.545971);
   hext_stack_2->SetBinContent(25,1.544194);
   hext_stack_2->SetBinError(1,1.677259);
   hext_stack_2->SetBinError(2,2.341556);
   hext_stack_2->SetBinError(3,3.780006);
   hext_stack_2->SetBinError(4,4.34007);
   hext_stack_2->SetBinError(5,5.195997);
   hext_stack_2->SetBinError(6,4.649998);
   hext_stack_2->SetBinError(7,5.383992);
   hext_stack_2->SetBinError(8,5.055905);
   hext_stack_2->SetBinError(9,4.619845);
   hext_stack_2->SetBinError(10,4.994959);
   hext_stack_2->SetBinError(11,5.017115);
   hext_stack_2->SetBinError(12,4.53069);
   hext_stack_2->SetBinError(13,3.979651);
   hext_stack_2->SetBinError(14,3.701204);
   hext_stack_2->SetBinError(15,3.679366);
   hext_stack_2->SetBinError(16,3.939565);
   hext_stack_2->SetBinError(17,3.486286);
   hext_stack_2->SetBinError(18,3.639749);
   hext_stack_2->SetBinError(19,2.603287);
   hext_stack_2->SetBinError(20,2.377166);
   hext_stack_2->SetBinError(21,2.99569);
   hext_stack_2->SetBinError(22,1.762013);
   hext_stack_2->SetBinError(23,1.900612);
   hext_stack_2->SetBinError(24,1.268224);
   hext_stack_2->SetBinError(25,0.7753719);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.8286346);
   hdirt_stack_3->SetBinContent(2,1.988128);
   hdirt_stack_3->SetBinContent(3,4.743157);
   hdirt_stack_3->SetBinContent(4,5.20179);
   hdirt_stack_3->SetBinContent(5,5.636793);
   hdirt_stack_3->SetBinContent(6,5.898103);
   hdirt_stack_3->SetBinContent(7,7.407918);
   hdirt_stack_3->SetBinContent(8,3.264032);
   hdirt_stack_3->SetBinContent(9,5.504498);
   hdirt_stack_3->SetBinContent(10,4.625433);
   hdirt_stack_3->SetBinContent(11,1.611426);
   hdirt_stack_3->SetBinContent(12,3.193068);
   hdirt_stack_3->SetBinContent(13,1.593987);
   hdirt_stack_3->SetBinContent(14,2.564044);
   hdirt_stack_3->SetBinContent(15,1.903853);
   hdirt_stack_3->SetBinContent(16,3.490828);
   hdirt_stack_3->SetBinContent(17,1.861966);
   hdirt_stack_3->SetBinContent(18,1.890298);
   hdirt_stack_3->SetBinContent(19,4.068516);
   hdirt_stack_3->SetBinContent(20,1.20838);
   hdirt_stack_3->SetBinContent(21,1.603774);
   hdirt_stack_3->SetBinContent(22,0.5091542);
   hdirt_stack_3->SetBinContent(23,0.9857053);
   hdirt_stack_3->SetBinContent(24,1.109369);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4472268);
   hdirt_stack_3->SetBinError(2,0.6967746);
   hdirt_stack_3->SetBinError(3,1.172973);
   hdirt_stack_3->SetBinError(4,1.302102);
   hdirt_stack_3->SetBinError(5,1.196483);
   hdirt_stack_3->SetBinError(6,1.239179);
   hdirt_stack_3->SetBinError(7,1.744653);
   hdirt_stack_3->SetBinError(8,0.9133756);
   hdirt_stack_3->SetBinError(9,1.178736);
   hdirt_stack_3->SetBinError(10,1.07655);
   hdirt_stack_3->SetBinError(11,0.6472301);
   hdirt_stack_3->SetBinError(12,0.9682664);
   hdirt_stack_3->SetBinError(13,0.6832557);
   hdirt_stack_3->SetBinError(14,1.155246);
   hdirt_stack_3->SetBinError(15,0.6686109);
   hdirt_stack_3->SetBinError(16,0.9423221);
   hdirt_stack_3->SetBinError(17,0.7591356);
   hdirt_stack_3->SetBinError(18,0.7102591);
   hdirt_stack_3->SetBinError(19,1.340393);
   hdirt_stack_3->SetBinError(20,0.584084);
   hdirt_stack_3->SetBinError(21,0.636557);
   hdirt_stack_3->SetBinError(22,0.2982867);
   hdirt_stack_3->SetBinError(23,0.4729306);
   hdirt_stack_3->SetBinError(24,0.4884064);
   hdirt_stack_3->SetBinError(25,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,10.04233);
   houtFV_stack_4->SetBinContent(2,26.59389);
   houtFV_stack_4->SetBinContent(3,45.79166);
   houtFV_stack_4->SetBinContent(4,51.58926);
   houtFV_stack_4->SetBinContent(5,56.26876);
   houtFV_stack_4->SetBinContent(6,57.45408);
   houtFV_stack_4->SetBinContent(7,55.85522);
   houtFV_stack_4->SetBinContent(8,54.58194);
   houtFV_stack_4->SetBinContent(9,35.58245);
   houtFV_stack_4->SetBinContent(10,32.19026);
   houtFV_stack_4->SetBinContent(11,27.47491);
   houtFV_stack_4->SetBinContent(12,24.95534);
   houtFV_stack_4->SetBinContent(13,23.25036);
   houtFV_stack_4->SetBinContent(14,18.92294);
   houtFV_stack_4->SetBinContent(15,17.56889);
   houtFV_stack_4->SetBinContent(16,19.60653);
   houtFV_stack_4->SetBinContent(17,16.56239);
   houtFV_stack_4->SetBinContent(18,19.18967);
   houtFV_stack_4->SetBinContent(19,16.57554);
   houtFV_stack_4->SetBinContent(20,14.20626);
   houtFV_stack_4->SetBinContent(21,17.12911);
   houtFV_stack_4->SetBinContent(22,14.04227);
   houtFV_stack_4->SetBinContent(23,14.26834);
   houtFV_stack_4->SetBinContent(24,6.95441);
   houtFV_stack_4->SetBinContent(25,3.15517);
   houtFV_stack_4->SetBinError(1,1.735792);
   houtFV_stack_4->SetBinError(2,2.571128);
   houtFV_stack_4->SetBinError(3,3.402987);
   houtFV_stack_4->SetBinError(4,3.706157);
   houtFV_stack_4->SetBinError(5,3.68327);
   houtFV_stack_4->SetBinError(6,3.825282);
   houtFV_stack_4->SetBinError(7,3.741951);
   houtFV_stack_4->SetBinError(8,3.839367);
   houtFV_stack_4->SetBinError(9,2.907184);
   houtFV_stack_4->SetBinError(10,2.830108);
   houtFV_stack_4->SetBinError(11,2.627146);
   houtFV_stack_4->SetBinError(12,2.448782);
   houtFV_stack_4->SetBinError(13,2.461949);
   houtFV_stack_4->SetBinError(14,2.184821);
   houtFV_stack_4->SetBinError(15,2.044909);
   houtFV_stack_4->SetBinError(16,2.4917);
   houtFV_stack_4->SetBinError(17,1.992164);
   houtFV_stack_4->SetBinError(18,2.222908);
   houtFV_stack_4->SetBinError(19,2.018122);
   houtFV_stack_4->SetBinError(20,1.712686);
   houtFV_stack_4->SetBinError(21,2.106046);
   houtFV_stack_4->SetBinError(22,2.025962);
   houtFV_stack_4->SetBinError(23,1.999146);
   houtFV_stack_4->SetBinError(24,1.292037);
   houtFV_stack_4->SetBinError(25,0.8760516);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.445795);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,21.55962);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,22.83773);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,17.83827);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.56647);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.440633);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.329543);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.100854);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.354502);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.735813);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7097455);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5655617);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2549132);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3435173);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1773983);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5725113);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.61122);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.7843217);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.029599);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.431641);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.343121);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.054612);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4555764);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.179623);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.717002);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.772695);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.571203);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.373235);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9739595);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9629841);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.630653);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3776886);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5309377);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3360649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2334105);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.09740903);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.213157);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.07707098);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.24653);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4741669);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3600104);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3212086);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4625324);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4673929);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3899375);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2943632);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2071728);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8219848);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.174752);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.778141);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.269144);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.351237);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.401545);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.646201);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4768069);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6554964);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5921991);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5999091);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.8471514);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5068681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4124576);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5579675);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2788955);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1403539);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3258851);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1620162);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7475979);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3951066);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3809842);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1156182);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1216516);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3097922);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2769799);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3582264);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4862683);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5510268);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2841838);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3975733);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1194225);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2086373);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1496097);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.189716);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3199432);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1415832);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1524052);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.204405);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1230983);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04973827);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1576257);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05095621);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2925568);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1878678);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1516039);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.08216112);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03635368);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.10807);
   hNCpi0inFVres_stack_7->SetBinContent(2,98.32065);
   hNCpi0inFVres_stack_7->SetBinContent(3,147.4753);
   hNCpi0inFVres_stack_7->SetBinContent(4,184.0105);
   hNCpi0inFVres_stack_7->SetBinContent(5,194.5852);
   hNCpi0inFVres_stack_7->SetBinContent(6,188.9877);
   hNCpi0inFVres_stack_7->SetBinContent(7,178.5008);
   hNCpi0inFVres_stack_7->SetBinContent(8,168.9032);
   hNCpi0inFVres_stack_7->SetBinContent(9,138.6546);
   hNCpi0inFVres_stack_7->SetBinContent(10,113.5951);
   hNCpi0inFVres_stack_7->SetBinContent(11,96.9495);
   hNCpi0inFVres_stack_7->SetBinContent(12,88.33986);
   hNCpi0inFVres_stack_7->SetBinContent(13,76.96347);
   hNCpi0inFVres_stack_7->SetBinContent(14,64.37814);
   hNCpi0inFVres_stack_7->SetBinContent(15,56.38908);
   hNCpi0inFVres_stack_7->SetBinContent(16,53.84724);
   hNCpi0inFVres_stack_7->SetBinContent(17,54.27475);
   hNCpi0inFVres_stack_7->SetBinContent(18,45.54755);
   hNCpi0inFVres_stack_7->SetBinContent(19,43.46925);
   hNCpi0inFVres_stack_7->SetBinContent(20,36.29532);
   hNCpi0inFVres_stack_7->SetBinContent(21,35.59859);
   hNCpi0inFVres_stack_7->SetBinContent(22,28.3735);
   hNCpi0inFVres_stack_7->SetBinContent(23,21.95798);
   hNCpi0inFVres_stack_7->SetBinContent(24,14.05125);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.588712);
   hNCpi0inFVres_stack_7->SetBinError(1,2.284468);
   hNCpi0inFVres_stack_7->SetBinError(2,3.354883);
   hNCpi0inFVres_stack_7->SetBinError(3,4.026885);
   hNCpi0inFVres_stack_7->SetBinError(4,4.508891);
   hNCpi0inFVres_stack_7->SetBinError(5,4.679903);
   hNCpi0inFVres_stack_7->SetBinError(6,4.567754);
   hNCpi0inFVres_stack_7->SetBinError(7,4.344307);
   hNCpi0inFVres_stack_7->SetBinError(8,4.276781);
   hNCpi0inFVres_stack_7->SetBinError(9,3.890595);
   hNCpi0inFVres_stack_7->SetBinError(10,3.3829);
   hNCpi0inFVres_stack_7->SetBinError(11,3.024643);
   hNCpi0inFVres_stack_7->SetBinError(12,2.880359);
   hNCpi0inFVres_stack_7->SetBinError(13,2.816261);
   hNCpi0inFVres_stack_7->SetBinError(14,2.575521);
   hNCpi0inFVres_stack_7->SetBinError(15,2.291344);
   hNCpi0inFVres_stack_7->SetBinError(16,2.246599);
   hNCpi0inFVres_stack_7->SetBinError(17,2.396496);
   hNCpi0inFVres_stack_7->SetBinError(18,2.054418);
   hNCpi0inFVres_stack_7->SetBinError(19,2.145178);
   hNCpi0inFVres_stack_7->SetBinError(20,1.880642);
   hNCpi0inFVres_stack_7->SetBinError(21,1.886731);
   hNCpi0inFVres_stack_7->SetBinError(22,1.793341);
   hNCpi0inFVres_stack_7->SetBinError(23,1.530971);
   hNCpi0inFVres_stack_7->SetBinError(24,1.314378);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6712718);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,16.22717);
   hNCpi0inFVdis_stack_8->SetBinContent(2,31.49083);
   hNCpi0inFVdis_stack_8->SetBinContent(3,48.26302);
   hNCpi0inFVdis_stack_8->SetBinContent(4,53.37007);
   hNCpi0inFVdis_stack_8->SetBinContent(5,47.03251);
   hNCpi0inFVdis_stack_8->SetBinContent(6,38.9758);
   hNCpi0inFVdis_stack_8->SetBinContent(7,33.29573);
   hNCpi0inFVdis_stack_8->SetBinContent(8,28.21711);
   hNCpi0inFVdis_stack_8->SetBinContent(9,24.74308);
   hNCpi0inFVdis_stack_8->SetBinContent(10,18.6892);
   hNCpi0inFVdis_stack_8->SetBinContent(11,17.88572);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.33945);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.21902);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.599825);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.771152);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.476746);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.716475);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.849543);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.874842);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.508226);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.903075);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.534801);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.667599);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.181046);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4963885);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.607035);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.010486);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.479302);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.821113);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.449509);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.004626);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.952623);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.807779);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.660615);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.441637);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.385693);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.268956);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.350336);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8600849);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.903322);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.097728);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.008117);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7749116);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.077126);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9931343);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8179922);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.092252);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6258662);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8097251);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1836985);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1777471);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1158204);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.3194672);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1647521);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03723348);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02901978);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1320785);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.07178582);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1783006);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1303682);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02577893);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02632953);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02121135);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,25.90757);
   hCCpi0inFV_stack_10->SetBinContent(2,67.62521);
   hCCpi0inFV_stack_10->SetBinContent(3,92.83099);
   hCCpi0inFV_stack_10->SetBinContent(4,99.71352);
   hCCpi0inFV_stack_10->SetBinContent(5,89.06653);
   hCCpi0inFV_stack_10->SetBinContent(6,85.21092);
   hCCpi0inFV_stack_10->SetBinContent(7,87.08501);
   hCCpi0inFV_stack_10->SetBinContent(8,71.77704);
   hCCpi0inFV_stack_10->SetBinContent(9,68.24438);
   hCCpi0inFV_stack_10->SetBinContent(10,50.32105);
   hCCpi0inFV_stack_10->SetBinContent(11,47.02377);
   hCCpi0inFV_stack_10->SetBinContent(12,32.12918);
   hCCpi0inFV_stack_10->SetBinContent(13,37.0155);
   hCCpi0inFV_stack_10->SetBinContent(14,25.38407);
   hCCpi0inFV_stack_10->SetBinContent(15,28.54483);
   hCCpi0inFV_stack_10->SetBinContent(16,27.53541);
   hCCpi0inFV_stack_10->SetBinContent(17,25.15039);
   hCCpi0inFV_stack_10->SetBinContent(18,24.01614);
   hCCpi0inFV_stack_10->SetBinContent(19,20.4129);
   hCCpi0inFV_stack_10->SetBinContent(20,21.97424);
   hCCpi0inFV_stack_10->SetBinContent(21,22.30735);
   hCCpi0inFV_stack_10->SetBinContent(22,15.97277);
   hCCpi0inFV_stack_10->SetBinContent(23,14.92153);
   hCCpi0inFV_stack_10->SetBinContent(24,10.63734);
   hCCpi0inFV_stack_10->SetBinContent(25,4.20951);
   hCCpi0inFV_stack_10->SetBinError(1,2.572052);
   hCCpi0inFV_stack_10->SetBinError(2,4.130185);
   hCCpi0inFV_stack_10->SetBinError(3,4.847268);
   hCCpi0inFV_stack_10->SetBinError(4,5.05018);
   hCCpi0inFV_stack_10->SetBinError(5,4.668519);
   hCCpi0inFV_stack_10->SetBinError(6,4.713788);
   hCCpi0inFV_stack_10->SetBinError(7,4.709926);
   hCCpi0inFV_stack_10->SetBinError(8,4.315702);
   hCCpi0inFV_stack_10->SetBinError(9,4.182315);
   hCCpi0inFV_stack_10->SetBinError(10,3.541155);
   hCCpi0inFV_stack_10->SetBinError(11,3.403701);
   hCCpi0inFV_stack_10->SetBinError(12,2.82216);
   hCCpi0inFV_stack_10->SetBinError(13,2.983282);
   hCCpi0inFV_stack_10->SetBinError(14,2.53987);
   hCCpi0inFV_stack_10->SetBinError(15,2.731272);
   hCCpi0inFV_stack_10->SetBinError(16,2.586271);
   hCCpi0inFV_stack_10->SetBinError(17,2.497574);
   hCCpi0inFV_stack_10->SetBinError(18,2.367182);
   hCCpi0inFV_stack_10->SetBinError(19,2.222744);
   hCCpi0inFV_stack_10->SetBinError(20,2.384191);
   hCCpi0inFV_stack_10->SetBinError(21,2.341042);
   hCCpi0inFV_stack_10->SetBinError(22,2.006103);
   hCCpi0inFV_stack_10->SetBinError(23,1.894232);
   hCCpi0inFV_stack_10->SetBinError(24,1.650983);
   hCCpi0inFV_stack_10->SetBinError(25,0.9925552);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.45949);
   hNCinFV_stack_11->SetBinContent(2,38.30819);
   hNCinFV_stack_11->SetBinContent(3,48.06516);
   hNCinFV_stack_11->SetBinContent(4,53.49382);
   hNCinFV_stack_11->SetBinContent(5,60.33398);
   hNCinFV_stack_11->SetBinContent(6,41.51862);
   hNCinFV_stack_11->SetBinContent(7,30.9704);
   hNCinFV_stack_11->SetBinContent(8,28.26222);
   hNCinFV_stack_11->SetBinContent(9,26.01577);
   hNCinFV_stack_11->SetBinContent(10,18.43949);
   hNCinFV_stack_11->SetBinContent(11,17.42116);
   hNCinFV_stack_11->SetBinContent(12,18.4337);
   hNCinFV_stack_11->SetBinContent(13,12.78546);
   hNCinFV_stack_11->SetBinContent(14,12.91379);
   hNCinFV_stack_11->SetBinContent(15,7.662229);
   hNCinFV_stack_11->SetBinContent(16,13.6423);
   hNCinFV_stack_11->SetBinContent(17,9.467491);
   hNCinFV_stack_11->SetBinContent(18,9.014103);
   hNCinFV_stack_11->SetBinContent(19,11.21333);
   hNCinFV_stack_11->SetBinContent(20,10.34223);
   hNCinFV_stack_11->SetBinContent(21,9.896317);
   hNCinFV_stack_11->SetBinContent(22,9.239018);
   hNCinFV_stack_11->SetBinContent(23,7.07626);
   hNCinFV_stack_11->SetBinContent(24,6.823203);
   hNCinFV_stack_11->SetBinContent(25,2.4432);
   hNCinFV_stack_11->SetBinError(1,1.945193);
   hNCinFV_stack_11->SetBinError(2,3.405927);
   hNCinFV_stack_11->SetBinError(3,3.919141);
   hNCinFV_stack_11->SetBinError(4,4.035081);
   hNCinFV_stack_11->SetBinError(5,4.593096);
   hNCinFV_stack_11->SetBinError(6,3.533298);
   hNCinFV_stack_11->SetBinError(7,2.888215);
   hNCinFV_stack_11->SetBinError(8,2.916564);
   hNCinFV_stack_11->SetBinError(9,2.727717);
   hNCinFV_stack_11->SetBinError(10,2.104895);
   hNCinFV_stack_11->SetBinError(11,2.227181);
   hNCinFV_stack_11->SetBinError(12,2.325001);
   hNCinFV_stack_11->SetBinError(13,1.839668);
   hNCinFV_stack_11->SetBinError(14,1.753818);
   hNCinFV_stack_11->SetBinError(15,1.314314);
   hNCinFV_stack_11->SetBinError(16,2.13253);
   hNCinFV_stack_11->SetBinError(17,1.520671);
   hNCinFV_stack_11->SetBinError(18,1.429177);
   hNCinFV_stack_11->SetBinError(19,1.783873);
   hNCinFV_stack_11->SetBinError(20,1.62063);
   hNCinFV_stack_11->SetBinError(21,1.600056);
   hNCinFV_stack_11->SetBinError(22,1.611067);
   hNCinFV_stack_11->SetBinError(23,1.306563);
   hNCinFV_stack_11->SetBinError(24,1.462171);
   hNCinFV_stack_11->SetBinError(25,0.7817028);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,12.52913);
   hnumuCCinFV_stack_12->SetBinContent(2,28.57234);
   hnumuCCinFV_stack_12->SetBinContent(3,41.65441);
   hnumuCCinFV_stack_12->SetBinContent(4,47.00967);
   hnumuCCinFV_stack_12->SetBinContent(5,44.31059);
   hnumuCCinFV_stack_12->SetBinContent(6,40.39982);
   hnumuCCinFV_stack_12->SetBinContent(7,45.97897);
   hnumuCCinFV_stack_12->SetBinContent(8,42.29508);
   hnumuCCinFV_stack_12->SetBinContent(9,38.44419);
   hnumuCCinFV_stack_12->SetBinContent(10,42.57263);
   hnumuCCinFV_stack_12->SetBinContent(11,37.66853);
   hnumuCCinFV_stack_12->SetBinContent(12,34.25117);
   hnumuCCinFV_stack_12->SetBinContent(13,36.87482);
   hnumuCCinFV_stack_12->SetBinContent(14,25.29);
   hnumuCCinFV_stack_12->SetBinContent(15,22.24924);
   hnumuCCinFV_stack_12->SetBinContent(16,18.05209);
   hnumuCCinFV_stack_12->SetBinContent(17,14.74323);
   hnumuCCinFV_stack_12->SetBinContent(18,14.48336);
   hnumuCCinFV_stack_12->SetBinContent(19,13.9667);
   hnumuCCinFV_stack_12->SetBinContent(20,12.61181);
   hnumuCCinFV_stack_12->SetBinContent(21,12.26459);
   hnumuCCinFV_stack_12->SetBinContent(22,12.00722);
   hnumuCCinFV_stack_12->SetBinContent(23,8.138386);
   hnumuCCinFV_stack_12->SetBinContent(24,4.692633);
   hnumuCCinFV_stack_12->SetBinContent(25,2.700676);
   hnumuCCinFV_stack_12->SetBinError(1,2.114256);
   hnumuCCinFV_stack_12->SetBinError(2,2.777892);
   hnumuCCinFV_stack_12->SetBinError(3,3.906672);
   hnumuCCinFV_stack_12->SetBinError(4,4.184264);
   hnumuCCinFV_stack_12->SetBinError(5,3.982354);
   hnumuCCinFV_stack_12->SetBinError(6,3.410666);
   hnumuCCinFV_stack_12->SetBinError(7,3.899303);
   hnumuCCinFV_stack_12->SetBinError(8,4.596252);
   hnumuCCinFV_stack_12->SetBinError(9,3.277785);
   hnumuCCinFV_stack_12->SetBinError(10,3.915244);
   hnumuCCinFV_stack_12->SetBinError(11,3.451072);
   hnumuCCinFV_stack_12->SetBinError(12,3.696288);
   hnumuCCinFV_stack_12->SetBinError(13,3.36874);
   hnumuCCinFV_stack_12->SetBinError(14,2.826439);
   hnumuCCinFV_stack_12->SetBinError(15,3.086268);
   hnumuCCinFV_stack_12->SetBinError(16,2.205017);
   hnumuCCinFV_stack_12->SetBinError(17,2.130052);
   hnumuCCinFV_stack_12->SetBinError(18,2.249064);
   hnumuCCinFV_stack_12->SetBinError(19,2.422801);
   hnumuCCinFV_stack_12->SetBinError(20,1.879521);
   hnumuCCinFV_stack_12->SetBinError(21,1.833974);
   hnumuCCinFV_stack_12->SetBinError(22,1.837811);
   hnumuCCinFV_stack_12->SetBinError(23,1.499751);
   hnumuCCinFV_stack_12->SetBinError(24,1.056554);
   hnumuCCinFV_stack_12->SetBinError(25,0.8261154);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,6.147146);
   hnueCCinFV_stack_13->SetBinContent(2,11.93006);
   hnueCCinFV_stack_13->SetBinContent(3,6.297266);
   hnueCCinFV_stack_13->SetBinContent(4,2.351087);
   hnueCCinFV_stack_13->SetBinContent(5,2.431551);
   hnueCCinFV_stack_13->SetBinContent(6,2.517777);
   hnueCCinFV_stack_13->SetBinContent(7,2.363941);
   hnueCCinFV_stack_13->SetBinContent(8,1.968903);
   hnueCCinFV_stack_13->SetBinContent(9,2.181895);
   hnueCCinFV_stack_13->SetBinContent(10,1.881949);
   hnueCCinFV_stack_13->SetBinContent(11,1.598856);
   hnueCCinFV_stack_13->SetBinContent(12,0.6922869);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.8559723);
   hnueCCinFV_stack_13->SetBinContent(15,1.459626);
   hnueCCinFV_stack_13->SetBinContent(16,0.6993333);
   hnueCCinFV_stack_13->SetBinContent(17,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(18,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(19,0.7874689);
   hnueCCinFV_stack_13->SetBinContent(20,1.323669);
   hnueCCinFV_stack_13->SetBinContent(21,2.076169);
   hnueCCinFV_stack_13->SetBinContent(22,1.125349);
   hnueCCinFV_stack_13->SetBinContent(23,1.110899);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.439095);
   hnueCCinFV_stack_13->SetBinError(2,2.999057);
   hnueCCinFV_stack_13->SetBinError(3,1.396679);
   hnueCCinFV_stack_13->SetBinError(4,0.7197511);
   hnueCCinFV_stack_13->SetBinError(5,0.8000597);
   hnueCCinFV_stack_13->SetBinError(6,0.9591911);
   hnueCCinFV_stack_13->SetBinError(7,0.8363469);
   hnueCCinFV_stack_13->SetBinError(8,0.7271432);
   hnueCCinFV_stack_13->SetBinError(9,1.353507);
   hnueCCinFV_stack_13->SetBinError(10,0.7481591);
   hnueCCinFV_stack_13->SetBinError(11,0.7479221);
   hnueCCinFV_stack_13->SetBinError(12,0.4018789);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.5082737);
   hnueCCinFV_stack_13->SetBinError(15,0.7387881);
   hnueCCinFV_stack_13->SetBinError(16,0.4064758);
   hnueCCinFV_stack_13->SetBinError(17,0.4132436);
   hnueCCinFV_stack_13->SetBinError(18,0.3025491);
   hnueCCinFV_stack_13->SetBinError(19,0.4658562);
   hnueCCinFV_stack_13->SetBinError(20,1.104131);
   hnueCCinFV_stack_13->SetBinError(21,0.761711);
   hnueCCinFV_stack_13->SetBinError(22,0.5194673);
   hnueCCinFV_stack_13->SetBinError(23,0.6223142);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__2->SetBinContent(1,140.663);
   hmcerror__2->SetBinContent(2,346.6417);
   hmcerror__2->SetBinContent(3,500.786);
   hmcerror__2->SetBinContent(4,569.2659);
   hmcerror__2->SetBinContent(5,581.4756);
   hmcerror__2->SetBinContent(6,531.0684);
   hmcerror__2->SetBinContent(7,518.1813);
   hmcerror__2->SetBinContent(8,471.1297);
   hmcerror__2->SetBinContent(9,397.7324);
   hmcerror__2->SetBinContent(10,346.5094);
   hmcerror__2->SetBinContent(11,317.3676);
   hmcerror__2->SetBinContent(12,271.1685);
   hmcerror__2->SetBinContent(13,248.1926);
   hmcerror__2->SetBinContent(14,194.2721);
   hmcerror__2->SetBinContent(15,185.5999);
   hmcerror__2->SetBinContent(16,185.688);
   hmcerror__2->SetBinContent(17,163.1577);
   hmcerror__2->SetBinContent(18,152.7453);
   hmcerror__2->SetBinContent(19,137.5732);
   hmcerror__2->SetBinContent(20,124.3354);
   hmcerror__2->SetBinContent(21,130.0343);
   hmcerror__2->SetBinContent(22,103.8919);
   hmcerror__2->SetBinContent(23,83.9542);
   hmcerror__2->SetBinContent(24,57.28606);
   hmcerror__2->SetBinContent(25,20.38408);
   hmcerror__2->SetBinError(1,40.28904);
   hmcerror__2->SetBinError(2,84.36846);
   hmcerror__2->SetBinError(3,114.9771);
   hmcerror__2->SetBinError(4,133.7111);
   hmcerror__2->SetBinError(5,138.6984);
   hmcerror__2->SetBinError(6,136.3041);
   hmcerror__2->SetBinError(7,138.5241);
   hmcerror__2->SetBinError(8,138.6163);
   hmcerror__2->SetBinError(9,117.816);
   hmcerror__2->SetBinError(10,99.13833);
   hmcerror__2->SetBinError(11,90.79953);
   hmcerror__2->SetBinError(12,79.03161);
   hmcerror__2->SetBinError(13,77.31634);
   hmcerror__2->SetBinError(14,56.94814);
   hmcerror__2->SetBinError(15,64.51146);
   hmcerror__2->SetBinError(16,54.25866);
   hmcerror__2->SetBinError(17,47.81784);
   hmcerror__2->SetBinError(18,46.04428);
   hmcerror__2->SetBinError(19,44.06726);
   hmcerror__2->SetBinError(20,38.79154);
   hmcerror__2->SetBinError(21,42.4133);
   hmcerror__2->SetBinError(22,32.75826);
   hmcerror__2->SetBinError(23,25.49797);
   hmcerror__2->SetBinError(24,22.21158);
   hmcerror__2->SetBinError(25,10.3446);
   hmcerror__2->SetBinError(26,0.3895343);
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
   
   Double_t _fx3001[25] = {
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
   Double_t _fy3001[25] = {
   117,
   299,
   499,
   549,
   590,
   521,
   476,
   424,
   389,
   314,
   275,
   246,
   239,
   204,
   182,
   164,
   170,
   134,
   139,
   140,
   123,
   110,
   69,
   55,
   16};
   Double_t _felx3001[25] = {
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
   Double_t _fely3001[25] = {
   10.81665,
   17.29162,
   22.33831,
   23.43075,
   24.28992,
   22.82542,
   21.81742,
   20.59126,
   19.72308,
   17.72005,
   16.58312,
   15.68439,
   15.45962,
   14.28286,
   13.49074,
   12.80625,
   13.0384,
   11.57584,
   11.78983,
   11.83216,
   11.09054,
   10.48809,
   8.4327,
   7.546,
   4.1628};
   Double_t _fehx3001[25] = {
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
   Double_t _fehy3001[25] = {
   10.81665,
   17.29162,
   22.33831,
   23.43075,
   24.28992,
   22.82542,
   21.81742,
   20.59126,
   19.72308,
   17.72005,
   16.58312,
   15.68439,
   15.45962,
   14.28286,
   13.49074,
   12.80625,
   13.0384,
   11.57584,
   11.78983,
   11.83216,
   11.09054,
   10.48809,
   8.2304,
   7.3425,
   3.9454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,3.465);
   Graph_Graph3001->SetMinimum(10.65348);
   Graph_Graph3001->SetMaximum(674.5352);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 679.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2172.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  473.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 515.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
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
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
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
   Double_t _fely3002[25] = {
   0.2864225,
   0.2433881,
   0.2295933,
   0.2348834,
   0.2385284,
   0.2566602,
   0.2673274,
   0.2942211,
   0.2962193,
   0.2861057,
   0.2861021,
   0.2914484,
   0.3115175,
   0.293136,
   0.3475835,
   0.2922033,
   0.2930774,
   0.3014449,
   0.3203186,
   0.3119911,
   0.3261702,
   0.315311,
   0.3037129,
   0.3877309,
   0.5074842};
   Double_t _fehx3002[25] = {
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
   Double_t _fehy3002[25] = {
   0.2864225,
   0.2433881,
   0.2295933,
   0.2348834,
   0.2385284,
   0.2566602,
   0.2673274,
   0.2942211,
   0.2962193,
   0.2861057,
   0.2861021,
   0.2914484,
   0.3115175,
   0.293136,
   0.3475835,
   0.2922033,
   0.2930774,
   0.3014449,
   0.3203186,
   0.3119911,
   0.3261702,
   0.315311,
   0.3037129,
   0.3877309,
   0.5074842};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,3.465);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3003[25] = {
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
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
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
   Double_t _fely3003[25] = {
   0.2245929,
   0.2182634,
   0.218383,
   0.2189929,
   0.2279012,
   0.2471192,
   0.2595458,
   0.2757371,
   0.2838412,
   0.275859,
   0.2673638,
   0.2804252,
   0.2765109,
   0.277098,
   0.287355,
   0.2643432,
   0.2646553,
   0.2670837,
   0.2882426,
   0.2586,
   0.2435464,
   0.2589876,
   0.250489,
   0.2481067,
   0.2623875};
   Double_t _fehx3003[25] = {
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
   Double_t _fehy3003[25] = {
   0.2245929,
   0.2182634,
   0.218383,
   0.2189929,
   0.2279012,
   0.2471192,
   0.2595458,
   0.2757371,
   0.2838412,
   0.275859,
   0.2673638,
   0.2804252,
   0.2765109,
   0.277098,
   0.287355,
   0.2643432,
   0.2646553,
   0.2670837,
   0.2882426,
   0.2586,
   0.2435464,
   0.2589876,
   0.250489,
   0.2481067,
   0.2623875};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,3.465);
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
   
   Double_t _fx3004[25] = {
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
   Double_t _fy3004[25] = {
   0.8317754,
   0.8625621,
   0.9964336,
   0.9644,
   1.01466,
   0.9810413,
   0.9185973,
   0.8999644,
   0.9780446,
   0.9061803,
   0.866503,
   0.9071851,
   0.9629617,
   1.050074,
   0.9806041,
   0.8832018,
   1.041937,
   0.8772777,
   1.010371,
   1.125987,
   0.9459046,
   1.058793,
   0.8218767,
   0.960094,
   0.7849262};
   Double_t _felx3004[25] = {
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
   Double_t _fely3004[25] = {
   0.07689766,
   0.04988326,
   0.04460649,
   0.04115959,
   0.04177289,
   0.0429802,
   0.04210384,
   0.04370614,
   0.04958883,
   0.05113871,
   0.0522521,
   0.05784001,
   0.06228881,
   0.07351987,
   0.07268721,
   0.06896647,
   0.0799129,
   0.07578525,
   0.08569856,
   0.09516326,
   0.08528934,
   0.1009519,
   0.1004441,
   0.1317249,
   0.2042182};
   Double_t _fehx3004[25] = {
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
   Double_t _fehy3004[25] = {
   0.07689766,
   0.04988326,
   0.04460649,
   0.04115959,
   0.04177289,
   0.0429802,
   0.04210384,
   0.04370614,
   0.04958883,
   0.05113871,
   0.0522521,
   0.05784001,
   0.06228881,
   0.07351987,
   0.07268721,
   0.06896647,
   0.0799129,
   0.07578525,
   0.08569856,
   0.09516326,
   0.08528934,
   0.1009519,
   0.0980344,
   0.1281725,
   0.193553};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,3.465);
   Graph_Graph3004->SetMinimum(0.5166638);
   Graph_Graph3004->SetMaximum(1.285194);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_theta_high_all",25,0,3.15);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

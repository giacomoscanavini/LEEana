#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar  9 20:57:02 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-8.821664,3.553846,975.4904);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__4->SetBinContent(1,99.53165);
   hmc__4->SetBinContent(2,132.089);
   hmc__4->SetBinContent(3,161.2123);
   hmc__4->SetBinContent(4,287.8221);
   hmc__4->SetBinContent(5,407.8044);
   hmc__4->SetBinContent(6,441.0832);
   hmc__4->SetBinContent(7,426.3645);
   hmc__4->SetBinContent(8,407.9527);
   hmc__4->SetBinContent(9,400.8062);
   hmc__4->SetBinContent(10,361.5663);
   hmc__4->SetBinContent(11,351.7828);
   hmc__4->SetBinContent(12,307.3382);
   hmc__4->SetBinContent(13,278.8711);
   hmc__4->SetBinContent(14,234.7252);
   hmc__4->SetBinContent(15,191.2433);
   hmc__4->SetBinContent(16,193.1347);
   hmc__4->SetBinContent(17,168.107);
   hmc__4->SetBinContent(18,145.2566);
   hmc__4->SetBinContent(19,136.9059);
   hmc__4->SetBinContent(20,131.5962);
   hmc__4->SetBinContent(21,131.2888);
   hmc__4->SetBinContent(22,121.766);
   hmc__4->SetBinContent(23,117.3923);
   hmc__4->SetBinContent(24,63.87176);
   hmc__4->SetBinError(1,37.44293);
   hmc__4->SetBinError(2,42.15193);
   hmc__4->SetBinError(3,45.96338);
   hmc__4->SetBinError(4,76.11442);
   hmc__4->SetBinError(5,118.0765);
   hmc__4->SetBinError(6,140.6748);
   hmc__4->SetBinError(7,133.2991);
   hmc__4->SetBinError(8,122.4557);
   hmc__4->SetBinError(9,115.0196);
   hmc__4->SetBinError(10,101.8019);
   hmc__4->SetBinError(11,106.0052);
   hmc__4->SetBinError(12,83.44882);
   hmc__4->SetBinError(13,75.56801);
   hmc__4->SetBinError(14,63.43701);
   hmc__4->SetBinError(15,73.51328);
   hmc__4->SetBinError(16,50.53222);
   hmc__4->SetBinError(17,47.50311);
   hmc__4->SetBinError(18,37.97063);
   hmc__4->SetBinError(19,35.33265);
   hmc__4->SetBinError(20,41.34989);
   hmc__4->SetBinError(21,34.80416);
   hmc__4->SetBinError(22,33.11873);
   hmc__4->SetBinError(23,33.57817);
   hmc__4->SetBinError(24,19.91569);
   hmc__4->SetBinError(25,0.3895343);
   hmc__4->SetMinimum(-8.821664);
   hmc__4->SetMaximum(926.2748);
   hmc__4->SetEntries(5638.682);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,3.15);
   hs2_stack_2->SetMinimum(-5.219833e-10);
   hs2_stack_2->SetMaximum(463.1373);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.201654);
   hbadmatch_stack_1->SetBinContent(2,4.646621);
   hbadmatch_stack_1->SetBinContent(3,4.086871);
   hbadmatch_stack_1->SetBinContent(4,7.512962);
   hbadmatch_stack_1->SetBinContent(5,7.918541);
   hbadmatch_stack_1->SetBinContent(6,10.56575);
   hbadmatch_stack_1->SetBinContent(7,5.92908);
   hbadmatch_stack_1->SetBinContent(8,9.205011);
   hbadmatch_stack_1->SetBinContent(9,7.184961);
   hbadmatch_stack_1->SetBinContent(10,6.253756);
   hbadmatch_stack_1->SetBinContent(11,7.205875);
   hbadmatch_stack_1->SetBinContent(12,7.043155);
   hbadmatch_stack_1->SetBinContent(13,4.128277);
   hbadmatch_stack_1->SetBinContent(14,3.419726);
   hbadmatch_stack_1->SetBinContent(15,2.186293);
   hbadmatch_stack_1->SetBinContent(16,5.43236);
   hbadmatch_stack_1->SetBinContent(17,8.391083);
   hbadmatch_stack_1->SetBinContent(18,2.585508);
   hbadmatch_stack_1->SetBinContent(19,5.313882);
   hbadmatch_stack_1->SetBinContent(20,2.351762);
   hbadmatch_stack_1->SetBinContent(21,3.739099);
   hbadmatch_stack_1->SetBinContent(22,2.755907);
   hbadmatch_stack_1->SetBinContent(23,2.780822);
   hbadmatch_stack_1->SetBinContent(24,1.235776);
   hbadmatch_stack_1->SetBinError(1,0.8349591);
   hbadmatch_stack_1->SetBinError(2,1.142742);
   hbadmatch_stack_1->SetBinError(3,1.131985);
   hbadmatch_stack_1->SetBinError(4,1.514284);
   hbadmatch_stack_1->SetBinError(5,1.400932);
   hbadmatch_stack_1->SetBinError(6,2.218155);
   hbadmatch_stack_1->SetBinError(7,1.279619);
   hbadmatch_stack_1->SetBinError(8,1.673898);
   hbadmatch_stack_1->SetBinError(9,1.423422);
   hbadmatch_stack_1->SetBinError(10,1.242181);
   hbadmatch_stack_1->SetBinError(11,1.375719);
   hbadmatch_stack_1->SetBinError(12,1.685016);
   hbadmatch_stack_1->SetBinError(13,1.005261);
   hbadmatch_stack_1->SetBinError(14,0.9089518);
   hbadmatch_stack_1->SetBinError(15,0.8356277);
   hbadmatch_stack_1->SetBinError(16,1.138481);
   hbadmatch_stack_1->SetBinError(17,2.410556);
   hbadmatch_stack_1->SetBinError(18,1.66552);
   hbadmatch_stack_1->SetBinError(19,1.266283);
   hbadmatch_stack_1->SetBinError(20,0.7229314);
   hbadmatch_stack_1->SetBinError(21,1.100704);
   hbadmatch_stack_1->SetBinError(22,0.8775986);
   hbadmatch_stack_1->SetBinError(23,0.9117367);
   hbadmatch_stack_1->SetBinError(24,0.8883289);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,5.904221);
   hext_stack_2->SetBinContent(2,10.3724);
   hext_stack_2->SetBinContent(3,13.58324);
   hext_stack_2->SetBinContent(4,25.00826);
   hext_stack_2->SetBinContent(5,26.33899);
   hext_stack_2->SetBinContent(6,26.02895);
   hext_stack_2->SetBinContent(7,22.20679);
   hext_stack_2->SetBinContent(8,22.18084);
   hext_stack_2->SetBinContent(9,17.99958);
   hext_stack_2->SetBinContent(10,18.49556);
   hext_stack_2->SetBinContent(11,22.04957);
   hext_stack_2->SetBinContent(12,18.71899);
   hext_stack_2->SetBinContent(13,20.41599);
   hext_stack_2->SetBinContent(14,17.49642);
   hext_stack_2->SetBinContent(15,10.048);
   hext_stack_2->SetBinContent(16,18.01829);
   hext_stack_2->SetBinContent(17,15.00057);
   hext_stack_2->SetBinContent(18,9.902369);
   hext_stack_2->SetBinContent(19,9.95862);
   hext_stack_2->SetBinContent(20,14.73961);
   hext_stack_2->SetBinContent(21,11.66281);
   hext_stack_2->SetBinContent(22,6.635217);
   hext_stack_2->SetBinContent(23,9.246394);
   hext_stack_2->SetBinContent(24,5.497622);
   hext_stack_2->SetBinError(1,1.641043);
   hext_stack_2->SetBinError(2,2.091996);
   hext_stack_2->SetBinError(3,2.469508);
   hext_stack_2->SetBinError(4,3.344702);
   hext_stack_2->SetBinError(5,3.307307);
   hext_stack_2->SetBinError(6,3.229651);
   hext_stack_2->SetBinError(7,3.048608);
   hext_stack_2->SetBinError(8,3.124498);
   hext_stack_2->SetBinError(9,2.71817);
   hext_stack_2->SetBinError(10,2.722619);
   hext_stack_2->SetBinError(11,2.995435);
   hext_stack_2->SetBinError(12,2.779403);
   hext_stack_2->SetBinError(13,2.917626);
   hext_stack_2->SetBinError(14,2.750534);
   hext_stack_2->SetBinError(15,2.066692);
   hext_stack_2->SetBinError(16,2.90716);
   hext_stack_2->SetBinError(17,2.458644);
   hext_stack_2->SetBinError(18,1.970725);
   hext_stack_2->SetBinError(19,2.100554);
   hext_stack_2->SetBinError(20,2.503411);
   hext_stack_2->SetBinError(21,2.235751);
   hext_stack_2->SetBinError(22,1.721504);
   hext_stack_2->SetBinError(23,1.968372);
   hext_stack_2->SetBinError(24,1.589874);
   hext_stack_2->SetEntries(946);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.6699317);
   hdirt_stack_3->SetBinContent(2,2.910529);
   hdirt_stack_3->SetBinContent(3,0.5511934);
   hdirt_stack_3->SetBinContent(4,3.944101);
   hdirt_stack_3->SetBinContent(5,4.306152);
   hdirt_stack_3->SetBinContent(6,2.247111);
   hdirt_stack_3->SetBinContent(7,2.276246);
   hdirt_stack_3->SetBinContent(8,1.777086);
   hdirt_stack_3->SetBinContent(9,2.297187);
   hdirt_stack_3->SetBinContent(10,1.520518);
   hdirt_stack_3->SetBinContent(11,3.295242);
   hdirt_stack_3->SetBinContent(12,1.21377);
   hdirt_stack_3->SetBinContent(13,1.190193);
   hdirt_stack_3->SetBinContent(14,1.036399);
   hdirt_stack_3->SetBinContent(15,3.286248);
   hdirt_stack_3->SetBinContent(16,1.307058);
   hdirt_stack_3->SetBinContent(17,0.9968856);
   hdirt_stack_3->SetBinContent(18,2.761688);
   hdirt_stack_3->SetBinContent(19,2.721387);
   hdirt_stack_3->SetBinContent(20,0.4950385);
   hdirt_stack_3->SetBinContent(21,1.485541);
   hdirt_stack_3->SetBinContent(22,2.525189);
   hdirt_stack_3->SetBinContent(23,3.142966);
   hdirt_stack_3->SetBinContent(24,1.307004);
   hdirt_stack_3->SetBinError(1,0.4395418);
   hdirt_stack_3->SetBinError(2,0.993856);
   hdirt_stack_3->SetBinError(3,0.4355841);
   hdirt_stack_3->SetBinError(4,1.430222);
   hdirt_stack_3->SetBinError(5,1.100375);
   hdirt_stack_3->SetBinError(6,0.7757267);
   hdirt_stack_3->SetBinError(7,0.7250287);
   hdirt_stack_3->SetBinError(8,0.663324);
   hdirt_stack_3->SetBinError(9,0.7310123);
   hdirt_stack_3->SetBinError(10,0.5509224);
   hdirt_stack_3->SetBinError(11,1.19348);
   hdirt_stack_3->SetBinError(12,0.5532013);
   hdirt_stack_3->SetBinError(13,0.5170999);
   hdirt_stack_3->SetBinError(14,0.4663936);
   hdirt_stack_3->SetBinError(15,1.010054);
   hdirt_stack_3->SetBinError(16,0.5247988);
   hdirt_stack_3->SetBinError(17,0.4766528);
   hdirt_stack_3->SetBinError(18,0.9663226);
   hdirt_stack_3->SetBinError(19,0.8262533);
   hdirt_stack_3->SetBinError(20,0.2933304);
   hdirt_stack_3->SetBinError(21,0.6290763);
   hdirt_stack_3->SetBinError(22,0.759156);
   hdirt_stack_3->SetBinError(23,0.9745154);
   hdirt_stack_3->SetBinError(24,0.6194173);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,8.196064);
   houtFV_stack_4->SetBinContent(2,16.64695);
   houtFV_stack_4->SetBinContent(3,14.05497);
   houtFV_stack_4->SetBinContent(4,23.14297);
   houtFV_stack_4->SetBinContent(5,24.44043);
   houtFV_stack_4->SetBinContent(6,27.28347);
   houtFV_stack_4->SetBinContent(7,24.61949);
   houtFV_stack_4->SetBinContent(8,21.75906);
   houtFV_stack_4->SetBinContent(9,22.52314);
   houtFV_stack_4->SetBinContent(10,21.06461);
   houtFV_stack_4->SetBinContent(11,19.16224);
   houtFV_stack_4->SetBinContent(12,15.70833);
   houtFV_stack_4->SetBinContent(13,11.43345);
   houtFV_stack_4->SetBinContent(14,10.68078);
   houtFV_stack_4->SetBinContent(15,11.43203);
   houtFV_stack_4->SetBinContent(16,11.05199);
   houtFV_stack_4->SetBinContent(17,9.574634);
   houtFV_stack_4->SetBinContent(18,13.10874);
   houtFV_stack_4->SetBinContent(19,13.73278);
   houtFV_stack_4->SetBinContent(20,15.01898);
   houtFV_stack_4->SetBinContent(21,16.98789);
   houtFV_stack_4->SetBinContent(22,20.43564);
   houtFV_stack_4->SetBinContent(23,16.25939);
   houtFV_stack_4->SetBinContent(24,8.905365);
   houtFV_stack_4->SetBinError(1,1.505793);
   houtFV_stack_4->SetBinError(2,2.049154);
   houtFV_stack_4->SetBinError(3,1.932772);
   houtFV_stack_4->SetBinError(4,2.425904);
   houtFV_stack_4->SetBinError(5,2.493267);
   houtFV_stack_4->SetBinError(6,2.59615);
   houtFV_stack_4->SetBinError(7,2.486948);
   houtFV_stack_4->SetBinError(8,2.378372);
   houtFV_stack_4->SetBinError(9,2.357046);
   houtFV_stack_4->SetBinError(10,2.224101);
   houtFV_stack_4->SetBinError(11,2.177428);
   houtFV_stack_4->SetBinError(12,2.04141);
   houtFV_stack_4->SetBinError(13,1.610118);
   houtFV_stack_4->SetBinError(14,1.655168);
   houtFV_stack_4->SetBinError(15,1.653842);
   houtFV_stack_4->SetBinError(16,1.63027);
   houtFV_stack_4->SetBinError(17,1.526103);
   houtFV_stack_4->SetBinError(18,1.850055);
   houtFV_stack_4->SetBinError(19,1.851633);
   houtFV_stack_4->SetBinError(20,1.925413);
   houtFV_stack_4->SetBinError(21,2.042083);
   houtFV_stack_4->SetBinError(22,2.257415);
   houtFV_stack_4->SetBinError(23,2.0104);
   houtFV_stack_4->SetBinError(24,1.471308);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.506608);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.354897);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.877452);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.511854);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,9.676523);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,10.50058);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,9.453323);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.551035);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.993699);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.655659);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.574624);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.110366);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.703652);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.636234);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.301762);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.226608);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.898376);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.282408);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.230184);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.812844);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.492326);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.25958);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.924276);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.198708);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4319288);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4381902);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6408965);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8419144);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.026859);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.096217);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.023823);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7397065);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.719795);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6488427);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7135959);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5914701);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5234548);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6077522);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.530105);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3560243);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5312666);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.358204);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5291863);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4567469);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4392262);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5353411);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4230513);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3549294);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9627222);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.603926);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.11908);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.147644);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.213654);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.409122);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.351658);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.953344);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.33904);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.031972);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.36594);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.505944);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.060704);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.9212041);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5437177);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3631504);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4427564);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4802842);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4668604);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3257683);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3799115);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3228677);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.5143295);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3861776);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3283469);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.312868);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4472753);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.35757);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3520856);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1480721);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05579997);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,30.69927);
   hNCpi0inFVres_stack_7->SetBinContent(2,38.39171);
   hNCpi0inFVres_stack_7->SetBinContent(3,55.4035);
   hNCpi0inFVres_stack_7->SetBinContent(4,101.1986);
   hNCpi0inFVres_stack_7->SetBinContent(5,172.8347);
   hNCpi0inFVres_stack_7->SetBinContent(6,198.6858);
   hNCpi0inFVres_stack_7->SetBinContent(7,204.6084);
   hNCpi0inFVres_stack_7->SetBinContent(8,197.9727);
   hNCpi0inFVres_stack_7->SetBinContent(9,191.3388);
   hNCpi0inFVres_stack_7->SetBinContent(10,178.9741);
   hNCpi0inFVres_stack_7->SetBinContent(11,163.6379);
   hNCpi0inFVres_stack_7->SetBinContent(12,153.5192);
   hNCpi0inFVres_stack_7->SetBinContent(13,129.6311);
   hNCpi0inFVres_stack_7->SetBinContent(14,106.4931);
   hNCpi0inFVres_stack_7->SetBinContent(15,86.2253);
   hNCpi0inFVres_stack_7->SetBinContent(16,76.43751);
   hNCpi0inFVres_stack_7->SetBinContent(17,65.09113);
   hNCpi0inFVres_stack_7->SetBinContent(18,56.94978);
   hNCpi0inFVres_stack_7->SetBinContent(19,49.94017);
   hNCpi0inFVres_stack_7->SetBinContent(20,49.69474);
   hNCpi0inFVres_stack_7->SetBinContent(21,49.8781);
   hNCpi0inFVres_stack_7->SetBinContent(22,48.30786);
   hNCpi0inFVres_stack_7->SetBinContent(23,43.25232);
   hNCpi0inFVres_stack_7->SetBinContent(24,21.05645);
   hNCpi0inFVres_stack_7->SetBinError(1,1.856765);
   hNCpi0inFVres_stack_7->SetBinError(2,1.992199);
   hNCpi0inFVres_stack_7->SetBinError(3,2.486347);
   hNCpi0inFVres_stack_7->SetBinError(4,3.184969);
   hNCpi0inFVres_stack_7->SetBinError(5,4.303947);
   hNCpi0inFVres_stack_7->SetBinError(6,4.594563);
   hNCpi0inFVres_stack_7->SetBinError(7,4.697586);
   hNCpi0inFVres_stack_7->SetBinError(8,4.591475);
   hNCpi0inFVres_stack_7->SetBinError(9,4.55392);
   hNCpi0inFVres_stack_7->SetBinError(10,4.447159);
   hNCpi0inFVres_stack_7->SetBinError(11,4.205723);
   hNCpi0inFVres_stack_7->SetBinError(12,4.108258);
   hNCpi0inFVres_stack_7->SetBinError(13,3.726529);
   hNCpi0inFVres_stack_7->SetBinError(14,3.393543);
   hNCpi0inFVres_stack_7->SetBinError(15,3.030272);
   hNCpi0inFVres_stack_7->SetBinError(16,2.861907);
   hNCpi0inFVres_stack_7->SetBinError(17,2.626145);
   hNCpi0inFVres_stack_7->SetBinError(18,2.482051);
   hNCpi0inFVres_stack_7->SetBinError(19,2.223487);
   hNCpi0inFVres_stack_7->SetBinError(20,2.276735);
   hNCpi0inFVres_stack_7->SetBinError(21,2.316225);
   hNCpi0inFVres_stack_7->SetBinError(22,2.222131);
   hNCpi0inFVres_stack_7->SetBinError(23,2.184594);
   hNCpi0inFVres_stack_7->SetBinError(24,1.518771);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.511349);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.246735);
   hNCpi0inFVdis_stack_8->SetBinContent(3,16.57782);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.63539);
   hNCpi0inFVdis_stack_8->SetBinContent(5,40.99474);
   hNCpi0inFVdis_stack_8->SetBinContent(6,36.60212);
   hNCpi0inFVdis_stack_8->SetBinContent(7,36.84043);
   hNCpi0inFVdis_stack_8->SetBinContent(8,34.38606);
   hNCpi0inFVdis_stack_8->SetBinContent(9,30.31048);
   hNCpi0inFVdis_stack_8->SetBinContent(10,30.0828);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.41658);
   hNCpi0inFVdis_stack_8->SetBinContent(12,23.76026);
   hNCpi0inFVdis_stack_8->SetBinContent(13,26.16981);
   hNCpi0inFVdis_stack_8->SetBinContent(14,19.95457);
   hNCpi0inFVdis_stack_8->SetBinContent(15,16.37984);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.59316);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.47924);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.86145);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.14766);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.339219);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.288);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.103401);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.741533);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.603188);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7813726);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.029887);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.354216);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.629698);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.108408);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.963535);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.93134);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.918552);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.812693);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.806186);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.595608);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.571273);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.693145);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.495464);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.262286);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.141724);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.191599);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.067951);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.011616);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9180262);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.022998);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9388474);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9437061);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.704631);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.153118);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1050124);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,10.55061);
   hCCpi0inFV_stack_10->SetBinContent(2,14.48408);
   hCCpi0inFV_stack_10->SetBinContent(3,20.60896);
   hCCpi0inFV_stack_10->SetBinContent(4,42.45533);
   hCCpi0inFV_stack_10->SetBinContent(5,56.29622);
   hCCpi0inFV_stack_10->SetBinContent(6,63.66931);
   hCCpi0inFV_stack_10->SetBinContent(7,61.96903);
   hCCpi0inFV_stack_10->SetBinContent(8,51.10889);
   hCCpi0inFV_stack_10->SetBinContent(9,61.79778);
   hCCpi0inFV_stack_10->SetBinContent(10,50.65199);
   hCCpi0inFV_stack_10->SetBinContent(11,52.83338);
   hCCpi0inFV_stack_10->SetBinContent(12,37.52364);
   hCCpi0inFV_stack_10->SetBinContent(13,35.02962);
   hCCpi0inFV_stack_10->SetBinContent(14,31.19318);
   hCCpi0inFV_stack_10->SetBinContent(15,26.11538);
   hCCpi0inFV_stack_10->SetBinContent(16,29.41624);
   hCCpi0inFV_stack_10->SetBinContent(17,21.32668);
   hCCpi0inFV_stack_10->SetBinContent(18,19.27003);
   hCCpi0inFV_stack_10->SetBinContent(19,16.76469);
   hCCpi0inFV_stack_10->SetBinContent(20,15.14751);
   hCCpi0inFV_stack_10->SetBinContent(21,15.87697);
   hCCpi0inFV_stack_10->SetBinContent(22,12.76139);
   hCCpi0inFV_stack_10->SetBinContent(23,18.79619);
   hCCpi0inFV_stack_10->SetBinContent(24,10.27416);
   hCCpi0inFV_stack_10->SetBinError(1,1.711303);
   hCCpi0inFV_stack_10->SetBinError(2,1.921013);
   hCCpi0inFV_stack_10->SetBinError(3,2.245048);
   hCCpi0inFV_stack_10->SetBinError(4,3.260041);
   hCCpi0inFV_stack_10->SetBinError(5,3.695483);
   hCCpi0inFV_stack_10->SetBinError(6,3.991674);
   hCCpi0inFV_stack_10->SetBinError(7,3.958735);
   hCCpi0inFV_stack_10->SetBinError(8,3.511502);
   hCCpi0inFV_stack_10->SetBinError(9,3.947303);
   hCCpi0inFV_stack_10->SetBinError(10,3.621683);
   hCCpi0inFV_stack_10->SetBinError(11,3.668009);
   hCCpi0inFV_stack_10->SetBinError(12,3.012904);
   hCCpi0inFV_stack_10->SetBinError(13,2.976708);
   hCCpi0inFV_stack_10->SetBinError(14,2.840365);
   hCCpi0inFV_stack_10->SetBinError(15,2.541701);
   hCCpi0inFV_stack_10->SetBinError(16,2.739814);
   hCCpi0inFV_stack_10->SetBinError(17,2.321452);
   hCCpi0inFV_stack_10->SetBinError(18,2.232701);
   hCCpi0inFV_stack_10->SetBinError(19,2.047506);
   hCCpi0inFV_stack_10->SetBinError(20,1.927799);
   hCCpi0inFV_stack_10->SetBinError(21,2.011191);
   hCCpi0inFV_stack_10->SetBinError(22,1.743866);
   hCCpi0inFV_stack_10->SetBinError(23,2.193488);
   hCCpi0inFV_stack_10->SetBinError(24,1.584898);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,9.683144);
   hNCinFV_stack_11->SetBinContent(2,12.28961);
   hNCinFV_stack_11->SetBinContent(3,15.12815);
   hNCinFV_stack_11->SetBinContent(4,26.87035);
   hNCinFV_stack_11->SetBinContent(5,32.17757);
   hNCinFV_stack_11->SetBinContent(6,31.06345);
   hNCinFV_stack_11->SetBinContent(7,22.83024);
   hNCinFV_stack_11->SetBinContent(8,30.87072);
   hNCinFV_stack_11->SetBinContent(9,27.70647);
   hNCinFV_stack_11->SetBinContent(10,25.7473);
   hNCinFV_stack_11->SetBinContent(11,26.4081);
   hNCinFV_stack_11->SetBinContent(12,22.97878);
   hNCinFV_stack_11->SetBinContent(13,22.52148);
   hNCinFV_stack_11->SetBinContent(14,20.74874);
   hNCinFV_stack_11->SetBinContent(15,14.32908);
   hNCinFV_stack_11->SetBinContent(16,14.47085);
   hNCinFV_stack_11->SetBinContent(17,16.79171);
   hNCinFV_stack_11->SetBinContent(18,13.86164);
   hNCinFV_stack_11->SetBinContent(19,11.62893);
   hNCinFV_stack_11->SetBinContent(20,12.07223);
   hNCinFV_stack_11->SetBinContent(21,8.551033);
   hNCinFV_stack_11->SetBinContent(22,8.009068);
   hNCinFV_stack_11->SetBinContent(23,6.803654);
   hNCinFV_stack_11->SetBinContent(24,5.086469);
   hNCinFV_stack_11->SetBinError(1,1.546031);
   hNCinFV_stack_11->SetBinError(2,1.841011);
   hNCinFV_stack_11->SetBinError(3,1.961075);
   hNCinFV_stack_11->SetBinError(4,2.59596);
   hNCinFV_stack_11->SetBinError(5,2.88413);
   hNCinFV_stack_11->SetBinError(6,2.802564);
   hNCinFV_stack_11->SetBinError(7,2.346492);
   hNCinFV_stack_11->SetBinError(8,2.831187);
   hNCinFV_stack_11->SetBinError(9,2.579829);
   hNCinFV_stack_11->SetBinError(10,2.582335);
   hNCinFV_stack_11->SetBinError(11,2.636804);
   hNCinFV_stack_11->SetBinError(12,2.363268);
   hNCinFV_stack_11->SetBinError(13,2.436922);
   hNCinFV_stack_11->SetBinError(14,2.321858);
   hNCinFV_stack_11->SetBinError(15,1.829933);
   hNCinFV_stack_11->SetBinError(16,1.85068);
   hNCinFV_stack_11->SetBinError(17,1.983181);
   hNCinFV_stack_11->SetBinError(18,1.923079);
   hNCinFV_stack_11->SetBinError(19,1.722556);
   hNCinFV_stack_11->SetBinError(20,1.733477);
   hNCinFV_stack_11->SetBinError(21,1.455238);
   hNCinFV_stack_11->SetBinError(22,1.400469);
   hNCinFV_stack_11->SetBinError(23,1.257016);
   hNCinFV_stack_11->SetBinError(24,1.092469);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,16.51668);
   hnumuCCinFV_stack_12->SetBinContent(2,15.71674);
   hnumuCCinFV_stack_12->SetBinContent(3,14.85754);
   hnumuCCinFV_stack_12->SetBinContent(4,21.29042);
   hnumuCCinFV_stack_12->SetBinContent(5,29.85437);
   hnumuCCinFV_stack_12->SetBinContent(6,29.48959);
   hnumuCCinFV_stack_12->SetBinContent(7,31.75208);
   hnumuCCinFV_stack_12->SetBinContent(8,28.67329);
   hnumuCCinFV_stack_12->SetBinContent(9,31.40439);
   hnumuCCinFV_stack_12->SetBinContent(10,21.62645);
   hnumuCCinFV_stack_12->SetBinContent(11,26.17025);
   hnumuCCinFV_stack_12->SetBinContent(12,20.99232);
   hnumuCCinFV_stack_12->SetBinContent(13,23.31405);
   hnumuCCinFV_stack_12->SetBinContent(14,19.07302);
   hnumuCCinFV_stack_12->SetBinContent(15,17.54548);
   hnumuCCinFV_stack_12->SetBinContent(16,18.98247);
   hnumuCCinFV_stack_12->SetBinContent(17,12.66335);
   hnumuCCinFV_stack_12->SetBinContent(18,12.68234);
   hnumuCCinFV_stack_12->SetBinContent(19,13.27921);
   hnumuCCinFV_stack_12->SetBinContent(20,9.039328);
   hnumuCCinFV_stack_12->SetBinContent(21,9.481334);
   hnumuCCinFV_stack_12->SetBinContent(22,6.689576);
   hnumuCCinFV_stack_12->SetBinContent(23,3.979615);
   hnumuCCinFV_stack_12->SetBinContent(24,4.329898);
   hnumuCCinFV_stack_12->SetBinError(1,2.537546);
   hnumuCCinFV_stack_12->SetBinError(2,2.167841);
   hnumuCCinFV_stack_12->SetBinError(3,2.023289);
   hnumuCCinFV_stack_12->SetBinError(4,2.418195);
   hnumuCCinFV_stack_12->SetBinError(5,3.43548);
   hnumuCCinFV_stack_12->SetBinError(6,2.811634);
   hnumuCCinFV_stack_12->SetBinError(7,3.362294);
   hnumuCCinFV_stack_12->SetBinError(8,3.204064);
   hnumuCCinFV_stack_12->SetBinError(9,4.431295);
   hnumuCCinFV_stack_12->SetBinError(10,2.547712);
   hnumuCCinFV_stack_12->SetBinError(11,2.975612);
   hnumuCCinFV_stack_12->SetBinError(12,2.518625);
   hnumuCCinFV_stack_12->SetBinError(13,2.737031);
   hnumuCCinFV_stack_12->SetBinError(14,2.270962);
   hnumuCCinFV_stack_12->SetBinError(15,2.530363);
   hnumuCCinFV_stack_12->SetBinError(16,2.383234);
   hnumuCCinFV_stack_12->SetBinError(17,1.962564);
   hnumuCCinFV_stack_12->SetBinError(18,1.878436);
   hnumuCCinFV_stack_12->SetBinError(19,2.015574);
   hnumuCCinFV_stack_12->SetBinError(20,1.670541);
   hnumuCCinFV_stack_12->SetBinError(21,1.626003);
   hnumuCCinFV_stack_12->SetBinError(22,1.544975);
   hnumuCCinFV_stack_12->SetBinError(23,0.9942383);
   hnumuCCinFV_stack_12->SetBinError(24,1.059405);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,6.729242);
   hnueCCinFV_stack_13->SetBinContent(2,4.665857);
   hnueCCinFV_stack_13->SetBinContent(3,2.064749);
   hnueCCinFV_stack_13->SetBinContent(4,3.735857);
   hnueCCinFV_stack_13->SetBinContent(5,1.780041);
   hnueCCinFV_stack_13->SetBinContent(6,3.287332);
   hnueCCinFV_stack_13->SetBinContent(7,1.760275);
   hnueCCinFV_stack_13->SetBinContent(8,1.320373);
   hnueCCinFV_stack_13->SetBinContent(9,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(10,1.000725);
   hnueCCinFV_stack_13->SetBinContent(11,0.6494526);
   hnueCCinFV_stack_13->SetBinContent(12,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(14,0.9332143);
   hnueCCinFV_stack_13->SetBinContent(16,1.664306);
   hnueCCinFV_stack_13->SetBinContent(17,1.776842);
   hnueCCinFV_stack_13->SetBinContent(18,1.041502);
   hnueCCinFV_stack_13->SetBinContent(19,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(20,1.452853);
   hnueCCinFV_stack_13->SetBinContent(21,1.050714);
   hnueCCinFV_stack_13->SetBinContent(22,1.76798);
   hnueCCinFV_stack_13->SetBinContent(23,2.186121);
   hnueCCinFV_stack_13->SetBinContent(24,0.2655223);
   hnueCCinFV_stack_13->SetBinError(1,2.116942);
   hnueCCinFV_stack_13->SetBinError(2,1.222236);
   hnueCCinFV_stack_13->SetBinError(3,0.7577691);
   hnueCCinFV_stack_13->SetBinError(4,1.031807);
   hnueCCinFV_stack_13->SetBinError(5,0.6435187);
   hnueCCinFV_stack_13->SetBinError(6,1.471932);
   hnueCCinFV_stack_13->SetBinError(7,0.7585711);
   hnueCCinFV_stack_13->SetBinError(8,0.5548703);
   hnueCCinFV_stack_13->SetBinError(9,0.4383608);
   hnueCCinFV_stack_13->SetBinError(10,0.5349103);
   hnueCCinFV_stack_13->SetBinError(11,0.3778196);
   hnueCCinFV_stack_13->SetBinError(12,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.4156841);
   hnueCCinFV_stack_13->SetBinError(14,0.5581114);
   hnueCCinFV_stack_13->SetBinError(16,0.708606);
   hnueCCinFV_stack_13->SetBinError(17,0.914822);
   hnueCCinFV_stack_13->SetBinError(18,0.6015552);
   hnueCCinFV_stack_13->SetBinError(19,0.2781975);
   hnueCCinFV_stack_13->SetBinError(20,0.678412);
   hnueCCinFV_stack_13->SetBinError(21,0.6567675);
   hnueCCinFV_stack_13->SetBinError(22,0.7003296);
   hnueCCinFV_stack_13->SetBinError(23,1.188703);
   hnueCCinFV_stack_13->SetBinError(24,0.2606792);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__5->SetBinContent(1,99.53165);
   hmcerror__5->SetBinContent(2,132.089);
   hmcerror__5->SetBinContent(3,161.2123);
   hmcerror__5->SetBinContent(4,287.8221);
   hmcerror__5->SetBinContent(5,407.8044);
   hmcerror__5->SetBinContent(6,441.0832);
   hmcerror__5->SetBinContent(7,426.3645);
   hmcerror__5->SetBinContent(8,407.9527);
   hmcerror__5->SetBinContent(9,400.8062);
   hmcerror__5->SetBinContent(10,361.5663);
   hmcerror__5->SetBinContent(11,351.7828);
   hmcerror__5->SetBinContent(12,307.3382);
   hmcerror__5->SetBinContent(13,278.8711);
   hmcerror__5->SetBinContent(14,234.7252);
   hmcerror__5->SetBinContent(15,191.2433);
   hmcerror__5->SetBinContent(16,193.1347);
   hmcerror__5->SetBinContent(17,168.107);
   hmcerror__5->SetBinContent(18,145.2566);
   hmcerror__5->SetBinContent(19,136.9059);
   hmcerror__5->SetBinContent(20,131.5962);
   hmcerror__5->SetBinContent(21,131.2888);
   hmcerror__5->SetBinContent(22,121.766);
   hmcerror__5->SetBinContent(23,117.3923);
   hmcerror__5->SetBinContent(24,63.87176);
   hmcerror__5->SetBinError(1,37.44293);
   hmcerror__5->SetBinError(2,42.15193);
   hmcerror__5->SetBinError(3,45.96338);
   hmcerror__5->SetBinError(4,76.11442);
   hmcerror__5->SetBinError(5,118.0765);
   hmcerror__5->SetBinError(6,140.6748);
   hmcerror__5->SetBinError(7,133.2991);
   hmcerror__5->SetBinError(8,122.4557);
   hmcerror__5->SetBinError(9,115.0196);
   hmcerror__5->SetBinError(10,101.8019);
   hmcerror__5->SetBinError(11,106.0052);
   hmcerror__5->SetBinError(12,83.44882);
   hmcerror__5->SetBinError(13,75.56801);
   hmcerror__5->SetBinError(14,63.43701);
   hmcerror__5->SetBinError(15,73.51328);
   hmcerror__5->SetBinError(16,50.53222);
   hmcerror__5->SetBinError(17,47.50311);
   hmcerror__5->SetBinError(18,37.97063);
   hmcerror__5->SetBinError(19,35.33265);
   hmcerror__5->SetBinError(20,41.34989);
   hmcerror__5->SetBinError(21,34.80416);
   hmcerror__5->SetBinError(22,33.11873);
   hmcerror__5->SetBinError(23,33.57817);
   hmcerror__5->SetBinError(24,19.91569);
   hmcerror__5->SetBinError(25,0.3895343);
   hmcerror__5->SetEntries(5638.682);

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
   Double_t _fy3005[24] = {
   84,
   105,
   159,
   253,
   319,
   327,
   347,
   333,
   364,
   330,
   282,
   290,
   236,
   195,
   191,
   169,
   157,
   140,
   127,
   124,
   125,
   120,
   135,
   62};
   Double_t _felx3005[24] = {
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
   Double_t _fely3005[24] = {
   9.2886,
   10.24695,
   12.60952,
   15.90597,
   17.86057,
   18.08314,
   18.62794,
   18.24829,
   19.07878,
   18.1659,
   16.79286,
   17.02939,
   15.36229,
   13.96424,
   13.82027,
   13,
   12.52996,
   11.83216,
   11.26943,
   11.13553,
   11.18034,
   10.95445,
   11.61895,
   8.0018};
   Double_t _fehx3005[24] = {
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
   Double_t _fehy3005[24] = {
   9.0869,
   10.24695,
   12.60952,
   15.90597,
   17.86057,
   18.08314,
   18.62794,
   18.24829,
   19.07878,
   18.1659,
   16.79286,
   17.02939,
   15.36229,
   13.96424,
   13.82027,
   13,
   12.52996,
   11.83216,
   11.26943,
   11.13553,
   11.18034,
   10.95445,
   11.61895,
   7.7989};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,3.465);
   Graph_Graph3005->SetMinimum(21.09014);
   Graph_Graph3005->SetMaximum(415.9868);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 377.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fely3006[24] = {
   0.3761912,
   0.3191177,
   0.2851109,
   0.2644495,
   0.2895421,
   0.3189302,
   0.3126413,
   0.3001713,
   0.2869706,
   0.281558,
   0.301337,
   0.2715211,
   0.2709783,
   0.2702607,
   0.3843967,
   0.2616424,
   0.2825767,
   0.2614039,
   0.2580798,
   0.3142179,
   0.2650962,
   0.2719867,
   0.2860339,
   0.3118075};
   Double_t _fehx3006[24] = {
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
   Double_t _fehy3006[24] = {
   0.3761912,
   0.3191177,
   0.2851109,
   0.2644495,
   0.2895421,
   0.3189302,
   0.3126413,
   0.3001713,
   0.2869706,
   0.281558,
   0.301337,
   0.2715211,
   0.2709783,
   0.2702607,
   0.3843967,
   0.2616424,
   0.2825767,
   0.2614039,
   0.2580798,
   0.3142179,
   0.2650962,
   0.2719867,
   0.2860339,
   0.3118075};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,3.465);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
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
   
   Double_t _fx3007[24] = {
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
   Double_t _fely3007[24] = {
   0.2186103,
   0.2111152,
   0.2207967,
   0.2306997,
   0.2777648,
   0.2999593,
   0.287921,
   0.287231,
   0.2738377,
   0.2697709,
   0.2645125,
   0.2546933,
   0.2473941,
   0.2373839,
   0.2577747,
   0.2249254,
   0.232561,
   0.2136203,
   0.2162067,
   0.208691,
   0.2127196,
   0.2139119,
   0.2157768,
   0.2037924};
   Double_t _fehx3007[24] = {
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
   Double_t _fehy3007[24] = {
   0.2186103,
   0.2111152,
   0.2207967,
   0.2306997,
   0.2777648,
   0.2999593,
   0.287921,
   0.287231,
   0.2738377,
   0.2697709,
   0.2645125,
   0.2546933,
   0.2473941,
   0.2373839,
   0.2577747,
   0.2249254,
   0.232561,
   0.2136203,
   0.2162067,
   0.208691,
   0.2127196,
   0.2139119,
   0.2157768,
   0.2037924};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,3.465);
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
   Double_t _fy3008[24] = {
   0.8439527,
   0.7949187,
   0.9862772,
   0.8790152,
   0.7822379,
   0.7413567,
   0.8138577,
   0.816271,
   0.9081696,
   0.9126957,
   0.8016311,
   0.9435858,
   0.8462691,
   0.8307586,
   0.998728,
   0.875037,
   0.9339291,
   0.9638118,
   0.9276443,
   0.9422763,
   0.9520996,
   0.9854971,
   1.14999,
   0.970695};
   Double_t _felx3008[24] = {
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
   Double_t _fely3008[24] = {
   0.09332308,
   0.07757613,
   0.07821687,
   0.05526321,
   0.04379691,
   0.04099712,
   0.04369017,
   0.04473138,
   0.04760102,
   0.05024225,
   0.04773644,
   0.05540927,
   0.05508743,
   0.05949186,
   0.07226542,
   0.06731054,
   0.07453566,
   0.08145696,
   0.08231512,
   0.08461891,
   0.08515838,
   0.08996316,
   0.09897542,
   0.1252792};
   Double_t _fehx3008[24] = {
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
   Double_t _fehy3008[24] = {
   0.09129659,
   0.07757613,
   0.07821687,
   0.05526321,
   0.04379691,
   0.04099712,
   0.04369017,
   0.04473138,
   0.04760102,
   0.05024225,
   0.04773644,
   0.05540927,
   0.05508743,
   0.05949186,
   0.07226542,
   0.06731054,
   0.07453566,
   0.08145696,
   0.08231512,
   0.08461891,
   0.08515838,
   0.08996316,
   0.09897542,
   0.1221025};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,3.465);
   Graph_Graph3008->SetMinimum(0.6454989);
   Graph_Graph3008->SetMaximum(1.303826);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_gamma_gamma_angle_all",24,0,3.15);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

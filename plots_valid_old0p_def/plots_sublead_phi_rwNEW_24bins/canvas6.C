#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 13:51:04 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
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
   pad1->Range(-4.119231,-3.18,3.957692,351.6411);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__16->SetBinContent(1,117.1314);
   hmc__16->SetBinContent(2,122.1356);
   hmc__16->SetBinContent(3,125.8191);
   hmc__16->SetBinContent(4,118.4361);
   hmc__16->SetBinContent(5,104.7556);
   hmc__16->SetBinContent(6,116.941);
   hmc__16->SetBinContent(7,126.9016);
   hmc__16->SetBinContent(8,117.2538);
   hmc__16->SetBinContent(9,117.63);
   hmc__16->SetBinContent(10,113.6485);
   hmc__16->SetBinContent(11,129.6676);
   hmc__16->SetBinContent(12,123.6452);
   hmc__16->SetBinContent(13,125.5906);
   hmc__16->SetBinContent(14,125.8737);
   hmc__16->SetBinContent(15,130.0923);
   hmc__16->SetBinContent(16,123.285);
   hmc__16->SetBinContent(17,133.0293);
   hmc__16->SetBinContent(18,126.1447);
   hmc__16->SetBinContent(19,113.6766);
   hmc__16->SetBinContent(20,123.0342);
   hmc__16->SetBinContent(21,123.8962);
   hmc__16->SetBinContent(22,128.2727);
   hmc__16->SetBinContent(23,132.5111);
   hmc__16->SetBinContent(24,126.7351);
   hmc__16->SetBinError(1,29.92322);
   hmc__16->SetBinError(2,33.91376);
   hmc__16->SetBinError(3,33.05184);
   hmc__16->SetBinError(4,37.33207);
   hmc__16->SetBinError(5,29.28089);
   hmc__16->SetBinError(6,30.906);
   hmc__16->SetBinError(7,31.21074);
   hmc__16->SetBinError(8,38.60751);
   hmc__16->SetBinError(9,35.05468);
   hmc__16->SetBinError(10,31.07727);
   hmc__16->SetBinError(11,43.8041);
   hmc__16->SetBinError(12,36.33234);
   hmc__16->SetBinError(13,35.33505);
   hmc__16->SetBinError(14,34.76948);
   hmc__16->SetBinError(15,39.30624);
   hmc__16->SetBinError(16,30.99335);
   hmc__16->SetBinError(17,41.13491);
   hmc__16->SetBinError(18,30.83356);
   hmc__16->SetBinError(19,31.17825);
   hmc__16->SetBinError(20,30.9803);
   hmc__16->SetBinError(21,33.39717);
   hmc__16->SetBinError(22,39.11294);
   hmc__16->SetBinError(23,36.4001);
   hmc__16->SetBinError(24,40.94352);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-3.18);
   hmc__16->SetMaximum(333.9);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,-3.15,3.15);
   hs6_stack_6->SetMinimum(-1.556429e-09);
   hs6_stack_6->SetMaximum(139.6808);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.707022);
   hbadmatch_stack_1->SetBinContent(2,3.241179);
   hbadmatch_stack_1->SetBinContent(3,2.506964);
   hbadmatch_stack_1->SetBinContent(4,3.94186);
   hbadmatch_stack_1->SetBinContent(5,1.322064);
   hbadmatch_stack_1->SetBinContent(6,3.857555);
   hbadmatch_stack_1->SetBinContent(7,4.4398);
   hbadmatch_stack_1->SetBinContent(8,2.828553);
   hbadmatch_stack_1->SetBinContent(9,1.823921);
   hbadmatch_stack_1->SetBinContent(10,0.8274837);
   hbadmatch_stack_1->SetBinContent(11,2.247316);
   hbadmatch_stack_1->SetBinContent(12,0.8242635);
   hbadmatch_stack_1->SetBinContent(13,1.999885);
   hbadmatch_stack_1->SetBinContent(14,4.005349);
   hbadmatch_stack_1->SetBinContent(15,2.93492);
   hbadmatch_stack_1->SetBinContent(16,2.900567);
   hbadmatch_stack_1->SetBinContent(17,2.816654);
   hbadmatch_stack_1->SetBinContent(18,1.828239);
   hbadmatch_stack_1->SetBinContent(19,2.570968);
   hbadmatch_stack_1->SetBinContent(20,4.115177);
   hbadmatch_stack_1->SetBinContent(21,3.485092);
   hbadmatch_stack_1->SetBinContent(22,3.463671);
   hbadmatch_stack_1->SetBinContent(23,2.910535);
   hbadmatch_stack_1->SetBinContent(24,2.563832);
   hbadmatch_stack_1->SetBinError(1,0.8868339);
   hbadmatch_stack_1->SetBinError(2,0.9405939);
   hbadmatch_stack_1->SetBinError(3,0.7770123);
   hbadmatch_stack_1->SetBinError(4,1.049762);
   hbadmatch_stack_1->SetBinError(5,0.5554667);
   hbadmatch_stack_1->SetBinError(6,1.019766);
   hbadmatch_stack_1->SetBinError(7,1.126931);
   hbadmatch_stack_1->SetBinError(8,0.933616);
   hbadmatch_stack_1->SetBinError(9,0.6726944);
   hbadmatch_stack_1->SetBinError(10,0.4155861);
   hbadmatch_stack_1->SetBinError(11,0.7337357);
   hbadmatch_stack_1->SetBinError(12,0.4139027);
   hbadmatch_stack_1->SetBinError(13,0.7309605);
   hbadmatch_stack_1->SetBinError(14,1.852878);
   hbadmatch_stack_1->SetBinError(15,0.9132073);
   hbadmatch_stack_1->SetBinError(16,0.9852586);
   hbadmatch_stack_1->SetBinError(17,0.84047);
   hbadmatch_stack_1->SetBinError(18,0.7181362);
   hbadmatch_stack_1->SetBinError(19,0.8109659);
   hbadmatch_stack_1->SetBinError(20,1.31933);
   hbadmatch_stack_1->SetBinError(21,1.007973);
   hbadmatch_stack_1->SetBinError(22,1.000129);
   hbadmatch_stack_1->SetBinError(23,1.718591);
   hbadmatch_stack_1->SetBinError(24,0.7482475);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.522578);
   hext_stack_2->SetBinContent(2,6.649578);
   hext_stack_2->SetBinContent(3,10.87556);
   hext_stack_2->SetBinContent(4,11.58779);
   hext_stack_2->SetBinContent(5,10.68962);
   hext_stack_2->SetBinContent(6,16.18006);
   hext_stack_2->SetBinContent(7,21.60707);
   hext_stack_2->SetBinContent(8,15.04523);
   hext_stack_2->SetBinContent(9,13.66267);
   hext_stack_2->SetBinContent(10,6.903363);
   hext_stack_2->SetBinContent(11,15.49813);
   hext_stack_2->SetBinContent(12,10.08548);
   hext_stack_2->SetBinContent(13,8.456316);
   hext_stack_2->SetBinContent(14,6.959614);
   hext_stack_2->SetBinContent(15,7.366213);
   hext_stack_2->SetBinContent(16,11.22308);
   hext_stack_2->SetBinContent(17,15.1418);
   hext_stack_2->SetBinContent(18,15.68849);
   hext_stack_2->SetBinContent(19,11.33123);
   hext_stack_2->SetBinContent(20,15.42311);
   hext_stack_2->SetBinContent(21,9.690475);
   hext_stack_2->SetBinContent(22,12.3419);
   hext_stack_2->SetBinContent(23,10.11861);
   hext_stack_2->SetBinContent(24,7.276832);
   hext_stack_2->SetBinError(1,1.84465);
   hext_stack_2->SetBinError(2,1.600367);
   hext_stack_2->SetBinError(3,2.049258);
   hext_stack_2->SetBinError(4,2.176532);
   hext_stack_2->SetBinError(5,2.163997);
   hext_stack_2->SetBinError(6,2.722459);
   hext_stack_2->SetBinError(7,3.132621);
   hext_stack_2->SetBinError(8,2.576738);
   hext_stack_2->SetBinError(9,2.548506);
   hext_stack_2->SetBinError(10,1.593813);
   hext_stack_2->SetBinError(11,2.80553);
   hext_stack_2->SetBinError(12,2.251014);
   hext_stack_2->SetBinError(13,2.177636);
   hext_stack_2->SetBinError(14,1.751802);
   hext_stack_2->SetBinError(15,1.79837);
   hext_stack_2->SetBinError(16,2.345836);
   hext_stack_2->SetBinError(17,2.509435);
   hext_stack_2->SetBinError(18,2.742753);
   hext_stack_2->SetBinError(19,2.257111);
   hext_stack_2->SetBinError(20,2.75857);
   hext_stack_2->SetBinError(21,2.199014);
   hext_stack_2->SetBinError(22,2.491205);
   hext_stack_2->SetBinError(23,2.096994);
   hext_stack_2->SetBinError(24,1.837184);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4356634);
   hdirt_stack_3->SetBinContent(2,1.235547);
   hdirt_stack_3->SetBinContent(3,1.452353);
   hdirt_stack_3->SetBinContent(4,1.971997);
   hdirt_stack_3->SetBinContent(5,1.256658);
   hdirt_stack_3->SetBinContent(6,2.360208);
   hdirt_stack_3->SetBinContent(7,0.971298);
   hdirt_stack_3->SetBinContent(8,2.121249);
   hdirt_stack_3->SetBinContent(9,1.275265);
   hdirt_stack_3->SetBinContent(10,2.875476);
   hdirt_stack_3->SetBinContent(11,1.621618);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,2.29413);
   hdirt_stack_3->SetBinContent(14,1.52838);
   hdirt_stack_3->SetBinContent(15,1.752422);
   hdirt_stack_3->SetBinContent(16,2.100737);
   hdirt_stack_3->SetBinContent(17,1.80274);
   hdirt_stack_3->SetBinContent(18,1.228385);
   hdirt_stack_3->SetBinContent(19,1.541218);
   hdirt_stack_3->SetBinContent(20,2.110675);
   hdirt_stack_3->SetBinContent(21,2.156129);
   hdirt_stack_3->SetBinContent(22,0.8126886);
   hdirt_stack_3->SetBinContent(23,1.374654);
   hdirt_stack_3->SetBinContent(24,1.390309);
   hdirt_stack_3->SetBinError(1,0.2521393);
   hdirt_stack_3->SetBinError(2,0.6322726);
   hdirt_stack_3->SetBinError(3,0.6625272);
   hdirt_stack_3->SetBinError(4,0.8158922);
   hdirt_stack_3->SetBinError(5,0.5165323);
   hdirt_stack_3->SetBinError(6,0.846084);
   hdirt_stack_3->SetBinError(7,0.4684838);
   hdirt_stack_3->SetBinError(8,0.6899738);
   hdirt_stack_3->SetBinError(9,0.6411534);
   hdirt_stack_3->SetBinError(10,1.258679);
   hdirt_stack_3->SetBinError(11,0.702374);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.8827084);
   hdirt_stack_3->SetBinError(14,0.6178697);
   hdirt_stack_3->SetBinError(15,0.6508923);
   hdirt_stack_3->SetBinError(16,0.6896243);
   hdirt_stack_3->SetBinError(17,0.7367471);
   hdirt_stack_3->SetBinError(18,0.5923187);
   hdirt_stack_3->SetBinError(19,0.6489417);
   hdirt_stack_3->SetBinError(20,0.8207916);
   hdirt_stack_3->SetBinError(21,0.7230454);
   hdirt_stack_3->SetBinError(22,0.4770956);
   hdirt_stack_3->SetBinError(23,0.6182019);
   hdirt_stack_3->SetBinError(24,0.6022451);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,13.42142);
   houtFV_stack_4->SetBinContent(2,12.69142);
   houtFV_stack_4->SetBinContent(3,12.90853);
   houtFV_stack_4->SetBinContent(4,11.86875);
   houtFV_stack_4->SetBinContent(5,11.39188);
   houtFV_stack_4->SetBinContent(6,9.127972);
   houtFV_stack_4->SetBinContent(7,10.35843);
   houtFV_stack_4->SetBinContent(8,9.181728);
   houtFV_stack_4->SetBinContent(9,11.87594);
   houtFV_stack_4->SetBinContent(10,13.65157);
   houtFV_stack_4->SetBinContent(11,13.82399);
   houtFV_stack_4->SetBinContent(12,13.79611);
   houtFV_stack_4->SetBinContent(13,12.02557);
   houtFV_stack_4->SetBinContent(14,14.10101);
   houtFV_stack_4->SetBinContent(15,14.9049);
   houtFV_stack_4->SetBinContent(16,15.21055);
   houtFV_stack_4->SetBinContent(17,11.63249);
   houtFV_stack_4->SetBinContent(18,13.19981);
   houtFV_stack_4->SetBinContent(19,11.07977);
   houtFV_stack_4->SetBinContent(20,10.61457);
   houtFV_stack_4->SetBinContent(21,14.1156);
   houtFV_stack_4->SetBinContent(22,14.5543);
   houtFV_stack_4->SetBinContent(23,13.00139);
   houtFV_stack_4->SetBinContent(24,13.6141);
   houtFV_stack_4->SetBinError(1,1.916048);
   houtFV_stack_4->SetBinError(2,1.748537);
   houtFV_stack_4->SetBinError(3,1.808516);
   houtFV_stack_4->SetBinError(4,1.72151);
   houtFV_stack_4->SetBinError(5,1.665383);
   houtFV_stack_4->SetBinError(6,1.4759);
   houtFV_stack_4->SetBinError(7,1.618539);
   houtFV_stack_4->SetBinError(8,1.475006);
   houtFV_stack_4->SetBinError(9,1.740035);
   houtFV_stack_4->SetBinError(10,1.913269);
   houtFV_stack_4->SetBinError(11,1.808063);
   houtFV_stack_4->SetBinError(12,1.879909);
   houtFV_stack_4->SetBinError(13,1.762836);
   houtFV_stack_4->SetBinError(14,1.885874);
   houtFV_stack_4->SetBinError(15,1.981625);
   houtFV_stack_4->SetBinError(16,1.951246);
   houtFV_stack_4->SetBinError(17,1.682675);
   houtFV_stack_4->SetBinError(18,1.827078);
   houtFV_stack_4->SetBinError(19,1.67897);
   houtFV_stack_4->SetBinError(20,1.576496);
   houtFV_stack_4->SetBinError(21,1.850797);
   houtFV_stack_4->SetBinError(22,1.880883);
   houtFV_stack_4->SetBinError(23,1.837654);
   houtFV_stack_4->SetBinError(24,1.795892);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.48818);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.039948);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.305002);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.41577);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.642546);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.26182);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.74833);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.595292);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.611902);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.991301);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.914898);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.152884);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.393279);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.638138);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.329158);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.444502);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.792256);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.316788);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.014128);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.682816);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.556766);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.420178);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.894646);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.597124);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6106269);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5376982);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6072713);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5938231);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7156382);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5677429);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5711609);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.598881);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6142808);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7707998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5582374);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6401374);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7592257);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5827409);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4283842);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6104674);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6345389);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5519263);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6601912);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6259447);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6019064);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7246909);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7557571);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6557055);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.473804);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.473804);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2438946);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2438946);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,49.97192);
   hNCpi0inFVres_stack_7->SetBinContent(2,51.67848);
   hNCpi0inFVres_stack_7->SetBinContent(3,49.16813);
   hNCpi0inFVres_stack_7->SetBinContent(4,45.59759);
   hNCpi0inFVres_stack_7->SetBinContent(5,42.86684);
   hNCpi0inFVres_stack_7->SetBinContent(6,45.78242);
   hNCpi0inFVres_stack_7->SetBinContent(7,47.76711);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.50766);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.48731);
   hNCpi0inFVres_stack_7->SetBinContent(10,40.55464);
   hNCpi0inFVres_stack_7->SetBinContent(11,49.61604);
   hNCpi0inFVres_stack_7->SetBinContent(12,47.16978);
   hNCpi0inFVres_stack_7->SetBinContent(13,51.62119);
   hNCpi0inFVres_stack_7->SetBinContent(14,51.00822);
   hNCpi0inFVres_stack_7->SetBinContent(15,50.68703);
   hNCpi0inFVres_stack_7->SetBinContent(16,45.6647);
   hNCpi0inFVres_stack_7->SetBinContent(17,51.35448);
   hNCpi0inFVres_stack_7->SetBinContent(18,47.72471);
   hNCpi0inFVres_stack_7->SetBinContent(19,50.8282);
   hNCpi0inFVres_stack_7->SetBinContent(20,47.512);
   hNCpi0inFVres_stack_7->SetBinContent(21,46.32663);
   hNCpi0inFVres_stack_7->SetBinContent(22,49.79686);
   hNCpi0inFVres_stack_7->SetBinContent(23,54.99745);
   hNCpi0inFVres_stack_7->SetBinContent(24,48.21172);
   hNCpi0inFVres_stack_7->SetBinError(1,2.325741);
   hNCpi0inFVres_stack_7->SetBinError(2,2.346622);
   hNCpi0inFVres_stack_7->SetBinError(3,2.265839);
   hNCpi0inFVres_stack_7->SetBinError(4,2.208251);
   hNCpi0inFVres_stack_7->SetBinError(5,2.062574);
   hNCpi0inFVres_stack_7->SetBinError(6,2.185054);
   hNCpi0inFVres_stack_7->SetBinError(7,2.29429);
   hNCpi0inFVres_stack_7->SetBinError(8,2.185114);
   hNCpi0inFVres_stack_7->SetBinError(9,2.2461);
   hNCpi0inFVres_stack_7->SetBinError(10,2.0573);
   hNCpi0inFVres_stack_7->SetBinError(11,2.332662);
   hNCpi0inFVres_stack_7->SetBinError(12,2.212755);
   hNCpi0inFVres_stack_7->SetBinError(13,2.375675);
   hNCpi0inFVres_stack_7->SetBinError(14,2.345516);
   hNCpi0inFVres_stack_7->SetBinError(15,2.314025);
   hNCpi0inFVres_stack_7->SetBinError(16,2.25436);
   hNCpi0inFVres_stack_7->SetBinError(17,2.350668);
   hNCpi0inFVres_stack_7->SetBinError(18,2.296036);
   hNCpi0inFVres_stack_7->SetBinError(19,2.354074);
   hNCpi0inFVres_stack_7->SetBinError(20,2.200996);
   hNCpi0inFVres_stack_7->SetBinError(21,2.179481);
   hNCpi0inFVres_stack_7->SetBinError(22,2.248048);
   hNCpi0inFVres_stack_7->SetBinError(23,2.468318);
   hNCpi0inFVres_stack_7->SetBinError(24,2.239013);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.378665);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.914838);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.901388);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.468765);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.116108);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.208017);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.01132);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.26973);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.911598);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.837771);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.363967);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.210017);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.396355);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.92696);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.16702);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.77675);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.22166);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.260184);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.642719);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.21517);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.649456);
   hNCpi0inFVdis_stack_8->SetBinContent(22,11.6292);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.723034);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.028247);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9207079);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.036135);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.048427);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9910152);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9087588);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7814967);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.031398);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9670299);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9928793);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8969759);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8631808);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.845451);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9807507);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.036792);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.084467);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.04219);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.112371);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.017371);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9355945);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9577614);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.035822);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.154326);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.085335);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8527464);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,15.41452);
   hCCpi0inFV_stack_10->SetBinContent(2,14.40499);
   hCCpi0inFV_stack_10->SetBinContent(3,17.21195);
   hCCpi0inFV_stack_10->SetBinContent(4,13.05074);
   hCCpi0inFV_stack_10->SetBinContent(5,11.63694);
   hCCpi0inFV_stack_10->SetBinContent(6,13.59012);
   hCCpi0inFV_stack_10->SetBinContent(7,15.47385);
   hCCpi0inFV_stack_10->SetBinContent(8,12.99682);
   hCCpi0inFV_stack_10->SetBinContent(9,15.62978);
   hCCpi0inFV_stack_10->SetBinContent(10,18.72597);
   hCCpi0inFV_stack_10->SetBinContent(11,18.40168);
   hCCpi0inFV_stack_10->SetBinContent(12,23.1896);
   hCCpi0inFV_stack_10->SetBinContent(13,16.60875);
   hCCpi0inFV_stack_10->SetBinContent(14,16.32197);
   hCCpi0inFV_stack_10->SetBinContent(15,21.40606);
   hCCpi0inFV_stack_10->SetBinContent(16,15.02492);
   hCCpi0inFV_stack_10->SetBinContent(17,17.12175);
   hCCpi0inFV_stack_10->SetBinContent(18,16.5624);
   hCCpi0inFV_stack_10->SetBinContent(19,12.74769);
   hCCpi0inFV_stack_10->SetBinContent(20,12.15906);
   hCCpi0inFV_stack_10->SetBinContent(21,19.13748);
   hCCpi0inFV_stack_10->SetBinContent(22,16.61565);
   hCCpi0inFV_stack_10->SetBinContent(23,19.87827);
   hCCpi0inFV_stack_10->SetBinContent(24,18.82582);
   hCCpi0inFV_stack_10->SetBinError(1,2.00667);
   hCCpi0inFV_stack_10->SetBinError(2,1.892092);
   hCCpi0inFV_stack_10->SetBinError(3,2.039633);
   hCCpi0inFV_stack_10->SetBinError(4,1.787859);
   hCCpi0inFV_stack_10->SetBinError(5,1.623019);
   hCCpi0inFV_stack_10->SetBinError(6,1.73664);
   hCCpi0inFV_stack_10->SetBinError(7,2.006324);
   hCCpi0inFV_stack_10->SetBinError(8,1.815411);
   hCCpi0inFV_stack_10->SetBinError(9,1.961433);
   hCCpi0inFV_stack_10->SetBinError(10,2.220282);
   hCCpi0inFV_stack_10->SetBinError(11,2.220802);
   hCCpi0inFV_stack_10->SetBinError(12,2.414213);
   hCCpi0inFV_stack_10->SetBinError(13,2.024978);
   hCCpi0inFV_stack_10->SetBinError(14,2.020716);
   hCCpi0inFV_stack_10->SetBinError(15,2.26675);
   hCCpi0inFV_stack_10->SetBinError(16,1.91478);
   hCCpi0inFV_stack_10->SetBinError(17,2.011157);
   hCCpi0inFV_stack_10->SetBinError(18,2.06841);
   hCCpi0inFV_stack_10->SetBinError(19,1.815464);
   hCCpi0inFV_stack_10->SetBinError(20,1.76606);
   hCCpi0inFV_stack_10->SetBinError(21,2.188464);
   hCCpi0inFV_stack_10->SetBinError(22,2.059124);
   hCCpi0inFV_stack_10->SetBinError(23,2.232925);
   hCCpi0inFV_stack_10->SetBinError(24,2.165105);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,4.73953);
   hNCinFV_stack_11->SetBinContent(2,8.444527);
   hNCinFV_stack_11->SetBinContent(3,11.13684);
   hNCinFV_stack_11->SetBinContent(4,9.174754);
   hNCinFV_stack_11->SetBinContent(5,4.788319);
   hNCinFV_stack_11->SetBinContent(6,9.36375);
   hNCinFV_stack_11->SetBinContent(7,8.120646);
   hNCinFV_stack_11->SetBinContent(8,8.949535);
   hNCinFV_stack_11->SetBinContent(9,6.643895);
   hNCinFV_stack_11->SetBinContent(10,7.914396);
   hNCinFV_stack_11->SetBinContent(11,9.426414);
   hNCinFV_stack_11->SetBinContent(12,6.350208);
   hNCinFV_stack_11->SetBinContent(13,8.59137);
   hNCinFV_stack_11->SetBinContent(14,7.246957);
   hNCinFV_stack_11->SetBinContent(15,12.1994);
   hNCinFV_stack_11->SetBinContent(16,7.375813);
   hNCinFV_stack_11->SetBinContent(17,9.096379);
   hNCinFV_stack_11->SetBinContent(18,9.186588);
   hNCinFV_stack_11->SetBinContent(19,6.302027);
   hNCinFV_stack_11->SetBinContent(20,10.3001);
   hNCinFV_stack_11->SetBinContent(21,6.498742);
   hNCinFV_stack_11->SetBinContent(22,7.14045);
   hNCinFV_stack_11->SetBinContent(23,7.572528);
   hNCinFV_stack_11->SetBinContent(24,11.39357);
   hNCinFV_stack_11->SetBinError(1,1.03688);
   hNCinFV_stack_11->SetBinError(2,1.481341);
   hNCinFV_stack_11->SetBinError(3,1.664675);
   hNCinFV_stack_11->SetBinError(4,1.54472);
   hNCinFV_stack_11->SetBinError(5,1.1106);
   hNCinFV_stack_11->SetBinError(6,1.575543);
   hNCinFV_stack_11->SetBinError(7,1.373552);
   hNCinFV_stack_11->SetBinError(8,1.482261);
   hNCinFV_stack_11->SetBinError(9,1.301948);
   hNCinFV_stack_11->SetBinError(10,1.429196);
   hNCinFV_stack_11->SetBinError(11,1.545054);
   hNCinFV_stack_11->SetBinError(12,1.240312);
   hNCinFV_stack_11->SetBinError(13,1.507554);
   hNCinFV_stack_11->SetBinError(14,1.27194);
   hNCinFV_stack_11->SetBinError(15,1.809412);
   hNCinFV_stack_11->SetBinError(16,1.373871);
   hNCinFV_stack_11->SetBinError(17,1.508458);
   hNCinFV_stack_11->SetBinError(18,1.54622);
   hNCinFV_stack_11->SetBinError(19,1.256458);
   hNCinFV_stack_11->SetBinError(20,1.629726);
   hNCinFV_stack_11->SetBinError(21,1.271764);
   hNCinFV_stack_11->SetBinError(22,1.301724);
   hNCinFV_stack_11->SetBinError(23,1.387883);
   hNCinFV_stack_11->SetBinError(24,1.665582);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,7.488739);
   hnumuCCinFV_stack_12->SetBinContent(2,9.867514);
   hnumuCCinFV_stack_12->SetBinContent(3,6.716514);
   hnumuCCinFV_stack_12->SetBinContent(4,6.226714);
   hnumuCCinFV_stack_12->SetBinContent(5,6.315392);
   hnumuCCinFV_stack_12->SetBinContent(6,4.100647);
   hnumuCCinFV_stack_12->SetBinContent(7,4.578765);
   hnumuCCinFV_stack_12->SetBinContent(8,8.59794);
   hnumuCCinFV_stack_12->SetBinContent(9,4.128529);
   hnumuCCinFV_stack_12->SetBinContent(10,7.854468);
   hnumuCCinFV_stack_12->SetBinContent(11,7.958072);
   hnumuCCinFV_stack_12->SetBinContent(12,10.2757);
   hnumuCCinFV_stack_12->SetBinContent(13,8.485452);
   hnumuCCinFV_stack_12->SetBinContent(14,10.66334);
   hnumuCCinFV_stack_12->SetBinContent(15,4.375517);
   hnumuCCinFV_stack_12->SetBinContent(16,7.562736);
   hnumuCCinFV_stack_12->SetBinContent(17,5.680933);
   hnumuCCinFV_stack_12->SetBinContent(18,6.971342);
   hnumuCCinFV_stack_12->SetBinContent(19,3.89067);
   hnumuCCinFV_stack_12->SetBinContent(20,5.067161);
   hnumuCCinFV_stack_12->SetBinContent(21,8.660674);
   hnumuCCinFV_stack_12->SetBinContent(22,7.018226);
   hnumuCCinFV_stack_12->SetBinContent(23,6.102229);
   hnumuCCinFV_stack_12->SetBinContent(24,10.42992);
   hnumuCCinFV_stack_12->SetBinError(1,1.645592);
   hnumuCCinFV_stack_12->SetBinError(2,1.6933);
   hnumuCCinFV_stack_12->SetBinError(3,1.321488);
   hnumuCCinFV_stack_12->SetBinError(4,1.440616);
   hnumuCCinFV_stack_12->SetBinError(5,1.265698);
   hnumuCCinFV_stack_12->SetBinError(6,0.9597521);
   hnumuCCinFV_stack_12->SetBinError(7,1.096442);
   hnumuCCinFV_stack_12->SetBinError(8,1.628243);
   hnumuCCinFV_stack_12->SetBinError(9,1.239384);
   hnumuCCinFV_stack_12->SetBinError(10,1.560363);
   hnumuCCinFV_stack_12->SetBinError(11,1.451227);
   hnumuCCinFV_stack_12->SetBinError(12,2.181728);
   hnumuCCinFV_stack_12->SetBinError(13,1.531189);
   hnumuCCinFV_stack_12->SetBinError(14,1.826434);
   hnumuCCinFV_stack_12->SetBinError(15,1.03493);
   hnumuCCinFV_stack_12->SetBinError(16,1.969946);
   hnumuCCinFV_stack_12->SetBinError(17,1.259303);
   hnumuCCinFV_stack_12->SetBinError(18,1.650022);
   hnumuCCinFV_stack_12->SetBinError(19,1.019198);
   hnumuCCinFV_stack_12->SetBinError(20,1.179353);
   hnumuCCinFV_stack_12->SetBinError(21,1.910972);
   hnumuCCinFV_stack_12->SetBinError(22,1.543663);
   hnumuCCinFV_stack_12->SetBinError(23,1.297897);
   hnumuCCinFV_stack_12->SetBinError(24,1.955233);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.312037);
   hnueCCinFV_stack_13->SetBinContent(2,0.8144805);
   hnueCCinFV_stack_13->SetBinContent(3,0.218026);
   hnueCCinFV_stack_13->SetBinContent(4,1.963927);
   hnueCCinFV_stack_13->SetBinContent(5,1.282706);
   hnueCCinFV_stack_13->SetBinContent(6,1.885115);
   hnueCCinFV_stack_13->SetBinContent(7,0.3368979);
   hnueCCinFV_stack_13->SetBinContent(8,0.4909759);
   hnueCCinFV_stack_13->SetBinContent(9,2.439669);
   hnueCCinFV_stack_13->SetBinContent(10,1.205148);
   hnueCCinFV_stack_13->SetBinContent(11,0.4325931);
   hnueCCinFV_stack_13->SetBinContent(12,1.2857);
   hnueCCinFV_stack_13->SetBinContent(13,1.467229);
   hnueCCinFV_stack_13->SetBinContent(15,0.7183912);
   hnueCCinFV_stack_13->SetBinContent(16,1.415288);
   hnueCCinFV_stack_13->SetBinContent(17,3.284498);
   hnueCCinFV_stack_13->SetBinContent(18,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(19,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(20,2.178747);
   hnueCCinFV_stack_13->SetBinContent(21,0.4238504);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,1.477529);
   hnueCCinFV_stack_13->SetBinContent(24,0.9297878);
   hnueCCinFV_stack_13->SetBinError(1,1.536667);
   hnueCCinFV_stack_13->SetBinError(2,0.5061728);
   hnueCCinFV_stack_13->SetBinError(3,0.2180157);
   hnueCCinFV_stack_13->SetBinError(4,1.200491);
   hnueCCinFV_stack_13->SetBinError(5,0.6598412);
   hnueCCinFV_stack_13->SetBinError(6,0.7660538);
   hnueCCinFV_stack_13->SetBinError(7,0.3368815);
   hnueCCinFV_stack_13->SetBinError(8,0.3489916);
   hnueCCinFV_stack_13->SetBinError(9,1.099958);
   hnueCCinFV_stack_13->SetBinError(10,0.791697);
   hnueCCinFV_stack_13->SetBinError(11,0.4325931);
   hnueCCinFV_stack_13->SetBinError(12,0.6099762);
   hnueCCinFV_stack_13->SetBinError(13,0.6161243);
   hnueCCinFV_stack_13->SetBinError(15,0.4282902);
   hnueCCinFV_stack_13->SetBinError(16,0.6545221);
   hnueCCinFV_stack_13->SetBinError(17,1.50338);
   hnueCCinFV_stack_13->SetBinError(18,0.4937343);
   hnueCCinFV_stack_13->SetBinError(19,0.3397478);
   hnueCCinFV_stack_13->SetBinError(20,0.9061585);
   hnueCCinFV_stack_13->SetBinError(21,0.3004783);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.7271024);
   hnueCCinFV_stack_13->SetBinError(24,0.4708821);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__17->SetBinContent(1,117.1314);
   hmcerror__17->SetBinContent(2,122.1356);
   hmcerror__17->SetBinContent(3,125.8191);
   hmcerror__17->SetBinContent(4,118.4361);
   hmcerror__17->SetBinContent(5,104.7556);
   hmcerror__17->SetBinContent(6,116.941);
   hmcerror__17->SetBinContent(7,126.9016);
   hmcerror__17->SetBinContent(8,117.2538);
   hmcerror__17->SetBinContent(9,117.63);
   hmcerror__17->SetBinContent(10,113.6485);
   hmcerror__17->SetBinContent(11,129.6676);
   hmcerror__17->SetBinContent(12,123.6452);
   hmcerror__17->SetBinContent(13,125.5906);
   hmcerror__17->SetBinContent(14,125.8737);
   hmcerror__17->SetBinContent(15,130.0923);
   hmcerror__17->SetBinContent(16,123.285);
   hmcerror__17->SetBinContent(17,133.0293);
   hmcerror__17->SetBinContent(18,126.1447);
   hmcerror__17->SetBinContent(19,113.6766);
   hmcerror__17->SetBinContent(20,123.0342);
   hmcerror__17->SetBinContent(21,123.8962);
   hmcerror__17->SetBinContent(22,128.2727);
   hmcerror__17->SetBinContent(23,132.5111);
   hmcerror__17->SetBinContent(24,126.7351);
   hmcerror__17->SetBinError(1,29.92322);
   hmcerror__17->SetBinError(2,33.91376);
   hmcerror__17->SetBinError(3,33.05184);
   hmcerror__17->SetBinError(4,37.33207);
   hmcerror__17->SetBinError(5,29.28089);
   hmcerror__17->SetBinError(6,30.906);
   hmcerror__17->SetBinError(7,31.21074);
   hmcerror__17->SetBinError(8,38.60751);
   hmcerror__17->SetBinError(9,35.05468);
   hmcerror__17->SetBinError(10,31.07727);
   hmcerror__17->SetBinError(11,43.8041);
   hmcerror__17->SetBinError(12,36.33234);
   hmcerror__17->SetBinError(13,35.33505);
   hmcerror__17->SetBinError(14,34.76948);
   hmcerror__17->SetBinError(15,39.30624);
   hmcerror__17->SetBinError(16,30.99335);
   hmcerror__17->SetBinError(17,41.13491);
   hmcerror__17->SetBinError(18,30.83356);
   hmcerror__17->SetBinError(19,31.17825);
   hmcerror__17->SetBinError(20,30.9803);
   hmcerror__17->SetBinError(21,33.39717);
   hmcerror__17->SetBinError(22,39.11294);
   hmcerror__17->SetBinError(23,36.4001);
   hmcerror__17->SetBinError(24,40.94352);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(2916.026);

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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3021[24] = {
   135,
   104,
   127,
   122,
   118,
   95,
   115,
   138,
   116,
   124,
   110,
   115,
   138,
   133,
   118,
   129,
   138,
   111,
   116,
   122,
   121,
   159,
   118,
   116};
   Double_t _felx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3021[24] = {
   11.61895,
   10.19804,
   11.26943,
   11.04536,
   10.86278,
   9.8686,
   10.72381,
   11.74734,
   10.77033,
   11.13553,
   10.48809,
   10.72381,
   11.74734,
   11.53256,
   10.86278,
   11.35782,
   11.74734,
   10.53565,
   10.77033,
   11.04536,
   11,
   12.60952,
   10.86278,
   10.77033};
   Double_t _fehx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3021[24] = {
   11.61895,
   10.19804,
   11.26943,
   11.04536,
   10.86278,
   9.667,
   10.72381,
   11.74734,
   10.77033,
   11.13553,
   10.48809,
   10.72381,
   11.74734,
   11.53256,
   10.86278,
   11.35782,
   11.74734,
   10.53565,
   10.77033,
   11.04536,
   11,
   12.60952,
   10.86278,
   10.77033};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(76.48359);
   Graph_Graph3021->SetMaximum(180.2573);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3022[24] = {
   0.2554672,
   0.2776729,
   0.2626934,
   0.3152087,
   0.2795162,
   0.264287,
   0.2459444,
   0.3292644,
   0.2980081,
   0.2734508,
   0.3378184,
   0.2938434,
   0.281351,
   0.2762251,
   0.3021412,
   0.2513959,
   0.3092168,
   0.24443,
   0.2742715,
   0.2518022,
   0.2695577,
   0.3049203,
   0.2746948,
   0.3230639};
   Double_t _fehx3022[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3022[24] = {
   0.2554672,
   0.2776729,
   0.2626934,
   0.3152087,
   0.2795162,
   0.264287,
   0.2459444,
   0.3292644,
   0.2980081,
   0.2734508,
   0.3378184,
   0.2938434,
   0.281351,
   0.2762251,
   0.3021412,
   0.2513959,
   0.3092168,
   0.24443,
   0.2742715,
   0.2518022,
   0.2695577,
   0.3049203,
   0.2746948,
   0.3230639};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-3.78,3.78);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3023[24] = {
   0.2080908,
   0.2139611,
   0.2028156,
   0.2129322,
   0.2115018,
   0.2046035,
   0.2041456,
   0.2002304,
   0.2028646,
   0.2150489,
   0.2053154,
   0.2103116,
   0.214464,
   0.2168572,
   0.219889,
   0.2058283,
   0.197386,
   0.2034016,
   0.2138708,
   0.2009913,
   0.2083887,
   0.212645,
   0.2125469,
   0.2040355};
   Double_t _fehx3023[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3023[24] = {
   0.2080908,
   0.2139611,
   0.2028156,
   0.2129322,
   0.2115018,
   0.2046035,
   0.2041456,
   0.2002304,
   0.2028646,
   0.2150489,
   0.2053154,
   0.2103116,
   0.214464,
   0.2168572,
   0.219889,
   0.2058283,
   0.197386,
   0.2034016,
   0.2138708,
   0.2009913,
   0.2083887,
   0.212645,
   0.2125469,
   0.2040355};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-3.78,3.78);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3024[24] = {
   1.152552,
   0.8515124,
   1.009386,
   1.030092,
   1.126431,
   0.8123752,
   0.906214,
   1.176934,
   0.9861431,
   1.091084,
   0.848323,
   0.9300803,
   1.098808,
   1.056614,
   0.9070484,
   1.046356,
   1.037365,
   0.8799415,
   1.020439,
   0.9915939,
   0.9766241,
   1.239547,
   0.8904917,
   0.9152953};
   Double_t _felx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3024[24] = {
   0.09919588,
   0.08349766,
   0.0895685,
   0.09326013,
   0.1036964,
   0.08438954,
   0.08450489,
   0.1001873,
   0.09156109,
   0.0979822,
   0.08088443,
   0.08673044,
   0.09353676,
   0.09162009,
   0.08350057,
   0.09212647,
   0.08830639,
   0.08352035,
   0.09474537,
   0.08977469,
   0.08878401,
   0.09830248,
   0.0819764,
   0.08498303};
   Double_t _fehx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3024[24] = {
   0.09919588,
   0.08349766,
   0.0895685,
   0.09326013,
   0.1036964,
   0.08266559,
   0.08450489,
   0.1001873,
   0.09156109,
   0.0979822,
   0.08088443,
   0.08673044,
   0.09353676,
   0.09162009,
   0.08350057,
   0.09212647,
   0.08830639,
   0.08352035,
   0.09474537,
   0.08977469,
   0.08878401,
   0.09830248,
   0.0819764,
   0.08498303};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.6669993);
   Graph_Graph3024->SetMaximum(1.398836);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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

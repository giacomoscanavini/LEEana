#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Feb 17 21:59:21 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-4.119231,-3.08,3.957692,340.5832);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__16->SetBinContent(1,121.8651);
   hmc__16->SetBinContent(2,131.9903);
   hmc__16->SetBinContent(3,139.3602);
   hmc__16->SetBinContent(4,118.6039);
   hmc__16->SetBinContent(5,120.812);
   hmc__16->SetBinContent(6,121.3498);
   hmc__16->SetBinContent(7,115.3897);
   hmc__16->SetBinContent(8,108.5795);
   hmc__16->SetBinContent(9,122.8838);
   hmc__16->SetBinContent(10,109.5373);
   hmc__16->SetBinContent(11,125.2156);
   hmc__16->SetBinContent(12,116.5715);
   hmc__16->SetBinContent(13,113.5884);
   hmc__16->SetBinContent(14,124.283);
   hmc__16->SetBinContent(15,122.6965);
   hmc__16->SetBinContent(16,120.6923);
   hmc__16->SetBinContent(17,125.1592);
   hmc__16->SetBinContent(18,121.6874);
   hmc__16->SetBinContent(19,127.0763);
   hmc__16->SetBinContent(20,126.4707);
   hmc__16->SetBinContent(21,131.9446);
   hmc__16->SetBinContent(22,132.8721);
   hmc__16->SetBinContent(23,134.4046);
   hmc__16->SetBinContent(24,113.0733);
   hmc__16->SetBinError(1,34.47794);
   hmc__16->SetBinError(2,36.24081);
   hmc__16->SetBinError(3,39.39602);
   hmc__16->SetBinError(4,31.12865);
   hmc__16->SetBinError(5,36.61877);
   hmc__16->SetBinError(6,30.56221);
   hmc__16->SetBinError(7,32.27406);
   hmc__16->SetBinError(8,32.60984);
   hmc__16->SetBinError(9,38.9439);
   hmc__16->SetBinError(10,31.96968);
   hmc__16->SetBinError(11,44.58915);
   hmc__16->SetBinError(12,32.22272);
   hmc__16->SetBinError(13,35.98206);
   hmc__16->SetBinError(14,33.78413);
   hmc__16->SetBinError(15,33.8936);
   hmc__16->SetBinError(16,35.96034);
   hmc__16->SetBinError(17,33.73313);
   hmc__16->SetBinError(18,29.96041);
   hmc__16->SetBinError(19,32.63689);
   hmc__16->SetBinError(20,33.05148);
   hmc__16->SetBinError(21,36.2999);
   hmc__16->SetBinError(22,43.73758);
   hmc__16->SetBinError(23,34.97904);
   hmc__16->SetBinError(24,32.81288);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-3.08);
   hmc__16->SetMaximum(323.4);
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
   hs6_stack_6->SetMinimum(-3.646956e-09);
   hs6_stack_6->SetMaximum(146.3282);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.804013);
   hbadmatch_stack_1->SetBinContent(2,4.072019);
   hbadmatch_stack_1->SetBinContent(3,4.152118);
   hbadmatch_stack_1->SetBinContent(4,1.610397);
   hbadmatch_stack_1->SetBinContent(5,3.102364);
   hbadmatch_stack_1->SetBinContent(6,5.207242);
   hbadmatch_stack_1->SetBinContent(7,1.593065);
   hbadmatch_stack_1->SetBinContent(8,1.902179);
   hbadmatch_stack_1->SetBinContent(9,2.456057);
   hbadmatch_stack_1->SetBinContent(10,1.704389);
   hbadmatch_stack_1->SetBinContent(11,3.673486);
   hbadmatch_stack_1->SetBinContent(12,2.223879);
   hbadmatch_stack_1->SetBinContent(13,2.34959);
   hbadmatch_stack_1->SetBinContent(14,4.646615);
   hbadmatch_stack_1->SetBinContent(15,2.103854);
   hbadmatch_stack_1->SetBinContent(16,3.419625);
   hbadmatch_stack_1->SetBinContent(17,2.822429);
   hbadmatch_stack_1->SetBinContent(18,3.399606);
   hbadmatch_stack_1->SetBinContent(19,2.251495);
   hbadmatch_stack_1->SetBinContent(20,1.857267);
   hbadmatch_stack_1->SetBinContent(21,2.5482);
   hbadmatch_stack_1->SetBinContent(22,3.217977);
   hbadmatch_stack_1->SetBinContent(23,1.953751);
   hbadmatch_stack_1->SetBinContent(24,2.091255);
   hbadmatch_stack_1->SetBinError(1,0.7075491);
   hbadmatch_stack_1->SetBinError(2,1.078332);
   hbadmatch_stack_1->SetBinError(3,1.241049);
   hbadmatch_stack_1->SetBinError(4,0.5706264);
   hbadmatch_stack_1->SetBinError(5,1.005693);
   hbadmatch_stack_1->SetBinError(6,1.281169);
   hbadmatch_stack_1->SetBinError(7,0.6182572);
   hbadmatch_stack_1->SetBinError(8,0.7590998);
   hbadmatch_stack_1->SetBinError(9,0.8197299);
   hbadmatch_stack_1->SetBinError(10,0.6654101);
   hbadmatch_stack_1->SetBinError(11,0.9841034);
   hbadmatch_stack_1->SetBinError(12,0.7161744);
   hbadmatch_stack_1->SetBinError(13,0.8087809);
   hbadmatch_stack_1->SetBinError(14,2.385002);
   hbadmatch_stack_1->SetBinError(15,0.6792233);
   hbadmatch_stack_1->SetBinError(16,0.9847492);
   hbadmatch_stack_1->SetBinError(17,0.9234643);
   hbadmatch_stack_1->SetBinError(18,1.012381);
   hbadmatch_stack_1->SetBinError(19,0.7851019);
   hbadmatch_stack_1->SetBinError(20,0.6799255);
   hbadmatch_stack_1->SetBinError(21,0.8787711);
   hbadmatch_stack_1->SetBinError(22,0.9618638);
   hbadmatch_stack_1->SetBinError(23,0.6654694);
   hbadmatch_stack_1->SetBinError(24,0.7193483);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,9.309826);
   hext_stack_2->SetBinContent(2,8.015008);
   hext_stack_2->SetBinContent(3,9.772676);
   hext_stack_2->SetBinContent(4,8.753185);
   hext_stack_2->SetBinContent(5,12.06223);
   hext_stack_2->SetBinContent(6,20.29071);
   hext_stack_2->SetBinContent(7,10.6968);
   hext_stack_2->SetBinContent(8,8.440376);
   hext_stack_2->SetBinContent(9,13.32669);
   hext_stack_2->SetBinContent(10,8.846975);
   hext_stack_2->SetBinContent(11,10.74587);
   hext_stack_2->SetBinContent(12,3.241202);
   hext_stack_2->SetBinContent(13,7.594048);
   hext_stack_2->SetBinContent(14,8.283154);
   hext_stack_2->SetBinContent(15,11.78249);
   hext_stack_2->SetBinContent(16,14.80745);
   hext_stack_2->SetBinContent(17,16.07909);
   hext_stack_2->SetBinContent(18,19.07091);
   hext_stack_2->SetBinContent(19,15.94781);
   hext_stack_2->SetBinContent(20,19.61874);
   hext_stack_2->SetBinContent(21,12.87102);
   hext_stack_2->SetBinContent(22,14.11393);
   hext_stack_2->SetBinContent(23,8.738824);
   hext_stack_2->SetBinContent(24,5.915811);
   hext_stack_2->SetBinError(1,2.049844);
   hext_stack_2->SetBinError(2,1.855964);
   hext_stack_2->SetBinError(3,2.212635);
   hext_stack_2->SetBinError(4,1.874555);
   hext_stack_2->SetBinError(5,2.31627);
   hext_stack_2->SetBinError(6,3.107999);
   hext_stack_2->SetBinError(7,2.116998);
   hext_stack_2->SetBinError(8,1.82829);
   hext_stack_2->SetBinError(9,2.540812);
   hext_stack_2->SetBinError(10,1.872956);
   hext_stack_2->SetBinError(11,2.282861);
   hext_stack_2->SetBinError(12,1.178414);
   hext_stack_2->SetBinError(13,1.918771);
   hext_stack_2->SetBinError(14,1.738178);
   hext_stack_2->SetBinError(15,2.419612);
   hext_stack_2->SetBinError(16,2.594139);
   hext_stack_2->SetBinError(17,2.760249);
   hext_stack_2->SetBinError(18,3.027159);
   hext_stack_2->SetBinError(19,2.613257);
   hext_stack_2->SetBinError(20,3.095376);
   hext_stack_2->SetBinError(21,2.358099);
   hext_stack_2->SetBinError(22,2.693483);
   hext_stack_2->SetBinError(23,1.978979);
   hext_stack_2->SetBinError(24,1.620784);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4762587);
   hdirt_stack_3->SetBinContent(2,1.453713);
   hdirt_stack_3->SetBinContent(3,2.251197);
   hdirt_stack_3->SetBinContent(4,0.6000288);
   hdirt_stack_3->SetBinContent(5,1.715891);
   hdirt_stack_3->SetBinContent(6,2.303244);
   hdirt_stack_3->SetBinContent(7,1.752704);
   hdirt_stack_3->SetBinContent(8,1.566981);
   hdirt_stack_3->SetBinContent(9,1.920629);
   hdirt_stack_3->SetBinContent(10,1.911643);
   hdirt_stack_3->SetBinContent(11,0.8904731);
   hdirt_stack_3->SetBinContent(12,1.066708);
   hdirt_stack_3->SetBinContent(13,1.385444);
   hdirt_stack_3->SetBinContent(14,1.027697);
   hdirt_stack_3->SetBinContent(15,2.287423);
   hdirt_stack_3->SetBinContent(16,2.886536);
   hdirt_stack_3->SetBinContent(17,3.164991);
   hdirt_stack_3->SetBinContent(18,0.8800681);
   hdirt_stack_3->SetBinContent(19,2.368654);
   hdirt_stack_3->SetBinContent(20,1.929979);
   hdirt_stack_3->SetBinContent(21,0.9160615);
   hdirt_stack_3->SetBinContent(22,1.738837);
   hdirt_stack_3->SetBinContent(23,1.108064);
   hdirt_stack_3->SetBinContent(24,0.2046459);
   hdirt_stack_3->SetBinError(1,0.3652866);
   hdirt_stack_3->SetBinError(2,0.6124625);
   hdirt_stack_3->SetBinError(3,0.7909553);
   hdirt_stack_3->SetBinError(4,0.3550465);
   hdirt_stack_3->SetBinError(5,0.6941824);
   hdirt_stack_3->SetBinError(6,0.7822896);
   hdirt_stack_3->SetBinError(7,0.685346);
   hdirt_stack_3->SetBinError(8,0.6016265);
   hdirt_stack_3->SetBinError(9,0.8374721);
   hdirt_stack_3->SetBinError(10,1.167646);
   hdirt_stack_3->SetBinError(11,0.4366068);
   hdirt_stack_3->SetBinError(12,0.5025086);
   hdirt_stack_3->SetBinError(13,0.583897);
   hdirt_stack_3->SetBinError(14,0.6124039);
   hdirt_stack_3->SetBinError(15,0.804017);
   hdirt_stack_3->SetBinError(16,0.8769047);
   hdirt_stack_3->SetBinError(17,1.017366);
   hdirt_stack_3->SetBinError(18,0.4512029);
   hdirt_stack_3->SetBinError(19,0.823628);
   hdirt_stack_3->SetBinError(20,0.7240682);
   hdirt_stack_3->SetBinError(21,0.4453609);
   hdirt_stack_3->SetBinError(22,0.6705831);
   hdirt_stack_3->SetBinError(23,0.5845266);
   hdirt_stack_3->SetBinError(24,0.2046459);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,14.35119);
   houtFV_stack_4->SetBinContent(2,14.43751);
   houtFV_stack_4->SetBinContent(3,15.627);
   houtFV_stack_4->SetBinContent(4,13.58295);
   houtFV_stack_4->SetBinContent(5,10.37757);
   houtFV_stack_4->SetBinContent(6,11.13942);
   houtFV_stack_4->SetBinContent(7,11.87383);
   houtFV_stack_4->SetBinContent(8,10.87971);
   houtFV_stack_4->SetBinContent(9,16.47453);
   houtFV_stack_4->SetBinContent(10,11.85369);
   houtFV_stack_4->SetBinContent(11,13.78773);
   houtFV_stack_4->SetBinContent(12,13.90809);
   houtFV_stack_4->SetBinContent(13,13.03119);
   houtFV_stack_4->SetBinContent(14,11.32187);
   houtFV_stack_4->SetBinContent(15,8.352169);
   houtFV_stack_4->SetBinContent(16,9.654925);
   houtFV_stack_4->SetBinContent(17,13.8785);
   houtFV_stack_4->SetBinContent(18,12.2177);
   houtFV_stack_4->SetBinContent(19,15.77632);
   houtFV_stack_4->SetBinContent(20,8.555738);
   houtFV_stack_4->SetBinContent(21,13.32752);
   houtFV_stack_4->SetBinContent(22,12.08777);
   houtFV_stack_4->SetBinContent(23,13.97605);
   houtFV_stack_4->SetBinContent(24,11.6788);
   houtFV_stack_4->SetBinError(1,1.960659);
   houtFV_stack_4->SetBinError(2,1.825937);
   houtFV_stack_4->SetBinError(3,2.011099);
   houtFV_stack_4->SetBinError(4,1.856062);
   houtFV_stack_4->SetBinError(5,1.620922);
   houtFV_stack_4->SetBinError(6,1.683614);
   houtFV_stack_4->SetBinError(7,1.722087);
   houtFV_stack_4->SetBinError(8,1.621607);
   houtFV_stack_4->SetBinError(9,2.060672);
   houtFV_stack_4->SetBinError(10,1.75498);
   houtFV_stack_4->SetBinError(11,1.841434);
   houtFV_stack_4->SetBinError(12,1.76267);
   houtFV_stack_4->SetBinError(13,1.70699);
   houtFV_stack_4->SetBinError(14,1.692919);
   houtFV_stack_4->SetBinError(15,1.392928);
   houtFV_stack_4->SetBinError(16,1.609633);
   houtFV_stack_4->SetBinError(17,1.83895);
   houtFV_stack_4->SetBinError(18,1.808179);
   houtFV_stack_4->SetBinError(19,2.04993);
   houtFV_stack_4->SetBinError(20,1.497355);
   houtFV_stack_4->SetBinError(21,1.829348);
   houtFV_stack_4->SetBinError(22,1.713138);
   houtFV_stack_4->SetBinError(23,1.864036);
   houtFV_stack_4->SetBinError(24,1.711008);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.013216);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.250778);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.710884);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.211092);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.94263);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.876124);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.859434);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.50968);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.400656);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.667038);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.932924);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.862674);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.066679);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.361634);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.700922);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.984316);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.433291);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.582674);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.268724);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.129056);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.316619);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.180111);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.058806);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,2.927684);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6108395);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6453342);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6521841);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6927002);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5288181);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6616145);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.612854);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4914984);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5828523);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6264108);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7009392);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6807034);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4528948);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6241806);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7841905);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5659695);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6588139);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6352542);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7434257);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7183528);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5214056);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5286952);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6986216);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5472645);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8223901);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3297271);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06834073);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,49.3063);
   hNCpi0inFVres_stack_7->SetBinContent(2,48.73201);
   hNCpi0inFVres_stack_7->SetBinContent(3,55.50148);
   hNCpi0inFVres_stack_7->SetBinContent(4,48.54386);
   hNCpi0inFVres_stack_7->SetBinContent(5,50.07672);
   hNCpi0inFVres_stack_7->SetBinContent(6,43.53543);
   hNCpi0inFVres_stack_7->SetBinContent(7,47.0783);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.08354);
   hNCpi0inFVres_stack_7->SetBinContent(9,44.4808);
   hNCpi0inFVres_stack_7->SetBinContent(10,44.90441);
   hNCpi0inFVres_stack_7->SetBinContent(11,48.75827);
   hNCpi0inFVres_stack_7->SetBinContent(12,47.79688);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.3457);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.15128);
   hNCpi0inFVres_stack_7->SetBinContent(15,49.7241);
   hNCpi0inFVres_stack_7->SetBinContent(16,49.02847);
   hNCpi0inFVres_stack_7->SetBinContent(17,46.46316);
   hNCpi0inFVres_stack_7->SetBinContent(18,45.95829);
   hNCpi0inFVres_stack_7->SetBinContent(19,49.38802);
   hNCpi0inFVres_stack_7->SetBinContent(20,45.40263);
   hNCpi0inFVres_stack_7->SetBinContent(21,53.2952);
   hNCpi0inFVres_stack_7->SetBinContent(22,55.33825);
   hNCpi0inFVres_stack_7->SetBinContent(23,52.92934);
   hNCpi0inFVres_stack_7->SetBinContent(24,46.07868);
   hNCpi0inFVres_stack_7->SetBinError(1,2.272643);
   hNCpi0inFVres_stack_7->SetBinError(2,2.215201);
   hNCpi0inFVres_stack_7->SetBinError(3,2.485538);
   hNCpi0inFVres_stack_7->SetBinError(4,2.238201);
   hNCpi0inFVres_stack_7->SetBinError(5,2.302799);
   hNCpi0inFVres_stack_7->SetBinError(6,2.054475);
   hNCpi0inFVres_stack_7->SetBinError(7,2.304503);
   hNCpi0inFVres_stack_7->SetBinError(8,2.133761);
   hNCpi0inFVres_stack_7->SetBinError(9,2.138809);
   hNCpi0inFVres_stack_7->SetBinError(10,2.200335);
   hNCpi0inFVres_stack_7->SetBinError(11,2.302813);
   hNCpi0inFVres_stack_7->SetBinError(12,2.268057);
   hNCpi0inFVres_stack_7->SetBinError(13,2.032126);
   hNCpi0inFVres_stack_7->SetBinError(14,2.319988);
   hNCpi0inFVres_stack_7->SetBinError(15,2.306963);
   hNCpi0inFVres_stack_7->SetBinError(16,2.289521);
   hNCpi0inFVres_stack_7->SetBinError(17,2.243109);
   hNCpi0inFVres_stack_7->SetBinError(18,2.186879);
   hNCpi0inFVres_stack_7->SetBinError(19,2.313493);
   hNCpi0inFVres_stack_7->SetBinError(20,2.22181);
   hNCpi0inFVres_stack_7->SetBinError(21,2.415588);
   hNCpi0inFVres_stack_7->SetBinError(22,2.532605);
   hNCpi0inFVres_stack_7->SetBinError(23,2.37405);
   hNCpi0inFVres_stack_7->SetBinError(24,2.170219);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.227787);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.59989);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.4006);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.288243);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.502467);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.679582);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.799662);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.35667);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.783051);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.29465);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.980185);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.032239);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.377001);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.54276);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.698689);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.10914);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.58087);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.299374);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.997275);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.26526);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.07941);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.481056);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.25977);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.59332);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9340329);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.081982);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.049602);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.961277);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8348342);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7965424);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.957694);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.012546);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9478899);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.095744);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9875401);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8892404);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8995391);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.09367);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9537572);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.01341);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.040914);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.00892);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8193838);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.09275);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.048551);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.008083);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.060546);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.002922);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.66847);
   hCCpi0inFV_stack_10->SetBinContent(2,18.48367);
   hCCpi0inFV_stack_10->SetBinContent(3,16.22838);
   hCCpi0inFV_stack_10->SetBinContent(4,18.95595);
   hCCpi0inFV_stack_10->SetBinContent(5,17.54368);
   hCCpi0inFV_stack_10->SetBinContent(6,15.00159);
   hCCpi0inFV_stack_10->SetBinContent(7,16.23007);
   hCCpi0inFV_stack_10->SetBinContent(8,14.22191);
   hCCpi0inFV_stack_10->SetBinContent(9,15.28176);
   hCCpi0inFV_stack_10->SetBinContent(10,13.90298);
   hCCpi0inFV_stack_10->SetBinContent(11,15.54542);
   hCCpi0inFV_stack_10->SetBinContent(12,15.86493);
   hCCpi0inFV_stack_10->SetBinContent(13,17.59017);
   hCCpi0inFV_stack_10->SetBinContent(14,16.57194);
   hCCpi0inFV_stack_10->SetBinContent(15,14.34336);
   hCCpi0inFV_stack_10->SetBinContent(16,14.28151);
   hCCpi0inFV_stack_10->SetBinContent(17,16.02213);
   hCCpi0inFV_stack_10->SetBinContent(18,12.31882);
   hCCpi0inFV_stack_10->SetBinContent(19,15.72519);
   hCCpi0inFV_stack_10->SetBinContent(20,21.05933);
   hCCpi0inFV_stack_10->SetBinContent(21,20.50005);
   hCCpi0inFV_stack_10->SetBinContent(22,15.78507);
   hCCpi0inFV_stack_10->SetBinContent(23,20.52988);
   hCCpi0inFV_stack_10->SetBinContent(24,13.48052);
   hCCpi0inFV_stack_10->SetBinError(1,2.016073);
   hCCpi0inFV_stack_10->SetBinError(2,2.105626);
   hCCpi0inFV_stack_10->SetBinError(3,1.991637);
   hCCpi0inFV_stack_10->SetBinError(4,2.16712);
   hCCpi0inFV_stack_10->SetBinError(5,2.067006);
   hCCpi0inFV_stack_10->SetBinError(6,1.943042);
   hCCpi0inFV_stack_10->SetBinError(7,1.991804);
   hCCpi0inFV_stack_10->SetBinError(8,1.867153);
   hCCpi0inFV_stack_10->SetBinError(9,1.981619);
   hCCpi0inFV_stack_10->SetBinError(10,1.927675);
   hCCpi0inFV_stack_10->SetBinError(11,1.94809);
   hCCpi0inFV_stack_10->SetBinError(12,2.006194);
   hCCpi0inFV_stack_10->SetBinError(13,2.05707);
   hCCpi0inFV_stack_10->SetBinError(14,2.020808);
   hCCpi0inFV_stack_10->SetBinError(15,1.848149);
   hCCpi0inFV_stack_10->SetBinError(16,1.894095);
   hCCpi0inFV_stack_10->SetBinError(17,2.030413);
   hCCpi0inFV_stack_10->SetBinError(18,1.733201);
   hCCpi0inFV_stack_10->SetBinError(19,1.992058);
   hCCpi0inFV_stack_10->SetBinError(20,2.356766);
   hCCpi0inFV_stack_10->SetBinError(21,2.315675);
   hCCpi0inFV_stack_10->SetBinError(22,1.98214);
   hCCpi0inFV_stack_10->SetBinError(23,2.299548);
   hCCpi0inFV_stack_10->SetBinError(24,1.79691);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,8.799312);
   hNCinFV_stack_11->SetBinContent(2,8.552724);
   hNCinFV_stack_11->SetBinContent(3,10.65042);
   hNCinFV_stack_11->SetBinContent(4,7.6224);
   hNCinFV_stack_11->SetBinContent(5,9.574947);
   hNCinFV_stack_11->SetBinContent(6,7.23235);
   hNCinFV_stack_11->SetBinContent(7,7.978875);
   hNCinFV_stack_11->SetBinContent(8,7.679034);
   hNCinFV_stack_11->SetBinContent(9,9.341276);
   hNCinFV_stack_11->SetBinContent(10,6.643895);
   hNCinFV_stack_11->SetBinContent(11,8.051096);
   hNCinFV_stack_11->SetBinContent(12,10.98046);
   hNCinFV_stack_11->SetBinContent(13,7.377503);
   hNCinFV_stack_11->SetBinContent(14,9.871407);
   hNCinFV_stack_11->SetBinContent(15,10.05859);
   hNCinFV_stack_11->SetBinContent(16,7.184169);
   hNCinFV_stack_11->SetBinContent(17,6.826004);
   hNCinFV_stack_11->SetBinContent(18,8.146377);
   hNCinFV_stack_11->SetBinContent(19,7.282222);
   hNCinFV_stack_11->SetBinContent(20,6.201674);
   hNCinFV_stack_11->SetBinContent(21,7.862958);
   hNCinFV_stack_11->SetBinContent(22,8.118956);
   hNCinFV_stack_11->SetBinContent(23,7.659356);
   hNCinFV_stack_11->SetBinContent(24,8.260727);
   hNCinFV_stack_11->SetBinError(1,1.455137);
   hNCinFV_stack_11->SetBinError(2,1.455465);
   hNCinFV_stack_11->SetBinError(3,1.666044);
   hNCinFV_stack_11->SetBinError(4,1.373524);
   hNCinFV_stack_11->SetBinError(5,1.570415);
   hNCinFV_stack_11->SetBinError(6,1.345547);
   hNCinFV_stack_11->SetBinError(7,1.345468);
   hNCinFV_stack_11->SetBinError(8,1.359987);
   hNCinFV_stack_11->SetBinError(9,1.507922);
   hNCinFV_stack_11->SetBinError(10,1.301948);
   hNCinFV_stack_11->SetBinError(11,1.454983);
   hNCinFV_stack_11->SetBinError(12,1.699249);
   hNCinFV_stack_11->SetBinError(13,1.374112);
   hNCinFV_stack_11->SetBinError(14,1.557433);
   hNCinFV_stack_11->SetBinError(15,1.630628);
   hNCinFV_stack_11->SetBinError(16,1.360445);
   hNCinFV_stack_11->SetBinError(17,1.38796);
   hNCinFV_stack_11->SetBinError(18,1.494762);
   hNCinFV_stack_11->SetBinError(19,1.330732);
   hNCinFV_stack_11->SetBinError(20,1.208041);
   hNCinFV_stack_11->SetBinError(21,1.394185);
   hNCinFV_stack_11->SetBinError(22,1.373311);
   hNCinFV_stack_11->SetBinError(23,1.428372);
   hNCinFV_stack_11->SetBinError(24,1.400837);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,7.465773);
   hnumuCCinFV_stack_12->SetBinContent(2,9.503279);
   hnumuCCinFV_stack_12->SetBinContent(3,9.118014);
   hnumuCCinFV_stack_12->SetBinContent(4,4.188566);
   hnumuCCinFV_stack_12->SetBinContent(5,4.90651);
   hnumuCCinFV_stack_12->SetBinContent(6,5.147471);
   hnumuCCinFV_stack_12->SetBinContent(7,5.181241);
   hnumuCCinFV_stack_12->SetBinContent(8,8.183912);
   hnumuCCinFV_stack_12->SetBinContent(9,5.800985);
   hnumuCCinFV_stack_12->SetBinContent(10,4.348046);
   hnumuCCinFV_stack_12->SetBinContent(11,9.022297);
   hnumuCCinFV_stack_12->SetBinContent(12,8.10911);
   hnumuCCinFV_stack_12->SetBinContent(13,8.692657);
   hnumuCCinFV_stack_12->SetBinContent(14,7.150007);
   hnumuCCinFV_stack_12->SetBinContent(15,8.117967);
   hnumuCCinFV_stack_12->SetBinContent(16,5.751721);
   hnumuCCinFV_stack_12->SetBinContent(17,4.124786);
   hnumuCCinFV_stack_12->SetBinContent(18,4.141975);
   hnumuCCinFV_stack_12->SetBinContent(19,6.315301);
   hnumuCCinFV_stack_12->SetBinContent(20,4.949301);
   hnumuCCinFV_stack_12->SetBinContent(21,5.959093);
   hnumuCCinFV_stack_12->SetBinContent(22,8.777519);
   hnumuCCinFV_stack_12->SetBinContent(23,11.80687);
   hnumuCCinFV_stack_12->SetBinContent(24,12.2548);
   hnumuCCinFV_stack_12->SetBinError(1,1.722333);
   hnumuCCinFV_stack_12->SetBinError(2,1.812658);
   hnumuCCinFV_stack_12->SetBinError(3,1.562341);
   hnumuCCinFV_stack_12->SetBinError(4,1.048447);
   hnumuCCinFV_stack_12->SetBinError(5,1.1373);
   hnumuCCinFV_stack_12->SetBinError(6,1.387775);
   hnumuCCinFV_stack_12->SetBinError(7,1.140958);
   hnumuCCinFV_stack_12->SetBinError(8,1.640804);
   hnumuCCinFV_stack_12->SetBinError(9,1.340923);
   hnumuCCinFV_stack_12->SetBinError(10,1.059108);
   hnumuCCinFV_stack_12->SetBinError(11,1.608565);
   hnumuCCinFV_stack_12->SetBinError(12,2.055625);
   hnumuCCinFV_stack_12->SetBinError(13,1.530838);
   hnumuCCinFV_stack_12->SetBinError(14,1.938773);
   hnumuCCinFV_stack_12->SetBinError(15,1.416859);
   hnumuCCinFV_stack_12->SetBinError(16,1.160077);
   hnumuCCinFV_stack_12->SetBinError(17,1.037734);
   hnumuCCinFV_stack_12->SetBinError(18,1.084546);
   hnumuCCinFV_stack_12->SetBinError(19,1.309313);
   hnumuCCinFV_stack_12->SetBinError(20,1.456313);
   hnumuCCinFV_stack_12->SetBinError(21,1.683007);
   hnumuCCinFV_stack_12->SetBinError(22,1.495604);
   hnumuCCinFV_stack_12->SetBinError(23,2.188349);
   hnumuCCinFV_stack_12->SetBinError(24,1.839019);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.21975);
   hnueCCinFV_stack_13->SetBinContent(2,3.387337);
   hnueCCinFV_stack_13->SetBinContent(3,1.668278);
   hnueCCinFV_stack_13->SetBinContent(4,0.9403464);
   hnueCCinFV_stack_13->SetBinContent(5,0.5882818);
   hnueCCinFV_stack_13->SetBinContent(6,0.4485508);
   hnueCCinFV_stack_13->SetBinContent(7,1.03868);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_13->SetBinContent(9,1.505798);
   hnueCCinFV_stack_13->SetBinContent(10,1.264272);
   hnueCCinFV_stack_13->SetBinContent(11,1.005495);
   hnueCCinFV_stack_13->SetBinContent(12,1.053041);
   hnueCCinFV_stack_13->SetBinContent(13,1.485757);
   hnueCCinFV_stack_13->SetBinContent(14,1.20151);
   hnueCCinFV_stack_13->SetBinContent(15,0.8434055);
   hnueCCinFV_stack_13->SetBinContent(16,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(17,1.499247);
   hnueCCinFV_stack_13->SetBinContent(18,2.239338);
   hnueCCinFV_stack_13->SetBinContent(19,0.1969809);
   hnueCCinFV_stack_13->SetBinContent(20,2.166725);
   hnueCCinFV_stack_13->SetBinContent(21,1.045112);
   hnueCCinFV_stack_13->SetBinContent(22,0.6984651);
   hnueCCinFV_stack_13->SetBinContent(23,1.147058);
   hnueCCinFV_stack_13->SetBinContent(24,0.3917402);
   hnueCCinFV_stack_13->SetBinError(1,0.5542831);
   hnueCCinFV_stack_13->SetBinError(2,1.699132);
   hnueCCinFV_stack_13->SetBinError(3,0.658797);
   hnueCCinFV_stack_13->SetBinError(4,0.5554396);
   hnueCCinFV_stack_13->SetBinError(5,0.4266349);
   hnueCCinFV_stack_13->SetBinError(6,0.3195591);
   hnueCCinFV_stack_13->SetBinError(7,0.6373443);
   hnueCCinFV_stack_13->SetBinError(8,0.372493);
   hnueCCinFV_stack_13->SetBinError(9,0.7697598);
   hnueCCinFV_stack_13->SetBinError(10,0.9409678);
   hnueCCinFV_stack_13->SetBinError(11,0.4501868);
   hnueCCinFV_stack_13->SetBinError(12,0.4730388);
   hnueCCinFV_stack_13->SetBinError(13,0.8052145);
   hnueCCinFV_stack_13->SetBinError(14,0.6419086);
   hnueCCinFV_stack_13->SetBinError(15,0.4228157);
   hnueCCinFV_stack_13->SetBinError(16,0.2781615);
   hnueCCinFV_stack_13->SetBinError(17,0.6249211);
   hnueCCinFV_stack_13->SetBinError(18,1.396961);
   hnueCCinFV_stack_13->SetBinError(19,0.1967155);
   hnueCCinFV_stack_13->SetBinError(20,1.230297);
   hnueCCinFV_stack_13->SetBinError(21,0.5869622);
   hnueCCinFV_stack_13->SetBinError(22,0.4940554);
   hnueCCinFV_stack_13->SetBinError(23,0.6969692);
   hnueCCinFV_stack_13->SetBinError(24,0.2770047);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__17->SetBinContent(1,121.8651);
   hmcerror__17->SetBinContent(2,131.9903);
   hmcerror__17->SetBinContent(3,139.3602);
   hmcerror__17->SetBinContent(4,118.6039);
   hmcerror__17->SetBinContent(5,120.812);
   hmcerror__17->SetBinContent(6,121.3498);
   hmcerror__17->SetBinContent(7,115.3897);
   hmcerror__17->SetBinContent(8,108.5795);
   hmcerror__17->SetBinContent(9,122.8838);
   hmcerror__17->SetBinContent(10,109.5373);
   hmcerror__17->SetBinContent(11,125.2156);
   hmcerror__17->SetBinContent(12,116.5715);
   hmcerror__17->SetBinContent(13,113.5884);
   hmcerror__17->SetBinContent(14,124.283);
   hmcerror__17->SetBinContent(15,122.6965);
   hmcerror__17->SetBinContent(16,120.6923);
   hmcerror__17->SetBinContent(17,125.1592);
   hmcerror__17->SetBinContent(18,121.6874);
   hmcerror__17->SetBinContent(19,127.0763);
   hmcerror__17->SetBinContent(20,126.4707);
   hmcerror__17->SetBinContent(21,131.9446);
   hmcerror__17->SetBinContent(22,132.8721);
   hmcerror__17->SetBinContent(23,134.4046);
   hmcerror__17->SetBinContent(24,113.0733);
   hmcerror__17->SetBinError(1,34.47794);
   hmcerror__17->SetBinError(2,36.24081);
   hmcerror__17->SetBinError(3,39.39602);
   hmcerror__17->SetBinError(4,31.12865);
   hmcerror__17->SetBinError(5,36.61877);
   hmcerror__17->SetBinError(6,30.56221);
   hmcerror__17->SetBinError(7,32.27406);
   hmcerror__17->SetBinError(8,32.60984);
   hmcerror__17->SetBinError(9,38.9439);
   hmcerror__17->SetBinError(10,31.96968);
   hmcerror__17->SetBinError(11,44.58915);
   hmcerror__17->SetBinError(12,32.22272);
   hmcerror__17->SetBinError(13,35.98206);
   hmcerror__17->SetBinError(14,33.78413);
   hmcerror__17->SetBinError(15,33.8936);
   hmcerror__17->SetBinError(16,35.96034);
   hmcerror__17->SetBinError(17,33.73313);
   hmcerror__17->SetBinError(18,29.96041);
   hmcerror__17->SetBinError(19,32.63689);
   hmcerror__17->SetBinError(20,33.05148);
   hmcerror__17->SetBinError(21,36.2999);
   hmcerror__17->SetBinError(22,43.73758);
   hmcerror__17->SetBinError(23,34.97904);
   hmcerror__17->SetBinError(24,32.81288);
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
   114,
   149,
   126,
   154,
   128,
   122,
   121,
   103,
   103,
   134,
   109,
   88,
   120,
   115,
   132,
   113,
   131,
   109,
   124,
   127,
   131,
   128,
   139,
   118};
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
   10.67708,
   12.20656,
   11.22497,
   12.40967,
   11.31371,
   11.04536,
   11,
   10.14889,
   10.14889,
   11.57584,
   10.44031,
   9.5036,
   10.95445,
   10.72381,
   11.48913,
   10.63015,
   11.44552,
   10.44031,
   11.13553,
   11.26943,
   11.44552,
   11.31371,
   11.78983,
   10.86278};
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
   10.67708,
   12.20656,
   11.22497,
   12.40967,
   11.31371,
   11.04536,
   11,
   10.14889,
   10.14889,
   11.57584,
   10.44031,
   9.3021,
   10.95445,
   10.72381,
   11.48913,
   10.63015,
   11.44552,
   10.44031,
   11.13553,
   11.26943,
   11.44552,
   11.31371,
   11.78983,
   10.86278};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(69.70507);
   Graph_Graph3021->SetMaximum(175.201);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.2/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_phi_all");
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
   0.2829189,
   0.2745718,
   0.282692,
   0.2624589,
   0.3031055,
   0.2518522,
   0.2796961,
   0.3003314,
   0.3169164,
   0.2918612,
   0.3560989,
   0.2764202,
   0.316776,
   0.2718323,
   0.2762393,
   0.2979507,
   0.2695217,
   0.246208,
   0.256829,
   0.2613371,
   0.2751146,
   0.3291706,
   0.2602518,
   0.2901913};
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
   0.2829189,
   0.2745718,
   0.282692,
   0.2624589,
   0.3031055,
   0.2518522,
   0.2796961,
   0.3003314,
   0.3169164,
   0.2918612,
   0.3560989,
   0.2764202,
   0.316776,
   0.2718323,
   0.2762393,
   0.2979507,
   0.2695217,
   0.246208,
   0.256829,
   0.2613371,
   0.2751146,
   0.3291706,
   0.2602518,
   0.2901913};
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
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
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
   0.2137798,
   0.2114047,
   0.2166369,
   0.2153198,
   0.2127102,
   0.1879864,
   0.2083946,
   0.2247892,
   0.20908,
   0.2134934,
   0.2119957,
   0.2191645,
   0.2091631,
   0.2094397,
   0.2053364,
   0.2083404,
   0.2016767,
   0.1918778,
   0.1983863,
   0.1994808,
   0.2110228,
   0.2097729,
   0.2046839,
   0.2110762};
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
   0.2137798,
   0.2114047,
   0.2166369,
   0.2153198,
   0.2127102,
   0.1879864,
   0.2083946,
   0.2247892,
   0.20908,
   0.2134934,
   0.2119957,
   0.2191645,
   0.2091631,
   0.2094397,
   0.2053364,
   0.2083404,
   0.2016767,
   0.1918778,
   0.1983863,
   0.1994808,
   0.2110228,
   0.2097729,
   0.2046839,
   0.2110762};
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
   0.9354606,
   1.128871,
   0.9041319,
   1.298439,
   1.059498,
   1.005358,
   1.04862,
   0.9486134,
   0.83819,
   1.223328,
   0.8704984,
   0.7549015,
   1.056446,
   0.9253076,
   1.075825,
   0.9362656,
   1.046667,
   0.8957376,
   0.9757915,
   1.004185,
   0.9928407,
   0.9633325,
   1.034191,
   1.043571};
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
   0.08761391,
   0.09248069,
   0.08054647,
   0.1046312,
   0.09364726,
   0.09102084,
   0.09532911,
   0.09346965,
   0.08258932,
   0.1056794,
   0.08337862,
   0.08152593,
   0.09643991,
   0.08628538,
   0.09363856,
   0.08807646,
   0.09144772,
   0.08579611,
   0.08762866,
   0.08910704,
   0.0867449,
   0.08514737,
   0.08771893,
   0.09606851};
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
   0.08761391,
   0.09248069,
   0.08054647,
   0.1046312,
   0.09364726,
   0.09102084,
   0.09532911,
   0.09346965,
   0.08258932,
   0.1056794,
   0.08337862,
   0.07979738,
   0.09643991,
   0.08628538,
   0.09363856,
   0.08807646,
   0.09144772,
   0.08579611,
   0.08762866,
   0.08910704,
   0.0867449,
   0.08514737,
   0.08771893,
   0.09606851};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.6004061);
   Graph_Graph3024->SetMaximum(1.47604);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);

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

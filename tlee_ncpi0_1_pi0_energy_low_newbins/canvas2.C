#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 19:43:27 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-46.15385,-15.08,338.4615,1667.531);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__4->SetBinContent(1,441.8412);
   hmc__4->SetBinContent(2,639.4972);
   hmc__4->SetBinContent(3,683.4419);
   hmc__4->SetBinContent(4,651.3452);
   hmc__4->SetBinContent(5,574.8528);
   hmc__4->SetBinContent(6,469.6744);
   hmc__4->SetBinContent(7,389.812);
   hmc__4->SetBinContent(8,315.5585);
   hmc__4->SetBinContent(9,230.7788);
   hmc__4->SetBinContent(10,177.1393);
   hmc__4->SetBinContent(11,135.5453);
   hmc__4->SetBinContent(12,101.9827);
   hmc__4->SetBinContent(13,88.03604);
   hmc__4->SetBinContent(14,63.6769);
   hmc__4->SetBinContent(15,50.68368);
   hmc__4->SetBinContent(16,36.23104);
   hmc__4->SetBinContent(17,26.47865);
   hmc__4->SetBinContent(18,20.91696);
   hmc__4->SetBinContent(19,23.48067);
   hmc__4->SetBinContent(20,14.02819);
   hmc__4->SetBinContent(21,49.94904);
   hmc__4->SetBinError(1,107.1324);
   hmc__4->SetBinError(2,154.0709);
   hmc__4->SetBinError(3,183.7559);
   hmc__4->SetBinError(4,182.6699);
   hmc__4->SetBinError(5,159.6757);
   hmc__4->SetBinError(6,140.7654);
   hmc__4->SetBinError(7,117.347);
   hmc__4->SetBinError(8,92.37408);
   hmc__4->SetBinError(9,69.20491);
   hmc__4->SetBinError(10,57.64381);
   hmc__4->SetBinError(11,44.79005);
   hmc__4->SetBinError(12,33.68852);
   hmc__4->SetBinError(13,29.94723);
   hmc__4->SetBinError(14,22.1273);
   hmc__4->SetBinError(15,21.55112);
   hmc__4->SetBinError(16,17.42231);
   hmc__4->SetBinError(17,18.68456);
   hmc__4->SetBinError(18,9.794701);
   hmc__4->SetBinError(19,23.00153);
   hmc__4->SetBinError(20,9.69442);
   hmc__4->SetBinError(21,25.01284);
   hmc__4->SetMinimum(-15.08);
   hmc__4->SetMaximum(1583.4);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,300);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(717.614);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,8.411862);
   hbadmatch_stack_1->SetBinContent(2,18.74744);
   hbadmatch_stack_1->SetBinContent(3,15.10061);
   hbadmatch_stack_1->SetBinContent(4,17.2085);
   hbadmatch_stack_1->SetBinContent(5,14.5134);
   hbadmatch_stack_1->SetBinContent(6,14.12241);
   hbadmatch_stack_1->SetBinContent(7,9.066313);
   hbadmatch_stack_1->SetBinContent(8,5.608026);
   hbadmatch_stack_1->SetBinContent(9,4.742063);
   hbadmatch_stack_1->SetBinContent(10,3.11658);
   hbadmatch_stack_1->SetBinContent(11,2.581051);
   hbadmatch_stack_1->SetBinContent(12,1.109209);
   hbadmatch_stack_1->SetBinContent(13,1.311284);
   hbadmatch_stack_1->SetBinContent(14,0.298642);
   hbadmatch_stack_1->SetBinContent(15,0.8737856);
   hbadmatch_stack_1->SetBinContent(16,0.4628094);
   hbadmatch_stack_1->SetBinContent(17,0.4212931);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.3824374);
   hbadmatch_stack_1->SetBinContent(21,0.8163177);
   hbadmatch_stack_1->SetBinError(1,1.555205);
   hbadmatch_stack_1->SetBinError(2,2.238807);
   hbadmatch_stack_1->SetBinError(3,2.545251);
   hbadmatch_stack_1->SetBinError(4,2.946119);
   hbadmatch_stack_1->SetBinError(5,1.947522);
   hbadmatch_stack_1->SetBinError(6,2.253879);
   hbadmatch_stack_1->SetBinError(7,1.512165);
   hbadmatch_stack_1->SetBinError(8,1.250789);
   hbadmatch_stack_1->SetBinError(9,1.950071);
   hbadmatch_stack_1->SetBinError(10,0.9971842);
   hbadmatch_stack_1->SetBinError(11,0.8272618);
   hbadmatch_stack_1->SetBinError(12,0.5094726);
   hbadmatch_stack_1->SetBinError(13,0.6044705);
   hbadmatch_stack_1->SetBinError(14,0.2215535);
   hbadmatch_stack_1->SetBinError(15,0.6840004);
   hbadmatch_stack_1->SetBinError(16,0.3616067);
   hbadmatch_stack_1->SetBinError(17,0.29855);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.2705358);
   hbadmatch_stack_1->SetBinError(21,0.6163994);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,58.88656);
   hext_stack_2->SetBinContent(2,82.41407);
   hext_stack_2->SetBinContent(3,74.84602);
   hext_stack_2->SetBinContent(4,72.33576);
   hext_stack_2->SetBinContent(5,56.08515);
   hext_stack_2->SetBinContent(6,31.61753);
   hext_stack_2->SetBinContent(7,25.61675);
   hext_stack_2->SetBinContent(8,26.58276);
   hext_stack_2->SetBinContent(9,11.89064);
   hext_stack_2->SetBinContent(10,4.371616);
   hext_stack_2->SetBinContent(11,4.931029);
   hext_stack_2->SetBinContent(12,7.601229);
   hext_stack_2->SetBinContent(13,4.214394);
   hext_stack_2->SetBinContent(14,1.055394);
   hext_stack_2->SetBinContent(15,1.379791);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,0.4065989);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinError(1,5.330168);
   hext_stack_2->SetBinError(2,6.270876);
   hext_stack_2->SetBinError(3,5.817501);
   hext_stack_2->SetBinError(4,5.835719);
   hext_stack_2->SetBinError(5,5.018691);
   hext_stack_2->SetBinError(6,3.823492);
   hext_stack_2->SetBinError(7,3.502625);
   hext_stack_2->SetBinError(8,3.575652);
   hext_stack_2->SetBinError(9,2.333695);
   hext_stack_2->SetBinError(10,1.423285);
   hext_stack_2->SetBinError(11,1.541856);
   hext_stack_2->SetBinError(12,1.865604);
   hext_stack_2->SetBinError(13,1.305512);
   hext_stack_2->SetBinError(14,0.6130171);
   hext_stack_2->SetBinError(15,0.6935586);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,0.4065989);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,2.99941);
   hdirt_stack_3->SetBinContent(2,10.97708);
   hdirt_stack_3->SetBinContent(3,10.2636);
   hdirt_stack_3->SetBinContent(4,7.826617);
   hdirt_stack_3->SetBinContent(5,6.701765);
   hdirt_stack_3->SetBinContent(6,2.869473);
   hdirt_stack_3->SetBinContent(7,2.363513);
   hdirt_stack_3->SetBinContent(8,2.69528);
   hdirt_stack_3->SetBinContent(9,1.872768);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.5570828);
   hdirt_stack_3->SetBinError(1,0.8768997);
   hdirt_stack_3->SetBinError(2,1.732558);
   hdirt_stack_3->SetBinError(3,1.594044);
   hdirt_stack_3->SetBinError(4,1.470918);
   hdirt_stack_3->SetBinError(5,1.570877);
   hdirt_stack_3->SetBinError(6,0.927122);
   hdirt_stack_3->SetBinError(7,0.8395789);
   hdirt_stack_3->SetBinError(8,1.255981);
   hdirt_stack_3->SetBinError(9,0.7156956);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.4028472);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,36.16547);
   houtFV_stack_4->SetBinContent(2,55.6244);
   houtFV_stack_4->SetBinContent(3,62.23699);
   houtFV_stack_4->SetBinContent(4,50.81207);
   houtFV_stack_4->SetBinContent(5,46.69467);
   houtFV_stack_4->SetBinContent(6,38.75953);
   houtFV_stack_4->SetBinContent(7,23.22777);
   houtFV_stack_4->SetBinContent(8,16.42494);
   houtFV_stack_4->SetBinContent(9,9.990753);
   houtFV_stack_4->SetBinContent(10,7.217913);
   houtFV_stack_4->SetBinContent(11,7.69451);
   houtFV_stack_4->SetBinContent(12,3.843047);
   houtFV_stack_4->SetBinContent(13,4.388811);
   houtFV_stack_4->SetBinContent(14,2.145557);
   houtFV_stack_4->SetBinContent(15,0.8721297);
   houtFV_stack_4->SetBinContent(16,1.925225);
   houtFV_stack_4->SetBinContent(17,1.481734);
   houtFV_stack_4->SetBinContent(18,0.1211005);
   houtFV_stack_4->SetBinContent(19,0.7319179);
   houtFV_stack_4->SetBinContent(21,0.7660608);
   houtFV_stack_4->SetBinError(1,3.036939);
   houtFV_stack_4->SetBinError(2,3.739083);
   houtFV_stack_4->SetBinError(3,3.898902);
   houtFV_stack_4->SetBinError(4,3.552377);
   houtFV_stack_4->SetBinError(5,3.482815);
   houtFV_stack_4->SetBinError(6,3.07052);
   houtFV_stack_4->SetBinError(7,2.420934);
   houtFV_stack_4->SetBinError(8,1.944411);
   houtFV_stack_4->SetBinError(9,1.547245);
   houtFV_stack_4->SetBinError(10,1.295926);
   houtFV_stack_4->SetBinError(11,1.400992);
   houtFV_stack_4->SetBinError(12,0.9506412);
   houtFV_stack_4->SetBinError(13,1.049591);
   houtFV_stack_4->SetBinError(14,0.6974268);
   houtFV_stack_4->SetBinError(15,0.4820024);
   houtFV_stack_4->SetBinError(16,0.7225067);
   houtFV_stack_4->SetBinError(17,0.6262202);
   houtFV_stack_4->SetBinError(18,0.1211005);
   houtFV_stack_4->SetBinError(19,0.438694);
   houtFV_stack_4->SetBinError(21,0.4650237);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.981189);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,11.99935);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,10.44467);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.1258);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.412784);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.776903);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.881227);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.494046);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.615829);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.448366);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.828668);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.88017);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.994586);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.923429);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.005534);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2985383);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.226592);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08303507);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7335298);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3706383);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.287412);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.229769);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.271941);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.090759);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.324689);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9543359);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8894294);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9231271);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.9112513);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.127088);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7789514);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5480094);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7482851);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5937765);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5340045);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7006026);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.09432402);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.08386817);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04259509);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3615077);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1928416);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6099635);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.022745);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.641083);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.831307);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.535439);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.689197);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.283417);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.498465);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6717402);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.629259);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1217952);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3599139);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1088121);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2565304);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1647872);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1454196);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2607079);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3502873);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4709755);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4932531);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.510007);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4545454);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3455027);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2013973);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2261023);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04615079);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1614941);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0512754);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1799647);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1314978);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1294067);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01677029);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,137.8492);
   hNCpi0inFVres_stack_7->SetBinContent(2,230.5684);
   hNCpi0inFVres_stack_7->SetBinContent(3,266.6648);
   hNCpi0inFVres_stack_7->SetBinContent(4,266.592);
   hNCpi0inFVres_stack_7->SetBinContent(5,225.1157);
   hNCpi0inFVres_stack_7->SetBinContent(6,189.7583);
   hNCpi0inFVres_stack_7->SetBinContent(7,159.6135);
   hNCpi0inFVres_stack_7->SetBinContent(8,121.216);
   hNCpi0inFVres_stack_7->SetBinContent(9,87.56416);
   hNCpi0inFVres_stack_7->SetBinContent(10,71.24004);
   hNCpi0inFVres_stack_7->SetBinContent(11,49.64138);
   hNCpi0inFVres_stack_7->SetBinContent(12,34.26981);
   hNCpi0inFVres_stack_7->SetBinContent(13,28.00881);
   hNCpi0inFVres_stack_7->SetBinContent(14,19.85261);
   hNCpi0inFVres_stack_7->SetBinContent(15,17.1436);
   hNCpi0inFVres_stack_7->SetBinContent(16,11.34468);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.468448);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.238749);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.171767);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.928292);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.68944);
   hNCpi0inFVres_stack_7->SetBinError(1,4.030538);
   hNCpi0inFVres_stack_7->SetBinError(2,4.949597);
   hNCpi0inFVres_stack_7->SetBinError(3,5.318539);
   hNCpi0inFVres_stack_7->SetBinError(4,5.293455);
   hNCpi0inFVres_stack_7->SetBinError(5,4.775673);
   hNCpi0inFVres_stack_7->SetBinError(6,4.309051);
   hNCpi0inFVres_stack_7->SetBinError(7,4.239428);
   hNCpi0inFVres_stack_7->SetBinError(8,3.623763);
   hNCpi0inFVres_stack_7->SetBinError(9,2.987003);
   hNCpi0inFVres_stack_7->SetBinError(10,2.744912);
   hNCpi0inFVres_stack_7->SetBinError(11,2.327552);
   hNCpi0inFVres_stack_7->SetBinError(12,1.755355);
   hNCpi0inFVres_stack_7->SetBinError(13,1.784683);
   hNCpi0inFVres_stack_7->SetBinError(14,1.422764);
   hNCpi0inFVres_stack_7->SetBinError(15,1.540998);
   hNCpi0inFVres_stack_7->SetBinError(16,1.211548);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9462611);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9217749);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9943099);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7914408);
   hNCpi0inFVres_stack_7->SetBinError(21,1.44857);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,26.82536);
   hNCpi0inFVdis_stack_8->SetBinContent(2,43.85407);
   hNCpi0inFVdis_stack_8->SetBinContent(3,51.1113);
   hNCpi0inFVdis_stack_8->SetBinContent(4,48.10087);
   hNCpi0inFVdis_stack_8->SetBinContent(5,44.20998);
   hNCpi0inFVdis_stack_8->SetBinContent(6,39.10014);
   hNCpi0inFVdis_stack_8->SetBinContent(7,31.79424);
   hNCpi0inFVdis_stack_8->SetBinContent(8,27.34161);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.87084);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.11235);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.19183);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.76702);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.447216);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.309307);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.413138);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.880395);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.886886);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.864907);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.975843);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.192202);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.130227);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.871993);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.219163);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.448076);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.221569);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.160317);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.05678);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.850448);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.946461);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.345439);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.256756);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9293569);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.167156);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9706446);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9380823);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.067375);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9224092);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3552228);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4163523);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8961909);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2783844);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.178814);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1660867);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08644525);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3838176);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2210044);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1627324);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1316759);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03876996);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1605293);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1377396);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1140959);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02577893);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,43.23064);
   hCCpi0inFV_stack_10->SetBinContent(2,64.90872);
   hCCpi0inFV_stack_10->SetBinContent(3,92.03372);
   hCCpi0inFV_stack_10->SetBinContent(4,85.00453);
   hCCpi0inFV_stack_10->SetBinContent(5,92.02904);
   hCCpi0inFV_stack_10->SetBinContent(6,76.09808);
   hCCpi0inFV_stack_10->SetBinContent(7,69.93819);
   hCCpi0inFV_stack_10->SetBinContent(8,54.94255);
   hCCpi0inFV_stack_10->SetBinContent(9,45.37463);
   hCCpi0inFV_stack_10->SetBinContent(10,38.47096);
   hCCpi0inFV_stack_10->SetBinContent(11,24.77495);
   hCCpi0inFV_stack_10->SetBinContent(12,17.8187);
   hCCpi0inFV_stack_10->SetBinContent(13,16.5491);
   hCCpi0inFV_stack_10->SetBinContent(14,13.14095);
   hCCpi0inFV_stack_10->SetBinContent(15,8.892901);
   hCCpi0inFV_stack_10->SetBinContent(16,6.907016);
   hCCpi0inFV_stack_10->SetBinContent(17,5.915358);
   hCCpi0inFV_stack_10->SetBinContent(18,3.96112);
   hCCpi0inFV_stack_10->SetBinContent(19,3.429299);
   hCCpi0inFV_stack_10->SetBinContent(20,2.397541);
   hCCpi0inFV_stack_10->SetBinContent(21,10.10328);
   hCCpi0inFV_stack_10->SetBinError(1,3.301718);
   hCCpi0inFV_stack_10->SetBinError(2,4.023722);
   hCCpi0inFV_stack_10->SetBinError(3,4.848532);
   hCCpi0inFV_stack_10->SetBinError(4,4.559208);
   hCCpi0inFV_stack_10->SetBinError(5,4.792423);
   hCCpi0inFV_stack_10->SetBinError(6,4.39276);
   hCCpi0inFV_stack_10->SetBinError(7,4.270558);
   hCCpi0inFV_stack_10->SetBinError(8,3.669486);
   hCCpi0inFV_stack_10->SetBinError(9,3.304383);
   hCCpi0inFV_stack_10->SetBinError(10,3.142836);
   hCCpi0inFV_stack_10->SetBinError(11,2.506188);
   hCCpi0inFV_stack_10->SetBinError(12,2.084373);
   hCCpi0inFV_stack_10->SetBinError(13,2.101577);
   hCCpi0inFV_stack_10->SetBinError(14,1.819833);
   hCCpi0inFV_stack_10->SetBinError(15,1.494691);
   hCCpi0inFV_stack_10->SetBinError(16,1.289489);
   hCCpi0inFV_stack_10->SetBinError(17,1.226353);
   hCCpi0inFV_stack_10->SetBinError(18,0.9610635);
   hCCpi0inFV_stack_10->SetBinError(19,0.8781868);
   hCCpi0inFV_stack_10->SetBinError(20,0.7861558);
   hCCpi0inFV_stack_10->SetBinError(21,1.574599);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,43.76017);
   hNCinFV_stack_11->SetBinContent(2,43.46967);
   hNCinFV_stack_11->SetBinContent(3,38.83698);
   hNCinFV_stack_11->SetBinContent(4,39.94939);
   hNCinFV_stack_11->SetBinContent(5,37.14949);
   hNCinFV_stack_11->SetBinContent(6,30.02798);
   hNCinFV_stack_11->SetBinContent(7,29.07978);
   hNCinFV_stack_11->SetBinContent(8,29.29451);
   hNCinFV_stack_11->SetBinContent(9,25.97689);
   hNCinFV_stack_11->SetBinContent(10,20.30726);
   hNCinFV_stack_11->SetBinContent(11,19.64474);
   hNCinFV_stack_11->SetBinContent(12,10.88471);
   hNCinFV_stack_11->SetBinContent(13,15.54685);
   hNCinFV_stack_11->SetBinContent(14,11.49269);
   hNCinFV_stack_11->SetBinContent(15,8.805882);
   hNCinFV_stack_11->SetBinContent(16,5.770377);
   hNCinFV_stack_11->SetBinContent(17,6.883234);
   hNCinFV_stack_11->SetBinContent(18,5.115371);
   hNCinFV_stack_11->SetBinContent(19,7.183331);
   hNCinFV_stack_11->SetBinContent(20,3.162062);
   hNCinFV_stack_11->SetBinContent(21,12.68795);
   hNCinFV_stack_11->SetBinError(1,3.382248);
   hNCinFV_stack_11->SetBinError(2,3.377828);
   hNCinFV_stack_11->SetBinError(3,3.114272);
   hNCinFV_stack_11->SetBinError(4,3.393914);
   hNCinFV_stack_11->SetBinError(5,3.065414);
   hNCinFV_stack_11->SetBinError(6,2.726099);
   hNCinFV_stack_11->SetBinError(7,2.7656);
   hNCinFV_stack_11->SetBinError(8,2.8196);
   hNCinFV_stack_11->SetBinError(9,2.891089);
   hNCinFV_stack_11->SetBinError(10,2.557629);
   hNCinFV_stack_11->SetBinError(11,2.488184);
   hNCinFV_stack_11->SetBinError(12,1.683758);
   hNCinFV_stack_11->SetBinError(13,2.543138);
   hNCinFV_stack_11->SetBinError(14,2.160688);
   hNCinFV_stack_11->SetBinError(15,1.959309);
   hNCinFV_stack_11->SetBinError(16,1.640094);
   hNCinFV_stack_11->SetBinError(17,1.697477);
   hNCinFV_stack_11->SetBinError(18,1.321878);
   hNCinFV_stack_11->SetBinError(19,1.74685);
   hNCinFV_stack_11->SetBinError(20,0.9863142);
   hNCinFV_stack_11->SetBinError(21,2.227069);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,67.27921);
   hnumuCCinFV_stack_12->SetBinContent(2,67.08946);
   hnumuCCinFV_stack_12->SetBinContent(3,55.05577);
   hnumuCCinFV_stack_12->SetBinContent(4,43.15229);
   hnumuCCinFV_stack_12->SetBinContent(5,39.3526);
   hnumuCCinFV_stack_12->SetBinContent(6,35.31229);
   hnumuCCinFV_stack_12->SetBinContent(7,27.26627);
   hnumuCCinFV_stack_12->SetBinContent(8,22.34135);
   hnumuCCinFV_stack_12->SetBinContent(9,16.67803);
   hnumuCCinFV_stack_12->SetBinContent(10,11.57678);
   hnumuCCinFV_stack_12->SetBinContent(11,11.75175);
   hnumuCCinFV_stack_12->SetBinContent(12,9.771314);
   hnumuCCinFV_stack_12->SetBinContent(13,7.926717);
   hnumuCCinFV_stack_12->SetBinContent(14,6.13366);
   hnumuCCinFV_stack_12->SetBinContent(15,4.887995);
   hnumuCCinFV_stack_12->SetBinContent(16,3.56769);
   hnumuCCinFV_stack_12->SetBinContent(17,1.318683);
   hnumuCCinFV_stack_12->SetBinContent(18,2.589184);
   hnumuCCinFV_stack_12->SetBinContent(19,1.548149);
   hnumuCCinFV_stack_12->SetBinContent(20,1.373626);
   hnumuCCinFV_stack_12->SetBinContent(21,3.43099);
   hnumuCCinFV_stack_12->SetBinError(1,5.066605);
   hnumuCCinFV_stack_12->SetBinError(2,4.815583);
   hnumuCCinFV_stack_12->SetBinError(3,5.004825);
   hnumuCCinFV_stack_12->SetBinError(4,3.627062);
   hnumuCCinFV_stack_12->SetBinError(5,3.646158);
   hnumuCCinFV_stack_12->SetBinError(6,3.430428);
   hnumuCCinFV_stack_12->SetBinError(7,2.812153);
   hnumuCCinFV_stack_12->SetBinError(8,2.782786);
   hnumuCCinFV_stack_12->SetBinError(9,2.114402);
   hnumuCCinFV_stack_12->SetBinError(10,1.873843);
   hnumuCCinFV_stack_12->SetBinError(11,1.819364);
   hnumuCCinFV_stack_12->SetBinError(12,1.597126);
   hnumuCCinFV_stack_12->SetBinError(13,1.452192);
   hnumuCCinFV_stack_12->SetBinError(14,1.250809);
   hnumuCCinFV_stack_12->SetBinError(15,1.134043);
   hnumuCCinFV_stack_12->SetBinError(16,0.919918);
   hnumuCCinFV_stack_12->SetBinError(17,0.5542732);
   hnumuCCinFV_stack_12->SetBinError(18,0.809167);
   hnumuCCinFV_stack_12->SetBinError(19,0.5996319);
   hnumuCCinFV_stack_12->SetBinError(20,0.519186);
   hnumuCCinFV_stack_12->SetBinError(21,0.8785637);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,6.422368);
   hnueCCinFV_stack_13->SetBinContent(2,8.037408);
   hnueCCinFV_stack_13->SetBinContent(3,3.929613);
   hnueCCinFV_stack_13->SetBinContent(4,5.318125);
   hnueCCinFV_stack_13->SetBinContent(5,1.677982);
   hnueCCinFV_stack_13->SetBinContent(6,1.785574);
   hnueCCinFV_stack_13->SetBinContent(7,3.447731);
   hnueCCinFV_stack_13->SetBinContent(8,1.909181);
   hnueCCinFV_stack_13->SetBinContent(9,1.572978);
   hnueCCinFV_stack_13->SetBinContent(10,0.9539624);
   hnueCCinFV_stack_13->SetBinContent(11,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(12,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,1.324658);
   hnueCCinFV_stack_13->SetBinContent(15,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(16,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(20,1.279433);
   hnueCCinFV_stack_13->SetBinContent(21,1.289601);
   hnueCCinFV_stack_13->SetBinError(1,1.939427);
   hnueCCinFV_stack_13->SetBinError(2,1.829069);
   hnueCCinFV_stack_13->SetBinError(3,1.068291);
   hnueCCinFV_stack_13->SetBinError(4,1.245564);
   hnueCCinFV_stack_13->SetBinError(5,0.7584522);
   hnueCCinFV_stack_13->SetBinError(6,0.6381707);
   hnueCCinFV_stack_13->SetBinError(7,1.480828);
   hnueCCinFV_stack_13->SetBinError(8,0.8077622);
   hnueCCinFV_stack_13->SetBinError(9,0.6628634);
   hnueCCinFV_stack_13->SetBinError(10,0.4898972);
   hnueCCinFV_stack_13->SetBinError(11,0.3397478);
   hnueCCinFV_stack_13->SetBinError(12,0.48078);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,1.104353);
   hnueCCinFV_stack_13->SetBinError(15,0.2441371);
   hnueCCinFV_stack_13->SetBinError(16,0.3743698);
   hnueCCinFV_stack_13->SetBinError(20,0.6886788);
   hnueCCinFV_stack_13->SetBinError(21,0.5962229);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__5->SetBinContent(1,441.8412);
   hmcerror__5->SetBinContent(2,639.4972);
   hmcerror__5->SetBinContent(3,683.4419);
   hmcerror__5->SetBinContent(4,651.3452);
   hmcerror__5->SetBinContent(5,574.8528);
   hmcerror__5->SetBinContent(6,469.6744);
   hmcerror__5->SetBinContent(7,389.812);
   hmcerror__5->SetBinContent(8,315.5585);
   hmcerror__5->SetBinContent(9,230.7788);
   hmcerror__5->SetBinContent(10,177.1393);
   hmcerror__5->SetBinContent(11,135.5453);
   hmcerror__5->SetBinContent(12,101.9827);
   hmcerror__5->SetBinContent(13,88.03604);
   hmcerror__5->SetBinContent(14,63.6769);
   hmcerror__5->SetBinContent(15,50.68368);
   hmcerror__5->SetBinContent(16,36.23104);
   hmcerror__5->SetBinContent(17,26.47865);
   hmcerror__5->SetBinContent(18,20.91696);
   hmcerror__5->SetBinContent(19,23.48067);
   hmcerror__5->SetBinContent(20,14.02819);
   hmcerror__5->SetBinContent(21,49.94904);
   hmcerror__5->SetBinError(1,107.1324);
   hmcerror__5->SetBinError(2,154.0709);
   hmcerror__5->SetBinError(3,183.7559);
   hmcerror__5->SetBinError(4,182.6699);
   hmcerror__5->SetBinError(5,159.6757);
   hmcerror__5->SetBinError(6,140.7654);
   hmcerror__5->SetBinError(7,117.347);
   hmcerror__5->SetBinError(8,92.37408);
   hmcerror__5->SetBinError(9,69.20491);
   hmcerror__5->SetBinError(10,57.64381);
   hmcerror__5->SetBinError(11,44.79005);
   hmcerror__5->SetBinError(12,33.68852);
   hmcerror__5->SetBinError(13,29.94723);
   hmcerror__5->SetBinError(14,22.1273);
   hmcerror__5->SetBinError(15,21.55112);
   hmcerror__5->SetBinError(16,17.42231);
   hmcerror__5->SetBinError(17,18.68456);
   hmcerror__5->SetBinError(18,9.794701);
   hmcerror__5->SetBinError(19,23.00153);
   hmcerror__5->SetBinError(20,9.69442);
   hmcerror__5->SetBinError(21,25.01284);
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
   
   Double_t _fx3005[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3005[20] = {
   428,
   608,
   754,
   608,
   594,
   480,
   375,
   294,
   228,
   147,
   115,
   88,
   44,
   53,
   32,
   26,
   19,
   15,
   11,
   18};
   Double_t _felx3005[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3005[20] = {
   20.68816,
   24.65766,
   27.45906,
   24.65766,
   24.37212,
   21.9089,
   19.36492,
   17.14643,
   15.09967,
   12.12436,
   10.72381,
   9.5036,
   6.7671,
   7.4105,
   5.7977,
   5.2453,
   4.5151,
   4.0385,
   3.4975,
   4.4008};
   Double_t _fehx3005[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3005[20] = {
   20.68816,
   24.65766,
   27.45906,
   24.65766,
   24.37212,
   21.9089,
   19.36492,
   17.14643,
   15.09967,
   12.12436,
   10.72381,
   9.3021,
   6.5623,
   7.2068,
   5.5904,
   5.0358,
   4.3011,
   3.8197,
   3.27,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,330);
   Graph_Graph3005->SetMinimum(6.75225);
   Graph_Graph3005->SetMaximum(858.8547);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4937.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 118.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 370.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1940.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  399.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 765.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 432.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 436.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 40.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3006[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3006[20] = {
   0.2424681,
   0.2409251,
   0.2688683,
   0.2804501,
   0.277768,
   0.2997084,
   0.3010349,
   0.292732,
   0.2998755,
   0.3254151,
   0.3304433,
   0.3303358,
   0.3401701,
   0.3474934,
   0.4252083,
   0.480867,
   0.7056465,
   0.468266,
   0.9795941,
   0.691067};
   Double_t _fehx3006[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3006[20] = {
   0.2424681,
   0.2409251,
   0.2688683,
   0.2804501,
   0.277768,
   0.2997084,
   0.3010349,
   0.292732,
   0.2998755,
   0.3254151,
   0.3304433,
   0.3303358,
   0.3401701,
   0.3474934,
   0.4252083,
   0.480867,
   0.7056465,
   0.468266,
   0.9795941,
   0.691067};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,330);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3007[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3007[20] = {
   0.206708,
   0.2322306,
   0.2630998,
   0.2726786,
   0.2722311,
   0.2935071,
   0.2889201,
   0.2739639,
   0.2753541,
   0.2800779,
   0.2799856,
   0.2790833,
   0.2821032,
   0.2722138,
   0.2734565,
   0.254559,
   0.2590727,
   0.2835627,
   0.2885992,
   0.2791144};
   Double_t _fehx3007[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3007[20] = {
   0.206708,
   0.2322306,
   0.2630998,
   0.2726786,
   0.2722311,
   0.2935071,
   0.2889201,
   0.2739639,
   0.2753541,
   0.2800779,
   0.2799856,
   0.2790833,
   0.2821032,
   0.2722138,
   0.2734565,
   0.254559,
   0.2590727,
   0.2835627,
   0.2885992,
   0.2791144};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,330);
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
   
   Double_t _fx3008[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3008[20] = {
   0.9686738,
   0.9507469,
   1.103239,
   0.9334528,
   1.033308,
   1.021985,
   0.9620022,
   0.9316815,
   0.9879589,
   0.8298555,
   0.8484245,
   0.8628918,
   0.4997953,
   0.832327,
   0.6313669,
   0.7176167,
   0.7175594,
   0.7171214,
   0.4684704,
   1.28313};
   Double_t _felx3008[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3008[20] = {
   0.04682262,
   0.03855788,
   0.04017761,
   0.03785651,
   0.04239714,
   0.046647,
   0.04967758,
   0.05433677,
   0.06542918,
   0.06844532,
   0.079116,
   0.09318839,
   0.07686738,
   0.1163766,
   0.1143899,
   0.1447736,
   0.1705185,
   0.193073,
   0.1489523,
   0.3137111};
   Double_t _fehx3008[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3008[20] = {
   0.04682262,
   0.03855788,
   0.04017761,
   0.03785651,
   0.04239714,
   0.046647,
   0.04967758,
   0.05433677,
   0.06542918,
   0.06844532,
   0.079116,
   0.09121257,
   0.07454106,
   0.1131776,
   0.1102998,
   0.1389913,
   0.1624366,
   0.1826126,
   0.1392635,
   0.2983849};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,330);
   Graph_Graph3008->SetMinimum(0.1933184);
   Graph_Graph3008->SetMaximum(1.707715);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_energy_low_all",20,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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

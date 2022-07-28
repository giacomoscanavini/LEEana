#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Jun  6 14:11:35 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-1.525572,1.25641,168.6962);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__4->SetBinContent(1,11.39727);
   hmc__4->SetBinContent(2,9.946861);
   hmc__4->SetBinContent(3,9.325464);
   hmc__4->SetBinContent(4,8.353755);
   hmc__4->SetBinContent(5,6.769803);
   hmc__4->SetBinContent(6,9.633078);
   hmc__4->SetBinContent(7,9.526247);
   hmc__4->SetBinContent(8,8.850452);
   hmc__4->SetBinContent(9,7.910121);
   hmc__4->SetBinContent(10,8.47078);
   hmc__4->SetBinContent(11,10.66427);
   hmc__4->SetBinContent(12,10.30775);
   hmc__4->SetBinContent(13,11.89776);
   hmc__4->SetBinContent(14,13.50666);
   hmc__4->SetBinContent(15,14.38563);
   hmc__4->SetBinContent(16,15.44794);
   hmc__4->SetBinContent(17,15.25685);
   hmc__4->SetBinContent(18,19.99682);
   hmc__4->SetBinContent(19,22.30686);
   hmc__4->SetBinContent(20,25.36999);
   hmc__4->SetBinContent(21,32.26186);
   hmc__4->SetBinContent(22,36.23418);
   hmc__4->SetBinContent(23,42.04709);
   hmc__4->SetBinContent(24,56.07624);
   hmc__4->SetBinContent(25,76.27862);
   hmc__4->SetBinError(1,3.361016);
   hmc__4->SetBinError(2,3.427338);
   hmc__4->SetBinError(3,3.426826);
   hmc__4->SetBinError(4,3.144349);
   hmc__4->SetBinError(5,2.536485);
   hmc__4->SetBinError(6,3.171351);
   hmc__4->SetBinError(7,3.15326);
   hmc__4->SetBinError(8,2.978158);
   hmc__4->SetBinError(9,3.3725);
   hmc__4->SetBinError(10,3.23124);
   hmc__4->SetBinError(11,4.279396);
   hmc__4->SetBinError(12,3.887981);
   hmc__4->SetBinError(13,3.674606);
   hmc__4->SetBinError(14,4.298025);
   hmc__4->SetBinError(15,4.583466);
   hmc__4->SetBinError(16,4.92396);
   hmc__4->SetBinError(17,4.381983);
   hmc__4->SetBinError(18,5.979145);
   hmc__4->SetBinError(19,6.347784);
   hmc__4->SetBinError(20,7.464909);
   hmc__4->SetBinError(21,11.63551);
   hmc__4->SetBinError(22,10.78272);
   hmc__4->SetBinError(23,10.78523);
   hmc__4->SetBinError(24,12.17446);
   hmc__4->SetBinError(25,18.3158);
   hmc__4->SetBinError(26,0.1094984);
   hmc__4->SetMinimum(-1.525572);
   hmc__4->SetMaximum(160.1851);
   hmc__4->SetEntries(485.9702);
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
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(80.09255);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.1971097);
   hbadmatch_stack_1->SetBinContent(2,0.2420363);
   hbadmatch_stack_1->SetBinContent(3,0.08745668);
   hbadmatch_stack_1->SetBinContent(4,0.08739009);
   hbadmatch_stack_1->SetBinContent(5,0.1858689);
   hbadmatch_stack_1->SetBinContent(6,0.1151024);
   hbadmatch_stack_1->SetBinContent(7,0.3862826);
   hbadmatch_stack_1->SetBinContent(8,0.1006979);
   hbadmatch_stack_1->SetBinContent(9,0.1524158);
   hbadmatch_stack_1->SetBinContent(10,0.2726749);
   hbadmatch_stack_1->SetBinContent(11,0.2742124);
   hbadmatch_stack_1->SetBinContent(12,0.1917666);
   hbadmatch_stack_1->SetBinContent(13,0.0941118);
   hbadmatch_stack_1->SetBinContent(14,0.3179356);
   hbadmatch_stack_1->SetBinContent(15,0.3130638);
   hbadmatch_stack_1->SetBinContent(16,0.7212153);
   hbadmatch_stack_1->SetBinContent(17,0.1791245);
   hbadmatch_stack_1->SetBinContent(18,0.2389563);
   hbadmatch_stack_1->SetBinContent(19,0.2546611);
   hbadmatch_stack_1->SetBinContent(20,0.7140584);
   hbadmatch_stack_1->SetBinContent(21,0.4824888);
   hbadmatch_stack_1->SetBinContent(22,0.8144708);
   hbadmatch_stack_1->SetBinContent(23,0.8181011);
   hbadmatch_stack_1->SetBinContent(24,0.9071656);
   hbadmatch_stack_1->SetBinContent(25,1.246263);
   hbadmatch_stack_1->SetBinError(1,0.09367879);
   hbadmatch_stack_1->SetBinError(2,0.1187905);
   hbadmatch_stack_1->SetBinError(3,0.06452687);
   hbadmatch_stack_1->SetBinError(4,0.07572108);
   hbadmatch_stack_1->SetBinError(5,0.1073114);
   hbadmatch_stack_1->SetBinError(6,0.06744007);
   hbadmatch_stack_1->SetBinError(7,0.1420152);
   hbadmatch_stack_1->SetBinError(8,0.077322);
   hbadmatch_stack_1->SetBinError(9,0.0899327);
   hbadmatch_stack_1->SetBinError(10,0.1318145);
   hbadmatch_stack_1->SetBinError(11,0.1253199);
   hbadmatch_stack_1->SetBinError(12,0.1019103);
   hbadmatch_stack_1->SetBinError(13,0.08025523);
   hbadmatch_stack_1->SetBinError(14,0.1151879);
   hbadmatch_stack_1->SetBinError(15,0.1262776);
   hbadmatch_stack_1->SetBinError(16,0.3852399);
   hbadmatch_stack_1->SetBinError(17,0.08251722);
   hbadmatch_stack_1->SetBinError(18,0.1105603);
   hbadmatch_stack_1->SetBinError(19,0.1116687);
   hbadmatch_stack_1->SetBinError(20,0.2007152);
   hbadmatch_stack_1->SetBinError(21,0.164478);
   hbadmatch_stack_1->SetBinError(22,0.2050064);
   hbadmatch_stack_1->SetBinError(23,0.2141917);
   hbadmatch_stack_1->SetBinError(24,0.2435306);
   hbadmatch_stack_1->SetBinError(25,0.3516161);
   hbadmatch_stack_1->SetEntries(250);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.6830363);
   hext_stack_2->SetBinContent(2,0.2726682);
   hext_stack_2->SetBinContent(3,0.3217476);
   hext_stack_2->SetBinContent(4,0.2358586);
   hext_stack_2->SetBinContent(5,0.4717173);
   hext_stack_2->SetBinContent(6,0.707576);
   hext_stack_2->SetBinContent(7,0.7443856);
   hext_stack_2->SetBinContent(8,0.7321157);
   hext_stack_2->SetBinContent(9,0.04907941);
   hext_stack_2->SetBinContent(10,0.7811952);
   hext_stack_2->SetBinContent(11,1.228373);
   hext_stack_2->SetBinContent(12,0.3094778);
   hext_stack_2->SetBinContent(13,1.341533);
   hext_stack_2->SetBinContent(14,0.5944158);
   hext_stack_2->SetBinContent(15,1.751901);
   hext_stack_2->SetBinContent(16,1.439692);
   hext_stack_2->SetBinContent(17,1.078403);
   hext_stack_2->SetBinContent(18,1.488771);
   hext_stack_2->SetBinContent(19,2.894385);
   hext_stack_2->SetBinContent(20,2.085918);
   hext_stack_2->SetBinContent(21,1.935949);
   hext_stack_2->SetBinContent(22,1.289722);
   hext_stack_2->SetBinContent(23,1.375611);
   hext_stack_2->SetBinContent(24,2.680334);
   hext_stack_2->SetBinContent(25,2.395396);
   hext_stack_2->SetBinError(1,0.3462882);
   hext_stack_2->SetBinError(2,0.2013053);
   hext_stack_2->SetBinError(3,0.2027956);
   hext_stack_2->SetBinError(4,0.2001804);
   hext_stack_2->SetBinError(5,0.2830978);
   hext_stack_2->SetBinError(6,0.3467226);
   hext_stack_2->SetBinError(7,0.3473733);
   hext_stack_2->SetBinError(8,0.3471566);
   hext_stack_2->SetBinError(9,0.0245397);
   hext_stack_2->SetBinError(10,0.3480228);
   hext_stack_2->SetBinError(11,0.4482892);
   hext_stack_2->SetBinError(12,0.202424);
   hext_stack_2->SetBinError(13,0.4894179);
   hext_stack_2->SetBinError(14,0.2857444);
   hext_stack_2->SetBinError(15,0.5647314);
   hext_stack_2->SetBinError(16,0.4906468);
   hext_stack_2->SetBinError(17,0.4024237);
   hext_stack_2->SetBinError(18,0.4912601);
   hext_stack_2->SetBinError(19,0.7202991);
   hext_stack_2->SetBinError(20,0.6001651);
   hext_stack_2->SetBinError(21,0.5667272);
   hext_stack_2->SetBinError(22,0.449128);
   hext_stack_2->SetBinError(23,0.4502996);
   hext_stack_2->SetBinError(24,0.6647165);
   hext_stack_2->SetBinError(25,0.6333827);
   hext_stack_2->SetEntries(543);

   ci = 1449;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.194504);
   hdirt_stack_3->SetBinContent(2,0.1929309);
   hdirt_stack_3->SetBinContent(3,0.1054466);
   hdirt_stack_3->SetBinContent(4,0.1326272);
   hdirt_stack_3->SetBinContent(5,0.01643923);
   hdirt_stack_3->SetBinContent(6,0.08841814);
   hdirt_stack_3->SetBinContent(7,0.04266797);
   hdirt_stack_3->SetBinContent(8,0.09663776);
   hdirt_stack_3->SetBinContent(9,0.01643923);
   hdirt_stack_3->SetBinContent(10,0.1151102);
   hdirt_stack_3->SetBinContent(11,0.06830636);
   hdirt_stack_3->SetBinContent(12,0.05782809);
   hdirt_stack_3->SetBinContent(13,0.01643923);
   hdirt_stack_3->SetBinContent(14,0.1222041);
   hdirt_stack_3->SetBinContent(15,0.4204306);
   hdirt_stack_3->SetBinContent(16,0.2145591);
   hdirt_stack_3->SetBinContent(17,0.06753192);
   hdirt_stack_3->SetBinContent(18,0.2011712);
   hdirt_stack_3->SetBinContent(19,0.2457042);
   hdirt_stack_3->SetBinContent(20,0.2290224);
   hdirt_stack_3->SetBinContent(21,0.3448021);
   hdirt_stack_3->SetBinContent(22,0.3385255);
   hdirt_stack_3->SetBinContent(23,0.2511274);
   hdirt_stack_3->SetBinContent(24,0.4317965);
   hdirt_stack_3->SetBinContent(25,0.2926242);
   hdirt_stack_3->SetBinError(1,0.08930059);
   hdirt_stack_3->SetBinError(2,0.09280919);
   hdirt_stack_3->SetBinError(3,0.06944603);
   hdirt_stack_3->SetBinError(4,0.07657235);
   hdirt_stack_3->SetBinError(5,0.01162429);
   hdirt_stack_3->SetBinError(6,0.06252107);
   hdirt_stack_3->SetBinError(7,0.01913329);
   hdirt_stack_3->SetBinError(8,0.06305907);
   hdirt_stack_3->SetBinError(9,0.01162429);
   hdirt_stack_3->SetBinError(10,0.07474051);
   hdirt_stack_3->SetBinError(11,0.05359669);
   hdirt_stack_3->SetBinError(12,0.05028482);
   hdirt_stack_3->SetBinError(13,0.01162429);
   hdirt_stack_3->SetBinError(14,0.06476784);
   hdirt_stack_3->SetBinError(15,0.3048461);
   hdirt_stack_3->SetBinError(16,0.09612751);
   hdirt_stack_3->SetBinError(17,0.05239834);
   hdirt_stack_3->SetBinError(18,0.09274468);
   hdirt_stack_3->SetBinError(19,0.0998744);
   hdirt_stack_3->SetBinError(20,0.09428325);
   hdirt_stack_3->SetBinError(21,0.1149598);
   hdirt_stack_3->SetBinError(22,0.1194933);
   hdirt_stack_3->SetBinError(23,0.09956332);
   hdirt_stack_3->SetBinError(24,0.2234536);
   hdirt_stack_3->SetBinError(25,0.1078581);
   hdirt_stack_3->SetEntries(153);

   ci = 1450;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,0.8964888);
   houtFV_stack_4->SetBinContent(2,0.4941659);
   houtFV_stack_4->SetBinContent(3,0.4135777);
   houtFV_stack_4->SetBinContent(4,0.6625414);
   houtFV_stack_4->SetBinContent(5,0.4737394);
   houtFV_stack_4->SetBinContent(6,0.796271);
   houtFV_stack_4->SetBinContent(7,0.7707705);
   houtFV_stack_4->SetBinContent(8,0.5466511);
   houtFV_stack_4->SetBinContent(9,0.6699045);
   houtFV_stack_4->SetBinContent(10,0.6213576);
   houtFV_stack_4->SetBinContent(11,0.6833139);
   houtFV_stack_4->SetBinContent(12,0.7310597);
   houtFV_stack_4->SetBinContent(13,0.7343147);
   houtFV_stack_4->SetBinContent(14,1.210385);
   houtFV_stack_4->SetBinContent(15,1.196135);
   houtFV_stack_4->SetBinContent(16,0.9503359);
   houtFV_stack_4->SetBinContent(17,1.012454);
   houtFV_stack_4->SetBinContent(18,1.707621);
   houtFV_stack_4->SetBinContent(19,1.679999);
   houtFV_stack_4->SetBinContent(20,1.971585);
   houtFV_stack_4->SetBinContent(21,3.399905);
   houtFV_stack_4->SetBinContent(22,2.568676);
   houtFV_stack_4->SetBinContent(23,3.43286);
   houtFV_stack_4->SetBinContent(24,3.862197);
   houtFV_stack_4->SetBinContent(25,3.737054);
   houtFV_stack_4->SetBinError(1,0.2191205);
   houtFV_stack_4->SetBinError(2,0.1740622);
   houtFV_stack_4->SetBinError(3,0.1321654);
   houtFV_stack_4->SetBinError(4,0.1895552);
   houtFV_stack_4->SetBinError(5,0.1559873);
   houtFV_stack_4->SetBinError(6,0.2090156);
   houtFV_stack_4->SetBinError(7,0.2082363);
   houtFV_stack_4->SetBinError(8,0.1770845);
   houtFV_stack_4->SetBinError(9,0.1919355);
   houtFV_stack_4->SetBinError(10,0.1880427);
   houtFV_stack_4->SetBinError(11,0.1979865);
   houtFV_stack_4->SetBinError(12,0.1994781);
   houtFV_stack_4->SetBinError(13,0.199622);
   houtFV_stack_4->SetBinError(14,0.2659807);
   houtFV_stack_4->SetBinError(15,0.2711896);
   houtFV_stack_4->SetBinError(16,0.2251201);
   houtFV_stack_4->SetBinError(17,0.2293224);
   houtFV_stack_4->SetBinError(18,0.310789);
   houtFV_stack_4->SetBinError(19,0.3025537);
   houtFV_stack_4->SetBinError(20,0.3156074);
   houtFV_stack_4->SetBinError(21,0.4451972);
   houtFV_stack_4->SetBinError(22,0.3675916);
   houtFV_stack_4->SetBinError(23,0.4336757);
   houtFV_stack_4->SetBinError(24,0.4643983);
   houtFV_stack_4->SetBinError(25,0.453995);
   houtFV_stack_4->SetEntries(900);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.149413);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1239126);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2113693);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.07650118);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5866964);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.471006);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.129247);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.08945557);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.08761943);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1088158);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03123147);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1697671);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2824254);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.525123);
   hNCpi0inFVcoh_stack_5->SetEntries(221);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02550039);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1366628);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2478252);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1858689);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4591944);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2113693);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1986191);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.3370765);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5594013);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0180315);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08854226);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1073114);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1649097);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1088158);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1080662);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1284224);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1775429);
   hNCpi0inFVqe_stack_6->SetEntries(69);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.606302);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.852332);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.970399);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.5043);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.223335);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.194519);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.27102);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.072401);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.955854);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.383669);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.670053);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.900018);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.715944);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.337301);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.109406);
   hNCpi0inFVres_stack_7->SetBinContent(16,7.465264);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.009659);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.048087);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.802889);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.97647);
   hNCpi0inFVres_stack_7->SetBinContent(21,14.812);
   hNCpi0inFVres_stack_7->SetBinContent(22,17.85168);
   hNCpi0inFVres_stack_7->SetBinContent(23,20.74668);
   hNCpi0inFVres_stack_7->SetBinContent(24,24.76237);
   hNCpi0inFVres_stack_7->SetBinContent(25,31.23288);
   hNCpi0inFVres_stack_7->SetBinError(1,0.497741);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5158742);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4639496);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4964329);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4186141);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4767103);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4777322);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4653491);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4670251);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4138194);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4985569);
   hNCpi0inFVres_stack_7->SetBinError(12,0.564904);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5518832);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5830396);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5591426);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6396813);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6131439);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6966197);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7199039);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7728171);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8953379);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9934533);
   hNCpi0inFVres_stack_7->SetBinError(23,1.061737);
   hNCpi0inFVres_stack_7->SetBinError(24,1.156318);
   hNCpi0inFVres_stack_7->SetBinError(25,1.297978);
   hNCpi0inFVres_stack_7->SetEntries(5867);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.8600219);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.9803451);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.031346);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.796271);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.4135777);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.4864895);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.9438893);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5101952);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6086074);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6359025);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6978588);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.9584341);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7580204);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.146098);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.182554);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9474787);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.444924);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.148354);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.190194);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.955119);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.702184);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.622367);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.05965);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.807451);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.788344);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2109511);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2413069);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2426505);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2090156);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1321654);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1565075);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2339136);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1668696);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.18761);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.180269);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1906187);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2277112);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2078456);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2456469);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2526971);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2205993);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2763096);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3534798);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3455202);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3227886);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.379742);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4422314);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4651744);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6085381);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7218898);
   hNCpi0inFVdis_stack_8->SetEntries(1250);

   ci = 1455;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1456;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,2.157276);
   hCCpi0inFV_stack_11->SetBinContent(2,1.546577);
   hCCpi0inFV_stack_11->SetBinContent(3,1.940574);
   hCCpi0inFV_stack_11->SetBinContent(4,0.791111);
   hCCpi0inFV_stack_11->SetBinContent(5,1.21901);
   hCCpi0inFV_stack_11->SetBinContent(6,1.514246);
   hCCpi0inFV_stack_11->SetBinContent(7,1.443129);
   hCCpi0inFV_stack_11->SetBinContent(8,1.392128);
   hCCpi0inFV_stack_11->SetBinContent(9,1.23176);
   hCCpi0inFV_stack_11->SetBinContent(10,1.334694);
   hCCpi0inFV_stack_11->SetBinContent(11,1.403084);
   hCCpi0inFV_stack_11->SetBinContent(12,1.095097);
   hCCpi0inFV_stack_11->SetBinContent(13,2.088282);
   hCCpi0inFV_stack_11->SetBinContent(14,2.105066);
   hCCpi0inFV_stack_11->SetBinContent(15,1.382967);
   hCCpi0inFV_stack_11->SetBinContent(16,1.721839);
   hCCpi0inFV_stack_11->SetBinContent(17,1.996357);
   hCCpi0inFV_stack_11->SetBinContent(18,2.625683);
   hCCpi0inFV_stack_11->SetBinContent(19,2.777647);
   hCCpi0inFV_stack_11->SetBinContent(20,3.240191);
   hCCpi0inFV_stack_11->SetBinContent(21,4.258682);
   hCCpi0inFV_stack_11->SetBinContent(22,5.697809);
   hCCpi0inFV_stack_11->SetBinContent(23,6.619415);
   hCCpi0inFV_stack_11->SetBinContent(24,9.56179);
   hCCpi0inFV_stack_11->SetBinContent(25,13.29745);
   hCCpi0inFV_stack_11->SetBinError(1,0.3523685);
   hCCpi0inFV_stack_11->SetBinError(2,0.2928716);
   hCCpi0inFV_stack_11->SetBinError(3,0.3271936);
   hCCpi0inFV_stack_11->SetBinError(4,0.1938852);
   hCCpi0inFV_stack_11->SetBinError(5,0.2595559);
   hCCpi0inFV_stack_11->SetBinError(6,0.2990407);
   hCCpi0inFV_stack_11->SetBinError(7,0.2817316);
   hCCpi0inFV_stack_11->SetBinError(8,0.2805752);
   hCCpi0inFV_stack_11->SetBinError(9,0.2598689);
   hCCpi0inFV_stack_11->SetBinError(10,0.2682072);
   hCCpi0inFV_stack_11->SetBinError(11,0.2862006);
   hCCpi0inFV_stack_11->SetBinError(12,0.2443197);
   hCCpi0inFV_stack_11->SetBinError(13,0.3459436);
   hCCpi0inFV_stack_11->SetBinError(14,0.3395369);
   hCCpi0inFV_stack_11->SetBinError(15,0.2692738);
   hCCpi0inFV_stack_11->SetBinError(16,0.2932149);
   hCCpi0inFV_stack_11->SetBinError(17,0.3215805);
   hCCpi0inFV_stack_11->SetBinError(18,0.3784555);
   hCCpi0inFV_stack_11->SetBinError(19,0.3889761);
   hCCpi0inFV_stack_11->SetBinError(20,0.4152576);
   hCCpi0inFV_stack_11->SetBinError(21,0.4680347);
   hCCpi0inFV_stack_11->SetBinError(22,0.5599015);
   hCCpi0inFV_stack_11->SetBinError(23,0.6024486);
   hCCpi0inFV_stack_11->SetBinError(24,0.7198172);
   hCCpi0inFV_stack_11->SetBinError(25,0.8523284);
   hCCpi0inFV_stack_11->SetEntries(1923);

   ci = 1458;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.8345215);
   hNCinFV_stack_12->SetBinContent(2,0.5356956);
   hNCinFV_stack_12->SetBinContent(3,0.6723584);
   hNCinFV_stack_12->SetBinContent(4,0.5594013);
   hNCinFV_stack_12->SetBinContent(5,0.3498267);
   hNCinFV_stack_12->SetBinContent(6,0.411783);
   hNCinFV_stack_12->SetBinContent(7,0.2368697);
   hNCinFV_stack_12->SetBinContent(8,0.3243263);
   hNCinFV_stack_12->SetBinContent(9,0.5849017);
   hNCinFV_stack_12->SetBinContent(10,0.1858689);
   hNCinFV_stack_12->SetBinContent(11,0.7707705);
   hNCinFV_stack_12->SetBinContent(12,0.2514145);
   hNCinFV_stack_12->SetBinContent(13,0.26237);
   hNCinFV_stack_12->SetBinContent(14,0.5229454);
   hNCinFV_stack_12->SetBinContent(15,0.497445);
   hNCinFV_stack_12->SetBinContent(16,0.411783);
   hNCinFV_stack_12->SetBinContent(17,0.5229454);
   hNCinFV_stack_12->SetBinContent(18,0.6596082);
   hNCinFV_stack_12->SetBinContent(19,0.9219782);
   hNCinFV_stack_12->SetBinContent(20,1.25726);
   hNCinFV_stack_12->SetBinContent(21,1.304672);
   hNCinFV_stack_12->SetBinContent(22,1.581586);
   hNCinFV_stack_12->SetBinContent(23,2.140988);
   hNCinFV_stack_12->SetBinContent(24,3.261585);
   hNCinFV_stack_12->SetBinContent(25,4.172608);
   hNCinFV_stack_12->SetBinError(1,0.210179);
   hNCinFV_stack_12->SetBinError(2,0.167841);
   hNCinFV_stack_12->SetBinError(3,0.1897639);
   hNCinFV_stack_12->SetBinError(4,0.1775429);
   hNCinFV_stack_12->SetBinError(5,0.1290537);
   hNCinFV_stack_12->SetBinError(6,0.1431553);
   hNCinFV_stack_12->SetBinError(7,0.1102997);
   hNCinFV_stack_12->SetBinError(8,0.1277878);
   hNCinFV_stack_12->SetBinError(9,0.1784562);
   hNCinFV_stack_12->SetBinError(10,0.1073114);
   hNCinFV_stack_12->SetBinError(11,0.2082363);
   hNCinFV_stack_12->SetBinError(12,0.09645123);
   hNCinFV_stack_12->SetBinError(13,0.1117638);
   hNCinFV_stack_12->SetBinError(14,0.167356);
   hNCinFV_stack_12->SetBinError(15,0.1663818);
   hNCinFV_stack_12->SetBinError(16,0.1431553);
   hNCinFV_stack_12->SetBinError(17,0.167356);
   hNCinFV_stack_12->SetBinError(18,0.1893351);
   hNCinFV_stack_12->SetBinError(19,0.2198612);
   hNCinFV_stack_12->SetBinError(20,0.2604937);
   hNCinFV_stack_12->SetBinError(21,0.2730545);
   hNCinFV_stack_12->SetBinError(22,0.2901495);
   hNCinFV_stack_12->SetBinError(23,0.3401591);
   hNCinFV_stack_12->SetBinError(24,0.4191962);
   hNCinFV_stack_12->SetBinError(25,0.4699745);
   hNCinFV_stack_12->SetEntries(626);

   ci = 1459;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.7735754);
   hnumuCCinFV_stack_13->SetBinContent(2,0.6934471);
   hnumuCCinFV_stack_13->SetBinContent(3,0.5755262);
   hnumuCCinFV_stack_13->SetBinContent(4,0.5095477);
   hnumuCCinFV_stack_13->SetBinContent(5,0.4035397);
   hnumuCCinFV_stack_13->SetBinContent(6,1.181995);
   hnumuCCinFV_stack_13->SetBinContent(7,0.5963453);
   hnumuCCinFV_stack_13->SetBinContent(8,1.075299);
   hnumuCCinFV_stack_13->SetBinContent(9,0.5172455);
   hnumuCCinFV_stack_13->SetBinContent(10,1.127557);
   hnumuCCinFV_stack_13->SetBinContent(11,0.718883);
   hnumuCCinFV_stack_13->SetBinContent(12,0.7379488);
   hnumuCCinFV_stack_13->SetBinContent(13,0.8247905);
   hnumuCCinFV_stack_13->SetBinContent(14,1.062851);
   hnumuCCinFV_stack_13->SetBinContent(15,1.283902);
   hnumuCCinFV_stack_13->SetBinContent(16,1.439109);
   hnumuCCinFV_stack_13->SetBinContent(17,1.63567);
   hnumuCCinFV_stack_13->SetBinContent(18,1.508589);
   hnumuCCinFV_stack_13->SetBinContent(19,1.328029);
   hnumuCCinFV_stack_13->SetBinContent(20,2.475174);
   hnumuCCinFV_stack_13->SetBinContent(21,2.071995);
   hnumuCCinFV_stack_13->SetBinContent(22,2.153875);
   hnumuCCinFV_stack_13->SetBinContent(23,1.462702);
   hnumuCCinFV_stack_13->SetBinContent(24,1.918761);
   hnumuCCinFV_stack_13->SetBinContent(25,3.072206);
   hnumuCCinFV_stack_13->SetBinError(1,0.2112043);
   hnumuCCinFV_stack_13->SetBinError(2,0.1928815);
   hnumuCCinFV_stack_13->SetBinError(3,0.1823624);
   hnumuCCinFV_stack_13->SetBinError(4,0.174208);
   hnumuCCinFV_stack_13->SetBinError(5,0.14709);
   hnumuCCinFV_stack_13->SetBinError(6,0.4580385);
   hnumuCCinFV_stack_13->SetBinError(7,0.1986959);
   hnumuCCinFV_stack_13->SetBinError(8,0.2911857);
   hnumuCCinFV_stack_13->SetBinError(9,0.1819724);
   hnumuCCinFV_stack_13->SetBinError(10,0.2667026);
   hnumuCCinFV_stack_13->SetBinError(11,0.2771128);
   hnumuCCinFV_stack_13->SetBinError(12,0.199508);
   hnumuCCinFV_stack_13->SetBinError(13,0.2306042);
   hnumuCCinFV_stack_13->SetBinError(14,0.2504131);
   hnumuCCinFV_stack_13->SetBinError(15,0.4710875);
   hnumuCCinFV_stack_13->SetBinError(16,0.3687986);
   hnumuCCinFV_stack_13->SetBinError(17,0.3673565);
   hnumuCCinFV_stack_13->SetBinError(18,0.3679741);
   hnumuCCinFV_stack_13->SetBinError(19,0.2845347);
   hnumuCCinFV_stack_13->SetBinError(20,0.7685335);
   hnumuCCinFV_stack_13->SetBinError(21,0.3885122);
   hnumuCCinFV_stack_13->SetBinError(22,0.3929818);
   hnumuCCinFV_stack_13->SetBinError(23,0.27367);
   hnumuCCinFV_stack_13->SetBinError(24,0.3419417);
   hnumuCCinFV_stack_13->SetBinError(25,0.4107335);
   hnumuCCinFV_stack_13->SetEntries(730);

   ci = 1460;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_14->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_14->SetBinContent(5,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(6,0.01276398);
   hnueCCinFV_stack_14->SetBinContent(7,0.02893035);
   hnueCCinFV_stack_14->SetBinContent(11,0.1239126);
   hnueCCinFV_stack_14->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.1713666);
   hnueCCinFV_stack_14->SetBinContent(19,0.1239126);
   hnueCCinFV_stack_14->SetBinContent(20,0.155415);
   hnueCCinFV_stack_14->SetBinContent(21,0.2166657);
   hnueCCinFV_stack_14->SetBinContent(22,0.02760471);
   hnueCCinFV_stack_14->SetBinContent(23,0.2926876);
   hnueCCinFV_stack_14->SetBinContent(24,0.07470687);
   hnueCCinFV_stack_14->SetBinContent(25,1.355151);
   hnueCCinFV_stack_14->SetBinError(1,0.02331381);
   hnueCCinFV_stack_14->SetBinError(2,0.06195629);
   hnueCCinFV_stack_14->SetBinError(3,0.06910958);
   hnueCCinFV_stack_14->SetBinError(5,0.0127502);
   hnueCCinFV_stack_14->SetBinError(6,0.0127502);
   hnueCCinFV_stack_14->SetBinError(7,0.02060012);
   hnueCCinFV_stack_14->SetBinError(11,0.08761943);
   hnueCCinFV_stack_14->SetBinError(12,0.06195629);
   hnueCCinFV_stack_14->SetBinError(13,0.06195629);
   hnueCCinFV_stack_14->SetBinError(15,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.09846084);
   hnueCCinFV_stack_14->SetBinError(19,0.08761943);
   hnueCCinFV_stack_14->SetBinError(20,0.09040903);
   hnueCCinFV_stack_14->SetBinError(21,0.1095627);
   hnueCCinFV_stack_14->SetBinError(22,0.01957611);
   hnueCCinFV_stack_14->SetBinError(23,0.1397236);
   hnueCCinFV_stack_14->SetBinError(24,0.06325464);
   hnueCCinFV_stack_14->SetBinError(25,0.5161839);
   hnueCCinFV_stack_14->SetEntries(70);

   ci = 1461;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__5->SetBinContent(1,11.39727);
   hmcerror__5->SetBinContent(2,9.946861);
   hmcerror__5->SetBinContent(3,9.325464);
   hmcerror__5->SetBinContent(4,8.353755);
   hmcerror__5->SetBinContent(5,6.769803);
   hmcerror__5->SetBinContent(6,9.633078);
   hmcerror__5->SetBinContent(7,9.526247);
   hmcerror__5->SetBinContent(8,8.850452);
   hmcerror__5->SetBinContent(9,7.910121);
   hmcerror__5->SetBinContent(10,8.47078);
   hmcerror__5->SetBinContent(11,10.66427);
   hmcerror__5->SetBinContent(12,10.30775);
   hmcerror__5->SetBinContent(13,11.89776);
   hmcerror__5->SetBinContent(14,13.50666);
   hmcerror__5->SetBinContent(15,14.38563);
   hmcerror__5->SetBinContent(16,15.44794);
   hmcerror__5->SetBinContent(17,15.25685);
   hmcerror__5->SetBinContent(18,19.99682);
   hmcerror__5->SetBinContent(19,22.30686);
   hmcerror__5->SetBinContent(20,25.36999);
   hmcerror__5->SetBinContent(21,32.26186);
   hmcerror__5->SetBinContent(22,36.23418);
   hmcerror__5->SetBinContent(23,42.04709);
   hmcerror__5->SetBinContent(24,56.07624);
   hmcerror__5->SetBinContent(25,76.27862);
   hmcerror__5->SetBinError(1,3.361016);
   hmcerror__5->SetBinError(2,3.427338);
   hmcerror__5->SetBinError(3,3.426826);
   hmcerror__5->SetBinError(4,3.144349);
   hmcerror__5->SetBinError(5,2.536485);
   hmcerror__5->SetBinError(6,3.171351);
   hmcerror__5->SetBinError(7,3.15326);
   hmcerror__5->SetBinError(8,2.978158);
   hmcerror__5->SetBinError(9,3.3725);
   hmcerror__5->SetBinError(10,3.23124);
   hmcerror__5->SetBinError(11,4.279396);
   hmcerror__5->SetBinError(12,3.887981);
   hmcerror__5->SetBinError(13,3.674606);
   hmcerror__5->SetBinError(14,4.298025);
   hmcerror__5->SetBinError(15,4.583466);
   hmcerror__5->SetBinError(16,4.92396);
   hmcerror__5->SetBinError(17,4.381983);
   hmcerror__5->SetBinError(18,5.979145);
   hmcerror__5->SetBinError(19,6.347784);
   hmcerror__5->SetBinError(20,7.464909);
   hmcerror__5->SetBinError(21,11.63551);
   hmcerror__5->SetBinError(22,10.78272);
   hmcerror__5->SetBinError(23,10.78523);
   hmcerror__5->SetBinError(24,12.17446);
   hmcerror__5->SetBinError(25,18.3158);
   hmcerror__5->SetBinError(26,0.1094984);
   hmcerror__5->SetEntries(485.9702);

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
   6,
   8,
   10,
   9,
   6,
   6,
   9,
   7,
   13,
   5,
   5,
   9,
   14,
   10,
   9,
   11,
   14,
   14,
   10,
   20,
   25,
   37,
   28,
   44,
   66};
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
   2.67925,
   3.0307,
   3.34883,
   3.19354,
   2.67925,
   2.67925,
   3.19354,
   2.85954,
   3.77763,
   2.48995,
   2.48995,
   3.19354,
   3.9102,
   3.34883,
   3.19354,
   3.4975,
   3.9102,
   3.9102,
   3.34883,
   4.6266,
   5.1474,
   6.2203,
   5.4358,
   6.7671,
   8.2509};
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
   2.41858,
   2.7896,
   3.1179,
   2.9582,
   2.41858,
   2.41858,
   2.9582,
   2.61053,
   3.5552,
   2.21064,
   2.21064,
   2.9582,
   3.6898,
   3.1179,
   2.9582,
   3.27,
   3.6898,
   3.6898,
   3.1179,
   4.4133,
   4.9374,
   6.0141,
   5.2271,
   6.5623,
   8.0483};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(2.259045);
   Graph_Graph3005->SetMaximum(81.20212);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.80#pm0.17","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 5.33e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 395.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.4","F");

   ci = 1448;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.9","F");

   ci = 1449;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.3","F");

   ci = 1450;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 35.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  8.2","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  3.0","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  223.5","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  47.7","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 74.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 23.2","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 31.1","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 2.9","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_8_pi0_costheta_all");
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
   0.2948967,
   0.3445648,
   0.3674698,
   0.3763994,
   0.3746763,
   0.3292147,
   0.3310076,
   0.3364978,
   0.4263525,
   0.3814572,
   0.4012836,
   0.3771901,
   0.3088486,
   0.3182152,
   0.3186143,
   0.3187455,
   0.2872141,
   0.2990047,
   0.2845665,
   0.2942417,
   0.3606582,
   0.2975842,
   0.2565036,
   0.2171056,
   0.2401171};
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
   0.2948967,
   0.3445648,
   0.3674698,
   0.3763994,
   0.3746763,
   0.3292147,
   0.3310076,
   0.3364978,
   0.4263525,
   0.3814572,
   0.4012836,
   0.3771901,
   0.3088486,
   0.3182152,
   0.3186143,
   0.3187455,
   0.2872141,
   0.2990047,
   0.2845665,
   0.2942417,
   0.3606582,
   0.2975842,
   0.2565036,
   0.2171056,
   0.2401171};
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
   0.222006,
   0.2220564,
   0.206578,
   0.2341033,
   0.2400107,
   0.2140355,
   0.2183246,
   0.2076736,
   0.2448949,
   0.2132981,
   0.2235656,
   0.2651734,
   0.2180096,
   0.2128786,
   0.2334916,
   0.2285233,
   0.2261283,
   0.246254,
   0.2407599,
   0.2390366,
   0.2282226,
   0.2470034,
   0.2216622,
   0.1930479,
   0.1990505};
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
   0.222006,
   0.2220564,
   0.206578,
   0.2341033,
   0.2400107,
   0.2140355,
   0.2183246,
   0.2076736,
   0.2448949,
   0.2132981,
   0.2235656,
   0.2651734,
   0.2180096,
   0.2128786,
   0.2334916,
   0.2285233,
   0.2261283,
   0.246254,
   0.2407599,
   0.2390366,
   0.2282226,
   0.2470034,
   0.2216622,
   0.1930479,
   0.1990505};
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
   0.5264419,
   0.8042738,
   1.072333,
   1.07736,
   0.8862887,
   0.6228539,
   0.9447582,
   0.79092,
   1.643464,
   0.5902644,
   0.4688555,
   0.8731294,
   1.176692,
   0.7403756,
   0.6256244,
   0.7120691,
   0.9176205,
   0.7001112,
   0.4482927,
   0.7883329,
   0.7749087,
   1.021135,
   0.66592,
   0.784646,
   0.865249};
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
   0.2350783,
   0.3046891,
   0.359106,
   0.382288,
   0.3957648,
   0.2781302,
   0.3352359,
   0.3230953,
   0.4775692,
   0.2939458,
   0.2334853,
   0.3098193,
   0.3286501,
   0.2479392,
   0.2219952,
   0.2264056,
   0.2562914,
   0.195541,
   0.1501256,
   0.182365,
   0.1595506,
   0.1716694,
   0.1292789,
   0.1206768,
   0.1081679};
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
   0.212207,
   0.2804503,
   0.3343426,
   0.3541162,
   0.35726,
   0.2510703,
   0.3105315,
   0.2949601,
   0.4494495,
   0.2609724,
   0.2072941,
   0.2869879,
   0.3101256,
   0.2308417,
   0.2056358,
   0.2116787,
   0.2418454,
   0.1845193,
   0.1397732,
   0.1739575,
   0.1530414,
   0.1659786,
   0.1243154,
   0.1170246,
   0.1055119};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.04961578);
   Graph_Graph3008->SetMaximum(2.278668);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_8_pi0_costheta_all",25,-1,1);

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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 14:37:58 2022) by ROOT version 6.26/00
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
   pad1->Range(-27.69231,-0.4594266,203.0769,38.71273);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmc__4->SetBinContent(1,3.846014);
   hmc__4->SetBinContent(2,11.40353);
   hmc__4->SetBinContent(3,17.69713);
   hmc__4->SetBinContent(4,20.42028);
   hmc__4->SetBinContent(5,22.05356);
   hmc__4->SetBinContent(6,20.34502);
   hmc__4->SetBinContent(7,22.97133);
   hmc__4->SetBinContent(8,20.28322);
   hmc__4->SetBinContent(9,20.59085);
   hmc__4->SetBinContent(10,18.50327);
   hmc__4->SetBinContent(11,16.34458);
   hmc__4->SetBinContent(12,16.95005);
   hmc__4->SetBinContent(13,13.35244);
   hmc__4->SetBinContent(14,10.67767);
   hmc__4->SetBinContent(15,10.67879);
   hmc__4->SetBinContent(16,11.29292);
   hmc__4->SetBinContent(17,9.64465);
   hmc__4->SetBinContent(18,7.282766);
   hmc__4->SetBinContent(19,8.201304);
   hmc__4->SetBinContent(20,7.713278);
   hmc__4->SetBinContent(21,5.284766);
   hmc__4->SetBinContent(22,5.116829);
   hmc__4->SetBinContent(23,3.808952);
   hmc__4->SetBinContent(24,1.061907);
   hmc__4->SetBinError(1,1.92964);
   hmc__4->SetBinError(2,3.802787);
   hmc__4->SetBinError(3,5.19139);
   hmc__4->SetBinError(4,6.154821);
   hmc__4->SetBinError(5,5.739059);
   hmc__4->SetBinError(6,7.083264);
   hmc__4->SetBinError(7,7.963852);
   hmc__4->SetBinError(8,7.134869);
   hmc__4->SetBinError(9,5.766442);
   hmc__4->SetBinError(10,5.652152);
   hmc__4->SetBinError(11,4.547946);
   hmc__4->SetBinError(12,4.885902);
   hmc__4->SetBinError(13,4.919889);
   hmc__4->SetBinError(14,3.560014);
   hmc__4->SetBinError(15,3.292071);
   hmc__4->SetBinError(16,3.643961);
   hmc__4->SetBinError(17,3.288765);
   hmc__4->SetBinError(18,2.794589);
   hmc__4->SetBinError(19,3.197181);
   hmc__4->SetBinError(20,3.017274);
   hmc__4->SetBinError(21,2.48795);
   hmc__4->SetBinError(22,3.486756);
   hmc__4->SetBinError(23,1.927263);
   hmc__4->SetBinError(24,0.976892);
   hmc__4->SetBinError(25,0.125509);
   hmc__4->SetMinimum(-0.4594266);
   hmc__4->SetMaximum(36.75413);
   hmc__4->SetEntries(300.4418);
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
   hs2_stack_2->SetMinimum(-1.636286e-09);
   hs2_stack_2->SetMaximum(24.1199);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(2,0.1366628);
   hbadmatch_stack_1->SetBinContent(3,0.3840164);
   hbadmatch_stack_1->SetBinContent(4,0.2271355);
   hbadmatch_stack_1->SetBinContent(5,0.3066667);
   hbadmatch_stack_1->SetBinContent(6,0.3337529);
   hbadmatch_stack_1->SetBinContent(7,0.326957);
   hbadmatch_stack_1->SetBinContent(8,0.314961);
   hbadmatch_stack_1->SetBinContent(9,0.1451702);
   hbadmatch_stack_1->SetBinContent(10,0.398339);
   hbadmatch_stack_1->SetBinContent(11,0.3564649);
   hbadmatch_stack_1->SetBinContent(12,0.9202471);
   hbadmatch_stack_1->SetBinContent(13,0.2892922);
   hbadmatch_stack_1->SetBinContent(14,0.2098983);
   hbadmatch_stack_1->SetBinContent(15,0.3799216);
   hbadmatch_stack_1->SetBinContent(16,0.2368697);
   hbadmatch_stack_1->SetBinContent(17,0.1782474);
   hbadmatch_stack_1->SetBinContent(18,0.08745668);
   hbadmatch_stack_1->SetBinContent(19,0.1713372);
   hbadmatch_stack_1->SetBinContent(20,0.2113693);
   hbadmatch_stack_1->SetBinContent(21,0.1538063);
   hbadmatch_stack_1->SetBinContent(22,0.03825059);
   hbadmatch_stack_1->SetBinContent(23,0.07470649);
   hbadmatch_stack_1->SetBinError(2,0.08854226);
   hbadmatch_stack_1->SetBinError(3,0.1509992);
   hbadmatch_stack_1->SetBinError(4,0.1099521);
   hbadmatch_stack_1->SetBinError(5,0.1275383);
   hbadmatch_stack_1->SetBinError(6,0.1320251);
   hbadmatch_stack_1->SetBinError(7,0.1195551);
   hbadmatch_stack_1->SetBinError(8,0.1275124);
   hbadmatch_stack_1->SetBinError(9,0.0707132);
   hbadmatch_stack_1->SetBinError(10,0.1466875);
   hbadmatch_stack_1->SetBinError(11,0.1432374);
   hbadmatch_stack_1->SetBinError(12,0.4022459);
   hbadmatch_stack_1->SetBinError(13,0.1330847);
   hbadmatch_stack_1->SetBinError(14,0.09447168);
   hbadmatch_stack_1->SetBinError(15,0.1485406);
   hbadmatch_stack_1->SetBinError(16,0.1102997);
   hbadmatch_stack_1->SetBinError(17,0.0999784);
   hbadmatch_stack_1->SetBinError(18,0.06452687);
   hbadmatch_stack_1->SetBinError(19,0.09688037);
   hbadmatch_stack_1->SetBinError(20,0.1088158);
   hbadmatch_stack_1->SetBinError(21,0.09018665);
   hbadmatch_stack_1->SetBinError(22,0.02208399);
   hbadmatch_stack_1->SetBinError(23,0.06325464);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.02453971);
   hext_stack_2->SetBinContent(2,0.2358586);
   hext_stack_2->SetBinContent(3,0.2726682);
   hext_stack_2->SetBinContent(4,0.9066251);
   hext_stack_2->SetBinContent(5,2.174539);
   hext_stack_2->SetBinContent(6,0.6830363);
   hext_stack_2->SetBinContent(7,2.125459);
   hext_stack_2->SetBinContent(8,0.8180047);
   hext_stack_2->SetBinContent(9,1.565122);
   hext_stack_2->SetBinContent(10,1.102943);
   hext_stack_2->SetBinContent(11,1.329263);
   hext_stack_2->SetBinContent(12,1.67555);
   hext_stack_2->SetBinContent(13,1.081134);
   hext_stack_2->SetBinContent(14,0.7566555);
   hext_stack_2->SetBinContent(15,0.4199064);
   hext_stack_2->SetBinContent(16,1.353803);
   hext_stack_2->SetBinContent(17,1.068865);
   hext_stack_2->SetBinContent(18,0.4349078);
   hext_stack_2->SetBinContent(19,0.08588897);
   hext_stack_2->SetBinContent(20,0.3217476);
   hext_stack_2->SetBinContent(21,0.2481285);
   hext_stack_2->SetBinContent(22,0.2235888);
   hext_stack_2->SetBinContent(23,0.03680956);
   hext_stack_2->SetBinContent(24,0.01226985);
   hext_stack_2->SetBinError(1,0.01735219);
   hext_stack_2->SetBinError(2,0.2001804);
   hext_stack_2->SetBinError(3,0.2013053);
   hext_stack_2->SetBinError(4,0.3997964);
   hext_stack_2->SetBinError(5,0.6312398);
   hext_stack_2->SetBinError(6,0.3462882);
   hext_stack_2->SetBinError(7,0.6307626);
   hext_stack_2->SetBinError(8,0.3486711);
   hext_stack_2->SetBinError(9,0.5286317);
   hext_stack_2->SetBinError(10,0.4027976);
   hext_stack_2->SetBinError(11,0.4892641);
   hext_stack_2->SetBinError(12,0.5299117);
   hext_stack_2->SetBinError(13,0.4462696);
   hext_stack_2->SetBinError(14,0.34759);
   hext_stack_2->SetBinError(15,0.2057436);
   hext_stack_2->SetBinError(16,0.4895717);
   hext_stack_2->SetBinError(17,0.4461009);
   hext_stack_2->SetBinError(18,0.282299);
   hext_stack_2->SetBinError(19,0.03246298);
   hext_stack_2->SetBinError(20,0.2027956);
   hext_stack_2->SetBinError(21,0.2005561);
   hext_stack_2->SetBinError(22,0.199804);
   hext_stack_2->SetBinError(23,0.02125201);
   hext_stack_2->SetBinError(24,0.01226985);
   hext_stack_2->SetEntries(312);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.05831697);
   hdirt_stack_3->SetBinContent(2,0.04420907);
   hdirt_stack_3->SetBinContent(3,0.1590677);
   hdirt_stack_3->SetBinContent(4,0.01643923);
   hdirt_stack_3->SetBinContent(5,0.08579037);
   hdirt_stack_3->SetBinContent(6,0.08851959);
   hdirt_stack_3->SetBinContent(7,0.04420907);
   hdirt_stack_3->SetBinContent(8,0.05613519);
   hdirt_stack_3->SetBinContent(9,0.12376);
   hdirt_stack_3->SetBinContent(10,0.05288891);
   hdirt_stack_3->SetBinContent(11,0.01643923);
   hdirt_stack_3->SetBinContent(12,0.008219617);
   hdirt_stack_3->SetBinContent(13,0.008219617);
   hdirt_stack_3->SetBinContent(14,0.3945131);
   hdirt_stack_3->SetBinContent(15,0.08841814);
   hdirt_stack_3->SetBinContent(16,0.09825648);
   hdirt_stack_3->SetBinContent(17,0.008219617);
   hdirt_stack_3->SetBinContent(18,0.008219617);
   hdirt_stack_3->SetBinContent(19,0.04420907);
   hdirt_stack_3->SetBinContent(20,0.008315569);
   hdirt_stack_3->SetBinContent(21,0.07058972);
   hdirt_stack_3->SetBinContent(23,0.08841814);
   hdirt_stack_3->SetBinError(1,0.05076718);
   hdirt_stack_3->SetBinError(2,0.04420907);
   hdirt_stack_3->SetBinError(3,0.0798861);
   hdirt_stack_3->SetBinError(4,0.01162429);
   hdirt_stack_3->SetBinError(5,0.05413293);
   hdirt_stack_3->SetBinError(6,0.04847913);
   hdirt_stack_3->SetBinError(7,0.04420907);
   hdirt_stack_3->SetBinError(8,0.05613519);
   hdirt_stack_3->SetBinError(9,0.06926865);
   hdirt_stack_3->SetBinError(10,0.05288891);
   hdirt_stack_3->SetBinError(11,0.01162429);
   hdirt_stack_3->SetBinError(12,0.008219618);
   hdirt_stack_3->SetBinError(13,0.008219618);
   hdirt_stack_3->SetBinError(14,0.3044769);
   hdirt_stack_3->SetBinError(15,0.06252107);
   hdirt_stack_3->SetBinError(16,0.06329041);
   hdirt_stack_3->SetBinError(17,0.008219618);
   hdirt_stack_3->SetBinError(18,0.008219618);
   hdirt_stack_3->SetBinError(19,0.04420907);
   hdirt_stack_3->SetBinError(20,0.008220178);
   hdirt_stack_3->SetBinError(21,0.05438351);
   hdirt_stack_3->SetBinError(23,0.06252107);
   hdirt_stack_3->SetEntries(54);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.1069176);
   houtFV_stack_4->SetBinContent(2,0.5721515);
   houtFV_stack_4->SetBinContent(3,0.8775285);
   houtFV_stack_4->SetBinContent(4,1.807555);
   houtFV_stack_4->SetBinContent(5,1.558555);
   houtFV_stack_4->SetBinContent(6,1.492543);
   houtFV_stack_4->SetBinContent(7,1.625678);
   houtFV_stack_4->SetBinContent(8,1.073469);
   houtFV_stack_4->SetBinContent(9,1.08085);
   houtFV_stack_4->SetBinContent(10,0.8954974);
   houtFV_stack_4->SetBinContent(11,0.7470649);
   houtFV_stack_4->SetBinContent(12,0.7707705);
   houtFV_stack_4->SetBinContent(13,0.7762016);
   houtFV_stack_4->SetBinContent(14,0.5033213);
   houtFV_stack_4->SetBinContent(15,0.8107111);
   houtFV_stack_4->SetBinContent(16,0.6151518);
   houtFV_stack_4->SetBinContent(17,0.6341078);
   houtFV_stack_4->SetBinContent(18,0.4648365);
   houtFV_stack_4->SetBinContent(19,0.9183258);
   houtFV_stack_4->SetBinContent(20,0.3990328);
   houtFV_stack_4->SetBinContent(21,0.5616223);
   houtFV_stack_4->SetBinContent(22,0.6125774);
   houtFV_stack_4->SetBinContent(23,0.5811963);
   houtFV_stack_4->SetBinContent(24,0.1986191);
   houtFV_stack_4->SetBinError(1,0.03794254);
   houtFV_stack_4->SetBinError(2,0.1780002);
   houtFV_stack_4->SetBinError(3,0.2042583);
   houtFV_stack_4->SetBinError(4,0.318494);
   houtFV_stack_4->SetBinError(5,0.2897078);
   houtFV_stack_4->SetBinError(6,0.2934784);
   houtFV_stack_4->SetBinError(7,0.3059021);
   houtFV_stack_4->SetBinError(8,0.2438867);
   houtFV_stack_4->SetBinError(9,0.256437);
   houtFV_stack_4->SetBinError(10,0.2211188);
   houtFV_stack_4->SetBinError(11,0.2000287);
   houtFV_stack_4->SetBinError(12,0.2082363);
   houtFV_stack_4->SetBinError(13,0.2011034);
   houtFV_stack_4->SetBinError(14,0.1692101);
   houtFV_stack_4->SetBinError(15,0.2167414);
   houtFV_stack_4->SetBinError(16,0.1937449);
   houtFV_stack_4->SetBinError(17,0.1884745);
   houtFV_stack_4->SetBinError(18,0.1622877);
   houtFV_stack_4->SetBinError(19,0.2295005);
   houtFV_stack_4->SetBinError(20,0.1425864);
   houtFV_stack_4->SetBinError(21,0.1777162);
   houtFV_stack_4->SetBinError(22,0.1795326);
   houtFV_stack_4->SetBinError(23,0.1771272);
   houtFV_stack_4->SetBinError(24,0.1080662);
   houtFV_stack_4->SetEntries(494);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,2.253945);
   hNCpi0inFV_stack_5->SetBinContent(2,6.98057);
   hNCpi0inFV_stack_5->SetBinContent(3,10.9199);
   hNCpi0inFV_stack_5->SetBinContent(4,11.36993);
   hNCpi0inFV_stack_5->SetBinContent(5,12.09886);
   hNCpi0inFV_stack_5->SetBinContent(6,11.99327);
   hNCpi0inFV_stack_5->SetBinContent(7,12.29928);
   hNCpi0inFV_stack_5->SetBinContent(8,12.40685);
   hNCpi0inFV_stack_5->SetBinContent(9,10.5958);
   hNCpi0inFV_stack_5->SetBinContent(10,9.855872);
   hNCpi0inFV_stack_5->SetBinContent(11,8.716813);
   hNCpi0inFV_stack_5->SetBinContent(12,8.392627);
   hNCpi0inFV_stack_5->SetBinContent(13,6.77638);
   hNCpi0inFV_stack_5->SetBinContent(14,5.772328);
   hNCpi0inFV_stack_5->SetBinContent(15,5.632076);
   hNCpi0inFV_stack_5->SetBinContent(16,5.069086);
   hNCpi0inFV_stack_5->SetBinContent(17,4.559044);
   hNCpi0inFV_stack_5->SetBinContent(18,4.236359);
   hNCpi0inFV_stack_5->SetBinContent(19,4.010445);
   hNCpi0inFV_stack_5->SetBinContent(20,4.043311);
   hNCpi0inFV_stack_5->SetBinContent(21,2.614727);
   hNCpi0inFV_stack_5->SetBinContent(22,2.312312);
   hNCpi0inFV_stack_5->SetBinContent(23,1.778411);
   hNCpi0inFV_stack_5->SetBinContent(24,0.3990328);
   hNCpi0inFV_stack_5->SetBinError(1,0.3466945);
   hNCpi0inFV_stack_5->SetBinError(2,0.617796);
   hNCpi0inFV_stack_5->SetBinError(3,0.7644151);
   hNCpi0inFV_stack_5->SetBinError(4,0.7780177);
   hNCpi0inFV_stack_5->SetBinError(5,0.8088496);
   hNCpi0inFV_stack_5->SetBinError(6,0.8117812);
   hNCpi0inFV_stack_5->SetBinError(7,0.8141807);
   hNCpi0inFV_stack_5->SetBinError(8,0.8224697);
   hNCpi0inFV_stack_5->SetBinError(9,0.7558315);
   hNCpi0inFV_stack_5->SetBinError(10,0.7329591);
   hNCpi0inFV_stack_5->SetBinError(11,0.686247);
   hNCpi0inFV_stack_5->SetBinError(12,0.669667);
   hNCpi0inFV_stack_5->SetBinError(13,0.5981037);
   hNCpi0inFV_stack_5->SetBinError(14,0.5441949);
   hNCpi0inFV_stack_5->SetBinError(15,0.5425494);
   hNCpi0inFV_stack_5->SetBinError(16,0.5185459);
   hNCpi0inFV_stack_5->SetBinError(17,0.4971975);
   hNCpi0inFV_stack_5->SetBinError(18,0.4708385);
   hNCpi0inFV_stack_5->SetBinError(19,0.4612062);
   hNCpi0inFV_stack_5->SetBinError(20,0.4714617);
   hNCpi0inFV_stack_5->SetBinError(21,0.3742195);
   hNCpi0inFV_stack_5->SetBinError(22,0.3606759);
   hNCpi0inFV_stack_5->SetBinError(23,0.314469);
   hNCpi0inFV_stack_5->SetBinError(24,0.1425864);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.9994245);
   hCCpi0inFV_stack_6->SetBinContent(2,1.845598);
   hCCpi0inFV_stack_6->SetBinContent(3,3.325485);
   hCCpi0inFV_stack_6->SetBinContent(4,3.180824);
   hCCpi0inFV_stack_6->SetBinContent(5,3.453826);
   hCCpi0inFV_stack_6->SetBinContent(6,3.567563);
   hCCpi0inFV_stack_6->SetBinContent(7,4.031369);
   hCCpi0inFV_stack_6->SetBinContent(8,2.731035);
   hCCpi0inFV_stack_6->SetBinContent(9,3.34283);
   hCCpi0inFV_stack_6->SetBinContent(10,2.787244);
   hCCpi0inFV_stack_6->SetBinContent(11,2.638433);
   hCCpi0inFV_stack_6->SetBinContent(12,2.365641);
   hCCpi0inFV_stack_6->SetBinContent(13,2.149551);
   hCCpi0inFV_stack_6->SetBinContent(14,1.532247);
   hCCpi0inFV_stack_6->SetBinContent(15,1.834738);
   hCCpi0inFV_stack_6->SetBinContent(16,2.175649);
   hCCpi0inFV_stack_6->SetBinContent(17,1.257652);
   hCCpi0inFV_stack_6->SetBinContent(18,1.355672);
   hCCpi0inFV_stack_6->SetBinContent(19,1.743221);
   hCCpi0inFV_stack_6->SetBinContent(20,1.762927);
   hCCpi0inFV_stack_6->SetBinContent(21,0.8217714);
   hCCpi0inFV_stack_6->SetBinContent(22,0.9584341);
   hCCpi0inFV_stack_6->SetBinContent(23,0.7250256);
   hCCpi0inFV_stack_6->SetBinContent(24,0.2277854);
   hCCpi0inFV_stack_6->SetBinError(1,0.2259122);
   hCCpi0inFV_stack_6->SetBinError(2,0.3080784);
   hCCpi0inFV_stack_6->SetBinError(3,0.4145968);
   hCCpi0inFV_stack_6->SetBinError(4,0.4201656);
   hCCpi0inFV_stack_6->SetBinError(5,0.4447341);
   hCCpi0inFV_stack_6->SetBinError(6,0.4287642);
   hCCpi0inFV_stack_6->SetBinError(7,0.469597);
   hCCpi0inFV_stack_6->SetBinError(8,0.3776703);
   hCCpi0inFV_stack_6->SetBinError(9,0.4220736);
   hCCpi0inFV_stack_6->SetBinError(10,0.3951946);
   hCCpi0inFV_stack_6->SetBinError(11,0.3786702);
   hCCpi0inFV_stack_6->SetBinError(12,0.3616659);
   hCCpi0inFV_stack_6->SetBinError(13,0.348858);
   hCCpi0inFV_stack_6->SetBinError(14,0.2977757);
   hCCpi0inFV_stack_6->SetBinError(15,0.3212155);
   hCCpi0inFV_stack_6->SetBinError(16,0.3496389);
   hCCpi0inFV_stack_6->SetBinError(17,0.2663518);
   hCCpi0inFV_stack_6->SetBinError(18,0.2742426);
   hCCpi0inFV_stack_6->SetBinError(19,0.3109247);
   hCCpi0inFV_stack_6->SetBinError(20,0.3160808);
   hCCpi0inFV_stack_6->SetBinError(21,0.2097919);
   hCCpi0inFV_stack_6->SetBinError(22,0.2277112);
   hCCpi0inFV_stack_6->SetBinError(23,0.1994658);
   hCCpi0inFV_stack_6->SetBinError(24,0.1189308);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.06195629);
   hNCinFV_stack_7->SetBinContent(2,0.7470649);
   hNCinFV_stack_7->SetBinContent(3,0.972979);
   hNCinFV_stack_7->SetBinContent(4,1.25726);
   hNCinFV_stack_7->SetBinContent(5,1.082347);
   hNCinFV_stack_7->SetBinContent(6,0.9602288);
   hNCinFV_stack_7->SetBinContent(7,0.7835208);
   hNCinFV_stack_7->SetBinContent(8,0.9074333);
   hNCinFV_stack_7->SetBinContent(9,1.106052);
   hNCinFV_stack_7->SetBinContent(10,0.6341078);
   hNCinFV_stack_7->SetBinContent(11,0.3498267);
   hNCinFV_stack_7->SetBinContent(12,0.4737393);
   hNCinFV_stack_7->SetBinContent(13,0.5247401);
   hNCinFV_stack_7->SetBinContent(14,0.05100079);
   hNCinFV_stack_7->SetBinContent(15,0.497445);
   hNCinFV_stack_7->SetBinContent(16,0.4482389);
   hNCinFV_stack_7->SetBinContent(17,0.6086074);
   hNCinFV_stack_7->SetBinContent(18,0.3990328);
   hNCinFV_stack_7->SetBinContent(19,0.5101952);
   hNCinFV_stack_7->SetBinContent(20,0.2241195);
   hNCinFV_stack_7->SetBinContent(21,0.3005857);
   hNCinFV_stack_7->SetBinContent(22,0.5466511);
   hNCinFV_stack_7->SetBinContent(23,0.2860757);
   hNCinFV_stack_7->SetBinContent(24,0.05100079);
   hNCinFV_stack_7->SetBinError(1,0.06195629);
   hNCinFV_stack_7->SetBinError(2,0.2000287);
   hNCinFV_stack_7->SetBinError(3,0.221335);
   hNCinFV_stack_7->SetBinError(4,0.2604937);
   hNCinFV_stack_7->SetBinError(5,0.2439868);
   hNCinFV_stack_7->SetBinError(6,0.2209675);
   hNCinFV_stack_7->SetBinError(7,0.2086263);
   hNCinFV_stack_7->SetBinError(8,0.2262788);
   hNCinFV_stack_7->SetBinError(9,0.2507597);
   hNCinFV_stack_7->SetBinError(10,0.1884745);
   hNCinFV_stack_7->SetBinError(11,0.1290537);
   hNCinFV_stack_7->SetBinError(12,0.1559873);
   hNCinFV_stack_7->SetBinError(13,0.1580579);
   hNCinFV_stack_7->SetBinError(14,0.02550039);
   hNCinFV_stack_7->SetBinError(15,0.1663818);
   hNCinFV_stack_7->SetBinError(16,0.1549416);
   hNCinFV_stack_7->SetBinError(17,0.18761);
   hNCinFV_stack_7->SetBinError(18,0.1425864);
   hNCinFV_stack_7->SetBinError(19,0.1668696);
   hNCinFV_stack_7->SetBinError(20,0.1095603);
   hNCinFV_stack_7->SetBinError(21,0.1265215);
   hNCinFV_stack_7->SetBinError(22,0.1770845);
   hNCinFV_stack_7->SetBinError(23,0.1258651);
   hNCinFV_stack_7->SetBinError(24,0.02550039);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.2381282);
   hnumuCCinFV_stack_8->SetBinContent(2,0.587354);
   hnumuCCinFV_stack_8->SetBinContent(3,0.6961873);
   hnumuCCinFV_stack_8->SetBinContent(4,1.567683);
   hnumuCCinFV_stack_8->SetBinContent(5,1.169062);
   hnumuCCinFV_stack_8->SetBinContent(6,1.151399);
   hnumuCCinFV_stack_8->SetBinContent(7,1.647405);
   hnumuCCinFV_stack_8->SetBinContent(8,1.975339);
   hnumuCCinFV_stack_8->SetBinContent(9,2.631263);
   hnumuCCinFV_stack_8->SetBinContent(10,2.702289);
   hnumuCCinFV_stack_8->SetBinContent(11,2.128321);
   hnumuCCinFV_stack_8->SetBinContent(12,2.343255);
   hnumuCCinFV_stack_8->SetBinContent(13,1.672214);
   hnumuCCinFV_stack_8->SetBinContent(14,1.457704);
   hnumuCCinFV_stack_8->SetBinContent(15,1.015576);
   hnumuCCinFV_stack_8->SetBinContent(16,1.283118);
   hnumuCCinFV_stack_8->SetBinContent(17,1.329907);
   hnumuCCinFV_stack_8->SetBinContent(18,0.2167809);
   hnumuCCinFV_stack_8->SetBinContent(19,0.7176828);
   hnumuCCinFV_stack_8->SetBinContent(20,0.6804997);
   hnumuCCinFV_stack_8->SetBinContent(21,0.5135353);
   hnumuCCinFV_stack_8->SetBinContent(22,0.425016);
   hnumuCCinFV_stack_8->SetBinContent(23,0.238309);
   hnumuCCinFV_stack_8->SetBinContent(24,0.1731993);
   hnumuCCinFV_stack_8->SetBinError(1,0.1104522);
   hnumuCCinFV_stack_8->SetBinError(2,0.1786482);
   hnumuCCinFV_stack_8->SetBinError(3,0.1870235);
   hnumuCCinFV_stack_8->SetBinError(4,0.5087601);
   hnumuCCinFV_stack_8->SetBinError(5,0.333697);
   hnumuCCinFV_stack_8->SetBinError(6,0.2562231);
   hnumuCCinFV_stack_8->SetBinError(7,0.4438734);
   hnumuCCinFV_stack_8->SetBinError(8,0.3491831);
   hnumuCCinFV_stack_8->SetBinError(9,0.4729539);
   hnumuCCinFV_stack_8->SetBinError(10,0.4614095);
   hnumuCCinFV_stack_8->SetBinError(11,0.4317478);
   hnumuCCinFV_stack_8->SetBinError(12,0.534421);
   hnumuCCinFV_stack_8->SetBinError(13,0.3717818);
   hnumuCCinFV_stack_8->SetBinError(14,0.2970629);
   hnumuCCinFV_stack_8->SetBinError(15,0.2642958);
   hnumuCCinFV_stack_8->SetBinError(16,0.3092603);
   hnumuCCinFV_stack_8->SetBinError(17,0.4666361);
   hnumuCCinFV_stack_8->SetBinError(18,0.08490123);
   hnumuCCinFV_stack_8->SetBinError(19,0.2131026);
   hnumuCCinFV_stack_8->SetBinError(20,0.2005883);
   hnumuCCinFV_stack_8->SetBinError(21,0.1800423);
   hnumuCCinFV_stack_8->SetBinError(22,0.1529576);
   hnumuCCinFV_stack_8->SetBinError(23,0.1181654);
   hnumuCCinFV_stack_8->SetBinError(24,0.09825565);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.1027856);
   hnueCCinFV_stack_9->SetBinContent(2,0.2540663);
   hnueCCinFV_stack_9->SetBinContent(3,0.08929926);
   hnueCCinFV_stack_9->SetBinContent(4,0.08682881);
   hnueCCinFV_stack_9->SetBinContent(5,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(6,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(7,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(10,0.07408212);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(13,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(18,0.0795009);
   hnueCCinFV_stack_9->SetBinContent(20,0.06195629);
   hnueCCinFV_stack_9->SetBinError(1,0.06632692);
   hnueCCinFV_stack_9->SetBinError(2,0.1115743);
   hnueCCinFV_stack_9->SetBinError(3,0.06491609);
   hnueCCinFV_stack_9->SetBinError(4,0.07516787);
   hnueCCinFV_stack_9->SetBinError(5,0.08761943);
   hnueCCinFV_stack_9->SetBinError(6,0.06325464);
   hnueCCinFV_stack_9->SetBinError(7,0.06452687);
   hnueCCinFV_stack_9->SetBinError(10,0.05182006);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(13,0.06325464);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(18,0.07948712);
   hnueCCinFV_stack_9->SetBinError(20,0.06195629);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmcerror__5->SetBinContent(1,3.846014);
   hmcerror__5->SetBinContent(2,11.40353);
   hmcerror__5->SetBinContent(3,17.69713);
   hmcerror__5->SetBinContent(4,20.42028);
   hmcerror__5->SetBinContent(5,22.05356);
   hmcerror__5->SetBinContent(6,20.34502);
   hmcerror__5->SetBinContent(7,22.97133);
   hmcerror__5->SetBinContent(8,20.28322);
   hmcerror__5->SetBinContent(9,20.59085);
   hmcerror__5->SetBinContent(10,18.50327);
   hmcerror__5->SetBinContent(11,16.34458);
   hmcerror__5->SetBinContent(12,16.95005);
   hmcerror__5->SetBinContent(13,13.35244);
   hmcerror__5->SetBinContent(14,10.67767);
   hmcerror__5->SetBinContent(15,10.67879);
   hmcerror__5->SetBinContent(16,11.29292);
   hmcerror__5->SetBinContent(17,9.64465);
   hmcerror__5->SetBinContent(18,7.282766);
   hmcerror__5->SetBinContent(19,8.201304);
   hmcerror__5->SetBinContent(20,7.713278);
   hmcerror__5->SetBinContent(21,5.284766);
   hmcerror__5->SetBinContent(22,5.116829);
   hmcerror__5->SetBinContent(23,3.808952);
   hmcerror__5->SetBinContent(24,1.061907);
   hmcerror__5->SetBinError(1,1.92964);
   hmcerror__5->SetBinError(2,3.802787);
   hmcerror__5->SetBinError(3,5.19139);
   hmcerror__5->SetBinError(4,6.154821);
   hmcerror__5->SetBinError(5,5.739059);
   hmcerror__5->SetBinError(6,7.083264);
   hmcerror__5->SetBinError(7,7.963852);
   hmcerror__5->SetBinError(8,7.134869);
   hmcerror__5->SetBinError(9,5.766442);
   hmcerror__5->SetBinError(10,5.652152);
   hmcerror__5->SetBinError(11,4.547946);
   hmcerror__5->SetBinError(12,4.885902);
   hmcerror__5->SetBinError(13,4.919889);
   hmcerror__5->SetBinError(14,3.560014);
   hmcerror__5->SetBinError(15,3.292071);
   hmcerror__5->SetBinError(16,3.643961);
   hmcerror__5->SetBinError(17,3.288765);
   hmcerror__5->SetBinError(18,2.794589);
   hmcerror__5->SetBinError(19,3.197181);
   hmcerror__5->SetBinError(20,3.017274);
   hmcerror__5->SetBinError(21,2.48795);
   hmcerror__5->SetBinError(22,3.486756);
   hmcerror__5->SetBinError(23,1.927263);
   hmcerror__5->SetBinError(24,0.976892);
   hmcerror__5->SetBinError(25,0.125509);
   hmcerror__5->SetEntries(300.4418);

   ci = TColor::GetColor("#666666");
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
   6,
   8,
   6,
   16,
   9,
   11,
   15,
   17,
   8,
   8,
   16,
   18,
   17,
   6,
   10,
   7,
   4,
   4,
   7,
   4,
   2,
   6,
   2,
   1};
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
   2.67925,
   3.0307,
   2.67925,
   4.1628,
   3.19354,
   3.4975,
   4.0385,
   4.2835,
   3.0307,
   3.0307,
   4.1628,
   4.4008,
   4.2835,
   2.67925,
   3.34883,
   2.85954,
   2.29683,
   2.29683,
   2.85954,
   2.29683,
   2,
   2.67925,
   2,
   1};
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
   2.41858,
   2.7896,
   2.41858,
   3.9454,
   2.9582,
   3.27,
   3.8197,
   4.0673,
   2.7896,
   2.7896,
   3.9454,
   4.1858,
   4.0673,
   2.41858,
   3.1179,
   2.61053,
   1.98186,
   1.98186,
   2.61053,
   1.98186,
   1.51917,
   2.41858,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,198);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(24.40438);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.68#pm0.05(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.55/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 208.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.9","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 19.0","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.6","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 19.7","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  165.1","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 50.8","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 13.8","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 28.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.2","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all");
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
   0.5017246,
   0.3334745,
   0.2933464,
   0.3014073,
   0.2602328,
   0.3481571,
   0.3466866,
   0.3517621,
   0.2800488,
   0.3054678,
   0.278254,
   0.288253,
   0.3684637,
   0.3334074,
   0.3082812,
   0.3226765,
   0.3409937,
   0.3837263,
   0.3898381,
   0.3911792,
   0.4707777,
   0.6814291,
   0.5059826,
   0.9199409};
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
   0.5017246,
   0.3334745,
   0.2933464,
   0.3014073,
   0.2602328,
   0.3481571,
   0.3466866,
   0.3517621,
   0.2800488,
   0.3054678,
   0.278254,
   0.288253,
   0.3684637,
   0.3334074,
   0.3082812,
   0.3226765,
   0.3409937,
   0.3837263,
   0.3898381,
   0.3911792,
   0.4707777,
   0.6814291,
   0.5059826,
   0.9199409};
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
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   0.2993584,
   0.2278396,
   0.2106853,
   0.2108525,
   0.2168759,
   0.2511305,
   0.2448505,
   0.2726995,
   0.2364187,
   0.2247251,
   0.2092021,
   0.2238424,
   0.2085654,
   0.2398817,
   0.2070451,
   0.2174551,
   0.2179092,
   0.2377924,
   0.2260254,
   0.2182042,
   0.2389487,
   0.2493831,
   0.2650975,
   0.3590637};
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
   0.2993584,
   0.2278396,
   0.2106853,
   0.2108525,
   0.2168759,
   0.2511305,
   0.2448505,
   0.2726995,
   0.2364187,
   0.2247251,
   0.2092021,
   0.2238424,
   0.2085654,
   0.2398817,
   0.2070451,
   0.2174551,
   0.2179092,
   0.2377924,
   0.2260254,
   0.2182042,
   0.2389487,
   0.2493831,
   0.2650975,
   0.3590637};
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
   1.560057,
   0.7015369,
   0.339038,
   0.7835348,
   0.4080974,
   0.5406728,
   0.6529879,
   0.8381311,
   0.3885221,
   0.4323561,
   0.9789176,
   1.061944,
   1.273176,
   0.5619204,
   0.9364354,
   0.6198572,
   0.4147377,
   0.5492419,
   0.8535228,
   0.5185863,
   0.3784463,
   1.172601,
   0.5250789,
   0.9417018};
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
   0.6966304,
   0.2657685,
   0.1513946,
   0.2038562,
   0.1448084,
   0.1719094,
   0.1758061,
   0.2111844,
   0.1471868,
   0.1637927,
   0.2546899,
   0.2596334,
   0.3208028,
   0.2509209,
   0.3135963,
   0.2532152,
   0.2381455,
   0.3153788,
   0.3486689,
   0.2977761,
   0.3784463,
   0.5236153,
   0.5250789,
   0.9417018};
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
   0.6288537,
   0.2446259,
   0.1366651,
   0.1932099,
   0.1341371,
   0.1607273,
   0.1662812,
   0.2005253,
   0.1354777,
   0.1507626,
   0.2413888,
   0.2469491,
   0.304611,
   0.2265082,
   0.2919712,
   0.2311651,
   0.205488,
   0.2721301,
   0.3183067,
   0.2569413,
   0.2874621,
   0.4726716,
   0.398842,
   1.280441};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,198);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.444357);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);

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
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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

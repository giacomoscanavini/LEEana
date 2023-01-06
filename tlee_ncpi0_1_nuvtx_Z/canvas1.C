#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 10:27:33 2022) by ROOT version 6.26/00
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
   pad1->Range(-169.2308,-5.296418,1241.026,585.6724);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__1->SetBinContent(0,2.30413);
   hmc__1->SetBinContent(1,184.3438);
   hmc__1->SetBinContent(2,230.6487);
   hmc__1->SetBinContent(3,227.4415);
   hmc__1->SetBinContent(4,228.0924);
   hmc__1->SetBinContent(5,237.9684);
   hmc__1->SetBinContent(6,230.6783);
   hmc__1->SetBinContent(7,227.1844);
   hmc__1->SetBinContent(8,261.7079);
   hmc__1->SetBinContent(9,230.9564);
   hmc__1->SetBinContent(10,217.6518);
   hmc__1->SetBinContent(11,235.2269);
   hmc__1->SetBinContent(12,209.0606);
   hmc__1->SetBinContent(13,227.3963);
   hmc__1->SetBinContent(14,252.5261);
   hmc__1->SetBinContent(15,239.1222);
   hmc__1->SetBinContent(16,224.052);
   hmc__1->SetBinContent(17,228.7831);
   hmc__1->SetBinContent(18,217.5981);
   hmc__1->SetBinContent(19,221.9305);
   hmc__1->SetBinContent(20,234.6041);
   hmc__1->SetBinContent(21,264.8209);
   hmc__1->SetBinContent(22,229.8143);
   hmc__1->SetBinContent(23,208.3301);
   hmc__1->SetBinContent(24,230.0487);
   hmc__1->SetBinContent(25,218.3198);
   hmc__1->SetBinContent(26,227.8549);
   hmc__1->SetBinContent(27,224.7308);
   hmc__1->SetBinContent(28,219.723);
   hmc__1->SetBinContent(29,215.4165);
   hmc__1->SetBinContent(30,166.1507);
   hmc__1->SetBinContent(31,4.617947);
   hmc__1->SetBinError(0,0.7504628);
   hmc__1->SetBinError(1,49.64051);
   hmc__1->SetBinError(2,58.81371);
   hmc__1->SetBinError(3,60.04247);
   hmc__1->SetBinError(4,54.53612);
   hmc__1->SetBinError(5,62.02567);
   hmc__1->SetBinError(6,62.0621);
   hmc__1->SetBinError(7,58.99367);
   hmc__1->SetBinError(8,63.06668);
   hmc__1->SetBinError(9,62.21592);
   hmc__1->SetBinError(10,57.99157);
   hmc__1->SetBinError(11,59.46391);
   hmc__1->SetBinError(12,55.76209);
   hmc__1->SetBinError(13,57.57889);
   hmc__1->SetBinError(14,66.39325);
   hmc__1->SetBinError(15,69.77489);
   hmc__1->SetBinError(16,62.74755);
   hmc__1->SetBinError(17,62.36596);
   hmc__1->SetBinError(18,59.83897);
   hmc__1->SetBinError(19,58.28486);
   hmc__1->SetBinError(20,61.20278);
   hmc__1->SetBinError(21,64.14998);
   hmc__1->SetBinError(22,63.31625);
   hmc__1->SetBinError(23,56.41489);
   hmc__1->SetBinError(24,58.54999);
   hmc__1->SetBinError(25,61.955);
   hmc__1->SetBinError(26,63.72486);
   hmc__1->SetBinError(27,58.45048);
   hmc__1->SetBinError(28,59.45389);
   hmc__1->SetBinError(29,60.64858);
   hmc__1->SetBinError(30,46.26128);
   hmc__1->SetBinError(31,3.759091);
   hmc__1->SetBinError(32,0.3895343);
   hmc__1->SetBinError(33,0.3895343);
   hmc__1->SetMinimum(-5.296418);
   hmc__1->SetMaximum(556.1239);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",32,0,1100);
   hs1_stack_1->SetMinimum(-8.304323e-09);
   hs1_stack_1->SetMaximum(278.0619);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,4.14023);
   hbadmatch_stack_1->SetBinContent(2,5.879974);
   hbadmatch_stack_1->SetBinContent(3,4.417494);
   hbadmatch_stack_1->SetBinContent(4,10.27511);
   hbadmatch_stack_1->SetBinContent(5,8.890614);
   hbadmatch_stack_1->SetBinContent(6,6.229521);
   hbadmatch_stack_1->SetBinContent(7,5.501415);
   hbadmatch_stack_1->SetBinContent(8,7.326723);
   hbadmatch_stack_1->SetBinContent(9,6.133293);
   hbadmatch_stack_1->SetBinContent(10,4.77049);
   hbadmatch_stack_1->SetBinContent(11,4.980214);
   hbadmatch_stack_1->SetBinContent(12,6.591402);
   hbadmatch_stack_1->SetBinContent(13,3.014895);
   hbadmatch_stack_1->SetBinContent(14,9.061652);
   hbadmatch_stack_1->SetBinContent(15,4.671078);
   hbadmatch_stack_1->SetBinContent(16,5.306704);
   hbadmatch_stack_1->SetBinContent(17,5.029347);
   hbadmatch_stack_1->SetBinContent(18,4.002204);
   hbadmatch_stack_1->SetBinContent(19,4.555724);
   hbadmatch_stack_1->SetBinContent(20,6.452446);
   hbadmatch_stack_1->SetBinContent(21,11.37086);
   hbadmatch_stack_1->SetBinContent(22,6.141904);
   hbadmatch_stack_1->SetBinContent(23,3.855063);
   hbadmatch_stack_1->SetBinContent(24,6.004617);
   hbadmatch_stack_1->SetBinContent(25,4.881489);
   hbadmatch_stack_1->SetBinContent(26,3.732112);
   hbadmatch_stack_1->SetBinContent(27,5.760629);
   hbadmatch_stack_1->SetBinContent(28,3.877713);
   hbadmatch_stack_1->SetBinContent(29,4.225581);
   hbadmatch_stack_1->SetBinContent(30,6.184563);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.9590623);
   hbadmatch_stack_1->SetBinError(2,1.276263);
   hbadmatch_stack_1->SetBinError(3,1.061246);
   hbadmatch_stack_1->SetBinError(4,1.96138);
   hbadmatch_stack_1->SetBinError(5,1.62213);
   hbadmatch_stack_1->SetBinError(6,1.446872);
   hbadmatch_stack_1->SetBinError(7,1.261919);
   hbadmatch_stack_1->SetBinError(8,1.70104);
   hbadmatch_stack_1->SetBinError(9,1.345941);
   hbadmatch_stack_1->SetBinError(10,1.243199);
   hbadmatch_stack_1->SetBinError(11,1.150799);
   hbadmatch_stack_1->SetBinError(12,2.331236);
   hbadmatch_stack_1->SetBinError(13,0.8467358);
   hbadmatch_stack_1->SetBinError(14,2.148965);
   hbadmatch_stack_1->SetBinError(15,1.184434);
   hbadmatch_stack_1->SetBinError(16,1.205315);
   hbadmatch_stack_1->SetBinError(17,1.240707);
   hbadmatch_stack_1->SetBinError(18,1.020259);
   hbadmatch_stack_1->SetBinError(19,1.173254);
   hbadmatch_stack_1->SetBinError(20,1.33761);
   hbadmatch_stack_1->SetBinError(21,1.892428);
   hbadmatch_stack_1->SetBinError(22,1.22087);
   hbadmatch_stack_1->SetBinError(23,0.9801613);
   hbadmatch_stack_1->SetBinError(24,1.318144);
   hbadmatch_stack_1->SetBinError(25,1.208808);
   hbadmatch_stack_1->SetBinError(26,0.8863723);
   hbadmatch_stack_1->SetBinError(27,1.959991);
   hbadmatch_stack_1->SetBinError(28,1.13346);
   hbadmatch_stack_1->SetBinError(29,1.107472);
   hbadmatch_stack_1->SetBinError(30,1.394709);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,14.01579);
   hext_stack_2->SetBinContent(2,29.37982);
   hext_stack_2->SetBinContent(3,33.73708);
   hext_stack_2->SetBinContent(4,28.52196);
   hext_stack_2->SetBinContent(5,32.93824);
   hext_stack_2->SetBinContent(6,29.46202);
   hext_stack_2->SetBinContent(7,28.04916);
   hext_stack_2->SetBinContent(8,44.12542);
   hext_stack_2->SetBinContent(9,22.63216);
   hext_stack_2->SetBinContent(10,18.73058);
   hext_stack_2->SetBinContent(11,35.12846);
   hext_stack_2->SetBinContent(12,18.71458);
   hext_stack_2->SetBinContent(13,22.51242);
   hext_stack_2->SetBinContent(14,31.88285);
   hext_stack_2->SetBinContent(15,21.03166);
   hext_stack_2->SetBinContent(16,22.75021);
   hext_stack_2->SetBinContent(17,17.31765);
   hext_stack_2->SetBinContent(18,21.04766);
   hext_stack_2->SetBinContent(19,27.8241);
   hext_stack_2->SetBinContent(20,27.8241);
   hext_stack_2->SetBinContent(21,48.33111);
   hext_stack_2->SetBinContent(22,26.49338);
   hext_stack_2->SetBinContent(23,17.88425);
   hext_stack_2->SetBinContent(24,26.33615);
   hext_stack_2->SetBinContent(25,14.51177);
   hext_stack_2->SetBinContent(26,22.10299);
   hext_stack_2->SetBinContent(27,19.37219);
   hext_stack_2->SetBinContent(28,21.88675);
   hext_stack_2->SetBinContent(29,16.35882);
   hext_stack_2->SetBinContent(30,12.29724);
   hext_stack_2->SetBinContent(31,1.137595);
   hext_stack_2->SetBinError(1,2.407345);
   hext_stack_2->SetBinError(2,3.813552);
   hext_stack_2->SetBinError(3,4.119627);
   hext_stack_2->SetBinError(4,3.690242);
   hext_stack_2->SetBinError(5,4.029675);
   hext_stack_2->SetBinError(6,3.821423);
   hext_stack_2->SetBinError(7,3.668994);
   hext_stack_2->SetBinError(8,4.769406);
   hext_stack_2->SetBinError(9,3.03184);
   hext_stack_2->SetBinError(10,2.76749);
   hext_stack_2->SetBinError(11,4.169685);
   hext_stack_2->SetBinError(12,2.754988);
   hext_stack_2->SetBinError(13,3.109103);
   hext_stack_2->SetBinError(14,3.982774);
   hext_stack_2->SetBinError(15,3.06475);
   hext_stack_2->SetBinError(16,3.094599);
   hext_stack_2->SetBinError(17,2.801368);
   hext_stack_2->SetBinError(18,3.075993);
   hext_stack_2->SetBinError(19,3.560568);
   hext_stack_2->SetBinError(20,3.560568);
   hext_stack_2->SetBinError(21,4.639022);
   hext_stack_2->SetBinError(22,3.59533);
   hext_stack_2->SetBinError(23,2.828081);
   hext_stack_2->SetBinError(24,3.550354);
   hext_stack_2->SetBinError(25,2.412368);
   hext_stack_2->SetBinError(26,3.341846);
   hext_stack_2->SetBinError(27,2.840893);
   hext_stack_2->SetBinError(28,3.264094);
   hext_stack_2->SetBinError(29,2.670123);
   hext_stack_2->SetBinError(30,2.368851);
   hext_stack_2->SetBinError(31,0.6602113);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,9.354599);
   hdirt_stack_3->SetBinContent(2,7.000653);
   hdirt_stack_3->SetBinContent(3,6.614541);
   hdirt_stack_3->SetBinContent(4,3.063942);
   hdirt_stack_3->SetBinContent(5,2.726027);
   hdirt_stack_3->SetBinContent(6,2.646285);
   hdirt_stack_3->SetBinContent(7,2.329391);
   hdirt_stack_3->SetBinContent(8,3.215383);
   hdirt_stack_3->SetBinContent(9,2.955294);
   hdirt_stack_3->SetBinContent(10,3.327973);
   hdirt_stack_3->SetBinContent(11,1.727094);
   hdirt_stack_3->SetBinContent(12,1.493965);
   hdirt_stack_3->SetBinContent(13,2.625488);
   hdirt_stack_3->SetBinContent(14,1.253978);
   hdirt_stack_3->SetBinContent(15,1.515501);
   hdirt_stack_3->SetBinContent(16,2.188922);
   hdirt_stack_3->SetBinContent(17,1.193192);
   hdirt_stack_3->SetBinContent(18,1.156151);
   hdirt_stack_3->SetBinContent(19,0.982376);
   hdirt_stack_3->SetBinContent(20,1.356197);
   hdirt_stack_3->SetBinContent(21,2.930987);
   hdirt_stack_3->SetBinContent(22,1.568609);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.7321214);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,2.940626);
   hdirt_stack_3->SetBinContent(27,1.409088);
   hdirt_stack_3->SetBinContent(28,1.908545);
   hdirt_stack_3->SetBinContent(29,1.171413);
   hdirt_stack_3->SetBinContent(30,0.5758626);
   hdirt_stack_3->SetBinError(1,1.611529);
   hdirt_stack_3->SetBinError(2,1.343846);
   hdirt_stack_3->SetBinError(3,1.50386);
   hdirt_stack_3->SetBinError(4,0.9034885);
   hdirt_stack_3->SetBinError(5,0.9370599);
   hdirt_stack_3->SetBinError(6,0.8482434);
   hdirt_stack_3->SetBinError(7,0.8268664);
   hdirt_stack_3->SetBinError(8,0.9444708);
   hdirt_stack_3->SetBinError(9,0.8446888);
   hdirt_stack_3->SetBinError(10,1.345897);
   hdirt_stack_3->SetBinError(11,0.6674736);
   hdirt_stack_3->SetBinError(12,0.649483);
   hdirt_stack_3->SetBinError(13,0.8531346);
   hdirt_stack_3->SetBinError(14,0.6057728);
   hdirt_stack_3->SetBinError(15,0.5931947);
   hdirt_stack_3->SetBinError(16,0.8257001);
   hdirt_stack_3->SetBinError(17,0.5921466);
   hdirt_stack_3->SetBinError(18,0.5870455);
   hdirt_stack_3->SetBinError(19,0.5099715);
   hdirt_stack_3->SetBinError(20,0.5430927);
   hdirt_stack_3->SetBinError(21,0.8803808);
   hdirt_stack_3->SetBinError(22,0.5837417);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(24,0.4557629);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.308701);
   hdirt_stack_3->SetBinError(27,0.5615226);
   hdirt_stack_3->SetBinError(28,0.7269063);
   hdirt_stack_3->SetBinError(29,0.5610561);
   hdirt_stack_3->SetBinError(30,0.3389606);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,1.032573);
   houtFV_stack_4->SetBinContent(1,49.8884);
   houtFV_stack_4->SetBinContent(2,29.13251);
   houtFV_stack_4->SetBinContent(3,20.32335);
   houtFV_stack_4->SetBinContent(4,21.56842);
   houtFV_stack_4->SetBinContent(5,18.37189);
   houtFV_stack_4->SetBinContent(6,22.9464);
   houtFV_stack_4->SetBinContent(7,21.14435);
   houtFV_stack_4->SetBinContent(8,25.79179);
   houtFV_stack_4->SetBinContent(9,19.39596);
   houtFV_stack_4->SetBinContent(10,17.22768);
   houtFV_stack_4->SetBinContent(11,22.86914);
   houtFV_stack_4->SetBinContent(12,19.2044);
   houtFV_stack_4->SetBinContent(13,18.50844);
   houtFV_stack_4->SetBinContent(14,19.47096);
   houtFV_stack_4->SetBinContent(15,24.09934);
   houtFV_stack_4->SetBinContent(16,19.95053);
   houtFV_stack_4->SetBinContent(17,20.79377);
   houtFV_stack_4->SetBinContent(18,18.66835);
   houtFV_stack_4->SetBinContent(19,22.00248);
   houtFV_stack_4->SetBinContent(20,23.69346);
   houtFV_stack_4->SetBinContent(21,27.6402);
   houtFV_stack_4->SetBinContent(22,21.06876);
   houtFV_stack_4->SetBinContent(23,21.8029);
   houtFV_stack_4->SetBinContent(24,21.55483);
   houtFV_stack_4->SetBinContent(25,24.9744);
   houtFV_stack_4->SetBinContent(26,17.17283);
   houtFV_stack_4->SetBinContent(27,25.94195);
   houtFV_stack_4->SetBinContent(28,16.77109);
   houtFV_stack_4->SetBinContent(29,22.99321);
   houtFV_stack_4->SetBinContent(30,22.62319);
   houtFV_stack_4->SetBinContent(31,1.184408);
   houtFV_stack_4->SetBinError(0,0.5587859);
   houtFV_stack_4->SetBinError(1,3.691968);
   houtFV_stack_4->SetBinError(2,2.714461);
   houtFV_stack_4->SetBinError(3,2.200907);
   houtFV_stack_4->SetBinError(4,2.48062);
   houtFV_stack_4->SetBinError(5,2.113767);
   houtFV_stack_4->SetBinError(6,2.386376);
   houtFV_stack_4->SetBinError(7,2.252368);
   houtFV_stack_4->SetBinError(8,2.581004);
   houtFV_stack_4->SetBinError(9,2.09786);
   houtFV_stack_4->SetBinError(10,2.034477);
   houtFV_stack_4->SetBinError(11,2.413449);
   houtFV_stack_4->SetBinError(12,2.15723);
   houtFV_stack_4->SetBinError(13,2.244851);
   houtFV_stack_4->SetBinError(14,2.190833);
   houtFV_stack_4->SetBinError(15,2.420862);
   houtFV_stack_4->SetBinError(16,2.21656);
   houtFV_stack_4->SetBinError(17,2.214538);
   houtFV_stack_4->SetBinError(18,2.141451);
   houtFV_stack_4->SetBinError(19,2.442346);
   houtFV_stack_4->SetBinError(20,2.513848);
   houtFV_stack_4->SetBinError(21,2.711114);
   houtFV_stack_4->SetBinError(22,2.28178);
   houtFV_stack_4->SetBinError(23,2.580903);
   houtFV_stack_4->SetBinError(24,2.314952);
   houtFV_stack_4->SetBinError(25,2.514266);
   houtFV_stack_4->SetBinError(26,2.107386);
   houtFV_stack_4->SetBinError(27,2.530567);
   houtFV_stack_4->SetBinError(28,2.007465);
   houtFV_stack_4->SetBinError(29,2.429088);
   houtFV_stack_4->SetBinError(30,2.397771);
   houtFV_stack_4->SetBinError(31,0.5666328);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.321216);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.219682);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.08285);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.875134);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.828945);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.348905);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.197527);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.256046);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.799885);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.357775);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.579437);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.506731);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.584837);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.639345);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.486776);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.135038);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.881363);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.097056);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.823272);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.908093);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.536995);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.261353);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.51985);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.885406);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,6.301896);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,6.095263);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,5.68731);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,4.205465);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,3.090934);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,2.096704);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5860814);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6773151);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7617789);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6410922);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6881915);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.696648);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7259229);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5772551);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.761244);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7272508);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6915665);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6227012);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6281673);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.821864);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9132491);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8241469);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.543607);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7919338);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7562186);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5993018);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6342029);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7177875);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4647413);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6428006);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.158534);
   hNCpi0inFVcoh_stack_5->SetBinError(26,1.018103);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.9164291);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.7094341);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.5656077);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.5848479);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8900958);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.751695);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3250993);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.207702);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8152095);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7752141);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6773207);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7209164);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9703244);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8782408);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3054178);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7556154);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4670852);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7136374);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8633714);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5886096);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.7239276);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3255184);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4425136);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5408388);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5228431);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7895548);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.7578911);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.7879671);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.6736805);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.8444167);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.6000478);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.5664843);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.3944175);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2061891);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3502315);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2424585);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1020116);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06167349);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3239715);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2296996);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2158146);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2638427);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3889335);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2721417);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.09109463);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2253937);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1207658);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2238495);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3146431);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2155973);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.25857);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08265523);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1070221);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2204705);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1494568);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2886572);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3241541);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2258419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2479662);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.2466915);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.1992681);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.173459);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1566904);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1377095);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.6814114);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.15863);
   hNCpi0inFVres_stack_7->SetBinContent(2,67.01295);
   hNCpi0inFVres_stack_7->SetBinContent(3,68.76486);
   hNCpi0inFVres_stack_7->SetBinContent(4,60.51719);
   hNCpi0inFVres_stack_7->SetBinContent(5,73.562);
   hNCpi0inFVres_stack_7->SetBinContent(6,74.61218);
   hNCpi0inFVres_stack_7->SetBinContent(7,70.64884);
   hNCpi0inFVres_stack_7->SetBinContent(8,70.92833);
   hNCpi0inFVres_stack_7->SetBinContent(9,78.94909);
   hNCpi0inFVres_stack_7->SetBinContent(10,73.37244);
   hNCpi0inFVres_stack_7->SetBinContent(11,74.51908);
   hNCpi0inFVres_stack_7->SetBinContent(12,74.63371);
   hNCpi0inFVres_stack_7->SetBinContent(13,79.38474);
   hNCpi0inFVres_stack_7->SetBinContent(14,86.41156);
   hNCpi0inFVres_stack_7->SetBinContent(15,80.33591);
   hNCpi0inFVres_stack_7->SetBinContent(16,76.76653);
   hNCpi0inFVres_stack_7->SetBinContent(17,85.16247);
   hNCpi0inFVres_stack_7->SetBinContent(18,76.79414);
   hNCpi0inFVres_stack_7->SetBinContent(19,76.68626);
   hNCpi0inFVres_stack_7->SetBinContent(20,75.5451);
   hNCpi0inFVres_stack_7->SetBinContent(21,65.93456);
   hNCpi0inFVres_stack_7->SetBinContent(22,65.37564);
   hNCpi0inFVres_stack_7->SetBinContent(23,74.29223);
   hNCpi0inFVres_stack_7->SetBinContent(24,74.9382);
   hNCpi0inFVres_stack_7->SetBinContent(25,73.84569);
   hNCpi0inFVres_stack_7->SetBinContent(26,78.17358);
   hNCpi0inFVres_stack_7->SetBinContent(27,74.82231);
   hNCpi0inFVres_stack_7->SetBinContent(28,81.51902);
   hNCpi0inFVres_stack_7->SetBinContent(29,75.03532);
   hNCpi0inFVres_stack_7->SetBinContent(30,44.47366);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.3088615);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3672356);
   hNCpi0inFVres_stack_7->SetBinError(1,2.026092);
   hNCpi0inFVres_stack_7->SetBinError(2,2.612913);
   hNCpi0inFVres_stack_7->SetBinError(3,2.794835);
   hNCpi0inFVres_stack_7->SetBinError(4,2.574773);
   hNCpi0inFVres_stack_7->SetBinError(5,2.78467);
   hNCpi0inFVres_stack_7->SetBinError(6,2.773393);
   hNCpi0inFVres_stack_7->SetBinError(7,2.638961);
   hNCpi0inFVres_stack_7->SetBinError(8,2.691815);
   hNCpi0inFVres_stack_7->SetBinError(9,3.019814);
   hNCpi0inFVres_stack_7->SetBinError(10,2.688825);
   hNCpi0inFVres_stack_7->SetBinError(11,2.839659);
   hNCpi0inFVres_stack_7->SetBinError(12,2.815683);
   hNCpi0inFVres_stack_7->SetBinError(13,3.006818);
   hNCpi0inFVres_stack_7->SetBinError(14,3.067068);
   hNCpi0inFVres_stack_7->SetBinError(15,2.97981);
   hNCpi0inFVres_stack_7->SetBinError(16,2.785526);
   hNCpi0inFVres_stack_7->SetBinError(17,3.208019);
   hNCpi0inFVres_stack_7->SetBinError(18,2.824535);
   hNCpi0inFVres_stack_7->SetBinError(19,2.813499);
   hNCpi0inFVres_stack_7->SetBinError(20,2.927184);
   hNCpi0inFVres_stack_7->SetBinError(21,2.569978);
   hNCpi0inFVres_stack_7->SetBinError(22,2.55942);
   hNCpi0inFVres_stack_7->SetBinError(23,2.822905);
   hNCpi0inFVres_stack_7->SetBinError(24,2.957727);
   hNCpi0inFVres_stack_7->SetBinError(25,2.731331);
   hNCpi0inFVres_stack_7->SetBinError(26,2.784977);
   hNCpi0inFVres_stack_7->SetBinError(27,2.742982);
   hNCpi0inFVres_stack_7->SetBinError(28,2.858413);
   hNCpi0inFVres_stack_7->SetBinError(29,2.820181);
   hNCpi0inFVres_stack_7->SetBinError(30,2.269073);
   hNCpi0inFVres_stack_7->SetBinError(31,0.08980522);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.37578);
   hNCpi0inFVdis_stack_8->SetBinContent(2,14.24601);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.1542);
   hNCpi0inFVdis_stack_8->SetBinContent(4,15.53099);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.80335);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.18128);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.07684);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.93685);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.15314);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.78471);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.13792);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.99222);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.5509);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.61608);
   hNCpi0inFVdis_stack_8->SetBinContent(15,17.11127);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.11065);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.51188);
   hNCpi0inFVdis_stack_8->SetBinContent(18,18.93683);
   hNCpi0inFVdis_stack_8->SetBinContent(19,15.27733);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.26109);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.56501);
   hNCpi0inFVdis_stack_8->SetBinContent(22,16.90389);
   hNCpi0inFVdis_stack_8->SetBinContent(23,14.96366);
   hNCpi0inFVdis_stack_8->SetBinContent(24,15.63098);
   hNCpi0inFVdis_stack_8->SetBinContent(25,16.82658);
   hNCpi0inFVdis_stack_8->SetBinContent(26,18.05363);
   hNCpi0inFVdis_stack_8->SetBinContent(27,16.37315);
   hNCpi0inFVdis_stack_8->SetBinContent(28,17.09784);
   hNCpi0inFVdis_stack_8->SetBinContent(29,13.70444);
   hNCpi0inFVdis_stack_8->SetBinContent(30,9.379965);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.07994311);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.286099);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.388989);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.419732);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.391782);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.260695);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.276699);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.344367);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.562689);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.376757);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.306315);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.20756);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.397043);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.438367);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.43102);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.484281);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.402866);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.502024);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.667812);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.37412);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.298475);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.271485);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.566365);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.157994);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.480706);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.461858);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.445099);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.38389);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.460359);
   hNCpi0inFVdis_stack_8->SetBinError(29,1.298725);
   hNCpi0inFVdis_stack_8->SetBinError(30,1.002314);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04843715);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3422205);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.0365362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05782241);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.08918934);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1388841);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.07429475);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.183711);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02583506);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04404794);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03996217);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1320045);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.06447875);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,25.54154);
   hCCpi0inFV_stack_10->SetBinContent(2,33.33617);
   hCCpi0inFV_stack_10->SetBinContent(3,34.73953);
   hCCpi0inFV_stack_10->SetBinContent(4,37.61742);
   hCCpi0inFV_stack_10->SetBinContent(5,41.40598);
   hCCpi0inFV_stack_10->SetBinContent(6,35.1253);
   hCCpi0inFV_stack_10->SetBinContent(7,33.5579);
   hCCpi0inFV_stack_10->SetBinContent(8,39.7008);
   hCCpi0inFV_stack_10->SetBinContent(9,37.49786);
   hCCpi0inFV_stack_10->SetBinContent(10,42.34924);
   hCCpi0inFV_stack_10->SetBinContent(11,37.07203);
   hCCpi0inFV_stack_10->SetBinContent(12,33.77409);
   hCCpi0inFV_stack_10->SetBinContent(13,39.14711);
   hCCpi0inFV_stack_10->SetBinContent(14,38.23489);
   hCCpi0inFV_stack_10->SetBinContent(15,43.63696);
   hCCpi0inFV_stack_10->SetBinContent(16,34.7705);
   hCCpi0inFV_stack_10->SetBinContent(17,32.14782);
   hCCpi0inFV_stack_10->SetBinContent(18,33.81395);
   hCCpi0inFV_stack_10->SetBinContent(19,32.34821);
   hCCpi0inFV_stack_10->SetBinContent(20,35.38889);
   hCCpi0inFV_stack_10->SetBinContent(21,38.73186);
   hCCpi0inFV_stack_10->SetBinContent(22,40.84343);
   hCCpi0inFV_stack_10->SetBinContent(23,33.62416);
   hCCpi0inFV_stack_10->SetBinContent(24,37.58176);
   hCCpi0inFV_stack_10->SetBinContent(25,34.91674);
   hCCpi0inFV_stack_10->SetBinContent(26,41.30252);
   hCCpi0inFV_stack_10->SetBinContent(27,34.8712);
   hCCpi0inFV_stack_10->SetBinContent(28,37.32085);
   hCCpi0inFV_stack_10->SetBinContent(29,36.98442);
   hCCpi0inFV_stack_10->SetBinContent(30,36.65387);
   hCCpi0inFV_stack_10->SetBinContent(31,0.9801958);
   hCCpi0inFV_stack_10->SetBinError(1,2.559047);
   hCCpi0inFV_stack_10->SetBinError(2,2.866219);
   hCCpi0inFV_stack_10->SetBinError(3,3.003805);
   hCCpi0inFV_stack_10->SetBinError(4,3.000836);
   hCCpi0inFV_stack_10->SetBinError(5,3.224463);
   hCCpi0inFV_stack_10->SetBinError(6,2.936815);
   hCCpi0inFV_stack_10->SetBinError(7,2.870575);
   hCCpi0inFV_stack_10->SetBinError(8,3.163648);
   hCCpi0inFV_stack_10->SetBinError(9,3.073126);
   hCCpi0inFV_stack_10->SetBinError(10,3.293876);
   hCCpi0inFV_stack_10->SetBinError(11,3.122326);
   hCCpi0inFV_stack_10->SetBinError(12,2.919785);
   hCCpi0inFV_stack_10->SetBinError(13,3.122215);
   hCCpi0inFV_stack_10->SetBinError(14,3.077379);
   hCCpi0inFV_stack_10->SetBinError(15,3.26362);
   hCCpi0inFV_stack_10->SetBinError(16,2.905123);
   hCCpi0inFV_stack_10->SetBinError(17,2.893526);
   hCCpi0inFV_stack_10->SetBinError(18,2.919877);
   hCCpi0inFV_stack_10->SetBinError(19,2.899392);
   hCCpi0inFV_stack_10->SetBinError(20,2.916575);
   hCCpi0inFV_stack_10->SetBinError(21,3.15021);
   hCCpi0inFV_stack_10->SetBinError(22,3.180876);
   hCCpi0inFV_stack_10->SetBinError(23,2.959112);
   hCCpi0inFV_stack_10->SetBinError(24,3.09878);
   hCCpi0inFV_stack_10->SetBinError(25,2.937123);
   hCCpi0inFV_stack_10->SetBinError(26,3.280261);
   hCCpi0inFV_stack_10->SetBinError(27,2.964629);
   hCCpi0inFV_stack_10->SetBinError(28,3.088074);
   hCCpi0inFV_stack_10->SetBinError(29,3.027436);
   hCCpi0inFV_stack_10->SetBinError(30,3.102874);
   hCCpi0inFV_stack_10->SetBinError(31,0.4383608);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,9.159071);
   hNCinFV_stack_11->SetBinContent(2,16.04708);
   hNCinFV_stack_11->SetBinContent(3,15.27966);
   hNCinFV_stack_11->SetBinContent(4,14.87782);
   hNCinFV_stack_11->SetBinContent(5,18.12532);
   hNCinFV_stack_11->SetBinContent(6,15.56582);
   hNCinFV_stack_11->SetBinContent(7,18.81654);
   hNCinFV_stack_11->SetBinContent(8,15.08741);
   hNCinFV_stack_11->SetBinContent(9,15.80092);
   hNCinFV_stack_11->SetBinContent(10,17.05889);
   hNCinFV_stack_11->SetBinContent(11,18.81419);
   hNCinFV_stack_11->SetBinContent(12,15.36377);
   hNCinFV_stack_11->SetBinContent(13,15.88231);
   hNCinFV_stack_11->SetBinContent(14,20.55434);
   hNCinFV_stack_11->SetBinContent(15,14.52753);
   hNCinFV_stack_11->SetBinContent(16,19.44854);
   hNCinFV_stack_11->SetBinContent(17,19.85794);
   hNCinFV_stack_11->SetBinContent(18,16.70598);
   hNCinFV_stack_11->SetBinContent(19,18.56411);
   hNCinFV_stack_11->SetBinContent(20,20.22724);
   hNCinFV_stack_11->SetBinContent(21,20.5372);
   hNCinFV_stack_11->SetBinContent(22,19.33998);
   hNCinFV_stack_11->SetBinContent(23,14.67282);
   hNCinFV_stack_11->SetBinContent(24,20.37511);
   hNCinFV_stack_11->SetBinContent(25,20.93748);
   hNCinFV_stack_11->SetBinContent(26,17.0449);
   hNCinFV_stack_11->SetBinContent(27,18.71681);
   hNCinFV_stack_11->SetBinContent(28,17.60038);
   hNCinFV_stack_11->SetBinContent(29,16.90555);
   hNCinFV_stack_11->SetBinContent(30,12.61261);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,1.66081);
   hNCinFV_stack_11->SetBinError(2,2.152211);
   hNCinFV_stack_11->SetBinError(3,2.062655);
   hNCinFV_stack_11->SetBinError(4,2.284013);
   hNCinFV_stack_11->SetBinError(5,2.458016);
   hNCinFV_stack_11->SetBinError(6,2.170314);
   hNCinFV_stack_11->SetBinError(7,2.346392);
   hNCinFV_stack_11->SetBinError(8,1.998563);
   hNCinFV_stack_11->SetBinError(9,2.002103);
   hNCinFV_stack_11->SetBinError(10,2.319106);
   hNCinFV_stack_11->SetBinError(11,2.568975);
   hNCinFV_stack_11->SetBinError(12,2.173908);
   hNCinFV_stack_11->SetBinError(13,2.221233);
   hNCinFV_stack_11->SetBinError(14,2.495131);
   hNCinFV_stack_11->SetBinError(15,1.948608);
   hNCinFV_stack_11->SetBinError(16,2.301774);
   hNCinFV_stack_11->SetBinError(17,2.401733);
   hNCinFV_stack_11->SetBinError(18,2.160301);
   hNCinFV_stack_11->SetBinError(19,2.543573);
   hNCinFV_stack_11->SetBinError(20,2.494031);
   hNCinFV_stack_11->SetBinError(21,2.236241);
   hNCinFV_stack_11->SetBinError(22,2.39938);
   hNCinFV_stack_11->SetBinError(23,1.95122);
   hNCinFV_stack_11->SetBinError(24,2.396026);
   hNCinFV_stack_11->SetBinError(25,2.568708);
   hNCinFV_stack_11->SetBinError(26,2.211538);
   hNCinFV_stack_11->SetBinError(27,2.461123);
   hNCinFV_stack_11->SetBinError(28,2.310271);
   hNCinFV_stack_11->SetBinError(29,2.140082);
   hNCinFV_stack_11->SetBinError(30,1.741836);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,19.19289);
   hnumuCCinFV_stack_12->SetBinContent(2,23.65788);
   hnumuCCinFV_stack_12->SetBinContent(3,24.3626);
   hnumuCCinFV_stack_12->SetBinContent(4,30.69926);
   hnumuCCinFV_stack_12->SetBinContent(5,18.51806);
   hnumuCCinFV_stack_12->SetBinContent(6,22.78282);
   hnumuCCinFV_stack_12->SetBinContent(7,23.93111);
   hnumuCCinFV_stack_12->SetBinContent(8,32.24468);
   hnumuCCinFV_stack_12->SetBinContent(9,24.83976);
   hnumuCCinFV_stack_12->SetBinContent(10,18.73304);
   hnumuCCinFV_stack_12->SetBinContent(11,20.98966);
   hnumuCCinFV_stack_12->SetBinContent(12,16.60244);
   hnumuCCinFV_stack_12->SetBinContent(13,23.09469);
   hnumuCCinFV_stack_12->SetBinContent(14,20.98862);
   hnumuCCinFV_stack_12->SetBinContent(15,23.4469);
   hnumuCCinFV_stack_12->SetBinContent(16,18.8367);
   hnumuCCinFV_stack_12->SetBinContent(17,22.6128);
   hnumuCCinFV_stack_12->SetBinContent(18,20.4294);
   hnumuCCinFV_stack_12->SetBinContent(19,17.52634);
   hnumuCCinFV_stack_12->SetBinContent(20,23.77621);
   hnumuCCinFV_stack_12->SetBinContent(21,28.34617);
   hnumuCCinFV_stack_12->SetBinContent(22,24.72252);
   hnumuCCinFV_stack_12->SetBinContent(23,22.52396);
   hnumuCCinFV_stack_12->SetBinContent(24,19.68818);
   hnumuCCinFV_stack_12->SetBinContent(25,17.24279);
   hnumuCCinFV_stack_12->SetBinContent(26,18.59134);
   hnumuCCinFV_stack_12->SetBinContent(27,18.74296);
   hnumuCCinFV_stack_12->SetBinContent(28,16.26548);
   hnumuCCinFV_stack_12->SetBinContent(29,21.50533);
   hnumuCCinFV_stack_12->SetBinContent(30,18.27822);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.843616);
   hnumuCCinFV_stack_12->SetBinError(2,3.040312);
   hnumuCCinFV_stack_12->SetBinError(3,2.766615);
   hnumuCCinFV_stack_12->SetBinError(4,2.989903);
   hnumuCCinFV_stack_12->SetBinError(5,2.313896);
   hnumuCCinFV_stack_12->SetBinError(6,2.734323);
   hnumuCCinFV_stack_12->SetBinError(7,3.578827);
   hnumuCCinFV_stack_12->SetBinError(8,3.769836);
   hnumuCCinFV_stack_12->SetBinError(9,2.998668);
   hnumuCCinFV_stack_12->SetBinError(10,2.473315);
   hnumuCCinFV_stack_12->SetBinError(11,2.391677);
   hnumuCCinFV_stack_12->SetBinError(12,2.393344);
   hnumuCCinFV_stack_12->SetBinError(13,2.646933);
   hnumuCCinFV_stack_12->SetBinError(14,3.297245);
   hnumuCCinFV_stack_12->SetBinError(15,2.601825);
   hnumuCCinFV_stack_12->SetBinError(16,2.407059);
   hnumuCCinFV_stack_12->SetBinError(17,2.942948);
   hnumuCCinFV_stack_12->SetBinError(18,2.495815);
   hnumuCCinFV_stack_12->SetBinError(19,2.324403);
   hnumuCCinFV_stack_12->SetBinError(20,3.313502);
   hnumuCCinFV_stack_12->SetBinError(21,2.745417);
   hnumuCCinFV_stack_12->SetBinError(22,2.671345);
   hnumuCCinFV_stack_12->SetBinError(23,2.595011);
   hnumuCCinFV_stack_12->SetBinError(24,2.318007);
   hnumuCCinFV_stack_12->SetBinError(25,2.337032);
   hnumuCCinFV_stack_12->SetBinError(26,2.366552);
   hnumuCCinFV_stack_12->SetBinError(27,2.563097);
   hnumuCCinFV_stack_12->SetBinError(28,2.035825);
   hnumuCCinFV_stack_12->SetBinError(29,2.737759);
   hnumuCCinFV_stack_12->SetBinError(30,2.392281);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.305493);
   hnueCCinFV_stack_13->SetBinContent(2,0.9315238);
   hnueCCinFV_stack_13->SetBinContent(3,0.6402578);
   hnueCCinFV_stack_13->SetBinContent(4,1.9952);
   hnueCCinFV_stack_13->SetBinContent(5,2.946188);
   hnueCCinFV_stack_13->SetBinContent(6,0.977303);
   hnueCCinFV_stack_13->SetBinContent(7,2.253958);
   hnueCCinFV_stack_13->SetBinContent(8,2.315725);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,1.060783);
   hnueCCinFV_stack_13->SetBinContent(11,1.085857);
   hnueCCinFV_stack_13->SetBinContent(12,1.338508);
   hnueCCinFV_stack_13->SetBinContent(13,2.60502);
   hnueCCinFV_stack_13->SetBinContent(14,1.637758);
   hnueCCinFV_stack_13->SetBinContent(15,2.257051);
   hnueCCinFV_stack_13->SetBinContent(16,2.161972);
   hnueCCinFV_stack_13->SetBinContent(17,1.550959);
   hnueCCinFV_stack_13->SetBinContent(18,1.602102);
   hnueCCinFV_stack_13->SetBinContent(19,1.878912);
   hnueCCinFV_stack_13->SetBinContent(20,1.614761);
   hnueCCinFV_stack_13->SetBinContent(21,2.357428);
   hnueCCinFV_stack_13->SetBinContent(22,2.177566);
   hnueCCinFV_stack_13->SetBinContent(23,1.059023);
   hnueCCinFV_stack_13->SetBinContent(24,2.502004);
   hnueCCinFV_stack_13->SetBinContent(25,2.497455);
   hnueCCinFV_stack_13->SetBinContent(26,1.800674);
   hnueCCinFV_stack_13->SetBinContent(27,2.417496);
   hnueCCinFV_stack_13->SetBinContent(28,0.7033689);
   hnueCCinFV_stack_13->SetBinContent(29,3.036338);
   hnueCCinFV_stack_13->SetBinContent(30,0.6942893);
   hnueCCinFV_stack_13->SetBinError(1,0.6094479);
   hnueCCinFV_stack_13->SetBinError(2,0.5575178);
   hnueCCinFV_stack_13->SetBinError(3,0.3723889);
   hnueCCinFV_stack_13->SetBinError(4,0.7872795);
   hnueCCinFV_stack_13->SetBinError(5,1.849411);
   hnueCCinFV_stack_13->SetBinError(6,0.5020508);
   hnueCCinFV_stack_13->SetBinError(7,0.8085586);
   hnueCCinFV_stack_13->SetBinError(8,0.8026899);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.5588594);
   hnueCCinFV_stack_13->SetBinError(11,0.5487395);
   hnueCCinFV_stack_13->SetBinError(12,0.6800867);
   hnueCCinFV_stack_13->SetBinError(13,1.023969);
   hnueCCinFV_stack_13->SetBinError(14,0.6927579);
   hnueCCinFV_stack_13->SetBinError(15,0.7454225);
   hnueCCinFV_stack_13->SetBinError(16,1.2417);
   hnueCCinFV_stack_13->SetBinError(17,0.7478497);
   hnueCCinFV_stack_13->SetBinError(18,0.9585051);
   hnueCCinFV_stack_13->SetBinError(19,0.8945046);
   hnueCCinFV_stack_13->SetBinError(20,0.6654854);
   hnueCCinFV_stack_13->SetBinError(21,0.8058879);
   hnueCCinFV_stack_13->SetBinError(22,0.8848417);
   hnueCCinFV_stack_13->SetBinError(23,0.5426262);
   hnueCCinFV_stack_13->SetBinError(24,1.009049);
   hnueCCinFV_stack_13->SetBinError(25,0.9181021);
   hnueCCinFV_stack_13->SetBinError(26,0.6594318);
   hnueCCinFV_stack_13->SetBinError(27,0.8260393);
   hnueCCinFV_stack_13->SetBinError(28,0.4164799);
   hnueCCinFV_stack_13->SetBinError(29,1.684419);
   hnueCCinFV_stack_13->SetBinError(30,0.4102043);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__2->SetBinContent(0,2.30413);
   hmcerror__2->SetBinContent(1,184.3438);
   hmcerror__2->SetBinContent(2,230.6487);
   hmcerror__2->SetBinContent(3,227.4415);
   hmcerror__2->SetBinContent(4,228.0924);
   hmcerror__2->SetBinContent(5,237.9684);
   hmcerror__2->SetBinContent(6,230.6783);
   hmcerror__2->SetBinContent(7,227.1844);
   hmcerror__2->SetBinContent(8,261.7079);
   hmcerror__2->SetBinContent(9,230.9564);
   hmcerror__2->SetBinContent(10,217.6518);
   hmcerror__2->SetBinContent(11,235.2269);
   hmcerror__2->SetBinContent(12,209.0606);
   hmcerror__2->SetBinContent(13,227.3963);
   hmcerror__2->SetBinContent(14,252.5261);
   hmcerror__2->SetBinContent(15,239.1222);
   hmcerror__2->SetBinContent(16,224.052);
   hmcerror__2->SetBinContent(17,228.7831);
   hmcerror__2->SetBinContent(18,217.5981);
   hmcerror__2->SetBinContent(19,221.9305);
   hmcerror__2->SetBinContent(20,234.6041);
   hmcerror__2->SetBinContent(21,264.8209);
   hmcerror__2->SetBinContent(22,229.8143);
   hmcerror__2->SetBinContent(23,208.3301);
   hmcerror__2->SetBinContent(24,230.0487);
   hmcerror__2->SetBinContent(25,218.3198);
   hmcerror__2->SetBinContent(26,227.8549);
   hmcerror__2->SetBinContent(27,224.7308);
   hmcerror__2->SetBinContent(28,219.723);
   hmcerror__2->SetBinContent(29,215.4165);
   hmcerror__2->SetBinContent(30,166.1507);
   hmcerror__2->SetBinContent(31,4.617947);
   hmcerror__2->SetBinError(0,0.7504628);
   hmcerror__2->SetBinError(1,49.64051);
   hmcerror__2->SetBinError(2,58.81371);
   hmcerror__2->SetBinError(3,60.04247);
   hmcerror__2->SetBinError(4,54.53612);
   hmcerror__2->SetBinError(5,62.02567);
   hmcerror__2->SetBinError(6,62.0621);
   hmcerror__2->SetBinError(7,58.99367);
   hmcerror__2->SetBinError(8,63.06668);
   hmcerror__2->SetBinError(9,62.21592);
   hmcerror__2->SetBinError(10,57.99157);
   hmcerror__2->SetBinError(11,59.46391);
   hmcerror__2->SetBinError(12,55.76209);
   hmcerror__2->SetBinError(13,57.57889);
   hmcerror__2->SetBinError(14,66.39325);
   hmcerror__2->SetBinError(15,69.77489);
   hmcerror__2->SetBinError(16,62.74755);
   hmcerror__2->SetBinError(17,62.36596);
   hmcerror__2->SetBinError(18,59.83897);
   hmcerror__2->SetBinError(19,58.28486);
   hmcerror__2->SetBinError(20,61.20278);
   hmcerror__2->SetBinError(21,64.14998);
   hmcerror__2->SetBinError(22,63.31625);
   hmcerror__2->SetBinError(23,56.41489);
   hmcerror__2->SetBinError(24,58.54999);
   hmcerror__2->SetBinError(25,61.955);
   hmcerror__2->SetBinError(26,63.72486);
   hmcerror__2->SetBinError(27,58.45048);
   hmcerror__2->SetBinError(28,59.45389);
   hmcerror__2->SetBinError(29,60.64858);
   hmcerror__2->SetBinError(30,46.26128);
   hmcerror__2->SetBinError(31,3.759091);
   hmcerror__2->SetBinError(32,0.3895343);
   hmcerror__2->SetBinError(33,0.3895343);
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
   
   Double_t _fx3001[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3001[32] = {
   167,
   232,
   223,
   205,
   218,
   235,
   227,
   240,
   248,
   202,
   226,
   201,
   204,
   221,
   229,
   221,
   219,
   220,
   209,
   207,
   256,
   222,
   228,
   172,
   222,
   219,
   214,
   213,
   205,
   136,
   2,
   0};
   Double_t _felx3001[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3001[32] = {
   12.92285,
   15.23155,
   14.93318,
   14.31782,
   14.76482,
   15.32971,
   15.06652,
   15.49193,
   15.74802,
   14.21267,
   15.0333,
   14.17745,
   14.28286,
   14.86607,
   15.13275,
   14.86607,
   14.79865,
   14.8324,
   14.45683,
   14.38749,
   16,
   14.89966,
   15.09967,
   13.11488,
   14.89966,
   14.79865,
   14.62874,
   14.59452,
   14.31782,
   11.6619,
   2,
   0};
   Double_t _fehx3001[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3001[32] = {
   12.92285,
   15.23155,
   14.93318,
   14.31782,
   14.76482,
   15.32971,
   15.06652,
   15.49193,
   15.74802,
   14.21267,
   15.0333,
   14.17745,
   14.28286,
   14.86607,
   15.13275,
   14.86607,
   14.79865,
   14.8324,
   14.45683,
   14.38749,
   16,
   14.89966,
   15.09967,
   13.11488,
   14.89966,
   14.79865,
   14.62874,
   14.59452,
   14.31782,
   11.6619,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1210);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(299.2);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6443.0","lp");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 678.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2171.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 514.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3002[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3002[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3002[32] = {
   0.2692823,
   0.2549927,
   0.2639908,
   0.2390966,
   0.2606467,
   0.2690417,
   0.2596731,
   0.2409812,
   0.2693838,
   0.2664419,
   0.2527938,
   0.2667269,
   0.2532094,
   0.2629164,
   0.2917959,
   0.2800581,
   0.2725986,
   0.2749976,
   0.2626267,
   0.2608768,
   0.2422391,
   0.2755105,
   0.2707957,
   0.2545113,
   0.2837809,
   0.279673,
   0.260091,
   0.2705857,
   0.281541,
   0.2784297,
   0.8140179,
   0};
   Double_t _fehx3002[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3002[32] = {
   0.2692823,
   0.2549927,
   0.2639908,
   0.2390966,
   0.2606467,
   0.2690417,
   0.2596731,
   0.2409812,
   0.2693838,
   0.2664419,
   0.2527938,
   0.2667269,
   0.2532094,
   0.2629164,
   0.2917959,
   0.2800581,
   0.2725986,
   0.2749976,
   0.2626267,
   0.2608768,
   0.2422391,
   0.2755105,
   0.2707957,
   0.2545113,
   0.2837809,
   0.279673,
   0.260091,
   0.2705857,
   0.281541,
   0.2784297,
   0.8140179,
   0};
   grae = new TGraphAsymmErrors(32,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1210);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3003[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3003[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3003[32] = {
   0.2180277,
   0.2319705,
   0.2328868,
   0.219832,
   0.2321066,
   0.2389477,
   0.244286,
   0.2166217,
   0.2543174,
   0.2526937,
   0.2253668,
   0.2537013,
   0.241151,
   0.2429643,
   0.2565133,
   0.2596743,
   0.2480389,
   0.2548284,
   0.2448379,
   0.2403981,
   0.2109055,
   0.237135,
   0.2574206,
   0.2315711,
   0.2630548,
   0.254756,
   0.2494902,
   0.2577637,
   0.2662563,
   0.2538313,
   0.3503813,
   0};
   Double_t _fehx3003[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3003[32] = {
   0.2180277,
   0.2319705,
   0.2328868,
   0.219832,
   0.2321066,
   0.2389477,
   0.244286,
   0.2166217,
   0.2543174,
   0.2526937,
   0.2253668,
   0.2537013,
   0.241151,
   0.2429643,
   0.2565133,
   0.2596743,
   0.2480389,
   0.2548284,
   0.2448379,
   0.2403981,
   0.2109055,
   0.237135,
   0.2574206,
   0.2315711,
   0.2630548,
   0.254756,
   0.2494902,
   0.2577637,
   0.2662563,
   0.2538313,
   0.3503813,
   0};
   grae = new TGraphAsymmErrors(32,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1210);
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
   
   Double_t _fx3004[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3004[32] = {
   0.9059163,
   1.005859,
   0.9804718,
   0.8987587,
   0.9160882,
   1.018735,
   0.9991885,
   0.9170531,
   1.073796,
   0.9280878,
   0.9607744,
   0.9614436,
   0.897112,
   0.8751571,
   0.9576693,
   0.9863784,
   0.9572385,
   1.011038,
   0.9417365,
   0.8823374,
   0.966691,
   0.9659974,
   1.094417,
   0.7476678,
   1.016857,
   0.961138,
   0.9522503,
   0.9694025,
   0.951645,
   0.8185343,
   0.4330929,
   10};
   Double_t _felx3004[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3004[32] = {
   0.0701019,
   0.06603787,
   0.06565725,
   0.06277203,
   0.06204532,
   0.06645491,
   0.06631847,
   0.05919552,
   0.0681861,
   0.06530003,
   0.06390976,
   0.067815,
   0.06281041,
   0.05886944,
   0.06328457,
   0.06635099,
   0.06468418,
   0.06816417,
   0.06514127,
   0.06132669,
   0.06041819,
   0.0648335,
   0.07247954,
   0.05700913,
   0.06824696,
   0.06494769,
   0.06509449,
   0.06642236,
   0.06646577,
   0.07018873,
   0.4330929,
   0};
   Double_t _fehx3004[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3004[32] = {
   0.0701019,
   0.06603787,
   0.06565725,
   0.06277203,
   0.06204532,
   0.06645491,
   0.06631847,
   0.05919552,
   0.0681861,
   0.06530003,
   0.06390976,
   0.067815,
   0.06281041,
   0.05886944,
   0.06328457,
   0.06635099,
   0.06468418,
   0.06816417,
   0.06514127,
   0.06132669,
   0.06041819,
   0.0648335,
   0.07247954,
   0.05700913,
   0.06824696,
   0.06494769,
   0.06509449,
   0.06642236,
   0.06646577,
   0.07018873,
   0.3289709,
   0};
   grae = new TGraphAsymmErrors(32,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1210);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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

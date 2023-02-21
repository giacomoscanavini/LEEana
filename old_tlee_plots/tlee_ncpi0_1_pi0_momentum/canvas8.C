#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Oct 21 20:21:53 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-2.424284,1692.308,268.0747);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__22->SetBinContent(1,39.89909);
   hmc__22->SetBinContent(2,106.5871);
   hmc__22->SetBinContent(3,121.2142);
   hmc__22->SetBinContent(4,106.0076);
   hmc__22->SetBinContent(5,100.5459);
   hmc__22->SetBinContent(6,92.42084);
   hmc__22->SetBinContent(7,68.29958);
   hmc__22->SetBinContent(8,46.62729);
   hmc__22->SetBinContent(9,45.31759);
   hmc__22->SetBinContent(10,35.37834);
   hmc__22->SetBinContent(11,18.9827);
   hmc__22->SetBinContent(12,15.98728);
   hmc__22->SetBinContent(13,14.94973);
   hmc__22->SetBinContent(14,11.21522);
   hmc__22->SetBinContent(15,8.708988);
   hmc__22->SetBinContent(16,6.966774);
   hmc__22->SetBinContent(17,7.455222);
   hmc__22->SetBinContent(18,5.718335);
   hmc__22->SetBinContent(19,3.902992);
   hmc__22->SetBinContent(20,3.969429);
   hmc__22->SetBinContent(21,6.672142);
   hmc__22->SetBinContent(22,4.957541);
   hmc__22->SetBinContent(23,4.091279);
   hmc__22->SetBinContent(24,2.363733);
   hmc__22->SetBinContent(25,2.761387);
   hmc__22->SetBinContent(26,52.56399);
   hmc__22->SetBinError(1,18.23144);
   hmc__22->SetBinError(2,34.26645);
   hmc__22->SetBinError(3,38.53164);
   hmc__22->SetBinError(4,28.08358);
   hmc__22->SetBinError(5,30.52951);
   hmc__22->SetBinError(6,28.03858);
   hmc__22->SetBinError(7,29.03973);
   hmc__22->SetBinError(8,23.96845);
   hmc__22->SetBinError(9,20.32627);
   hmc__22->SetBinError(10,14.452);
   hmc__22->SetBinError(11,10.09909);
   hmc__22->SetBinError(12,15.64796);
   hmc__22->SetBinError(13,9.328563);
   hmc__22->SetBinError(14,9.301564);
   hmc__22->SetBinError(15,8.696043);
   hmc__22->SetBinError(16,5.770661);
   hmc__22->SetBinError(17,6.80947);
   hmc__22->SetBinError(18,3.474438);
   hmc__22->SetBinError(19,6.865844);
   hmc__22->SetBinError(20,5.425232);
   hmc__22->SetBinError(21,6.879138);
   hmc__22->SetBinError(22,6.904089);
   hmc__22->SetBinError(23,5.399412);
   hmc__22->SetBinError(24,15.0368);
   hmc__22->SetBinError(25,3.295344);
   hmc__22->SetBinError(26,19.30157);
   hmc__22->SetMinimum(-2.424284);
   hmc__22->SetMaximum(254.5498);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,1500);
   hs8_stack_8->SetMinimum(-1.664691e-08);
   hs8_stack_8->SetMaximum(127.2749);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,2.583339);
   hbadmatch_stack_1->SetBinContent(2,4.769994);
   hbadmatch_stack_1->SetBinContent(3,5.28512);
   hbadmatch_stack_1->SetBinContent(4,3.216455);
   hbadmatch_stack_1->SetBinContent(5,1.655438);
   hbadmatch_stack_1->SetBinContent(6,3.083558);
   hbadmatch_stack_1->SetBinContent(7,2.03542);
   hbadmatch_stack_1->SetBinContent(8,0.9131551);
   hbadmatch_stack_1->SetBinContent(9,2.689102);
   hbadmatch_stack_1->SetBinContent(10,0.779983);
   hbadmatch_stack_1->SetBinContent(11,0.4244257);
   hbadmatch_stack_1->SetBinContent(12,0.2271572);
   hbadmatch_stack_1->SetBinContent(13,1.159807);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.5773679);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.3416744);
   hbadmatch_stack_1->SetBinContent(26,2.849157);
   hbadmatch_stack_1->SetBinError(1,0.8803612);
   hbadmatch_stack_1->SetBinError(2,1.117491);
   hbadmatch_stack_1->SetBinError(3,1.320662);
   hbadmatch_stack_1->SetBinError(4,1.037566);
   hbadmatch_stack_1->SetBinError(5,0.6578552);
   hbadmatch_stack_1->SetBinError(6,1.025976);
   hbadmatch_stack_1->SetBinError(7,0.8687446);
   hbadmatch_stack_1->SetBinError(8,0.5371468);
   hbadmatch_stack_1->SetBinError(9,1.287245);
   hbadmatch_stack_1->SetBinError(10,0.4036027);
   hbadmatch_stack_1->SetBinError(11,0.301097);
   hbadmatch_stack_1->SetBinError(12,0.2271572);
   hbadmatch_stack_1->SetBinError(13,0.5423759);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.4147048);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.3416744);
   hbadmatch_stack_1->SetBinError(26,0.939584);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,2.435184);
   hext_stack_2->SetBinContent(2,21.51328);
   hext_stack_2->SetBinContent(3,27.15936);
   hext_stack_2->SetBinContent(4,18.01111);
   hext_stack_2->SetBinContent(5,25.7911);
   hext_stack_2->SetBinContent(6,23.13684);
   hext_stack_2->SetBinContent(7,15.18092);
   hext_stack_2->SetBinContent(8,8.973839);
   hext_stack_2->SetBinContent(9,10.37958);
   hext_stack_2->SetBinContent(10,7.939987);
   hext_stack_2->SetBinContent(11,4.956979);
   hext_stack_2->SetBinContent(12,2.185808);
   hext_stack_2->SetBinContent(13,2.916804);
   hext_stack_2->SetBinContent(14,1.379791);
   hext_stack_2->SetBinContent(15,2.27519);
   hext_stack_2->SetBinContent(16,1.861411);
   hext_stack_2->SetBinContent(17,1.614806);
   hext_stack_2->SetBinContent(18,2.435184);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,2.26801);
   hext_stack_2->SetBinContent(22,1.544194);
   hext_stack_2->SetBinContent(23,1.379791);
   hext_stack_2->SetBinContent(25,0.9660115);
   hext_stack_2->SetBinContent(26,12.08377);
   hext_stack_2->SetBinError(1,0.9256422);
   hext_stack_2->SetBinError(2,3.133577);
   hext_stack_2->SetBinError(3,3.326819);
   hext_stack_2->SetBinError(4,2.941561);
   hext_stack_2->SetBinError(5,3.442533);
   hext_stack_2->SetBinError(6,3.485302);
   hext_stack_2->SetBinError(7,2.750375);
   hext_stack_2->SetBinError(8,2.040271);
   hext_stack_2->SetBinError(9,2.043342);
   hext_stack_2->SetBinError(10,1.784183);
   hext_stack_2->SetBinError(11,1.381607);
   hext_stack_2->SetBinError(12,1.006415);
   hext_stack_2->SetBinError(13,1.132884);
   hext_stack_2->SetBinError(14,0.6935586);
   hext_stack_2->SetBinError(15,0.9336798);
   hext_stack_2->SetBinError(16,0.9526997);
   hext_stack_2->SetBinError(17,0.8528597);
   hext_stack_2->SetBinError(18,0.9256422);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,1.035838);
   hext_stack_2->SetBinError(22,0.7753719);
   hext_stack_2->SetBinError(23,0.6935586);
   hext_stack_2->SetBinError(25,0.7189592);
   hext_stack_2->SetBinError(26,2.182087);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,2.490447);
   hdirt_stack_3->SetBinContent(2,2.267382);
   hdirt_stack_3->SetBinContent(3,1.560979);
   hdirt_stack_3->SetBinContent(4,2.40337);
   hdirt_stack_3->SetBinContent(5,1.802877);
   hdirt_stack_3->SetBinContent(6,2.883504);
   hdirt_stack_3->SetBinContent(7,0.8332258);
   hdirt_stack_3->SetBinContent(8,0.5002366);
   hdirt_stack_3->SetBinContent(9,1.151407);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.2228245);
   hdirt_stack_3->SetBinContent(12,0.1150903);
   hdirt_stack_3->SetBinContent(14,0.5986317);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinContent(26,1.3631);
   hdirt_stack_3->SetBinError(1,0.8652987);
   hdirt_stack_3->SetBinError(2,0.6856422);
   hdirt_stack_3->SetBinError(3,0.6830415);
   hdirt_stack_3->SetBinError(4,0.7606343);
   hdirt_stack_3->SetBinError(5,0.6716663);
   hdirt_stack_3->SetBinError(6,1.217987);
   hdirt_stack_3->SetBinError(7,0.4476755);
   hdirt_stack_3->SetBinError(8,0.3750075);
   hdirt_stack_3->SetBinError(9,0.6671245);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.2189309);
   hdirt_stack_3->SetBinError(12,0.1150903);
   hdirt_stack_3->SetBinError(14,0.3488556);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetBinError(26,0.6417027);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,12.59855);
   houtFV_stack_4->SetBinContent(2,28.61496);
   houtFV_stack_4->SetBinContent(3,24.35538);
   houtFV_stack_4->SetBinContent(4,19.07346);
   houtFV_stack_4->SetBinContent(5,15.13335);
   houtFV_stack_4->SetBinContent(6,17.5512);
   houtFV_stack_4->SetBinContent(7,11.53767);
   houtFV_stack_4->SetBinContent(8,8.429592);
   houtFV_stack_4->SetBinContent(9,8.662635);
   houtFV_stack_4->SetBinContent(10,7.326437);
   houtFV_stack_4->SetBinContent(11,4.600879);
   houtFV_stack_4->SetBinContent(12,5.616724);
   houtFV_stack_4->SetBinContent(13,4.173184);
   houtFV_stack_4->SetBinContent(14,2.262004);
   houtFV_stack_4->SetBinContent(15,1.425556);
   houtFV_stack_4->SetBinContent(16,1.881962);
   houtFV_stack_4->SetBinContent(17,2.215302);
   houtFV_stack_4->SetBinContent(18,1.072095);
   houtFV_stack_4->SetBinContent(19,0.9795823);
   houtFV_stack_4->SetBinContent(20,0.9877257);
   houtFV_stack_4->SetBinContent(21,1.465526);
   houtFV_stack_4->SetBinContent(22,1.339253);
   houtFV_stack_4->SetBinContent(23,0.5221819);
   houtFV_stack_4->SetBinContent(24,0.536893);
   houtFV_stack_4->SetBinContent(25,0.3401776);
   houtFV_stack_4->SetBinContent(26,9.737846);
   houtFV_stack_4->SetBinError(1,1.744833);
   houtFV_stack_4->SetBinError(2,2.998452);
   houtFV_stack_4->SetBinError(3,2.433442);
   houtFV_stack_4->SetBinError(4,2.116887);
   houtFV_stack_4->SetBinError(5,1.977883);
   houtFV_stack_4->SetBinError(6,2.120999);
   houtFV_stack_4->SetBinError(7,1.887961);
   houtFV_stack_4->SetBinError(8,1.461503);
   houtFV_stack_4->SetBinError(9,1.522033);
   houtFV_stack_4->SetBinError(10,1.424666);
   houtFV_stack_4->SetBinError(11,1.084168);
   houtFV_stack_4->SetBinError(12,1.147321);
   houtFV_stack_4->SetBinError(13,1.004248);
   houtFV_stack_4->SetBinError(14,0.6863586);
   houtFV_stack_4->SetBinError(15,0.5647516);
   houtFV_stack_4->SetBinError(16,0.692868);
   houtFV_stack_4->SetBinError(17,0.75015);
   houtFV_stack_4->SetBinError(18,0.5551335);
   houtFV_stack_4->SetBinError(19,0.5813075);
   houtFV_stack_4->SetBinError(20,0.5076321);
   houtFV_stack_4->SetBinError(21,0.6209405);
   houtFV_stack_4->SetBinError(22,0.561784);
   houtFV_stack_4->SetBinError(23,0.3065464);
   houtFV_stack_4->SetBinError(24,0.3929602);
   houtFV_stack_4->SetBinError(25,0.3401776);
   houtFV_stack_4->SetBinError(26,1.529635);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4913292);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6756187);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.075275);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.295124);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.140098);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.036393);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.358571);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.595946);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.8451766);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.23082);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1871061);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3663327);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1959804);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.0972715);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5261939);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.121459);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04281797);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.0368332);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1505081);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1121063);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.08272513);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.9002569);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2117108);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3358459);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4301084);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5721246);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3970415);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3253202);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4147797);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4799612);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3172668);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5061324);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.07929594);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1545439);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1263922);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06323581);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2439339);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1002675);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03163788);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02727417);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1061695);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.08870805);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.05850828);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3091834);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1206151);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06899101);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08408737);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.04706571);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.04943847);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08200837);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04381266);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05162026);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03789905);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03106503);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2936812);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.203339);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.4485);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.81301);
   hNCpi0inFVres_stack_7->SetBinContent(4,16.36103);
   hNCpi0inFVres_stack_7->SetBinContent(5,14.86619);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.48738);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.334085);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.696979);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.453086);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.880601);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.142412);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.483178);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.715416);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.897372);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.654554);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.4195839);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.769243);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.5658277);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.1580519);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.4929137);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.8232006);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.2632683);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.6975701);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.5488575);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.1401687);
   hNCpi0inFVres_stack_7->SetBinContent(26,4.379106);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6795104);
   hNCpi0inFVres_stack_7->SetBinError(2,1.145334);
   hNCpi0inFVres_stack_7->SetBinError(3,1.143681);
   hNCpi0inFVres_stack_7->SetBinError(4,1.350761);
   hNCpi0inFVres_stack_7->SetBinError(5,1.273275);
   hNCpi0inFVres_stack_7->SetBinError(6,1.125269);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9016117);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9724588);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7673614);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8454898);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4073255);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3634397);
   hNCpi0inFVres_stack_7->SetBinError(13,0.505582);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5639289);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5087833);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1246407);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2497262);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1882364);
   hNCpi0inFVres_stack_7->SetBinError(19,0.07921908);
   hNCpi0inFVres_stack_7->SetBinError(20,0.247082);
   hNCpi0inFVres_stack_7->SetBinError(21,0.305865);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1044807);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4365845);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2246293);
   hNCpi0inFVres_stack_7->SetBinError(25,0.06776991);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6377462);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.7942178);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.529481);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.623941);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.097257);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.261565);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.940718);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.837439);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.218575);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.646154);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.186238);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.074853);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.551645);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9575296);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.3392);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2078049);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1432279);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.09689997);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.0836301);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1751561);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2764994);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3427477);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.1080759);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5333726);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.818006);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2711511);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5079209);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7539277);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5788196);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6034909);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5316322);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5675763);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5106395);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3714617);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2741789);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3734979);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3352936);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5268155);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.602679);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.08045697);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.09088272);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.08143953);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.05148312);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.09316524);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2044728);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2814461);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.05429015);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4986466);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.7804252);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,7.285603);
   hCCpi0inFV_stack_10->SetBinContent(2,17.08665);
   hCCpi0inFV_stack_10->SetBinContent(3,22.56846);
   hCCpi0inFV_stack_10->SetBinContent(4,25.5106);
   hCCpi0inFV_stack_10->SetBinContent(5,22.47205);
   hCCpi0inFV_stack_10->SetBinContent(6,19.17814);
   hCCpi0inFV_stack_10->SetBinContent(7,17.09422);
   hCCpi0inFV_stack_10->SetBinContent(8,11.25592);
   hCCpi0inFV_stack_10->SetBinContent(9,8.502851);
   hCCpi0inFV_stack_10->SetBinContent(10,7.185613);
   hCCpi0inFV_stack_10->SetBinContent(11,3.565999);
   hCCpi0inFV_stack_10->SetBinContent(12,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(13,1.371936);
   hCCpi0inFV_stack_10->SetBinContent(14,2.484368);
   hCCpi0inFV_stack_10->SetBinContent(15,2.043704);
   hCCpi0inFV_stack_10->SetBinContent(16,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(17,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(18,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(19,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(20,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(21,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(22,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(23,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(25,0.6305642);
   hCCpi0inFV_stack_10->SetBinContent(26,10.05182);
   hCCpi0inFV_stack_10->SetBinError(1,1.331229);
   hCCpi0inFV_stack_10->SetBinError(2,2.053365);
   hCCpi0inFV_stack_10->SetBinError(3,2.38991);
   hCCpi0inFV_stack_10->SetBinError(4,2.596404);
   hCCpi0inFV_stack_10->SetBinError(5,2.364155);
   hCCpi0inFV_stack_10->SetBinError(6,2.229808);
   hCCpi0inFV_stack_10->SetBinError(7,2.104935);
   hCCpi0inFV_stack_10->SetBinError(8,1.668345);
   hCCpi0inFV_stack_10->SetBinError(9,1.469024);
   hCCpi0inFV_stack_10->SetBinError(10,1.382942);
   hCCpi0inFV_stack_10->SetBinError(11,0.919558);
   hCCpi0inFV_stack_10->SetBinError(12,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(13,0.5185478);
   hCCpi0inFV_stack_10->SetBinError(14,0.8556093);
   hCCpi0inFV_stack_10->SetBinError(15,0.7468551);
   hCCpi0inFV_stack_10->SetBinError(16,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(17,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(18,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(19,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(20,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(21,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(22,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(23,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(24,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(25,0.3657438);
   hCCpi0inFV_stack_10->SetBinError(26,1.629816);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,1.106927);
   hNCinFV_stack_11->SetBinContent(2,5.180322);
   hNCinFV_stack_11->SetBinContent(3,6.695665);
   hNCinFV_stack_11->SetBinContent(4,3.288409);
   hNCinFV_stack_11->SetBinContent(5,4.702466);
   hNCinFV_stack_11->SetBinContent(6,2.749931);
   hNCinFV_stack_11->SetBinContent(7,1.980758);
   hNCinFV_stack_11->SetBinContent(8,1.044115);
   hNCinFV_stack_11->SetBinContent(9,2.301808);
   hNCinFV_stack_11->SetBinContent(10,0.9904821);
   hNCinFV_stack_11->SetBinContent(11,0.4851529);
   hNCinFV_stack_11->SetBinContent(12,0.6529027);
   hNCinFV_stack_11->SetBinContent(13,1.097155);
   hNCinFV_stack_11->SetBinContent(14,0.1950248);
   hNCinFV_stack_11->SetBinContent(16,0.5145313);
   hNCinFV_stack_11->SetBinContent(19,0.05405266);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(26,1.19422);
   hNCinFV_stack_11->SetBinError(1,0.4574327);
   hNCinFV_stack_11->SetBinError(2,1.189446);
   hNCinFV_stack_11->SetBinError(3,1.418304);
   hNCinFV_stack_11->SetBinError(4,1.125017);
   hNCinFV_stack_11->SetBinError(5,1.233109);
   hNCinFV_stack_11->SetBinError(6,0.9351);
   hNCinFV_stack_11->SetBinError(7,0.7294066);
   hNCinFV_stack_11->SetBinError(8,0.4678773);
   hNCinFV_stack_11->SetBinError(9,0.8027392);
   hNCinFV_stack_11->SetBinError(10,0.4805241);
   hNCinFV_stack_11->SetBinError(11,0.2852835);
   hNCinFV_stack_11->SetBinError(12,0.3810001);
   hNCinFV_stack_11->SetBinError(13,0.5093714);
   hNCinFV_stack_11->SetBinError(14,0.1950249);
   hNCinFV_stack_11->SetBinError(16,0.3034126);
   hNCinFV_stack_11->SetBinError(19,0.05405266);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(26,0.5197155);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,5.590281);
   hnumuCCinFV_stack_12->SetBinContent(2,12.18362);
   hnumuCCinFV_stack_12->SetBinContent(3,16.61456);
   hnumuCCinFV_stack_12->SetBinContent(4,12.73254);
   hnumuCCinFV_stack_12->SetBinContent(5,9.390348);
   hnumuCCinFV_stack_12->SetBinContent(6,7.129385);
   hnumuCCinFV_stack_12->SetBinContent(7,5.500394);
   hnumuCCinFV_stack_12->SetBinContent(8,3.949488);
   hnumuCCinFV_stack_12->SetBinContent(9,3.68579);
   hnumuCCinFV_stack_12->SetBinContent(10,3.468783);
   hnumuCCinFV_stack_12->SetBinContent(11,1.322065);
   hnumuCCinFV_stack_12->SetBinContent(12,2.341033);
   hnumuCCinFV_stack_12->SetBinContent(13,1.36192);
   hnumuCCinFV_stack_12->SetBinContent(14,0.9615604);
   hnumuCCinFV_stack_12->SetBinContent(15,0.2280448);
   hnumuCCinFV_stack_12->SetBinContent(16,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(17,1.730781);
   hnumuCCinFV_stack_12->SetBinContent(18,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(19,0.6295491);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5991677);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(23,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,6.081856);
   hnumuCCinFV_stack_12->SetBinError(1,2.445075);
   hnumuCCinFV_stack_12->SetBinError(2,1.761369);
   hnumuCCinFV_stack_12->SetBinError(3,2.134083);
   hnumuCCinFV_stack_12->SetBinError(4,2.571221);
   hnumuCCinFV_stack_12->SetBinError(5,1.662205);
   hnumuCCinFV_stack_12->SetBinError(6,1.379164);
   hnumuCCinFV_stack_12->SetBinError(7,1.351363);
   hnumuCCinFV_stack_12->SetBinError(8,0.995154);
   hnumuCCinFV_stack_12->SetBinError(9,0.9938014);
   hnumuCCinFV_stack_12->SetBinError(10,0.9215947);
   hnumuCCinFV_stack_12->SetBinError(11,0.5554667);
   hnumuCCinFV_stack_12->SetBinError(12,0.802318);
   hnumuCCinFV_stack_12->SetBinError(13,0.5709225);
   hnumuCCinFV_stack_12->SetBinError(14,0.4950523);
   hnumuCCinFV_stack_12->SetBinError(15,0.2280448);
   hnumuCCinFV_stack_12->SetBinError(16,0.438694);
   hnumuCCinFV_stack_12->SetBinError(17,1.258239);
   hnumuCCinFV_stack_12->SetBinError(18,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(19,0.3650818);
   hnumuCCinFV_stack_12->SetBinError(20,0.4487384);
   hnumuCCinFV_stack_12->SetBinError(21,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(23,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,1.303279);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(5,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(22,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.488997);
   hnueCCinFV_stack_13->SetBinContent(26,1.104851);
   hnueCCinFV_stack_13->SetBinError(1,0.3025491);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.2781975);
   hnueCCinFV_stack_13->SetBinError(5,0.2463303);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3397478);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.2179626);
   hnueCCinFV_stack_13->SetBinError(22,0.7431478);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.488997);
   hnueCCinFV_stack_13->SetBinError(26,0.5909018);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__23->SetBinContent(1,39.89909);
   hmcerror__23->SetBinContent(2,106.5871);
   hmcerror__23->SetBinContent(3,121.2142);
   hmcerror__23->SetBinContent(4,106.0076);
   hmcerror__23->SetBinContent(5,100.5459);
   hmcerror__23->SetBinContent(6,92.42084);
   hmcerror__23->SetBinContent(7,68.29958);
   hmcerror__23->SetBinContent(8,46.62729);
   hmcerror__23->SetBinContent(9,45.31759);
   hmcerror__23->SetBinContent(10,35.37834);
   hmcerror__23->SetBinContent(11,18.9827);
   hmcerror__23->SetBinContent(12,15.98728);
   hmcerror__23->SetBinContent(13,14.94973);
   hmcerror__23->SetBinContent(14,11.21522);
   hmcerror__23->SetBinContent(15,8.708988);
   hmcerror__23->SetBinContent(16,6.966774);
   hmcerror__23->SetBinContent(17,7.455222);
   hmcerror__23->SetBinContent(18,5.718335);
   hmcerror__23->SetBinContent(19,3.902992);
   hmcerror__23->SetBinContent(20,3.969429);
   hmcerror__23->SetBinContent(21,6.672142);
   hmcerror__23->SetBinContent(22,4.957541);
   hmcerror__23->SetBinContent(23,4.091279);
   hmcerror__23->SetBinContent(24,2.363733);
   hmcerror__23->SetBinContent(25,2.761387);
   hmcerror__23->SetBinContent(26,52.56399);
   hmcerror__23->SetBinError(1,18.23144);
   hmcerror__23->SetBinError(2,34.26645);
   hmcerror__23->SetBinError(3,38.53164);
   hmcerror__23->SetBinError(4,28.08358);
   hmcerror__23->SetBinError(5,30.52951);
   hmcerror__23->SetBinError(6,28.03858);
   hmcerror__23->SetBinError(7,29.03973);
   hmcerror__23->SetBinError(8,23.96845);
   hmcerror__23->SetBinError(9,20.32627);
   hmcerror__23->SetBinError(10,14.452);
   hmcerror__23->SetBinError(11,10.09909);
   hmcerror__23->SetBinError(12,15.64796);
   hmcerror__23->SetBinError(13,9.328563);
   hmcerror__23->SetBinError(14,9.301564);
   hmcerror__23->SetBinError(15,8.696043);
   hmcerror__23->SetBinError(16,5.770661);
   hmcerror__23->SetBinError(17,6.80947);
   hmcerror__23->SetBinError(18,3.474438);
   hmcerror__23->SetBinError(19,6.865844);
   hmcerror__23->SetBinError(20,5.425232);
   hmcerror__23->SetBinError(21,6.879138);
   hmcerror__23->SetBinError(22,6.904089);
   hmcerror__23->SetBinError(23,5.399412);
   hmcerror__23->SetBinError(24,15.0368);
   hmcerror__23->SetBinError(25,3.295344);
   hmcerror__23->SetBinError(26,19.30157);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3029[25] = {
   57,
   98,
   115,
   101,
   97,
   56,
   71,
   54,
   26,
   30,
   18,
   18,
   19,
   9,
   6,
   12,
   2,
   6,
   8,
   6,
   4,
   7,
   3,
   3,
   3};
   Double_t _felx3029[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3029[25] = {
   7.679,
   10.0209,
   10.72381,
   10.04988,
   9.9704,
   7.6127,
   8.5518,
   7.4785,
   5.2453,
   5.6197,
   4.4008,
   4.4008,
   4.5151,
   3.19354,
   2.67925,
   3.64022,
   2,
   2.67925,
   3.0307,
   2.67925,
   2.29683,
   2.85954,
   2.143368,
   2.143368,
   2.143368};
   Double_t _fehx3029[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3029[25] = {
   7.4757,
   9.82,
   10.72381,
   10.04988,
   9.769,
   7.4094,
   8.3496,
   7.275,
   5.0358,
   5.4117,
   4.1858,
   4.1858,
   4.3011,
   2.9582,
   2.41858,
   3.4155,
   1.51917,
   2.41858,
   2.7896,
   2.41858,
   1.98186,
   2.61053,
   1.72422,
   1.72422,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1650);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(138.2962);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 829.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 30.1","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 187.0","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 17.9","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 182.7","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.8","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  112.3","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  30.2","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 176.9","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 33.2","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 92.0","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.8","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3030[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3030[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3030[25] = {
   0.4569387,
   0.3214876,
   0.3178806,
   0.2649205,
   0.3036375,
   0.3033794,
   0.4251818,
   0.5140433,
   0.4485293,
   0.4084986,
   0.5320156,
   0.9787756,
   0.6239954,
   0.8293695,
   0.9985135,
   0.8283117,
   0.9133825,
   0.607596,
   1.759123,
   1.366754,
   1.031024,
   1.392644,
   1.319737,
   6.361462,
   1.193365};
   Double_t _fehx3030[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3030[25] = {
   0.4569387,
   0.3214876,
   0.3178806,
   0.2649205,
   0.3036375,
   0.3033794,
   0.4251818,
   0.5140433,
   0.4485293,
   0.4084986,
   0.5320156,
   0.9787756,
   0.6239954,
   0.8293695,
   0.9985135,
   0.8283117,
   0.9133825,
   0.607596,
   1.759123,
   1.366754,
   1.031024,
   1.392644,
   1.319737,
   6.361462,
   1.193365};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1650);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3031[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3031[25] = {
   0.2177406,
   0.1727262,
   0.1680549,
   0.1907937,
   0.1719341,
   0.1756094,
   0.1787765,
   0.2126351,
   0.1990336,
   0.1836156,
   0.2097516,
   0.2551567,
   0.2334434,
   0.2501135,
   0.2560827,
   0.2842434,
   0.3607756,
   0.2847561,
   0.3599983,
   0.3502778,
   0.2835568,
   0.4483764,
   0.3675032,
   0.4884298,
   0.4297154};
   Double_t _fehx3031[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3031[25] = {
   0.2177406,
   0.1727262,
   0.1680549,
   0.1907937,
   0.1719341,
   0.1756094,
   0.1787765,
   0.2126351,
   0.1990336,
   0.1836156,
   0.2097516,
   0.2551567,
   0.2334434,
   0.2501135,
   0.2560827,
   0.2842434,
   0.3607756,
   0.2847561,
   0.3599983,
   0.3502778,
   0.2835568,
   0.4483764,
   0.3675032,
   0.4884298,
   0.4297154};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1650);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3032[25] = {
   1.428604,
   0.9194355,
   0.9487339,
   0.952762,
   0.9647335,
   0.605924,
   1.039538,
   1.15812,
   0.5737286,
   0.8479764,
   0.9482319,
   1.125895,
   1.270926,
   0.8024806,
   0.6889434,
   1.722462,
   0.2682683,
   1.049256,
   2.04971,
   1.511552,
   0.5995077,
   1.41199,
   0.7332671,
   1.269179,
   1.086411};
   Double_t _felx3032[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3032[25] = {
   0.1924605,
   0.09401603,
   0.08846989,
   0.09480336,
   0.09916266,
   0.08236995,
   0.1252101,
   0.1603889,
   0.1157453,
   0.1588458,
   0.2318322,
   0.2752688,
   0.3020188,
   0.2847504,
   0.3076419,
   0.5225116,
   0.2682683,
   0.4685367,
   0.7765069,
   0.6749711,
   0.3442418,
   0.5768062,
   0.5238871,
   0.9067724,
   0.7761925};
   Double_t _fehx3032[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3032[25] = {
   0.1873652,
   0.09213119,
   0.08846989,
   0.09480336,
   0.0971596,
   0.08017023,
   0.1222497,
   0.1560245,
   0.1111224,
   0.1529665,
   0.2205061,
   0.2618206,
   0.2877042,
   0.2637665,
   0.2777108,
   0.4902556,
   0.2037726,
   0.4229518,
   0.7147338,
   0.6093017,
   0.2970351,
   0.5265776,
   0.4214379,
   0.7294478,
   0.6244036};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1650);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(3.040888);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,1500,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}

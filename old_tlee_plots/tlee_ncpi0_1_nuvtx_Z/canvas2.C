#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 10:27:33 2022) by ROOT version 6.26/00
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
   pad1->Range(-169.2308,-4.100362,1241.026,453.4137);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__4->SetBinContent(0,1.715674);
   hmc__4->SetBinContent(1,119.0399);
   hmc__4->SetBinContent(2,175.4263);
   hmc__4->SetBinContent(3,174.9227);
   hmc__4->SetBinContent(4,168.6003);
   hmc__4->SetBinContent(5,187.2625);
   hmc__4->SetBinContent(6,175.1452);
   hmc__4->SetBinContent(7,174.4141);
   hmc__4->SetBinContent(8,186.6407);
   hmc__4->SetBinContent(9,173.4415);
   hmc__4->SetBinContent(10,174.6639);
   hmc__4->SetBinContent(11,183.0957);
   hmc__4->SetBinContent(12,164.9005);
   hmc__4->SetBinContent(13,179.7072);
   hmc__4->SetBinContent(14,205.0181);
   hmc__4->SetBinContent(15,188.3358);
   hmc__4->SetBinContent(16,175.9599);
   hmc__4->SetBinContent(17,186.4394);
   hmc__4->SetBinContent(18,179.506);
   hmc__4->SetBinContent(19,178.6494);
   hmc__4->SetBinContent(20,182.0814);
   hmc__4->SetBinContent(21,183.7158);
   hmc__4->SetBinContent(22,174.2072);
   hmc__4->SetBinContent(23,164.9873);
   hmc__4->SetBinContent(24,184.3307);
   hmc__4->SetBinContent(25,173.6051);
   hmc__4->SetBinContent(26,183.6184);
   hmc__4->SetBinContent(27,177.867);
   hmc__4->SetBinContent(28,172.9683);
   hmc__4->SetBinContent(29,145.3536);
   hmc__4->SetBinContent(30,86.99454);
   hmc__4->SetBinContent(31,2.338699);
   hmc__4->SetBinError(0,0.6691531);
   hmc__4->SetBinError(1,33.55825);
   hmc__4->SetBinError(2,48.0756);
   hmc__4->SetBinError(3,55.50724);
   hmc__4->SetBinError(4,43.78481);
   hmc__4->SetBinError(5,51.8543);
   hmc__4->SetBinError(6,53.33828);
   hmc__4->SetBinError(7,49.55607);
   hmc__4->SetBinError(8,50.76995);
   hmc__4->SetBinError(9,52.43951);
   hmc__4->SetBinError(10,48.39488);
   hmc__4->SetBinError(11,50.25463);
   hmc__4->SetBinError(12,47.30597);
   hmc__4->SetBinError(13,49.7499);
   hmc__4->SetBinError(14,56.36342);
   hmc__4->SetBinError(15,59.41381);
   hmc__4->SetBinError(16,52.50843);
   hmc__4->SetBinError(17,52.64523);
   hmc__4->SetBinError(18,50.43533);
   hmc__4->SetBinError(19,48.57585);
   hmc__4->SetBinError(20,50.77383);
   hmc__4->SetBinError(21,51.25008);
   hmc__4->SetBinError(22,57.01979);
   hmc__4->SetBinError(23,47.08111);
   hmc__4->SetBinError(24,48.93402);
   hmc__4->SetBinError(25,53.87665);
   hmc__4->SetBinError(26,53.92297);
   hmc__4->SetBinError(27,48.83932);
   hmc__4->SetBinError(28,50.26087);
   hmc__4->SetBinError(29,46.59562);
   hmc__4->SetBinError(30,28.03239);
   hmc__4->SetBinError(31,2.347554);
   hmc__4->SetBinError(32,0.3895343);
   hmc__4->SetBinError(33,0.3895343);
   hmc__4->SetMinimum(-4.100362);
   hmc__4->SetMaximum(430.538);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",32,0,1100);
   hs2_stack_2->SetMinimum(-8.304323e-09);
   hs2_stack_2->SetMaximum(215.269);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,3.016572);
   hbadmatch_stack_1->SetBinContent(2,3.125957);
   hbadmatch_stack_1->SetBinContent(3,2.41347);
   hbadmatch_stack_1->SetBinContent(4,7.358891);
   hbadmatch_stack_1->SetBinContent(5,7.513383);
   hbadmatch_stack_1->SetBinContent(6,4.589381);
   hbadmatch_stack_1->SetBinContent(7,3.786108);
   hbadmatch_stack_1->SetBinContent(8,4.085341);
   hbadmatch_stack_1->SetBinContent(9,3.978403);
   hbadmatch_stack_1->SetBinContent(10,3.107996);
   hbadmatch_stack_1->SetBinContent(11,3.392936);
   hbadmatch_stack_1->SetBinContent(12,5.171905);
   hbadmatch_stack_1->SetBinContent(13,1.704372);
   hbadmatch_stack_1->SetBinContent(14,6.023077);
   hbadmatch_stack_1->SetBinContent(15,2.607374);
   hbadmatch_stack_1->SetBinContent(16,3.488412);
   hbadmatch_stack_1->SetBinContent(17,4.084823);
   hbadmatch_stack_1->SetBinContent(18,3.34037);
   hbadmatch_stack_1->SetBinContent(19,3.239309);
   hbadmatch_stack_1->SetBinContent(20,4.814914);
   hbadmatch_stack_1->SetBinContent(21,8.93155);
   hbadmatch_stack_1->SetBinContent(22,3.753887);
   hbadmatch_stack_1->SetBinContent(23,3.461865);
   hbadmatch_stack_1->SetBinContent(24,4.259792);
   hbadmatch_stack_1->SetBinContent(25,2.774968);
   hbadmatch_stack_1->SetBinContent(26,2.682889);
   hbadmatch_stack_1->SetBinContent(27,4.084417);
   hbadmatch_stack_1->SetBinContent(28,3.098345);
   hbadmatch_stack_1->SetBinContent(29,2.304025);
   hbadmatch_stack_1->SetBinContent(30,3.236195);
   hbadmatch_stack_1->SetBinError(1,0.806608);
   hbadmatch_stack_1->SetBinError(2,0.8920946);
   hbadmatch_stack_1->SetBinError(3,0.7568511);
   hbadmatch_stack_1->SetBinError(4,1.735601);
   hbadmatch_stack_1->SetBinError(5,1.513112);
   hbadmatch_stack_1->SetBinError(6,1.290956);
   hbadmatch_stack_1->SetBinError(7,1.079223);
   hbadmatch_stack_1->SetBinError(8,1.07433);
   hbadmatch_stack_1->SetBinError(9,1.093342);
   hbadmatch_stack_1->SetBinError(10,0.9945917);
   hbadmatch_stack_1->SetBinError(11,0.9689167);
   hbadmatch_stack_1->SetBinError(12,2.237497);
   hbadmatch_stack_1->SetBinError(13,0.6098978);
   hbadmatch_stack_1->SetBinError(14,1.923204);
   hbadmatch_stack_1->SetBinError(15,0.8529065);
   hbadmatch_stack_1->SetBinError(16,0.9150226);
   hbadmatch_stack_1->SetBinError(17,1.143049);
   hbadmatch_stack_1->SetBinError(18,0.9372113);
   hbadmatch_stack_1->SetBinError(19,1.02695);
   hbadmatch_stack_1->SetBinError(20,1.145178);
   hbadmatch_stack_1->SetBinError(21,1.647979);
   hbadmatch_stack_1->SetBinError(22,0.9301502);
   hbadmatch_stack_1->SetBinError(23,0.9495707);
   hbadmatch_stack_1->SetBinError(24,1.120182);
   hbadmatch_stack_1->SetBinError(25,0.8028244);
   hbadmatch_stack_1->SetBinError(26,0.7472854);
   hbadmatch_stack_1->SetBinError(27,1.856242);
   hbadmatch_stack_1->SetBinError(28,1.035064);
   hbadmatch_stack_1->SetBinError(29,0.8582235);
   hbadmatch_stack_1->SetBinError(30,0.9730659);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,7.131198);
   hext_stack_2->SetBinContent(2,19.51499);
   hext_stack_2->SetBinContent(3,22.16365);
   hext_stack_2->SetBinContent(4,15.42311);
   hext_stack_2->SetBinContent(5,20.6107);
   hext_stack_2->SetBinContent(6,14.55366);
   hext_stack_2->SetBinContent(7,17.75455);
   hext_stack_2->SetBinContent(8,21.14857);
   hext_stack_2->SetBinContent(9,9.90955);
   hext_stack_2->SetBinContent(10,12.73697);
   hext_stack_2->SetBinContent(11,25.27081);
   hext_stack_2->SetBinContent(12,8.849747);
   hext_stack_2->SetBinContent(13,12.89697);
   hext_stack_2->SetBinContent(14,22.61056);
   hext_stack_2->SetBinContent(15,15.22123);
   hext_stack_2->SetBinContent(16,14.72802);
   hext_stack_2->SetBinContent(17,12.06941);
   hext_stack_2->SetBinContent(18,16.99326);
   hext_stack_2->SetBinContent(19,21.24513);
   hext_stack_2->SetBinContent(20,14.65022);
   hext_stack_2->SetBinContent(21,22.85282);
   hext_stack_2->SetBinContent(22,19.76878);
   hext_stack_2->SetBinContent(23,13.34546);
   hext_stack_2->SetBinContent(24,16.07909);
   hext_stack_2->SetBinContent(25,8.518169);
   hext_stack_2->SetBinContent(26,17.10853);
   hext_stack_2->SetBinContent(27,11.98721);
   hext_stack_2->SetBinContent(28,16.94854);
   hext_stack_2->SetBinContent(29,10.76023);
   hext_stack_2->SetBinContent(30,3.494987);
   hext_stack_2->SetBinContent(31,0.4065989);
   hext_stack_2->SetBinError(1,1.728522);
   hext_stack_2->SetBinError(2,3.181959);
   hext_stack_2->SetBinError(3,3.439714);
   hext_stack_2->SetBinError(4,2.75857);
   hext_stack_2->SetBinError(5,3.103187);
   hext_stack_2->SetBinError(6,2.598171);
   hext_stack_2->SetBinError(7,3.001672);
   hext_stack_2->SetBinError(8,3.253453);
   hext_stack_2->SetBinError(9,1.918998);
   hext_stack_2->SetBinError(10,2.259888);
   hext_stack_2->SetBinError(11,3.573059);
   hext_stack_2->SetBinError(12,1.78091);
   hext_stack_2->SetBinError(13,2.256579);
   hext_stack_2->SetBinError(14,3.335576);
   hext_stack_2->SetBinError(15,2.587215);
   hext_stack_2->SetBinError(16,2.516574);
   hext_stack_2->SetBinError(17,2.272423);
   hext_stack_2->SetBinError(18,2.782522);
   hext_stack_2->SetBinError(19,3.200413);
   hext_stack_2->SetBinError(20,2.531438);
   hext_stack_2->SetBinError(21,3.137005);
   hext_stack_2->SetBinError(22,3.178668);
   hext_stack_2->SetBinError(23,2.487659);
   hext_stack_2->SetBinError(24,2.760249);
   hext_stack_2->SetBinError(25,1.807653);
   hext_stack_2->SetBinError(26,2.909166);
   hext_stack_2->SetBinError(27,2.259163);
   hext_stack_2->SetBinError(28,2.911733);
   hext_stack_2->SetBinError(29,2.192955);
   hext_stack_2->SetBinError(30,1.169498);
   hext_stack_2->SetBinError(31,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,6.168429);
   hdirt_stack_3->SetBinContent(2,5.902966);
   hdirt_stack_3->SetBinContent(3,4.675277);
   hdirt_stack_3->SetBinContent(4,2.429353);
   hdirt_stack_3->SetBinContent(5,1.186939);
   hdirt_stack_3->SetBinContent(6,1.312822);
   hdirt_stack_3->SetBinContent(7,1.573012);
   hdirt_stack_3->SetBinContent(8,1.31892);
   hdirt_stack_3->SetBinContent(9,1.860816);
   hdirt_stack_3->SetBinContent(10,2.742697);
   hdirt_stack_3->SetBinContent(11,0.8520056);
   hdirt_stack_3->SetBinContent(12,0.3695036);
   hdirt_stack_3->SetBinContent(13,1.992378);
   hdirt_stack_3->SetBinContent(14,1.253978);
   hdirt_stack_3->SetBinContent(15,0.9396383);
   hdirt_stack_3->SetBinContent(16,1.023377);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,0.4797767);
   hdirt_stack_3->SetBinContent(19,0.7567513);
   hdirt_stack_3->SetBinContent(20,1.356197);
   hdirt_stack_3->SetBinContent(21,1.437086);
   hdirt_stack_3->SetBinContent(22,1.292466);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.7321214);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,2.245472);
   hdirt_stack_3->SetBinContent(27,1.190193);
   hdirt_stack_3->SetBinContent(28,1.217301);
   hdirt_stack_3->SetBinContent(29,0.6951543);
   hdirt_stack_3->SetBinContent(30,0.3569671);
   hdirt_stack_3->SetBinError(1,1.321384);
   hdirt_stack_3->SetBinError(2,1.227777);
   hdirt_stack_3->SetBinError(3,1.078742);
   hdirt_stack_3->SetBinError(4,0.8110418);
   hdirt_stack_3->SetBinError(5,0.6014376);
   hdirt_stack_3->SetBinError(6,0.6152015);
   hdirt_stack_3->SetBinError(7,0.6762364);
   hdirt_stack_3->SetBinError(8,0.5583609);
   hdirt_stack_3->SetBinError(9,0.6884205);
   hdirt_stack_3->SetBinError(10,1.279068);
   hdirt_stack_3->SetBinError(11,0.3911799);
   hdirt_stack_3->SetBinError(12,0.2657029);
   hdirt_stack_3->SetBinError(13,0.7891338);
   hdirt_stack_3->SetBinError(14,0.6057728);
   hdirt_stack_3->SetBinError(15,0.4868118);
   hdirt_stack_3->SetBinError(16,0.5655242);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.3404134);
   hdirt_stack_3->SetBinError(19,0.4605545);
   hdirt_stack_3->SetBinError(20,0.5430927);
   hdirt_stack_3->SetBinError(21,0.61377);
   hdirt_stack_3->SetBinError(22,0.5501154);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.4557629);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.237476);
   hdirt_stack_3->SetBinError(27,0.5170999);
   hdirt_stack_3->SetBinError(28,0.5249886);
   hdirt_stack_3->SetBinError(29,0.4258516);
   hdirt_stack_3->SetBinError(30,0.258803);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.6408324);
   houtFV_stack_4->SetBinContent(1,24.24887);
   houtFV_stack_4->SetBinContent(2,17.35061);
   houtFV_stack_4->SetBinContent(3,10.80121);
   houtFV_stack_4->SetBinContent(4,10.68234);
   houtFV_stack_4->SetBinContent(5,9.712225);
   houtFV_stack_4->SetBinContent(6,12.35135);
   houtFV_stack_4->SetBinContent(7,10.86002);
   houtFV_stack_4->SetBinContent(8,12.11046);
   houtFV_stack_4->SetBinContent(9,10.88563);
   houtFV_stack_4->SetBinContent(10,9.930955);
   houtFV_stack_4->SetBinContent(11,11.77294);
   houtFV_stack_4->SetBinContent(12,10.426);
   houtFV_stack_4->SetBinContent(13,7.994993);
   houtFV_stack_4->SetBinContent(14,11.46645);
   houtFV_stack_4->SetBinContent(15,12.09157);
   houtFV_stack_4->SetBinContent(16,11.3067);
   houtFV_stack_4->SetBinContent(17,12.23085);
   houtFV_stack_4->SetBinContent(18,11.29244);
   houtFV_stack_4->SetBinContent(19,10.14478);
   houtFV_stack_4->SetBinContent(20,14.02819);
   houtFV_stack_4->SetBinContent(21,12.23785);
   houtFV_stack_4->SetBinContent(22,12.15208);
   houtFV_stack_4->SetBinContent(23,11.63436);
   houtFV_stack_4->SetBinContent(24,11.43198);
   houtFV_stack_4->SetBinContent(25,14.84367);
   houtFV_stack_4->SetBinContent(26,9.875999);
   houtFV_stack_4->SetBinContent(27,15.68375);
   houtFV_stack_4->SetBinContent(28,10.59109);
   houtFV_stack_4->SetBinContent(29,15.77516);
   houtFV_stack_4->SetBinContent(30,13.92171);
   houtFV_stack_4->SetBinContent(31,0.6475151);
   houtFV_stack_4->SetBinError(0,0.4852938);
   houtFV_stack_4->SetBinError(1,2.445797);
   houtFV_stack_4->SetBinError(2,2.081532);
   houtFV_stack_4->SetBinError(3,1.603364);
   houtFV_stack_4->SetBinError(4,1.624747);
   houtFV_stack_4->SetBinError(5,1.556775);
   houtFV_stack_4->SetBinError(6,1.718518);
   houtFV_stack_4->SetBinError(7,1.599337);
   houtFV_stack_4->SetBinError(8,1.722092);
   houtFV_stack_4->SetBinError(9,1.56022);
   houtFV_stack_4->SetBinError(10,1.506922);
   houtFV_stack_4->SetBinError(11,1.731813);
   houtFV_stack_4->SetBinError(12,1.564278);
   houtFV_stack_4->SetBinError(13,1.428651);
   houtFV_stack_4->SetBinError(14,1.668561);
   houtFV_stack_4->SetBinError(15,1.727507);
   houtFV_stack_4->SetBinError(16,1.651098);
   houtFV_stack_4->SetBinError(17,1.719537);
   houtFV_stack_4->SetBinError(18,1.685924);
   houtFV_stack_4->SetBinError(19,1.534811);
   houtFV_stack_4->SetBinError(20,1.943487);
   houtFV_stack_4->SetBinError(21,1.836527);
   houtFV_stack_4->SetBinError(22,1.758026);
   houtFV_stack_4->SetBinError(23,1.711393);
   houtFV_stack_4->SetBinError(24,1.698002);
   houtFV_stack_4->SetBinError(25,1.958502);
   houtFV_stack_4->SetBinError(26,1.563726);
   houtFV_stack_4->SetBinError(27,1.987209);
   houtFV_stack_4->SetBinError(28,1.602031);
   houtFV_stack_4->SetBinError(29,2.062048);
   houtFV_stack_4->SetBinError(30,1.884549);
   houtFV_stack_4->SetBinError(31,0.408234);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.306298);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.727587);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.938927);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.525259);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.500205);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.029395);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.664051);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.876518);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.641437);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.645056);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.240307);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.359658);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.322934);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.009588);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.358627);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.827286);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.24056);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.032075);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.720653);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.606878);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.480269);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.932634);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.946578);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.606147);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.629023);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,5.256976);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,4.955007);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,3.725481);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.900795);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.8060959);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5858915);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.612413);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7590509);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5736735);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6752829);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6826108);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6987613);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5367773);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7586223);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.653631);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6770924);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6188168);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.610915);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7597592);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7730881);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8140357);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4251748);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7905808);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7531914);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5766129);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.551278);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5542502);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3887446);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6289415);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.098823);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.9579602);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.8494829);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.6857112);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.4220548);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.3839826);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4564602);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7087395);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3075557);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.207702);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8152095);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7379338);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6773207);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6821816);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7965814);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8606973);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1763266);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7157724);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4324363);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7136374);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7136827);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5546124);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.7239276);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2501771);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3923202);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4158934);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5040286);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7530979);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.7508221);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.7722777);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.654866);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.8444167);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.5533333);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.5230617);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.1582871);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1899428);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2405189);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1004918);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06167349);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3239715);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2266541);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2158146);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2621316);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3784797);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2715756);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05679479);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2241285);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1182544);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2238495);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2869129);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2142449);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.25857);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06985699);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1029924);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1920585);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1482678);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2875038);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.324077);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2252963);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2472514);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.2466915);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.1964061);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1694593);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.05947057);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1303516);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.6814114);
   hNCpi0inFVres_stack_7->SetBinContent(1,32.62654);
   hNCpi0inFVres_stack_7->SetBinContent(2,60.30708);
   hNCpi0inFVres_stack_7->SetBinContent(3,62.88583);
   hNCpi0inFVres_stack_7->SetBinContent(4,55.7323);
   hNCpi0inFVres_stack_7->SetBinContent(5,65.7859);
   hNCpi0inFVres_stack_7->SetBinContent(6,68.39015);
   hNCpi0inFVres_stack_7->SetBinContent(7,63.78488);
   hNCpi0inFVres_stack_7->SetBinContent(8,64.17495);
   hNCpi0inFVres_stack_7->SetBinContent(9,71.24046);
   hNCpi0inFVres_stack_7->SetBinContent(10,66.39591);
   hNCpi0inFVres_stack_7->SetBinContent(11,67.19479);
   hNCpi0inFVres_stack_7->SetBinContent(12,68.60116);
   hNCpi0inFVres_stack_7->SetBinContent(13,74.0195);
   hNCpi0inFVres_stack_7->SetBinContent(14,78.10288);
   hNCpi0inFVres_stack_7->SetBinContent(15,72.71606);
   hNCpi0inFVres_stack_7->SetBinContent(16,70.48033);
   hNCpi0inFVres_stack_7->SetBinContent(17,78.98431);
   hNCpi0inFVres_stack_7->SetBinContent(18,70.11673);
   hNCpi0inFVres_stack_7->SetBinContent(19,69.48315);
   hNCpi0inFVres_stack_7->SetBinContent(20,68.13938);
   hNCpi0inFVres_stack_7->SetBinContent(21,58.36726);
   hNCpi0inFVres_stack_7->SetBinContent(22,58.07729);
   hNCpi0inFVres_stack_7->SetBinContent(23,67.64958);
   hNCpi0inFVres_stack_7->SetBinContent(24,70.0312);
   hNCpi0inFVres_stack_7->SetBinContent(25,66.43678);
   hNCpi0inFVres_stack_7->SetBinContent(26,71.01427);
   hNCpi0inFVres_stack_7->SetBinContent(27,67.43999);
   hNCpi0inFVres_stack_7->SetBinContent(28,73.36955);
   hNCpi0inFVres_stack_7->SetBinContent(29,60.65444);
   hNCpi0inFVres_stack_7->SetBinContent(30,28.83325);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.2244457);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3672356);
   hNCpi0inFVres_stack_7->SetBinError(1,1.886462);
   hNCpi0inFVres_stack_7->SetBinError(2,2.483346);
   hNCpi0inFVres_stack_7->SetBinError(3,2.709609);
   hNCpi0inFVres_stack_7->SetBinError(4,2.496119);
   hNCpi0inFVres_stack_7->SetBinError(5,2.651371);
   hNCpi0inFVres_stack_7->SetBinError(6,2.675383);
   hNCpi0inFVres_stack_7->SetBinError(7,2.509809);
   hNCpi0inFVres_stack_7->SetBinError(8,2.550793);
   hNCpi0inFVres_stack_7->SetBinError(9,2.826726);
   hNCpi0inFVres_stack_7->SetBinError(10,2.56305);
   hNCpi0inFVres_stack_7->SetBinError(11,2.698058);
   hNCpi0inFVres_stack_7->SetBinError(12,2.72509);
   hNCpi0inFVres_stack_7->SetBinError(13,2.933989);
   hNCpi0inFVres_stack_7->SetBinError(14,2.927027);
   hNCpi0inFVres_stack_7->SetBinError(15,2.841577);
   hNCpi0inFVres_stack_7->SetBinError(16,2.698413);
   hNCpi0inFVres_stack_7->SetBinError(17,3.087006);
   hNCpi0inFVres_stack_7->SetBinError(18,2.720454);
   hNCpi0inFVres_stack_7->SetBinError(19,2.672903);
   hNCpi0inFVres_stack_7->SetBinError(20,2.77234);
   hNCpi0inFVres_stack_7->SetBinError(21,2.431532);
   hNCpi0inFVres_stack_7->SetBinError(22,2.39763);
   hNCpi0inFVres_stack_7->SetBinError(23,2.707543);
   hNCpi0inFVres_stack_7->SetBinError(24,2.89629);
   hNCpi0inFVres_stack_7->SetBinError(25,2.551667);
   hNCpi0inFVres_stack_7->SetBinError(26,2.653785);
   hNCpi0inFVres_stack_7->SetBinError(27,2.614746);
   hNCpi0inFVres_stack_7->SetBinError(28,2.720584);
   hNCpi0inFVres_stack_7->SetBinError(29,2.519548);
   hNCpi0inFVres_stack_7->SetBinError(30,1.867016);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07887856);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.827375);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.05437);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.2273);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.23725);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.86824);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.48263);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.36188);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.48705);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.17808);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.37691);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.15654);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.27438);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.67048);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.90316);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.14759);
   hNCpi0inFVdis_stack_8->SetBinContent(16,15.22866);
   hNCpi0inFVdis_stack_8->SetBinContent(17,17.14814);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.55112);
   hNCpi0inFVdis_stack_8->SetBinContent(19,13.73489);
   hNCpi0inFVdis_stack_8->SetBinContent(20,13.29247);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.38577);
   hNCpi0inFVdis_stack_8->SetBinContent(22,14.82247);
   hNCpi0inFVdis_stack_8->SetBinContent(23,13.16223);
   hNCpi0inFVdis_stack_8->SetBinContent(24,13.71614);
   hNCpi0inFVdis_stack_8->SetBinContent(25,14.88688);
   hNCpi0inFVdis_stack_8->SetBinContent(26,15.7689);
   hNCpi0inFVdis_stack_8->SetBinContent(27,14.15889);
   hNCpi0inFVdis_stack_8->SetBinContent(28,14.59134);
   hNCpi0inFVdis_stack_8->SetBinContent(29,9.073725);
   hNCpi0inFVdis_stack_8->SetBinContent(30,5.524944);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.07994311);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9353489);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.247626);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.330982);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.188349);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.24049);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.177322);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.268223);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.527059);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.292084);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.254333);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.183178);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.15566);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.234776);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.295316);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.318432);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.327586);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.383196);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.41888);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.23272);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.21366);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.191553);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.509638);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.089875);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.40374);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.368583);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.370362);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.249849);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.344286);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.8976198);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.7740127);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04843715);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3422205);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.0365362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.08918934);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.07429475);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.183711);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02583506);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03996217);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.06447875);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,15.51419);
   hCCpi0inFV_stack_10->SetBinContent(2,22.70611);
   hCCpi0inFV_stack_10->SetBinContent(3,24.11802);
   hCCpi0inFV_stack_10->SetBinContent(4,26.6031);
   hCCpi0inFV_stack_10->SetBinContent(5,30.51792);
   hCCpi0inFV_stack_10->SetBinContent(6,26.00012);
   hCCpi0inFV_stack_10->SetBinContent(7,25.12575);
   hCCpi0inFV_stack_10->SetBinContent(8,28.26074);
   hCCpi0inFV_stack_10->SetBinContent(9,26.8647);
   hCCpi0inFV_stack_10->SetBinContent(10,29.75892);
   hCCpi0inFV_stack_10->SetBinContent(11,26.97925);
   hCCpi0inFV_stack_10->SetBinContent(12,25.75826);
   hCCpi0inFV_stack_10->SetBinContent(13,30.1151);
   hCCpi0inFV_stack_10->SetBinContent(14,29.21781);
   hCCpi0inFV_stack_10->SetBinContent(15,32.05441);
   hCCpi0inFV_stack_10->SetBinContent(16,25.20401);
   hCCpi0inFV_stack_10->SetBinContent(17,23.21074);
   hCCpi0inFV_stack_10->SetBinContent(18,25.12848);
   hCCpi0inFV_stack_10->SetBinContent(19,23.6781);
   hCCpi0inFV_stack_10->SetBinContent(20,26.30265);
   hCCpi0inFV_stack_10->SetBinContent(21,27.19884);
   hCCpi0inFV_stack_10->SetBinContent(22,27.55852);
   hCCpi0inFV_stack_10->SetBinContent(23,23.91346);
   hCCpi0inFV_stack_10->SetBinContent(24,31.04306);
   hCCpi0inFV_stack_10->SetBinContent(25,25.78038);
   hCCpi0inFV_stack_10->SetBinContent(26,31.01363);
   hCCpi0inFV_stack_10->SetBinContent(27,25.33016);
   hCCpi0inFV_stack_10->SetBinContent(28,24.3166);
   hCCpi0inFV_stack_10->SetBinContent(29,19.49987);
   hCCpi0inFV_stack_10->SetBinContent(30,16.16813);
   hCCpi0inFV_stack_10->SetBinContent(31,0.9801958);
   hCCpi0inFV_stack_10->SetBinError(1,1.995204);
   hCCpi0inFV_stack_10->SetBinError(2,2.344947);
   hCCpi0inFV_stack_10->SetBinError(3,2.489561);
   hCCpi0inFV_stack_10->SetBinError(4,2.528692);
   hCCpi0inFV_stack_10->SetBinError(5,2.760255);
   hCCpi0inFV_stack_10->SetBinError(6,2.516727);
   hCCpi0inFV_stack_10->SetBinError(7,2.475299);
   hCCpi0inFV_stack_10->SetBinError(8,2.69731);
   hCCpi0inFV_stack_10->SetBinError(9,2.610253);
   hCCpi0inFV_stack_10->SetBinError(10,2.752345);
   hCCpi0inFV_stack_10->SetBinError(11,2.659205);
   hCCpi0inFV_stack_10->SetBinError(12,2.561481);
   hCCpi0inFV_stack_10->SetBinError(13,2.752572);
   hCCpi0inFV_stack_10->SetBinError(14,2.672425);
   hCCpi0inFV_stack_10->SetBinError(15,2.778206);
   hCCpi0inFV_stack_10->SetBinError(16,2.444759);
   hCCpi0inFV_stack_10->SetBinError(17,2.456935);
   hCCpi0inFV_stack_10->SetBinError(18,2.475551);
   hCCpi0inFV_stack_10->SetBinError(19,2.482236);
   hCCpi0inFV_stack_10->SetBinError(20,2.496985);
   hCCpi0inFV_stack_10->SetBinError(21,2.614736);
   hCCpi0inFV_stack_10->SetBinError(22,2.593334);
   hCCpi0inFV_stack_10->SetBinError(23,2.52082);
   hCCpi0inFV_stack_10->SetBinError(24,2.822693);
   hCCpi0inFV_stack_10->SetBinError(25,2.546412);
   hCCpi0inFV_stack_10->SetBinError(26,2.837597);
   hCCpi0inFV_stack_10->SetBinError(27,2.488272);
   hCCpi0inFV_stack_10->SetBinError(28,2.509738);
   hCCpi0inFV_stack_10->SetBinError(29,2.221216);
   hCCpi0inFV_stack_10->SetBinError(30,2.058072);
   hCCpi0inFV_stack_10->SetBinError(31,0.4383608);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,7.522809);
   hNCinFV_stack_11->SetBinContent(2,13.4083);
   hNCinFV_stack_11->SetBinContent(3,12.86831);
   hNCinFV_stack_11->SetBinContent(4,12.66226);
   hNCinFV_stack_11->SetBinContent(5,16.99278);
   hNCinFV_stack_11->SetBinContent(6,13.73613);
   hNCinFV_stack_11->SetBinContent(7,16.88376);
   hNCinFV_stack_11->SetBinContent(8,14.10277);
   hNCinFV_stack_11->SetBinContent(9,14.12361);
   hNCinFV_stack_11->SetBinContent(10,16.0619);
   hNCinFV_stack_11->SetBinContent(11,15.80058);
   hNCinFV_stack_11->SetBinContent(12,14.89723);
   hNCinFV_stack_11->SetBinContent(13,13.96449);
   hNCinFV_stack_11->SetBinContent(14,19.09704);
   hNCinFV_stack_11->SetBinContent(15,13.17879);
   hNCinFV_stack_11->SetBinContent(16,16.55671);
   hNCinFV_stack_11->SetBinContent(17,17.90024);
   hNCinFV_stack_11->SetBinContent(18,14.61136);
   hNCinFV_stack_11->SetBinContent(19,17.64502);
   hNCinFV_stack_11->SetBinContent(20,18.89007);
   hNCinFV_stack_11->SetBinContent(21,17.03857);
   hNCinFV_stack_11->SetBinContent(22,15.5734);
   hNCinFV_stack_11->SetBinContent(23,13.53596);
   hNCinFV_stack_11->SetBinContent(24,16.86326);
   hNCinFV_stack_11->SetBinContent(25,17.91478);
   hNCinFV_stack_11->SetBinContent(26,13.8607);
   hNCinFV_stack_11->SetBinContent(27,16.95757);
   hNCinFV_stack_11->SetBinContent(28,14.68356);
   hNCinFV_stack_11->SetBinContent(29,11.89694);
   hNCinFV_stack_11->SetBinContent(30,5.407004);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,1.538232);
   hNCinFV_stack_11->SetBinError(2,1.913573);
   hNCinFV_stack_11->SetBinError(3,1.905089);
   hNCinFV_stack_11->SetBinError(4,2.011906);
   hNCinFV_stack_11->SetBinError(5,2.421135);
   hNCinFV_stack_11->SetBinError(6,1.985549);
   hNCinFV_stack_11->SetBinError(7,2.248014);
   hNCinFV_stack_11->SetBinError(8,1.958814);
   hNCinFV_stack_11->SetBinError(9,1.852874);
   hNCinFV_stack_11->SetBinError(10,2.25693);
   hNCinFV_stack_11->SetBinError(11,2.365171);
   hNCinFV_stack_11->SetBinError(12,2.158827);
   hNCinFV_stack_11->SetBinError(13,2.053627);
   hNCinFV_stack_11->SetBinError(14,2.43317);
   hNCinFV_stack_11->SetBinError(15,1.868876);
   hNCinFV_stack_11->SetBinError(16,2.077511);
   hNCinFV_stack_11->SetBinError(17,2.275527);
   hNCinFV_stack_11->SetBinError(18,1.981646);
   hNCinFV_stack_11->SetBinError(19,2.509125);
   hNCinFV_stack_11->SetBinError(20,2.403486);
   hNCinFV_stack_11->SetBinError(21,2.034752);
   hNCinFV_stack_11->SetBinError(22,2.146695);
   hNCinFV_stack_11->SetBinError(23,1.897294);
   hNCinFV_stack_11->SetBinError(24,2.20239);
   hNCinFV_stack_11->SetBinError(25,2.378964);
   hNCinFV_stack_11->SetBinError(26,2.030329);
   hNCinFV_stack_11->SetBinError(27,2.348826);
   hNCinFV_stack_11->SetBinError(28,2.127289);
   hNCinFV_stack_11->SetBinError(29,1.764844);
   hNCinFV_stack_11->SetBinError(30,1.085127);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,10.91569);
   hnumuCCinFV_stack_12->SetBinContent(2,16.63532);
   hnumuCCinFV_stack_12->SetBinContent(3,18.13314);
   hnumuCCinFV_stack_12->SetBinContent(4,20.40132);
   hnumuCCinFV_stack_12->SetBinContent(5,12.97126);
   hnumuCCinFV_stack_12->SetBinContent(6,14.95899);
   hnumuCCinFV_stack_12->SetBinContent(7,14.08054);
   hnumuCCinFV_stack_12->SetBinContent(8,20.37715);
   hnumuCCinFV_stack_12->SetBinContent(9,14.15174);
   hnumuCCinFV_stack_12->SetBinContent(10,14.18184);
   hnumuCCinFV_stack_12->SetBinContent(11,14.15496);
   hnumuCCinFV_stack_12->SetBinContent(12,11.04924);
   hnumuCCinFV_stack_12->SetBinContent(13,17.70538);
   hnumuCCinFV_stack_12->SetBinContent(14,16.37409);
   hnumuCCinFV_stack_12->SetBinContent(15,17.31138);
   hnumuCCinFV_stack_12->SetBinContent(16,12.53898);
   hnumuCCinFV_stack_12->SetBinContent(17,15.89369);
   hnumuCCinFV_stack_12->SetBinContent(18,16.1081);
   hnumuCCinFV_stack_12->SetBinContent(19,12.88276);
   hnumuCCinFV_stack_12->SetBinContent(20,16.15079);
   hnumuCCinFV_stack_12->SetBinContent(21,18.47076);
   hnumuCCinFV_stack_12->SetBinContent(22,15.81812);
   hnumuCCinFV_stack_12->SetBinContent(23,14.59047);
   hnumuCCinFV_stack_12->SetBinContent(24,14.4643);
   hnumuCCinFV_stack_12->SetBinContent(25,13.49343);
   hnumuCCinFV_stack_12->SetBinContent(26,12.34262);
   hnumuCCinFV_stack_12->SetBinContent(27,13.66819);
   hnumuCCinFV_stack_12->SetBinContent(28,9.593508);
   hnumuCCinFV_stack_12->SetBinContent(29,11.1576);
   hnumuCCinFV_stack_12->SetBinContent(30,8.828473);
   hnumuCCinFV_stack_12->SetBinError(1,2.122495);
   hnumuCCinFV_stack_12->SetBinError(2,2.403766);
   hnumuCCinFV_stack_12->SetBinError(3,2.315101);
   hnumuCCinFV_stack_12->SetBinError(4,2.467025);
   hnumuCCinFV_stack_12->SetBinError(5,1.828305);
   hnumuCCinFV_stack_12->SetBinError(6,2.273821);
   hnumuCCinFV_stack_12->SetBinError(7,2.400167);
   hnumuCCinFV_stack_12->SetBinError(8,2.746196);
   hnumuCCinFV_stack_12->SetBinError(9,2.341274);
   hnumuCCinFV_stack_12->SetBinError(10,2.230244);
   hnumuCCinFV_stack_12->SetBinError(11,1.981725);
   hnumuCCinFV_stack_12->SetBinError(12,2.047388);
   hnumuCCinFV_stack_12->SetBinError(13,2.330893);
   hnumuCCinFV_stack_12->SetBinError(14,3.123715);
   hnumuCCinFV_stack_12->SetBinError(15,2.28424);
   hnumuCCinFV_stack_12->SetBinError(16,1.900191);
   hnumuCCinFV_stack_12->SetBinError(17,2.553314);
   hnumuCCinFV_stack_12->SetBinError(18,2.25703);
   hnumuCCinFV_stack_12->SetBinError(19,2.038715);
   hnumuCCinFV_stack_12->SetBinError(20,2.797183);
   hnumuCCinFV_stack_12->SetBinError(21,2.209372);
   hnumuCCinFV_stack_12->SetBinError(22,2.114814);
   hnumuCCinFV_stack_12->SetBinError(23,1.92673);
   hnumuCCinFV_stack_12->SetBinError(24,1.998053);
   hnumuCCinFV_stack_12->SetBinError(25,2.09862);
   hnumuCCinFV_stack_12->SetBinError(26,1.964127);
   hnumuCCinFV_stack_12->SetBinError(27,2.284537);
   hnumuCCinFV_stack_12->SetBinError(28,1.527964);
   hnumuCCinFV_stack_12->SetBinError(29,1.984888);
   hnumuCCinFV_stack_12->SetBinError(30,1.801117);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.305493);
   hnueCCinFV_stack_13->SetBinContent(2,0.9315238);
   hnueCCinFV_stack_13->SetBinContent(3,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(4,1.9952);
   hnueCCinFV_stack_13->SetBinContent(5,2.751163);
   hnueCCinFV_stack_13->SetBinContent(6,0.977303);
   hnueCCinFV_stack_13->SetBinContent(7,1.862217);
   hnueCCinFV_stack_13->SetBinContent(8,1.975547);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,0.8640677);
   hnueCCinFV_stack_13->SetBinContent(11,1.085857);
   hnueCCinFV_stack_13->SetBinContent(12,1.338508);
   hnueCCinFV_stack_13->SetBinContent(13,1.869692);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.86362);
   hnueCCinFV_stack_13->SetBinContent(16,1.004542);
   hnueCCinFV_stack_13->SetBinContent(17,0.8975527);
   hnueCCinFV_stack_13->SetBinContent(18,1.602102);
   hnueCCinFV_stack_13->SetBinContent(19,1.707721);
   hnueCCinFV_stack_13->SetBinContent(20,1.418046);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.576748);
   hnueCCinFV_stack_13->SetBinContent(23,0.8410603);
   hnueCCinFV_stack_13->SetBinContent(24,1.315597);
   hnueCCinFV_stack_13->SetBinContent(25,1.962252);
   hnueCCinFV_stack_13->SetBinContent(26,1.603958);
   hnueCCinFV_stack_13->SetBinContent(27,1.84257);
   hnueCCinFV_stack_13->SetBinContent(28,0.3099382);
   hnueCCinFV_stack_13->SetBinContent(29,1.466653);
   hnueCCinFV_stack_13->SetBinContent(30,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.6094479);
   hnueCCinFV_stack_13->SetBinError(2,0.5575178);
   hnueCCinFV_stack_13->SetBinError(3,0.2758068);
   hnueCCinFV_stack_13->SetBinError(4,0.7872795);
   hnueCCinFV_stack_13->SetBinError(5,1.839099);
   hnueCCinFV_stack_13->SetBinError(6,0.5020508);
   hnueCCinFV_stack_13->SetBinError(7,0.7596284);
   hnueCCinFV_stack_13->SetBinError(8,0.7270421);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.5230935);
   hnueCCinFV_stack_13->SetBinError(11,0.5487395);
   hnueCCinFV_stack_13->SetBinError(12,0.6800867);
   hnueCCinFV_stack_13->SetBinError(13,0.8652832);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6915641);
   hnueCCinFV_stack_13->SetBinError(16,0.4496359);
   hnueCCinFV_stack_13->SetBinError(17,0.558584);
   hnueCCinFV_stack_13->SetBinError(18,0.9585051);
   hnueCCinFV_stack_13->SetBinError(19,0.8779705);
   hnueCCinFV_stack_13->SetBinError(20,0.6357467);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.7621998);
   hnueCCinFV_stack_13->SetBinError(23,0.496926);
   hnueCCinFV_stack_13->SetBinError(24,0.6063249);
   hnueCCinFV_stack_13->SetBinError(25,0.8301541);
   hnueCCinFV_stack_13->SetBinError(26,0.6294072);
   hnueCCinFV_stack_13->SetBinError(27,0.7546551);
   hnueCCinFV_stack_13->SetBinError(28,0.3099382);
   hnueCCinFV_stack_13->SetBinError(29,0.6110264);
   hnueCCinFV_stack_13->SetBinError(30,0.1950249);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__5->SetBinContent(0,1.715674);
   hmcerror__5->SetBinContent(1,119.0399);
   hmcerror__5->SetBinContent(2,175.4263);
   hmcerror__5->SetBinContent(3,174.9227);
   hmcerror__5->SetBinContent(4,168.6003);
   hmcerror__5->SetBinContent(5,187.2625);
   hmcerror__5->SetBinContent(6,175.1452);
   hmcerror__5->SetBinContent(7,174.4141);
   hmcerror__5->SetBinContent(8,186.6407);
   hmcerror__5->SetBinContent(9,173.4415);
   hmcerror__5->SetBinContent(10,174.6639);
   hmcerror__5->SetBinContent(11,183.0957);
   hmcerror__5->SetBinContent(12,164.9005);
   hmcerror__5->SetBinContent(13,179.7072);
   hmcerror__5->SetBinContent(14,205.0181);
   hmcerror__5->SetBinContent(15,188.3358);
   hmcerror__5->SetBinContent(16,175.9599);
   hmcerror__5->SetBinContent(17,186.4394);
   hmcerror__5->SetBinContent(18,179.506);
   hmcerror__5->SetBinContent(19,178.6494);
   hmcerror__5->SetBinContent(20,182.0814);
   hmcerror__5->SetBinContent(21,183.7158);
   hmcerror__5->SetBinContent(22,174.2072);
   hmcerror__5->SetBinContent(23,164.9873);
   hmcerror__5->SetBinContent(24,184.3307);
   hmcerror__5->SetBinContent(25,173.6051);
   hmcerror__5->SetBinContent(26,183.6184);
   hmcerror__5->SetBinContent(27,177.867);
   hmcerror__5->SetBinContent(28,172.9683);
   hmcerror__5->SetBinContent(29,145.3536);
   hmcerror__5->SetBinContent(30,86.99454);
   hmcerror__5->SetBinContent(31,2.338699);
   hmcerror__5->SetBinError(0,0.6691531);
   hmcerror__5->SetBinError(1,33.55825);
   hmcerror__5->SetBinError(2,48.0756);
   hmcerror__5->SetBinError(3,55.50724);
   hmcerror__5->SetBinError(4,43.78481);
   hmcerror__5->SetBinError(5,51.8543);
   hmcerror__5->SetBinError(6,53.33828);
   hmcerror__5->SetBinError(7,49.55607);
   hmcerror__5->SetBinError(8,50.76995);
   hmcerror__5->SetBinError(9,52.43951);
   hmcerror__5->SetBinError(10,48.39488);
   hmcerror__5->SetBinError(11,50.25463);
   hmcerror__5->SetBinError(12,47.30597);
   hmcerror__5->SetBinError(13,49.7499);
   hmcerror__5->SetBinError(14,56.36342);
   hmcerror__5->SetBinError(15,59.41381);
   hmcerror__5->SetBinError(16,52.50843);
   hmcerror__5->SetBinError(17,52.64523);
   hmcerror__5->SetBinError(18,50.43533);
   hmcerror__5->SetBinError(19,48.57585);
   hmcerror__5->SetBinError(20,50.77383);
   hmcerror__5->SetBinError(21,51.25008);
   hmcerror__5->SetBinError(22,57.01979);
   hmcerror__5->SetBinError(23,47.08111);
   hmcerror__5->SetBinError(24,48.93402);
   hmcerror__5->SetBinError(25,53.87665);
   hmcerror__5->SetBinError(26,53.92297);
   hmcerror__5->SetBinError(27,48.83932);
   hmcerror__5->SetBinError(28,50.26087);
   hmcerror__5->SetBinError(29,46.59562);
   hmcerror__5->SetBinError(30,28.03239);
   hmcerror__5->SetBinError(31,2.347554);
   hmcerror__5->SetBinError(32,0.3895343);
   hmcerror__5->SetBinError(33,0.3895343);
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
   
   Double_t _fx3005[32] = {
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
   Double_t _fy3005[32] = {
   118,
   167,
   174,
   154,
   171,
   191,
   169,
   180,
   203,
   157,
   179,
   163,
   166,
   163,
   180,
   171,
   183,
   190,
   168,
   164,
   163,
   174,
   186,
   132,
   175,
   173,
   165,
   162,
   146,
   85,
   2,
   0};
   Double_t _felx3005[32] = {
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
   Double_t _fely3005[32] = {
   10.86278,
   12.92285,
   13.19091,
   12.40967,
   13.0767,
   13.82027,
   13,
   13.41641,
   14.24781,
   12.52996,
   13.37909,
   12.76715,
   12.8841,
   12.76715,
   13.41641,
   13.0767,
   13.52775,
   13.78405,
   12.96148,
   12.80625,
   12.76715,
   13.19091,
   13.63818,
   11.48913,
   13.22876,
   13.15295,
   12.84523,
   12.72792,
   12.08305,
   9.3428,
   2,
   0};
   Double_t _fehx3005[32] = {
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
   Double_t _fehy3005[32] = {
   10.86278,
   12.92285,
   13.19091,
   12.40967,
   13.0767,
   13.82027,
   13,
   13.41641,
   14.24781,
   12.52996,
   13.37909,
   12.76715,
   12.8841,
   12.76715,
   13.41641,
   13.0767,
   13.52775,
   13.78405,
   12.96148,
   12.80625,
   12.76715,
   13.19091,
   13.63818,
   11.48913,
   13.22876,
   13.15295,
   12.84523,
   12.72792,
   12.08305,
   9.1411,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1210);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(238.9726);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.7/32","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 370.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  406.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 444.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[32] = {
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
   Double_t _fy3006[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[32] = {
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
   Double_t _fely3006[32] = {
   0.2819075,
   0.2740502,
   0.3173244,
   0.2596959,
   0.2769071,
   0.3045375,
   0.2841289,
   0.2720197,
   0.302347,
   0.2770742,
   0.2744719,
   0.2868758,
   0.2768387,
   0.2749193,
   0.3154674,
   0.2984114,
   0.2823718,
   0.2809675,
   0.2719061,
   0.2788524,
   0.2789639,
   0.3273102,
   0.285362,
   0.2654687,
   0.3103403,
   0.2936687,
   0.2745834,
   0.2905785,
   0.3205673,
   0.3222316,
   1.003786,
   0};
   Double_t _fehx3006[32] = {
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
   Double_t _fehy3006[32] = {
   0.2819075,
   0.2740502,
   0.3173244,
   0.2596959,
   0.2769071,
   0.3045375,
   0.2841289,
   0.2720197,
   0.302347,
   0.2770742,
   0.2744719,
   0.2868758,
   0.2768387,
   0.2749193,
   0.3154674,
   0.2984114,
   0.2823718,
   0.2809675,
   0.2719061,
   0.2788524,
   0.2789639,
   0.3273102,
   0.285362,
   0.2654687,
   0.3103403,
   0.2936687,
   0.2745834,
   0.2905785,
   0.3205673,
   0.3222316,
   1.003786,
   0};
   grae = new TGraphAsymmErrors(32,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1210);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3007[32] = {
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
   Double_t _fy3007[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[32] = {
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
   Double_t _fely3007[32] = {
   0.2432522,
   0.2496233,
   0.2468541,
   0.2407456,
   0.24561,
   0.2656373,
   0.2631163,
   0.2421358,
   0.2858208,
   0.2641968,
   0.2411492,
   0.2718615,
   0.2604901,
   0.255429,
   0.2686725,
   0.276069,
   0.2624878,
   0.2660626,
   0.25317,
   0.2565452,
   0.239662,
   0.249293,
   0.2699939,
   0.2423705,
   0.2796348,
   0.2627067,
   0.2622385,
   0.2721152,
   0.2960713,
   0.2860693,
   0.5046806,
   0};
   Double_t _fehx3007[32] = {
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
   Double_t _fehy3007[32] = {
   0.2432522,
   0.2496233,
   0.2468541,
   0.2407456,
   0.24561,
   0.2656373,
   0.2631163,
   0.2421358,
   0.2858208,
   0.2641968,
   0.2411492,
   0.2718615,
   0.2604901,
   0.255429,
   0.2686725,
   0.276069,
   0.2624878,
   0.2660626,
   0.25317,
   0.2565452,
   0.239662,
   0.249293,
   0.2699939,
   0.2423705,
   0.2796348,
   0.2627067,
   0.2622385,
   0.2721152,
   0.2960713,
   0.2860693,
   0.5046806,
   0};
   grae = new TGraphAsymmErrors(32,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1210);
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
   
   Double_t _fx3008[32] = {
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
   Double_t _fy3008[32] = {
   0.991264,
   0.9519668,
   0.9947249,
   0.9134028,
   0.9131569,
   1.090524,
   0.9689586,
   0.9644199,
   1.170423,
   0.898869,
   0.9776307,
   0.9884746,
   0.9237251,
   0.7950518,
   0.9557397,
   0.9718126,
   0.9815524,
   1.058461,
   0.9403895,
   0.9006962,
   0.88724,
   0.9988106,
   1.12736,
   0.7161044,
   1.008035,
   0.9421715,
   0.9276596,
   0.9365878,
   1.004447,
   0.9770728,
   0.8551765,
   10};
   Double_t _felx3008[32] = {
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
   Double_t _fely3008[32] = {
   0.09125325,
   0.0736654,
   0.0754099,
   0.0736041,
   0.06983085,
   0.07890754,
   0.07453527,
   0.07188361,
   0.08214762,
   0.07173756,
   0.07307155,
   0.07742331,
   0.07169497,
   0.06227327,
   0.07123663,
   0.07431637,
   0.07255844,
   0.07678881,
   0.07255262,
   0.07033256,
   0.069494,
   0.07571964,
   0.08266202,
   0.06232889,
   0.07620029,
   0.07163197,
   0.07221821,
   0.07358529,
   0.08312864,
   0.1073952,
   0.8551765,
   0};
   Double_t _fehx3008[32] = {
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
   Double_t _fehy3008[32] = {
   0.09125325,
   0.0736654,
   0.0754099,
   0.0736041,
   0.06983085,
   0.07890754,
   0.07453527,
   0.07188361,
   0.08214762,
   0.07173756,
   0.07307155,
   0.07742331,
   0.07169497,
   0.06227327,
   0.07123663,
   0.07431637,
   0.07255844,
   0.07678881,
   0.07255262,
   0.07033256,
   0.069494,
   0.07571964,
   0.08266202,
   0.06232889,
   0.07620029,
   0.07163197,
   0.07221821,
   0.07358529,
   0.08312864,
   0.1050767,
   0.6495792,
   0};
   grae = new TGraphAsymmErrors(32,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1210);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  8 17:52:17 2022) by ROOT version 6.26/00
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
   pad1->Range(-342.3077,-14.22,1260.256,1572.433);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__1->SetBinContent(0,1372.017);
   hmc__1->SetBinContent(1,11.76991);
   hmc__1->SetBinContent(2,25.86537);
   hmc__1->SetBinContent(3,70.94731);
   hmc__1->SetBinContent(4,587.5264);
   hmc__1->SetBinContent(5,525.42);
   hmc__1->SetBinContent(6,570.6692);
   hmc__1->SetBinContent(7,694.4197);
   hmc__1->SetBinContent(8,670.3907);
   hmc__1->SetBinContent(9,624.074);
   hmc__1->SetBinContent(10,573.515);
   hmc__1->SetBinContent(11,510.4869);
   hmc__1->SetBinContent(12,441.8546);
   hmc__1->SetBinContent(13,363.1914);
   hmc__1->SetBinContent(14,327.0503);
   hmc__1->SetBinContent(15,260.2551);
   hmc__1->SetBinContent(16,204.3274);
   hmc__1->SetBinContent(17,173.4189);
   hmc__1->SetBinContent(18,150.803);
   hmc__1->SetBinContent(19,127.1512);
   hmc__1->SetBinContent(20,95.97739);
   hmc__1->SetBinContent(21,85.97684);
   hmc__1->SetBinContent(22,75.19016);
   hmc__1->SetBinContent(23,55.63673);
   hmc__1->SetBinContent(24,42.83564);
   hmc__1->SetBinContent(25,38.88735);
   hmc__1->SetBinContent(26,215.5632);
   hmc__1->SetBinError(0,19.74839);
   hmc__1->SetBinError(1,12.64669);
   hmc__1->SetBinError(2,15.41279);
   hmc__1->SetBinError(3,29.83954);
   hmc__1->SetBinError(4,155.6694);
   hmc__1->SetBinError(5,149.7024);
   hmc__1->SetBinError(6,148.5801);
   hmc__1->SetBinError(7,195.1566);
   hmc__1->SetBinError(8,173.5956);
   hmc__1->SetBinError(9,164.1788);
   hmc__1->SetBinError(10,154.4703);
   hmc__1->SetBinError(11,141.4699);
   hmc__1->SetBinError(12,118.0673);
   hmc__1->SetBinError(13,114.9014);
   hmc__1->SetBinError(14,87.12428);
   hmc__1->SetBinError(15,76.51169);
   hmc__1->SetBinError(16,62.99734);
   hmc__1->SetBinError(17,50.95868);
   hmc__1->SetBinError(18,46.32521);
   hmc__1->SetBinError(19,47.68543);
   hmc__1->SetBinError(20,34.44792);
   hmc__1->SetBinError(21,39.74351);
   hmc__1->SetBinError(22,30.58037);
   hmc__1->SetBinError(23,22.34001);
   hmc__1->SetBinError(24,20.05941);
   hmc__1->SetBinError(25,18.27636);
   hmc__1->SetBinError(26,64.05274);
   hmc__1->SetMinimum(-14.22);
   hmc__1->SetMaximum(1493.1);
   hmc__1->SetEntries(8803.771);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-150,1100);
   hs1_stack_1->SetMinimum(-1.348765e-08);
   hs1_stack_1->SetMaximum(729.1407);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,19.37657);
   hbadmatch_stack_1->SetBinContent(1,0.2136185);
   hbadmatch_stack_1->SetBinContent(3,0.4287933);
   hbadmatch_stack_1->SetBinContent(4,2.56516);
   hbadmatch_stack_1->SetBinContent(5,1.927156);
   hbadmatch_stack_1->SetBinContent(6,2.80882);
   hbadmatch_stack_1->SetBinContent(7,1.838405);
   hbadmatch_stack_1->SetBinContent(8,2.624255);
   hbadmatch_stack_1->SetBinContent(9,2.218544);
   hbadmatch_stack_1->SetBinContent(10,1.994109);
   hbadmatch_stack_1->SetBinContent(11,2.344287);
   hbadmatch_stack_1->SetBinContent(12,2.129122);
   hbadmatch_stack_1->SetBinContent(13,2.000729);
   hbadmatch_stack_1->SetBinContent(14,0.7319179);
   hbadmatch_stack_1->SetBinContent(15,0.5884556);
   hbadmatch_stack_1->SetBinContent(16,3.022952);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.8221304);
   hbadmatch_stack_1->SetBinContent(19,1.072095);
   hbadmatch_stack_1->SetBinContent(20,1.101082);
   hbadmatch_stack_1->SetBinContent(21,1.215558);
   hbadmatch_stack_1->SetBinContent(22,1.072095);
   hbadmatch_stack_1->SetBinContent(23,0.5901461);
   hbadmatch_stack_1->SetBinContent(24,0.5867651);
   hbadmatch_stack_1->SetBinContent(25,0.4011598);
   hbadmatch_stack_1->SetBinContent(26,1.564007);
   hbadmatch_stack_1->SetBinError(0,3.203062);
   hbadmatch_stack_1->SetBinError(1,0.2136185);
   hbadmatch_stack_1->SetBinError(3,0.3044378);
   hbadmatch_stack_1->SetBinError(4,0.8849396);
   hbadmatch_stack_1->SetBinError(5,0.7169459);
   hbadmatch_stack_1->SetBinError(6,0.8383567);
   hbadmatch_stack_1->SetBinError(7,0.7177904);
   hbadmatch_stack_1->SetBinError(8,0.855268);
   hbadmatch_stack_1->SetBinError(9,0.7298353);
   hbadmatch_stack_1->SetBinError(10,0.6314342);
   hbadmatch_stack_1->SetBinError(11,0.8101654);
   hbadmatch_stack_1->SetBinError(12,0.7478362);
   hbadmatch_stack_1->SetBinError(13,0.7343859);
   hbadmatch_stack_1->SetBinError(14,0.438694);
   hbadmatch_stack_1->SetBinError(15,0.3397478);
   hbadmatch_stack_1->SetBinError(16,0.941885);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.41235);
   hbadmatch_stack_1->SetBinError(19,0.5551335);
   hbadmatch_stack_1->SetBinError(20,0.5660546);
   hbadmatch_stack_1->SetBinError(21,0.6206425);
   hbadmatch_stack_1->SetBinError(22,0.5551335);
   hbadmatch_stack_1->SetBinError(23,0.340721);
   hbadmatch_stack_1->SetBinError(24,0.3387718);
   hbadmatch_stack_1->SetBinError(25,0.4011598);
   hbadmatch_stack_1->SetBinError(26,0.6058708);
   hbadmatch_stack_1->SetEntries(218);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,72.69329);
   hext_stack_2->SetBinContent(2,1.290409);
   hext_stack_2->SetBinContent(3,1.868591);
   hext_stack_2->SetBinContent(4,7.62277);
   hext_stack_2->SetBinContent(5,11.03273);
   hext_stack_2->SetBinContent(6,4.460999);
   hext_stack_2->SetBinContent(7,10.51085);
   hext_stack_2->SetBinContent(8,10.16768);
   hext_stack_2->SetBinContent(9,11.04431);
   hext_stack_2->SetBinContent(10,10.55992);
   hext_stack_2->SetBinContent(11,8.485039);
   hext_stack_2->SetBinContent(12,8.649442);
   hext_stack_2->SetBinContent(13,6.165187);
   hext_stack_2->SetBinContent(14,10.87273);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,2.345802);
   hext_stack_2->SetBinContent(17,2.27519);
   hext_stack_2->SetBinContent(18,1.697008);
   hext_stack_2->SetBinContent(19,4.263464);
   hext_stack_2->SetBinContent(20,3.412785);
   hext_stack_2->SetBinContent(21,3.62185);
   hext_stack_2->SetBinContent(22,0.9660115);
   hext_stack_2->SetBinContent(23,2.510206);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,1.697008);
   hext_stack_2->SetBinContent(26,16.18441);
   hext_stack_2->SetBinError(0,5.787156);
   hext_stack_2->SetBinError(2,0.788756);
   hext_stack_2->SetBinError(3,0.840497);
   hext_stack_2->SetBinError(4,1.696135);
   hext_stack_2->SetBinError(5,2.418935);
   hext_stack_2->SetBinError(6,1.372818);
   hext_stack_2->SetBinError(7,2.228252);
   hext_stack_2->SetBinError(8,2.264322);
   hext_stack_2->SetBinError(9,2.405238);
   hext_stack_2->SetBinError(10,2.386395);
   hext_stack_2->SetBinError(11,1.984261);
   hext_stack_2->SetBinError(12,2.014317);
   hext_stack_2->SetBinError(13,1.571905);
   hext_stack_2->SetBinError(14,2.422022);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,0.9989624);
   hext_stack_2->SetBinError(17,0.9336798);
   hext_stack_2->SetBinError(18,0.8873887);
   hext_stack_2->SetBinError(19,1.560171);
   hext_stack_2->SetBinError(20,1.14352);
   hext_stack_2->SetBinError(21,1.422134);
   hext_stack_2->SetBinError(22,0.7189592);
   hext_stack_2->SetBinError(23,1.057404);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.8873887);
   hext_stack_2->SetBinError(26,2.979483);
   hext_stack_2->SetEntries(493);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,5.926284);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.3981555);
   hdirt_stack_3->SetBinContent(5,0.5926407);
   hdirt_stack_3->SetBinContent(6,0.3734822);
   hdirt_stack_3->SetBinContent(7,1.052121);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,2.407774e-08);
   hdirt_stack_3->SetBinContent(10,0.6009047);
   hdirt_stack_3->SetBinContent(12,0.4042594);
   hdirt_stack_3->SetBinContent(13,0.7159333);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.3039675);
   hdirt_stack_3->SetBinContent(19,1.167841e-06);
   hdirt_stack_3->SetBinContent(20,0.5240016);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(0,1.495626);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(4,0.28293);
   hdirt_stack_3->SetBinError(5,0.4232224);
   hdirt_stack_3->SetBinError(6,0.2679781);
   hdirt_stack_3->SetBinError(7,0.4983258);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,2.407774e-08);
   hdirt_stack_3->SetBinError(10,0.4402797);
   hdirt_stack_3->SetBinError(12,0.2998663);
   hdirt_stack_3->SetBinError(13,0.4324742);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(18,0.2158361);
   hdirt_stack_3->SetBinError(19,1.167841e-06);
   hdirt_stack_3->SetBinError(20,0.3705819);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(50);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,29.5871);
   houtFV_stack_4->SetBinContent(1,0.1967154);
   houtFV_stack_4->SetBinContent(2,0.4236581);
   houtFV_stack_4->SetBinContent(3,1.752451);
   houtFV_stack_4->SetBinContent(4,6.978412);
   houtFV_stack_4->SetBinContent(5,7.536675);
   houtFV_stack_4->SetBinContent(6,6.597181);
   houtFV_stack_4->SetBinContent(7,5.667865);
   houtFV_stack_4->SetBinContent(8,5.019189);
   houtFV_stack_4->SetBinContent(9,5.241674);
   houtFV_stack_4->SetBinContent(10,5.841447);
   houtFV_stack_4->SetBinContent(11,3.214596);
   houtFV_stack_4->SetBinContent(12,2.247316);
   houtFV_stack_4->SetBinContent(13,2.127009);
   houtFV_stack_4->SetBinContent(14,1.5941);
   houtFV_stack_4->SetBinContent(15,1.727048);
   houtFV_stack_4->SetBinContent(16,1.176911);
   houtFV_stack_4->SetBinContent(17,1.050913);
   houtFV_stack_4->SetBinContent(18,1.663932);
   houtFV_stack_4->SetBinContent(19,1.018006);
   houtFV_stack_4->SetBinContent(20,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.5352025);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.9801958);
   houtFV_stack_4->SetBinError(0,2.852958);
   houtFV_stack_4->SetBinError(1,0.1967154);
   houtFV_stack_4->SetBinError(2,0.300333);
   houtFV_stack_4->SetBinError(3,0.7345848);
   houtFV_stack_4->SetBinError(4,1.321492);
   houtFV_stack_4->SetBinError(5,2.094065);
   houtFV_stack_4->SetBinError(6,1.325778);
   houtFV_stack_4->SetBinError(7,1.232493);
   houtFV_stack_4->SetBinError(8,1.043202);
   houtFV_stack_4->SetBinError(9,1.163537);
   houtFV_stack_4->SetBinError(10,1.243895);
   houtFV_stack_4->SetBinError(11,0.9611751);
   houtFV_stack_4->SetBinError(12,0.7337357);
   houtFV_stack_4->SetBinError(13,0.7342898);
   houtFV_stack_4->SetBinError(14,0.5642168);
   houtFV_stack_4->SetBinError(15,0.6879429);
   houtFV_stack_4->SetBinError(16,0.4804759);
   houtFV_stack_4->SetBinError(17,0.4743244);
   houtFV_stack_4->SetBinError(18,0.6518637);
   houtFV_stack_4->SetBinError(19,0.4563062);
   houtFV_stack_4->SetBinError(20,0.2781975);
   houtFV_stack_4->SetBinError(21,0.3921167);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.4383608);
   houtFV_stack_4->SetEntries(387);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(21);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.7943219);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4188362);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.2741946);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.277838);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(24);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,68.77311);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.222536);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.5015358);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.18397);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.49898);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.05898);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.678683);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.47018);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.114612);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.892908);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.754408);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.993371);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.466095);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.619718);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.919802);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.31862);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.85569);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.134026);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.398416);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8923038);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2789998);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.6412039);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.4736358);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.307068);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.613304);
   hNCpi0inFVres_stack_7->SetBinContent(26,1.40829);
   hNCpi0inFVres_stack_7->SetBinError(0,2.696142);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1404279);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1658436);
   hNCpi0inFVres_stack_7->SetBinError(4,1.261233);
   hNCpi0inFVres_stack_7->SetBinError(5,0.855367);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9226436);
   hNCpi0inFVres_stack_7->SetBinError(7,1.023094);
   hNCpi0inFVres_stack_7->SetBinError(8,1.069166);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9055767);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9053261);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9315301);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7727324);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7490752);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8187906);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6617617);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6131182);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4353691);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4591547);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5513391);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2667597);
   hNCpi0inFVres_stack_7->SetBinError(21,0.0882275);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2532885);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1634799);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2032767);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2517472);
   hNCpi0inFVres_stack_7->SetBinError(26,0.3536475);
   hNCpi0inFVres_stack_7->SetEntries(3364);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,35.65218);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.994218);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.479546);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.048092);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.513855);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.316386);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.221732);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.786613);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.153787);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.533106);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.071088);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.236328);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.111278);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.597788);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.330326);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.478372);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.387374);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.51989);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.04559);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.12929);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.07349);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3068998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.711454);
   hNCpi0inFVdis_stack_8->SetBinContent(26,4.349236);
   hNCpi0inFVdis_stack_8->SetBinError(0,1.926515);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.044677);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.731772);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.709356);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9015931);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8189091);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8670056);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7594812);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.572691);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7080291);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6145444);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6245435);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6423116);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6453348);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5179739);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3467942);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6309509);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3580226);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3390387);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3424653);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3401847);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.09253378);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3035023);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.6955711);
   hNCpi0inFVdis_stack_8->SetEntries(2305);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1443;
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
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,699.9307);
   hCCpi0inFV_stack_11->SetBinContent(1,4.526824);
   hCCpi0inFV_stack_11->SetBinContent(2,10.20989);
   hCCpi0inFV_stack_11->SetBinContent(3,34.30403);
   hCCpi0inFV_stack_11->SetBinContent(4,423.6562);
   hCCpi0inFV_stack_11->SetBinContent(5,391.0623);
   hCCpi0inFV_stack_11->SetBinContent(6,458.9978);
   hCCpi0inFV_stack_11->SetBinContent(7,548.9409);
   hCCpi0inFV_stack_11->SetBinContent(8,530.1544);
   hCCpi0inFV_stack_11->SetBinContent(9,493.5984);
   hCCpi0inFV_stack_11->SetBinContent(10,453.4872);
   hCCpi0inFV_stack_11->SetBinContent(11,398.4518);
   hCCpi0inFV_stack_11->SetBinContent(12,337.3674);
   hCCpi0inFV_stack_11->SetBinContent(13,276.3629);
   hCCpi0inFV_stack_11->SetBinContent(14,245.5344);
   hCCpi0inFV_stack_11->SetBinContent(15,193.2412);
   hCCpi0inFV_stack_11->SetBinContent(16,157.9386);
   hCCpi0inFV_stack_11->SetBinContent(17,132.776);
   hCCpi0inFV_stack_11->SetBinContent(18,116.3945);
   hCCpi0inFV_stack_11->SetBinContent(19,92.14633);
   hCCpi0inFV_stack_11->SetBinContent(20,70.12622);
   hCCpi0inFV_stack_11->SetBinContent(21,63.68679);
   hCCpi0inFV_stack_11->SetBinContent(22,53.37685);
   hCCpi0inFV_stack_11->SetBinContent(23,38.61043);
   hCCpi0inFV_stack_11->SetBinContent(24,32.73225);
   hCCpi0inFV_stack_11->SetBinContent(25,25.76255);
   hCCpi0inFV_stack_11->SetBinContent(26,147.3532);
   hCCpi0inFV_stack_11->SetBinError(0,13.25405);
   hCCpi0inFV_stack_11->SetBinError(1,1.085097);
   hCCpi0inFV_stack_11->SetBinError(2,1.593944);
   hCCpi0inFV_stack_11->SetBinError(3,2.907389);
   hCCpi0inFV_stack_11->SetBinError(4,10.41164);
   hCCpi0inFV_stack_11->SetBinError(5,9.889634);
   hCCpi0inFV_stack_11->SetBinError(6,10.85825);
   hCCpi0inFV_stack_11->SetBinError(7,11.77089);
   hCCpi0inFV_stack_11->SetBinError(8,11.52965);
   hCCpi0inFV_stack_11->SetBinError(9,11.1386);
   hCCpi0inFV_stack_11->SetBinError(10,10.77947);
   hCCpi0inFV_stack_11->SetBinError(11,9.964683);
   hCCpi0inFV_stack_11->SetBinError(12,9.19961);
   hCCpi0inFV_stack_11->SetBinError(13,8.30958);
   hCCpi0inFV_stack_11->SetBinError(14,7.964124);
   hCCpi0inFV_stack_11->SetBinError(15,6.95707);
   hCCpi0inFV_stack_11->SetBinError(16,6.299242);
   hCCpi0inFV_stack_11->SetBinError(17,5.788187);
   hCCpi0inFV_stack_11->SetBinError(18,5.477934);
   hCCpi0inFV_stack_11->SetBinError(19,4.830725);
   hCCpi0inFV_stack_11->SetBinError(20,4.257821);
   hCCpi0inFV_stack_11->SetBinError(21,3.997804);
   hCCpi0inFV_stack_11->SetBinError(22,3.755514);
   hCCpi0inFV_stack_11->SetBinError(23,3.145177);
   hCCpi0inFV_stack_11->SetBinError(24,2.869024);
   hCCpi0inFV_stack_11->SetBinError(25,2.623876);
   hCCpi0inFV_stack_11->SetBinError(26,6.148375);
   hCCpi0inFV_stack_11->SetEntries(27430);

   ci = 1444;
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
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,39.80843);
   hNCinFV_stack_12->SetBinContent(1,0.3401776);
   hNCinFV_stack_12->SetBinContent(2,0.3917402);
   hNCinFV_stack_12->SetBinContent(4,3.821039);
   hNCinFV_stack_12->SetBinContent(5,2.392469);
   hNCinFV_stack_12->SetBinContent(6,3.522889);
   hNCinFV_stack_12->SetBinContent(7,3.954358);
   hNCinFV_stack_12->SetBinContent(8,2.642437);
   hNCinFV_stack_12->SetBinContent(9,3.66128);
   hNCinFV_stack_12->SetBinContent(10,4.05471);
   hNCinFV_stack_12->SetBinContent(11,3.429299);
   hNCinFV_stack_12->SetBinContent(12,4.880219);
   hNCinFV_stack_12->SetBinContent(13,3.576142);
   hNCinFV_stack_12->SetBinContent(14,2.985996);
   hNCinFV_stack_12->SetBinContent(15,1.950857);
   hNCinFV_stack_12->SetBinContent(16,0.5884556);
   hNCinFV_stack_12->SetBinContent(17,1.270501);
   hNCinFV_stack_12->SetBinContent(18,1.662242);
   hNCinFV_stack_12->SetBinContent(19,1.462145);
   hNCinFV_stack_12->SetBinContent(20,1.073786);
   hNCinFV_stack_12->SetBinContent(21,1.217248);
   hNCinFV_stack_12->SetBinContent(22,0.3934307);
   hNCinFV_stack_12->SetBinContent(23,0.3401776);
   hNCinFV_stack_12->SetBinContent(24,0.1950248);
   hNCinFV_stack_12->SetBinContent(25,0.3934307);
   hNCinFV_stack_12->SetBinContent(26,2.587494);
   hNCinFV_stack_12->SetBinError(0,3.195009);
   hNCinFV_stack_12->SetBinError(1,0.3401776);
   hNCinFV_stack_12->SetBinError(2,0.2770047);
   hNCinFV_stack_12->SetBinError(4,0.9208385);
   hNCinFV_stack_12->SetBinError(5,0.7848912);
   hNCinFV_stack_12->SetBinError(6,0.9422777);
   hNCinFV_stack_12->SetBinError(7,0.9596843);
   hNCinFV_stack_12->SetBinError(8,0.7851269);
   hNCinFV_stack_12->SetBinError(9,0.9812871);
   hNCinFV_stack_12->SetBinError(10,1.01996);
   hNCinFV_stack_12->SetBinError(11,0.8781868);
   hNCinFV_stack_12->SetBinError(12,1.161657);
   hNCinFV_stack_12->SetBinError(13,0.921716);
   hNCinFV_stack_12->SetBinError(14,0.8564284);
   hNCinFV_stack_12->SetBinError(15,0.7609034);
   hNCinFV_stack_12->SetBinError(16,0.3397478);
   hNCinFV_stack_12->SetBinError(17,0.5895188);
   hNCinFV_stack_12->SetBinError(18,0.6513556);
   hNCinFV_stack_12->SetBinError(19,0.6198731);
   hNCinFV_stack_12->SetBinError(20,0.5557297);
   hNCinFV_stack_12->SetBinError(21,0.6211758);
   hNCinFV_stack_12->SetBinError(22,0.2781975);
   hNCinFV_stack_12->SetBinError(23,0.3401776);
   hNCinFV_stack_12->SetBinError(24,0.1950249);
   hNCinFV_stack_12->SetBinError(25,0.2781975);
   hNCinFV_stack_12->SetBinError(26,0.8087577);
   hNCinFV_stack_12->SetEntries(392);

   ci = 1445;
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
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,392.031);
   hnumuCCinFV_stack_13->SetBinContent(1,6.464675);
   hnumuCCinFV_stack_13->SetBinContent(2,13.01882);
   hnumuCCinFV_stack_13->SetBinContent(3,31.5071);
   hnumuCCinFV_stack_13->SetBinContent(4,115.7524);
   hnumuCCinFV_stack_13->SetBinContent(5,96.40705);
   hnumuCCinFV_stack_13->SetBinContent(6,79.84274);
   hnumuCCinFV_stack_13->SetBinContent(7,104.5103);
   hnumuCCinFV_stack_13->SetBinContent(8,102.5917);
   hnumuCCinFV_stack_13->SetBinContent(9,92.50787);
   hnumuCCinFV_stack_13->SetBinContent(10,81.83333);
   hnumuCCinFV_stack_13->SetBinContent(11,81.64097);
   hnumuCCinFV_stack_13->SetBinContent(12,75.4258);
   hnumuCCinFV_stack_13->SetBinContent(13,61.38723);
   hnumuCCinFV_stack_13->SetBinContent(14,54.94356);
   hnumuCCinFV_stack_13->SetBinContent(15,51.25204);
   hnumuCCinFV_stack_13->SetBinContent(16,31.45113);
   hnumuCCinFV_stack_13->SetBinContent(17,30.8767);
   hnumuCCinFV_stack_13->SetBinContent(18,24.25504);
   hnumuCCinFV_stack_13->SetBinContent(19,20.86646);
   hnumuCCinFV_stack_13->SetBinContent(20,16.59371);
   hnumuCCinFV_stack_13->SetBinContent(21,14.03541);
   hnumuCCinFV_stack_13->SetBinContent(22,16.34615);
   hnumuCCinFV_stack_13->SetBinContent(23,11.45019);
   hnumuCCinFV_stack_13->SetBinContent(24,8.188214);
   hnumuCCinFV_stack_13->SetBinContent(25,8.287915);
   hnumuCCinFV_stack_13->SetBinContent(26,39.37515);
   hnumuCCinFV_stack_13->SetBinError(0,11.71105);
   hnumuCCinFV_stack_13->SetBinError(1,2.320658);
   hnumuCCinFV_stack_13->SetBinError(2,2.3011);
   hnumuCCinFV_stack_13->SetBinError(3,3.647434);
   hnumuCCinFV_stack_13->SetBinError(4,5.878709);
   hnumuCCinFV_stack_13->SetBinError(5,5.304905);
   hnumuCCinFV_stack_13->SetBinError(6,5.015623);
   hnumuCCinFV_stack_13->SetBinError(7,6.297288);
   hnumuCCinFV_stack_13->SetBinError(8,5.704817);
   hnumuCCinFV_stack_13->SetBinError(9,5.120116);
   hnumuCCinFV_stack_13->SetBinError(10,4.826971);
   hnumuCCinFV_stack_13->SetBinError(11,4.982656);
   hnumuCCinFV_stack_13->SetBinError(12,4.58887);
   hnumuCCinFV_stack_13->SetBinError(13,5.675156);
   hnumuCCinFV_stack_13->SetBinError(14,3.935009);
   hnumuCCinFV_stack_13->SetBinError(15,4.042405);
   hnumuCCinFV_stack_13->SetBinError(16,2.779726);
   hnumuCCinFV_stack_13->SetBinError(17,2.784696);
   hnumuCCinFV_stack_13->SetBinError(18,2.687817);
   hnumuCCinFV_stack_13->SetBinError(19,2.379422);
   hnumuCCinFV_stack_13->SetBinError(20,2.068629);
   hnumuCCinFV_stack_13->SetBinError(21,1.856925);
   hnumuCCinFV_stack_13->SetBinError(22,1.993439);
   hnumuCCinFV_stack_13->SetBinError(23,2.028466);
   hnumuCCinFV_stack_13->SetBinError(24,1.415942);
   hnumuCCinFV_stack_13->SetBinError(25,1.426737);
   hnumuCCinFV_stack_13->SetBinError(26,3.197356);
   hnumuCCinFV_stack_13->SetEntries(6803);

   ci = 1446;
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
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,6.844131);
   hnueCCinFV_stack_14->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(4,1.051558);
   hnueCCinFV_stack_14->SetBinContent(5,1.26712);
   hnueCCinFV_stack_14->SetBinContent(6,0.9303237);
   hnueCCinFV_stack_14->SetBinContent(7,1.752451);
   hnueCCinFV_stack_14->SetBinContent(8,0.2384502);
   hnueCCinFV_stack_14->SetBinContent(9,1.465526);
   hnueCCinFV_stack_14->SetBinContent(10,1.463836);
   hnueCCinFV_stack_14->SetBinContent(11,0.7336084);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,1.123658);
   hnueCCinFV_stack_14->SetBinContent(14,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(15,1.215558);
   hnueCCinFV_stack_14->SetBinContent(16,0.7618654);
   hnueCCinFV_stack_14->SetBinContent(17,0.5901461);
   hnueCCinFV_stack_14->SetBinContent(18,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(19,0.536893);
   hnueCCinFV_stack_14->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(22,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(23,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,1.020533);
   hnueCCinFV_stack_14->SetBinContent(26,1.517089);
   hnueCCinFV_stack_14->SetBinError(0,1.316573);
   hnueCCinFV_stack_14->SetBinError(2,0.1967154);
   hnueCCinFV_stack_14->SetBinError(4,0.4746884);
   hnueCCinFV_stack_14->SetBinError(5,0.5883944);
   hnueCCinFV_stack_14->SetBinError(6,0.4814682);
   hnueCCinFV_stack_14->SetBinError(7,0.7345848);
   hnueCCinFV_stack_14->SetBinError(8,0.2384502);
   hnueCCinFV_stack_14->SetBinError(9,0.6209405);
   hnueCCinFV_stack_14->SetBinError(10,0.620407);
   hnueCCinFV_stack_14->SetBinError(11,0.4394482);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.5188295);
   hnueCCinFV_stack_14->SetBinError(14,0.2781975);
   hnueCCinFV_stack_14->SetBinError(15,0.6206425);
   hnueCCinFV_stack_14->SetBinError(16,0.5417947);
   hnueCCinFV_stack_14->SetBinError(17,0.340721);
   hnueCCinFV_stack_14->SetBinError(18,0.2770047);
   hnueCCinFV_stack_14->SetBinError(19,0.3929602);
   hnueCCinFV_stack_14->SetBinError(20,0.3401776);
   hnueCCinFV_stack_14->SetBinError(21,0.3401776);
   hnueCCinFV_stack_14->SetBinError(22,0.3921167);
   hnueCCinFV_stack_14->SetBinError(23,0.2781975);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.5892049);
   hnueCCinFV_stack_14->SetBinError(26,0.5887087);
   hnueCCinFV_stack_14->SetEntries(104);

   ci = 1447;
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
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__2->SetBinContent(0,1372.017);
   hmcerror__2->SetBinContent(1,11.76991);
   hmcerror__2->SetBinContent(2,25.86537);
   hmcerror__2->SetBinContent(3,70.94731);
   hmcerror__2->SetBinContent(4,587.5264);
   hmcerror__2->SetBinContent(5,525.42);
   hmcerror__2->SetBinContent(6,570.6692);
   hmcerror__2->SetBinContent(7,694.4197);
   hmcerror__2->SetBinContent(8,670.3907);
   hmcerror__2->SetBinContent(9,624.074);
   hmcerror__2->SetBinContent(10,573.515);
   hmcerror__2->SetBinContent(11,510.4869);
   hmcerror__2->SetBinContent(12,441.8546);
   hmcerror__2->SetBinContent(13,363.1914);
   hmcerror__2->SetBinContent(14,327.0503);
   hmcerror__2->SetBinContent(15,260.2551);
   hmcerror__2->SetBinContent(16,204.3274);
   hmcerror__2->SetBinContent(17,173.4189);
   hmcerror__2->SetBinContent(18,150.803);
   hmcerror__2->SetBinContent(19,127.1512);
   hmcerror__2->SetBinContent(20,95.97739);
   hmcerror__2->SetBinContent(21,85.97684);
   hmcerror__2->SetBinContent(22,75.19016);
   hmcerror__2->SetBinContent(23,55.63673);
   hmcerror__2->SetBinContent(24,42.83564);
   hmcerror__2->SetBinContent(25,38.88735);
   hmcerror__2->SetBinContent(26,215.5632);
   hmcerror__2->SetBinError(0,19.74839);
   hmcerror__2->SetBinError(1,12.64669);
   hmcerror__2->SetBinError(2,15.41279);
   hmcerror__2->SetBinError(3,29.83954);
   hmcerror__2->SetBinError(4,155.6694);
   hmcerror__2->SetBinError(5,149.7024);
   hmcerror__2->SetBinError(6,148.5801);
   hmcerror__2->SetBinError(7,195.1566);
   hmcerror__2->SetBinError(8,173.5956);
   hmcerror__2->SetBinError(9,164.1788);
   hmcerror__2->SetBinError(10,154.4703);
   hmcerror__2->SetBinError(11,141.4699);
   hmcerror__2->SetBinError(12,118.0673);
   hmcerror__2->SetBinError(13,114.9014);
   hmcerror__2->SetBinError(14,87.12428);
   hmcerror__2->SetBinError(15,76.51169);
   hmcerror__2->SetBinError(16,62.99734);
   hmcerror__2->SetBinError(17,50.95868);
   hmcerror__2->SetBinError(18,46.32521);
   hmcerror__2->SetBinError(19,47.68543);
   hmcerror__2->SetBinError(20,34.44792);
   hmcerror__2->SetBinError(21,39.74351);
   hmcerror__2->SetBinError(22,30.58037);
   hmcerror__2->SetBinError(23,22.34001);
   hmcerror__2->SetBinError(24,20.05941);
   hmcerror__2->SetBinError(25,18.27636);
   hmcerror__2->SetBinError(26,64.05274);
   hmcerror__2->SetEntries(8803.771);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3001[25] = {
   7,
   25,
   100,
   711,
   512,
   586,
   677,
   622,
   585,
   519,
   442,
   390,
   316,
   245,
   241,
   177,
   153,
   104,
   103,
   81,
   62,
   49,
   40,
   25,
   27};
   Double_t _felx3001[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3001[25] = {
   2.85954,
   5.1474,
   10.1212,
   26.66458,
   22.62742,
   24.20744,
   26.01922,
   24.93993,
   24.18677,
   22.78157,
   21.0238,
   19.74842,
   17.77639,
   15.65248,
   15.52417,
   13.30413,
   12.36932,
   10.19804,
   10.14889,
   9.1239,
   8.0018,
   7.1318,
   6.4604,
   5.1474,
   5.3414};
   Double_t _fehx3001[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3001[25] = {
   2.61053,
   4.9374,
   9.92,
   26.66458,
   22.62742,
   24.20744,
   26.01922,
   24.93993,
   24.18677,
   22.78157,
   21.0238,
   19.74842,
   17.77639,
   15.65248,
   15.52417,
   13.30413,
   12.36932,
   10.19804,
   10.14889,
   8.9221,
   7.7989,
   6.9277,
   6.2549,
   4.9374,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-275,1225);
   Graph_Graph3001->SetMinimum(3.726414);
   Graph_Graph3001->SetMaximum(811.017);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6799.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 34.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 128.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 62.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  109.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  83.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 5583.4","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 50.2","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 1231.4","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 17.1","F");

   ci = 1447;
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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3002[25] = {
   1.074494,
   0.5958851,
   0.4205874,
   0.2649573,
   0.2849196,
   0.2603612,
   0.2810355,
   0.2589469,
   0.2630758,
   0.2693397,
   0.2771273,
   0.2672085,
   0.316366,
   0.2663942,
   0.2939873,
   0.3083157,
   0.2938473,
   0.3071903,
   0.3750294,
   0.3589171,
   0.4622583,
   0.4067071,
   0.4015335,
   0.4682878,
   0.4699821};
   Double_t _fehx3002[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3002[25] = {
   1.074494,
   0.5958851,
   0.4205874,
   0.2649573,
   0.2849196,
   0.2603612,
   0.2810355,
   0.2589469,
   0.2630758,
   0.2693397,
   0.2771273,
   0.2672085,
   0.316366,
   0.2663942,
   0.2939873,
   0.3083157,
   0.2938473,
   0.3071903,
   0.3750294,
   0.3589171,
   0.4622583,
   0.4067071,
   0.4015335,
   0.4682878,
   0.4699821};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-275,1225);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3003[25] = {
   0.3656198,
   0.2455611,
   0.2017409,
   0.2186677,
   0.2339382,
   0.240635,
   0.2368988,
   0.2366431,
   0.2443013,
   0.237208,
   0.2304178,
   0.2470107,
   0.2269069,
   0.2371725,
   0.2427255,
   0.2418298,
   0.2428728,
   0.2388888,
   0.238783,
   0.2456499,
   0.2475995,
   0.2456771,
   0.2514965,
   0.2297748,
   0.2342615};
   Double_t _fehx3003[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3003[25] = {
   0.3656198,
   0.2455611,
   0.2017409,
   0.2186677,
   0.2339382,
   0.240635,
   0.2368988,
   0.2366431,
   0.2443013,
   0.237208,
   0.2304178,
   0.2470107,
   0.2269069,
   0.2371725,
   0.2427255,
   0.2418298,
   0.2428728,
   0.2388888,
   0.238783,
   0.2456499,
   0.2475995,
   0.2456771,
   0.2514965,
   0.2297748,
   0.2342615};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-275,1225);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3004[25] = {
   0.5947369,
   0.9665432,
   1.409497,
   1.210158,
   0.9744586,
   1.026865,
   0.9749148,
   0.9278171,
   0.9373889,
   0.9049459,
   0.86584,
   0.8826432,
   0.8700646,
   0.7491203,
   0.9260146,
   0.866257,
   0.8822567,
   0.6896416,
   0.8100593,
   0.8439487,
   0.7211245,
   0.6516811,
   0.7189495,
   0.5836261,
   0.6943132};
   Double_t _felx3004[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3004[25] = {
   0.2429534,
   0.1990074,
   0.142658,
   0.04538449,
   0.04306539,
   0.04241939,
   0.03746902,
   0.03720208,
   0.03875626,
   0.03972272,
   0.04118381,
   0.04469438,
   0.04894496,
   0.04785954,
   0.05964985,
   0.06511186,
   0.07132623,
   0.06762492,
   0.07981752,
   0.09506301,
   0.09306925,
   0.09485018,
   0.1161175,
   0.1201663,
   0.1373557};
   Double_t _fehx3004[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3004[25] = {
   0.2217969,
   0.1908884,
   0.1398221,
   0.04538449,
   0.04306539,
   0.04241939,
   0.03746902,
   0.03720208,
   0.03875626,
   0.03972272,
   0.04118381,
   0.04469438,
   0.04894496,
   0.04785954,
   0.05964985,
   0.06511186,
   0.07132623,
   0.06762492,
   0.07981752,
   0.09296043,
   0.09070931,
   0.09213573,
   0.1124239,
   0.1152638,
   0.1319761};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-275,1225);
   Graph_Graph3004->SetMinimum(0.23203);
   Graph_Graph3004->SetMaximum(1.669072);
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
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}

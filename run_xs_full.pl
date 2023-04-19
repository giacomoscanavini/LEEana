#!/usr/bin/perl

my $num1 = scalar(@ARGV);
if ($num1 > -1){
    $num1 = $ARGV[0];
    print "$num1\n";
}
# if num1 == 0: xs_total_Xp
# if num1 == 1: xs_total_0pNp
# if num1 == 2: xs_diff_cos_Xp
# if num1 == 3: xs_diff_cos_0pNp
# if num1 == 4: xs_diff_mom_Xp
# if num1 == 5: xs_diff_mom_0pNp
# if num1 == 6: xs_2D_Xp

system("rm ./configurations/file_ch.txt");
system("rm ./configurations/cv_input.txt");
system("rm ./configurations/det_file_ch.txt");
system("rm ./configurations/det_input.txt");
system("rm ./configurations/xf_file_ch.txt");
system("rm ./configurations/xf_input.txt");
system("rm ./configurations/cov_input.txt");
system("rm ./configurations/xs_ch.txt");
system("rm ./configurations/xs_real_bin.txt");

# They are all the same for all cross sections
system("cp ./configurations/file_ch_xs_full.txt ./configurations/file_ch.txt");
system("cp ./configurations/cv_input_full.txt ./configurations/cv_input.txt");
system("cp ./configurations/det_file_ch_full.txt ./configurations/det_file_ch.txt");
system("cp ./configurations/det_input_full.txt ./configurations/det_input.txt");
system("cp ./configurations/xf_file_ch_full.txt ./configurations/xf_file_ch.txt");
system("cp ./configurations/xf_input_full.txt ./configurations/xf_input.txt");
# They change based on the cross section
if ($num1 == 0){
	#system("cp ./configurations/xs_total_Xp/cov_input.txt ./configurations/cov_input.txt");
	#system("cp ./configurations/xs_total_Xp/xs_ch.txt ./configurations/xs_ch.txt");
	#system("cp ./configurations/xs_total_Xp/xs_real_bin.txt ./configurations/xs_real_bin.txt");
	system("cp ./configurations/xs_total_Xp_4ch/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_total_Xp_4ch/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_total_Xp_4ch/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 1){
	#system("cp ./configurations/xs_total_0pNp/cov_input.txt ./configurations/cov_input.txt");
	#system("cp ./configurations/xs_total_0pNp/xs_ch.txt ./configurations/xs_ch.txt");
	#system("cp ./configurations/xs_total_0pNp/xs_real_bin.txt ./configurations/xs_real_bin.txt");
	system("cp ./configurations/xs_total_0pNp_4ch/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_total_0pNp_4ch/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_total_0pNp_4ch/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 2){
	system("cp ./configurations/xs_diff_cos_Xp/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_Xp/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_Xp/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 20){
	system("cp ./configurations/xs_diff_cos_Xp_FCPC/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_Xp_FCPC/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_Xp_FCPC/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 21){
	system("cp ./configurations/xs_diff_cos_Xp_rebin/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_Xp_rebin/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_Xp_rebin/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 3){
	system("cp ./configurations/xs_diff_cos_0pNp/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_0pNp/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_0pNp/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 30){
	system("cp ./configurations/xs_diff_cos_0pNp_FCPC/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_0pNp_FCPC/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_0pNp_FCPC/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 31){
	system("cp ./configurations/xs_diff_cos_0pNp_rebin/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_0pNp_rebin/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_0pNp_rebin/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 31){
	system("cp ./configurations/xs_diff_cos_0p/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_0p/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_0p/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 32){
	system("cp ./configurations/xs_diff_cos_Np/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_Np/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_Np/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 4){
	system("cp ./configurations/xs_diff_mom_Xp/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_Xp/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_Xp/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 40){
	system("cp ./configurations/xs_diff_mom_Xp_FCPC/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_Xp_FCPC/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_Xp_FCPC/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 5){
	system("cp ./configurations/xs_diff_mom_0pNp/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_0pNp/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_0pNp/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 50){
	system("cp ./configurations/xs_diff_mom_0pNp_FCPC/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_0pNp_FCPC/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_0pNp_FCPC/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 51){
	system("cp ./configurations/xs_diff_mom_0p/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_0p/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_0p/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 52){
	system("cp ./configurations/xs_diff_mom_Np/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_Np/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_Np/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 6){
	system("cp ./configurations/xs_2D_Xp/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_2D_Xp/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_2D_Xp/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 60){
	system("cp ./configurations/xs_2D_Xp_FCPC/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_2D_Xp_FCPC/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_2D_Xp_FCPC/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}

#central histogram preparation ...// Xs mode ...
system("./convert_histo.pl 1");

#Det sys
system("./run_det_sys.pl");

#Flux sys, GEANT4 1-->16
#system("./run_xf_sys.pl 0"); #No reweighting
system("./run_xf_sys.pl 1"); #Reweighting

#Xs sys, POT, target nucleon ... cov_xs.root ...
system("./bin/xs_cov_matrix -r17");
#system("./bin/xs_cov_matrix -r0");  #this option comibines XS and reweighting systematics together, the previous one keeps them separated
system("./bin/xs_cov_matrix -r18"); #reweighting uncorrelated
system("./bin/xs_cov_matrix -r19"); #reweighting correlated

# MC stat ... at M ...
system("./bin/merge_hist -r0 -l0 -e2 > ./mc_stat/xs_tot.log");

#central files ...
system("./bin/merge_hist_xs -r0 -l0");
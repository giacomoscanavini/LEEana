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
system("cp ./configurations/cv_input_fake_nuwro.txt ./configurations/cv_input.txt");
system("cp ./configurations/det_file_ch_full.txt ./configurations/det_file_ch.txt");
system("cp ./configurations/det_input_full.txt ./configurations/det_input.txt");
system("cp ./configurations/xf_file_ch_full.txt ./configurations/xf_file_ch.txt");
system("cp ./configurations/xf_input_full.txt ./configurations/xf_input.txt");
# They change based on the cross section
if ($num1 == 0){
	#system("cp ./configurations/xs_total_Xp_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
	#system("cp ./configurations/xs_total_Xp_fake_nuwro/xs_ch.txt ./configurations/xs_ch.txt");
	#system("cp ./configurations/xs_total_Xp_fake_nuwro/xs_real_bin.txt ./configurations/xs_real_bin.txt");
	#system("cp ./configurations/xs_total_Xp_fake_nuwro_4ch/cov_input.txt ./configurations/cov_input.txt");
	#system("cp ./configurations/xs_total_Xp_fake_nuwro_4ch/xs_ch.txt ./configurations/xs_ch.txt");
	#system("cp ./configurations/xs_total_Xp_fake_nuwro_4ch/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 1){
	#system("cp ./configurations/xs_total_0pNp_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
	#system("cp ./configurations/xs_total_0pNp_fake_nuwro/xs_ch.txt ./configurations/xs_ch.txt");
	#system("cp ./configurations/xs_total_0pNp_fake_nuwro/xs_real_bin.txt ./configurations/xs_real_bin.txt");
	#system("cp ./configurations/xs_total_0pNp_fake_nuwro_4ch/cov_input.txt ./configurations/cov_input.txt");
	#system("cp ./configurations/xs_total_0pNp_fake_nuwro_4ch/xs_ch.txt ./configurations/xs_ch.txt");
	#system("cp ./configurations/xs_total_0pNp_fake_nuwro_4ch/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 2){
	system("cp ./configurations/xs_diff_cos_Xp_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_Xp_fake_nuwro/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_Xp_fake_nuwro/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 3){
	system("cp ./configurations/xs_diff_cos_0pNp_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_cos_0pNp_fake_nuwro/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_cos_0pNp_fake_nuwro/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 4){
	system("cp ./configurations/xs_diff_mom_Xp_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_Xp_fake_nuwro/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_Xp_fake_nuwro/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 41){
	system("cp ./configurations/xs_diff_mom_Xp_fake_nuwro_rebin/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_Xp_fake_nuwro_rebin/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_Xp_fake_nuwro_rebin/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 5){
	system("cp ./configurations/xs_diff_mom_0pNp_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_diff_mom_0pNp_fake_nuwro/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_diff_mom_0pNp_fake_nuwro/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}elsif ($num1 == 6){
	system("cp ./configurations/xs_2D_Xp_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
	system("cp ./configurations/xs_2D_Xp_fake_nuwro/xs_ch.txt ./configurations/xs_ch.txt");
	system("cp ./configurations/xs_2D_Xp_fake_nuwro/xs_real_bin.txt ./configurations/xs_real_bin.txt");
}

#central histogram preparation ...// Xs mode ...
system("./convert_histo.pl 1");

#Det sys
system("./run_det_sys.pl");

#Flux sys, GEANT4 1-->16
system("./run_xf_sys.pl 0"); #No reweighting
#system("./run_xf_sys.pl 1"); #Reweighting

#Xs sys, POT, target nucleon ... cov_xs.root ...
system("./bin/xs_cov_matrix -r17");
#system("./bin/xs_cov_matrix -r18"); #reweighting uncorrelated
#system("./bin/xs_cov_matrix -r19"); #reweighting correlated
#system("./bin/xs_cov_matrix -r0");  #this option comibines XS and reweighting systematics together, the previous one keeps them separated

# MC stat ... at M ...
system("./bin/merge_hist -r0 -l0 -e2 > ./mc_stat/xs_tot.log");

#central files ...
system("./bin/merge_hist_xs -r0 -l0");

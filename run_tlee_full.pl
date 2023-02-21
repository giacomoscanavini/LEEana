#!/usr/bin/perl

my $num1 = scalar(@ARGV);
if ($num1 > -1){
    $num1 = $ARGV[0];
    print "$num1\n";
}
# if num1 == 0: momentum
# if num1 == 1: costheta
# if num1 == 2: pi0 mass
# if num1 == 3: 
# if num1 == 4: 
# if num1 == 5: 
# if num1 == 6: 

#system("./clean_before_tlee.pl");

system("rm ./configurations/file_ch.txt");
system("rm ./configurations/cv_input.txt");
system("rm ./configurations/det_file_ch.txt");
system("rm ./configurations/det_input.txt");
system("rm ./configurations/xf_file_ch.txt");
system("rm ./configurations/xf_input.txt");
system("rm ./configurations/cov_input.txt");
system("rm ./configurations/xs_ch.txt");
system("rm ./configurations/xs_real_bin.txt");

# They are all the same for all tlee plots
system("cp ./configurations/file_ch_tlee_full.txt ./configurations/file_ch.txt");
system("cp ./configurations/cv_input_full.txt ./configurations/cv_input.txt");
system("cp ./configurations/det_file_ch_full.txt ./configurations/det_file_ch.txt");
system("cp ./configurations/det_input_full.txt ./configurations/det_input.txt");
system("cp ./configurations/xf_file_ch_full.txt ./configurations/xf_file_ch.txt");
system("cp ./configurations/xf_input_full.txt ./configurations/xf_input.txt");
# They change based on the cross section
if ($num1 == 0){
	system("cp ./configurations/tlee_mom/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 1){
	system("cp ./configurations/tlee_cos/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 2){
	system("cp ./configurations/tlee_pi0_mass/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 31){
	system("cp ./configurations/tlee_vtx_X/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 32){
	system("cp ./configurations/tlee_vtx_Y/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 33){
	system("cp ./configurations/tlee_vtx_Z/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 4){
	system("cp ./configurations/tlee_phi/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 5){
	system("cp ./configurations/tlee_cos_cm/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 6){
	system("cp ./configurations/tlee_high_energy/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 7){
	system("cp ./configurations/tlee_high_gap/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 8){
	system("cp ./configurations/tlee_high_phi/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 9){
	system("cp ./configurations/tlee_high_theta/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 10){
	system("cp ./configurations/tlee_low_energy/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 11){
	system("cp ./configurations/tlee_low_gap/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 12){
	system("cp ./configurations/tlee_low_phi/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 13){
	system("cp ./configurations/tlee_low_theta/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 14){
	system("cp ./configurations/tlee_ncpi0_score/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 15){
	system("cp ./configurations/tlee_transferred/cov_input.txt ./configurations/cov_input.txt");	
}elsif ($num1 == 16){
	system("cp ./configurations/tlee_p_multi/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 17){
	system("cp ./configurations/tlee_gammas_angle/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 18){
	system("cp ./configurations/tlee_2D_mom/cov_input.txt ./configurations/cov_input.txt");

}elsif ($num1 == 20){
	system("cp ./configurations/tlee_generic_ncpi0_score/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 21){
	system("cp ./configurations/tlee_generic_vtx_X/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 22){
	system("cp ./configurations/tlee_generic_vtx_Y/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 23){
	system("cp ./configurations/tlee_generic_vtx_Z/cov_input.txt ./configurations/cov_input.txt");
}


#central histogram preparation 
system("./convert_histo.pl ");
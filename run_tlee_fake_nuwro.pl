#!/usr/bin/perl

my $num1 = scalar(@ARGV);
if ($num1 > -1){
    $num1 = $ARGV[0];
    print "$num1\n";
}
# if num1 == 0: momentum
# if num1 == 1: costheta
# if num1 == 2: 
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
system("cp ./configurations/cv_input_fake_nuwro.txt ./configurations/cv_input.txt");
system("cp ./configurations/det_file_ch_full.txt ./configurations/det_file_ch.txt");
system("cp ./configurations/det_input_full.txt ./configurations/det_input.txt");
system("cp ./configurations/xf_file_ch_full.txt ./configurations/xf_file_ch.txt");
system("cp ./configurations/xf_input_full.txt ./configurations/xf_input.txt");
# They change based on the cross section
if ($num1 == 0){
	system("cp ./configurations/tlee_mom_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 1){
	system("cp ./configurations/tlee_cos_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 11){
	system("cp ./configurations/tlee_mom_fake_nuwro_numucc/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 111){
	system("cp ./configurations/tlee_mom_fake_nuwro_ccpi0/cov_input.txt ./configurations/cov_input.txt");
}elsif ($num1 == 2){
	system("cp ./configurations/tlee_prot_fake_nuwro/cov_input.txt ./configurations/cov_input.txt");
}

#central histogram preparation 
system("./convert_histo.pl");
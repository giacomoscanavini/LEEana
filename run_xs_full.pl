#!/usr/bin/perl


system("rm ./configurations/file_ch.txt");
system("rm ./configurations/cov_input.txt");
system("rm ./configurations/cv_input.txt");
system("rm ./configurations/det_file_ch.txt");
system("rm ./configurations/det_input.txt");
system("rm ./configurations/xf_file_ch.txt");
system("rm ./configurations/xf_input.txt");

system("cp ./configurations/file_ch_xs_full.txt ./configurations/file_ch.txt");
system("cp ./configurations/cov_input_xs_full.txt ./configurations/cov_input.txt");
system("cp ./configurations/cv_input_full.txt ./configurations/cv_input.txt");
system("cp ./configurations/det_file_ch_full.txt ./configurations/det_file_ch.txt");
system("cp ./configurations/det_input_full.txt ./configurations/det_input.txt");
system("cp ./configurations/xf_file_ch_full.txt ./configurations/xf_file_ch.txt");
system("cp ./configurations/xf_input_full.txt ./configurations/xf_input.txt");;


#central histogram preparation ...// Xs mode ...
system("./convert_histo.pl 1");

#Det sys
system("./run_det_sys.pl");

#Flux sys, GEANT4 1-->16
system("./run_xf_sys.pl");

#Xs sys, POT, target nucleon ... cov_xs.root ...
system("./bin/xs_cov_matrix -r17");

# MC stat ... at M ...
system("./bin/merge_hist -r0 -l0 -e2 > ./mc_stat/xs_tot.log");

#central files ...
system("./bin/merge_hist_xs -r0 -l0");

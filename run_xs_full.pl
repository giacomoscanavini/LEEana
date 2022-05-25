#!/usr/bin/perl



system("rm ./configurations/cov_input.txt");
system("rm ./configurations/file_ch.txt");

system("cp ./configurations/cov_input_xs.txt ./configurations/cov_input.txt ");
system("cp ./configurations/file_ch_xs.txt ./configurations/file_ch.txt ");


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

#!/usr/bin/perl

system("subl ../wcp-uboone-bdt/inc/WCPLEEANA/cuts.h");

system("subl ./configurations/xs_ch.txt");
system("subl ./configurations/xs_real_bin.txt");

system("subl ./run_xs_full.pl");
system("subl ./configurations/cov_input_xs_full.txt");
system("subl ./configurations/cv_input_full.txt");
system("subl ./configurations/det_file_ch_full.txt");
system("subl ./configurations/det_input_full.txt");
system("subl ./configurations/file_ch_xs_full.txt");
system("subl ./configurations/xf_file_ch_full.txt");
system("subl ./configurations/xf_input_full.txt");

system("subl ./configurations/gp_bin_mid.py");
system("subl ./configurations/gp_input.txt");
system("subl ./configurations/rw_cv_input.txt");
system("subl ./configurations/rw_cv_input_unequalbins.txt");
system("subl ./configurations/rw_sys_input.txt");
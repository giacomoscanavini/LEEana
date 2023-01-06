#!/usr/bin/perl

system("subl ../wcp-uboone-bdt/inc/WCPLEEANA/cuts.h");
system("subl ../wcp-uboone-bdt/inc/WCPLEEANA/Configure_Lee.h");
system("subl ../wcp-uboone-bdt/src/TLee.cxx");
system("subl ../wcp-uboone-bdt/apps/read_TLee_v20.cxx");
system("subl ../wcp-uboone-bdt/apps/plot_hist.cxx");

system("subl ./run_tlee_open.pl");
system("subl ./configurations/cov_input_tlee_open.txt");
system("subl ./configurations/cv_input_open.txt");
system("subl ./configurations/det_file_ch_open.txt");
system("subl ./configurations/det_input_open.txt");
system("subl ./configurations/file_ch_tlee_open.txt");
system("subl ./configurations/xf_file_ch_open.txt");
system("subl ./configurations/xf_input_open.txt");

system("subl ./configurations/gp_bin_mid.py");
system("subl ./configurations/gp_input.txt");
system("subl ./configurations/rw_cv_input.txt");
system("subl ./configurations/rw_cv_input_unequalbins.txt");
system("subl ./configurations/rw_sys_input.txt");
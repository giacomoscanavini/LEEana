#!/usr/bin/perl

# Clean previous extraction
system("rm -rf ./mcstat");
system("mkdir ./mcstat");

system("rm ./DetVar/*.root");
system("rm ./XsFlux/*.root");

system("rm ./hist_rootfiles_xs/*.root");
system("rm ./xs_ch.txt");
system("rm ./xs_real_bin.txt");
system("rm ./xf_file_ch.txt");
system("rm ./xf_input.txt");
system("rm ./import*.txt");
system("rm ./gp_input.txt");
system("rm ./cov_input.txt");
system("rm ./cv_input.txt");
system("rm ./det_file_ch.txt");
system("rm ./det_input.txt");
system("rm ./file_ch.txt");

system("rm merge_xs.root");
system("rm wiener.root");
system("rm output.root");
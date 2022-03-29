#!/usr/bin/perl

# Clean previous extraction
system("rm -rf ./mc_stat");
system("mkdir ./mc_stat");

system("rm ./hist_rootfiles/DetVar/*.root");
system("rm ./hist_rootfiles/XsFlux/*.root");

system("rm ./hist_rootfiles/*.root");

system("rm merge.root");
system("rm selection.pdf");
system("rm file_collapsed_covariance_matrix.root");

system("rm canv*.pdf");
system("rm canv*.png");
system("rm canv*.C");
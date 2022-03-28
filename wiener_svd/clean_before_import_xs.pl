#!/usr/bin/perl

# Clean previous extraction
system("rm -rf ./mcstat");
system("mkdir ./mcstat");

system("rm ./DetVar/*.root");
system("rm ./XsFlux/*.root");

system("rm ./hist_rootfiles_xs/*.root");

system("rm merge_xs.root");
system("rm wiener.root");
system("rm output.root");
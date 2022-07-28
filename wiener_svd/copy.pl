#!/usr/bin/perl

# Clean previous extraction
system("./clean_before_import_xs.pl");

# Import new extraction 
system("cp ../mc_stat/xs_tot.log ./mcstat/");
system("cp ../hist_rootfiles/DetVar/cov*.root ./DetVar/");
system("cp ../hist_rootfiles/XsFlux/cov_*.root ./XsFlux/");
system("cp ../hist_rootfiles/*.root ./hist_rootfiles_xs/");
system("cp ../merge_xs.root .");
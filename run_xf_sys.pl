#!/usr/bin/perl

for (my $i=1;$i<15;$i++){
    system("./bin/xf_cov_matrix -r$i &");
}

#!/usr/bin/perl

for (my $i=1;$i<10;$i++){
    system("./bin/det_cov_matrix -r$i &");
}

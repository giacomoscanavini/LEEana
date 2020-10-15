#!/usr/bin/perl

for (my $i=1;$i<15;$i++){
    if ($i% 8 == 7){
	system("./bin/xf_cov_matrix -r$i ");
    }else{
	system("./bin/xf_cov_matrix -r$i &");
    }
}

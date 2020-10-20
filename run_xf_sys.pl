#!/usr/bin/perl

for (my $i=1;$i<18;$i++){
    if ($i% 9 == 8){
	system("./bin/xf_cov_matrix -r$i ");
    }else{
	system("./bin/xf_cov_matrix -r$i &");
    }
}

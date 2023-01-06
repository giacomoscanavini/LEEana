#!/usr/bin/perl
my $num1 = scalar(@ARGV[0]);

for (my $i=1;$i<18;$i++){
    if ($i% 9 == 8){
		system("./bin/xf_cov_matrix -r$i ");
    }else{
		system("./bin/xf_cov_matrix -r$i &");
    }
}

if($num1 == 0){
    print "\nNO reweighting syst applied!\n";
}

if($num1 == 1){
    print "\nReweighting syst applied!\n";
    system("./bin/xf_cov_matrix -r18"); #reweighting uncorrelated
    system("./bin/xf_cov_matrix -r19"); #reweighting correlated
    print $num1;
}
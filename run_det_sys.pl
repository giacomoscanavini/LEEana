#!/usr/bin/perl
my $num1 = scalar(@ARGV);

for (my $i=1;$i<11;$i++){
    if ($i == 5){ # this is dE/dx, we skip this one (otherwise causes a harmless but distracting seg fault)
        #$i++;
    }
    else{
        #system("./bin/det_cov_matrix -r$i&");
        system("./bin/det_cov_matrix -r$i -g0 &");
        #system("./bin/det_cov_matrix -r$i -g1 &");
    }
    #system("./bin/det_cov_matrix -r$i -g1 &");
    # -g1 is option for GRP smoothing, default is -g0 (remove if you don't wanna run it)
}
#!/usr/bin/perl
my $num1 = scalar(@ARGV);

for (my $i=1;$i<11;$i++){
    if ($i == 5){ # this is dE/dx, we skip this one (otherwise causes a harmless but distracting seg fault)
        #$i++;
    }
    else{
        system("./bin/det_cov_matrix -r$i &");
    }
    #system("./bin/det_cov_matrix -r$i &");
}
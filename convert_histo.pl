#!/usr/bin/perl
open(infile,"./configurations/cv_input.txt");

my $num1 = scalar(@ARGV);
print "$num1\n";
my $num = 0;
while(<infile>){
    @temp = split(/\s+/,$_);

    if ($temp[0] == -1) {
	last;
    }
    
    if ($temp[0] !=-1 && $temp[0] != "\#file"){
	print "$temp[3]\n";
	if ($num %12 == 11){
	    if ($num1 == 0){
		system("./bin/convert_checkout_hist $temp[3] $temp[4]");
	    }else{
		system("./bin/convert_checkout_hist_xs $temp[3] $temp[4]");
	    }
	}else{
	    if ($num1 == 0){
		system("./bin/convert_checkout_hist $temp[3] $temp[4]&");
	    }else{
		system("./bin/convert_checkout_hist_xs $temp[3] $temp[4]&");
	    }
	}
    }
    $num ++;
};

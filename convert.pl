#!/usr/bin/perl

open(infile,"filelist");
my $num = 0;
while(<infile>){
    $filename = $_;
    chomp($filename);
    @temp = split(/\s+/,$filename);

    if ($temp[2]==-1){	
	if ($num %12 == 11){
	    system("bin/bdt_convert $temp[0] $temp[1]");
	}else{
	    system("bin/bdt_convert $temp[0] $temp[1]&");
	}
    }else{
	if ($num %12 == 11){
	    system("bin/bdt_convert $temp[0] $temp[1] -g$temp[2] -l./training_list/list.dat");
	}else{
	    system("bin/bdt_convert $temp[0] $temp[1] -g$temp[2] -l./training_list/list.dat &");
	}
    }
    
    $num++;
}

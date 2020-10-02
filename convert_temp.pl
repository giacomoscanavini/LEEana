#!/usr/bin/perl

open(infile,"filelist_tmp");
my $num = 0;
while(<infile>){
    $filename = $_;
    chomp($filename);
    @temp = split(/\s+/,$filename);

    if ($temp[2] == 1){
	if ($num %12 == 11){
	    system("bin/bdt_convert $temp[0] $temp[1]  -l./training_list/list.dat");
	}else{
	    system("bin/bdt_convert $temp[0] $temp[1]  -l./training_list/list.dat &");
	}
    }elsif ($temp[2]==2){
	if ($num %12 == 11){
	    system("bin/bdt_convert $temp[0] $temp[1] -g$temp[3]  -l./training_list/list.dat");
	}else{
	    system("bin/bdt_convert $temp[0] $temp[1] -g$temp[3] -l./training_list/list.dat &");
	}
    }else{
	if ($num %12 == 11){
	    system("bin/bdt_convert $temp[0] $temp[1]");
	}else{
	    system("bin/bdt_convert $temp[0] $temp[1]&");
	}
    }
    
    
    $num++;
}

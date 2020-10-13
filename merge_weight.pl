#!/usr/bin/perl
open(infile,"./configurations/xf_file.txt");

my $num = 0;
    
while(<infile>){
    $filename = $_;
    chomp($filename);
    if ($num % 12 == 11){
	system("./bin/merge_xf $filename");
    }else{
	system("./bin/merge_xf $filename&");
    }
    $num ++;
}

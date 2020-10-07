#!/usr/bin/perl
open(infile,"./configurations/det_file.txt");

my $num = 0;
while(<infile>){
    $filename = $_;
    chomp($filename);
    if ($num % 12 == 11){
	system("./bin/merge_det $filename");
    }else{
	system("./bin/merge_det $filename&");
    }
    $num ++;
}

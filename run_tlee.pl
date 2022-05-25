#!/usr/bin/perl



system("rm ./configurations/cov_input.txt");
system("rm ./configurations/file_ch.txt");

system("cp ./configurations/cov_input_tlee.txt ./configurations/cov_input.txt ");
system("cp ./configurations/file_ch_tlee.txt ./configurations/file_ch.txt ");


#central histogram preparation ...// Xs mode ...
system("./convert_histo.pl");

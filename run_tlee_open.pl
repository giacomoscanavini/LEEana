#!/usr/bin/perl


system("rm ./configurations/file_ch.txt");
system("rm ./configurations/cov_input.txt");
system("rm ./configurations/cv_input.txt");
system("rm ./configurations/det_file_ch.txt");
system("rm ./configurations/det_input.txt");
system("rm ./configurations/xf_file_ch.txt");
system("rm ./configurations/xf_input.txt");

system("cp ./configurations/file_ch_tlee_open.txt ./configurations/file_ch.txt");
system("cp ./configurations/cov_input_tlee_open.txt ./configurations/cov_input.txt");
system("cp ./configurations/cv_input_open.txt ./configurations/cv_input.txt");
system("cp ./configurations/det_file_ch_open.txt ./configurations/det_file_ch.txt");
system("cp ./configurations/det_input_open.txt ./configurations/det_input.txt");
system("cp ./configurations/xf_file_ch_open.txt ./configurations/xf_file_ch.txt");
system("cp ./configurations/xf_input_open.txt ./configurations/xf_input.txt");

#central histogram preparation 
system("./convert_histo.pl");
#!/usr/bin/perl
# $7 and $10 for with cuts ...
system("awk \'\{print \$1,\$2, \$5, \$7\}\' ./pot_counting/potdata/bnb_potdata.txt | grep -v run > pot_bnb.txt");

system("awk \'\{print \$1,\$2, \$3 \}\' ./pot_counting/potdata/extbnb_potdata.txt | grep -v run > pot_extbnb.txt");

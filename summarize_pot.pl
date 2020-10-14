#!/usr/bin/perl
# $5 and $7 without cuts
# $8 and $10 for with cuts ...
system("awk \'\{print \$1,\$2, \$8, \$10\}\' ./pot_counting/data_bnb_potdb.txt | grep -v run > pot_bnb.txt");

system("awk \'\{print \$1,\$2, \$3 \}\' ./pot_counting/data_extbnb_potdb.txt | grep -v run > pot_extbnb.txt");

#!/usr/bin/perl
# $5 and $7 without cuts
# $8 and $10 for with cuts ...
system("cat ./pot_counting/data_bnb_mcc9.1_wcp*.txt | grep 0 | awk \'\{print \$1,\$2, \$8, \$10\}\' | grep -v run > pot_bnb.txt");

system("cat ./pot_counting/data_extbnb_*.txt | grep 0 | awk \'\{print \$1,\$2, \$3 \}\'  | grep -v run > pot_extbnb.txt");

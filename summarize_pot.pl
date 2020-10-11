#!/usr/bin/perl

system("awk \'\{print \$1,\$2, \$8, \$10\}\' ./pot_counting/checkout_run1_bnb_4.483E19POT_potdata.txt | grep -v run > pot_bnb.txt");

system("awk \'\{print \$1,\$2, \$3 \}\' ./pot_counting/checkout_run1_ext_bnb_C1_potdata.txt ./pot_counting/checkout_run3_ext_bnb_F_G1_potdata.txt | grep -v run > pot_extbnb.txt");

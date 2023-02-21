import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('./clean_before_import_xs.pl')

os.system("cp ./%s/mcstat/* ../mc_stat/"%(target));
os.system("cp ./%s/mcstat/* ./mcstat/"%(target));
os.system("cp ./%s/DetVar/* ../hist_rootfiles/DetVar/"%(target));
os.system("cp ./%s/DetVar/* .//DetVar/"%(target));
os.system("cp ./%s/XsFlux/* ../hist_rootfiles/XsFlux/"%(target));
os.system("cp ./%s/XsFlux/* ./XsFlux/"%(target));
os.system("cp ./%s/hist_rootfiles_xs/* ../hist_rootfiles/"%(target));
os.system("cp ./%s/hist_rootfiles_xs/* ./hist_rootfiles_xs/"%(target));

os.system("cp ./%s/merge_xs.root ./"%(target));
os.system("cp ./%s/merge_xs.root ../"%(target));
os.system('cp ./%s/import_xsec.txt ./'%(target));
os.system('cp ./%s/import_frac_uncertainties.txt ./'%(target));
os.system('cp ./%s/cov_input.txt ../configurations/'%(target));
os.system('cp ./%s/xs_ch.txt ../configurations/'%(target));
os.system('cp ./%s/xs_real_bin.txt ../configurations/'%(target));
os.system('cp ./%s/cv_input.txt ../configurations/'%(target));
os.system('cp ./%s/file_ch.txt ../configurations/'%(target));
os.system('cp ./%s/det_file_ch.txt ../configurations/'%(target));
os.system('cp ./%s/det_input.txt ../configurations/'%(target));
os.system('cp ./%s/gp_input.txt ../configurations/'%(target));
os.system('cp ./%s/xf_file_ch.txt ../configurations/'%(target));
os.system('cp ./%s/xf_input.txt ../configurations/'%(target));
os.system('cp ./%s/rw_cv_input.txt ../configurations/'%(target));
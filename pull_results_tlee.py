import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 


os.system('./clean_before_tlee.pl') 

os.system('cp ./%s/file_collapsed_covariance_matrix.root ./'%(target))
os.system('cp ./%s/merge.root ./'%(target))

os.system('cp -rf ./%s/mc_stat ./'%(target))
os.system('cp -rf ./%s/hist_rootfiles ./'%(target))

os.system('cp ./%s/file_ch.txt ./configurations/'%(target))
os.system('cp ./%s/cov_input.txt ./configurations/'%(target))
os.system('cp ./%s/cv_input.txt ./configurations/'%(target))
os.system('cp ./%s/det_file_ch.txt ./configurations/'%(target))
os.system('cp ./%s/det_input.txt ./configurations/'%(target))
os.system('cp ./%s/xf_file_ch.txt ./configurations/'%(target))
os.system('cp ./%s/xf_input.txt ./configurations/'%(target))
os.system('cp ./%s/gp_input.txt ./configurations/'%(target))
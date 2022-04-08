import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('mkdir %s'%(target))
os.system('cp canv*.pdf canv*.png canv*.C ./%s'%(target))
os.system('cp selection.pdf file_collapsed_covariance_matrix.root merge.root ./%s'%(target))
os.system('cp -rf ./mc_stat ./hist_rootfiles ./%s'%(target))
os.system('cp ./configurations/cov_input.txt ./%s'%(target))

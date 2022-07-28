import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('mkdir %s'%(target))
os.system('cp canv*.pdf canv*.png canv*.C ./%s'%(target))
os.system('cp selection.pdf file_collapsed_covariance_matrix.root merge.root ./%s'%(target))
os.system('cp -rf ./mc_stat ./hist_rootfiles ./%s'%(target))

os.system('cp ./configurations/cov_input.txt ./%s'%(target))
os.system('cp ./configurations/cv_input.txt ./%s'%(target))
os.system('cp ./configurations/file_ch.txt ./%s'%(target))
os.system('cp ./configurations/det_file_ch.txt ./%s'%(target))
os.system('cp ./configurations/det_input.txt ./%s'%(target))
os.system('cp ./configurations/gp_input.txt ./%s'%(target))
os.system('cp ./configurations/xf_file_ch.txt ./%s'%(target))
os.system('cp ./configurations/xf_input.txt ./%s'%(target))

os.system('cp ../wcp-uboone-bdt/src/TLee.cxx ./%s'%(target))
os.system('cp ../wcp-uboone-bdt/inc/WCPLEEANA/Configure_Lee.h ./%s'%(target))
os.system('cp ../wcp-uboone-bdt/apps/read_TLee_v20.cxx ./%s'%(target))


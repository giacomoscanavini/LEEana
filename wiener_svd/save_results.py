import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('mkdir %s'%(target))
os.system('cp output.root wiener.root merge_xs.root ./%s'%(target))
os.system('cp -rf ./DetVar ./XsFlux ./mcstat ./hist_rootfiles_xs ./%s'%(target))
#os.system('cp values.txt ./%s'%(target))
#os.system('cp values_unfolded.txt ./%s'%(target))
os.system('cp  import_xsec.txt import_frac_uncertainties.txt ./%s'%(target))

os.system('cp ../configurations/cov_input.txt ./%s'%(target))
os.system('cp ../configurations/xs_ch.txt ./%s'%(target))
os.system('cp ../configurations/xs_real_bin.txt ./%s'%(target))
os.system('cp ../configurations/cv_input.txt ./%s'%(target))
os.system('cp ../configurations/file_ch.txt ./%s'%(target))
os.system('cp ../configurations/det_file_ch.txt ./%s'%(target))
os.system('cp ../configurations/det_input.txt ./%s'%(target))
os.system('cp ../configurations/gp_input.txt ./%s'%(target))
os.system('cp ../configurations/xf_file_ch.txt ./%s'%(target))
os.system('cp ../configurations/xf_input.txt ./%s'%(target))
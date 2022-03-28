import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('mkdir %s'%(target))
os.system('cp output.root wiener.root merge_xs.root ./%s'%(target))
os.system('cp -rf ./DetVar ./XsFlux ./mcstat ./hist_rootfiles_xs ./%s'%(target))

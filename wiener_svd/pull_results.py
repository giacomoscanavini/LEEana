import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('./clean_before_import_xs.pl')

os.system('cp ./%s/output.root ./'%(target))
os.system('cp ./%s/wiener.root ./'%(target))
os.system('cp ./%s/merge_xs.root ./'%(target))

os.system('cp -rf ./%s/DetVar ./'%(target))
os.system('cp -rf ./%s/XsFlux ./'%(target))
os.system('cp -rf ./%s/mcstat ./'%(target))
os.system('cp -rf ./%s/hist_rootfiles_xs ./'%(target))

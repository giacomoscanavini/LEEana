import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('./clean_before_import_xs.pl')

os.system('cp -rf ./%s/* ./'%(target))
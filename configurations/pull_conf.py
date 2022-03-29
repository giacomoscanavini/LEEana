import os
import sys

# Pass new folder name as argument to script
target = sys.argv[1] 

os.system('cp ./%s/*.txt ./'%(target))
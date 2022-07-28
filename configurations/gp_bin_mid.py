import os
import sys
import numpy as np

low = float(sys.argv[1])
high = float(sys.argv[2])
bins = int(sys.argv[3])+1

edges = np.linspace(low, high, bins)
mid = [x+(y-x)/2. for x,y in zip(edges[:],edges[1:])]
mid.append(mid[-1]+(mid[-1]-mid[-2]))

print(mid)
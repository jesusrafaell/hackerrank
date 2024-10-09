#!/bin/python3

import sys

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
		x,y,z = 1,2,3
		sum = 2
		while z < n:
				if not z % 2:
						sum += z
				x,y,z = y,z,y+z
		print(sum)
					

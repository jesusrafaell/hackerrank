#!/bin/python3

import math
import os
import random
import re
import sys


def encryption(s): 
		l = len(s)
		r = int(math.floor(l**(0.5)))
		c = int(math.ceil(l**(0.5)))
		out = ""
		for i in range(c):
				k=i
				for j in range(k,l,c):
						out += s[j]

				out += " "
		return out

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		s=input()
		result = encryption(s)
		print(result)

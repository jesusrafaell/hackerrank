#!/bin/python3

import math
import os
import random
import re
import sys

numbers = ["zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "quarter", "fifteen", "sixteen", "seventeen" ,"eighteen", "nineteen", "twenty"]

def minutes(m):	
    if int(m) == 1:
        return "one minute" 
    elif m == 15:
        return "quarter"
    elif m == 30:
        return "half" 
    else:
        number = 0
        if m <= 20:
            number = numbers[m] 
        else:
            number = numbers[20] + " " + numbers[m % 10]
        return number + " minutes"

def solution(h,m):
		#"o' clock"
		if int(m) == 0:
				return numbers[int(h)] + " o' clock"
		elif int(m) <= 30:
				return minutes(int(m)) + " past " + numbers[int(h)]
		# int(m) > 30
		else: 
				n = str(60 - int(m))
				if int(h) == 12:
						h = 0
				return minutes(int(n)) + " to " + numbers[int(h)+1]

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		h=input()
		m=input()
		result = solution(h,m)
		print(result)

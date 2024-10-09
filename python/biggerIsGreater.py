#!/bin/python3

import math
import os
import random
import re
import sys


def solution(w):
		arr = list(w)
		
		i = len(arr) - 1
		while i > 0 and (arr[i - 1] >= arr[i]):
				i -= 1
		if i <= 0:
			return "no answer"

		j = len(arr) - 1
		while arr[j] <= arr[i-1]:
			j -= 1
		arr[i-1], arr[j] = arr[j], arr[i - 1]

		arr[i:] = arr[len(arr)-1: i-1: -1]
		return "".join(arr)

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		s=input()
		result = solution(s)
		print(result)

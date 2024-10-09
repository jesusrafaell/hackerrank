#!/bin/python3

import sys

t = int(input().strip())

for a0 in range(t): 
    n = int(input().strip())
    m_3 = (n - 1) // 3
    m_5 = (n - 1) // 5
    m_15 = (n - 1) // 15
    sum = (
        3 * m_3 * (m_3 + 1) // 2 +
        5 * m_5 * (m_5 + 1) // 2 -
        15 * m_15 * (m_15 + 1) // 2
    )
    print(sum)

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumBribes function below.
def minimumBribes(q):
    total = 0
    for index in range(len(q) - 1, -1, -1):
        if (q[index] - (index + 1)) > 2:
            return "Too chaotic"
        for index_j in range(max(0, q[index] - 2), index):
            if q[index_j] > q[index]:
                total += 1
    return total

if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        n = int(input())

        q = list(map(int, input().rstrip().split()))

        print(minimumBribes(q))


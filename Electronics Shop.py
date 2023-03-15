#!/bin/python3

import os
import sys

#
# Complete the getMoneySpent function below.
#
def getMoneySpent(keyboards, drives, b):
    money = -1
    
    for i in keyboards:
        for j in drives:
            if i+j<=b:
                money = max(money,i+j)
    return money

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    bnm = input().split()

    

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    binary = str(bin(n)).strip('0b')
    maximum = 0
    temp_maximum = 0

    for number in binary:
        if number == '1':
            temp_maximum+=1
        else:
            maximum = max(maximum,temp_maximum)
            temp_maximum = 0
    
    print(max(maximum,temp_maximum))

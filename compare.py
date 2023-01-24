#!/usr/bin/python3

import time
import sys


def print_out(loob):
    if loob == True:
        print("\nGreat\nYou Passed\n")
    if loob == False:
        print("\nSorry, Try again\n")
def main():
    print(".."); time.sleep(2)
    with open(sys.argv[1], "r") as f1:
        f1text = f1.read()
        with open(sys.argv[2], "r") as f2:
            f2text = f2.read()
            if f2text == f1text:
                print_out(True)
            else:
                print_out(False)
    
main()

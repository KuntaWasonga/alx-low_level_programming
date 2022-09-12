#!/bin/usr/python3
def safe_print_division(a, b):
   try:
       quotient = int(a) / int(b)
       print("{}".format(quotient))

    except ZeroDivisionError:
        quotient = "None"

    finally:
        print("Inside result: {}".format(quotient))

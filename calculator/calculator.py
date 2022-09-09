"""
Author: Ravisankar
Date: 09.09.2022
Email: ravisankar@dummygmail.com
"""

add = lambda a, b: a + b
substract = lambda a, b: a - b
multiply = lambda a, b: a * b
def division(a, b):
	if b == 0: raise Exception("Can't divide by 0!")
	return a / b

def initilization():
	print("Initiating Calculator ...")
	operation = input("> Choose an operation (+, -, *, /): ")
	number_1 = int(input("> Enter Num 1: "))
	number_2 = int(input("> Enter Num 2: "))
	if operation == "+":
		print(f"* Result is {add(number_1, number_2)}")
	elif operation == "-":
		print(f"* Result is {substract(number_1, number_2)}")
	elif operation == "*":
		print(f"* Result is {multiply(number_1, number_2)}")
	elif operation == "/":
		print(f"* Result is {division(number_1, number_2)}")
	


def main():
	initilization()



main()

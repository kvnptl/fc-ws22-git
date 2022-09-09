"""
Author: Ravisankar
Date: 09.09.2022
Email: ravisankar@dummygmail.com
"""

def add(a, b):
	return a + b

def initilization():
	print("Initiating Calculator ...")
	operation = input("> Choose an operation (+): ")
	number_1 = int(input("> Enter Num 1: "))
	number_2 = int(input("> Enter Num 2: "))
	if operation == "+":
		print(f"* Result is {add(number_1, number_2)}")
	


def main():
	initilization()



main()

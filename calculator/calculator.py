"""
Author: Ravisankar
Date: 09.09.2022
Email: ravisankar@dummygmail.com
"""

def add(num_1, num_2):
	"""
	This function adds the two numbers num_1 + num_2.
	Parameters:
		num_1 (int): The left-side number of the operation.
		num_2 (int): The right-side number of the operation.
	Returns:
		int: Result of the arithmetic summation operation of the two numbers num_1, num_2.
	"""
	return num_1 + num_2
def substract(num_1, num_2):
	"""
	This function substracts the two numbers num_1 - num_2.
	Parameters:
		num_1 (int): The left-side number of the operation.
		num_2 (int): The right-side number of the operation.
	Returns:
		int: Result of the arithmetic substraction operation of the two numbers num_1, num_2.
	"""
	return num_1 - num_2
def multiply(num_1, num_2):
	"""
	This function adds the two numbers num_1 * num_2.
	Parameters:
		num_1 (int): The left-side number of the operation.
		num_2 (int): The right-side number of the operation.
	Returns:
		int: Result of the arithmetic multiplication operation of the two numbers num_1, num_2.
	"""
	return num_1 * num_2
def division(num_1, num_2):
	"""
	This function adds the two numbers num_1 / num_2.
	Parameters:
		num_1 (int): The left-side number of the operation.
		num_2 (int): The right-side number of the operation.
	Returns:
		int: Result of the arithmetic division operation of the two numbers num_1, num_2.
	"""
	if num_2 == 0: raise Exception("Can't divide by 0!")
	return num_1, num_2

def initilization():
	print("Initiating Calculator ...")

	


def main():
	initilization()



main()

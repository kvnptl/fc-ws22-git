import math
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
	This function multiplies the two numbers num_1 * num_2.
	Parameters:
		num_1 (int): The left-side number of the operation.
		num_2 (int): The right-side number of the operation.
	Returns:
		int: Result of the arithmetic multiplication operation of the two numbers num_1, num_2.
	"""
	return num_1 * num_2
def division(num_1, num_2):
	"""
	This function divides the two numbers num_1 / num_2.
	Parameters:
		num_1 (int): The left-side number of the operation.
		num_2 (int): The right-side number of the operation.
	Returns:
		int: Result of the arithmetic division operation of the two numbers num_1, num_2.
	"""
	if num_2 == 0: raise Exception("Can't divide by 0!")
	return num_1 / num_2


#program to calculate exponential, log base 2, and log base 10

def initilization():
    print("Initiating Calculator ...")


#this function count the exponential of a number
def exponential(x, n):
    return pow(x, n)

#function for log base 2
def log_2(x):
    return math.log2(x)

#function for log base 10
def log_10(x):
    return math.log10(x)


def main():
    initilization()


main()

#mesagges to show options and take input
print("Calculating options:")
print("1.Exponential")
print("2.Log base 2")
print("3.Log base 10")

option = input("Option number: ")

if option in ('1', '2', '3'):
    x = int(input("Enter any number: "))

    if option == '1':
        n = int(input("To the power of: "))
        print(x, "^", n, "=", exponential(x, n))
    
    elif option == '2':
        print(x, "Log 2 =", log_2(x))
        
    elif option == '3':
        print(x, "Log 10 =", log_10(x))
   
            
else:
    print("Try again!")
        



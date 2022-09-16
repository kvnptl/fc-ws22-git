"""
Author: Ravisankar
Date: 09.09.2022
Email: ravisankar@dummygmail.com
"""

def initilization():
	print("Initiating Calculator ...")

def nth_power(a,b):
	"""Calculates the a to the power of b
	Args:
		a - int
		b - int
	"""
	try:
		power = a**b
		return(power)
	except Exception as e:
		print("Something went wrong. Reason: "+e)

def nth_root(a,b):
	"""Calculates the bth root of a
	Args:
		a - int
		b - int
	"""	
	try:
		root = a*(1/b)
		return(root)
	except Exception as e:
		print("Something went wrong. Reason: "+e)


def main():
	initilization()



main()

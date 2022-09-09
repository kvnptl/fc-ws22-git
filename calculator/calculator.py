"""
Author: Ravisankar
Date: 09.09.2022
Email: ravisankar@dummygmail.com
"""

def initilization():
	print("Initiating Calculator ...")

def exponential(a,b):
	"""Calculates the nth power and nth root"""
	try:
		power = a**b
		root = a*(1/b)
		return(power,root)
	except Exception as e:
		print("Something went wrong. Reason: "+e)



def main():
	initilization()



main()

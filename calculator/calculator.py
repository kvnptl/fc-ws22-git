"""
Author: Ravisankar
Date: 09.09.2022
Email: ravisankar@dummygmail.com
"""

def initilization():
	print("Initiating Calculator ...")

	


def main():
	initilization()

def RectangleCalculator(width,length):
    w=int(input("Enter Rectable width: "))
    l=int (input("Enter Rectable length: "))
    prem=2*(w+l)
    print ("perimeter of The Rectrangle: ",prem)
    area=w*l
    print ("area of The Rectrangle: ",area)
    return (prem,area)

def TriangleCalculator(edge):
    import math
    edge=int(input("Enter Triangle Edge: "))
    prem=3*(edge)
    area=math.sqrt(3)*(edge**2)/4
    print ("Premiter of The Triange: ",prem)
    print ("area of The Triange: ",area)
    return (prem,area)

main()

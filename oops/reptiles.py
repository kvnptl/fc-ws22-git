'''
Source code for Reptiles

Author: Kumbashi
'''

class Reptile:
    def __init__(self,name, length, is_venemous):
        self.name=name
        self.length=length
        self.is_venemous=is_venemous

    def crawl(self):
        print(f"My name is {self.name} and I am gonna crawl now")
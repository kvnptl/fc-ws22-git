'''
Source code for Animals

Author: Kumbashi
'''

class Animal:
    def __init__(self,name, height, is_perdator):
        self.name=name
        self.height=height
        self.is_predator=is_perdator

    def introduce(self):
        print(f"My name is {self.name} and I am {self.height} m tall")
#import Animal; #importing Animal File not class
from animal import Animal as A; # In this way it is not necessary to use Animal.Animal

class Monkey(A): # It means Monkey Extends The Animal Class
    
    def __init__(self,name,height,is_predator, monkey_type,color,country) -> None:
        super().__init__(name,height,is_predator)
        self.monkey_type=monkey_type;
        self.color=color
        self.country=country
        


    def sound(self, scream_duration): # We overrode the sound function!
        print (f"I can scream FOR {scream_duration} seconds")

    def jump(self,height):
        print(f' I can jump {height} feet.')

chimp=Monkey('Monkey',500,True,"chimp","Brown","India");
chimp.sound(120)
print(chimp)

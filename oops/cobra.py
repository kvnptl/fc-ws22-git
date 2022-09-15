from re import I
from animal import Animal 
from reptiles import Reptile

class Cobra(Animal,Reptile):
    '''
    Params: ame, height, is_predator, monkeytype, color, country
    '''
    def __init__(self,name, length, is_predator,is_venemous,color,country):
        super().__init__(name,length,is_predator)
        super(Animal,self).__init__(name,length,is_venemous)
        self.color=color
        self.country=country
        self.is_venemous=is_venemous
        self.length=length

    def sound(self,scream_duration):
        print(f'I can scream for {scream_duration}')

    def jump(self,jump_height):
        print(f'I can jump to {jump_height}')


Cobra('Cobra','1.2',True,True,'blue','India').crawl()
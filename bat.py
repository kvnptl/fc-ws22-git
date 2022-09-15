        
'''
Base template for bat

'''

from mammal import Mammal as m
from wingedanimal import WingedAnimal as wa

class Bat(m,wa):

    '''
    Params: name, height, is_warm_blooded, is_flying, color, ancestor, is_predator
    '''

    def __init__(self,__name, height,is_warm_blooded, is_flying, color, ancestor, is_predator=False):
        super().__init__(__name, height,is_warm_blooded)
        super().__init__(is_flying, color, ancestor)

        self.is_predator=is_predator

    def speed(self, magnitude):
        print(f'My speed is {magnitude}.')

    def sound(self, sound_type, pitch):
        self.sound_type=sound_type
        if pitch>20000:
            print(f"I produce {sound_type}, you can't hear me")
        else:
            print(f"I don't produce {sound_type}, you can hear me")

bat=Bat('bat',1, True, True, 'brown','Dinosaur',True)
bat.speed(300)
bat.sound('high pitched sound',30000)


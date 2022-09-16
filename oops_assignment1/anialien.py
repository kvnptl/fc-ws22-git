'''
Create a child class with Alien and Animal as parent class
We are using this as a child class
'''
from pickle import FALSE, TRUE
from animal import Animal
from alien import Alien

class Anialien(Animal,Alien):
    '''
    Params: name, height, is_predator,alien_name, color, eye_count, child_type, is_hybrid
    '''
    def __init__(self, name, height, is_predator,alien_name, color, eye_count, child_type):
        #super(child_type, self).__init__(name, height, is_predator,alien_name, color, eye_count)
        Alien.__init__(self,alien_name, color, eye_count)
        Animal.__init__(self, name, height, is_predator)
        self.child_type = child_type
    
    def planet(self, is_from_earth):
        self.native_planet = 'EARTH'
        if is_from_earth:
            print(f'I am anialien from planet {self.native_planet}')
        else:
            print(f'I am an anialien but I am not from EARTH')

    def sound(self, is_normal_sound):
        self.db = 19
        self.sound_type = 'Oo Oo Oo Oooooooo'
        if is_normal_sound:
            print(f'I have a normal sound and my decibles is {self.db}')
        else:
            print(f'My sound decibles is not normal and the decibles is {self.db}')

aniAlien = Anialien('Tiger_53vVN',16,False,'53V3N_Tiger','Brown',4,'AniAlien')
aniAlien.planet(TRUE)
aniAlien.sound(FALSE)
print(aniAlien)
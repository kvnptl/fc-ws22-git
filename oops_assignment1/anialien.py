'''
Create a child class with Alien and Animal as parent class
We are using this as a child class
'''
from pickle import FALSE, TRUE
from animal import Animal
from alien import Alien

class Anialien(Animal,Alien):
    '''
    Params: name, height, is_predator,alien_name, color, eye_count, child_type
    '''

    #creating init function for Anialient class
    # def __init__(self, child_type,  **kwargs): #using kwargs to use the params in child super class
    def __init__(self,name, height, is_predator,alien_name, color, eye_count, child_type):
        Animal.__init__(self,name, height, is_predator)
        Alien.__init__(self,alien_name, color, eye_count)
        self.child_type = child_type
    
    #To check which planet the Anialien belongs to
    def planet(self, is_from_earth):
        self.native_planet = 'EARTH'
        self.limbs_count = 5
        if is_from_earth:
            print(f'I am anialien from planet {self.native_planet}')
        else:
            print(f'I am an anialien but I am not from EARTH')
    
    #To check if the sound of this creature is normal or abnormal
    def sound(self, is_normal_sound):
        self.db = 19
        self.sound_type = 'Oo Oo Oo Oooooooo'
        if is_normal_sound:
            print(f'I have a normal sound and my decibles is {self.db}')
        else:
            print(f'My sound decibles is not normal and the decibles is {self.db}')

aniAlien = Anialien('Tiger_53V3N',9, TRUE, '5EV3N_Tiger', 'Brown Green', 4, 'Anialien')
aniAlien.planet(TRUE)
aniAlien.sound(TRUE)
print(aniAlien)
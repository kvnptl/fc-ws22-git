'''
Create a class for Aliens
We are using this as a parent class
'''

class Alien:
    '''
    Params: alien_name, color, eye_count
    '''

    #creating init function for Alien class
    def __init__(self, alien_name, color, eye_count):
        self.alien_name = alien_name
        self.color = color
        self.eye_count = eye_count
        
    #checking whch planet the alient is from.
    def planet(self, native_planet): 
        self.native_planet = native_planet
        print(f'I am alien from {native_planet} planet')

    #checking the limb count to see if the alien resembles Humans o animals.
    def limbCount(self, limbs_count):
        self.limbs_count = limbs_count
        if limbs_count != 2 or limbs_count != 4:
            print(f'I am not normal like creatures on Earth and I have {limbs_count} limbs')
        else:
            print(f'I am normal like Earth creatures and I have {limbs_count} limbs')

    def __str__(self):
        return f'I am {self.alien_name} and I come from {self.native_planet} planet. I have {self.limbs_count} limbs'
    def __repr__(self):
        pass
alien = Alien('E3Xn4','Teal',3)
# alien.planet("Pluto")
# alien.limbCount(6)
# print(alien)
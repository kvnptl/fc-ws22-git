from animal import Animal
from reptile import Reptile


class Crocodilian(Animal, Reptile):
    '''
    Params: name, height, is_predator, skin_type, is_ectothermic, no_of_legs, monkey_type, color, country
    '''

    def __init__(self, name, height, is_predator, skin_type, is_ectothermic,no_of_legs, skin_color, habitat_range, behaviour):
        Animal.__init__(self, name, height, is_predator)
        Reptile.__init__(self, skin_type,is_ectothermic,no_of_legs)
        self.skin_color = skin_color
        self.habitat_range = habitat_range
        self.behaviour = behaviour

    #polymorphism - overriding
    def sound(self):
        self.sound_type = 'hiss'

    def about_me(self):
        print(f'My skin color is {self.skin_color}. I live in {self.habitat_range}. I am {self.behaviour}.')

    def basking(self, basking_length):
        print(f'I can bask for {basking_length} minutes.')


crocodile = Crocodilian('Crocodile', 3, True, 'scaly', True, 4, 'brown', 'Equator or Tropical', 'shy but aggresive')
crocodile.sound()
crocodile.basking(20)
crocodile.about_me()
print(crocodile)

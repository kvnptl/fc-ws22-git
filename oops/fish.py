from animal import Animal, AquaticAnimal

class Fish(Animal, AquaticAnimal):
    def __init__(self, names, height, is_predator, fish_name, fish_type, color, country):
        Animal.__init__(self,names, height, is_predator)
        AquaticAnimal.__init__(self,fish_name, fish_type)

        self.fish_type = fish_type
        self.color = color
        self.country = country
        self.height = height

    def fish_size(self):
        print(f'My size is {self.height}cm.')

goldfish = Fish('fish', 4, False, 'goldfish', 'freshwater', 'golden', 'China')
goldfish.fish_types()
goldfish.introduce()
goldfish.introduce_yourself()
goldfish.fish_size()

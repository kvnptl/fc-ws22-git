from animal import Animal, AquaticAnimal

class Fish(Animal, AquaticAnimal):
    def __init__(self, name, height, is_predator, fish_name, fish_type, color, country):
        super().__init__(name, height, is_predator)
        super().__init__(fish_name, fish_type)

        self.fish_type = fish_type
        self.color = color
        self.country = country

    def size(self, size):
        print(f'My size is {size}cm.')

goldfish = Fish('fish', 4, False, 'goldfish', 'freshwater', 'golden', 'China')
goldfish.type()
goldfish.introduce()

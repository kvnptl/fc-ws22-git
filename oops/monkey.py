from animal import Animal

class Monkey(Animal):
    def __init__(self,name, height, is_predator, monkey_type, color, country):
        super().__init__(name, height, is_predator)

        self.monkey_type = monkey_type
        self.color = color
        self.country = country

    def sound(self, scream_duration):
        self.sound_type = 'chatter'
        self.name = 'new_monkey'
        print(f'I can scream for {scream_duration}')

    def jump(self, jump_height):
        print(f'I can jump {jump_height} feet.')

chimp = Monkey('monekey', 4, False, 'chimp', 'brown', 'India')
chimp.sound(2)

from animal import Animal


class Monkey(Animal):
    '''
    Params: name, heignt, is_predator, monkey_type, color, country
    '''
    def __init__(self, name, heignt, is_predator, monkey_type, color, country):
        super().__init__(name, heignt, is_predator)
        self.monkey_type = monkey_type
        self.color = color
        self.country = country

#polymorphism example
    def sound(self, scream_dur):
        # using private varibale __name in child class using setter in parent
        self.sound_type = 'chatter'
        self.name = 'Gorilla'
        #self._Animal__name = 'Gorilla'
        print(f'I can scream for {scream_dur}seconds.')
    
    def jump(self, jump_height):
        print(f'I can jump {jump_height} feets.')


chimp = Monkey('monkey',4, False,'chimp','brown','India')
chimp.sound(2)
print(chimp)
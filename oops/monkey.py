from oops.animal import Animal as A

class Monkey(A):
    '''
    Params: ame, height, is_predator, monkeytype, color, country
    '''
    def __init__(self,name, height, is_predator, monkeytype, color, country):
        super().__init__(name,height,is_predator)
        self.monkeytype=monkeytype
        self.color=color
        self.country=country

    def sound(self,scream_duration):
        print(f'I can scream for {scream_duration}')

    def jump(self,jump_height):
        print(f'I can jump to {jump_height}')


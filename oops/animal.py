'''
Base tempplate for animal class
'''

class Animal:
    def __init__(self, name = '', height = 0, is_predator = False):
        self.__name = name
        self.height = height
        self.is_predator = is_predator
        self.sound_type = None

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, new_name):
        self.__name = new_name

    def sound(self, signal_type, db):
        self.signal_type = signal_type
        if db > 10:
            print(f"I am loud, don't play me on sundays")
        else:
            print(f'{signal_type}')

    def introduce_yourself(self):
        print(f'I am {self.__name}. My height is {self.height}. Am I a predator? {self.is_predator}')

class AquaticAnimal:
    def __init__(self, fish_name='', fish_type=''):
        self.name = fish_name
        self.type = fish_type


    def type(self):
        print(f'I am {self.type} fish')

    def introduce(self):
        print(f'I am {self.name}. I live in {self.type}')

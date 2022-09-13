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

dog = Animal('dog', 12)
#dog.sound('bark',11)

#dog.introduce_yourself()

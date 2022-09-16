'''
Base template for Animals

What it is?
What it does?

Class names start with capital
Method name start with small letter - methodExample
'''


class Animal:
    is_animal = True

    def __init__(self, name, height, is_predator):
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

    def sound(self, sound_type, db):
        self.sound_type = sound_type
        if db > 10:
            print(f"I am loud, don't play me on sundays")
        else:
            print(f'I {sound_type}')

    def introduce_yourself(self):
        print(
            f'My name is {self.__name}. My height is {self.height}. Am I a predator? {self.is_predator}')
        print(f'I make {self.sound_type} sound')
        print(f'is animal? {Animal.is_animal}')

    def __str__(self):
        return f'I am {self.__name} and I {self.sound_type}'


dog = Animal('dog', 2, True)
crocodile = Animal('crocodile', 3, True)
crocodile.sound('hiss', 2)
crocodile.introduce_yourself()

#dog.sound('bark', 5)
# dog.introduce_yourself()

#dog._Animal__name = 'new dog'
'''
print(dog.name)

dog.name = "new dog"
print(dog.name)

'''

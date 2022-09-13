'''
Create a class for Animals

What it is?

What it does?
private variables are denoted using __ before the variable - eg.: __name
'''

class Animal:
    is_animal = True

    # def __init__(self, name = '', height = 0, is_predator = False):
    def __init__(self, name, height, is_predator ):
        self.__name = name
        self.height = height
        self.is_predator = is_predator
    
    @property
    def name(self):
        return self.__name
    
    @name.setter
    def name(self, new_name):
        self.__name = new_name

    def sound(self, db, sound_type):
        self.sound_type = sound_type
        self.db = db
        if db>10:
            print(f"I'm Loud, don't \"play\" me on Sunday")
        else:
            print(f'I {sound_type}')
    
    def introduceYourself(self):
        print(f'I am {self.__name}. \nMy Height is {self.height}. \nAm I a predator? {self.is_predator}')
        print(f'I make "{self.sound_type}" sound')
        print(f'Is Animal {Animal.is_animal}')
    
    def setPrivate(self, newName):
        self.__name = newName
    
    

    def __str__(self):
        return f'I am {self.__name} -- and -- I {self.sound_type}'

    def __repr__(self):
        pass

dog = Animal("Pug", 2, True)
# dog.sound(67, "Bark")
#dog.introduceYourself()
#dog._Animal__name = "dfds"

#dog.setPrivate("fdff")
# dog.name = "fsfgfd"
# print(dog)
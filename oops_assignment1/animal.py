'''
Create a class for Animals

We are using this as a parent class

What it does?
private variables are denoted using __ before the variable - eg.: __name
'''

class Animal:
    '''
    Params: name,, height, is_predator
    '''
    is_animal = True

    #creating init fucntion
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

    # checking the sound of the animal in db
    def sound(self, db, sound_type): 
        self.sound_type = sound_type
        self.db = db
        if db>10:
            print(f"I'm Loud, don't \"play\" me on Sunday")
        else:
            print(f'I {sound_type}')
    
    #details of the animal as introduction
    def introduceYourself(self):
        print(f'I am {self.__name}. \nMy Height is {self.height}. \nAm I a predator? {self.is_predator}')
        print(f'I make "{self.sound_type}" sound')
        print(f'Is Animal {Animal.is_animal}')
    
    #To change the value of private variable
    def setPrivate(self, newName):
        self.__name = newName
    
    

    def __str__(self):
        return f'I am called {self.__name} and I sound {self.sound_type}'

    def __repr__(self):
        pass

dog = Animal("Pug", 2, True)
# dog.sound(67, "Bark")
# dog.introduceYourself()
# dog._Animal__name = "dfds"
# dog.setPrivate("fdff")
# dog.name = "fsfgfd"
# print(dog)
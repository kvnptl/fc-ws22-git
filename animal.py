'''
Base template for Animals

what is it?

what it does?

class names = starts with capital letter
every class method will take self otherwise it can't acces the class properties
method names = starts with small letter ... camelCase
init is your constructur - 
'''

class Animal:


    is_animal = True

    def __init__(self):
        pass

 #to create an empty instance from the class you have to give default values to the
 #__variable_name = value -  makes it a private variable and to define it
    def __init__(self, name = '', height=8 , is_predator= False):
        self.__name = name
        self.height = height
        self.is_predator = is_predator
        self.sound_type = None 
    #getter for sel.__name variable
    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self,new_name):
        self.__name = new_name

    def sound(self, sound_type, db):
        self.sound_type = sound_type
        if db > 10:
            print(f"I am loud , don't \"play\" me on sunday")
        else:
            print(f'f(sound_type)')

    def introduce_yourself(self):
        print(f'I am{self.__name}. My height is {self.height}.Am I a predator? {self.is_predator}')
        print(f'I make{self.sound_type} sound')
        print(f'is animal? {Animal.is_animal}')

    def __repr__(self):
        return f'I am {self.name}'
        
    def __str__(self):
        return f'I am{self.__name} and I {self.sound_type}'

dog = Animal('dog', 2, True)
#dog.sound('bark', 5)
#dog.introudce_yourself()
#og._Animal__name = 'new dog'

print(dog.name)
dog.name = 'new dog'
print(dog.name)

    


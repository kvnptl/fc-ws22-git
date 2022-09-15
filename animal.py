'''
Base template for Animals
what it is?
what it does?
class names = starts with capital letter
method names = starts with smLL letter...camelCase
self is required, otherwise it can't access class variable
'''

class Animal:
    is_animal=True
    
    #def __init__(self):
    #   pass

    def __init__(self, name='', height=0,is_predator=False):  #give default values for not passing in parameter in cat object
        self.__name=name
        self.height=height
        self.is_predator=is_predator

    @property #getter
    def name(self, new_name):
        return self.__name

    @name.setter
    def name(self,new_name):
        self.__name=new_name

    def sound(self, sound_type, db):
        self.sound_type=sound_type
        if db>10:
            print(f"I am loud, don't \"play\" me on sundays")
        else:
            print(f'f{sound_type}')
    def introduce_yourself(self):
        print(f'I am {self.__name}. My height is {self.height}. Am I a predator?{self.is_predator}')
        print(f'I make {self.sound_type} sound')
        print(f'is animal?{Animal.is_animal}')
    def __repr__(self):
        return f'I am {self.__name}'
    def __str__(self):
        return f'I am {self.__name} and I {self.sound_type}'

dog=Animal('dog',2,True)
dog.sound('bark',5)
dog.introduce_yourself()
#dog.__name='new dog' #can't access private variables without getter and setter
#dog._Animal__name='new dog' #flaw
dog.name='new dog'  #after using getter setter


cat=Animal()

print(dog)

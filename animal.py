"""
Base Template for Animals

What is it ?
What does it?
Class Names Strat With Capital Letters !
Method Names Start With small Letters and use CamelCase !

Each Class should have an init func it is like a constructor.
"""

print("Yuhuuu")

class Animal:
    is_animal=True;
    """def __init__(self) -> None:
        pass;


        Only One Constructor is Possible in Python;
    """
    
    def __init__(self,name='',height=0,is_predator=True) -> None:    # self is used to refer to the instantiated class
        self.__name=name; #   __name is making name var a private one
        self.height=height;
        self.is_predator=is_predator;
        self.sound_type=None
    
    def sound(self,sound_type,db):
        self.sound_type=sound_type
        if db>10:
            print(f"I am loud, don't \"play\" me on sundays")
        else:
            print(f'f{sound_type}');

    def introduce_yourself(self):
        print(f' I am {self.__name}. My height is {self.height}. Am I a predator? {self.is_predator}');
        print(f'I make {self.sound_type}')
        print(f'is Animal? {Animal.is_animal}')


    def __repr__(self): #Representation is used
         return f'I am {self.__name}'

    def __str__(self):
        return f'I am {self.__name} and I {self.sound_type}'

    @property
    def name(self):
        return self.__name;
    
    @name.setter
    def name(self,newName):
        self.__name=newName
"""
animal= Animal('Girrafe',500,True)
animal.sound('Yeheeee',120)
animal.introduce_yourself()

cat=Animal();
cat.introduce_yourself();

animal.__name='New Giraffe' # We cannot change the animal name because name is private.
print(animal)

animal._Animal__name='New Giraffe' # We have bypassed the private variable name here
print(animal)

print(animal.name) #Using Property to access the private var

animal.name='Another Giraffe'  # Using setter for a private varibale
print(animal.name)

"""

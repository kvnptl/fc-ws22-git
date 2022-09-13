from animal import Animal
#animal the name of the file where the class is in

class Monkey (Animal):

    '''
    Params: name, height , is_predator , monkey_type , color m country
    '''
    
    def __init__(self, name, height, is_predator, monkey_type, color, country):
        super().__init__(name,height,is_predator)
        self.moneky_type = monkey_type
        self.color = color
        self.country = country

    #polymorphism - overriding parent class method
    def sound(self, scream_duration):
        self.sound_type = 'chatter'
        self.Animal__name= 'new monkey'
        print(f'I can scream for {scream_duration} seconds')

    def jump(self, jump_height):
        print(f'I can jump{jump_height} feet')

#instaciate - enter an object

chimp = Monkey('monkey',4 , False,'chimp', 'brown','india')
chimp.sound(2)
print(chimp)
#ctrl z to open 
#git init
#git status
#git add animal.py    monkey.py
#git status
#git commit -m "created animal class with monkey"
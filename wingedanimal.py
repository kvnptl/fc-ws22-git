'''
Base template for winged animal

'''

class WingedAnimal:

    def __init__(self, is_flying, color, ancestor):
        self.is_flying=is_flying
        self.color=color
        self.ancestor=ancestor

    def speed(self, new_name, speed_level):
        print(f'I am {new_name}. I can fly and my speed is {speed_level}')

flying_squirrel=WingedAnimal(True, 'brown','beaver')
flying_squirrel.speed('flying_squirrel','high')

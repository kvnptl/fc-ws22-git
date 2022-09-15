'''
Base template for Mammals

'''

class Mammal:
    is_mammal=True

    def __init__(self, name='', height=0,is_warm_blooded=False):
        self.__name=name
        self.height=height
        self.is_warm_blooded=is_warm_blooded

    @property #getter
    def name(self, new_name):
        return self.__name

    @name.setter
    def name(self,new_name):
        self.__name=new_name


    def introduce_yourself(self):
        print(f'I am {self.__name}. My height is {self.height}. Am I a warm-blooded? {self.is_warm_blooded}')
    
    '''def __repr__(self):
        return f'I am {self.__name}'
    def __str__(self):
        return f'I am {self.__name} and I have a height of {self.height}'
'''

tiger=Mammal('tiger',4,True)
tiger.introduce_yourself()





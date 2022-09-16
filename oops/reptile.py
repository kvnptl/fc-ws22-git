class Reptile:
    def __init__(self, skin_type, is_ectothermic, no_of_legs):
        self.skin_type = skin_type
        self.is_ectothermic = is_ectothermic
        self.no_of_legs = no_of_legs

    def my_characteristic(self):
        print(f'My skin is {self.skin_type}. I have {self.no_of_legs} legs. Am I ectothermic? {self.is_ectothermic}')

crocodile = Reptile('scaly', True, 4)
crocodile.my_characteristic()
'''
Base template for Animals

what it is?

what it does?

class names = starts with capital letter

method names = starts with small letter... camelCase

'''

class Animal:

	is_animal = True

	def __init__(self, name, height, is_predator):
		self.__name = name
		self.height = height
		self.is_predator = is_predator
		self.sound_type = None

	# getter for self.__name variable
	@property
	def name(self):
		return self.__name

	@name.setter
	def name(self, new_name):
		self.__name = new_name	

	def sound(self, sound_type,  db):
		self.sound_type = sound_type
		if db > 10:
			print(f"I am loud, don't \"play\" me on sundays")
		else:
			print(f'I {sound_type}')

	def introduce_yourself(self):
		print(f'I am {self.__name}. My height is {self.height}. Am I a predator? {self.is_predator}')
		print(f'I make {self.sound_type} sound')
		print(f'is animal? {Animal.is_animal}')

	def __repr__(self):
		return f'class variables:'

	def __str__(self):
		return f'I am {self.__name} and I {self.sound_type}'

dog = Animal('dog',  2, True)
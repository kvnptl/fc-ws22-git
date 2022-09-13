from animal import Animal

class Monkey(Animal):
	
	'''
	Params: name, height, is_predator, monkey_type, color, country
	'''
	def __init__(self, name, height, is_predator, monkey_type, color, country):
		super().__init__(name, height, is_predator)
		self.monkey_type = monkey_type
		self.color = color
		self.country = country

	# polymorphism - overriding parent class method
	def sound(self, scream_duration):
		self.sound_type = 'chatter'
		self.name = 'new monkey'
		print(f'I can scream for {scream_duration} seconds')

	def jump(self, jump_height):
		print(f'I can jump {jump_height} feet.')

chimp = Monkey('monkey', 4, False, 'chimp', 'brown', 'india')
chimp.sound(2)
print(chimp)
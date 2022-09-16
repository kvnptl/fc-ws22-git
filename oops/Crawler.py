class Crawler:
    def __init__(self,speed) -> None:
        self.__speed=speed;
    
    @property
    def speed(self):
        return self.__speed;

    @speed.setter
    def speed(self, new_speed):
        self.__speed = new_speed;
    
    def crawl(self):
        print (f"I'm crawling with speed {self.__speed}.");
    

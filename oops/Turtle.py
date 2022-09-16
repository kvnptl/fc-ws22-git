from animal import Animal;
from Crawler import Crawler;

class Turtule(Animal,Crawler):
    def __init__(self, name, height, is_predator):
        super().__init__(name, height, is_predator);

    def crawl (self,direction,speed):
        print('I am crawling with speed {speed} and in direction {direction}');





ts=Turtule('Andy',20,True);
print(ts)
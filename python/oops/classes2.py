class Abhay:
    lst=[]
    def __init__(self, name):
          self.name = name
    def add_trick(self, trick):
        self.lst.append(trick)
       
ab=Abhay("hello")
ab.add_trick('hi how are you')
print(ab.lst)
Abhay.add_trick()
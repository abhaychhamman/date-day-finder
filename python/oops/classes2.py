class Abhay:
    lst=[]
    def __init__(self, name):
          self.name = name
    def add_trick(self, trick):
        self.lst.append(trick)
       
ab=Abhay("hello")
ab.add_trick('hi how are you')
 
ab.add_trick( "abhay")
ab.add_trick("akash")
j=" "
for i in ab.lst:
    j+=i+" "
print(ab.name+j)
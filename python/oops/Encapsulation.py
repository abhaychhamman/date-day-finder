class Base:
    def __init__(self):
        self.a="abhay"
        self.__c="akash"
        print(self.__c)


class Derived(Base):
    def __init__(self):
        
        Base.__init__(self)
        print("calling private member of base class:")
        print(self.__c)


obj1=Base()
print(obj1.a)
# print(obj1.__c)

# obj2=Derived()
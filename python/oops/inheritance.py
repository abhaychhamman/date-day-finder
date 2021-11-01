class Person():
    def __init__(self, name, idnumber):
        self.name = name
        self.idnumber = idnumber

    def display(self):
        print(self.name)
        print(self.idnumber)

    def details(self):
        print("My name is {}".format(self.name))
        print("idnumber is {}".format(self.idnumber))


class Employee(Person):

    def __init__(self, name, idnumber, salary, post):
        self.salary = salary
        self.post = post

        Person.__init__(self, name, idnumber)


    # def  details(self,abhay):
    #     print("My name is {}".format(self.name))
    #     print("idnumber is {}".format(self.idnumber))
    #     print("salary is {}".format(self.salary))
    #     print("post is {}".format(self.post))

info=[]
message=["name","idnumber","salary","post"]
for i in range(4):
    info.append(input("enter "+message[i]))

a=Employee(info[0],info[1],info[2],info[3])  
print("\n\n\n\n\n")  

a.display()
print("\n\n")  
a.details()




        
    
        

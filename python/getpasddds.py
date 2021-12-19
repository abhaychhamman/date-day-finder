import getpass
a = getpass.getpass(prompt='enter password')
b = getpass.getuser()

print(a)
if a=='abhay':
    print("unlock successfullky?")
else:
    print("sorry try again")
print(b)
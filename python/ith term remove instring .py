str="this is abhay"
new_str=""
a=int(input("enter your index which you want to remove character"))-1
for i in range(len(str)):
    if i!=a:
        new_str=new_str+str[i]
print(new_str)
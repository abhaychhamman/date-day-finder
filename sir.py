str=input("Enter any string \n")
str1=""
L=str
a='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
j=1
for i in L:
    if j==1 or j==6 or j==9:
        str1+=a[a.index(i)+26]
    else:
        str1+=i
    j+=1

print(str1)
    
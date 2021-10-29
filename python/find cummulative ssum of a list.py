lst =[10,20,30,40]
newlst=[]
j=0
for i in range(0,len(lst)):
    j+=lst[i]
    newlst.append(j)
print(newlst)
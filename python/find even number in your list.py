a=[1,2,3,4,32,34,3,54]
newa=[]
for i in  a:
    if i%2!=0:
        continue
    else:
        newa.append(i)
print(newa)

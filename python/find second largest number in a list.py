lst=[2,3,4,3,7,6,7,7,3,5]
lst.sort()
a=20
for i in range(2,a):
    i=-i
    print(lst[-1],lst[i])
    if lst[-1]==lst[i]:
        print("th",lst[-i])
        continue;
    else:
        print(lst[i])
        break
     
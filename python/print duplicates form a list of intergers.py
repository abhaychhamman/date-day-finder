def Repeat(x):
    size=len(x)
    repeated=[]
    for i in range(size):
        k=i+1 
        for j in range (k,size):
            if x[i]==x[j] and x[i]is not repeated:
                repeated.append(x[i])
    return repeated
lst=[1,2,3,4,2 ]
print(Repeat(lst))

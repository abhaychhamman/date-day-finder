lst=[2,3,4,3,43,35,3,53,5,35,35,3,2,2]
def divide_chunks(lst,n):
    for i in range(0,len(lst),n):
        print(i,n)
        yield lst[i:i+n]

n=4
x=list(divide_chunks(lst,n))
print(x)

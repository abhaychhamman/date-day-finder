pos1=int(input("enter first position"))
pos2=int(input("enter second position"))
lst=[2,10,45,20,3,5]
temp=lst[pos1-1]
lst[pos1-1]=lst[pos2-1]
lst[pos2-1]=temp
print(lst)
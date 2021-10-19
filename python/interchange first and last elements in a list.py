lst=[2,10,45,20,3,5]
temp=lst[0]
lst[0]=lst[-1]
lst[-1]=temp
print(lst)
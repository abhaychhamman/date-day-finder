arr=[1,2,3,4,5,6,7,8,9,10,11,12,13]
new_arr=arr.copy()
ind=int(input("enter your position which you want to rotate in array?"))
indexa=ind-1
for i in range(0,ind):
    new_arr[i]=arr[indexa]
    i+=1
    indexa-=1
print(new_arr)
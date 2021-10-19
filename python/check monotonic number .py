arr=[1,2,3,4,5]
a=0
if arr[0]<arr[1]:
    for i in range(1,len(arr)):
        if arr[i-1]<arr[i]:
            a+=1
        else:
            print("not monotonic")  
            break   

elif arr[0]>arr[1]:
    for i in range(1,len(arr)):
        if arr[i-1]>arr[i]:
            a+=1
        else:
            print("not monotonic")  
            break      

if a==len(arr)-1:
    print("monotonic")

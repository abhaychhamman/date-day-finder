import operator
arr=[]
a=10

while a>0:
    num=input(">>>")
    if num=="":
        break
    arr.append(int(num))    
    a-=1
print(f'your array is {arr}')
 
 
arr.sort(reverse=False)
print(arr[len(arr)-1])
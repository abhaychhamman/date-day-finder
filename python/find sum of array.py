arr=[]
a=10
while a>0:
    num=input(">>>")
    if num=="":
        break
    arr.append(int(num))    
    a-=1
print(f'your array is {arr}')
a=0
for i in arr:
    a=a+i
print(a)

a=int(input('''enter your number's postion which you want to print from fibonocci series'''))
arr=[1,1]
for i in range(2,a):
    b=arr[i-1]+arr[i-2];
    arr.insert(i,b)
    
print(arr[a-1])
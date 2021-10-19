a=int(input('''enter your number which you want to present in  fibonocci series'''))
arr=[1,1]
for i in range(2,a):
    b=arr[i-1]+arr[i-2];
    arr.insert(i,b)
    if arr[i]==a:
        print('this is fibonocci series number')
        break
    elif arr[i]>a:
        print('your number not present in fibonocci series')
        break;
    
 
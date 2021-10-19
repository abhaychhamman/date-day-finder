start=int(input('enter starting number?'))
end=int(input('enter ending number?'))
#this is my prime number find
for i in range(start,end+1):
    if i>1:
        for j in range(2,i):
            if(i % j==0):
               print(f'not prime{i}')
               break
            else:
                print(i)

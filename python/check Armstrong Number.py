num=input('enter your number which you want to verify armstrong?')
i,total=0,0
while len(num)>i:
    con=int(num[i])**len(num)   
    total+=con
    i+=1
if int(num)==total:
    print('your number is Armstrong Number!')
else:
    print('Number not Armstrong!')
 
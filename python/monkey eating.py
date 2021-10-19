import math
import random
n=int(input("enter number of monkeys"))
m=int(input("enter number of bananas"))
p=int(input("enter number of peanuts"))
k=int(input("enter one time bananas eat monkey"))
j=int(input("enter one time peanuts eat monkey"))
total=0
if  math.floor(m/k)+math.floor(p/j)>=n:
    print("total remaining monkeys :0")
    exit()

if j>0 and k>0 and n>0 and k>0 and m>0 and m>k and p>j:

    for i in range(n):
        choice =random.randrange(0,2)
        
        if m<k:
            choice=0
            m=0
        elif p<j:
            choice=1
            p=0
        if p==0 and m==0:
            break
        
        if choice==1 and m>=k:
            m=m-k
            total=total+1
        elif choice==0 and p>=j:
            p=p-j
            total=total+1
    print("total remaining monkeys :",n-total)
else:
    print('Invalid Entry')
        
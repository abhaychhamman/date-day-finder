n=int(input("enter number of monkeys"))
m=int(input("enter number of bananas"))
p=int(input("enter number of peanuts"))
j=int(input("enter one time bananas eat monkey"))
k=int(input("enter one time peanuts eat monkey"))
total=0
while n>0:
    total=total+1
    if m<j and p<k:
        n=0
        break
    else:
        if n%2==0:
            m=m-j
        else:
            p=p-1
print(total)
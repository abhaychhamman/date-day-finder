import math
a="khokho"
a_half=math.floor(len(a)/2+1)
total=0
for i in range(0,a_half):
    if a[i]==a[-i-1]:
        total+=1
    else:
        print("your number not a pallindrome")
        break

print(total)
if(total==a_half):
    print("your number  a pallindrome")


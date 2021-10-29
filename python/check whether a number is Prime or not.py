import math
a = int(input('enter your number'))
b = math.floor(math.sqrt(a))
d = 0
if a % 2 == 0 or a % 3 == 0 or a % 5 == 0 or a % 7 == 0:
    print('you number not a prime number')
elif b <= 10:
    print('you number is prime')
else:
    for i in range(11, b+1, 2):
        if a % i == 0:
            print('this is not  prime  number')
            break
        else:
             d += 1
if(d > 0):
    print('number is prime')

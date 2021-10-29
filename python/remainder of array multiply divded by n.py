n=int(input("enter your number which you want to divided by array?"))
arr=[2,5,4,2,3]
mtotal=1
for i in range(0,len(arr)):
    mtotal=mtotal*arr[i]
print(mtotal,mtotal%n)
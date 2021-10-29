a=[ [2,1,4],
    [3,2,2],
    [4,5,6]
  ]
res=[]
k=int(input("enter your kth column number which you want to find ? "))-1
for i in range(0,len(a)):
    res.append(a[i][k])
print(res)
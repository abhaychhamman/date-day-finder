a=[ [2,3,4],
    [3,4,5],
    [4,5,6]
  ]
total=1

for i in range(0,len(a )):
    for j in  range(0,len(a )):
        
        total*=a[i][j]
print(total)
       
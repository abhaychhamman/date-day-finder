a=[ [2,1,4],
    [3,2,2],
    [4,5,6]
  ]
result=[ [0,0,0],
   [0,0,0],
    [0,0,0],
  ]
 
# print(a)
for i in range(0,len(a )):
    for j in  range(0,len(a )):
         
        result[i][j]=a[j][i]
print(result)       

       
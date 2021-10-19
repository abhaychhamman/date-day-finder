a=[ [2,3,4],
    [3,4,5],
    [4,5,6]
  ]

b=[ [2,3,4],
    [3,8,5],
    [4,5,6]
  ]
  
result=[ [0,0,0],
   [0,0,0],
    [0,0,0],
  ]

# print(len(]))
for i in range(0,len(a)):
    for j in range(0,len(a)):
        # print(a[i][j])
        result[i][j]=a[i][j]+b[i][j]
print(result)        
 
 
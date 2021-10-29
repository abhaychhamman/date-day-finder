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

total=0
 
for i in range(0,len(a)):
    
    for j in range(0,len(b[0])):
         
        for k in range(0,len(b)):
            result[i][j]+=a[i][k]*b[k][j]
for l in result:
    print(l)    
        
  

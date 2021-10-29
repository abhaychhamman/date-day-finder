matrix=[]

row=[]

for i in range(3):
    for j in range(3):
        a=input(f"enter your {i} row {j} element")
        row.append(int(a))
    matrix.append(row)
    row=[]
print(matrix)
mag=matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])-matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])+matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0])
 
a=[]
b=[]
z=33
p=0
if mag==0:
    print("inverse is :0")
else:

    for n in range(3):

        for m in range(3):
             
            if str(n)+str(m)=="00":
                 a.insert(0,matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])
            if str(n)+str(m)=="01":
                 a.insert(1,-(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0]))

            if str(n)+str(m)=="02":
                 a.insert(2,matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0])

            if str(n)+str(m)=="10":
                 a.insert(0,-(matrix[0][1]*matrix[2][2]-matrix[0][2]*matrix[2][1]))
            if str(n)+str(m)=="11":
                 a.insert(1,matrix[0][0]*matrix[2][2]-matrix[0][2]*matrix[2][0])

            if str(n)+str(m)=="12":
                 a.insert(2,-(matrix[0][0]*matrix[2][1]-matrix[0][1]*matrix[2][0]))

            if str(n)+str(m)=="20":
                 a.insert(0,matrix[0][1]*matrix[1][2]-matrix[0][2]*matrix[1][1])
            if str(n)+str(m)=="21":
                 a.insert(1,-(matrix[0][0]*matrix[1][2]-matrix[0][2]*matrix[1][0]))

            if str(n)+str(m)=="22":
                 a.insert(2,matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0])

            if len(a)%3==0:
                b.append(a)
                
                a=[]

    k=[]
     
    print("inverse is :\n")
    for i in range(3):
        for j in range(3):
            v=b[j][i]/mag
            f=""
            if len(str(v))>5:
                for e in range(6):
                    f+=str(v)[e]
            else:
                f=str(v)
            a.append(f)
        k.append(a)
        a=[]
        print(k[i])





    




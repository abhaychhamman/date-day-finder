dic={
    
    'a':[2,64,5,4],
    'b':[2,4,5,84],
    'c':[21,34,5,4],
    'd':[2,14,51,4]

    
}
res=0
 

for val in dic.items():
    for ele in val[1]:
        res=res+ele
print(res)

# unique element sum
# res=list({ele for val in dic.values() for ele in val})
# print(sum(res))
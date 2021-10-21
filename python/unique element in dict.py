dic={
    
    'a':[2,64,5,4],
    'b':[2,4,5,84],
    'c':[21,34,5,4],
    'd':[2,14,51,4]

    
}

# first method

# res=list({ele for val in dic.values() for ele in val})
# print(sorted(res))


# second method

res=[]
for val in dic.values():
    for ele in val:
        if res.count(ele)<1:
            res.append(ele)
print(sorted(res))
    
 
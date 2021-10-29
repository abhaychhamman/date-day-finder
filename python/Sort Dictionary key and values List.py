dict1= {
    "name":["abhay","akasj","rani"],
    "age":[20,30,40]
    }

res=dict()
for i in dict1:
    res[i]=list(sorted(dict1[i]))
print(res)
dict1= {
    "name":["abhay","akasj","rani"],
    "age":[20,30,40]
    }
  
res=dict(zip(dict1['age'],dict1['name']))
print(res)
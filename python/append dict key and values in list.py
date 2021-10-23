from itertools import chain
dict1= {
    "name":["abhay","akasj","rani"],
    "age":[20,30,40]
    }
res=list(chain(dict1.keys(),dict1.values()))
print(res)
  
  
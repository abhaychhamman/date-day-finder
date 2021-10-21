from operator import itemgetter

lis=[
    {
    "name":"abhay",
    "age":20
    },
       {
    "name":"abay",
    "age":24
    },
       {
    "name":"abhy",
    "age":21
    },
       {
    "name":"abha",
    "age":28
    },
     
     ]


print(sorted(lis,key=lambda i:i['age'],reverse=False))

print(sorted(lis,key=lambda i:(i['age'],i['name']),reverse=False))
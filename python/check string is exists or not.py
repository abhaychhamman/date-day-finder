# first method
# def check(s,subs):
#     if s.find(subs)==-1:
#         print("not exists")
#     else:
#         print("exists")
    

# str="this is abhay"
# sstr="thas"
# check(str,sstr)

# second method
# def check(s,subs):
#     if s.count(subs)>0:
#         print("exists")
#     else:
#         print("not exists")

# str="this is abhay"
# sstr="thas"
# check(str,sstr)

#third method


import re

def check(s,subs):
    if re.search(subs,s):
        print("this string '{0}' is  present in '{1}'".format(subs,s))
    else:
        print("this string '{0}' is not present in '{1}'".format(subs,s))

str="this is abhay"
sstr="this"
check(str,sstr)
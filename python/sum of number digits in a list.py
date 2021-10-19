lst=[21,22,42,42,44]
new_lst=[]
for i in lst:
    digits=0
    for j in str(i):
        j=int(j)
        digits=digits+j
    new_lst.append(digits)
print(new_lst)

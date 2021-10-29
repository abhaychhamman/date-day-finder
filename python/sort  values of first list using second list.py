x=["abhay ","akash","ali","ram","narayan","kishan","sharma","ramji","sanju"]
y=[0,1,2,3,2,4,2,4,3]
def sorted_list(x,y):
    zipped=zip(y,x)
    z=[x for _,x in sorted(zipped)]
    return z
    
print(sorted_list(x,y))
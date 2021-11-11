print("Hi! EveryOne")
graph=[6,0,0,4,3,2]
adder=0
pos_area=[]
 
for i in range(max(graph)):
    for j in range(len(graph)):
        if graph[j]<=i:
            pos_area.append(adder* (i+1))
            adder=0
        else:
            if graph[j]>i:
              adder+=1         
    if adder!=0:
        pos_area.append(adder*(i+1))
    adder=0


print("Your max area in graph is :",max(pos_area))
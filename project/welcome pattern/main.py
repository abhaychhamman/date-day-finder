from xmlrpc.client import boolean

from rx import start

def printpat(value):
    for i in range(0,value):
        print(".|.",end="")


def printfor(value,ch):
     for i in range(0,int(value)):
        print(ch,end="")
        


def printwel(l):
    dcount=(l-7)/2
    printfor(dcount,"-")
    print("WELCOME",end="")
    printfor(dcount,"-")
    print("\n")

n,k=33,11
# assign n value in beacuase do the change value of n

i=1
a=False
 
while(i>=0 ):
  
    
    m=n-(i*3)
    # print(,n,n/2,m-n-3)
    printfor(m/2,"-")
    printpat(i)
    printfor(m/2,"-")
    print("\n")
    



    if m==6 and a==False:
        a=True
        n=33
        i=11
        printwel(n)

    if a ==True:
        i=i-2

    else:
        i=i+2

     
     
 



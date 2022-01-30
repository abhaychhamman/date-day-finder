from string import ascii_lowercase as chars
 
def print_rangoli(n):
  
  heap =  [(('*'.join(chars[i:n])[::-1]+'*'.join(chars[i:n])[1:])).center(4*n-3, '-')  for i in range(n)  ]
#   print(*(heap[::-1]+heap[1:]))
  heap=heap[::-1]+heap[1:]
  for j in heap:
      print(j)


   
  
 

print_rangoli(20)
 
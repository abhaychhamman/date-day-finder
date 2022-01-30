n = int(input())
s = set(map(int, input().split())) 

for i in range(int(input())):
  try:
    eval('s.{0}({1})'.format(*input().split()+['']))

  except:
    # print("None")
    pass
print(sum(s))
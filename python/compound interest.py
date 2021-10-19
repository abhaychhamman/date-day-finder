import math
Amount=int(input('enter your money want to loan for compound interest?'))
years=int(input('how many years want to loan?'))
rate=int(input('please enter your rate for 1 year?'))
cal=Amount*((1+rate/100)**years)
print(f'your compound  interest is:{cal}')
 
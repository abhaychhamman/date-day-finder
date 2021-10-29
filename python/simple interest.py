Amount=int(input('enter your money want to loan?'))
years=int(input('how many years want to loan?'))
rate=int(input('please enter your rate for 1 year?'))
si=(Amount*rate*years)/100
print(f'your simple interest is:{si}')
rtpaymant=si+Amount
print(f'returning money is:{rtpaymant}')
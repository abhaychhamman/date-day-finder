country_code={
    
    'india':'122',
     'pakistan':'124',
      'newzeland':'112',
       'england':'132',
        'japan':'182',
        
}

# first method

# print(country_code.get('ja','not found'))


# second  method

country_code.setdefault('indi','not found')

print(country_code['indi'])
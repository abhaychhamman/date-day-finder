dic={
    
    'a':[2,64,5,4],
    'b':[2,4,5,84],
    'c':[21,34,5,4],
    'd':[2,14,51,4]

    
}


new_dic={key:val for key ,val in dic.items() if key!='a'}

 
print(new_dic)

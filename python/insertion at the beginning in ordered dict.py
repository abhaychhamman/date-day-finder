from collections import  OrderedDict
dictt=OrderedDict({('akshat',1),('nikhil',2)})
dictt.update({('abhay',2)})
dictt.move_to_end('abhay',last=False)
print(dictt)
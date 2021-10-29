from collections import  Counter
 
votes=['john','abhay','akash','ravi','ravi','ravi','abhay','john','abhay']
vote_count=Counter(votes)
max_votes=max(vote_count.values())
lst=[]
for i in vote_count.keys():
    
    if vote_count[i]==max_votes:
        lst.append(i)
 
print(sorted(lst)[0])
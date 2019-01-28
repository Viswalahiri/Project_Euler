##
 # 
 # Title:       Largest Prime Factor
 # Author:      Viswalahiri Swamy Hejeebu
 # GitHub:      https://github.com/Viswalahiri
 # LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 #  
 ##
 
import time
import math
import sys
c=[]
def factor(bb):
    l=[]
    i=2
    counter=-1
    c=int(math.sqrt(bb))
    for i in range (1,c+2):
        if(bb%i==0):
            if(i<bb/i):
                l.append(i)
                l.append(bb//i)
    c=len(l)
    return (c)
start_time=time.time()
b=6
m=4
k=factor(6)
counter=0
while(counter==0):
    
    if(factor(b)>500):
        counter=1
    b=b+m
    m=m+1
print(b-m+1)
elapsed=time.time()-start_time
print(str(elapsed) +" seconds")
sys.exit()
#76576500

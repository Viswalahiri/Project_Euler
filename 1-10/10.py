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
s=0
def primed(g):
    global s
    i=2
    counter2=0
    k=math.sqrt(g)
    h=int(k)+2
    while(i<(h)):
        if(g%i==0):
            counter2=1
        i+=1
    if(counter2==0):
        s=g+s
#start_time=time.time()
for i in range (2,2000000):
    primed(i)
#elapsed=time.time()-start_time
print(s+2)
#print(str(elapsed) +" seconds")
#sys.exit()
#Output: 142913828922

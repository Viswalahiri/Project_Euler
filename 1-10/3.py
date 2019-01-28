##
 # 
 # Title:       Multiples of 3 and 5
 # Author:      Viswalahiri Swamy Hejeebu
 # GitHub:      https://github.com/Viswalahiri
 # LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 #  
 ##

import time
import math
import sys
l=[]
def prime(g):
    i=2
    counter2=0
    k=math.sqrt(g)
    h=int(k)+2
    while(i<(h)):
        if(g%i==0):
            counter2=1
        i+=1
    if(counter2==0):
        print(g)
        #elapsed=time.time()-start_time
        #print(str(elapsed) +" seconds")
        #sys.exit()
        
def factor(b):
    i=2
    counter=-1
    for i in range (1,b):
        if(b%i==0):
            if(i<b/i):
                l.append(i)
                l.append(b//i)
                counter+=2
            else:
                f=[]
                f=sorted(l)
                counter3=0
                lis=[]
                for i in range (0,counter):
                    if(((f[i]%6)+1==6) or ((f[i]%6)-1==0)):
                        lis.append(f[i])
                        counter3+=1
                while(counter3!=-1):
                    prime(lis[counter3-1])
                    counter3-=1
                break
#start_time=time.time()
c=factor(600851475143)
#Output 6857

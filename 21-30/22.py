##
 # 
 # Title:       Names Scores
 # Author:      Viswalahiri Swamy Hejeebu
 # GitHub:      https://github.com/Viswalahiri
 # LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 #  
 ##
 import time
def alphacount(string):
    strlen=len(string)
    summation=0
    for i in range (0,strlen):
        summation+=(ord(string[i])-64)
    return summation
start_time=time.time()
#Save the file given in the previous screen that says Project_Euler_22.txt in your computer.
in_file = open(r'C:\Users\HP\Desktop\Project Euler\Project_Euler_22.txt')
contents = in_file.read()
proper=contents[3:]
in_file.close()
lister=[]
counter=0
i=0
while(counter<len(proper)):
    subcount=0
    if(counter<len(proper)-1):
        while(proper[counter]!=','):
            subcount+=1
            counter+=1

        if(counter<len(proper)-1):
            lister.append(proper[counter-subcount:counter])
            i+=1
    counter+=1
score=0
print(lister[937])
for i in range (0,len(lister)):
    score+=((i+1)*alphacount(lister[i]))
    
print(score)
#elapsed=time.time()-start_time
#print(str(elapsed) +" seconds")
sys.exit()
# Output: 871198282

##
 # 
 # Title:       1000-digit Fibanocci
 # Author:      Viswalahiri Swamy Hejeebu
 # GitHub:      https://github.com/Viswalahiri
 # LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 #  
 ##
def fibs(dig):
    index=2
    a=1
    b=1
    c=a+b
    index+=1
    while(c<10**(dig-1)):
        c=a+b
        a=b
        b=c
        index+=1
    print(index-1)
fibs(1000)
#Output: 4782

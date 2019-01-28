##
 # 
 # Title:       Factorial digit sum
 # Author:      Viswalahiri Swamy Hejeebu
 # GitHub:      https://github.com/Viswalahiri
 # LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 #  
 ##
def fact(n):
    if(n!=1):
        return n*fact(n-1)
    else:
        return 1
c=fact(100)
s=0
while(c!=0):
    s+=c%10
    c=c//10
print(s)

#Output 648

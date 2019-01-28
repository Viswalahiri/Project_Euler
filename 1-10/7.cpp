/*
 * 
 * Title:       10001st Prime
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */
 
#include<iostream>
using namespace std;
int prime(unsigned long long n) 
{
   unsigned long long int i; 
   int flag = 0;
   for(i=2; i<=n/2; ++i) 
   {
      if(n%i==0) 
	  {
         flag=1;
         break;
      }
   }
   if (flag==0)
      return 1;
   else
      return 0;
}
int main()
{
	register unsigned long long i=2; 
	int c=10001;
	while(c!=0)
	{
		if(prime(i))
		c--;
		i++;
	}
	cout<<i-1<<endl;
}
//Output:104743

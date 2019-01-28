/*
 * 
 * Title:       Even Fibonacci numbers
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */
 
#include<iostream>
using namespace std;
int main()
{
	unsigned long long a=1;
	unsigned long long b=2;
	unsigned long long c;
	//sum=2 since 2 does isn't addresssed in the while statement below.
	unsigned long long sum=2;
	c=a+b;
	while(c<4000000)
	{
		//if c is even then add it to sum.
		if(c%2==0)
		{
			sum+=c;
		}
		//shifting the cycle of a,b and c forward by one step.
		a=b;
		b=c;
		c=a+b;
	}
	cout<<sum;
}
//Output: 4613732

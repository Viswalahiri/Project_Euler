/*
 * 
 * Title:       Longest Collatz sequence
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */

#include<iostream>
using namespace std;
int counter=0;
int max_counter=0;
int max_chain=0;
 unsigned long long odd(unsigned long long);
 unsigned long long even(unsigned long long n)
{
	n=n/2;
	counter++;
	if(n%2==0)
	{
		n=even(n);
	}
	else if(n!=1&&n%2==1)
	{
		n=odd(n);
	}
	else
	{
		return 1;
	}
}
unsigned long long odd(unsigned long long n)
{
	n=3*n+1;
	counter++;
	if(n%2==0)
	{
		n=even(n);
	}
	else 
	if(n!=1&&n%2==1)
	{
		n=odd(n);
	}
	else
	{
		return 1;
	}
}
int main()
{	
	unsigned long long int b;
	unsigned long long int a=1,result;
	while(a<1000000)
	{
		counter=0;
		b=a;
		if(b%2==0)
		{
			result=even(b);	
		}
		if(b%2==1)
		{
			result=odd(b);	
		}
		if(counter+1>max_counter)
		{
			max_counter=counter+1;	
			max_chain=b;
		}
		a++;
	}
	cout<<max_chain;
	return 0;
}

//Output 837799

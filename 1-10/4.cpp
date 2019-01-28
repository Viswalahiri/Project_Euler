/*
 * 
 * Title:       Largest palindrome product
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */
 
#include<iostream>
using namespace std;
//Checking for Palindrome funciton
int palindrome(register int c)
{
	int d=0;
	//since c changes throughout the program.
	int f=c;
	while(c>0)
	{
		d=d*10;
		d=d+(c%10);
		c=c/10;
	}
	if(d==f)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a=9999;
	int b=9999;
	register int k=0;
	for(register int i=a;i>0;i--)
	{
		for(register int j=b;j>0;j--)
		{
			if(palindrome(i*j)==1)
			{
				//k is to find the maximum palindrome.
				if(k<i*j)
					k=i*j;
			}
		}
	}
	cout<<k;
}
//Output: 906609

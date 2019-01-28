/*
 * 
 * Title:       Smallest multiple
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */
 
#include<iostream>
using namespace std;
int mult(long long int b)
{
	for(long long int i=20;i>1;i--)
	{
		if(b%i!=0)
		{
		return 0;
		}
		if(i==2)
		{
			return 1;
		}
	}
}
int main()
{
	long long int i=20;
	int k=0;
	int count=0;
	
	while(count==0)
	{
		if(mult(i)==1)
		{
			count=1;
			k=i;
		}
		i++;
	}
	cout<<k<<endl;
}

//Output: 232792560

/*
 * 
 * Title:       Special Pythagorean Triplet
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */
 
 #include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int n=1000;
	for(int i=1;i<1000;i++)
	{
		for(int j=1;j<1000;j++)
		{
			for(int k=1;k<1000;k++)
			{
				if((i*i+j*j==k*k)&&(i+j+k==n))
				{
					cout<<i*k*j<<endl;

				}
			}
		}
	}
}
//Output: 
//31875000
//31875000

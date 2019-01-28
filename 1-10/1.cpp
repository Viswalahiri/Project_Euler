/*
 * 
 * Title:       Multiples of 3 and 5
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */
 
#include <iostream>
using namespace std;
int main()
{
	register long long sum=0;
	register long long limit=999;
	//limit is taken as 1000-1
	while(limit>0)
	{
		if(limit%3==0||limit%5==0)
		{
	//add limit to sum if limit is a multiple.
			sum+=limit;
		}
	//decrement limit
		limit--;
	}
	cout<<sum<<endl;
}
//Output: 233168

/*
 * 
 * Title:       Multiples of 3 and 5
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri-hejeebu-45baa2155
 *  
 */
 
 #include<iostream>
using namespace std;
long long sum_of_square(int c)
{
	long long sum=0;
	for(long long i=1;i<c+1;i++)
	{
		sum+=i*i;
	}
	return sum;
}
long long square_of_sum(int c)
{
	long long sum=0;
	for(long long int i=1;i<c+1;i++)
	sum+=i;
	long long square=sum*sum;
	return square;
}
int main()
{
	int num=100;
	long long first=sum_of_square(num);
	long long second=square_of_sum(num);
	cout<<second-first<<endl;
}

//Output: 25164150

#include<iostream>
using namespace std;
long long power(long long x,long long n,int m)
{
	int res=1;
	while(n%2!=0)
	{
		res=(res*x)%m;
		x=(x*x)%m;
		n=n/2;
	}
	return res;
}
int main()
{
	long long n1=power(4,100,100);
	cout<<n1;
}

#include<iostream>
using namespace std;
bool divcount(int n)
{
	if(n==1)return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		
			return false;
			else 
			return true;
			
		
	}
}
int main()
{
	int num1;
	cin>>num1;
	divcount(num1);
	return 0;
}

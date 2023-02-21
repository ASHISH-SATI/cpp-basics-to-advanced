#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
	if(a>b)
	a=a-b;
	else
	b=b-a;
}
	return a;
	/*int res=min(a,b);
	while(res>0)
	{
		if(a%res==0&&b%res==0)
		{
			break;
		}
		res--;
	}
	return res;*/
}
int main()
{
	int n1,n2;
	cout<<"\n ENTER THE NUMBER"<<endl;
	cin>>n1>>n2;
	int n3=gcd(n1,n2);cout<<n3;
	return n3;
	
}


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i=1,f=1,number,num2=1,sum=1,st=0;
	cout<<"\n ERNTER NUMBER";
	cin>>number;
	cout<<st<<num2<<endl;
	for(int i=0;i<=number-2;i++)
	{
		sum=st+num2;	cout<<sum<<endl;
		st=num2;
		num2=sum;
		
	}
	
}

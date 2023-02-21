#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i=1,f=1,number;
	cout<<"\n ERNTER NUMBER";
	cin>>number;
	while(i<=number)
	{
		f=f*i;
		i++;
	}
	cout<<"\n factorial of the given number is"<<f;
}

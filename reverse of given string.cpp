#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	int count=0;
	char str[30];
	cout<<"\n enter string"<<endl;
	gets(str);
	int len=strlen(str);

	
	for( int i=0;i<len/2;i++)
	{
		char temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
	
	cout<<"\n reverse   of given string is"<<str<<endl;
	}


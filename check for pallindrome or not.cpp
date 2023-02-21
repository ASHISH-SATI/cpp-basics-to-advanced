#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	int count=0,flag=0;
	char str[30];
	cout<<"\n enter string"<<endl;
	gets(str);
	int len=strlen(str);

	
	for( int i=0;i<len/2;i++)
	{
		
		if(str[i]==str[len-i-1])
		
		{
			flag=1;
			break;
			
		}
	}
	
	if(flag==1)
	{
		cout<<"\n given string is pallindrome"<<endl;
	}
	else
	{
		cout<<"\n not a pallindrome"<<endl;
	}
	}


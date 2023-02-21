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
	for(int i=0;str[i]!='\0';i++)
	{
		if(isdigit(str[i]))
		{
			count++;
		}
	}
	cout<<"\n count of digits"<<count<<endl;
	}


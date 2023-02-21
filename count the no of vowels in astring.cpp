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
		if(str[i]=='A'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='o'||str[i]=='u'||str[i]=='a'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{count++;
		}
	}
	cout<<"\n count of vowels"<<count<<endl;
	}


#include<bits/stdc++.h>
using namespace std;
bool pallin(string &str,int start,int end)
{if(start>=end)return true;
	return(str[start]==str[end])&& pallin(str,start+1,end-1); 
}
int main()
{
	char str[30]="ashish";int n=strlen(str);
	if(pallin("ashish",0,n-1))
	cout<<"YES";
	else
	cout<<"NO" ;
	return 0;
}

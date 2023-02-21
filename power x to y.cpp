#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	int c=pow(x,y);
	int m=c%10;
	if(m==0)
	{
		return 0;
	}
	else
	{
		return m;
	}
}

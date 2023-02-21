#include<iostream>
using namespace std;
bool checkpallin(int n)
{
	int rev=0;
	int temp=n;
	while(n!=0)

{
int ld=temp%10;
rev=rev*10+ld;
temp=n/10;
}
return(rev==n);
}
int main()
{
	cout<<checkpallin(120)<<endl;
	return 0;
}

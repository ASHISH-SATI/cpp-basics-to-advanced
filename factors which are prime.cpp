#include <iostream>
using namespace std;
 int printdivisors(int n)
 {
 /*	if(n<=1)return ;
 	for(int i=2;i*i<=n;i++)
 	{
 		while(n%i==0)
 		{
 			cout<<i;
 			n=n/i;
		 }
	 }
	 if(n>1)
	 cout<<n;*/
	 for(int i=1;i*i<=n;i++)
	 {
	 	if(n%i==0)
	 	{
	 		cout<<i;
	 		
		 }
	 }
	 
 }
 int main()
 {
 	int a;
 	cout<<"ENTER THE VALUE "<<endl;
 	cin>>a;
 	int n1=printdivisors(a);
 	cout<<n1;
	
 	
 	
 }

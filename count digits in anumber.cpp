#include<iostream>
int countfact(int);
using namespace std;
 int main()
 {cout<<"enter digit"<<endl;          
 int a;
 cin>>a;
 int n2=countfact(a);
 cout<<n2;
 	
 }
 int countfact(int n)
 {   if(n==0)
 {
 	return 1;
 }
 return n*countfact(n-1);
}
 	/*int count=0;                
 	
	 
	 while(n!=0)
 	{
 		n=n/10;
 		++count;
 		
	 }
	 return count;
 }*/

#include<iostream>

using namespace std;
int add(int num1,int num2)
{
int sum;
sum=num1+num2;
return sum;	
}
int main()
{
	int n1=add(2,3);
	cout<<"the sum of the given numbers id "<<n1;;
	return 0;
}

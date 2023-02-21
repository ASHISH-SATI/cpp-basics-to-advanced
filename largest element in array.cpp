#include<iostream>
using namespace std;
int getlarge(int arr[],int n)
{
	int large=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[large])
		{
			large=i;
		}
	}
	return large;
}
int main()
{
	cout<<"ENTER ARRAY"<<endl;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<getlarge(arr,n);
}

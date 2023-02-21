#include<iostream>
using namespace std;
int secondlargest(int  arr[],int n)
{int secondlargest(int  arr[],int n)

	int res=-1,largest=0;
	for(int i=1;i<n;i++)
	{
		if(arr[largest]<arr[i])
		{
			largest=i;
		}
	
	else if(arr[i]!=arr[largest])
	{
		if(res==-1||arr[i]>arr[res])
		{
			res=i;
		}
	}
	return res;
}
int main()
{   int arr[n];
for(int i=0;i<n;i++){

cin>>n;
}
	int slarge=secondlargest(arr,n);
	return slarge;
}

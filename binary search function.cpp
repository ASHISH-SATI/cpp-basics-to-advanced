int binarysearch(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]<x)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}

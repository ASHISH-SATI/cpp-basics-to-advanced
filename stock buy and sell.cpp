#include<bits/stdc++.h>
using namespace std;

int maxprofit(int price[],int start,int end)
{
	if(end<=start)return 0;
	int profit=0;
	for(int i=start;i<end;i++)
	{
		for(int j=i+1;j<end;j++)
		{if(price[j]>price[i])
		{
				int curr_profit=price[j]-price[i]+maxprofit(price,start,i-1)+maxprofit(price,j+1,end);
			profit=max(price,curr_profit);
		}
			
		}
	}
	return profit;
}
int main()
{int n;
	int price[n];
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>price[i];
	}
	int p=maxprofit(price,n);
	return p;
}

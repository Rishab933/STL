//sum target

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cin>>target;
	
	int x,y=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==target)
			{
				x=i;
				y=j;
				break;
			}
		}
	}
	
	if(x==0 && y==0)
	{
		cout<<"Target sum not found"<<endl;
	}
	else
	{
		cout<<"Target sum is found : ["<<x<<","<<y<<"]"<<endl;
	}
	
	return 0;
}

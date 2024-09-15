//Target sum using map

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cin>>target;
	
	unordered_map<int,int> m;
	int left;
	int x=0;
	int y=0;
	for(int i =0;i<n;i++)
	{
		left = target-a[i];
		if(m.find(left)!=m.end())
		{
			x=m[left];
			y=i;
		}
		m[a[i]]=i;
	}
	
	if(x==0 && y==0)
	{
		cout<<"Target not found"<<endl;
	}
	else
	{
		cout<<"Target found at : ["<<x<<","<<y<<"]"<<endl;
	}
}

//given n int (can be duplicate) print the second smallest integer.
//if it does not exist, print -1

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v1(n);
	for(int i =0;i<n;i++)
	{
		cin>>v1[i];
	}
	
	set<int> set1;
	for(auto ele:v1)
	{
		set1.insert(ele);
	}
	int ans =-1;
	if(set1.size()<=1)
	{
		cout<<ans<<endl;
	}
	else
	{
		set<int> :: iterator itr=++(set1.begin());
		ans=*itr;
		cout<<ans<<endl;
	}
}

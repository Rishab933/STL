// longest subaaray length which is equal to 0.

#include<bits/stdc++.h>
using namespace std;

int maxlength(vector<int> &v)
{
	unordered_map<int,int> m;
	int prefix =0;
	int maxlength=0;
	for(int i=0;i<v.size();i++)
	{
		prefix=prefix+v[i];
		if(prefix==0)
		{
			maxlength++;
		}
		
		if(m.find(prefix)!=m.end())
		{
			maxlength=max(maxlength, i-m[prefix]);
		}
		else
		{
			m[prefix]=i;
		}
	}
	return maxlength;
}

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<maxlength(a)<<endl;
}

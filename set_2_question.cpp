//cherry birthday party --> set

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<string> invite;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		invite.insert(temp);
	}
	cout<<endl;
	for(auto name:invite)
	{
		cout<<name<<endl;
	}
}

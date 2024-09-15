//add the common elements

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	vector<int> v1(n);
	vector<int> v2(m);
	cout<<"Enter the elements in v1 : "<<endl;
	for(int i=0;i<n;i++) //input of v1
	{
		cin>>v1[i];
	}
	cout<<"Enter the elements in v2 : "<<endl;
	for(int i=0;i<m;i++) //input of v2
	{
		cin>>v2[i];
	}
	cout<<"v1 : "<<endl;
	for(auto temp:v1) //printing v1
	{
		cout<<temp<<" ";
	}
	cout<<endl<<"v2 : "<<endl;
	for(auto temp:v2) //printing v2
	{
		cout<<temp<<" ";
	}
	
	int ans=0;
	set<int> s1;
	for(auto temp:v1) //inserting v1 to s1 as a set 
	{
		s1.insert(temp);	
	}
	set<int> s2;
	for(auto temp:v2) //inserting common elements of v2 after comparing from s1 into s2
	{
		if(s1.find(temp)!=s1.end())
		{
			s2.insert(temp);
		}
	}
	for(auto temp:s2) //cal the sum of all the elements of s2 which is common element set
	{
		ans+=temp;
	}
	cout<<endl<<"The sum of common elements is : "<<ans<<endl;
}

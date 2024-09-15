// Given 2 strings s and t check isomorphic or not 
// one to one mapping
// s = egg
// t = add

#include<bits/stdc++.h>
using namespace std;

bool is_isomorphic(string s1, string s2)
{
	vector<int> v1(128,-1);
	vector<int> v2(128,-1);
	if(s1.size()!=s2.size())
	{
		return false;
	}
	else
	{
		for(int i=0;i<s1.size();i++)
		{
			if(v1[s1[i]] != v2[s2[i]])
			{
				return false;
			}
			v1[s1[i]] = v2[s2[i]] = i;
		}
		return true;
	}
	
}
int main()
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	if(is_isomorphic(str1,str2))
	{
		cout<<"isomorphic"<<endl;
	}
	else
	{
		cout<<"not isomorphic"<<endl;
	}
}

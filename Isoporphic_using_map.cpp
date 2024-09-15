//isomorphic string

#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string &s1, string &s2)
{
	int n1,n2;
	n1=s1.size();
	n2=s2.size();
	if(n1!=n2)
	{
		return false;
	}
	unordered_map<char,char> m;
	for(int i =0;i<n1;i++)
	{
		if(m.find(s1[i])!=m.end()) //it means present in the map
		{
			if(m[s1[i]]!=s2[i]) //it means mapping to another char
			{
				return false;
			}
		}
		else
		{
			m[s1[i]] = s2[i]; //if char is not there in the map then add it
		}
	}
}

int main()
{
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	
	bool x = isomorphic(s1,s2);
	bool y = isomorphic(s2,s1);
	if(x==true && y==true)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	
	return 0;
}

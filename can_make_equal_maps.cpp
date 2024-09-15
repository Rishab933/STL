//Make the strings equal
//to do this we have to check that each char should be in multiple of length of the array.

#include<bits/stdc++.h>
using namespace std;

bool CanMakeEqual(vector<string> &str)
{
	unordered_map<char,int> m;
	for(auto s:str)
	{
		for(char c:s)
		{
			m[c]++;
		}
	}
	
	int n = str.size();
	for(auto a:m)
	{
		if(a.second%n!=0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	vector<string> str(n);
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	
	bool x = CanMakeEqual(str);
	if(x == true)
	{
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}

//Anagarm2

#include<bits/stdc++.h>
using namespace std;

bool anagram(string &s1, string &s2)
{
	int n1 = s1.size();
	int n2 = s2.size();
	if(n1!=n2)
	{
		return false;
	}
	else
	{
		unordered_map<char,int> m;
		for(char c:s1){
			m[c]++;
		}
		
		for(char c:s2){
			if(m.find(c)==m.end())
			{
				return false;
			}
			else{
				m[c]--;
			}
		}
		
		for(auto x:m)
		{
			if(x.second!=0)
			{
				return false;
			}
		}
		
		return true;
	}
}

int main()
{
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	
	bool x = anagram(s1,s2);
	if(x==true)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	
	return 0;
}

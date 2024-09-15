//given an array of strings.
//Write a program to find the longest common prefix string 
//amongst an array of string.

//Input: arr = ["flower", "flight", "flash"]
//output: "fl"


// sorting is done is lexiographically 
// by this one we have to sort compare the first and the last string 
// to get the longest prefix

#include<bits/stdc++.h>
using namespace std;

string longestcommonprefix(vector<string> &str)
{
	sort(str.begin(), str.end());
	string s1 = str[0];
	int i =0;
	string s2 = str[str.size()-1];
	int j =0;
	string ans=" ";
	while(i<s1.size() && j<s2.size())
	{
		if(s1[i]==s2[j])
		{
			ans = ans+s1[i];
			i++;
			j++;
		}
		else
		{
			break;
		}
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the number of words you want to input: "<<endl;
	cin>>n;
	vector<string> str(n);
	cout<<"Enter the string "<<endl;
	for(int i =0;i<n;i++)
	{
		cin>>str[i];
	}
	cout<<"Longest common prefix is : "<<longestcommonprefix(str)<<endl;
}


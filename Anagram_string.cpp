// Anagram in a string

#include<bits/stdc++.h>
using namespace std;
bool is_anagram(string str1, string str2)
{
	vector<int> freq(26,0);
	//storing frequency of every character
	if(str1.length()!=str2.length())
	{
		return false;
	}
	else
	{
		for(int i=0;i<str1.length();i++)
	{
		int index = str1[i]-'a';
		freq[index]++;
	}
	for(int i=0;i<str2.length();i++)
	{
		int index = str2[i]-'a';
		freq[index]--;
	}
	for(int i=0;i<26;i++)
	{
		if(freq[i]!=0)
		{
			return false;
		}
	}
	return true;
	}
}

int main()
{
	string str1;
	cin>>str1;
	string str2;
	cin>>str2;
	if(is_anagram(str1,str2))
	{
		cout<<"String are anagram"<<endl;	
	}
	else
	{
		cout<<"String is not anagram"<<endl;
	}
}

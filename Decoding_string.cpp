//Input: 1[b]
//output: b

//Input: 3[b2[ca]]
//output: bcacabcacabcaca

#include<bits/stdc++.h>
using namespace std;
string decode(string str)
{
	int n = str.length();
	string result="";
	for(int i =0;i<n;i++)
	{
		if(str[i]!=']')
		{
			result.push_back(str[i]);
		}
		else
		{
			string s="";
			while(!result.empty() && result.back()!='['){//result.back() is used to get the last character of the string result
				s.push_back(result.back());	//to get the string in []
				result.pop_back(); // to to remove the string from the result
		}
		reverse(s.begin(),s.end());
		//removing the [ fro result
		result.pop_back();
		//extract num from result
		string num="";
		while(!result.empty() && (result.back()>='0' && result.back()<='9'))
		{
			num.push_back(result.back());
			result.pop_back();
		}
		reverse(num.begin(),num.end());
		
		int x = stoi(num); // converts num(string) to int;
		
		while(x)
		{
			result+=s;
			x--;
		}
	}
	}
	return result;
}

int main()
{
	string str;
	cout<<"Enter the string to decode: "<<endl;
	cin>>str;
	cout<<"The decoded string is: "<<decode(str)<<endl;
	return 0;
}

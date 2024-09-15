// Given a binary string and an integer k, return the maximun number of 
// consecutive 1's in the string if you can flip at most k 0's.
// input: "0001101011" k = 2
// output: 7

#include<bits/stdc++.h>
using namespace std;

int flip(string str, int k)
{
	// Applying Slinding Window
	int s=0;
	int e=0;
	int zero=0;
	int m=0;
	for(;e<str.length();e++)
	{
		if(str[e]=='0'){
			zero++;
		}
		while(zero>k)
		{
			if(str[s]=='0')
			{
				zero--;
			}
			s++;
		}
		m=max(m, e-s+1);
		
	}
	return m;
}

int main()
{
	string str;
	int k;
	cout<<"Enter the string: "<<endl;
	cin>>str;
	cout<<"Enter the value of k: "<<endl;
	cin>>k;
	cout<<"output: "<<flip(str,k)<<endl;
}

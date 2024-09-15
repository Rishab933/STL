// Sum of Repetative elements
// you are given an integer n, representing the number of elements. Then, you
//will be given n elements. you have to return the sum of repetitive element
// i.e. the element that appear more than one time

//Input: n=7  elements={1,1,2,1,3,3,3}

//Output = 4 (1+3)

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cout<<endl;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[a[i]]++;
	}
	
	int sum = 0;
	for(auto element:m)
	{
		if(element.second>1)
		{
			sum = sum+element.first;
		}
	}
	
	cout<<endl<<sum;
	
	return 0;
}

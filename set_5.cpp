// Unordered set : values will be stored in unordered fashion.
// unique values, values will be identified by itself and values can not be modified inside set.
// insertion, deletion, search of a values in done in O(1) --> const time
// hashing is used here.

#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<int> &set1) //function to print the values of the set.
{
	for(auto ele:set1)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
}

int main()
{
	unordered_set<int> set1;
	set1.insert(5);
	set1.insert(7);
	set1.insert(9);
	set1.insert(8);
	set1.insert(8);
	set1.insert(1);
	set1.insert(4);
	
	print(set1);
	
	set1.erase(1);
	print(set1);
	
	unordered_set<int> :: iterator itr;
	bool found=false;
	for(itr=set1.begin();itr!=set1.end();)
	{
		if(*itr==9)
		{
			itr=set1.erase(itr);
			found = true;
		}
		else
		{
			++itr;
		}
	}
	if(!found)
	{
		cout<<"element 9 is not there in the set."<<endl;
	}
	print(set1);
	
	unordered_set<int> :: iterator start=set1.begin();
	unordered_set<int> :: iterator end=set1.end();
	start=++start;
	set1.erase(start,end);
	print(set1);
	
	unordered_set<int> :: iterator f;
	f=set1.find(1);
	if(f!=set1.end())
	{
		cout<<"element found "<<endl;
	}
	else
	{
		cout<<"element not found"<<endl;
	}
	
	int x=set1.count(4);
	cout<<"element 4 has occoured "<<x<<" times"<<endl;
}

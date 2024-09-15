//Unordered multi set : allows duplicate values
// values are not ordered also.
//values are identified by itself and it can not be modified

#include<bits/stdc++.h>
using namespace std;
void print(unordered_multiset<int> &set1)
{
	for(auto ele:set1)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
}
int main()
{
	unordered_multiset<int> set1;
	set1.insert(5);
	set1.insert(7);
	set1.insert(2);
	set1.insert(1);
	set1.insert(9);
	set1.insert(3);
	set1.insert(3);
	set1.insert(5);
	set1.insert(5);
	print(set1);
	
	set1.erase(3);
	print(set1);
	
	int x = set1.count(5);
	cout<<"the count of element 5 is "<<x<<endl;
	
	bool found = false;
	for(auto ele:set1)
	{
		if(ele==2)
		{
			found =true;
		}
	}
		if(found==true)
		{
			cout<<"element found"<<endl;
		}
		else
		{
		cout<<"element not found"<<endl;
		}
	
}

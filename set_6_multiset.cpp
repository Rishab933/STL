// Multi set: it can store duplicate values
// the elements are store in ordered manner ascending or descending
// values will be identified by itself
// values can not be modified in a multi set

//set1.erase(x) --> will erase all the instances of x
//set1.find(x) --> it will return an itr to the first instance if found else the end itr
//set1.count(x) --> returns the count of the element x

#include<bits/stdc++.h>
using namespace std;

void print(multiset<int> &set1)
{
	for(auto ele:set1)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
}
int main()
{
	multiset<int /*,greater<int>*/ > set1;
	set1.insert(3);
	set1.insert(4);
	set1.insert(3);
	set1.insert(2);
	set1.insert(1);
	
	print(set1);
	
	
}

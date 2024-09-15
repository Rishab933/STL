#include<bits/stdc++.h>
using namespace std;

int main()
{
	multimap<string,int> dir;
	dir.insert(make_pair("Rishab",10000));
	dir.insert(make_pair("Tamal",20000));
	dir.insert(make_pair("Prateek",30000));
	dir.insert(make_pair("Mayank",40000));
	
	dir.insert(make_pair("Rishab",50000)); //inerting a pair with same key value to see it will store it or not.
	
	// dir["Rishi"] = 0; this way of inserting is not allowed in multimap. 
	
	for(auto pair:dir)
	{
		cout<<"name - "<<pair.first<<" phone - "<<pair.second<<endl;
	}

	return 0;
}

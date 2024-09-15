#include<bits/stdc++.h>
using namespace std;

 int main()
 {
 	map<string,int> dir; //creating a map
 	
 	dir["Rishab"] = 100; // inserting values in the map
 	dir["Mayank"] = 200;
 	dir["Rahul"] = 300;
 	
 	//To know the size of the map.
	int size = dir.size();
	cout<<"The size of the map is : "<<size<<endl;
 	
 	//To print the key-value pairs of the map
 	for(auto element:dir)
 	{
 		cout<<"Name - "<<element.first<<", value = "<<element.second<<endl;
	}cout<<endl;
	
	//To insert a new key-value pair in the map "dir"
	dir.insert(make_pair("Tamal",400));
	
	for(auto element:dir)
 	{
 		cout<<"Name - "<<element.first<<", value = "<<element.second<<endl;
	}cout<<endl;
	
	//To clear or empty the map
	dir.clear();
	dir.insert(make_pair("Tamal",400));
	for(auto element:dir)
 	{
 		cout<<"Name - "<<element.first<<", value = "<<element.second<<endl;
	}cout<<endl;
	
	//To check the map is empty or not
	int x = dir.empty();
	cout<<x<<endl; //if x = 1 then the map is empty.
	
	return 0;
 }

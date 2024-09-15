#include<bits/stdc++.h>
using namespace std;

class hashing
{
	vector<list<int>> hashtable; //each bucket is of type list
	int buckets; //to store the number of buckets in the hashtable
	
public:
	hashing(int size) //constructor
	{
		buckets = size;
		hashtable.resize(size);
	}
	
	int hashvalue(int key) // hash function
	{
		return key%buckets; //division method is used
	}
	
	void add(int key) // function to add akey in the hashtable
	{
		int idx = hashvalue(key);
		hashtable[idx].push_back(key);
	}
	
	list<int>::iterator search(int key) // to search and return an iterator
	// to the index where the key is present.
	{
		int idx = hashvalue(key);
		return find(hashtable[idx].begin(),hashtable[idx].end(),key);
	}
	
	void del(int key) // to delete the key from the hash table 
	// the iterator where the key is present will be returned by the search function.
	{
		int idx = hashvalue(key);
		if(search(key)!=hashtable[idx].end()) //the key is present
		{
			hashtable[idx].erase(search(key));
			cout<<key<<" is deleted."<<endl;
		}
		else
		{
			cout<<"key is not present in the hash table."<<endl;
		}
	}
	
};


int main()
{
	hashing h(10);
	h.add(5);
	h.add(9);
	h.add(3);
	
	h.del(3);
	h.del(3);
	
	return 0;
}

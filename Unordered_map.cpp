#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<int,string> record; //roll & name
	
	record.insert(make_pair(3,"Rishab"));
	record[1]="Mayank";
	record[2]="Tamal";
	
	for(auto pair:record)
	{
		cout<<"roll no - "<<pair.first<<" name - "<<pair.first<<endl;
	}
	
	return 0;
}

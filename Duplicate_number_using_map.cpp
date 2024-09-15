#include<bits/stdc++.h>
using namespace std;
bool find_duplicate(vector<int> n)
{
	map<int,bool> seen;
	for(int i =0;i<n.size();i++)
	{
		if(seen[n[i]] == true)
		return true;
		else
		seen[n[i]] = true;
	}
	return false;
}
int main()
{
	vector<int> num {1, 2, 3, 4, 5, 1};
	bool x = find_duplicate(num);
	if(x==1)
	cout<<"True"<<endl;
	else
	cout<<"False"<<endl;
}

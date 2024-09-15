#include<bits/stdc++.h>
using namespace std;

bool find_duplicate(vector<int> a)
{
	for(int i =0;i<a.size();i++)
	{
		for(int j =i+1;j<a.size();j++)
		{
			if(a[i]==a[j])
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	vector<int> num {1, 2, 3, 4, 5, 6};
	bool x = find_duplicate(num);
	if(x == 1)
	cout<<"True"<<endl;
	else
	cout<<"False"<<endl;
}

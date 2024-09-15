// All possible marks that can be scored
// n number of questions
// ans correct --> p-->+1
// ans incorrest --> q-->-1
// ans not given --> 0

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q;
	cin>>n>>p>>q;
	unordered_set<int> s;
	for(int i =0;i<=n;i++)
	{
		for(int j =0;j<=n;j++)
		{
			int correct = i;
			int incorrect = j;
			int unattended = n-i-j;
			
			if(unattended>=0)
			{
				int score = correct*p + incorrect*q;
				s.insert(score);
			}
			else
			{
				break;
			}
		}
	}
	for(auto ele:s)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
	cout<<"ans : "<<s.size()<<endl;
}

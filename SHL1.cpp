#include<bits/stdc++.h>
using namespace std;

int smallestStockPrice(vector<int> &stock, int valueK)
{
	int answer;
	list<int> a(stock.begin(),stock.end());
	a.sort();
	list<int>:: iterator it=a.begin();
	advance(it,valueK-1);
	answer=*it;
	
	return answer;
}

int main()
{
	int stock_size;
	cin>>stock_size;
	vector<int> stock;
	for(int idx=0;idx<stock_size;idx++)
	{
		int temp;
		cin>>temp;
		stock.push_back(temp);
	}
	
	int valueK;
	cin>>valueK;
	
	int result=smallestStockPrice(stock,valueK);
	cout<<result;
	
	return 0;
}

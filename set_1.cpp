 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	//Insertion in a set:
 	set<int> set1;
 	set1.insert(3);
  	set1.insert(4);
	set1.insert(2);
	set1.insert(1);
	set1.insert(6);
	set1.insert(7);
	set1.insert(5);
	
	cout<<"size of the set is : "<<set1.size()<<endl;
	
	set1.insert(3); //inserting a duplicate value
	cout<<"size of the set after inserting a duplicate value is : "<<set1.size()<<endl;
	// size remains the same because duplicate value is added.
	cout<<endl;
	
	//Traversal of a set:
	set<int>::iterator itr;
	for(itr=set1.begin();itr!=set1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	
	//Another way to traverse a set:
	for(auto value:set1) //auto keyword determines the data type of the elements by it self.
	{
		cout<<value<<" ";	
	}
	cout<<endl;
	
	//Deletion in a set:
	set1.erase(4); //deleting by directly passing the value.
	cout<<endl<<"After deletion : "<<endl;
	for(auto value:set1) 
	{
		cout<<value<<" ";	
	}
	cout<<endl;
	
	//deleting using an iterator:
	auto it = set1.begin();
	advance(it,3); //advance(what,step) --> now itr is pointing to the value 5.
	set1.erase(it);
	cout<<endl<<"After deletion : "<<endl;
	for(auto value:set1) 
	{
		cout<<value<<" ";	
	}
	cout<<endl;
	
	//delete a range from the set:
	auto start = set1.begin();
	start++; //pointing to the value 2
	auto end = set1.begin();
	advance(end,4); //pointing to the value 7
	set1.erase(start,end);
	cout<<endl<<"After deletion : "<<endl;
	for(auto value:set1) 
	{
		cout<<value<<" ";	
	}
	cout<<endl;
	
	//Search for a value in set:
	int n;
	cout<<endl;
	cin>>n;
	if(set1.find(n)!=set1.end())
	{
		cout<<"value is present in the set " <<endl;
	}
	else{
		cout<<"value is not present"<<endl;
	}
	
	//To check if the set is empty or not:
	//1->empty
	//0->not empty
	bool emp = set1.empty();
	cout<<endl<<"checking if the set is empty : "<<emp<<endl;
	
	//lower and upper bound:
	set1.insert(10);
	set1.insert(20);
	set1.insert(30);
	set1.insert(40);
	for(auto value:set1)
	{
		cout<<value<<" ";
	}
	cout<<endl;
	auto upper = set1.upper_bound(7);
	auto lower = set1.lower_bound(10);
	if(upper!=set1.end())
	{
		cout<<"upper bound of 7 is : "<<*upper<<endl;
	}
	else
	{
		cout<<"upper bound of 7 not found"<<endl;
	}
	if(lower!=set1.end())
	{
		cout<<"lower bound of 10 is : "<<*lower<<endl;
	}
	else
	{
		cout<<"lower bound of 10 not found"<<endl;
	}
	
	//rbegin and rend:
	auto rev_begin = set1.rbegin();
	auto rev_end = set1.rend();
	cout<<*rev_begin<<endl;
	cout<<*rev_end<<endl;
	
	//To clear or remove all the elements from the set
	set1.clear();
	cout<<endl<<"After removing all the values from the set the size of the set is :"<<set1.size()<<endl;
	cout<<endl;
 }

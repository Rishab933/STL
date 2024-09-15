#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	//Ways to store a string
	string str = "Rishab";
	string str1("Jaiswal");
	cout<<str<<" "<<str1<<endl;
	
	//String as a user input
	string a;
	cin>>a;
	cout<<a<<endl;
	
	//To store a line
	string b;
	getline(cin,b);
	cout<<b<<endl;
	
	//To get a char in a string
	cout<<b[0]<<endl;
	
	//To get the ascii value of a char
	char ch;
	cin>>ch;
	cout<<int(ch)<<endl;
	
	// String vs Character array
	// string is a class and string variable is an object of string class
	// string str_name;
	//Dynamic memory allocation.
	// have inbuild functions
	
	//array of character data type
	//char array_name[size];
	//static memory allocation;
	//unused allocated memory is wasted.
	// Faster than string
	
	//reverse(): to reverse a string from starting pointer to end pointer.
	//reverse(start,end)
	//O(n)
	string str= "hello";
	cout<<"Before reverse "<<str<<endl;
	reverse(str.begin(), str.end());
	cout<<"After reverse "<<str<<endl;
	
	//substr(): used to find substring(part) of a string
	//substr(position,length)
	//if length is not provided then position till the end will be taken.
	//O(n)
	string str="hello";
	cout<<str.substr(0,4)<<endl;
	cout<<str.substr(0)<<endl;
	
	//concatination of string
	string a = "Rishab";
	string b = "Jiaswal";
	cout<<a+b<<endl;
	a = b+a;
	cout<<a<<endl;
	
	// strcat(): used to concatinate two character arrays and stores the output in the first array.
	char a[20] = "Rishab";
	char b[20] = "Jaiswal";
	strcat(a,b);
	cout<<a<<endl;
	
	//push_back(): used to insert characters at the end of the string
	string str = "abcd";
	cout<<str<<endl;
	char c = 'e';
	str.push_back(c);
	cout<<str<<endl;
	
	//size() or length(): is used to get the length of the string
	string s = "Rishab";
	int a = s.size();
	int b = s.length();
	cout<<x<<endl;
	cout<<s<<endl;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;
	// for character array
	char ch[20] = "Rishab";
	int n = strlen(ch);
	cout<<ch<<" is of length : "<<n<<endl;
	
	//to_string(): it is used to convert numeric or integer value to string
	int num = 432;
	cout<<"num value: "<<num<<endl;
	string str = to_string(num);
	cout<<"Converted to string : "<<str<<endl;
	str = str+"1";
	cout<<"After adding 1 at the end "<<str<<endl;

	return 0;
}

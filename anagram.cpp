#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cout<<"enter what you want to print : ";
	cin>>s;
	string t;
	cout<<"enter what you want to print : ";
	cin>>t;
	cout<<s<<endl;
	cout<<t<<endl;
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	cout<<endl<<"Sorted : "<<endl;
	cout<<s<<endl;
	cout<<t<<endl;
	if(s==t)  cout<<"yes, it is anagram" ;
	else  cout<<"NO, it is not anagram" ;
}


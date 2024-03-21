#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cout<<"enter what you want to print : ";
	cin>>s;
	cout<<s<<endl;
	int n= s.length();
	sort(s.begin(), s.end());
	cout<<s;
}


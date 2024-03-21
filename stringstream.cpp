#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
	string s;
	cout<<"enter what you want to print : ";
	getline(cin, s);
	cout<<s<<endl;
	int n= s.length() ;
	stringstream ss(s) ;
	string temp;
	
	while(ss>>temp){
		cout<<temp<<endl;
	}
}


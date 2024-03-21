#include <iostream>
#include <string>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(){
	string s;
	cout<<"enter what you want to print : ";
	getline(cin, s);
	cout<<s<<endl;
	stringstream ss(s) ;
	string temp;
	vector<string>v;
	while(ss>>temp){
		v.push_back(temp);
	}
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
	sort(v.begin(), v.end());
	int n=v.size();
	cout<<endl<<" Sorted  : "<<endl;
	for(int i=0; i<n; i++){
		cout<<v[i]<<endl;
	}
	
	int maxcount=1;
	int count=1;
	for(int i=1; i<n; i++){
		if(v[i]==v[i-1])  count++;
		else count=1;
		maxcount=max(maxcount ,count);
	}
	for(int i=1; i<n; i++){
		if(v[i]==v[i-1])  count++;
		else count=1;
		if(count == maxcount){
			cout<<v[i]<<" : "<<maxcount<<endl;
		}
	}
}


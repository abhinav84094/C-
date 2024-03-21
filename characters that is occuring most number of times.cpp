#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cout<<"enter what you want to print : ";
	cin>>s;
	cout<<s<<endl;
	sort(s.begin(), s.end());
	cout<<endl<<"Sorted : "<<endl;
	cout<<s<<endl;
	int n= s.length() ;
	int max=0;
	for(int i=0; i<n; i++){
		char ch = s[i];
		int count=1;
		for(int j=i+1; j<n; j++){
			if(s[j]==s[i])  count++;
		}
		if(max<count)  max=count;
	}
	for(int i=0; i<n; i++){
		char ch = s[i];
		int count=1;
		for(int j=i+1; j<n; j++){
			if(s[j]==s[i])  count++;
		}
		if(count==max){
			cout<<ch<<" : "<<max<<endl;
		}
	}
}


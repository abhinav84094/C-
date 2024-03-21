#include <iostream>
using namespace std;
int main(){
	string s;
	cout<<"enter what you want to print : ";
	cin>>s;
	cout<<s<<endl;
	int n= s.length();
	cout<<"the number of alphabets : "<<n;
	int count=0;
	for(int i=0; i<n; i++){
		if(n==1){
			break;
		}
		if(n==2 && s[0]!=s[1]){
			count++;
			break;
		}
		if(i==0){
			if(s[i]!= s[i+1])  count++;
	}
		else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
			count++;
		}
		else if(i==n-1){
			if(s[i] != s[i-1]){
				count++ ;
			}
		}
	}
	cout<<"\nthe number of different neighbouring characters is : "<<count ;
}

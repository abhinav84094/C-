#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three numbers : ";
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<a<<" is greatest number "<<endl;
			if(b>c){
				cout<<b<<" greater number"<<endl;
			}
			else{
				cout<<c<<" is greater number"<<endl;
			}
		}
		else{
			cout<<c<<" is greatest number"<<endl;
			cout<<a<<" is greater number"<<endl;
		}
	}
	else{
		if(b>c){
			cout<<b<<" is greatest number"<<endl;
			if(c>a){
				cout<<c<<" is greater number"<<endl;
			}
			else {
				cout<<a<<" is greater number"<<endl;
			}
		}
		else{
			cout<<c<<" is greatest number"<<endl;
			cout<<b<<" is greater number"<<endl;
		}
	}
}

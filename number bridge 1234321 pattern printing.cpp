#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	for(int i=1; i<=n; i++){
			cout<<i<<" ";
	}
	for(int i=n-1; i>=1; i--){
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<j<<" ";
		}
		for(int j=1; j<=2*i-1; j++){
			cout<<" "<<" ";
		}
		for(int j=n-i; j>=1; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

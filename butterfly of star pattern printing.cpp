#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	int m=n-1;
	int nsp=2*m-1;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		for(int k=1; k<=nsp; k++){
			cout<<" ";
		}
		nsp-=2; 
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1; i<=2*n-1; i++){
		cout<<"*" ;
	}
	cout<<endl;
	for(int i=1; i<=2*n-1; i++){
		cout<<"*" ;
	}
	cout<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<"*" ;
		}
		for(int k=1; k<=2*i-1; k++){
			cout<<" " ;
		}
		for(int j=1; j<=n-i; j++){
			cout<<"*" ;
		}
		cout<<endl;
	}
}



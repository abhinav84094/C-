#include <iostream>
using namespace std ;
int main(){
	int i,a,n ;
	cout<<"enter terms: ";
	cin>>n ;
	a=3;
	for(i=1; i<=n; i++){
		cout<<a<<" " ;
		a=4*a ;
	}
}

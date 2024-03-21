#include <iostream>
using namespace std;
int sq(int x){
	int a ;
	for(int i=1; i<=x; i++){
		a=i*i ;
		cout<<a<<endl;
	}
}
int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	sq(n);

//	int a;
//	for(int i=1; i<=n; i++){
//		a=i*i ;
//		cout<<a<<endl;
}

	


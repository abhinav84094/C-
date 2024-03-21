#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n ;
	int fact=1 ;
	int i ;
	for(i=1; i<=n; i++){
		fact= fact*i ;
		cout<<fact<<endl ;
	}
}

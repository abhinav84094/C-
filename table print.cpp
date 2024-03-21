#include <iostream>
using namespace std ;
int main(){
	int i,x ;
	cout<<"enter the table number: ";
	cin>>x ;
	for(i=x; i<=x*10; i+=x){
		cout<<i<<endl ;
	}
}

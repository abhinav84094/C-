#include <iostream>
using namespace std;
int main(){
	int r, n,x;
	cout<<"enter a number: ";
	cin>>n ;
	int a=n;
	x=0;
	while(n>0){
		r=n%10 ;
		x=x*10 ;
		x= r+x ;
		n=n/10 ;
	}
	cout<<"the reverse of number "<<a<<" is : "<<x ;
}

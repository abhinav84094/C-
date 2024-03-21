#include <iostream>
using namespace std ;
int main(){
	int x;
	cout<<"enter a number : " ;
	cin>>x ;
	int n=x;
	int r=0 ;
	while(x>0){
		int ld= x%10 ;
		r=r*10 ;
		r= r+ld;
		x=x/10 ;
	}
	cout<<"reverse is : "<<r<<endl ;
	cout<<"the sum is : "<<r+n ;
}

#include <iostream>
using namespace std;
int main(){
	int x, n;
	cout<<"enter a number: ";
	cin>>n ;
	int a=n;
	x=0;
	while(n>0){
		n=n/10 ;
		x++ ;
	}
	if(a==0){
		cout<<"the number of digit is 1" ;
	}
	else{
		cout<<"the number of digit is: "<<x ;
	}
}

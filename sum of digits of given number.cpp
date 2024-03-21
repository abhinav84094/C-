#include <iostream>
using namespace std;
int main(){
	int r, n;
	cout<<"enter a number: ";
	cin>>n ;
	int a=n;
	int sum=0;
	while(n>0){
		r=n%10 ;
		sum= sum+r ;
		n=n/10 ;
	}
	cout<<"the sum of digits of "<<a<<" are: "<<sum ;
}

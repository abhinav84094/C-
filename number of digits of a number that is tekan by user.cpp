#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	int digit=0;
	while(n>0){
		n%=10 ;
		digit++;
	}
	cout<<digit;
}

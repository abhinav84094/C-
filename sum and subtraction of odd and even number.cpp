#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: " ;
	cin>>n;
	int sum;
	if(n%2==0){
		sum= -n/2 ;
	}
	else{
		sum= -(n/2)+n ;
	}
	cout<<"ans : "<<sum ;
}

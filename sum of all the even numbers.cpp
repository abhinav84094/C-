#include <iostream>
using namespace std ;
int main(){
	int x,i;
	cout<<"enter a number: " ;
	cin>>x;
	int sum=0 ;
	for(i=1 ; i<=x; i++){
		if(i%2==0){
			sum=sum+i ; 
		}
	}
	cout<<sum ;
}

#include <iostream>
using namespace std ;
int main(){
	int x;
	cout<<"enter a number : ";
	cin>>x;
	int sum=0 ;
	while(x>0){
		int ld=x%10 ;
		if(ld%2==0){
			sum=sum+ld ;
		}
		x=x/10 ;
	}
	cout<<sum ;
}

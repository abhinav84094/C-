#include <iostream>
using namespace std;
int main(){
	int n,j,c ;
	cout<<"enter a number: " ;
	cin>>n ;
	c=0 ;
	for(j=1; j<=n; j++){
		if(n%j==0){
			c++ ;
		}
	}
	if(c==2){
		cout<<n<<" is a prime number" ;
	}
	else{
		cout<<n<<" is not a prime number" ;
	}
}

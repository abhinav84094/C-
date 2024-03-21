#include <iostream>
using namespace std;
int main(){
	int n,power;
	cout<<"enter a number: " ;
	cin>>n;
	cout<<"enter exponent: "; 
	cin>>power ;
	bool flag=true ;
	if(power<0){
		flag= false ;
		power=-power ;
	}
	int i;
	float ans=1;
	for(i=1; i<=power; i++){
		ans= ans*n ;
	}
	if(flag==false){
		ans=1/ans ;
		power=-power ;
	}
	if(n==0 && power==0){
		cout<<"not defined" ;
	}
	else{
		cout<<n<<" raised to the power "<<power<<" is "<<ans ;
	}
}

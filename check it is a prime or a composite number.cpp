#include <iostream>
using namespace std;
int main(){
	int n ;
	cout<<"enter a number: " ;
	cin>>n ;
	bool flag=true ;
	int i;
	for(i=2; i<n-1; i++){
		if(n%i==0){
			flag=false ;
			break;
		}
	}
	if(flag==true){
		cout<<n<<" is a prime number" ;
	}
	else{
		cout<<n<<" is a composite number" ;
	}
}

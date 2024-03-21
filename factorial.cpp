#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: " ;
	cin>>n;
	int i;
	int a=1;
	for(i=n; i>=1; i--){
		a= a*i ;	
	}
	cout<<"the factorial of "<<n<<" is : "<<a ;
}

#include <iostream>
using namespace std ;
int main(){
	int i, x, y ;
	cout<<"enter a number where you start to odd number: " ;
	cin>>x; 
	cout<<"enter a number where you end the odd number: " ;
	cin>>y;
	for(i=x; i<=y; i++){
		if(i%2!=0){
			cout<<i<<endl;
		}
	}
}

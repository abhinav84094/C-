#include <iostream>
using namespace std;
int main(){
	int x ;
	cout<<"enter number of rows : " ;
	cin>>x;
	int i,j;
	for(i=x; i>=1; i--){
		for(j=i; j>=1; j--){
			cout<<"*" ;
		}
		cout<<"\n";
	}
}
